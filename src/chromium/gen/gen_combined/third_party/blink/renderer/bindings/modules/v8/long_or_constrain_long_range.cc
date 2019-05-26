// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated from the Jinja2 template
// third_party/blink/renderer/bindings/templates/union_container.cc.tmpl
// by the script code_generator_v8.py.
// DO NOT MODIFY!

// clang-format off
#include "third_party/blink/renderer/bindings/modules/v8/long_or_constrain_long_range.h"

#include "base/stl_util.h"
#include "third_party/blink/renderer/bindings/core/v8/idl_types.h"
#include "third_party/blink/renderer/bindings/core/v8/native_value_traits_impl.h"
#include "third_party/blink/renderer/bindings/core/v8/to_v8_for_core.h"

namespace blink {

LongOrConstrainLongRange::LongOrConstrainLongRange() : type_(SpecificType::kNone) {}

ConstrainLongRange* LongOrConstrainLongRange::GetAsConstrainLongRange() const {
  DCHECK(IsConstrainLongRange());
  return constrain_long_range_;
}

void LongOrConstrainLongRange::SetConstrainLongRange(ConstrainLongRange* value) {
  DCHECK(IsNull());
  constrain_long_range_ = value;
  type_ = SpecificType::kConstrainLongRange;
}

LongOrConstrainLongRange LongOrConstrainLongRange::FromConstrainLongRange(ConstrainLongRange* value) {
  LongOrConstrainLongRange container;
  container.SetConstrainLongRange(value);
  return container;
}

int32_t LongOrConstrainLongRange::GetAsLong() const {
  DCHECK(IsLong());
  return long_;
}

void LongOrConstrainLongRange::SetLong(int32_t value) {
  DCHECK(IsNull());
  long_ = value;
  type_ = SpecificType::kLong;
}

LongOrConstrainLongRange LongOrConstrainLongRange::FromLong(int32_t value) {
  LongOrConstrainLongRange container;
  container.SetLong(value);
  return container;
}

LongOrConstrainLongRange::LongOrConstrainLongRange(const LongOrConstrainLongRange&) = default;
LongOrConstrainLongRange::~LongOrConstrainLongRange() = default;
LongOrConstrainLongRange& LongOrConstrainLongRange::operator=(const LongOrConstrainLongRange&) = default;

void LongOrConstrainLongRange::Trace(blink::Visitor* visitor) {
  visitor->Trace(constrain_long_range_);
}

void V8LongOrConstrainLongRange::ToImpl(
    v8::Isolate* isolate,
    v8::Local<v8::Value> v8_value,
    LongOrConstrainLongRange& impl,
    UnionTypeConversionMode conversion_mode,
    ExceptionState& exception_state) {
  if (v8_value.IsEmpty())
    return;

  if (conversion_mode == UnionTypeConversionMode::kNullable && IsUndefinedOrNull(v8_value))
    return;

  if (IsUndefinedOrNull(v8_value)) {
    ConstrainLongRange* cpp_value = NativeValueTraits<ConstrainLongRange>::NativeValue(isolate, v8_value, exception_state);
    if (exception_state.HadException())
      return;
    impl.SetConstrainLongRange(cpp_value);
    return;
  }

  if (v8_value->IsObject()) {
    ConstrainLongRange* cpp_value = NativeValueTraits<ConstrainLongRange>::NativeValue(isolate, v8_value, exception_state);
    if (exception_state.HadException())
      return;
    impl.SetConstrainLongRange(cpp_value);
    return;
  }

  if (v8_value->IsNumber()) {
    int32_t cpp_value = NativeValueTraits<IDLLong>::NativeValue(isolate, v8_value, exception_state);
    if (exception_state.HadException())
      return;
    impl.SetLong(cpp_value);
    return;
  }

  {
    int32_t cpp_value = NativeValueTraits<IDLLong>::NativeValue(isolate, v8_value, exception_state);
    if (exception_state.HadException())
      return;
    impl.SetLong(cpp_value);
    return;
  }
}

v8::Local<v8::Value> ToV8(const LongOrConstrainLongRange& impl, v8::Local<v8::Object> creationContext, v8::Isolate* isolate) {
  switch (impl.type_) {
    case LongOrConstrainLongRange::SpecificType::kNone:
      return v8::Null(isolate);
    case LongOrConstrainLongRange::SpecificType::kConstrainLongRange:
      return ToV8(impl.GetAsConstrainLongRange(), creationContext, isolate);
    case LongOrConstrainLongRange::SpecificType::kLong:
      return v8::Integer::New(isolate, impl.GetAsLong());
    default:
      NOTREACHED();
  }
  return v8::Local<v8::Value>();
}

LongOrConstrainLongRange NativeValueTraits<LongOrConstrainLongRange>::NativeValue(
    v8::Isolate* isolate, v8::Local<v8::Value> value, ExceptionState& exception_state) {
  LongOrConstrainLongRange impl;
  V8LongOrConstrainLongRange::ToImpl(isolate, value, impl, UnionTypeConversionMode::kNotNullable, exception_state);
  return impl;
}

}  // namespace blink
