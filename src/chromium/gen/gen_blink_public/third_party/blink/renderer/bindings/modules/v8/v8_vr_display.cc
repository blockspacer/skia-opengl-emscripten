// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated from the Jinja2 template
// third_party/blink/renderer/bindings/templates/interface.cc.tmpl
// by the script code_generator_v8.py.
// DO NOT MODIFY!

// clang-format off
#include "third_party/blink/renderer/bindings/modules/v8/v8_vr_display.h"

#include <algorithm>

#include "base/memory/scoped_refptr.h"
#include "third_party/blink/renderer/bindings/core/v8/idl_types.h"
#include "third_party/blink/renderer/bindings/core/v8/native_value_traits_impl.h"
#include "third_party/blink/renderer/bindings/core/v8/script_promise.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_dom_configuration.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_frame_request_callback.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_vr_display_capabilities.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_vr_eye_parameters.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_vr_frame_data.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_vr_layer_init.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_vr_stage_parameters.h"
#include "third_party/blink/renderer/core/execution_context/execution_context.h"
#include "third_party/blink/renderer/core/frame/use_counter.h"
#include "third_party/blink/renderer/platform/bindings/exception_messages.h"
#include "third_party/blink/renderer/platform/bindings/exception_state.h"
#include "third_party/blink/renderer/platform/bindings/runtime_call_stats.h"
#include "third_party/blink/renderer/platform/bindings/script_state.h"
#include "third_party/blink/renderer/platform/bindings/v8_object_constructor.h"
#include "third_party/blink/renderer/platform/bindings/v8_private_property.h"
#include "third_party/blink/renderer/platform/scheduler/public/cooperative_scheduling_manager.h"
#include "third_party/blink/renderer/platform/wtf/get_ptr.h"

namespace blink {

// Suppress warning: global constructors, because struct WrapperTypeInfo is trivial
// and does not depend on another global objects.
#if defined(COMPONENT_BUILD) && defined(WIN32) && defined(__clang__)
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wglobal-constructors"
#endif
const WrapperTypeInfo v8_vr_display_wrapper_type_info = {
    gin::kEmbedderBlink,
    V8VRDisplay::DomTemplate,
    nullptr,
    "VRDisplay",
    V8EventTarget::GetWrapperTypeInfo(),
    WrapperTypeInfo::kWrapperTypeObjectPrototype,
    WrapperTypeInfo::kObjectClassId,
    WrapperTypeInfo::kInheritFromActiveScriptWrappable,
};
#if defined(COMPONENT_BUILD) && defined(WIN32) && defined(__clang__)
#pragma clang diagnostic pop
#endif

// This static member must be declared by DEFINE_WRAPPERTYPEINFO in VRDisplay.h.
// For details, see the comment of DEFINE_WRAPPERTYPEINFO in
// platform/bindings/ScriptWrappable.h.
const WrapperTypeInfo& VRDisplay::wrapper_type_info_ = v8_vr_display_wrapper_type_info;

// [ActiveScriptWrappable]
static_assert(
    std::is_base_of<ActiveScriptWrappableBase, VRDisplay>::value,
    "VRDisplay does not inherit from ActiveScriptWrappable<>, but specifying "
    "[ActiveScriptWrappable] extended attribute in the IDL file.  "
    "Be consistent.");
static_assert(
    !std::is_same<decltype(&VRDisplay::HasPendingActivity),
                  decltype(&ScriptWrappable::HasPendingActivity)>::value,
    "VRDisplay is not overriding hasPendingActivity(), but is specifying "
    "[ActiveScriptWrappable] extended attribute in the IDL file.  "
    "Be consistent.");

namespace vr_display_v8_internal {

static void DisplayIdAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  VRDisplay* impl = V8VRDisplay::ToImpl(holder);

  V8SetReturnValueUnsigned(info, impl->displayId());
}

static void DisplayNameAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  VRDisplay* impl = V8VRDisplay::ToImpl(holder);

  V8SetReturnValueString(info, impl->displayName(), info.GetIsolate());
}

static void IsPresentingAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  VRDisplay* impl = V8VRDisplay::ToImpl(holder);

  V8SetReturnValueBool(info, impl->isPresenting());
}

