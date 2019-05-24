// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated from the Jinja2 template
// third_party/blink/renderer/bindings/templates/dictionary_v8.cc.tmpl
// by the script code_generator_v8.py.
// DO NOT MODIFY!

// clang-format off
#include "third_party/blink/renderer/bindings/modules/v8/v8_gpu_depth_stencil_state_descriptor.h"

#include "base/stl_util.h"
#include "third_party/blink/renderer/bindings/core/v8/idl_types.h"
#include "third_party/blink/renderer/bindings/core/v8/native_value_traits_impl.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_gpu_stencil_state_face_descriptor.h"
#include "third_party/blink/renderer/platform/bindings/exception_state.h"

namespace blink {

static const v8::Eternal<v8::Name>* eternalV8GPUDepthStencilStateDescriptorKeys(v8::Isolate* isolate) {
  static const char* const kKeys[] = {
    "depthCompare",
    "depthWriteEnabled",
    "format",
    "stencilBack",
    "stencilFront",
    "stencilReadMask",
    "stencilWriteMask",
  };
  return V8PerIsolateData::From(isolate)->FindOrCreateEternalNameCache(
      kKeys, kKeys, base::size(kKeys));
}

void V8GPUDepthStencilStateDescriptor::ToImpl(v8::Isolate* isolate, v8::Local<v8::Value> v8_value, GPUDepthStencilStateDescriptor* impl, ExceptionState& exception_state) {
  if (IsUndefinedOrNull(v8_value)) {
    exception_state.ThrowTypeError("Missing required member(s): format, stencilBack, stencilFront.");
    return;
  }
  if (!v8_value->IsObject()) {
    exception_state.ThrowTypeError("cannot convert to dictionary.");
    return;
  }
  v8::Local<v8::Object> v8Object = v8_value.As<v8::Object>();
  ALLOW_UNUSED_LOCAL(v8Object);

  const v8::Eternal<v8::Name>* keys = eternalV8GPUDepthStencilStateDescriptorKeys(isolate);
  v8::TryCatch block(isolate);
  v8::Local<v8::Context> context = isolate->GetCurrentContext();
  v8::Local<v8::Value> depth_compare_value;
  if (!v8Object->Get(context, keys[0].Get(isolate)).ToLocal(&depth_compare_value)) {
    exception_state.RethrowV8Exception(block.Exception());
    return;
  }
  if (depth_compare_value.IsEmpty() || depth_compare_value->IsUndefined()) {
    // Do nothing.
  } else {
    V8StringResource<> depth_compare_cpp_value = depth_compare_value;
    if (!depth_compare_cpp_value.Prepare(exception_state))
      return;
    const char* kValidValues[] = {
        "never",
        "less",
        "equal",
        "less-equal",
        "greater",
        "not-equal",
        "greater-equal",
        "always",
    };
    if (!IsValidEnum(depth_compare_cpp_value, kValidValues, base::size(kValidValues), "GPUCompareFunction", exception_state))
      return;
    impl->setDepthCompare(depth_compare_cpp_value);
  }

  v8::Local<v8::Value> depth_write_enabled_value;
  if (!v8Object->Get(context, keys[1].Get(isolate)).ToLocal(&depth_write_enabled_value)) {
    exception_state.RethrowV8Exception(block.Exception());
    return;
  }
  if (depth_write_enabled_value.IsEmpty() || depth_write_enabled_value->IsUndefined()) {
    // Do nothing.
  } else {
    bool depth_write_enabled_cpp_value = NativeValueTraits<IDLBoolean>::NativeValue(isolate, depth_write_enabled_value, exception_state);
    if (exception_state.HadException())
      return;
    impl->setDepthWriteEnabled(depth_write_enabled_cpp_value);
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

  v8::Local<v8::Value> stencil_back_value;
  if (!v8Object->Get(context, keys[3].Get(isolate)).ToLocal(&stencil_back_value)) {
    exception_state.RethrowV8Exception(block.Exception());
    return;
  }
  if (stencil_back_value.IsEmpty() || stencil_back_value->IsUndefined()) {
    exception_state.ThrowTypeError("required member stencilBack is undefined.");
    return;
  } else {
    GPUStencilStateFaceDescriptor* stencil_back_cpp_value = NativeValueTraits<GPUStencilStateFaceDescriptor>::NativeValue(isolate, stencil_back_value, exception_state);
    if (exception_state.HadException())
      return;
    impl->setStencilBack(stencil_back_cpp_value);
  }

  v8::Local<v8::Value> stencil_front_value;
  if (!v8Object->Get(context, keys[4].Get(isolate)).ToLocal(&stencil_front_value)) {
    exception_state.RethrowV8Exception(block.Exception());
    return;
  }
  if (stencil_front_value.IsEmpty() || stencil_front_value->IsUndefined()) {
    exception_state.ThrowTypeError("required member stencilFront is undefined.");
    return;
  } else {
    GPUStencilStateFaceDescriptor* stencil_front_cpp_value = NativeValueTraits<GPUStencilStateFaceDescriptor>::NativeValue(isolate, stencil_front_value, exception_state);
    if (exception_state.HadException())
      return;
    impl->setStencilFront(stencil_front_cpp_value);
  }

  v8::Local<v8::Value> stencil_read_mask_value;
  if (!v8Object->Get(context, keys[5].Get(isolate)).ToLocal(&stencil_read_mask_value)) {
    exception_state.RethrowV8Exception(block.Exception());
    return;
  }
  if (stencil_read_mask_value.IsEmpty() || stencil_read_mask_value->IsUndefined()) {
    // Do nothing.
  } else {
    uint32_t stencil_read_mask_cpp_value = NativeValueTraits<IDLUnsignedLong>::NativeValue(isolate, stencil_read_mask_value, exception_state);
    if (exception_state.HadException())
      return;
    impl->setStencilReadMask(stencil_read_mask_cpp_value);
  }

  v8::Local<v8::Value> stencil_write_mask_value;
  if (!v8Object->Get(context, keys[6].Get(isolate)).ToLocal(&stencil_write_mask_value)) {
    exception_state.RethrowV8Exception(block.Exception());
    return;
  }
  if (stencil_write_mask_value.IsEmpty() || stencil_write_mask_value->IsUndefined()) {
    // Do nothing.
  } else {
    uint32_t stencil_write_mask_cpp_value = NativeValueTraits<IDLUnsignedLong>::NativeValue(isolate, stencil_write_mask_value, exception_state);
    if (exception_state.HadException())
      return;
    impl->setStencilWriteMask(stencil_write_mask_cpp_value);
  }
}

v8::Local<v8::Value> GPUDepthStencilStateDescriptor::ToV8Impl(v8::Local<v8::Object> creationContext, v8::Isolate* isolate) const {
  v8::Local<v8::Object> v8Object = v8::Object::New(isolate);
  if (!toV8GPUDepthStencilStateDescriptor(this, v8Object, creationContext, isolate))
    return v8::Undefined(isolate);
  return v8Object;
}

bool toV8GPUDepthStencilStateDescriptor(const GPUDepthStencilStateDescriptor* impl, v8::Local<v8::Object> dictionary, v8::Local<v8::Object> creationContext, v8::Isolate* isolate) {
  const v8::Eternal<v8::Name>* keys = eternalV8GPUDepthStencilStateDescriptorKeys(isolate);
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

  v8::Local<v8::Value> depth_compare_value;
  bool depth_compare_has_value_or_default = false;
  if (impl->hasDepthCompare()) {
    depth_compare_value = V8String(isolate, impl->depthCompare());
    depth_compare_has_value_or_default = true;
  } else {
    depth_compare_value = V8String(isolate, "always");
    depth_compare_has_value_or_default = true;
  }
  if (depth_compare_has_value_or_default &&
      !create_property(0, depth_compare_value)) {
    return false;
  }

  v8::Local<v8::Value> depth_write_enabled_value;
  bool depth_write_enabled_has_value_or_default = false;
  if (impl->hasDepthWriteEnabled()) {
    depth_write_enabled_value = v8::Boolean::New(isolate, impl->depthWriteEnabled());
    depth_write_enabled_has_value_or_default = true;
  } else {
    depth_write_enabled_value = v8::Boolean::New(isolate, false);
    depth_write_enabled_has_value_or_default = true;
  }
  if (depth_write_enabled_has_value_or_default &&
      !create_property(1, depth_write_enabled_value)) {
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

  v8::Local<v8::Value> stencil_back_value;
  bool stencil_back_has_value_or_default = false;
  if (impl->hasStencilBack()) {
    stencil_back_value = ToV8(impl->stencilBack(), creationContext, isolate);
    stencil_back_has_value_or_default = true;
  } else {
    NOTREACHED();
  }
  if (stencil_back_has_value_or_default &&
      !create_property(3, stencil_back_value)) {
    return false;
  }

  v8::Local<v8::Value> stencil_front_value;
  bool stencil_front_has_value_or_default = false;
  if (impl->hasStencilFront()) {
    stencil_front_value = ToV8(impl->stencilFront(), creationContext, isolate);
    stencil_front_has_value_or_default = true;
  } else {
    NOTREACHED();
  }
  if (stencil_front_has_value_or_default &&
      !create_property(4, stencil_front_value)) {
    return false;
  }

  v8::Local<v8::Value> stencil_read_mask_value;
  bool stencil_read_mask_has_value_or_default = false;
  if (impl->hasStencilReadMask()) {
    stencil_read_mask_value = v8::Integer::NewFromUnsigned(isolate, impl->stencilReadMask());
    stencil_read_mask_has_value_or_default = true;
  } else {
    stencil_read_mask_value = v8::Integer::NewFromUnsigned(isolate, 4294967295u);
    stencil_read_mask_has_value_or_default = true;
  }
  if (stencil_read_mask_has_value_or_default &&
      !create_property(5, stencil_read_mask_value)) {
    return false;
  }

  v8::Local<v8::Value> stencil_write_mask_value;
  bool stencil_write_mask_has_value_or_default = false;
  if (impl->hasStencilWriteMask()) {
    stencil_write_mask_value = v8::Integer::NewFromUnsigned(isolate, impl->stencilWriteMask());
    stencil_write_mask_has_value_or_default = true;
  } else {
    stencil_write_mask_value = v8::Integer::NewFromUnsigned(isolate, 4294967295u);
    stencil_write_mask_has_value_or_default = true;
  }
  if (stencil_write_mask_has_value_or_default &&
      !create_property(6, stencil_write_mask_value)) {
    return false;
  }

  return true;
}

GPUDepthStencilStateDescriptor* NativeValueTraits<GPUDepthStencilStateDescriptor>::NativeValue(v8::Isolate* isolate, v8::Local<v8::Value> value, ExceptionState& exception_state) {
  GPUDepthStencilStateDescriptor* impl = GPUDepthStencilStateDescriptor::Create();
  V8GPUDepthStencilStateDescriptor::ToImpl(isolate, value, impl, exception_state);
  return impl;
}

}  // namespace blink
