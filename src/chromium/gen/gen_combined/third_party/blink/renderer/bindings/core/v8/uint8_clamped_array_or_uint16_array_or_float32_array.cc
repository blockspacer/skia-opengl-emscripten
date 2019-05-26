// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated from the Jinja2 template
// third_party/blink/renderer/bindings/templates/union_container.cc.tmpl
// by the script code_generator_v8.py.
// DO NOT MODIFY!

// clang-format off
#include "third_party/blink/renderer/bindings/core/v8/uint8_clamped_array_or_uint16_array_or_float32_array.h"

#include "base/stl_util.h"
#include "third_party/blink/renderer/bindings/core/v8/to_v8_for_core.h"

namespace blink {

Uint8ClampedArrayOrUint16ArrayOrFloat32Array::Uint8ClampedArrayOrUint16ArrayOrFloat32Array() : type_(SpecificType::kNone) {}

NotShared<DOMFloat32Array> Uint8ClampedArrayOrUint16ArrayOrFloat32Array::GetAsFloat32Array() const {
  DCHECK(IsFloat32Array());
  return float32_array_;
}

void Uint8ClampedArrayOrUint16ArrayOrFloat32Array::SetFloat32Array(NotShared<DOMFloat32Array> value) {
  DCHECK(IsNull());
  float32_array_ = Member<DOMFloat32Array>(value.View());
  type_ = SpecificType::kFloat32Array;
}

Uint8ClampedArrayOrUint16ArrayOrFloat32Array Uint8ClampedArrayOrUint16ArrayOrFloat32Array::FromFloat32Array(NotShared<DOMFloat32Array> value) {
  Uint8ClampedArrayOrUint16ArrayOrFloat32Array container;
  container.SetFloat32Array(value);
  return container;
}

NotShared<DOMUint16Array> Uint8ClampedArrayOrUint16ArrayOrFloat32Array::GetAsUint16Array() const {
  DCHECK(IsUint16Array());
  return uint16_array_;
}

void Uint8ClampedArrayOrUint16ArrayOrFloat32Array::SetUint16Array(NotShared<DOMUint16Array> value) {
  DCHECK(IsNull());
  uint16_array_ = Member<DOMUint16Array>(value.View());
  type_ = SpecificType::kUint16Array;
}

Uint8ClampedArrayOrUint16ArrayOrFloat32Array Uint8ClampedArrayOrUint16ArrayOrFloat32Array::FromUint16Array(NotShared<DOMUint16Array> value) {
  Uint8ClampedArrayOrUint16ArrayOrFloat32Array container;
  container.SetUint16Array(value);
  return container;
}

NotShared<DOMUint8ClampedArray> Uint8ClampedArrayOrUint16ArrayOrFloat32Array::GetAsUint8ClampedArray() const {
  DCHECK(IsUint8ClampedArray());
  return uint8_clamped_array_;
}

void Uint8ClampedArrayOrUint16ArrayOrFloat32Array::SetUint8ClampedArray(NotShared<DOMUint8ClampedArray> value) {
  DCHECK(IsNull());
  uint8_clamped_array_ = Member<DOMUint8ClampedArray>(value.View());
  type_ = SpecificType::kUint8ClampedArray;
}

Uint8ClampedArrayOrUint16ArrayOrFloat32Array Uint8ClampedArrayOrUint16ArrayOrFloat32Array::FromUint8ClampedArray(NotShared<DOMUint8ClampedArray> value) {
  Uint8ClampedArrayOrUint16ArrayOrFloat32Array container;
  container.SetUint8ClampedArray(value);
  return container;
}

Uint8ClampedArrayOrUint16ArrayOrFloat32Array::Uint8ClampedArrayOrUint16ArrayOrFloat32Array(const Uint8ClampedArrayOrUint16ArrayOrFloat32Array&) = default;
Uint8ClampedArrayOrUint16ArrayOrFloat32Array::~Uint8ClampedArrayOrUint16ArrayOrFloat32Array() = default;
Uint8ClampedArrayOrUint16ArrayOrFloat32Array& Uint8ClampedArrayOrUint16ArrayOrFloat32Array::operator=(const Uint8ClampedArrayOrUint16ArrayOrFloat32Array&) = default;

void Uint8ClampedArrayOrUint16ArrayOrFloat32Array::Trace(blink::Visitor* visitor) {
  visitor->Trace(float32_array_);
  visitor->Trace(uint16_array_);
  visitor->Trace(uint8_clamped_array_);
}

void V8Uint8ClampedArrayOrUint16ArrayOrFloat32Array::ToImpl(
    v8::Isolate* isolate,
    v8::Local<v8::Value> v8_value,
    Uint8ClampedArrayOrUint16ArrayOrFloat32Array& impl,
    UnionTypeConversionMode conversion_mode,
    ExceptionState& exception_state) {
  if (v8_value.IsEmpty())
    return;

  if (conversion_mode == UnionTypeConversionMode::kNullable && IsUndefinedOrNull(v8_value))
    return;

  if (v8_value->IsFloat32Array()) {
    NotShared<DOMFloat32Array> cpp_value = ToNotShared<NotShared<DOMFloat32Array>>(isolate, v8_value, exception_state);
    if (exception_state.HadException())
      return;
    impl.SetFloat32Array(cpp_value);
    return;
  }

  if (v8_value->IsUint16Array()) {
    NotShared<DOMUint16Array> cpp_value = ToNotShared<NotShared<DOMUint16Array>>(isolate, v8_value, exception_state);
    if (exception_state.HadException())
      return;
    impl.SetUint16Array(cpp_value);
    return;
  }

  if (v8_value->IsUint8ClampedArray()) {
    NotShared<DOMUint8ClampedArray> cpp_value = ToNotShared<NotShared<DOMUint8ClampedArray>>(isolate, v8_value, exception_state);
    if (exception_state.HadException())
      return;
    impl.SetUint8ClampedArray(cpp_value);
    return;
  }

  exception_state.ThrowTypeError("The provided value is not of type '(Uint8ClampedArray or Uint16Array or Float32Array)'");
}

v8::Local<v8::Value> ToV8(const Uint8ClampedArrayOrUint16ArrayOrFloat32Array& impl, v8::Local<v8::Object> creationContext, v8::Isolate* isolate) {
  switch (impl.type_) {
    case Uint8ClampedArrayOrUint16ArrayOrFloat32Array::SpecificType::kNone:
      return v8::Null(isolate);
    case Uint8ClampedArrayOrUint16ArrayOrFloat32Array::SpecificType::kFloat32Array:
      return ToV8(impl.GetAsFloat32Array(), creationContext, isolate);
    case Uint8ClampedArrayOrUint16ArrayOrFloat32Array::SpecificType::kUint16Array:
      return ToV8(impl.GetAsUint16Array(), creationContext, isolate);
    case Uint8ClampedArrayOrUint16ArrayOrFloat32Array::SpecificType::kUint8ClampedArray:
      return ToV8(impl.GetAsUint8ClampedArray(), creationContext, isolate);
    default:
      NOTREACHED();
  }
  return v8::Local<v8::Value>();
}

Uint8ClampedArrayOrUint16ArrayOrFloat32Array NativeValueTraits<Uint8ClampedArrayOrUint16ArrayOrFloat32Array>::NativeValue(
    v8::Isolate* isolate, v8::Local<v8::Value> value, ExceptionState& exception_state) {
  Uint8ClampedArrayOrUint16ArrayOrFloat32Array impl;
  V8Uint8ClampedArrayOrUint16ArrayOrFloat32Array::ToImpl(isolate, value, impl, UnionTypeConversionMode::kNotNullable, exception_state);
  return impl;
}

}  // namespace blink
