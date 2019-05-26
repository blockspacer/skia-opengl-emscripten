// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated from the Jinja2 template
// third_party/blink/renderer/bindings/templates/union_container.cc.tmpl
// by the script code_generator_v8.py.
// DO NOT MODIFY!

// clang-format off
#include "third_party/blink/renderer/bindings/core/v8/string_or_element_creation_options.h"

#include "base/stl_util.h"
#include "third_party/blink/renderer/bindings/core/v8/idl_types.h"
#include "third_party/blink/renderer/bindings/core/v8/native_value_traits_impl.h"
#include "third_party/blink/renderer/bindings/core/v8/to_v8_for_core.h"

namespace blink {

StringOrElementCreationOptions::StringOrElementCreationOptions() : type_(SpecificType::kNone) {}

ElementCreationOptions* StringOrElementCreationOptions::GetAsElementCreationOptions() const {
  DCHECK(IsElementCreationOptions());
  return element_creation_options_;
}

void StringOrElementCreationOptions::SetElementCreationOptions(ElementCreationOptions* value) {
  DCHECK(IsNull());
  element_creation_options_ = value;
  type_ = SpecificType::kElementCreationOptions;
}

StringOrElementCreationOptions StringOrElementCreationOptions::FromElementCreationOptions(ElementCreationOptions* value) {
  StringOrElementCreationOptions container;
  container.SetElementCreationOptions(value);
  return container;
}

const String& StringOrElementCreationOptions::GetAsString() const {
  DCHECK(IsString());
  return string_;
}

void StringOrElementCreationOptions::SetString(const String& value) {
  DCHECK(IsNull());
  string_ = value;
  type_ = SpecificType::kString;
}

StringOrElementCreationOptions StringOrElementCreationOptions::FromString(const String& value) {
  StringOrElementCreationOptions container;
  container.SetString(value);
  return container;
}

StringOrElementCreationOptions::StringOrElementCreationOptions(const StringOrElementCreationOptions&) = default;
StringOrElementCreationOptions::~StringOrElementCreationOptions() = default;
StringOrElementCreationOptions& StringOrElementCreationOptions::operator=(const StringOrElementCreationOptions&) = default;

void StringOrElementCreationOptions::Trace(blink::Visitor* visitor) {
  visitor->Trace(element_creation_options_);
}

void V8StringOrElementCreationOptions::ToImpl(
    v8::Isolate* isolate,
    v8::Local<v8::Value> v8_value,
    StringOrElementCreationOptions& impl,
    UnionTypeConversionMode conversion_mode,
    ExceptionState& exception_state) {
  if (v8_value.IsEmpty())
    return;

  if (conversion_mode == UnionTypeConversionMode::kNullable && IsUndefinedOrNull(v8_value))
    return;

  if (IsUndefinedOrNull(v8_value)) {
    ElementCreationOptions* cpp_value = NativeValueTraits<ElementCreationOptions>::NativeValue(isolate, v8_value, exception_state);
    if (exception_state.HadException())
      return;
    impl.SetElementCreationOptions(cpp_value);
    return;
  }

  if (v8_value->IsObject()) {
    ElementCreationOptions* cpp_value = NativeValueTraits<ElementCreationOptions>::NativeValue(isolate, v8_value, exception_state);
    if (exception_state.HadException())
      return;
    impl.SetElementCreationOptions(cpp_value);
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

v8::Local<v8::Value> ToV8(const StringOrElementCreationOptions& impl, v8::Local<v8::Object> creationContext, v8::Isolate* isolate) {
  switch (impl.type_) {
    case StringOrElementCreationOptions::SpecificType::kNone:
      return v8::Null(isolate);
    case StringOrElementCreationOptions::SpecificType::kElementCreationOptions:
      return ToV8(impl.GetAsElementCreationOptions(), creationContext, isolate);
    case StringOrElementCreationOptions::SpecificType::kString:
      return V8String(isolate, impl.GetAsString());
    default:
      NOTREACHED();
  }
  return v8::Local<v8::Value>();
}

StringOrElementCreationOptions NativeValueTraits<StringOrElementCreationOptions>::NativeValue(
    v8::Isolate* isolate, v8::Local<v8::Value> value, ExceptionState& exception_state) {
  StringOrElementCreationOptions impl;
  V8StringOrElementCreationOptions::ToImpl(isolate, value, impl, UnionTypeConversionMode::kNotNullable, exception_state);
  return impl;
}

}  // namespace blink
