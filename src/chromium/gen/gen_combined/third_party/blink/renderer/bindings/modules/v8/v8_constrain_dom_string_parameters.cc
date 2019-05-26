// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated from the Jinja2 template
// third_party/blink/renderer/bindings/templates/dictionary_v8.cc.tmpl
// by the script code_generator_v8.py.
// DO NOT MODIFY!

// clang-format off
#include "third_party/blink/renderer/bindings/modules/v8/v8_constrain_dom_string_parameters.h"

#include "base/stl_util.h"
#include "third_party/blink/renderer/bindings/core/v8/idl_types.h"
#include "third_party/blink/renderer/bindings/core/v8/native_value_traits_impl.h"
#include "third_party/blink/renderer/platform/bindings/exception_state.h"

namespace blink {

static const v8::Eternal<v8::Name>* eternalV8ConstrainDOMStringParametersKeys(v8::Isolate* isolate) {
  static const char* const kKeys[] = {
    "exact",
    "ideal",
  };
  return V8PerIsolateData::From(isolate)->FindOrCreateEternalNameCache(
      kKeys, kKeys, base::size(kKeys));
}

void V8ConstrainDOMStringParameters::ToImpl(v8::Isolate* isolate, v8::Local<v8::Value> v8_value, ConstrainDOMStringParameters* impl, ExceptionState& exception_state) {
  if (IsUndefinedOrNull(v8_value)) {
    return;
  }
  if (!v8_value->IsObject()) {
    exception_state.ThrowTypeError("cannot convert to dictionary.");
    return;
  }
  v8::Local<v8::Object> v8Object = v8_value.As<v8::Object>();
  ALLOW_UNUSED_LOCAL(v8Object);

  const v8::Eternal<v8::Name>* keys = eternalV8ConstrainDOMStringParametersKeys(isolate);
  v8::TryCatch block(isolate);
  v8::Local<v8::Context> context = isolate->GetCurrentContext();
  v8::Local<v8::Value> exact_value;
  if (!v8Object->Get(context, keys[0].Get(isolate)).ToLocal(&exact_value)) {
    exception_state.RethrowV8Exception(block.Exception());
    return;
  }
  if (exact_value.IsEmpty() || exact_value->IsUndefined()) {
    // Do nothing.
  } else {
    StringOrStringSequence exact_cpp_value;
    V8StringOrStringSequence::ToImpl(isolate, exact_value, exact_cpp_value, UnionTypeConversionMode::kNotNullable, exception_state);
    if (exception_state.HadException())
      return;
    impl->setExact(exact_cpp_value);
  }

  v8::Local<v8::Value> ideal_value;
  if (!v8Object->Get(context, keys[1].Get(isolate)).ToLocal(&ideal_value)) {
    exception_state.RethrowV8Exception(block.Exception());
    return;
  }
  if (ideal_value.IsEmpty() || ideal_value->IsUndefined()) {
    // Do nothing.
  } else {
    StringOrStringSequence ideal_cpp_value;
    V8StringOrStringSequence::ToImpl(isolate, ideal_value, ideal_cpp_value, UnionTypeConversionMode::kNotNullable, exception_state);
    if (exception_state.HadException())
      return;
    impl->setIdeal(ideal_cpp_value);
  }
}

v8::Local<v8::Value> ConstrainDOMStringParameters::ToV8Impl(v8::Local<v8::Object> creationContext, v8::Isolate* isolate) const {
  v8::Local<v8::Object> v8Object = v8::Object::New(isolate);
  if (!toV8ConstrainDOMStringParameters(this, v8Object, creationContext, isolate))
    return v8::Undefined(isolate);
  return v8Object;
}

bool toV8ConstrainDOMStringParameters(const ConstrainDOMStringParameters* impl, v8::Local<v8::Object> dictionary, v8::Local<v8::Object> creationContext, v8::Isolate* isolate) {
  const v8::Eternal<v8::Name>* keys = eternalV8ConstrainDOMStringParametersKeys(isolate);
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

  v8::Local<v8::Value> exact_value;
  bool exact_has_value_or_default = false;
  if (impl->hasExact()) {
    exact_value = ToV8(impl->exact(), creationContext, isolate);
    exact_has_value_or_default = true;
  }
  if (exact_has_value_or_default &&
      !create_property(0, exact_value)) {
    return false;
  }

  v8::Local<v8::Value> ideal_value;
  bool ideal_has_value_or_default = false;
  if (impl->hasIdeal()) {
    ideal_value = ToV8(impl->ideal(), creationContext, isolate);
    ideal_has_value_or_default = true;
  }
  if (ideal_has_value_or_default &&
      !create_property(1, ideal_value)) {
    return false;
  }

  return true;
}

ConstrainDOMStringParameters* NativeValueTraits<ConstrainDOMStringParameters>::NativeValue(v8::Isolate* isolate, v8::Local<v8::Value> value, ExceptionState& exception_state) {
  ConstrainDOMStringParameters* impl = ConstrainDOMStringParameters::Create();
  V8ConstrainDOMStringParameters::ToImpl(isolate, value, impl, exception_state);
  return impl;
}

}  // namespace blink