static void CapabilitiesAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  VRDisplay* impl = V8VRDisplay::ToImpl(holder);

  VRDisplayCapabilities* cpp_value(WTF::GetPtr(impl->capabilities()));

  // Keep the wrapper object for the return value alive as long as |this|
  // object is alive in order to save creation time of the wrapper object.
  if (cpp_value && DOMDataStore::SetReturnValue(info.GetReturnValue(), cpp_value))
    return;
  v8::Local<v8::Value> v8_value(ToV8(cpp_value, holder, info.GetIsolate()));
  V8PrivateProperty::GetSymbol(
      info.GetIsolate(), "KeepAlive#VRDisplay#capabilities")
      .Set(holder, v8_value);

  V8SetReturnValue(info, v8_value);
}

static void StageParametersAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  VRDisplay* impl = V8VRDisplay::ToImpl(holder);

  VRStageParameters* cpp_value(WTF::GetPtr(impl->stageParameters()));

  // Keep the wrapper object for the return value alive as long as |this|
  // object is alive in order to save creation time of the wrapper object.
  if (cpp_value && DOMDataStore::SetReturnValue(info.GetReturnValue(), cpp_value))
    return;
  v8::Local<v8::Value> v8_value(ToV8(cpp_value, holder, info.GetIsolate()));
  V8PrivateProperty::GetSymbol(
      info.GetIsolate(), "KeepAlive#VRDisplay#stageParameters")
      .Set(holder, v8_value);

  V8SetReturnValue(info, v8_value);
}

static void DepthNearAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  VRDisplay* impl = V8VRDisplay::ToImpl(holder);

  V8SetReturnValue(info, impl->depthNear());
}

static void DepthNearAttributeSetter(
    v8::Local<v8::Value> v8_value, const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Isolate* isolate = info.GetIsolate();
  ALLOW_UNUSED_LOCAL(isolate);

  v8::Local<v8::Object> holder = info.Holder();
  ALLOW_UNUSED_LOCAL(holder);

  VRDisplay* impl = V8VRDisplay::ToImpl(holder);

  ExceptionState exception_state(isolate, ExceptionState::kSetterContext, "VRDisplay", "depthNear");

  // Prepare the value to be set.
  double cpp_value = NativeValueTraits<IDLDouble>::NativeValue(info.GetIsolate(), v8_value, exception_state);
  if (exception_state.HadException())
    return;

  impl->setDepthNear(cpp_value);
}

static void DepthFarAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  VRDisplay* impl = V8VRDisplay::ToImpl(holder);

  V8SetReturnValue(info, impl->depthFar());
}

static void DepthFarAttributeSetter(
    v8::Local<v8::Value> v8_value, const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Isolate* isolate = info.GetIsolate();
  ALLOW_UNUSED_LOCAL(isolate);

  v8::Local<v8::Object> holder = info.Holder();
  ALLOW_UNUSED_LOCAL(holder);

  VRDisplay* impl = V8VRDisplay::ToImpl(holder);

  ExceptionState exception_state(isolate, ExceptionState::kSetterContext, "VRDisplay", "depthFar");

  // Prepare the value to be set.
  double cpp_value = NativeValueTraits<IDLDouble>::NativeValue(info.GetIsolate(), v8_value, exception_state);
  if (exception_state.HadException())
    return;

  impl->setDepthFar(cpp_value);
}

static void GetFrameDataMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  VRDisplay* impl = V8VRDisplay::ToImpl(info.Holder());

  if (UNLIKELY(info.Length() < 1)) {
    V8ThrowException::ThrowTypeError(info.GetIsolate(), ExceptionMessages::FailedToExecute("getFrameData", "VRDisplay", ExceptionMessages::NotEnoughArguments(1, info.Length())));
    return;
  }

  VRFrameData* frame_data;
  frame_data = V8VRFrameData::ToImplWithTypeCheck(info.GetIsolate(), info[0]);
  if (!frame_data) {
    V8ThrowException::ThrowTypeError(info.GetIsolate(), ExceptionMessages::FailedToExecute("getFrameData", "VRDisplay", "parameter 1 is not of type 'VRFrameData'."));
    return;
  }

  V8SetReturnValueBool(info, impl->getFrameData(frame_data));
}

