// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated from the Jinja2 template
// third_party/blink/renderer/bindings/templates/union_container.cc.tmpl
// by the script code_generator_v8.py.
// DO NOT MODIFY!

// clang-format off
#include "third_party/blink/renderer/bindings/modules/v8/html_canvas_element_or_offscreen_canvas.h"

#include "base/stl_util.h"
#include "third_party/blink/renderer/bindings/core/v8/to_v8_for_core.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_html_canvas_element.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_offscreen_canvas.h"

namespace blink {

HTMLCanvasElementOrOffscreenCanvas::HTMLCanvasElementOrOffscreenCanvas() : type_(SpecificType::kNone) {}

HTMLCanvasElement* HTMLCanvasElementOrOffscreenCanvas::GetAsHTMLCanvasElement() const {
  DCHECK(IsHTMLCanvasElement());
  return html_canvas_element_;
}

void HTMLCanvasElementOrOffscreenCanvas::SetHTMLCanvasElement(HTMLCanvasElement* value) {
  DCHECK(IsNull());
  html_canvas_element_ = value;
  type_ = SpecificType::kHTMLCanvasElement;
}

HTMLCanvasElementOrOffscreenCanvas HTMLCanvasElementOrOffscreenCanvas::FromHTMLCanvasElement(HTMLCanvasElement* value) {
  HTMLCanvasElementOrOffscreenCanvas container;
  container.SetHTMLCanvasElement(value);
  return container;
}

OffscreenCanvas* HTMLCanvasElementOrOffscreenCanvas::GetAsOffscreenCanvas() const {
  DCHECK(IsOffscreenCanvas());
  return offscreen_canvas_;
}

void HTMLCanvasElementOrOffscreenCanvas::SetOffscreenCanvas(OffscreenCanvas* value) {
  DCHECK(IsNull());
  offscreen_canvas_ = value;
  type_ = SpecificType::kOffscreenCanvas;
}

HTMLCanvasElementOrOffscreenCanvas HTMLCanvasElementOrOffscreenCanvas::FromOffscreenCanvas(OffscreenCanvas* value) {
  HTMLCanvasElementOrOffscreenCanvas container;
  container.SetOffscreenCanvas(value);
  return container;
}

HTMLCanvasElementOrOffscreenCanvas::HTMLCanvasElementOrOffscreenCanvas(const HTMLCanvasElementOrOffscreenCanvas&) = default;
HTMLCanvasElementOrOffscreenCanvas::~HTMLCanvasElementOrOffscreenCanvas() = default;
HTMLCanvasElementOrOffscreenCanvas& HTMLCanvasElementOrOffscreenCanvas::operator=(const HTMLCanvasElementOrOffscreenCanvas&) = default;

void HTMLCanvasElementOrOffscreenCanvas::Trace(blink::Visitor* visitor) {
  visitor->Trace(html_canvas_element_);
  visitor->Trace(offscreen_canvas_);
}

void V8HTMLCanvasElementOrOffscreenCanvas::ToImpl(
    v8::Isolate* isolate,
    v8::Local<v8::Value> v8_value,
    HTMLCanvasElementOrOffscreenCanvas& impl,
    UnionTypeConversionMode conversion_mode,
    ExceptionState& exception_state) {
  if (v8_value.IsEmpty())
    return;

  if (conversion_mode == UnionTypeConversionMode::kNullable && IsUndefinedOrNull(v8_value))
    return;

  if (V8HTMLCanvasElement::HasInstance(v8_value, isolate)) {
    HTMLCanvasElement* cpp_value = V8HTMLCanvasElement::ToImpl(v8::Local<v8::Object>::Cast(v8_value));
    impl.SetHTMLCanvasElement(cpp_value);
    return;
  }

  if (V8OffscreenCanvas::HasInstance(v8_value, isolate)) {
    OffscreenCanvas* cpp_value = V8OffscreenCanvas::ToImpl(v8::Local<v8::Object>::Cast(v8_value));
    impl.SetOffscreenCanvas(cpp_value);
    return;
  }

  exception_state.ThrowTypeError("The provided value is not of type '(HTMLCanvasElement or OffscreenCanvas)'");
}

v8::Local<v8::Value> ToV8(const HTMLCanvasElementOrOffscreenCanvas& impl, v8::Local<v8::Object> creationContext, v8::Isolate* isolate) {
  switch (impl.type_) {
    case HTMLCanvasElementOrOffscreenCanvas::SpecificType::kNone:
      return v8::Null(isolate);
    case HTMLCanvasElementOrOffscreenCanvas::SpecificType::kHTMLCanvasElement:
      return ToV8(impl.GetAsHTMLCanvasElement(), creationContext, isolate);
    case HTMLCanvasElementOrOffscreenCanvas::SpecificType::kOffscreenCanvas:
      return ToV8(impl.GetAsOffscreenCanvas(), creationContext, isolate);
    default:
      NOTREACHED();
  }
  return v8::Local<v8::Value>();
}

HTMLCanvasElementOrOffscreenCanvas NativeValueTraits<HTMLCanvasElementOrOffscreenCanvas>::NativeValue(
    v8::Isolate* isolate, v8::Local<v8::Value> value, ExceptionState& exception_state) {
  HTMLCanvasElementOrOffscreenCanvas impl;
  V8HTMLCanvasElementOrOffscreenCanvas::ToImpl(isolate, value, impl, UnionTypeConversionMode::kNotNullable, exception_state);
  return impl;
}

}  // namespace blink
