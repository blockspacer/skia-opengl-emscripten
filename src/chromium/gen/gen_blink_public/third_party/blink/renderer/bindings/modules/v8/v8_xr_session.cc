// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated from the Jinja2 template
// third_party/blink/renderer/bindings/templates/interface.cc.tmpl
// by the script code_generator_v8.py.
// DO NOT MODIFY!

// clang-format off
#include "third_party/blink/renderer/bindings/modules/v8/v8_xr_session.h"

#include <algorithm>

#include "base/memory/scoped_refptr.h"
#include "third_party/blink/renderer/bindings/core/v8/idl_types.h"
#include "third_party/blink/renderer/bindings/core/v8/js_event_handler.h"
#include "third_party/blink/renderer/bindings/core/v8/native_value_traits_impl.h"
#include "third_party/blink/renderer/bindings/core/v8/script_promise.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_dom_configuration.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_xr_frame_request_callback.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_xr_input_source.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_xr_ray.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_xr_reference_space_options.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_xr_render_state.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_xr_render_state_init.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_xr_space.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_xr_world_tracking_state.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_xr_world_tracking_state_init.h"
#include "third_party/blink/renderer/core/execution_context/execution_context.h"
#include "third_party/blink/renderer/core/frame/use_counter.h"
#include "third_party/blink/renderer/core/inspector/console_message.h"
#include "third_party/blink/renderer/platform/bindings/exception_messages.h"
#include "third_party/blink/renderer/platform/bindings/exception_state.h"
#include "third_party/blink/renderer/platform/bindings/runtime_call_stats.h"
#include "third_party/blink/renderer/platform/bindings/script_state.h"
#include "third_party/blink/renderer/platform/bindings/v8_object_constructor.h"
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
const WrapperTypeInfo v8_xr_session_wrapper_type_info = {
    gin::kEmbedderBlink,
    V8XRSession::DomTemplate,
    V8XRSession::InstallConditionalFeatures,
    "XRSession",
    V8EventTarget::GetWrapperTypeInfo(),
    WrapperTypeInfo::kWrapperTypeObjectPrototype,
    WrapperTypeInfo::kObjectClassId,
    WrapperTypeInfo::kInheritFromActiveScriptWrappable,
};
#if defined(COMPONENT_BUILD) && defined(WIN32) && defined(__clang__)
#pragma clang diagnostic pop
#endif

// This static member must be declared by DEFINE_WRAPPERTYPEINFO in XRSession.h.
// For details, see the comment of DEFINE_WRAPPERTYPEINFO in
// platform/bindings/ScriptWrappable.h.
const WrapperTypeInfo& XRSession::wrapper_type_info_ = v8_xr_session_wrapper_type_info;

// [ActiveScriptWrappable]
static_assert(
    std::is_base_of<ActiveScriptWrappableBase, XRSession>::value,
    "XRSession does not inherit from ActiveScriptWrappable<>, but specifying "
    "[ActiveScriptWrappable] extended attribute in the IDL file.  "
    "Be consistent.");
static_assert(
    !std::is_same<decltype(&XRSession::HasPendingActivity),
                  decltype(&ScriptWrappable::HasPendingActivity)>::value,
    "XRSession is not overriding hasPendingActivity(), but is specifying "
    "[ActiveScriptWrappable] extended attribute in the IDL file.  "
    "Be consistent.");

namespace xr_session_v8_internal {

static void EnvironmentBlendModeAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  XRSession* impl = V8XRSession::ToImpl(holder);

  V8SetReturnValueString(info, impl->environmentBlendMode(), info.GetIsolate());
}

static void RenderStateAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  XRSession* impl = V8XRSession::ToImpl(holder);

  XRRenderState* cpp_value(WTF::GetPtr(impl->renderState()));

  // Keep the wrapper object for the return value alive as long as |this|
  // object is alive in order to save creation time of the wrapper object.
  if (cpp_value && DOMDataStore::SetReturnValue(info.GetReturnValue(), cpp_value))
    return;
  v8::Local<v8::Value> v8_value(ToV8(cpp_value, holder, info.GetIsolate()));
  V8PrivateProperty::GetSymbol(
      info.GetIsolate(), "KeepAlive#XRSession#renderState")
      .Set(holder, v8_value);

  V8SetReturnValue(info, v8_value);
}

