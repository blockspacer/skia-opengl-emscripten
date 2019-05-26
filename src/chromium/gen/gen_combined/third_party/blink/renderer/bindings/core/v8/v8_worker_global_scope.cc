// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated from the Jinja2 template
// third_party/blink/renderer/bindings/templates/interface.cc.tmpl
// by the script code_generator_v8.py.
// DO NOT MODIFY!

// clang-format off
#include "third_party/blink/renderer/bindings/core/v8/v8_worker_global_scope.h"

#include <algorithm>

#include "base/memory/scoped_refptr.h"
#include "third_party/blink/renderer/bindings/core/v8/idl_types.h"
#include "third_party/blink/renderer/bindings/core/v8/js_event_handler.h"
#include "third_party/blink/renderer/bindings/core/v8/native_value_traits_impl.h"
#include "third_party/blink/renderer/bindings/core/v8/script_promise.h"
#include "third_party/blink/renderer/bindings/core/v8/script_value.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_blob.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_dom_configuration.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_font_face_set.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_frame_request_callback.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_function.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_html_canvas_element.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_html_image_element.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_html_video_element.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_image_bitmap.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_image_bitmap_options.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_image_data.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_offscreen_canvas.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_request.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_request_init.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_svg_image_element.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_trusted_script.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_trusted_script_url.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_trusted_type_policy_factory.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_void_function.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_worker_global_scope.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_worker_location.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_worker_navigator.h"
#include "third_party/blink/renderer/core/execution_context/execution_context.h"
#include "third_party/blink/renderer/core/fetch/global_fetch.h"
#include "third_party/blink/renderer/core/frame/window_or_worker_global_scope.h"
#include "third_party/blink/renderer/core/inspector/console_message.h"
#include "third_party/blink/renderer/core/timing/worker_global_scope_performance.h"
#include "third_party/blink/renderer/platform/bindings/exception_messages.h"
#include "third_party/blink/renderer/platform/bindings/exception_state.h"
#include "third_party/blink/renderer/platform/bindings/runtime_call_stats.h"
#include "third_party/blink/renderer/platform/bindings/script_state.h"
#include "third_party/blink/renderer/platform/bindings/v8_object_constructor.h"
#include "third_party/blink/renderer/platform/bindings/v8_per_context_data.h"
#include "third_party/blink/renderer/platform/bindings/v8_private_property.h"
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
WrapperTypeInfo v8_worker_global_scope_wrapper_type_info = {
    gin::kEmbedderBlink,
    V8WorkerGlobalScope::DomTemplate,
    nullptr,
    "WorkerGlobalScope",
    V8EventTarget::GetWrapperTypeInfo(),
    WrapperTypeInfo::kWrapperTypeObjectPrototype,
    WrapperTypeInfo::kObjectClassId,
    WrapperTypeInfo::kInheritFromActiveScriptWrappable,
};
#if defined(COMPONENT_BUILD) && defined(WIN32) && defined(__clang__)
#pragma clang diagnostic pop
#endif

// This static member must be declared by DEFINE_WRAPPERTYPEINFO in WorkerGlobalScope.h.
// For details, see the comment of DEFINE_WRAPPERTYPEINFO in
// platform/bindings/ScriptWrappable.h.
const WrapperTypeInfo& WorkerGlobalScope::wrapper_type_info_ = v8_worker_global_scope_wrapper_type_info;

// [ActiveScriptWrappable]
static_assert(
    std::is_base_of<ActiveScriptWrappableBase, WorkerGlobalScope>::value,
    "WorkerGlobalScope does not inherit from ActiveScriptWrappable<>, but specifying "
    "[ActiveScriptWrappable] extended attribute in the IDL file.  "
    "Be consistent.");
static_assert(
    !std::is_same<decltype(&WorkerGlobalScope::HasPendingActivity),
                  decltype(&ScriptWrappable::HasPendingActivity)>::value,
    "WorkerGlobalScope is not overriding hasPendingActivity(), but is specifying "
    "[ActiveScriptWrappable] extended attribute in the IDL file.  "
    "Be consistent.");

namespace worker_global_scope_v8_internal {

static void SelfAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  WorkerGlobalScope* impl = V8WorkerGlobalScope::ToImpl(holder);

  V8SetReturnValueFast(info, WTF::GetPtr(impl->self()), impl);
}

static void LocationAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  WorkerGlobalScope* impl = V8WorkerGlobalScope::ToImpl(holder);

  WorkerLocation* cpp_value(WTF::GetPtr(impl->location()));

  // Keep the wrapper object for the return value alive as long as |this|
  // object is alive in order to save creation time of the wrapper object.
  if (cpp_value && DOMDataStore::SetReturnValue(info.GetReturnValue(), cpp_value))
    return;
  v8::Local<v8::Value> v8_value(ToV8(cpp_value, holder, info.GetIsolate()));
  V8PrivateProperty::GetSymbol(
      info.GetIsolate(), "KeepAlive#WorkerGlobalScope#location")
      .Set(holder, v8_value);

  V8SetReturnValue(info, v8_value);
}

static void OnerrorAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  WorkerGlobalScope* impl = V8WorkerGlobalScope::ToImpl(holder);

  EventListener* cpp_value(WTF::GetPtr(impl->onerror()));

  V8SetReturnValue(info, JSEventHandler::AsV8Value(info.GetIsolate(), impl, cpp_value));
}

static void OnerrorAttributeSetter(
    v8::Local<v8::Value> v8_value, const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Isolate* isolate = info.GetIsolate();
  ALLOW_UNUSED_LOCAL(isolate);

  v8::Local<v8::Object> holder = info.Holder();
  ALLOW_UNUSED_LOCAL(holder);

  WorkerGlobalScope* impl = V8WorkerGlobalScope::ToImpl(holder);

  // Prepare the value to be set.

  impl->setOnerror(JSEventHandler::CreateOrNull(v8_value, JSEventHandler::HandlerType::kOnErrorEventHandler));
}

static void OnlanguagechangeAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  WorkerGlobalScope* impl = V8WorkerGlobalScope::ToImpl(holder);

  EventListener* cpp_value(WTF::GetPtr(impl->onlanguagechange()));

  V8SetReturnValue(info, JSEventHandler::AsV8Value(info.GetIsolate(), impl, cpp_value));
}

static void OnlanguagechangeAttributeSetter(
    v8::Local<v8::Value> v8_value, const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Isolate* isolate = info.GetIsolate();
  ALLOW_UNUSED_LOCAL(isolate);

  v8::Local<v8::Object> holder = info.Holder();
  ALLOW_UNUSED_LOCAL(holder);

  WorkerGlobalScope* impl = V8WorkerGlobalScope::ToImpl(holder);

  // Prepare the value to be set.

  impl->setOnlanguagechange(JSEventHandler::CreateOrNull(v8_value, JSEventHandler::HandlerType::kEventHandler));
}

