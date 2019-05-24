// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated from the Jinja2 template
// third_party/blink/renderer/bindings/templates/union_container.h.tmpl
// by the script code_generator_v8.py.
// DO NOT MODIFY!

// clang-format off
#ifndef THIRD_PARTY_BLINK_RENDERER_BINDINGS_MODULES_V8_DICTIONARY_OR_STRING_H_
#define THIRD_PARTY_BLINK_RENDERER_BINDINGS_MODULES_V8_DICTIONARY_OR_STRING_H_

#include "base/optional.h"
#include "third_party/blink/renderer/bindings/core/v8/dictionary.h"
#include "third_party/blink/renderer/bindings/core/v8/native_value_traits.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_binding_for_core.h"
#include "third_party/blink/renderer/modules/modules_export.h"
#include "third_party/blink/renderer/platform/bindings/exception_state.h"
#include "third_party/blink/renderer/platform/heap/handle.h"

namespace blink {

class MODULES_EXPORT DictionaryOrString final {
  DISALLOW_NEW();
 public:
  DictionaryOrString();
  bool IsNull() const { return type_ == SpecificType::kNone; }

  bool IsDictionary() const { return type_ == SpecificType::kDictionary; }
  Dictionary GetAsDictionary() const;
  void SetDictionary(Dictionary);
  static DictionaryOrString FromDictionary(Dictionary);

  bool IsString() const { return type_ == SpecificType::kString; }
  const String& GetAsString() const;
  void SetString(const String&);
  static DictionaryOrString FromString(const String&);

  DictionaryOrString(const DictionaryOrString&);
  ~DictionaryOrString();
  DictionaryOrString& operator=(const DictionaryOrString&);
  void Trace(blink::Visitor*);

 private:
  enum class SpecificType {
    kNone,
    kDictionary,
    kString,
  };
  SpecificType type_;

  Dictionary dictionary_;
  String string_;

  friend MODULES_EXPORT v8::Local<v8::Value> ToV8(const DictionaryOrString&, v8::Local<v8::Object>, v8::Isolate*);
};

class V8DictionaryOrString final {
 public:
  MODULES_EXPORT static void ToImpl(v8::Isolate*, v8::Local<v8::Value>, DictionaryOrString&, UnionTypeConversionMode, ExceptionState&);
};

MODULES_EXPORT v8::Local<v8::Value> ToV8(const DictionaryOrString&, v8::Local<v8::Object>, v8::Isolate*);

template <class CallbackInfo>
inline void V8SetReturnValue(const CallbackInfo& callbackInfo, DictionaryOrString& impl) {
  V8SetReturnValue(callbackInfo, ToV8(impl, callbackInfo.Holder(), callbackInfo.GetIsolate()));
}

template <class CallbackInfo>
inline void V8SetReturnValue(const CallbackInfo& callbackInfo, DictionaryOrString& impl, v8::Local<v8::Object> creationContext) {
  V8SetReturnValue(callbackInfo, ToV8(impl, creationContext, callbackInfo.GetIsolate()));
}

template <>
struct NativeValueTraits<DictionaryOrString> : public NativeValueTraitsBase<DictionaryOrString> {
  MODULES_EXPORT static DictionaryOrString NativeValue(v8::Isolate*, v8::Local<v8::Value>, ExceptionState&);
  MODULES_EXPORT static DictionaryOrString NullValue() { return DictionaryOrString(); }
};

template <>
struct V8TypeOf<DictionaryOrString> {
  typedef V8DictionaryOrString Type;
};

}  // namespace blink

// We need to set canInitializeWithMemset=true because HeapVector supports
// items that can initialize with memset or have a vtable. It is safe to
// set canInitializeWithMemset=true for a union type object in practice.
// See https://codereview.chromium.org/1118993002/#msg5 for more details.
WTF_ALLOW_MOVE_AND_INIT_WITH_MEM_FUNCTIONS(blink::DictionaryOrString)

#endif  // THIRD_PARTY_BLINK_RENDERER_BINDINGS_MODULES_V8_DICTIONARY_OR_STRING_H_