static void ViewerSpaceAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  XRSession* impl = V8XRSession::ToImpl(holder);

  XRSpace* cpp_value(WTF::GetPtr(impl->viewerSpace()));

  // Keep the wrapper object for the return value alive as long as |this|
  // object is alive in order to save creation time of the wrapper object.
  if (cpp_value && DOMDataStore::SetReturnValue(info.GetReturnValue(), cpp_value))
    return;
  v8::Local<v8::Value> v8_value(ToV8(cpp_value, holder, info.GetIsolate()));
  V8PrivateProperty::GetSymbol(
      info.GetIsolate(), "KeepAlive#XRSession#viewerSpace")
      .Set(holder, v8_value);

  V8SetReturnValue(info, v8_value);
}

static void OnblurAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  XRSession* impl = V8XRSession::ToImpl(holder);

  EventListener* cpp_value(WTF::GetPtr(impl->onblur()));

  V8SetReturnValue(info, JSEventHandler::AsV8Value(info.GetIsolate(), impl, cpp_value));
}

static void OnblurAttributeSetter(
    v8::Local<v8::Value> v8_value, const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Isolate* isolate = info.GetIsolate();
  ALLOW_UNUSED_LOCAL(isolate);

  v8::Local<v8::Object> holder = info.Holder();
  ALLOW_UNUSED_LOCAL(holder);

  XRSession* impl = V8XRSession::ToImpl(holder);

  // Prepare the value to be set.

  impl->setOnblur(JSEventHandler::CreateOrNull(v8_value, JSEventHandler::HandlerType::kEventHandler));
}

static void OnfocusAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  XRSession* impl = V8XRSession::ToImpl(holder);

  EventListener* cpp_value(WTF::GetPtr(impl->onfocus()));

  V8SetReturnValue(info, JSEventHandler::AsV8Value(info.GetIsolate(), impl, cpp_value));
}

static void OnfocusAttributeSetter(
    v8::Local<v8::Value> v8_value, const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Isolate* isolate = info.GetIsolate();
  ALLOW_UNUSED_LOCAL(isolate);

  v8::Local<v8::Object> holder = info.Holder();
  ALLOW_UNUSED_LOCAL(holder);

  XRSession* impl = V8XRSession::ToImpl(holder);

  // Prepare the value to be set.

  impl->setOnfocus(JSEventHandler::CreateOrNull(v8_value, JSEventHandler::HandlerType::kEventHandler));
}

static void OnendAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  XRSession* impl = V8XRSession::ToImpl(holder);

  EventListener* cpp_value(WTF::GetPtr(impl->onend()));

  V8SetReturnValue(info, JSEventHandler::AsV8Value(info.GetIsolate(), impl, cpp_value));
}

static void OnendAttributeSetter(
    v8::Local<v8::Value> v8_value, const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Isolate* isolate = info.GetIsolate();
  ALLOW_UNUSED_LOCAL(isolate);

  v8::Local<v8::Object> holder = info.Holder();
  ALLOW_UNUSED_LOCAL(holder);

  XRSession* impl = V8XRSession::ToImpl(holder);

  // Prepare the value to be set.

  impl->setOnend(JSEventHandler::CreateOrNull(v8_value, JSEventHandler::HandlerType::kEventHandler));
}

static void OnselectAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  XRSession* impl = V8XRSession::ToImpl(holder);

  EventListener* cpp_value(WTF::GetPtr(impl->onselect()));

  V8SetReturnValue(info, JSEventHandler::AsV8Value(info.GetIsolate(), impl, cpp_value));
}

static void OnselectAttributeSetter(
    v8::Local<v8::Value> v8_value, const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Isolate* isolate = info.GetIsolate();
  ALLOW_UNUSED_LOCAL(isolate);

  v8::Local<v8::Object> holder = info.Holder();
  ALLOW_UNUSED_LOCAL(holder);

  XRSession* impl = V8XRSession::ToImpl(holder);

  // Prepare the value to be set.

  impl->setOnselect(JSEventHandler::CreateOrNull(v8_value, JSEventHandler::HandlerType::kEventHandler));
}

