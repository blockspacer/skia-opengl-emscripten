// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated from the Jinja2 template
// third_party/blink/renderer/bindings/templates/dictionary_v8.cc.tmpl
// by the script code_generator_v8.py.
// DO NOT MODIFY!

// clang-format off
#include "third_party/blink/renderer/bindings/modules/v8/v8_rtc_offer_options.h"

#include "base/stl_util.h"
#include "third_party/blink/renderer/bindings/core/v8/idl_types.h"
#include "third_party/blink/renderer/bindings/core/v8/native_value_traits_impl.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_rtc_offer_answer_options.h"
#include "third_party/blink/renderer/platform/bindings/exception_state.h"

namespace blink {

static const v8::Eternal<v8::Name>* eternalV8RTCOfferOptionsKeys(v8::Isolate* isolate) {
  static const char* const kKeys[] = {
    "iceRestart",
    "offerToReceiveAudio",
    "offerToReceiveVideo",
  };
  return V8PerIsolateData::From(isolate)->FindOrCreateEternalNameCache(
      kKeys, kKeys, base::size(kKeys));
}

void V8RTCOfferOptions::ToImpl(v8::Isolate* isolate, v8::Local<v8::Value> v8_value, RTCOfferOptions* impl, ExceptionState& exception_state) {
  if (IsUndefinedOrNull(v8_value)) {
    return;
  }
  if (!v8_value->IsObject()) {
    exception_state.ThrowTypeError("cannot convert to dictionary.");
    return;
  }
  v8::Local<v8::Object> v8Object = v8_value.As<v8::Object>();
  ALLOW_UNUSED_LOCAL(v8Object);

  V8RTCOfferAnswerOptions::ToImpl(isolate, v8_value, impl, exception_state);
  if (exception_state.HadException())
    return;

  const v8::Eternal<v8::Name>* keys = eternalV8RTCOfferOptionsKeys(isolate);
  v8::TryCatch block(isolate);
  v8::Local<v8::Context> context = isolate->GetCurrentContext();
  v8::Local<v8::Value> ice_restart_value;
  if (!v8Object->Get(context, keys[0].Get(isolate)).ToLocal(&ice_restart_value)) {
    exception_state.RethrowV8Exception(block.Exception());
    return;
  }
  if (ice_restart_value.IsEmpty() || ice_restart_value->IsUndefined()) {
    // Do nothing.
  } else {
    bool ice_restart_cpp_value = NativeValueTraits<IDLBoolean>::NativeValue(isolate, ice_restart_value, exception_state);
    if (exception_state.HadException())
      return;
    impl->setIceRestart(ice_restart_cpp_value);
  }

  v8::Local<v8::Value> offer_to_receive_audio_value;
  if (!v8Object->Get(context, keys[1].Get(isolate)).ToLocal(&offer_to_receive_audio_value)) {
    exception_state.RethrowV8Exception(block.Exception());
    return;
  }
  if (offer_to_receive_audio_value.IsEmpty() || offer_to_receive_audio_value->IsUndefined()) {
    // Do nothing.
  } else {
    int32_t offer_to_receive_audio_cpp_value = NativeValueTraits<IDLLong>::NativeValue(isolate, offer_to_receive_audio_value, exception_state);
    if (exception_state.HadException())
      return;
    impl->setOfferToReceiveAudio(offer_to_receive_audio_cpp_value);
  }

  v8::Local<v8::Value> offer_to_receive_video_value;
  if (!v8Object->Get(context, keys[2].Get(isolate)).ToLocal(&offer_to_receive_video_value)) {
    exception_state.RethrowV8Exception(block.Exception());
    return;
  }
  if (offer_to_receive_video_value.IsEmpty() || offer_to_receive_video_value->IsUndefined()) {
    // Do nothing.
  } else {
    int32_t offer_to_receive_video_cpp_value = NativeValueTraits<IDLLong>::NativeValue(isolate, offer_to_receive_video_value, exception_state);
    if (exception_state.HadException())
      return;
    impl->setOfferToReceiveVideo(offer_to_receive_video_cpp_value);
  }
}

v8::Local<v8::Value> RTCOfferOptions::ToV8Impl(v8::Local<v8::Object> creationContext, v8::Isolate* isolate) const {
  v8::Local<v8::Object> v8Object = v8::Object::New(isolate);
  if (!toV8RTCOfferOptions(this, v8Object, creationContext, isolate))
    return v8::Undefined(isolate);
  return v8Object;
}

bool toV8RTCOfferOptions(const RTCOfferOptions* impl, v8::Local<v8::Object> dictionary, v8::Local<v8::Object> creationContext, v8::Isolate* isolate) {
  if (!toV8RTCOfferAnswerOptions(impl, dictionary, creationContext, isolate))
    return false;

  const v8::Eternal<v8::Name>* keys = eternalV8RTCOfferOptionsKeys(isolate);
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

  v8::Local<v8::Value> ice_restart_value;
  bool ice_restart_has_value_or_default = false;
  if (impl->hasIceRestart()) {
    ice_restart_value = v8::Boolean::New(isolate, impl->iceRestart());
    ice_restart_has_value_or_default = true;
  } else {
    ice_restart_value = v8::Boolean::New(isolate, false);
    ice_restart_has_value_or_default = true;
  }
  if (ice_restart_has_value_or_default &&
      !create_property(0, ice_restart_value)) {
    return false;
  }

  v8::Local<v8::Value> offer_to_receive_audio_value;
  bool offer_to_receive_audio_has_value_or_default = false;
  if (impl->hasOfferToReceiveAudio()) {
    offer_to_receive_audio_value = v8::Integer::New(isolate, impl->offerToReceiveAudio());
    offer_to_receive_audio_has_value_or_default = true;
  }
  if (offer_to_receive_audio_has_value_or_default &&
      !create_property(1, offer_to_receive_audio_value)) {
    return false;
  }

  v8::Local<v8::Value> offer_to_receive_video_value;
  bool offer_to_receive_video_has_value_or_default = false;
  if (impl->hasOfferToReceiveVideo()) {
    offer_to_receive_video_value = v8::Integer::New(isolate, impl->offerToReceiveVideo());
    offer_to_receive_video_has_value_or_default = true;
  }
  if (offer_to_receive_video_has_value_or_default &&
      !create_property(2, offer_to_receive_video_value)) {
    return false;
  }

  return true;
}

RTCOfferOptions* NativeValueTraits<RTCOfferOptions>::NativeValue(v8::Isolate* isolate, v8::Local<v8::Value> value, ExceptionState& exception_state) {
  RTCOfferOptions* impl = RTCOfferOptions::Create();
  V8RTCOfferOptions::ToImpl(isolate, value, impl, exception_state);
  return impl;
}

}  // namespace blink
