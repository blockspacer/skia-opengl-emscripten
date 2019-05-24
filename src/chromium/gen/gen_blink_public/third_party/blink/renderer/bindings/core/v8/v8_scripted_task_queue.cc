// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated from the Jinja2 template
// third_party/blink/renderer/bindings/templates/interface.cc.tmpl
// by the script code_generator_v8.py.
// DO NOT MODIFY!

// clang-format off
#include "third_party/blink/renderer/bindings/core/v8/v8_scripted_task_queue.h"

#include <algorithm>

#include "base/memory/scoped_refptr.h"
#include "third_party/blink/renderer/bindings/core/v8/script_promise.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_abort_signal.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_dom_configuration.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_task_queue_post_callback.h"
#include "third_party/blink/renderer/core/execution_context/execution_context.h"
#include "third_party/blink/renderer/platform/bindings/exception_messages.h"
#include "third_party/blink/renderer/platform/bindings/exception_state.h"
#include "third_party/blink/renderer/platform/bindings/runtime_call_stats.h"
#include "third_party/blink/renderer/platform/bindings/script_state.h"
#include "third_party/blink/renderer/platform/bindings/v8_object_constructor.h"
#include "third_party/blink/renderer/platform/runtime_enabled_features.h"
#include "third_party/blink/renderer/platform/scheduler/public/cooperative_scheduling_manager.h"
#include "third_party/blink/renderer/platform/wtf/get_ptr.h"

namespace blink {

// Suppress warning: global constructors, because struct WrapperTypeInfo is trivial
// and does not depend on another global objects.
#if defined(COMPONENT_BUILD) && defined(WIN32) && defined(__clang__)
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wglobal-constructors"
#endif
const WrapperTypeInfo v8_scripted_task_queue_wrapper_type_info = {
    gin::kEmbedderBlink,
    V8ScriptedTaskQueue::DomTemplate,
    nullptr,
    "ScriptedTaskQueue",
    nullptr,
    WrapperTypeInfo::kWrapperTypeObjectPrototype,
    WrapperTypeInfo::kObjectClassId,
    WrapperTypeInfo::kNotInheritFromActiveScriptWrappable,
};
#if defined(COMPONENT_BUILD) && defined(WIN32) && defined(__clang__)
#pragma clang diagnostic pop
#endif

// This static member must be declared by DEFINE_WRAPPERTYPEINFO in ScriptedTaskQueue.h.
// For details, see the comment of DEFINE_WRAPPERTYPEINFO in
// platform/bindings/ScriptWrappable.h.
const WrapperTypeInfo& ScriptedTaskQueue::wrapper_type_info_ = v8_scripted_task_queue_wrapper_type_info;

// not [ActiveScriptWrappable]
static_assert(
    !std::is_base_of<ActiveScriptWrappableBase, ScriptedTaskQueue>::value,
    "ScriptedTaskQueue inherits from ActiveScriptWrappable<>, but is not specifying "
    "[ActiveScriptWrappable] extended attribute in the IDL file.  "
    "Be consistent.");
static_assert(
    std::is_same<decltype(&ScriptedTaskQueue::HasPendingActivity),
                 decltype(&ScriptWrappable::HasPendingActivity)>::value,
    "ScriptedTaskQueue is overriding hasPendingActivity(), but is not specifying "
    "[ActiveScriptWrappable] extended attribute in the IDL file.  "
    "Be consistent.");

namespace scripted_task_queue_v8_internal {

static void PostTaskMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exception_state(info.GetIsolate(), ExceptionState::kExecutionContext, "ScriptedTaskQueue", "postTask");
  ExceptionToRejectPromiseScope reject_promise_scope(info, exception_state);

  // V8DOMConfiguration::kDoNotCheckHolder
  // Make sure that info.Holder() really points to an instance of the type.
  if (!V8ScriptedTaskQueue::HasInstance(info.Holder(), info.GetIsolate())) {
    exception_state.ThrowTypeError("Illegal invocation");
    return;
  }
  ScriptedTaskQueue* impl = V8ScriptedTaskQueue::ToImpl(info.Holder());

  ScriptState* script_state = ScriptState::ForRelevantRealm(info);

  if (UNLIKELY(info.Length() < 1)) {
    exception_state.ThrowTypeError(ExceptionMessages::NotEnoughArguments(1, info.Length()));
    return;
  }

  V8TaskQueuePostCallback* callback;
  AbortSignal* signal;
  if (info[0]->IsFunction()) {
    callback = V8TaskQueuePostCallback::Create(info[0].As<v8::Function>());
  } else {
    exception_state.ThrowTypeError("The callback provided as parameter 1 is not a function.");
    return;
  }

  if (!info[1]->IsUndefined()) {
    signal = V8AbortSignal::ToImplWithTypeCheck(info.GetIsolate(), info[1]);
    if (!signal) {
      exception_state.ThrowTypeError("parameter 2 is not of type 'AbortSignal'.");
      return;
    }
  } else {
    signal = nullptr;
  }