static void NavigatorAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  WorkerGlobalScope* impl = V8WorkerGlobalScope::ToImpl(holder);

  WorkerNavigator* cpp_value(WTF::GetPtr(impl->navigator()));

  // Keep the wrapper object for the return value alive as long as |this|
  // object is alive in order to save creation time of the wrapper object.
  if (cpp_value && DOMDataStore::SetReturnValue(info.GetReturnValue(), cpp_value))
    return;
  v8::Local<v8::Value> v8_value(ToV8(cpp_value, holder, info.GetIsolate()));
  V8PrivateProperty::GetSymbol(
      info.GetIsolate(), "KeepAlive#WorkerGlobalScope#navigator")
      .Set(holder, v8_value);

  V8SetReturnValue(info, v8_value);
}

static void AddressSpaceAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  WorkerGlobalScope* impl = V8WorkerGlobalScope::ToImpl(holder);

  V8SetReturnValueString(info, impl->addressSpaceForBindings(), info.GetIsolate());
}

static void OnrejectionhandledAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  WorkerGlobalScope* impl = V8WorkerGlobalScope::ToImpl(holder);

  EventListener* cpp_value(WTF::GetPtr(impl->onrejectionhandled()));

  V8SetReturnValue(info, JSEventHandler::AsV8Value(info.GetIsolate(), impl, cpp_value));
}

static void OnrejectionhandledAttributeSetter(
    v8::Local<v8::Value> v8_value, const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Isolate* isolate = info.GetIsolate();
  ALLOW_UNUSED_LOCAL(isolate);

  v8::Local<v8::Object> holder = info.Holder();
  ALLOW_UNUSED_LOCAL(holder);

  WorkerGlobalScope* impl = V8WorkerGlobalScope::ToImpl(holder);

  // Prepare the value to be set.

  impl->setOnrejectionhandled(JSEventHandler::CreateOrNull(v8_value, JSEventHandler::HandlerType::kEventHandler));
}

static void OnunhandledrejectionAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  WorkerGlobalScope* impl = V8WorkerGlobalScope::ToImpl(holder);

  EventListener* cpp_value(WTF::GetPtr(impl->onunhandledrejection()));

  V8SetReturnValue(info, JSEventHandler::AsV8Value(info.GetIsolate(), impl, cpp_value));
}

static void OnunhandledrejectionAttributeSetter(
    v8::Local<v8::Value> v8_value, const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Isolate* isolate = info.GetIsolate();
  ALLOW_UNUSED_LOCAL(isolate);

  v8::Local<v8::Object> holder = info.Holder();
  ALLOW_UNUSED_LOCAL(holder);

  WorkerGlobalScope* impl = V8WorkerGlobalScope::ToImpl(holder);

  // Prepare the value to be set.

  impl->setOnunhandledrejection(JSEventHandler::CreateOrNull(v8_value, JSEventHandler::HandlerType::kEventHandler));
}

static void IsSecureContextAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  WorkerGlobalScope* impl = V8WorkerGlobalScope::ToImpl(holder);

  V8SetReturnValueBool(info, impl->isSecureContextForBindings());
}

static void OriginAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  WorkerGlobalScope* impl = V8WorkerGlobalScope::ToImpl(holder);

  V8SetReturnValueString(info, impl->origin(), info.GetIsolate());
}

static void OriginAttributeSetter(
    v8::Local<v8::Value> v8_value, const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Isolate* isolate = info.GetIsolate();
  ALLOW_UNUSED_LOCAL(isolate);

  v8::Local<v8::Object> holder = info.Holder();
  ALLOW_UNUSED_LOCAL(holder);

  // Prepare the value to be set.

  v8::Local<v8::String> property_name = V8AtomicString(isolate, "origin");
  if (info.Holder()->CreateDataProperty(info.GetIsolate()->GetCurrentContext(), property_name, v8_value).IsNothing())
    return;
}

static void FontsAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  WorkerGlobalScope* impl = V8WorkerGlobalScope::ToImpl(holder);

  FontFaceSet* cpp_value(WTF::GetPtr(impl->fonts()));

  // Keep the wrapper object for the return value alive as long as |this|
  // object is alive in order to save creation time of the wrapper object.
  if (cpp_value && DOMDataStore::SetReturnValue(info.GetReturnValue(), cpp_value))
    return;
  v8::Local<v8::Value> v8_value(ToV8(cpp_value, holder, info.GetIsolate()));
  V8PrivateProperty::GetSymbol(
      info.GetIsolate(), "KeepAlive#WorkerGlobalScope#fonts")
      .Set(holder, v8_value);

  V8SetReturnValue(info, v8_value);
}

static void TrustedTypesAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  WorkerGlobalScope* impl = V8WorkerGlobalScope::ToImpl(holder);

  TrustedTypePolicyFactory* cpp_value(WTF::GetPtr(impl->trustedTypes()));

  // Keep the wrapper object for the return value alive as long as |this|
  // object is alive in order to save creation time of the wrapper object.
  if (cpp_value && DOMDataStore::SetReturnValue(info.GetReturnValue(), cpp_value))
    return;
  v8::Local<v8::Value> v8_value(ToV8(cpp_value, holder, info.GetIsolate()));
  V8PrivateProperty::GetSymbol(
      info.GetIsolate(), "KeepAlive#WorkerGlobalScope#TrustedTypes")
      .Set(holder, v8_value);

  V8SetReturnValue(info, v8_value);
}

static void PerformanceAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  WorkerGlobalScope* impl = V8WorkerGlobalScope::ToImpl(holder);

  WorkerPerformance* cpp_value(WorkerGlobalScopePerformance::performance(*impl));

  // Keep the wrapper object for the return value alive as long as |this|
  // object is alive in order to save creation time of the wrapper object.
  if (cpp_value && DOMDataStore::SetReturnValue(info.GetReturnValue(), cpp_value))
    return;
  v8::Local<v8::Value> v8_value(ToV8(cpp_value, holder, info.GetIsolate()));
  V8PrivateProperty::GetSymbol(
      info.GetIsolate(), "KeepAlive#WorkerGlobalScope#performance")
      .Set(holder, v8_value);

  V8SetReturnValue(info, v8_value);
}

