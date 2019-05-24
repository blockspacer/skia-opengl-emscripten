// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated from the Jinja2 template
// third_party/blink/renderer/bindings/templates/union_container.cc.tmpl
// by the script code_generator_v8.py.
// DO NOT MODIFY!

// clang-format off
#include "third_party/blink/renderer/bindings/modules/v8/string_or_string_sequence_or_constrain_dom_string_parameters.h"

#include "base/stl_util.h"
#include "third_party/blink/renderer/bindings/core/v8/idl_types.h"
#include "third_party/blink/renderer/bindings/core/v8/native_value_traits_impl.h"
#include "third_party/blink/renderer/bindings/core/v8/to_v8_for_core.h"

namespace blink {

StringOrStringSequenceOrConstrainDOMStringParameters::StringOrStringSequenceOrConstrainDOMStringParameters() : type_(SpecificType::kNone) {}

ConstrainDOMStringParameters* StringOrStringSequenceOrConstrainDOMStringParameters::GetAsConstrainDOMStringParameters() const {
  DCHECK(IsConstrainDOMStringParameters());
  return constrain_dom_string_parameters_;
}

void StringOrStringSequenceOrConstrainDOMStringParameters::SetConstrainDOMStringParameters(ConstrainDOMStringParameters* value) {
  DCHECK(IsNull());
  constrain_dom_string_parameters_ = value;
  type_ = SpecificType::kConstrainDOMStringParameters;
}

StringOrStringSequenceOrConstrainDOMStringParameters StringOrStringSequenceOrConstrainDOMStringParameters::FromConstrainDOMStringParameters(ConstrainDOMStringParameters* value) {
  StringOrStringSequenceOrConstrainDOMStringParameters container;
  container.SetConstrainDOMStringParameters(value);
  return container;
}

const String& StringOrStringSequenceOrConstrainDOMStringParameters::GetAsString() const {
  DCHECK(IsString());
  return string_;
}

void StringOrStringSequenceOrConstrainDOMStringParameters::SetString(const String& value) {
  DCHECK(IsNull());
  string_ = value;
  type_ = SpecificType::kString;
}

StringOrStringSequenceOrConstrainDOMStringParameters StringOrStringSequenceOrConstrainDOMStringParameters::FromString(const String& value) {
  StringOrStringSequenceOrConstrainDOMStringParameters container;
  container.SetString(value);
  return container;
}

const Vector<String>& StringOrStringSequenceOrConstrainDOMStringParameters::GetAsStringSequence() const {
  DCHECK(IsStringSequence());
  return string_sequence_;
}

void StringOrStringSequenceOrConstrainDOMStringParameters::SetStringSequence(const Vector<String>& value) {
  DCHECK(IsNull());
  string_sequence_ = value;
  type_ = SpecificType::kStringSequence;
}

StringOrStringSequenceOrConstrainDOMStringParameters StringOrStringSequenceOrConstrainDOMStringParameters::FromStringSequence(const Vector<String>& value) {
  StringOrStringSequenceOrConstrainDOMStringParameters container;
  container.SetStringSequence(value);
  return container;
}

StringOrStringSequenceOrConstrainDOMStringParameters::StringOrStringSequenceOrConstrainDOMStringParameters(const StringOrStringSequenceOrConstrainDOMStringParameters&) = default;
StringOrStringSequenceOrConstrainDOMStringParameters::~StringOrStringSequenceOrConstrainDOMStringParameters() = default;
StringOrStringSequenceOrConstrainDOMStringParameters& StringOrStringSequenceOrConstrainDOMStringParameters::operator=(const StringOrStringSequenceOrConstrainDOMStringParameters&) = default;

void StringOrStringSequenceOrConstrainDOMStringParameters::Trace(blink::Visitor* visitor) {
  visitor->Trace(constrain_dom_string_parameters_);
}

void V8StringOrStringSequenceOrConstrainDOMStringParameters::ToImpl(
    v8::Isolate* isolate,
    v8::Local<v8::Value> v8_value,
    StringOrStringSequenceOrConstrainDOMStringParameters& impl,
    UnionTypeConversionMode conversion_mode,
    ExceptionState& exception_state) {
  if (v8_value.IsEmpty())
    return;

  if (conversion_mode == UnionTypeConversionMode::kNullable && IsUndefinedOrNull(v8_value))
    return;

  if (IsUndefinedOrNull(v8_value)) {
    ConstrainDOMStringParameters* cpp_value = NativeValueTraits<ConstrainDOMStringParameters>::NativeValue(isolate, v8_value, exception_state);
    if (exception_state.HadException())
      return;
    impl.SetConstrainDOMStringParameters(cpp_value);
    return;
  }

  if (HasCallableIteratorSymbol(isolate, v8_value, exception_state)) {
    Vector<String> cpp_value = NativeValueTraits<IDLSequence<IDLString>>::NativeValue(isolate, v8_value, exception_state);
    if (exception_state.HadException())
      return;
    impl.SetStringSequence(cpp_value);
    return;
  }

  if (v8_value->IsObject()) {
    ConstrainDOMStringParameters* cpp_value = NativeValueTraits<ConstrainDOMStringParameters>::NativeValue(isolate, v8_value, exception_state);
    if (exception_state.HadException())
      return;
    impl.SetConstrainDOMStringParameters(cpp_value);
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

v8::Local<v8::Value> ToV8(const StringOrStringSequenceOrConstrainDOMStringParameters& impl, v8::Local<v8::Object> creationContext, v8::Isolate* isolate) {
  switch (impl.type_) {
    case StringOrStringSequenceOrConstrainDOMStringParameters::SpecificType::kNone:
      return v8::Null(isolate);
    case StringOrStringSequenceOrConstrainDOMStringParameters::SpecificType::kConstrainDOMStringParameters:
      return ToV8(impl.GetAsConstrainDOMStringParameters(), creationContext, isolate);
    case StringOrStringSequenceOrConstrainDOMStringParameters::SpecificType::kString:
      return V8String(isolate, impl.GetAsString());
    case StringOrStringSequenceOrConstrainDOMStringParameters::SpecificType::kStringSequence:
      return ToV8(impl.GetAsStringSequence(), creationContext, isolate);
    default:
      NOTREACHED();
  }
  return v8::Local<v8::Value>();
}

StringOrStringSequenceOrConstrainDOMStringParameters NativeValueTraits<StringOrStringSequenceOrConstrainDOMStringParameters>::NativeValue(
    v8::Isolate* isolate, v8::Local<v8::Value> value, ExceptionState& exception_state) {
  StringOrStringSequenceOrConstrainDOMStringParameters impl;
  V8StringOrStringSequenceOrConstrainDOMStringParameters::ToImpl(isolate, value, impl, UnionTypeConversionMode::kNotNullable, exception_state);
  return impl;
}

}  // namespace blink
