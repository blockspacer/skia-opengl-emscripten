// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated from the Jinja2 template
// third_party/blink/renderer/bindings/templates/dictionary_v8.cc.tmpl
// by the script code_generator_v8.py.
// DO NOT MODIFY!

// clang-format off
#include "third_party/blink/renderer/bindings/modules/v8/v8_analyser_options.h"

#include "base/stl_util.h"
#include "third_party/blink/renderer/bindings/core/v8/idl_types.h"
#include "third_party/blink/renderer/bindings/core/v8/native_value_traits_impl.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_audio_node_options.h"
#include "third_party/blink/renderer/platform/bindings/exception_state.h"

namespace blink {

static const v8::Eternal<v8::Name>* eternalV8AnalyserOptionsKeys(v8::Isolate* isolate) {
  static const char* const kKeys[] = {
    "fftSize",
    "maxDecibels",
    "minDecibels",
    "smoothingTimeConstant",
  };
  return V8PerIsolateData::From(isolate)->FindOrCreateEternalNameCache(
      kKeys, kKeys, base::size(kKeys));
}

void V8AnalyserOptions::ToImpl(v8::Isolate* isolate, v8::Local<v8::Value> v8_value, AnalyserOptions* impl, ExceptionState& exception_state) {
  if (IsUndefinedOrNull(v8_value)) {
    return;
  }
  if (!v8_value->IsObject()) {
    exception_state.ThrowTypeError("cannot convert to dictionary.");
    return;
  }
  v8::Local<v8::Object> v8Object = v8_value.As<v8::Object>();
  ALLOW_UNUSED_LOCAL(v8Object);

  V8AudioNodeOptions::ToImpl(isolate, v8_value, impl, exception_state);
  if (exception_state.HadException())
    return;

  const v8::Eternal<v8::Name>* keys = eternalV8AnalyserOptionsKeys(isolate);
  v8::TryCatch block(isolate);
  v8::Local<v8::Context> context = isolate->GetCurrentContext();
  v8::Local<v8::Value> fft_size_value;
  if (!v8Object->Get(context, keys[0].Get(isolate)).ToLocal(&fft_size_value)) {
    exception_state.RethrowV8Exception(block.Exception());
    return;
  }
  if (fft_size_value.IsEmpty() || fft_size_value->IsUndefined()) {
    // Do nothing.
  } else {
    uint32_t fft_size_cpp_value = NativeValueTraits<IDLUnsignedLong>::NativeValue(isolate, fft_size_value, exception_state);
    if (exception_state.HadException())
      return;
    impl->setFftSize(fft_size_cpp_value);
  }

  v8::Local<v8::Value> max_decibels_value;
  if (!v8Object->Get(context, keys[1].Get(isolate)).ToLocal(&max_decibels_value)) {
    exception_state.RethrowV8Exception(block.Exception());
    return;
  }
  if (max_decibels_value.IsEmpty() || max_decibels_value->IsUndefined()) {
    // Do nothing.
  } else {
    double max_decibels_cpp_value = NativeValueTraits<IDLDouble>::NativeValue(isolate, max_decibels_value, exception_state);
    if (exception_state.HadException())
      return;
    impl->setMaxDecibels(max_decibels_cpp_value);
  }

  v8::Local<v8::Value> min_decibels_value;
  if (!v8Object->Get(context, keys[2].Get(isolate)).ToLocal(&min_decibels_value)) {
    exception_state.RethrowV8Exception(block.Exception());
    return;
  }
  if (min_decibels_value.IsEmpty() || min_decibels_value->IsUndefined()) {
    // Do nothing.
  } else {
    double min_decibels_cpp_value = NativeValueTraits<IDLDouble>::NativeValue(isolate, min_decibels_value, exception_state);
    if (exception_state.HadException())
      return;
    impl->setMinDecibels(min_decibels_cpp_value);
  }

  v8::Local<v8::Value> smoothing_time_constant_value;
  if (!v8Object->Get(context, keys[3].Get(isolate)).ToLocal(&smoothing_time_constant_value)) {
    exception_state.RethrowV8Exception(block.Exception());
    return;
  }
  if (smoothing_time_constant_value.IsEmpty() || smoothing_time_constant_value->IsUndefined()) {
    // Do nothing.
  } else {
    double smoothing_time_constant_cpp_value = NativeValueTraits<IDLDouble>::NativeValue(isolate, smoothing_time_constant_value, exception_state);
    if (exception_state.HadException())
      return;
    impl->setSmoothingTimeConstant(smoothing_time_constant_cpp_value);
  }
}

v8::Local<v8::Value> AnalyserOptions::ToV8Impl(v8::Local<v8::Object> creationContext, v8::Isolate* isolate) const {
  v8::Local<v8::Object> v8Object = v8::Object::New(isolate);
  if (!toV8AnalyserOptions(this, v8Object, creationContext, isolate))
    return v8::Undefined(isolate);
  return v8Object;
}

bool toV8AnalyserOptions(const AnalyserOptions* impl, v8::Local<v8::Object> dictionary, v8::Local<v8::Object> creationContext, v8::Isolate* isolate) {
  if (!toV8AudioNodeOptions(impl, dictionary, creationContext, isolate))
    return false;

  const v8::Eternal<v8::Name>* keys = eternalV8AnalyserOptionsKeys(isolate);
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

  v8::Local<v8::Value> fft_size_value;
  bool fft_size_has_value_or_default = false;
  if (impl->hasFftSize()) {
    fft_size_value = v8::Integer::NewFromUnsigned(isolate, impl->fftSize());
    fft_size_has_value_or_default = true;
  } else {
    fft_size_value = v8::Integer::NewFromUnsigned(isolate, 2048u);
    fft_size_has_value_or_default = true;
  }
  if (fft_size_has_value_or_default &&
      !create_property(0, fft_size_value)) {
    return false;
  }

  v8::Local<v8::Value> max_decibels_value;
  bool max_decibels_has_value_or_default = false;
  if (impl->hasMaxDecibels()) {
    max_decibels_value = v8::Number::New(isolate, impl->maxDecibels());
    max_decibels_has_value_or_default = true;
  } else {
    max_decibels_value = v8::Number::New(isolate, -30);
    max_decibels_has_value_or_default = true;
  }
  if (max_decibels_has_value_or_default &&
      !create_property(1, max_decibels_value)) {
    return false;
  }

  v8::Local<v8::Value> min_decibels_value;
  bool min_decibels_has_value_or_default = false;
  if (impl->hasMinDecibels()) {
    min_decibels_value = v8::Number::New(isolate, impl->minDecibels());
    min_decibels_has_value_or_default = true;
  } else {
    min_decibels_value = v8::Number::New(isolate, -100);
    min_decibels_has_value_or_default = true;
  }
  if (min_decibels_has_value_or_default &&
      !create_property(2, min_decibels_value)) {
    return false;
  }

  v8::Local<v8::Value> smoothing_time_constant_value;
  bool smoothing_time_constant_has_value_or_default = false;
  if (impl->hasSmoothingTimeConstant()) {
    smoothing_time_constant_value = v8::Number::New(isolate, impl->smoothingTimeConstant());
    smoothing_time_constant_has_value_or_default = true;
  } else {
    smoothing_time_constant_value = v8::Number::New(isolate, 0.8);
    smoothing_time_constant_has_value_or_default = true;
  }
  if (smoothing_time_constant_has_value_or_default &&
      !create_property(3, smoothing_time_constant_value)) {
    return false;
  }

  return true;
}

AnalyserOptions* NativeValueTraits<AnalyserOptions>::NativeValue(v8::Isolate* isolate, v8::Local<v8::Value> value, ExceptionState& exception_state) {
  AnalyserOptions* impl = AnalyserOptions::Create();
  V8AnalyserOptions::ToImpl(isolate, value, impl, exception_state);
  return impl;
}

}  // namespace blink
