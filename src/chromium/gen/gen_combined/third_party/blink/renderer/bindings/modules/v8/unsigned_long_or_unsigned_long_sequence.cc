// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated from the Jinja2 template
// third_party/blink/renderer/bindings/templates/union_container.cc.tmpl
// by the script code_generator_v8.py.
// DO NOT MODIFY!

// clang-format off
#include "third_party/blink/renderer/bindings/modules/v8/unsigned_long_or_unsigned_long_sequence.h"

#include "base/stl_util.h"
#include "third_party/blink/renderer/bindings/core/v8/idl_types.h"
#include "third_party/blink/renderer/bindings/core/v8/native_value_traits_impl.h"
#include "third_party/blink/renderer/bindings/core/v8/to_v8_for_core.h"

namespace blink {

UnsignedLongOrUnsignedLongSequence::UnsignedLongOrUnsignedLongSequence() : type_(SpecificType::kNone) {}

uint32_t UnsignedLongOrUnsignedLongSequence::GetAsUnsignedLong() const {
  DCHECK(IsUnsignedLong());
  return unsigned_long_;
}

void UnsignedLongOrUnsignedLongSequence::SetUnsignedLong(uint32_t value) {
  DCHECK(IsNull());
  unsigned_long_ = value;
  type_ = SpecificType::kUnsignedLong;
}

UnsignedLongOrUnsignedLongSequence UnsignedLongOrUnsignedLongSequence::FromUnsignedLong(uint32_t value) {
  UnsignedLongOrUnsignedLongSequence container;
  container.SetUnsignedLong(value);
  return container;
}

const Vector<uint32_t>& UnsignedLongOrUnsignedLongSequence::GetAsUnsignedLongSequence() const {
  DCHECK(IsUnsignedLongSequence());
  return unsigned_long_sequence_;
}

void UnsignedLongOrUnsignedLongSequence::SetUnsignedLongSequence(const Vector<uint32_t>& value) {
  DCHECK(IsNull());
  unsigned_long_sequence_ = value;
  type_ = SpecificType::kUnsignedLongSequence;
}

UnsignedLongOrUnsignedLongSequence UnsignedLongOrUnsignedLongSequence::FromUnsignedLongSequence(const Vector<uint32_t>& value) {
  UnsignedLongOrUnsignedLongSequence container;
  container.SetUnsignedLongSequence(value);
  return container;
}

UnsignedLongOrUnsignedLongSequence::UnsignedLongOrUnsignedLongSequence(const UnsignedLongOrUnsignedLongSequence&) = default;
UnsignedLongOrUnsignedLongSequence::~UnsignedLongOrUnsignedLongSequence() = default;
UnsignedLongOrUnsignedLongSequence& UnsignedLongOrUnsignedLongSequence::operator=(const UnsignedLongOrUnsignedLongSequence&) = default;

void UnsignedLongOrUnsignedLongSequence::Trace(blink::Visitor* visitor) {
}

void V8UnsignedLongOrUnsignedLongSequence::ToImpl(
    v8::Isolate* isolate,
    v8::Local<v8::Value> v8_value,
    UnsignedLongOrUnsignedLongSequence& impl,
    UnionTypeConversionMode conversion_mode,
    ExceptionState& exception_state) {
  if (v8_value.IsEmpty())
    return;

  if (conversion_mode == UnionTypeConversionMode::kNullable && IsUndefinedOrNull(v8_value))
    return;

  if (HasCallableIteratorSymbol(isolate, v8_value, exception_state)) {
    Vector<uint32_t> cpp_value = NativeValueTraits<IDLSequence<IDLUnsignedLong>>::NativeValue(isolate, v8_value, exception_state);
    if (exception_state.HadException())
      return;
    impl.SetUnsignedLongSequence(cpp_value);
    return;
  }

  if (v8_value->IsNumber()) {
    uint32_t cpp_value = NativeValueTraits<IDLUnsignedLong>::NativeValue(isolate, v8_value, exception_state);
    if (exception_state.HadException())
      return;
    impl.SetUnsignedLong(cpp_value);
    return;
  }

  {
    uint32_t cpp_value = NativeValueTraits<IDLUnsignedLong>::NativeValue(isolate, v8_value, exception_state);
    if (exception_state.HadException())
      return;
    impl.SetUnsignedLong(cpp_value);
    return;
  }
}

v8::Local<v8::Value> ToV8(const UnsignedLongOrUnsignedLongSequence& impl, v8::Local<v8::Object> creationContext, v8::Isolate* isolate) {
  switch (impl.type_) {
    case UnsignedLongOrUnsignedLongSequence::SpecificType::kNone:
      return v8::Null(isolate);
    case UnsignedLongOrUnsignedLongSequence::SpecificType::kUnsignedLong:
      return v8::Integer::NewFromUnsigned(isolate, impl.GetAsUnsignedLong());
    case UnsignedLongOrUnsignedLongSequence::SpecificType::kUnsignedLongSequence:
      return ToV8(impl.GetAsUnsignedLongSequence(), creationContext, isolate);
    default:
      NOTREACHED();
  }
  return v8::Local<v8::Value>();
}

UnsignedLongOrUnsignedLongSequence NativeValueTraits<UnsignedLongOrUnsignedLongSequence>::NativeValue(
    v8::Isolate* isolate, v8::Local<v8::Value> value, ExceptionState& exception_state) {
  UnsignedLongOrUnsignedLongSequence impl;
  V8UnsignedLongOrUnsignedLongSequence::ToImpl(isolate, value, impl, UnionTypeConversionMode::kNotNullable, exception_state);
  return impl;
}

}  // namespace blink
