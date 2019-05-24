// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated from the Jinja2 template
// third_party/blink/renderer/bindings/templates/union_container.h.tmpl
// by the script code_generator_v8.py.
// DO NOT MODIFY!

// clang-format off
#ifndef THIRD_PARTY_BLINK_RENDERER_BINDINGS_CORE_V8_UINT_8_CLAMPED_ARRAY_OR_UINT_16_ARRAY_OR_FLOAT_32_ARRAY_H_
#define THIRD_PARTY_BLINK_RENDERER_BINDINGS_CORE_V8_UINT_8_CLAMPED_ARRAY_OR_UINT_16_ARRAY_OR_FLOAT_32_ARRAY_H_

#include "base/optional.h"
#include "third_party/blink/renderer/bindings/core/v8/dictionary.h"
#include "third_party/blink/renderer/bindings/core/v8/native_value_traits.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_array_buffer_view.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_binding_for_core.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_float32_array.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_uint16_array.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_uint8_clamped_array.h"
#include "third_party/blink/renderer/core/core_export.h"
#include "third_party/blink/renderer/core/typed_arrays/array_buffer_view_helpers.h"
#include "third_party/blink/renderer/core/typed_arrays/flexible_array_buffer_view.h"
#include "third_party/blink/renderer/platform/bindings/exception_state.h"
#include "third_party/blink/renderer/platform/heap/handle.h"

namespace blink {

class CORE_EXPORT Uint8ClampedArrayOrUint16ArrayOrFloat32Array final {
  DISALLOW_NEW();
 public:
  Uint8ClampedArrayOrUint16ArrayOrFloat32Array();
  bool IsNull() const { return type_ == SpecificType::kNone; }

  bool IsFloat32Array() const { return type_ == SpecificType::kFloat32Array; }
  NotShared<DOMFloat32Array> GetAsFloat32Array() const;
  void SetFloat32Array(NotShared<DOMFloat32Array>);
  static Uint8ClampedArrayOrUint16ArrayOrFloat32Array FromFloat32Array(NotShared<DOMFloat32Array>);

  bool IsUint16Array() const { return type_ == SpecificType::kUint16Array; }
  NotShared<DOMUint16Array> GetAsUint16Array() const;
  void SetUint16Array(NotShared<DOMUint16Array>);
  static Uint8ClampedArrayOrUint16ArrayOrFloat32Array FromUint16Array(NotShared<DOMUint16Array>);

  bool IsUint8ClampedArray() const { return type_ == SpecificType::kUint8ClampedArray; }
  NotShared<DOMUint8ClampedArray> GetAsUint8ClampedArray() const;
  void SetUint8ClampedArray(NotShared<DOMUint8ClampedArray>);
  static Uint8ClampedArrayOrUint16ArrayOrFloat32Array FromUint8ClampedArray(NotShared<DOMUint8ClampedArray>);

  Uint8ClampedArrayOrUint16ArrayOrFloat32Array(const Uint8ClampedArrayOrUint16ArrayOrFloat32Array&);
  ~Uint8ClampedArrayOrUint16ArrayOrFloat32Array();
  Uint8ClampedArrayOrUint16ArrayOrFloat32Array& operator=(const Uint8ClampedArrayOrUint16ArrayOrFloat32Array&);
  void Trace(blink::Visitor*);

 private:
  enum class SpecificType {
    kNone,
    kFloat32Array,
    kUint16Array,
    kUint8ClampedArray,
  };
  SpecificType type_;

  Member<DOMFloat32Array> float32_array_;
  Member<DOMUint16Array> uint16_array_;
  Member<DOMUint8ClampedArray> uint8_clamped_array_;

  friend CORE_EXPORT v8::Local<v8::Value> ToV8(const Uint8ClampedArrayOrUint16ArrayOrFloat32Array&, v8::Local<v8::Object>, v8::Isolate*);
};

class V8Uint8ClampedArrayOrUint16ArrayOrFloat32Array final {
 public:
  CORE_EXPORT static void ToImpl(v8::Isolate*, v8::Local<v8::Value>, Uint8ClampedArrayOrUint16ArrayOrFloat32Array&, UnionTypeConversionMode, ExceptionState&);
};

CORE_EXPORT v8::Local<v8::Value> ToV8(const Uint8ClampedArrayOrUint16ArrayOrFloat32Array&, v8::Local<v8::Object>, v8::Isolate*);

template <class CallbackInfo>
inline void V8SetReturnValue(const CallbackInfo& callbackInfo, Uint8ClampedArrayOrUint16ArrayOrFloat32Array& impl) {
  V8SetReturnValue(callbackInfo, ToV8(impl, callbackInfo.Holder(), callbackInfo.GetIsolate()));
}

template <class CallbackInfo>
inline void V8SetReturnValue(const CallbackInfo& callbackInfo, Uint8ClampedArrayOrUint16ArrayOrFloat32Array& impl, v8::Local<v8::Object> creationContext) {
  V8SetReturnValue(callbackInfo, ToV8(impl, creationContext, callbackInfo.GetIsolate()));
}

template <>
struct NativeValueTraits<Uint8ClampedArrayOrUint16ArrayOrFloat32Array> : public NativeValueTraitsBase<Uint8ClampedArrayOrUint16ArrayOrFloat32Array> {
  CORE_EXPORT static Uint8ClampedArrayOrUint16ArrayOrFloat32Array NativeValue(v8::Isolate*, v8::Local<v8::Value>, ExceptionState&);
  CORE_EXPORT static Uint8ClampedArrayOrUint16ArrayOrFloat32Array NullValue() { return Uint8ClampedArrayOrUint16ArrayOrFloat32Array(); }
};

template <>
struct V8TypeOf<Uint8ClampedArrayOrUint16ArrayOrFloat32Array> {
  typedef V8Uint8ClampedArrayOrUint16ArrayOrFloat32Array Type;
};

}  // namespace blink

// We need to set canInitializeWithMemset=true because HeapVector supports
// items that can initialize with memset or have a vtable. It is safe to
// set canInitializeWithMemset=true for a union type object in practice.
// See https://codereview.chromium.org/1118993002/#msg5 for more details.
WTF_ALLOW_MOVE_AND_INIT_WITH_MEM_FUNCTIONS(blink::Uint8ClampedArrayOrUint16ArrayOrFloat32Array)

#endif  // THIRD_PARTY_BLINK_RENDERER_BINDINGS_CORE_V8_UINT_8_CLAMPED_ARRAY_OR_UINT_16_ARRAY_OR_FLOAT_32_ARRAY_H_
