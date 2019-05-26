// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated from the Jinja2 template
// third_party/blink/renderer/bindings/templates/union_container.h.tmpl
// by the script code_generator_v8.py.
// DO NOT MODIFY!

// clang-format off
#ifndef THIRD_PARTY_BLINK_RENDERER_BINDINGS_MODULES_V8_INT_32_ARRAY_OR_LONG_SEQUENCE_H_
#define THIRD_PARTY_BLINK_RENDERER_BINDINGS_MODULES_V8_INT_32_ARRAY_OR_LONG_SEQUENCE_H_

#include "base/optional.h"
#include "third_party/blink/renderer/bindings/core/v8/dictionary.h"
#include "third_party/blink/renderer/bindings/core/v8/native_value_traits.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_array_buffer_view.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_binding_for_core.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_int32_array.h"
#include "third_party/blink/renderer/core/typed_arrays/array_buffer_view_helpers.h"
#include "third_party/blink/renderer/core/typed_arrays/flexible_array_buffer_view.h"
#include "third_party/blink/renderer/modules/modules_export.h"
#include "third_party/blink/renderer/platform/bindings/exception_state.h"
#include "third_party/blink/renderer/platform/heap/handle.h"

namespace blink {

class MODULES_EXPORT Int32ArrayOrLongSequence final {
  DISALLOW_NEW();
 public:
  Int32ArrayOrLongSequence();
  bool IsNull() const { return type_ == SpecificType::kNone; }

  bool IsInt32Array() const { return type_ == SpecificType::kInt32Array; }
  NotShared<DOMInt32Array> GetAsInt32Array() const;
  void SetInt32Array(NotShared<DOMInt32Array>);
  static Int32ArrayOrLongSequence FromInt32Array(NotShared<DOMInt32Array>);

  bool IsLongSequence() const { return type_ == SpecificType::kLongSequence; }
  const Vector<int32_t>& GetAsLongSequence() const;
  void SetLongSequence(const Vector<int32_t>&);
  static Int32ArrayOrLongSequence FromLongSequence(const Vector<int32_t>&);

  Int32ArrayOrLongSequence(const Int32ArrayOrLongSequence&);
  ~Int32ArrayOrLongSequence();
  Int32ArrayOrLongSequence& operator=(const Int32ArrayOrLongSequence&);
  void Trace(blink::Visitor*);

 private:
  enum class SpecificType {
    kNone,
    kInt32Array,
    kLongSequence,
  };
  SpecificType type_;

  Member<DOMInt32Array> int32_array_;
  Vector<int32_t> long_sequence_;

  friend MODULES_EXPORT v8::Local<v8::Value> ToV8(const Int32ArrayOrLongSequence&, v8::Local<v8::Object>, v8::Isolate*);
};

class V8Int32ArrayOrLongSequence final {
 public:
  MODULES_EXPORT static void ToImpl(v8::Isolate*, v8::Local<v8::Value>, Int32ArrayOrLongSequence&, UnionTypeConversionMode, ExceptionState&);
};

MODULES_EXPORT v8::Local<v8::Value> ToV8(const Int32ArrayOrLongSequence&, v8::Local<v8::Object>, v8::Isolate*);

template <class CallbackInfo>
inline void V8SetReturnValue(const CallbackInfo& callbackInfo, Int32ArrayOrLongSequence& impl) {
  V8SetReturnValue(callbackInfo, ToV8(impl, callbackInfo.Holder(), callbackInfo.GetIsolate()));
}

template <class CallbackInfo>
inline void V8SetReturnValue(const CallbackInfo& callbackInfo, Int32ArrayOrLongSequence& impl, v8::Local<v8::Object> creationContext) {
  V8SetReturnValue(callbackInfo, ToV8(impl, creationContext, callbackInfo.GetIsolate()));
}

template <>
struct NativeValueTraits<Int32ArrayOrLongSequence> : public NativeValueTraitsBase<Int32ArrayOrLongSequence> {
  MODULES_EXPORT static Int32ArrayOrLongSequence NativeValue(v8::Isolate*, v8::Local<v8::Value>, ExceptionState&);
  MODULES_EXPORT static Int32ArrayOrLongSequence NullValue() { return Int32ArrayOrLongSequence(); }
};

template <>
struct V8TypeOf<Int32ArrayOrLongSequence> {
  typedef V8Int32ArrayOrLongSequence Type;
};

}  // namespace blink

// We need to set canInitializeWithMemset=true because HeapVector supports
// items that can initialize with memset or have a vtable. It is safe to
// set canInitializeWithMemset=true for a union type object in practice.
// See https://codereview.chromium.org/1118993002/#msg5 for more details.
WTF_ALLOW_MOVE_AND_INIT_WITH_MEM_FUNCTIONS(blink::Int32ArrayOrLongSequence)

#endif  // THIRD_PARTY_BLINK_RENDERER_BINDINGS_MODULES_V8_INT_32_ARRAY_OR_LONG_SEQUENCE_H_
