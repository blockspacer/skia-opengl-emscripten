// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated from the Jinja2 template
// third_party/blink/renderer/bindings/templates/dictionary_v8.cc.tmpl
// by the script code_generator_v8.py.
// DO NOT MODIFY!

// clang-format off
#include "third_party/blink/renderer/bindings/modules/v8/v8_gpu_swap_chain_descriptor.h"

#include "base/stl_util.h"
#include "third_party/blink/renderer/bindings/core/v8/idl_types.h"
#include "third_party/blink/renderer/bindings/core/v8/native_value_traits_impl.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_gpu_device.h"
#include "third_party/blink/renderer/platform/bindings/exception_state.h"

namespace blink {

static const v8::Eternal<v8::Name>* eternalV8GPUSwapChainDescriptorKeys(v8::Isolate* isolate) {
  static const char* const kKeys[] = {
    "device",
    "format",
    "usage",
  };
  return V8PerIsolateData::From(isolate)->FindOrCreateEternalNameCache(
      kKeys, kKeys, base::size(kKeys));
}

void V8GPUSwapChainDescriptor::ToImpl(v8::Isolate* isolate, v8::Local<v8::Value> v8_value, GPUSwapChainDescriptor* impl, ExceptionState& exception_state) {
  if (IsUndefinedOrNull(v8_value)) {
    exception_state.ThrowTypeError("Missing required member(s): device, format.");
    return;
  }
  if (!v8_value->IsObject()) {
    exception_state.ThrowTypeError("cannot convert to dictionary.");
    return;
  }
  v8::Local<v8::Object> v8Object = v8_value.As<v8::Object>();
  ALLOW_UNUSED_LOCAL(v8Object);

  const v8::Eternal<v8::Name>* keys = eternalV8GPUSwapChainDescriptorKeys(isolate);
  v8::TryCatch block(isolate);
  v8::Local<v8::Context> context = isolate->GetCurrentContext();
  v8::Local<v8::Value> device_value;
  if (!v8Object->Get(context, keys[0].Get(isolate)).ToLocal(&device_value)) {
    exception_state.RethrowV8Exception(block.Exception());
    return;
  }
  if (device_value.IsEmpty() || device_value->IsUndefined()) {
    exception_state.ThrowTypeError("required member device is undefined.");
    return;
  } else {
    GPUDevice* device_cpp_value = V8GPUDevice::ToImplWithTypeCheck(isolate, device_value);
    if (!device_cpp_value) {
      exception_state.ThrowTypeError("member device is not of type GPUDevice.");
      return;
    }
    impl->setDevice(device_cpp_value);
  }

  v8::Local<v8::Value> format_value;
  if (!v8Object->Get(context, keys[1].Get(isolate)).ToLocal(&format_value)) {
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

  v8::Local<v8::Value> usage_value;
  if (!v8Object->Get(context, keys[2].Get(isolate)).ToLocal(&usage_value)) {
    exception_state.RethrowV8Exception(block.Exception());
    return;
  }
  if (usage_value.IsEmpty() || usage_value->IsUndefined()) {
    // Do nothing.
  } else {
    uint32_t usage_cpp_value = NativeValueTraits<IDLUnsignedLong>::NativeValue(isolate, usage_value, exception_state);
    if (exception_state.HadException())
      return;
    impl->setUsage(usage_cpp_value);
  }
}

v8::Local<v8::Value> GPUSwapChainDescriptor::ToV8Impl(v8::Local<v8::Object> creationContext, v8::Isolate* isolate) const {
  v8::Local<v8::Object> v8Object = v8::Object::New(isolate);
  if (!toV8GPUSwapChainDescriptor(this, v8Object, creationContext, isolate))
    return v8::Undefined(isolate);
  return v8Object;
}

bool toV8GPUSwapChainDescriptor(const GPUSwapChainDescriptor* impl, v8::Local<v8::Object> dictionary, v8::Local<v8::Object> creationContext, v8::Isolate* isolate) {
  const v8::Eternal<v8::Name>* keys = eternalV8GPUSwapChainDescriptorKeys(isolate);
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

  v8::Local<v8::Value> device_value;
  bool device_has_value_or_default = false;
  if (impl->hasDevice()) {
    device_value = ToV8(impl->device(), creationContext, isolate);
    device_has_value_or_default = true;
  } else {
    NOTREACHED();
  }
  if (device_has_value_or_default &&
      !create_property(0, device_value)) {
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
      !create_property(1, format_value)) {
    return false;
  }

  v8::Local<v8::Value> usage_value;
  bool usage_has_value_or_default = false;
  if (impl->hasUsage()) {
    usage_value = v8::Integer::NewFromUnsigned(isolate, impl->usage());
    usage_has_value_or_default = true;
  } else {
    usage_value = v8::Integer::NewFromUnsigned(isolate, 16u);
    usage_has_value_or_default = true;
  }
  if (usage_has_value_or_default &&
      !create_property(2, usage_value)) {
    return false;
  }

  return true;
}

GPUSwapChainDescriptor* NativeValueTraits<GPUSwapChainDescriptor>::NativeValue(v8::Isolate* isolate, v8::Local<v8::Value> value, ExceptionState& exception_state) {
  GPUSwapChainDescriptor* impl = GPUSwapChainDescriptor::Create();
  V8GPUSwapChainDescriptor::ToImpl(isolate, value, impl, exception_state);
  return impl;
}

}  // namespace blink
