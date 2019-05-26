// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated from the Jinja2 template
// third_party/blink/renderer/bindings/templates/interface.cc.tmpl
// by the script code_generator_v8.py.
// DO NOT MODIFY!

// clang-format off
#include "third_party/blink/renderer/bindings/modules/v8/v8_rtc_ice_transport.h"

#include <algorithm>

#include "base/memory/scoped_refptr.h"
#include "third_party/blink/renderer/bindings/core/v8/idl_types.h"
#include "third_party/blink/renderer/bindings/core/v8/js_event_handler.h"
#include "third_party/blink/renderer/bindings/core/v8/native_value_traits_impl.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_dom_configuration.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_rtc_ice_candidate.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_rtc_ice_candidate_pair.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_rtc_ice_gather_options.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_rtc_ice_parameters.h"
#include "third_party/blink/renderer/core/execution_context/execution_context.h"
#include "third_party/blink/renderer/core/frame/local_dom_window.h"
#include "third_party/blink/renderer/core/frame/use_counter.h"
#include "third_party/blink/renderer/core/inspector/console_message.h"
#include "third_party/blink/renderer/platform/bindings/exception_messages.h"
#include "third_party/blink/renderer/platform/bindings/exception_state.h"
#include "third_party/blink/renderer/platform/bindings/runtime_call_stats.h"
#include "third_party/blink/renderer/platform/bindings/script_state.h"
#include "third_party/blink/renderer/platform/bindings/v8_object_constructor.h"
#include "third_party/blink/renderer/platform/bindings/v8_per_context_data.h"
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
const WrapperTypeInfo v8_rtc_ice_transport_wrapper_type_info = {
    gin::kEmbedderBlink,
    V8RTCIceTransport::DomTemplate,
    V8RTCIceTransport::InstallConditionalFeatures,
    "RTCIceTransport",
    V8EventTarget::GetWrapperTypeInfo(),
    WrapperTypeInfo::kWrapperTypeObjectPrototype,
    WrapperTypeInfo::kObjectClassId,
    WrapperTypeInfo::kInheritFromActiveScriptWrappable,
};
#if defined(COMPONENT_BUILD) && defined(WIN32) && defined(__clang__)
#pragma clang diagnostic pop
#endif

// This static member must be declared by DEFINE_WRAPPERTYPEINFO in RTCIceTransport.h.
// For details, see the comment of DEFINE_WRAPPERTYPEINFO in
// platform/bindings/ScriptWrappable.h.
const WrapperTypeInfo& RTCIceTransport::wrapper_type_info_ = v8_rtc_ice_transport_wrapper_type_info;

// [ActiveScriptWrappable]
static_assert(
    std::is_base_of<ActiveScriptWrappableBase, RTCIceTransport>::value,
    "RTCIceTransport does not inherit from ActiveScriptWrappable<>, but specifying "
    "[ActiveScriptWrappable] extended attribute in the IDL file.  "
    "Be consistent.");
static_assert(
    !std::is_same<decltype(&RTCIceTransport::HasPendingActivity),
                  decltype(&ScriptWrappable::HasPendingActivity)>::value,
    "RTCIceTransport is not overriding hasPendingActivity(), but is specifying "
    "[ActiveScriptWrappable] extended attribute in the IDL file.  "
    "Be consistent.");

namespace rtc_ice_transport_v8_internal {

static void RoleAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  RTCIceTransport* impl = V8RTCIceTransport::ToImpl(holder);

  V8SetReturnValueStringOrNull(info, impl->role(), info.GetIsolate());
}

static void StateAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  RTCIceTransport* impl = V8RTCIceTransport::ToImpl(holder);

  V8SetReturnValueString(info, impl->state(), info.GetIsolate());
}

static void GatheringStateAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  RTCIceTransport* impl = V8RTCIceTransport::ToImpl(holder);

  V8SetReturnValueString(info, impl->gatheringState(), info.GetIsolate());
}

static void OnstatechangeAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  RTCIceTransport* impl = V8RTCIceTransport::ToImpl(holder);

  EventListener* cpp_value(WTF::GetPtr(impl->onstatechange()));

  V8SetReturnValue(info, JSEventHandler::AsV8Value(info.GetIsolate(), impl, cpp_value));
}

