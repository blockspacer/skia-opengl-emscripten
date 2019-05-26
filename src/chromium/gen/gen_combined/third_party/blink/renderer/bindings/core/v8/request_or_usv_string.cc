// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated from the Jinja2 template
// third_party/blink/renderer/bindings/templates/union_container.cc.tmpl
// by the script code_generator_v8.py.
// DO NOT MODIFY!

// clang-format off
#include "third_party/blink/renderer/bindings/core/v8/request_or_usv_string.h"

#include "base/stl_util.h"
#include "third_party/blink/renderer/bindings/core/v8/idl_types.h"
#include "third_party/blink/renderer/bindings/core/v8/native_value_traits_impl.h"
#include "third_party/blink/renderer/bindings/core/v8/to_v8_for_core.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_request.h"

namespace blink {

RequestOrUSVString::RequestOrUSVString() : type_(SpecificType::kNone) {}

Request* RequestOrUSVString::GetAsRequest() const {
  DCHECK(IsRequest());
  return request_;
}

void RequestOrUSVString::SetRequest(Request* value) {
  DCHECK(IsNull());
  request_ = value;
  type_ = SpecificType::kRequest;
}

RequestOrUSVString RequestOrUSVString::FromRequest(Request* value) {
  RequestOrUSVString container;
  container.SetRequest(value);
  return container;
}

const String& RequestOrUSVString::GetAsUSVString() const {
  DCHECK(IsUSVString());
  return usv_string_;
}

void RequestOrUSVString::SetUSVString(const String& value) {
  DCHECK(IsNull());
  usv_string_ = value;
  type_ = SpecificType::kUSVString;
}

RequestOrUSVString RequestOrUSVString::FromUSVString(const String& value) {
  RequestOrUSVString container;
  container.SetUSVString(value);
  return container;
}

RequestOrUSVString::RequestOrUSVString(const RequestOrUSVString&) = default;
RequestOrUSVString::~RequestOrUSVString() = default;
RequestOrUSVString& RequestOrUSVString::operator=(const RequestOrUSVString&) = default;

void RequestOrUSVString::Trace(blink::Visitor* visitor) {
  visitor->Trace(request_);
}

void V8RequestOrUSVString::ToImpl(
    v8::Isolate* isolate,
    v8::Local<v8::Value> v8_value,
    RequestOrUSVString& impl,
    UnionTypeConversionMode conversion_mode,
    ExceptionState& exception_state) {
  if (v8_value.IsEmpty())
    return;

  if (conversion_mode == UnionTypeConversionMode::kNullable && IsUndefinedOrNull(v8_value))
    return;

  if (V8Request::HasInstance(v8_value, isolate)) {
    Request* cpp_value = V8Request::ToImpl(v8::Local<v8::Object>::Cast(v8_value));
    impl.SetRequest(cpp_value);
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

v8::Local<v8::Value> ToV8(const RequestOrUSVString& impl, v8::Local<v8::Object> creationContext, v8::Isolate* isolate) {
  switch (impl.type_) {
    case RequestOrUSVString::SpecificType::kNone:
      return v8::Null(isolate);
    case RequestOrUSVString::SpecificType::kRequest:
      return ToV8(impl.GetAsRequest(), creationContext, isolate);
    case RequestOrUSVString::SpecificType::kUSVString:
      return V8String(isolate, impl.GetAsUSVString());
    default:
      NOTREACHED();
  }
  return v8::Local<v8::Value>();
}

RequestOrUSVString NativeValueTraits<RequestOrUSVString>::NativeValue(
    v8::Isolate* isolate, v8::Local<v8::Value> value, ExceptionState& exception_state) {
  RequestOrUSVString impl;
  V8RequestOrUSVString::ToImpl(isolate, value, impl, UnionTypeConversionMode::kNotNullable, exception_state);
  return impl;
}

}  // namespace blink
