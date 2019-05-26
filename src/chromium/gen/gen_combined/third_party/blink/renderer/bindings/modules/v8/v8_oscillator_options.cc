// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated from the Jinja2 template
// third_party/blink/renderer/bindings/templates/dictionary_v8.cc.tmpl
// by the script code_generator_v8.py.
// DO NOT MODIFY!

// clang-format off
#include "third_party/blink/renderer/bindings/modules/v8/v8_oscillator_options.h"

#include "base/stl_util.h"
#include "third_party/blink/renderer/bindings/core/v8/idl_types.h"
#include "third_party/blink/renderer/bindings/core/v8/native_value_traits_impl.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_audio_node_options.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_periodic_wave.h"
#include "third_party/blink/renderer/platform/bindings/exception_state.h"

namespace blink {

static const v8::Eternal<v8::Name>* eternalV8OscillatorOptionsKeys(v8::Isolate* isolate) {
  static const char* const kKeys[] = {
    "detune",
    "frequency",
    "periodicWave",
    "type",
  };
  return V8PerIsolateData::From(isolate)->FindOrCreateEternalNameCache(
      kKeys, kKeys, base::size(kKeys));
}

void V8OscillatorOptions::ToImpl(v8::Isolate* isolate, v8::Local<v8::Value> v8_value, OscillatorOptions* impl, ExceptionState& exception_state) {
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

  const v8::Eternal<v8::Name>* keys = eternalV8OscillatorOptionsKeys(isolate);
  v8::TryCatch block(isolate);
  v8::Local<v8::Context> context = isolate->GetCurrentContext();
  v8::Local<v8::Value> detune_value;
  if (!v8Object->Get(context, keys[0].Get(isolate)).ToLocal(&detune_value)) {
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

  v8::Local<v8::Value> frequency_value;
  if (!v8Object->Get(context, keys[1].Get(isolate)).ToLocal(&frequency_value)) {
    exception_state.RethrowV8Exception(block.Exception());
    return;
  }
  if (frequency_value.IsEmpty() || frequency_value->IsUndefined()) {
    // Do nothing.
  } else {
    float frequency_cpp_value = NativeValueTraits<IDLFloat>::NativeValue(isolate, frequency_value, exception_state);
    if (exception_state.HadException())
      return;
    impl->setFrequency(frequency_cpp_value);
  }

  v8::Local<v8::Value> periodic_wave_value;
  if (!v8Object->Get(context, keys[2].Get(isolate)).ToLocal(&periodic_wave_value)) {
    exception_state.RethrowV8Exception(block.Exception());
    return;
  }
  if (periodic_wave_value.IsEmpty() || periodic_wave_value->IsUndefined()) {
    // Do nothing.
  } else if (periodic_wave_value->IsNull()) {
    impl->setPeriodicWaveToNull();
  } else {
    PeriodicWave* periodic_wave_cpp_value = V8PeriodicWave::ToImplWithTypeCheck(isolate, periodic_wave_value);
    if (!periodic_wave_cpp_value) {
      exception_state.ThrowTypeError("member periodicWave is not of type PeriodicWave.");
      return;
    }
    impl->setPeriodicWave(periodic_wave_cpp_value);
  }

  v8::Local<v8::Value> type_value;
  if (!v8Object->Get(context, keys[3].Get(isolate)).ToLocal(&type_value)) {
    exception_state.RethrowV8Exception(block.Exception());
    return;
  }
  if (type_value.IsEmpty() || type_value->IsUndefined()) {
    // Do nothing.
  } else {
    V8StringResource<> type_cpp_value = type_value;
    if (!type_cpp_value.Prepare(exception_state))
      return;
    const char* kValidValues[] = {
        "sine",
        "square",
        "sawtooth",
        "triangle",
        "custom",
    };
    if (!IsValidEnum(type_cpp_value, kValidValues, base::size(kValidValues), "OscillatorType", exception_state))
      return;
    impl->setType(type_cpp_value);
  }
}

v8::Local<v8::Value> OscillatorOptions::ToV8Impl(v8::Local<v8::Object> creationContext, v8::Isolate* isolate) const {
  v8::Local<v8::Object> v8Object = v8::Object::New(isolate);
  if (!toV8OscillatorOptions(this, v8Object, creationContext, isolate))
    return v8::Undefined(isolate);
  return v8Object;
}

bool toV8OscillatorOptions(const OscillatorOptions* impl, v8::Local<v8::Object> dictionary, v8::Local<v8::Object> creationContext, v8::Isolate* isolate) {
  if (!toV8AudioNodeOptions(impl, dictionary, creationContext, isolate))
    return false;

  const v8::Eternal<v8::Name>* keys = eternalV8OscillatorOptionsKeys(isolate);
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
      !create_property(0, detune_value)) {
    return false;
  }

  v8::Local<v8::Value> frequency_value;
  bool frequency_has_value_or_default = false;
  if (impl->hasFrequency()) {
    frequency_value = v8::Number::New(isolate, impl->frequency());
    frequency_has_value_or_default = true;
  } else {
    frequency_value = v8::Number::New(isolate, 440);
    frequency_has_value_or_default = true;
  }
  if (frequency_has_value_or_default &&
      !create_property(1, frequency_value)) {
    return false;
  }

  v8::Local<v8::Value> periodic_wave_value;
  bool periodic_wave_has_value_or_default = false;
  if (impl->hasPeriodicWave()) {
    periodic_wave_value = ToV8(impl->periodicWave(), creationContext, isolate);
    periodic_wave_has_value_or_default = true;
  }
  if (periodic_wave_has_value_or_default &&
      !create_property(2, periodic_wave_value)) {
    return false;
  }

  v8::Local<v8::Value> type_value;
  bool type_has_value_or_default = false;
  if (impl->hasType()) {
    type_value = V8String(isolate, impl->type());
    type_has_value_or_default = true;
  } else {
    type_value = V8String(isolate, "sine");
    type_has_value_or_default = true;
  }
  if (type_has_value_or_default &&
      !create_property(3, type_value)) {
    return false;
  }

  return true;
}

OscillatorOptions* NativeValueTraits<OscillatorOptions>::NativeValue(v8::Isolate* isolate, v8::Local<v8::Value> value, ExceptionState& exception_state) {
  OscillatorOptions* impl = OscillatorOptions::Create();
  V8OscillatorOptions::ToImpl(isolate, value, impl, exception_state);
  return impl;
}

}  // namespace blink
