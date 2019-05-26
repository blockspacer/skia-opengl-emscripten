// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated from the Jinja2 template
// third_party/blink/renderer/bindings/templates/dictionary_v8.cc.tmpl
// by the script code_generator_v8.py.
// DO NOT MODIFY!

// clang-format off
#include "third_party/blink/renderer/bindings/modules/v8/v8_audio_context_options.h"

#include "base/stl_util.h"
#include "third_party/blink/renderer/bindings/core/v8/idl_types.h"
#include "third_party/blink/renderer/bindings/core/v8/native_value_traits_impl.h"
#include "third_party/blink/renderer/platform/bindings/exception_state.h"

namespace blink {

static const v8::Eternal<v8::Name>* eternalV8AudioContextOptionsKeys(v8::Isolate* isolate) {
  static const char* const kKeys[] = {
    "latencyHint",
    "sampleRate",
  };
  return V8PerIsolateData::From(isolate)->FindOrCreateEternalNameCache(
      kKeys, kKeys, base::size(kKeys));
}

void V8AudioContextOptions::ToImpl(v8::Isolate* isolate, v8::Local<v8::Value> v8_value, AudioContextOptions* impl, ExceptionState& exception_state) {
  if (IsUndefinedOrNull(v8_value)) {
    return;
  }
  if (!v8_value->IsObject()) {
    exception_state.ThrowTypeError("cannot convert to dictionary.");
    return;
  }
  v8::Local<v8::Object> v8Object = v8_value.As<v8::Object>();
  ALLOW_UNUSED_LOCAL(v8Object);

  const v8::Eternal<v8::Name>* keys = eternalV8AudioContextOptionsKeys(isolate);
  v8::TryCatch block(isolate);
  v8::Local<v8::Context> context = isolate->GetCurrentContext();
  v8::Local<v8::Value> latency_hint_value;
  if (!v8Object->Get(context, keys[0].Get(isolate)).ToLocal(&latency_hint_value)) {
    exception_state.RethrowV8Exception(block.Exception());
    return;
  }
  if (latency_hint_value.IsEmpty() || latency_hint_value->IsUndefined()) {
    // Do nothing.
  } else {
    AudioContextLatencyCategoryOrDouble latency_hint_cpp_value;
    V8AudioContextLatencyCategoryOrDouble::ToImpl(isolate, latency_hint_value, latency_hint_cpp_value, UnionTypeConversionMode::kNotNullable, exception_state);
    if (exception_state.HadException())
      return;
    impl->setLatencyHint(latency_hint_cpp_value);
  }

  v8::Local<v8::Value> sample_rate_value;
  if (!v8Object->Get(context, keys[1].Get(isolate)).ToLocal(&sample_rate_value)) {
    exception_state.RethrowV8Exception(block.Exception());
    return;
  }
  if (sample_rate_value.IsEmpty() || sample_rate_value->IsUndefined()) {
    // Do nothing.
  } else {
    float sample_rate_cpp_value = NativeValueTraits<IDLFloat>::NativeValue(isolate, sample_rate_value, exception_state);
    if (exception_state.HadException())
      return;
    impl->setSampleRate(sample_rate_cpp_value);
  }
}

v8::Local<v8::Value> AudioContextOptions::ToV8Impl(v8::Local<v8::Object> creationContext, v8::Isolate* isolate) const {
  v8::Local<v8::Object> v8Object = v8::Object::New(isolate);
  if (!toV8AudioContextOptions(this, v8Object, creationContext, isolate))
    return v8::Undefined(isolate);
  return v8Object;
}

bool toV8AudioContextOptions(const AudioContextOptions* impl, v8::Local<v8::Object> dictionary, v8::Local<v8::Object> creationContext, v8::Isolate* isolate) {
  const v8::Eternal<v8::Name>* keys = eternalV8AudioContextOptionsKeys(isolate);
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

  v8::Local<v8::Value> latency_hint_value;
  bool latency_hint_has_value_or_default = false;
  if (impl->hasLatencyHint()) {
    latency_hint_value = ToV8(impl->latencyHint(), creationContext, isolate);
    latency_hint_has_value_or_default = true;
  } else {
    latency_hint_value = ToV8(AudioContextLatencyCategoryOrDouble::FromAudioContextLatencyCategory("interactive"), creationContext, isolate);
    latency_hint_has_value_or_default = true;
  }
  if (latency_hint_has_value_or_default &&
      !create_property(0, latency_hint_value)) {
    return false;
  }

  v8::Local<v8::Value> sample_rate_value;
  bool sample_rate_has_value_or_default = false;
  if (impl->hasSampleRate()) {
    sample_rate_value = v8::Number::New(isolate, impl->sampleRate());
    sample_rate_has_value_or_default = true;
  }
  if (sample_rate_has_value_or_default &&
      !create_property(1, sample_rate_value)) {
    return false;
  }

  return true;
}

AudioContextOptions* NativeValueTraits<AudioContextOptions>::NativeValue(v8::Isolate* isolate, v8::Local<v8::Value> value, ExceptionState& exception_state) {
  AudioContextOptions* impl = AudioContextOptions::Create();
  V8AudioContextOptions::ToImpl(isolate, value, impl, exception_state);
  return impl;
}

}  // namespace blink