static void OnstatechangeAttributeSetter(
    v8::Local<v8::Value> v8_value, const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Isolate* isolate = info.GetIsolate();
  ALLOW_UNUSED_LOCAL(isolate);

  v8::Local<v8::Object> holder = info.Holder();
  ALLOW_UNUSED_LOCAL(holder);

  RTCIceTransport* impl = V8RTCIceTransport::ToImpl(holder);

  // Prepare the value to be set.

  impl->setOnstatechange(JSEventHandler::CreateOrNull(v8_value, JSEventHandler::HandlerType::kEventHandler));
}

static void OngatheringstatechangeAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  RTCIceTransport* impl = V8RTCIceTransport::ToImpl(holder);

  EventListener* cpp_value(WTF::GetPtr(impl->ongatheringstatechange()));

  V8SetReturnValue(info, JSEventHandler::AsV8Value(info.GetIsolate(), impl, cpp_value));
}

static void OngatheringstatechangeAttributeSetter(
    v8::Local<v8::Value> v8_value, const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Isolate* isolate = info.GetIsolate();
  ALLOW_UNUSED_LOCAL(isolate);

  v8::Local<v8::Object> holder = info.Holder();
  ALLOW_UNUSED_LOCAL(holder);

  RTCIceTransport* impl = V8RTCIceTransport::ToImpl(holder);

  // Prepare the value to be set.

  impl->setOngatheringstatechange(JSEventHandler::CreateOrNull(v8_value, JSEventHandler::HandlerType::kEventHandler));
}

static void OnselectedcandidatepairchangeAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  RTCIceTransport* impl = V8RTCIceTransport::ToImpl(holder);

  EventListener* cpp_value(WTF::GetPtr(impl->onselectedcandidatepairchange()));

  V8SetReturnValue(info, JSEventHandler::AsV8Value(info.GetIsolate(), impl, cpp_value));
}

static void OnselectedcandidatepairchangeAttributeSetter(
    v8::Local<v8::Value> v8_value, const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Isolate* isolate = info.GetIsolate();
  ALLOW_UNUSED_LOCAL(isolate);

  v8::Local<v8::Object> holder = info.Holder();
  ALLOW_UNUSED_LOCAL(holder);

  RTCIceTransport* impl = V8RTCIceTransport::ToImpl(holder);

  // Prepare the value to be set.

  impl->setOnselectedcandidatepairchange(JSEventHandler::CreateOrNull(v8_value, JSEventHandler::HandlerType::kEventHandler));
}

static void OnicecandidateAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  RTCIceTransport* impl = V8RTCIceTransport::ToImpl(holder);

  EventListener* cpp_value(WTF::GetPtr(impl->onicecandidate()));

  V8SetReturnValue(info, JSEventHandler::AsV8Value(info.GetIsolate(), impl, cpp_value));
}

static void OnicecandidateAttributeSetter(
    v8::Local<v8::Value> v8_value, const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Isolate* isolate = info.GetIsolate();
  ALLOW_UNUSED_LOCAL(isolate);

  v8::Local<v8::Object> holder = info.Holder();
  ALLOW_UNUSED_LOCAL(holder);

  RTCIceTransport* impl = V8RTCIceTransport::ToImpl(holder);

  // Prepare the value to be set.

  impl->setOnicecandidate(JSEventHandler::CreateOrNull(v8_value, JSEventHandler::HandlerType::kEventHandler));
}

static void GetLocalCandidatesMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RTCIceTransport* impl = V8RTCIceTransport::ToImpl(info.Holder());

  V8SetReturnValue(info, ToV8(impl->getLocalCandidates(), info.Holder(), info.GetIsolate()));
}

static void GetRemoteCandidatesMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RTCIceTransport* impl = V8RTCIceTransport::ToImpl(info.Holder());

  V8SetReturnValue(info, ToV8(impl->getRemoteCandidates(), info.Holder(), info.GetIsolate()));
}

static void GetSelectedCandidatePairMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RTCIceTransport* impl = V8RTCIceTransport::ToImpl(info.Holder());

  RTCIceCandidatePair* result = impl->getSelectedCandidatePair();
  V8SetReturnValue(info, result);
}

