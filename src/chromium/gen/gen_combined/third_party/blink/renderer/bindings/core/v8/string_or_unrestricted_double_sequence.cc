// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated from the Jinja2 template
// third_party/blink/renderer/bindings/templates/union_container.cc.tmpl
// by the script code_generator_v8.py.
// DO NOT MODIFY!

// clang-format off
#include "third_party/blink/renderer/bindings/core/v8/string_or_unrestricted_double_sequence.h"

#include "base/stl_util.h"
#include "third_party/blink/renderer/bindings/core/v8/idl_types.h"
#include "third_party/blink/renderer/bindings/core/v8/native_value_traits_impl.h"
#include "third_party/blink/renderer/bindings/core/v8/to_v8_for_core.h"

namespace blink {

StringOrUnrestrictedDoubleSequence::StringOrUnrestrictedDoubleSequence() : type_(SpecificType::kNone) {}

const String& StringOrUnrestrictedDoubleSequence::GetAsString() const {
  DCHECK(IsString());
  return string_;
}

void StringOrUnrestrictedDoubleSequence::SetString(const String& value) {
  DCHECK(IsNull());
  string_ = value;
  type_ = SpecificType::kString;
}

StringOrUnrestrictedDoubleSequence StringOrUnrestrictedDoubleSequence::FromString(const String& value) {
  StringOrUnrestrictedDoubleSequence container;
  container.SetString(value);
  return container;
}

const Vector<double>& StringOrUnrestrictedDoubleSequence::GetAsUnrestrictedDoubleSequence() const {
  DCHECK(IsUnrestrictedDoubleSequence());
  return unrestricted_double_sequence_;
}

void StringOrUnrestrictedDoubleSequence::SetUnrestrictedDoubleSequence(const Vector<double>& value) {
  DCHECK(IsNull());
  unrestricted_double_sequence_ = value;
  type_ = SpecificType::kUnrestrictedDoubleSequence;
}

StringOrUnrestrictedDoubleSequence StringOrUnrestrictedDoubleSequence::FromUnrestrictedDoubleSequence(const Vector<double>& value) {
  StringOrUnrestrictedDoubleSequence container;
  container.SetUnrestrictedDoubleSequence(value);
  return container;
}

StringOrUnrestrictedDoubleSequence::StringOrUnrestrictedDoubleSequence(const StringOrUnrestrictedDoubleSequence&) = default;
StringOrUnrestrictedDoubleSequence::~StringOrUnrestrictedDoubleSequence() = default;
StringOrUnrestrictedDoubleSequence& StringOrUnrestrictedDoubleSequence::operator=(const StringOrUnrestrictedDoubleSequence&) = default;

void StringOrUnrestrictedDoubleSequence::Trace(blink::Visitor* visitor) {
}

void V8StringOrUnrestrictedDoubleSequence::ToImpl(
    v8::Isolate* isolate,
    v8::Local<v8::Value> v8_value,
    StringOrUnrestrictedDoubleSequence& impl,
    UnionTypeConversionMode conversion_mode,
    ExceptionState& exception_state) {
  if (v8_value.IsEmpty())
    return;

  if (conversion_mode == UnionTypeConversionMode::kNullable && IsUndefinedOrNull(v8_value))
    return;

  if (HasCallableIteratorSymbol(isolate, v8_value, exception_state)) {
    Vector<double> cpp_value = NativeValueTraits<IDLSequence<IDLUnrestrictedDouble>>::NativeValue(isolate, v8_value, exception_state);
    if (exception_state.HadException())
      return;
    impl.SetUnrestrictedDoubleSequence(cpp_value);
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

v8::Local<v8::Value> ToV8(const StringOrUnrestrictedDoubleSequence& impl, v8::Local<v8::Object> creationContext, v8::Isolate* isolate) {
  switch (impl.type_) {
    case StringOrUnrestrictedDoubleSequence::SpecificType::kNone:
      return v8::Null(isolate);
    case StringOrUnrestrictedDoubleSequence::SpecificType::kString:
      return V8String(isolate, impl.GetAsString());
    case StringOrUnrestrictedDoubleSequence::SpecificType::kUnrestrictedDoubleSequence:
      return ToV8(impl.GetAsUnrestrictedDoubleSequence(), creationContext, isolate);
    default:
      NOTREACHED();
  }
  return v8::Local<v8::Value>();
}

StringOrUnrestrictedDoubleSequence NativeValueTraits<StringOrUnrestrictedDoubleSequence>::NativeValue(
    v8::Isolate* isolate, v8::Local<v8::Value> value, ExceptionState& exception_state) {
  StringOrUnrestrictedDoubleSequence impl;
  V8StringOrUnrestrictedDoubleSequence::ToImpl(isolate, value, impl, UnionTypeConversionMode::kNotNullable, exception_state);
  return impl;
}

}  // namespace blink
