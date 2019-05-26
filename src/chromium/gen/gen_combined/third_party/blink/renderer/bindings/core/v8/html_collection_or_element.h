// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated from the Jinja2 template
// third_party/blink/renderer/bindings/templates/union_container.h.tmpl
// by the script code_generator_v8.py.
// DO NOT MODIFY!

// clang-format off
#ifndef THIRD_PARTY_BLINK_RENDERER_BINDINGS_CORE_V8_HTML_COLLECTION_OR_ELEMENT_H_
#define THIRD_PARTY_BLINK_RENDERER_BINDINGS_CORE_V8_HTML_COLLECTION_OR_ELEMENT_H_

#include "base/optional.h"
#include "third_party/blink/renderer/bindings/core/v8/dictionary.h"
#include "third_party/blink/renderer/bindings/core/v8/native_value_traits.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_binding_for_core.h"
#include "third_party/blink/renderer/core/core_export.h"
#include "third_party/blink/renderer/platform/bindings/exception_state.h"
#include "third_party/blink/renderer/platform/heap/handle.h"

namespace blink {

class Element;
class HTMLCollection;

class CORE_EXPORT HTMLCollectionOrElement final {
  DISALLOW_NEW();
 public:
  HTMLCollectionOrElement();
  bool IsNull() const { return type_ == SpecificType::kNone; }

  bool IsElement() const { return type_ == SpecificType::kElement; }
  Element* GetAsElement() const;
  void SetElement(Element*);
  static HTMLCollectionOrElement FromElement(Element*);

  bool IsHTMLCollection() const { return type_ == SpecificType::kHTMLCollection; }
  HTMLCollection* GetAsHTMLCollection() const;
  void SetHTMLCollection(HTMLCollection*);
  static HTMLCollectionOrElement FromHTMLCollection(HTMLCollection*);

  HTMLCollectionOrElement(const HTMLCollectionOrElement&);
  ~HTMLCollectionOrElement();
  HTMLCollectionOrElement& operator=(const HTMLCollectionOrElement&);
  void Trace(blink::Visitor*);

 private:
  enum class SpecificType {
    kNone,
    kElement,
    kHTMLCollection,
  };
  SpecificType type_;

  Member<Element> element_;
  Member<HTMLCollection> html_collection_;

  friend CORE_EXPORT v8::Local<v8::Value> ToV8(const HTMLCollectionOrElement&, v8::Local<v8::Object>, v8::Isolate*);
};

class V8HTMLCollectionOrElement final {
 public:
  CORE_EXPORT static void ToImpl(v8::Isolate*, v8::Local<v8::Value>, HTMLCollectionOrElement&, UnionTypeConversionMode, ExceptionState&);
};

CORE_EXPORT v8::Local<v8::Value> ToV8(const HTMLCollectionOrElement&, v8::Local<v8::Object>, v8::Isolate*);

template <class CallbackInfo>
inline void V8SetReturnValue(const CallbackInfo& callbackInfo, HTMLCollectionOrElement& impl) {
  V8SetReturnValue(callbackInfo, ToV8(impl, callbackInfo.Holder(), callbackInfo.GetIsolate()));
}

template <class CallbackInfo>
inline void V8SetReturnValue(const CallbackInfo& callbackInfo, HTMLCollectionOrElement& impl, v8::Local<v8::Object> creationContext) {
  V8SetReturnValue(callbackInfo, ToV8(impl, creationContext, callbackInfo.GetIsolate()));
}

template <>
struct NativeValueTraits<HTMLCollectionOrElement> : public NativeValueTraitsBase<HTMLCollectionOrElement> {
  CORE_EXPORT static HTMLCollectionOrElement NativeValue(v8::Isolate*, v8::Local<v8::Value>, ExceptionState&);
  CORE_EXPORT static HTMLCollectionOrElement NullValue() { return HTMLCollectionOrElement(); }
};

template <>
struct V8TypeOf<HTMLCollectionOrElement> {
  typedef V8HTMLCollectionOrElement Type;
};

}  // namespace blink

// We need to set canInitializeWithMemset=true because HeapVector supports
// items that can initialize with memset or have a vtable. It is safe to
// set canInitializeWithMemset=true for a union type object in practice.
// See https://codereview.chromium.org/1118993002/#msg5 for more details.
WTF_ALLOW_MOVE_AND_INIT_WITH_MEM_FUNCTIONS(blink::HTMLCollectionOrElement)

#endif  // THIRD_PARTY_BLINK_RENDERER_BINDINGS_CORE_V8_HTML_COLLECTION_OR_ELEMENT_H_
