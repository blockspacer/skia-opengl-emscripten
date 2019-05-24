// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated from the Jinja2 template
// third_party/blink/renderer/bindings/templates/union_container.cc.tmpl
// by the script code_generator_v8.py.
// DO NOT MODIFY!

// clang-format off
#include "third_party/blink/renderer/bindings/modules/v8/dom_exception_or_overconstrained_error.h"

#include "base/stl_util.h"
#include "third_party/blink/renderer/bindings/core/v8/to_v8_for_core.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_dom_exception.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_overconstrained_error.h"

namespace blink {

DOMExceptionOrOverconstrainedError::DOMExceptionOrOverconstrainedError() : type_(SpecificType::kNone) {}

DOMException* DOMExceptionOrOverconstrainedError::GetAsDOMException() const {
  DCHECK(IsDOMException());
  return dom_exception_;
}

void DOMExceptionOrOverconstrainedError::SetDOMException(DOMException* value) {
  DCHECK(IsNull());
  dom_exception_ = value;
  type_ = SpecificType::kDOMException;
}

DOMExceptionOrOverconstrainedError DOMExceptionOrOverconstrainedError::FromDOMException(DOMException* value) {
  DOMExceptionOrOverconstrainedError container;
  container.SetDOMException(value);
  return container;
}

OverconstrainedError* DOMExceptionOrOverconstrainedError::GetAsOverconstrainedError() const {
  DCHECK(IsOverconstrainedError());
  return overconstrained_error_;
}

void DOMExceptionOrOverconstrainedError::SetOverconstrainedError(OverconstrainedError* value) {
  DCHECK(IsNull());
  overconstrained_error_ = value;
  type_ = SpecificType::kOverconstrainedError;
}

DOMExceptionOrOverconstrainedError DOMExceptionOrOverconstrainedError::FromOverconstrainedError(OverconstrainedError* value) {
  DOMExceptionOrOverconstrainedError container;
  container.SetOverconstrainedError(value);
  return container;
}

DOMExceptionOrOverconstrainedError::DOMExceptionOrOverconstrainedError(const DOMExceptionOrOverconstrainedError&) = default;
DOMExceptionOrOverconstrainedError::~DOMExceptionOrOverconstrainedError() = default;
DOMExceptionOrOverconstrainedError& DOMExceptionOrOverconstrainedError::operator=(const DOMExceptionOrOverconstrainedError&) = default;

void DOMExceptionOrOverconstrainedError::Trace(blink::Visitor* visitor) {
  visitor->Trace(dom_exception_);
  visitor->Trace(overconstrained_error_);
}

void V8DOMExceptionOrOverconstrainedError::ToImpl(
    v8::Isolate* isolate,
    v8::Local<v8::Value> v8_value,
    DOMExceptionOrOverconstrainedError& impl,
    UnionTypeConversionMode conversion_mode,
    ExceptionState& exception_state) {
  if (v8_value.IsEmpty())
    return;

  if (conversion_mode == UnionTypeConversionMode::kNullable && IsUndefinedOrNull(v8_value))
    return;

  if (V8DOMException::HasInstance(v8_value, isolate)) {
    DOMException* cpp_value = V8DOMException::ToImpl(v8::Local<v8::Object>::Cast(v8_value));
    impl.SetDOMException(cpp_value);
    return;
  }

  if (V8OverconstrainedError::HasInstance(v8_value, isolate)) {
    OverconstrainedError* cpp_value = V8OverconstrainedError::ToImpl(v8::Local<v8::Object>::Cast(v8_value));
    impl.SetOverconstrainedError(cpp_value);
    return;
  }

  exception_state.ThrowTypeError("The provided value is not of type '(DOMException or OverconstrainedError)'");
}

v8::Local<v8::Value> ToV8(const DOMExceptionOrOverconstrainedError& impl, v8::Local<v8::Object> creationContext, v8::Isolate* isolate) {
  switch (impl.type_) {
    case DOMExceptionOrOverconstrainedError::SpecificType::kNone:
      return v8::Null(isolate);
    case DOMExceptionOrOverconstrainedError::SpecificType::kDOMException:
      return ToV8(impl.GetAsDOMException(), creationContext, isolate);
    case DOMExceptionOrOverconstrainedError::SpecificType::kOverconstrainedError:
      return ToV8(impl.GetAsOverconstrainedError(), creationContext, isolate);
    default:
      NOTREACHED();
  }
  return v8::Local<v8::Value>();
}

DOMExceptionOrOverconstrainedError NativeValueTraits<DOMExceptionOrOverconstrainedError>::NativeValue(
    v8::Isolate* isolate, v8::Local<v8::Value> value, ExceptionState& exception_state) {
  DOMExceptionOrOverconstrainedError impl;
  V8DOMExceptionOrOverconstrainedError::ToImpl(isolate, value, impl, UnionTypeConversionMode::kNotNullable, exception_state);
  return impl;
}

}  // namespace blink
