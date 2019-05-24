// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated from the Jinja2 template
// third_party/blink/renderer/bindings/templates/dictionary_v8.cc.tmpl
// by the script code_generator_v8.py.
// DO NOT MODIFY!

// clang-format off
#include "third_party/blink/renderer/bindings/modules/v8/v8_gamepad_effect_parameters.h"

#include "base/stl_util.h"
#include "third_party/blink/renderer/bindings/core/v8/idl_types.h"
#include "third_party/blink/renderer/bindings/core/v8/native_value_traits_impl.h"
#include "third_party/blink/renderer/platform/bindings/exception_state.h"

namespace blink {

static const v8::Eternal<v8::Name>* eternalV8GamepadEffectParametersKeys(v8::Isolate* isolate) {
  static const char* const kKeys[] = {
    "duration",
    "startDelay",
    "strongMagnitude",
    "weakMagnitude",
  };
  return V8PerIsolateData::From(isolate)->FindOrCreateEternalNameCache(
      kKeys, kKeys, base::size(kKeys));
}

void V8GamepadEffectParameters::ToImpl(v8::Isolate* isolate, v8::Local<v8::Value> v8_value, GamepadEffectParameters* impl, ExceptionState& exception_state) {
  if (IsUndefinedOrNull(v8_value)) {
    return;
  }
  if (!v8_value->IsObject()) {
    exception_state.ThrowTypeError("cannot convert to dictionary.");
    return;
  }
  v8::Local<v8::Object> v8Object = v8_value.As<v8::Object>();
  ALLOW_UNUSED_LOCAL(v8Object);

  const v8::Eternal<v8::Name>* keys = eternalV8GamepadEffectParametersKeys(isolate);
  v8::TryCatch block(isolate);
  v8::Local<v8::Context> context = isolate->GetCurrentContext();
  v8::Local<v8::Value> duration_value;
  if (!v8Object->Get(context, keys[0].Get(isolate)).ToLocal(&duration_value)) {
    exception_state.RethrowV8Exception(block.Exception());
    return;
  }
  if (duration_value.IsEmpty() || duration_value->IsUndefined()) {
    // Do nothing.
  } else {
    double duration_cpp_value = NativeValueTraits<IDLDouble>::NativeValue(isolate, duration_value, exception_state);
    if (exception_state.HadException())
      return;
    impl->setDuration(duration_cpp_value);
  }

  v8::Local<v8::Value> start_delay_value;
  if (!v8Object->Get(context, keys[1].Get(isolate)).ToLocal(&start_delay_value)) {
    exception_state.RethrowV8Exception(block.Exception());
    return;
  }
  if (start_delay_value.IsEmpty() || start_delay_value->IsUndefined()) {
    // Do nothing.
  } else {
    double start_delay_cpp_value = NativeValueTraits<IDLDouble>::NativeValue(isolate, start_delay_value, exception_state);
    if (exception_state.HadException())
      return;
    impl->setStartDelay(start_delay_cpp_value);
  }

  v8::Local<v8::Value> strong_magnitude_value;
  if (!v8Object->Get(context, keys[2].Get(isolate)).ToLocal(&strong_magnitude_value)) {
    exception_state.RethrowV8Exception(block.Exception());
    return;
  }
  if (strong_magnitude_value.IsEmpty() || strong_magnitude_value->IsUndefined()) {
    // Do nothing.
  } else {
    double strong_magnitude_cpp_value = NativeValueTraits<IDLDouble>::NativeValue(isolate, strong_magnitude_value, exception_state);
    if (exception_state.HadException())
      return;
    impl->setStrongMagnitude(strong_magnitude_cpp_value);
  }

  v8::Local<v8::Value> weak_magnitude_value;
  if (!v8Object->Get(context, keys[3].Get(isolate)).ToLocal(&weak_magnitude_value)) {
    exception_state.RethrowV8Exception(block.Exception());
    return;
  }
  if (weak_magnitude_value.IsEmpty() || weak_magnitude_value->IsUndefined()) {
    // Do nothing.
  } else {
    double weak_magnitude_cpp_value = NativeValueTraits<IDLDouble>::NativeValue(isolate, weak_magnitude_value, exception_state);
    if (exception_state.HadException())
      return;
    impl->setWeakMagnitude(weak_magnitude_cpp_value);
  }
}

v8::Local<v8::Value> GamepadEffectParameters::ToV8Impl(v8::Local<v8::Object> creationContext, v8::Isolate* isolate) const {
  v8::Local<v8::Object> v8Object = v8::Object::New(isolate);
  if (!toV8GamepadEffectParameters(this, v8Object, creationContext, isolate))
    return v8::Undefined(isolate);
  return v8Object;
}

bool toV8GamepadEffectParameters(const GamepadEffectParameters* impl, v8::Local<v8::Object> dictionary, v8::Local<v8::Object> creationContext, v8::Isolate* isolate) {
  const v8::Eternal<v8::Name>* keys = eternalV8GamepadEffectParametersKeys(isolate);
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

  v8::Local<v8::Value> duration_value;
  bool duration_has_value_or_default = false;
  if (impl->hasDuration()) {
    duration_value = v8::Number::New(isolate, impl->duration());
    duration_has_value_or_default = true;
  } else {
    duration_value = v8::Number::New(isolate, 0);
    duration_has_value_or_default = true;
  }
  if (duration_has_value_or_default &&
      !create_property(0, duration_value)) {
    return false;
  }

  v8::Local<v8::Value> start_delay_value;
  bool start_delay_has_value_or_default = false;
  if (impl->hasStartDelay()) {
    start_delay_value = v8::Number::New(isolate, impl->startDelay());
    start_delay_has_value_or_default = true;
  } else {
    start_delay_value = v8::Number::New(isolate, 0);
    start_delay_has_value_or_default = true;
  }
  if (start_delay_has_value_or_default &&
      !create_property(1, start_delay_value)) {
    return false;
  }

  v8::Local<v8::Value> strong_magnitude_value;
  bool strong_magnitude_has_value_or_default = false;
  if (impl->hasStrongMagnitude()) {
    strong_magnitude_value = v8::Number::New(isolate, impl->strongMagnitude());
    strong_magnitude_has_value_or_default = true;
  } else {
    strong_magnitude_value = v8::Number::New(isolate, 0);
    strong_magnitude_has_value_or_default = true;
  }
  if (strong_magnitude_has_value_or_default &&
      !create_property(2, strong_magnitude_value)) {
    return false;
  }

  v8::Local<v8::Value> weak_magnitude_value;
  bool weak_magnitude_has_value_or_default = false;
  if (impl->hasWeakMagnitude()) {
    weak_magnitude_value = v8::Number::New(isolate, impl->weakMagnitude());
    weak_magnitude_has_value_or_default = true;
  } else {
    weak_magnitude_value = v8::Number::New(isolate, 0);
    weak_magnitude_has_value_or_default = true;
  }
  if (weak_magnitude_has_value_or_default &&
      !create_property(3, weak_magnitude_value)) {
    return false;
  }

  return true;
}

GamepadEffectParameters* NativeValueTraits<GamepadEffectParameters>::NativeValue(v8::Isolate* isolate, v8::Local<v8::Value> value, ExceptionState& exception_state) {
  GamepadEffectParameters* impl = GamepadEffectParameters::Create();
  V8GamepadEffectParameters::ToImpl(isolate, value, impl, exception_state);
  return impl;
}

}  // namespace blink
