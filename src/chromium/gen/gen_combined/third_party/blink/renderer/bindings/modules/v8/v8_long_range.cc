// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated from the Jinja2 template
// third_party/blink/renderer/bindings/templates/dictionary_v8.cc.tmpl
// by the script code_generator_v8.py.
// DO NOT MODIFY!

// clang-format off
#include "third_party/blink/renderer/bindings/modules/v8/v8_long_range.h"

#include "base/stl_util.h"
#include "third_party/blink/renderer/bindings/core/v8/idl_types.h"
#include "third_party/blink/renderer/bindings/core/v8/native_value_traits_impl.h"
#include "third_party/blink/renderer/platform/bindings/exception_state.h"

namespace blink {

static const v8::Eternal<v8::Name>* eternalV8LongRangeKeys(v8::Isolate* isolate) {
  static const char* const kKeys[] = {
    "max",
    "min",
  };
  return V8PerIsolateData::From(isolate)->FindOrCreateEternalNameCache(
      kKeys, kKeys, base::size(kKeys));
}

void V8LongRange::ToImpl(v8::Isolate* isolate, v8::Local<v8::Value> v8_value, LongRange* impl, ExceptionState& exception_state) {
  if (IsUndefinedOrNull(v8_value)) {
    return;
  }
  if (!v8_value->IsObject()) {
    exception_state.ThrowTypeError("cannot convert to dictionary.");
    return;
  }
  v8::Local<v8::Object> v8Object = v8_value.As<v8::Object>();
  ALLOW_UNUSED_LOCAL(v8Object);

  const v8::Eternal<v8::Name>* keys = eternalV8LongRangeKeys(isolate);
  v8::TryCatch block(isolate);
  v8::Local<v8::Context> context = isolate->GetCurrentContext();
  v8::Local<v8::Value> max_value;
  if (!v8Object->Get(context, keys[0].Get(isolate)).ToLocal(&max_value)) {
    exception_state.RethrowV8Exception(block.Exception());
    return;
  }
  if (max_value.IsEmpty() || max_value->IsUndefined()) {
    // Do nothing.
  } else {
    int32_t max_cpp_value = NativeValueTraits<IDLLong>::NativeValue(isolate, max_value, exception_state);
    if (exception_state.HadException())
      return;
    impl->setMax(max_cpp_value);
  }

  v8::Local<v8::Value> min_value;
  if (!v8Object->Get(context, keys[1].Get(isolate)).ToLocal(&min_value)) {
    exception_state.RethrowV8Exception(block.Exception());
    return;
  }
  if (min_value.IsEmpty() || min_value->IsUndefined()) {
    // Do nothing.
  } else {
    int32_t min_cpp_value = NativeValueTraits<IDLLong>::NativeValue(isolate, min_value, exception_state);
    if (exception_state.HadException())
      return;
    impl->setMin(min_cpp_value);
  }
}

v8::Local<v8::Value> LongRange::ToV8Impl(v8::Local<v8::Object> creationContext, v8::Isolate* isolate) const {
  v8::Local<v8::Object> v8Object = v8::Object::New(isolate);
  if (!toV8LongRange(this, v8Object, creationContext, isolate))
    return v8::Undefined(isolate);
  return v8Object;
}

bool toV8LongRange(const LongRange* impl, v8::Local<v8::Object> dictionary, v8::Local<v8::Object> creationContext, v8::Isolate* isolate) {
  const v8::Eternal<v8::Name>* keys = eternalV8LongRangeKeys(isolate);
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

  v8::Local<v8::Value> max_value;
  bool max_has_value_or_default = false;
  if (impl->hasMax()) {
    max_value = v8::Integer::New(isolate, impl->max());
    max_has_value_or_default = true;
  }
  if (max_has_value_or_default &&
      !create_property(0, max_value)) {
    return false;
  }

  v8::Local<v8::Value> min_value;
  bool min_has_value_or_default = false;
  if (impl->hasMin()) {
    min_value = v8::Integer::New(isolate, impl->min());
    min_has_value_or_default = true;
  }
  if (min_has_value_or_default &&
      !create_property(1, min_value)) {
    return false;
  }

  return true;
}

LongRange* NativeValueTraits<LongRange>::NativeValue(v8::Isolate* isolate, v8::Local<v8::Value> value, ExceptionState& exception_state) {
  LongRange* impl = LongRange::Create();
  V8LongRange::ToImpl(isolate, value, impl, exception_state);
  return impl;
}

}  // namespace blink
