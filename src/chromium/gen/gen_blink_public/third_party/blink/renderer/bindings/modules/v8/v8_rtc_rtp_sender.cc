// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated from the Jinja2 template
// third_party/blink/renderer/bindings/templates/interface.cc.tmpl
// by the script code_generator_v8.py.
// DO NOT MODIFY!

// clang-format off
#include "third_party/blink/renderer/bindings/modules/v8/v8_rtc_rtp_sender.h"

#include <algorithm>

#include "base/memory/scoped_refptr.h"
#include "third_party/blink/renderer/bindings/core/v8/idl_types.h"
#include "third_party/blink/renderer/bindings/core/v8/native_value_traits_impl.h"
#include "third_party/blink/renderer/bindings/core/v8/script_promise.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_dom_configuration.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_media_stream_track.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_rtc_dtls_transport.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_rtc_dtmf_sender.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_rtc_rtp_capabilities.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_rtc_rtp_send_parameters.h"
#include "third_party/blink/renderer/core/execution_context/execution_context.h"
#include "third_party/blink/renderer/core/frame/use_counter.h"
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
const WrapperTypeInfo v8_rtc_rtp_sender_wrapper_type_info = {
    gin::kEmbedderBlink,
    V8RTCRtpSender::DomTemplate,
    nullptr,
    "RTCRtpSender",
    nullptr,
    WrapperTypeInfo::kWrapperTypeObjectPrototype,
    WrapperTypeInfo::kObjectClassId,
    WrapperTypeInfo::kNotInheritFromActiveScriptWrappable,
};
#if defined(COMPONENT_BUILD) && defined(WIN32) && defined(__clang__)
#pragma clang diagnostic pop
#endif

// This static member must be declared by DEFINE_WRAPPERTYPEINFO in RTCRtpSender.h.
// For details, see the comment of DEFINE_WRAPPERTYPEINFO in
// platform/bindings/ScriptWrappable.h.
const WrapperTypeInfo& RTCRtpSender::wrapper_type_info_ = v8_rtc_rtp_sender_wrapper_type_info;

// not [ActiveScriptWrappable]
static_assert(
    !std::is_base_of<ActiveScriptWrappableBase, RTCRtpSender>::value,
    "RTCRtpSender inherits from ActiveScriptWrappable<>, but is not specifying "
    "[ActiveScriptWrappable] extended attribute in the IDL file.  "
    "Be consistent.");
static_assert(
    std::is_same<decltype(&RTCRtpSender::HasPendingActivity),
                 decltype(&ScriptWrappable::HasPendingActivity)>::value,
    "RTCRtpSender is overriding hasPendingActivity(), but is not specifying "
    "[ActiveScriptWrappable] extended attribute in the IDL file.  "
    "Be consistent.");

namespace rtc_rtp_sender_v8_internal {

static void TrackAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  RTCRtpSender* impl = V8RTCRtpSender::ToImpl(holder);

  MediaStreamTrack* cpp_value(WTF::GetPtr(impl->track()));

  // Keep the wrapper object for the return value alive as long as |this|
  // object is alive in order to save creation time of the wrapper object.
  if (cpp_value && DOMDataStore::SetReturnValue(info.GetReturnValue(), cpp_value))
    return;
  v8::Local<v8::Value> v8_value(ToV8(cpp_value, holder, info.GetIsolate()));
  V8PrivateProperty::GetSymbol(
      info.GetIsolate(), "KeepAlive#RTCRtpSender#track")
      .Set(holder, v8_value);

  V8SetReturnValue(info, v8_value);
}

static void TransportAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  RTCRtpSender* impl = V8RTCRtpSender::ToImpl(holder);

  RTCDtlsTransport* cpp_value(WTF::GetPtr(impl->transport()));

  // Keep the wrapper object for the return value alive as long as |this|
  // object is alive in order to save creation time of the wrapper object.
  if (cpp_value && DOMDataStore::SetReturnValue(info.GetReturnValue(), cpp_value))
    return;
  v8::Local<v8::Value> v8_value(ToV8(cpp_value, holder, info.GetIsolate()));
  V8PrivateProperty::GetSymbol(
      info.GetIsolate(), "KeepAlive#RTCRtpSender#transport")
      .Set(holder, v8_value);

  V8SetReturnValue(info, v8_value);
}

