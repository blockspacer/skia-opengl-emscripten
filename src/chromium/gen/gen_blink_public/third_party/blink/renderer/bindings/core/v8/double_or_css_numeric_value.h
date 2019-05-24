// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated from the Jinja2 template
// third_party/blink/renderer/bindings/templates/union_container.h.tmpl
// by the script code_generator_v8.py.
// DO NOT MODIFY!

// clang-format off
#ifndef THIRD_PARTY_BLINK_RENDERER_BINDINGS_CORE_V8_DOUBLE_OR_CSS_NUMERIC_VALUE_H_
#define THIRD_PARTY_BLINK_RENDERER_BINDINGS_CORE_V8_DOUBLE_OR_CSS_NUMERIC_VALUE_H_

#include "base/optional.h"
#include "third_party/blink/renderer/bindings/core/v8/dictionary.h"
#include "third_party/blink/renderer/bindings/core/v8/native_value_traits.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_binding_for_core.h"
#include "third_party/blink/renderer/core/core_export.h"
#include "third_party/blink/renderer/platform/bindings/exception_state.h"
#include "third_party/blink/renderer/platform/heap/handle.h"

namespace blink {

class CSSNumericValue;

class CORE_EXPORT DoubleOrCSSNumericValue final {
  DISALLOW_NEW();
 public:
  DoubleOrCSSNumericValue();
  bool IsNull() const { return type_ == SpecificType::kNone; }

  bool IsCSSNumericValue() const { return type_ == SpecificType::kCSSNumericValue; }
  CSSNumericValue* GetAsCSSNumericValue() const;
  void SetCSSNumericValue(CSSNumericValue*);
  static DoubleOrCSSNumericValue FromCSSNumericValue(CSSNumericValue*);

  bool IsDouble() const { return type_ == SpecificType::kDouble; }
  double GetAsDouble() const;
  void SetDouble(double);
  static DoubleOrCSSNumericValue FromDouble(double);

  DoubleOrCSSNumericValue(const DoubleOrCSSNumericValue&);
  ~DoubleOrCSSNumericValue();
  DoubleOrCSSNumericValue& operator=(const DoubleOrCSSNumericValue&);
  void Trace(blink::Visitor*);

 private:
  enum class SpecificType {
    kNone,
    kCSSNumericValue,
    kDouble,
  };
  SpecificType type_;

  Member<CSSNumericValue> css_numeric_value_;
  double double_;

  friend CORE_EXPORT v8::Local<v8::Value> ToV8(const DoubleOrCSSNumericValue&, v8::Local<v8::Object>, v8::Isolate*);
};

class V8DoubleOrCSSNumericValue final {
 public:
  CORE_EXPORT static void ToImpl(v8::Isolate*, v8::Local<v8::Value>, DoubleOrCSSNumericValue&, UnionTypeConversionMode, ExceptionState&);
};

CORE_EXPORT v8::Local<v8::Value> ToV8(const DoubleOrCSSNumericValue&, v8::Local<v8::Object>, v8::Isolate*);

template <class CallbackInfo>
inline void V8SetReturnValue(const CallbackInfo& callbackInfo, DoubleOrCSSNumericValue& impl) {
  V8SetReturnValue(callbackInfo, ToV8(impl, callbackInfo.Holder(), callbackInfo.GetIsolate()));
}

template <class CallbackInfo>
inline void V8SetReturnValue(const CallbackInfo& callbackInfo, DoubleOrCSSNumericValue& impl, v8::Local<v8::Object> creationContext) {
  V8SetReturnValue(callbackInfo, ToV8(impl, creationContext, callbackInfo.GetIsolate()));
}

template <>
struct NativeValueTraits<DoubleOrCSSNumericValue> : public NativeValueTraitsBase<DoubleOrCSSNumericValue> {
  CORE_EXPORT static DoubleOrCSSNumericValue NativeValue(v8::Isolate*, v8::Local<v8::Value>, ExceptionState&);
  CORE_EXPORT static DoubleOrCSSNumericValue NullValue() { return DoubleOrCSSNumericValue(); }
};

template <>
struct V8TypeOf<DoubleOrCSSNumericValue> {
  typedef V8DoubleOrCSSNumericValue Type;
};

}  // namespace blink

// We need to set canInitializeWithMemset=true because HeapVector supports
// items that can initialize with memset or have a vtable. It is safe to
// set canInitializeWithMemset=true for a union type object in practice.
// See https://codereview.chromium.org/1118993002/#msg5 for more details.
WTF_ALLOW_MOVE_AND_INIT_WITH_MEM_FUNCTIONS(blink::DoubleOrCSSNumericValue)

#endif  // THIRD_PARTY_BLINK_RENDERER_BINDINGS_CORE_V8_DOUBLE_OR_CSS_NUMERIC_VALUE_H_
