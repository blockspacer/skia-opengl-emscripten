// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated from the Jinja2 template
// third_party/blink/renderer/bindings/templates/interface.cc.tmpl
// by the script code_generator_v8.py.
// DO NOT MODIFY!

// clang-format off
#include "third_party/blink/renderer/bindings/modules/v8/v8_rtc_rtp_receiver.h"

#include <algorithm>

#include "base/memory/scoped_refptr.h"
#include "third_party/blink/renderer/bindings/core/v8/idl_types.h"
#include "third_party/blink/renderer/bindings/core/v8/native_value_traits_impl.h"
#include "third_party/blink/renderer/bindings/core/v8/script_promise.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_dom_configuration.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_media_stream_track.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_rtc_dtls_transport.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_rtc_rtp_capabilities.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_rtc_rtp_contributing_source.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_rtc_rtp_receive_parameters.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_rtc_rtp_synchronization_source.h"
#include "third_party/blink/renderer/core/execution_context/execution_context.h"
#include "third_party/blink/renderer/core/frame/use_counter.h"
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
const WrapperTypeInfo v8_rtc_rtp_receiver_wrapper_type_info = {
    gin::kEmbedderBlink,
    V8RTCRtpReceiver::DomTemplate,
    nullptr,
    "RTCRtpReceiver",
    nullptr,
    WrapperTypeInfo::kWrapperTypeObjectPrototype,
    WrapperTypeInfo::kObjectClassId,
    WrapperTypeInfo::kNotInheritFromActiveScriptWrappable,
};
#if defined(COMPONENT_BUILD) && defined(WIN32) && defined(__clang__)
#pragma clang diagnostic pop
#endif

// This static member must be declared by DEFINE_WRAPPERTYPEINFO in RTCRtpReceiver.h.
// For details, see the comment of DEFINE_WRAPPERTYPEINFO in
// platform/bindings/ScriptWrappable.h.
const WrapperTypeInfo& RTCRtpReceiver::wrapper_type_info_ = v8_rtc_rtp_receiver_wrapper_type_info;

// not [ActiveScriptWrappable]
static_assert(
    !std::is_base_of<ActiveScriptWrappableBase, RTCRtpReceiver>::value,
    "RTCRtpReceiver inherits from ActiveScriptWrappable<>, but is not specifying "
    "[ActiveScriptWrappable] extended attribute in the IDL file.  "
    "Be consistent.");
static_assert(
    std::is_same<decltype(&RTCRtpReceiver::HasPendingActivity),
                 decltype(&ScriptWrappable::HasPendingActivity)>::value,
    "RTCRtpReceiver is overriding hasPendingActivity(), but is not specifying "
    "[ActiveScriptWrappable] extended attribute in the IDL file.  "
    "Be consistent.");

namespace rtc_rtp_receiver_v8_internal {

static void TrackAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  RTCRtpReceiver* impl = V8RTCRtpReceiver::ToImpl(holder);

  MediaStreamTrack* cpp_value(WTF::GetPtr(impl->track()));

  // Keep the wrapper object for the return value alive as long as |this|
  // object is alive in order to save creation time of the wrapper object.
  if (cpp_value && DOMDataStore::SetReturnValue(info.GetReturnValue(), cpp_value))
    return;
  v8::Local<v8::Value> v8_value(ToV8(cpp_value, holder, info.GetIsolate()));
  V8PrivateProperty::GetSymbol(
      info.GetIsolate(), "KeepAlive#RTCRtpReceiver#track")
      .Set(holder, v8_value);

  V8SetReturnValue(info, v8_value);
}

static void TransportAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  RTCRtpReceiver* impl = V8RTCRtpReceiver::ToImpl(holder);

  RTCDtlsTransport* cpp_value(WTF::GetPtr(impl->transport()));

  // Keep the wrapper object for the return value alive as long as |this|
  // object is alive in order to save creation time of the wrapper object.
  if (cpp_value && DOMDataStore::SetReturnValue(info.GetReturnValue(), cpp_value))
    return;
  v8::Local<v8::Value> v8_value(ToV8(cpp_value, holder, info.GetIsolate()));
  V8PrivateProperty::GetSymbol(
      info.GetIsolate(), "KeepAlive#RTCRtpReceiver#transport")
      .Set(holder, v8_value);

  V8SetReturnValue(info, v8_value);
}

