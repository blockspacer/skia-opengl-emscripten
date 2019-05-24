// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated from the Jinja2 template
// third_party/blink/renderer/bindings/templates/interface.cc.tmpl
// by the script code_generator_v8.py.
// DO NOT MODIFY!

// clang-format off
#include "third_party/blink/renderer/bindings/core/v8/v8_css_style_sheet.h"

#include <algorithm>

#include "base/memory/scoped_refptr.h"
#include "third_party/blink/renderer/bindings/core/v8/idl_types.h"
#include "third_party/blink/renderer/bindings/core/v8/native_value_traits_impl.h"
#include "third_party/blink/renderer/bindings/core/v8/script_promise.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_css_rule.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_css_rule_list.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_css_style_sheet_init.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_dom_configuration.h"
#include "third_party/blink/renderer/core/dom/document.h"
#include "third_party/blink/renderer/core/execution_context/execution_context.h"
#include "third_party/blink/renderer/core/frame/local_dom_window.h"
#include "third_party/blink/renderer/core/frame/use_counter.h"
#include "third_party/blink/renderer/platform/bindings/exception_messages.h"
#include "third_party/blink/renderer/platform/bindings/exception_state.h"
#include "third_party/blink/renderer/platform/bindings/runtime_call_stats.h"
#include "third_party/blink/renderer/platform/bindings/script_state.h"
#include "third_party/blink/renderer/platform/bindings/v8_object_constructor.h"
#include "third_party/blink/renderer/platform/bindings/v8_private_property.h"
#include "third_party/blink/renderer/platform/scheduler/public/cooperative_scheduling_manager.h"
#include "third_party/blink/renderer/platform/wtf/get_ptr.h"

namespace blink {

// Suppress warning: global constructors, because struct WrapperTypeInfo is trivial
// and does not depend on another global objects.
#if defined(COMPONENT_BUILD) && defined(WIN32) && defined(__clang__)
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wglobal-constructors"
#endif
const WrapperTypeInfo v8_css_style_sheet_wrapper_type_info = {
    gin::kEmbedderBlink,
    V8CSSStyleSheet::DomTemplate,
    nullptr,
    "CSSStyleSheet",
    V8StyleSheet::GetWrapperTypeInfo(),
    WrapperTypeInfo::kWrapperTypeObjectPrototype,
    WrapperTypeInfo::kObjectClassId,
    WrapperTypeInfo::kNotInheritFromActiveScriptWrappable,
};
#if defined(COMPONENT_BUILD) && defined(WIN32) && defined(__clang__)
#pragma clang diagnostic pop
#endif

// This static member must be declared by DEFINE_WRAPPERTYPEINFO in CSSStyleSheet.h.
// For details, see the comment of DEFINE_WRAPPERTYPEINFO in
// platform/bindings/ScriptWrappable.h.
const WrapperTypeInfo& CSSStyleSheet::wrapper_type_info_ = v8_css_style_sheet_wrapper_type_info;

// not [ActiveScriptWrappable]
static_assert(
    !std::is_base_of<ActiveScriptWrappableBase, CSSStyleSheet>::value,
    "CSSStyleSheet inherits from ActiveScriptWrappable<>, but is not specifying "
    "[ActiveScriptWrappable] extended attribute in the IDL file.  "
    "Be consistent.");
static_assert(
    std::is_same<decltype(&CSSStyleSheet::HasPendingActivity),
                 decltype(&ScriptWrappable::HasPendingActivity)>::value,
    "CSSStyleSheet is overriding hasPendingActivity(), but is not specifying "
    "[ActiveScriptWrappable] extended attribute in the IDL file.  "
    "Be consistent.");

namespace css_style_sheet_v8_internal {

static void OwnerRuleAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  CSSStyleSheet* impl = V8CSSStyleSheet::ToImpl(holder);

  CSSRule* cpp_value(WTF::GetPtr(impl->ownerRule()));

  // Keep the wrapper object for the return value alive as long as |this|
  // object is alive in order to save creation time of the wrapper object.
  if (cpp_value && DOMDataStore::SetReturnValue(info.GetReturnValue(), cpp_value))
    return;
  v8::Local<v8::Value> v8_value(ToV8(cpp_value, holder, info.GetIsolate()));
  V8PrivateProperty::GetSymbol(
      info.GetIsolate(), "KeepAlive#CSSStyleSheet#ownerRule")
      .Set(holder, v8_value);

