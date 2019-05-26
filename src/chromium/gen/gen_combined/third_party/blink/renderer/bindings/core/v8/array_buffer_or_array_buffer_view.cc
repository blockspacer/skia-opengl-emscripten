// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated from the Jinja2 template
// third_party/blink/renderer/bindings/templates/union_container.cc.tmpl
// by the script code_generator_v8.py.
// DO NOT MODIFY!

// clang-format off
#include "third_party/blink/renderer/bindings/core/v8/array_buffer_or_array_buffer_view.h"

#include "base/stl_util.h"
#include "third_party/blink/renderer/bindings/core/v8/to_v8_for_core.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_array_buffer.h"

namespace blink {

ArrayBufferOrArrayBufferView::ArrayBufferOrArrayBufferView() : type_(SpecificType::kNone) {}

DOMArrayBuffer* ArrayBufferOrArrayBufferView::GetAsArrayBuffer() const {
  DCHECK(IsArrayBuffer());
  return array_buffer_;
}

void ArrayBufferOrArrayBufferView::SetArrayBuffer(DOMArrayBuffer* value) {
  DCHECK(IsNull());
  array_buffer_ = value;
  type_ = SpecificType::kArrayBuffer;
}

ArrayBufferOrArrayBufferView ArrayBufferOrArrayBufferView::FromArrayBuffer(DOMArrayBuffer* value) {
  ArrayBufferOrArrayBufferView container;
  container.SetArrayBuffer(value);
  return container;
}

NotShared<DOMArrayBufferView> ArrayBufferOrArrayBufferView::GetAsArrayBufferView() const {
  DCHECK(IsArrayBufferView());
  return array_buffer_view_;
}

void ArrayBufferOrArrayBufferView::SetArrayBufferView(NotShared<DOMArrayBufferView> value) {
  DCHECK(IsNull());
  array_buffer_view_ = Member<DOMArrayBufferView>(value.View());
  type_ = SpecificType::kArrayBufferView;
}

ArrayBufferOrArrayBufferView ArrayBufferOrArrayBufferView::FromArrayBufferView(NotShared<DOMArrayBufferView> value) {
  ArrayBufferOrArrayBufferView container;
  container.SetArrayBufferView(value);
  return container;
}

ArrayBufferOrArrayBufferView::ArrayBufferOrArrayBufferView(const ArrayBufferOrArrayBufferView&) = default;
ArrayBufferOrArrayBufferView::~ArrayBufferOrArrayBufferView() = default;
ArrayBufferOrArrayBufferView& ArrayBufferOrArrayBufferView::operator=(const ArrayBufferOrArrayBufferView&) = default;

void ArrayBufferOrArrayBufferView::Trace(blink::Visitor* visitor) {
  visitor->Trace(array_buffer_);
  visitor->Trace(array_buffer_view_);
}

void V8ArrayBufferOrArrayBufferView::ToImpl(
    v8::Isolate* isolate,
    v8::Local<v8::Value> v8_value,
    ArrayBufferOrArrayBufferView& impl,
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

  exception_state.ThrowTypeError("The provided value is not of type '(ArrayBuffer or ArrayBufferView)'");
}

v8::Local<v8::Value> ToV8(const ArrayBufferOrArrayBufferView& impl, v8::Local<v8::Object> creationContext, v8::Isolate* isolate) {
  switch (impl.type_) {
    case ArrayBufferOrArrayBufferView::SpecificType::kNone:
      return v8::Null(isolate);
    case ArrayBufferOrArrayBufferView::SpecificType::kArrayBuffer:
      return ToV8(impl.GetAsArrayBuffer(), creationContext, isolate);
    case ArrayBufferOrArrayBufferView::SpecificType::kArrayBufferView:
      return ToV8(impl.GetAsArrayBufferView(), creationContext, isolate);
    default:
      NOTREACHED();
  }
  return v8::Local<v8::Value>();
}

ArrayBufferOrArrayBufferView NativeValueTraits<ArrayBufferOrArrayBufferView>::NativeValue(
    v8::Isolate* isolate, v8::Local<v8::Value> value, ExceptionState& exception_state) {
  ArrayBufferOrArrayBufferView impl;
  V8ArrayBufferOrArrayBufferView::ToImpl(isolate, value, impl, UnionTypeConversionMode::kNotNullable, exception_state);
  return impl;
}

}  // namespace blink
