// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated from the Jinja2 template
// third_party/blink/renderer/bindings/templates/union_container.cc.tmpl
// by the script code_generator_v8.py.
// DO NOT MODIFY!

// clang-format off
#include "third_party/blink/renderer/bindings/core/v8/composite_operation_or_auto_or_composite_operation_or_auto_sequence.h"

#include "base/stl_util.h"
#include "third_party/blink/renderer/bindings/core/v8/idl_types.h"
#include "third_party/blink/renderer/bindings/core/v8/native_value_traits_impl.h"
#include "third_party/blink/renderer/bindings/core/v8/to_v8_for_core.h"

namespace blink {

CompositeOperationOrAutoOrCompositeOperationOrAutoSequence::CompositeOperationOrAutoOrCompositeOperationOrAutoSequence() : type_(SpecificType::kNone) {}

const String& CompositeOperationOrAutoOrCompositeOperationOrAutoSequence::GetAsCompositeOperationOrAuto() const {
  DCHECK(IsCompositeOperationOrAuto());
  return composite_operation_or_auto_;
}

void CompositeOperationOrAutoOrCompositeOperationOrAutoSequence::SetCompositeOperationOrAuto(const String& value) {
  DCHECK(IsNull());
  NonThrowableExceptionState exception_state;
  const char* kValidValues[] = {
      "replace",
      "add",
      "accumulate",
      "auto",
  };
  if (!IsValidEnum(value, kValidValues, base::size(kValidValues), "CompositeOperationOrAuto", exception_state)) {
    NOTREACHED();
    return;
  }
  composite_operation_or_auto_ = value;
  type_ = SpecificType::kCompositeOperationOrAuto;
}

CompositeOperationOrAutoOrCompositeOperationOrAutoSequence CompositeOperationOrAutoOrCompositeOperationOrAutoSequence::FromCompositeOperationOrAuto(const String& value) {
  CompositeOperationOrAutoOrCompositeOperationOrAutoSequence container;
  container.SetCompositeOperationOrAuto(value);
  return container;
}

const Vector<String>& CompositeOperationOrAutoOrCompositeOperationOrAutoSequence::GetAsCompositeOperationOrAutoSequence() const {
  DCHECK(IsCompositeOperationOrAutoSequence());
  return composite_operation_or_auto_sequence_;
}

void CompositeOperationOrAutoOrCompositeOperationOrAutoSequence::SetCompositeOperationOrAutoSequence(const Vector<String>& value) {
  DCHECK(IsNull());
  NonThrowableExceptionState exception_state;
  const char* kValidValues[] = {
      "replace",
      "add",
      "accumulate",
      "auto",
  };
  if (!IsValidEnum(value, kValidValues, base::size(kValidValues), "CompositeOperationOrAuto", exception_state)) {
    NOTREACHED();
    return;
  }
  composite_operation_or_auto_sequence_ = value;
  type_ = SpecificType::kCompositeOperationOrAutoSequence;
}

CompositeOperationOrAutoOrCompositeOperationOrAutoSequence CompositeOperationOrAutoOrCompositeOperationOrAutoSequence::FromCompositeOperationOrAutoSequence(const Vector<String>& value) {
  CompositeOperationOrAutoOrCompositeOperationOrAutoSequence container;
  container.SetCompositeOperationOrAutoSequence(value);
  return container;
}

CompositeOperationOrAutoOrCompositeOperationOrAutoSequence::CompositeOperationOrAutoOrCompositeOperationOrAutoSequence(const CompositeOperationOrAutoOrCompositeOperationOrAutoSequence&) = default;
CompositeOperationOrAutoOrCompositeOperationOrAutoSequence::~CompositeOperationOrAutoOrCompositeOperationOrAutoSequence() = default;
CompositeOperationOrAutoOrCompositeOperationOrAutoSequence& CompositeOperationOrAutoOrCompositeOperationOrAutoSequence::operator=(const CompositeOperationOrAutoOrCompositeOperationOrAutoSequence&) = default;

void CompositeOperationOrAutoOrCompositeOperationOrAutoSequence::Trace(blink::Visitor* visitor) {
}

void V8CompositeOperationOrAutoOrCompositeOperationOrAutoSequence::ToImpl(
    v8::Isolate* isolate,
    v8::Local<v8::Value> v8_value,
    CompositeOperationOrAutoOrCompositeOperationOrAutoSequence& impl,
    UnionTypeConversionMode conversion_mode,
    ExceptionState& exception_state) {
  if (v8_value.IsEmpty())
    return;

  if (conversion_mode == UnionTypeConversionMode::kNullable && IsUndefinedOrNull(v8_value))
    return;

  if (HasCallableIteratorSymbol(isolate, v8_value, exception_state)) {
    Vector<String> cpp_value = NativeValueTraits<IDLSequence<IDLString>>::NativeValue(isolate, v8_value, exception_state);
    if (exception_state.HadException())
      return;
    const char* kValidValues[] = {
        "replace",
        "add",
        "accumulate",
        "auto",
    };
    if (!IsValidEnum(cpp_value, kValidValues, base::size(kValidValues), "CompositeOperationOrAuto", exception_state))
      return;
    impl.SetCompositeOperationOrAutoSequence(cpp_value);
    return;
  }

  {
    V8StringResource<> cpp_value = v8_value;
    if (!cpp_value.Prepare(exception_state))
      return;
    const char* kValidValues[] = {
        "replace",
        "add",
        "accumulate",
        "auto",
    };
    if (!IsValidEnum(cpp_value, kValidValues, base::size(kValidValues), "CompositeOperationOrAuto", exception_state))
      return;
    impl.SetCompositeOperationOrAuto(cpp_value);
    return;
  }
}

v8::Local<v8::Value> ToV8(const CompositeOperationOrAutoOrCompositeOperationOrAutoSequence& impl, v8::Local<v8::Object> creationContext, v8::Isolate* isolate) {
  switch (impl.type_) {
    case CompositeOperationOrAutoOrCompositeOperationOrAutoSequence::SpecificType::kNone:
      return v8::Null(isolate);
    case CompositeOperationOrAutoOrCompositeOperationOrAutoSequence::SpecificType::kCompositeOperationOrAuto:
      return V8String(isolate, impl.GetAsCompositeOperationOrAuto());
    case CompositeOperationOrAutoOrCompositeOperationOrAutoSequence::SpecificType::kCompositeOperationOrAutoSequence:
      return ToV8(impl.GetAsCompositeOperationOrAutoSequence(), creationContext, isolate);
    default:
      NOTREACHED();
  }
  return v8::Local<v8::Value>();
}

CompositeOperationOrAutoOrCompositeOperationOrAutoSequence NativeValueTraits<CompositeOperationOrAutoOrCompositeOperationOrAutoSequence>::NativeValue(
    v8::Isolate* isolate, v8::Local<v8::Value> value, ExceptionState& exception_state) {
  CompositeOperationOrAutoOrCompositeOperationOrAutoSequence impl;
  V8CompositeOperationOrAutoOrCompositeOperationOrAutoSequence::ToImpl(isolate, value, impl, UnionTypeConversionMode::kNotNullable, exception_state);
  return impl;
}

}  // namespace blink
