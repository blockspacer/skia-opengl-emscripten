// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated from the Jinja2 template
// third_party/blink/renderer/bindings/templates/dictionary_v8.cc.tmpl
// by the script code_generator_v8.py.
// DO NOT MODIFY!

// clang-format off
#include "third_party/blink/renderer/bindings/modules/v8/v8_gpu_fence_descriptor.h"

#include "base/stl_util.h"
#include "third_party/blink/renderer/bindings/core/v8/idl_types.h"
#include "third_party/blink/renderer/bindings/core/v8/native_value_traits_impl.h"
#include "third_party/blink/renderer/platform/bindings/exception_state.h"

namespace blink {

static const v8::Eternal<v8::Name>* eternalV8GPUFenceDescriptorKeys(v8::Isolate* isolate) {
  static const char* const kKeys[] = {
    "initialValue",
  };
  return V8PerIsolateData::From(isolate)->FindOrCreateEternalNameCache(
      kKeys, kKeys, base::size(kKeys));
}

void V8GPUFenceDescriptor::ToImpl(v8::Isolate* isolate, v8::Local<v8::Value> v8_value, GPUFenceDescriptor* impl, ExceptionState& exception_state) {
  if (IsUndefinedOrNull(v8_value)) {
    return;
  }
  if (!v8_value->IsObject()) {
    exception_state.ThrowTypeError("cannot convert to dictionary.");
    return;
  }
  v8::Local<v8::Object> v8Object = v8_value.As<v8::Object>();
  ALLOW_UNUSED_LOCAL(v8Object);

  const v8::Eternal<v8::Name>* keys = eternalV8GPUFenceDescriptorKeys(isolate);
  v8::TryCatch block(isolate);
  v8::Local<v8::Context> context = isolate->GetCurrentContext();
  v8::Local<v8::Value> initial_value_value;
  if (!v8Object->Get(context, keys[0].Get(isolate)).ToLocal(&initial_value_value)) {
    exception_state.RethrowV8Exception(block.Exception());
    return;
  }
  if (initial_value_value.IsEmpty() || initial_value_value->IsUndefined()) {
    // Do nothing.
  } else {
    uint64_t initial_value_cpp_value = NativeValueTraits<IDLUnsignedLongLong>::NativeValue(isolate, initial_value_value, exception_state);
    if (exception_state.HadException())
      return;
    impl->setInitialValue(initial_value_cpp_value);
  }
}

v8::Local<v8::Value> GPUFenceDescriptor::ToV8Impl(v8::Local<v8::Object> creationContext, v8::Isolate* isolate) const {
  v8::Local<v8::Object> v8Object = v8::Object::New(isolate);
  if (!toV8GPUFenceDescriptor(this, v8Object, creationContext, isolate))
    return v8::Undefined(isolate);
  return v8Object;
}

bool toV8GPUFenceDescriptor(const GPUFenceDescriptor* impl, v8::Local<v8::Object> dictionary, v8::Local<v8::Object> creationContext, v8::Isolate* isolate) {
  const v8::Eternal<v8::Name>* keys = eternalV8GPUFenceDescriptorKeys(isolate);
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

  v8::Local<v8::Value> initial_value_value;
  bool initial_value_has_value_or_default = false;
  if (impl->hasInitialValue()) {
    initial_value_value = v8::Number::New(isolate, static_cast<double>(impl->initialValue()));
    initial_value_has_value_or_default = true;
  } else {
    initial_value_value = v8::Number::New(isolate, static_cast<double>(0));
    initial_value_has_value_or_default = true;
  }
  if (initial_value_has_value_or_default &&
      !create_property(0, initial_value_value)) {
    return false;
  }

  return true;
}

GPUFenceDescriptor* NativeValueTraits<GPUFenceDescriptor>::NativeValue(v8::Isolate* isolate, v8::Local<v8::Value> value, ExceptionState& exception_state) {
  GPUFenceDescriptor* impl = GPUFenceDescriptor::Create();
  V8GPUFenceDescriptor::ToImpl(isolate, value, impl, exception_state);
  return impl;
}

}  // namespace blink
