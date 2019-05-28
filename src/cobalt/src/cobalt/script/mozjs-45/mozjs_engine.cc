// Copyright 2016 The Cobalt Authors. All Rights Reserved.
//
// Licensed under the Apache License, Version 2.0 (the "License");
// you may not use this file except in compliance with the License.
// You may obtain a copy of the License at
//
//     http://www.apache.org/licenses/LICENSE-2.0
//
// Unless required by applicable law or agreed to in writing, software
// distributed under the License is distributed on an "AS IS" BASIS,
// WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
// See the License for the specific language governing permissions and
// limitations under the License.

#include "cobalt/script/mozjs-45/mozjs_engine.h"

#include <algorithm>
#include <memory>
#include <string>

#include "base/logging.h"
#include "base/message_loop/message_loop.h"
#include "base/trace_event/trace_event.h"
#include "cobalt/base/c_val.h"
#include "cobalt/browser/stack_size_constants.h"
#include "cobalt/script/mozjs-45/mozjs_global_environment.h"
#include "starboard/once.h"
#include "third_party/mozjs-45/cobalt_config/include/js-confdefs.h"
#include "third_party/mozjs-45/js/public/Initialization.h"
#include "third_party/mozjs-45/js/src/jsapi.h"
#include "third_party/mozjs-45/js/src/vm/Runtime.h"

