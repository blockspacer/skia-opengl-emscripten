// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated from the Jinja2 template
// third_party/blink/renderer/bindings/templates/partial_interface.cc.tmpl
// by the script code_generator_v8.py.
// DO NOT MODIFY!

// clang-format off
#include "third_party/blink/renderer/bindings/modules/v8/v8_internals_partial.h"

#include <algorithm>

#include "base/memory/scoped_refptr.h"
#include "third_party/blink/renderer/bindings/core/v8/idl_types.h"
#include "third_party/blink/renderer/bindings/core/v8/native_value_traits_impl.h"
#include "third_party/blink/renderer/bindings/core/v8/script_promise.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_dom_configuration.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_internals.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_navigator.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_window.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_media_device_info.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_media_stream_track.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_media_track_constraints.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_rtc_certificate.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_service_worker.h"
#include "third_party/blink/renderer/core/execution_context/execution_context.h"
#include "third_party/blink/renderer/modules/accessibility/testing/internals_accessibility.h"
#include "third_party/blink/renderer/modules/mediastream/testing/internals_media_stream.h"
#include "third_party/blink/renderer/modules/netinfo/testing/internals_net_info.h"
#include "third_party/blink/renderer/modules/peerconnection/testing/internals_rtc_certificate.h"
#include "third_party/blink/renderer/modules/peerconnection/testing/internals_rtc_peer_connection.h"
#include "third_party/blink/renderer/modules/service_worker/testing/internals_service_worker.h"
#include "third_party/blink/renderer/modules/speech/testing/internals_speech_synthesis.h"
#include "third_party/blink/renderer/modules/vibration/testing/internals_vibration.h"
#include "third_party/blink/renderer/modules/webaudio/testing/internals_web_audio.h"
#include "third_party/blink/renderer/platform/bindings/exception_messages.h"
#include "third_party/blink/renderer/platform/bindings/exception_state.h"
#include "third_party/blink/renderer/platform/bindings/runtime_call_stats.h"
#include "third_party/blink/renderer/platform/bindings/script_state.h"
#include "third_party/blink/renderer/platform/bindings/v8_object_constructor.h"
#include "third_party/blink/renderer/platform/scheduler/public/cooperative_scheduling_manager.h"
#include "third_party/blink/renderer/platform/wtf/get_ptr.h"

namespace blink {

namespace internals_partial_v8_internal {

static void PeerConnectionCountLimitAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  Internals* impl = V8Internals::ToImpl(holder);

  V8SetReturnValueInt(info, InternalsRTCPeerConnection::peerConnectionCountLimit(*impl));
}

static void NumberOfLiveAXObjectsMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  Internals* impl = V8Internals::ToImpl(info.Holder());

  V8SetReturnValueUnsigned(info, InternalsAccessibility::numberOfLiveAXObjects(*impl));
}

static void AddFakeDeviceMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exception_state(info.GetIsolate(), ExceptionState::kExecutionContext, "Internals", "addFakeDevice");
  ExceptionToRejectPromiseScope reject_promise_scope(info, exception_state);

  // V8DOMConfiguration::kDoNotCheckHolder
  // Make sure that info.Holder() really points to an instance of the type.
  if (!V8Internals::HasInstance(info.Holder(), info.GetIsolate())) {
    exception_state.ThrowTypeError("Illegal invocation");
    return;
  }
  Internals* impl = V8Internals::ToImpl(info.Holder());

  ScriptState* script_state = ScriptState::ForRelevantRealm(info);

  if (UNLIKELY(info.Length() < 3)) {
    exception_state.ThrowTypeError(ExceptionMessages::NotEnoughArguments(3, info.Length()));
    return;
  }

  MediaDeviceInfo* device_info;
  MediaTrackConstraints* capabilities;
  MediaStreamTrack* data_source;
  device_info = V8MediaDeviceInfo::ToImplWithTypeCheck(info.GetIsolate(), info[0]);
  if (!device_info) {
    exception_state.ThrowTypeError("parameter 1 is not of type 'MediaDeviceInfo'.");
    return;
  }

  if (!info[1]->IsNullOrUndefined() && !info[1]->IsObject()) {
    exception_state.ThrowTypeError("parameter 2 ('capabilities') is not an object.");
    return;
  }
  capabilities = NativeValueTraits<MediaTrackConstraints>::NativeValue(info.GetIsolate(), info[1], exception_state);
  if (exception_state.HadException())
    return;

  data_source = V8MediaStreamTrack::ToImplWithTypeCheck(info.GetIsolate(), info[2]);
  if (!data_source && !IsUndefinedOrNull(info[2])) {
    exception_state.ThrowTypeError("parameter 3 is not of type 'MediaStreamTrack'.");
    return;
  }

  ScriptPromise result = InternalsMediaStream::addFakeDevice(script_state, *impl, device_info, capabilities, data_source);
  V8SetReturnValue(info, result.V8Value());
}

static void SetNetworkConnectionInfoOverrideMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exception_state(info.GetIsolate(), ExceptionState::kExecutionContext, "Internals", "setNetworkConnectionInfoOverride");

  Internals* impl = V8Internals::ToImpl(info.Holder());

  if (UNLIKELY(info.Length() < 5)) {
    exception_state.ThrowTypeError(ExceptionMessages::NotEnoughArguments(5, info.Length()));
    return;
  }

  bool on_line;
  V8StringResource<> type;
  V8StringResource<> effective_type;
  uint32_t http_rtt_msec;
  double downlink_max_mbps;
  on_line = NativeValueTraits<IDLBoolean>::NativeValue(info.GetIsolate(), info[0], exception_state);
  if (exception_state.HadException())
    return;

  type = info[1];
  if (!type.Prepare())
    return;

  effective_type = info[2];
  if (!effective_type.Prepare())
    return;
  const char* kValidEffective_typeValues[] = {
      "slow-2g",
      "2g",
      "3g",
      "4g",
  };
  if (!IsValidEnum(effective_type, kValidEffective_typeValues, base::size(kValidEffective_typeValues), "EffectiveConnectionType", exception_state)) {
    return;
  }

  http_rtt_msec = NativeValueTraits<IDLUnsignedLong>::NativeValue(info.GetIsolate(), info[3], exception_state);
  if (exception_state.HadException())
    return;

  downlink_max_mbps = NativeValueTraits<IDLDouble>::NativeValue(info.GetIsolate(), info[4], exception_state);
  if (exception_state.HadException())
    return;

  InternalsNetInfo::setNetworkConnectionInfoOverride(*impl, on_line, type, effective_type, http_rtt_msec, downlink_max_mbps, exception_state);
  if (exception_state.HadException()) {
    return;
  }
}

static void SetSaveDataEnabledMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exception_state(info.GetIsolate(), ExceptionState::kExecutionContext, "Internals", "setSaveDataEnabled");

  Internals* impl = V8Internals::ToImpl(info.Holder());

  if (UNLIKELY(info.Length() < 1)) {
    exception_state.ThrowTypeError(ExceptionMessages::NotEnoughArguments(1, info.Length()));
    return;
  }

  bool enabled;
  enabled = NativeValueTraits<IDLBoolean>::NativeValue(info.GetIsolate(), info[0], exception_state);
  if (exception_state.HadException())
    return;

  InternalsNetInfo::setSaveDataEnabled(*impl, enabled);
}

static void ClearNetworkConnectionInfoOverrideMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  Internals* impl = V8Internals::ToImpl(info.Holder());

  InternalsNetInfo::clearNetworkConnectionInfoOverride(*impl);
}

