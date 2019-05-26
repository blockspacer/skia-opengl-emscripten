// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated from the Jinja2 template
// third_party/blink/renderer/bindings/templates/union_container.cc.tmpl
// by the script code_generator_v8.py.
// DO NOT MODIFY!

// clang-format off
#include "third_party/blink/renderer/bindings/modules/v8/request_or_usv_string_or_request_or_usv_string_sequence.h"

#include "base/stl_util.h"
#include "third_party/blink/renderer/bindings/core/v8/idl_types.h"
#include "third_party/blink/renderer/bindings/core/v8/native_value_traits_impl.h"
#include "third_party/blink/renderer/bindings/core/v8/request_or_usv_string.h"
#include "third_party/blink/renderer/bindings/core/v8/to_v8_for_core.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_request.h"

namespace blink {

RequestOrUSVStringOrRequestOrUSVStringSequence::RequestOrUSVStringOrRequestOrUSVStringSequence() : type_(SpecificType::kNone) {}

Request* RequestOrUSVStringOrRequestOrUSVStringSequence::GetAsRequest() const {
  DCHECK(IsRequest());
  return request_;
}

void RequestOrUSVStringOrRequestOrUSVStringSequence::SetRequest(Request* value) {
  DCHECK(IsNull());
  request_ = value;
  type_ = SpecificType::kRequest;
}

RequestOrUSVStringOrRequestOrUSVStringSequence RequestOrUSVStringOrRequestOrUSVStringSequence::FromRequest(Request* value) {
  RequestOrUSVStringOrRequestOrUSVStringSequence container;
  container.SetRequest(value);
  return container;
}

const HeapVector<RequestOrUSVString>& RequestOrUSVStringOrRequestOrUSVStringSequence::GetAsRequestOrUSVStringSequence() const {
  DCHECK(IsRequestOrUSVStringSequence());
  return request_or_usv_string_sequence_;
}

void RequestOrUSVStringOrRequestOrUSVStringSequence::SetRequestOrUSVStringSequence(const HeapVector<RequestOrUSVString>& value) {
  DCHECK(IsNull());
  request_or_usv_string_sequence_ = value;
  type_ = SpecificType::kRequestOrUSVStringSequence;
}

RequestOrUSVStringOrRequestOrUSVStringSequence RequestOrUSVStringOrRequestOrUSVStringSequence::FromRequestOrUSVStringSequence(const HeapVector<RequestOrUSVString>& value) {
  RequestOrUSVStringOrRequestOrUSVStringSequence container;
  container.SetRequestOrUSVStringSequence(value);
  return container;
}

const String& RequestOrUSVStringOrRequestOrUSVStringSequence::GetAsUSVString() const {
  DCHECK(IsUSVString());
  return usv_string_;
}

void RequestOrUSVStringOrRequestOrUSVStringSequence::SetUSVString(const String& value) {
  DCHECK(IsNull());
  usv_string_ = value;
  type_ = SpecificType::kUSVString;
}

RequestOrUSVStringOrRequestOrUSVStringSequence RequestOrUSVStringOrRequestOrUSVStringSequence::FromUSVString(const String& value) {
  RequestOrUSVStringOrRequestOrUSVStringSequence container;
  container.SetUSVString(value);
  return container;
}

RequestOrUSVStringOrRequestOrUSVStringSequence::RequestOrUSVStringOrRequestOrUSVStringSequence(const RequestOrUSVStringOrRequestOrUSVStringSequence&) = default;
RequestOrUSVStringOrRequestOrUSVStringSequence::~RequestOrUSVStringOrRequestOrUSVStringSequence() = default;
RequestOrUSVStringOrRequestOrUSVStringSequence& RequestOrUSVStringOrRequestOrUSVStringSequence::operator=(const RequestOrUSVStringOrRequestOrUSVStringSequence&) = default;

void RequestOrUSVStringOrRequestOrUSVStringSequence::Trace(blink::Visitor* visitor) {
  visitor->Trace(request_);
  visitor->Trace(request_or_usv_string_sequence_);
}

void V8RequestOrUSVStringOrRequestOrUSVStringSequence::ToImpl(
    v8::Isolate* isolate,
    v8::Local<v8::Value> v8_value,
    RequestOrUSVStringOrRequestOrUSVStringSequence& impl,
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

  if (HasCallableIteratorSymbol(isolate, v8_value, exception_state)) {
    HeapVector<RequestOrUSVString> cpp_value = NativeValueTraits<IDLSequence<RequestOrUSVString>>::NativeValue(isolate, v8_value, exception_state);
    if (exception_state.HadException())
      return;
    impl.SetRequestOrUSVStringSequence(cpp_value);
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

v8::Local<v8::Value> ToV8(const RequestOrUSVStringOrRequestOrUSVStringSequence& impl, v8::Local<v8::Object> creationContext, v8::Isolate* isolate) {
  switch (impl.type_) {
    case RequestOrUSVStringOrRequestOrUSVStringSequence::SpecificType::kNone:
      return v8::Null(isolate);
    case RequestOrUSVStringOrRequestOrUSVStringSequence::SpecificType::kRequest:
      return ToV8(impl.GetAsRequest(), creationContext, isolate);
    case RequestOrUSVStringOrRequestOrUSVStringSequence::SpecificType::kRequestOrUSVStringSequence:
      return ToV8(impl.GetAsRequestOrUSVStringSequence(), creationContext, isolate);
    case RequestOrUSVStringOrRequestOrUSVStringSequence::SpecificType::kUSVString:
      return V8String(isolate, impl.GetAsUSVString());
    default:
      NOTREACHED();
  }
  return v8::Local<v8::Value>();
}

RequestOrUSVStringOrRequestOrUSVStringSequence NativeValueTraits<RequestOrUSVStringOrRequestOrUSVStringSequence>::NativeValue(
    v8::Isolate* isolate, v8::Local<v8::Value> value, ExceptionState& exception_state) {
  RequestOrUSVStringOrRequestOrUSVStringSequence impl;
  V8RequestOrUSVStringOrRequestOrUSVStringSequence::ToImpl(isolate, value, impl, UnionTypeConversionMode::kNotNullable, exception_state);
  return impl;
}

}  // namespace blink
