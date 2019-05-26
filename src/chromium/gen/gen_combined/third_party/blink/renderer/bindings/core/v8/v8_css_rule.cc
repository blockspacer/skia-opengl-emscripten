// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated from the Jinja2 template
// third_party/blink/renderer/bindings/templates/interface.cc.tmpl
// by the script code_generator_v8.py.
// DO NOT MODIFY!

// clang-format off
#include "third_party/blink/renderer/bindings/core/v8/v8_css_rule.h"

#include <algorithm>

#include "base/memory/scoped_refptr.h"
#include "third_party/blink/renderer/bindings/core/v8/idl_types.h"
#include "third_party/blink/renderer/bindings/core/v8/native_value_traits_impl.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_css_rule.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_css_style_sheet.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_dom_configuration.h"
#include "third_party/blink/renderer/core/execution_context/execution_context.h"
#include "third_party/blink/renderer/platform/bindings/exception_messages.h"
#include "third_party/blink/renderer/platform/bindings/exception_state.h"
#include "third_party/blink/renderer/platform/bindings/runtime_call_stats.h"
#include "third_party/blink/renderer/platform/bindings/v8_object_constructor.h"
#include "third_party/blink/renderer/platform/bindings/v8_private_property.h"
#include "third_party/blink/renderer/platform/runtime_enabled_features.h"
#include "third_party/blink/renderer/platform/scheduler/public/cooperative_scheduling_manager.h"
#include "third_party/blink/renderer/platform/wtf/get_ptr.h"

namespace blink {

// Suppress warning: global constructors, because struct WrapperTypeInfo is trivial
// and does not depend on another global objects.
#if defined(COMPONENT_BUILD) && defined(WIN32) && defined(__clang__)
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wglobal-constructors"
#endif
const WrapperTypeInfo v8_css_rule_wrapper_type_info = {
    gin::kEmbedderBlink,
    V8CSSRule::DomTemplate,
    nullptr,
    "CSSRule",
    nullptr,
    WrapperTypeInfo::kWrapperTypeObjectPrototype,
    WrapperTypeInfo::kObjectClassId,
    WrapperTypeInfo::kNotInheritFromActiveScriptWrappable,
};
#if defined(COMPONENT_BUILD) && defined(WIN32) && defined(__clang__)
#pragma clang diagnostic pop
#endif

// This static member must be declared by DEFINE_WRAPPERTYPEINFO in CSSRule.h.
// For details, see the comment of DEFINE_WRAPPERTYPEINFO in
// platform/bindings/ScriptWrappable.h.
const WrapperTypeInfo& CSSRule::wrapper_type_info_ = v8_css_rule_wrapper_type_info;

// not [ActiveScriptWrappable]
static_assert(
    !std::is_base_of<ActiveScriptWrappableBase, CSSRule>::value,
    "CSSRule inherits from ActiveScriptWrappable<>, but is not specifying "
    "[ActiveScriptWrappable] extended attribute in the IDL file.  "
    "Be consistent.");
static_assert(
    std::is_same<decltype(&CSSRule::HasPendingActivity),
                 decltype(&ScriptWrappable::HasPendingActivity)>::value,
    "CSSRule is overriding hasPendingActivity(), but is not specifying "
    "[ActiveScriptWrappable] extended attribute in the IDL file.  "
    "Be consistent.");

namespace css_rule_v8_internal {

static void TypeAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  CSSRule* impl = V8CSSRule::ToImpl(holder);

  V8SetReturnValueUnsigned(info, impl->type());
}

static void CSSTextAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  CSSRule* impl = V8CSSRule::ToImpl(holder);

  V8SetReturnValueString(info, impl->cssText(), info.GetIsolate());
}

static void CSSTextAttributeSetter(
    v8::Local<v8::Value> v8_value, const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Isolate* isolate = info.GetIsolate();
  ALLOW_UNUSED_LOCAL(isolate);

  v8::Local<v8::Object> holder = info.Holder();
  ALLOW_UNUSED_LOCAL(holder);

  CSSRule* impl = V8CSSRule::ToImpl(holder);

  // Prepare the value to be set.
  V8StringResource<> cpp_value = v8_value;
  if (!cpp_value.Prepare())
    return;

  impl->setCSSText(cpp_value);
}

static void ParentRuleAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  CSSRule* impl = V8CSSRule::ToImpl(holder);

  CSSRule* cpp_value(WTF::GetPtr(impl->parentRule()));

  // Keep the wrapper object for the return value alive as long as |this|
  // object is alive in order to save creation time of the wrapper object.
  if (cpp_value && DOMDataStore::SetReturnValue(info.GetReturnValue(), cpp_value))
    return;
  v8::Local<v8::Value> v8_value(ToV8(cpp_value, holder, info.GetIsolate()));
  V8PrivateProperty::GetSymbol(
      info.GetIsolate(), "KeepAlive#CSSRule#parentRule")
      .Set(holder, v8_value);

  V8SetReturnValue(info, v8_value);
}