static void PerformanceAttributeSetter(
    v8::Local<v8::Value> v8_value, const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Isolate* isolate = info.GetIsolate();
  ALLOW_UNUSED_LOCAL(isolate);

  v8::Local<v8::Object> holder = info.Holder();
  ALLOW_UNUSED_LOCAL(holder);

  // Prepare the value to be set.

  v8::Local<v8::String> property_name = V8AtomicString(isolate, "performance");
  if (info.Holder()->CreateDataProperty(info.GetIsolate()->GetCurrentContext(), property_name, v8_value).IsNothing())
    return;
}

static void ImportScriptsMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exception_state(info.GetIsolate(), ExceptionState::kExecutionContext, "WorkerGlobalScope", "importScripts");

  WorkerGlobalScope* impl = V8WorkerGlobalScope::ToImpl(info.Holder());

  HeapVector<StringOrTrustedScriptURL> urls;
  urls = ToImplArguments<StringOrTrustedScriptURL>(info, 0, exception_state);
  if (exception_state.HadException())
    return;

  impl->importScripts(urls, exception_state);
  if (exception_state.HadException()) {
    return;
  }
}

static void QueueMicrotaskMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  WorkerGlobalScope* impl = V8WorkerGlobalScope::ToImpl(info.Holder());

  if (UNLIKELY(info.Length() < 1)) {
    V8ThrowException::ThrowTypeError(info.GetIsolate(), ExceptionMessages::FailedToExecute("queueMicrotask", "WorkerGlobalScope", ExceptionMessages::NotEnoughArguments(1, info.Length())));
    return;
  }

  V8VoidFunction* callback;
  if (info[0]->IsFunction()) {
    callback = V8VoidFunction::Create(info[0].As<v8::Function>());
  } else {
    V8ThrowException::ThrowTypeError(info.GetIsolate(), ExceptionMessages::FailedToExecute("queueMicrotask", "WorkerGlobalScope", "The callback provided as parameter 1 is not a function."));
    return;
  }

  impl->queueMicrotask(callback);
}

static void RequestAnimationFrameMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exception_state(info.GetIsolate(), ExceptionState::kExecutionContext, "WorkerGlobalScope", "requestAnimationFrame");

  WorkerGlobalScope* impl = V8WorkerGlobalScope::ToImpl(info.Holder());

  if (UNLIKELY(info.Length() < 1)) {
    exception_state.ThrowTypeError(ExceptionMessages::NotEnoughArguments(1, info.Length()));
    return;
  }

  V8FrameRequestCallback* callback;
  if (info[0]->IsFunction()) {
    callback = V8FrameRequestCallback::Create(info[0].As<v8::Function>());
  } else {
    exception_state.ThrowTypeError("The callback provided as parameter 1 is not a function.");
    return;
  }

  int32_t result = impl->requestAnimationFrame(callback, exception_state);
  if (exception_state.HadException()) {
    return;
  }
  V8SetReturnValueInt(info, result);
}

static void CancelAnimationFrameMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exception_state(info.GetIsolate(), ExceptionState::kExecutionContext, "WorkerGlobalScope", "cancelAnimationFrame");

  WorkerGlobalScope* impl = V8WorkerGlobalScope::ToImpl(info.Holder());

  if (UNLIKELY(info.Length() < 1)) {
    exception_state.ThrowTypeError(ExceptionMessages::NotEnoughArguments(1, info.Length()));
    return;
  }

  int32_t handle;
  handle = NativeValueTraits<IDLLong>::NativeValue(info.GetIsolate(), info[0], exception_state);
  if (exception_state.HadException())
    return;

  impl->cancelAnimationFrame(handle);
}

static void FetchMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exception_state(info.GetIsolate(), ExceptionState::kExecutionContext, "WorkerGlobalScope", "fetch");
  ExceptionToRejectPromiseScope reject_promise_scope(info, exception_state);

  // V8DOMConfiguration::kDoNotCheckHolder
  // Make sure that info.Holder() really points to an instance of the type.
  if (!V8WorkerGlobalScope::HasInstance(info.Holder(), info.GetIsolate())) {
    exception_state.ThrowTypeError("Illegal invocation");
    return;
  }
  WorkerGlobalScope* impl = V8WorkerGlobalScope::ToImpl(info.Holder());

  ScriptState* script_state = ScriptState::ForRelevantRealm(info);

  if (UNLIKELY(info.Length() < 1)) {
    exception_state.ThrowTypeError(ExceptionMessages::NotEnoughArguments(1, info.Length()));
    return;
  }

  RequestOrUSVString input;
  RequestInit* init;
  V8RequestOrUSVString::ToImpl(info.GetIsolate(), info[0], input, UnionTypeConversionMode::kNotNullable, exception_state);
  if (exception_state.HadException())
    return;

  if (!info[1]->IsNullOrUndefined() && !info[1]->IsObject()) {
    exception_state.ThrowTypeError("parameter 2 ('init') is not an object.");
    return;
  }
  init = NativeValueTraits<RequestInit>::NativeValue(info.GetIsolate(), info[1], exception_state);
  if (exception_state.HadException())
    return;

  ScriptPromise result = GlobalFetch::fetch(script_state, *impl, input, init, exception_state);
  if (exception_state.HadException()) {
    return;
  }
  V8SetReturnValue(info, result.V8Value());
}

static void BtoaMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exception_state(info.GetIsolate(), ExceptionState::kExecutionContext, "WorkerGlobalScope", "btoa");

  WorkerGlobalScope* impl = V8WorkerGlobalScope::ToImpl(info.Holder());

  if (UNLIKELY(info.Length() < 1)) {
    exception_state.ThrowTypeError(ExceptionMessages::NotEnoughArguments(1, info.Length()));
    return;
  }

  V8StringResource<> btoa;
  btoa = info[0];
  if (!btoa.Prepare())
    return;

  String result = WindowOrWorkerGlobalScope::btoa(*impl, btoa, exception_state);
  if (exception_state.HadException()) {
    return;
  }
  V8SetReturnValueString(info, result, info.GetIsolate());
}

static void AtobMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exception_state(info.GetIsolate(), ExceptionState::kExecutionContext, "WorkerGlobalScope", "atob");

  WorkerGlobalScope* impl = V8WorkerGlobalScope::ToImpl(info.Holder());

  if (UNLIKELY(info.Length() < 1)) {
    exception_state.ThrowTypeError(ExceptionMessages::NotEnoughArguments(1, info.Length()));
    return;
  }

  V8StringResource<> atob;
  atob = info[0];
  if (!atob.Prepare())
    return;

  String result = WindowOrWorkerGlobalScope::atob(*impl, atob, exception_state);
  if (exception_state.HadException()) {
    return;
  }
  V8SetReturnValueString(info, result, info.GetIsolate());
}

