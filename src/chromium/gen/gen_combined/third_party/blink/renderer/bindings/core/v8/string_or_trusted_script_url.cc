// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated from the Jinja2 template
// third_party/blink/renderer/bindings/templates/union_container.cc.tmpl
// by the script code_generator_v8.py.
// DO NOT MODIFY!

// clang-format off
#include "third_party/blink/renderer/bindings/core/v8/string_or_trusted_script_url.h"

#include "base/stl_util.h"
#include "third_party/blink/renderer/bindings/core/v8/idl_types.h"
#include "third_party/blink/renderer/bindings/core/v8/native_value_traits_impl.h"
#include "third_party/blink/renderer/bindings/core/v8/to_v8_for_core.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_trusted_script_url.h"

namespace blink {

StringOrTrustedScriptURL::StringOrTrustedScriptURL() : type_(SpecificType::kNone) {}

const String& StringOrTrustedScriptURL::GetAsString() const {
  DCHECK(IsString());
  return string_;
}

void StringOrTrustedScriptURL::SetString(const String& value) {
  DCHECK(IsNull());
  string_ = value;
  type_ = SpecificType::kString;
}

StringOrTrustedScriptURL StringOrTrustedScriptURL::FromString(const String& value) {
  StringOrTrustedScriptURL container;
  container.SetString(value);
  return container;
}

TrustedScriptURL* StringOrTrustedScriptURL::GetAsTrustedScriptURL() const {
  DCHECK(IsTrustedScriptURL());
  return trusted_script_url_;
}

void StringOrTrustedScriptURL::SetTrustedScriptURL(TrustedScriptURL* value) {
  DCHECK(IsNull());
  trusted_script_url_ = value;
  type_ = SpecificType::kTrustedScriptURL;
}

StringOrTrustedScriptURL StringOrTrustedScriptURL::FromTrustedScriptURL(TrustedScriptURL* value) {
  StringOrTrustedScriptURL container;
  container.SetTrustedScriptURL(value);
  return container;
}

StringOrTrustedScriptURL::StringOrTrustedScriptURL(const StringOrTrustedScriptURL&) = default;
StringOrTrustedScriptURL::~StringOrTrustedScriptURL() = default;
StringOrTrustedScriptURL& StringOrTrustedScriptURL::operator=(const StringOrTrustedScriptURL&) = default;

void StringOrTrustedScriptURL::Trace(blink::Visitor* visitor) {
  visitor->Trace(trusted_script_url_);
}

void V8StringOrTrustedScriptURL::ToImpl(
    v8::Isolate* isolate,
    v8::Local<v8::Value> v8_value,
    StringOrTrustedScriptURL& impl,
    UnionTypeConversionMode conversion_mode,
    ExceptionState& exception_state) {
  if (v8_value.IsEmpty())
    return;

  if (conversion_mode == UnionTypeConversionMode::kNullable && IsUndefinedOrNull(v8_value))
    return;

  if (V8TrustedScriptURL::HasInstance(v8_value, isolate)) {
    TrustedScriptURL* cpp_value = V8TrustedScriptURL::ToImpl(v8::Local<v8::Object>::Cast(v8_value));
    impl.SetTrustedScriptURL(cpp_value);
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

v8::Local<v8::Value> ToV8(const StringOrTrustedScriptURL& impl, v8::Local<v8::Object> creationContext, v8::Isolate* isolate) {
  switch (impl.type_) {
    case StringOrTrustedScriptURL::SpecificType::kNone:
      return v8::Null(isolate);
    case StringOrTrustedScriptURL::SpecificType::kString:
      return V8String(isolate, impl.GetAsString());
    case StringOrTrustedScriptURL::SpecificType::kTrustedScriptURL:
      return ToV8(impl.GetAsTrustedScriptURL(), creationContext, isolate);
    default:
      NOTREACHED();
  }
  return v8::Local<v8::Value>();
}

StringOrTrustedScriptURL NativeValueTraits<StringOrTrustedScriptURL>::NativeValue(
    v8::Isolate* isolate, v8::Local<v8::Value> value, ExceptionState& exception_state) {
  StringOrTrustedScriptURL impl;
  V8StringOrTrustedScriptURL::ToImpl(isolate, value, impl, UnionTypeConversionMode::kNotNullable, exception_state);
  return impl;
}

}  // namespace blink