static void ParentStyleSheetAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  CSSRule* impl = V8CSSRule::ToImpl(holder);

  CSSStyleSheet* cpp_value(WTF::GetPtr(impl->parentStyleSheet()));

  // Keep the wrapper object for the return value alive as long as |this|
  // object is alive in order to save creation time of the wrapper object.
  if (cpp_value && DOMDataStore::SetReturnValue(info.GetReturnValue(), cpp_value))
    return;
  v8::Local<v8::Value> v8_value(ToV8(cpp_value, holder, info.GetIsolate()));
  V8PrivateProperty::GetSymbol(
      info.GetIsolate(), "KeepAlive#CSSRule#parentStyleSheet")
      .Set(holder, v8_value);

  V8SetReturnValue(info, v8_value);
}

}  // namespace css_rule_v8_internal

void V8CSSRule::TypeAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_CSSRule_type_Getter");

  css_rule_v8_internal::TypeAttributeGetter(info);
}

void V8CSSRule::CSSTextAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_CSSRule_cssText_Getter");

  css_rule_v8_internal::CSSTextAttributeGetter(info);
}

void V8CSSRule::CSSTextAttributeSetterCallback(
    const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_CSSRule_cssText_Setter");

  v8::Local<v8::Value> v8_value = info[0];

  css_rule_v8_internal::CSSTextAttributeSetter(v8_value, info);
}

void V8CSSRule::ParentRuleAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_CSSRule_parentRule_Getter");

  css_rule_v8_internal::ParentRuleAttributeGetter(info);
}

void V8CSSRule::ParentStyleSheetAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_CSSRule_parentStyleSheet_Getter");

  css_rule_v8_internal::ParentStyleSheetAttributeGetter(info);
}