static void RTCCertificateEqualsMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  Internals* impl = V8Internals::ToImpl(info.Holder());

  if (UNLIKELY(info.Length() < 2)) {
    V8ThrowException::ThrowTypeError(info.GetIsolate(), ExceptionMessages::FailedToExecute("rtcCertificateEquals", "Internals", ExceptionMessages::NotEnoughArguments(2, info.Length())));
    return;
  }

  RTCCertificate* a;
  RTCCertificate* b;
  a = V8RTCCertificate::ToImplWithTypeCheck(info.GetIsolate(), info[0]);
  if (!a) {
    V8ThrowException::ThrowTypeError(info.GetIsolate(), ExceptionMessages::FailedToExecute("rtcCertificateEquals", "Internals", "parameter 1 is not of type 'RTCCertificate'."));
    return;
  }

  b = V8RTCCertificate::ToImplWithTypeCheck(info.GetIsolate(), info[1]);
  if (!b) {
    V8ThrowException::ThrowTypeError(info.GetIsolate(), ExceptionMessages::FailedToExecute("rtcCertificateEquals", "Internals", "parameter 2 is not of type 'RTCCertificate'."));
    return;
  }

  V8SetReturnValueBool(info, InternalsRTCCertificate::rtcCertificateEquals(*impl, a, b));
}

static void PeerConnectionCountMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  Internals* impl = V8Internals::ToImpl(info.Holder());

  V8SetReturnValueInt(info, InternalsRTCPeerConnection::peerConnectionCount(*impl));
}

static void TerminateServiceWorkerMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exception_state(info.GetIsolate(), ExceptionState::kExecutionContext, "Internals", "terminateServiceWorker");
  ExceptionToRejectPromiseScope reject_promise_scope(info, exception_state);

  // V8DOMConfiguration::kDoNotCheckHolder
  // Make sure that info.Holder() really points to an instance of the type.
  if (!V8Internals::HasInstance(info.Holder(), info.GetIsolate())) {
    exception_state.ThrowTypeError("Illegal invocation");
    return;
  }
  Internals* impl = V8Internals::ToImpl(info.Holder());

  ScriptState* script_state = ScriptState::ForRelevantRealm(info);

  if (UNLIKELY(info.Length() < 1)) {
    exception_state.ThrowTypeError(ExceptionMessages::NotEnoughArguments(1, info.Length()));
    return;
  }

  ServiceWorker* worker;
  worker = V8ServiceWorker::ToImplWithTypeCheck(info.GetIsolate(), info[0]);
  if (!worker) {
    exception_state.ThrowTypeError("parameter 1 is not of type 'ServiceWorker'.");
    return;
  }

  ScriptPromise result = InternalsServiceWorker::terminateServiceWorker(script_state, *impl, worker);
  V8SetReturnValue(info, result.V8Value());
}

static void EnableMockSpeechSynthesizerMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  Internals* impl = V8Internals::ToImpl(info.Holder());

  ScriptState* script_state = ScriptState::ForRelevantRealm(info);

  if (UNLIKELY(info.Length() < 1)) {
    V8ThrowException::ThrowTypeError(info.GetIsolate(), ExceptionMessages::FailedToExecute("enableMockSpeechSynthesizer", "Internals", ExceptionMessages::NotEnoughArguments(1, info.Length())));
    return;
  }

  DOMWindow* window;
  window = ToDOMWindow(info.GetIsolate(), info[0]);
  if (!window) {
    V8ThrowException::ThrowTypeError(info.GetIsolate(), ExceptionMessages::FailedToExecute("enableMockSpeechSynthesizer", "Internals", "parameter 1 is not of type 'Window'."));
    return;
  }

  InternalsSpeechSynthesis::enableMockSpeechSynthesizer(script_state, *impl, window);
}

static void IsVibratingMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  Internals* impl = V8Internals::ToImpl(info.Holder());

  if (UNLIKELY(info.Length() < 1)) {
    V8ThrowException::ThrowTypeError(info.GetIsolate(), ExceptionMessages::FailedToExecute("isVibrating", "Internals", ExceptionMessages::NotEnoughArguments(1, info.Length())));
    return;
  }

  Navigator* navigator;
  navigator = V8Navigator::ToImplWithTypeCheck(info.GetIsolate(), info[0]);
  if (!navigator) {
    V8ThrowException::ThrowTypeError(info.GetIsolate(), ExceptionMessages::FailedToExecute("isVibrating", "Internals", "parameter 1 is not of type 'Navigator'."));
    return;
  }

  V8SetReturnValueBool(info, InternalsVibration::isVibrating(*impl, navigator));
}

