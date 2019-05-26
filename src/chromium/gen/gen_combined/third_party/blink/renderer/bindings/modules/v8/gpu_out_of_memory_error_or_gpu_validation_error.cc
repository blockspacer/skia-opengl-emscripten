// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated from the Jinja2 template
// third_party/blink/renderer/bindings/templates/union_container.cc.tmpl
// by the script code_generator_v8.py.
// DO NOT MODIFY!

// clang-format off
#include "third_party/blink/renderer/bindings/modules/v8/gpu_out_of_memory_error_or_gpu_validation_error.h"

#include "base/stl_util.h"
#include "third_party/blink/renderer/bindings/core/v8/to_v8_for_core.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_gpu_out_of_memory_error.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_gpu_validation_error.h"

namespace blink {

GPUOutOfMemoryErrorOrGPUValidationError::GPUOutOfMemoryErrorOrGPUValidationError() : type_(SpecificType::kNone) {}

GPUOutOfMemoryError* GPUOutOfMemoryErrorOrGPUValidationError::GetAsGPUOutOfMemoryError() const {
  DCHECK(IsGPUOutOfMemoryError());
  return gpu_out_of_memory_error_;
}

void GPUOutOfMemoryErrorOrGPUValidationError::SetGPUOutOfMemoryError(GPUOutOfMemoryError* value) {
  DCHECK(IsNull());
  gpu_out_of_memory_error_ = value;
  type_ = SpecificType::kGPUOutOfMemoryError;
}

GPUOutOfMemoryErrorOrGPUValidationError GPUOutOfMemoryErrorOrGPUValidationError::FromGPUOutOfMemoryError(GPUOutOfMemoryError* value) {
  GPUOutOfMemoryErrorOrGPUValidationError container;
  container.SetGPUOutOfMemoryError(value);
  return container;
}

GPUValidationError* GPUOutOfMemoryErrorOrGPUValidationError::GetAsGPUValidationError() const {
  DCHECK(IsGPUValidationError());
  return gpu_validation_error_;
}

void GPUOutOfMemoryErrorOrGPUValidationError::SetGPUValidationError(GPUValidationError* value) {
  DCHECK(IsNull());
  gpu_validation_error_ = value;
  type_ = SpecificType::kGPUValidationError;
}

GPUOutOfMemoryErrorOrGPUValidationError GPUOutOfMemoryErrorOrGPUValidationError::FromGPUValidationError(GPUValidationError* value) {
  GPUOutOfMemoryErrorOrGPUValidationError container;
  container.SetGPUValidationError(value);
  return container;
}

GPUOutOfMemoryErrorOrGPUValidationError::GPUOutOfMemoryErrorOrGPUValidationError(const GPUOutOfMemoryErrorOrGPUValidationError&) = default;
GPUOutOfMemoryErrorOrGPUValidationError::~GPUOutOfMemoryErrorOrGPUValidationError() = default;
GPUOutOfMemoryErrorOrGPUValidationError& GPUOutOfMemoryErrorOrGPUValidationError::operator=(const GPUOutOfMemoryErrorOrGPUValidationError&) = default;

void GPUOutOfMemoryErrorOrGPUValidationError::Trace(blink::Visitor* visitor) {
  visitor->Trace(gpu_out_of_memory_error_);
  visitor->Trace(gpu_validation_error_);
}

void V8GPUOutOfMemoryErrorOrGPUValidationError::ToImpl(
    v8::Isolate* isolate,
    v8::Local<v8::Value> v8_value,
    GPUOutOfMemoryErrorOrGPUValidationError& impl,
    UnionTypeConversionMode conversion_mode,
    ExceptionState& exception_state) {
  if (v8_value.IsEmpty())
    return;

  if (conversion_mode == UnionTypeConversionMode::kNullable && IsUndefinedOrNull(v8_value))
    return;

  if (V8GPUOutOfMemoryError::HasInstance(v8_value, isolate)) {
    GPUOutOfMemoryError* cpp_value = V8GPUOutOfMemoryError::ToImpl(v8::Local<v8::Object>::Cast(v8_value));
    impl.SetGPUOutOfMemoryError(cpp_value);
    return;
  }

  if (V8GPUValidationError::HasInstance(v8_value, isolate)) {
    GPUValidationError* cpp_value = V8GPUValidationError::ToImpl(v8::Local<v8::Object>::Cast(v8_value));
    impl.SetGPUValidationError(cpp_value);
    return;
  }

  exception_state.ThrowTypeError("The provided value is not of type '(GPUOutOfMemoryError or GPUValidationError)'");
}

v8::Local<v8::Value> ToV8(const GPUOutOfMemoryErrorOrGPUValidationError& impl, v8::Local<v8::Object> creationContext, v8::Isolate* isolate) {
  switch (impl.type_) {
    case GPUOutOfMemoryErrorOrGPUValidationError::SpecificType::kNone:
      return v8::Null(isolate);
    case GPUOutOfMemoryErrorOrGPUValidationError::SpecificType::kGPUOutOfMemoryError:
      return ToV8(impl.GetAsGPUOutOfMemoryError(), creationContext, isolate);
    case GPUOutOfMemoryErrorOrGPUValidationError::SpecificType::kGPUValidationError:
      return ToV8(impl.GetAsGPUValidationError(), creationContext, isolate);
    default:
      NOTREACHED();
  }
  return v8::Local<v8::Value>();
}

GPUOutOfMemoryErrorOrGPUValidationError NativeValueTraits<GPUOutOfMemoryErrorOrGPUValidationError>::NativeValue(
    v8::Isolate* isolate, v8::Local<v8::Value> value, ExceptionState& exception_state) {
  GPUOutOfMemoryErrorOrGPUValidationError impl;
  V8GPUOutOfMemoryErrorOrGPUValidationError::ToImpl(isolate, value, impl, UnionTypeConversionMode::kNotNullable, exception_state);
  return impl;
}

}  // namespace blink