static void RtcpTransportAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  RTCRtpReceiver* impl = V8RTCRtpReceiver::ToImpl(holder);

  RTCDtlsTransport* cpp_value(WTF::GetPtr(impl->rtcpTransport()));

  // Keep the wrapper object for the return value alive as long as |this|
  // object is alive in order to save creation time of the wrapper object.
  if (cpp_value && DOMDataStore::SetReturnValue(info.GetReturnValue(), cpp_value))
    return;
  v8::Local<v8::Value> v8_value(ToV8(cpp_value, holder, info.GetIsolate()));
  V8PrivateProperty::GetSymbol(
      info.GetIsolate(), "KeepAlive#RTCRtpReceiver#rtcpTransport")
      .Set(holder, v8_value);

  V8SetReturnValue(info, v8_value);
}

static void JitterBufferDelayHintAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  RTCRtpReceiver* impl = V8RTCRtpReceiver::ToImpl(holder);

  ExceptionState exception_state(info.GetIsolate(), ExceptionState::kGetterContext, "RTCRtpReceiver", "jitterBufferDelayHint");
  bool is_null = false;

  double cpp_value(impl->jitterBufferDelayHint(is_null, exception_state));

  if (UNLIKELY(exception_state.HadException()))
    return;

  if (is_null) {
    V8SetReturnValueNull(info);
    return;
  }

  V8SetReturnValue(info, cpp_value);
}

static void JitterBufferDelayHintAttributeSetter(
    v8::Local<v8::Value> v8_value, const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Isolate* isolate = info.GetIsolate();
  ALLOW_UNUSED_LOCAL(isolate);

  v8::Local<v8::Object> holder = info.Holder();
  ALLOW_UNUSED_LOCAL(holder);

  RTCRtpReceiver* impl = V8RTCRtpReceiver::ToImpl(holder);

  ExceptionState exception_state(isolate, ExceptionState::kSetterContext, "RTCRtpReceiver", "jitterBufferDelayHint");

  // Prepare the value to be set.
  double cpp_value = NativeValueTraits<IDLDouble>::NativeValue(info.GetIsolate(), v8_value, exception_state);
  if (exception_state.HadException())
    return;

  bool is_null = IsUndefinedOrNull(v8_value);
  impl->setJitterBufferDelayHint(cpp_value, is_null, exception_state);
}

static void GetCapabilitiesMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  if (UNLIKELY(info.Length() < 1)) {
    V8ThrowException::ThrowTypeError(info.GetIsolate(), ExceptionMessages::FailedToExecute("getCapabilities", "RTCRtpReceiver", ExceptionMessages::NotEnoughArguments(1, info.Length())));
    return;
  }

  V8StringResource<> kind;
  kind = info[0];
  if (!kind.Prepare())
    return;

  RTCRtpCapabilities* result = RTCRtpReceiver::getCapabilities(kind);
  V8SetReturnValue(info, result, info.GetIsolate()->GetCurrentContext()->Global());
}

static void GetParametersMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RTCRtpReceiver* impl = V8RTCRtpReceiver::ToImpl(info.Holder());

  RTCRtpReceiveParameters* result = impl->getParameters();
  V8SetReturnValue(info, result);
}

static void GetSynchronizationSourcesMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RTCRtpReceiver* impl = V8RTCRtpReceiver::ToImpl(info.Holder());

  V8SetReturnValue(info, ToV8(impl->getSynchronizationSources(), info.Holder(), info.GetIsolate()));
}

static void GetContributingSourcesMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RTCRtpReceiver* impl = V8RTCRtpReceiver::ToImpl(info.Holder());

  V8SetReturnValue(info, ToV8(impl->getContributingSources(), info.Holder(), info.GetIsolate()));
}

static void GetStatsMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exception_state(info.GetIsolate(), ExceptionState::kExecutionContext, "RTCRtpReceiver", "getStats");
  ExceptionToRejectPromiseScope reject_promise_scope(info, exception_state);

  // V8DOMConfiguration::kDoNotCheckHolder
  // Make sure that info.Holder() really points to an instance of the type.
  if (!V8RTCRtpReceiver::HasInstance(info.Holder(), info.GetIsolate())) {
    exception_state.ThrowTypeError("Illegal invocation");
    return;
  }
  RTCRtpReceiver* impl = V8RTCRtpReceiver::ToImpl(info.Holder());

  ScriptState* script_state = ScriptState::ForRelevantRealm(info);

  ScriptPromise result = impl->getStats(script_state);
  V8SetReturnValue(info, result.V8Value());
}

}  // namespace rtc_rtp_receiver_v8_internal

void V8RTCRtpReceiver::TrackAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_RTCRtpReceiver_track_Getter");

  rtc_rtp_receiver_v8_internal::TrackAttributeGetter(info);
}

void V8RTCRtpReceiver::TransportAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_RTCRtpReceiver_transport_Getter");

  rtc_rtp_receiver_v8_internal::TransportAttributeGetter(info);
}

