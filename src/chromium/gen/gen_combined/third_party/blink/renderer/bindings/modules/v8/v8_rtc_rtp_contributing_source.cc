// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated from the Jinja2 template
// third_party/blink/renderer/bindings/templates/dictionary_v8.cc.tmpl
// by the script code_generator_v8.py.
// DO NOT MODIFY!

// clang-format off
#include "third_party/blink/renderer/bindings/modules/v8/v8_rtc_rtp_contributing_source.h"

#include "base/stl_util.h"
#include "third_party/blink/renderer/bindings/core/v8/idl_types.h"
#include "third_party/blink/renderer/bindings/core/v8/native_value_traits_impl.h"
#include "third_party/blink/renderer/platform/bindings/exception_state.h"

namespace blink {

static const v8::Eternal<v8::Name>* eternalV8RTCRtpContributingSourceKeys(v8::Isolate* isolate) {
  static const char* const kKeys[] = {
    "audioLevel",
    "source",
    "timestamp",
  };
  return V8PerIsolateData::From(isolate)->FindOrCreateEternalNameCache(
      kKeys, kKeys, base::size(kKeys));
}

void V8RTCRtpContributingSource::ToImpl(v8::Isolate* isolate, v8::Local<v8::Value> v8_value, RTCRtpContributingSource* impl, ExceptionState& exception_state) {
  if (IsUndefinedOrNull(v8_value)) {
    exception_state.ThrowTypeError("Missing required member(s): source, timestamp.");
    return;
  }
  if (!v8_value->IsObject()) {
    exception_state.ThrowTypeError("cannot convert to dictionary.");
    return;
  }
  v8::Local<v8::Object> v8Object = v8_value.As<v8::Object>();
  ALLOW_UNUSED_LOCAL(v8Object);

  const v8::Eternal<v8::Name>* keys = eternalV8RTCRtpContributingSourceKeys(isolate);
  v8::TryCatch block(isolate);
  v8::Local<v8::Context> context = isolate->GetCurrentContext();
  v8::Local<v8::Value> audio_level_value;
  if (!v8Object->Get(context, keys[0].Get(isolate)).ToLocal(&audio_level_value)) {
    exception_state.RethrowV8Exception(block.Exception());
    return;
  }
  if (audio_level_value.IsEmpty() || audio_level_value->IsUndefined()) {
    // Do nothing.
  } else {
    double audio_level_cpp_value = NativeValueTraits<IDLDouble>::NativeValue(isolate, audio_level_value, exception_state);
    if (exception_state.HadException())
      return;
    impl->setAudioLevel(audio_level_cpp_value);
  }

  v8::Local<v8::Value> source_value;
  if (!v8Object->Get(context, keys[1].Get(isolate)).ToLocal(&source_value)) {
    exception_state.RethrowV8Exception(block.Exception());
    return;
  }
  if (source_value.IsEmpty() || source_value->IsUndefined()) {
    exception_state.ThrowTypeError("required member source is undefined.");
    return;
  } else {
    uint32_t source_cpp_value = NativeValueTraits<IDLUnsignedLong>::NativeValue(isolate, source_value, exception_state);
    if (exception_state.HadException())
      return;
    impl->setSource(source_cpp_value);
  }

  v8::Local<v8::Value> timestamp_value;
  if (!v8Object->Get(context, keys[2].Get(isolate)).ToLocal(&timestamp_value)) {
    exception_state.RethrowV8Exception(block.Exception());
    return;
  }
  if (timestamp_value.IsEmpty() || timestamp_value->IsUndefined()) {
    exception_state.ThrowTypeError("required member timestamp is undefined.");
    return;
  } else {
    double timestamp_cpp_value = NativeValueTraits<IDLDouble>::NativeValue(isolate, timestamp_value, exception_state);
    if (exception_state.HadException())
      return;
    impl->setTimestamp(timestamp_cpp_value);
  }
}

v8::Local<v8::Value> RTCRtpContributingSource::ToV8Impl(v8::Local<v8::Object> creationContext, v8::Isolate* isolate) const {
  v8::Local<v8::Object> v8Object = v8::Object::New(isolate);
  if (!toV8RTCRtpContributingSource(this, v8Object, creationContext, isolate))
    return v8::Undefined(isolate);
  return v8Object;
}

bool toV8RTCRtpContributingSource(const RTCRtpContributingSource* impl, v8::Local<v8::Object> dictionary, v8::Local<v8::Object> creationContext, v8::Isolate* isolate) {
  const v8::Eternal<v8::Name>* keys = eternalV8RTCRtpContributingSourceKeys(isolate);
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

  v8::Local<v8::Value> audio_level_value;
  bool audio_level_has_value_or_default = false;
  if (impl->hasAudioLevel()) {
    audio_level_value = v8::Number::New(isolate, impl->audioLevel());
    audio_level_has_value_or_default = true;
  }
  if (audio_level_has_value_or_default &&
      !create_property(0, audio_level_value)) {
    return false;
  }

  v8::Local<v8::Value> source_value;
  bool source_has_value_or_default = false;
  if (impl->hasSource()) {
    source_value = v8::Integer::NewFromUnsigned(isolate, impl->source());
    source_has_value_or_default = true;
  } else {
    NOTREACHED();
  }
  if (source_has_value_or_default &&
      !create_property(1, source_value)) {
    return false;
  }

  v8::Local<v8::Value> timestamp_value;
  bool timestamp_has_value_or_default = false;
  if (impl->hasTimestamp()) {
    timestamp_value = v8::Number::New(isolate, impl->timestamp());
    timestamp_has_value_or_default = true;
  } else {
    NOTREACHED();
  }
  if (timestamp_has_value_or_default &&
      !create_property(2, timestamp_value)) {
    return false;
  }

  return true;
}

RTCRtpContributingSource* NativeValueTraits<RTCRtpContributingSource>::NativeValue(v8::Isolate* isolate, v8::Local<v8::Value> value, ExceptionState& exception_state) {
  RTCRtpContributingSource* impl = RTCRtpContributingSource::Create();
  V8RTCRtpContributingSource::ToImpl(isolate, value, impl, exception_state);
  return impl;
}

}  // namespace blink
