// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated from the Jinja2 template
// third_party/blink/renderer/bindings/templates/union_container.cc.tmpl
// by the script code_generator_v8.py.
// DO NOT MODIFY!

// clang-format off
#include "third_party/blink/renderer/bindings/modules/v8/document_timeline_or_scroll_timeline.h"

#include "base/stl_util.h"
#include "third_party/blink/renderer/bindings/core/v8/to_v8_for_core.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_document_timeline.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_scroll_timeline.h"

namespace blink {

DocumentTimelineOrScrollTimeline::DocumentTimelineOrScrollTimeline() : type_(SpecificType::kNone) {}

DocumentTimeline* DocumentTimelineOrScrollTimeline::GetAsDocumentTimeline() const {
  DCHECK(IsDocumentTimeline());
  return document_timeline_;
}

void DocumentTimelineOrScrollTimeline::SetDocumentTimeline(DocumentTimeline* value) {
  DCHECK(IsNull());
  document_timeline_ = value;
  type_ = SpecificType::kDocumentTimeline;
}

DocumentTimelineOrScrollTimeline DocumentTimelineOrScrollTimeline::FromDocumentTimeline(DocumentTimeline* value) {
  DocumentTimelineOrScrollTimeline container;
  container.SetDocumentTimeline(value);
  return container;
}

ScrollTimeline* DocumentTimelineOrScrollTimeline::GetAsScrollTimeline() const {
  DCHECK(IsScrollTimeline());
  return scroll_timeline_;
}

void DocumentTimelineOrScrollTimeline::SetScrollTimeline(ScrollTimeline* value) {
  DCHECK(IsNull());
  scroll_timeline_ = value;
  type_ = SpecificType::kScrollTimeline;
}

DocumentTimelineOrScrollTimeline DocumentTimelineOrScrollTimeline::FromScrollTimeline(ScrollTimeline* value) {
  DocumentTimelineOrScrollTimeline container;
  container.SetScrollTimeline(value);
  return container;
}

DocumentTimelineOrScrollTimeline::DocumentTimelineOrScrollTimeline(const DocumentTimelineOrScrollTimeline&) = default;
DocumentTimelineOrScrollTimeline::~DocumentTimelineOrScrollTimeline() = default;
DocumentTimelineOrScrollTimeline& DocumentTimelineOrScrollTimeline::operator=(const DocumentTimelineOrScrollTimeline&) = default;

void DocumentTimelineOrScrollTimeline::Trace(blink::Visitor* visitor) {
  visitor->Trace(document_timeline_);
  visitor->Trace(scroll_timeline_);
}

void V8DocumentTimelineOrScrollTimeline::ToImpl(
    v8::Isolate* isolate,
    v8::Local<v8::Value> v8_value,
    DocumentTimelineOrScrollTimeline& impl,
    UnionTypeConversionMode conversion_mode,
    ExceptionState& exception_state) {
  if (v8_value.IsEmpty())
    return;

  if (conversion_mode == UnionTypeConversionMode::kNullable && IsUndefinedOrNull(v8_value))
    return;

  if (V8DocumentTimeline::HasInstance(v8_value, isolate)) {
    DocumentTimeline* cpp_value = V8DocumentTimeline::ToImpl(v8::Local<v8::Object>::Cast(v8_value));
    impl.SetDocumentTimeline(cpp_value);
    return;
  }

  if (V8ScrollTimeline::HasInstance(v8_value, isolate)) {
    ScrollTimeline* cpp_value = V8ScrollTimeline::ToImpl(v8::Local<v8::Object>::Cast(v8_value));
    impl.SetScrollTimeline(cpp_value);
    return;
  }

  exception_state.ThrowTypeError("The provided value is not of type '(DocumentTimeline or ScrollTimeline)'");
}

v8::Local<v8::Value> ToV8(const DocumentTimelineOrScrollTimeline& impl, v8::Local<v8::Object> creationContext, v8::Isolate* isolate) {
  switch (impl.type_) {
    case DocumentTimelineOrScrollTimeline::SpecificType::kNone:
      return v8::Null(isolate);
    case DocumentTimelineOrScrollTimeline::SpecificType::kDocumentTimeline:
      return ToV8(impl.GetAsDocumentTimeline(), creationContext, isolate);
    case DocumentTimelineOrScrollTimeline::SpecificType::kScrollTimeline:
      return ToV8(impl.GetAsScrollTimeline(), creationContext, isolate);
    default:
      NOTREACHED();
  }
  return v8::Local<v8::Value>();
}

DocumentTimelineOrScrollTimeline NativeValueTraits<DocumentTimelineOrScrollTimeline>::NativeValue(
    v8::Isolate* isolate, v8::Local<v8::Value> value, ExceptionState& exception_state) {
  DocumentTimelineOrScrollTimeline impl;
  V8DocumentTimelineOrScrollTimeline::ToImpl(isolate, value, impl, UnionTypeConversionMode::kNotNullable, exception_state);
  return impl;
}

}  // namespace blink
