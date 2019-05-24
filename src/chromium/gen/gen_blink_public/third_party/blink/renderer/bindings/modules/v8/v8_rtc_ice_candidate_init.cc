// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated from the Jinja2 template
// third_party/blink/renderer/bindings/templates/dictionary_v8.cc.tmpl
// by the script code_generator_v8.py.
// DO NOT MODIFY!

// clang-format off
#include "third_party/blink/renderer/bindings/modules/v8/v8_rtc_ice_candidate_init.h"

#include "base/stl_util.h"
#include "third_party/blink/renderer/bindings/core/v8/idl_types.h"
#include "third_party/blink/renderer/bindings/core/v8/native_value_traits_impl.h"
#include "third_party/blink/renderer/platform/bindings/exception_state.h"

namespace blink {

static const v8::Eternal<v8::Name>* eternalV8RTCIceCandidateInitKeys(v8::Isolate* isolate) {
  static const char* const kKeys[] = {
    "candidate",
    "sdpMLineIndex",
    "sdpMid",
    "usernameFragment",
  };
  return V8PerIsolateData::From(isolate)->FindOrCreateEternalNameCache(
      kKeys, kKeys, base::size(kKeys));
}

void V8RTCIceCandidateInit::ToImpl(v8::Isolate* isolate, v8::Local<v8::Value> v8_value, RTCIceCandidateInit* impl, ExceptionState& exception_state) {
  if (IsUndefinedOrNull(v8_value)) {
    return;
  }
  if (!v8_value->IsObject()) {
    exception_state.ThrowTypeError("cannot convert to dictionary.");
    return;
  }
  v8::Local<v8::Object> v8Object = v8_value.As<v8::Object>();
  ALLOW_UNUSED_LOCAL(v8Object);

  const v8::Eternal<v8::Name>* keys = eternalV8RTCIceCandidateInitKeys(isolate);
  v8::TryCatch block(isolate);
  v8::Local<v8::Context> context = isolate->GetCurrentContext();
  v8::Local<v8::Value> candidate_value;
  if (!v8Object->Get(context, keys[0].Get(isolate)).ToLocal(&candidate_value)) {
    exception_state.RethrowV8Exception(block.Exception());
    return;
  }
  if (candidate_value.IsEmpty() || candidate_value->IsUndefined()) {
    // Do nothing.
  } else {
    V8StringResource<> candidate_cpp_value = candidate_value;
    if (!candidate_cpp_value.Prepare(exception_state))
      return;
    impl->setCandidate(candidate_cpp_value);
  }

  v8::Local<v8::Value> sdp_m_line_index_value;
  if (!v8Object->Get(context, keys[1].Get(isolate)).ToLocal(&sdp_m_line_index_value)) {
    exception_state.RethrowV8Exception(block.Exception());
    return;
  }
  if (sdp_m_line_index_value.IsEmpty() || sdp_m_line_index_value->IsUndefined()) {
    // Do nothing.
  } else if (sdp_m_line_index_value->IsNull()) {
    impl->setSdpMLineIndexToNull();
  } else {
    uint16_t sdp_m_line_index_cpp_value = NativeValueTraits<IDLUnsignedShort>::NativeValue(isolate, sdp_m_line_index_value, exception_state);
    if (exception_state.HadException())
      return;
    impl->setSdpMLineIndex(sdp_m_line_index_cpp_value);
  }

  v8::Local<v8::Value> sdp_mid_value;
  if (!v8Object->Get(context, keys[2].Get(isolate)).ToLocal(&sdp_mid_value)) {
    exception_state.RethrowV8Exception(block.Exception());
    return;
  }
  if (sdp_mid_value.IsEmpty() || sdp_mid_value->IsUndefined()) {
    // Do nothing.
  } else {
    V8StringResource<kTreatNullAndUndefinedAsNullString> sdp_mid_cpp_value = sdp_mid_value;
    if (!sdp_mid_cpp_value.Prepare(exception_state))
      return;
    impl->setSdpMid(sdp_mid_cpp_value);
  }

  v8::Local<v8::Value> username_fragment_value;
  if (!v8Object->Get(context, keys[3].Get(isolate)).ToLocal(&username_fragment_value)) {
    exception_state.RethrowV8Exception(block.Exception());
    return;
  }
  if (username_fragment_value.IsEmpty() || username_fragment_value->IsUndefined()) {
    // Do nothing.
  } else {
    V8StringResource<> username_fragment_cpp_value = username_fragment_value;
    if (!username_fragment_cpp_value.Prepare(exception_state))
      return;
    impl->setUsernameFragment(username_fragment_cpp_value);
  }
}

v8::Local<v8::Value> RTCIceCandidateInit::ToV8Impl(v8::Local<v8::Object> creationContext, v8::Isolate* isolate) const {
  v8::Local<v8::Object> v8Object = v8::Object::New(isolate);
  if (!toV8RTCIceCandidateInit(this, v8Object, creationContext, isolate))
    return v8::Undefined(isolate);
  return v8Object;
}

bool toV8RTCIceCandidateInit(const RTCIceCandidateInit* impl, v8::Local<v8::Object> dictionary, v8::Local<v8::Object> creationContext, v8::Isolate* isolate) {
  const v8::Eternal<v8::Name>* keys = eternalV8RTCIceCandidateInitKeys(isolate);
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

  v8::Local<v8::Value> candidate_value;
  bool candidate_has_value_or_default = false;
  if (impl->hasCandidate()) {
    candidate_value = V8String(isolate, impl->candidate());
    candidate_has_value_or_default = true;
  } else {
    candidate_value = V8String(isolate, WTF::g_empty_string);
    candidate_has_value_or_default = true;
  }
  if (candidate_has_value_or_default &&
      !create_property(0, candidate_value)) {
    return false;
  }

  v8::Local<v8::Value> sdp_m_line_index_value;
  bool sdp_m_line_index_has_value_or_default = false;
  if (impl->hasSdpMLineIndex()) {
    sdp_m_line_index_value = v8::Integer::NewFromUnsigned(isolate, impl->sdpMLineIndex());
    sdp_m_line_index_has_value_or_default = true;
  } else {
    sdp_m_line_index_value = v8::Null(isolate);
    sdp_m_line_index_has_value_or_default = true;
  }
  if (sdp_m_line_index_has_value_or_default &&
      !create_property(1, sdp_m_line_index_value)) {
    return false;
  }

  v8::Local<v8::Value> sdp_mid_value;
  bool sdp_mid_has_value_or_default = false;
  if (impl->hasSdpMid()) {
    sdp_mid_value = V8String(isolate, impl->sdpMid());
    sdp_mid_has_value_or_default = true;
  } else {
    sdp_mid_value = v8::Null(isolate);
    sdp_mid_has_value_or_default = true;
  }
  if (sdp_mid_has_value_or_default &&
      !create_property(2, sdp_mid_value)) {
    return false;
  }

  v8::Local<v8::Value> username_fragment_value;
  bool username_fragment_has_value_or_default = false;
  if (impl->hasUsernameFragment()) {
    username_fragment_value = V8String(isolate, impl->usernameFragment());
    username_fragment_has_value_or_default = true;
  }
  if (username_fragment_has_value_or_default &&
      !create_property(3, username_fragment_value)) {
    return false;
  }

  return true;
}

RTCIceCandidateInit* NativeValueTraits<RTCIceCandidateInit>::NativeValue(v8::Isolate* isolate, v8::Local<v8::Value> value, ExceptionState& exception_state) {
  RTCIceCandidateInit* impl = RTCIceCandidateInit::Create();
  V8RTCIceCandidateInit::ToImpl(isolate, value, impl, exception_state);
  return impl;
}

}  // namespace blink
