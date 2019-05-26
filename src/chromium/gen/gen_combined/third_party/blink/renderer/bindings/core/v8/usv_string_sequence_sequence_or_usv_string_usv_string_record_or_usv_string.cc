// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated from the Jinja2 template
// third_party/blink/renderer/bindings/templates/union_container.cc.tmpl
// by the script code_generator_v8.py.
// DO NOT MODIFY!

// clang-format off
#include "third_party/blink/renderer/bindings/core/v8/usv_string_sequence_sequence_or_usv_string_usv_string_record_or_usv_string.h"

#include "base/stl_util.h"
#include "third_party/blink/renderer/bindings/core/v8/idl_types.h"
#include "third_party/blink/renderer/bindings/core/v8/native_value_traits_impl.h"
#include "third_party/blink/renderer/bindings/core/v8/to_v8_for_core.h"

namespace blink {

USVStringSequenceSequenceOrUSVStringUSVStringRecordOrUSVString::USVStringSequenceSequenceOrUSVStringUSVStringRecordOrUSVString() : type_(SpecificType::kNone) {}

const String& USVStringSequenceSequenceOrUSVStringUSVStringRecordOrUSVString::GetAsUSVString() const {
  DCHECK(IsUSVString());
  return usv_string_;
}

void USVStringSequenceSequenceOrUSVStringUSVStringRecordOrUSVString::SetUSVString(const String& value) {
  DCHECK(IsNull());
  usv_string_ = value;
  type_ = SpecificType::kUSVString;
}

USVStringSequenceSequenceOrUSVStringUSVStringRecordOrUSVString USVStringSequenceSequenceOrUSVStringUSVStringRecordOrUSVString::FromUSVString(const String& value) {
  USVStringSequenceSequenceOrUSVStringUSVStringRecordOrUSVString container;
  container.SetUSVString(value);
  return container;
}

const Vector<Vector<String>>& USVStringSequenceSequenceOrUSVStringUSVStringRecordOrUSVString::GetAsUSVStringSequenceSequence() const {
  DCHECK(IsUSVStringSequenceSequence());
  return usv_string_sequence_sequence_;
}

void USVStringSequenceSequenceOrUSVStringUSVStringRecordOrUSVString::SetUSVStringSequenceSequence(const Vector<Vector<String>>& value) {
  DCHECK(IsNull());
  usv_string_sequence_sequence_ = value;
  type_ = SpecificType::kUSVStringSequenceSequence;
}

USVStringSequenceSequenceOrUSVStringUSVStringRecordOrUSVString USVStringSequenceSequenceOrUSVStringUSVStringRecordOrUSVString::FromUSVStringSequenceSequence(const Vector<Vector<String>>& value) {
  USVStringSequenceSequenceOrUSVStringUSVStringRecordOrUSVString container;
  container.SetUSVStringSequenceSequence(value);
  return container;
}

const Vector<std::pair<String, String>>& USVStringSequenceSequenceOrUSVStringUSVStringRecordOrUSVString::GetAsUSVStringUSVStringRecord() const {
  DCHECK(IsUSVStringUSVStringRecord());
  return usv_string_usv_string_record_;
}

void USVStringSequenceSequenceOrUSVStringUSVStringRecordOrUSVString::SetUSVStringUSVStringRecord(const Vector<std::pair<String, String>>& value) {
  DCHECK(IsNull());
  usv_string_usv_string_record_ = value;
  type_ = SpecificType::kUSVStringUSVStringRecord;
}

USVStringSequenceSequenceOrUSVStringUSVStringRecordOrUSVString USVStringSequenceSequenceOrUSVStringUSVStringRecordOrUSVString::FromUSVStringUSVStringRecord(const Vector<std::pair<String, String>>& value) {
  USVStringSequenceSequenceOrUSVStringUSVStringRecordOrUSVString container;
  container.SetUSVStringUSVStringRecord(value);
  return container;
}

USVStringSequenceSequenceOrUSVStringUSVStringRecordOrUSVString::USVStringSequenceSequenceOrUSVStringUSVStringRecordOrUSVString(const USVStringSequenceSequenceOrUSVStringUSVStringRecordOrUSVString&) = default;
USVStringSequenceSequenceOrUSVStringUSVStringRecordOrUSVString::~USVStringSequenceSequenceOrUSVStringUSVStringRecordOrUSVString() = default;
USVStringSequenceSequenceOrUSVStringUSVStringRecordOrUSVString& USVStringSequenceSequenceOrUSVStringUSVStringRecordOrUSVString::operator=(const USVStringSequenceSequenceOrUSVStringUSVStringRecordOrUSVString&) = default;

void USVStringSequenceSequenceOrUSVStringUSVStringRecordOrUSVString::Trace(blink::Visitor* visitor) {
}

void V8USVStringSequenceSequenceOrUSVStringUSVStringRecordOrUSVString::ToImpl(
    v8::Isolate* isolate,
    v8::Local<v8::Value> v8_value,
    USVStringSequenceSequenceOrUSVStringUSVStringRecordOrUSVString& impl,
    UnionTypeConversionMode conversion_mode,
    ExceptionState& exception_state) {
  if (v8_value.IsEmpty())
    return;

  if (conversion_mode == UnionTypeConversionMode::kNullable && IsUndefinedOrNull(v8_value))
    return;

  if (HasCallableIteratorSymbol(isolate, v8_value, exception_state)) {
    Vector<Vector<String>> cpp_value = NativeValueTraits<IDLSequence<IDLSequence<IDLUSVString>>>::NativeValue(isolate, v8_value, exception_state);
    if (exception_state.HadException())
      return;
    impl.SetUSVStringSequenceSequence(cpp_value);
    return;
  }

  if (v8_value->IsObject()) {
    Vector<std::pair<String, String>> cpp_value = NativeValueTraits<IDLRecord<IDLUSVString, IDLUSVString>>::NativeValue(isolate, v8_value, exception_state);
    if (exception_state.HadException())
      return;
    impl.SetUSVStringUSVStringRecord(cpp_value);
    return;
  }

  {
    V8StringResource<> cpp_value = NativeValueTraits<IDLUSVString>::NativeValue(isolate, v8_value, exception_state);
    if (exception_state.HadException())
      return;
    impl.SetUSVString(cpp_value);
    return;
  }
}

v8::Local<v8::Value> ToV8(const USVStringSequenceSequenceOrUSVStringUSVStringRecordOrUSVString& impl, v8::Local<v8::Object> creationContext, v8::Isolate* isolate) {
  switch (impl.type_) {
    case USVStringSequenceSequenceOrUSVStringUSVStringRecordOrUSVString::SpecificType::kNone:
      return v8::Null(isolate);
    case USVStringSequenceSequenceOrUSVStringUSVStringRecordOrUSVString::SpecificType::kUSVString:
      return V8String(isolate, impl.GetAsUSVString());
    case USVStringSequenceSequenceOrUSVStringUSVStringRecordOrUSVString::SpecificType::kUSVStringSequenceSequence:
      return ToV8(impl.GetAsUSVStringSequenceSequence(), creationContext, isolate);
    case USVStringSequenceSequenceOrUSVStringUSVStringRecordOrUSVString::SpecificType::kUSVStringUSVStringRecord:
      return ToV8(impl.GetAsUSVStringUSVStringRecord(), creationContext, isolate);
    default:
      NOTREACHED();
  }
  return v8::Local<v8::Value>();
}

USVStringSequenceSequenceOrUSVStringUSVStringRecordOrUSVString NativeValueTraits<USVStringSequenceSequenceOrUSVStringUSVStringRecordOrUSVString>::NativeValue(
    v8::Isolate* isolate, v8::Local<v8::Value> value, ExceptionState& exception_state) {
  USVStringSequenceSequenceOrUSVStringUSVStringRecordOrUSVString impl;
  V8USVStringSequenceSequenceOrUSVStringUSVStringRecordOrUSVString::ToImpl(isolate, value, impl, UnionTypeConversionMode::kNotNullable, exception_state);
  return impl;
}

}  // namespace blink
