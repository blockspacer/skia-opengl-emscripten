// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated from the Jinja2 template
// third_party/blink/renderer/bindings/templates/dictionary_v8.cc.tmpl
// by the script code_generator_v8.py.
// DO NOT MODIFY!

// clang-format off
#include "third_party/blink/renderer/bindings/modules/v8/v8_rtc_configuration.h"

#include "base/stl_util.h"
#include "third_party/blink/renderer/bindings/core/v8/idl_types.h"
#include "third_party/blink/renderer/bindings/core/v8/native_value_traits_impl.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_rtc_certificate.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_rtc_ice_server.h"
#include "third_party/blink/renderer/core/execution_context/execution_context.h"
#include "third_party/blink/renderer/core/origin_trials/origin_trials.h"
#include "third_party/blink/renderer/platform/bindings/exception_state.h"
#include "third_party/blink/renderer/platform/runtime_enabled_features.h"

namespace blink {

static const v8::Eternal<v8::Name>* eternalV8RTCConfigurationKeys(v8::Isolate* isolate) {
  static const char* const kKeys[] = {
    "bundlePolicy",
    "certificates",
    "iceCandidatePoolSize",
    "iceServers",
    "iceTransportPolicy",
    "iceTransports",
    "offerExtmapAllowMixed",
    "rtcAudioJitterBufferFastAccelerate",
    "rtcAudioJitterBufferMaxPackets",
    "rtcAudioJitterBufferMinDelayMs",
    "rtcpMuxPolicy",
    "sdpSemantics",
  };
  return V8PerIsolateData::From(isolate)->FindOrCreateEternalNameCache(
      kKeys, kKeys, base::size(kKeys));
}

void V8RTCConfiguration::ToImpl(v8::Isolate* isolate, v8::Local<v8::Value> v8_value, RTCConfiguration* impl, ExceptionState& exception_state) {
  if (IsUndefinedOrNull(v8_value)) {
    return;
  }
  if (!v8_value->IsObject()) {
    exception_state.ThrowTypeError("cannot convert to dictionary.");
    return;
  }
  v8::Local<v8::Object> v8Object = v8_value.As<v8::Object>();
  ALLOW_UNUSED_LOCAL(v8Object);

  const v8::Eternal<v8::Name>* keys = eternalV8RTCConfigurationKeys(isolate);
  v8::TryCatch block(isolate);
  v8::Local<v8::Context> context = isolate->GetCurrentContext();
  ExecutionContext* executionContext = ToExecutionContext(context);
  DCHECK(executionContext);
  v8::Local<v8::Value> bundle_policy_value;
  if (!v8Object->Get(context, keys[0].Get(isolate)).ToLocal(&bundle_policy_value)) {
    exception_state.RethrowV8Exception(block.Exception());
    return;
  }
  if (bundle_policy_value.IsEmpty() || bundle_policy_value->IsUndefined()) {
    // Do nothing.
  } else {
    V8StringResource<> bundle_policy_cpp_value = bundle_policy_value;
    if (!bundle_policy_cpp_value.Prepare(exception_state))
      return;
    const char* kValidValues[] = {
        "balanced",
        "max-compat",
        "max-bundle",
    };
    if (!IsValidEnum(bundle_policy_cpp_value, kValidValues, base::size(kValidValues), "RTCBundlePolicy", exception_state))
      return;
    impl->setBundlePolicy(bundle_policy_cpp_value);
  }

  v8::Local<v8::Value> certificates_value;
  if (!v8Object->Get(context, keys[1].Get(isolate)).ToLocal(&certificates_value)) {
    exception_state.RethrowV8Exception(block.Exception());
    return;
  }
  if (certificates_value.IsEmpty() || certificates_value->IsUndefined()) {
    // Do nothing.
  } else {
    HeapVector<Member<RTCCertificate>> certificates_cpp_value = NativeValueTraits<IDLSequence<RTCCertificate>>::NativeValue(isolate, certificates_value, exception_state);
    if (exception_state.HadException())
      return;
    impl->setCertificates(certificates_cpp_value);
  }

  v8::Local<v8::Value> ice_candidate_pool_size_value;
  if (!v8Object->Get(context, keys[2].Get(isolate)).ToLocal(&ice_candidate_pool_size_value)) {
    exception_state.RethrowV8Exception(block.Exception());
    return;
  }
  if (ice_candidate_pool_size_value.IsEmpty() || ice_candidate_pool_size_value->IsUndefined()) {
    // Do nothing.
  } else {
    uint8_t ice_candidate_pool_size_cpp_value = NativeValueTraits<IDLOctetEnforceRange>::NativeValue(isolate, ice_candidate_pool_size_value, exception_state);
    if (exception_state.HadException())
      return;
    impl->setIceCandidatePoolSize(ice_candidate_pool_size_cpp_value);
  }

  v8::Local<v8::Value> ice_servers_value;
  if (!v8Object->Get(context, keys[3].Get(isolate)).ToLocal(&ice_servers_value)) {
    exception_state.RethrowV8Exception(block.Exception());
    return;
  }
  if (ice_servers_value.IsEmpty() || ice_servers_value->IsUndefined()) {
    // Do nothing.
  } else {
    HeapVector<Member<RTCIceServer>> ice_servers_cpp_value = NativeValueTraits<IDLSequence<RTCIceServer>>::NativeValue(isolate, ice_servers_value, exception_state);
    if (exception_state.HadException())
      return;
    impl->setIceServers(ice_servers_cpp_value);
  }

  v8::Local<v8::Value> ice_transport_policy_value;
  if (!v8Object->Get(context, keys[4].Get(isolate)).ToLocal(&ice_transport_policy_value)) {
    exception_state.RethrowV8Exception(block.Exception());
    return;
  }
  if (ice_transport_policy_value.IsEmpty() || ice_transport_policy_value->IsUndefined()) {
    // Do nothing.
  } else {
    V8StringResource<> ice_transport_policy_cpp_value = ice_transport_policy_value;
    if (!ice_transport_policy_cpp_value.Prepare(exception_state))
      return;
    const char* kValidValues[] = {
        "relay",
        "all",
    };
    if (!IsValidEnum(ice_transport_policy_cpp_value, kValidValues, base::size(kValidValues), "RTCIceTransportPolicy", exception_state))
      return;
    impl->setIceTransportPolicy(ice_transport_policy_cpp_value);
  }

  v8::Local<v8::Value> ice_transports_value;
  if (!v8Object->Get(context, keys[5].Get(isolate)).ToLocal(&ice_transports_value)) {
    exception_state.RethrowV8Exception(block.Exception());
    return;
  }
  if (ice_transports_value.IsEmpty() || ice_transports_value->IsUndefined()) {
    // Do nothing.
  } else {
    V8StringResource<> ice_transports_cpp_value = ice_transports_value;
    if (!ice_transports_cpp_value.Prepare(exception_state))
      return;
    const char* kValidValues[] = {
        "relay",
        "all",
    };
    if (!IsValidEnum(ice_transports_cpp_value, kValidValues, base::size(kValidValues), "RTCIceTransportPolicy", exception_state))
      return;
    impl->setIceTransports(ice_transports_cpp_value);
  }

  v8::Local<v8::Value> offer_extmap_allow_mixed_value;
  if (!v8Object->Get(context, keys[6].Get(isolate)).ToLocal(&offer_extmap_allow_mixed_value)) {
    exception_state.RethrowV8Exception(block.Exception());
    return;
  }
  if (offer_extmap_allow_mixed_value.IsEmpty() || offer_extmap_allow_mixed_value->IsUndefined()) {
    // Do nothing.
  } else {
    bool offer_extmap_allow_mixed_cpp_value = NativeValueTraits<IDLBoolean>::NativeValue(isolate, offer_extmap_allow_mixed_value, exception_state);
    if (exception_state.HadException())
      return;
    impl->setOfferExtmapAllowMixed(offer_extmap_allow_mixed_cpp_value);
  }

  v8::Local<v8::Value> rtcp_mux_policy_value;
  if (!v8Object->Get(context, keys[10].Get(isolate)).ToLocal(&rtcp_mux_policy_value)) {
    exception_state.RethrowV8Exception(block.Exception());
    return;
  }
  if (rtcp_mux_policy_value.IsEmpty() || rtcp_mux_policy_value->IsUndefined()) {
    // Do nothing.
  } else {
    V8StringResource<> rtcp_mux_policy_cpp_value = rtcp_mux_policy_value;
    if (!rtcp_mux_policy_cpp_value.Prepare(exception_state))
      return;
    const char* kValidValues[] = {
        "negotiate",
        "require",
    };
    if (!IsValidEnum(rtcp_mux_policy_cpp_value, kValidValues, base::size(kValidValues), "RTCRtcpMuxPolicy", exception_state))
      return;
    impl->setRtcpMuxPolicy(rtcp_mux_policy_cpp_value);
  }

  if (RuntimeEnabledFeatures::RTCUnifiedPlanEnabled()) {
    v8::Local<v8::Value> sdp_semantics_value;
    if (!v8Object->Get(context, keys[11].Get(isolate)).ToLocal(&sdp_semantics_value)) {
      exception_state.RethrowV8Exception(block.Exception());
      return;
    }
    if (sdp_semantics_value.IsEmpty() || sdp_semantics_value->IsUndefined()) {
      // Do nothing.
    } else {
      V8StringResource<> sdp_semantics_cpp_value = sdp_semantics_value;
      if (!sdp_semantics_cpp_value.Prepare(exception_state))
        return;
      const char* kValidValues[] = {
          "plan-b",
          "unified-plan",
      };
      if (!IsValidEnum(sdp_semantics_cpp_value, kValidValues, base::size(kValidValues), "SdpSemantics", exception_state))
        return;
      impl->setSdpSemantics(sdp_semantics_cpp_value);
    }
  }

  if (RuntimeEnabledFeatures::RtcAudioJitterBufferMaxPacketsEnabled(executionContext)) {
    v8::Local<v8::Value> rtc_audio_jitter_buffer_fast_accelerate_value;
    if (!v8Object->Get(context, keys[7].Get(isolate)).ToLocal(&rtc_audio_jitter_buffer_fast_accelerate_value)) {
      exception_state.RethrowV8Exception(block.Exception());
      return;
    }
    if (rtc_audio_jitter_buffer_fast_accelerate_value.IsEmpty() || rtc_audio_jitter_buffer_fast_accelerate_value->IsUndefined()) {
      // Do nothing.
    } else {
      bool rtc_audio_jitter_buffer_fast_accelerate_cpp_value = NativeValueTraits<IDLBoolean>::NativeValue(isolate, rtc_audio_jitter_buffer_fast_accelerate_value, exception_state);
      if (exception_state.HadException())
        return;
      impl->setRtcAudioJitterBufferFastAccelerate(rtc_audio_jitter_buffer_fast_accelerate_cpp_value);
    }

    v8::Local<v8::Value> rtc_audio_jitter_buffer_max_packets_value;
    if (!v8Object->Get(context, keys[8].Get(isolate)).ToLocal(&rtc_audio_jitter_buffer_max_packets_value)) {
      exception_state.RethrowV8Exception(block.Exception());
      return;
    }
    if (rtc_audio_jitter_buffer_max_packets_value.IsEmpty() || rtc_audio_jitter_buffer_max_packets_value->IsUndefined()) {
      // Do nothing.
    } else {
      int32_t rtc_audio_jitter_buffer_max_packets_cpp_value = NativeValueTraits<IDLLong>::NativeValue(isolate, rtc_audio_jitter_buffer_max_packets_value, exception_state);
      if (exception_state.HadException())
        return;
      impl->setRtcAudioJitterBufferMaxPackets(rtc_audio_jitter_buffer_max_packets_cpp_value);
    }

    v8::Local<v8::Value> rtc_audio_jitter_buffer_min_delay_ms_value;
    if (!v8Object->Get(context, keys[9].Get(isolate)).ToLocal(&rtc_audio_jitter_buffer_min_delay_ms_value)) {
      exception_state.RethrowV8Exception(block.Exception());
      return;
    }
    if (rtc_audio_jitter_buffer_min_delay_ms_value.IsEmpty() || rtc_audio_jitter_buffer_min_delay_ms_value->IsUndefined()) {
      // Do nothing.
    } else {
      int32_t rtc_audio_jitter_buffer_min_delay_ms_cpp_value = NativeValueTraits<IDLLong>::NativeValue(isolate, rtc_audio_jitter_buffer_min_delay_ms_value, exception_state);
      if (exception_state.HadException())
        return;
      impl->setRtcAudioJitterBufferMinDelayMs(rtc_audio_jitter_buffer_min_delay_ms_cpp_value);
    }
  }
}

v8::Local<v8::Value> RTCConfiguration::ToV8Impl(v8::Local<v8::Object> creationContext, v8::Isolate* isolate) const {
  v8::Local<v8::Object> v8Object = v8::Object::New(isolate);
  if (!toV8RTCConfiguration(this, v8Object, creationContext, isolate))
    return v8::Undefined(isolate);
  return v8Object;
}

bool toV8RTCConfiguration(const RTCConfiguration* impl, v8::Local<v8::Object> dictionary, v8::Local<v8::Object> creationContext, v8::Isolate* isolate) {
  const v8::Eternal<v8::Name>* keys = eternalV8RTCConfigurationKeys(isolate);
  v8::Local<v8::Context> context = isolate->GetCurrentContext();

  auto create_property = [dictionary, context, keys, isolate](
                             size_t key_index, v8::Local<v8::Value> value) {
    bool added_property;
    v8::Local<v8::Name> key = keys[key_index].Get(isolate);
    if (!dictionary->CreateDataProperty(context, key, value)
             .To(&added_property)) {
      return false;
    }
    return added_property;
  };

  ExecutionContext* executionContext = ToExecutionContext(context);
  DCHECK(executionContext);
  v8::Local<v8::Value> bundle_policy_value;
  bool bundle_policy_has_value_or_default = false;
  if (impl->hasBundlePolicy()) {
    bundle_policy_value = V8String(isolate, impl->bundlePolicy());
    bundle_policy_has_value_or_default = true;
  } else {
    bundle_policy_value = V8String(isolate, "balanced");
    bundle_policy_has_value_or_default = true;
  }
  if (bundle_policy_has_value_or_default &&
      !create_property(0, bundle_policy_value)) {
    return false;
  }

  v8::Local<v8::Value> certificates_value;
  bool certificates_has_value_or_default = false;
  if (impl->hasCertificates()) {
    certificates_value = ToV8(impl->certificates(), creationContext, isolate);
    certificates_has_value_or_default = true;
  }
  if (certificates_has_value_or_default &&
      !create_property(1, certificates_value)) {
    return false;
  }

  v8::Local<v8::Value> ice_candidate_pool_size_value;
  bool ice_candidate_pool_size_has_value_or_default = false;
  if (impl->hasIceCandidatePoolSize()) {
    ice_candidate_pool_size_value = v8::Integer::NewFromUnsigned(isolate, impl->iceCandidatePoolSize());
    ice_candidate_pool_size_has_value_or_default = true;
  } else {
    ice_candidate_pool_size_value = v8::Integer::NewFromUnsigned(isolate, 0u);
    ice_candidate_pool_size_has_value_or_default = true;
  }
  if (ice_candidate_pool_size_has_value_or_default &&
      !create_property(2, ice_candidate_pool_size_value)) {
    return false;
  }

  v8::Local<v8::Value> ice_servers_value;
  bool ice_servers_has_value_or_default = false;
  if (impl->hasIceServers()) {
    ice_servers_value = ToV8(impl->iceServers(), creationContext, isolate);
    ice_servers_has_value_or_default = true;
  }
  if (ice_servers_has_value_or_default &&
      !create_property(3, ice_servers_value)) {
    return false;
  }

  v8::Local<v8::Value> ice_transport_policy_value;
  bool ice_transport_policy_has_value_or_default = false;
  if (impl->hasIceTransportPolicy()) {
    ice_transport_policy_value = V8String(isolate, impl->iceTransportPolicy());
    ice_transport_policy_has_value_or_default = true;
  }
  if (ice_transport_policy_has_value_or_default &&
      !create_property(4, ice_transport_policy_value)) {
    return false;
  }

  v8::Local<v8::Value> ice_transports_value;
  bool ice_transports_has_value_or_default = false;
  if (impl->hasIceTransports()) {
    ice_transports_value = V8String(isolate, impl->iceTransports());
    ice_transports_has_value_or_default = true;
  }
  if (ice_transports_has_value_or_default &&
      !create_property(5, ice_transports_value)) {
    return false;
  }

  v8::Local<v8::Value> offer_extmap_allow_mixed_value;
  bool offer_extmap_allow_mixed_has_value_or_default = false;
  if (impl->hasOfferExtmapAllowMixed()) {
    offer_extmap_allow_mixed_value = v8::Boolean::New(isolate, impl->offerExtmapAllowMixed());
    offer_extmap_allow_mixed_has_value_or_default = true;
  }
  if (offer_extmap_allow_mixed_has_value_or_default &&
      !create_property(6, offer_extmap_allow_mixed_value)) {
    return false;
  }

  v8::Local<v8::Value> rtcp_mux_policy_value;
  bool rtcp_mux_policy_has_value_or_default = false;
  if (impl->hasRtcpMuxPolicy()) {
    rtcp_mux_policy_value = V8String(isolate, impl->rtcpMuxPolicy());
    rtcp_mux_policy_has_value_or_default = true;
  } else {
    rtcp_mux_policy_value = V8String(isolate, "require");
    rtcp_mux_policy_has_value_or_default = true;
  }
  if (rtcp_mux_policy_has_value_or_default &&
      !create_property(10, rtcp_mux_policy_value)) {
    return false;
  }

  if (RuntimeEnabledFeatures::RTCUnifiedPlanEnabled()) {
    v8::Local<v8::Value> sdp_semantics_value;
    bool sdp_semantics_has_value_or_default = false;
    if (impl->hasSdpSemantics()) {
      sdp_semantics_value = V8String(isolate, impl->sdpSemantics());
      sdp_semantics_has_value_or_default = true;
    }
    if (sdp_semantics_has_value_or_default &&
        !create_property(11, sdp_semantics_value)) {
      return false;
    }
  }

  if (RuntimeEnabledFeatures::RtcAudioJitterBufferMaxPacketsEnabled(executionContext)) {
    v8::Local<v8::Value> rtc_audio_jitter_buffer_fast_accelerate_value;
    bool rtc_audio_jitter_buffer_fast_accelerate_has_value_or_default = false;
    if (impl->hasRtcAudioJitterBufferFastAccelerate()) {
      rtc_audio_jitter_buffer_fast_accelerate_value = v8::Boolean::New(isolate, impl->rtcAudioJitterBufferFastAccelerate());
      rtc_audio_jitter_buffer_fast_accelerate_has_value_or_default = true;
    }
    if (rtc_audio_jitter_buffer_fast_accelerate_has_value_or_default &&
        !create_property(7, rtc_audio_jitter_buffer_fast_accelerate_value)) {
      return false;
    }

    v8::Local<v8::Value> rtc_audio_jitter_buffer_max_packets_value;
    bool rtc_audio_jitter_buffer_max_packets_has_value_or_default = false;
    if (impl->hasRtcAudioJitterBufferMaxPackets()) {
      rtc_audio_jitter_buffer_max_packets_value = v8::Integer::New(isolate, impl->rtcAudioJitterBufferMaxPackets());
      rtc_audio_jitter_buffer_max_packets_has_value_or_default = true;
    }
    if (rtc_audio_jitter_buffer_max_packets_has_value_or_default &&
        !create_property(8, rtc_audio_jitter_buffer_max_packets_value)) {
      return false;
    }

    v8::Local<v8::Value> rtc_audio_jitter_buffer_min_delay_ms_value;
    bool rtc_audio_jitter_buffer_min_delay_ms_has_value_or_default = false;
    if (impl->hasRtcAudioJitterBufferMinDelayMs()) {
      rtc_audio_jitter_buffer_min_delay_ms_value = v8::Integer::New(isolate, impl->rtcAudioJitterBufferMinDelayMs());
      rtc_audio_jitter_buffer_min_delay_ms_has_value_or_default = true;
    }
    if (rtc_audio_jitter_buffer_min_delay_ms_has_value_or_default &&
        !create_property(9, rtc_audio_jitter_buffer_min_delay_ms_value)) {
      return false;
    }
  }

  return true;
}

RTCConfiguration* NativeValueTraits<RTCConfiguration>::NativeValue(v8::Isolate* isolate, v8::Local<v8::Value> value, ExceptionState& exception_state) {
  RTCConfiguration* impl = RTCConfiguration::Create();
  V8RTCConfiguration::ToImpl(isolate, value, impl, exception_state);
  return impl;
}

}  // namespace blink
