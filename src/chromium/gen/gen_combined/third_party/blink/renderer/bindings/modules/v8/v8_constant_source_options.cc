// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated from the Jinja2 template
// third_party/blink/renderer/bindings/templates/dictionary_v8.cc.tmpl
// by the script code_generator_v8.py.
// DO NOT MODIFY!

// clang-format off
#include "third_party/blink/renderer/bindings/modules/v8/v8_constant_source_options.h"

#include "base/stl_util.h"
#include "third_party/blink/renderer/bindings/core/v8/idl_types.h"
#include "third_party/blink/renderer/bindings/core/v8/native_value_traits_impl.h"
#include "third_party/blink/renderer/platform/bindings/exception_state.h"

namespace blink {

static const v8::Eternal<v8::Name>* eternalV8ConstantSourceOptionsKeys(v8::Isolate* isolate) {
  static const char* const kKeys[] = {
    "offset",
  };
  return V8PerIsolateData::From(isolate)->FindOrCreateEternalNameCache(
      kKeys, kKeys, base::size(kKeys));
}

void V8ConstantSourceOptions::ToImpl(v8::Isolate* isolate, v8::Local<v8::Value> v8_value, ConstantSourceOptions* impl, ExceptionState& exception_state) {
  if (IsUndefinedOrNull(v8_value)) {
    return;
  }
  if (!v8_value->IsObject()) {
    exception_state.ThrowTypeError("cannot convert to dictionary.");
    return;
  }
  v8::Local<v8::Object> v8Object = v8_value.As<v8::Object>();
  ALLOW_UNUSED_LOCAL(v8Object);

  const v8::Eternal<v8::Name>* keys = eternalV8ConstantSourceOptionsKeys(isolate);
  v8::TryCatch block(isolate);
  v8::Local<v8::Context> context = isolate->GetCurrentContext();
  v8::Local<v8::Value> offset_value;
  if (!v8Object->Get(context, keys[0].Get(isolate)).ToLocal(&offset_value)) {
    exception_state.RethrowV8Exception(block.Exception());
    return;
  }
  if (offset_value.IsEmpty() || offset_value->IsUndefined()) {
    // Do nothing.
  } else {
    float offset_cpp_value = NativeValueTraits<IDLFloat>::NativeValue(isolate, offset_value, exception_state);
    if (exception_state.HadException())
      return;
    impl->setOffset(offset_cpp_value);
  }
}

v8::Local<v8::Value> ConstantSourceOptions::ToV8Impl(v8::Local<v8::Object> creationContext, v8::Isolate* isolate) const {
  v8::Local<v8::Object> v8Object = v8::Object::New(isolate);
  if (!toV8ConstantSourceOptions(this, v8Object, creationContext, isolate))
    return v8::Undefined(isolate);
  return v8Object;
}

bool toV8ConstantSourceOptions(const ConstantSourceOptions* impl, v8::Local<v8::Object> dictionary, v8::Local<v8::Object> creationContext, v8::Isolate* isolate) {
  const v8::Eternal<v8::Name>* keys = eternalV8ConstantSourceOptionsKeys(isolate);
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

  v8::Local<v8::Value> offset_value;
  bool offset_has_value_or_default = false;
  if (impl->hasOffset()) {
    offset_value = v8::Number::New(isolate, impl->offset());
    offset_has_value_or_default = true;
  } else {
    offset_value = v8::Number::New(isolate, 1);
    offset_has_value_or_default = true;
  }
  if (offset_has_value_or_default &&
      !create_property(0, offset_value)) {
    return false;
  }

  return true;
}

ConstantSourceOptions* NativeValueTraits<ConstantSourceOptions>::NativeValue(v8::Isolate* isolate, v8::Local<v8::Value> value, ExceptionState& exception_state) {
  ConstantSourceOptions* impl = ConstantSourceOptions::Create();
  V8ConstantSourceOptions::ToImpl(isolate, value, impl, exception_state);
  return impl;
}

}  // namespace blink
