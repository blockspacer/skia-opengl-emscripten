// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated from the Jinja2 template
// third_party/blink/renderer/bindings/templates/dictionary_v8.cc.tmpl
// by the script code_generator_v8.py.
// DO NOT MODIFY!

// clang-format off
#include "third_party/blink/renderer/bindings/modules/v8/v8_media_recorder_options.h"

#include "base/stl_util.h"
#include "third_party/blink/renderer/bindings/core/v8/idl_types.h"
#include "third_party/blink/renderer/bindings/core/v8/native_value_traits_impl.h"
#include "third_party/blink/renderer/platform/bindings/exception_state.h"

namespace blink {

static const v8::Eternal<v8::Name>* eternalV8MediaRecorderOptionsKeys(v8::Isolate* isolate) {
  static const char* const kKeys[] = {
    "audioBitsPerSecond",
    "bitsPerSecond",
    "mimeType",
    "videoBitsPerSecond",
  };
  return V8PerIsolateData::From(isolate)->FindOrCreateEternalNameCache(
      kKeys, kKeys, base::size(kKeys));
}

void V8MediaRecorderOptions::ToImpl(v8::Isolate* isolate, v8::Local<v8::Value> v8_value, MediaRecorderOptions* impl, ExceptionState& exception_state) {
  if (IsUndefinedOrNull(v8_value)) {
    return;
  }
  if (!v8_value->IsObject()) {
    exception_state.ThrowTypeError("cannot convert to dictionary.");
    return;
  }
  v8::Local<v8::Object> v8Object = v8_value.As<v8::Object>();
  ALLOW_UNUSED_LOCAL(v8Object);

  const v8::Eternal<v8::Name>* keys = eternalV8MediaRecorderOptionsKeys(isolate);
  v8::TryCatch block(isolate);
  v8::Local<v8::Context> context = isolate->GetCurrentContext();
  v8::Local<v8::Value> audio_bits_per_second_value;
  if (!v8Object->Get(context, keys[0].Get(isolate)).ToLocal(&audio_bits_per_second_value)) {
    exception_state.RethrowV8Exception(block.Exception());
    return;
  }
  if (audio_bits_per_second_value.IsEmpty() || audio_bits_per_second_value->IsUndefined()) {
    // Do nothing.
  } else {
    uint32_t audio_bits_per_second_cpp_value = NativeValueTraits<IDLUnsignedLong>::NativeValue(isolate, audio_bits_per_second_value, exception_state);
    if (exception_state.HadException())
      return;
    impl->setAudioBitsPerSecond(audio_bits_per_second_cpp_value);
  }

  v8::Local<v8::Value> bits_per_second_value;
  if (!v8Object->Get(context, keys[1].Get(isolate)).ToLocal(&bits_per_second_value)) {
    exception_state.RethrowV8Exception(block.Exception());
    return;
  }
  if (bits_per_second_value.IsEmpty() || bits_per_second_value->IsUndefined()) {
    // Do nothing.
  } else {
    uint32_t bits_per_second_cpp_value = NativeValueTraits<IDLUnsignedLong>::NativeValue(isolate, bits_per_second_value, exception_state);
    if (exception_state.HadException())
      return;
    impl->setBitsPerSecond(bits_per_second_cpp_value);
  }

  v8::Local<v8::Value> mime_type_value;
  if (!v8Object->Get(context, keys[2].Get(isolate)).ToLocal(&mime_type_value)) {
    exception_state.RethrowV8Exception(block.Exception());
    return;
  }
  if (mime_type_value.IsEmpty() || mime_type_value->IsUndefined()) {
    // Do nothing.
  } else {
    V8StringResource<> mime_type_cpp_value = mime_type_value;
    if (!mime_type_cpp_value.Prepare(exception_state))
      return;
    impl->setMimeType(mime_type_cpp_value);
  }

  v8::Local<v8::Value> video_bits_per_second_value;
  if (!v8Object->Get(context, keys[3].Get(isolate)).ToLocal(&video_bits_per_second_value)) {
    exception_state.RethrowV8Exception(block.Exception());
    return;
  }
  if (video_bits_per_second_value.IsEmpty() || video_bits_per_second_value->IsUndefined()) {
    // Do nothing.
  } else {
    uint32_t video_bits_per_second_cpp_value = NativeValueTraits<IDLUnsignedLong>::NativeValue(isolate, video_bits_per_second_value, exception_state);
    if (exception_state.HadException())
      return;
    impl->setVideoBitsPerSecond(video_bits_per_second_cpp_value);
  }
}

v8::Local<v8::Value> MediaRecorderOptions::ToV8Impl(v8::Local<v8::Object> creationContext, v8::Isolate* isolate) const {
  v8::Local<v8::Object> v8Object = v8::Object::New(isolate);
  if (!toV8MediaRecorderOptions(this, v8Object, creationContext, isolate))
    return v8::Undefined(isolate);
  return v8Object;
}

bool toV8MediaRecorderOptions(const MediaRecorderOptions* impl, v8::Local<v8::Object> dictionary, v8::Local<v8::Object> creationContext, v8::Isolate* isolate) {
  const v8::Eternal<v8::Name>* keys = eternalV8MediaRecorderOptionsKeys(isolate);
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

  v8::Local<v8::Value> audio_bits_per_second_value;
  bool audio_bits_per_second_has_value_or_default = false;
  if (impl->hasAudioBitsPerSecond()) {
    audio_bits_per_second_value = v8::Integer::NewFromUnsigned(isolate, impl->audioBitsPerSecond());
    audio_bits_per_second_has_value_or_default = true;
  }
  if (audio_bits_per_second_has_value_or_default &&
      !create_property(0, audio_bits_per_second_value)) {
    return false;
  }

  v8::Local<v8::Value> bits_per_second_value;
  bool bits_per_second_has_value_or_default = false;
  if (impl->hasBitsPerSecond()) {
    bits_per_second_value = v8::Integer::NewFromUnsigned(isolate, impl->bitsPerSecond());
    bits_per_second_has_value_or_default = true;
  }
  if (bits_per_second_has_value_or_default &&
      !create_property(1, bits_per_second_value)) {
    return false;
  }

  v8::Local<v8::Value> mime_type_value;
  bool mime_type_has_value_or_default = false;
  if (impl->hasMimeType()) {
    mime_type_value = V8String(isolate, impl->mimeType());
    mime_type_has_value_or_default = true;
  }
  if (mime_type_has_value_or_default &&
      !create_property(2, mime_type_value)) {
    return false;
  }

  v8::Local<v8::Value> video_bits_per_second_value;
  bool video_bits_per_second_has_value_or_default = false;
  if (impl->hasVideoBitsPerSecond()) {
    video_bits_per_second_value = v8::Integer::NewFromUnsigned(isolate, impl->videoBitsPerSecond());
    video_bits_per_second_has_value_or_default = true;
  }
  if (video_bits_per_second_has_value_or_default &&
      !create_property(3, video_bits_per_second_value)) {
    return false;
  }

  return true;
}

MediaRecorderOptions* NativeValueTraits<MediaRecorderOptions>::NativeValue(v8::Isolate* isolate, v8::Local<v8::Value> value, ExceptionState& exception_state) {
  MediaRecorderOptions* impl = MediaRecorderOptions::Create();
  V8MediaRecorderOptions::ToImpl(isolate, value, impl, exception_state);
  return impl;
}

}  // namespace blink
