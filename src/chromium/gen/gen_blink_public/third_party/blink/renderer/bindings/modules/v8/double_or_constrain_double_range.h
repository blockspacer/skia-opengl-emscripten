// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated from the Jinja2 template
// third_party/blink/renderer/bindings/templates/union_container.h.tmpl
// by the script code_generator_v8.py.
// DO NOT MODIFY!

// clang-format off
#ifndef THIRD_PARTY_BLINK_RENDERER_BINDINGS_MODULES_V8_DOUBLE_OR_CONSTRAIN_DOUBLE_RANGE_H_
#define THIRD_PARTY_BLINK_RENDERER_BINDINGS_MODULES_V8_DOUBLE_OR_CONSTRAIN_DOUBLE_RANGE_H_

#include "base/optional.h"
#include "third_party/blink/renderer/bindings/core/v8/dictionary.h"
#include "third_party/blink/renderer/bindings/core/v8/native_value_traits.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_binding_for_core.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_constrain_double_range.h"
#include "third_party/blink/renderer/modules/modules_export.h"
#include "third_party/blink/renderer/platform/bindings/exception_state.h"
#include "third_party/blink/renderer/platform/heap/handle.h"

namespace blink {

class MODULES_EXPORT DoubleOrConstrainDoubleRange final {
  DISALLOW_NEW();
 public:
  DoubleOrConstrainDoubleRange();
  bool IsNull() const { return type_ == SpecificType::kNone; }

  bool IsConstrainDoubleRange() const { return type_ == SpecificType::kConstrainDoubleRange; }
  ConstrainDoubleRange* GetAsConstrainDoubleRange() const;
  void SetConstrainDoubleRange(ConstrainDoubleRange*);
  static DoubleOrConstrainDoubleRange FromConstrainDoubleRange(ConstrainDoubleRange*);

  bool IsDouble() const { return type_ == SpecificType::kDouble; }
  double GetAsDouble() const;
  void SetDouble(double);
  static DoubleOrConstrainDoubleRange FromDouble(double);

  DoubleOrConstrainDoubleRange(const DoubleOrConstrainDoubleRange&);
  ~DoubleOrConstrainDoubleRange();
  DoubleOrConstrainDoubleRange& operator=(const DoubleOrConstrainDoubleRange&);
  void Trace(blink::Visitor*);

 private:
  enum class SpecificType {
    kNone,
    kConstrainDoubleRange,
    kDouble,
  };
  SpecificType type_;

  Member<ConstrainDoubleRange> constrain_double_range_;
  double double_;

  friend MODULES_EXPORT v8::Local<v8::Value> ToV8(const DoubleOrConstrainDoubleRange&, v8::Local<v8::Object>, v8::Isolate*);
};

class V8DoubleOrConstrainDoubleRange final {
 public:
  MODULES_EXPORT static void ToImpl(v8::Isolate*, v8::Local<v8::Value>, DoubleOrConstrainDoubleRange&, UnionTypeConversionMode, ExceptionState&);
};

MODULES_EXPORT v8::Local<v8::Value> ToV8(const DoubleOrConstrainDoubleRange&, v8::Local<v8::Object>, v8::Isolate*);

template <class CallbackInfo>
inline void V8SetReturnValue(const CallbackInfo& callbackInfo, DoubleOrConstrainDoubleRange& impl) {
  V8SetReturnValue(callbackInfo, ToV8(impl, callbackInfo.Holder(), callbackInfo.GetIsolate()));
}

template <class CallbackInfo>
inline void V8SetReturnValue(const CallbackInfo& callbackInfo, DoubleOrConstrainDoubleRange& impl, v8::Local<v8::Object> creationContext) {
  V8SetReturnValue(callbackInfo, ToV8(impl, creationContext, callbackInfo.GetIsolate()));
}

template <>
struct NativeValueTraits<DoubleOrConstrainDoubleRange> : public NativeValueTraitsBase<DoubleOrConstrainDoubleRange> {
  MODULES_EXPORT static DoubleOrConstrainDoubleRange NativeValue(v8::Isolate*, v8::Local<v8::Value>, ExceptionState&);
  MODULES_EXPORT static DoubleOrConstrainDoubleRange NullValue() { return DoubleOrConstrainDoubleRange(); }
};

template <>
struct V8TypeOf<DoubleOrConstrainDoubleRange> {
  typedef V8DoubleOrConstrainDoubleRange Type;
};

}  // namespace blink

// We need to set canInitializeWithMemset=true because HeapVector supports
// items that can initialize with memset or have a vtable. It is safe to
// set canInitializeWithMemset=true for a union type object in practice.
// See https://codereview.chromium.org/1118993002/#msg5 for more details.
WTF_ALLOW_MOVE_AND_INIT_WITH_MEM_FUNCTIONS(blink::DoubleOrConstrainDoubleRange)

#endif  // THIRD_PARTY_BLINK_RENDERER_BINDINGS_MODULES_V8_DOUBLE_OR_CONSTRAIN_DOUBLE_RANGE_H_