static void OninputsourceschangeAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  XRSession* impl = V8XRSession::ToImpl(holder);

  EventListener* cpp_value(WTF::GetPtr(impl->oninputsourceschange()));

  V8SetReturnValue(info, JSEventHandler::AsV8Value(info.GetIsolate(), impl, cpp_value));
}

static void OninputsourceschangeAttributeSetter(
    v8::Local<v8::Value> v8_value, const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Isolate* isolate = info.GetIsolate();
  ALLOW_UNUSED_LOCAL(isolate);

  v8::Local<v8::Object> holder = info.Holder();
  ALLOW_UNUSED_LOCAL(holder);

  XRSession* impl = V8XRSession::ToImpl(holder);

  // Prepare the value to be set.

  impl->setOninputsourceschange(JSEventHandler::CreateOrNull(v8_value, JSEventHandler::HandlerType::kEventHandler));
}

static void OnselectstartAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  XRSession* impl = V8XRSession::ToImpl(holder);

  EventListener* cpp_value(WTF::GetPtr(impl->onselectstart()));

  V8SetReturnValue(info, JSEventHandler::AsV8Value(info.GetIsolate(), impl, cpp_value));
}

static void OnselectstartAttributeSetter(
    v8::Local<v8::Value> v8_value, const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Isolate* isolate = info.GetIsolate();
  ALLOW_UNUSED_LOCAL(isolate);

  v8::Local<v8::Object> holder = info.Holder();
  ALLOW_UNUSED_LOCAL(holder);

  XRSession* impl = V8XRSession::ToImpl(holder);

  // Prepare the value to be set.

  impl->setOnselectstart(JSEventHandler::CreateOrNull(v8_value, JSEventHandler::HandlerType::kEventHandler));
}

static void OnselectendAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  XRSession* impl = V8XRSession::ToImpl(holder);

  EventListener* cpp_value(WTF::GetPtr(impl->onselectend()));

  V8SetReturnValue(info, JSEventHandler::AsV8Value(info.GetIsolate(), impl, cpp_value));
}

static void OnselectendAttributeSetter(
    v8::Local<v8::Value> v8_value, const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Isolate* isolate = info.GetIsolate();
  ALLOW_UNUSED_LOCAL(isolate);

  v8::Local<v8::Object> holder = info.Holder();
  ALLOW_UNUSED_LOCAL(holder);

  XRSession* impl = V8XRSession::ToImpl(holder);

  // Prepare the value to be set.

  impl->setOnselectend(JSEventHandler::CreateOrNull(v8_value, JSEventHandler::HandlerType::kEventHandler));
}

static void WorldTrackingStateAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  XRSession* impl = V8XRSession::ToImpl(holder);

  XRWorldTrackingState* cpp_value(WTF::GetPtr(impl->worldTrackingState()));

  // Keep the wrapper object for the return value alive as long as |this|
  // object is alive in order to save creation time of the wrapper object.
  if (cpp_value && DOMDataStore::SetReturnValue(info.GetReturnValue(), cpp_value))
    return;
  v8::Local<v8::Value> v8_value(ToV8(cpp_value, holder, info.GetIsolate()));
  V8PrivateProperty::GetSymbol(
      info.GetIsolate(), "KeepAlive#XRSession#worldTrackingState")
      .Set(holder, v8_value);

  V8SetReturnValue(info, v8_value);
}

static void UpdateRenderStateMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exception_state(info.GetIsolate(), ExceptionState::kExecutionContext, "XRSession", "updateRenderState");

  XRSession* impl = V8XRSession::ToImpl(info.Holder());

  XRRenderStateInit* init;
  if (!info[0]->IsNullOrUndefined() && !info[0]->IsObject()) {
    exception_state.ThrowTypeError("parameter 1 ('init') is not an object.");
    return;
  }
  init = NativeValueTraits<XRRenderStateInit>::NativeValue(info.GetIsolate(), info[0], exception_state);
  if (exception_state.HadException())
    return;

  impl->updateRenderState(init, exception_state);
  if (exception_state.HadException()) {
    return;
  }
}