  V8SetReturnValue(info, v8_value);
}

static void CSSRulesAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  CSSStyleSheet* impl = V8CSSStyleSheet::ToImpl(holder);

  ExceptionState exception_state(info.GetIsolate(), ExceptionState::kGetterContext, "CSSStyleSheet", "cssRules");

  CSSRuleList* cpp_value(impl->cssRules(exception_state));

  if (UNLIKELY(exception_state.HadException()))
    return;

  // Keep the wrapper object for the return value alive as long as |this|
  // object is alive in order to save creation time of the wrapper object.
  if (cpp_value && DOMDataStore::SetReturnValue(info.GetReturnValue(), cpp_value))
    return;
  v8::Local<v8::Value> v8_value(ToV8(cpp_value, holder, info.GetIsolate()));
  V8PrivateProperty::GetSymbol(
      info.GetIsolate(), "KeepAlive#CSSStyleSheet#cssRules")
      .Set(holder, v8_value);

  V8SetReturnValue(info, v8_value);
}

static void RulesAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  CSSStyleSheet* impl = V8CSSStyleSheet::ToImpl(holder);

  ExceptionState exception_state(info.GetIsolate(), ExceptionState::kGetterContext, "CSSStyleSheet", "rules");

  CSSRuleList* cpp_value(impl->rules(exception_state));

  if (UNLIKELY(exception_state.HadException()))
    return;

  // Keep the wrapper object for the return value alive as long as |this|
  // object is alive in order to save creation time of the wrapper object.
  if (cpp_value && DOMDataStore::SetReturnValue(info.GetReturnValue(), cpp_value))
    return;
  v8::Local<v8::Value> v8_value(ToV8(cpp_value, holder, info.GetIsolate()));
  V8PrivateProperty::GetSymbol(
      info.GetIsolate(), "KeepAlive#CSSStyleSheet#rules")
      .Set(holder, v8_value);

  V8SetReturnValue(info, v8_value);
}

static void InsertRuleMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exception_state(info.GetIsolate(), ExceptionState::kExecutionContext, "CSSStyleSheet", "insertRule");

  CSSStyleSheet* impl = V8CSSStyleSheet::ToImpl(info.Holder());

  if (UNLIKELY(info.Length() < 1)) {
    exception_state.ThrowTypeError(ExceptionMessages::NotEnoughArguments(1, info.Length()));
    return;
  }

  V8StringResource<> rule;
  uint32_t index;
  rule = info[0];
  if (!rule.Prepare())
    return;

  if (!info[1]->IsUndefined()) {
    index = NativeValueTraits<IDLUnsignedLong>::NativeValue(info.GetIsolate(), info[1], exception_state);
    if (exception_state.HadException())
      return;
  } else {
    index = 0u;
  }

  uint32_t result = impl->insertRule(rule, index, exception_state);
  if (exception_state.HadException()) {
    return;
  }
  V8SetReturnValueUnsigned(info, result);
}

static void DeleteRuleMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exception_state(info.GetIsolate(), ExceptionState::kExecutionContext, "CSSStyleSheet", "deleteRule");

  CSSStyleSheet* impl = V8CSSStyleSheet::ToImpl(info.Holder());

  if (UNLIKELY(info.Length() < 1)) {
    exception_state.ThrowTypeError(ExceptionMessages::NotEnoughArguments(1, info.Length()));
    return;
  }

  uint32_t index;
  index = NativeValueTraits<IDLUnsignedLong>::NativeValue(info.GetIsolate(), info[0], exception_state);
  if (exception_state.HadException())
    return;

  impl->deleteRule(index, exception_state);
  if (exception_state.HadException()) {
    return;
  }
}