static void PendingVibrationPatternMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  Internals* impl = V8Internals::ToImpl(info.Holder());

  if (UNLIKELY(info.Length() < 1)) {
    V8ThrowException::ThrowTypeError(info.GetIsolate(), ExceptionMessages::FailedToExecute("pendingVibrationPattern", "Internals", ExceptionMessages::NotEnoughArguments(1, info.Length())));
    return;
  }

  Navigator* navigator;
  navigator = V8Navigator::ToImplWithTypeCheck(info.GetIsolate(), info[0]);
  if (!navigator) {
    V8ThrowException::ThrowTypeError(info.GetIsolate(), ExceptionMessages::FailedToExecute("pendingVibrationPattern", "Internals", "parameter 1 is not of type 'Navigator'."));
    return;
  }

  V8SetReturnValue(info, ToV8(InternalsVibration::pendingVibrationPattern(*impl, navigator), info.Holder(), info.GetIsolate()));
}

static void AudioHandlerCountMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  Internals* impl = V8Internals::ToImpl(info.Holder());

  V8SetReturnValueUnsigned(info, InternalsWebAudio::audioHandlerCount(*impl));
}

}  // namespace internals_partial_v8_internal

void V8InternalsPartial::PeerConnectionCountLimitAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_Internals_peerConnectionCountLimit_Getter");

  internals_partial_v8_internal::PeerConnectionCountLimitAttributeGetter(info);
}

void V8InternalsPartial::NumberOfLiveAXObjectsMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_Internals_numberOfLiveAXObjects");

  internals_partial_v8_internal::NumberOfLiveAXObjectsMethod(info);
}

void V8InternalsPartial::AddFakeDeviceMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_Internals_addFakeDevice");

  internals_partial_v8_internal::AddFakeDeviceMethod(info);
}

void V8InternalsPartial::SetNetworkConnectionInfoOverrideMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_Internals_setNetworkConnectionInfoOverride");

  internals_partial_v8_internal::SetNetworkConnectionInfoOverrideMethod(info);
}

void V8InternalsPartial::SetSaveDataEnabledMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_Internals_setSaveDataEnabled");

  internals_partial_v8_internal::SetSaveDataEnabledMethod(info);
}

void V8InternalsPartial::ClearNetworkConnectionInfoOverrideMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_Internals_clearNetworkConnectionInfoOverride");

  internals_partial_v8_internal::ClearNetworkConnectionInfoOverrideMethod(info);
}

void V8InternalsPartial::RTCCertificateEqualsMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_Internals_rtcCertificateEquals");

  internals_partial_v8_internal::RTCCertificateEqualsMethod(info);
}

void V8InternalsPartial::PeerConnectionCountMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_Internals_peerConnectionCount");

  internals_partial_v8_internal::PeerConnectionCountMethod(info);
}

void V8InternalsPartial::TerminateServiceWorkerMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_Internals_terminateServiceWorker");

  internals_partial_v8_internal::TerminateServiceWorkerMethod(info);
}

void V8InternalsPartial::EnableMockSpeechSynthesizerMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_Internals_enableMockSpeechSynthesizer");

  internals_partial_v8_internal::EnableMockSpeechSynthesizerMethod(info);
}

void V8InternalsPartial::IsVibratingMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_Internals_isVibrating");

  internals_partial_v8_internal::IsVibratingMethod(info);
}

void V8InternalsPartial::PendingVibrationPatternMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_Internals_pendingVibrationPattern");

  internals_partial_v8_internal::PendingVibrationPatternMethod(info);
}

void V8InternalsPartial::AudioHandlerCountMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_Internals_audioHandlerCount");

  internals_partial_v8_internal::AudioHandlerCountMethod(info);
}

