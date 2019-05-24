// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated from the Jinja2 template
// third_party/blink/renderer/bindings/templates/union_container.h.tmpl
// by the script code_generator_v8.py.
// DO NOT MODIFY!

// clang-format off
#ifndef THIRD_PARTY_BLINK_RENDERER_BINDINGS_CORE_V8_INTERNAL_ENUM_OR_INTERNAL_ENUM_SEQUENCE_H_
#define THIRD_PARTY_BLINK_RENDERER_BINDINGS_CORE_V8_INTERNAL_ENUM_OR_INTERNAL_ENUM_SEQUENCE_H_

#include "base/optional.h"
#include "third_party/blink/renderer/bindings/core/v8/dictionary.h"
#include "third_party/blink/renderer/bindings/core/v8/native_value_traits.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_binding_for_core.h"
#include "third_party/blink/renderer/core/core_export.h"
#include "third_party/blink/renderer/platform/bindings/exception_state.h"
#include "third_party/blink/renderer/platform/heap/handle.h"

namespace blink {

class CORE_EXPORT InternalEnumOrInternalEnumSequence final {
  DISALLOW_NEW();
 public:
  InternalEnumOrInternalEnumSequence();
  bool IsNull() const { return type_ == SpecificType::kNone; }

  bool IsInternalEnum() const { return type_ == SpecificType::kInternalEnum; }
  const String& GetAsInternalEnum() const;
  void SetInternalEnum(const String&);
  static InternalEnumOrInternalEnumSequence FromInternalEnum(const String&);

  bool IsInternalEnumSequence() const { return type_ == SpecificType::kInternalEnumSequence; }
  const Vector<String>& GetAsInternalEnumSequence() const;
  void SetInternalEnumSequence(const Vector<String>&);
  static InternalEnumOrInternalEnumSequence FromInternalEnumSequence(const Vector<String>&);

  InternalEnumOrInternalEnumSequence(const InternalEnumOrInternalEnumSequence&);
  ~InternalEnumOrInternalEnumSequence();
  InternalEnumOrInternalEnumSequence& operator=(const InternalEnumOrInternalEnumSequence&);
  void Trace(blink::Visitor*);

 private:
  enum class SpecificType {
    kNone,
    kInternalEnum,
    kInternalEnumSequence,
  };
  SpecificType type_;

  String internal_enum_;
  Vector<String> internal_enum_sequence_;

  friend CORE_EXPORT v8::Local<v8::Value> ToV8(const InternalEnumOrInternalEnumSequence&, v8::Local<v8::Object>, v8::Isolate*);
};

class V8InternalEnumOrInternalEnumSequence final {
 public:
  CORE_EXPORT static void ToImpl(v8::Isolate*, v8::Local<v8::Value>, InternalEnumOrInternalEnumSequence&, UnionTypeConversionMode, ExceptionState&);
};

CORE_EXPORT v8::Local<v8::Value> ToV8(const InternalEnumOrInternalEnumSequence&, v8::Local<v8::Object>, v8::Isolate*);

template <class CallbackInfo>
inline void V8SetReturnValue(const CallbackInfo& callbackInfo, InternalEnumOrInternalEnumSequence& impl) {
  V8SetReturnValue(callbackInfo, ToV8(impl, callbackInfo.Holder(), callbackInfo.GetIsolate()));
}

template <class CallbackInfo>
inline void V8SetReturnValue(const CallbackInfo& callbackInfo, InternalEnumOrInternalEnumSequence& impl, v8::Local<v8::Object> creationContext) {
  V8SetReturnValue(callbackInfo, ToV8(impl, creationContext, callbackInfo.GetIsolate()));
}

template <>
struct NativeValueTraits<InternalEnumOrInternalEnumSequence> : public NativeValueTraitsBase<InternalEnumOrInternalEnumSequence> {
  CORE_EXPORT static InternalEnumOrInternalEnumSequence NativeValue(v8::Isolate*, v8::Local<v8::Value>, ExceptionState&);
  CORE_EXPORT static InternalEnumOrInternalEnumSequence NullValue() { return InternalEnumOrInternalEnumSequence(); }
};

template <>
struct V8TypeOf<InternalEnumOrInternalEnumSequence> {
  typedef V8InternalEnumOrInternalEnumSequence Type;
};

}  // namespace blink

// We need to set canInitializeWithMemset=true because HeapVector supports
// items that can initialize with memset or have a vtable. It is safe to
// set canInitializeWithMemset=true for a union type object in practice.
// See https://codereview.chromium.org/1118993002/#msg5 for more details.
WTF_ALLOW_MOVE_AND_INIT_WITH_MEM_FUNCTIONS(blink::InternalEnumOrInternalEnumSequence)

#endif  // THIRD_PARTY_BLINK_RENDERER_BINDINGS_CORE_V8_INTERNAL_ENUM_OR_INTERNAL_ENUM_SEQUENCE_H_
