// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated from the Jinja2 template
// third_party/blink/renderer/bindings/templates/dictionary_v8.cc.tmpl
// by the script code_generator_v8.py.
// DO NOT MODIFY!

// clang-format off
#include "third_party/blink/renderer/bindings/modules/v8/v8_rtc_rtp_codec_parameters.h"

#include "base/stl_util.h"
#include "third_party/blink/renderer/bindings/core/v8/idl_types.h"
#include "third_party/blink/renderer/bindings/core/v8/native_value_traits_impl.h"
#include "third_party/blink/renderer/platform/bindings/exception_state.h"

namespace blink {

static const v8::Eternal<v8::Name>* eternalV8RTCRtpCodecParametersKeys(v8::Isolate* isolate) {
  static const char* const kKeys[] = {
    "channels",
    "clockRate",
    "mimeType",
    "payloadType",
    "sdpFmtpLine",
  };
  return V8PerIsolateData::From(isolate)->FindOrCreateEternalNameCache(
      kKeys, kKeys, base::size(kKeys));
}

void V8RTCRtpCodecParameters::ToImpl(v8::Isolate* isolate, v8::Local<v8::Value> v8_value, RTCRtpCodecParameters* impl, ExceptionState& exception_state) {
  if (IsUndefinedOrNull(v8_value)) {
    exception_state.ThrowTypeError("Missing required member(s): clockRate, mimeType, payloadType.");
    return;
  }
  if (!v8_value->IsObject()) {
    exception_state.ThrowTypeError("cannot convert to dictionary.");
    return;
  }
  v8::Local<v8::Object> v8Object = v8_value.As<v8::Object>();
  ALLOW_UNUSED_LOCAL(v8Object);

  const v8::Eternal<v8::Name>* keys = eternalV8RTCRtpCodecParametersKeys(isolate);
  v8::TryCatch block(isolate);
  v8::Local<v8::Context> context = isolate->GetCurrentContext();
  v8::Local<v8::Value> channels_value;
  if (!v8Object->Get(context, keys[0].Get(isolate)).ToLocal(&channels_value)) {
    exception_state.RethrowV8Exception(block.Exception());
    return;
  }
  if (channels_value.IsEmpty() || channels_value->IsUndefined()) {
    // Do nothing.
  } else {
    uint16_t channels_cpp_value = NativeValueTraits<IDLUnsignedShort>::NativeValue(isolate, channels_value, exception_state);
    if (exception_state.HadException())
      return;
    impl->setChannels(channels_cpp_value);
  }

  v8::Local<v8::Value> clock_rate_value;
  if (!v8Object->Get(context, keys[1].Get(isolate)).ToLocal(&clock_rate_value)) {
    exception_state.RethrowV8Exception(block.Exception());
    return;
  }
  if (clock_rate_value.IsEmpty() || clock_rate_value->IsUndefined()) {
    exception_state.ThrowTypeError("required member clockRate is undefined.");
    return;
  } else {
    uint32_t clock_rate_cpp_value = NativeValueTraits<IDLUnsignedLong>::NativeValue(isolate, clock_rate_value, exception_state);
    if (exception_state.HadException())
      return;
    impl->setClockRate(clock_rate_cpp_value);
  }

  v8::Local<v8::Value> mime_type_value;
  if (!v8Object->Get(context, keys[2].Get(isolate)).ToLocal(&mime_type_value)) {
    exception_state.RethrowV8Exception(block.Exception());
    return;
  }
  if (mime_type_value.IsEmpty() || mime_type_value->IsUndefined()) {
    exception_state.ThrowTypeError("required member mimeType is undefined.");
    return;
  } else {
    V8StringResource<> mime_type_cpp_value = mime_type_value;
    if (!mime_type_cpp_value.Prepare(exception_state))
      return;
    impl->setMimeType(mime_type_cpp_value);
  }

  v8::Local<v8::Value> payload_type_value;
  if (!v8Object->Get(context, keys[3].Get(isolate)).ToLocal(&payload_type_value)) {
    exception_state.RethrowV8Exception(block.Exception());
    return;
  }
  if (payload_type_value.IsEmpty() || payload_type_value->IsUndefined()) {
    exception_state.ThrowTypeError("required member payloadType is undefined.");
    return;
  } else {
    uint8_t payload_type_cpp_value = NativeValueTraits<IDLOctet>::NativeValue(isolate, payload_type_value, exception_state);
    if (exception_state.HadException())
      return;
    impl->setPayloadType(payload_type_cpp_value);
  }

  v8::Local<v8::Value> sdp_fmtp_line_value;
  if (!v8Object->Get(context, keys[4].Get(isolate)).ToLocal(&sdp_fmtp_line_value)) {
    exception_state.RethrowV8Exception(block.Exception());
    return;
  }
  if (sdp_fmtp_line_value.IsEmpty() || sdp_fmtp_line_value->IsUndefined()) {
    // Do nothing.
  } else {
    V8StringResource<> sdp_fmtp_line_cpp_value = sdp_fmtp_line_value;
    if (!sdp_fmtp_line_cpp_value.Prepare(exception_state))
      return;
    impl->setSdpFmtpLine(sdp_fmtp_line_cpp_value);
  }
}

v8::Local<v8::Value> RTCRtpCodecParameters::ToV8Impl(v8::Local<v8::Object> creationContext, v8::Isolate* isolate) const {
  v8::Local<v8::Object> v8Object = v8::Object::New(isolate);
  if (!toV8RTCRtpCodecParameters(this, v8Object, creationContext, isolate))
    return v8::Undefined(isolate);
  return v8Object;
}

bool toV8RTCRtpCodecParameters(const RTCRtpCodecParameters* impl, v8::Local<v8::Object> dictionary, v8::Local<v8::Object> creationContext, v8::Isolate* isolate) {
  const v8::Eternal<v8::Name>* keys = eternalV8RTCRtpCodecParametersKeys(isolate);
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

  v8::Local<v8::Value> channels_value;
  bool channels_has_value_or_default = false;
  if (impl->hasChannels()) {
    channels_value = v8::Integer::NewFromUnsigned(isolate, impl->channels());
    channels_has_value_or_default = true;
  }
  if (channels_has_value_or_default &&
      !create_property(0, channels_value)) {
    return false;
  }

  v8::Local<v8::Value> clock_rate_value;
  bool clock_rate_has_value_or_default = false;
  if (impl->hasClockRate()) {
    clock_rate_value = v8::Integer::NewFromUnsigned(isolate, impl->clockRate());
    clock_rate_has_value_or_default = true;
  } else {
    NOTREACHED();
  }
  if (clock_rate_has_value_or_default &&
      !create_property(1, clock_rate_value)) {
    return false;
  }

  v8::Local<v8::Value> mime_type_value;
  bool mime_type_has_value_or_default = false;
  if (impl->hasMimeType()) {
    mime_type_value = V8String(isolate, impl->mimeType());
    mime_type_has_value_or_default = true;
  } else {
    NOTREACHED();
  }
  if (mime_type_has_value_or_default &&
      !create_property(2, mime_type_value)) {
    return false;
  }

  v8::Local<v8::Value> payload_type_value;
  bool payload_type_has_value_or_default = false;
  if (impl->hasPayloadType()) {
    payload_type_value = v8::Integer::NewFromUnsigned(isolate, impl->payloadType());
    payload_type_has_value_or_default = true;
  } else {
    NOTREACHED();
  }
  if (payload_type_has_value_or_default &&
      !create_property(3, payload_type_value)) {
    return false;
  }

  v8::Local<v8::Value> sdp_fmtp_line_value;
  bool sdp_fmtp_line_has_value_or_default = false;
  if (impl->hasSdpFmtpLine()) {
    sdp_fmtp_line_value = V8String(isolate, impl->sdpFmtpLine());
    sdp_fmtp_line_has_value_or_default = true;
  }
  if (sdp_fmtp_line_has_value_or_default &&
      !create_property(4, sdp_fmtp_line_value)) {
    return false;
  }

  return true;
}

RTCRtpCodecParameters* NativeValueTraits<RTCRtpCodecParameters>::NativeValue(v8::Isolate* isolate, v8::Local<v8::Value> value, ExceptionState& exception_state) {
  RTCRtpCodecParameters* impl = RTCRtpCodecParameters::Create();
  V8RTCRtpCodecParameters::ToImpl(isolate, value, impl, exception_state);
  return impl;
}

}  // namespace blink