static void RtcpTransportAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  RTCRtpSender* impl = V8RTCRtpSender::ToImpl(holder);

  RTCDtlsTransport* cpp_value(WTF::GetPtr(impl->rtcpTransport()));

  // Keep the wrapper object for the return value alive as long as |this|
  // object is alive in order to save creation time of the wrapper object.
  if (cpp_value && DOMDataStore::SetReturnValue(info.GetReturnValue(), cpp_value))
    return;
  v8::Local<v8::Value> v8_value(ToV8(cpp_value, holder, info.GetIsolate()));
  V8PrivateProperty::GetSymbol(
      info.GetIsolate(), "KeepAlive#RTCRtpSender#rtcpTransport")
      .Set(holder, v8_value);

  V8SetReturnValue(info, v8_value);
}

static void DtmfAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  RTCRtpSender* impl = V8RTCRtpSender::ToImpl(holder);

  RTCDTMFSender* cpp_value(WTF::GetPtr(impl->dtmf()));

  // Keep the wrapper object for the return value alive as long as |this|
  // object is alive in order to save creation time of the wrapper object.
  if (cpp_value && DOMDataStore::SetReturnValue(info.GetReturnValue(), cpp_value))
    return;
  v8::Local<v8::Value> v8_value(ToV8(cpp_value, holder, info.GetIsolate()));
  V8PrivateProperty::GetSymbol(
      info.GetIsolate(), "KeepAlive#RTCRtpSender#dtmf")
      .Set(holder, v8_value);

  V8SetReturnValue(info, v8_value);
}

static void GetCapabilitiesMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  if (UNLIKELY(info.Length() < 1)) {
    V8ThrowException::ThrowTypeError(info.GetIsolate(), ExceptionMessages::FailedToExecute("getCapabilities", "RTCRtpSender", ExceptionMessages::NotEnoughArguments(1, info.Length())));
    return;
  }

  V8StringResource<> kind;
  kind = info[0];
  if (!kind.Prepare())
    return;

  RTCRtpCapabilities* result = RTCRtpSender::getCapabilities(kind);
  V8SetReturnValue(info, result, info.GetIsolate()->GetCurrentContext()->Global());
}

static void SetParametersMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exception_state(info.GetIsolate(), ExceptionState::kExecutionContext, "RTCRtpSender", "setParameters");
  ExceptionToRejectPromiseScope reject_promise_scope(info, exception_state);

  // V8DOMConfiguration::kDoNotCheckHolder
  // Make sure that info.Holder() really points to an instance of the type.
  if (!V8RTCRtpSender::HasInstance(info.Holder(), info.GetIsolate())) {
    exception_state.ThrowTypeError("Illegal invocation");
    return;
  }
  RTCRtpSender* impl = V8RTCRtpSender::ToImpl(info.Holder());

  ScriptState* script_state = ScriptState::ForRelevantRealm(info);

  RTCRtpSendParameters* parameters;
  if (!info[0]->IsNullOrUndefined() && !info[0]->IsObject()) {
    exception_state.ThrowTypeError("parameter 1 ('parameters') is not an object.");
    return;
  }
  parameters = NativeValueTraits<RTCRtpSendParameters>::NativeValue(info.GetIsolate(), info[0], exception_state);
  if (exception_state.HadException())
    return;

  ScriptPromise result = impl->setParameters(script_state, parameters);
  V8SetReturnValue(info, result.V8Value());
}

static void GetParametersMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RTCRtpSender* impl = V8RTCRtpSender::ToImpl(info.Holder());

  RTCRtpSendParameters* result = impl->getParameters();
  V8SetReturnValue(info, result);
}

static void ReplaceTrackMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exception_state(info.GetIsolate(), ExceptionState::kExecutionContext, "RTCRtpSender", "replaceTrack");
  ExceptionToRejectPromiseScope reject_promise_scope(info, exception_state);

  // V8DOMConfiguration::kDoNotCheckHolder
  // Make sure that info.Holder() really points to an instance of the type.
  if (!V8RTCRtpSender::HasInstance(info.Holder(), info.GetIsolate())) {
    exception_state.ThrowTypeError("Illegal invocation");
    return;
  }
  RTCRtpSender* impl = V8RTCRtpSender::ToImpl(info.Holder());

  ScriptState* script_state = ScriptState::ForRelevantRealm(info);

  if (UNLIKELY(info.Length() < 1)) {
    exception_state.ThrowTypeError(ExceptionMessages::NotEnoughArguments(1, info.Length()));
    return;
  }

  MediaStreamTrack* with_track;
  with_track = V8MediaStreamTrack::ToImplWithTypeCheck(info.GetIsolate(), info[0]);
  if (!with_track && !IsUndefinedOrNull(info[0])) {
    exception_state.ThrowTypeError("parameter 1 is not of type 'MediaStreamTrack'.");
    return;
  }

  ScriptPromise result = impl->replaceTrack(script_state, with_track);
  V8SetReturnValue(info, result.V8Value());
}