static void RequestReferenceSpaceMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exception_state(info.GetIsolate(), ExceptionState::kExecutionContext, "XRSession", "requestReferenceSpace");
  ExceptionToRejectPromiseScope reject_promise_scope(info, exception_state);

  // V8DOMConfiguration::kDoNotCheckHolder
  // Make sure that info.Holder() really points to an instance of the type.
  if (!V8XRSession::HasInstance(info.Holder(), info.GetIsolate())) {
    exception_state.ThrowTypeError("Illegal invocation");
    return;
  }
  XRSession* impl = V8XRSession::ToImpl(info.Holder());

  ScriptState* script_state = ScriptState::ForRelevantRealm(info);

  if (UNLIKELY(info.Length() < 1)) {
    exception_state.ThrowTypeError(ExceptionMessages::NotEnoughArguments(1, info.Length()));
    return;
  }

  XRReferenceSpaceOptions* options;
  options = NativeValueTraits<XRReferenceSpaceOptions>::NativeValue(info.GetIsolate(), info[0], exception_state);
  if (exception_state.HadException())
    return;

  ScriptPromise result = impl->requestReferenceSpace(script_state, options);
  V8SetReturnValue(info, result.V8Value());
}

static void RequestAnimationFrameMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  XRSession* impl = V8XRSession::ToImpl(info.Holder());

  if (UNLIKELY(info.Length() < 1)) {
    V8ThrowException::ThrowTypeError(info.GetIsolate(), ExceptionMessages::FailedToExecute("requestAnimationFrame", "XRSession", ExceptionMessages::NotEnoughArguments(1, info.Length())));
    return;
  }

  V8XRFrameRequestCallback* callback;
  if (info[0]->IsFunction()) {
    callback = V8XRFrameRequestCallback::Create(info[0].As<v8::Function>());
  } else {
    V8ThrowException::ThrowTypeError(info.GetIsolate(), ExceptionMessages::FailedToExecute("requestAnimationFrame", "XRSession", "The callback provided as parameter 1 is not a function."));
    return;
  }

  V8SetReturnValueInt(info, impl->requestAnimationFrame(callback));
}

static void CancelAnimationFrameMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exception_state(info.GetIsolate(), ExceptionState::kExecutionContext, "XRSession", "cancelAnimationFrame");

  XRSession* impl = V8XRSession::ToImpl(info.Holder());

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

static void GetInputSourcesMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  XRSession* impl = V8XRSession::ToImpl(info.Holder());

  V8SetReturnValue(info, FreezeV8Object(ToV8(impl->getInputSources(), info.Holder(), info.GetIsolate()), info.GetIsolate()));
}

static void RequestHitTestMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exception_state(info.GetIsolate(), ExceptionState::kExecutionContext, "XRSession", "requestHitTest");
  ExceptionToRejectPromiseScope reject_promise_scope(info, exception_state);

  // V8DOMConfiguration::kDoNotCheckHolder
  // Make sure that info.Holder() really points to an instance of the type.
  if (!V8XRSession::HasInstance(info.Holder(), info.GetIsolate())) {
    exception_state.ThrowTypeError("Illegal invocation");
    return;
  }
  XRSession* impl = V8XRSession::ToImpl(info.Holder());

  ScriptState* script_state = ScriptState::ForRelevantRealm(info);

  if (UNLIKELY(info.Length() < 2)) {
    exception_state.ThrowTypeError(ExceptionMessages::NotEnoughArguments(2, info.Length()));
    return;
  }

  XRRay* ray;
  XRSpace* space;
  ray = V8XRRay::ToImplWithTypeCheck(info.GetIsolate(), info[0]);
  if (!ray) {
    exception_state.ThrowTypeError("parameter 1 is not of type 'XRRay'.");
    return;
  }

  space = V8XRSpace::ToImplWithTypeCheck(info.GetIsolate(), info[1]);
  if (!space) {
    exception_state.ThrowTypeError("parameter 2 is not of type 'XRSpace'.");
    return;
  }

  ScriptPromise result = impl->requestHitTest(script_state, ray, space);
  V8SetReturnValue(info, result.V8Value());
}

static void UpdateWorldTrackingStateMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exception_state(info.GetIsolate(), ExceptionState::kExecutionContext, "XRSession", "updateWorldTrackingState");

  XRSession* impl = V8XRSession::ToImpl(info.Holder());

  XRWorldTrackingStateInit* state;
  if (!info[0]->IsNullOrUndefined() && !info[0]->IsObject()) {
    exception_state.ThrowTypeError("parameter 1 ('state') is not an object.");
    return;
  }
  state = NativeValueTraits<XRWorldTrackingStateInit>::NativeValue(info.GetIsolate(), info[0], exception_state);
  if (exception_state.HadException())
    return;

  impl->updateWorldTrackingState(state, exception_state);
  if (exception_state.HadException()) {
    return;
  }
}

static void EndMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exception_state(info.GetIsolate(), ExceptionState::kExecutionContext, "XRSession", "end");
  ExceptionToRejectPromiseScope reject_promise_scope(info, exception_state);

  // V8DOMConfiguration::kDoNotCheckHolder
  // Make sure that info.Holder() really points to an instance of the type.
  if (!V8XRSession::HasInstance(info.Holder(), info.GetIsolate())) {
    exception_state.ThrowTypeError("Illegal invocation");
    return;
  }
  XRSession* impl = V8XRSession::ToImpl(info.Holder());

  ScriptState* script_state = ScriptState::ForRelevantRealm(info);

  ScriptPromise result = impl->end(script_state);
  V8SetReturnValue(info, result.V8Value());
}

}  // namespace xr_session_v8_internal

void V8XRSession::EnvironmentBlendModeAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_XRSession_environmentBlendMode_Getter");

  xr_session_v8_internal::EnvironmentBlendModeAttributeGetter(info);
}

void V8XRSession::RenderStateAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_XRSession_renderState_Getter");

  xr_session_v8_internal::RenderStateAttributeGetter(info);
}

void V8XRSession::ViewerSpaceAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_XRSession_viewerSpace_Getter");

  xr_session_v8_internal::ViewerSpaceAttributeGetter(info);
}

void V8XRSession::OnblurAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_XRSession_onblur_Getter");

  xr_session_v8_internal::OnblurAttributeGetter(info);
}

void V8XRSession::OnblurAttributeSetterCallback(
    const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_XRSession_onblur_Setter");

  v8::Local<v8::Value> v8_value = info[0];

  xr_session_v8_internal::OnblurAttributeSetter(v8_value, info);
}

void V8XRSession::OnfocusAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_XRSession_onfocus_Getter");

  xr_session_v8_internal::OnfocusAttributeGetter(info);
}

void V8XRSession::OnfocusAttributeSetterCallback(
    const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_XRSession_onfocus_Setter");

  v8::Local<v8::Value> v8_value = info[0];

  xr_session_v8_internal::OnfocusAttributeSetter(v8_value, info);
}

void V8XRSession::OnendAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_XRSession_onend_Getter");

  xr_session_v8_internal::OnendAttributeGetter(info);
}

void V8XRSession::OnendAttributeSetterCallback(
    const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_XRSession_onend_Setter");

  v8::Local<v8::Value> v8_value = info[0];

  xr_session_v8_internal::OnendAttributeSetter(v8_value, info);
}

void V8XRSession::OnselectAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_XRSession_onselect_Getter");

  xr_session_v8_internal::OnselectAttributeGetter(info);
}

void V8XRSession::OnselectAttributeSetterCallback(
    const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_XRSession_onselect_Setter");

  v8::Local<v8::Value> v8_value = info[0];

  xr_session_v8_internal::OnselectAttributeSetter(v8_value, info);
}

void V8XRSession::OninputsourceschangeAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_XRSession_oninputsourceschange_Getter");

  xr_session_v8_internal::OninputsourceschangeAttributeGetter(info);
}

void V8XRSession::OninputsourceschangeAttributeSetterCallback(
    const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_XRSession_oninputsourceschange_Setter");

  v8::Local<v8::Value> v8_value = info[0];

  xr_session_v8_internal::OninputsourceschangeAttributeSetter(v8_value, info);
}

