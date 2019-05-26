// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated from the Jinja2 template
// third_party/blink/renderer/bindings/templates/union_container.h.tmpl
// by the script code_generator_v8.py.
// DO NOT MODIFY!

// clang-format off
#ifndef THIRD_PARTY_BLINK_RENDERER_BINDINGS_MODULES_V8_PASSWORD_CREDENTIAL_DATA_OR_HTML_FORM_ELEMENT_H_
#define THIRD_PARTY_BLINK_RENDERER_BINDINGS_MODULES_V8_PASSWORD_CREDENTIAL_DATA_OR_HTML_FORM_ELEMENT_H_

#include "base/optional.h"
#include "third_party/blink/renderer/bindings/core/v8/dictionary.h"
#include "third_party/blink/renderer/bindings/core/v8/native_value_traits.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_binding_for_core.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_password_credential_data.h"
#include "third_party/blink/renderer/modules/modules_export.h"
#include "third_party/blink/renderer/platform/bindings/exception_state.h"
#include "third_party/blink/renderer/platform/heap/handle.h"

namespace blink {

class HTMLFormElement;

class MODULES_EXPORT PasswordCredentialDataOrHTMLFormElement final {
  DISALLOW_NEW();
 public:
  PasswordCredentialDataOrHTMLFormElement();
  bool IsNull() const { return type_ == SpecificType::kNone; }

  bool IsHTMLFormElement() const { return type_ == SpecificType::kHTMLFormElement; }
  HTMLFormElement* GetAsHTMLFormElement() const;
  void SetHTMLFormElement(HTMLFormElement*);
  static PasswordCredentialDataOrHTMLFormElement FromHTMLFormElement(HTMLFormElement*);

  bool IsPasswordCredentialData() const { return type_ == SpecificType::kPasswordCredentialData; }
  PasswordCredentialData* GetAsPasswordCredentialData() const;
  void SetPasswordCredentialData(PasswordCredentialData*);
  static PasswordCredentialDataOrHTMLFormElement FromPasswordCredentialData(PasswordCredentialData*);

  PasswordCredentialDataOrHTMLFormElement(const PasswordCredentialDataOrHTMLFormElement&);
  ~PasswordCredentialDataOrHTMLFormElement();
  PasswordCredentialDataOrHTMLFormElement& operator=(const PasswordCredentialDataOrHTMLFormElement&);
  void Trace(blink::Visitor*);

 private:
  enum class SpecificType {
    kNone,
    kHTMLFormElement,
    kPasswordCredentialData,
  };
  SpecificType type_;

  Member<HTMLFormElement> html_form_element_;
  Member<PasswordCredentialData> password_credential_data_;

  friend MODULES_EXPORT v8::Local<v8::Value> ToV8(const PasswordCredentialDataOrHTMLFormElement&, v8::Local<v8::Object>, v8::Isolate*);
};

class V8PasswordCredentialDataOrHTMLFormElement final {
 public:
  MODULES_EXPORT static void ToImpl(v8::Isolate*, v8::Local<v8::Value>, PasswordCredentialDataOrHTMLFormElement&, UnionTypeConversionMode, ExceptionState&);
};

MODULES_EXPORT v8::Local<v8::Value> ToV8(const PasswordCredentialDataOrHTMLFormElement&, v8::Local<v8::Object>, v8::Isolate*);

template <class CallbackInfo>
inline void V8SetReturnValue(const CallbackInfo& callbackInfo, PasswordCredentialDataOrHTMLFormElement& impl) {
  V8SetReturnValue(callbackInfo, ToV8(impl, callbackInfo.Holder(), callbackInfo.GetIsolate()));
}

template <class CallbackInfo>
inline void V8SetReturnValue(const CallbackInfo& callbackInfo, PasswordCredentialDataOrHTMLFormElement& impl, v8::Local<v8::Object> creationContext) {
  V8SetReturnValue(callbackInfo, ToV8(impl, creationContext, callbackInfo.GetIsolate()));
}

template <>
struct NativeValueTraits<PasswordCredentialDataOrHTMLFormElement> : public NativeValueTraitsBase<PasswordCredentialDataOrHTMLFormElement> {
  MODULES_EXPORT static PasswordCredentialDataOrHTMLFormElement NativeValue(v8::Isolate*, v8::Local<v8::Value>, ExceptionState&);
  MODULES_EXPORT static PasswordCredentialDataOrHTMLFormElement NullValue() { return PasswordCredentialDataOrHTMLFormElement(); }
};

template <>
struct V8TypeOf<PasswordCredentialDataOrHTMLFormElement> {
  typedef V8PasswordCredentialDataOrHTMLFormElement Type;
};

}  // namespace blink

// We need to set canInitializeWithMemset=true because HeapVector supports
// items that can initialize with memset or have a vtable. It is safe to
// set canInitializeWithMemset=true for a union type object in practice.
// See https://codereview.chromium.org/1118993002/#msg5 for more details.
WTF_ALLOW_MOVE_AND_INIT_WITH_MEM_FUNCTIONS(blink::PasswordCredentialDataOrHTMLFormElement)

#endif  // THIRD_PARTY_BLINK_RENDERER_BINDINGS_MODULES_V8_PASSWORD_CREDENTIAL_DATA_OR_HTML_FORM_ELEMENT_H_