static void GetStatsMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exception_state(info.GetIsolate(), ExceptionState::kExecutionContext, "RTCRtpSender", "getStats");
  ExceptionToRejectPromiseScope reject_promise_scope(info, exception_state);

  // V8DOMConfiguration::kDoNotCheckHolder
  // Make sure that info.Holder() really points to an instance of the type.
  if (!V8RTCRtpSender::HasInstance(info.Holder(), info.GetIsolate())) {
    exception_state.ThrowTypeError("Illegal invocation");
    return;
  }
  RTCRtpSender* impl = V8RTCRtpSender::ToImpl(info.Holder());

  ScriptState* script_state = ScriptState::ForRelevantRealm(info);

  ScriptPromise result = impl->getStats(script_state);
  V8SetReturnValue(info, result.V8Value());
}

}  // namespace rtc_rtp_sender_v8_internal

void V8RTCRtpSender::TrackAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_RTCRtpSender_track_Getter");

  rtc_rtp_sender_v8_internal::TrackAttributeGetter(info);
}

void V8RTCRtpSender::TransportAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_RTCRtpSender_transport_Getter");

  rtc_rtp_sender_v8_internal::TransportAttributeGetter(info);
}

void V8RTCRtpSender::RtcpTransportAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_RTCRtpSender_rtcpTransport_Getter");

  rtc_rtp_sender_v8_internal::RtcpTransportAttributeGetter(info);
}

void V8RTCRtpSender::DtmfAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_RTCRtpSender_dtmf_Getter");

  ExecutionContext* execution_context_for_measurement = CurrentExecutionContext(info.GetIsolate());
  UseCounter::Count(execution_context_for_measurement, WebFeature::kV8RTCRtpSender_Dtmf_AttributeGetter);

  rtc_rtp_sender_v8_internal::DtmfAttributeGetter(info);
}

void V8RTCRtpSender::GetCapabilitiesMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_RTCRtpSender_getCapabilities");

  rtc_rtp_sender_v8_internal::GetCapabilitiesMethod(info);
}

void V8RTCRtpSender::SetParametersMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_RTCRtpSender_setParameters");

  rtc_rtp_sender_v8_internal::SetParametersMethod(info);
}

void V8RTCRtpSender::GetParametersMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_RTCRtpSender_getParameters");

  rtc_rtp_sender_v8_internal::GetParametersMethod(info);
}

void V8RTCRtpSender::ReplaceTrackMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_RTCRtpSender_replaceTrack");

  ExecutionContext* execution_context_for_measurement = CurrentExecutionContext(info.GetIsolate());
  UseCounter::Count(execution_context_for_measurement, WebFeature::kV8RTCRtpSender_ReplaceTrack_Method);
  rtc_rtp_sender_v8_internal::ReplaceTrackMethod(info);
}

void V8RTCRtpSender::GetStatsMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_RTCRtpSender_getStats");

  rtc_rtp_sender_v8_internal::GetStatsMethod(info);
}