static void ReplaceMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exception_state(info.GetIsolate(), ExceptionState::kExecutionContext, "CSSStyleSheet", "replace");
  ExceptionToRejectPromiseScope reject_promise_scope(info, exception_state);

  // V8DOMConfiguration::kDoNotCheckHolder
  // Make sure that info.Holder() really points to an instance of the type.
  if (!V8CSSStyleSheet::HasInstance(info.Holder(), info.GetIsolate())) {
    exception_state.ThrowTypeError("Illegal invocation");
    return;
  }
  CSSStyleSheet* impl = V8CSSStyleSheet::ToImpl(info.Holder());

  ScriptState* script_state = ScriptState::ForRelevantRealm(info);

  if (UNLIKELY(info.Length() < 1)) {
    exception_state.ThrowTypeError(ExceptionMessages::NotEnoughArguments(1, info.Length()));
    return;
  }

  V8StringResource<> text;
  text = info[0];
  if (!text.Prepare(exception_state))
    return;

  ScriptPromise result = impl->replace(script_state, text, exception_state);
  if (exception_state.HadException()) {
    return;
  }
  V8SetReturnValue(info, result.V8Value());
}

static void ReplaceSyncMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exception_state(info.GetIsolate(), ExceptionState::kExecutionContext, "CSSStyleSheet", "replaceSync");

  CSSStyleSheet* impl = V8CSSStyleSheet::ToImpl(info.Holder());

  if (UNLIKELY(info.Length() < 1)) {
    exception_state.ThrowTypeError(ExceptionMessages::NotEnoughArguments(1, info.Length()));
    return;
  }

  V8StringResource<> text;
  text = info[0];
  if (!text.Prepare())
    return;

  impl->replaceSync(text, exception_state);
  if (exception_state.HadException()) {
    return;
  }
}

static void AddRuleMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exception_state(info.GetIsolate(), ExceptionState::kExecutionContext, "CSSStyleSheet", "addRule");

  CSSStyleSheet* impl = V8CSSStyleSheet::ToImpl(info.Holder());

  V8StringResource<> selector;
  V8StringResource<> style;
  uint32_t index;
  int num_args_passed = info.Length();
  while (num_args_passed > 0) {
    if (!info[num_args_passed - 1]->IsUndefined())
      break;
    --num_args_passed;
  }
  selector = info[0];
  if (!selector.Prepare())
    return;

  style = info[1];
  if (!style.Prepare())
    return;

  if (UNLIKELY(num_args_passed <= 2)) {
    int32_t result = impl->addRule(selector, style, exception_state);
    if (exception_state.HadException()) {
      return;
    }
    V8SetReturnValueInt(info, result);
    return;
  }
  index = NativeValueTraits<IDLUnsignedLong>::NativeValue(info.GetIsolate(), info[2], exception_state);
  if (exception_state.HadException())
    return;

  int32_t result = impl->addRule(selector, style, index, exception_state);
  if (exception_state.HadException()) {
    return;
  }
  V8SetReturnValueInt(info, result);
}

static void RemoveRuleMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exception_state(info.GetIsolate(), ExceptionState::kExecutionContext, "CSSStyleSheet", "removeRule");

  CSSStyleSheet* impl = V8CSSStyleSheet::ToImpl(info.Holder());

  uint32_t index;
  index = NativeValueTraits<IDLUnsignedLong>::NativeValue(info.GetIsolate(), info[0], exception_state);
  if (exception_state.HadException())
    return;

  impl->removeRule(index, exception_state);
  if (exception_state.HadException()) {
    return;
  }
}

static void Constructor(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_CSSStyleSheet_ConstructorCallback");

  ExceptionState exception_state(info.GetIsolate(), ExceptionState::kConstructionContext, "CSSStyleSheet");

  CSSStyleSheetInit* options;
  if (!info[0]->IsNullOrUndefined() && !info[0]->IsObject()) {
    exception_state.ThrowTypeError("parameter 1 ('options') is not an object.");
    return;
  }
  options = NativeValueTraits<CSSStyleSheetInit>::NativeValue(info.GetIsolate(), info[0], exception_state);
  if (exception_state.HadException())
    return;

  Document& document = *To<Document>(ToExecutionContext(
      info.NewTarget().As<v8::Object>()->CreationContext()));
  CSSStyleSheet* impl = CSSStyleSheet::Create(document, options, exception_state);
  if (exception_state.HadException()) {
    return;
  }
  v8::Local<v8::Object> wrapper = info.Holder();
  wrapper = impl->AssociateWithWrapper(info.GetIsolate(), V8CSSStyleSheet::GetWrapperTypeInfo(), wrapper);
  V8SetReturnValue(info, wrapper);
}