void V8RTCRtpReceiver::RtcpTransportAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_RTCRtpReceiver_rtcpTransport_Getter");

  rtc_rtp_receiver_v8_internal::RtcpTransportAttributeGetter(info);
}

void V8RTCRtpReceiver::JitterBufferDelayHintAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_RTCRtpReceiver_jitterBufferDelayHint_Getter");

  ExecutionContext* execution_context_for_measurement = CurrentExecutionContext(info.GetIsolate());
  UseCounter::Count(execution_context_for_measurement, WebFeature::kV8RTCRtpReceiver_JitterBufferDelayHint_AttributeGetter);

  rtc_rtp_receiver_v8_internal::JitterBufferDelayHintAttributeGetter(info);
}

void V8RTCRtpReceiver::JitterBufferDelayHintAttributeSetterCallback(
    const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_RTCRtpReceiver_jitterBufferDelayHint_Setter");

  v8::Local<v8::Value> v8_value = info[0];

  UseCounter::Count(CurrentExecutionContext(info.GetIsolate()), WebFeature::kV8RTCRtpReceiver_JitterBufferDelayHint_AttributeSetter);

  rtc_rtp_receiver_v8_internal::JitterBufferDelayHintAttributeSetter(v8_value, info);
}

void V8RTCRtpReceiver::GetCapabilitiesMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_RTCRtpReceiver_getCapabilities");

  rtc_rtp_receiver_v8_internal::GetCapabilitiesMethod(info);
}

void V8RTCRtpReceiver::GetParametersMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_RTCRtpReceiver_getParameters");

  rtc_rtp_receiver_v8_internal::GetParametersMethod(info);
}

void V8RTCRtpReceiver::GetSynchronizationSourcesMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_RTCRtpReceiver_getSynchronizationSources");

  rtc_rtp_receiver_v8_internal::GetSynchronizationSourcesMethod(info);
}

void V8RTCRtpReceiver::GetContributingSourcesMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_RTCRtpReceiver_getContributingSources");

  rtc_rtp_receiver_v8_internal::GetContributingSourcesMethod(info);
}

void V8RTCRtpReceiver::GetStatsMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_RTCRtpReceiver_getStats");

  rtc_rtp_receiver_v8_internal::GetStatsMethod(info);
}