static void SetTimeout1Method(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exception_state(info.GetIsolate(), ExceptionState::kExecutionContext, "WorkerGlobalScope", "setTimeout");

  WorkerGlobalScope* impl = V8WorkerGlobalScope::ToImpl(info.Holder());

  ScriptState* script_state = ScriptState::ForRelevantRealm(info);

  V8Function* handler;
  int32_t timeout;
  Vector<ScriptValue> arguments;
  if (info[0]->IsFunction()) {
    handler = V8Function::Create(info[0].As<v8::Function>());
  } else {
    exception_state.ThrowTypeError("The callback provided as parameter 1 is not a function.");
    return;
  }

  if (!info[1]->IsUndefined()) {
    timeout = NativeValueTraits<IDLLong>::NativeValue(info.GetIsolate(), info[1], exception_state);
    if (exception_state.HadException())
      return;
  } else {
    timeout = 0;
  }
  arguments = ToImplArguments<ScriptValue>(info, 2, exception_state);
  if (exception_state.HadException())
    return;

  int32_t result = WindowOrWorkerGlobalScope::setTimeout(script_state, *impl, handler, timeout, arguments);
  V8SetReturnValueInt(info, result);
}

static void SetTimeout2Method(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exception_state(info.GetIsolate(), ExceptionState::kExecutionContext, "WorkerGlobalScope", "setTimeout");

  WorkerGlobalScope* impl = V8WorkerGlobalScope::ToImpl(info.Holder());

  ScriptState* script_state = ScriptState::ForRelevantRealm(info);

  StringOrTrustedScript handler;
  int32_t timeout;
  Vector<ScriptValue> arguments;
  V8StringOrTrustedScript::ToImpl(info.GetIsolate(), info[0], handler, UnionTypeConversionMode::kNotNullable, exception_state);
  if (exception_state.HadException())
    return;

  if (!info[1]->IsUndefined()) {
    timeout = NativeValueTraits<IDLLong>::NativeValue(info.GetIsolate(), info[1], exception_state);
    if (exception_state.HadException())
      return;
  } else {
    timeout = 0;
  }
  arguments = ToImplArguments<ScriptValue>(info, 2, exception_state);
  if (exception_state.HadException())
    return;

  int32_t result = WindowOrWorkerGlobalScope::setTimeout(script_state, *impl, handler, timeout, arguments, exception_state);
  if (exception_state.HadException()) {
    return;
  }
  V8SetReturnValueInt(info, result);
}

static void SetTimeoutMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  scheduler::CooperativeSchedulingManager::Instance()->Safepoint();

  bool is_arity_error = false;

  switch (std::min(3, info.Length())) {
    case 1:
      if (info[0]->IsFunction()) {
        SetTimeout1Method(info);
        return;
      }
      if (true) {
        SetTimeout2Method(info);
        return;
      }
      break;
    case 2:
      if (info[0]->IsFunction()) {
        SetTimeout1Method(info);
        return;
      }
      if (true) {
        SetTimeout2Method(info);
        return;
      }
      break;
    case 3:
      if (info[0]->IsFunction()) {
        SetTimeout1Method(info);
        return;
      }
      if (true) {
        SetTimeout2Method(info);
        return;
      }
      break;
    default:
      is_arity_error = true;
  }

  ExceptionState exception_state(info.GetIsolate(), ExceptionState::kExecutionContext, "WorkerGlobalScope", "setTimeout");
  if (is_arity_error) {
    if (info.Length() < 1) {
      exception_state.ThrowTypeError(ExceptionMessages::NotEnoughArguments(1, info.Length()));
      return;
    }
  }
  exception_state.ThrowTypeError("No function was found that matched the signature provided.");
}

static void ClearTimeoutMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exception_state(info.GetIsolate(), ExceptionState::kExecutionContext, "WorkerGlobalScope", "clearTimeout");

  WorkerGlobalScope* impl = V8WorkerGlobalScope::ToImpl(info.Holder());

  int32_t handle;
  if (!info[0]->IsUndefined()) {
    handle = NativeValueTraits<IDLLong>::NativeValue(info.GetIsolate(), info[0], exception_state);
    if (exception_state.HadException())
      return;
  } else {
    handle = 0;
  }

  WindowOrWorkerGlobalScope::clearTimeout(*impl, handle);
}

static void SetInterval1Method(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exception_state(info.GetIsolate(), ExceptionState::kExecutionContext, "WorkerGlobalScope", "setInterval");

  WorkerGlobalScope* impl = V8WorkerGlobalScope::ToImpl(info.Holder());

  ScriptState* script_state = ScriptState::ForRelevantRealm(info);

  V8Function* handler;
  int32_t timeout;
  Vector<ScriptValue> arguments;
  if (info[0]->IsFunction()) {
    handler = V8Function::Create(info[0].As<v8::Function>());
  } else {
    exception_state.ThrowTypeError("The callback provided as parameter 1 is not a function.");
    return;
  }

  if (!info[1]->IsUndefined()) {
    timeout = NativeValueTraits<IDLLong>::NativeValue(info.GetIsolate(), info[1], exception_state);
    if (exception_state.HadException())
      return;
  } else {
    timeout = 0;
  }
  arguments = ToImplArguments<ScriptValue>(info, 2, exception_state);
  if (exception_state.HadException())
    return;

  int32_t result = WindowOrWorkerGlobalScope::setInterval(script_state, *impl, handler, timeout, arguments);
  V8SetReturnValueInt(info, result);
}

static void SetInterval2Method(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exception_state(info.GetIsolate(), ExceptionState::kExecutionContext, "WorkerGlobalScope", "setInterval");

  WorkerGlobalScope* impl = V8WorkerGlobalScope::ToImpl(info.Holder());

  ScriptState* script_state = ScriptState::ForRelevantRealm(info);

  StringOrTrustedScript handler;
  int32_t timeout;
  Vector<ScriptValue> arguments;
  V8StringOrTrustedScript::ToImpl(info.GetIsolate(), info[0], handler, UnionTypeConversionMode::kNotNullable, exception_state);
  if (exception_state.HadException())
    return;

  if (!info[1]->IsUndefined()) {
    timeout = NativeValueTraits<IDLLong>::NativeValue(info.GetIsolate(), info[1], exception_state);
    if (exception_state.HadException())
      return;
  } else {
    timeout = 0;
  }
  arguments = ToImplArguments<ScriptValue>(info, 2, exception_state);
  if (exception_state.HadException())
    return;

  int32_t result = WindowOrWorkerGlobalScope::setInterval(script_state, *impl, handler, timeout, arguments, exception_state);
  if (exception_state.HadException()) {
    return;
  }
  V8SetReturnValueInt(info, result);
}

