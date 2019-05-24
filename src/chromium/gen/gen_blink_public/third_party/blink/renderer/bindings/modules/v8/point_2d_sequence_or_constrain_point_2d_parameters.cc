// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated from the Jinja2 template
// third_party/blink/renderer/bindings/templates/union_container.cc.tmpl
// by the script code_generator_v8.py.
// DO NOT MODIFY!

// clang-format off
#include "third_party/blink/renderer/bindings/modules/v8/point_2d_sequence_or_constrain_point_2d_parameters.h"

#include "base/stl_util.h"
#include "third_party/blink/renderer/bindings/core/v8/idl_types.h"
#include "third_party/blink/renderer/bindings/core/v8/native_value_traits_impl.h"
#include "third_party/blink/renderer/bindings/core/v8/to_v8_for_core.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_point_2d.h"

namespace blink {

Point2DSequenceOrConstrainPoint2DParameters::Point2DSequenceOrConstrainPoint2DParameters() : type_(SpecificType::kNone) {}

ConstrainPoint2DParameters* Point2DSequenceOrConstrainPoint2DParameters::GetAsConstrainPoint2DParameters() const {
  DCHECK(IsConstrainPoint2DParameters());
  return constrain_point_2d_parameters_;
}

void Point2DSequenceOrConstrainPoint2DParameters::SetConstrainPoint2DParameters(ConstrainPoint2DParameters* value) {
  DCHECK(IsNull());
  constrain_point_2d_parameters_ = value;
  type_ = SpecificType::kConstrainPoint2DParameters;
}

Point2DSequenceOrConstrainPoint2DParameters Point2DSequenceOrConstrainPoint2DParameters::FromConstrainPoint2DParameters(ConstrainPoint2DParameters* value) {
  Point2DSequenceOrConstrainPoint2DParameters container;
  container.SetConstrainPoint2DParameters(value);
  return container;
}

const HeapVector<Member<Point2D>>& Point2DSequenceOrConstrainPoint2DParameters::GetAsPoint2DSequence() const {
  DCHECK(IsPoint2DSequence());
  return point_2d_sequence_;
}

void Point2DSequenceOrConstrainPoint2DParameters::SetPoint2DSequence(const HeapVector<Member<Point2D>>& value) {
  DCHECK(IsNull());
  point_2d_sequence_ = value;
  type_ = SpecificType::kPoint2DSequence;
}

Point2DSequenceOrConstrainPoint2DParameters Point2DSequenceOrConstrainPoint2DParameters::FromPoint2DSequence(const HeapVector<Member<Point2D>>& value) {
  Point2DSequenceOrConstrainPoint2DParameters container;
  container.SetPoint2DSequence(value);
  return container;
}

Point2DSequenceOrConstrainPoint2DParameters::Point2DSequenceOrConstrainPoint2DParameters(const Point2DSequenceOrConstrainPoint2DParameters&) = default;
Point2DSequenceOrConstrainPoint2DParameters::~Point2DSequenceOrConstrainPoint2DParameters() = default;
Point2DSequenceOrConstrainPoint2DParameters& Point2DSequenceOrConstrainPoint2DParameters::operator=(const Point2DSequenceOrConstrainPoint2DParameters&) = default;

void Point2DSequenceOrConstrainPoint2DParameters::Trace(blink::Visitor* visitor) {
  visitor->Trace(constrain_point_2d_parameters_);
  visitor->Trace(point_2d_sequence_);
}

void V8Point2DSequenceOrConstrainPoint2DParameters::ToImpl(
    v8::Isolate* isolate,
    v8::Local<v8::Value> v8_value,
    Point2DSequenceOrConstrainPoint2DParameters& impl,
    UnionTypeConversionMode conversion_mode,
    ExceptionState& exception_state) {
  if (v8_value.IsEmpty())
    return;

  if (conversion_mode == UnionTypeConversionMode::kNullable && IsUndefinedOrNull(v8_value))
    return;

  if (IsUndefinedOrNull(v8_value)) {
    ConstrainPoint2DParameters* cpp_value = NativeValueTraits<ConstrainPoint2DParameters>::NativeValue(isolate, v8_value, exception_state);
    if (exception_state.HadException())
      return;
    impl.SetConstrainPoint2DParameters(cpp_value);
    return;
  }

  if (HasCallableIteratorSymbol(isolate, v8_value, exception_state)) {
    HeapVector<Member<Point2D>> cpp_value = NativeValueTraits<IDLSequence<Point2D>>::NativeValue(isolate, v8_value, exception_state);
    if (exception_state.HadException())
      return;
    impl.SetPoint2DSequence(cpp_value);
    return;
  }

  if (v8_value->IsObject()) {
    ConstrainPoint2DParameters* cpp_value = NativeValueTraits<ConstrainPoint2DParameters>::NativeValue(isolate, v8_value, exception_state);
    if (exception_state.HadException())
      return;
    impl.SetConstrainPoint2DParameters(cpp_value);
    return;
  }

  exception_state.ThrowTypeError("The provided value is not of type '(sequence<Point2D> or ConstrainPoint2DParameters)'");
}

v8::Local<v8::Value> ToV8(const Point2DSequenceOrConstrainPoint2DParameters& impl, v8::Local<v8::Object> creationContext, v8::Isolate* isolate) {
  switch (impl.type_) {
    case Point2DSequenceOrConstrainPoint2DParameters::SpecificType::kNone:
      return v8::Null(isolate);
    case Point2DSequenceOrConstrainPoint2DParameters::SpecificType::kConstrainPoint2DParameters:
      return ToV8(impl.GetAsConstrainPoint2DParameters(), creationContext, isolate);
    case Point2DSequenceOrConstrainPoint2DParameters::SpecificType::kPoint2DSequence:
      return ToV8(impl.GetAsPoint2DSequence(), creationContext, isolate);
    default:
      NOTREACHED();
  }
  return v8::Local<v8::Value>();
}

Point2DSequenceOrConstrainPoint2DParameters NativeValueTraits<Point2DSequenceOrConstrainPoint2DParameters>::NativeValue(
    v8::Isolate* isolate, v8::Local<v8::Value> value, ExceptionState& exception_state) {
  Point2DSequenceOrConstrainPoint2DParameters impl;
  V8Point2DSequenceOrConstrainPoint2DParameters::ToImpl(isolate, value, impl, UnionTypeConversionMode::kNotNullable, exception_state);
  return impl;
}

}  // namespace blink
