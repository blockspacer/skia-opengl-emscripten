// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated from the Jinja2 template
// third_party/blink/renderer/bindings/templates/union_container.cc.tmpl
// by the script code_generator_v8.py.
// DO NOT MODIFY!

// clang-format off
#include "third_party/blink/renderer/bindings/core/v8/css_style_value_or_string.h"

#include "base/stl_util.h"
#include "third_party/blink/renderer/bindings/core/v8/idl_types.h"
#include "third_party/blink/renderer/bindings/core/v8/native_value_traits_impl.h"
#include "third_party/blink/renderer/bindings/core/v8/to_v8_for_core.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_css_style_value.h"

namespace blink {

CSSStyleValueOrString::CSSStyleValueOrString() : type_(SpecificType::kNone) {}

CSSStyleValue* CSSStyleValueOrString::GetAsCSSStyleValue() const {
  DCHECK(IsCSSStyleValue());
  return css_style_value_;
}

void CSSStyleValueOrString::SetCSSStyleValue(CSSStyleValue* value) {
  DCHECK(IsNull());
  css_style_value_ = value;
  type_ = SpecificType::kCSSStyleValue;
}

CSSStyleValueOrString CSSStyleValueOrString::FromCSSStyleValue(CSSStyleValue* value) {
  CSSStyleValueOrString container;
  container.SetCSSStyleValue(value);
  return container;
}

const String& CSSStyleValueOrString::GetAsString() const {
  DCHECK(IsString());
  return string_;
}

void CSSStyleValueOrString::SetString(const String& value) {
  DCHECK(IsNull());
  string_ = value;
  type_ = SpecificType::kString;
}

CSSStyleValueOrString CSSStyleValueOrString::FromString(const String& value) {
  CSSStyleValueOrString container;
  container.SetString(value);
  return container;
}

CSSStyleValueOrString::CSSStyleValueOrString(const CSSStyleValueOrString&) = default;
CSSStyleValueOrString::~CSSStyleValueOrString() = default;
CSSStyleValueOrString& CSSStyleValueOrString::operator=(const CSSStyleValueOrString&) = default;

void CSSStyleValueOrString::Trace(blink::Visitor* visitor) {
  visitor->Trace(css_style_value_);
}

void V8CSSStyleValueOrString::ToImpl(
    v8::Isolate* isolate,
    v8::Local<v8::Value> v8_value,
    CSSStyleValueOrString& impl,
    UnionTypeConversionMode conversion_mode,
    ExceptionState& exception_state) {
  if (v8_value.IsEmpty())
    return;

  if (conversion_mode == UnionTypeConversionMode::kNullable && IsUndefinedOrNull(v8_value))
    return;

  if (V8CSSStyleValue::HasInstance(v8_value, isolate)) {
    CSSStyleValue* cpp_value = V8CSSStyleValue::ToImpl(v8::Local<v8::Object>::Cast(v8_value));
    impl.SetCSSStyleValue(cpp_value);
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

v8::Local<v8::Value> ToV8(const CSSStyleValueOrString& impl, v8::Local<v8::Object> creationContext, v8::Isolate* isolate) {
  switch (impl.type_) {
    case CSSStyleValueOrString::SpecificType::kNone:
      return v8::Null(isolate);
    case CSSStyleValueOrString::SpecificType::kCSSStyleValue:
      return ToV8(impl.GetAsCSSStyleValue(), creationContext, isolate);
    case CSSStyleValueOrString::SpecificType::kString:
      return V8String(isolate, impl.GetAsString());
    default:
      NOTREACHED();
  }
  return v8::Local<v8::Value>();
}

CSSStyleValueOrString NativeValueTraits<CSSStyleValueOrString>::NativeValue(
    v8::Isolate* isolate, v8::Local<v8::Value> value, ExceptionState& exception_state) {
  CSSStyleValueOrString impl;
  V8CSSStyleValueOrString::ToImpl(isolate, value, impl, UnionTypeConversionMode::kNotNullable, exception_state);
  return impl;
}

}  // namespace blink
