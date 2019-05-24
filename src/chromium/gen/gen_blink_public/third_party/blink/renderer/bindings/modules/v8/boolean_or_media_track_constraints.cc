// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated from the Jinja2 template
// third_party/blink/renderer/bindings/templates/union_container.cc.tmpl
// by the script code_generator_v8.py.
// DO NOT MODIFY!

// clang-format off
#include "third_party/blink/renderer/bindings/modules/v8/boolean_or_media_track_constraints.h"

#include "base/stl_util.h"
#include "third_party/blink/renderer/bindings/core/v8/idl_types.h"
#include "third_party/blink/renderer/bindings/core/v8/native_value_traits_impl.h"
#include "third_party/blink/renderer/bindings/core/v8/to_v8_for_core.h"

namespace blink {

BooleanOrMediaTrackConstraints::BooleanOrMediaTrackConstraints() : type_(SpecificType::kNone) {}

bool BooleanOrMediaTrackConstraints::GetAsBoolean() const {
  DCHECK(IsBoolean());
  return boolean_;
}

void BooleanOrMediaTrackConstraints::SetBoolean(bool value) {
  DCHECK(IsNull());
  boolean_ = value;
  type_ = SpecificType::kBoolean;
}

BooleanOrMediaTrackConstraints BooleanOrMediaTrackConstraints::FromBoolean(bool value) {
  BooleanOrMediaTrackConstraints container;
  container.SetBoolean(value);
  return container;
}

MediaTrackConstraints* BooleanOrMediaTrackConstraints::GetAsMediaTrackConstraints() const {
  DCHECK(IsMediaTrackConstraints());
  return media_track_constraints_;
}

void BooleanOrMediaTrackConstraints::SetMediaTrackConstraints(MediaTrackConstraints* value) {
  DCHECK(IsNull());
  media_track_constraints_ = value;
  type_ = SpecificType::kMediaTrackConstraints;
}

BooleanOrMediaTrackConstraints BooleanOrMediaTrackConstraints::FromMediaTrackConstraints(MediaTrackConstraints* value) {
  BooleanOrMediaTrackConstraints container;
  container.SetMediaTrackConstraints(value);
  return container;
}

BooleanOrMediaTrackConstraints::BooleanOrMediaTrackConstraints(const BooleanOrMediaTrackConstraints&) = default;
BooleanOrMediaTrackConstraints::~BooleanOrMediaTrackConstraints() = default;
BooleanOrMediaTrackConstraints& BooleanOrMediaTrackConstraints::operator=(const BooleanOrMediaTrackConstraints&) = default;

void BooleanOrMediaTrackConstraints::Trace(blink::Visitor* visitor) {
  visitor->Trace(media_track_constraints_);
}

void V8BooleanOrMediaTrackConstraints::ToImpl(
    v8::Isolate* isolate,
    v8::Local<v8::Value> v8_value,
    BooleanOrMediaTrackConstraints& impl,
    UnionTypeConversionMode conversion_mode,
    ExceptionState& exception_state) {
  if (v8_value.IsEmpty())
    return;

  if (conversion_mode == UnionTypeConversionMode::kNullable && IsUndefinedOrNull(v8_value))
    return;

  if (IsUndefinedOrNull(v8_value)) {
    MediaTrackConstraints* cpp_value = NativeValueTraits<MediaTrackConstraints>::NativeValue(isolate, v8_value, exception_state);
    if (exception_state.HadException())
      return;
    impl.SetMediaTrackConstraints(cpp_value);
    return;
  }

  if (v8_value->IsObject()) {
    MediaTrackConstraints* cpp_value = NativeValueTraits<MediaTrackConstraints>::NativeValue(isolate, v8_value, exception_state);
    if (exception_state.HadException())
      return;
    impl.SetMediaTrackConstraints(cpp_value);
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

v8::Local<v8::Value> ToV8(const BooleanOrMediaTrackConstraints& impl, v8::Local<v8::Object> creationContext, v8::Isolate* isolate) {
  switch (impl.type_) {
    case BooleanOrMediaTrackConstraints::SpecificType::kNone:
      return v8::Null(isolate);
    case BooleanOrMediaTrackConstraints::SpecificType::kBoolean:
      return v8::Boolean::New(isolate, impl.GetAsBoolean());
    case BooleanOrMediaTrackConstraints::SpecificType::kMediaTrackConstraints:
      return ToV8(impl.GetAsMediaTrackConstraints(), creationContext, isolate);
    default:
      NOTREACHED();
  }
  return v8::Local<v8::Value>();
}

BooleanOrMediaTrackConstraints NativeValueTraits<BooleanOrMediaTrackConstraints>::NativeValue(
    v8::Isolate* isolate, v8::Local<v8::Value> value, ExceptionState& exception_state) {
  BooleanOrMediaTrackConstraints impl;
  V8BooleanOrMediaTrackConstraints::ToImpl(isolate, value, impl, UnionTypeConversionMode::kNotNullable, exception_state);
  return impl;
}

}  // namespace blink
