// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated from the Jinja2 template
// third_party/blink/renderer/bindings/templates/union_container.cc.tmpl
// by the script code_generator_v8.py.
// DO NOT MODIFY!

// clang-format off
#include "third_party/blink/renderer/bindings/modules/v8/array_buffer_or_array_buffer_view_or_usv_string.h"

#include "base/stl_util.h"
#include "third_party/blink/renderer/bindings/core/v8/idl_types.h"
#include "third_party/blink/renderer/bindings/core/v8/native_value_traits_impl.h"
#include "third_party/blink/renderer/bindings/core/v8/to_v8_for_core.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_array_buffer.h"

namespace blink {

ArrayBufferOrArrayBufferViewOrUSVString::ArrayBufferOrArrayBufferViewOrUSVString() : type_(SpecificType::kNone) {}

DOMArrayBuffer* ArrayBufferOrArrayBufferViewOrUSVString::GetAsArrayBuffer() const {
  DCHECK(IsArrayBuffer());
  return array_buffer_;
}

void ArrayBufferOrArrayBufferViewOrUSVString::SetArrayBuffer(DOMArrayBuffer* value) {
  DCHECK(IsNull());
  array_buffer_ = value;
  type_ = SpecificType::kArrayBuffer;
}

ArrayBufferOrArrayBufferViewOrUSVString ArrayBufferOrArrayBufferViewOrUSVString::FromArrayBuffer(DOMArrayBuffer* value) {
  ArrayBufferOrArrayBufferViewOrUSVString container;
  container.SetArrayBuffer(value);
  return container;
}

NotShared<DOMArrayBufferView> ArrayBufferOrArrayBufferViewOrUSVString::GetAsArrayBufferView() const {
  DCHECK(IsArrayBufferView());
  return array_buffer_view_;
}

void ArrayBufferOrArrayBufferViewOrUSVString::SetArrayBufferView(NotShared<DOMArrayBufferView> value) {
  DCHECK(IsNull());
  array_buffer_view_ = Member<DOMArrayBufferView>(value.View());
  type_ = SpecificType::kArrayBufferView;
}

ArrayBufferOrArrayBufferViewOrUSVString ArrayBufferOrArrayBufferViewOrUSVString::FromArrayBufferView(NotShared<DOMArrayBufferView> value) {
  ArrayBufferOrArrayBufferViewOrUSVString container;
  container.SetArrayBufferView(value);
  return container;
}

const String& ArrayBufferOrArrayBufferViewOrUSVString::GetAsUSVString() const {
  DCHECK(IsUSVString());
  return usv_string_;
}

void ArrayBufferOrArrayBufferViewOrUSVString::SetUSVString(const String& value) {
  DCHECK(IsNull());
  usv_string_ = value;
  type_ = SpecificType::kUSVString;
}

ArrayBufferOrArrayBufferViewOrUSVString ArrayBufferOrArrayBufferViewOrUSVString::FromUSVString(const String& value) {
  ArrayBufferOrArrayBufferViewOrUSVString container;
  container.SetUSVString(value);
  return container;
}

ArrayBufferOrArrayBufferViewOrUSVString::ArrayBufferOrArrayBufferViewOrUSVString(const ArrayBufferOrArrayBufferViewOrUSVString&) = default;
ArrayBufferOrArrayBufferViewOrUSVString::~ArrayBufferOrArrayBufferViewOrUSVString() = default;
ArrayBufferOrArrayBufferViewOrUSVString& ArrayBufferOrArrayBufferViewOrUSVString::operator=(const ArrayBufferOrArrayBufferViewOrUSVString&) = default;

void ArrayBufferOrArrayBufferViewOrUSVString::Trace(blink::Visitor* visitor) {
  visitor->Trace(array_buffer_);
  visitor->Trace(array_buffer_view_);
}

void V8ArrayBufferOrArrayBufferViewOrUSVString::ToImpl(
    v8::Isolate* isolate,
    v8::Local<v8::Value> v8_value,
    ArrayBufferOrArrayBufferViewOrUSVString& impl,
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

  if (v8_value->IsArrayBufferView()) {
    NotShared<DOMArrayBufferView> cpp_value = ToNotShared<NotShared<DOMArrayBufferView>>(isolate, v8_value, exception_state);
    if (exception_state.HadException())
      return;
    impl.SetArrayBufferView(cpp_value);
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

v8::Local<v8::Value> ToV8(const ArrayBufferOrArrayBufferViewOrUSVString& impl, v8::Local<v8::Object> creationContext, v8::Isolate* isolate) {
  switch (impl.type_) {
    case ArrayBufferOrArrayBufferViewOrUSVString::SpecificType::kNone:
      return v8::Null(isolate);
    case ArrayBufferOrArrayBufferViewOrUSVString::SpecificType::kArrayBuffer:
      return ToV8(impl.GetAsArrayBuffer(), creationContext, isolate);
    case ArrayBufferOrArrayBufferViewOrUSVString::SpecificType::kArrayBufferView:
      return ToV8(impl.GetAsArrayBufferView(), creationContext, isolate);
    case ArrayBufferOrArrayBufferViewOrUSVString::SpecificType::kUSVString:
      return V8String(isolate, impl.GetAsUSVString());
    default:
      NOTREACHED();
  }
  return v8::Local<v8::Value>();
}

ArrayBufferOrArrayBufferViewOrUSVString NativeValueTraits<ArrayBufferOrArrayBufferViewOrUSVString>::NativeValue(
    v8::Isolate* isolate, v8::Local<v8::Value> value, ExceptionState& exception_state) {
  ArrayBufferOrArrayBufferViewOrUSVString impl;
  V8ArrayBufferOrArrayBufferViewOrUSVString::ToImpl(isolate, value, impl, UnionTypeConversionMode::kNotNullable, exception_state);
  return impl;
}

}  // namespace blink
