// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated from the Jinja2 template
// third_party/blink/renderer/bindings/templates/union_container.cc.tmpl
// by the script code_generator_v8.py.
// DO NOT MODIFY!

// clang-format off
#include "third_party/blink/renderer/bindings/core/v8/string_treat_null_as_empty_string_or_trusted_script.h"

#include "base/stl_util.h"
#include "third_party/blink/renderer/bindings/core/v8/idl_types.h"
#include "third_party/blink/renderer/bindings/core/v8/native_value_traits_impl.h"
#include "third_party/blink/renderer/bindings/core/v8/to_v8_for_core.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_trusted_script.h"

namespace blink {

StringTreatNullAsEmptyStringOrTrustedScript::StringTreatNullAsEmptyStringOrTrustedScript() : type_(SpecificType::kNone) {}

const String& StringTreatNullAsEmptyStringOrTrustedScript::GetAsString() const {
  DCHECK(IsString());
  return string_treat_null_as_empty_string_;
}

void StringTreatNullAsEmptyStringOrTrustedScript::SetString(const String& value) {
  DCHECK(IsNull());
  string_treat_null_as_empty_string_ = value;
  type_ = SpecificType::kStringTreatNullAsEmptyString;
}

StringTreatNullAsEmptyStringOrTrustedScript StringTreatNullAsEmptyStringOrTrustedScript::FromString(const String& value) {
  StringTreatNullAsEmptyStringOrTrustedScript container;
  container.SetString(value);
  return container;
}

TrustedScript* StringTreatNullAsEmptyStringOrTrustedScript::GetAsTrustedScript() const {
  DCHECK(IsTrustedScript());
  return trusted_script_;
}

void StringTreatNullAsEmptyStringOrTrustedScript::SetTrustedScript(TrustedScript* value) {
  DCHECK(IsNull());
  trusted_script_ = value;
  type_ = SpecificType::kTrustedScript;
}

StringTreatNullAsEmptyStringOrTrustedScript StringTreatNullAsEmptyStringOrTrustedScript::FromTrustedScript(TrustedScript* value) {
  StringTreatNullAsEmptyStringOrTrustedScript container;
  container.SetTrustedScript(value);
  return container;
}

StringTreatNullAsEmptyStringOrTrustedScript::StringTreatNullAsEmptyStringOrTrustedScript(const StringTreatNullAsEmptyStringOrTrustedScript&) = default;
StringTreatNullAsEmptyStringOrTrustedScript::~StringTreatNullAsEmptyStringOrTrustedScript() = default;
StringTreatNullAsEmptyStringOrTrustedScript& StringTreatNullAsEmptyStringOrTrustedScript::operator=(const StringTreatNullAsEmptyStringOrTrustedScript&) = default;

void StringTreatNullAsEmptyStringOrTrustedScript::Trace(blink::Visitor* visitor) {
  visitor->Trace(trusted_script_);
}

void V8StringTreatNullAsEmptyStringOrTrustedScript::ToImpl(
    v8::Isolate* isolate,
    v8::Local<v8::Value> v8_value,
    StringTreatNullAsEmptyStringOrTrustedScript& impl,
    UnionTypeConversionMode conversion_mode,
    ExceptionState& exception_state) {
  if (v8_value.IsEmpty())
    return;

  if (conversion_mode == UnionTypeConversionMode::kNullable && IsUndefinedOrNull(v8_value))
    return;

  if (V8TrustedScript::HasInstance(v8_value, isolate)) {
    TrustedScript* cpp_value = V8TrustedScript::ToImpl(v8::Local<v8::Object>::Cast(v8_value));
    impl.SetTrustedScript(cpp_value);
    return;
  }

  {
    V8StringResource<kTreatNullAsEmptyString> cpp_value = v8_value;
    if (!cpp_value.Prepare(exception_state))
      return;
    impl.SetString(cpp_value);
    return;
  }
}

v8::Local<v8::Value> ToV8(const StringTreatNullAsEmptyStringOrTrustedScript& impl, v8::Local<v8::Object> creationContext, v8::Isolate* isolate) {
  switch (impl.type_) {
    case StringTreatNullAsEmptyStringOrTrustedScript::SpecificType::kNone:
      return v8::Null(isolate);
    case StringTreatNullAsEmptyStringOrTrustedScript::SpecificType::kStringTreatNullAsEmptyString:
      return V8String(isolate, impl.GetAsString());
    case StringTreatNullAsEmptyStringOrTrustedScript::SpecificType::kTrustedScript:
      return ToV8(impl.GetAsTrustedScript(), creationContext, isolate);
    default:
      NOTREACHED();
  }
  return v8::Local<v8::Value>();
}

StringTreatNullAsEmptyStringOrTrustedScript NativeValueTraits<StringTreatNullAsEmptyStringOrTrustedScript>::NativeValue(
    v8::Isolate* isolate, v8::Local<v8::Value> value, ExceptionState& exception_state) {
  StringTreatNullAsEmptyStringOrTrustedScript impl;
  V8StringTreatNullAsEmptyStringOrTrustedScript::ToImpl(isolate, value, impl, UnionTypeConversionMode::kNotNullable, exception_state);
  return impl;
}

}  // namespace blink
