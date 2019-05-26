// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated from the Jinja2 template
// third_party/blink/renderer/bindings/templates/union_container.h.tmpl
// by the script code_generator_v8.py.
// DO NOT MODIFY!

// clang-format off
#ifndef THIRD_PARTY_BLINK_RENDERER_BINDINGS_CORE_V8_STRING_OR_TRUSTED_HTML_H_
#define THIRD_PARTY_BLINK_RENDERER_BINDINGS_CORE_V8_STRING_OR_TRUSTED_HTML_H_

#include "base/optional.h"
#include "third_party/blink/renderer/bindings/core/v8/dictionary.h"
#include "third_party/blink/renderer/bindings/core/v8/native_value_traits.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_binding_for_core.h"
#include "third_party/blink/renderer/core/core_export.h"
#include "third_party/blink/renderer/platform/bindings/exception_state.h"
#include "third_party/blink/renderer/platform/heap/handle.h"

namespace blink {

class TrustedHTML;

class CORE_EXPORT StringOrTrustedHTML final {
  DISALLOW_NEW();
 public:
  StringOrTrustedHTML();
  bool IsNull() const { return type_ == SpecificType::kNone; }

  bool IsString() const { return type_ == SpecificType::kString; }
  const String& GetAsString() const;
  void SetString(const String&);
  static StringOrTrustedHTML FromString(const String&);

  bool IsTrustedHTML() const { return type_ == SpecificType::kTrustedHTML; }
  TrustedHTML* GetAsTrustedHTML() const;
  void SetTrustedHTML(TrustedHTML*);
  static StringOrTrustedHTML FromTrustedHTML(TrustedHTML*);

  StringOrTrustedHTML(const StringOrTrustedHTML&);
  ~StringOrTrustedHTML();
  StringOrTrustedHTML& operator=(const StringOrTrustedHTML&);
  void Trace(blink::Visitor*);

 private:
  enum class SpecificType {
    kNone,
    kString,
    kTrustedHTML,
  };
  SpecificType type_;

  String string_;
  Member<TrustedHTML> trusted_html_;

  friend CORE_EXPORT v8::Local<v8::Value> ToV8(const StringOrTrustedHTML&, v8::Local<v8::Object>, v8::Isolate*);
};

class V8StringOrTrustedHTML final {
 public:
  CORE_EXPORT static void ToImpl(v8::Isolate*, v8::Local<v8::Value>, StringOrTrustedHTML&, UnionTypeConversionMode, ExceptionState&);
};

CORE_EXPORT v8::Local<v8::Value> ToV8(const StringOrTrustedHTML&, v8::Local<v8::Object>, v8::Isolate*);

template <class CallbackInfo>
inline void V8SetReturnValue(const CallbackInfo& callbackInfo, StringOrTrustedHTML& impl) {
  V8SetReturnValue(callbackInfo, ToV8(impl, callbackInfo.Holder(), callbackInfo.GetIsolate()));
}

template <class CallbackInfo>
inline void V8SetReturnValue(const CallbackInfo& callbackInfo, StringOrTrustedHTML& impl, v8::Local<v8::Object> creationContext) {
  V8SetReturnValue(callbackInfo, ToV8(impl, creationContext, callbackInfo.GetIsolate()));
}

template <>
struct NativeValueTraits<StringOrTrustedHTML> : public NativeValueTraitsBase<StringOrTrustedHTML> {
  CORE_EXPORT static StringOrTrustedHTML NativeValue(v8::Isolate*, v8::Local<v8::Value>, ExceptionState&);
  CORE_EXPORT static StringOrTrustedHTML NullValue() { return StringOrTrustedHTML(); }
};

template <>
struct V8TypeOf<StringOrTrustedHTML> {
  typedef V8StringOrTrustedHTML Type;
};

}  // namespace blink

// We need to set canInitializeWithMemset=true because HeapVector supports
// items that can initialize with memset or have a vtable. It is safe to
// set canInitializeWithMemset=true for a union type object in practice.
// See https://codereview.chromium.org/1118993002/#msg5 for more details.
WTF_ALLOW_MOVE_AND_INIT_WITH_MEM_FUNCTIONS(blink::StringOrTrustedHTML)

#endif  // THIRD_PARTY_BLINK_RENDERER_BINDINGS_CORE_V8_STRING_OR_TRUSTED_HTML_H_