static void GetLocalParametersMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RTCIceTransport* impl = V8RTCIceTransport::ToImpl(info.Holder());

  RTCIceParameters* result = impl->getLocalParameters();
  V8SetReturnValue(info, result);
}

static void GetRemoteParametersMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RTCIceTransport* impl = V8RTCIceTransport::ToImpl(info.Holder());

  RTCIceParameters* result = impl->getRemoteParameters();
  V8SetReturnValue(info, result);
}

static void GatherMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exception_state(info.GetIsolate(), ExceptionState::kExecutionContext, "RTCIceTransport", "gather");

  RTCIceTransport* impl = V8RTCIceTransport::ToImpl(info.Holder());

  if (UNLIKELY(info.Length() < 1)) {
    exception_state.ThrowTypeError(ExceptionMessages::NotEnoughArguments(1, info.Length()));
    return;
  }

  RTCIceGatherOptions* options;
  if (!info[0]->IsNullOrUndefined() && !info[0]->IsObject()) {
    exception_state.ThrowTypeError("parameter 1 ('options') is not an object.");
    return;
  }
  options = NativeValueTraits<RTCIceGatherOptions>::NativeValue(info.GetIsolate(), info[0], exception_state);
  if (exception_state.HadException())
    return;

  impl->gather(options, exception_state);
  if (exception_state.HadException()) {
    return;
  }
}

static void StartMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exception_state(info.GetIsolate(), ExceptionState::kExecutionContext, "RTCIceTransport", "start");

  RTCIceTransport* impl = V8RTCIceTransport::ToImpl(info.Holder());

  if (UNLIKELY(info.Length() < 1)) {
    exception_state.ThrowTypeError(ExceptionMessages::NotEnoughArguments(1, info.Length()));
    return;
  }

  RTCIceParameters* remote_parameters;
  V8StringResource<> role;
  if (!info[0]->IsNullOrUndefined() && !info[0]->IsObject()) {
    exception_state.ThrowTypeError("parameter 1 ('remoteParameters') is not an object.");
    return;
  }
  remote_parameters = NativeValueTraits<RTCIceParameters>::NativeValue(info.GetIsolate(), info[0], exception_state);
  if (exception_state.HadException())
    return;

  if (!info[1]->IsUndefined()) {
    role = info[1];
    if (!role.Prepare())
      return;
    const char* kValidRoleValues[] = {
        "controlling",
        "controlled",
    };
    if (!IsValidEnum(role, kValidRoleValues, base::size(kValidRoleValues), "RTCIceRole", exception_state)) {
      return;
    }
  } else {
    role = "controlled";
  }

  impl->start(remote_parameters, role, exception_state);
  if (exception_state.HadException()) {
    return;
  }
}

static void StopMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RTCIceTransport* impl = V8RTCIceTransport::ToImpl(info.Holder());

  impl->stop();
}

static void AddRemoteCandidateMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exception_state(info.GetIsolate(), ExceptionState::kExecutionContext, "RTCIceTransport", "addRemoteCandidate");

  RTCIceTransport* impl = V8RTCIceTransport::ToImpl(info.Holder());

  if (UNLIKELY(info.Length() < 1)) {
    exception_state.ThrowTypeError(ExceptionMessages::NotEnoughArguments(1, info.Length()));
    return;
  }

  RTCIceCandidate* remote_candidate;
  remote_candidate = V8RTCIceCandidate::ToImplWithTypeCheck(info.GetIsolate(), info[0]);
  if (!remote_candidate) {
    exception_state.ThrowTypeError("parameter 1 is not of type 'RTCIceCandidate'.");
    return;
  }

  impl->addRemoteCandidate(remote_candidate, exception_state);
  if (exception_state.HadException()) {
    return;
  }
}

static void Constructor(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_RTCIceTransport_ConstructorCallback");

  ExecutionContext* execution_context = ToExecutionContext(
      info.NewTarget().As<v8::Object>()->CreationContext());
  RTCIceTransport* impl = RTCIceTransport::Create(execution_context);
  v8::Local<v8::Object> wrapper = info.Holder();
  wrapper = impl->AssociateWithWrapper(info.GetIsolate(), V8RTCIceTransport::GetWrapperTypeInfo(), wrapper);
  V8SetReturnValue(info, wrapper);
}