static constexpr V8DOMConfiguration::AccessorConfiguration kV8InternalsAccessors[] = {
    { "peerConnectionCountLimit", V8InternalsPartial::PeerConnectionCountLimitAttributeGetterCallback, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
};

static constexpr V8DOMConfiguration::MethodConfiguration kV8InternalsMethods[] = {
    {"numberOfLiveAXObjects", V8InternalsPartial::NumberOfLiveAXObjectsMethodCallback, 0, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"addFakeDevice", V8InternalsPartial::AddFakeDeviceMethodCallback, 3, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kDoNotCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"setNetworkConnectionInfoOverride", V8InternalsPartial::SetNetworkConnectionInfoOverrideMethodCallback, 5, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"setSaveDataEnabled", V8InternalsPartial::SetSaveDataEnabledMethodCallback, 1, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"clearNetworkConnectionInfoOverride", V8InternalsPartial::ClearNetworkConnectionInfoOverrideMethodCallback, 0, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"rtcCertificateEquals", V8InternalsPartial::RTCCertificateEqualsMethodCallback, 2, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"peerConnectionCount", V8InternalsPartial::PeerConnectionCountMethodCallback, 0, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"terminateServiceWorker", V8InternalsPartial::TerminateServiceWorkerMethodCallback, 1, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kDoNotCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"enableMockSpeechSynthesizer", V8InternalsPartial::EnableMockSpeechSynthesizerMethodCallback, 1, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"isVibrating", V8InternalsPartial::IsVibratingMethodCallback, 1, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"pendingVibrationPattern", V8InternalsPartial::PendingVibrationPatternMethodCallback, 1, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"audioHandlerCount", V8InternalsPartial::AudioHandlerCountMethodCallback, 0, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
};

void V8InternalsPartial::InstallV8InternalsTemplate(
    v8::Isolate* isolate,
    const DOMWrapperWorld& world,
    v8::Local<v8::FunctionTemplate> interface_template) {
  // Initialize the interface object's template.
  V8Internals::InstallV8InternalsTemplate(isolate, world, interface_template);

  v8::Local<v8::Signature> signature = v8::Signature::New(isolate, interface_template);
  ALLOW_UNUSED_LOCAL(signature);
  v8::Local<v8::ObjectTemplate> instance_template = interface_template->InstanceTemplate();
  ALLOW_UNUSED_LOCAL(instance_template);
  v8::Local<v8::ObjectTemplate> prototype_template = interface_template->PrototypeTemplate();
  ALLOW_UNUSED_LOCAL(prototype_template);

  // Register IDL constants, attributes and operations.
  V8DOMConfiguration::InstallAccessors(
      isolate, world, instance_template, prototype_template, interface_template,
      signature, kV8InternalsAccessors, base::size(kV8InternalsAccessors));
  V8DOMConfiguration::InstallMethods(
      isolate, world, instance_template, prototype_template, interface_template,
      signature, kV8InternalsMethods, base::size(kV8InternalsMethods));

  // Custom signature

  V8InternalsPartial::InstallRuntimeEnabledFeaturesOnTemplate(
      isolate, world, interface_template);
}

void V8InternalsPartial::InstallRuntimeEnabledFeaturesOnTemplate(
    v8::Isolate* isolate,
    const DOMWrapperWorld& world,
    v8::Local<v8::FunctionTemplate> interface_template) {
  V8Internals::InstallRuntimeEnabledFeaturesOnTemplate(isolate, world, interface_template);

  v8::Local<v8::Signature> signature = v8::Signature::New(isolate, interface_template);
  ALLOW_UNUSED_LOCAL(signature);
  v8::Local<v8::ObjectTemplate> instance_template = interface_template->InstanceTemplate();
  ALLOW_UNUSED_LOCAL(instance_template);
  v8::Local<v8::ObjectTemplate> prototype_template = interface_template->PrototypeTemplate();
  ALLOW_UNUSED_LOCAL(prototype_template);

  // Register IDL constants, attributes and operations.

  // Custom signature
}

void V8InternalsPartial::Initialize() {
  // Should be invoked from ModulesInitializer.
  V8Internals::UpdateWrapperTypeInfo(
      &V8InternalsPartial::InstallV8InternalsTemplate,
      nullptr,
      &V8InternalsPartial::InstallRuntimeEnabledFeaturesOnTemplate,
      nullptr);
}

}  // namespace blink
