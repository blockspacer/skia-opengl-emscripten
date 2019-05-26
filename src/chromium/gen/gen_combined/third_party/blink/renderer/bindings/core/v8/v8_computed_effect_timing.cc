// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated from the Jinja2 template
// third_party/blink/renderer/bindings/templates/dictionary_v8.cc.tmpl
// by the script code_generator_v8.py.
// DO NOT MODIFY!

// clang-format off
#include "third_party/blink/renderer/bindings/core/v8/v8_computed_effect_timing.h"

#include "base/stl_util.h"
#include "third_party/blink/renderer/bindings/core/v8/idl_types.h"
#include "third_party/blink/renderer/bindings/core/v8/native_value_traits_impl.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_effect_timing.h"
#include "third_party/blink/renderer/platform/bindings/exception_state.h"

namespace blink {

static const v8::Eternal<v8::Name>* eternalV8ComputedEffectTimingKeys(v8::Isolate* isolate) {
  static const char* const kKeys[] = {
    "activeDuration",
    "currentIteration",
    "endTime",
    "localTime",
    "progress",
  };
  return V8PerIsolateData::From(isolate)->FindOrCreateEternalNameCache(
      kKeys, kKeys, base::size(kKeys));
}

void V8ComputedEffectTiming::ToImpl(v8::Isolate* isolate, v8::Local<v8::Value> v8_value, ComputedEffectTiming* impl, ExceptionState& exception_state) {
  if (IsUndefinedOrNull(v8_value)) {
    return;
  }
  if (!v8_value->IsObject()) {
    exception_state.ThrowTypeError("cannot convert to dictionary.");
    return;
  }
  v8::Local<v8::Object> v8Object = v8_value.As<v8::Object>();
  ALLOW_UNUSED_LOCAL(v8Object);

  V8EffectTiming::ToImpl(isolate, v8_value, impl, exception_state);
  if (exception_state.HadException())
    return;

  const v8::Eternal<v8::Name>* keys = eternalV8ComputedEffectTimingKeys(isolate);
  v8::TryCatch block(isolate);
  v8::Local<v8::Context> context = isolate->GetCurrentContext();
  v8::Local<v8::Value> active_duration_value;
  if (!v8Object->Get(context, keys[0].Get(isolate)).ToLocal(&active_duration_value)) {
    exception_state.RethrowV8Exception(block.Exception());
    return;
  }
  if (active_duration_value.IsEmpty() || active_duration_value->IsUndefined()) {
    // Do nothing.
  } else {
    double active_duration_cpp_value = NativeValueTraits<IDLUnrestrictedDouble>::NativeValue(isolate, active_duration_value, exception_state);
    if (exception_state.HadException())
      return;
    impl->setActiveDuration(active_duration_cpp_value);
  }

  v8::Local<v8::Value> current_iteration_value;
  if (!v8Object->Get(context, keys[1].Get(isolate)).ToLocal(&current_iteration_value)) {
    exception_state.RethrowV8Exception(block.Exception());
    return;
  }
  if (current_iteration_value.IsEmpty() || current_iteration_value->IsUndefined()) {
    // Do nothing.
  } else if (current_iteration_value->IsNull()) {
    impl->setCurrentIterationToNull();
  } else {
    double current_iteration_cpp_value = NativeValueTraits<IDLUnrestrictedDouble>::NativeValue(isolate, current_iteration_value, exception_state);
    if (exception_state.HadException())
      return;
    impl->setCurrentIteration(current_iteration_cpp_value);
  }

  v8::Local<v8::Value> end_time_value;
  if (!v8Object->Get(context, keys[2].Get(isolate)).ToLocal(&end_time_value)) {
    exception_state.RethrowV8Exception(block.Exception());
    return;
  }
  if (end_time_value.IsEmpty() || end_time_value->IsUndefined()) {
    // Do nothing.
  } else {
    double end_time_cpp_value = NativeValueTraits<IDLUnrestrictedDouble>::NativeValue(isolate, end_time_value, exception_state);
    if (exception_state.HadException())
      return;
    impl->setEndTime(end_time_cpp_value);
  }

  v8::Local<v8::Value> local_time_value;
  if (!v8Object->Get(context, keys[3].Get(isolate)).ToLocal(&local_time_value)) {
    exception_state.RethrowV8Exception(block.Exception());
    return;
  }
  if (local_time_value.IsEmpty() || local_time_value->IsUndefined()) {
    // Do nothing.
  } else if (local_time_value->IsNull()) {
    impl->setLocalTimeToNull();
  } else {
    double local_time_cpp_value = NativeValueTraits<IDLDouble>::NativeValue(isolate, local_time_value, exception_state);
    if (exception_state.HadException())
      return;
    impl->setLocalTime(local_time_cpp_value);
  }

  v8::Local<v8::Value> progress_value;
  if (!v8Object->Get(context, keys[4].Get(isolate)).ToLocal(&progress_value)) {
    exception_state.RethrowV8Exception(block.Exception());
    return;
  }
  if (progress_value.IsEmpty() || progress_value->IsUndefined()) {
    // Do nothing.
  } else if (progress_value->IsNull()) {
    impl->setProgressToNull();
  } else {
    double progress_cpp_value = NativeValueTraits<IDLDouble>::NativeValue(isolate, progress_value, exception_state);
    if (exception_state.HadException())
      return;
    impl->setProgress(progress_cpp_value);
  }
}

v8::Local<v8::Value> ComputedEffectTiming::ToV8Impl(v8::Local<v8::Object> creationContext, v8::Isolate* isolate) const {
  v8::Local<v8::Object> v8Object = v8::Object::New(isolate);
  if (!toV8ComputedEffectTiming(this, v8Object, creationContext, isolate))
    return v8::Undefined(isolate);
  return v8Object;
}

bool toV8ComputedEffectTiming(const ComputedEffectTiming* impl, v8::Local<v8::Object> dictionary, v8::Local<v8::Object> creationContext, v8::Isolate* isolate) {
  if (!toV8EffectTiming(impl, dictionary, creationContext, isolate))
    return false;

  const v8::Eternal<v8::Name>* keys = eternalV8ComputedEffectTimingKeys(isolate);
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

  v8::Local<v8::Value> active_duration_value;
  bool active_duration_has_value_or_default = false;
  if (impl->hasActiveDuration()) {
    active_duration_value = v8::Number::New(isolate, impl->activeDuration());
    active_duration_has_value_or_default = true;
  }
  if (active_duration_has_value_or_default &&
      !create_property(0, active_duration_value)) {
    return false;
  }

  v8::Local<v8::Value> current_iteration_value;
  bool current_iteration_has_value_or_default = false;
  if (impl->hasCurrentIteration()) {
    current_iteration_value = v8::Number::New(isolate, impl->currentIteration());
    current_iteration_has_value_or_default = true;
  } else {
    current_iteration_value = v8::Null(isolate);
    current_iteration_has_value_or_default = true;
  }
  if (current_iteration_has_value_or_default &&
      !create_property(1, current_iteration_value)) {
    return false;
  }

  v8::Local<v8::Value> end_time_value;
  bool end_time_has_value_or_default = false;
  if (impl->hasEndTime()) {
    end_time_value = v8::Number::New(isolate, impl->endTime());
    end_time_has_value_or_default = true;
  }
  if (end_time_has_value_or_default &&
      !create_property(2, end_time_value)) {
    return false;
  }

  v8::Local<v8::Value> local_time_value;
  bool local_time_has_value_or_default = false;
  if (impl->hasLocalTime()) {
    local_time_value = v8::Number::New(isolate, impl->localTime());
    local_time_has_value_or_default = true;
  } else {
    local_time_value = v8::Null(isolate);
    local_time_has_value_or_default = true;
  }
  if (local_time_has_value_or_default &&
      !create_property(3, local_time_value)) {
    return false;
  }

  v8::Local<v8::Value> progress_value;
  bool progress_has_value_or_default = false;
  if (impl->hasProgress()) {
    progress_value = v8::Number::New(isolate, impl->progress());
    progress_has_value_or_default = true;
  } else {
    progress_value = v8::Null(isolate);
    progress_has_value_or_default = true;
  }
  if (progress_has_value_or_default &&
      !create_property(4, progress_value)) {
    return false;
  }

  return true;
}

ComputedEffectTiming* NativeValueTraits<ComputedEffectTiming>::NativeValue(v8::Isolate* isolate, v8::Local<v8::Value> value, ExceptionState& exception_state) {
  ComputedEffectTiming* impl = ComputedEffectTiming::Create();
  V8ComputedEffectTiming::ToImpl(isolate, value, impl, exception_state);
  return impl;
}

}  // namespace blink
