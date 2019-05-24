// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated from the Jinja2 template
// third_party/blink/renderer/bindings/templates/union_container.cc.tmpl
// by the script code_generator_v8.py.
// DO NOT MODIFY!

// clang-format off
#include "third_party/blink/renderer/bindings/core/v8/string_or_performance_measure_options.h"

#include "base/stl_util.h"
#include "third_party/blink/renderer/bindings/core/v8/idl_types.h"
#include "third_party/blink/renderer/bindings/core/v8/native_value_traits_impl.h"
#include "third_party/blink/renderer/bindings/core/v8/to_v8_for_core.h"

namespace blink {

StringOrPerformanceMeasureOptions::StringOrPerformanceMeasureOptions() : type_(SpecificType::kNone) {}

PerformanceMeasureOptions* StringOrPerformanceMeasureOptions::GetAsPerformanceMeasureOptions() const {
  DCHECK(IsPerformanceMeasureOptions());
  return performance_measure_options_;
}

void StringOrPerformanceMeasureOptions::SetPerformanceMeasureOptions(PerformanceMeasureOptions* value) {
  DCHECK(IsNull());
  performance_measure_options_ = value;
  type_ = SpecificType::kPerformanceMeasureOptions;
}

StringOrPerformanceMeasureOptions StringOrPerformanceMeasureOptions::FromPerformanceMeasureOptions(PerformanceMeasureOptions* value) {
  StringOrPerformanceMeasureOptions container;
  container.SetPerformanceMeasureOptions(value);
  return container;
}

const String& StringOrPerformanceMeasureOptions::GetAsString() const {
  DCHECK(IsString());
  return string_;
}

void StringOrPerformanceMeasureOptions::SetString(const String& value) {
  DCHECK(IsNull());
  string_ = value;
  type_ = SpecificType::kString;
}

StringOrPerformanceMeasureOptions StringOrPerformanceMeasureOptions::FromString(const String& value) {
  StringOrPerformanceMeasureOptions container;
  container.SetString(value);
  return container;
}

StringOrPerformanceMeasureOptions::StringOrPerformanceMeasureOptions(const StringOrPerformanceMeasureOptions&) = default;
StringOrPerformanceMeasureOptions::~StringOrPerformanceMeasureOptions() = default;
StringOrPerformanceMeasureOptions& StringOrPerformanceMeasureOptions::operator=(const StringOrPerformanceMeasureOptions&) = default;

void StringOrPerformanceMeasureOptions::Trace(blink::Visitor* visitor) {
  visitor->Trace(performance_measure_options_);
}

void V8StringOrPerformanceMeasureOptions::ToImpl(
    v8::Isolate* isolate,
    v8::Local<v8::Value> v8_value,
    StringOrPerformanceMeasureOptions& impl,
    UnionTypeConversionMode conversion_mode,
    ExceptionState& exception_state) {
  if (v8_value.IsEmpty())
    return;

  if (conversion_mode == UnionTypeConversionMode::kNullable && IsUndefinedOrNull(v8_value))
    return;

  if (IsUndefinedOrNull(v8_value)) {
    PerformanceMeasureOptions* cpp_value = NativeValueTraits<PerformanceMeasureOptions>::NativeValue(isolate, v8_value, exception_state);
    if (exception_state.HadException())
      return;
    impl.SetPerformanceMeasureOptions(cpp_value);
    return;
  }

  if (v8_value->IsObject()) {
    PerformanceMeasureOptions* cpp_value = NativeValueTraits<PerformanceMeasureOptions>::NativeValue(isolate, v8_value, exception_state);
    if (exception_state.HadException())
      return;
    impl.SetPerformanceMeasureOptions(cpp_value);
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

v8::Local<v8::Value> ToV8(const StringOrPerformanceMeasureOptions& impl, v8::Local<v8::Object> creationContext, v8::Isolate* isolate) {
  switch (impl.type_) {
    case StringOrPerformanceMeasureOptions::SpecificType::kNone:
      return v8::Null(isolate);
    case StringOrPerformanceMeasureOptions::SpecificType::kPerformanceMeasureOptions:
      return ToV8(impl.GetAsPerformanceMeasureOptions(), creationContext, isolate);
    case StringOrPerformanceMeasureOptions::SpecificType::kString:
      return V8String(isolate, impl.GetAsString());
    default:
      NOTREACHED();
  }
  return v8::Local<v8::Value>();
}

StringOrPerformanceMeasureOptions NativeValueTraits<StringOrPerformanceMeasureOptions>::NativeValue(
    v8::Isolate* isolate, v8::Local<v8::Value> value, ExceptionState& exception_state) {
  StringOrPerformanceMeasureOptions impl;
  V8StringOrPerformanceMeasureOptions::ToImpl(isolate, value, impl, UnionTypeConversionMode::kNotNullable, exception_state);
  return impl;
}

}  // namespace blink