static constexpr V8DOMConfiguration::AccessorConfiguration kV8RTCRtpReceiverAccessors[] = {
    { "track", V8RTCRtpReceiver::TrackAttributeGetterCallback, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
};

static constexpr V8DOMConfiguration::MethodConfiguration kV8RTCRtpReceiverMethods[] = {
    {"getCapabilities", V8RTCRtpReceiver::GetCapabilitiesMethodCallback, 1, v8::None, V8DOMConfiguration::kOnInterface, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"getParameters", V8RTCRtpReceiver::GetParametersMethodCallback, 0, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"getSynchronizationSources", V8RTCRtpReceiver::GetSynchronizationSourcesMethodCallback, 0, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"getContributingSources", V8RTCRtpReceiver::GetContributingSourcesMethodCallback, 0, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"getStats", V8RTCRtpReceiver::GetStatsMethodCallback, 0, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kDoNotCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
};

static void InstallV8RTCRtpReceiverTemplate(
    v8::Isolate* isolate,
    const DOMWrapperWorld& world,
    v8::Local<v8::FunctionTemplate> interface_template) {
  // Initialize the interface object's template.
  V8DOMConfiguration::InitializeDOMInterfaceTemplate(isolate, interface_template, V8RTCRtpReceiver::GetWrapperTypeInfo()->interface_name, v8::Local<v8::FunctionTemplate>(), V8RTCRtpReceiver::kInternalFieldCount);

  v8::Local<v8::Signature> signature = v8::Signature::New(isolate, interface_template);
  ALLOW_UNUSED_LOCAL(signature);
  v8::Local<v8::ObjectTemplate> instance_template = interface_template->InstanceTemplate();
  ALLOW_UNUSED_LOCAL(instance_template);
  v8::Local<v8::ObjectTemplate> prototype_template = interface_template->PrototypeTemplate();
  ALLOW_UNUSED_LOCAL(prototype_template);

  // Register IDL constants, attributes and operations.
  V8DOMConfiguration::InstallAccessors(
      isolate, world, instance_template, prototype_template, interface_template,
      signature, kV8RTCRtpReceiverAccessors, base::size(kV8RTCRtpReceiverAccessors));
  V8DOMConfiguration::InstallMethods(
      isolate, world, instance_template, prototype_template, interface_template,
      signature, kV8RTCRtpReceiverMethods, base::size(kV8RTCRtpReceiverMethods));

  // Custom signature

  V8RTCRtpReceiver::InstallRuntimeEnabledFeaturesOnTemplate(
      isolate, world, interface_template);
}

void V8RTCRtpReceiver::InstallRuntimeEnabledFeaturesOnTemplate(
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

  if (RuntimeEnabledFeatures::RTCDtlsTransportEnabled()) {
    static constexpr V8DOMConfiguration::AccessorConfiguration kConfigurations[] = {
        { "rtcpTransport", V8RTCRtpReceiver::RtcpTransportAttributeGetterCallback, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
        { "transport", V8RTCRtpReceiver::TransportAttributeGetterCallback, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
    };
    V8DOMConfiguration::InstallAccessors(
        isolate, world, instance_template, prototype_template, interface_template,
        signature, kConfigurations, base::size(kConfigurations));
  }

  // Custom signature
}

void V8RTCRtpReceiver::InstallRtcJitterBufferDelayHint(
    v8::Isolate* isolate,
    const DOMWrapperWorld& world,
    v8::Local<v8::Object> instance,
    v8::Local<v8::Object> prototype,
    v8::Local<v8::Function> interface) {
  v8::Local<v8::FunctionTemplate> interface_template =
      V8RTCRtpReceiver::GetWrapperTypeInfo()->DomTemplate(isolate, world);
  v8::Local<v8::Signature> signature = v8::Signature::New(isolate, interface_template);
  ALLOW_UNUSED_LOCAL(signature);
  static constexpr V8DOMConfiguration::AccessorConfiguration
  kjitterBufferDelayHintConfigurations[] = {
      { "jitterBufferDelayHint", V8RTCRtpReceiver::JitterBufferDelayHintAttributeGetterCallback, V8RTCRtpReceiver::JitterBufferDelayHintAttributeSetterCallback, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds }
  };
  for (const auto& config : kjitterBufferDelayHintConfigurations) {
    V8DOMConfiguration::InstallAccessor(isolate, world, instance, prototype,
                                        interface, signature, config);
  }
}

void V8RTCRtpReceiver::InstallRtcJitterBufferDelayHint(
    ScriptState* script_state, v8::Local<v8::Object> instance) {
  V8PerContextData* per_context_data = script_state->PerContextData();
  v8::Local<v8::Object> prototype = per_context_data->PrototypeForType(
      V8RTCRtpReceiver::GetWrapperTypeInfo());
  v8::Local<v8::Function> interface = per_context_data->ConstructorForType(
      V8RTCRtpReceiver::GetWrapperTypeInfo());
  ALLOW_UNUSED_LOCAL(interface);
  InstallRtcJitterBufferDelayHint(script_state->GetIsolate(), script_state->World(), instance, prototype, interface);
}

void V8RTCRtpReceiver::InstallRtcJitterBufferDelayHint(ScriptState* script_state) {
  InstallRtcJitterBufferDelayHint(script_state, v8::Local<v8::Object>());
}

v8::Local<v8::FunctionTemplate> V8RTCRtpReceiver::DomTemplate(
    v8::Isolate* isolate, const DOMWrapperWorld& world) {
  return V8DOMConfiguration::DomClassTemplate(
      isolate, world, const_cast<WrapperTypeInfo*>(V8RTCRtpReceiver::GetWrapperTypeInfo()),
      InstallV8RTCRtpReceiverTemplate);
}

bool V8RTCRtpReceiver::HasInstance(v8::Local<v8::Value> v8_value, v8::Isolate* isolate) {
  return V8PerIsolateData::From(isolate)->HasInstance(V8RTCRtpReceiver::GetWrapperTypeInfo(), v8_value);
}

v8::Local<v8::Object> V8RTCRtpReceiver::FindInstanceInPrototypeChain(
    v8::Local<v8::Value> v8_value, v8::Isolate* isolate) {
  return V8PerIsolateData::From(isolate)->FindInstanceInPrototypeChain(
      V8RTCRtpReceiver::GetWrapperTypeInfo(), v8_value);
}

RTCRtpReceiver* V8RTCRtpReceiver::ToImplWithTypeCheck(
    v8::Isolate* isolate, v8::Local<v8::Value> value) {
  return HasInstance(value, isolate) ? ToImpl(v8::Local<v8::Object>::Cast(value)) : nullptr;
}

RTCRtpReceiver* NativeValueTraits<RTCRtpReceiver>::NativeValue(
    v8::Isolate* isolate, v8::Local<v8::Value> value, ExceptionState& exception_state) {
  RTCRtpReceiver* native_value = V8RTCRtpReceiver::ToImplWithTypeCheck(isolate, value);
  if (!native_value) {
    exception_state.ThrowTypeError(ExceptionMessages::FailedToConvertJSValue(
        "RTCRtpReceiver"));
  }
  return native_value;
}

}  // namespace blink
