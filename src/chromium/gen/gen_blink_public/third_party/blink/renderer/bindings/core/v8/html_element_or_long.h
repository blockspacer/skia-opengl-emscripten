// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated from the Jinja2 template
// third_party/blink/renderer/bindings/templates/union_container.h.tmpl
// by the script code_generator_v8.py.
// DO NOT MODIFY!

// clang-format off
#ifndef THIRD_PARTY_BLINK_RENDERER_BINDINGS_CORE_V8_HTML_ELEMENT_OR_LONG_H_
#define THIRD_PARTY_BLINK_RENDERER_BINDINGS_CORE_V8_HTML_ELEMENT_OR_LONG_H_

#include "base/optional.h"
#include "third_party/blink/renderer/bindings/core/v8/dictionary.h"
#include "third_party/blink/renderer/bindings/core/v8/native_value_traits.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_binding_for_core.h"
#include "third_party/blink/renderer/core/core_export.h"
#include "third_party/blink/renderer/platform/bindings/exception_state.h"
#include "third_party/blink/renderer/platform/heap/handle.h"

namespace blink {

class HTMLElement;

class CORE_EXPORT HTMLElementOrLong final {
  DISALLOW_NEW();
 public:
  HTMLElementOrLong();
  bool IsNull() const { return type_ == SpecificType::kNone; }

  bool IsHTMLElement() const { return type_ == SpecificType::kHTMLElement; }
  HTMLElement* GetAsHTMLElement() const;
  void SetHTMLElement(HTMLElement*);
  static HTMLElementOrLong FromHTMLElement(HTMLElement*);

  bool IsLong() const { return type_ == SpecificType::kLong; }
  int32_t GetAsLong() const;
  void SetLong(int32_t);
  static HTMLElementOrLong FromLong(int32_t);

  HTMLElementOrLong(const HTMLElementOrLong&);
  ~HTMLElementOrLong();
  HTMLElementOrLong& operator=(const HTMLElementOrLong&);
  void Trace(blink::Visitor*);

 private:
  enum class SpecificType {
    kNone,
    kHTMLElement,
    kLong,
  };
  SpecificType type_;

  Member<HTMLElement> html_element_;
  int32_t long_;

  friend CORE_EXPORT v8::Local<v8::Value> ToV8(const HTMLElementOrLong&, v8::Local<v8::Object>, v8::Isolate*);
};

class V8HTMLElementOrLong final {
 public:
  CORE_EXPORT static void ToImpl(v8::Isolate*, v8::Local<v8::Value>, HTMLElementOrLong&, UnionTypeConversionMode, ExceptionState&);
};

CORE_EXPORT v8::Local<v8::Value> ToV8(const HTMLElementOrLong&, v8::Local<v8::Object>, v8::Isolate*);

template <class CallbackInfo>
inline void V8SetReturnValue(const CallbackInfo& callbackInfo, HTMLElementOrLong& impl) {
  V8SetReturnValue(callbackInfo, ToV8(impl, callbackInfo.Holder(), callbackInfo.GetIsolate()));
}

template <class CallbackInfo>
inline void V8SetReturnValue(const CallbackInfo& callbackInfo, HTMLElementOrLong& impl, v8::Local<v8::Object> creationContext) {
  V8SetReturnValue(callbackInfo, ToV8(impl, creationContext, callbackInfo.GetIsolate()));
}

template <>
struct NativeValueTraits<HTMLElementOrLong> : public NativeValueTraitsBase<HTMLElementOrLong> {
  CORE_EXPORT static HTMLElementOrLong NativeValue(v8::Isolate*, v8::Local<v8::Value>, ExceptionState&);
  CORE_EXPORT static HTMLElementOrLong NullValue() { return HTMLElementOrLong(); }
};

template <>
struct V8TypeOf<HTMLElementOrLong> {
  typedef V8HTMLElementOrLong Type;
};

}  // namespace blink

// We need to set canInitializeWithMemset=true because HeapVector supports
// items that can initialize with memset or have a vtable. It is safe to
// set canInitializeWithMemset=true for a union type object in practice.
// See https://codereview.chromium.org/1118993002/#msg5 for more details.
WTF_ALLOW_MOVE_AND_INIT_WITH_MEM_FUNCTIONS(blink::HTMLElementOrLong)

#endif  // THIRD_PARTY_BLINK_RENDERER_BINDINGS_CORE_V8_HTML_ELEMENT_OR_LONG_H_
