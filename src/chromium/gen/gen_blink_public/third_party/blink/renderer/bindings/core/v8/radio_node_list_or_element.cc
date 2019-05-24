// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated from the Jinja2 template
// third_party/blink/renderer/bindings/templates/union_container.cc.tmpl
// by the script code_generator_v8.py.
// DO NOT MODIFY!

// clang-format off
#include "third_party/blink/renderer/bindings/core/v8/radio_node_list_or_element.h"

#include "base/stl_util.h"
#include "third_party/blink/renderer/bindings/core/v8/to_v8_for_core.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_element.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_radio_node_list.h"
#include "third_party/blink/renderer/core/animation/element_animation.h"
#include "third_party/blink/renderer/core/css/cssom/element_computed_style_map.h"
#include "third_party/blink/renderer/core/dom/child_node.h"
#include "third_party/blink/renderer/core/dom/non_document_type_child_node.h"
#include "third_party/blink/renderer/core/dom/parent_node.h"
#include "third_party/blink/renderer/core/fullscreen/element_fullscreen.h"

namespace blink {

RadioNodeListOrElement::RadioNodeListOrElement() : type_(SpecificType::kNone) {}

Element* RadioNodeListOrElement::GetAsElement() const {
  DCHECK(IsElement());
  return element_;
}

void RadioNodeListOrElement::SetElement(Element* value) {
  DCHECK(IsNull());
  element_ = value;
  type_ = SpecificType::kElement;
}

RadioNodeListOrElement RadioNodeListOrElement::FromElement(Element* value) {
  RadioNodeListOrElement container;
  container.SetElement(value);
  return container;
}

RadioNodeList* RadioNodeListOrElement::GetAsRadioNodeList() const {
  DCHECK(IsRadioNodeList());
  return radio_node_list_;
}

void RadioNodeListOrElement::SetRadioNodeList(RadioNodeList* value) {
  DCHECK(IsNull());
  radio_node_list_ = value;
  type_ = SpecificType::kRadioNodeList;
}

RadioNodeListOrElement RadioNodeListOrElement::FromRadioNodeList(RadioNodeList* value) {
  RadioNodeListOrElement container;
  container.SetRadioNodeList(value);
  return container;
}

RadioNodeListOrElement::RadioNodeListOrElement(const RadioNodeListOrElement&) = default;
RadioNodeListOrElement::~RadioNodeListOrElement() = default;
RadioNodeListOrElement& RadioNodeListOrElement::operator=(const RadioNodeListOrElement&) = default;

void RadioNodeListOrElement::Trace(blink::Visitor* visitor) {
  visitor->Trace(element_);
  visitor->Trace(radio_node_list_);
}

void V8RadioNodeListOrElement::ToImpl(
    v8::Isolate* isolate,
    v8::Local<v8::Value> v8_value,
    RadioNodeListOrElement& impl,
    UnionTypeConversionMode conversion_mode,
    ExceptionState& exception_state) {
  if (v8_value.IsEmpty())
    return;

  if (conversion_mode == UnionTypeConversionMode::kNullable && IsUndefinedOrNull(v8_value))
    return;

  if (V8Element::HasInstance(v8_value, isolate)) {
    Element* cpp_value = V8Element::ToImpl(v8::Local<v8::Object>::Cast(v8_value));
    impl.SetElement(cpp_value);
    return;
  }

  if (V8RadioNodeList::HasInstance(v8_value, isolate)) {
    RadioNodeList* cpp_value = V8RadioNodeList::ToImpl(v8::Local<v8::Object>::Cast(v8_value));
    impl.SetRadioNodeList(cpp_value);
    return;
  }

  exception_state.ThrowTypeError("The provided value is not of type '(RadioNodeList or Element)'");
}

v8::Local<v8::Value> ToV8(const RadioNodeListOrElement& impl, v8::Local<v8::Object> creationContext, v8::Isolate* isolate) {
  switch (impl.type_) {
    case RadioNodeListOrElement::SpecificType::kNone:
      return v8::Null(isolate);
    case RadioNodeListOrElement::SpecificType::kElement:
      return ToV8(impl.GetAsElement(), creationContext, isolate);
    case RadioNodeListOrElement::SpecificType::kRadioNodeList:
      return ToV8(impl.GetAsRadioNodeList(), creationContext, isolate);
    default:
      NOTREACHED();
  }
  return v8::Local<v8::Value>();
}

RadioNodeListOrElement NativeValueTraits<RadioNodeListOrElement>::NativeValue(
    v8::Isolate* isolate, v8::Local<v8::Value> value, ExceptionState& exception_state) {
  RadioNodeListOrElement impl;
  V8RadioNodeListOrElement::ToImpl(isolate, value, impl, UnionTypeConversionMode::kNotNullable, exception_state);
  return impl;
}

}  // namespace blink
