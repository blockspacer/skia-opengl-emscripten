// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated from the Jinja2 template
// third_party/blink/renderer/bindings/templates/dictionary_v8.cc.tmpl
// by the script code_generator_v8.py.
// DO NOT MODIFY!

// clang-format off
#include "third_party/blink/renderer/bindings/core/v8/v8_optional_effect_timing.h"

#include "base/stl_util.h"
#include "third_party/blink/renderer/bindings/core/v8/idl_types.h"
#include "third_party/blink/renderer/bindings/core/v8/native_value_traits_impl.h"
#include "third_party/blink/renderer/platform/bindings/exception_state.h"

namespace blink {

static const v8::Eternal<v8::Name>* eternalV8OptionalEffectTimingKeys(v8::Isolate* isolate) {
  static const char* const kKeys[] = {
    "delay",
    "direction",
    "duration",
    "easing",
    "endDelay",
    "fill",
    "iterationStart",
    "iterations",
  };
  return V8PerIsolateData::From(isolate)->FindOrCreateEternalNameCache(
      kKeys, kKeys, base::size(kKeys));
}

void V8OptionalEffectTiming::ToImpl(v8::Isolate* isolate, v8::Local<v8::Value> v8_value, OptionalEffectTiming* impl, ExceptionState& exception_state) {
  if (IsUndefinedOrNull(v8_value)) {
    return;
  }
  if (!v8_value->IsObject()) {
    exception_state.ThrowTypeError("cannot convert to dictionary.");
    return;
  }
  v8::Local<v8::Object> v8Object = v8_value.As<v8::Object>();
  ALLOW_UNUSED_LOCAL(v8Object);

  const v8::Eternal<v8::Name>* keys = eternalV8OptionalEffectTimingKeys(isolate);
  v8::TryCatch block(isolate);
  v8::Local<v8::Context> context = isolate->GetCurrentContext();
  v8::Local<v8::Value> delay_value;
  if (!v8Object->Get(context, keys[0].Get(isolate)).ToLocal(&delay_value)) {
    exception_state.RethrowV8Exception(block.Exception());
    return;
  }
  if (delay_value.IsEmpty() || delay_value->IsUndefined()) {
    // Do nothing.
  } else {
    double delay_cpp_value = NativeValueTraits<IDLDouble>::NativeValue(isolate, delay_value, exception_state);
    if (exception_state.HadException())
      return;
    impl->setDelay(delay_cpp_value);
  }

  v8::Local<v8::Value> direction_value;
  if (!v8Object->Get(context, keys[1].Get(isolate)).ToLocal(&direction_value)) {
    exception_state.RethrowV8Exception(block.Exception());
    return;
  }
  if (direction_value.IsEmpty() || direction_value->IsUndefined()) {
    // Do nothing.
  } else {
    V8StringResource<> direction_cpp_value = direction_value;
    if (!direction_cpp_value.Prepare(exception_state))
      return;
    const char* kValidValues[] = {
        "normal",
        "reverse",
        "alternate",
        "alternate-reverse",
    };
    if (!IsValidEnum(direction_cpp_value, kValidValues, base::size(kValidValues), "PlaybackDirection", exception_state))
      return;
    impl->setDirection(direction_cpp_value);
  }

  v8::Local<v8::Value> duration_value;
  if (!v8Object->Get(context, keys[2].Get(isolate)).ToLocal(&duration_value)) {
    exception_state.RethrowV8Exception(block.Exception());
    return;
  }
  if (duration_value.IsEmpty() || duration_value->IsUndefined()) {
    // Do nothing.
  } else {
    UnrestrictedDoubleOrString duration_cpp_value;
    V8UnrestrictedDoubleOrString::ToImpl(isolate, duration_value, duration_cpp_value, UnionTypeConversionMode::kNotNullable, exception_state);
    if (exception_state.HadException())
      return;
    impl->setDuration(duration_cpp_value);
  }

  v8::Local<v8::Value> easing_value;
  if (!v8Object->Get(context, keys[3].Get(isolate)).ToLocal(&easing_value)) {
    exception_state.RethrowV8Exception(block.Exception());
    return;
  }
  if (easing_value.IsEmpty() || easing_value->IsUndefined()) {
    // Do nothing.
  } else {
    V8StringResource<> easing_cpp_value = easing_value;
    if (!easing_cpp_value.Prepare(exception_state))
      return;
    impl->setEasing(easing_cpp_value);
  }

  v8::Local<v8::Value> end_delay_value;
  if (!v8Object->Get(context, keys[4].Get(isolate)).ToLocal(&end_delay_value)) {
    exception_state.RethrowV8Exception(block.Exception());
    return;
  }
  if (end_delay_value.IsEmpty() || end_delay_value->IsUndefined()) {
    // Do nothing.
  } else {
    double end_delay_cpp_value = NativeValueTraits<IDLDouble>::NativeValue(isolate, end_delay_value, exception_state);
    if (exception_state.HadException())
      return;
    impl->setEndDelay(end_delay_cpp_value);
  }

  v8::Local<v8::Value> fill_value;
  if (!v8Object->Get(context, keys[5].Get(isolate)).ToLocal(&fill_value)) {
    exception_state.RethrowV8Exception(block.Exception());
    return;
  }
  if (fill_value.IsEmpty() || fill_value->IsUndefined()) {
    // Do nothing.
  } else {
    V8StringResource<> fill_cpp_value = fill_value;
    if (!fill_cpp_value.Prepare(exception_state))
      return;
    const char* kValidValues[] = {
        "none",
        "forwards",
        "backwards",
        "both",
        "auto",
    };
    if (!IsValidEnum(fill_cpp_value, kValidValues, base::size(kValidValues), "FillMode", exception_state))
      return;
    impl->setFill(fill_cpp_value);
  }

  v8::Local<v8::Value> iteration_start_value;
  if (!v8Object->Get(context, keys[6].Get(isolate)).ToLocal(&iteration_start_value)) {
    exception_state.RethrowV8Exception(block.Exception());
    return;
  }
  if (iteration_start_value.IsEmpty() || iteration_start_value->IsUndefined()) {
    // Do nothing.
  } else {
    double iteration_start_cpp_value = NativeValueTraits<IDLDouble>::NativeValue(isolate, iteration_start_value, exception_state);
    if (exception_state.HadException())
      return;
    impl->setIterationStart(iteration_start_cpp_value);
  }

  v8::Local<v8::Value> iterations_value;
  if (!v8Object->Get(context, keys[7].Get(isolate)).ToLocal(&iterations_value)) {
    exception_state.RethrowV8Exception(block.Exception());
    return;
  }
  if (iterations_value.IsEmpty() || iterations_value->IsUndefined()) {
    // Do nothing.
  } else {
    double iterations_cpp_value = NativeValueTraits<IDLUnrestrictedDouble>::NativeValue(isolate, iterations_value, exception_state);
    if (exception_state.HadException())
      return;
    impl->setIterations(iterations_cpp_value);
  }
}

v8::Local<v8::Value> OptionalEffectTiming::ToV8Impl(v8::Local<v8::Object> creationContext, v8::Isolate* isolate) const {
  v8::Local<v8::Object> v8Object = v8::Object::New(isolate);
  if (!toV8OptionalEffectTiming(this, v8Object, creationContext, isolate))
    return v8::Undefined(isolate);
  return v8Object;
}

bool toV8OptionalEffectTiming(const OptionalEffectTiming* impl, v8::Local<v8::Object> dictionary, v8::Local<v8::Object> creationContext, v8::Isolate* isolate) {
  const v8::Eternal<v8::Name>* keys = eternalV8OptionalEffectTimingKeys(isolate);
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

  v8::Local<v8::Value> delay_value;
  bool delay_has_value_or_default = false;
  if (impl->hasDelay()) {
    delay_value = v8::Number::New(isolate, impl->delay());
    delay_has_value_or_default = true;
  }
  if (delay_has_value_or_default &&
      !create_property(0, delay_value)) {
    return false;
  }

  v8::Local<v8::Value> direction_value;
  bool direction_has_value_or_default = false;
  if (impl->hasDirection()) {
    direction_value = V8String(isolate, impl->direction());
    direction_has_value_or_default = true;
  }
  if (direction_has_value_or_default &&
      !create_property(1, direction_value)) {
    return false;
  }

  v8::Local<v8::Value> duration_value;
  bool duration_has_value_or_default = false;
  if (impl->hasDuration()) {
    duration_value = ToV8(impl->duration(), creationContext, isolate);
    duration_has_value_or_default = true;
  }
  if (duration_has_value_or_default &&
      !create_property(2, duration_value)) {
    return false;
  }

  v8::Local<v8::Value> easing_value;
  bool easing_has_value_or_default = false;
  if (impl->hasEasing()) {
    easing_value = V8String(isolate, impl->easing());
    easing_has_value_or_default = true;
  }
  if (easing_has_value_or_default &&
      !create_property(3, easing_value)) {
    return false;
  }

  v8::Local<v8::Value> end_delay_value;
  bool end_delay_has_value_or_default = false;
  if (impl->hasEndDelay()) {
    end_delay_value = v8::Number::New(isolate, impl->endDelay());
    end_delay_has_value_or_default = true;
  }
  if (end_delay_has_value_or_default &&
      !create_property(4, end_delay_value)) {
    return false;
  }

  v8::Local<v8::Value> fill_value;
  bool fill_has_value_or_default = false;
  if (impl->hasFill()) {
    fill_value = V8String(isolate, impl->fill());
    fill_has_value_or_default = true;
  }
  if (fill_has_value_or_default &&
      !create_property(5, fill_value)) {
    return false;
  }

  v8::Local<v8::Value> iteration_start_value;
  bool iteration_start_has_value_or_default = false;
  if (impl->hasIterationStart()) {
    iteration_start_value = v8::Number::New(isolate, impl->iterationStart());
    iteration_start_has_value_or_default = true;
  }
  if (iteration_start_has_value_or_default &&
      !create_property(6, iteration_start_value)) {
    return false;
  }

  v8::Local<v8::Value> iterations_value;
  bool iterations_has_value_or_default = false;
  if (impl->hasIterations()) {
    iterations_value = v8::Number::New(isolate, impl->iterations());
    iterations_has_value_or_default = true;
  }
  if (iterations_has_value_or_default &&
      !create_property(7, iterations_value)) {
    return false;
  }

  return true;
}

OptionalEffectTiming* NativeValueTraits<OptionalEffectTiming>::NativeValue(v8::Isolate* isolate, v8::Local<v8::Value> value, ExceptionState& exception_state) {
  OptionalEffectTiming* impl = OptionalEffectTiming::Create();
  V8OptionalEffectTiming::ToImpl(isolate, value, impl, exception_state);
  return impl;
}

}  // namespace blink
