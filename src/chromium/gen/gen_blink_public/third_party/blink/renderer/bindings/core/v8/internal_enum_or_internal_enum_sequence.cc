// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated from the Jinja2 template
// third_party/blink/renderer/bindings/templates/union_container.cc.tmpl
// by the script code_generator_v8.py.
// DO NOT MODIFY!

// clang-format off
#include "third_party/blink/renderer/bindings/core/v8/internal_enum_or_internal_enum_sequence.h"

#include "base/stl_util.h"
#include "third_party/blink/renderer/bindings/core/v8/idl_types.h"
#include "third_party/blink/renderer/bindings/core/v8/native_value_traits_impl.h"
#include "third_party/blink/renderer/bindings/core/v8/to_v8_for_core.h"

namespace blink {

InternalEnumOrInternalEnumSequence::InternalEnumOrInternalEnumSequence() : type_(SpecificType::kNone) {}

const String& InternalEnumOrInternalEnumSequence::GetAsInternalEnum() const {
  DCHECK(IsInternalEnum());
  return internal_enum_;
}

void InternalEnumOrInternalEnumSequence::SetInternalEnum(const String& value) {
  DCHECK(IsNull());
  NonThrowableExceptionState exception_state;
  const char* kValidValues[] = {
      "foo",
      "bar",
      "baz",
  };
  if (!IsValidEnum(value, kValidValues, base::size(kValidValues), "InternalEnum", exception_state)) {
    NOTREACHED();
    return;
  }
  internal_enum_ = value;
  type_ = SpecificType::kInternalEnum;
}

InternalEnumOrInternalEnumSequence InternalEnumOrInternalEnumSequence::FromInternalEnum(const String& value) {
  InternalEnumOrInternalEnumSequence container;
  container.SetInternalEnum(value);
  return container;
}

const Vector<String>& InternalEnumOrInternalEnumSequence::GetAsInternalEnumSequence() const {
  DCHECK(IsInternalEnumSequence());
  return internal_enum_sequence_;
}

void InternalEnumOrInternalEnumSequence::SetInternalEnumSequence(const Vector<String>& value) {
  DCHECK(IsNull());
  NonThrowableExceptionState exception_state;
  const char* kValidValues[] = {
      "foo",
      "bar",
      "baz",
  };
  if (!IsValidEnum(value, kValidValues, base::size(kValidValues), "InternalEnum", exception_state)) {
    NOTREACHED();
    return;
  }
  internal_enum_sequence_ = value;
  type_ = SpecificType::kInternalEnumSequence;
}

InternalEnumOrInternalEnumSequence InternalEnumOrInternalEnumSequence::FromInternalEnumSequence(const Vector<String>& value) {
  InternalEnumOrInternalEnumSequence container;
  container.SetInternalEnumSequence(value);
  return container;
}

InternalEnumOrInternalEnumSequence::InternalEnumOrInternalEnumSequence(const InternalEnumOrInternalEnumSequence&) = default;
InternalEnumOrInternalEnumSequence::~InternalEnumOrInternalEnumSequence() = default;
InternalEnumOrInternalEnumSequence& InternalEnumOrInternalEnumSequence::operator=(const InternalEnumOrInternalEnumSequence&) = default;

void InternalEnumOrInternalEnumSequence::Trace(blink::Visitor* visitor) {
}

void V8InternalEnumOrInternalEnumSequence::ToImpl(
    v8::Isolate* isolate,
    v8::Local<v8::Value> v8_value,
    InternalEnumOrInternalEnumSequence& impl,
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
        "foo",
        "bar",
        "baz",
    };
    if (!IsValidEnum(cpp_value, kValidValues, base::size(kValidValues), "InternalEnum", exception_state))
      return;
    impl.SetInternalEnumSequence(cpp_value);
    return;
  }

  {
    V8StringResource<> cpp_value = v8_value;
    if (!cpp_value.Prepare(exception_state))
      return;
    const char* kValidValues[] = {
        "foo",
        "bar",
        "baz",
    };
    if (!IsValidEnum(cpp_value, kValidValues, base::size(kValidValues), "InternalEnum", exception_state))
      return;
    impl.SetInternalEnum(cpp_value);
    return;
  }
}

v8::Local<v8::Value> ToV8(const InternalEnumOrInternalEnumSequence& impl, v8::Local<v8::Object> creationContext, v8::Isolate* isolate) {
  switch (impl.type_) {
    case InternalEnumOrInternalEnumSequence::SpecificType::kNone:
      return v8::Null(isolate);
    case InternalEnumOrInternalEnumSequence::SpecificType::kInternalEnum:
      return V8String(isolate, impl.GetAsInternalEnum());
    case InternalEnumOrInternalEnumSequence::SpecificType::kInternalEnumSequence:
      return ToV8(impl.GetAsInternalEnumSequence(), creationContext, isolate);
    default:
      NOTREACHED();
  }
  return v8::Local<v8::Value>();
}

InternalEnumOrInternalEnumSequence NativeValueTraits<InternalEnumOrInternalEnumSequence>::NativeValue(
    v8::Isolate* isolate, v8::Local<v8::Value> value, ExceptionState& exception_state) {
  InternalEnumOrInternalEnumSequence impl;
  V8InternalEnumOrInternalEnumSequence::ToImpl(isolate, value, impl, UnionTypeConversionMode::kNotNullable, exception_state);
  return impl;
}

}  // namespace blink
