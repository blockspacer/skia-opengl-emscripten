// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated from the Jinja2 template
// third_party/blink/renderer/bindings/templates/interface.h.tmpl
// by the script code_generator_v8.py.
// DO NOT MODIFY!

// clang-format off
#ifndef THIRD_PARTY_BLINK_RENDERER_BINDINGS_CORE_V8_V8_HTML_EMBED_ELEMENT_H_
#define THIRD_PARTY_BLINK_RENDERER_BINDINGS_CORE_V8_V8_HTML_EMBED_ELEMENT_H_

#include "third_party/blink/renderer/bindings/core/v8/generated_code_helper.h"
#include "third_party/blink/renderer/bindings/core/v8/native_value_traits.h"
#include "third_party/blink/renderer/bindings/core/v8/string_or_trusted_script_url.h"
#include "third_party/blink/renderer/bindings/core/v8/to_v8_for_core.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_binding_for_core.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_html_element.h"
#include "third_party/blink/renderer/core/core_export.h"
#include "third_party/blink/renderer/core/html/html_embed_element.h"
#include "third_party/blink/renderer/platform/bindings/script_wrappable.h"
#include "third_party/blink/renderer/platform/bindings/v8_dom_wrapper.h"
#include "third_party/blink/renderer/platform/bindings/wrapper_type_info.h"
#include "third_party/blink/renderer/platform/heap/handle.h"

namespace blink {

CORE_EXPORT extern const WrapperTypeInfo v8_html_embed_element_wrapper_type_info;

class V8HTMLEmbedElement {
  STATIC_ONLY(V8HTMLEmbedElement);
 public:
  CORE_EXPORT static bool HasInstance(v8::Local<v8::Value>, v8::Isolate*);
  static v8::Local<v8::Object> FindInstanceInPrototypeChain(v8::Local<v8::Value>, v8::Isolate*);
  CORE_EXPORT static v8::Local<v8::FunctionTemplate> DomTemplate(v8::Isolate*, const DOMWrapperWorld&);
  static HTMLEmbedElement* ToImpl(v8::Local<v8::Object> object) {
    return ToScriptWrappable(object)->ToImpl<HTMLEmbedElement>();
  }
  CORE_EXPORT static HTMLEmbedElement* ToImplWithTypeCheck(v8::Isolate*, v8::Local<v8::Value>);

  CORE_EXPORT static constexpr const WrapperTypeInfo* GetWrapperTypeInfo() {
    return &v8_html_embed_element_wrapper_type_info;
  }

  static void NamedPropertyGetterCustom(const AtomicString&, const v8::PropertyCallbackInfo<v8::Value>&);
  static void NamedPropertySetterCustom(const AtomicString&, v8::Local<v8::Value>, const v8::PropertyCallbackInfo<v8::Value>&);
  static constexpr int kInternalFieldCount = kV8DefaultWrapperInternalFieldCount;

  // Callback functions

  CORE_EXPORT static void SrcAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  CORE_EXPORT static void SrcAttributeSetterCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  CORE_EXPORT static void TypeAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  CORE_EXPORT static void TypeAttributeSetterCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  CORE_EXPORT static void WidthAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  CORE_EXPORT static void WidthAttributeSetterCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  CORE_EXPORT static void HeightAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  CORE_EXPORT static void HeightAttributeSetterCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  CORE_EXPORT static void AlignAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  CORE_EXPORT static void AlignAttributeSetterCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  CORE_EXPORT static void NameAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  CORE_EXPORT static void NameAttributeSetterCallback(const v8::FunctionCallbackInfo<v8::Value>&);

  CORE_EXPORT static void GetSVGDocumentMethodCallback(const v8::FunctionCallbackInfo<v8::Value>&);

  CORE_EXPORT static void NamedPropertyGetterCallback(v8::Local<v8::Name>, const v8::PropertyCallbackInfo<v8::Value>&);
  CORE_EXPORT static void NamedPropertySetterCallback(v8::Local<v8::Name>, v8::Local<v8::Value>, const v8::PropertyCallbackInfo<v8::Value>&);
  CORE_EXPORT static void IndexedPropertyGetterCallback(uint32_t index, const v8::PropertyCallbackInfo<v8::Value>&);
  CORE_EXPORT static void IndexedPropertySetterCallback(uint32_t index, v8::Local<v8::Value>, const v8::PropertyCallbackInfo<v8::Value>&);
  CORE_EXPORT static void IndexedPropertyDescriptorCallback(uint32_t index, const v8::PropertyCallbackInfo<v8::Value>&);

  static void InstallRuntimeEnabledFeaturesOnTemplate(
      v8::Isolate*,
      const DOMWrapperWorld&,
      v8::Local<v8::FunctionTemplate> interface_template);
};

template <>
struct NativeValueTraits<HTMLEmbedElement> : public NativeValueTraitsBase<HTMLEmbedElement> {
  CORE_EXPORT static HTMLEmbedElement* NativeValue(v8::Isolate*, v8::Local<v8::Value>, ExceptionState&);
  CORE_EXPORT static HTMLEmbedElement* NullValue() { return nullptr; }
};

template <>
struct V8TypeOf<HTMLEmbedElement> {
  typedef V8HTMLEmbedElement Type;
};

}  // namespace blink

#endif  // THIRD_PARTY_BLINK_RENDERER_BINDINGS_CORE_V8_V8_HTML_EMBED_ELEMENT_H_