CORE_EXPORT void ConstructorCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_CSSStyleSheet_Constructor");

  if (!info.IsConstructCall()) {
    V8ThrowException::ThrowTypeError(
        info.GetIsolate(),
        ExceptionMessages::ConstructorNotCallableAsFunction("CSSStyleSheet"));
    return;
  }

  if (ConstructorMode::Current(info.GetIsolate()) == ConstructorMode::kWrapExistingObject) {
    V8SetReturnValue(info, info.Holder());
    return;
  }

  css_style_sheet_v8_internal::Constructor(info);
}

}  // namespace css_style_sheet_v8_internal

void V8CSSStyleSheet::OwnerRuleAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_CSSStyleSheet_ownerRule_Getter");

  css_style_sheet_v8_internal::OwnerRuleAttributeGetter(info);
}

void V8CSSStyleSheet::CSSRulesAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_CSSStyleSheet_cssRules_Getter");

  css_style_sheet_v8_internal::CSSRulesAttributeGetter(info);
}

void V8CSSStyleSheet::RulesAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_CSSStyleSheet_rules_Getter");

  ExecutionContext* execution_context_for_measurement = CurrentExecutionContext(info.GetIsolate());
  UseCounter::Count(execution_context_for_measurement, WebFeature::kCSSStyleSheetRules);

  css_style_sheet_v8_internal::RulesAttributeGetter(info);
}

void V8CSSStyleSheet::InsertRuleMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_CSSStyleSheet_insertRule");

  css_style_sheet_v8_internal::InsertRuleMethod(info);
}

void V8CSSStyleSheet::DeleteRuleMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_CSSStyleSheet_deleteRule");

  css_style_sheet_v8_internal::DeleteRuleMethod(info);
}

void V8CSSStyleSheet::ReplaceMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_CSSStyleSheet_replace");

  ExecutionContext* execution_context_for_measurement = CurrentExecutionContext(info.GetIsolate());
  UseCounter::Count(execution_context_for_measurement, WebFeature::kCSSStyleSheetReplace);
  css_style_sheet_v8_internal::ReplaceMethod(info);
}

void V8CSSStyleSheet::ReplaceSyncMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_CSSStyleSheet_replaceSync");

  ExecutionContext* execution_context_for_measurement = CurrentExecutionContext(info.GetIsolate());
  UseCounter::Count(execution_context_for_measurement, WebFeature::kCSSStyleSheetReplaceSync);
  css_style_sheet_v8_internal::ReplaceSyncMethod(info);
}

void V8CSSStyleSheet::AddRuleMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_CSSStyleSheet_addRule");

  ExecutionContext* execution_context_for_measurement = CurrentExecutionContext(info.GetIsolate());
  UseCounter::Count(execution_context_for_measurement, WebFeature::kCSSStyleSheetAddRule);
  css_style_sheet_v8_internal::AddRuleMethod(info);
}

void V8CSSStyleSheet::RemoveRuleMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_CSSStyleSheet_removeRule");

  ExecutionContext* execution_context_for_measurement = CurrentExecutionContext(info.GetIsolate());
  UseCounter::Count(execution_context_for_measurement, WebFeature::kCSSStyleSheetRemoveRule);
  css_style_sheet_v8_internal::RemoveRuleMethod(info);
}

