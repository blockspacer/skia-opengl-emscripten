// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated from the Jinja2 template
// third_party/blink/renderer/bindings/templates/dictionary_v8.cc.tmpl
// by the script code_generator_v8.py.
// DO NOT MODIFY!

// clang-format off
#include "third_party/blink/renderer/bindings/modules/v8/v8_gpu_vertex_attribute_descriptor.h"

#include "base/stl_util.h"
#include "third_party/blink/renderer/bindings/core/v8/idl_types.h"
#include "third_party/blink/renderer/bindings/core/v8/native_value_traits_impl.h"
#include "third_party/blink/renderer/platform/bindings/exception_state.h"

namespace blink {

static const v8::Eternal<v8::Name>* eternalV8GPUVertexAttributeDescriptorKeys(v8::Isolate* isolate) {
  static const char* const kKeys[] = {
    "format",
    "offset",
    "shaderLocation",
  };
  return V8PerIsolateData::From(isolate)->FindOrCreateEternalNameCache(
      kKeys, kKeys, base::size(kKeys));
}

void V8GPUVertexAttributeDescriptor::ToImpl(v8::Isolate* isolate, v8::Local<v8::Value> v8_value, GPUVertexAttributeDescriptor* impl, ExceptionState& exception_state) {
  if (IsUndefinedOrNull(v8_value)) {
    exception_state.ThrowTypeError("Missing required member(s): format, shaderLocation.");
    return;
  }
  if (!v8_value->IsObject()) {
    exception_state.ThrowTypeError("cannot convert to dictionary.");
    return;
  }
  v8::Local<v8::Object> v8Object = v8_value.As<v8::Object>();
  ALLOW_UNUSED_LOCAL(v8Object);

  const v8::Eternal<v8::Name>* keys = eternalV8GPUVertexAttributeDescriptorKeys(isolate);
  v8::TryCatch block(isolate);
  v8::Local<v8::Context> context = isolate->GetCurrentContext();
  v8::Local<v8::Value> format_value;
  if (!v8Object->Get(context, keys[0].Get(isolate)).ToLocal(&format_value)) {
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
        "uchar",
        "uchar2",
        "uchar3",
        "uchar4",
        "char",
        "char2",
        "char3",
        "char4",
        "ucharnorm",
        "uchar2norm",
        "uchar3norm",
        "uchar4norm",
        "uchar4norm-bgra",
        "charnorm",
        "char2norm",
        "char3norm",
        "char4norm",
        "ushort",
        "ushort2",
        "ushort3",
        "ushort4",
        "short",
        "short2",
        "short3",
        "short4",
        "ushortnorm",
        "ushort2norm",
        "ushort3norm",
        "ushort4norm",
        "shortnorm",
        "short2norm",
        "short3norm",
        "short4norm",
        "half",
        "half2",
        "half3",
        "half4",
        "float",
        "float2",
        "float3",
        "float4",
        "uint",
        "uint2",
        "uint3",
        "uint4",
        "int",
        "int2",
        "int3",
        "int4",
    };
    if (!IsValidEnum(format_cpp_value, kValidValues, base::size(kValidValues), "GPUVertexFormat", exception_state))
      return;
    impl->setFormat(format_cpp_value);
  }

  v8::Local<v8::Value> offset_value;
  if (!v8Object->Get(context, keys[1].Get(isolate)).ToLocal(&offset_value)) {
    exception_state.RethrowV8Exception(block.Exception());
    return;
  }
  if (offset_value.IsEmpty() || offset_value->IsUndefined()) {
    // Do nothing.
  } else {
    uint64_t offset_cpp_value = NativeValueTraits<IDLUnsignedLongLong>::NativeValue(isolate, offset_value, exception_state);
    if (exception_state.HadException())
      return;
    impl->setOffset(offset_cpp_value);
  }

  v8::Local<v8::Value> shader_location_value;
  if (!v8Object->Get(context, keys[2].Get(isolate)).ToLocal(&shader_location_value)) {
    exception_state.RethrowV8Exception(block.Exception());
    return;
  }
  if (shader_location_value.IsEmpty() || shader_location_value->IsUndefined()) {
    exception_state.ThrowTypeError("required member shaderLocation is undefined.");
    return;
  } else {
    uint32_t shader_location_cpp_value = NativeValueTraits<IDLUnsignedLong>::NativeValue(isolate, shader_location_value, exception_state);
    if (exception_state.HadException())
      return;
    impl->setShaderLocation(shader_location_cpp_value);
  }
}

v8::Local<v8::Value> GPUVertexAttributeDescriptor::ToV8Impl(v8::Local<v8::Object> creationContext, v8::Isolate* isolate) const {
  v8::Local<v8::Object> v8Object = v8::Object::New(isolate);
  if (!toV8GPUVertexAttributeDescriptor(this, v8Object, creationContext, isolate))
    return v8::Undefined(isolate);
  return v8Object;
}

bool toV8GPUVertexAttributeDescriptor(const GPUVertexAttributeDescriptor* impl, v8::Local<v8::Object> dictionary, v8::Local<v8::Object> creationContext, v8::Isolate* isolate) {
  const v8::Eternal<v8::Name>* keys = eternalV8GPUVertexAttributeDescriptorKeys(isolate);
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

  v8::Local<v8::Value> format_value;
  bool format_has_value_or_default = false;
  if (impl->hasFormat()) {
    format_value = V8String(isolate, impl->format());
    format_has_value_or_default = true;
  } else {
    NOTREACHED();
  }
  if (format_has_value_or_default &&
      !create_property(0, format_value)) {
    return false;
  }

  v8::Local<v8::Value> offset_value;
  bool offset_has_value_or_default = false;
  if (impl->hasOffset()) {
    offset_value = v8::Number::New(isolate, static_cast<double>(impl->offset()));
    offset_has_value_or_default = true;
  } else {
    offset_value = v8::Number::New(isolate, static_cast<double>(0));
    offset_has_value_or_default = true;
  }
  if (offset_has_value_or_default &&
      !create_property(1, offset_value)) {
    return false;
  }

  v8::Local<v8::Value> shader_location_value;
  bool shader_location_has_value_or_default = false;
  if (impl->hasShaderLocation()) {
    shader_location_value = v8::Integer::NewFromUnsigned(isolate, impl->shaderLocation());
    shader_location_has_value_or_default = true;
  } else {
    NOTREACHED();
  }
  if (shader_location_has_value_or_default &&
      !create_property(2, shader_location_value)) {
    return false;
  }

  return true;
}

GPUVertexAttributeDescriptor* NativeValueTraits<GPUVertexAttributeDescriptor>::NativeValue(v8::Isolate* isolate, v8::Local<v8::Value> value, ExceptionState& exception_state) {
  GPUVertexAttributeDescriptor* impl = GPUVertexAttributeDescriptor::Create();
  V8GPUVertexAttributeDescriptor::ToImpl(isolate, value, impl, exception_state);
  return impl;
}

}  // namespace blink
