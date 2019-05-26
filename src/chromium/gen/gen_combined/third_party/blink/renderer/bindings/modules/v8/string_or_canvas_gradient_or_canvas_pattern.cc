// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated from the Jinja2 template
// third_party/blink/renderer/bindings/templates/union_container.cc.tmpl
// by the script code_generator_v8.py.
// DO NOT MODIFY!

// clang-format off
#include "third_party/blink/renderer/bindings/modules/v8/string_or_canvas_gradient_or_canvas_pattern.h"

#include "base/stl_util.h"
#include "third_party/blink/renderer/bindings/core/v8/idl_types.h"
#include "third_party/blink/renderer/bindings/core/v8/native_value_traits_impl.h"
#include "third_party/blink/renderer/bindings/core/v8/to_v8_for_core.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_canvas_gradient.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_canvas_pattern.h"

namespace blink {

StringOrCanvasGradientOrCanvasPattern::StringOrCanvasGradientOrCanvasPattern() : type_(SpecificType::kNone) {}

CanvasGradient* StringOrCanvasGradientOrCanvasPattern::GetAsCanvasGradient() const {
  DCHECK(IsCanvasGradient());
  return canvas_gradient_;
}

void StringOrCanvasGradientOrCanvasPattern::SetCanvasGradient(CanvasGradient* value) {
  DCHECK(IsNull());
  canvas_gradient_ = value;
  type_ = SpecificType::kCanvasGradient;
}

StringOrCanvasGradientOrCanvasPattern StringOrCanvasGradientOrCanvasPattern::FromCanvasGradient(CanvasGradient* value) {
  StringOrCanvasGradientOrCanvasPattern container;
  container.SetCanvasGradient(value);
  return container;
}

CanvasPattern* StringOrCanvasGradientOrCanvasPattern::GetAsCanvasPattern() const {
  DCHECK(IsCanvasPattern());
  return canvas_pattern_;
}

void StringOrCanvasGradientOrCanvasPattern::SetCanvasPattern(CanvasPattern* value) {
  DCHECK(IsNull());
  canvas_pattern_ = value;
  type_ = SpecificType::kCanvasPattern;
}

StringOrCanvasGradientOrCanvasPattern StringOrCanvasGradientOrCanvasPattern::FromCanvasPattern(CanvasPattern* value) {
  StringOrCanvasGradientOrCanvasPattern container;
  container.SetCanvasPattern(value);
  return container;
}

const String& StringOrCanvasGradientOrCanvasPattern::GetAsString() const {
  DCHECK(IsString());
  return string_;
}

void StringOrCanvasGradientOrCanvasPattern::SetString(const String& value) {
  DCHECK(IsNull());
  string_ = value;
  type_ = SpecificType::kString;
}

StringOrCanvasGradientOrCanvasPattern StringOrCanvasGradientOrCanvasPattern::FromString(const String& value) {
  StringOrCanvasGradientOrCanvasPattern container;
  container.SetString(value);
  return container;
}

StringOrCanvasGradientOrCanvasPattern::StringOrCanvasGradientOrCanvasPattern(const StringOrCanvasGradientOrCanvasPattern&) = default;
StringOrCanvasGradientOrCanvasPattern::~StringOrCanvasGradientOrCanvasPattern() = default;
StringOrCanvasGradientOrCanvasPattern& StringOrCanvasGradientOrCanvasPattern::operator=(const StringOrCanvasGradientOrCanvasPattern&) = default;

void StringOrCanvasGradientOrCanvasPattern::Trace(blink::Visitor* visitor) {
  visitor->Trace(canvas_gradient_);
  visitor->Trace(canvas_pattern_);
}

void V8StringOrCanvasGradientOrCanvasPattern::ToImpl(
    v8::Isolate* isolate,
    v8::Local<v8::Value> v8_value,
    StringOrCanvasGradientOrCanvasPattern& impl,
    UnionTypeConversionMode conversion_mode,
    ExceptionState& exception_state) {
  if (v8_value.IsEmpty())
    return;

  if (conversion_mode == UnionTypeConversionMode::kNullable && IsUndefinedOrNull(v8_value))
    return;

  if (V8CanvasGradient::HasInstance(v8_value, isolate)) {
    CanvasGradient* cpp_value = V8CanvasGradient::ToImpl(v8::Local<v8::Object>::Cast(v8_value));
    impl.SetCanvasGradient(cpp_value);
    return;
  }

  if (V8CanvasPattern::HasInstance(v8_value, isolate)) {
    CanvasPattern* cpp_value = V8CanvasPattern::ToImpl(v8::Local<v8::Object>::Cast(v8_value));
    impl.SetCanvasPattern(cpp_value);
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

v8::Local<v8::Value> ToV8(const StringOrCanvasGradientOrCanvasPattern& impl, v8::Local<v8::Object> creationContext, v8::Isolate* isolate) {
  switch (impl.type_) {
    case StringOrCanvasGradientOrCanvasPattern::SpecificType::kNone:
      return v8::Null(isolate);
    case StringOrCanvasGradientOrCanvasPattern::SpecificType::kCanvasGradient:
      return ToV8(impl.GetAsCanvasGradient(), creationContext, isolate);
    case StringOrCanvasGradientOrCanvasPattern::SpecificType::kCanvasPattern:
      return ToV8(impl.GetAsCanvasPattern(), creationContext, isolate);
    case StringOrCanvasGradientOrCanvasPattern::SpecificType::kString:
      return V8String(isolate, impl.GetAsString());
    default:
      NOTREACHED();
  }
  return v8::Local<v8::Value>();
}

StringOrCanvasGradientOrCanvasPattern NativeValueTraits<StringOrCanvasGradientOrCanvasPattern>::NativeValue(
    v8::Isolate* isolate, v8::Local<v8::Value> value, ExceptionState& exception_state) {
  StringOrCanvasGradientOrCanvasPattern impl;
  V8StringOrCanvasGradientOrCanvasPattern::ToImpl(isolate, value, impl, UnionTypeConversionMode::kNotNullable, exception_state);
  return impl;
}

}  // namespace blink
