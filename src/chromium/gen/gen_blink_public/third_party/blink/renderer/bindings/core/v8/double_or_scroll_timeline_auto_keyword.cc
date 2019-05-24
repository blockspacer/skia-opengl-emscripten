// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated from the Jinja2 template
// third_party/blink/renderer/bindings/templates/union_container.cc.tmpl
// by the script code_generator_v8.py.
// DO NOT MODIFY!

// clang-format off
#include "third_party/blink/renderer/bindings/core/v8/double_or_scroll_timeline_auto_keyword.h"

#include "base/stl_util.h"
#include "third_party/blink/renderer/bindings/core/v8/idl_types.h"
#include "third_party/blink/renderer/bindings/core/v8/native_value_traits_impl.h"
#include "third_party/blink/renderer/bindings/core/v8/to_v8_for_core.h"

namespace blink {

DoubleOrScrollTimelineAutoKeyword::DoubleOrScrollTimelineAutoKeyword() : type_(SpecificType::kNone) {}

double DoubleOrScrollTimelineAutoKeyword::GetAsDouble() const {
  DCHECK(IsDouble());
  return double_;
}

void DoubleOrScrollTimelineAutoKeyword::SetDouble(double value) {
  DCHECK(IsNull());
  double_ = value;
  type_ = SpecificType::kDouble;
}

DoubleOrScrollTimelineAutoKeyword DoubleOrScrollTimelineAutoKeyword::FromDouble(double value) {
  DoubleOrScrollTimelineAutoKeyword container;
  container.SetDouble(value);
  return container;
}

const String& DoubleOrScrollTimelineAutoKeyword::GetAsScrollTimelineAutoKeyword() const {
  DCHECK(IsScrollTimelineAutoKeyword());
  return scroll_timeline_auto_keyword_;
}

void DoubleOrScrollTimelineAutoKeyword::SetScrollTimelineAutoKeyword(const String& value) {
  DCHECK(IsNull());
  NonThrowableExceptionState exception_state;
  const char* kValidValues[] = {
      "auto",
  };
  if (!IsValidEnum(value, kValidValues, base::size(kValidValues), "ScrollTimelineAutoKeyword", exception_state)) {
    NOTREACHED();
    return;
  }
  scroll_timeline_auto_keyword_ = value;
  type_ = SpecificType::kScrollTimelineAutoKeyword;
}

DoubleOrScrollTimelineAutoKeyword DoubleOrScrollTimelineAutoKeyword::FromScrollTimelineAutoKeyword(const String& value) {
  DoubleOrScrollTimelineAutoKeyword container;
  container.SetScrollTimelineAutoKeyword(value);
  return container;
}

DoubleOrScrollTimelineAutoKeyword::DoubleOrScrollTimelineAutoKeyword(const DoubleOrScrollTimelineAutoKeyword&) = default;
DoubleOrScrollTimelineAutoKeyword::~DoubleOrScrollTimelineAutoKeyword() = default;
DoubleOrScrollTimelineAutoKeyword& DoubleOrScrollTimelineAutoKeyword::operator=(const DoubleOrScrollTimelineAutoKeyword&) = default;

void DoubleOrScrollTimelineAutoKeyword::Trace(blink::Visitor* visitor) {
}

void V8DoubleOrScrollTimelineAutoKeyword::ToImpl(
    v8::Isolate* isolate,
    v8::Local<v8::Value> v8_value,
    DoubleOrScrollTimelineAutoKeyword& impl,
    UnionTypeConversionMode conversion_mode,
    ExceptionState& exception_state) {
  if (v8_value.IsEmpty())
    return;

  if (conversion_mode == UnionTypeConversionMode::kNullable && IsUndefinedOrNull(v8_value))
    return;

  if (v8_value->IsNumber()) {
    double cpp_value = NativeValueTraits<IDLDouble>::NativeValue(isolate, v8_value, exception_state);
    if (exception_state.HadException())
      return;
    impl.SetDouble(cpp_value);
    return;
  }

  {
    V8StringResource<> cpp_value = v8_value;
    if (!cpp_value.Prepare(exception_state))
      return;
    const char* kValidValues[] = {
        "auto",
    };
    if (!IsValidEnum(cpp_value, kValidValues, base::size(kValidValues), "ScrollTimelineAutoKeyword", exception_state))
      return;
    impl.SetScrollTimelineAutoKeyword(cpp_value);
    return;
  }
}

v8::Local<v8::Value> ToV8(const DoubleOrScrollTimelineAutoKeyword& impl, v8::Local<v8::Object> creationContext, v8::Isolate* isolate) {
  switch (impl.type_) {
    case DoubleOrScrollTimelineAutoKeyword::SpecificType::kNone:
      return v8::Null(isolate);
    case DoubleOrScrollTimelineAutoKeyword::SpecificType::kDouble:
      return v8::Number::New(isolate, impl.GetAsDouble());
    case DoubleOrScrollTimelineAutoKeyword::SpecificType::kScrollTimelineAutoKeyword:
      return V8String(isolate, impl.GetAsScrollTimelineAutoKeyword());
    default:
      NOTREACHED();
  }
  return v8::Local<v8::Value>();
}

DoubleOrScrollTimelineAutoKeyword NativeValueTraits<DoubleOrScrollTimelineAutoKeyword>::NativeValue(
    v8::Isolate* isolate, v8::Local<v8::Value> value, ExceptionState& exception_state) {
  DoubleOrScrollTimelineAutoKeyword impl;
  V8DoubleOrScrollTimelineAutoKeyword::ToImpl(isolate, value, impl, UnionTypeConversionMode::kNotNullable, exception_state);
  return impl;
}

}  // namespace blink
