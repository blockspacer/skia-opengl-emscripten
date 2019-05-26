// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated from the Jinja2 template
// third_party/blink/renderer/bindings/templates/union_container.cc.tmpl
// by the script code_generator_v8.py.
// DO NOT MODIFY!

// clang-format off
#include "third_party/blink/renderer/bindings/core/v8/html_script_element_or_svg_script_element.h"

#include "base/stl_util.h"
#include "third_party/blink/renderer/bindings/core/v8/to_v8_for_core.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_html_script_element.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_svg_script_element.h"

namespace blink {

HTMLScriptElementOrSVGScriptElement::HTMLScriptElementOrSVGScriptElement() : type_(SpecificType::kNone) {}

HTMLScriptElement* HTMLScriptElementOrSVGScriptElement::GetAsHTMLScriptElement() const {
  DCHECK(IsHTMLScriptElement());
  return html_script_element_;
}

void HTMLScriptElementOrSVGScriptElement::SetHTMLScriptElement(HTMLScriptElement* value) {
  DCHECK(IsNull());
  html_script_element_ = value;
  type_ = SpecificType::kHTMLScriptElement;
}

HTMLScriptElementOrSVGScriptElement HTMLScriptElementOrSVGScriptElement::FromHTMLScriptElement(HTMLScriptElement* value) {
  HTMLScriptElementOrSVGScriptElement container;
  container.SetHTMLScriptElement(value);
  return container;
}

SVGScriptElement* HTMLScriptElementOrSVGScriptElement::GetAsSVGScriptElement() const {
  DCHECK(IsSVGScriptElement());
  return svg_script_element_;
}

void HTMLScriptElementOrSVGScriptElement::SetSVGScriptElement(SVGScriptElement* value) {
  DCHECK(IsNull());
  svg_script_element_ = value;
  type_ = SpecificType::kSVGScriptElement;
}

HTMLScriptElementOrSVGScriptElement HTMLScriptElementOrSVGScriptElement::FromSVGScriptElement(SVGScriptElement* value) {
  HTMLScriptElementOrSVGScriptElement container;
  container.SetSVGScriptElement(value);
  return container;
}

HTMLScriptElementOrSVGScriptElement::HTMLScriptElementOrSVGScriptElement(const HTMLScriptElementOrSVGScriptElement&) = default;
HTMLScriptElementOrSVGScriptElement::~HTMLScriptElementOrSVGScriptElement() = default;
HTMLScriptElementOrSVGScriptElement& HTMLScriptElementOrSVGScriptElement::operator=(const HTMLScriptElementOrSVGScriptElement&) = default;

void HTMLScriptElementOrSVGScriptElement::Trace(blink::Visitor* visitor) {
  visitor->Trace(html_script_element_);
  visitor->Trace(svg_script_element_);
}

void V8HTMLScriptElementOrSVGScriptElement::ToImpl(
    v8::Isolate* isolate,
    v8::Local<v8::Value> v8_value,
    HTMLScriptElementOrSVGScriptElement& impl,
    UnionTypeConversionMode conversion_mode,
    ExceptionState& exception_state) {
  if (v8_value.IsEmpty())
    return;

  if (conversion_mode == UnionTypeConversionMode::kNullable && IsUndefinedOrNull(v8_value))
    return;

  if (V8HTMLScriptElement::HasInstance(v8_value, isolate)) {
    HTMLScriptElement* cpp_value = V8HTMLScriptElement::ToImpl(v8::Local<v8::Object>::Cast(v8_value));
    impl.SetHTMLScriptElement(cpp_value);
    return;
  }

  if (V8SVGScriptElement::HasInstance(v8_value, isolate)) {
    SVGScriptElement* cpp_value = V8SVGScriptElement::ToImpl(v8::Local<v8::Object>::Cast(v8_value));
    impl.SetSVGScriptElement(cpp_value);
    return;
  }

  exception_state.ThrowTypeError("The provided value is not of type '(HTMLScriptElement or SVGScriptElement)'");
}

v8::Local<v8::Value> ToV8(const HTMLScriptElementOrSVGScriptElement& impl, v8::Local<v8::Object> creationContext, v8::Isolate* isolate) {
  switch (impl.type_) {
    case HTMLScriptElementOrSVGScriptElement::SpecificType::kNone:
      return v8::Null(isolate);
    case HTMLScriptElementOrSVGScriptElement::SpecificType::kHTMLScriptElement:
      return ToV8(impl.GetAsHTMLScriptElement(), creationContext, isolate);
    case HTMLScriptElementOrSVGScriptElement::SpecificType::kSVGScriptElement:
      return ToV8(impl.GetAsSVGScriptElement(), creationContext, isolate);
    default:
      NOTREACHED();
  }
  return v8::Local<v8::Value>();
}

HTMLScriptElementOrSVGScriptElement NativeValueTraits<HTMLScriptElementOrSVGScriptElement>::NativeValue(
    v8::Isolate* isolate, v8::Local<v8::Value> value, ExceptionState& exception_state) {
  HTMLScriptElementOrSVGScriptElement impl;
  V8HTMLScriptElementOrSVGScriptElement::ToImpl(isolate, value, impl, UnionTypeConversionMode::kNotNullable, exception_state);
  return impl;
}

}  // namespace blink
