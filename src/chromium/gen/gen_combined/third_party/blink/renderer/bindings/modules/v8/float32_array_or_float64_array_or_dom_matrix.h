// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated from the Jinja2 template
// third_party/blink/renderer/bindings/templates/union_container.h.tmpl
// by the script code_generator_v8.py.
// DO NOT MODIFY!

// clang-format off
#ifndef THIRD_PARTY_BLINK_RENDERER_BINDINGS_MODULES_V8_FLOAT_32_ARRAY_OR_FLOAT_64_ARRAY_OR_DOM_MATRIX_H_
#define THIRD_PARTY_BLINK_RENDERER_BINDINGS_MODULES_V8_FLOAT_32_ARRAY_OR_FLOAT_64_ARRAY_OR_DOM_MATRIX_H_

#include "base/optional.h"
#include "third_party/blink/renderer/bindings/core/v8/dictionary.h"
#include "third_party/blink/renderer/bindings/core/v8/native_value_traits.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_array_buffer_view.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_binding_for_core.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_float32_array.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_float64_array.h"
#include "third_party/blink/renderer/core/typed_arrays/array_buffer_view_helpers.h"
#include "third_party/blink/renderer/core/typed_arrays/flexible_array_buffer_view.h"
#include "third_party/blink/renderer/modules/modules_export.h"
#include "third_party/blink/renderer/platform/bindings/exception_state.h"
#include "third_party/blink/renderer/platform/heap/handle.h"

namespace blink {

class DOMMatrix;

class MODULES_EXPORT Float32ArrayOrFloat64ArrayOrDOMMatrix final {
  DISALLOW_NEW();
 public:
  Float32ArrayOrFloat64ArrayOrDOMMatrix();
  bool IsNull() const { return type_ == SpecificType::kNone; }

  bool IsDOMMatrix() const { return type_ == SpecificType::kDOMMatrix; }
  DOMMatrix* GetAsDOMMatrix() const;
  void SetDOMMatrix(DOMMatrix*);
  static Float32ArrayOrFloat64ArrayOrDOMMatrix FromDOMMatrix(DOMMatrix*);

  bool IsFloat32Array() const { return type_ == SpecificType::kFloat32Array; }
  NotShared<DOMFloat32Array> GetAsFloat32Array() const;
  void SetFloat32Array(NotShared<DOMFloat32Array>);
  static Float32ArrayOrFloat64ArrayOrDOMMatrix FromFloat32Array(NotShared<DOMFloat32Array>);

  bool IsFloat64Array() const { return type_ == SpecificType::kFloat64Array; }
  NotShared<DOMFloat64Array> GetAsFloat64Array() const;
  void SetFloat64Array(NotShared<DOMFloat64Array>);
  static Float32ArrayOrFloat64ArrayOrDOMMatrix FromFloat64Array(NotShared<DOMFloat64Array>);

  Float32ArrayOrFloat64ArrayOrDOMMatrix(const Float32ArrayOrFloat64ArrayOrDOMMatrix&);
  ~Float32ArrayOrFloat64ArrayOrDOMMatrix();
  Float32ArrayOrFloat64ArrayOrDOMMatrix& operator=(const Float32ArrayOrFloat64ArrayOrDOMMatrix&);
  void Trace(blink::Visitor*);

 private:
  enum class SpecificType {
    kNone,
    kDOMMatrix,
    kFloat32Array,
    kFloat64Array,
  };
  SpecificType type_;

  Member<DOMMatrix> dom_matrix_;
  Member<DOMFloat32Array> float32_array_;
  Member<DOMFloat64Array> float64_array_;

  friend MODULES_EXPORT v8::Local<v8::Value> ToV8(const Float32ArrayOrFloat64ArrayOrDOMMatrix&, v8::Local<v8::Object>, v8::Isolate*);
};

class V8Float32ArrayOrFloat64ArrayOrDOMMatrix final {
 public:
  MODULES_EXPORT static void ToImpl(v8::Isolate*, v8::Local<v8::Value>, Float32ArrayOrFloat64ArrayOrDOMMatrix&, UnionTypeConversionMode, ExceptionState&);
};

MODULES_EXPORT v8::Local<v8::Value> ToV8(const Float32ArrayOrFloat64ArrayOrDOMMatrix&, v8::Local<v8::Object>, v8::Isolate*);

template <class CallbackInfo>
inline void V8SetReturnValue(const CallbackInfo& callbackInfo, Float32ArrayOrFloat64ArrayOrDOMMatrix& impl) {
  V8SetReturnValue(callbackInfo, ToV8(impl, callbackInfo.Holder(), callbackInfo.GetIsolate()));
}

template <class CallbackInfo>
inline void V8SetReturnValue(const CallbackInfo& callbackInfo, Float32ArrayOrFloat64ArrayOrDOMMatrix& impl, v8::Local<v8::Object> creationContext) {
  V8SetReturnValue(callbackInfo, ToV8(impl, creationContext, callbackInfo.GetIsolate()));
}

template <>
struct NativeValueTraits<Float32ArrayOrFloat64ArrayOrDOMMatrix> : public NativeValueTraitsBase<Float32ArrayOrFloat64ArrayOrDOMMatrix> {
  MODULES_EXPORT static Float32ArrayOrFloat64ArrayOrDOMMatrix NativeValue(v8::Isolate*, v8::Local<v8::Value>, ExceptionState&);
  MODULES_EXPORT static Float32ArrayOrFloat64ArrayOrDOMMatrix NullValue() { return Float32ArrayOrFloat64ArrayOrDOMMatrix(); }
};

template <>
struct V8TypeOf<Float32ArrayOrFloat64ArrayOrDOMMatrix> {
  typedef V8Float32ArrayOrFloat64ArrayOrDOMMatrix Type;
};

}  // namespace blink

// We need to set canInitializeWithMemset=true because HeapVector supports
// items that can initialize with memset or have a vtable. It is safe to
// set canInitializeWithMemset=true for a union type object in practice.
// See https://codereview.chromium.org/1118993002/#msg5 for more details.
WTF_ALLOW_MOVE_AND_INIT_WITH_MEM_FUNCTIONS(blink::Float32ArrayOrFloat64ArrayOrDOMMatrix)

#endif  // THIRD_PARTY_BLINK_RENDERER_BINDINGS_MODULES_V8_FLOAT_32_ARRAY_OR_FLOAT_64_ARRAY_OR_DOM_MATRIX_H_
