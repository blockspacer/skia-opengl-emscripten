// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated from the Jinja2 template
// third_party/blink/renderer/bindings/templates/union_container.cc.tmpl
// by the script code_generator_v8.py.
// DO NOT MODIFY!

// clang-format off
#include "third_party/blink/renderer/bindings/core/v8/string_or_array_buffer.h"

#include "base/stl_util.h"
#include "third_party/blink/renderer/bindings/core/v8/idl_types.h"
#include "third_party/blink/renderer/bindings/core/v8/native_value_traits_impl.h"
#include "third_party/blink/renderer/bindings/core/v8/to_v8_for_core.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_array_buffer.h"

namespace blink {

StringOrArrayBuffer::StringOrArrayBuffer() : type_(SpecificType::kNone) {}

DOMArrayBuffer* StringOrArrayBuffer::GetAsArrayBuffer() const {
  DCHECK(IsArrayBuffer());
  return array_buffer_;
}

void StringOrArrayBuffer::SetArrayBuffer(DOMArrayBuffer* value) {
  DCHECK(IsNull());
  array_buffer_ = value;
  type_ = SpecificType::kArrayBuffer;
}

StringOrArrayBuffer StringOrArrayBuffer::FromArrayBuffer(DOMArrayBuffer* value) {
  StringOrArrayBuffer container;
  container.SetArrayBuffer(value);
  return container;
}

const String& StringOrArrayBuffer::GetAsString() const {
  DCHECK(IsString());
  return string_;
}

void StringOrArrayBuffer::SetString(const String& value) {
  DCHECK(IsNull());
  string_ = value;
  type_ = SpecificType::kString;
}

StringOrArrayBuffer StringOrArrayBuffer::FromString(const String& value) {
  StringOrArrayBuffer container;
  container.SetString(value);
  return container;
}

StringOrArrayBuffer::StringOrArrayBuffer(const StringOrArrayBuffer&) = default;
StringOrArrayBuffer::~StringOrArrayBuffer() = default;
StringOrArrayBuffer& StringOrArrayBuffer::operator=(const StringOrArrayBuffer&) = default;

void StringOrArrayBuffer::Trace(blink::Visitor* visitor) {
  visitor->Trace(array_buffer_);
}

void V8StringOrArrayBuffer::ToImpl(
    v8::Isolate* isolate,
    v8::Local<v8::Value> v8_value,
    StringOrArrayBuffer& impl,
    UnionTypeConversionMode conversion_mode,
    ExceptionState& exception_state) {
  if (v8_value.IsEmpty())
    return;

  if (conversion_mode == UnionTypeConversionMode::kNullable && IsUndefinedOrNull(v8_value))
    return;

  if (v8_value->IsArrayBuffer()) {
    DOMArrayBuffer* cpp_value = V8ArrayBuffer::ToImpl(v8::Local<v8::Object>::Cast(v8_value));
    impl.SetArrayBuffer(cpp_value);
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

v8::Local<v8::Value> ToV8(const StringOrArrayBuffer& impl, v8::Local<v8::Object> creationContext, v8::Isolate* isolate) {
  switch (impl.type_) {
    case StringOrArrayBuffer::SpecificType::kNone:
      return v8::Null(isolate);
    case StringOrArrayBuffer::SpecificType::kArrayBuffer:
      return ToV8(impl.GetAsArrayBuffer(), creationContext, isolate);
    case StringOrArrayBuffer::SpecificType::kString:
      return V8String(isolate, impl.GetAsString());
    default:
      NOTREACHED();
  }
  return v8::Local<v8::Value>();
}

StringOrArrayBuffer NativeValueTraits<StringOrArrayBuffer>::NativeValue(
    v8::Isolate* isolate, v8::Local<v8::Value> value, ExceptionState& exception_state) {
  StringOrArrayBuffer impl;
  V8StringOrArrayBuffer::ToImpl(isolate, value, impl, UnionTypeConversionMode::kNotNullable, exception_state);
  return impl;
}

}  // namespace blink
