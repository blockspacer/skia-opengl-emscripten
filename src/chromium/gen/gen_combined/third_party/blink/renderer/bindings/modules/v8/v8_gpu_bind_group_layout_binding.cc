// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated from the Jinja2 template
// third_party/blink/renderer/bindings/templates/dictionary_v8.cc.tmpl
// by the script code_generator_v8.py.
// DO NOT MODIFY!

// clang-format off
#include "third_party/blink/renderer/bindings/modules/v8/v8_gpu_bind_group_layout_binding.h"

#include "base/stl_util.h"
#include "third_party/blink/renderer/bindings/core/v8/idl_types.h"
#include "third_party/blink/renderer/bindings/core/v8/native_value_traits_impl.h"
#include "third_party/blink/renderer/platform/bindings/exception_state.h"

namespace blink {

static const v8::Eternal<v8::Name>* eternalV8GPUBindGroupLayoutBindingKeys(v8::Isolate* isolate) {
  static const char* const kKeys[] = {
    "binding",
    "type",
    "visibility",
  };
  return V8PerIsolateData::From(isolate)->FindOrCreateEternalNameCache(
      kKeys, kKeys, base::size(kKeys));
}

void V8GPUBindGroupLayoutBinding::ToImpl(v8::Isolate* isolate, v8::Local<v8::Value> v8_value, GPUBindGroupLayoutBinding* impl, ExceptionState& exception_state) {
  if (IsUndefinedOrNull(v8_value)) {
    exception_state.ThrowTypeError("Missing required member(s): binding, type, visibility.");
    return;
  }
  if (!v8_value->IsObject()) {
    exception_state.ThrowTypeError("cannot convert to dictionary.");
    return;
  }
  v8::Local<v8::Object> v8Object = v8_value.As<v8::Object>();
  ALLOW_UNUSED_LOCAL(v8Object);

  const v8::Eternal<v8::Name>* keys = eternalV8GPUBindGroupLayoutBindingKeys(isolate);
  v8::TryCatch block(isolate);
  v8::Local<v8::Context> context = isolate->GetCurrentContext();
  v8::Local<v8::Value> binding_value;
  if (!v8Object->Get(context, keys[0].Get(isolate)).ToLocal(&binding_value)) {
    exception_state.RethrowV8Exception(block.Exception());
    return;
  }
  if (binding_value.IsEmpty() || binding_value->IsUndefined()) {
    exception_state.ThrowTypeError("required member binding is undefined.");
    return;
  } else {
    uint32_t binding_cpp_value = NativeValueTraits<IDLUnsignedLong>::NativeValue(isolate, binding_value, exception_state);
    if (exception_state.HadException())
      return;
    impl->setBinding(binding_cpp_value);
  }

  v8::Local<v8::Value> type_value;
  if (!v8Object->Get(context, keys[1].Get(isolate)).ToLocal(&type_value)) {
    exception_state.RethrowV8Exception(block.Exception());
    return;
  }
  if (type_value.IsEmpty() || type_value->IsUndefined()) {
    exception_state.ThrowTypeError("required member type is undefined.");
    return;
  } else {
    V8StringResource<> type_cpp_value = type_value;
    if (!type_cpp_value.Prepare(exception_state))
      return;
    const char* kValidValues[] = {
        "uniform-buffer",
        "dynamic-uniform-buffer",
        "sampler",
        "sampled-texture",
        "storage-buffer",
        "dynamic-storage-buffer",
    };
    if (!IsValidEnum(type_cpp_value, kValidValues, base::size(kValidValues), "GPUBindingType", exception_state))
      return;
    impl->setType(type_cpp_value);
  }

  v8::Local<v8::Value> visibility_value;
  if (!v8Object->Get(context, keys[2].Get(isolate)).ToLocal(&visibility_value)) {
    exception_state.RethrowV8Exception(block.Exception());
    return;
  }
  if (visibility_value.IsEmpty() || visibility_value->IsUndefined()) {
    exception_state.ThrowTypeError("required member visibility is undefined.");
    return;
  } else {
    uint32_t visibility_cpp_value = NativeValueTraits<IDLUnsignedLong>::NativeValue(isolate, visibility_value, exception_state);
    if (exception_state.HadException())
      return;
    impl->setVisibility(visibility_cpp_value);
  }
}

v8::Local<v8::Value> GPUBindGroupLayoutBinding::ToV8Impl(v8::Local<v8::Object> creationContext, v8::Isolate* isolate) const {
  v8::Local<v8::Object> v8Object = v8::Object::New(isolate);
  if (!toV8GPUBindGroupLayoutBinding(this, v8Object, creationContext, isolate))
    return v8::Undefined(isolate);
  return v8Object;
}

bool toV8GPUBindGroupLayoutBinding(const GPUBindGroupLayoutBinding* impl, v8::Local<v8::Object> dictionary, v8::Local<v8::Object> creationContext, v8::Isolate* isolate) {
  const v8::Eternal<v8::Name>* keys = eternalV8GPUBindGroupLayoutBindingKeys(isolate);
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

  v8::Local<v8::Value> binding_value;
  bool binding_has_value_or_default = false;
  if (impl->hasBinding()) {
    binding_value = v8::Integer::NewFromUnsigned(isolate, impl->binding());
    binding_has_value_or_default = true;
  } else {
    NOTREACHED();
  }
  if (binding_has_value_or_default &&
      !create_property(0, binding_value)) {
    return false;
  }

  v8::Local<v8::Value> type_value;
  bool type_has_value_or_default = false;
  if (impl->hasType()) {
    type_value = V8String(isolate, impl->type());
    type_has_value_or_default = true;
  } else {
    NOTREACHED();
  }
  if (type_has_value_or_default &&
      !create_property(1, type_value)) {
    return false;
  }

  v8::Local<v8::Value> visibility_value;
  bool visibility_has_value_or_default = false;
  if (impl->hasVisibility()) {
    visibility_value = v8::Integer::NewFromUnsigned(isolate, impl->visibility());
    visibility_has_value_or_default = true;
  } else {
    NOTREACHED();
  }
  if (visibility_has_value_or_default &&
      !create_property(2, visibility_value)) {
    return false;
  }

  return true;
}

GPUBindGroupLayoutBinding* NativeValueTraits<GPUBindGroupLayoutBinding>::NativeValue(v8::Isolate* isolate, v8::Local<v8::Value> value, ExceptionState& exception_state) {
  GPUBindGroupLayoutBinding* impl = GPUBindGroupLayoutBinding::Create();
  V8GPUBindGroupLayoutBinding::ToImpl(isolate, value, impl, exception_state);
  return impl;
}

}  // namespace blink
