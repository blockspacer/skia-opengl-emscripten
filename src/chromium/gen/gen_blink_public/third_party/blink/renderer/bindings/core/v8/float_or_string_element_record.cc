// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated from the Jinja2 template
// third_party/blink/renderer/bindings/templates/union_container.cc.tmpl
// by the script code_generator_v8.py.
// DO NOT MODIFY!

// clang-format off
#include "third_party/blink/renderer/bindings/core/v8/float_or_string_element_record.h"

#include "base/stl_util.h"
#include "third_party/blink/renderer/bindings/core/v8/idl_types.h"
#include "third_party/blink/renderer/bindings/core/v8/native_value_traits_impl.h"
#include "third_party/blink/renderer/bindings/core/v8/to_v8_for_core.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_element.h"
#include "third_party/blink/renderer/core/animation/element_animation.h"
#include "third_party/blink/renderer/core/css/cssom/element_computed_style_map.h"
#include "third_party/blink/renderer/core/dom/child_node.h"
#include "third_party/blink/renderer/core/dom/non_document_type_child_node.h"
#include "third_party/blink/renderer/core/dom/parent_node.h"
#include "third_party/blink/renderer/core/fullscreen/element_fullscreen.h"

namespace blink {

FloatOrStringElementRecord::FloatOrStringElementRecord() : type_(SpecificType::kNone) {}

float FloatOrStringElementRecord::GetAsFloat() const {
  DCHECK(IsFloat());
  return float_;
}

void FloatOrStringElementRecord::SetFloat(float value) {
  DCHECK(IsNull());
  float_ = value;
  type_ = SpecificType::kFloat;
}

FloatOrStringElementRecord FloatOrStringElementRecord::FromFloat(float value) {
  FloatOrStringElementRecord container;
  container.SetFloat(value);
  return container;
}

const HeapVector<std::pair<String, Member<Element>>>& FloatOrStringElementRecord::GetAsStringElementRecord() const {
  DCHECK(IsStringElementRecord());
  return string_element_record_;
}

void FloatOrStringElementRecord::SetStringElementRecord(const HeapVector<std::pair<String, Member<Element>>>& value) {
  DCHECK(IsNull());
  string_element_record_ = value;
  type_ = SpecificType::kStringElementRecord;
}

FloatOrStringElementRecord FloatOrStringElementRecord::FromStringElementRecord(const HeapVector<std::pair<String, Member<Element>>>& value) {
  FloatOrStringElementRecord container;
  container.SetStringElementRecord(value);
  return container;
}

FloatOrStringElementRecord::FloatOrStringElementRecord(const FloatOrStringElementRecord&) = default;
FloatOrStringElementRecord::~FloatOrStringElementRecord() = default;
FloatOrStringElementRecord& FloatOrStringElementRecord::operator=(const FloatOrStringElementRecord&) = default;

void FloatOrStringElementRecord::Trace(blink::Visitor* visitor) {
  visitor->Trace(string_element_record_);
}

void V8FloatOrStringElementRecord::ToImpl(
    v8::Isolate* isolate,
    v8::Local<v8::Value> v8_value,
    FloatOrStringElementRecord& impl,
    UnionTypeConversionMode conversion_mode,
    ExceptionState& exception_state) {
  if (v8_value.IsEmpty())
    return;

  if (conversion_mode == UnionTypeConversionMode::kNullable && IsUndefinedOrNull(v8_value))
    return;

  if (v8_value->IsObject()) {
    HeapVector<std::pair<String, Member<Element>>> cpp_value = NativeValueTraits<IDLRecord<IDLString, Element>>::NativeValue(isolate, v8_value, exception_state);
    if (exception_state.HadException())
      return;
    impl.SetStringElementRecord(cpp_value);
    return;
  }

  if (v8_value->IsNumber()) {
    float cpp_value = NativeValueTraits<IDLFloat>::NativeValue(isolate, v8_value, exception_state);
    if (exception_state.HadException())
      return;
    impl.SetFloat(cpp_value);
    return;
  }

  {
    float cpp_value = NativeValueTraits<IDLFloat>::NativeValue(isolate, v8_value, exception_state);
    if (exception_state.HadException())
      return;
    impl.SetFloat(cpp_value);
    return;
  }
}

v8::Local<v8::Value> ToV8(const FloatOrStringElementRecord& impl, v8::Local<v8::Object> creationContext, v8::Isolate* isolate) {
  switch (impl.type_) {
    case FloatOrStringElementRecord::SpecificType::kNone:
      return v8::Null(isolate);
    case FloatOrStringElementRecord::SpecificType::kFloat:
      return v8::Number::New(isolate, impl.GetAsFloat());
    case FloatOrStringElementRecord::SpecificType::kStringElementRecord:
      return ToV8(impl.GetAsStringElementRecord(), creationContext, isolate);
    default:
      NOTREACHED();
  }
  return v8::Local<v8::Value>();
}

FloatOrStringElementRecord NativeValueTraits<FloatOrStringElementRecord>::NativeValue(
    v8::Isolate* isolate, v8::Local<v8::Value> value, ExceptionState& exception_state) {
  FloatOrStringElementRecord impl;
  V8FloatOrStringElementRecord::ToImpl(isolate, value, impl, UnionTypeConversionMode::kNotNullable, exception_state);
  return impl;
}

}  // namespace blink
