// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated from the Jinja2 template
// third_party/blink/renderer/bindings/templates/union_container.cc.tmpl
// by the script code_generator_v8.py.
// DO NOT MODIFY!

// clang-format off
#include "third_party/blink/renderer/bindings/modules/v8/float32_array_or_float64_array_or_dom_matrix.h"

#include "base/stl_util.h"
#include "third_party/blink/renderer/bindings/core/v8/to_v8_for_core.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_dom_matrix.h"

namespace blink {

Float32ArrayOrFloat64ArrayOrDOMMatrix::Float32ArrayOrFloat64ArrayOrDOMMatrix() : type_(SpecificType::kNone) {}

DOMMatrix* Float32ArrayOrFloat64ArrayOrDOMMatrix::GetAsDOMMatrix() const {
  DCHECK(IsDOMMatrix());
  return dom_matrix_;
}

void Float32ArrayOrFloat64ArrayOrDOMMatrix::SetDOMMatrix(DOMMatrix* value) {
  DCHECK(IsNull());
  dom_matrix_ = value;
  type_ = SpecificType::kDOMMatrix;
}

Float32ArrayOrFloat64ArrayOrDOMMatrix Float32ArrayOrFloat64ArrayOrDOMMatrix::FromDOMMatrix(DOMMatrix* value) {
  Float32ArrayOrFloat64ArrayOrDOMMatrix container;
  container.SetDOMMatrix(value);
  return container;
}

NotShared<DOMFloat32Array> Float32ArrayOrFloat64ArrayOrDOMMatrix::GetAsFloat32Array() const {
  DCHECK(IsFloat32Array());
  return float32_array_;
}

void Float32ArrayOrFloat64ArrayOrDOMMatrix::SetFloat32Array(NotShared<DOMFloat32Array> value) {
  DCHECK(IsNull());
  float32_array_ = Member<DOMFloat32Array>(value.View());
  type_ = SpecificType::kFloat32Array;
}

Float32ArrayOrFloat64ArrayOrDOMMatrix Float32ArrayOrFloat64ArrayOrDOMMatrix::FromFloat32Array(NotShared<DOMFloat32Array> value) {
  Float32ArrayOrFloat64ArrayOrDOMMatrix container;
  container.SetFloat32Array(value);
  return container;
}

NotShared<DOMFloat64Array> Float32ArrayOrFloat64ArrayOrDOMMatrix::GetAsFloat64Array() const {
  DCHECK(IsFloat64Array());
  return float64_array_;
}

void Float32ArrayOrFloat64ArrayOrDOMMatrix::SetFloat64Array(NotShared<DOMFloat64Array> value) {
  DCHECK(IsNull());
  float64_array_ = Member<DOMFloat64Array>(value.View());
  type_ = SpecificType::kFloat64Array;
}

Float32ArrayOrFloat64ArrayOrDOMMatrix Float32ArrayOrFloat64ArrayOrDOMMatrix::FromFloat64Array(NotShared<DOMFloat64Array> value) {
  Float32ArrayOrFloat64ArrayOrDOMMatrix container;
  container.SetFloat64Array(value);
  return container;
}

Float32ArrayOrFloat64ArrayOrDOMMatrix::Float32ArrayOrFloat64ArrayOrDOMMatrix(const Float32ArrayOrFloat64ArrayOrDOMMatrix&) = default;
Float32ArrayOrFloat64ArrayOrDOMMatrix::~Float32ArrayOrFloat64ArrayOrDOMMatrix() = default;
Float32ArrayOrFloat64ArrayOrDOMMatrix& Float32ArrayOrFloat64ArrayOrDOMMatrix::operator=(const Float32ArrayOrFloat64ArrayOrDOMMatrix&) = default;

void Float32ArrayOrFloat64ArrayOrDOMMatrix::Trace(blink::Visitor* visitor) {
  visitor->Trace(dom_matrix_);
  visitor->Trace(float32_array_);
  visitor->Trace(float64_array_);
}

void V8Float32ArrayOrFloat64ArrayOrDOMMatrix::ToImpl(
    v8::Isolate* isolate,
    v8::Local<v8::Value> v8_value,
    Float32ArrayOrFloat64ArrayOrDOMMatrix& impl,
    UnionTypeConversionMode conversion_mode,
    ExceptionState& exception_state) {
  if (v8_value.IsEmpty())
    return;

  if (conversion_mode == UnionTypeConversionMode::kNullable && IsUndefinedOrNull(v8_value))
    return;

  if (V8DOMMatrix::HasInstance(v8_value, isolate)) {
    DOMMatrix* cpp_value = V8DOMMatrix::ToImpl(v8::Local<v8::Object>::Cast(v8_value));
    impl.SetDOMMatrix(cpp_value);
    return;
  }

  if (v8_value->IsFloat32Array()) {
    NotShared<DOMFloat32Array> cpp_value = ToNotShared<NotShared<DOMFloat32Array>>(isolate, v8_value, exception_state);
    if (exception_state.HadException())
      return;
    impl.SetFloat32Array(cpp_value);
    return;
  }

  if (v8_value->IsFloat64Array()) {
    NotShared<DOMFloat64Array> cpp_value = ToNotShared<NotShared<DOMFloat64Array>>(isolate, v8_value, exception_state);
    if (exception_state.HadException())
      return;
    impl.SetFloat64Array(cpp_value);
    return;
  }

  exception_state.ThrowTypeError("The provided value is not of type '(Float32Array or Float64Array or DOMMatrix)'");
}

v8::Local<v8::Value> ToV8(const Float32ArrayOrFloat64ArrayOrDOMMatrix& impl, v8::Local<v8::Object> creationContext, v8::Isolate* isolate) {
  switch (impl.type_) {
    case Float32ArrayOrFloat64ArrayOrDOMMatrix::SpecificType::kNone:
      return v8::Null(isolate);
    case Float32ArrayOrFloat64ArrayOrDOMMatrix::SpecificType::kDOMMatrix:
      return ToV8(impl.GetAsDOMMatrix(), creationContext, isolate);
    case Float32ArrayOrFloat64ArrayOrDOMMatrix::SpecificType::kFloat32Array:
      return ToV8(impl.GetAsFloat32Array(), creationContext, isolate);
    case Float32ArrayOrFloat64ArrayOrDOMMatrix::SpecificType::kFloat64Array:
      return ToV8(impl.GetAsFloat64Array(), creationContext, isolate);
    default:
      NOTREACHED();
  }
  return v8::Local<v8::Value>();
}

Float32ArrayOrFloat64ArrayOrDOMMatrix NativeValueTraits<Float32ArrayOrFloat64ArrayOrDOMMatrix>::NativeValue(
    v8::Isolate* isolate, v8::Local<v8::Value> value, ExceptionState& exception_state) {
  Float32ArrayOrFloat64ArrayOrDOMMatrix impl;
  V8Float32ArrayOrFloat64ArrayOrDOMMatrix::ToImpl(isolate, value, impl, UnionTypeConversionMode::kNotNullable, exception_state);
  return impl;
}

}  // namespace blink
