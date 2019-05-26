// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated from the Jinja2 template
// third_party/blink/renderer/bindings/templates/dictionary_v8.cc.tmpl
// by the script code_generator_v8.py.
// DO NOT MODIFY!

// clang-format off
#include "third_party/blink/renderer/bindings/modules/v8/v8_audio_configuration.h"

#include "base/stl_util.h"
#include "third_party/blink/renderer/bindings/core/v8/idl_types.h"
#include "third_party/blink/renderer/bindings/core/v8/native_value_traits_impl.h"
#include "third_party/blink/renderer/platform/bindings/exception_state.h"

namespace blink {

static const v8::Eternal<v8::Name>* eternalV8AudioConfigurationKeys(v8::Isolate* isolate) {
  static const char* const kKeys[] = {
    "bitrate",
    "channels",
    "contentType",
    "samplerate",
  };
  return V8PerIsolateData::From(isolate)->FindOrCreateEternalNameCache(
      kKeys, kKeys, base::size(kKeys));
}

void V8AudioConfiguration::ToImpl(v8::Isolate* isolate, v8::Local<v8::Value> v8_value, AudioConfiguration* impl, ExceptionState& exception_state) {
  if (IsUndefinedOrNull(v8_value)) {
    exception_state.ThrowTypeError("Missing required member(s): contentType.");
    return;
  }
  if (!v8_value->IsObject()) {
    exception_state.ThrowTypeError("cannot convert to dictionary.");
    return;
  }
  v8::Local<v8::Object> v8Object = v8_value.As<v8::Object>();
  ALLOW_UNUSED_LOCAL(v8Object);

  const v8::Eternal<v8::Name>* keys = eternalV8AudioConfigurationKeys(isolate);
  v8::TryCatch block(isolate);
  v8::Local<v8::Context> context = isolate->GetCurrentContext();
  v8::Local<v8::Value> bitrate_value;
  if (!v8Object->Get(context, keys[0].Get(isolate)).ToLocal(&bitrate_value)) {
    exception_state.RethrowV8Exception(block.Exception());
    return;
  }
  if (bitrate_value.IsEmpty() || bitrate_value->IsUndefined()) {
    // Do nothing.
  } else {
    uint32_t bitrate_cpp_value = NativeValueTraits<IDLUnsignedLong>::NativeValue(isolate, bitrate_value, exception_state);
    if (exception_state.HadException())
      return;
    impl->setBitrate(bitrate_cpp_value);
  }

  v8::Local<v8::Value> channels_value;
  if (!v8Object->Get(context, keys[1].Get(isolate)).ToLocal(&channels_value)) {
    exception_state.RethrowV8Exception(block.Exception());
    return;
  }
  if (channels_value.IsEmpty() || channels_value->IsUndefined()) {
    // Do nothing.
  } else {
    V8StringResource<> channels_cpp_value = channels_value;
    if (!channels_cpp_value.Prepare(exception_state))
      return;
    impl->setChannels(channels_cpp_value);
  }

  v8::Local<v8::Value> content_type_value;
  if (!v8Object->Get(context, keys[2].Get(isolate)).ToLocal(&content_type_value)) {
    exception_state.RethrowV8Exception(block.Exception());
    return;
  }
  if (content_type_value.IsEmpty() || content_type_value->IsUndefined()) {
    exception_state.ThrowTypeError("required member contentType is undefined.");
    return;
  } else {
    V8StringResource<> content_type_cpp_value = content_type_value;
    if (!content_type_cpp_value.Prepare(exception_state))
      return;
    impl->setContentType(content_type_cpp_value);
  }

  v8::Local<v8::Value> samplerate_value;
  if (!v8Object->Get(context, keys[3].Get(isolate)).ToLocal(&samplerate_value)) {
    exception_state.RethrowV8Exception(block.Exception());
    return;
  }
  if (samplerate_value.IsEmpty() || samplerate_value->IsUndefined()) {
    // Do nothing.
  } else {
    uint32_t samplerate_cpp_value = NativeValueTraits<IDLUnsignedLong>::NativeValue(isolate, samplerate_value, exception_state);
    if (exception_state.HadException())
      return;
    impl->setSamplerate(samplerate_cpp_value);
  }
}

v8::Local<v8::Value> AudioConfiguration::ToV8Impl(v8::Local<v8::Object> creationContext, v8::Isolate* isolate) const {
  v8::Local<v8::Object> v8Object = v8::Object::New(isolate);
  if (!toV8AudioConfiguration(this, v8Object, creationContext, isolate))
    return v8::Undefined(isolate);
  return v8Object;
}

bool toV8AudioConfiguration(const AudioConfiguration* impl, v8::Local<v8::Object> dictionary, v8::Local<v8::Object> creationContext, v8::Isolate* isolate) {
  const v8::Eternal<v8::Name>* keys = eternalV8AudioConfigurationKeys(isolate);
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

  v8::Local<v8::Value> bitrate_value;
  bool bitrate_has_value_or_default = false;
  if (impl->hasBitrate()) {
    bitrate_value = v8::Integer::NewFromUnsigned(isolate, impl->bitrate());
    bitrate_has_value_or_default = true;
  }
  if (bitrate_has_value_or_default &&
      !create_property(0, bitrate_value)) {
    return false;
  }

  v8::Local<v8::Value> channels_value;
  bool channels_has_value_or_default = false;
  if (impl->hasChannels()) {
    channels_value = V8String(isolate, impl->channels());
    channels_has_value_or_default = true;
  }
  if (channels_has_value_or_default &&
      !create_property(1, channels_value)) {
    return false;
  }

  v8::Local<v8::Value> content_type_value;
  bool content_type_has_value_or_default = false;
  if (impl->hasContentType()) {
    content_type_value = V8String(isolate, impl->contentType());
    content_type_has_value_or_default = true;
  } else {
    NOTREACHED();
  }
  if (content_type_has_value_or_default &&
      !create_property(2, content_type_value)) {
    return false;
  }

  v8::Local<v8::Value> samplerate_value;
  bool samplerate_has_value_or_default = false;
  if (impl->hasSamplerate()) {
    samplerate_value = v8::Integer::NewFromUnsigned(isolate, impl->samplerate());
    samplerate_has_value_or_default = true;
  }
  if (samplerate_has_value_or_default &&
      !create_property(3, samplerate_value)) {
    return false;
  }

  return true;
}

AudioConfiguration* NativeValueTraits<AudioConfiguration>::NativeValue(v8::Isolate* isolate, v8::Local<v8::Value> value, ExceptionState& exception_state) {
  AudioConfiguration* impl = AudioConfiguration::Create();
  V8AudioConfiguration::ToImpl(isolate, value, impl, exception_state);
  return impl;
}

}  // namespace blink
