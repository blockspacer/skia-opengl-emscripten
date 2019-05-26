// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated from the Jinja2 template
// third_party/blink/renderer/bindings/templates/dictionary_v8.cc.tmpl
// by the script code_generator_v8.py.
// DO NOT MODIFY!

// clang-format off
#include "third_party/blink/renderer/bindings/modules/v8/v8_constrain_long_range.h"

#include "base/stl_util.h"
#include "third_party/blink/renderer/bindings/core/v8/idl_types.h"
#include "third_party/blink/renderer/bindings/core/v8/native_value_traits_impl.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_long_range.h"
#include "third_party/blink/renderer/platform/bindings/exception_state.h"

namespace blink {

static const v8::Eternal<v8::Name>* eternalV8ConstrainLongRangeKeys(v8::Isolate* isolate) {
  static const char* const kKeys[] = {
    "exact",
    "ideal",
  };
  return V8PerIsolateData::From(isolate)->FindOrCreateEternalNameCache(
      kKeys, kKeys, base::size(kKeys));
}

void V8ConstrainLongRange::ToImpl(v8::Isolate* isolate, v8::Local<v8::Value> v8_value, ConstrainLongRange* impl, ExceptionState& exception_state) {
  if (IsUndefinedOrNull(v8_value)) {
    return;
  }
  if (!v8_value->IsObject()) {
    exception_state.ThrowTypeError("cannot convert to dictionary.");
    return;
  }
  v8::Local<v8::Object> v8Object = v8_value.As<v8::Object>();
  ALLOW_UNUSED_LOCAL(v8Object);

  V8LongRange::ToImpl(isolate, v8_value, impl, exception_state);
  if (exception_state.HadException())
    return;

  const v8::Eternal<v8::Name>* keys = eternalV8ConstrainLongRangeKeys(isolate);
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
    int32_t exact_cpp_value = NativeValueTraits<IDLLong>::NativeValue(isolate, exact_value, exception_state);
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
    int32_t ideal_cpp_value = NativeValueTraits<IDLLong>::NativeValue(isolate, ideal_value, exception_state);
    if (exception_state.HadException())
      return;
    impl->setIdeal(ideal_cpp_value);
  }
}

v8::Local<v8::Value> ConstrainLongRange::ToV8Impl(v8::Local<v8::Object> creationContext, v8::Isolate* isolate) const {
  v8::Local<v8::Object> v8Object = v8::Object::New(isolate);
  if (!toV8ConstrainLongRange(this, v8Object, creationContext, isolate))
    return v8::Undefined(isolate);
  return v8Object;
}

bool toV8ConstrainLongRange(const ConstrainLongRange* impl, v8::Local<v8::Object> dictionary, v8::Local<v8::Object> creationContext, v8::Isolate* isolate) {
  if (!toV8LongRange(impl, dictionary, creationContext, isolate))
    return false;

  const v8::Eternal<v8::Name>* keys = eternalV8ConstrainLongRangeKeys(isolate);
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
    exact_value = v8::Integer::New(isolate, impl->exact());
    exact_has_value_or_default = true;
  }
  if (exact_has_value_or_default &&
      !create_property(0, exact_value)) {
    return false;
  }

  v8::Local<v8::Value> ideal_value;
  bool ideal_has_value_or_default = false;
  if (impl->hasIdeal()) {
    ideal_value = v8::Integer::New(isolate, impl->ideal());
    ideal_has_value_or_default = true;
  }
  if (ideal_has_value_or_default &&
      !create_property(1, ideal_value)) {
    return false;
  }

  return true;
}

ConstrainLongRange* NativeValueTraits<ConstrainLongRange>::NativeValue(v8::Isolate* isolate, v8::Local<v8::Value> value, ExceptionState& exception_state) {
  ConstrainLongRange* impl = ConstrainLongRange::Create();
  V8ConstrainLongRange::ToImpl(isolate, value, impl, exception_state);
  return impl;
}

}  // namespace blink
