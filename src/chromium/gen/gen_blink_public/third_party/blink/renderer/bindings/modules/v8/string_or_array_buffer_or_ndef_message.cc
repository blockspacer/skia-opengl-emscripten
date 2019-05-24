// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated from the Jinja2 template
// third_party/blink/renderer/bindings/templates/union_container.cc.tmpl
// by the script code_generator_v8.py.
// DO NOT MODIFY!

// clang-format off
#include "third_party/blink/renderer/bindings/modules/v8/string_or_array_buffer_or_ndef_message.h"

#include "base/stl_util.h"
#include "third_party/blink/renderer/bindings/core/v8/idl_types.h"
#include "third_party/blink/renderer/bindings/core/v8/native_value_traits_impl.h"
#include "third_party/blink/renderer/bindings/core/v8/to_v8_for_core.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_array_buffer.h"

namespace blink {

StringOrArrayBufferOrNDEFMessage::StringOrArrayBufferOrNDEFMessage() : type_(SpecificType::kNone) {}

DOMArrayBuffer* StringOrArrayBufferOrNDEFMessage::GetAsArrayBuffer() const {
  DCHECK(IsArrayBuffer());
  return array_buffer_;
}

void StringOrArrayBufferOrNDEFMessage::SetArrayBuffer(DOMArrayBuffer* value) {
  DCHECK(IsNull());
  array_buffer_ = value;
  type_ = SpecificType::kArrayBuffer;
}

StringOrArrayBufferOrNDEFMessage StringOrArrayBufferOrNDEFMessage::FromArrayBuffer(DOMArrayBuffer* value) {
  StringOrArrayBufferOrNDEFMessage container;
  container.SetArrayBuffer(value);
  return container;
}

NDEFMessage* StringOrArrayBufferOrNDEFMessage::GetAsNDEFMessage() const {
  DCHECK(IsNDEFMessage());
  return ndef_message_;
}

void StringOrArrayBufferOrNDEFMessage::SetNDEFMessage(NDEFMessage* value) {
  DCHECK(IsNull());
  ndef_message_ = value;
  type_ = SpecificType::kNDEFMessage;
}

StringOrArrayBufferOrNDEFMessage StringOrArrayBufferOrNDEFMessage::FromNDEFMessage(NDEFMessage* value) {
  StringOrArrayBufferOrNDEFMessage container;
  container.SetNDEFMessage(value);
  return container;
}

const String& StringOrArrayBufferOrNDEFMessage::GetAsString() const {
  DCHECK(IsString());
  return string_;
}

void StringOrArrayBufferOrNDEFMessage::SetString(const String& value) {
  DCHECK(IsNull());
  string_ = value;
  type_ = SpecificType::kString;
}

StringOrArrayBufferOrNDEFMessage StringOrArrayBufferOrNDEFMessage::FromString(const String& value) {
  StringOrArrayBufferOrNDEFMessage container;
  container.SetString(value);
  return container;
}

StringOrArrayBufferOrNDEFMessage::StringOrArrayBufferOrNDEFMessage(const StringOrArrayBufferOrNDEFMessage&) = default;
StringOrArrayBufferOrNDEFMessage::~StringOrArrayBufferOrNDEFMessage() = default;
StringOrArrayBufferOrNDEFMessage& StringOrArrayBufferOrNDEFMessage::operator=(const StringOrArrayBufferOrNDEFMessage&) = default;

void StringOrArrayBufferOrNDEFMessage::Trace(blink::Visitor* visitor) {
  visitor->Trace(array_buffer_);
  visitor->Trace(ndef_message_);
}

void V8StringOrArrayBufferOrNDEFMessage::ToImpl(
    v8::Isolate* isolate,
    v8::Local<v8::Value> v8_value,
    StringOrArrayBufferOrNDEFMessage& impl,
    UnionTypeConversionMode conversion_mode,
    ExceptionState& exception_state) {
  if (v8_value.IsEmpty())
    return;

  if (conversion_mode == UnionTypeConversionMode::kNullable && IsUndefinedOrNull(v8_value))
    return;

  if (IsUndefinedOrNull(v8_value)) {
    NDEFMessage* cpp_value = NativeValueTraits<NDEFMessage>::NativeValue(isolate, v8_value, exception_state);
    if (exception_state.HadException())
      return;
    impl.SetNDEFMessage(cpp_value);
    return;
  }

  if (v8_value->IsArrayBuffer()) {
    DOMArrayBuffer* cpp_value = V8ArrayBuffer::ToImpl(v8::Local<v8::Object>::Cast(v8_value));
    impl.SetArrayBuffer(cpp_value);
    return;
  }

  if (v8_value->IsObject()) {
    NDEFMessage* cpp_value = NativeValueTraits<NDEFMessage>::NativeValue(isolate, v8_value, exception_state);
    if (exception_state.HadException())
      return;
    impl.SetNDEFMessage(cpp_value);
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

v8::Local<v8::Value> ToV8(const StringOrArrayBufferOrNDEFMessage& impl, v8::Local<v8::Object> creationContext, v8::Isolate* isolate) {
  switch (impl.type_) {
    case StringOrArrayBufferOrNDEFMessage::SpecificType::kNone:
      return v8::Null(isolate);
    case StringOrArrayBufferOrNDEFMessage::SpecificType::kArrayBuffer:
      return ToV8(impl.GetAsArrayBuffer(), creationContext, isolate);
    case StringOrArrayBufferOrNDEFMessage::SpecificType::kNDEFMessage:
      return ToV8(impl.GetAsNDEFMessage(), creationContext, isolate);
    case StringOrArrayBufferOrNDEFMessage::SpecificType::kString:
      return V8String(isolate, impl.GetAsString());
    default:
      NOTREACHED();
  }
  return v8::Local<v8::Value>();
}

StringOrArrayBufferOrNDEFMessage NativeValueTraits<StringOrArrayBufferOrNDEFMessage>::NativeValue(
    v8::Isolate* isolate, v8::Local<v8::Value> value, ExceptionState& exception_state) {
  StringOrArrayBufferOrNDEFMessage impl;
  V8StringOrArrayBufferOrNDEFMessage::ToImpl(isolate, value, impl, UnionTypeConversionMode::kNotNullable, exception_state);
  return impl;
}

}  // namespace blink
