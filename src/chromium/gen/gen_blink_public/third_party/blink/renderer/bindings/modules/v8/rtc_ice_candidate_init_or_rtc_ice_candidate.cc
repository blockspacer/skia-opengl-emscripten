// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated from the Jinja2 template
// third_party/blink/renderer/bindings/templates/union_container.cc.tmpl
// by the script code_generator_v8.py.
// DO NOT MODIFY!

// clang-format off
#include "third_party/blink/renderer/bindings/modules/v8/rtc_ice_candidate_init_or_rtc_ice_candidate.h"

#include "base/stl_util.h"
#include "third_party/blink/renderer/bindings/core/v8/to_v8_for_core.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_rtc_ice_candidate.h"

namespace blink {

RTCIceCandidateInitOrRTCIceCandidate::RTCIceCandidateInitOrRTCIceCandidate() : type_(SpecificType::kNone) {}

RTCIceCandidate* RTCIceCandidateInitOrRTCIceCandidate::GetAsRTCIceCandidate() const {
  DCHECK(IsRTCIceCandidate());
  return rtc_ice_candidate_;
}

void RTCIceCandidateInitOrRTCIceCandidate::SetRTCIceCandidate(RTCIceCandidate* value) {
  DCHECK(IsNull());
  rtc_ice_candidate_ = value;
  type_ = SpecificType::kRTCIceCandidate;
}

RTCIceCandidateInitOrRTCIceCandidate RTCIceCandidateInitOrRTCIceCandidate::FromRTCIceCandidate(RTCIceCandidate* value) {
  RTCIceCandidateInitOrRTCIceCandidate container;
  container.SetRTCIceCandidate(value);
  return container;
}

RTCIceCandidateInit* RTCIceCandidateInitOrRTCIceCandidate::GetAsRTCIceCandidateInit() const {
  DCHECK(IsRTCIceCandidateInit());
  return rtc_ice_candidate_init_;
}

void RTCIceCandidateInitOrRTCIceCandidate::SetRTCIceCandidateInit(RTCIceCandidateInit* value) {
  DCHECK(IsNull());
  rtc_ice_candidate_init_ = value;
  type_ = SpecificType::kRTCIceCandidateInit;
}

RTCIceCandidateInitOrRTCIceCandidate RTCIceCandidateInitOrRTCIceCandidate::FromRTCIceCandidateInit(RTCIceCandidateInit* value) {
  RTCIceCandidateInitOrRTCIceCandidate container;
  container.SetRTCIceCandidateInit(value);
  return container;
}

RTCIceCandidateInitOrRTCIceCandidate::RTCIceCandidateInitOrRTCIceCandidate(const RTCIceCandidateInitOrRTCIceCandidate&) = default;
RTCIceCandidateInitOrRTCIceCandidate::~RTCIceCandidateInitOrRTCIceCandidate() = default;
RTCIceCandidateInitOrRTCIceCandidate& RTCIceCandidateInitOrRTCIceCandidate::operator=(const RTCIceCandidateInitOrRTCIceCandidate&) = default;

void RTCIceCandidateInitOrRTCIceCandidate::Trace(blink::Visitor* visitor) {
  visitor->Trace(rtc_ice_candidate_);
  visitor->Trace(rtc_ice_candidate_init_);
}

void V8RTCIceCandidateInitOrRTCIceCandidate::ToImpl(
    v8::Isolate* isolate,
    v8::Local<v8::Value> v8_value,
    RTCIceCandidateInitOrRTCIceCandidate& impl,
    UnionTypeConversionMode conversion_mode,
    ExceptionState& exception_state) {
  if (v8_value.IsEmpty())
    return;

  if (conversion_mode == UnionTypeConversionMode::kNullable && IsUndefinedOrNull(v8_value))
    return;

  if (IsUndefinedOrNull(v8_value)) {
    RTCIceCandidateInit* cpp_value = NativeValueTraits<RTCIceCandidateInit>::NativeValue(isolate, v8_value, exception_state);
    if (exception_state.HadException())
      return;
    impl.SetRTCIceCandidateInit(cpp_value);
    return;
  }

  if (V8RTCIceCandidate::HasInstance(v8_value, isolate)) {
    RTCIceCandidate* cpp_value = V8RTCIceCandidate::ToImpl(v8::Local<v8::Object>::Cast(v8_value));
    impl.SetRTCIceCandidate(cpp_value);
    return;
  }

  if (v8_value->IsObject()) {
    RTCIceCandidateInit* cpp_value = NativeValueTraits<RTCIceCandidateInit>::NativeValue(isolate, v8_value, exception_state);
    if (exception_state.HadException())
      return;
    impl.SetRTCIceCandidateInit(cpp_value);
    return;
  }

  exception_state.ThrowTypeError("The provided value is not of type '(RTCIceCandidateInit or RTCIceCandidate)'");
}

v8::Local<v8::Value> ToV8(const RTCIceCandidateInitOrRTCIceCandidate& impl, v8::Local<v8::Object> creationContext, v8::Isolate* isolate) {
  switch (impl.type_) {
    case RTCIceCandidateInitOrRTCIceCandidate::SpecificType::kNone:
      return v8::Null(isolate);
    case RTCIceCandidateInitOrRTCIceCandidate::SpecificType::kRTCIceCandidate:
      return ToV8(impl.GetAsRTCIceCandidate(), creationContext, isolate);
    case RTCIceCandidateInitOrRTCIceCandidate::SpecificType::kRTCIceCandidateInit:
      return ToV8(impl.GetAsRTCIceCandidateInit(), creationContext, isolate);
    default:
      NOTREACHED();
  }
  return v8::Local<v8::Value>();
}

RTCIceCandidateInitOrRTCIceCandidate NativeValueTraits<RTCIceCandidateInitOrRTCIceCandidate>::NativeValue(
    v8::Isolate* isolate, v8::Local<v8::Value> value, ExceptionState& exception_state) {
  RTCIceCandidateInitOrRTCIceCandidate impl;
  V8RTCIceCandidateInitOrRTCIceCandidate::ToImpl(isolate, value, impl, UnionTypeConversionMode::kNotNullable, exception_state);
  return impl;
}

}  // namespace blink
