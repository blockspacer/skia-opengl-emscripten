// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated from the Jinja2 template
// third_party/blink/renderer/bindings/templates/union_container.cc.tmpl
// by the script code_generator_v8.py.
// DO NOT MODIFY!

// clang-format off
#include "third_party/blink/renderer/bindings/modules/v8/string_or_unsigned_long.h"

#include "base/stl_util.h"
#include "third_party/blink/renderer/bindings/core/v8/idl_types.h"
#include "third_party/blink/renderer/bindings/core/v8/native_value_traits_impl.h"
#include "third_party/blink/renderer/bindings/core/v8/to_v8_for_core.h"

namespace blink {

StringOrUnsignedLong::StringOrUnsignedLong() : type_(SpecificType::kNone) {}

const String& StringOrUnsignedLong::GetAsString() const {
  DCHECK(IsString());
  return string_;
}

void StringOrUnsignedLong::SetString(const String& value) {
  DCHECK(IsNull());
  string_ = value;
  type_ = SpecificType::kString;
}

StringOrUnsignedLong StringOrUnsignedLong::FromString(const String& value) {
  StringOrUnsignedLong container;
  container.SetString(value);
  return container;
}

uint32_t StringOrUnsignedLong::GetAsUnsignedLong() const {
  DCHECK(IsUnsignedLong());
  return unsigned_long_;
}

void StringOrUnsignedLong::SetUnsignedLong(uint32_t value) {
  DCHECK(IsNull());
  unsigned_long_ = value;
  type_ = SpecificType::kUnsignedLong;
}

StringOrUnsignedLong StringOrUnsignedLong::FromUnsignedLong(uint32_t value) {
  StringOrUnsignedLong container;
  container.SetUnsignedLong(value);
  return container;
}

StringOrUnsignedLong::StringOrUnsignedLong(const StringOrUnsignedLong&) = default;
StringOrUnsignedLong::~StringOrUnsignedLong() = default;
StringOrUnsignedLong& StringOrUnsignedLong::operator=(const StringOrUnsignedLong&) = default;

void StringOrUnsignedLong::Trace(blink::Visitor* visitor) {
}

void V8StringOrUnsignedLong::ToImpl(
    v8::Isolate* isolate,
    v8::Local<v8::Value> v8_value,
    StringOrUnsignedLong& impl,
    UnionTypeConversionMode conversion_mode,
    ExceptionState& exception_state) {
  if (v8_value.IsEmpty())
    return;

  if (conversion_mode == UnionTypeConversionMode::kNullable && IsUndefinedOrNull(v8_value))
    return;

  if (v8_value->IsNumber()) {
    uint32_t cpp_value = NativeValueTraits<IDLUnsignedLong>::NativeValue(isolate, v8_value, exception_state);
    if (exception_state.HadException())
      return;
    impl.SetUnsignedLong(cpp_value);
    return;
  }

  {
    V8StringResource<> cpp_value = v8_value;
    if (!cpp_value.Prepare(exception_state))
      return;
    impl.SetString(cpp_value);
    return;
  }
}

v8::Local<v8::Value> ToV8(const StringOrUnsignedLong& impl, v8::Local<v8::Object> creationContext, v8::Isolate* isolate) {
  switch (impl.type_) {
    case StringOrUnsignedLong::SpecificType::kNone:
      return v8::Null(isolate);
    case StringOrUnsignedLong::SpecificType::kString:
      return V8String(isolate, impl.GetAsString());
    case StringOrUnsignedLong::SpecificType::kUnsignedLong:
      return v8::Integer::NewFromUnsigned(isolate, impl.GetAsUnsignedLong());
    default:
      NOTREACHED();
  }
  return v8::Local<v8::Value>();
}

StringOrUnsignedLong NativeValueTraits<StringOrUnsignedLong>::NativeValue(
    v8::Isolate* isolate, v8::Local<v8::Value> value, ExceptionState& exception_state) {
  StringOrUnsignedLong impl;
  V8StringOrUnsignedLong::ToImpl(isolate, value, impl, UnionTypeConversionMode::kNotNullable, exception_state);
  return impl;
}

}  // namespace blink
