// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated from the Jinja2 template
// third_party/blink/renderer/bindings/templates/union_container.h.tmpl
// by the script code_generator_v8.py.
// DO NOT MODIFY!

// clang-format off
#ifndef THIRD_PARTY_BLINK_RENDERER_BINDINGS_CORE_V8_USV_STRING_OR_TRUSTED_URL_H_
#define THIRD_PARTY_BLINK_RENDERER_BINDINGS_CORE_V8_USV_STRING_OR_TRUSTED_URL_H_

#include "base/optional.h"
#include "third_party/blink/renderer/bindings/core/v8/dictionary.h"
#include "third_party/blink/renderer/bindings/core/v8/native_value_traits.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_binding_for_core.h"
#include "third_party/blink/renderer/core/core_export.h"
#include "third_party/blink/renderer/platform/bindings/exception_state.h"
#include "third_party/blink/renderer/platform/heap/handle.h"

namespace blink {

class TrustedURL;

class CORE_EXPORT USVStringOrTrustedURL final {
  DISALLOW_NEW();
 public:
  USVStringOrTrustedURL();
  bool IsNull() const { return type_ == SpecificType::kNone; }

  bool IsTrustedURL() const { return type_ == SpecificType::kTrustedURL; }
  TrustedURL* GetAsTrustedURL() const;
  void SetTrustedURL(TrustedURL*);
  static USVStringOrTrustedURL FromTrustedURL(TrustedURL*);

  bool IsUSVString() const { return type_ == SpecificType::kUSVString; }
  const String& GetAsUSVString() const;
  void SetUSVString(const String&);
  static USVStringOrTrustedURL FromUSVString(const String&);

  USVStringOrTrustedURL(const USVStringOrTrustedURL&);
  ~USVStringOrTrustedURL();
  USVStringOrTrustedURL& operator=(const USVStringOrTrustedURL&);
  void Trace(blink::Visitor*);

 private:
  enum class SpecificType {
    kNone,
    kTrustedURL,
    kUSVString,
  };
  SpecificType type_;

  Member<TrustedURL> trusted_url_;
  String usv_string_;

  friend CORE_EXPORT v8::Local<v8::Value> ToV8(const USVStringOrTrustedURL&, v8::Local<v8::Object>, v8::Isolate*);
};

class V8USVStringOrTrustedURL final {
 public:
  CORE_EXPORT static void ToImpl(v8::Isolate*, v8::Local<v8::Value>, USVStringOrTrustedURL&, UnionTypeConversionMode, ExceptionState&);
};

CORE_EXPORT v8::Local<v8::Value> ToV8(const USVStringOrTrustedURL&, v8::Local<v8::Object>, v8::Isolate*);

template <class CallbackInfo>
inline void V8SetReturnValue(const CallbackInfo& callbackInfo, USVStringOrTrustedURL& impl) {
  V8SetReturnValue(callbackInfo, ToV8(impl, callbackInfo.Holder(), callbackInfo.GetIsolate()));
}

template <class CallbackInfo>
inline void V8SetReturnValue(const CallbackInfo& callbackInfo, USVStringOrTrustedURL& impl, v8::Local<v8::Object> creationContext) {
  V8SetReturnValue(callbackInfo, ToV8(impl, creationContext, callbackInfo.GetIsolate()));
}

template <>
struct NativeValueTraits<USVStringOrTrustedURL> : public NativeValueTraitsBase<USVStringOrTrustedURL> {
  CORE_EXPORT static USVStringOrTrustedURL NativeValue(v8::Isolate*, v8::Local<v8::Value>, ExceptionState&);
  CORE_EXPORT static USVStringOrTrustedURL NullValue() { return USVStringOrTrustedURL(); }
};

template <>
struct V8TypeOf<USVStringOrTrustedURL> {
  typedef V8USVStringOrTrustedURL Type;
};

}  // namespace blink

// We need to set canInitializeWithMemset=true because HeapVector supports
// items that can initialize with memset or have a vtable. It is safe to
// set canInitializeWithMemset=true for a union type object in practice.
// See https://codereview.chromium.org/1118993002/#msg5 for more details.
WTF_ALLOW_MOVE_AND_INIT_WITH_MEM_FUNCTIONS(blink::USVStringOrTrustedURL)

#endif  // THIRD_PARTY_BLINK_RENDERER_BINDINGS_CORE_V8_USV_STRING_OR_TRUSTED_URL_H_
