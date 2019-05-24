// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated from the Jinja2 template
// third_party/blink/renderer/bindings/templates/interface.h.tmpl
// by the script code_generator_v8.py.
// DO NOT MODIFY!

// clang-format off
#ifndef THIRD_PARTY_BLINK_RENDERER_BINDINGS_CORE_V8_V8_CSS_KEYFRAMES_RULE_H_
#define THIRD_PARTY_BLINK_RENDERER_BINDINGS_CORE_V8_V8_CSS_KEYFRAMES_RULE_H_

#include "third_party/blink/renderer/bindings/core/v8/generated_code_helper.h"
#include "third_party/blink/renderer/bindings/core/v8/native_value_traits.h"
#include "third_party/blink/renderer/bindings/core/v8/to_v8_for_core.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_binding_for_core.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_css_rule.h"
#include "third_party/blink/renderer/core/core_export.h"
#include "third_party/blink/renderer/core/css/css_keyframes_rule.h"
#include "third_party/blink/renderer/platform/bindings/script_wrappable.h"
#include "third_party/blink/renderer/platform/bindings/v8_dom_wrapper.h"
#include "third_party/blink/renderer/platform/bindings/wrapper_type_info.h"
#include "third_party/blink/renderer/platform/heap/handle.h"

namespace blink {

CORE_EXPORT extern const WrapperTypeInfo v8_css_keyframes_rule_wrapper_type_info;

class V8CSSKeyframesRule {
  STATIC_ONLY(V8CSSKeyframesRule);
 public:
  CORE_EXPORT static bool HasInstance(v8::Local<v8::Value>, v8::Isolate*);
  static v8::Local<v8::Object> FindInstanceInPrototypeChain(v8::Local<v8::Value>, v8::Isolate*);
  CORE_EXPORT static v8::Local<v8::FunctionTemplate> DomTemplate(v8::Isolate*, const DOMWrapperWorld&);
  static CSSKeyframesRule* ToImpl(v8::Local<v8::Object> object) {
    return ToScriptWrappable(object)->ToImpl<CSSKeyframesRule>();
  }
  CORE_EXPORT static CSSKeyframesRule* ToImplWithTypeCheck(v8::Isolate*, v8::Local<v8::Value>);

  CORE_EXPORT static constexpr const WrapperTypeInfo* GetWrapperTypeInfo() {
    return &v8_css_keyframes_rule_wrapper_type_info;
  }

  static constexpr int kInternalFieldCount = kV8DefaultWrapperInternalFieldCount;

  // Callback functions

  CORE_EXPORT static void NameAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  CORE_EXPORT static void NameAttributeSetterCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  CORE_EXPORT static void CSSRulesAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>&);

  CORE_EXPORT static void AppendRuleMethodCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  CORE_EXPORT static void DeleteRuleMethodCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  CORE_EXPORT static void FindRuleMethodCallback(const v8::FunctionCallbackInfo<v8::Value>&);

  CORE_EXPORT static void IndexedPropertyGetterCallback(uint32_t index, const v8::PropertyCallbackInfo<v8::Value>&);
  CORE_EXPORT static void IndexedPropertySetterCallback(uint32_t index, v8::Local<v8::Value>, const v8::PropertyCallbackInfo<v8::Value>&);
  CORE_EXPORT static void IndexedPropertyDescriptorCallback(uint32_t index, const v8::PropertyCallbackInfo<v8::Value>&);
  CORE_EXPORT static void IndexedPropertyDefinerCallback(uint32_t index, const v8::PropertyDescriptor&, const v8::PropertyCallbackInfo<v8::Value>&);

  static void InstallRuntimeEnabledFeaturesOnTemplate(
      v8::Isolate*,
      const DOMWrapperWorld&,
      v8::Local<v8::FunctionTemplate> interface_template);
};

template <>
struct NativeValueTraits<CSSKeyframesRule> : public NativeValueTraitsBase<CSSKeyframesRule> {
  CORE_EXPORT static CSSKeyframesRule* NativeValue(v8::Isolate*, v8::Local<v8::Value>, ExceptionState&);
  CORE_EXPORT static CSSKeyframesRule* NullValue() { return nullptr; }
};

template <>
struct V8TypeOf<CSSKeyframesRule> {
  typedef V8CSSKeyframesRule Type;
};

}  // namespace blink

#endif  // THIRD_PARTY_BLINK_RENDERER_BINDINGS_CORE_V8_V8_CSS_KEYFRAMES_RULE_H_
