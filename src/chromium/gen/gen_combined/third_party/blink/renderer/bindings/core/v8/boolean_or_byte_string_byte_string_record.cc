// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated from the Jinja2 template
// third_party/blink/renderer/bindings/templates/union_container.cc.tmpl
// by the script code_generator_v8.py.
// DO NOT MODIFY!

// clang-format off
#include "third_party/blink/renderer/bindings/core/v8/boolean_or_byte_string_byte_string_record.h"

#include "base/stl_util.h"
#include "third_party/blink/renderer/bindings/core/v8/idl_types.h"
#include "third_party/blink/renderer/bindings/core/v8/native_value_traits_impl.h"
#include "third_party/blink/renderer/bindings/core/v8/to_v8_for_core.h"

namespace blink {

BooleanOrByteStringByteStringRecord::BooleanOrByteStringByteStringRecord() : type_(SpecificType::kNone) {}

bool BooleanOrByteStringByteStringRecord::GetAsBoolean() const {
  DCHECK(IsBoolean());
  return boolean_;
}

void BooleanOrByteStringByteStringRecord::SetBoolean(bool value) {
  DCHECK(IsNull());
  boolean_ = value;
  type_ = SpecificType::kBoolean;
}

BooleanOrByteStringByteStringRecord BooleanOrByteStringByteStringRecord::FromBoolean(bool value) {
  BooleanOrByteStringByteStringRecord container;
  container.SetBoolean(value);
  return container;
}

const Vector<std::pair<String, String>>& BooleanOrByteStringByteStringRecord::GetAsByteStringByteStringRecord() const {
  DCHECK(IsByteStringByteStringRecord());
  return byte_string_byte_string_record_;
}

void BooleanOrByteStringByteStringRecord::SetByteStringByteStringRecord(const Vector<std::pair<String, String>>& value) {
  DCHECK(IsNull());
  byte_string_byte_string_record_ = value;
  type_ = SpecificType::kByteStringByteStringRecord;
}

BooleanOrByteStringByteStringRecord BooleanOrByteStringByteStringRecord::FromByteStringByteStringRecord(const Vector<std::pair<String, String>>& value) {
  BooleanOrByteStringByteStringRecord container;
  container.SetByteStringByteStringRecord(value);
  return container;
}

BooleanOrByteStringByteStringRecord::BooleanOrByteStringByteStringRecord(const BooleanOrByteStringByteStringRecord&) = default;
BooleanOrByteStringByteStringRecord::~BooleanOrByteStringByteStringRecord() = default;
BooleanOrByteStringByteStringRecord& BooleanOrByteStringByteStringRecord::operator=(const BooleanOrByteStringByteStringRecord&) = default;

void BooleanOrByteStringByteStringRecord::Trace(blink::Visitor* visitor) {
}

void V8BooleanOrByteStringByteStringRecord::ToImpl(
    v8::Isolate* isolate,
    v8::Local<v8::Value> v8_value,
    BooleanOrByteStringByteStringRecord& impl,
    UnionTypeConversionMode conversion_mode,
    ExceptionState& exception_state) {
  if (v8_value.IsEmpty())
    return;

  if (conversion_mode == UnionTypeConversionMode::kNullable && IsUndefinedOrNull(v8_value))
    return;

  if (v8_value->IsObject()) {
    Vector<std::pair<String, String>> cpp_value = NativeValueTraits<IDLRecord<IDLByteString, IDLByteString>>::NativeValue(isolate, v8_value, exception_state);
    if (exception_state.HadException())
      return;
    impl.SetByteStringByteStringRecord(cpp_value);
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

v8::Local<v8::Value> ToV8(const BooleanOrByteStringByteStringRecord& impl, v8::Local<v8::Object> creationContext, v8::Isolate* isolate) {
  switch (impl.type_) {
    case BooleanOrByteStringByteStringRecord::SpecificType::kNone:
      return v8::Null(isolate);
    case BooleanOrByteStringByteStringRecord::SpecificType::kBoolean:
      return v8::Boolean::New(isolate, impl.GetAsBoolean());
    case BooleanOrByteStringByteStringRecord::SpecificType::kByteStringByteStringRecord:
      return ToV8(impl.GetAsByteStringByteStringRecord(), creationContext, isolate);
    default:
      NOTREACHED();
  }
  return v8::Local<v8::Value>();
}

BooleanOrByteStringByteStringRecord NativeValueTraits<BooleanOrByteStringByteStringRecord>::NativeValue(
    v8::Isolate* isolate, v8::Local<v8::Value> value, ExceptionState& exception_state) {
  BooleanOrByteStringByteStringRecord impl;
  V8BooleanOrByteStringByteStringRecord::ToImpl(isolate, value, impl, UnionTypeConversionMode::kNotNullable, exception_state);
  return impl;
}

}  // namespace blink
