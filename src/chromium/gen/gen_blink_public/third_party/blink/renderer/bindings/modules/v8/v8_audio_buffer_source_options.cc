// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated from the Jinja2 template
// third_party/blink/renderer/bindings/templates/dictionary_v8.cc.tmpl
// by the script code_generator_v8.py.
// DO NOT MODIFY!

// clang-format off
#include "third_party/blink/renderer/bindings/modules/v8/v8_audio_buffer_source_options.h"

#include "base/stl_util.h"
#include "third_party/blink/renderer/bindings/core/v8/idl_types.h"
#include "third_party/blink/renderer/bindings/core/v8/native_value_traits_impl.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_audio_buffer.h"
#include "third_party/blink/renderer/platform/bindings/exception_state.h"

namespace blink {

static const v8::Eternal<v8::Name>* eternalV8AudioBufferSourceOptionsKeys(v8::Isolate* isolate) {
  static const char* const kKeys[] = {
    "buffer",
    "detune",
    "loop",
    "loopEnd",
    "loopStart",
    "playbackRate",
  };
  return V8PerIsolateData::From(isolate)->FindOrCreateEternalNameCache(
      kKeys, kKeys, base::size(kKeys));
}

void V8AudioBufferSourceOptions::ToImpl(v8::Isolate* isolate, v8::Local<v8::Value> v8_value, AudioBufferSourceOptions* impl, ExceptionState& exception_state) {
  if (IsUndefinedOrNull(v8_value)) {
    return;
  }
  if (!v8_value->IsObject()) {
    exception_state.ThrowTypeError("cannot convert to dictionary.");
    return;
  }
  v8::Local<v8::Object> v8Object = v8_value.As<v8::Object>();
  ALLOW_UNUSED_LOCAL(v8Object);

  const v8::Eternal<v8::Name>* keys = eternalV8AudioBufferSourceOptionsKeys(isolate);
  v8::TryCatch block(isolate);
  v8::Local<v8::Context> context = isolate->GetCurrentContext();
  v8::Local<v8::Value> buffer_value;
  if (!v8Object->Get(context, keys[0].Get(isolate)).ToLocal(&buffer_value)) {
    exception_state.RethrowV8Exception(block.Exception());
    return;
  }
  if (buffer_value.IsEmpty() || buffer_value->IsUndefined()) {
    // Do nothing.
  } else if (buffer_value->IsNull()) {
    impl->setBufferToNull();
  } else {
    AudioBuffer* buffer_cpp_value = V8AudioBuffer::ToImplWithTypeCheck(isolate, buffer_value);
    if (!buffer_cpp_value) {
      exception_state.ThrowTypeError("member buffer is not of type AudioBuffer.");
      return;
    }
    impl->setBuffer(buffer_cpp_value);
  }

  v8::Local<v8::Value> detune_value;
  if (!v8Object->Get(context, keys[1].Get(isolate)).ToLocal(&detune_value)) {
    exception_state.RethrowV8Exception(block.Exception());
    return;
  }
  if (detune_value.IsEmpty() || detune_value->IsUndefined()) {
    // Do nothing.
  } else {
    float detune_cpp_value = NativeValueTraits<IDLFloat>::NativeValue(isolate, detune_value, exception_state);
    if (exception_state.HadException())
      return;
    impl->setDetune(detune_cpp_value);
  }

  v8::Local<v8::Value> loop_value;
  if (!v8Object->Get(context, keys[2].Get(isolate)).ToLocal(&loop_value)) {
    exception_state.RethrowV8Exception(block.Exception());
    return;
  }
  if (loop_value.IsEmpty() || loop_value->IsUndefined()) {
    // Do nothing.
  } else {
    bool loop_cpp_value = NativeValueTraits<IDLBoolean>::NativeValue(isolate, loop_value, exception_state);
    if (exception_state.HadException())
      return;
    impl->setLoop(loop_cpp_value);
  }

  v8::Local<v8::Value> loop_end_value;
  if (!v8Object->Get(context, keys[3].Get(isolate)).ToLocal(&loop_end_value)) {
    exception_state.RethrowV8Exception(block.Exception());
    return;
  }
  if (loop_end_value.IsEmpty() || loop_end_value->IsUndefined()) {
    // Do nothing.
  } else {
    double loop_end_cpp_value = NativeValueTraits<IDLDouble>::NativeValue(isolate, loop_end_value, exception_state);
    if (exception_state.HadException())
      return;
    impl->setLoopEnd(loop_end_cpp_value);
  }

  v8::Local<v8::Value> loop_start_value;
  if (!v8Object->Get(context, keys[4].Get(isolate)).ToLocal(&loop_start_value)) {
    exception_state.RethrowV8Exception(block.Exception());
    return;
  }
  if (loop_start_value.IsEmpty() || loop_start_value->IsUndefined()) {
    // Do nothing.
  } else {
    double loop_start_cpp_value = NativeValueTraits<IDLDouble>::NativeValue(isolate, loop_start_value, exception_state);
    if (exception_state.HadException())
      return;
    impl->setLoopStart(loop_start_cpp_value);
  }

  v8::Local<v8::Value> playback_rate_value;
  if (!v8Object->Get(context, keys[5].Get(isolate)).ToLocal(&playback_rate_value)) {
    exception_state.RethrowV8Exception(block.Exception());
    return;
  }
  if (playback_rate_value.IsEmpty() || playback_rate_value->IsUndefined()) {
    // Do nothing.
  } else {
    float playback_rate_cpp_value = NativeValueTraits<IDLFloat>::NativeValue(isolate, playback_rate_value, exception_state);
    if (exception_state.HadException())
      return;
    impl->setPlaybackRate(playback_rate_cpp_value);
  }
}

v8::Local<v8::Value> AudioBufferSourceOptions::ToV8Impl(v8::Local<v8::Object> creationContext, v8::Isolate* isolate) const {
  v8::Local<v8::Object> v8Object = v8::Object::New(isolate);
  if (!toV8AudioBufferSourceOptions(this, v8Object, creationContext, isolate))
    return v8::Undefined(isolate);
  return v8Object;
}

bool toV8AudioBufferSourceOptions(const AudioBufferSourceOptions* impl, v8::Local<v8::Object> dictionary, v8::Local<v8::Object> creationContext, v8::Isolate* isolate) {
  const v8::Eternal<v8::Name>* keys = eternalV8AudioBufferSourceOptionsKeys(isolate);
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

  v8::Local<v8::Value> buffer_value;
  bool buffer_has_value_or_default = false;
  if (impl->hasBuffer()) {
    buffer_value = ToV8(impl->buffer(), creationContext, isolate);
    buffer_has_value_or_default = true;
  }
  if (buffer_has_value_or_default &&
      !create_property(0, buffer_value)) {
    return false;
  }

  v8::Local<v8::Value> detune_value;
  bool detune_has_value_or_default = false;
  if (impl->hasDetune()) {
    detune_value = v8::Number::New(isolate, impl->detune());
    detune_has_value_or_default = true;
  } else {
    detune_value = v8::Number::New(isolate, 0);
    detune_has_value_or_default = true;
  }
  if (detune_has_value_or_default &&
      !create_property(1, detune_value)) {
    return false;
  }

  v8::Local<v8::Value> loop_value;
  bool loop_has_value_or_default = false;
  if (impl->hasLoop()) {
    loop_value = v8::Boolean::New(isolate, impl->loop());
    loop_has_value_or_default = true;
  } else {
    loop_value = v8::Boolean::New(isolate, false);
    loop_has_value_or_default = true;
  }
  if (loop_has_value_or_default &&
      !create_property(2, loop_value)) {
    return false;
  }

  v8::Local<v8::Value> loop_end_value;
  bool loop_end_has_value_or_default = false;
  if (impl->hasLoopEnd()) {
    loop_end_value = v8::Number::New(isolate, impl->loopEnd());
    loop_end_has_value_or_default = true;
  } else {
    loop_end_value = v8::Number::New(isolate, 0);
    loop_end_has_value_or_default = true;
  }
  if (loop_end_has_value_or_default &&
      !create_property(3, loop_end_value)) {
    return false;
  }

  v8::Local<v8::Value> loop_start_value;
  bool loop_start_has_value_or_default = false;
  if (impl->hasLoopStart()) {
    loop_start_value = v8::Number::New(isolate, impl->loopStart());
    loop_start_has_value_or_default = true;
  } else {
    loop_start_value = v8::Number::New(isolate, 0);
    loop_start_has_value_or_default = true;
  }
  if (loop_start_has_value_or_default &&
      !create_property(4, loop_start_value)) {
    return false;
  }

  v8::Local<v8::Value> playback_rate_value;
  bool playback_rate_has_value_or_default = false;
  if (impl->hasPlaybackRate()) {
    playback_rate_value = v8::Number::New(isolate, impl->playbackRate());
    playback_rate_has_value_or_default = true;
  } else {
    playback_rate_value = v8::Number::New(isolate, 1);
    playback_rate_has_value_or_default = true;
  }
  if (playback_rate_has_value_or_default &&
      !create_property(5, playback_rate_value)) {
    return false;
  }

  return true;
}

AudioBufferSourceOptions* NativeValueTraits<AudioBufferSourceOptions>::NativeValue(v8::Isolate* isolate, v8::Local<v8::Value> value, ExceptionState& exception_state) {
  AudioBufferSourceOptions* impl = AudioBufferSourceOptions::Create();
  V8AudioBufferSourceOptions::ToImpl(isolate, value, impl, exception_state);
  return impl;
}

}  // namespace blink
