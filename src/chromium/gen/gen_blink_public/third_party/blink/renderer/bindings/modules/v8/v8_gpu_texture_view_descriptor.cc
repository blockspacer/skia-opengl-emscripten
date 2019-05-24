// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated from the Jinja2 template
// third_party/blink/renderer/bindings/templates/dictionary_v8.cc.tmpl
// by the script code_generator_v8.py.
// DO NOT MODIFY!

// clang-format off
#include "third_party/blink/renderer/bindings/modules/v8/v8_gpu_texture_view_descriptor.h"

#include "base/stl_util.h"
#include "third_party/blink/renderer/bindings/core/v8/idl_types.h"
#include "third_party/blink/renderer/bindings/core/v8/native_value_traits_impl.h"
#include "third_party/blink/renderer/platform/bindings/exception_state.h"

namespace blink {

static const v8::Eternal<v8::Name>* eternalV8GPUTextureViewDescriptorKeys(v8::Isolate* isolate) {
  static const char* const kKeys[] = {
    "arrayLayerCount",
    "aspect",
    "baseArrayLayer",
    "baseMipLevel",
    "dimension",
    "format",
    "mipLevelCount",
  };
  return V8PerIsolateData::From(isolate)->FindOrCreateEternalNameCache(
      kKeys, kKeys, base::size(kKeys));
}

void V8GPUTextureViewDescriptor::ToImpl(v8::Isolate* isolate, v8::Local<v8::Value> v8_value, GPUTextureViewDescriptor* impl, ExceptionState& exception_state) {
  if (IsUndefinedOrNull(v8_value)) {
    exception_state.ThrowTypeError("Missing required member(s): aspect, dimension, format.");
    return;
  }
  if (!v8_value->IsObject()) {
    exception_state.ThrowTypeError("cannot convert to dictionary.");
    return;
  }
  v8::Local<v8::Object> v8Object = v8_value.As<v8::Object>();
  ALLOW_UNUSED_LOCAL(v8Object);

  const v8::Eternal<v8::Name>* keys = eternalV8GPUTextureViewDescriptorKeys(isolate);
  v8::TryCatch block(isolate);
  v8::Local<v8::Context> context = isolate->GetCurrentContext();
  v8::Local<v8::Value> array_layer_count_value;
  if (!v8Object->Get(context, keys[0].Get(isolate)).ToLocal(&array_layer_count_value)) {
    exception_state.RethrowV8Exception(block.Exception());
    return;
  }
  if (array_layer_count_value.IsEmpty() || array_layer_count_value->IsUndefined()) {
    // Do nothing.
  } else {
    uint32_t array_layer_count_cpp_value = NativeValueTraits<IDLUnsignedLong>::NativeValue(isolate, array_layer_count_value, exception_state);
    if (exception_state.HadException())
      return;
    impl->setArrayLayerCount(array_layer_count_cpp_value);
  }

  v8::Local<v8::Value> aspect_value;
  if (!v8Object->Get(context, keys[1].Get(isolate)).ToLocal(&aspect_value)) {
    exception_state.RethrowV8Exception(block.Exception());
    return;
  }
  if (aspect_value.IsEmpty() || aspect_value->IsUndefined()) {
    exception_state.ThrowTypeError("required member aspect is undefined.");
    return;
  } else {
    V8StringResource<> aspect_cpp_value = aspect_value;
    if (!aspect_cpp_value.Prepare(exception_state))
      return;
    const char* kValidValues[] = {
        "all",
        "stencil-only",
        "depth-only",
    };
    if (!IsValidEnum(aspect_cpp_value, kValidValues, base::size(kValidValues), "GPUTextureAspect", exception_state))
      return;
    impl->setAspect(aspect_cpp_value);
  }

  v8::Local<v8::Value> base_array_layer_value;
  if (!v8Object->Get(context, keys[2].Get(isolate)).ToLocal(&base_array_layer_value)) {
    exception_state.RethrowV8Exception(block.Exception());
    return;
  }
  if (base_array_layer_value.IsEmpty() || base_array_layer_value->IsUndefined()) {
    // Do nothing.
  } else {
    uint32_t base_array_layer_cpp_value = NativeValueTraits<IDLUnsignedLong>::NativeValue(isolate, base_array_layer_value, exception_state);
    if (exception_state.HadException())
      return;
    impl->setBaseArrayLayer(base_array_layer_cpp_value);
  }

  v8::Local<v8::Value> base_mip_level_value;
  if (!v8Object->Get(context, keys[3].Get(isolate)).ToLocal(&base_mip_level_value)) {
    exception_state.RethrowV8Exception(block.Exception());
    return;
  }
  if (base_mip_level_value.IsEmpty() || base_mip_level_value->IsUndefined()) {
    // Do nothing.
  } else {
    uint32_t base_mip_level_cpp_value = NativeValueTraits<IDLUnsignedLong>::NativeValue(isolate, base_mip_level_value, exception_state);
    if (exception_state.HadException())
      return;
    impl->setBaseMipLevel(base_mip_level_cpp_value);
  }

  v8::Local<v8::Value> dimension_value;
  if (!v8Object->Get(context, keys[4].Get(isolate)).ToLocal(&dimension_value)) {
    exception_state.RethrowV8Exception(block.Exception());
    return;
  }
  if (dimension_value.IsEmpty() || dimension_value->IsUndefined()) {
    exception_state.ThrowTypeError("required member dimension is undefined.");
    return;
  } else {
    V8StringResource<> dimension_cpp_value = dimension_value;
    if (!dimension_cpp_value.Prepare(exception_state))
      return;
    const char* kValidValues[] = {
        "1d",
        "2d",
        "2d-array",
        "cube",
        "cube-array",
        "3d",
    };
    if (!IsValidEnum(dimension_cpp_value, kValidValues, base::size(kValidValues), "GPUTextureViewDimension", exception_state))
      return;
    impl->setDimension(dimension_cpp_value);
  }

  v8::Local<v8::Value> format_value;
  if (!v8Object->Get(context, keys[5].Get(isolate)).ToLocal(&format_value)) {
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

  v8::Local<v8::Value> mip_level_count_value;
  if (!v8Object->Get(context, keys[6].Get(isolate)).ToLocal(&mip_level_count_value)) {
    exception_state.RethrowV8Exception(block.Exception());
    return;
  }
  if (mip_level_count_value.IsEmpty() || mip_level_count_value->IsUndefined()) {
    // Do nothing.
  } else {
    uint32_t mip_level_count_cpp_value = NativeValueTraits<IDLUnsignedLong>::NativeValue(isolate, mip_level_count_value, exception_state);
    if (exception_state.HadException())
      return;
    impl->setMipLevelCount(mip_level_count_cpp_value);
  }
}

v8::Local<v8::Value> GPUTextureViewDescriptor::ToV8Impl(v8::Local<v8::Object> creationContext, v8::Isolate* isolate) const {
  v8::Local<v8::Object> v8Object = v8::Object::New(isolate);
  if (!toV8GPUTextureViewDescriptor(this, v8Object, creationContext, isolate))
    return v8::Undefined(isolate);
  return v8Object;
}

bool toV8GPUTextureViewDescriptor(const GPUTextureViewDescriptor* impl, v8::Local<v8::Object> dictionary, v8::Local<v8::Object> creationContext, v8::Isolate* isolate) {
  const v8::Eternal<v8::Name>* keys = eternalV8GPUTextureViewDescriptorKeys(isolate);
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

  v8::Local<v8::Value> array_layer_count_value;
  bool array_layer_count_has_value_or_default = false;
  if (impl->hasArrayLayerCount()) {
    array_layer_count_value = v8::Integer::NewFromUnsigned(isolate, impl->arrayLayerCount());
    array_layer_count_has_value_or_default = true;
  } else {
    array_layer_count_value = v8::Integer::NewFromUnsigned(isolate, 1u);
    array_layer_count_has_value_or_default = true;
  }
  if (array_layer_count_has_value_or_default &&
      !create_property(0, array_layer_count_value)) {
    return false;
  }

  v8::Local<v8::Value> aspect_value;
  bool aspect_has_value_or_default = false;
  if (impl->hasAspect()) {
    aspect_value = V8String(isolate, impl->aspect());
    aspect_has_value_or_default = true;
  } else {
    NOTREACHED();
  }
  if (aspect_has_value_or_default &&
      !create_property(1, aspect_value)) {
    return false;
  }

  v8::Local<v8::Value> base_array_layer_value;
  bool base_array_layer_has_value_or_default = false;
  if (impl->hasBaseArrayLayer()) {
    base_array_layer_value = v8::Integer::NewFromUnsigned(isolate, impl->baseArrayLayer());
    base_array_layer_has_value_or_default = true;
  } else {
    base_array_layer_value = v8::Integer::NewFromUnsigned(isolate, 0u);
    base_array_layer_has_value_or_default = true;
  }
  if (base_array_layer_has_value_or_default &&
      !create_property(2, base_array_layer_value)) {
    return false;
  }

  v8::Local<v8::Value> base_mip_level_value;
  bool base_mip_level_has_value_or_default = false;
  if (impl->hasBaseMipLevel()) {
    base_mip_level_value = v8::Integer::NewFromUnsigned(isolate, impl->baseMipLevel());
    base_mip_level_has_value_or_default = true;
  } else {
    base_mip_level_value = v8::Integer::NewFromUnsigned(isolate, 0u);
    base_mip_level_has_value_or_default = true;
  }
  if (base_mip_level_has_value_or_default &&
      !create_property(3, base_mip_level_value)) {
    return false;
  }

  v8::Local<v8::Value> dimension_value;
  bool dimension_has_value_or_default = false;
  if (impl->hasDimension()) {
    dimension_value = V8String(isolate, impl->dimension());
    dimension_has_value_or_default = true;
  } else {
    NOTREACHED();
  }
  if (dimension_has_value_or_default &&
      !create_property(4, dimension_value)) {
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
      !create_property(5, format_value)) {
    return false;
  }

  v8::Local<v8::Value> mip_level_count_value;
  bool mip_level_count_has_value_or_default = false;
  if (impl->hasMipLevelCount()) {
    mip_level_count_value = v8::Integer::NewFromUnsigned(isolate, impl->mipLevelCount());
    mip_level_count_has_value_or_default = true;
  } else {
    mip_level_count_value = v8::Integer::NewFromUnsigned(isolate, 1u);
    mip_level_count_has_value_or_default = true;
  }
  if (mip_level_count_has_value_or_default &&
      !create_property(6, mip_level_count_value)) {
    return false;
  }

  return true;
}

GPUTextureViewDescriptor* NativeValueTraits<GPUTextureViewDescriptor>::NativeValue(v8::Isolate* isolate, v8::Local<v8::Value> value, ExceptionState& exception_state) {
  GPUTextureViewDescriptor* impl = GPUTextureViewDescriptor::Create();
  V8GPUTextureViewDescriptor::ToImpl(isolate, value, impl, exception_state);
  return impl;
}

}  // namespace blink