void V8XRSession::OnselectstartAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_XRSession_onselectstart_Getter");

  xr_session_v8_internal::OnselectstartAttributeGetter(info);
}

void V8XRSession::OnselectstartAttributeSetterCallback(
    const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_XRSession_onselectstart_Setter");

  v8::Local<v8::Value> v8_value = info[0];

  xr_session_v8_internal::OnselectstartAttributeSetter(v8_value, info);
}

void V8XRSession::OnselectendAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_XRSession_onselectend_Getter");

  xr_session_v8_internal::OnselectendAttributeGetter(info);
}

void V8XRSession::OnselectendAttributeSetterCallback(
    const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_XRSession_onselectend_Setter");

  v8::Local<v8::Value> v8_value = info[0];

  xr_session_v8_internal::OnselectendAttributeSetter(v8_value, info);
}

void V8XRSession::WorldTrackingStateAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_XRSession_worldTrackingState_Getter");

  xr_session_v8_internal::WorldTrackingStateAttributeGetter(info);
}

void V8XRSession::UpdateRenderStateMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_XRSession_updateRenderState");

  xr_session_v8_internal::UpdateRenderStateMethod(info);
}

void V8XRSession::RequestReferenceSpaceMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_XRSession_requestReferenceSpace");

  xr_session_v8_internal::RequestReferenceSpaceMethod(info);
}

void V8XRSession::RequestAnimationFrameMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_XRSession_requestAnimationFrame");

  xr_session_v8_internal::RequestAnimationFrameMethod(info);
}

void V8XRSession::CancelAnimationFrameMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_XRSession_cancelAnimationFrame");

  xr_session_v8_internal::CancelAnimationFrameMethod(info);
}

void V8XRSession::GetInputSourcesMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_XRSession_getInputSources");

  ExecutionContext* execution_context_for_measurement = CurrentExecutionContext(info.GetIsolate());
  UseCounter::Count(execution_context_for_measurement, WebFeature::kXRSessionGetInputSources);
  xr_session_v8_internal::GetInputSourcesMethod(info);
}

void V8XRSession::RequestHitTestMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_XRSession_requestHitTest");

  xr_session_v8_internal::RequestHitTestMethod(info);
}

void V8XRSession::UpdateWorldTrackingStateMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_XRSession_updateWorldTrackingState");

  xr_session_v8_internal::UpdateWorldTrackingStateMethod(info);
}

void V8XRSession::EndMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_XRSession_end");

  xr_session_v8_internal::EndMethod(info);
}

static void InstallV8XRSessionTemplate(
    v8::Isolate* isolate,
    const DOMWrapperWorld& world,
    v8::Local<v8::FunctionTemplate> interface_template) {
  // Initialize the interface object's template.
  V8DOMConfiguration::InitializeDOMInterfaceTemplate(isolate, interface_template, V8XRSession::GetWrapperTypeInfo()->interface_name, V8EventTarget::DomTemplate(isolate, world), V8XRSession::kInternalFieldCount);

  v8::Local<v8::Signature> signature = v8::Signature::New(isolate, interface_template);
  ALLOW_UNUSED_LOCAL(signature);
  v8::Local<v8::ObjectTemplate> instance_template = interface_template->InstanceTemplate();
  ALLOW_UNUSED_LOCAL(instance_template);
  v8::Local<v8::ObjectTemplate> prototype_template = interface_template->PrototypeTemplate();
  ALLOW_UNUSED_LOCAL(prototype_template);

  // Register IDL constants, attributes and operations.

  // Custom signature

  V8XRSession::InstallRuntimeEnabledFeaturesOnTemplate(
      isolate, world, interface_template);
}

void V8XRSession::InstallRuntimeEnabledFeaturesOnTemplate(
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

  // Custom signature
}

v8::Local<v8::FunctionTemplate> V8XRSession::DomTemplate(
    v8::Isolate* isolate, const DOMWrapperWorld& world) {
  return V8DOMConfiguration::DomClassTemplate(
      isolate, world, const_cast<WrapperTypeInfo*>(V8XRSession::GetWrapperTypeInfo()),
      InstallV8XRSessionTemplate);
}