MODULES_EXPORT void ConstructorCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_RTCIceTransport_Constructor");

  ExecutionContext* execution_context_for_measurement = CurrentExecutionContext(info.GetIsolate());
  UseCounter::Count(execution_context_for_measurement, WebFeature::kV8RTCIceTransport_Constructor);
  if (!info.IsConstructCall()) {
    V8ThrowException::ThrowTypeError(
        info.GetIsolate(),
        ExceptionMessages::ConstructorNotCallableAsFunction("RTCIceTransport"));
    return;
  }

  if (ConstructorMode::Current(info.GetIsolate()) == ConstructorMode::kWrapExistingObject) {
    V8SetReturnValue(info, info.Holder());
    return;
  }

  rtc_ice_transport_v8_internal::Constructor(info);
}

}  // namespace rtc_ice_transport_v8_internal

void V8RTCIceTransport::RoleAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_RTCIceTransport_role_Getter");

  ExecutionContext* execution_context_for_measurement = CurrentExecutionContext(info.GetIsolate());
  UseCounter::Count(execution_context_for_measurement, WebFeature::kV8RTCIceTransport_Role_AttributeGetter);

  rtc_ice_transport_v8_internal::RoleAttributeGetter(info);
}

void V8RTCIceTransport::StateAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_RTCIceTransport_state_Getter");

  ExecutionContext* execution_context_for_measurement = CurrentExecutionContext(info.GetIsolate());
  UseCounter::Count(execution_context_for_measurement, WebFeature::kV8RTCIceTransport_State_AttributeGetter);

  rtc_ice_transport_v8_internal::StateAttributeGetter(info);
}

void V8RTCIceTransport::GatheringStateAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_RTCIceTransport_gatheringState_Getter");

  ExecutionContext* execution_context_for_measurement = CurrentExecutionContext(info.GetIsolate());
  UseCounter::Count(execution_context_for_measurement, WebFeature::kV8RTCIceTransport_GatheringState_AttributeGetter);

  rtc_ice_transport_v8_internal::GatheringStateAttributeGetter(info);
}

void V8RTCIceTransport::OnstatechangeAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_RTCIceTransport_onstatechange_Getter");

  rtc_ice_transport_v8_internal::OnstatechangeAttributeGetter(info);
}

void V8RTCIceTransport::OnstatechangeAttributeSetterCallback(
    const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_RTCIceTransport_onstatechange_Setter");

  v8::Local<v8::Value> v8_value = info[0];

  rtc_ice_transport_v8_internal::OnstatechangeAttributeSetter(v8_value, info);
}

void V8RTCIceTransport::OngatheringstatechangeAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_RTCIceTransport_ongatheringstatechange_Getter");

  rtc_ice_transport_v8_internal::OngatheringstatechangeAttributeGetter(info);
}

void V8RTCIceTransport::OngatheringstatechangeAttributeSetterCallback(
    const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_RTCIceTransport_ongatheringstatechange_Setter");

  v8::Local<v8::Value> v8_value = info[0];

  rtc_ice_transport_v8_internal::OngatheringstatechangeAttributeSetter(v8_value, info);
}

void V8RTCIceTransport::OnselectedcandidatepairchangeAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_RTCIceTransport_onselectedcandidatepairchange_Getter");

  rtc_ice_transport_v8_internal::OnselectedcandidatepairchangeAttributeGetter(info);
}

void V8RTCIceTransport::OnselectedcandidatepairchangeAttributeSetterCallback(
    const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_RTCIceTransport_onselectedcandidatepairchange_Setter");

  v8::Local<v8::Value> v8_value = info[0];

  rtc_ice_transport_v8_internal::OnselectedcandidatepairchangeAttributeSetter(v8_value, info);
}

void V8RTCIceTransport::OnicecandidateAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_RTCIceTransport_onicecandidate_Getter");

  rtc_ice_transport_v8_internal::OnicecandidateAttributeGetter(info);
}

