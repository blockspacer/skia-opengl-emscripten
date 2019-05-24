// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated from the Jinja2 template
// third_party/blink/renderer/bindings/templates/union_container.h.tmpl
// by the script code_generator_v8.py.
// DO NOT MODIFY!

// clang-format off
#ifndef THIRD_PARTY_BLINK_RENDERER_BINDINGS_CORE_V8_FLOAT_OR_STRING_ELEMENT_RECORD_H_
#define THIRD_PARTY_BLINK_RENDERER_BINDINGS_CORE_V8_FLOAT_OR_STRING_ELEMENT_RECORD_H_

#include "base/optional.h"
#include "third_party/blink/renderer/bindings/core/v8/dictionary.h"
#include "third_party/blink/renderer/bindings/core/v8/native_value_traits.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_binding_for_core.h"
#include "third_party/blink/renderer/core/core_export.h"
#include "third_party/blink/renderer/platform/bindings/exception_state.h"
#include "third_party/blink/renderer/platform/heap/handle.h"

namespace blink {

class Element;

class CORE_EXPORT FloatOrStringElementRecord final {
  DISALLOW_NEW();
 public:
  FloatOrStringElementRecord();
  bool IsNull() const { return type_ == SpecificType::kNone; }

  bool IsFloat() const { return type_ == SpecificType::kFloat; }
  float GetAsFloat() const;
  void SetFloat(float);
  static FloatOrStringElementRecord FromFloat(float);

  bool IsStringElementRecord() const { return type_ == SpecificType::kStringElementRecord; }
  const HeapVector<std::pair<String, Member<Element>>>& GetAsStringElementRecord() const;
  void SetStringElementRecord(const HeapVector<std::pair<String, Member<Element>>>&);
  static FloatOrStringElementRecord FromStringElementRecord(const HeapVector<std::pair<String, Member<Element>>>&);

  FloatOrStringElementRecord(const FloatOrStringElementRecord&);
  ~FloatOrStringElementRecord();
  FloatOrStringElementRecord& operator=(const FloatOrStringElementRecord&);
  void Trace(blink::Visitor*);

 private:
  enum class SpecificType {
    kNone,
    kFloat,
    kStringElementRecord,
  };
  SpecificType type_;

  float float_;
  HeapVector<std::pair<String, Member<Element>>> string_element_record_;

  friend CORE_EXPORT v8::Local<v8::Value> ToV8(const FloatOrStringElementRecord&, v8::Local<v8::Object>, v8::Isolate*);
};

class V8FloatOrStringElementRecord final {
 public:
  CORE_EXPORT static void ToImpl(v8::Isolate*, v8::Local<v8::Value>, FloatOrStringElementRecord&, UnionTypeConversionMode, ExceptionState&);
};

CORE_EXPORT v8::Local<v8::Value> ToV8(const FloatOrStringElementRecord&, v8::Local<v8::Object>, v8::Isolate*);

template <class CallbackInfo>
inline void V8SetReturnValue(const CallbackInfo& callbackInfo, FloatOrStringElementRecord& impl) {
  V8SetReturnValue(callbackInfo, ToV8(impl, callbackInfo.Holder(), callbackInfo.GetIsolate()));
}

template <class CallbackInfo>
inline void V8SetReturnValue(const CallbackInfo& callbackInfo, FloatOrStringElementRecord& impl, v8::Local<v8::Object> creationContext) {
  V8SetReturnValue(callbackInfo, ToV8(impl, creationContext, callbackInfo.GetIsolate()));
}

template <>
struct NativeValueTraits<FloatOrStringElementRecord> : public NativeValueTraitsBase<FloatOrStringElementRecord> {
  CORE_EXPORT static FloatOrStringElementRecord NativeValue(v8::Isolate*, v8::Local<v8::Value>, ExceptionState&);
  CORE_EXPORT static FloatOrStringElementRecord NullValue() { return FloatOrStringElementRecord(); }
};

template <>
struct V8TypeOf<FloatOrStringElementRecord> {
  typedef V8FloatOrStringElementRecord Type;
};

}  // namespace blink

// We need to set canInitializeWithMemset=true because HeapVector supports
// items that can initialize with memset or have a vtable. It is safe to
// set canInitializeWithMemset=true for a union type object in practice.
// See https://codereview.chromium.org/1118993002/#msg5 for more details.
WTF_ALLOW_MOVE_AND_INIT_WITH_MEM_FUNCTIONS(blink::FloatOrStringElementRecord)

#endif  // THIRD_PARTY_BLINK_RENDERER_BINDINGS_CORE_V8_FLOAT_OR_STRING_ELEMENT_RECORD_H_