static void SetIntervalMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  scheduler::CooperativeSchedulingManager::Instance()->Safepoint();

  bool is_arity_error = false;

  switch (std::min(3, info.Length())) {
    case 1:
      if (info[0]->IsFunction()) {
        SetInterval1Method(info);
        return;
      }
      if (true) {
        SetInterval2Method(info);
        return;
      }
      break;
    case 2:
      if (info[0]->IsFunction()) {
        SetInterval1Method(info);
        return;
      }
      if (true) {
        SetInterval2Method(info);
        return;
      }
      break;
    case 3:
      if (info[0]->IsFunction()) {
        SetInterval1Method(info);
        return;
      }
      if (true) {
        SetInterval2Method(info);
        return;
      }
      break;
    default:
      is_arity_error = true;
  }

  ExceptionState exception_state(info.GetIsolate(), ExceptionState::kExecutionContext, "WorkerGlobalScope", "setInterval");
  if (is_arity_error) {
    if (info.Length() < 1) {
      exception_state.ThrowTypeError(ExceptionMessages::NotEnoughArguments(1, info.Length()));
      return;
    }
  }
  exception_state.ThrowTypeError("No function was found that matched the signature provided.");
}

static void ClearIntervalMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exception_state(info.GetIsolate(), ExceptionState::kExecutionContext, "WorkerGlobalScope", "clearInterval");

  WorkerGlobalScope* impl = V8WorkerGlobalScope::ToImpl(info.Holder());

  int32_t handle;
  if (!info[0]->IsUndefined()) {
    handle = NativeValueTraits<IDLLong>::NativeValue(info.GetIsolate(), info[0], exception_state);
    if (exception_state.HadException())
      return;
  } else {
    handle = 0;
  }

  WindowOrWorkerGlobalScope::clearInterval(*impl, handle);
}

static void CreateImageBitmap1Method(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exception_state(info.GetIsolate(), ExceptionState::kExecutionContext, "WorkerGlobalScope", "createImageBitmap");
  ExceptionToRejectPromiseScope reject_promise_scope(info, exception_state);

  // V8DOMConfiguration::kDoNotCheckHolder
  // Make sure that info.Holder() really points to an instance of the type.
  if (!V8WorkerGlobalScope::HasInstance(info.Holder(), info.GetIsolate())) {
    exception_state.ThrowTypeError("Illegal invocation");
    return;
  }
  WorkerGlobalScope* impl = V8WorkerGlobalScope::ToImpl(info.Holder());

  ScriptState* script_state = ScriptState::ForRelevantRealm(info);

  HTMLImageElementOrSVGImageElementOrHTMLVideoElementOrHTMLCanvasElementOrBlobOrImageDataOrImageBitmapOrOffscreenCanvas image_bitmap;
  ImageBitmapOptions* options;
  V8HTMLImageElementOrSVGImageElementOrHTMLVideoElementOrHTMLCanvasElementOrBlobOrImageDataOrImageBitmapOrOffscreenCanvas::ToImpl(info.GetIsolate(), info[0], image_bitmap, UnionTypeConversionMode::kNotNullable, exception_state);
  if (exception_state.HadException())
    return;

  if (!info[1]->IsNullOrUndefined() && !info[1]->IsObject()) {
    exception_state.ThrowTypeError("parameter 2 ('options') is not an object.");
    return;
  }
  options = NativeValueTraits<ImageBitmapOptions>::NativeValue(info.GetIsolate(), info[1], exception_state);
  if (exception_state.HadException())
    return;

  ScriptPromise result = WindowOrWorkerGlobalScope::createImageBitmap(script_state, *impl, image_bitmap, options);
  V8SetReturnValue(info, result.V8Value());
}

static void CreateImageBitmap2Method(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exception_state(info.GetIsolate(), ExceptionState::kExecutionContext, "WorkerGlobalScope", "createImageBitmap");
  ExceptionToRejectPromiseScope reject_promise_scope(info, exception_state);

  // V8DOMConfiguration::kDoNotCheckHolder
  // Make sure that info.Holder() really points to an instance of the type.
  if (!V8WorkerGlobalScope::HasInstance(info.Holder(), info.GetIsolate())) {
    exception_state.ThrowTypeError("Illegal invocation");
    return;
  }
  WorkerGlobalScope* impl = V8WorkerGlobalScope::ToImpl(info.Holder());

  ScriptState* script_state = ScriptState::ForRelevantRealm(info);

  HTMLImageElementOrSVGImageElementOrHTMLVideoElementOrHTMLCanvasElementOrBlobOrImageDataOrImageBitmapOrOffscreenCanvas image_bitmap;
  int32_t sx;
  int32_t sy;
  int32_t sw;
  int32_t sh;
  ImageBitmapOptions* options;
  V8HTMLImageElementOrSVGImageElementOrHTMLVideoElementOrHTMLCanvasElementOrBlobOrImageDataOrImageBitmapOrOffscreenCanvas::ToImpl(info.GetIsolate(), info[0], image_bitmap, UnionTypeConversionMode::kNotNullable, exception_state);
  if (exception_state.HadException())
    return;

  sx = NativeValueTraits<IDLLong>::NativeValue(info.GetIsolate(), info[1], exception_state);
  if (exception_state.HadException())
    return;

  sy = NativeValueTraits<IDLLong>::NativeValue(info.GetIsolate(), info[2], exception_state);
  if (exception_state.HadException())
    return;

  sw = NativeValueTraits<IDLLong>::NativeValue(info.GetIsolate(), info[3], exception_state);
  if (exception_state.HadException())
    return;

  sh = NativeValueTraits<IDLLong>::NativeValue(info.GetIsolate(), info[4], exception_state);
  if (exception_state.HadException())
    return;

  if (!info[5]->IsNullOrUndefined() && !info[5]->IsObject()) {
    exception_state.ThrowTypeError("parameter 6 ('options') is not an object.");
    return;
  }
  options = NativeValueTraits<ImageBitmapOptions>::NativeValue(info.GetIsolate(), info[5], exception_state);
  if (exception_state.HadException())
    return;

  ScriptPromise result = WindowOrWorkerGlobalScope::createImageBitmap(script_state, *impl, image_bitmap, sx, sy, sw, sh, options);
  V8SetReturnValue(info, result.V8Value());
}

