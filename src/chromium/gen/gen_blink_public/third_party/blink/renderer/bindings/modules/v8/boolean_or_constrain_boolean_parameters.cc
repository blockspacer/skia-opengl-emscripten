// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated from the Jinja2 template
// third_party/blink/renderer/bindings/templates/union_container.cc.tmpl
// by the script code_generator_v8.py.
// DO NOT MODIFY!

// clang-format off
#include "third_party/blink/renderer/bindings/modules/v8/boolean_or_constrain_boolean_parameters.h"

#include "base/stl_util.h"
#include "third_party/blink/renderer/bindings/core/v8/idl_types.h"
#include "third_party/blink/renderer/bindings/core/v8/native_value_traits_impl.h"
#include "third_party/blink/renderer/bindings/core/v8/to_v8_for_core.h"

namespace blink {

BooleanOrConstrainBooleanParameters::BooleanOrConstrainBooleanParameters() : type_(SpecificType::kNone) {}

bool BooleanOrConstrainBooleanParameters::GetAsBoolean() const {
  DCHECK(IsBoolean());
  return boolean_;
}

void BooleanOrConstrainBooleanParameters::SetBoolean(bool value) {
  DCHECK(IsNull());
  boolean_ = value;
  type_ = SpecificType::kBoolean;
}

BooleanOrConstrainBooleanParameters BooleanOrConstrainBooleanParameters::FromBoolean(bool value) {
  BooleanOrConstrainBooleanParameters container;
  container.SetBoolean(value);
  return container;
}

ConstrainBooleanParameters* BooleanOrConstrainBooleanParameters::GetAsConstrainBooleanParameters() const {
  DCHECK(IsConstrainBooleanParameters());
  return constrain_boolean_parameters_;
}

void BooleanOrConstrainBooleanParameters::SetConstrainBooleanParameters(ConstrainBooleanParameters* value) {
  DCHECK(IsNull());
  constrain_boolean_parameters_ = value;
  type_ = SpecificType::kConstrainBooleanParameters;
}

BooleanOrConstrainBooleanParameters BooleanOrConstrainBooleanParameters::FromConstrainBooleanParameters(ConstrainBooleanParameters* value) {
  BooleanOrConstrainBooleanParameters container;
  container.SetConstrainBooleanParameters(value);
  return container;
}

BooleanOrConstrainBooleanParameters::BooleanOrConstrainBooleanParameters(const BooleanOrConstrainBooleanParameters&) = default;
BooleanOrConstrainBooleanParameters::~BooleanOrConstrainBooleanParameters() = default;
BooleanOrConstrainBooleanParameters& BooleanOrConstrainBooleanParameters::operator=(const BooleanOrConstrainBooleanParameters&) = default;

void BooleanOrConstrainBooleanParameters::Trace(blink::Visitor* visitor) {
  visitor->Trace(constrain_boolean_parameters_);
}

void V8BooleanOrConstrainBooleanParameters::ToImpl(
    v8::Isolate* isolate,
    v8::Local<v8::Value> v8_value,
    BooleanOrConstrainBooleanParameters& impl,
    UnionTypeConversionMode conversion_mode,
    ExceptionState& exception_state) {
  if (v8_value.IsEmpty())
    return;

  if (conversion_mode == UnionTypeConversionMode::kNullable && IsUndefinedOrNull(v8_value))
    return;

  if (IsUndefinedOrNull(v8_value)) {
    ConstrainBooleanParameters* cpp_value = NativeValueTraits<ConstrainBooleanParameters>::NativeValue(isolate, v8_value, exception_state);
    if (exception_state.HadException())
      return;
    impl.SetConstrainBooleanParameters(cpp_value);
    return;
  }

  if (v8_value->IsObject()) {
    ConstrainBooleanParameters* cpp_value = NativeValueTraits<ConstrainBooleanParameters>::NativeValue(isolate, v8_value, exception_state);
    if (exception_state.HadException())
      return;
    impl.SetConstrainBooleanParameters(cpp_value);
    return;
  }

  if (v8_value->IsBoolean()) {
    impl.SetBoolean(v8_value.As<v8::Boolean>()->Value());
    return;
  }

  {
    impl.SetBoolean(v8_value->BooleanValue(isolate));
    return;
  }
}

v8::Local<v8::Value> ToV8(const BooleanOrConstrainBooleanParameters& impl, v8::Local<v8::Object> creationContext, v8::Isolate* isolate) {
  switch (impl.type_) {
    case BooleanOrConstrainBooleanParameters::SpecificType::kNone:
      return v8::Null(isolate);
    case BooleanOrConstrainBooleanParameters::SpecificType::kBoolean:
      return v8::Boolean::New(isolate, impl.GetAsBoolean());
    case BooleanOrConstrainBooleanParameters::SpecificType::kConstrainBooleanParameters:
      return ToV8(impl.GetAsConstrainBooleanParameters(), creationContext, isolate);
    default:
      NOTREACHED();
  }
  return v8::Local<v8::Value>();
}

BooleanOrConstrainBooleanParameters NativeValueTraits<BooleanOrConstrainBooleanParameters>::NativeValue(
    v8::Isolate* isolate, v8::Local<v8::Value> value, ExceptionState& exception_state) {
  BooleanOrConstrainBooleanParameters impl;
  V8BooleanOrConstrainBooleanParameters::ToImpl(isolate, value, impl, UnionTypeConversionMode::kNotNullable, exception_state);
  return impl;
}

}  // namespace blink