static void GetEyeParametersMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exception_state(info.GetIsolate(), ExceptionState::kExecutionContext, "VRDisplay", "getEyeParameters");

  VRDisplay* impl = V8VRDisplay::ToImpl(info.Holder());

  if (UNLIKELY(info.Length() < 1)) {
    exception_state.ThrowTypeError(ExceptionMessages::NotEnoughArguments(1, info.Length()));
    return;
  }

  V8StringResource<> which_eye;
  which_eye = info[0];
  if (!which_eye.Prepare())
    return;
  const char* kValidWhichEyeValues[] = {
      "left",
      "right",
  };
  if (!IsValidEnum(which_eye, kValidWhichEyeValues, base::size(kValidWhichEyeValues), "VREye", exception_state)) {
    return;
  }

  V8SetReturnValue(info, impl->getEyeParameters(which_eye));
}

static void RequestAnimationFrameMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  VRDisplay* impl = V8VRDisplay::ToImpl(info.Holder());

  if (UNLIKELY(info.Length() < 1)) {
    V8ThrowException::ThrowTypeError(info.GetIsolate(), ExceptionMessages::FailedToExecute("requestAnimationFrame", "VRDisplay", ExceptionMessages::NotEnoughArguments(1, info.Length())));
    return;
  }

  V8FrameRequestCallback* callback;
  if (info[0]->IsFunction()) {
    callback = V8FrameRequestCallback::Create(info[0].As<v8::Function>());
  } else {
    V8ThrowException::ThrowTypeError(info.GetIsolate(), ExceptionMessages::FailedToExecute("requestAnimationFrame", "VRDisplay", "The callback provided as parameter 1 is not a function."));
    return;
  }

  V8SetReturnValueInt(info, impl->requestAnimationFrame(callback));
}

static void CancelAnimationFrameMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exception_state(info.GetIsolate(), ExceptionState::kExecutionContext, "VRDisplay", "cancelAnimationFrame");

  VRDisplay* impl = V8VRDisplay::ToImpl(info.Holder());

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

static void RequestPresentMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exception_state(info.GetIsolate(), ExceptionState::kExecutionContext, "VRDisplay", "requestPresent");
  ExceptionToRejectPromiseScope reject_promise_scope(info, exception_state);

  // V8DOMConfiguration::kDoNotCheckHolder
  // Make sure that info.Holder() really points to an instance of the type.
  if (!V8VRDisplay::HasInstance(info.Holder(), info.GetIsolate())) {
    exception_state.ThrowTypeError("Illegal invocation");
    return;
  }
  VRDisplay* impl = V8VRDisplay::ToImpl(info.Holder());

  ScriptState* script_state = ScriptState::ForRelevantRealm(info);

  if (UNLIKELY(info.Length() < 1)) {
    exception_state.ThrowTypeError(ExceptionMessages::NotEnoughArguments(1, info.Length()));
    return;
  }

  HeapVector<Member<VRLayerInit>> layers;
  layers = NativeValueTraits<IDLSequence<VRLayerInit>>::NativeValue(info.GetIsolate(), info[0], exception_state);
  if (exception_state.HadException())
    return;

  ScriptPromise result = impl->requestPresent(script_state, layers);
  V8SetReturnValue(info, result.V8Value());
}

static void ExitPresentMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exception_state(info.GetIsolate(), ExceptionState::kExecutionContext, "VRDisplay", "exitPresent");
  ExceptionToRejectPromiseScope reject_promise_scope(info, exception_state);

  // V8DOMConfiguration::kDoNotCheckHolder
  // Make sure that info.Holder() really points to an instance of the type.
  if (!V8VRDisplay::HasInstance(info.Holder(), info.GetIsolate())) {
    exception_state.ThrowTypeError("Illegal invocation");
    return;
  }
  VRDisplay* impl = V8VRDisplay::ToImpl(info.Holder());

  ScriptState* script_state = ScriptState::ForRelevantRealm(info);

  ScriptPromise result = impl->exitPresent(script_state);
  V8SetReturnValue(info, result.V8Value());
}

static void GetLayersMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  VRDisplay* impl = V8VRDisplay::ToImpl(info.Holder());

  V8SetReturnValue(info, ToV8(impl->getLayers(), info.Holder(), info.GetIsolate()));
}

static void SubmitFrameMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  VRDisplay* impl = V8VRDisplay::ToImpl(info.Holder());

  impl->submitFrame();
}

}  // namespace vr_display_v8_internal

