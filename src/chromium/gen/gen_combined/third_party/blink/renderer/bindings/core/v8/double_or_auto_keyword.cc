// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated from the Jinja2 template
// third_party/blink/renderer/bindings/templates/union_container.cc.tmpl
// by the script code_generator_v8.py.
// DO NOT MODIFY!

// clang-format off
#include "third_party/blink/renderer/bindings/core/v8/double_or_auto_keyword.h"

#include "base/stl_util.h"
#include "third_party/blink/renderer/bindings/core/v8/idl_types.h"
#include "third_party/blink/renderer/bindings/core/v8/native_value_traits_impl.h"
#include "third_party/blink/renderer/bindings/core/v8/to_v8_for_core.h"

namespace blink {

DoubleOrAutoKeyword::DoubleOrAutoKeyword() : type_(SpecificType::kNone) {}

const String& DoubleOrAutoKeyword::GetAsAutoKeyword() const {
  DCHECK(IsAutoKeyword());
  return auto_keyword_;
}

void DoubleOrAutoKeyword::SetAutoKeyword(const String& value) {
  DCHECK(IsNull());
  NonThrowableExceptionState exception_state;
  const char* kValidValues[] = {
      "auto",
  };
  if (!IsValidEnum(value, kValidValues, base::size(kValidValues), "AutoKeyword", exception_state)) {
    NOTREACHED();
    return;
  }
  auto_keyword_ = value;
  type_ = SpecificType::kAutoKeyword;
}

DoubleOrAutoKeyword DoubleOrAutoKeyword::FromAutoKeyword(const String& value) {
  DoubleOrAutoKeyword container;
  container.SetAutoKeyword(value);
  return container;
}

double DoubleOrAutoKeyword::GetAsDouble() const {
  DCHECK(IsDouble());
  return double_;
}

void DoubleOrAutoKeyword::SetDouble(double value) {
  DCHECK(IsNull());
  double_ = value;
  type_ = SpecificType::kDouble;
}

DoubleOrAutoKeyword DoubleOrAutoKeyword::FromDouble(double value) {
  DoubleOrAutoKeyword container;
  container.SetDouble(value);
  return container;
}

DoubleOrAutoKeyword::DoubleOrAutoKeyword(const DoubleOrAutoKeyword&) = default;
DoubleOrAutoKeyword::~DoubleOrAutoKeyword() = default;
DoubleOrAutoKeyword& DoubleOrAutoKeyword::operator=(const DoubleOrAutoKeyword&) = default;

void DoubleOrAutoKeyword::Trace(blink::Visitor* visitor) {
}

void V8DoubleOrAutoKeyword::ToImpl(
    v8::Isolate* isolate,
    v8::Local<v8::Value> v8_value,
    DoubleOrAutoKeyword& impl,
    UnionTypeConversionMode conversion_mode,
    ExceptionState& exception_state) {
  if (v8_value.IsEmpty())
    return;

  if (conversion_mode == UnionTypeConversionMode::kNullable && IsUndefinedOrNull(v8_value))
    return;

  if (v8_value->IsNumber()) {
    double cpp_value = NativeValueTraits<IDLDouble>::NativeValue(isolate, v8_value, exception_state);
    if (exception_state.HadException())
      return;
    impl.SetDouble(cpp_value);
    return;
  }

  {
    V8StringResource<> cpp_value = v8_value;
    if (!cpp_value.Prepare(exception_state))
      return;
    const char* kValidValues[] = {
        "auto",
    };
    if (!IsValidEnum(cpp_value, kValidValues, base::size(kValidValues), "AutoKeyword", exception_state))
      return;
    impl.SetAutoKeyword(cpp_value);
    return;
  }
}

v8::Local<v8::Value> ToV8(const DoubleOrAutoKeyword& impl, v8::Local<v8::Object> creationContext, v8::Isolate* isolate) {
  switch (impl.type_) {
    case DoubleOrAutoKeyword::SpecificType::kNone:
      return v8::Null(isolate);
    case DoubleOrAutoKeyword::SpecificType::kAutoKeyword:
      return V8String(isolate, impl.GetAsAutoKeyword());
    case DoubleOrAutoKeyword::SpecificType::kDouble:
      return v8::Number::New(isolate, impl.GetAsDouble());
    default:
      NOTREACHED();
  }
  return v8::Local<v8::Value>();
}

DoubleOrAutoKeyword NativeValueTraits<DoubleOrAutoKeyword>::NativeValue(
    v8::Isolate* isolate, v8::Local<v8::Value> value, ExceptionState& exception_state) {
  DoubleOrAutoKeyword impl;
  V8DoubleOrAutoKeyword::ToImpl(isolate, value, impl, UnionTypeConversionMode::kNotNullable, exception_state);
  return impl;
}

}  // namespace blink
