// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated from the Jinja2 template
// third_party/blink/renderer/bindings/templates/dictionary_v8.cc.tmpl
// by the script code_generator_v8.py.
// DO NOT MODIFY!

// clang-format off
#include "third_party/blink/renderer/bindings/modules/v8/v8_dynamics_compressor_options.h"

#include "base/stl_util.h"
#include "third_party/blink/renderer/bindings/core/v8/idl_types.h"
#include "third_party/blink/renderer/bindings/core/v8/native_value_traits_impl.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_audio_node_options.h"
#include "third_party/blink/renderer/platform/bindings/exception_state.h"

namespace blink {

static const v8::Eternal<v8::Name>* eternalV8DynamicsCompressorOptionsKeys(v8::Isolate* isolate) {
  static const char* const kKeys[] = {
    "attack",
    "knee",
    "ratio",
    "release",
    "threshold",
  };
  return V8PerIsolateData::From(isolate)->FindOrCreateEternalNameCache(
      kKeys, kKeys, base::size(kKeys));
}

void V8DynamicsCompressorOptions::ToImpl(v8::Isolate* isolate, v8::Local<v8::Value> v8_value, DynamicsCompressorOptions* impl, ExceptionState& exception_state) {
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

  const v8::Eternal<v8::Name>* keys = eternalV8DynamicsCompressorOptionsKeys(isolate);
  v8::TryCatch block(isolate);
  v8::Local<v8::Context> context = isolate->GetCurrentContext();
  v8::Local<v8::Value> attack_value;
  if (!v8Object->Get(context, keys[0].Get(isolate)).ToLocal(&attack_value)) {
    exception_state.RethrowV8Exception(block.Exception());
    return;
  }
  if (attack_value.IsEmpty() || attack_value->IsUndefined()) {
    // Do nothing.
  } else {
    float attack_cpp_value = NativeValueTraits<IDLFloat>::NativeValue(isolate, attack_value, exception_state);
    if (exception_state.HadException())
      return;
    impl->setAttack(attack_cpp_value);
  }

  v8::Local<v8::Value> knee_value;
  if (!v8Object->Get(context, keys[1].Get(isolate)).ToLocal(&knee_value)) {
    exception_state.RethrowV8Exception(block.Exception());
    return;
  }
  if (knee_value.IsEmpty() || knee_value->IsUndefined()) {
    // Do nothing.
  } else {
    float knee_cpp_value = NativeValueTraits<IDLFloat>::NativeValue(isolate, knee_value, exception_state);
    if (exception_state.HadException())
      return;
    impl->setKnee(knee_cpp_value);
  }

  v8::Local<v8::Value> ratio_value;
  if (!v8Object->Get(context, keys[2].Get(isolate)).ToLocal(&ratio_value)) {
    exception_state.RethrowV8Exception(block.Exception());
    return;
  }
  if (ratio_value.IsEmpty() || ratio_value->IsUndefined()) {
    // Do nothing.
  } else {
    float ratio_cpp_value = NativeValueTraits<IDLFloat>::NativeValue(isolate, ratio_value, exception_state);
    if (exception_state.HadException())
      return;
    impl->setRatio(ratio_cpp_value);
  }

  v8::Local<v8::Value> release_value;
  if (!v8Object->Get(context, keys[3].Get(isolate)).ToLocal(&release_value)) {
    exception_state.RethrowV8Exception(block.Exception());
    return;
  }
  if (release_value.IsEmpty() || release_value->IsUndefined()) {
    // Do nothing.
  } else {
    float release_cpp_value = NativeValueTraits<IDLFloat>::NativeValue(isolate, release_value, exception_state);
    if (exception_state.HadException())
      return;
    impl->setRelease(release_cpp_value);
  }

  v8::Local<v8::Value> threshold_value;
  if (!v8Object->Get(context, keys[4].Get(isolate)).ToLocal(&threshold_value)) {
    exception_state.RethrowV8Exception(block.Exception());
    return;
  }
  if (threshold_value.IsEmpty() || threshold_value->IsUndefined()) {
    // Do nothing.
  } else {
    float threshold_cpp_value = NativeValueTraits<IDLFloat>::NativeValue(isolate, threshold_value, exception_state);
    if (exception_state.HadException())
      return;
    impl->setThreshold(threshold_cpp_value);
  }
}

v8::Local<v8::Value> DynamicsCompressorOptions::ToV8Impl(v8::Local<v8::Object> creationContext, v8::Isolate* isolate) const {
  v8::Local<v8::Object> v8Object = v8::Object::New(isolate);
  if (!toV8DynamicsCompressorOptions(this, v8Object, creationContext, isolate))
    return v8::Undefined(isolate);
  return v8Object;
}

bool toV8DynamicsCompressorOptions(const DynamicsCompressorOptions* impl, v8::Local<v8::Object> dictionary, v8::Local<v8::Object> creationContext, v8::Isolate* isolate) {
  if (!toV8AudioNodeOptions(impl, dictionary, creationContext, isolate))
    return false;

  const v8::Eternal<v8::Name>* keys = eternalV8DynamicsCompressorOptionsKeys(isolate);
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

  v8::Local<v8::Value> attack_value;
  bool attack_has_value_or_default = false;
  if (impl->hasAttack()) {
    attack_value = v8::Number::New(isolate, impl->attack());
    attack_has_value_or_default = true;
  } else {
    attack_value = v8::Number::New(isolate, 0.003);
    attack_has_value_or_default = true;
  }
  if (attack_has_value_or_default &&
      !create_property(0, attack_value)) {
    return false;
  }

  v8::Local<v8::Value> knee_value;
  bool knee_has_value_or_default = false;
  if (impl->hasKnee()) {
    knee_value = v8::Number::New(isolate, impl->knee());
    knee_has_value_or_default = true;
  } else {
    knee_value = v8::Number::New(isolate, 30);
    knee_has_value_or_default = true;
  }
  if (knee_has_value_or_default &&
      !create_property(1, knee_value)) {
    return false;
  }

  v8::Local<v8::Value> ratio_value;
  bool ratio_has_value_or_default = false;
  if (impl->hasRatio()) {
    ratio_value = v8::Number::New(isolate, impl->ratio());
    ratio_has_value_or_default = true;
  } else {
    ratio_value = v8::Number::New(isolate, 12);
    ratio_has_value_or_default = true;
  }
  if (ratio_has_value_or_default &&
      !create_property(2, ratio_value)) {
    return false;
  }

  v8::Local<v8::Value> release_value;
  bool release_has_value_or_default = false;
  if (impl->hasRelease()) {
    release_value = v8::Number::New(isolate, impl->release());
    release_has_value_or_default = true;
  } else {
    release_value = v8::Number::New(isolate, 0.25);
    release_has_value_or_default = true;
  }
  if (release_has_value_or_default &&
      !create_property(3, release_value)) {
    return false;
  }

  v8::Local<v8::Value> threshold_value;
  bool threshold_has_value_or_default = false;
  if (impl->hasThreshold()) {
    threshold_value = v8::Number::New(isolate, impl->threshold());
    threshold_has_value_or_default = true;
  } else {
    threshold_value = v8::Number::New(isolate, -24);
    threshold_has_value_or_default = true;
  }
  if (threshold_has_value_or_default &&
      !create_property(4, threshold_value)) {
    return false;
  }

  return true;
}

DynamicsCompressorOptions* NativeValueTraits<DynamicsCompressorOptions>::NativeValue(v8::Isolate* isolate, v8::Local<v8::Value> value, ExceptionState& exception_state) {
  DynamicsCompressorOptions* impl = DynamicsCompressorOptions::Create();
  V8DynamicsCompressorOptions::ToImpl(isolate, value, impl, exception_state);
  return impl;
}

}  // namespace blink
