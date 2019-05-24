// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated from the Jinja2 template
// third_party/blink/renderer/bindings/templates/union_container.cc.tmpl
// by the script code_generator_v8.py.
// DO NOT MODIFY!

// clang-format off
#include "third_party/blink/renderer/bindings/core/v8/array_buffer_or_array_buffer_view_or_blob_or_usv_string.h"

#include "base/stl_util.h"
#include "third_party/blink/renderer/bindings/core/v8/idl_types.h"
#include "third_party/blink/renderer/bindings/core/v8/native_value_traits_impl.h"
#include "third_party/blink/renderer/bindings/core/v8/to_v8_for_core.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_array_buffer.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_blob.h"

namespace blink {

ArrayBufferOrArrayBufferViewOrBlobOrUSVString::ArrayBufferOrArrayBufferViewOrBlobOrUSVString() : type_(SpecificType::kNone) {}

DOMArrayBuffer* ArrayBufferOrArrayBufferViewOrBlobOrUSVString::GetAsArrayBuffer() const {
  DCHECK(IsArrayBuffer());
  return array_buffer_;
}

void ArrayBufferOrArrayBufferViewOrBlobOrUSVString::SetArrayBuffer(DOMArrayBuffer* value) {
  DCHECK(IsNull());
  array_buffer_ = value;
  type_ = SpecificType::kArrayBuffer;
}

ArrayBufferOrArrayBufferViewOrBlobOrUSVString ArrayBufferOrArrayBufferViewOrBlobOrUSVString::FromArrayBuffer(DOMArrayBuffer* value) {
  ArrayBufferOrArrayBufferViewOrBlobOrUSVString container;
  container.SetArrayBuffer(value);
  return container;
}

NotShared<DOMArrayBufferView> ArrayBufferOrArrayBufferViewOrBlobOrUSVString::GetAsArrayBufferView() const {
  DCHECK(IsArrayBufferView());
  return array_buffer_view_;
}

void ArrayBufferOrArrayBufferViewOrBlobOrUSVString::SetArrayBufferView(NotShared<DOMArrayBufferView> value) {
  DCHECK(IsNull());
  array_buffer_view_ = Member<DOMArrayBufferView>(value.View());
  type_ = SpecificType::kArrayBufferView;
}

ArrayBufferOrArrayBufferViewOrBlobOrUSVString ArrayBufferOrArrayBufferViewOrBlobOrUSVString::FromArrayBufferView(NotShared<DOMArrayBufferView> value) {
  ArrayBufferOrArrayBufferViewOrBlobOrUSVString container;
  container.SetArrayBufferView(value);
  return container;
}

Blob* ArrayBufferOrArrayBufferViewOrBlobOrUSVString::GetAsBlob() const {
  DCHECK(IsBlob());
  return blob_;
}

void ArrayBufferOrArrayBufferViewOrBlobOrUSVString::SetBlob(Blob* value) {
  DCHECK(IsNull());
  blob_ = value;
  type_ = SpecificType::kBlob;
}

ArrayBufferOrArrayBufferViewOrBlobOrUSVString ArrayBufferOrArrayBufferViewOrBlobOrUSVString::FromBlob(Blob* value) {
  ArrayBufferOrArrayBufferViewOrBlobOrUSVString container;
  container.SetBlob(value);
  return container;
}

const String& ArrayBufferOrArrayBufferViewOrBlobOrUSVString::GetAsUSVString() const {
  DCHECK(IsUSVString());
  return usv_string_;
}

void ArrayBufferOrArrayBufferViewOrBlobOrUSVString::SetUSVString(const String& value) {
  DCHECK(IsNull());
  usv_string_ = value;
  type_ = SpecificType::kUSVString;
}

ArrayBufferOrArrayBufferViewOrBlobOrUSVString ArrayBufferOrArrayBufferViewOrBlobOrUSVString::FromUSVString(const String& value) {
  ArrayBufferOrArrayBufferViewOrBlobOrUSVString container;
  container.SetUSVString(value);
  return container;
}

ArrayBufferOrArrayBufferViewOrBlobOrUSVString::ArrayBufferOrArrayBufferViewOrBlobOrUSVString(const ArrayBufferOrArrayBufferViewOrBlobOrUSVString&) = default;
ArrayBufferOrArrayBufferViewOrBlobOrUSVString::~ArrayBufferOrArrayBufferViewOrBlobOrUSVString() = default;
ArrayBufferOrArrayBufferViewOrBlobOrUSVString& ArrayBufferOrArrayBufferViewOrBlobOrUSVString::operator=(const ArrayBufferOrArrayBufferViewOrBlobOrUSVString&) = default;

void ArrayBufferOrArrayBufferViewOrBlobOrUSVString::Trace(blink::Visitor* visitor) {
  visitor->Trace(array_buffer_);
  visitor->Trace(array_buffer_view_);
  visitor->Trace(blob_);
}

void V8ArrayBufferOrArrayBufferViewOrBlobOrUSVString::ToImpl(
    v8::Isolate* isolate,
    v8::Local<v8::Value> v8_value,
    ArrayBufferOrArrayBufferViewOrBlobOrUSVString& impl,
    UnionTypeConversionMode conversion_mode,
    ExceptionState& exception_state) {
  if (v8_value.IsEmpty())
    return;

  if (conversion_mode == UnionTypeConversionMode::kNullable && IsUndefinedOrNull(v8_value))
    return;

  if (V8Blob::HasInstance(v8_value, isolate)) {
    Blob* cpp_value = V8Blob::ToImpl(v8::Local<v8::Object>::Cast(v8_value));
    impl.SetBlob(cpp_value);
    return;
  }

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

v8::Local<v8::Value> ToV8(const ArrayBufferOrArrayBufferViewOrBlobOrUSVString& impl, v8::Local<v8::Object> creationContext, v8::Isolate* isolate) {
  switch (impl.type_) {
    case ArrayBufferOrArrayBufferViewOrBlobOrUSVString::SpecificType::kNone:
      return v8::Null(isolate);
    case ArrayBufferOrArrayBufferViewOrBlobOrUSVString::SpecificType::kArrayBuffer:
      return ToV8(impl.GetAsArrayBuffer(), creationContext, isolate);
    case ArrayBufferOrArrayBufferViewOrBlobOrUSVString::SpecificType::kArrayBufferView:
      return ToV8(impl.GetAsArrayBufferView(), creationContext, isolate);
    case ArrayBufferOrArrayBufferViewOrBlobOrUSVString::SpecificType::kBlob:
      return ToV8(impl.GetAsBlob(), creationContext, isolate);
    case ArrayBufferOrArrayBufferViewOrBlobOrUSVString::SpecificType::kUSVString:
      return V8String(isolate, impl.GetAsUSVString());
    default:
      NOTREACHED();
  }
  return v8::Local<v8::Value>();
}

ArrayBufferOrArrayBufferViewOrBlobOrUSVString NativeValueTraits<ArrayBufferOrArrayBufferViewOrBlobOrUSVString>::NativeValue(
    v8::Isolate* isolate, v8::Local<v8::Value> value, ExceptionState& exception_state) {
  ArrayBufferOrArrayBufferViewOrBlobOrUSVString impl;
  V8ArrayBufferOrArrayBufferViewOrBlobOrUSVString::ToImpl(isolate, value, impl, UnionTypeConversionMode::kNotNullable, exception_state);
  return impl;
}

}  // namespace blink
