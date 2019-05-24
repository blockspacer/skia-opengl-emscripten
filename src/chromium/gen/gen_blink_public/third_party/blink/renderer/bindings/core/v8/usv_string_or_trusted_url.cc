// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated from the Jinja2 template
// third_party/blink/renderer/bindings/templates/union_container.cc.tmpl
// by the script code_generator_v8.py.
// DO NOT MODIFY!

// clang-format off
#include "third_party/blink/renderer/bindings/core/v8/usv_string_or_trusted_url.h"

#include "base/stl_util.h"
#include "third_party/blink/renderer/bindings/core/v8/idl_types.h"
#include "third_party/blink/renderer/bindings/core/v8/native_value_traits_impl.h"
#include "third_party/blink/renderer/bindings/core/v8/to_v8_for_core.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_trusted_url.h"

namespace blink {

USVStringOrTrustedURL::USVStringOrTrustedURL() : type_(SpecificType::kNone) {}

TrustedURL* USVStringOrTrustedURL::GetAsTrustedURL() const {
  DCHECK(IsTrustedURL());
  return trusted_url_;
}

void USVStringOrTrustedURL::SetTrustedURL(TrustedURL* value) {
  DCHECK(IsNull());
  trusted_url_ = value;
  type_ = SpecificType::kTrustedURL;
}

USVStringOrTrustedURL USVStringOrTrustedURL::FromTrustedURL(TrustedURL* value) {
  USVStringOrTrustedURL container;
  container.SetTrustedURL(value);
  return container;
}

const String& USVStringOrTrustedURL::GetAsUSVString() const {
  DCHECK(IsUSVString());
  return usv_string_;
}

void USVStringOrTrustedURL::SetUSVString(const String& value) {
  DCHECK(IsNull());
  usv_string_ = value;
  type_ = SpecificType::kUSVString;
}

USVStringOrTrustedURL USVStringOrTrustedURL::FromUSVString(const String& value) {
  USVStringOrTrustedURL container;
  container.SetUSVString(value);
  return container;
}

USVStringOrTrustedURL::USVStringOrTrustedURL(const USVStringOrTrustedURL&) = default;
USVStringOrTrustedURL::~USVStringOrTrustedURL() = default;
USVStringOrTrustedURL& USVStringOrTrustedURL::operator=(const USVStringOrTrustedURL&) = default;

void USVStringOrTrustedURL::Trace(blink::Visitor* visitor) {
  visitor->Trace(trusted_url_);
}

void V8USVStringOrTrustedURL::ToImpl(
    v8::Isolate* isolate,
    v8::Local<v8::Value> v8_value,
    USVStringOrTrustedURL& impl,
    UnionTypeConversionMode conversion_mode,
    ExceptionState& exception_state) {
  if (v8_value.IsEmpty())
    return;

  if (conversion_mode == UnionTypeConversionMode::kNullable && IsUndefinedOrNull(v8_value))
    return;

  if (V8TrustedURL::HasInstance(v8_value, isolate)) {
    TrustedURL* cpp_value = V8TrustedURL::ToImpl(v8::Local<v8::Object>::Cast(v8_value));
    impl.SetTrustedURL(cpp_value);
    return;
  }

  {
    V8StringResource<> cpp_value = NativeValueTraits<IDLUSVString>::NativeValue(isolate, v8_value, exception_state);
    if (exception_state.HadException())
      return;
    impl.SetUSVString(cpp_value);
    return;
  }
}

v8::Local<v8::Value> ToV8(const USVStringOrTrustedURL& impl, v8::Local<v8::Object> creationContext, v8::Isolate* isolate) {
  switch (impl.type_) {
    case USVStringOrTrustedURL::SpecificType::kNone:
      return v8::Null(isolate);
    case USVStringOrTrustedURL::SpecificType::kTrustedURL:
      return ToV8(impl.GetAsTrustedURL(), creationContext, isolate);
    case USVStringOrTrustedURL::SpecificType::kUSVString:
      return V8String(isolate, impl.GetAsUSVString());
    default:
      NOTREACHED();
  }
  return v8::Local<v8::Value>();
}

USVStringOrTrustedURL NativeValueTraits<USVStringOrTrustedURL>::NativeValue(
    v8::Isolate* isolate, v8::Local<v8::Value> value, ExceptionState& exception_state) {
  USVStringOrTrustedURL impl;
  V8USVStringOrTrustedURL::ToImpl(isolate, value, impl, UnionTypeConversionMode::kNotNullable, exception_state);
  return impl;
}

}  // namespace blink