static constexpr V8DOMConfiguration::AccessorConfiguration kV8CSSStyleSheetAccessors[] = {
    { "ownerRule", V8CSSStyleSheet::OwnerRuleAttributeGetterCallback, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
    { "cssRules", V8CSSStyleSheet::CSSRulesAttributeGetterCallback, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
    { "rules", V8CSSStyleSheet::RulesAttributeGetterCallback, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
};

static constexpr V8DOMConfiguration::MethodConfiguration kV8CSSStyleSheetMethods[] = {
    {"insertRule", V8CSSStyleSheet::InsertRuleMethodCallback, 1, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"deleteRule", V8CSSStyleSheet::DeleteRuleMethodCallback, 1, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"replace", V8CSSStyleSheet::ReplaceMethodCallback, 1, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kDoNotCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"replaceSync", V8CSSStyleSheet::ReplaceSyncMethodCallback, 1, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"addRule", V8CSSStyleSheet::AddRuleMethodCallback, 0, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"removeRule", V8CSSStyleSheet::RemoveRuleMethodCallback, 0, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
};

static void InstallV8CSSStyleSheetTemplate(
    v8::Isolate* isolate,
    const DOMWrapperWorld& world,
    v8::Local<v8::FunctionTemplate> interface_template) {
  // Initialize the interface object's template.
  V8DOMConfiguration::InitializeDOMInterfaceTemplate(isolate, interface_template, V8CSSStyleSheet::GetWrapperTypeInfo()->interface_name, V8StyleSheet::DomTemplate(isolate, world), V8CSSStyleSheet::kInternalFieldCount);
  interface_template->SetCallHandler(css_style_sheet_v8_internal::ConstructorCallback);
  interface_template->SetLength(0);

  v8::Local<v8::Signature> signature = v8::Signature::New(isolate, interface_template);
  ALLOW_UNUSED_LOCAL(signature);
  v8::Local<v8::ObjectTemplate> instance_template = interface_template->InstanceTemplate();
  ALLOW_UNUSED_LOCAL(instance_template);
  v8::Local<v8::ObjectTemplate> prototype_template = interface_template->PrototypeTemplate();
  ALLOW_UNUSED_LOCAL(prototype_template);

  // Register IDL constants, attributes and operations.
  V8DOMConfiguration::InstallAccessors(
      isolate, world, instance_template, prototype_template, interface_template,
      signature, kV8CSSStyleSheetAccessors, base::size(kV8CSSStyleSheetAccessors));
  V8DOMConfiguration::InstallMethods(
      isolate, world, instance_template, prototype_template, interface_template,
      signature, kV8CSSStyleSheetMethods, base::size(kV8CSSStyleSheetMethods));

  // Custom signature

  V8CSSStyleSheet::InstallRuntimeEnabledFeaturesOnTemplate(
      isolate, world, interface_template);
}

void V8CSSStyleSheet::InstallRuntimeEnabledFeaturesOnTemplate(
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

  // Custom signature
}

v8::Local<v8::FunctionTemplate> V8CSSStyleSheet::DomTemplate(
    v8::Isolate* isolate, const DOMWrapperWorld& world) {
  return V8DOMConfiguration::DomClassTemplate(
      isolate, world, const_cast<WrapperTypeInfo*>(V8CSSStyleSheet::GetWrapperTypeInfo()),
      InstallV8CSSStyleSheetTemplate);
}

bool V8CSSStyleSheet::HasInstance(v8::Local<v8::Value> v8_value, v8::Isolate* isolate) {
  return V8PerIsolateData::From(isolate)->HasInstance(V8CSSStyleSheet::GetWrapperTypeInfo(), v8_value);
}

v8::Local<v8::Object> V8CSSStyleSheet::FindInstanceInPrototypeChain(
    v8::Local<v8::Value> v8_value, v8::Isolate* isolate) {
  return V8PerIsolateData::From(isolate)->FindInstanceInPrototypeChain(
      V8CSSStyleSheet::GetWrapperTypeInfo(), v8_value);
}

CSSStyleSheet* V8CSSStyleSheet::ToImplWithTypeCheck(
    v8::Isolate* isolate, v8::Local<v8::Value> value) {
  return HasInstance(value, isolate) ? ToImpl(v8::Local<v8::Object>::Cast(value)) : nullptr;
}

CSSStyleSheet* NativeValueTraits<CSSStyleSheet>::NativeValue(
    v8::Isolate* isolate, v8::Local<v8::Value> value, ExceptionState& exception_state) {
  CSSStyleSheet* native_value = V8CSSStyleSheet::ToImplWithTypeCheck(isolate, value);
  if (!native_value) {
    exception_state.ThrowTypeError(ExceptionMessages::FailedToConvertJSValue(
        "CSSStyleSheet"));
  }
  return native_value;
}

}  // namespace blink
