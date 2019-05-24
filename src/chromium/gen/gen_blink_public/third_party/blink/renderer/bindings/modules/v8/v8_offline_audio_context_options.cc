// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated from the Jinja2 template
// third_party/blink/renderer/bindings/templates/dictionary_v8.cc.tmpl
// by the script code_generator_v8.py.
// DO NOT MODIFY!

// clang-format off
#include "third_party/blink/renderer/bindings/modules/v8/v8_offline_audio_context_options.h"

#include "base/stl_util.h"
#include "third_party/blink/renderer/bindings/core/v8/idl_types.h"
#include "third_party/blink/renderer/bindings/core/v8/native_value_traits_impl.h"
#include "third_party/blink/renderer/platform/bindings/exception_state.h"

namespace blink {

static const v8::Eternal<v8::Name>* eternalV8OfflineAudioContextOptionsKeys(v8::Isolate* isolate) {
  static const char* const kKeys[] = {
    "length",
    "numberOfChannels",
    "sampleRate",
  };
  return V8PerIsolateData::From(isolate)->FindOrCreateEternalNameCache(
      kKeys, kKeys, base::size(kKeys));
}

void V8OfflineAudioContextOptions::ToImpl(v8::Isolate* isolate, v8::Local<v8::Value> v8_value, OfflineAudioContextOptions* impl, ExceptionState& exception_state) {
  if (IsUndefinedOrNull(v8_value)) {
    exception_state.ThrowTypeError("Missing required member(s): length, sampleRate.");
    return;
  }
  if (!v8_value->IsObject()) {
    exception_state.ThrowTypeError("cannot convert to dictionary.");
    return;
  }
  v8::Local<v8::Object> v8Object = v8_value.As<v8::Object>();
  ALLOW_UNUSED_LOCAL(v8Object);

  const v8::Eternal<v8::Name>* keys = eternalV8OfflineAudioContextOptionsKeys(isolate);
  v8::TryCatch block(isolate);
  v8::Local<v8::Context> context = isolate->GetCurrentContext();
  v8::Local<v8::Value> length_value;
  if (!v8Object->Get(context, keys[0].Get(isolate)).ToLocal(&length_value)) {
    exception_state.RethrowV8Exception(block.Exception());
    return;
  }
  if (length_value.IsEmpty() || length_value->IsUndefined()) {
    exception_state.ThrowTypeError("required member length is undefined.");
    return;
  } else {
    uint32_t length_cpp_value = NativeValueTraits<IDLUnsignedLong>::NativeValue(isolate, length_value, exception_state);
    if (exception_state.HadException())
      return;
    impl->setLength(length_cpp_value);
  }

  v8::Local<v8::Value> number_of_channels_value;
  if (!v8Object->Get(context, keys[1].Get(isolate)).ToLocal(&number_of_channels_value)) {
    exception_state.RethrowV8Exception(block.Exception());
    return;
  }
  if (number_of_channels_value.IsEmpty() || number_of_channels_value->IsUndefined()) {
    // Do nothing.
  } else {
    uint32_t number_of_channels_cpp_value = NativeValueTraits<IDLUnsignedLong>::NativeValue(isolate, number_of_channels_value, exception_state);
    if (exception_state.HadException())
      return;
    impl->setNumberOfChannels(number_of_channels_cpp_value);
  }

  v8::Local<v8::Value> sample_rate_value;
  if (!v8Object->Get(context, keys[2].Get(isolate)).ToLocal(&sample_rate_value)) {
    exception_state.RethrowV8Exception(block.Exception());
    return;
  }
  if (sample_rate_value.IsEmpty() || sample_rate_value->IsUndefined()) {
    exception_state.ThrowTypeError("required member sampleRate is undefined.");
    return;
  } else {
    float sample_rate_cpp_value = NativeValueTraits<IDLFloat>::NativeValue(isolate, sample_rate_value, exception_state);
    if (exception_state.HadException())
      return;
    impl->setSampleRate(sample_rate_cpp_value);
  }
}

v8::Local<v8::Value> OfflineAudioContextOptions::ToV8Impl(v8::Local<v8::Object> creationContext, v8::Isolate* isolate) const {
  v8::Local<v8::Object> v8Object = v8::Object::New(isolate);
  if (!toV8OfflineAudioContextOptions(this, v8Object, creationContext, isolate))
    return v8::Undefined(isolate);
  return v8Object;
}

bool toV8OfflineAudioContextOptions(const OfflineAudioContextOptions* impl, v8::Local<v8::Object> dictionary, v8::Local<v8::Object> creationContext, v8::Isolate* isolate) {
  const v8::Eternal<v8::Name>* keys = eternalV8OfflineAudioContextOptionsKeys(isolate);
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

  v8::Local<v8::Value> length_value;
  bool length_has_value_or_default = false;
  if (impl->hasLength()) {
    length_value = v8::Integer::NewFromUnsigned(isolate, impl->length());
    length_has_value_or_default = true;
  } else {
    NOTREACHED();
  }
  if (length_has_value_or_default &&
      !create_property(0, length_value)) {
    return false;
  }

  v8::Local<v8::Value> number_of_channels_value;
  bool number_of_channels_has_value_or_default = false;
  if (impl->hasNumberOfChannels()) {
    number_of_channels_value = v8::Integer::NewFromUnsigned(isolate, impl->numberOfChannels());
    number_of_channels_has_value_or_default = true;
  } else {
    number_of_channels_value = v8::Integer::NewFromUnsigned(isolate, 1u);
    number_of_channels_has_value_or_default = true;
  }
  if (number_of_channels_has_value_or_default &&
      !create_property(1, number_of_channels_value)) {
    return false;
  }

  v8::Local<v8::Value> sample_rate_value;
  bool sample_rate_has_value_or_default = false;
  if (impl->hasSampleRate()) {
    sample_rate_value = v8::Number::New(isolate, impl->sampleRate());
    sample_rate_has_value_or_default = true;
  } else {
    NOTREACHED();
  }
  if (sample_rate_has_value_or_default &&
      !create_property(2, sample_rate_value)) {
    return false;
  }

  return true;
}

OfflineAudioContextOptions* NativeValueTraits<OfflineAudioContextOptions>::NativeValue(v8::Isolate* isolate, v8::Local<v8::Value> value, ExceptionState& exception_state) {
  OfflineAudioContextOptions* impl = OfflineAudioContextOptions::Create();
  V8OfflineAudioContextOptions::ToImpl(isolate, value, impl, exception_state);
  return impl;
}

}  // namespace blink
