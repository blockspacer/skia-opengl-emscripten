// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated from the Jinja2 template
// third_party/blink/renderer/bindings/templates/union_container.cc.tmpl
// by the script code_generator_v8.py.
// DO NOT MODIFY!

// clang-format off
#include "third_party/blink/renderer/bindings/modules/v8/audio_context_latency_category_or_double.h"

#include "base/stl_util.h"
#include "third_party/blink/renderer/bindings/core/v8/idl_types.h"
#include "third_party/blink/renderer/bindings/core/v8/native_value_traits_impl.h"
#include "third_party/blink/renderer/bindings/core/v8/to_v8_for_core.h"

namespace blink {

AudioContextLatencyCategoryOrDouble::AudioContextLatencyCategoryOrDouble() : type_(SpecificType::kNone) {}

const String& AudioContextLatencyCategoryOrDouble::GetAsAudioContextLatencyCategory() const {
  DCHECK(IsAudioContextLatencyCategory());
  return audio_context_latency_category_;
}

void AudioContextLatencyCategoryOrDouble::SetAudioContextLatencyCategory(const String& value) {
  DCHECK(IsNull());
  NonThrowableExceptionState exception_state;
  const char* kValidValues[] = {
      "balanced",
      "interactive",
      "playback",
  };
  if (!IsValidEnum(value, kValidValues, base::size(kValidValues), "AudioContextLatencyCategory", exception_state)) {
    NOTREACHED();
    return;
  }
  audio_context_latency_category_ = value;
  type_ = SpecificType::kAudioContextLatencyCategory;
}

AudioContextLatencyCategoryOrDouble AudioContextLatencyCategoryOrDouble::FromAudioContextLatencyCategory(const String& value) {
  AudioContextLatencyCategoryOrDouble container;
  container.SetAudioContextLatencyCategory(value);
  return container;
}

double AudioContextLatencyCategoryOrDouble::GetAsDouble() const {
  DCHECK(IsDouble());
  return double_;
}

void AudioContextLatencyCategoryOrDouble::SetDouble(double value) {
  DCHECK(IsNull());
  double_ = value;
  type_ = SpecificType::kDouble;
}

AudioContextLatencyCategoryOrDouble AudioContextLatencyCategoryOrDouble::FromDouble(double value) {
  AudioContextLatencyCategoryOrDouble container;
  container.SetDouble(value);
  return container;
}

AudioContextLatencyCategoryOrDouble::AudioContextLatencyCategoryOrDouble(const AudioContextLatencyCategoryOrDouble&) = default;
AudioContextLatencyCategoryOrDouble::~AudioContextLatencyCategoryOrDouble() = default;
AudioContextLatencyCategoryOrDouble& AudioContextLatencyCategoryOrDouble::operator=(const AudioContextLatencyCategoryOrDouble&) = default;

void AudioContextLatencyCategoryOrDouble::Trace(blink::Visitor* visitor) {
}

void V8AudioContextLatencyCategoryOrDouble::ToImpl(
    v8::Isolate* isolate,
    v8::Local<v8::Value> v8_value,
    AudioContextLatencyCategoryOrDouble& impl,
    UnionTypeConversionMode conversion_mode,
    ExceptionState& exception_state) {
  if (v8_value.IsEmpty())
    return;

  if (conversion_mode == UnionTypeConversionMode::kNullable && IsUndefinedOrNull(v8_value))
    return;

  if (v8_value->IsNumber()) {
    double cpp_value = NativeValueTraits<IDLDouble>::NativeValue(isolate, v8_value, exception_state);
    if (exception_state.HadException())
      return;
    impl.SetDouble(cpp_value);
    return;
  }

  {
    V8StringResource<> cpp_value = v8_value;
    if (!cpp_value.Prepare(exception_state))
      return;
    const char* kValidValues[] = {
        "balanced",
        "interactive",
        "playback",
    };
    if (!IsValidEnum(cpp_value, kValidValues, base::size(kValidValues), "AudioContextLatencyCategory", exception_state))
      return;
    impl.SetAudioContextLatencyCategory(cpp_value);
    return;
  }
}

v8::Local<v8::Value> ToV8(const AudioContextLatencyCategoryOrDouble& impl, v8::Local<v8::Object> creationContext, v8::Isolate* isolate) {
  switch (impl.type_) {
    case AudioContextLatencyCategoryOrDouble::SpecificType::kNone:
      return v8::Null(isolate);
    case AudioContextLatencyCategoryOrDouble::SpecificType::kAudioContextLatencyCategory:
      return V8String(isolate, impl.GetAsAudioContextLatencyCategory());
    case AudioContextLatencyCategoryOrDouble::SpecificType::kDouble:
      return v8::Number::New(isolate, impl.GetAsDouble());
    default:
      NOTREACHED();
  }
  return v8::Local<v8::Value>();
}

AudioContextLatencyCategoryOrDouble NativeValueTraits<AudioContextLatencyCategoryOrDouble>::NativeValue(
    v8::Isolate* isolate, v8::Local<v8::Value> value, ExceptionState& exception_state) {
  AudioContextLatencyCategoryOrDouble impl;
  V8AudioContextLatencyCategoryOrDouble::ToImpl(isolate, value, impl, UnionTypeConversionMode::kNotNullable, exception_state);
  return impl;
}

}  // namespace blink