static void CreateImageBitmapMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  scheduler::CooperativeSchedulingManager::Instance()->Safepoint();

  bool is_arity_error = false;

  switch (std::min(6, info.Length())) {
    case 1:
      if (true) {
        CreateImageBitmap1Method(info);
        return;
      }
      break;
    case 2:
      if (true) {
        CreateImageBitmap1Method(info);
        return;
      }
      break;
    case 5:
      if (true) {
        CreateImageBitmap2Method(info);
        return;
      }
      break;
    case 6:
      if (true) {
        CreateImageBitmap2Method(info);
        return;
      }
      break;
    default:
      is_arity_error = true;
  }

  ExceptionState exception_state(info.GetIsolate(), ExceptionState::kExecutionContext, "WorkerGlobalScope", "createImageBitmap");
  ExceptionToRejectPromiseScope reject_promise_scope(info, exception_state);
  if (is_arity_error) {
    if (info.Length() < 1) {
      exception_state.ThrowTypeError(ExceptionMessages::NotEnoughArguments(1, info.Length()));
      return;
    }
    if (info.Length() >= 1) {
      exception_state.ThrowTypeError(ExceptionMessages::InvalidArity("[1, 2, 5, 6]", info.Length()));
      return;
    }
  }
  exception_state.ThrowTypeError("No function was found that matched the signature provided.");
}

}  // namespace worker_global_scope_v8_internal

void V8WorkerGlobalScope::SelfAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_WorkerGlobalScope_self_Getter");

  worker_global_scope_v8_internal::SelfAttributeGetter(info);
}

void V8WorkerGlobalScope::LocationAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_WorkerGlobalScope_location_Getter");

  worker_global_scope_v8_internal::LocationAttributeGetter(info);
}

void V8WorkerGlobalScope::OnerrorAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_WorkerGlobalScope_onerror_Getter");

  worker_global_scope_v8_internal::OnerrorAttributeGetter(info);
}

void V8WorkerGlobalScope::OnerrorAttributeSetterCallback(
    const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_WorkerGlobalScope_onerror_Setter");

  v8::Local<v8::Value> v8_value = info[0];

  worker_global_scope_v8_internal::OnerrorAttributeSetter(v8_value, info);
}

void V8WorkerGlobalScope::OnlanguagechangeAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_WorkerGlobalScope_onlanguagechange_Getter");

  worker_global_scope_v8_internal::OnlanguagechangeAttributeGetter(info);
}

void V8WorkerGlobalScope::OnlanguagechangeAttributeSetterCallback(
    const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_WorkerGlobalScope_onlanguagechange_Setter");

  v8::Local<v8::Value> v8_value = info[0];

  worker_global_scope_v8_internal::OnlanguagechangeAttributeSetter(v8_value, info);
}

void V8WorkerGlobalScope::NavigatorAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_WorkerGlobalScope_navigator_Getter");

  worker_global_scope_v8_internal::NavigatorAttributeGetter(info);
}

void V8WorkerGlobalScope::AddressSpaceAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_WorkerGlobalScope_addressSpace_Getter");

  worker_global_scope_v8_internal::AddressSpaceAttributeGetter(info);
}

void V8WorkerGlobalScope::OnrejectionhandledAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_WorkerGlobalScope_onrejectionhandled_Getter");

  worker_global_scope_v8_internal::OnrejectionhandledAttributeGetter(info);
}

void V8WorkerGlobalScope::OnrejectionhandledAttributeSetterCallback(
    const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_WorkerGlobalScope_onrejectionhandled_Setter");

  v8::Local<v8::Value> v8_value = info[0];

  worker_global_scope_v8_internal::OnrejectionhandledAttributeSetter(v8_value, info);
}

void V8WorkerGlobalScope::OnunhandledrejectionAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_WorkerGlobalScope_onunhandledrejection_Getter");

  worker_global_scope_v8_internal::OnunhandledrejectionAttributeGetter(info);
}

void V8WorkerGlobalScope::OnunhandledrejectionAttributeSetterCallback(
    const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_WorkerGlobalScope_onunhandledrejection_Setter");

  v8::Local<v8::Value> v8_value = info[0];

  worker_global_scope_v8_internal::OnunhandledrejectionAttributeSetter(v8_value, info);
}

void V8WorkerGlobalScope::IsSecureContextAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_WorkerGlobalScope_isSecureContext_Getter");

  worker_global_scope_v8_internal::IsSecureContextAttributeGetter(info);
}

void V8WorkerGlobalScope::OriginAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_WorkerGlobalScope_origin_Getter");

  worker_global_scope_v8_internal::OriginAttributeGetter(info);
}

void V8WorkerGlobalScope::OriginAttributeSetterCallback(
    const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_WorkerGlobalScope_origin_Setter");

  v8::Local<v8::Value> v8_value = info[0];

  worker_global_scope_v8_internal::OriginAttributeSetter(v8_value, info);
}

void V8WorkerGlobalScope::FontsAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_WorkerGlobalScope_fonts_Getter");

  worker_global_scope_v8_internal::FontsAttributeGetter(info);
}

void V8WorkerGlobalScope::TrustedTypesAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_WorkerGlobalScope_TrustedTypes_Getter");

  worker_global_scope_v8_internal::TrustedTypesAttributeGetter(info);
}

void V8WorkerGlobalScope::PerformanceAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_WorkerGlobalScope_performance_Getter");

  worker_global_scope_v8_internal::PerformanceAttributeGetter(info);
}

void V8WorkerGlobalScope::PerformanceAttributeSetterCallback(
    const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_WorkerGlobalScope_performance_Setter");

  v8::Local<v8::Value> v8_value = info[0];

  worker_global_scope_v8_internal::PerformanceAttributeSetter(v8_value, info);
}

void V8WorkerGlobalScope::ImportScriptsMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_WorkerGlobalScope_importScripts");

  worker_global_scope_v8_internal::ImportScriptsMethod(info);
}

void V8WorkerGlobalScope::QueueMicrotaskMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_WorkerGlobalScope_queueMicrotask");

  worker_global_scope_v8_internal::QueueMicrotaskMethod(info);
}

void V8WorkerGlobalScope::RequestAnimationFrameMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_WorkerGlobalScope_requestAnimationFrame");

  worker_global_scope_v8_internal::RequestAnimationFrameMethod(info);
}

void V8WorkerGlobalScope::CancelAnimationFrameMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_WorkerGlobalScope_cancelAnimationFrame");

  worker_global_scope_v8_internal::CancelAnimationFrameMethod(info);
}

void V8WorkerGlobalScope::FetchMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_WorkerGlobalScope_fetch");

  worker_global_scope_v8_internal::FetchMethod(info);
}

void V8WorkerGlobalScope::BtoaMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_WorkerGlobalScope_btoa");

  worker_global_scope_v8_internal::BtoaMethod(info);
}

