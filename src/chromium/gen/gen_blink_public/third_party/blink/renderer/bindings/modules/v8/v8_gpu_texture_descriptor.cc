// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated from the Jinja2 template
// third_party/blink/renderer/bindings/templates/dictionary_v8.cc.tmpl
// by the script code_generator_v8.py.
// DO NOT MODIFY!

// clang-format off
#include "third_party/blink/renderer/bindings/modules/v8/v8_gpu_texture_descriptor.h"

#include "base/stl_util.h"
#include "third_party/blink/renderer/bindings/core/v8/idl_types.h"
#include "third_party/blink/renderer/bindings/core/v8/native_value_traits_impl.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_gpu_extent_3d.h"
#include "third_party/blink/renderer/platform/bindings/exception_state.h"

namespace blink {

static const v8::Eternal<v8::Name>* eternalV8GPUTextureDescriptorKeys(v8::Isolate* isolate) {
  static const char* const kKeys[] = {
    "arrayLayerCount",
    "dimension",
    "format",
    "mipLevelCount",
    "sampleCount",
    "size",
    "usage",
  };
  return V8PerIsolateData::From(isolate)->FindOrCreateEternalNameCache(
      kKeys, kKeys, base::size(kKeys));
}

void V8GPUTextureDescriptor::ToImpl(v8::Isolate* isolate, v8::Local<v8::Value> v8_value, GPUTextureDescriptor* impl, ExceptionState& exception_state) {
  if (IsUndefinedOrNull(v8_value)) {
    exception_state.ThrowTypeError("Missing required member(s): format, usage.");
    return;
  }
  if (!v8_value->IsObject()) {
    exception_state.ThrowTypeError("cannot convert to dictionary.");
    return;
  }
  v8::Local<v8::Object> v8Object = v8_value.As<v8::Object>();
  ALLOW_UNUSED_LOCAL(v8Object);

  const v8::Eternal<v8::Name>* keys = eternalV8GPUTextureDescriptorKeys(isolate);
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

  v8::Local<v8::Value> dimension_value;
  if (!v8Object->Get(context, keys[1].Get(isolate)).ToLocal(&dimension_value)) {
    exception_state.RethrowV8Exception(block.Exception());
    return;
  }
  if (dimension_value.IsEmpty() || dimension_value->IsUndefined()) {
    // Do nothing.
  } else {
    V8StringResource<> dimension_cpp_value = dimension_value;
    if (!dimension_cpp_value.Prepare(exception_state))
      return;
    const char* kValidValues[] = {
        "1d",
        "2d",
        "3d",
    };
    if (!IsValidEnum(dimension_cpp_value, kValidValues, base::size(kValidValues), "GPUTextureDimension", exception_state))
      return;
    impl->setDimension(dimension_cpp_value);
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

  v8::Local<v8::Value> mip_level_count_value;
  if (!v8Object->Get(context, keys[3].Get(isolate)).ToLocal(&mip_level_count_value)) {
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

  v8::Local<v8::Value> sample_count_value;
  if (!v8Object->Get(context, keys[4].Get(isolate)).ToLocal(&sample_count_value)) {
    exception_state.RethrowV8Exception(block.Exception());
    return;
  }
  if (sample_count_value.IsEmpty() || sample_count_value->IsUndefined()) {
    // Do nothing.
  } else {
    uint32_t sample_count_cpp_value = NativeValueTraits<IDLUnsignedLong>::NativeValue(isolate, sample_count_value, exception_state);
    if (exception_state.HadException())
      return;
    impl->setSampleCount(sample_count_cpp_value);
  }

  v8::Local<v8::Value> size_value;
  if (!v8Object->Get(context, keys[5].Get(isolate)).ToLocal(&size_value)) {
    exception_state.RethrowV8Exception(block.Exception());
    return;
  }
  if (size_value.IsEmpty() || size_value->IsUndefined()) {
    // Do nothing.
  } else {
    GPUExtent3D* size_cpp_value = NativeValueTraits<GPUExtent3D>::NativeValue(isolate, size_value, exception_state);
    if (exception_state.HadException())
      return;
    impl->setSize(size_cpp_value);
  }

  v8::Local<v8::Value> usage_value;
  if (!v8Object->Get(context, keys[6].Get(isolate)).ToLocal(&usage_value)) {
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

v8::Local<v8::Value> GPUTextureDescriptor::ToV8Impl(v8::Local<v8::Object> creationContext, v8::Isolate* isolate) const {
  v8::Local<v8::Object> v8Object = v8::Object::New(isolate);
  if (!toV8GPUTextureDescriptor(this, v8Object, creationContext, isolate))
    return v8::Undefined(isolate);
  return v8Object;
}

bool toV8GPUTextureDescriptor(const GPUTextureDescriptor* impl, v8::Local<v8::Object> dictionary, v8::Local<v8::Object> creationContext, v8::Isolate* isolate) {
  const v8::Eternal<v8::Name>* keys = eternalV8GPUTextureDescriptorKeys(isolate);
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

  v8::Local<v8::Value> dimension_value;
  bool dimension_has_value_or_default = false;
  if (impl->hasDimension()) {
    dimension_value = V8String(isolate, impl->dimension());
    dimension_has_value_or_default = true;
  } else {
    dimension_value = V8String(isolate, "2d");
    dimension_has_value_or_default = true;
  }
  if (dimension_has_value_or_default &&
      !create_property(1, dimension_value)) {
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
      !create_property(3, mip_level_count_value)) {
    return false;
  }

  v8::Local<v8::Value> sample_count_value;
  bool sample_count_has_value_or_default = false;
  if (impl->hasSampleCount()) {
    sample_count_value = v8::Integer::NewFromUnsigned(isolate, impl->sampleCount());
    sample_count_has_value_or_default = true;
  } else {
    sample_count_value = v8::Integer::NewFromUnsigned(isolate, 1u);
    sample_count_has_value_or_default = true;
  }
  if (sample_count_has_value_or_default &&
      !create_property(4, sample_count_value)) {
    return false;
  }

  v8::Local<v8::Value> size_value;
  bool size_has_value_or_default = false;
  if (impl->hasSize()) {
    size_value = ToV8(impl->size(), creationContext, isolate);
    size_has_value_or_default = true;
  }
  if (size_has_value_or_default &&
      !create_property(5, size_value)) {
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
      !create_property(6, usage_value)) {
    return false;
  }

  return true;
}

GPUTextureDescriptor* NativeValueTraits<GPUTextureDescriptor>::NativeValue(v8::Isolate* isolate, v8::Local<v8::Value> value, ExceptionState& exception_state) {
  GPUTextureDescriptor* impl = GPUTextureDescriptor::Create();
  V8GPUTextureDescriptor::ToImpl(isolate, value, impl, exception_state);
  return impl;
}

}  // namespace blink
