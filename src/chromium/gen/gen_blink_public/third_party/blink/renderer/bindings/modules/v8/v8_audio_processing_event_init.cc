// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated from the Jinja2 template
// third_party/blink/renderer/bindings/templates/dictionary_v8.cc.tmpl
// by the script code_generator_v8.py.
// DO NOT MODIFY!

// clang-format off
#include "third_party/blink/renderer/bindings/modules/v8/v8_audio_processing_event_init.h"

#include "base/stl_util.h"
#include "third_party/blink/renderer/bindings/core/v8/idl_types.h"
#include "third_party/blink/renderer/bindings/core/v8/native_value_traits_impl.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_event_init.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_audio_buffer.h"
#include "third_party/blink/renderer/platform/bindings/exception_state.h"

namespace blink {

static const v8::Eternal<v8::Name>* eternalV8AudioProcessingEventInitKeys(v8::Isolate* isolate) {
  static const char* const kKeys[] = {
    "inputBuffer",
    "outputBuffer",
    "playbackTime",
  };
  return V8PerIsolateData::From(isolate)->FindOrCreateEternalNameCache(
      kKeys, kKeys, base::size(kKeys));
}

void V8AudioProcessingEventInit::ToImpl(v8::Isolate* isolate, v8::Local<v8::Value> v8_value, AudioProcessingEventInit* impl, ExceptionState& exception_state) {
  if (IsUndefinedOrNull(v8_value)) {
    exception_state.ThrowTypeError("Missing required member(s): inputBuffer, outputBuffer, playbackTime.");
    return;
  }
  if (!v8_value->IsObject()) {
    exception_state.ThrowTypeError("cannot convert to dictionary.");
    return;
  }
  v8::Local<v8::Object> v8Object = v8_value.As<v8::Object>();
  ALLOW_UNUSED_LOCAL(v8Object);

  V8EventInit::ToImpl(isolate, v8_value, impl, exception_state);
  if (exception_state.HadException())
    return;

  const v8::Eternal<v8::Name>* keys = eternalV8AudioProcessingEventInitKeys(isolate);
  v8::TryCatch block(isolate);
  v8::Local<v8::Context> context = isolate->GetCurrentContext();
  v8::Local<v8::Value> input_buffer_value;
  if (!v8Object->Get(context, keys[0].Get(isolate)).ToLocal(&input_buffer_value)) {
    exception_state.RethrowV8Exception(block.Exception());
    return;
  }
  if (input_buffer_value.IsEmpty() || input_buffer_value->IsUndefined()) {
    exception_state.ThrowTypeError("required member inputBuffer is undefined.");
    return;
  } else {
    AudioBuffer* input_buffer_cpp_value = V8AudioBuffer::ToImplWithTypeCheck(isolate, input_buffer_value);
    if (!input_buffer_cpp_value) {
      exception_state.ThrowTypeError("member inputBuffer is not of type AudioBuffer.");
      return;
    }
    impl->setInputBuffer(input_buffer_cpp_value);
  }

  v8::Local<v8::Value> output_buffer_value;
  if (!v8Object->Get(context, keys[1].Get(isolate)).ToLocal(&output_buffer_value)) {
    exception_state.RethrowV8Exception(block.Exception());
    return;
  }
  if (output_buffer_value.IsEmpty() || output_buffer_value->IsUndefined()) {
    exception_state.ThrowTypeError("required member outputBuffer is undefined.");
    return;
  } else {
    AudioBuffer* output_buffer_cpp_value = V8AudioBuffer::ToImplWithTypeCheck(isolate, output_buffer_value);
    if (!output_buffer_cpp_value) {
      exception_state.ThrowTypeError("member outputBuffer is not of type AudioBuffer.");
      return;
    }
    impl->setOutputBuffer(output_buffer_cpp_value);
  }

  v8::Local<v8::Value> playback_time_value;
  if (!v8Object->Get(context, keys[2].Get(isolate)).ToLocal(&playback_time_value)) {
    exception_state.RethrowV8Exception(block.Exception());
    return;
  }
  if (playback_time_value.IsEmpty() || playback_time_value->IsUndefined()) {
    exception_state.ThrowTypeError("required member playbackTime is undefined.");
    return;
  } else {
    double playback_time_cpp_value = NativeValueTraits<IDLDouble>::NativeValue(isolate, playback_time_value, exception_state);
    if (exception_state.HadException())
      return;
    impl->setPlaybackTime(playback_time_cpp_value);
  }
}

v8::Local<v8::Value> AudioProcessingEventInit::ToV8Impl(v8::Local<v8::Object> creationContext, v8::Isolate* isolate) const {
  v8::Local<v8::Object> v8Object = v8::Object::New(isolate);
  if (!toV8AudioProcessingEventInit(this, v8Object, creationContext, isolate))
    return v8::Undefined(isolate);
  return v8Object;
}

bool toV8AudioProcessingEventInit(const AudioProcessingEventInit* impl, v8::Local<v8::Object> dictionary, v8::Local<v8::Object> creationContext, v8::Isolate* isolate) {
  if (!toV8EventInit(impl, dictionary, creationContext, isolate))
    return false;

  const v8::Eternal<v8::Name>* keys = eternalV8AudioProcessingEventInitKeys(isolate);
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

  v8::Local<v8::Value> input_buffer_value;
  bool input_buffer_has_value_or_default = false;
  if (impl->hasInputBuffer()) {
    input_buffer_value = ToV8(impl->inputBuffer(), creationContext, isolate);
    input_buffer_has_value_or_default = true;
  } else {
    NOTREACHED();
  }
  if (input_buffer_has_value_or_default &&
      !create_property(0, input_buffer_value)) {
    return false;
  }

  v8::Local<v8::Value> output_buffer_value;
  bool output_buffer_has_value_or_default = false;
  if (impl->hasOutputBuffer()) {
    output_buffer_value = ToV8(impl->outputBuffer(), creationContext, isolate);
    output_buffer_has_value_or_default = true;
  } else {
    NOTREACHED();
  }
  if (output_buffer_has_value_or_default &&
      !create_property(1, output_buffer_value)) {
    return false;
  }

  v8::Local<v8::Value> playback_time_value;
  bool playback_time_has_value_or_default = false;
  if (impl->hasPlaybackTime()) {
    playback_time_value = v8::Number::New(isolate, impl->playbackTime());
    playback_time_has_value_or_default = true;
  } else {
    NOTREACHED();
  }
  if (playback_time_has_value_or_default &&
      !create_property(2, playback_time_value)) {
    return false;
  }

  return true;
}

AudioProcessingEventInit* NativeValueTraits<AudioProcessingEventInit>::NativeValue(v8::Isolate* isolate, v8::Local<v8::Value> value, ExceptionState& exception_state) {
  AudioProcessingEventInit* impl = AudioProcessingEventInit::Create();
  V8AudioProcessingEventInit::ToImpl(isolate, value, impl, exception_state);
  return impl;
}

}  // namespace blink