void V8WorkerGlobalScope::AtobMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_WorkerGlobalScope_atob");

  worker_global_scope_v8_internal::AtobMethod(info);
}

void V8WorkerGlobalScope::SetTimeoutMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_WorkerGlobalScope_setTimeout");

  worker_global_scope_v8_internal::SetTimeoutMethod(info);
}

void V8WorkerGlobalScope::ClearTimeoutMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_WorkerGlobalScope_clearTimeout");

  worker_global_scope_v8_internal::ClearTimeoutMethod(info);
}

void V8WorkerGlobalScope::SetIntervalMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_WorkerGlobalScope_setInterval");

  worker_global_scope_v8_internal::SetIntervalMethod(info);
}

void V8WorkerGlobalScope::ClearIntervalMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_WorkerGlobalScope_clearInterval");

  worker_global_scope_v8_internal::ClearIntervalMethod(info);
}

void V8WorkerGlobalScope::CreateImageBitmapMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_WorkerGlobalScope_createImageBitmap");

  worker_global_scope_v8_internal::CreateImageBitmapMethod(info);
}

static constexpr V8DOMConfiguration::AccessorConfiguration kV8WorkerGlobalScopeAccessors[] = {
    { "self", V8WorkerGlobalScope::SelfAttributeGetterCallback, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
    { "location", V8WorkerGlobalScope::LocationAttributeGetterCallback, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
    { "onerror", V8WorkerGlobalScope::OnerrorAttributeGetterCallback, V8WorkerGlobalScope::OnerrorAttributeSetterCallback, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
    { "onlanguagechange", V8WorkerGlobalScope::OnlanguagechangeAttributeGetterCallback, V8WorkerGlobalScope::OnlanguagechangeAttributeSetterCallback, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
    { "navigator", V8WorkerGlobalScope::NavigatorAttributeGetterCallback, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
    { "onrejectionhandled", V8WorkerGlobalScope::OnrejectionhandledAttributeGetterCallback, V8WorkerGlobalScope::OnrejectionhandledAttributeSetterCallback, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
    { "onunhandledrejection", V8WorkerGlobalScope::OnunhandledrejectionAttributeGetterCallback, V8WorkerGlobalScope::OnunhandledrejectionAttributeSetterCallback, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
    { "isSecureContext", V8WorkerGlobalScope::IsSecureContextAttributeGetterCallback, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
    { "origin", V8WorkerGlobalScope::OriginAttributeGetterCallback, V8WorkerGlobalScope::OriginAttributeSetterCallback, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
    { "performance", V8WorkerGlobalScope::PerformanceAttributeGetterCallback, V8WorkerGlobalScope::PerformanceAttributeSetterCallback, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
};

static constexpr V8DOMConfiguration::MethodConfiguration kV8WorkerGlobalScopeMethods[] = {
    {"importScripts", V8WorkerGlobalScope::ImportScriptsMethodCallback, 0, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"queueMicrotask", V8WorkerGlobalScope::QueueMicrotaskMethodCallback, 1, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"fetch", V8WorkerGlobalScope::FetchMethodCallback, 1, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kDoNotCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"btoa", V8WorkerGlobalScope::BtoaMethodCallback, 1, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"atob", V8WorkerGlobalScope::AtobMethodCallback, 1, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"setTimeout", V8WorkerGlobalScope::SetTimeoutMethodCallback, 1, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"clearTimeout", V8WorkerGlobalScope::ClearTimeoutMethodCallback, 0, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"setInterval", V8WorkerGlobalScope::SetIntervalMethodCallback, 1, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"clearInterval", V8WorkerGlobalScope::ClearIntervalMethodCallback, 0, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"createImageBitmap", V8WorkerGlobalScope::CreateImageBitmapMethodCallback, 1, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kDoNotCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
};

void V8WorkerGlobalScope::InstallV8WorkerGlobalScopeTemplate(
    v8::Isolate* isolate,
    const DOMWrapperWorld& world,
    v8::Local<v8::FunctionTemplate> interface_template) {
  // Initialize the interface object's template.
  V8DOMConfiguration::InitializeDOMInterfaceTemplate(isolate, interface_template, V8WorkerGlobalScope::GetWrapperTypeInfo()->interface_name, V8EventTarget::DomTemplate(isolate, world), V8WorkerGlobalScope::kInternalFieldCount);

  v8::Local<v8::Signature> signature = v8::Signature::New(isolate, interface_template);
  ALLOW_UNUSED_LOCAL(signature);
  v8::Local<v8::ObjectTemplate> instance_template = interface_template->InstanceTemplate();
  ALLOW_UNUSED_LOCAL(instance_template);
  v8::Local<v8::ObjectTemplate> prototype_template = interface_template->PrototypeTemplate();
  ALLOW_UNUSED_LOCAL(prototype_template);

  // Global object prototype chain consists of Immutable Prototype Exotic Objects
  prototype_template->SetImmutableProto();

  // Register IDL constants, attributes and operations.
  V8DOMConfiguration::InstallAccessors(
      isolate, world, instance_template, prototype_template, interface_template,
      signature, kV8WorkerGlobalScopeAccessors, base::size(kV8WorkerGlobalScopeAccessors));
  V8DOMConfiguration::InstallMethods(
      isolate, world, instance_template, prototype_template, interface_template,
      signature, kV8WorkerGlobalScopeMethods, base::size(kV8WorkerGlobalScopeMethods));

  // Custom signature
}

void V8WorkerGlobalScope::InstallRuntimeEnabledFeaturesOnTemplate(
    v8::Isolate* isolate,
    const DOMWrapperWorld& world,
    v8::Local<v8::FunctionTemplate> interface_template) {
  v8::Local<v8::Signature> signature = v8::Signature::New(isolate, interface_template);
  ALLOW_UNUSED_LOCAL(signature);
  v8::Local<v8::ObjectTemplate> instance_template = interface_template->InstanceTemplate();
  ALLOW_UNUSED_LOCAL(instance_template);
  v8::Local<v8::ObjectTemplate> prototype_template = interface_template->PrototypeTemplate();
  ALLOW_UNUSED_LOCAL(prototype_template);

  // Register IDL constants, attributes and operations.

  if (RuntimeEnabledFeatures::CorsRFC1918Enabled()) {
    static constexpr V8DOMConfiguration::AccessorConfiguration kConfigurations[] = {
        { "addressSpace", V8WorkerGlobalScope::AddressSpaceAttributeGetterCallback, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
    };
    V8DOMConfiguration::InstallAccessors(
        isolate, world, instance_template, prototype_template, interface_template,
        signature, kConfigurations, base::size(kConfigurations));
  }
  if (RuntimeEnabledFeatures::OffscreenCanvasTextEnabled()) {
    static constexpr V8DOMConfiguration::AccessorConfiguration kConfigurations[] = {
        { "fonts", V8WorkerGlobalScope::FontsAttributeGetterCallback, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
    };
    V8DOMConfiguration::InstallAccessors(
        isolate, world, instance_template, prototype_template, interface_template,
        signature, kConfigurations, base::size(kConfigurations));
  }

  // Custom signature
  if (RuntimeEnabledFeatures::OffscreenCanvasEnabled()) {
    {
      // Install requestAnimationFrame configuration
      constexpr V8DOMConfiguration::MethodConfiguration kConfigurations[] = {
          {"requestAnimationFrame", V8WorkerGlobalScope::RequestAnimationFrameMethodCallback, 1, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds}
      };
      for (const auto& config : kConfigurations) {
        V8DOMConfiguration::InstallMethod(
            isolate, world, instance_template, prototype_template,
            interface_template, signature, config);
      }
    }
  }
  if (RuntimeEnabledFeatures::OffscreenCanvasEnabled()) {
    {
      // Install cancelAnimationFrame configuration
      constexpr V8DOMConfiguration::MethodConfiguration kConfigurations[] = {
          {"cancelAnimationFrame", V8WorkerGlobalScope::CancelAnimationFrameMethodCallback, 1, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds}
      };
      for (const auto& config : kConfigurations) {
        V8DOMConfiguration::InstallMethod(
            isolate, world, instance_template, prototype_template,
            interface_template, signature, config);
      }
    }
  }
}

void V8WorkerGlobalScope::InstallTrustedDOMTypes(
    v8::Isolate* isolate,
    const DOMWrapperWorld& world,
    v8::Local<v8::Object> instance,
    v8::Local<v8::Object> prototype,
    v8::Local<v8::Function> interface) {
  v8::Local<v8::FunctionTemplate> interface_template =
      V8WorkerGlobalScope::GetWrapperTypeInfo()->DomTemplate(isolate, world);
  v8::Local<v8::Signature> signature = v8::Signature::New(isolate, interface_template);
  ALLOW_UNUSED_LOCAL(signature);
  static constexpr V8DOMConfiguration::AccessorConfiguration
  kTrustedTypesConfigurations[] = {
      { "TrustedTypes", V8WorkerGlobalScope::TrustedTypesAttributeGetterCallback, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::DontDelete | v8::ReadOnly), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds }
  };
  for (const auto& config : kTrustedTypesConfigurations) {
    V8DOMConfiguration::InstallAccessor(isolate, world, instance, prototype,
                                        interface, signature, config);
  }
}

void V8WorkerGlobalScope::InstallTrustedDOMTypes(
    ScriptState* script_state, v8::Local<v8::Object> instance) {
  V8PerContextData* per_context_data = script_state->PerContextData();
  v8::Local<v8::Object> prototype = per_context_data->PrototypeForType(
      V8WorkerGlobalScope::GetWrapperTypeInfo());
  v8::Local<v8::Function> interface = per_context_data->ConstructorForType(
      V8WorkerGlobalScope::GetWrapperTypeInfo());
  ALLOW_UNUSED_LOCAL(interface);
  InstallTrustedDOMTypes(script_state->GetIsolate(), script_state->World(), instance, prototype, interface);
}

v8::Local<v8::FunctionTemplate> V8WorkerGlobalScope::DomTemplate(
    v8::Isolate* isolate, const DOMWrapperWorld& world) {
  return V8DOMConfiguration::DomClassTemplate(
      isolate, world, const_cast<WrapperTypeInfo*>(V8WorkerGlobalScope::GetWrapperTypeInfo()),
      V8WorkerGlobalScope::install_v8_worker_global_scope_template_function_);
}

bool V8WorkerGlobalScope::HasInstance(v8::Local<v8::Value> v8_value, v8::Isolate* isolate) {
  return V8PerIsolateData::From(isolate)->HasInstance(V8WorkerGlobalScope::GetWrapperTypeInfo(), v8_value);
}

v8::Local<v8::Object> V8WorkerGlobalScope::FindInstanceInPrototypeChain(
    v8::Local<v8::Value> v8_value, v8::Isolate* isolate) {
  return V8PerIsolateData::From(isolate)->FindInstanceInPrototypeChain(
      V8WorkerGlobalScope::GetWrapperTypeInfo(), v8_value);
}

WorkerGlobalScope* V8WorkerGlobalScope::ToImplWithTypeCheck(
    v8::Isolate* isolate, v8::Local<v8::Value> value) {
  return HasInstance(value, isolate) ? ToImpl(v8::Local<v8::Object>::Cast(value)) : nullptr;
}

WorkerGlobalScope* NativeValueTraits<WorkerGlobalScope>::NativeValue(
    v8::Isolate* isolate, v8::Local<v8::Value> value, ExceptionState& exception_state) {
  WorkerGlobalScope* native_value = V8WorkerGlobalScope::ToImplWithTypeCheck(isolate, value);
  if (!native_value) {
    exception_state.ThrowTypeError(ExceptionMessages::FailedToConvertJSValue(
        "WorkerGlobalScope"));
  }
  return native_value;
}

InstallRuntimeEnabledFeaturesOnTemplateFunction
V8WorkerGlobalScope::install_runtime_enabled_features_on_template_function_ =
    &V8WorkerGlobalScope::InstallRuntimeEnabledFeaturesOnTemplate;

InstallTemplateFunction
V8WorkerGlobalScope::install_v8_worker_global_scope_template_function_ =
    &V8WorkerGlobalScope::InstallV8WorkerGlobalScopeTemplate;

void V8WorkerGlobalScope::UpdateWrapperTypeInfo(
    InstallTemplateFunction install_template_function,
    InstallRuntimeEnabledFeaturesFunction install_runtime_enabled_features_function,
    InstallRuntimeEnabledFeaturesOnTemplateFunction install_runtime_enabled_features_on_template_function,
    InstallConditionalFeaturesFunction install_conditional_features_function) {
  V8WorkerGlobalScope::install_v8_worker_global_scope_template_function_ =
      install_template_function;

  CHECK(install_runtime_enabled_features_on_template_function);
  V8WorkerGlobalScope::install_runtime_enabled_features_on_template_function_ =
      install_runtime_enabled_features_on_template_function;

  if (install_conditional_features_function) {
    V8WorkerGlobalScope::GetWrapperTypeInfo()->install_conditional_features_function =
        install_conditional_features_function;
  }
}

}  // namespace blink
