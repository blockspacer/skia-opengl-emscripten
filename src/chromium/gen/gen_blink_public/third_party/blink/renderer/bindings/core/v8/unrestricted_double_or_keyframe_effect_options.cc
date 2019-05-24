// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated from the Jinja2 template
// third_party/blink/renderer/bindings/templates/union_container.cc.tmpl
// by the script code_generator_v8.py.
// DO NOT MODIFY!

// clang-format off
#include "third_party/blink/renderer/bindings/core/v8/unrestricted_double_or_keyframe_effect_options.h"

#include "base/stl_util.h"
#include "third_party/blink/renderer/bindings/core/v8/idl_types.h"
#include "third_party/blink/renderer/bindings/core/v8/native_value_traits_impl.h"
#include "third_party/blink/renderer/bindings/core/v8/to_v8_for_core.h"

namespace blink {

UnrestrictedDoubleOrKeyframeEffectOptions::UnrestrictedDoubleOrKeyframeEffectOptions() : type_(SpecificType::kNone) {}

KeyframeEffectOptions* UnrestrictedDoubleOrKeyframeEffectOptions::GetAsKeyframeEffectOptions() const {
  DCHECK(IsKeyframeEffectOptions());
  return keyframe_effect_options_;
}

void UnrestrictedDoubleOrKeyframeEffectOptions::SetKeyframeEffectOptions(KeyframeEffectOptions* value) {
  DCHECK(IsNull());
  keyframe_effect_options_ = value;
  type_ = SpecificType::kKeyframeEffectOptions;
}

UnrestrictedDoubleOrKeyframeEffectOptions UnrestrictedDoubleOrKeyframeEffectOptions::FromKeyframeEffectOptions(KeyframeEffectOptions* value) {
  UnrestrictedDoubleOrKeyframeEffectOptions container;
  container.SetKeyframeEffectOptions(value);
  return container;
}

double UnrestrictedDoubleOrKeyframeEffectOptions::GetAsUnrestrictedDouble() const {
  DCHECK(IsUnrestrictedDouble());
  return unrestricted_double_;
}

void UnrestrictedDoubleOrKeyframeEffectOptions::SetUnrestrictedDouble(double value) {
  DCHECK(IsNull());
  unrestricted_double_ = value;
  type_ = SpecificType::kUnrestrictedDouble;
}

UnrestrictedDoubleOrKeyframeEffectOptions UnrestrictedDoubleOrKeyframeEffectOptions::FromUnrestrictedDouble(double value) {
  UnrestrictedDoubleOrKeyframeEffectOptions container;
  container.SetUnrestrictedDouble(value);
  return container;
}

UnrestrictedDoubleOrKeyframeEffectOptions::UnrestrictedDoubleOrKeyframeEffectOptions(const UnrestrictedDoubleOrKeyframeEffectOptions&) = default;
UnrestrictedDoubleOrKeyframeEffectOptions::~UnrestrictedDoubleOrKeyframeEffectOptions() = default;
UnrestrictedDoubleOrKeyframeEffectOptions& UnrestrictedDoubleOrKeyframeEffectOptions::operator=(const UnrestrictedDoubleOrKeyframeEffectOptions&) = default;

void UnrestrictedDoubleOrKeyframeEffectOptions::Trace(blink::Visitor* visitor) {
  visitor->Trace(keyframe_effect_options_);
}

void V8UnrestrictedDoubleOrKeyframeEffectOptions::ToImpl(
    v8::Isolate* isolate,
    v8::Local<v8::Value> v8_value,
    UnrestrictedDoubleOrKeyframeEffectOptions& impl,
    UnionTypeConversionMode conversion_mode,
    ExceptionState& exception_state) {
  if (v8_value.IsEmpty())
    return;

  if (conversion_mode == UnionTypeConversionMode::kNullable && IsUndefinedOrNull(v8_value))
    return;

  if (IsUndefinedOrNull(v8_value)) {
    KeyframeEffectOptions* cpp_value = NativeValueTraits<KeyframeEffectOptions>::NativeValue(isolate, v8_value, exception_state);
    if (exception_state.HadException())
      return;
    impl.SetKeyframeEffectOptions(cpp_value);
    return;
  }

  if (v8_value->IsObject()) {
    KeyframeEffectOptions* cpp_value = NativeValueTraits<KeyframeEffectOptions>::NativeValue(isolate, v8_value, exception_state);
    if (exception_state.HadException())
      return;
    impl.SetKeyframeEffectOptions(cpp_value);
    return;
  }

  if (v8_value->IsNumber()) {
    double cpp_value = NativeValueTraits<IDLUnrestrictedDouble>::NativeValue(isolate, v8_value, exception_state);
    if (exception_state.HadException())
      return;
    impl.SetUnrestrictedDouble(cpp_value);
    return;
  }

  {
    double cpp_value = NativeValueTraits<IDLUnrestrictedDouble>::NativeValue(isolate, v8_value, exception_state);
    if (exception_state.HadException())
      return;
    impl.SetUnrestrictedDouble(cpp_value);
    return;
  }
}

v8::Local<v8::Value> ToV8(const UnrestrictedDoubleOrKeyframeEffectOptions& impl, v8::Local<v8::Object> creationContext, v8::Isolate* isolate) {
  switch (impl.type_) {
    case UnrestrictedDoubleOrKeyframeEffectOptions::SpecificType::kNone:
      return v8::Null(isolate);
    case UnrestrictedDoubleOrKeyframeEffectOptions::SpecificType::kKeyframeEffectOptions:
      return ToV8(impl.GetAsKeyframeEffectOptions(), creationContext, isolate);
    case UnrestrictedDoubleOrKeyframeEffectOptions::SpecificType::kUnrestrictedDouble:
      return v8::Number::New(isolate, impl.GetAsUnrestrictedDouble());
    default:
      NOTREACHED();
  }
  return v8::Local<v8::Value>();
}

UnrestrictedDoubleOrKeyframeEffectOptions NativeValueTraits<UnrestrictedDoubleOrKeyframeEffectOptions>::NativeValue(
    v8::Isolate* isolate, v8::Local<v8::Value> value, ExceptionState& exception_state) {
  UnrestrictedDoubleOrKeyframeEffectOptions impl;
  V8UnrestrictedDoubleOrKeyframeEffectOptions::ToImpl(isolate, value, impl, UnionTypeConversionMode::kNotNullable, exception_state);
  return impl;
}

}  // namespace blink