static constexpr V8DOMConfiguration::AccessorConfiguration kV8CSSRuleAccessors[] = {
    { "type", V8CSSRule::TypeAttributeGetterCallback, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
    { "cssText", V8CSSRule::CSSTextAttributeGetterCallback, V8CSSRule::CSSTextAttributeSetterCallback, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
    { "parentRule", V8CSSRule::ParentRuleAttributeGetterCallback, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
    { "parentStyleSheet", V8CSSRule::ParentStyleSheetAttributeGetterCallback, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
};

static void InstallV8CSSRuleTemplate(
    v8::Isolate* isolate,
    const DOMWrapperWorld& world,
    v8::Local<v8::FunctionTemplate> interface_template) {
  // Initialize the interface object's template.
  V8DOMConfiguration::InitializeDOMInterfaceTemplate(isolate, interface_template, V8CSSRule::GetWrapperTypeInfo()->interface_name, v8::Local<v8::FunctionTemplate>(), V8CSSRule::kInternalFieldCount);

  v8::Local<v8::Signature> signature = v8::Signature::New(isolate, interface_template);
  ALLOW_UNUSED_LOCAL(signature);
  v8::Local<v8::ObjectTemplate> instance_template = interface_template->InstanceTemplate();
  ALLOW_UNUSED_LOCAL(instance_template);
  v8::Local<v8::ObjectTemplate> prototype_template = interface_template->PrototypeTemplate();
  ALLOW_UNUSED_LOCAL(prototype_template);

  // Register IDL constants, attributes and operations.
  {
    static constexpr V8DOMConfiguration::ConstantConfiguration kConstants[] = {
        {"STYLE_RULE", V8DOMConfiguration::kConstantTypeUnsignedShort, static_cast<int>(1)},
        {"CHARSET_RULE", V8DOMConfiguration::kConstantTypeUnsignedShort, static_cast<int>(2)},
        {"IMPORT_RULE", V8DOMConfiguration::kConstantTypeUnsignedShort, static_cast<int>(3)},
        {"MEDIA_RULE", V8DOMConfiguration::kConstantTypeUnsignedShort, static_cast<int>(4)},
        {"FONT_FACE_RULE", V8DOMConfiguration::kConstantTypeUnsignedShort, static_cast<int>(5)},
        {"PAGE_RULE", V8DOMConfiguration::kConstantTypeUnsignedShort, static_cast<int>(6)},
        {"NAMESPACE_RULE", V8DOMConfiguration::kConstantTypeUnsignedShort, static_cast<int>(10)},
        {"KEYFRAMES_RULE", V8DOMConfiguration::kConstantTypeUnsignedShort, static_cast<int>(7)},
        {"KEYFRAME_RULE", V8DOMConfiguration::kConstantTypeUnsignedShort, static_cast<int>(8)},
        {"SUPPORTS_RULE", V8DOMConfiguration::kConstantTypeUnsignedShort, static_cast<int>(12)},
    };
    V8DOMConfiguration::InstallConstants(
        isolate, interface_template, prototype_template,
        kConstants, base::size(kConstants));
  }
  static_assert(1 == CSSRule::kStyleRule, "the value of CSSRule_kStyleRule does not match with implementation");
  static_assert(2 == CSSRule::kCharsetRule, "the value of CSSRule_kCharsetRule does not match with implementation");
  static_assert(3 == CSSRule::kImportRule, "the value of CSSRule_kImportRule does not match with implementation");
  static_assert(4 == CSSRule::kMediaRule, "the value of CSSRule_kMediaRule does not match with implementation");
  static_assert(5 == CSSRule::kFontFaceRule, "the value of CSSRule_kFontFaceRule does not match with implementation");
  static_assert(6 == CSSRule::kPageRule, "the value of CSSRule_kPageRule does not match with implementation");
  static_assert(10 == CSSRule::kNamespaceRule, "the value of CSSRule_kNamespaceRule does not match with implementation");
  static_assert(7 == CSSRule::kKeyframesRule, "the value of CSSRule_kKeyframesRule does not match with implementation");
  static_assert(8 == CSSRule::kKeyframeRule, "the value of CSSRule_kKeyframeRule does not match with implementation");
  static_assert(12 == CSSRule::kSupportsRule, "the value of CSSRule_kSupportsRule does not match with implementation");
  static_assert(14 == CSSRule::kFontFeatureValuesRule, "the value of CSSRule_kFontFeatureValuesRule does not match with implementation");
  static_assert(15 == CSSRule::kViewportRule, "the value of CSSRule_kViewportRule does not match with implementation");
  V8DOMConfiguration::InstallAccessors(
      isolate, world, instance_template, prototype_template, interface_template,
      signature, kV8CSSRuleAccessors, base::size(kV8CSSRuleAccessors));

  // Custom signature

  V8CSSRule::InstallRuntimeEnabledFeaturesOnTemplate(
      isolate, world, interface_template);
}

void V8CSSRule::InstallRuntimeEnabledFeaturesOnTemplate(
    v8::Isolate* isolate,
    const DOMWrapperWorld& world,
    v8::Local<v8::FunctionTemplate> interface_template) {
  v8::Local<v8::Signature> signature = v8::Signature::New(isolate, interface_template);
  ALLOW_UNUSED_LOCAL(signature);
  v8::Local<v8::ObjectTemplate> instance_template = interface_template->InstanceTemplate();
  ALLOW_UNUSED_LOCAL(instance_template);
  v8::Local<v8::ObjectTemplate> prototype_template = interface_template->PrototypeTemplate();
  ALLOW_UNUSED_LOCAL(prototype_template);

  // Register IDL constants, attributes and operations.
  if (RuntimeEnabledFeatures::CSSFontFeatureValuesEnabled()) {
    static constexpr V8DOMConfiguration::ConstantConfiguration kConfigurations[] = {
        {"FONT_FEATURE_VALUES_RULE", V8DOMConfiguration::kConstantTypeUnsignedShort, static_cast<int>(14)},
    };
    V8DOMConfiguration::InstallConstants(
        isolate, interface_template, prototype_template,
        kConfigurations, base::size(kConfigurations));
  }
  if (RuntimeEnabledFeatures::CSSViewportEnabled()) {
    static constexpr V8DOMConfiguration::ConstantConfiguration kConfigurations[] = {
        {"VIEWPORT_RULE", V8DOMConfiguration::kConstantTypeUnsignedShort, static_cast<int>(15)},
    };
    V8DOMConfiguration::InstallConstants(
        isolate, interface_template, prototype_template,
        kConfigurations, base::size(kConfigurations));
  }

  // Custom signature
}

v8::Local<v8::FunctionTemplate> V8CSSRule::DomTemplate(
    v8::Isolate* isolate, const DOMWrapperWorld& world) {
  return V8DOMConfiguration::DomClassTemplate(
      isolate, world, const_cast<WrapperTypeInfo*>(V8CSSRule::GetWrapperTypeInfo()),
      InstallV8CSSRuleTemplate);
}

bool V8CSSRule::HasInstance(v8::Local<v8::Value> v8_value, v8::Isolate* isolate) {
  return V8PerIsolateData::From(isolate)->HasInstance(V8CSSRule::GetWrapperTypeInfo(), v8_value);
}

v8::Local<v8::Object> V8CSSRule::FindInstanceInPrototypeChain(
    v8::Local<v8::Value> v8_value, v8::Isolate* isolate) {
  return V8PerIsolateData::From(isolate)->FindInstanceInPrototypeChain(
      V8CSSRule::GetWrapperTypeInfo(), v8_value);
}

CSSRule* V8CSSRule::ToImplWithTypeCheck(
    v8::Isolate* isolate, v8::Local<v8::Value> value) {
  return HasInstance(value, isolate) ? ToImpl(v8::Local<v8::Object>::Cast(value)) : nullptr;
}

CSSRule* NativeValueTraits<CSSRule>::NativeValue(
    v8::Isolate* isolate, v8::Local<v8::Value> value, ExceptionState& exception_state) {
  CSSRule* native_value = V8CSSRule::ToImplWithTypeCheck(isolate, value);
  if (!native_value) {
    exception_state.ThrowTypeError(ExceptionMessages::FailedToConvertJSValue(
        "CSSRule"));
  }
  return native_value;
}

}  // namespace blink