void V8VRDisplay::DisplayIdAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_VRDisplay_displayId_Getter");

  vr_display_v8_internal::DisplayIdAttributeGetter(info);
}

void V8VRDisplay::DisplayNameAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_VRDisplay_displayName_Getter");

  ExecutionContext* execution_context_for_measurement = CurrentExecutionContext(info.GetIsolate());
  UseCounter::Count(execution_context_for_measurement, WebFeature::kVRDisplayDisplayName);

  vr_display_v8_internal::DisplayNameAttributeGetter(info);
}

void V8VRDisplay::IsPresentingAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_VRDisplay_isPresenting_Getter");

  vr_display_v8_internal::IsPresentingAttributeGetter(info);
}

void V8VRDisplay::CapabilitiesAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_VRDisplay_capabilities_Getter");

  vr_display_v8_internal::CapabilitiesAttributeGetter(info);
}

void V8VRDisplay::StageParametersAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_VRDisplay_stageParameters_Getter");

  vr_display_v8_internal::StageParametersAttributeGetter(info);
}

void V8VRDisplay::DepthNearAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_VRDisplay_depthNear_Getter");

  vr_display_v8_internal::DepthNearAttributeGetter(info);
}

void V8VRDisplay::DepthNearAttributeSetterCallback(
    const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_VRDisplay_depthNear_Setter");

  v8::Local<v8::Value> v8_value = info[0];

  vr_display_v8_internal::DepthNearAttributeSetter(v8_value, info);
}

void V8VRDisplay::DepthFarAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_VRDisplay_depthFar_Getter");

  vr_display_v8_internal::DepthFarAttributeGetter(info);
}

void V8VRDisplay::DepthFarAttributeSetterCallback(
    const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_VRDisplay_depthFar_Setter");

  v8::Local<v8::Value> v8_value = info[0];

  vr_display_v8_internal::DepthFarAttributeSetter(v8_value, info);
}

void V8VRDisplay::GetFrameDataMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_VRDisplay_getFrameData");

  ExecutionContext* execution_context_for_measurement = CurrentExecutionContext(info.GetIsolate());
  UseCounter::Count(execution_context_for_measurement, WebFeature::kVRDisplayGetFrameData);
  vr_display_v8_internal::GetFrameDataMethod(info);
}

void V8VRDisplay::GetEyeParametersMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_VRDisplay_getEyeParameters");

  vr_display_v8_internal::GetEyeParametersMethod(info);
}

void V8VRDisplay::RequestAnimationFrameMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_VRDisplay_requestAnimationFrame");

  vr_display_v8_internal::RequestAnimationFrameMethod(info);
}

void V8VRDisplay::CancelAnimationFrameMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_VRDisplay_cancelAnimationFrame");

  vr_display_v8_internal::CancelAnimationFrameMethod(info);
}

void V8VRDisplay::RequestPresentMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_VRDisplay_requestPresent");

  vr_display_v8_internal::RequestPresentMethod(info);
}

void V8VRDisplay::ExitPresentMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_VRDisplay_exitPresent");

  vr_display_v8_internal::ExitPresentMethod(info);
}

void V8VRDisplay::GetLayersMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_VRDisplay_getLayers");

  vr_display_v8_internal::GetLayersMethod(info);
}

void V8VRDisplay::SubmitFrameMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_VRDisplay_submitFrame");

  vr_display_v8_internal::SubmitFrameMethod(info);
}