bool V8XRSession::HasInstance(v8::Local<v8::Value> v8_value, v8::Isolate* isolate) {
  return V8PerIsolateData::From(isolate)->HasInstance(V8XRSession::GetWrapperTypeInfo(), v8_value);
}

v8::Local<v8::Object> V8XRSession::FindInstanceInPrototypeChain(
    v8::Local<v8::Value> v8_value, v8::Isolate* isolate) {
  return V8PerIsolateData::From(isolate)->FindInstanceInPrototypeChain(
      V8XRSession::GetWrapperTypeInfo(), v8_value);
}

XRSession* V8XRSession::ToImplWithTypeCheck(
    v8::Isolate* isolate, v8::Local<v8::Value> value) {
  return HasInstance(value, isolate) ? ToImpl(v8::Local<v8::Object>::Cast(value)) : nullptr;
}

XRSession* NativeValueTraits<XRSession>::NativeValue(
    v8::Isolate* isolate, v8::Local<v8::Value> value, ExceptionState& exception_state) {
  XRSession* native_value = V8XRSession::ToImplWithTypeCheck(isolate, value);
  if (!native_value) {
    exception_state.ThrowTypeError(ExceptionMessages::FailedToConvertJSValue(
        "XRSession"));
  }
  return native_value;
}

void V8XRSession::InstallConditionalFeatures(
    v8::Local<v8::Context> context,
    const DOMWrapperWorld& world,
    v8::Local<v8::Object> instance_object,
    v8::Local<v8::Object> prototype_object,
    v8::Local<v8::Function> interface_object,
    v8::Local<v8::FunctionTemplate> interface_template) {
  CHECK(!interface_template.IsEmpty());
  DCHECK((!prototype_object.IsEmpty() && !interface_object.IsEmpty()) ||
         !instance_object.IsEmpty());

  v8::Isolate* isolate = context->GetIsolate();

  v8::Local<v8::Signature> signature = v8::Signature::New(isolate, interface_template);
  ExecutionContext* execution_context = ToExecutionContext(context);
  DCHECK(execution_context);
  bool is_secure_context = (execution_context && execution_context->IsSecureContext());

  if (!prototype_object.IsEmpty() || !interface_object.IsEmpty()) {
    if (is_secure_context) {
      static const V8DOMConfiguration::AccessorConfiguration accessor_configurations[] = {
          { "environmentBlendMode", V8XRSession::EnvironmentBlendModeAttributeGetterCallback, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
          { "renderState", V8XRSession::RenderStateAttributeGetterCallback, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
          { "viewerSpace", V8XRSession::ViewerSpaceAttributeGetterCallback, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
          { "onblur", V8XRSession::OnblurAttributeGetterCallback, V8XRSession::OnblurAttributeSetterCallback, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
          { "onend", V8XRSession::OnendAttributeGetterCallback, V8XRSession::OnendAttributeSetterCallback, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
          { "onfocus", V8XRSession::OnfocusAttributeGetterCallback, V8XRSession::OnfocusAttributeSetterCallback, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
          { "oninputsourceschange", V8XRSession::OninputsourceschangeAttributeGetterCallback, V8XRSession::OninputsourceschangeAttributeSetterCallback, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
          { "onselect", V8XRSession::OnselectAttributeGetterCallback, V8XRSession::OnselectAttributeSetterCallback, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
          { "onselectend", V8XRSession::OnselectendAttributeGetterCallback, V8XRSession::OnselectendAttributeSetterCallback, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
          { "onselectstart", V8XRSession::OnselectstartAttributeGetterCallback, V8XRSession::OnselectstartAttributeSetterCallback, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
      };
      V8DOMConfiguration::InstallAccessors(
          isolate, world, instance_object, prototype_object, interface_object,
          signature, accessor_configurations,
          base::size(accessor_configurations));
      if (RuntimeEnabledFeatures::WebXRPlaneDetectionEnabled()) {
        static const V8DOMConfiguration::AccessorConfiguration accessor_configurations[] = {
            { "worldTrackingState", V8XRSession::WorldTrackingStateAttributeGetterCallback, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
        };
        V8DOMConfiguration::InstallAccessors(
            isolate, world, instance_object, prototype_object, interface_object,
            signature, accessor_configurations,
            base::size(accessor_configurations));
      }
    }
    if (is_secure_context) {
      {
        // Install updateRenderState configuration
        const V8DOMConfiguration::MethodConfiguration kConfigurations[] = {
            {"updateRenderState", V8XRSession::UpdateRenderStateMethodCallback, 0, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds}
        };
        for (const auto& config : kConfigurations) {
          V8DOMConfiguration::InstallMethod(
              isolate, world, instance_object, prototype_object,
              interface_object, signature, config);
        }
      }
    }
    if (is_secure_context) {
      {
        // Install requestReferenceSpace configuration
        const V8DOMConfiguration::MethodConfiguration kConfigurations[] = {
            {"requestReferenceSpace", V8XRSession::RequestReferenceSpaceMethodCallback, 1, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kDoNotCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds}
        };
        for (const auto& config : kConfigurations) {
          V8DOMConfiguration::InstallMethod(
              isolate, world, instance_object, prototype_object,
              interface_object, signature, config);
        }
      }
    }
    if (is_secure_context) {
      {
        // Install requestAnimationFrame configuration
        const V8DOMConfiguration::MethodConfiguration kConfigurations[] = {
            {"requestAnimationFrame", V8XRSession::RequestAnimationFrameMethodCallback, 1, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds}
        };
        for (const auto& config : kConfigurations) {
          V8DOMConfiguration::InstallMethod(
              isolate, world, instance_object, prototype_object,
              interface_object, signature, config);
        }
      }
    }
    if (is_secure_context) {
      {
        // Install cancelAnimationFrame configuration
        const V8DOMConfiguration::MethodConfiguration kConfigurations[] = {
            {"cancelAnimationFrame", V8XRSession::CancelAnimationFrameMethodCallback, 1, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds}
        };
        for (const auto& config : kConfigurations) {
          V8DOMConfiguration::InstallMethod(
              isolate, world, instance_object, prototype_object,
              interface_object, signature, config);
        }
      }
    }
    if (is_secure_context) {
      {
        // Install getInputSources configuration
        const V8DOMConfiguration::MethodConfiguration kConfigurations[] = {
            {"getInputSources", V8XRSession::GetInputSourcesMethodCallback, 0, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds}
        };
        for (const auto& config : kConfigurations) {
          V8DOMConfiguration::InstallMethod(
              isolate, world, instance_object, prototype_object,
              interface_object, signature, config);
        }
      }
    }
    if (is_secure_context) {
      if (RuntimeEnabledFeatures::WebXRHitTestEnabled()) {
        {
          // Install requestHitTest configuration
          const V8DOMConfiguration::MethodConfiguration kConfigurations[] = {
              {"requestHitTest", V8XRSession::RequestHitTestMethodCallback, 2, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kDoNotCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds}
          };
          for (const auto& config : kConfigurations) {
            V8DOMConfiguration::InstallMethod(
                isolate, world, instance_object, prototype_object,
                interface_object, signature, config);
          }
        }
      }
    }
    if (is_secure_context) {
      if (RuntimeEnabledFeatures::WebXRPlaneDetectionEnabled()) {
        {
          // Install updateWorldTrackingState configuration
          const V8DOMConfiguration::MethodConfiguration kConfigurations[] = {
              {"updateWorldTrackingState", V8XRSession::UpdateWorldTrackingStateMethodCallback, 0, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds}
          };
          for (const auto& config : kConfigurations) {
            V8DOMConfiguration::InstallMethod(
                isolate, world, instance_object, prototype_object,
                interface_object, signature, config);
          }
        }
      }
    }
    if (is_secure_context) {
      {
        // Install end configuration
        const V8DOMConfiguration::MethodConfiguration kConfigurations[] = {
            {"end", V8XRSession::EndMethodCallback, 0, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kDoNotCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds}
        };
        for (const auto& config : kConfigurations) {
          V8DOMConfiguration::InstallMethod(
              isolate, world, instance_object, prototype_object,
              interface_object, signature, config);
        }
      }
    }
  }
}

}  // namespace blink
