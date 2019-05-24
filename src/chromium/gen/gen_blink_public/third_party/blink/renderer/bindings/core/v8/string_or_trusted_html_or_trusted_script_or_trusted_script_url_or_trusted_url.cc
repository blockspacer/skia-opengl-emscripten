// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated from the Jinja2 template
// third_party/blink/renderer/bindings/templates/union_container.cc.tmpl
// by the script code_generator_v8.py.
// DO NOT MODIFY!

// clang-format off
#include "third_party/blink/renderer/bindings/core/v8/string_or_trusted_html_or_trusted_script_or_trusted_script_url_or_trusted_url.h"

#include "base/stl_util.h"
#include "third_party/blink/renderer/bindings/core/v8/idl_types.h"
#include "third_party/blink/renderer/bindings/core/v8/native_value_traits_impl.h"
#include "third_party/blink/renderer/bindings/core/v8/to_v8_for_core.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_trusted_html.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_trusted_script.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_trusted_script_url.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_trusted_url.h"

namespace blink {

StringOrTrustedHTMLOrTrustedScriptOrTrustedScriptURLOrTrustedURL::StringOrTrustedHTMLOrTrustedScriptOrTrustedScriptURLOrTrustedURL() : type_(SpecificType::kNone) {}

const String& StringOrTrustedHTMLOrTrustedScriptOrTrustedScriptURLOrTrustedURL::GetAsString() const {
  DCHECK(IsString());
  return string_;
}

void StringOrTrustedHTMLOrTrustedScriptOrTrustedScriptURLOrTrustedURL::SetString(const String& value) {
  DCHECK(IsNull());
  string_ = value;
  type_ = SpecificType::kString;
}

StringOrTrustedHTMLOrTrustedScriptOrTrustedScriptURLOrTrustedURL StringOrTrustedHTMLOrTrustedScriptOrTrustedScriptURLOrTrustedURL::FromString(const String& value) {
  StringOrTrustedHTMLOrTrustedScriptOrTrustedScriptURLOrTrustedURL container;
  container.SetString(value);
  return container;
}

TrustedHTML* StringOrTrustedHTMLOrTrustedScriptOrTrustedScriptURLOrTrustedURL::GetAsTrustedHTML() const {
  DCHECK(IsTrustedHTML());
  return trusted_html_;
}

void StringOrTrustedHTMLOrTrustedScriptOrTrustedScriptURLOrTrustedURL::SetTrustedHTML(TrustedHTML* value) {
  DCHECK(IsNull());
  trusted_html_ = value;
  type_ = SpecificType::kTrustedHTML;
}

StringOrTrustedHTMLOrTrustedScriptOrTrustedScriptURLOrTrustedURL StringOrTrustedHTMLOrTrustedScriptOrTrustedScriptURLOrTrustedURL::FromTrustedHTML(TrustedHTML* value) {
  StringOrTrustedHTMLOrTrustedScriptOrTrustedScriptURLOrTrustedURL container;
  container.SetTrustedHTML(value);
  return container;
}

TrustedScript* StringOrTrustedHTMLOrTrustedScriptOrTrustedScriptURLOrTrustedURL::GetAsTrustedScript() const {
  DCHECK(IsTrustedScript());
  return trusted_script_;
}

void StringOrTrustedHTMLOrTrustedScriptOrTrustedScriptURLOrTrustedURL::SetTrustedScript(TrustedScript* value) {
  DCHECK(IsNull());
  trusted_script_ = value;
  type_ = SpecificType::kTrustedScript;
}

StringOrTrustedHTMLOrTrustedScriptOrTrustedScriptURLOrTrustedURL StringOrTrustedHTMLOrTrustedScriptOrTrustedScriptURLOrTrustedURL::FromTrustedScript(TrustedScript* value) {
  StringOrTrustedHTMLOrTrustedScriptOrTrustedScriptURLOrTrustedURL container;
  container.SetTrustedScript(value);
  return container;
}

TrustedScriptURL* StringOrTrustedHTMLOrTrustedScriptOrTrustedScriptURLOrTrustedURL::GetAsTrustedScriptURL() const {
  DCHECK(IsTrustedScriptURL());
  return trusted_script_url_;
}

void StringOrTrustedHTMLOrTrustedScriptOrTrustedScriptURLOrTrustedURL::SetTrustedScriptURL(TrustedScriptURL* value) {
  DCHECK(IsNull());
  trusted_script_url_ = value;
  type_ = SpecificType::kTrustedScriptURL;
}

StringOrTrustedHTMLOrTrustedScriptOrTrustedScriptURLOrTrustedURL StringOrTrustedHTMLOrTrustedScriptOrTrustedScriptURLOrTrustedURL::FromTrustedScriptURL(TrustedScriptURL* value) {
  StringOrTrustedHTMLOrTrustedScriptOrTrustedScriptURLOrTrustedURL container;
  container.SetTrustedScriptURL(value);
  return container;
}

TrustedURL* StringOrTrustedHTMLOrTrustedScriptOrTrustedScriptURLOrTrustedURL::GetAsTrustedURL() const {
  DCHECK(IsTrustedURL());
  return trusted_url_;
}

void StringOrTrustedHTMLOrTrustedScriptOrTrustedScriptURLOrTrustedURL::SetTrustedURL(TrustedURL* value) {
  DCHECK(IsNull());
  trusted_url_ = value;
  type_ = SpecificType::kTrustedURL;
}

StringOrTrustedHTMLOrTrustedScriptOrTrustedScriptURLOrTrustedURL StringOrTrustedHTMLOrTrustedScriptOrTrustedScriptURLOrTrustedURL::FromTrustedURL(TrustedURL* value) {
  StringOrTrustedHTMLOrTrustedScriptOrTrustedScriptURLOrTrustedURL container;
  container.SetTrustedURL(value);
  return container;
}

StringOrTrustedHTMLOrTrustedScriptOrTrustedScriptURLOrTrustedURL::StringOrTrustedHTMLOrTrustedScriptOrTrustedScriptURLOrTrustedURL(const StringOrTrustedHTMLOrTrustedScriptOrTrustedScriptURLOrTrustedURL&) = default;
StringOrTrustedHTMLOrTrustedScriptOrTrustedScriptURLOrTrustedURL::~StringOrTrustedHTMLOrTrustedScriptOrTrustedScriptURLOrTrustedURL() = default;
StringOrTrustedHTMLOrTrustedScriptOrTrustedScriptURLOrTrustedURL& StringOrTrustedHTMLOrTrustedScriptOrTrustedScriptURLOrTrustedURL::operator=(const StringOrTrustedHTMLOrTrustedScriptOrTrustedScriptURLOrTrustedURL&) = default;

void StringOrTrustedHTMLOrTrustedScriptOrTrustedScriptURLOrTrustedURL::Trace(blink::Visitor* visitor) {
  visitor->Trace(trusted_html_);
  visitor->Trace(trusted_script_);
  visitor->Trace(trusted_script_url_);
  visitor->Trace(trusted_url_);
}

void V8StringOrTrustedHTMLOrTrustedScriptOrTrustedScriptURLOrTrustedURL::ToImpl(
    v8::Isolate* isolate,
    v8::Local<v8::Value> v8_value,
    StringOrTrustedHTMLOrTrustedScriptOrTrustedScriptURLOrTrustedURL& impl,
    UnionTypeConversionMode conversion_mode,
    ExceptionState& exception_state) {
  if (v8_value.IsEmpty())
    return;

  if (conversion_mode == UnionTypeConversionMode::kNullable && IsUndefinedOrNull(v8_value))
    return;

  if (V8TrustedHTML::HasInstance(v8_value, isolate)) {
    TrustedHTML* cpp_value = V8TrustedHTML::ToImpl(v8::Local<v8::Object>::Cast(v8_value));
    impl.SetTrustedHTML(cpp_value);
    return;
  }

  if (V8TrustedScript::HasInstance(v8_value, isolate)) {
    TrustedScript* cpp_value = V8TrustedScript::ToImpl(v8::Local<v8::Object>::Cast(v8_value));
    impl.SetTrustedScript(cpp_value);
    return;
  }

  if (V8TrustedScriptURL::HasInstance(v8_value, isolate)) {
    TrustedScriptURL* cpp_value = V8TrustedScriptURL::ToImpl(v8::Local<v8::Object>::Cast(v8_value));
    impl.SetTrustedScriptURL(cpp_value);
    return;
  }

  if (V8TrustedURL::HasInstance(v8_value, isolate)) {
    TrustedURL* cpp_value = V8TrustedURL::ToImpl(v8::Local<v8::Object>::Cast(v8_value));
    impl.SetTrustedURL(cpp_value);
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

v8::Local<v8::Value> ToV8(const StringOrTrustedHTMLOrTrustedScriptOrTrustedScriptURLOrTrustedURL& impl, v8::Local<v8::Object> creationContext, v8::Isolate* isolate) {
  switch (impl.type_) {
    case StringOrTrustedHTMLOrTrustedScriptOrTrustedScriptURLOrTrustedURL::SpecificType::kNone:
      return v8::Null(isolate);
    case StringOrTrustedHTMLOrTrustedScriptOrTrustedScriptURLOrTrustedURL::SpecificType::kString:
      return V8String(isolate, impl.GetAsString());
    case StringOrTrustedHTMLOrTrustedScriptOrTrustedScriptURLOrTrustedURL::SpecificType::kTrustedHTML:
      return ToV8(impl.GetAsTrustedHTML(), creationContext, isolate);
    case StringOrTrustedHTMLOrTrustedScriptOrTrustedScriptURLOrTrustedURL::SpecificType::kTrustedScript:
      return ToV8(impl.GetAsTrustedScript(), creationContext, isolate);
    case StringOrTrustedHTMLOrTrustedScriptOrTrustedScriptURLOrTrustedURL::SpecificType::kTrustedScriptURL:
      return ToV8(impl.GetAsTrustedScriptURL(), creationContext, isolate);
    case StringOrTrustedHTMLOrTrustedScriptOrTrustedScriptURLOrTrustedURL::SpecificType::kTrustedURL:
      return ToV8(impl.GetAsTrustedURL(), creationContext, isolate);
    default:
      NOTREACHED();
  }
  return v8::Local<v8::Value>();
}

StringOrTrustedHTMLOrTrustedScriptOrTrustedScriptURLOrTrustedURL NativeValueTraits<StringOrTrustedHTMLOrTrustedScriptOrTrustedScriptURLOrTrustedURL>::NativeValue(
    v8::Isolate* isolate, v8::Local<v8::Value> value, ExceptionState& exception_state) {
  StringOrTrustedHTMLOrTrustedScriptOrTrustedScriptURLOrTrustedURL impl;
  V8StringOrTrustedHTMLOrTrustedScriptOrTrustedScriptURLOrTrustedURL::ToImpl(isolate, value, impl, UnionTypeConversionMode::kNotNullable, exception_state);
  return impl;
}

}  // namespace blink
