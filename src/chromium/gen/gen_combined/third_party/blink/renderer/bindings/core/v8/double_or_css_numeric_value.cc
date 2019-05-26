// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated from the Jinja2 template
// third_party/blink/renderer/bindings/templates/union_container.cc.tmpl
// by the script code_generator_v8.py.
// DO NOT MODIFY!

// clang-format off
#include "third_party/blink/renderer/bindings/core/v8/double_or_css_numeric_value.h"

#include "base/stl_util.h"
#include "third_party/blink/renderer/bindings/core/v8/idl_types.h"
#include "third_party/blink/renderer/bindings/core/v8/native_value_traits_impl.h"
#include "third_party/blink/renderer/bindings/core/v8/to_v8_for_core.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_css_numeric_value.h"

namespace blink {

DoubleOrCSSNumericValue::DoubleOrCSSNumericValue() : type_(SpecificType::kNone) {}

CSSNumericValue* DoubleOrCSSNumericValue::GetAsCSSNumericValue() const {
  DCHECK(IsCSSNumericValue());
  return css_numeric_value_;
}

void DoubleOrCSSNumericValue::SetCSSNumericValue(CSSNumericValue* value) {
  DCHECK(IsNull());
  css_numeric_value_ = value;
  type_ = SpecificType::kCSSNumericValue;
}

DoubleOrCSSNumericValue DoubleOrCSSNumericValue::FromCSSNumericValue(CSSNumericValue* value) {
  DoubleOrCSSNumericValue container;
  container.SetCSSNumericValue(value);
  return container;
}

double DoubleOrCSSNumericValue::GetAsDouble() const {
  DCHECK(IsDouble());
  return double_;
}

void DoubleOrCSSNumericValue::SetDouble(double value) {
  DCHECK(IsNull());
  double_ = value;
  type_ = SpecificType::kDouble;
}

DoubleOrCSSNumericValue DoubleOrCSSNumericValue::FromDouble(double value) {
  DoubleOrCSSNumericValue container;
  container.SetDouble(value);
  return container;
}

DoubleOrCSSNumericValue::DoubleOrCSSNumericValue(const DoubleOrCSSNumericValue&) = default;
DoubleOrCSSNumericValue::~DoubleOrCSSNumericValue() = default;
DoubleOrCSSNumericValue& DoubleOrCSSNumericValue::operator=(const DoubleOrCSSNumericValue&) = default;

void DoubleOrCSSNumericValue::Trace(blink::Visitor* visitor) {
  visitor->Trace(css_numeric_value_);
}

void V8DoubleOrCSSNumericValue::ToImpl(
    v8::Isolate* isolate,
    v8::Local<v8::Value> v8_value,
    DoubleOrCSSNumericValue& impl,
    UnionTypeConversionMode conversion_mode,
    ExceptionState& exception_state) {
  if (v8_value.IsEmpty())
    return;

  if (conversion_mode == UnionTypeConversionMode::kNullable && IsUndefinedOrNull(v8_value))
    return;

  if (V8CSSNumericValue::HasInstance(v8_value, isolate)) {
    CSSNumericValue* cpp_value = V8CSSNumericValue::ToImpl(v8::Local<v8::Object>::Cast(v8_value));
    impl.SetCSSNumericValue(cpp_value);
    return;
  }

  if (v8_value->IsNumber()) {
    double cpp_value = NativeValueTraits<IDLDouble>::NativeValue(isolate, v8_value, exception_state);
    if (exception_state.HadException())
      return;
    impl.SetDouble(cpp_value);
    return;
  }

  {
    double cpp_value = NativeValueTraits<IDLDouble>::NativeValue(isolate, v8_value, exception_state);
    if (exception_state.HadException())
      return;
    impl.SetDouble(cpp_value);
    return;
  }
}

v8::Local<v8::Value> ToV8(const DoubleOrCSSNumericValue& impl, v8::Local<v8::Object> creationContext, v8::Isolate* isolate) {
  switch (impl.type_) {
    case DoubleOrCSSNumericValue::SpecificType::kNone:
      return v8::Null(isolate);
    case DoubleOrCSSNumericValue::SpecificType::kCSSNumericValue:
      return ToV8(impl.GetAsCSSNumericValue(), creationContext, isolate);
    case DoubleOrCSSNumericValue::SpecificType::kDouble:
      return v8::Number::New(isolate, impl.GetAsDouble());
    default:
      NOTREACHED();
  }
  return v8::Local<v8::Value>();
}

DoubleOrCSSNumericValue NativeValueTraits<DoubleOrCSSNumericValue>::NativeValue(
    v8::Isolate* isolate, v8::Local<v8::Value> value, ExceptionState& exception_state) {
  DoubleOrCSSNumericValue impl;
  V8DoubleOrCSSNumericValue::ToImpl(isolate, value, impl, UnionTypeConversionMode::kNotNullable, exception_state);
  return impl;
}

}  // namespace blink
