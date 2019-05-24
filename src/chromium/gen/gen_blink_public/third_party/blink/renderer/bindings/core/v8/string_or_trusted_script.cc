// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated from the Jinja2 template
// third_party/blink/renderer/bindings/templates/union_container.cc.tmpl
// by the script code_generator_v8.py.
// DO NOT MODIFY!

// clang-format off
#include "third_party/blink/renderer/bindings/core/v8/string_or_trusted_script.h"

#include "base/stl_util.h"
#include "third_party/blink/renderer/bindings/core/v8/idl_types.h"
#include "third_party/blink/renderer/bindings/core/v8/native_value_traits_impl.h"
#include "third_party/blink/renderer/bindings/core/v8/to_v8_for_core.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_trusted_script.h"

namespace blink {

StringOrTrustedScript::StringOrTrustedScript() : type_(SpecificType::kNone) {}

const String& StringOrTrustedScript::GetAsString() const {
  DCHECK(IsString());
  return string_;
}

void StringOrTrustedScript::SetString(const String& value) {
  DCHECK(IsNull());
  string_ = value;
  type_ = SpecificType::kString;
}

StringOrTrustedScript StringOrTrustedScript::FromString(const String& value) {
  StringOrTrustedScript container;
  container.SetString(value);
  return container;
}

TrustedScript* StringOrTrustedScript::GetAsTrustedScript() const {
  DCHECK(IsTrustedScript());
  return trusted_script_;
}

void StringOrTrustedScript::SetTrustedScript(TrustedScript* value) {
  DCHECK(IsNull());
  trusted_script_ = value;
  type_ = SpecificType::kTrustedScript;
}

StringOrTrustedScript StringOrTrustedScript::FromTrustedScript(TrustedScript* value) {
  StringOrTrustedScript container;
  container.SetTrustedScript(value);
  return container;
}

StringOrTrustedScript::StringOrTrustedScript(const StringOrTrustedScript&) = default;
StringOrTrustedScript::~StringOrTrustedScript() = default;
StringOrTrustedScript& StringOrTrustedScript::operator=(const StringOrTrustedScript&) = default;

void StringOrTrustedScript::Trace(blink::Visitor* visitor) {
  visitor->Trace(trusted_script_);
}

void V8StringOrTrustedScript::ToImpl(
    v8::Isolate* isolate,
    v8::Local<v8::Value> v8_value,
    StringOrTrustedScript& impl,
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
    V8StringResource<> cpp_value = v8_value;
    if (!cpp_value.Prepare(exception_state))
      return;
    impl.SetString(cpp_value);
    return;
  }
}

v8::Local<v8::Value> ToV8(const StringOrTrustedScript& impl, v8::Local<v8::Object> creationContext, v8::Isolate* isolate) {
  switch (impl.type_) {
    case StringOrTrustedScript::SpecificType::kNone:
      return v8::Null(isolate);
    case StringOrTrustedScript::SpecificType::kString:
      return V8String(isolate, impl.GetAsString());
    case StringOrTrustedScript::SpecificType::kTrustedScript:
      return ToV8(impl.GetAsTrustedScript(), creationContext, isolate);
    default:
      NOTREACHED();
  }
  return v8::Local<v8::Value>();
}

StringOrTrustedScript NativeValueTraits<StringOrTrustedScript>::NativeValue(
    v8::Isolate* isolate, v8::Local<v8::Value> value, ExceptionState& exception_state) {
  StringOrTrustedScript impl;
  V8StringOrTrustedScript::ToImpl(isolate, value, impl, UnionTypeConversionMode::kNotNullable, exception_state);
  return impl;
}

}  // namespace blink
