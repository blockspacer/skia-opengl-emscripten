// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated from the Jinja2 template
// third_party/blink/renderer/bindings/templates/dictionary_v8.cc.tmpl
// by the script code_generator_v8.py.
// DO NOT MODIFY!

// clang-format off
#include "third_party/blink/renderer/bindings/modules/v8/v8_rtc_rtp_decoding_parameters.h"

#include "base/stl_util.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_rtc_rtp_coding_parameters.h"
#include "third_party/blink/renderer/platform/bindings/exception_state.h"

namespace blink {

void V8RTCRtpDecodingParameters::ToImpl(v8::Isolate* isolate, v8::Local<v8::Value> v8_value, RTCRtpDecodingParameters* impl, ExceptionState& exception_state) {
  if (IsUndefinedOrNull(v8_value)) {
    return;
  }
  if (!v8_value->IsObject()) {
    exception_state.ThrowTypeError("cannot convert to dictionary.");
    return;
  }
  v8::Local<v8::Object> v8Object = v8_value.As<v8::Object>();
  ALLOW_UNUSED_LOCAL(v8Object);

  V8RTCRtpCodingParameters::ToImpl(isolate, v8_value, impl, exception_state);
  if (exception_state.HadException())
    return;
}

v8::Local<v8::Value> RTCRtpDecodingParameters::ToV8Impl(v8::Local<v8::Object> creationContext, v8::Isolate* isolate) const {
  v8::Local<v8::Object> v8Object = v8::Object::New(isolate);
  if (!toV8RTCRtpDecodingParameters(this, v8Object, creationContext, isolate))
    return v8::Undefined(isolate);
  return v8Object;
}

bool toV8RTCRtpDecodingParameters(const RTCRtpDecodingParameters* impl, v8::Local<v8::Object> dictionary, v8::Local<v8::Object> creationContext, v8::Isolate* isolate) {
  if (!toV8RTCRtpCodingParameters(impl, dictionary, creationContext, isolate))
    return false;

  return true;
}

RTCRtpDecodingParameters* NativeValueTraits<RTCRtpDecodingParameters>::NativeValue(v8::Isolate* isolate, v8::Local<v8::Value> value, ExceptionState& exception_state) {
  RTCRtpDecodingParameters* impl = RTCRtpDecodingParameters::Create();
  V8RTCRtpDecodingParameters::ToImpl(isolate, value, impl, exception_state);
  return impl;
}

}  // namespace blink