namespace cobalt {
namespace script {

namespace mozjs {
namespace {

JSSecurityCallbacks security_callbacks = {
    MozjsGlobalEnvironment::CheckEval,  // contentSecurityPolicyAllows
    NULL,  // JSSubsumesOp - Added in SpiderMonkey 31
};

// DOM proxies have an extra slot for the expando object at index
// kJSProxySlotExpando.
// The expando object is a plain JSObject whose properties correspond to
// "expandos" (custom properties set by the script author).
// The exact value stored in the kJSProxySlotExpando slot depends on whether
// the interface is annotated with the [OverrideBuiltins] extended attribute.
const uint32_t kJSProxySlotExpando = 0;

// The DOMProxyShadowsCheck function will be called to check if the property for
// id should be gotten from the prototype, or if there is an own property that
// shadows it.
js::DOMProxyShadowsResult DOMProxyShadowsCheck(JSContext* context,
                                               JS::HandleObject proxy,
                                               JS::HandleId id) {
  DCHECK(IsProxy(proxy));
  JS::Value value = js::GetProxyExtra(proxy, kJSProxySlotExpando);
  DCHECK(value.isUndefined() || value.isObject());

  // [OverrideBuiltins] extended attribute is not supported.
  NOTIMPLEMENTED();

  // If DoesntShadow is returned then the slot at listBaseExpandoSlot should
  // either be undefined or point to an expando object that would contain the
  // own property.
  return js::DoesntShadow;
}

// Pretend we always preserve wrappers since we never call
// SetPreserveWrapperCallback anywhere else. This is necessary for
// TryPreserveReflector called by WeakMap to not crash. Disabling
// bindings to WeakMap does not appear to be an easy option because
// of its use in selfhosted.js. See bugzilla discussion linked where
// they decided to include a similar dummy in the mozjs shell.
// https://bugzilla.mozilla.org/show_bug.cgi?id=829798
bool DummyPreserveWrapperCallback(JSContext* cx, JSObject* obj) { return true; }

SbOnceControl g_js_init_once_control = SB_ONCE_INITIALIZER;

void CallShutDown(void*) { JS_ShutDown(); }

void CallInitAndRegisterShutDownOnce() {
  js::DisableExtraThreads();
  const bool js_init_result = JS_Init();
  CHECK(js_init_result);
  base::AtExitManager::RegisterCallback(CallShutDown, NULL);
}

void ReportErrorHandler(JSContext* context, const char* message,
                        JSErrorReport* report) {
  MozjsGlobalEnvironment* global_environment =
      MozjsGlobalEnvironment::GetFromContext(context);
  DCHECK(global_environment);
  global_environment->ReportError(message, report);
}

}  // namespace

MozjsEngine::MozjsEngine(const Options& options) : options_(options) {
  TRACE_EVENT0("cobalt::script", "MozjsEngine::MozjsEngine()");
  SbOnce(&g_js_init_once_control, CallInitAndRegisterShutDownOnce);

  // Set the nursery size to half of the GC threshold size. Analysis has shown
  // that allocating less than this does not reduce the total amount of JS
  // memory used, and allocating more does not provide performance improvements.
  constexpr size_t kMinMaxNurseryBytes = 1 * 1024 * 1024;
  uint32_t max_nursery_bytes =
      std::max(options_.gc_threshold_bytes / 2, kMinMaxNurseryBytes);

  runtime_ = JS_NewRuntime(options_.gc_threshold_bytes, max_nursery_bytes);
  CHECK(runtime_);

  // Sets the size of the native stack that should not be exceeded.
  // Setting three quarters of the web module stack size to ensure that native
  // stack won't exceed the stack size.
  JS_SetNativeStackQuota(runtime_,
                         cobalt::browser::kWebModuleStackSize / 4 * 3);

  JS_SetSecurityCallbacks(runtime_, &security_callbacks);

  // Use incremental garbage collection.
  JS_SetGCParameter(runtime_, JSGC_MODE, JSGC_MODE_INCREMENTAL);

  // Allow Spidermonkey to allocate as much memory as it needs. If this limit
  // is set we could limit the memory used by JS and "gracefully" restart,
  // for example.
  JS_SetGCParameter(runtime_, JSGC_MAX_BYTES, 0xffffffff);

  // Callback to be called whenever a JSContext is created or destroyed for this
  // JSRuntime.
  JS_SetContextCallback(runtime_, &MozjsEngine::ContextCallback, this);

  // Callback to be called at different points during garbage collection.
  JS_SetGCCallback(runtime_, &MozjsEngine::GCCallback, this);

#if defined(ENGINE_SUPPORTS_JIT)
  const bool enable_jit = true;
  js::SetDOMProxyInformation(NULL /*domProxyHandlerFamily*/,
                             kJSProxySlotExpando, DOMProxyShadowsCheck);
#else
  const bool enable_jit = false;
#endif
  JS::RuntimeOptionsRef(runtime_)
      .setUnboxedArrays(true)
      .setBaseline(enable_jit)
      .setIon(enable_jit)
      .setAsmJS(enable_jit)
      .setNativeRegExp(enable_jit);

  // Callback to be called during garbage collection during the sweep phase.
  JS_AddFinalizeCallback(runtime_, &MozjsEngine::FinalizeCallback, this);

  js::SetPreserveWrapperCallback(runtime_, DummyPreserveWrapperCallback);

  JS_SetErrorReporter(runtime_, ReportErrorHandler);
}

MozjsEngine::~MozjsEngine() {
  DCHECK(thread_checker_.CalledOnValidThread());
  JS_DestroyRuntime(runtime_);
}

scoped_refptr<GlobalEnvironment> MozjsEngine::CreateGlobalEnvironment() {
  TRACE_EVENT0("cobalt::script", "MozjsEngine::CreateGlobalEnvironment()");
  DCHECK(thread_checker_.CalledOnValidThread());
  return new MozjsGlobalEnvironment(runtime_);
}

void MozjsEngine::CollectGarbage() {
  TRACE_EVENT0("cobalt::script", "MozjsEngine::CollectGarbage()");
  DCHECK(thread_checker_.CalledOnValidThread());
  JS_GC(runtime_);
}

void MozjsEngine::AdjustAmountOfExternalAllocatedMemory(int64_t bytes) {
  DCHECK(thread_checker_.CalledOnValidThread());
  // |force_gc_heuristic_| is only incremented, never decremented.  See its
  // declaration in the header for details.
  force_gc_heuristic_ += (bytes > 0) ? bytes : 0;
  if (force_gc_heuristic_ > options_.gc_threshold_bytes) {
    force_gc_heuristic_ = 0;
    CollectGarbage();
  }
}

bool MozjsEngine::RegisterErrorHandler(ErrorHandler handler) {
  DCHECK(thread_checker_.CalledOnValidThread());
  error_handler_ = handler;
  return true;
}

HeapStatistics MozjsEngine::GetHeapStatistics() {
  DCHECK(thread_checker_.CalledOnValidThread());
  // There is unfortunately no easy way to get used vs total in SpiderMonkey,
  // so just return total bytes allocated for both.
  size_t total_heap_size = MemoryAllocatorReporter::Get()->GetTotalHeapSize();
  return {total_heap_size, total_heap_size};
}

// static
bool MozjsEngine::ContextCallback(JSContext* context, unsigned context_op,
                                  void* data) {
  JSRuntime* runtime = JS_GetRuntime(context);
  MozjsEngine* engine = reinterpret_cast<MozjsEngine*>(data);
  DCHECK(engine->thread_checker_.CalledOnValidThread());
  if (context_op == JSCONTEXT_NEW) {
    DCHECK(engine->context_ == nullptr);
    engine->context_ = context;
  } else if (context_op == JSCONTEXT_DESTROY) {
    DCHECK(engine->context_ == context);
    engine->context_ = nullptr;
  }
  return true;
}

// static
void MozjsEngine::GCCallback(JSRuntime* runtime, JSGCStatus status,
                             void* data) {
  MozjsEngine* engine = reinterpret_cast<MozjsEngine*>(data);
  if (status == JSGC_END) {
    engine->force_gc_heuristic_ = 0;
  }
  if (!engine->context_) {
    return;
  }
  MozjsGlobalEnvironment* global_environment =
      MozjsGlobalEnvironment::GetFromContext(engine->context_);
  if (status == JSGC_BEGIN) {
    TRACE_EVENT_BEGIN0("cobalt::script", "SpiderMonkey Garbage Collection");
    global_environment->BeginGarbageCollection();
  } else if (status == JSGC_END) {
    global_environment->EndGarbageCollection();
    TRACE_EVENT_END0("cobalt::script", "SpiderMonkey Garbage Collection");
  }
}

// static
void MozjsEngine::FinalizeCallback(JSFreeOp* free_op, JSFinalizeStatus status,
                                   bool is_compartment, void* data) {
  TRACE_EVENT0("cobalt::script", "MozjsEngine::FinalizeCallback()");
  MozjsEngine* engine = reinterpret_cast<MozjsEngine*>(data);
  DCHECK(engine->thread_checker_.CalledOnValidThread());
  if (status == JSFINALIZE_GROUP_START && engine->context_) {
    MozjsGlobalEnvironment* global_environment =
        MozjsGlobalEnvironment::GetFromContext(engine->context_);
    global_environment->DoSweep();
  }
}

}  // namespace mozjs

// static
std::unique_ptr<JavaScriptEngine> JavaScriptEngine::CreateEngine(
    const JavaScriptEngine::Options& options) {
  TRACE_EVENT0("cobalt::script", "JavaScriptEngine::CreateEngine()");
  return std::unique_ptr<JavaScriptEngine>(new mozjs::MozjsEngine(options));
}

std::string GetJavaScriptEngineNameAndVersion() {
  return std::string("mozjs/") + MOZILLA_VERSION;
}

}  // namespace script
}  // namespace cobalt
