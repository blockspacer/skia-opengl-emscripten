// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated from the Jinja2 template
// third_party/blink/renderer/bindings/templates/dictionary_v8.cc.tmpl
// by the script code_generator_v8.py.
// DO NOT MODIFY!

// clang-format off
#include "third_party/blink/renderer/bindings/core/v8/v8_baselines.h"

#include "base/stl_util.h"
#include "third_party/blink/renderer/bindings/core/v8/idl_types.h"
#include "third_party/blink/renderer/bindings/core/v8/native_value_traits_impl.h"
#include "third_party/blink/renderer/platform/bindings/exception_state.h"

namespace blink {

static const v8::Eternal<v8::Name>* eternalV8BaselinesKeys(v8::Isolate* isolate) {
  static const char* const kKeys[] = {
    "alphabetic",
    "hanging",
    "ideographic",
  };
  return V8PerIsolateData::From(isolate)->FindOrCreateEternalNameCache(
      kKeys, kKeys, base::size(kKeys));
}

void V8Baselines::ToImpl(v8::Isolate* isolate, v8::Local<v8::Value> v8_value, Baselines* impl, ExceptionState& exception_state) {
  if (IsUndefinedOrNull(v8_value)) {
    return;
  }
  if (!v8_value->IsObject()) {
    exception_state.ThrowTypeError("cannot convert to dictionary.");
    return;
  }
  v8::Local<v8::Object> v8Object = v8_value.As<v8::Object>();
  ALLOW_UNUSED_LOCAL(v8Object);

  const v8::Eternal<v8::Name>* keys = eternalV8BaselinesKeys(isolate);
  v8::TryCatch block(isolate);
  v8::Local<v8::Context> context = isolate->GetCurrentContext();
  v8::Local<v8::Value> alphabetic_value;
  if (!v8Object->Get(context, keys[0].Get(isolate)).ToLocal(&alphabetic_value)) {
    exception_state.RethrowV8Exception(block.Exception());
    return;
  }
  if (alphabetic_value.IsEmpty() || alphabetic_value->IsUndefined()) {
    // Do nothing.
  } else {
    double alphabetic_cpp_value = NativeValueTraits<IDLDouble>::NativeValue(isolate, alphabetic_value, exception_state);
    if (exception_state.HadException())
      return;
    impl->setAlphabetic(alphabetic_cpp_value);
  }

  v8::Local<v8::Value> hanging_value;
  if (!v8Object->Get(context, keys[1].Get(isolate)).ToLocal(&hanging_value)) {
    exception_state.RethrowV8Exception(block.Exception());
    return;
  }
  if (hanging_value.IsEmpty() || hanging_value->IsUndefined()) {
    // Do nothing.
  } else {
    double hanging_cpp_value = NativeValueTraits<IDLDouble>::NativeValue(isolate, hanging_value, exception_state);
    if (exception_state.HadException())
      return;
    impl->setHanging(hanging_cpp_value);
  }

  v8::Local<v8::Value> ideographic_value;
  if (!v8Object->Get(context, keys[2].Get(isolate)).ToLocal(&ideographic_value)) {
    exception_state.RethrowV8Exception(block.Exception());
    return;
  }
  if (ideographic_value.IsEmpty() || ideographic_value->IsUndefined()) {
    // Do nothing.
  } else {
    double ideographic_cpp_value = NativeValueTraits<IDLDouble>::NativeValue(isolate, ideographic_value, exception_state);
    if (exception_state.HadException())
      return;
    impl->setIdeographic(ideographic_cpp_value);
  }
}

v8::Local<v8::Value> Baselines::ToV8Impl(v8::Local<v8::Object> creationContext, v8::Isolate* isolate) const {
  v8::Local<v8::Object> v8Object = v8::Object::New(isolate);
  if (!toV8Baselines(this, v8Object, creationContext, isolate))
    return v8::Undefined(isolate);
  return v8Object;
}

bool toV8Baselines(const Baselines* impl, v8::Local<v8::Object> dictionary, v8::Local<v8::Object> creationContext, v8::Isolate* isolate) {
  const v8::Eternal<v8::Name>* keys = eternalV8BaselinesKeys(isolate);
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

  v8::Local<v8::Value> alphabetic_value;
  bool alphabetic_has_value_or_default = false;
  if (impl->hasAlphabetic()) {
    alphabetic_value = v8::Number::New(isolate, impl->alphabetic());
    alphabetic_has_value_or_default = true;
  }
  if (alphabetic_has_value_or_default &&
      !create_property(0, alphabetic_value)) {
    return false;
  }

  v8::Local<v8::Value> hanging_value;
  bool hanging_has_value_or_default = false;
  if (impl->hasHanging()) {
    hanging_value = v8::Number::New(isolate, impl->hanging());
    hanging_has_value_or_default = true;
  }
  if (hanging_has_value_or_default &&
      !create_property(1, hanging_value)) {
    return false;
  }

  v8::Local<v8::Value> ideographic_value;
  bool ideographic_has_value_or_default = false;
  if (impl->hasIdeographic()) {
    ideographic_value = v8::Number::New(isolate, impl->ideographic());
    ideographic_has_value_or_default = true;
  }
  if (ideographic_has_value_or_default &&
      !create_property(2, ideographic_value)) {
    return false;
  }

  return true;
}

Baselines* NativeValueTraits<Baselines>::NativeValue(v8::Isolate* isolate, v8::Local<v8::Value> value, ExceptionState& exception_state) {
  Baselines* impl = Baselines::Create();
  V8Baselines::ToImpl(isolate, value, impl, exception_state);
  return impl;
}

}  // namespace blink