void V8RTCIceTransport::OnicecandidateAttributeSetterCallback(
    const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_RTCIceTransport_onicecandidate_Setter");

  v8::Local<v8::Value> v8_value = info[0];

  rtc_ice_transport_v8_internal::OnicecandidateAttributeSetter(v8_value, info);
}

void V8RTCIceTransport::GetLocalCandidatesMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_RTCIceTransport_getLocalCandidates");

  ExecutionContext* execution_context_for_measurement = CurrentExecutionContext(info.GetIsolate());
  UseCounter::Count(execution_context_for_measurement, WebFeature::kV8RTCIceTransport_GetLocalCandidates_Method);
  rtc_ice_transport_v8_internal::GetLocalCandidatesMethod(info);
}

void V8RTCIceTransport::GetRemoteCandidatesMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_RTCIceTransport_getRemoteCandidates");

  ExecutionContext* execution_context_for_measurement = CurrentExecutionContext(info.GetIsolate());
  UseCounter::Count(execution_context_for_measurement, WebFeature::kV8RTCIceTransport_GetRemoteCandidates_Method);
  rtc_ice_transport_v8_internal::GetRemoteCandidatesMethod(info);
}

void V8RTCIceTransport::GetSelectedCandidatePairMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_RTCIceTransport_getSelectedCandidatePair");

  ExecutionContext* execution_context_for_measurement = CurrentExecutionContext(info.GetIsolate());
  UseCounter::Count(execution_context_for_measurement, WebFeature::kV8RTCIceTransport_GetSelectedCandidatePair_Method);
  rtc_ice_transport_v8_internal::GetSelectedCandidatePairMethod(info);
}

void V8RTCIceTransport::GetLocalParametersMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_RTCIceTransport_getLocalParameters");

  ExecutionContext* execution_context_for_measurement = CurrentExecutionContext(info.GetIsolate());
  UseCounter::Count(execution_context_for_measurement, WebFeature::kV8RTCIceTransport_GetLocalParameters_Method);
  rtc_ice_transport_v8_internal::GetLocalParametersMethod(info);
}

void V8RTCIceTransport::GetRemoteParametersMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_RTCIceTransport_getRemoteParameters");

  ExecutionContext* execution_context_for_measurement = CurrentExecutionContext(info.GetIsolate());
  UseCounter::Count(execution_context_for_measurement, WebFeature::kV8RTCIceTransport_GetRemoteParameters_Method);
  rtc_ice_transport_v8_internal::GetRemoteParametersMethod(info);
}

void V8RTCIceTransport::GatherMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_RTCIceTransport_gather");

  rtc_ice_transport_v8_internal::GatherMethod(info);
}

void V8RTCIceTransport::StartMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_RTCIceTransport_start");

  rtc_ice_transport_v8_internal::StartMethod(info);
}

void V8RTCIceTransport::StopMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_RTCIceTransport_stop");

  rtc_ice_transport_v8_internal::StopMethod(info);
}

void V8RTCIceTransport::AddRemoteCandidateMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_RTCIceTransport_addRemoteCandidate");

  rtc_ice_transport_v8_internal::AddRemoteCandidateMethod(info);
}

static void InstallV8RTCIceTransportTemplate(
    v8::Isolate* isolate,
    const DOMWrapperWorld& world,
    v8::Local<v8::FunctionTemplate> interface_template) {
  // Initialize the interface object's template.
  V8DOMConfiguration::InitializeDOMInterfaceTemplate(isolate, interface_template, V8RTCIceTransport::GetWrapperTypeInfo()->interface_name, V8EventTarget::DomTemplate(isolate, world), V8RTCIceTransport::kInternalFieldCount);
  interface_template->SetCallHandler(rtc_ice_transport_v8_internal::ConstructorCallback);
  interface_template->SetLength(0);

  v8::Local<v8::Signature> signature = v8::Signature::New(isolate, interface_template);
  ALLOW_UNUSED_LOCAL(signature);
  v8::Local<v8::ObjectTemplate> instance_template = interface_template->InstanceTemplate();
  ALLOW_UNUSED_LOCAL(instance_template);
  v8::Local<v8::ObjectTemplate> prototype_template = interface_template->PrototypeTemplate();
  ALLOW_UNUSED_LOCAL(prototype_template);

  // Register IDL constants, attributes and operations.

  // Custom signature

  V8RTCIceTransport::InstallRuntimeEnabledFeaturesOnTemplate(
      isolate, world, interface_template);
}