static constexpr V8DOMConfiguration::AccessorConfiguration kV8VRDisplayAccessors[] = {
    { "displayId", V8VRDisplay::DisplayIdAttributeGetterCallback, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
    { "displayName", V8VRDisplay::DisplayNameAttributeGetterCallback, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
    { "isPresenting", V8VRDisplay::IsPresentingAttributeGetterCallback, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
    { "capabilities", V8VRDisplay::CapabilitiesAttributeGetterCallback, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
    { "stageParameters", V8VRDisplay::StageParametersAttributeGetterCallback, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
    { "depthNear", V8VRDisplay::DepthNearAttributeGetterCallback, V8VRDisplay::DepthNearAttributeSetterCallback, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
    { "depthFar", V8VRDisplay::DepthFarAttributeGetterCallback, V8VRDisplay::DepthFarAttributeSetterCallback, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
};

static constexpr V8DOMConfiguration::MethodConfiguration kV8VRDisplayMethods[] = {
    {"getFrameData", V8VRDisplay::GetFrameDataMethodCallback, 1, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"getEyeParameters", V8VRDisplay::GetEyeParametersMethodCallback, 1, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"requestAnimationFrame", V8VRDisplay::RequestAnimationFrameMethodCallback, 1, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"cancelAnimationFrame", V8VRDisplay::CancelAnimationFrameMethodCallback, 1, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"requestPresent", V8VRDisplay::RequestPresentMethodCallback, 1, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kDoNotCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"exitPresent", V8VRDisplay::ExitPresentMethodCallback, 0, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kDoNotCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"getLayers", V8VRDisplay::GetLayersMethodCallback, 0, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"submitFrame", V8VRDisplay::SubmitFrameMethodCallback, 0, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
};

static void InstallV8VRDisplayTemplate(
    v8::Isolate* isolate,
    const DOMWrapperWorld& world,
    v8::Local<v8::FunctionTemplate> interface_template) {
  // Initialize the interface object's template.
  V8DOMConfiguration::InitializeDOMInterfaceTemplate(isolate, interface_template, V8VRDisplay::GetWrapperTypeInfo()->interface_name, V8EventTarget::DomTemplate(isolate, world), V8VRDisplay::kInternalFieldCount);

  v8::Local<v8::Signature> signature = v8::Signature::New(isolate, interface_template);
  ALLOW_UNUSED_LOCAL(signature);
  v8::Local<v8::ObjectTemplate> instance_template = interface_template->InstanceTemplate();
  ALLOW_UNUSED_LOCAL(instance_template);
  v8::Local<v8::ObjectTemplate> prototype_template = interface_template->PrototypeTemplate();
  ALLOW_UNUSED_LOCAL(prototype_template);

  // Register IDL constants, attributes and operations.
  V8DOMConfiguration::InstallAccessors(
      isolate, world, instance_template, prototype_template, interface_template,
      signature, kV8VRDisplayAccessors, base::size(kV8VRDisplayAccessors));
  V8DOMConfiguration::InstallMethods(
      isolate, world, instance_template, prototype_template, interface_template,
      signature, kV8VRDisplayMethods, base::size(kV8VRDisplayMethods));

  // Custom signature

  V8VRDisplay::InstallRuntimeEnabledFeaturesOnTemplate(
      isolate, world, interface_template);
}

void V8VRDisplay::InstallRuntimeEnabledFeaturesOnTemplate(
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

v8::Local<v8::FunctionTemplate> V8VRDisplay::DomTemplate(
    v8::Isolate* isolate, const DOMWrapperWorld& world) {
  return V8DOMConfiguration::DomClassTemplate(
      isolate, world, const_cast<WrapperTypeInfo*>(V8VRDisplay::GetWrapperTypeInfo()),
      InstallV8VRDisplayTemplate);
}

bool V8VRDisplay::HasInstance(v8::Local<v8::Value> v8_value, v8::Isolate* isolate) {
  return V8PerIsolateData::From(isolate)->HasInstance(V8VRDisplay::GetWrapperTypeInfo(), v8_value);
}

v8::Local<v8::Object> V8VRDisplay::FindInstanceInPrototypeChain(
    v8::Local<v8::Value> v8_value, v8::Isolate* isolate) {
  return V8PerIsolateData::From(isolate)->FindInstanceInPrototypeChain(
      V8VRDisplay::GetWrapperTypeInfo(), v8_value);
}

VRDisplay* V8VRDisplay::ToImplWithTypeCheck(
    v8::Isolate* isolate, v8::Local<v8::Value> value) {
  return HasInstance(value, isolate) ? ToImpl(v8::Local<v8::Object>::Cast(value)) : nullptr;
}

VRDisplay* NativeValueTraits<VRDisplay>::NativeValue(
    v8::Isolate* isolate, v8::Local<v8::Value> value, ExceptionState& exception_state) {
  VRDisplay* native_value = V8VRDisplay::ToImplWithTypeCheck(isolate, value);
  if (!native_value) {
    exception_state.ThrowTypeError(ExceptionMessages::FailedToConvertJSValue(
        "VRDisplay"));
  }
  return native_value;
}

}  // namespace blink