static constexpr V8DOMConfiguration::AccessorConfiguration kV8RTCRtpSenderAccessors[] = {
    { "track", V8RTCRtpSender::TrackAttributeGetterCallback, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
    { "dtmf", V8RTCRtpSender::DtmfAttributeGetterCallback, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
};

static constexpr V8DOMConfiguration::MethodConfiguration kV8RTCRtpSenderMethods[] = {
    {"getCapabilities", V8RTCRtpSender::GetCapabilitiesMethodCallback, 1, v8::None, V8DOMConfiguration::kOnInterface, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"replaceTrack", V8RTCRtpSender::ReplaceTrackMethodCallback, 1, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kDoNotCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"getStats", V8RTCRtpSender::GetStatsMethodCallback, 0, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kDoNotCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
};

static void InstallV8RTCRtpSenderTemplate(
    v8::Isolate* isolate,
    const DOMWrapperWorld& world,
    v8::Local<v8::FunctionTemplate> interface_template) {
  // Initialize the interface object's template.
  V8DOMConfiguration::InitializeDOMInterfaceTemplate(isolate, interface_template, V8RTCRtpSender::GetWrapperTypeInfo()->interface_name, v8::Local<v8::FunctionTemplate>(), V8RTCRtpSender::kInternalFieldCount);

  v8::Local<v8::Signature> signature = v8::Signature::New(isolate, interface_template);
  ALLOW_UNUSED_LOCAL(signature);
  v8::Local<v8::ObjectTemplate> instance_template = interface_template->InstanceTemplate();
  ALLOW_UNUSED_LOCAL(instance_template);
  v8::Local<v8::ObjectTemplate> prototype_template = interface_template->PrototypeTemplate();
  ALLOW_UNUSED_LOCAL(prototype_template);

  // Register IDL constants, attributes and operations.
  V8DOMConfiguration::InstallAccessors(
      isolate, world, instance_template, prototype_template, interface_template,
      signature, kV8RTCRtpSenderAccessors, base::size(kV8RTCRtpSenderAccessors));
  V8DOMConfiguration::InstallMethods(
      isolate, world, instance_template, prototype_template, interface_template,
      signature, kV8RTCRtpSenderMethods, base::size(kV8RTCRtpSenderMethods));

  // Custom signature

  V8RTCRtpSender::InstallRuntimeEnabledFeaturesOnTemplate(
      isolate, world, interface_template);
}

void V8RTCRtpSender::InstallRuntimeEnabledFeaturesOnTemplate(
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
        { "rtcpTransport", V8RTCRtpSender::RtcpTransportAttributeGetterCallback, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
        { "transport", V8RTCRtpSender::TransportAttributeGetterCallback, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
    };
    V8DOMConfiguration::InstallAccessors(
        isolate, world, instance_template, prototype_template, interface_template,
        signature, kConfigurations, base::size(kConfigurations));
  }

  // Custom signature
  if (RuntimeEnabledFeatures::RTCRtpSenderParametersEnabled()) {
    {
      // Install setParameters configuration
      constexpr V8DOMConfiguration::MethodConfiguration kConfigurations[] = {
          {"setParameters", V8RTCRtpSender::SetParametersMethodCallback, 0, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kDoNotCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds}
      };
      for (const auto& config : kConfigurations) {
        V8DOMConfiguration::InstallMethod(
            isolate, world, instance_template, prototype_template,
            interface_template, signature, config);
      }
    }
  }
  if (RuntimeEnabledFeatures::RTCRtpSenderParametersEnabled()) {
    {
      // Install getParameters configuration
      constexpr V8DOMConfiguration::MethodConfiguration kConfigurations[] = {
          {"getParameters", V8RTCRtpSender::GetParametersMethodCallback, 0, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds}
      };
      for (const auto& config : kConfigurations) {
        V8DOMConfiguration::InstallMethod(
            isolate, world, instance_template, prototype_template,
            interface_template, signature, config);
      }
    }
  }
}

v8::Local<v8::FunctionTemplate> V8RTCRtpSender::DomTemplate(
    v8::Isolate* isolate, const DOMWrapperWorld& world) {
  return V8DOMConfiguration::DomClassTemplate(
      isolate, world, const_cast<WrapperTypeInfo*>(V8RTCRtpSender::GetWrapperTypeInfo()),
      InstallV8RTCRtpSenderTemplate);
}

bool V8RTCRtpSender::HasInstance(v8::Local<v8::Value> v8_value, v8::Isolate* isolate) {
  return V8PerIsolateData::From(isolate)->HasInstance(V8RTCRtpSender::GetWrapperTypeInfo(), v8_value);
}

v8::Local<v8::Object> V8RTCRtpSender::FindInstanceInPrototypeChain(
    v8::Local<v8::Value> v8_value, v8::Isolate* isolate) {
  return V8PerIsolateData::From(isolate)->FindInstanceInPrototypeChain(
      V8RTCRtpSender::GetWrapperTypeInfo(), v8_value);
}

RTCRtpSender* V8RTCRtpSender::ToImplWithTypeCheck(
    v8::Isolate* isolate, v8::Local<v8::Value> value) {
  return HasInstance(value, isolate) ? ToImpl(v8::Local<v8::Object>::Cast(value)) : nullptr;
}

RTCRtpSender* NativeValueTraits<RTCRtpSender>::NativeValue(
    v8::Isolate* isolate, v8::Local<v8::Value> value, ExceptionState& exception_state) {
  RTCRtpSender* native_value = V8RTCRtpSender::ToImplWithTypeCheck(isolate, value);
  if (!native_value) {
    exception_state.ThrowTypeError(ExceptionMessages::FailedToConvertJSValue(
        "RTCRtpSender"));
  }
  return native_value;
}

}  // namespace blink
