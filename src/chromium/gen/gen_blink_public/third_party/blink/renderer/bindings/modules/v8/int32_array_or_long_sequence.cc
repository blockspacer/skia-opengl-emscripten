// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated from the Jinja2 template
// third_party/blink/renderer/bindings/templates/union_container.cc.tmpl
// by the script code_generator_v8.py.
// DO NOT MODIFY!

// clang-format off
#include "third_party/blink/renderer/bindings/modules/v8/int32_array_or_long_sequence.h"

#include "base/stl_util.h"
#include "third_party/blink/renderer/bindings/core/v8/idl_types.h"
#include "third_party/blink/renderer/bindings/core/v8/native_value_traits_impl.h"
#include "third_party/blink/renderer/bindings/core/v8/to_v8_for_core.h"

namespace blink {

Int32ArrayOrLongSequence::Int32ArrayOrLongSequence() : type_(SpecificType::kNone) {}

NotShared<DOMInt32Array> Int32ArrayOrLongSequence::GetAsInt32Array() const {
  DCHECK(IsInt32Array());
  return int32_array_;
}

void Int32ArrayOrLongSequence::SetInt32Array(NotShared<DOMInt32Array> value) {
  DCHECK(IsNull());
  int32_array_ = Member<DOMInt32Array>(value.View());
  type_ = SpecificType::kInt32Array;
}

Int32ArrayOrLongSequence Int32ArrayOrLongSequence::FromInt32Array(NotShared<DOMInt32Array> value) {
  Int32ArrayOrLongSequence container;
  container.SetInt32Array(value);
  return container;
}

const Vector<int32_t>& Int32ArrayOrLongSequence::GetAsLongSequence() const {
  DCHECK(IsLongSequence());
  return long_sequence_;
}

void Int32ArrayOrLongSequence::SetLongSequence(const Vector<int32_t>& value) {
  DCHECK(IsNull());
  long_sequence_ = value;
  type_ = SpecificType::kLongSequence;
}

Int32ArrayOrLongSequence Int32ArrayOrLongSequence::FromLongSequence(const Vector<int32_t>& value) {
  Int32ArrayOrLongSequence container;
  container.SetLongSequence(value);
  return container;
}

Int32ArrayOrLongSequence::Int32ArrayOrLongSequence(const Int32ArrayOrLongSequence&) = default;
Int32ArrayOrLongSequence::~Int32ArrayOrLongSequence() = default;
Int32ArrayOrLongSequence& Int32ArrayOrLongSequence::operator=(const Int32ArrayOrLongSequence&) = default;

void Int32ArrayOrLongSequence::Trace(blink::Visitor* visitor) {
  visitor->Trace(int32_array_);
}

void V8Int32ArrayOrLongSequence::ToImpl(
    v8::Isolate* isolate,
    v8::Local<v8::Value> v8_value,
    Int32ArrayOrLongSequence& impl,
    UnionTypeConversionMode conversion_mode,
    ExceptionState& exception_state) {
  if (v8_value.IsEmpty())
    return;

  if (conversion_mode == UnionTypeConversionMode::kNullable && IsUndefinedOrNull(v8_value))
    return;

  if (v8_value->IsInt32Array()) {
    NotShared<DOMInt32Array> cpp_value = ToNotShared<NotShared<DOMInt32Array>>(isolate, v8_value, exception_state);
    if (exception_state.HadException())
      return;
    impl.SetInt32Array(cpp_value);
    return;
  }

  if (HasCallableIteratorSymbol(isolate, v8_value, exception_state)) {
    Vector<int32_t> cpp_value = NativeValueTraits<IDLSequence<IDLLong>>::NativeValue(isolate, v8_value, exception_state);
    if (exception_state.HadException())
      return;
    impl.SetLongSequence(cpp_value);
    return;
  }

  exception_state.ThrowTypeError("The provided value is not of type '(Int32Array or sequence<long>)'");
}

v8::Local<v8::Value> ToV8(const Int32ArrayOrLongSequence& impl, v8::Local<v8::Object> creationContext, v8::Isolate* isolate) {
  switch (impl.type_) {
    case Int32ArrayOrLongSequence::SpecificType::kNone:
      return v8::Null(isolate);
    case Int32ArrayOrLongSequence::SpecificType::kInt32Array:
      return ToV8(impl.GetAsInt32Array(), creationContext, isolate);
    case Int32ArrayOrLongSequence::SpecificType::kLongSequence:
      return ToV8(impl.GetAsLongSequence(), creationContext, isolate);
    default:
      NOTREACHED();
  }
  return v8::Local<v8::Value>();
}

Int32ArrayOrLongSequence NativeValueTraits<Int32ArrayOrLongSequence>::NativeValue(
    v8::Isolate* isolate, v8::Local<v8::Value> value, ExceptionState& exception_state) {
  Int32ArrayOrLongSequence impl;
  V8Int32ArrayOrLongSequence::ToImpl(isolate, value, impl, UnionTypeConversionMode::kNotNullable, exception_state);
  return impl;
}

}  // namespace blink
