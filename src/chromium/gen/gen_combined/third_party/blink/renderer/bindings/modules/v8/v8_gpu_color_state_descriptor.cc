// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated from the Jinja2 template
// third_party/blink/renderer/bindings/templates/dictionary_v8.cc.tmpl
// by the script code_generator_v8.py.
// DO NOT MODIFY!

// clang-format off
#include "third_party/blink/renderer/bindings/modules/v8/v8_gpu_color_state_descriptor.h"

#include "base/stl_util.h"
#include "third_party/blink/renderer/bindings/core/v8/idl_types.h"
#include "third_party/blink/renderer/bindings/core/v8/native_value_traits_impl.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_gpu_blend_descriptor.h"
#include "third_party/blink/renderer/platform/bindings/exception_state.h"

namespace blink {

static const v8::Eternal<v8::Name>* eternalV8GPUColorStateDescriptorKeys(v8::Isolate* isolate) {
  static const char* const kKeys[] = {
    "alphaBlend",
    "colorBlend",
    "format",
    "writeMask",
  };
  return V8PerIsolateData::From(isolate)->FindOrCreateEternalNameCache(
      kKeys, kKeys, base::size(kKeys));
}

void V8GPUColorStateDescriptor::ToImpl(v8::Isolate* isolate, v8::Local<v8::Value> v8_value, GPUColorStateDescriptor* impl, ExceptionState& exception_state) {
  if (IsUndefinedOrNull(v8_value)) {
    exception_state.ThrowTypeError("Missing required member(s): alphaBlend, colorBlend, format.");
    return;
  }
  if (!v8_value->IsObject()) {
    exception_state.ThrowTypeError("cannot convert to dictionary.");
    return;
  }
  v8::Local<v8::Object> v8Object = v8_value.As<v8::Object>();
  ALLOW_UNUSED_LOCAL(v8Object);

  const v8::Eternal<v8::Name>* keys = eternalV8GPUColorStateDescriptorKeys(isolate);
  v8::TryCatch block(isolate);
  v8::Local<v8::Context> context = isolate->GetCurrentContext();
  v8::Local<v8::Value> alpha_blend_value;
  if (!v8Object->Get(context, keys[0].Get(isolate)).ToLocal(&alpha_blend_value)) {
    exception_state.RethrowV8Exception(block.Exception());
    return;
  }
  if (alpha_blend_value.IsEmpty() || alpha_blend_value->IsUndefined()) {
    exception_state.ThrowTypeError("required member alphaBlend is undefined.");
    return;
  } else {
    GPUBlendDescriptor* alpha_blend_cpp_value = NativeValueTraits<GPUBlendDescriptor>::NativeValue(isolate, alpha_blend_value, exception_state);
    if (exception_state.HadException())
      return;
    impl->setAlphaBlend(alpha_blend_cpp_value);
  }

  v8::Local<v8::Value> color_blend_value;
  if (!v8Object->Get(context, keys[1].Get(isolate)).ToLocal(&color_blend_value)) {
    exception_state.RethrowV8Exception(block.Exception());
    return;
  }
  if (color_blend_value.IsEmpty() || color_blend_value->IsUndefined()) {
    exception_state.ThrowTypeError("required member colorBlend is undefined.");
    return;
  } else {
    GPUBlendDescriptor* color_blend_cpp_value = NativeValueTraits<GPUBlendDescriptor>::NativeValue(isolate, color_blend_value, exception_state);
    if (exception_state.HadException())
      return;
    impl->setColorBlend(color_blend_cpp_value);
  }

  v8::Local<v8::Value> format_value;
  if (!v8Object->Get(context, keys[2].Get(isolate)).ToLocal(&format_value)) {
    exception_state.RethrowV8Exception(block.Exception());
    return;
  }
  if (format_value.IsEmpty() || format_value->IsUndefined()) {
    exception_state.ThrowTypeError("required member format is undefined.");
    return;
  } else {
    V8StringResource<> format_cpp_value = format_value;
    if (!format_cpp_value.Prepare(exception_state))
      return;
    const char* kValidValues[] = {
        "r8unorm",
        "r8unorm-srgb",
        "r8snorm",
        "r8uint",
        "r8sint",
        "r16unorm",
        "r16snorm",
        "r16uint",
        "r16sint",
        "r16float",
        "rg8unorm",
        "rg8unorm-srgb",
        "rg8snorm",
        "rg8uint",
        "rg8sint",
        "b5g6r5unorm",
        "r32uint",
        "r32sint",
        "r32float",
        "rg16unorm",
        "rg16snorm",
        "rg16uint",
        "rg16sint",
        "rg16float",
        "rgba8unorm",
        "rgba8unorm-srgb",
        "rgba8snorm",
        "rgba8uint",
        "rgba8sint",
        "bgra8unorm",
        "bgra8unorm-srgb",
        "rgb10a2unorm",
        "rg11b10float",
        "rg32uint",
        "rg32sint",
        "rg32float",
        "rgba16unorm",
        "rgba16snorm",
        "rgba16uint",
        "rgba16sint",
        "rgba16float",
        "rgba32uint",
        "rgba32sint",
        "rgba32float",
        "depth32float",
        "depth32float-stencil8",
    };
    if (!IsValidEnum(format_cpp_value, kValidValues, base::size(kValidValues), "GPUTextureFormat", exception_state))
      return;
    impl->setFormat(format_cpp_value);
  }

  v8::Local<v8::Value> write_mask_value;
  if (!v8Object->Get(context, keys[3].Get(isolate)).ToLocal(&write_mask_value)) {
    exception_state.RethrowV8Exception(block.Exception());
    return;
  }
  if (write_mask_value.IsEmpty() || write_mask_value->IsUndefined()) {
    // Do nothing.
  } else {
    uint32_t write_mask_cpp_value = NativeValueTraits<IDLUnsignedLong>::NativeValue(isolate, write_mask_value, exception_state);
    if (exception_state.HadException())
      return;
    impl->setWriteMask(write_mask_cpp_value);
  }
}

v8::Local<v8::Value> GPUColorStateDescriptor::ToV8Impl(v8::Local<v8::Object> creationContext, v8::Isolate* isolate) const {
  v8::Local<v8::Object> v8Object = v8::Object::New(isolate);
  if (!toV8GPUColorStateDescriptor(this, v8Object, creationContext, isolate))
    return v8::Undefined(isolate);
  return v8Object;
}

bool toV8GPUColorStateDescriptor(const GPUColorStateDescriptor* impl, v8::Local<v8::Object> dictionary, v8::Local<v8::Object> creationContext, v8::Isolate* isolate) {
  const v8::Eternal<v8::Name>* keys = eternalV8GPUColorStateDescriptorKeys(isolate);
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

  v8::Local<v8::Value> alpha_blend_value;
  bool alpha_blend_has_value_or_default = false;
  if (impl->hasAlphaBlend()) {
    alpha_blend_value = ToV8(impl->alphaBlend(), creationContext, isolate);
    alpha_blend_has_value_or_default = true;
  } else {
    NOTREACHED();
  }
  if (alpha_blend_has_value_or_default &&
      !create_property(0, alpha_blend_value)) {
    return false;
  }

  v8::Local<v8::Value> color_blend_value;
  bool color_blend_has_value_or_default = false;
  if (impl->hasColorBlend()) {
    color_blend_value = ToV8(impl->colorBlend(), creationContext, isolate);
    color_blend_has_value_or_default = true;
  } else {
    NOTREACHED();
  }
  if (color_blend_has_value_or_default &&
      !create_property(1, color_blend_value)) {
    return false;
  }

  v8::Local<v8::Value> format_value;
  bool format_has_value_or_default = false;
  if (impl->hasFormat()) {
    format_value = V8String(isolate, impl->format());
    format_has_value_or_default = true;
  } else {
    NOTREACHED();
  }
  if (format_has_value_or_default &&
      !create_property(2, format_value)) {
    return false;
  }

  v8::Local<v8::Value> write_mask_value;
  bool write_mask_has_value_or_default = false;
  if (impl->hasWriteMask()) {
    write_mask_value = v8::Integer::NewFromUnsigned(isolate, impl->writeMask());
    write_mask_has_value_or_default = true;
  } else {
    write_mask_value = v8::Integer::NewFromUnsigned(isolate, 15u);
    write_mask_has_value_or_default = true;
  }
  if (write_mask_has_value_or_default &&
      !create_property(3, write_mask_value)) {
    return false;
  }

  return true;
}

GPUColorStateDescriptor* NativeValueTraits<GPUColorStateDescriptor>::NativeValue(v8::Isolate* isolate, v8::Local<v8::Value> value, ExceptionState& exception_state) {
  GPUColorStateDescriptor* impl = GPUColorStateDescriptor::Create();
  V8GPUColorStateDescriptor::ToImpl(isolate, value, impl, exception_state);
  return impl;
}

}  // namespace blink