  ScriptPromise result = impl->postTask(script_state, callback, signal);
  V8SetReturnValue(info, result.V8Value());
}

}  // namespace scripted_task_queue_v8_internal

void V8ScriptedTaskQueue::PostTaskMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_ScriptedTaskQueue_postTask");

  scripted_task_queue_v8_internal::PostTaskMethod(info);
}

static constexpr V8DOMConfiguration::MethodConfiguration kV8ScriptedTaskQueueMethods[] = {
    {"postTask", V8ScriptedTaskQueue::PostTaskMethodCallback, 1, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kDoNotCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
};

static void InstallV8ScriptedTaskQueueTemplate(
    v8::Isolate* isolate,
    const DOMWrapperWorld& world,
    v8::Local<v8::FunctionTemplate> interface_template) {
  // Initialize the interface object's template.
  V8DOMConfiguration::InitializeDOMInterfaceTemplate(isolate, interface_template, V8ScriptedTaskQueue::GetWrapperTypeInfo()->interface_name, v8::Local<v8::FunctionTemplate>(), V8ScriptedTaskQueue::kInternalFieldCount);

  if (!RuntimeEnabledFeatures::WorkerTaskQueueEnabled()) {
    return;
  }

  v8::Local<v8::Signature> signature = v8::Signature::New(isolate, interface_template);
  ALLOW_UNUSED_LOCAL(signature);
  v8::Local<v8::ObjectTemplate> instance_template = interface_template->InstanceTemplate();
  ALLOW_UNUSED_LOCAL(instance_template);
  v8::Local<v8::ObjectTemplate> prototype_template = interface_template->PrototypeTemplate();
  ALLOW_UNUSED_LOCAL(prototype_template);

  // Register IDL constants, attributes and operations.
  V8DOMConfiguration::InstallMethods(
      isolate, world, instance_template, prototype_template, interface_template,
      signature, kV8ScriptedTaskQueueMethods, base::size(kV8ScriptedTaskQueueMethods));

  // Custom signature

  V8ScriptedTaskQueue::InstallRuntimeEnabledFeaturesOnTemplate(
      isolate, world, interface_template);
}

void V8ScriptedTaskQueue::InstallRuntimeEnabledFeaturesOnTemplate(
    v8::Isolate* isolate,
    const DOMWrapperWorld& world,
    v8::Local<v8::FunctionTemplate> interface_template) {
  if (!RuntimeEnabledFeatures::WorkerTaskQueueEnabled()) {
    return;
  }

  v8::Local<v8::Signature> signature = v8::Signature::New(isolate, interface_template);
  ALLOW_UNUSED_LOCAL(signature);
  v8::Local<v8::ObjectTemplate> instance_template = interface_template->InstanceTemplate();
  ALLOW_UNUSED_LOCAL(instance_template);
  v8::Local<v8::ObjectTemplate> prototype_template = interface_template->PrototypeTemplate();
  ALLOW_UNUSED_LOCAL(prototype_template);

  // Register IDL constants, attributes and operations.

  // Custom signature
}

v8::Local<v8::FunctionTemplate> V8ScriptedTaskQueue::DomTemplate(
    v8::Isolate* isolate, const DOMWrapperWorld& world) {
  return V8DOMConfiguration::DomClassTemplate(
      isolate, world, const_cast<WrapperTypeInfo*>(V8ScriptedTaskQueue::GetWrapperTypeInfo()),
      InstallV8ScriptedTaskQueueTemplate);
}

bool V8ScriptedTaskQueue::HasInstance(v8::Local<v8::Value> v8_value, v8::Isolate* isolate) {
  return V8PerIsolateData::From(isolate)->HasInstance(V8ScriptedTaskQueue::GetWrapperTypeInfo(), v8_value);
}

v8::Local<v8::Object> V8ScriptedTaskQueue::FindInstanceInPrototypeChain(
    v8::Local<v8::Value> v8_value, v8::Isolate* isolate) {
  return V8PerIsolateData::From(isolate)->FindInstanceInPrototypeChain(
      V8ScriptedTaskQueue::GetWrapperTypeInfo(), v8_value);
}

ScriptedTaskQueue* V8ScriptedTaskQueue::ToImplWithTypeCheck(
    v8::Isolate* isolate, v8::Local<v8::Value> value) {
  return HasInstance(value, isolate) ? ToImpl(v8::Local<v8::Object>::Cast(value)) : nullptr;
}

ScriptedTaskQueue* NativeValueTraits<ScriptedTaskQueue>::NativeValue(
    v8::Isolate* isolate, v8::Local<v8::Value> value, ExceptionState& exception_state) {
  ScriptedTaskQueue* native_value = V8ScriptedTaskQueue::ToImplWithTypeCheck(isolate, value);
  if (!native_value) {
    exception_state.ThrowTypeError(ExceptionMessages::FailedToConvertJSValue(
        "ScriptedTaskQueue"));
  }
  return native_value;
}

}  // namespace blink
