// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated from the Jinja2 template
// third_party/blink/renderer/bindings/templates/union_container.h.tmpl
// by the script code_generator_v8.py.
// DO NOT MODIFY!

// clang-format off
#ifndef THIRD_PARTY_BLINK_RENDERER_BINDINGS_CORE_V8_COMPOSITE_OPERATION_OR_AUTO_OR_COMPOSITE_OPERATION_OR_AUTO_SEQUENCE_H_
#define THIRD_PARTY_BLINK_RENDERER_BINDINGS_CORE_V8_COMPOSITE_OPERATION_OR_AUTO_OR_COMPOSITE_OPERATION_OR_AUTO_SEQUENCE_H_

#include "base/optional.h"
#include "third_party/blink/renderer/bindings/core/v8/dictionary.h"
#include "third_party/blink/renderer/bindings/core/v8/native_value_traits.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_binding_for_core.h"
#include "third_party/blink/renderer/core/core_export.h"
#include "third_party/blink/renderer/platform/bindings/exception_state.h"
#include "third_party/blink/renderer/platform/heap/handle.h"

namespace blink {

class CORE_EXPORT CompositeOperationOrAutoOrCompositeOperationOrAutoSequence final {
  DISALLOW_NEW();
 public:
  CompositeOperationOrAutoOrCompositeOperationOrAutoSequence();
  bool IsNull() const { return type_ == SpecificType::kNone; }

  bool IsCompositeOperationOrAuto() const { return type_ == SpecificType::kCompositeOperationOrAuto; }
  const String& GetAsCompositeOperationOrAuto() const;
  void SetCompositeOperationOrAuto(const String&);
  static CompositeOperationOrAutoOrCompositeOperationOrAutoSequence FromCompositeOperationOrAuto(const String&);

  bool IsCompositeOperationOrAutoSequence() const { return type_ == SpecificType::kCompositeOperationOrAutoSequence; }
  const Vector<String>& GetAsCompositeOperationOrAutoSequence() const;
  void SetCompositeOperationOrAutoSequence(const Vector<String>&);
  static CompositeOperationOrAutoOrCompositeOperationOrAutoSequence FromCompositeOperationOrAutoSequence(const Vector<String>&);

  CompositeOperationOrAutoOrCompositeOperationOrAutoSequence(const CompositeOperationOrAutoOrCompositeOperationOrAutoSequence&);
  ~CompositeOperationOrAutoOrCompositeOperationOrAutoSequence();
  CompositeOperationOrAutoOrCompositeOperationOrAutoSequence& operator=(const CompositeOperationOrAutoOrCompositeOperationOrAutoSequence&);
  void Trace(blink::Visitor*);

 private:
  enum class SpecificType {
    kNone,
    kCompositeOperationOrAuto,
    kCompositeOperationOrAutoSequence,
  };
  SpecificType type_;

  String composite_operation_or_auto_;
  Vector<String> composite_operation_or_auto_sequence_;

  friend CORE_EXPORT v8::Local<v8::Value> ToV8(const CompositeOperationOrAutoOrCompositeOperationOrAutoSequence&, v8::Local<v8::Object>, v8::Isolate*);
};

class V8CompositeOperationOrAutoOrCompositeOperationOrAutoSequence final {
 public:
  CORE_EXPORT static void ToImpl(v8::Isolate*, v8::Local<v8::Value>, CompositeOperationOrAutoOrCompositeOperationOrAutoSequence&, UnionTypeConversionMode, ExceptionState&);
};

CORE_EXPORT v8::Local<v8::Value> ToV8(const CompositeOperationOrAutoOrCompositeOperationOrAutoSequence&, v8::Local<v8::Object>, v8::Isolate*);

template <class CallbackInfo>
inline void V8SetReturnValue(const CallbackInfo& callbackInfo, CompositeOperationOrAutoOrCompositeOperationOrAutoSequence& impl) {
  V8SetReturnValue(callbackInfo, ToV8(impl, callbackInfo.Holder(), callbackInfo.GetIsolate()));
}

template <class CallbackInfo>
inline void V8SetReturnValue(const CallbackInfo& callbackInfo, CompositeOperationOrAutoOrCompositeOperationOrAutoSequence& impl, v8::Local<v8::Object> creationContext) {
  V8SetReturnValue(callbackInfo, ToV8(impl, creationContext, callbackInfo.GetIsolate()));
}

template <>
struct NativeValueTraits<CompositeOperationOrAutoOrCompositeOperationOrAutoSequence> : public NativeValueTraitsBase<CompositeOperationOrAutoOrCompositeOperationOrAutoSequence> {
  CORE_EXPORT static CompositeOperationOrAutoOrCompositeOperationOrAutoSequence NativeValue(v8::Isolate*, v8::Local<v8::Value>, ExceptionState&);
  CORE_EXPORT static CompositeOperationOrAutoOrCompositeOperationOrAutoSequence NullValue() { return CompositeOperationOrAutoOrCompositeOperationOrAutoSequence(); }
};

template <>
struct V8TypeOf<CompositeOperationOrAutoOrCompositeOperationOrAutoSequence> {
  typedef V8CompositeOperationOrAutoOrCompositeOperationOrAutoSequence Type;
};

}  // namespace blink

// We need to set canInitializeWithMemset=true because HeapVector supports
// items that can initialize with memset or have a vtable. It is safe to
// set canInitializeWithMemset=true for a union type object in practice.
// See https://codereview.chromium.org/1118993002/#msg5 for more details.
WTF_ALLOW_MOVE_AND_INIT_WITH_MEM_FUNCTIONS(blink::CompositeOperationOrAutoOrCompositeOperationOrAutoSequence)

#endif  // THIRD_PARTY_BLINK_RENDERER_BINDINGS_CORE_V8_COMPOSITE_OPERATION_OR_AUTO_OR_COMPOSITE_OPERATION_OR_AUTO_SEQUENCE_H_
