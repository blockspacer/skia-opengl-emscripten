// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated from the Jinja2 template
// third_party/blink/renderer/bindings/templates/dictionary_v8.cc.tmpl
// by the script code_generator_v8.py.
// DO NOT MODIFY!

// clang-format off
#include "third_party/blink/renderer/bindings/modules/v8/v8_gpu_blend_descriptor.h"

#include "base/stl_util.h"
#include "third_party/blink/renderer/bindings/core/v8/idl_types.h"
#include "third_party/blink/renderer/bindings/core/v8/native_value_traits_impl.h"
#include "third_party/blink/renderer/platform/bindings/exception_state.h"

namespace blink {

static const v8::Eternal<v8::Name>* eternalV8GPUBlendDescriptorKeys(v8::Isolate* isolate) {
  static const char* const kKeys[] = {
    "dstFactor",
    "operation",
    "srcFactor",
  };
  return V8PerIsolateData::From(isolate)->FindOrCreateEternalNameCache(
      kKeys, kKeys, base::size(kKeys));
}

void V8GPUBlendDescriptor::ToImpl(v8::Isolate* isolate, v8::Local<v8::Value> v8_value, GPUBlendDescriptor* impl, ExceptionState& exception_state) {
  if (IsUndefinedOrNull(v8_value)) {
    return;
  }
  if (!v8_value->IsObject()) {
    exception_state.ThrowTypeError("cannot convert to dictionary.");
    return;
  }
  v8::Local<v8::Object> v8Object = v8_value.As<v8::Object>();
  ALLOW_UNUSED_LOCAL(v8Object);

  const v8::Eternal<v8::Name>* keys = eternalV8GPUBlendDescriptorKeys(isolate);
  v8::TryCatch block(isolate);
  v8::Local<v8::Context> context = isolate->GetCurrentContext();
  v8::Local<v8::Value> dst_factor_value;
  if (!v8Object->Get(context, keys[0].Get(isolate)).ToLocal(&dst_factor_value)) {
    exception_state.RethrowV8Exception(block.Exception());
    return;
  }
  if (dst_factor_value.IsEmpty() || dst_factor_value->IsUndefined()) {
    // Do nothing.
  } else {
    V8StringResource<> dst_factor_cpp_value = dst_factor_value;
    if (!dst_factor_cpp_value.Prepare(exception_state))
      return;
    const char* kValidValues[] = {
        "zero",
        "one",
        "src-color",
        "one-minus-src-color",
        "src-alpha",
        "one-minus-src-alpha",
        "dst-color",
        "one-minus-dst-color",
        "dst-alpha",
        "one-minus-dst-alpha",
        "src-alpha-saturated",
        "blend-color",
        "one-minus-blend-color",
    };
    if (!IsValidEnum(dst_factor_cpp_value, kValidValues, base::size(kValidValues), "GPUBlendFactor", exception_state))
      return;
    impl->setDstFactor(dst_factor_cpp_value);
  }

  v8::Local<v8::Value> operation_value;
  if (!v8Object->Get(context, keys[1].Get(isolate)).ToLocal(&operation_value)) {
    exception_state.RethrowV8Exception(block.Exception());
    return;
  }
  if (operation_value.IsEmpty() || operation_value->IsUndefined()) {
    // Do nothing.
  } else {
    V8StringResource<> operation_cpp_value = operation_value;
    if (!operation_cpp_value.Prepare(exception_state))
      return;
    const char* kValidValues[] = {
        "add",
        "subtract",
        "reverse-subtract",
        "min",
        "max",
    };
    if (!IsValidEnum(operation_cpp_value, kValidValues, base::size(kValidValues), "GPUBlendOperation", exception_state))
      return;
    impl->setOperation(operation_cpp_value);
  }

  v8::Local<v8::Value> src_factor_value;
  if (!v8Object->Get(context, keys[2].Get(isolate)).ToLocal(&src_factor_value)) {
    exception_state.RethrowV8Exception(block.Exception());
    return;
  }
  if (src_factor_value.IsEmpty() || src_factor_value->IsUndefined()) {
    // Do nothing.
  } else {
    V8StringResource<> src_factor_cpp_value = src_factor_value;
    if (!src_factor_cpp_value.Prepare(exception_state))
      return;
    const char* kValidValues[] = {
        "zero",
        "one",
        "src-color",
        "one-minus-src-color",
        "src-alpha",
        "one-minus-src-alpha",
        "dst-color",
        "one-minus-dst-color",
        "dst-alpha",
        "one-minus-dst-alpha",
        "src-alpha-saturated",
        "blend-color",
        "one-minus-blend-color",
    };
    if (!IsValidEnum(src_factor_cpp_value, kValidValues, base::size(kValidValues), "GPUBlendFactor", exception_state))
      return;
    impl->setSrcFactor(src_factor_cpp_value);
  }
}

v8::Local<v8::Value> GPUBlendDescriptor::ToV8Impl(v8::Local<v8::Object> creationContext, v8::Isolate* isolate) const {
  v8::Local<v8::Object> v8Object = v8::Object::New(isolate);
  if (!toV8GPUBlendDescriptor(this, v8Object, creationContext, isolate))
    return v8::Undefined(isolate);
  return v8Object;
}

bool toV8GPUBlendDescriptor(const GPUBlendDescriptor* impl, v8::Local<v8::Object> dictionary, v8::Local<v8::Object> creationContext, v8::Isolate* isolate) {
  const v8::Eternal<v8::Name>* keys = eternalV8GPUBlendDescriptorKeys(isolate);
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

  v8::Local<v8::Value> dst_factor_value;
  bool dst_factor_has_value_or_default = false;
  if (impl->hasDstFactor()) {
    dst_factor_value = V8String(isolate, impl->dstFactor());
    dst_factor_has_value_or_default = true;
  } else {
    dst_factor_value = V8String(isolate, "zero");
    dst_factor_has_value_or_default = true;
  }
  if (dst_factor_has_value_or_default &&
      !create_property(0, dst_factor_value)) {
    return false;
  }

  v8::Local<v8::Value> operation_value;
  bool operation_has_value_or_default = false;
  if (impl->hasOperation()) {
    operation_value = V8String(isolate, impl->operation());
    operation_has_value_or_default = true;
  } else {
    operation_value = V8String(isolate, "add");
    operation_has_value_or_default = true;
  }
  if (operation_has_value_or_default &&
      !create_property(1, operation_value)) {
    return false;
  }

  v8::Local<v8::Value> src_factor_value;
  bool src_factor_has_value_or_default = false;
  if (impl->hasSrcFactor()) {
    src_factor_value = V8String(isolate, impl->srcFactor());
    src_factor_has_value_or_default = true;
  } else {
    src_factor_value = V8String(isolate, "one");
    src_factor_has_value_or_default = true;
  }
  if (src_factor_has_value_or_default &&
      !create_property(2, src_factor_value)) {
    return false;
  }

  return true;
}

GPUBlendDescriptor* NativeValueTraits<GPUBlendDescriptor>::NativeValue(v8::Isolate* isolate, v8::Local<v8::Value> value, ExceptionState& exception_state) {
  GPUBlendDescriptor* impl = GPUBlendDescriptor::Create();
  V8GPUBlendDescriptor::ToImpl(isolate, value, impl, exception_state);
  return impl;
}

}  // namespace blink
