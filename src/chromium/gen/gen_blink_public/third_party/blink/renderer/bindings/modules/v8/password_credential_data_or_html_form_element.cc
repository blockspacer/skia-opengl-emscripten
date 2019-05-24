// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated from the Jinja2 template
// third_party/blink/renderer/bindings/templates/union_container.cc.tmpl
// by the script code_generator_v8.py.
// DO NOT MODIFY!

// clang-format off
#include "third_party/blink/renderer/bindings/modules/v8/password_credential_data_or_html_form_element.h"

#include "base/stl_util.h"
#include "third_party/blink/renderer/bindings/core/v8/to_v8_for_core.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_html_form_element.h"

namespace blink {

PasswordCredentialDataOrHTMLFormElement::PasswordCredentialDataOrHTMLFormElement() : type_(SpecificType::kNone) {}

HTMLFormElement* PasswordCredentialDataOrHTMLFormElement::GetAsHTMLFormElement() const {
  DCHECK(IsHTMLFormElement());
  return html_form_element_;
}

void PasswordCredentialDataOrHTMLFormElement::SetHTMLFormElement(HTMLFormElement* value) {
  DCHECK(IsNull());
  html_form_element_ = value;
  type_ = SpecificType::kHTMLFormElement;
}

PasswordCredentialDataOrHTMLFormElement PasswordCredentialDataOrHTMLFormElement::FromHTMLFormElement(HTMLFormElement* value) {
  PasswordCredentialDataOrHTMLFormElement container;
  container.SetHTMLFormElement(value);
  return container;
}

PasswordCredentialData* PasswordCredentialDataOrHTMLFormElement::GetAsPasswordCredentialData() const {
  DCHECK(IsPasswordCredentialData());
  return password_credential_data_;
}

void PasswordCredentialDataOrHTMLFormElement::SetPasswordCredentialData(PasswordCredentialData* value) {
  DCHECK(IsNull());
  password_credential_data_ = value;
  type_ = SpecificType::kPasswordCredentialData;
}

PasswordCredentialDataOrHTMLFormElement PasswordCredentialDataOrHTMLFormElement::FromPasswordCredentialData(PasswordCredentialData* value) {
  PasswordCredentialDataOrHTMLFormElement container;
  container.SetPasswordCredentialData(value);
  return container;
}

PasswordCredentialDataOrHTMLFormElement::PasswordCredentialDataOrHTMLFormElement(const PasswordCredentialDataOrHTMLFormElement&) = default;
PasswordCredentialDataOrHTMLFormElement::~PasswordCredentialDataOrHTMLFormElement() = default;
PasswordCredentialDataOrHTMLFormElement& PasswordCredentialDataOrHTMLFormElement::operator=(const PasswordCredentialDataOrHTMLFormElement&) = default;

void PasswordCredentialDataOrHTMLFormElement::Trace(blink::Visitor* visitor) {
  visitor->Trace(html_form_element_);
  visitor->Trace(password_credential_data_);
}

void V8PasswordCredentialDataOrHTMLFormElement::ToImpl(
    v8::Isolate* isolate,
    v8::Local<v8::Value> v8_value,
    PasswordCredentialDataOrHTMLFormElement& impl,
    UnionTypeConversionMode conversion_mode,
    ExceptionState& exception_state) {
  if (v8_value.IsEmpty())
    return;

  if (conversion_mode == UnionTypeConversionMode::kNullable && IsUndefinedOrNull(v8_value))
    return;

  if (IsUndefinedOrNull(v8_value)) {
    PasswordCredentialData* cpp_value = NativeValueTraits<PasswordCredentialData>::NativeValue(isolate, v8_value, exception_state);
    if (exception_state.HadException())
      return;
    impl.SetPasswordCredentialData(cpp_value);
    return;
  }

  if (V8HTMLFormElement::HasInstance(v8_value, isolate)) {
    HTMLFormElement* cpp_value = V8HTMLFormElement::ToImpl(v8::Local<v8::Object>::Cast(v8_value));
    impl.SetHTMLFormElement(cpp_value);
    return;
  }

  if (v8_value->IsObject()) {
    PasswordCredentialData* cpp_value = NativeValueTraits<PasswordCredentialData>::NativeValue(isolate, v8_value, exception_state);
    if (exception_state.HadException())
      return;
    impl.SetPasswordCredentialData(cpp_value);
    return;
  }

  exception_state.ThrowTypeError("The provided value is not of type '(PasswordCredentialData or HTMLFormElement)'");
}

v8::Local<v8::Value> ToV8(const PasswordCredentialDataOrHTMLFormElement& impl, v8::Local<v8::Object> creationContext, v8::Isolate* isolate) {
  switch (impl.type_) {
    case PasswordCredentialDataOrHTMLFormElement::SpecificType::kNone:
      return v8::Null(isolate);
    case PasswordCredentialDataOrHTMLFormElement::SpecificType::kHTMLFormElement:
      return ToV8(impl.GetAsHTMLFormElement(), creationContext, isolate);
    case PasswordCredentialDataOrHTMLFormElement::SpecificType::kPasswordCredentialData:
      return ToV8(impl.GetAsPasswordCredentialData(), creationContext, isolate);
    default:
      NOTREACHED();
  }
  return v8::Local<v8::Value>();
}

PasswordCredentialDataOrHTMLFormElement NativeValueTraits<PasswordCredentialDataOrHTMLFormElement>::NativeValue(
    v8::Isolate* isolate, v8::Local<v8::Value> value, ExceptionState& exception_state) {
  PasswordCredentialDataOrHTMLFormElement impl;
  V8PasswordCredentialDataOrHTMLFormElement::ToImpl(isolate, value, impl, UnionTypeConversionMode::kNotNullable, exception_state);
  return impl;
}

}  // namespace blink
