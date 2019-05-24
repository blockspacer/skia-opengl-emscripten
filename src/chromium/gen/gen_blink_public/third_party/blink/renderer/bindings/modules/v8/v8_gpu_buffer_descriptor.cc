// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated from the Jinja2 template
// third_party/blink/renderer/bindings/templates/dictionary_v8.cc.tmpl
// by the script code_generator_v8.py.
// DO NOT MODIFY!

// clang-format off
#include "third_party/blink/renderer/bindings/modules/v8/v8_gpu_buffer_descriptor.h"

#include "base/stl_util.h"
#include "third_party/blink/renderer/bindings/core/v8/idl_types.h"
#include "third_party/blink/renderer/bindings/core/v8/native_value_traits_impl.h"
#include "third_party/blink/renderer/platform/bindings/exception_state.h"

namespace blink {

static const v8::Eternal<v8::Name>* eternalV8GPUBufferDescriptorKeys(v8::Isolate* isolate) {
  static const char* const kKeys[] = {
    "size",
    "usage",
  };
  return V8PerIsolateData::From(isolate)->FindOrCreateEternalNameCache(
      kKeys, kKeys, base::size(kKeys));
}

void V8GPUBufferDescriptor::ToImpl(v8::Isolate* isolate, v8::Local<v8::Value> v8_value, GPUBufferDescriptor* impl, ExceptionState& exception_state) {
  if (IsUndefinedOrNull(v8_value)) {
    exception_state.ThrowTypeError("Missing required member(s): size, usage.");
    return;
  }
  if (!v8_value->IsObject()) {
    exception_state.ThrowTypeError("cannot convert to dictionary.");
    return;
  }
  v8::Local<v8::Object> v8Object = v8_value.As<v8::Object>();
  ALLOW_UNUSED_LOCAL(v8Object);

  const v8::Eternal<v8::Name>* keys = eternalV8GPUBufferDescriptorKeys(isolate);
  v8::TryCatch block(isolate);
  v8::Local<v8::Context> context = isolate->GetCurrentContext();
  v8::Local<v8::Value> size_value;
  if (!v8Object->Get(context, keys[0].Get(isolate)).ToLocal(&size_value)) {
    exception_state.RethrowV8Exception(block.Exception());
    return;
  }
  if (size_value.IsEmpty() || size_value->IsUndefined()) {
    exception_state.ThrowTypeError("required member size is undefined.");
    return;
  } else {
    uint64_t size_cpp_value = NativeValueTraits<IDLUnsignedLongLong>::NativeValue(isolate, size_value, exception_state);
    if (exception_state.HadException())
      return;
    impl->setSize(size_cpp_value);
  }

  v8::Local<v8::Value> usage_value;
  if (!v8Object->Get(context, keys[1].Get(isolate)).ToLocal(&usage_value)) {
    exception_state.RethrowV8Exception(block.Exception());
    return;
  }
  if (usage_value.IsEmpty() || usage_value->IsUndefined()) {
    exception_state.ThrowTypeError("required member usage is undefined.");
    return;
  } else {
    uint32_t usage_cpp_value = NativeValueTraits<IDLUnsignedLong>::NativeValue(isolate, usage_value, exception_state);
    if (exception_state.HadException())
      return;
    impl->setUsage(usage_cpp_value);
  }
}

v8::Local<v8::Value> GPUBufferDescriptor::ToV8Impl(v8::Local<v8::Object> creationContext, v8::Isolate* isolate) const {
  v8::Local<v8::Object> v8Object = v8::Object::New(isolate);
  if (!toV8GPUBufferDescriptor(this, v8Object, creationContext, isolate))
    return v8::Undefined(isolate);
  return v8Object;
}

bool toV8GPUBufferDescriptor(const GPUBufferDescriptor* impl, v8::Local<v8::Object> dictionary, v8::Local<v8::Object> creationContext, v8::Isolate* isolate) {
  const v8::Eternal<v8::Name>* keys = eternalV8GPUBufferDescriptorKeys(isolate);
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

  v8::Local<v8::Value> size_value;
  bool size_has_value_or_default = false;
  if (impl->hasSize()) {
    size_value = v8::Number::New(isolate, static_cast<double>(impl->size()));
    size_has_value_or_default = true;
  } else {
    NOTREACHED();
  }
  if (size_has_value_or_default &&
      !create_property(0, size_value)) {
    return false;
  }

  v8::Local<v8::Value> usage_value;
  bool usage_has_value_or_default = false;
  if (impl->hasUsage()) {
    usage_value = v8::Integer::NewFromUnsigned(isolate, impl->usage());
    usage_has_value_or_default = true;
  } else {
    NOTREACHED();
  }
  if (usage_has_value_or_default &&
      !create_property(1, usage_value)) {
    return false;
  }

  return true;
}

GPUBufferDescriptor* NativeValueTraits<GPUBufferDescriptor>::NativeValue(v8::Isolate* isolate, v8::Local<v8::Value> value, ExceptionState& exception_state) {
  GPUBufferDescriptor* impl = GPUBufferDescriptor::Create();
  V8GPUBufferDescriptor::ToImpl(isolate, value, impl, exception_state);
  return impl;
}

}  // namespace blink
