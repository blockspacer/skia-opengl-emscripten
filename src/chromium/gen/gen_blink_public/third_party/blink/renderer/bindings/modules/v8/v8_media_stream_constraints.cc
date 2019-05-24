// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated from the Jinja2 template
// third_party/blink/renderer/bindings/templates/dictionary_v8.cc.tmpl
// by the script code_generator_v8.py.
// DO NOT MODIFY!

// clang-format off
#include "third_party/blink/renderer/bindings/modules/v8/v8_media_stream_constraints.h"

#include "base/stl_util.h"
#include "third_party/blink/renderer/bindings/core/v8/idl_types.h"
#include "third_party/blink/renderer/bindings/core/v8/native_value_traits_impl.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_media_track_constraints.h"
#include "third_party/blink/renderer/platform/bindings/exception_state.h"

namespace blink {

static const v8::Eternal<v8::Name>* eternalV8MediaStreamConstraintsKeys(v8::Isolate* isolate) {
  static const char* const kKeys[] = {
    "audio",
    "video",
  };
  return V8PerIsolateData::From(isolate)->FindOrCreateEternalNameCache(
      kKeys, kKeys, base::size(kKeys));
}

void V8MediaStreamConstraints::ToImpl(v8::Isolate* isolate, v8::Local<v8::Value> v8_value, MediaStreamConstraints* impl, ExceptionState& exception_state) {
  if (IsUndefinedOrNull(v8_value)) {
    return;
  }
  if (!v8_value->IsObject()) {
    exception_state.ThrowTypeError("cannot convert to dictionary.");
    return;
  }
  v8::Local<v8::Object> v8Object = v8_value.As<v8::Object>();
  ALLOW_UNUSED_LOCAL(v8Object);

  const v8::Eternal<v8::Name>* keys = eternalV8MediaStreamConstraintsKeys(isolate);
  v8::TryCatch block(isolate);
  v8::Local<v8::Context> context = isolate->GetCurrentContext();
  v8::Local<v8::Value> audio_value;
  if (!v8Object->Get(context, keys[0].Get(isolate)).ToLocal(&audio_value)) {
    exception_state.RethrowV8Exception(block.Exception());
    return;
  }
  if (audio_value.IsEmpty() || audio_value->IsUndefined()) {
    // Do nothing.
  } else {
    BooleanOrMediaTrackConstraints audio_cpp_value;
    V8BooleanOrMediaTrackConstraints::ToImpl(isolate, audio_value, audio_cpp_value, UnionTypeConversionMode::kNotNullable, exception_state);
    if (exception_state.HadException())
      return;
    impl->setAudio(audio_cpp_value);
  }

  v8::Local<v8::Value> video_value;
  if (!v8Object->Get(context, keys[1].Get(isolate)).ToLocal(&video_value)) {
    exception_state.RethrowV8Exception(block.Exception());
    return;
  }
  if (video_value.IsEmpty() || video_value->IsUndefined()) {
    // Do nothing.
  } else {
    BooleanOrMediaTrackConstraints video_cpp_value;
    V8BooleanOrMediaTrackConstraints::ToImpl(isolate, video_value, video_cpp_value, UnionTypeConversionMode::kNotNullable, exception_state);
    if (exception_state.HadException())
      return;
    impl->setVideo(video_cpp_value);
  }
}

v8::Local<v8::Value> MediaStreamConstraints::ToV8Impl(v8::Local<v8::Object> creationContext, v8::Isolate* isolate) const {
  v8::Local<v8::Object> v8Object = v8::Object::New(isolate);
  if (!toV8MediaStreamConstraints(this, v8Object, creationContext, isolate))
    return v8::Undefined(isolate);
  return v8Object;
}

bool toV8MediaStreamConstraints(const MediaStreamConstraints* impl, v8::Local<v8::Object> dictionary, v8::Local<v8::Object> creationContext, v8::Isolate* isolate) {
  const v8::Eternal<v8::Name>* keys = eternalV8MediaStreamConstraintsKeys(isolate);
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

  v8::Local<v8::Value> audio_value;
  bool audio_has_value_or_default = false;
  if (impl->hasAudio()) {
    audio_value = ToV8(impl->audio(), creationContext, isolate);
    audio_has_value_or_default = true;
  } else {
    audio_value = ToV8(BooleanOrMediaTrackConstraints::FromBoolean(false), creationContext, isolate);
    audio_has_value_or_default = true;
  }
  if (audio_has_value_or_default &&
      !create_property(0, audio_value)) {
    return false;
  }

  v8::Local<v8::Value> video_value;
  bool video_has_value_or_default = false;
  if (impl->hasVideo()) {
    video_value = ToV8(impl->video(), creationContext, isolate);
    video_has_value_or_default = true;
  } else {
    video_value = ToV8(BooleanOrMediaTrackConstraints::FromBoolean(false), creationContext, isolate);
    video_has_value_or_default = true;
  }
  if (video_has_value_or_default &&
      !create_property(1, video_value)) {
    return false;
  }

  return true;
}

MediaStreamConstraints* NativeValueTraits<MediaStreamConstraints>::NativeValue(v8::Isolate* isolate, v8::Local<v8::Value> value, ExceptionState& exception_state) {
  MediaStreamConstraints* impl = MediaStreamConstraints::Create();
  V8MediaStreamConstraints::ToImpl(isolate, value, impl, exception_state);
  return impl;
}

}  // namespace blink
