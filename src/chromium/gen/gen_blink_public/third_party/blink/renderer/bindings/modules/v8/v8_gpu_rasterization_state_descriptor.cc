// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated from the Jinja2 template
// third_party/blink/renderer/bindings/templates/dictionary_v8.cc.tmpl
// by the script code_generator_v8.py.
// DO NOT MODIFY!

// clang-format off
#include "third_party/blink/renderer/bindings/modules/v8/v8_gpu_rasterization_state_descriptor.h"

#include "base/stl_util.h"
#include "third_party/blink/renderer/bindings/core/v8/idl_types.h"
#include "third_party/blink/renderer/bindings/core/v8/native_value_traits_impl.h"
#include "third_party/blink/renderer/platform/bindings/exception_state.h"

namespace blink {

static const v8::Eternal<v8::Name>* eternalV8GPURasterizationStateDescriptorKeys(v8::Isolate* isolate) {
  static const char* const kKeys[] = {
    "cullMode",
    "depthBias",
    "depthBiasClamp",
    "depthBiasSlopeScale",
    "frontFace",
  };
  return V8PerIsolateData::From(isolate)->FindOrCreateEternalNameCache(
      kKeys, kKeys, base::size(kKeys));
}

void V8GPURasterizationStateDescriptor::ToImpl(v8::Isolate* isolate, v8::Local<v8::Value> v8_value, GPURasterizationStateDescriptor* impl, ExceptionState& exception_state) {
  if (IsUndefinedOrNull(v8_value)) {
    exception_state.ThrowTypeError("Missing required member(s): frontFace.");
    return;
  }
  if (!v8_value->IsObject()) {
    exception_state.ThrowTypeError("cannot convert to dictionary.");
    return;
  }
  v8::Local<v8::Object> v8Object = v8_value.As<v8::Object>();
  ALLOW_UNUSED_LOCAL(v8Object);

  const v8::Eternal<v8::Name>* keys = eternalV8GPURasterizationStateDescriptorKeys(isolate);
  v8::TryCatch block(isolate);
  v8::Local<v8::Context> context = isolate->GetCurrentContext();
  v8::Local<v8::Value> cull_mode_value;
  if (!v8Object->Get(context, keys[0].Get(isolate)).ToLocal(&cull_mode_value)) {
    exception_state.RethrowV8Exception(block.Exception());
    return;
  }
  if (cull_mode_value.IsEmpty() || cull_mode_value->IsUndefined()) {
    // Do nothing.
  } else {
    V8StringResource<> cull_mode_cpp_value = cull_mode_value;
    if (!cull_mode_cpp_value.Prepare(exception_state))
      return;
    const char* kValidValues[] = {
        "none",
        "front",
        "back",
    };
    if (!IsValidEnum(cull_mode_cpp_value, kValidValues, base::size(kValidValues), "GPUCullMode", exception_state))
      return;
    impl->setCullMode(cull_mode_cpp_value);
  }

  v8::Local<v8::Value> depth_bias_value;
  if (!v8Object->Get(context, keys[1].Get(isolate)).ToLocal(&depth_bias_value)) {
    exception_state.RethrowV8Exception(block.Exception());
    return;
  }
  if (depth_bias_value.IsEmpty() || depth_bias_value->IsUndefined()) {
    // Do nothing.
  } else {
    int32_t depth_bias_cpp_value = NativeValueTraits<IDLLong>::NativeValue(isolate, depth_bias_value, exception_state);
    if (exception_state.HadException())
      return;
    impl->setDepthBias(depth_bias_cpp_value);
  }

  v8::Local<v8::Value> depth_bias_clamp_value;
  if (!v8Object->Get(context, keys[2].Get(isolate)).ToLocal(&depth_bias_clamp_value)) {
    exception_state.RethrowV8Exception(block.Exception());
    return;
  }
  if (depth_bias_clamp_value.IsEmpty() || depth_bias_clamp_value->IsUndefined()) {
    // Do nothing.
  } else {
    float depth_bias_clamp_cpp_value = NativeValueTraits<IDLFloat>::NativeValue(isolate, depth_bias_clamp_value, exception_state);
    if (exception_state.HadException())
      return;
    impl->setDepthBiasClamp(depth_bias_clamp_cpp_value);
  }

  v8::Local<v8::Value> depth_bias_slope_scale_value;
  if (!v8Object->Get(context, keys[3].Get(isolate)).ToLocal(&depth_bias_slope_scale_value)) {
    exception_state.RethrowV8Exception(block.Exception());
    return;
  }
  if (depth_bias_slope_scale_value.IsEmpty() || depth_bias_slope_scale_value->IsUndefined()) {
    // Do nothing.
  } else {
    float depth_bias_slope_scale_cpp_value = NativeValueTraits<IDLFloat>::NativeValue(isolate, depth_bias_slope_scale_value, exception_state);
    if (exception_state.HadException())
      return;
    impl->setDepthBiasSlopeScale(depth_bias_slope_scale_cpp_value);
  }

  v8::Local<v8::Value> front_face_value;
  if (!v8Object->Get(context, keys[4].Get(isolate)).ToLocal(&front_face_value)) {
    exception_state.RethrowV8Exception(block.Exception());
    return;
  }
  if (front_face_value.IsEmpty() || front_face_value->IsUndefined()) {
    exception_state.ThrowTypeError("required member frontFace is undefined.");
    return;
  } else {
    V8StringResource<> front_face_cpp_value = front_face_value;
    if (!front_face_cpp_value.Prepare(exception_state))
      return;
    const char* kValidValues[] = {
        "ccw",
        "cw",
    };
    if (!IsValidEnum(front_face_cpp_value, kValidValues, base::size(kValidValues), "GPUFrontFace", exception_state))
      return;
    impl->setFrontFace(front_face_cpp_value);
  }
}

v8::Local<v8::Value> GPURasterizationStateDescriptor::ToV8Impl(v8::Local<v8::Object> creationContext, v8::Isolate* isolate) const {
  v8::Local<v8::Object> v8Object = v8::Object::New(isolate);
  if (!toV8GPURasterizationStateDescriptor(this, v8Object, creationContext, isolate))
    return v8::Undefined(isolate);
  return v8Object;
}

bool toV8GPURasterizationStateDescriptor(const GPURasterizationStateDescriptor* impl, v8::Local<v8::Object> dictionary, v8::Local<v8::Object> creationContext, v8::Isolate* isolate) {
  const v8::Eternal<v8::Name>* keys = eternalV8GPURasterizationStateDescriptorKeys(isolate);
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

  v8::Local<v8::Value> cull_mode_value;
  bool cull_mode_has_value_or_default = false;
  if (impl->hasCullMode()) {
    cull_mode_value = V8String(isolate, impl->cullMode());
    cull_mode_has_value_or_default = true;
  } else {
    cull_mode_value = V8String(isolate, "none");
    cull_mode_has_value_or_default = true;
  }
  if (cull_mode_has_value_or_default &&
      !create_property(0, cull_mode_value)) {
    return false;
  }

  v8::Local<v8::Value> depth_bias_value;
  bool depth_bias_has_value_or_default = false;
  if (impl->hasDepthBias()) {
    depth_bias_value = v8::Integer::New(isolate, impl->depthBias());
    depth_bias_has_value_or_default = true;
  } else {
    depth_bias_value = v8::Integer::New(isolate, 0);
    depth_bias_has_value_or_default = true;
  }
  if (depth_bias_has_value_or_default &&
      !create_property(1, depth_bias_value)) {
    return false;
  }

  v8::Local<v8::Value> depth_bias_clamp_value;
  bool depth_bias_clamp_has_value_or_default = false;
  if (impl->hasDepthBiasClamp()) {
    depth_bias_clamp_value = v8::Number::New(isolate, impl->depthBiasClamp());
    depth_bias_clamp_has_value_or_default = true;
  } else {
    depth_bias_clamp_value = v8::Number::New(isolate, 0);
    depth_bias_clamp_has_value_or_default = true;
  }
  if (depth_bias_clamp_has_value_or_default &&
      !create_property(2, depth_bias_clamp_value)) {
    return false;
  }

  v8::Local<v8::Value> depth_bias_slope_scale_value;
  bool depth_bias_slope_scale_has_value_or_default = false;
  if (impl->hasDepthBiasSlopeScale()) {
    depth_bias_slope_scale_value = v8::Number::New(isolate, impl->depthBiasSlopeScale());
    depth_bias_slope_scale_has_value_or_default = true;
  } else {
    depth_bias_slope_scale_value = v8::Number::New(isolate, 0);
    depth_bias_slope_scale_has_value_or_default = true;
  }
  if (depth_bias_slope_scale_has_value_or_default &&
      !create_property(3, depth_bias_slope_scale_value)) {
    return false;
  }

  v8::Local<v8::Value> front_face_value;
  bool front_face_has_value_or_default = false;
  if (impl->hasFrontFace()) {
    front_face_value = V8String(isolate, impl->frontFace());
    front_face_has_value_or_default = true;
  } else {
    NOTREACHED();
  }
  if (front_face_has_value_or_default &&
      !create_property(4, front_face_value)) {
    return false;
  }

  return true;
}

GPURasterizationStateDescriptor* NativeValueTraits<GPURasterizationStateDescriptor>::NativeValue(v8::Isolate* isolate, v8::Local<v8::Value> value, ExceptionState& exception_state) {
  GPURasterizationStateDescriptor* impl = GPURasterizationStateDescriptor::Create();
  V8GPURasterizationStateDescriptor::ToImpl(isolate, value, impl, exception_state);
  return impl;
}

}  // namespace blink
