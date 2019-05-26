// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated from the Jinja2 template
// third_party/blink/renderer/bindings/templates/union_container.cc.tmpl
// by the script code_generator_v8.py.
// DO NOT MODIFY!

// clang-format off
#include "third_party/blink/renderer/bindings/modules/v8/gpu_sampler_or_gpu_texture_view_or_gpu_buffer_binding.h"

#include "base/stl_util.h"
#include "third_party/blink/renderer/bindings/core/v8/to_v8_for_core.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_gpu_sampler.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_gpu_texture_view.h"

namespace blink {

GPUSamplerOrGPUTextureViewOrGPUBufferBinding::GPUSamplerOrGPUTextureViewOrGPUBufferBinding() : type_(SpecificType::kNone) {}

GPUBufferBinding* GPUSamplerOrGPUTextureViewOrGPUBufferBinding::GetAsGPUBufferBinding() const {
  DCHECK(IsGPUBufferBinding());
  return gpu_buffer_binding_;
}

void GPUSamplerOrGPUTextureViewOrGPUBufferBinding::SetGPUBufferBinding(GPUBufferBinding* value) {
  DCHECK(IsNull());
  gpu_buffer_binding_ = value;
  type_ = SpecificType::kGPUBufferBinding;
}

GPUSamplerOrGPUTextureViewOrGPUBufferBinding GPUSamplerOrGPUTextureViewOrGPUBufferBinding::FromGPUBufferBinding(GPUBufferBinding* value) {
  GPUSamplerOrGPUTextureViewOrGPUBufferBinding container;
  container.SetGPUBufferBinding(value);
  return container;
}

GPUSampler* GPUSamplerOrGPUTextureViewOrGPUBufferBinding::GetAsGPUSampler() const {
  DCHECK(IsGPUSampler());
  return gpu_sampler_;
}

void GPUSamplerOrGPUTextureViewOrGPUBufferBinding::SetGPUSampler(GPUSampler* value) {
  DCHECK(IsNull());
  gpu_sampler_ = value;
  type_ = SpecificType::kGPUSampler;
}

GPUSamplerOrGPUTextureViewOrGPUBufferBinding GPUSamplerOrGPUTextureViewOrGPUBufferBinding::FromGPUSampler(GPUSampler* value) {
  GPUSamplerOrGPUTextureViewOrGPUBufferBinding container;
  container.SetGPUSampler(value);
  return container;
}

GPUTextureView* GPUSamplerOrGPUTextureViewOrGPUBufferBinding::GetAsGPUTextureView() const {
  DCHECK(IsGPUTextureView());
  return gpu_texture_view_;
}

void GPUSamplerOrGPUTextureViewOrGPUBufferBinding::SetGPUTextureView(GPUTextureView* value) {
  DCHECK(IsNull());
  gpu_texture_view_ = value;
  type_ = SpecificType::kGPUTextureView;
}

GPUSamplerOrGPUTextureViewOrGPUBufferBinding GPUSamplerOrGPUTextureViewOrGPUBufferBinding::FromGPUTextureView(GPUTextureView* value) {
  GPUSamplerOrGPUTextureViewOrGPUBufferBinding container;
  container.SetGPUTextureView(value);
  return container;
}

GPUSamplerOrGPUTextureViewOrGPUBufferBinding::GPUSamplerOrGPUTextureViewOrGPUBufferBinding(const GPUSamplerOrGPUTextureViewOrGPUBufferBinding&) = default;
GPUSamplerOrGPUTextureViewOrGPUBufferBinding::~GPUSamplerOrGPUTextureViewOrGPUBufferBinding() = default;
GPUSamplerOrGPUTextureViewOrGPUBufferBinding& GPUSamplerOrGPUTextureViewOrGPUBufferBinding::operator=(const GPUSamplerOrGPUTextureViewOrGPUBufferBinding&) = default;

void GPUSamplerOrGPUTextureViewOrGPUBufferBinding::Trace(blink::Visitor* visitor) {
  visitor->Trace(gpu_buffer_binding_);
  visitor->Trace(gpu_sampler_);
  visitor->Trace(gpu_texture_view_);
}

void V8GPUSamplerOrGPUTextureViewOrGPUBufferBinding::ToImpl(
    v8::Isolate* isolate,
    v8::Local<v8::Value> v8_value,
    GPUSamplerOrGPUTextureViewOrGPUBufferBinding& impl,
    UnionTypeConversionMode conversion_mode,
    ExceptionState& exception_state) {
  if (v8_value.IsEmpty())
    return;

  if (conversion_mode == UnionTypeConversionMode::kNullable && IsUndefinedOrNull(v8_value))
    return;

  if (IsUndefinedOrNull(v8_value)) {
    GPUBufferBinding* cpp_value = NativeValueTraits<GPUBufferBinding>::NativeValue(isolate, v8_value, exception_state);
    if (exception_state.HadException())
      return;
    impl.SetGPUBufferBinding(cpp_value);
    return;
  }

  if (V8GPUSampler::HasInstance(v8_value, isolate)) {
    GPUSampler* cpp_value = V8GPUSampler::ToImpl(v8::Local<v8::Object>::Cast(v8_value));
    impl.SetGPUSampler(cpp_value);
    return;
  }

  if (V8GPUTextureView::HasInstance(v8_value, isolate)) {
    GPUTextureView* cpp_value = V8GPUTextureView::ToImpl(v8::Local<v8::Object>::Cast(v8_value));
    impl.SetGPUTextureView(cpp_value);
    return;
  }

  if (v8_value->IsObject()) {
    GPUBufferBinding* cpp_value = NativeValueTraits<GPUBufferBinding>::NativeValue(isolate, v8_value, exception_state);
    if (exception_state.HadException())
      return;
    impl.SetGPUBufferBinding(cpp_value);
    return;
  }

  exception_state.ThrowTypeError("The provided value is not of type '(GPUSampler or GPUTextureView or GPUBufferBinding)'");
}

v8::Local<v8::Value> ToV8(const GPUSamplerOrGPUTextureViewOrGPUBufferBinding& impl, v8::Local<v8::Object> creationContext, v8::Isolate* isolate) {
  switch (impl.type_) {
    case GPUSamplerOrGPUTextureViewOrGPUBufferBinding::SpecificType::kNone:
      return v8::Null(isolate);
    case GPUSamplerOrGPUTextureViewOrGPUBufferBinding::SpecificType::kGPUBufferBinding:
      return ToV8(impl.GetAsGPUBufferBinding(), creationContext, isolate);
    case GPUSamplerOrGPUTextureViewOrGPUBufferBinding::SpecificType::kGPUSampler:
      return ToV8(impl.GetAsGPUSampler(), creationContext, isolate);
    case GPUSamplerOrGPUTextureViewOrGPUBufferBinding::SpecificType::kGPUTextureView:
      return ToV8(impl.GetAsGPUTextureView(), creationContext, isolate);
    default:
      NOTREACHED();
  }
  return v8::Local<v8::Value>();
}

GPUSamplerOrGPUTextureViewOrGPUBufferBinding NativeValueTraits<GPUSamplerOrGPUTextureViewOrGPUBufferBinding>::NativeValue(
    v8::Isolate* isolate, v8::Local<v8::Value> value, ExceptionState& exception_state) {
  GPUSamplerOrGPUTextureViewOrGPUBufferBinding impl;
  V8GPUSamplerOrGPUTextureViewOrGPUBufferBinding::ToImpl(isolate, value, impl, UnionTypeConversionMode::kNotNullable, exception_state);
  return impl;
}

}  // namespace blink
