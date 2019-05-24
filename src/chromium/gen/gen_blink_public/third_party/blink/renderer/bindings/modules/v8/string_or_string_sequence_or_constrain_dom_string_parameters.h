// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated from the Jinja2 template
// third_party/blink/renderer/bindings/templates/union_container.h.tmpl
// by the script code_generator_v8.py.
// DO NOT MODIFY!

// clang-format off
#ifndef THIRD_PARTY_BLINK_RENDERER_BINDINGS_MODULES_V8_STRING_OR_STRING_SEQUENCE_OR_CONSTRAIN_DOM_STRING_PARAMETERS_H_
#define THIRD_PARTY_BLINK_RENDERER_BINDINGS_MODULES_V8_STRING_OR_STRING_SEQUENCE_OR_CONSTRAIN_DOM_STRING_PARAMETERS_H_

#include "base/optional.h"
#include "third_party/blink/renderer/bindings/core/v8/dictionary.h"
#include "third_party/blink/renderer/bindings/core/v8/native_value_traits.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_binding_for_core.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_constrain_dom_string_parameters.h"
#include "third_party/blink/renderer/modules/modules_export.h"
#include "third_party/blink/renderer/platform/bindings/exception_state.h"
#include "third_party/blink/renderer/platform/heap/handle.h"

namespace blink {

class MODULES_EXPORT StringOrStringSequenceOrConstrainDOMStringParameters final {
  DISALLOW_NEW();
 public:
  StringOrStringSequenceOrConstrainDOMStringParameters();
  bool IsNull() const { return type_ == SpecificType::kNone; }

  bool IsConstrainDOMStringParameters() const { return type_ == SpecificType::kConstrainDOMStringParameters; }
  ConstrainDOMStringParameters* GetAsConstrainDOMStringParameters() const;
  void SetConstrainDOMStringParameters(ConstrainDOMStringParameters*);
  static StringOrStringSequenceOrConstrainDOMStringParameters FromConstrainDOMStringParameters(ConstrainDOMStringParameters*);

  bool IsString() const { return type_ == SpecificType::kString; }
  const String& GetAsString() const;
  void SetString(const String&);
  static StringOrStringSequenceOrConstrainDOMStringParameters FromString(const String&);

  bool IsStringSequence() const { return type_ == SpecificType::kStringSequence; }
  const Vector<String>& GetAsStringSequence() const;
  void SetStringSequence(const Vector<String>&);
  static StringOrStringSequenceOrConstrainDOMStringParameters FromStringSequence(const Vector<String>&);

  StringOrStringSequenceOrConstrainDOMStringParameters(const StringOrStringSequenceOrConstrainDOMStringParameters&);
  ~StringOrStringSequenceOrConstrainDOMStringParameters();
  StringOrStringSequenceOrConstrainDOMStringParameters& operator=(const StringOrStringSequenceOrConstrainDOMStringParameters&);
  void Trace(blink::Visitor*);

 private:
  enum class SpecificType {
    kNone,
    kConstrainDOMStringParameters,
    kString,
    kStringSequence,
  };
  SpecificType type_;

  Member<ConstrainDOMStringParameters> constrain_dom_string_parameters_;
  String string_;
  Vector<String> string_sequence_;

  friend MODULES_EXPORT v8::Local<v8::Value> ToV8(const StringOrStringSequenceOrConstrainDOMStringParameters&, v8::Local<v8::Object>, v8::Isolate*);
};

class V8StringOrStringSequenceOrConstrainDOMStringParameters final {
 public:
  MODULES_EXPORT static void ToImpl(v8::Isolate*, v8::Local<v8::Value>, StringOrStringSequenceOrConstrainDOMStringParameters&, UnionTypeConversionMode, ExceptionState&);
};

MODULES_EXPORT v8::Local<v8::Value> ToV8(const StringOrStringSequenceOrConstrainDOMStringParameters&, v8::Local<v8::Object>, v8::Isolate*);

template <class CallbackInfo>
inline void V8SetReturnValue(const CallbackInfo& callbackInfo, StringOrStringSequenceOrConstrainDOMStringParameters& impl) {
  V8SetReturnValue(callbackInfo, ToV8(impl, callbackInfo.Holder(), callbackInfo.GetIsolate()));
}

template <class CallbackInfo>
inline void V8SetReturnValue(const CallbackInfo& callbackInfo, StringOrStringSequenceOrConstrainDOMStringParameters& impl, v8::Local<v8::Object> creationContext) {
  V8SetReturnValue(callbackInfo, ToV8(impl, creationContext, callbackInfo.GetIsolate()));
}

template <>
struct NativeValueTraits<StringOrStringSequenceOrConstrainDOMStringParameters> : public NativeValueTraitsBase<StringOrStringSequenceOrConstrainDOMStringParameters> {
  MODULES_EXPORT static StringOrStringSequenceOrConstrainDOMStringParameters NativeValue(v8::Isolate*, v8::Local<v8::Value>, ExceptionState&);
  MODULES_EXPORT static StringOrStringSequenceOrConstrainDOMStringParameters NullValue() { return StringOrStringSequenceOrConstrainDOMStringParameters(); }
};

template <>
struct V8TypeOf<StringOrStringSequenceOrConstrainDOMStringParameters> {
  typedef V8StringOrStringSequenceOrConstrainDOMStringParameters Type;
};

}  // namespace blink

// We need to set canInitializeWithMemset=true because HeapVector supports
// items that can initialize with memset or have a vtable. It is safe to
// set canInitializeWithMemset=true for a union type object in practice.
// See https://codereview.chromium.org/1118993002/#msg5 for more details.
WTF_ALLOW_MOVE_AND_INIT_WITH_MEM_FUNCTIONS(blink::StringOrStringSequenceOrConstrainDOMStringParameters)

#endif  // THIRD_PARTY_BLINK_RENDERER_BINDINGS_MODULES_V8_STRING_OR_STRING_SEQUENCE_OR_CONSTRAIN_DOM_STRING_PARAMETERS_H_
