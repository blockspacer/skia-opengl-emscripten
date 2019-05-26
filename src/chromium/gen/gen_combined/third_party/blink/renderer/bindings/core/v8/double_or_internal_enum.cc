// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated from the Jinja2 template
// third_party/blink/renderer/bindings/templates/union_container.cc.tmpl
// by the script code_generator_v8.py.
// DO NOT MODIFY!

// clang-format off
#include "third_party/blink/renderer/bindings/core/v8/double_or_internal_enum.h"

#include "base/stl_util.h"
#include "third_party/blink/renderer/bindings/core/v8/idl_types.h"
#include "third_party/blink/renderer/bindings/core/v8/native_value_traits_impl.h"
#include "third_party/blink/renderer/bindings/core/v8/to_v8_for_core.h"

namespace blink {

DoubleOrInternalEnum::DoubleOrInternalEnum() : type_(SpecificType::kNone) {}

double DoubleOrInternalEnum::GetAsDouble() const {
  DCHECK(IsDouble());
  return double_;
}

void DoubleOrInternalEnum::SetDouble(double value) {
  DCHECK(IsNull());
  double_ = value;
  type_ = SpecificType::kDouble;
}

DoubleOrInternalEnum DoubleOrInternalEnum::FromDouble(double value) {
  DoubleOrInternalEnum container;
  container.SetDouble(value);
  return container;
}

const String& DoubleOrInternalEnum::GetAsInternalEnum() const {
  DCHECK(IsInternalEnum());
  return internal_enum_;
}

void DoubleOrInternalEnum::SetInternalEnum(const String& value) {
  DCHECK(IsNull());
  NonThrowableExceptionState exception_state;
  const char* kValidValues[] = {
      "foo",
      "bar",
      "baz",
  };
  if (!IsValidEnum(value, kValidValues, base::size(kValidValues), "InternalEnum", exception_state)) {
    NOTREACHED();
    return;
  }
  internal_enum_ = value;
  type_ = SpecificType::kInternalEnum;
}

DoubleOrInternalEnum DoubleOrInternalEnum::FromInternalEnum(const String& value) {
  DoubleOrInternalEnum container;
  container.SetInternalEnum(value);
  return container;
}

DoubleOrInternalEnum::DoubleOrInternalEnum(const DoubleOrInternalEnum&) = default;
DoubleOrInternalEnum::~DoubleOrInternalEnum() = default;
DoubleOrInternalEnum& DoubleOrInternalEnum::operator=(const DoubleOrInternalEnum&) = default;

void DoubleOrInternalEnum::Trace(blink::Visitor* visitor) {
}

void V8DoubleOrInternalEnum::ToImpl(
    v8::Isolate* isolate,
    v8::Local<v8::Value> v8_value,
    DoubleOrInternalEnum& impl,
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
        "foo",
        "bar",
        "baz",
    };
    if (!IsValidEnum(cpp_value, kValidValues, base::size(kValidValues), "InternalEnum", exception_state))
      return;
    impl.SetInternalEnum(cpp_value);
    return;
  }
}

v8::Local<v8::Value> ToV8(const DoubleOrInternalEnum& impl, v8::Local<v8::Object> creationContext, v8::Isolate* isolate) {
  switch (impl.type_) {
    case DoubleOrInternalEnum::SpecificType::kNone:
      return v8::Null(isolate);
    case DoubleOrInternalEnum::SpecificType::kDouble:
      return v8::Number::New(isolate, impl.GetAsDouble());
    case DoubleOrInternalEnum::SpecificType::kInternalEnum:
      return V8String(isolate, impl.GetAsInternalEnum());
    default:
      NOTREACHED();
  }
  return v8::Local<v8::Value>();
}

DoubleOrInternalEnum NativeValueTraits<DoubleOrInternalEnum>::NativeValue(
    v8::Isolate* isolate, v8::Local<v8::Value> value, ExceptionState& exception_state) {
  DoubleOrInternalEnum impl;
  V8DoubleOrInternalEnum::ToImpl(isolate, value, impl, UnionTypeConversionMode::kNotNullable, exception_state);
  return impl;
}

}  // namespace blink