void V8RTCIceTransport::InstallRuntimeEnabledFeaturesOnTemplate(
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

void V8RTCIceTransport::InstallRTCIceTransportExtension(
    v8::Isolate* isolate,
    const DOMWrapperWorld& world,
    v8::Local<v8::Object> instance,
    v8::Local<v8::Object> prototype,
    v8::Local<v8::Function> interface) {
  v8::Local<v8::FunctionTemplate> interface_template =
      V8RTCIceTransport::GetWrapperTypeInfo()->DomTemplate(isolate, world);
  v8::Local<v8::Signature> signature = v8::Signature::New(isolate, interface_template);
  ALLOW_UNUSED_LOCAL(signature);
  ExecutionContext* execution_context = ToExecutionContext(isolate->GetCurrentContext());
  bool is_secure_context = (execution_context && execution_context->IsSecureContext());
  if (is_secure_context) {
    static constexpr V8DOMConfiguration::AccessorConfiguration
    konicecandidateConfigurations[] = {
        { "onicecandidate", V8RTCIceTransport::OnicecandidateAttributeGetterCallback, V8RTCIceTransport::OnicecandidateAttributeSetterCallback, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds }
    };
    for (const auto& config : konicecandidateConfigurations) {
      V8DOMConfiguration::InstallAccessor(isolate, world, instance, prototype,
                                          interface, signature, config);
    }
  }
  if (is_secure_context) {
    static constexpr V8DOMConfiguration::MethodConfiguration
    kStopConfigurations[] = {
        {"stop", V8RTCIceTransport::StopMethodCallback, 0, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds}
    };
    for (const auto& config : kStopConfigurations) {
      V8DOMConfiguration::InstallMethod(
          isolate, world, instance, prototype,
          interface, signature, config);
    }
  }
  if (is_secure_context) {
    static constexpr V8DOMConfiguration::MethodConfiguration
    kAddRemoteCandidateConfigurations[] = {
        {"addRemoteCandidate", V8RTCIceTransport::AddRemoteCandidateMethodCallback, 1, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds}
    };
    for (const auto& config : kAddRemoteCandidateConfigurations) {
      V8DOMConfiguration::InstallMethod(
          isolate, world, instance, prototype,
          interface, signature, config);
    }
  }
  if (is_secure_context) {
    static constexpr V8DOMConfiguration::MethodConfiguration
    kGatherConfigurations[] = {
        {"gather", V8RTCIceTransport::GatherMethodCallback, 1, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds}
    };
    for (const auto& config : kGatherConfigurations) {
      V8DOMConfiguration::InstallMethod(
          isolate, world, instance, prototype,
          interface, signature, config);
    }
  }
  if (is_secure_context) {
    static constexpr V8DOMConfiguration::MethodConfiguration
    kStartConfigurations[] = {
        {"start", V8RTCIceTransport::StartMethodCallback, 1, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds}
    };
    for (const auto& config : kStartConfigurations) {
      V8DOMConfiguration::InstallMethod(
          isolate, world, instance, prototype,
          interface, signature, config);
    }
  }
}

void V8RTCIceTransport::InstallRTCIceTransportExtension(
    ScriptState* script_state, v8::Local<v8::Object> instance) {
  V8PerContextData* per_context_data = script_state->PerContextData();
  v8::Local<v8::Object> prototype = per_context_data->PrototypeForType(
      V8RTCIceTransport::GetWrapperTypeInfo());
  v8::Local<v8::Function> interface = per_context_data->ConstructorForType(
      V8RTCIceTransport::GetWrapperTypeInfo());
  ALLOW_UNUSED_LOCAL(interface);
  InstallRTCIceTransportExtension(script_state->GetIsolate(), script_state->World(), instance, prototype, interface);
}

void V8RTCIceTransport::InstallRTCIceTransportExtension(ScriptState* script_state) {
  InstallRTCIceTransportExtension(script_state, v8::Local<v8::Object>());
}

v8::Local<v8::FunctionTemplate> V8RTCIceTransport::DomTemplate(
    v8::Isolate* isolate, const DOMWrapperWorld& world) {
  return V8DOMConfiguration::DomClassTemplate(
      isolate, world, const_cast<WrapperTypeInfo*>(V8RTCIceTransport::GetWrapperTypeInfo()),
      InstallV8RTCIceTransportTemplate);
}

bool V8RTCIceTransport::HasInstance(v8::Local<v8::Value> v8_value, v8::Isolate* isolate) {
  return V8PerIsolateData::From(isolate)->HasInstance(V8RTCIceTransport::GetWrapperTypeInfo(), v8_value);
}

v8::Local<v8::Object> V8RTCIceTransport::FindInstanceInPrototypeChain(
    v8::Local<v8::Value> v8_value, v8::Isolate* isolate) {
  return V8PerIsolateData::From(isolate)->FindInstanceInPrototypeChain(
      V8RTCIceTransport::GetWrapperTypeInfo(), v8_value);
}

RTCIceTransport* V8RTCIceTransport::ToImplWithTypeCheck(
    v8::Isolate* isolate, v8::Local<v8::Value> value) {
  return HasInstance(value, isolate) ? ToImpl(v8::Local<v8::Object>::Cast(value)) : nullptr;
}

RTCIceTransport* NativeValueTraits<RTCIceTransport>::NativeValue(
    v8::Isolate* isolate, v8::Local<v8::Value> value, ExceptionState& exception_state) {
  RTCIceTransport* native_value = V8RTCIceTransport::ToImplWithTypeCheck(isolate, value);
  if (!native_value) {
    exception_state.ThrowTypeError(ExceptionMessages::FailedToConvertJSValue(
        "RTCIceTransport"));
  }
  return native_value;
}

void V8RTCIceTransport::InstallConditionalFeatures(
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
          { "gatheringState", V8RTCIceTransport::GatheringStateAttributeGetterCallback, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
          { "role", V8RTCIceTransport::RoleAttributeGetterCallback, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
          { "state", V8RTCIceTransport::StateAttributeGetterCallback, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
          { "ongatheringstatechange", V8RTCIceTransport::OngatheringstatechangeAttributeGetterCallback, V8RTCIceTransport::OngatheringstatechangeAttributeSetterCallback, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
          { "onselectedcandidatepairchange", V8RTCIceTransport::OnselectedcandidatepairchangeAttributeGetterCallback, V8RTCIceTransport::OnselectedcandidatepairchangeAttributeSetterCallback, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
          { "onstatechange", V8RTCIceTransport::OnstatechangeAttributeGetterCallback, V8RTCIceTransport::OnstatechangeAttributeSetterCallback, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
      };
      V8DOMConfiguration::InstallAccessors(
          isolate, world, instance_object, prototype_object, interface_object,
          signature, accessor_configurations,
          base::size(accessor_configurations));
    }
    if (is_secure_context) {
      {
        // Install getLocalCandidates configuration
        const V8DOMConfiguration::MethodConfiguration kConfigurations[] = {
            {"getLocalCandidates", V8RTCIceTransport::GetLocalCandidatesMethodCallback, 0, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds}
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
        // Install getRemoteCandidates configuration
        const V8DOMConfiguration::MethodConfiguration kConfigurations[] = {
            {"getRemoteCandidates", V8RTCIceTransport::GetRemoteCandidatesMethodCallback, 0, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds}
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
        // Install getSelectedCandidatePair configuration
        const V8DOMConfiguration::MethodConfiguration kConfigurations[] = {
            {"getSelectedCandidatePair", V8RTCIceTransport::GetSelectedCandidatePairMethodCallback, 0, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds}
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
        // Install getLocalParameters configuration
        const V8DOMConfiguration::MethodConfiguration kConfigurations[] = {
            {"getLocalParameters", V8RTCIceTransport::GetLocalParametersMethodCallback, 0, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds}
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
        // Install getRemoteParameters configuration
        const V8DOMConfiguration::MethodConfiguration kConfigurations[] = {
            {"getRemoteParameters", V8RTCIceTransport::GetRemoteParametersMethodCallback, 0, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds}
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
