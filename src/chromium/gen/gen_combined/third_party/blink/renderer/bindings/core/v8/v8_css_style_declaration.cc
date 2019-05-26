// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated from the Jinja2 template
// third_party/blink/renderer/bindings/templates/interface.cc.tmpl
// by the script code_generator_v8.py.
// DO NOT MODIFY!

// clang-format off
#include "third_party/blink/renderer/bindings/core/v8/v8_css_style_declaration.h"

#include <algorithm>

#include "base/memory/scoped_refptr.h"
#include "third_party/blink/renderer/bindings/core/v8/idl_types.h"
#include "third_party/blink/renderer/bindings/core/v8/native_value_traits_impl.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_css_rule.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_dom_configuration.h"
#include "third_party/blink/renderer/core/execution_context/execution_context.h"
#include "third_party/blink/renderer/core/html/custom/ce_reactions_scope.h"
#include "third_party/blink/renderer/platform/bindings/exception_messages.h"
#include "third_party/blink/renderer/platform/bindings/exception_state.h"
#include "third_party/blink/renderer/platform/bindings/runtime_call_stats.h"
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
const WrapperTypeInfo v8_css_style_declaration_wrapper_type_info = {
    gin::kEmbedderBlink,
    V8CSSStyleDeclaration::DomTemplate,
    nullptr,
    "CSSStyleDeclaration",
    nullptr,
    WrapperTypeInfo::kWrapperTypeObjectPrototype,
    WrapperTypeInfo::kObjectClassId,
    WrapperTypeInfo::kNotInheritFromActiveScriptWrappable,
};
#if defined(COMPONENT_BUILD) && defined(WIN32) && defined(__clang__)
#pragma clang diagnostic pop
#endif

// This static member must be declared by DEFINE_WRAPPERTYPEINFO in CSSStyleDeclaration.h.
// For details, see the comment of DEFINE_WRAPPERTYPEINFO in
// platform/bindings/ScriptWrappable.h.
const WrapperTypeInfo& CSSStyleDeclaration::wrapper_type_info_ = v8_css_style_declaration_wrapper_type_info;

// not [ActiveScriptWrappable]
static_assert(
    !std::is_base_of<ActiveScriptWrappableBase, CSSStyleDeclaration>::value,
    "CSSStyleDeclaration inherits from ActiveScriptWrappable<>, but is not specifying "
    "[ActiveScriptWrappable] extended attribute in the IDL file.  "
    "Be consistent.");
static_assert(
    std::is_same<decltype(&CSSStyleDeclaration::HasPendingActivity),
                 decltype(&ScriptWrappable::HasPendingActivity)>::value,
    "CSSStyleDeclaration is overriding hasPendingActivity(), but is not specifying "
    "[ActiveScriptWrappable] extended attribute in the IDL file.  "
    "Be consistent.");

namespace css_style_declaration_v8_internal {

static void CSSTextAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  CSSStyleDeclaration* impl = V8CSSStyleDeclaration::ToImpl(holder);

  V8SetReturnValueString(info, impl->cssText(), info.GetIsolate());
}

static void CSSTextAttributeSetter(
    v8::Local<v8::Value> v8_value, const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Isolate* isolate = info.GetIsolate();
  ALLOW_UNUSED_LOCAL(isolate);

  v8::Local<v8::Object> holder = info.Holder();
  ALLOW_UNUSED_LOCAL(holder);

  CSSStyleDeclaration* impl = V8CSSStyleDeclaration::ToImpl(holder);

  ExceptionState exception_state(isolate, ExceptionState::kSetterContext, "CSSStyleDeclaration", "cssText");
  CEReactionsScope ce_reactions_scope;

  // Prepare the value to be set.
  V8StringResource<> cpp_value = v8_value;
  if (!cpp_value.Prepare())
    return;

  ExecutionContext* execution_context = ExecutionContext::ForRelevantRealm(info);

  impl->setCSSText(execution_context, cpp_value, exception_state);
}

static void LengthAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  CSSStyleDeclaration* impl = V8CSSStyleDeclaration::ToImpl(holder);

  V8SetReturnValueUnsigned(info, impl->length());
}

static void ParentRuleAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  CSSStyleDeclaration* impl = V8CSSStyleDeclaration::ToImpl(holder);

  CSSRule* cpp_value(WTF::GetPtr(impl->parentRule()));

  // Keep the wrapper object for the return value alive as long as |this|
  // object is alive in order to save creation time of the wrapper object.
  if (cpp_value && DOMDataStore::SetReturnValue(info.GetReturnValue(), cpp_value))
    return;
  v8::Local<v8::Value> v8_value(ToV8(cpp_value, holder, info.GetIsolate()));
  V8PrivateProperty::GetSymbol(
      info.GetIsolate(), "KeepAlive#CSSStyleDeclaration#parentRule")
      .Set(holder, v8_value);

  V8SetReturnValue(info, v8_value);
}

static void CSSFloatAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  CSSStyleDeclaration* impl = V8CSSStyleDeclaration::ToImpl(holder);

  V8SetReturnValueString(info, impl->cssFloat(), info.GetIsolate());
}

static void CSSFloatAttributeSetter(
    v8::Local<v8::Value> v8_value, const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Isolate* isolate = info.GetIsolate();
  ALLOW_UNUSED_LOCAL(isolate);

  v8::Local<v8::Object> holder = info.Holder();
  ALLOW_UNUSED_LOCAL(holder);

  CSSStyleDeclaration* impl = V8CSSStyleDeclaration::ToImpl(holder);

  ExceptionState exception_state(isolate, ExceptionState::kSetterContext, "CSSStyleDeclaration", "cssFloat");
  CEReactionsScope ce_reactions_scope;

  // Prepare the value to be set.
  V8StringResource<kTreatNullAsEmptyString> cpp_value = v8_value;
  if (!cpp_value.Prepare())
    return;

  ExecutionContext* execution_context = ExecutionContext::ForRelevantRealm(info);

  impl->setCSSFloat(execution_context, cpp_value, exception_state);
}

static void ItemMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exception_state(info.GetIsolate(), ExceptionState::kExecutionContext, "CSSStyleDeclaration", "item");

  CSSStyleDeclaration* impl = V8CSSStyleDeclaration::ToImpl(info.Holder());

  if (UNLIKELY(info.Length() < 1)) {
    exception_state.ThrowTypeError(ExceptionMessages::NotEnoughArguments(1, info.Length()));
    return;
  }

  uint32_t index;
  index = NativeValueTraits<IDLUnsignedLong>::NativeValue(info.GetIsolate(), info[0], exception_state);
  if (exception_state.HadException())
    return;

  V8SetReturnValueString(info, impl->item(index), info.GetIsolate());
}

static void GetPropertyValueMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  CSSStyleDeclaration* impl = V8CSSStyleDeclaration::ToImpl(info.Holder());

  if (UNLIKELY(info.Length() < 1)) {
    V8ThrowException::ThrowTypeError(info.GetIsolate(), ExceptionMessages::FailedToExecute("getPropertyValue", "CSSStyleDeclaration", ExceptionMessages::NotEnoughArguments(1, info.Length())));
    return;
  }

  V8StringResource<> property;
  property = info[0];
  if (!property.Prepare())
    return;

  V8SetReturnValueString(info, impl->getPropertyValue(property), info.GetIsolate());
}

static void GetPropertyPriorityMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  CSSStyleDeclaration* impl = V8CSSStyleDeclaration::ToImpl(info.Holder());

  if (UNLIKELY(info.Length() < 1)) {
    V8ThrowException::ThrowTypeError(info.GetIsolate(), ExceptionMessages::FailedToExecute("getPropertyPriority", "CSSStyleDeclaration", ExceptionMessages::NotEnoughArguments(1, info.Length())));
    return;
  }

  V8StringResource<> property;
  property = info[0];
  if (!property.Prepare())
    return;

  V8SetReturnValueString(info, impl->getPropertyPriority(property), info.GetIsolate());
}

static void SetPropertyMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exception_state(info.GetIsolate(), ExceptionState::kExecutionContext, "CSSStyleDeclaration", "setProperty");
  CEReactionsScope ce_reactions_scope;

  CSSStyleDeclaration* impl = V8CSSStyleDeclaration::ToImpl(info.Holder());

  if (UNLIKELY(info.Length() < 2)) {
    exception_state.ThrowTypeError(ExceptionMessages::NotEnoughArguments(2, info.Length()));
    return;
  }

  V8StringResource<> property;
  V8StringResource<kTreatNullAsEmptyString> value;
  V8StringResource<kTreatNullAsEmptyString> priority;
  property = info[0];
  if (!property.Prepare())
    return;

  value = info[1];
  if (!value.Prepare())
    return;

  if (!info[2]->IsUndefined()) {
    priority = info[2];
    if (!priority.Prepare())
      return;
  } else {
    priority = WTF::g_empty_string;
  }

  ExecutionContext* execution_context = ExecutionContext::ForRelevantRealm(info);
  impl->setProperty(execution_context, property, value, priority, exception_state);
  if (exception_state.HadException()) {
    return;
  }
}

static void RemovePropertyMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exception_state(info.GetIsolate(), ExceptionState::kExecutionContext, "CSSStyleDeclaration", "removeProperty");
  CEReactionsScope ce_reactions_scope;

  CSSStyleDeclaration* impl = V8CSSStyleDeclaration::ToImpl(info.Holder());

  if (UNLIKELY(info.Length() < 1)) {
    exception_state.ThrowTypeError(ExceptionMessages::NotEnoughArguments(1, info.Length()));
    return;
  }

  V8StringResource<> property;
  property = info[0];
  if (!property.Prepare())
    return;

  String result = impl->removeProperty(property, exception_state);
  if (exception_state.HadException()) {
    return;
  }
  V8SetReturnValueString(info, result, info.GetIsolate());
}

static void NamedPropertyGetter(const AtomicString& name,
                                const v8::PropertyCallbackInfo<v8::Value>& info) {
  CSSStyleDeclaration* impl = V8CSSStyleDeclaration::ToImpl(info.Holder());
  String result = impl->AnonymousNamedGetter(name);
  if (result.IsNull())
    return;
  V8SetReturnValueString(info, result, info.GetIsolate());
}

static void NamedPropertySetter(
    const AtomicString& name,
    v8::Local<v8::Value> v8_value,
    const v8::PropertyCallbackInfo<v8::Value>& info) {
  CEReactionsScope ce_reactions_scope;
  ScriptState* script_state = ScriptState::ForRelevantRealm(info);

  CSSStyleDeclaration* impl = V8CSSStyleDeclaration::ToImpl(info.Holder());
  V8StringResource<kTreatNullAsEmptyString> property_value = v8_value;
  if (!property_value.Prepare())
    return;

  bool result = impl->AnonymousNamedSetter(script_state, name, property_value);
  if (!result)
    return;
  V8SetReturnValue(info, v8_value);
}

static void NamedPropertyQuery(
    const AtomicString& name, const v8::PropertyCallbackInfo<v8::Integer>& info) {
  const CString& name_in_utf8 = name.Utf8();
  ExceptionState exception_state(
      info.GetIsolate(),
      ExceptionState::kGetterContext,
      "CSSStyleDeclaration",
      name_in_utf8.data());

  CSSStyleDeclaration* impl = V8CSSStyleDeclaration::ToImpl(info.Holder());

  bool result = impl->NamedPropertyQuery(name, exception_state);
  if (!result)
    return;
  // https://heycam.github.io/webidl/#LegacyPlatformObjectGetOwnProperty
  // 2.7. If |O| implements an interface with a named property setter, then set
  //      desc.[[Writable]] to true, otherwise set it to false.
  // 2.8. If |O| implements an interface with the
  //      [LegacyUnenumerableNamedProperties] extended attribute, then set
  //      desc.[[Enumerable]] to false, otherwise set it to true.
  V8SetReturnValueInt(info, v8::None);
}

static void NamedPropertyEnumerator(const v8::PropertyCallbackInfo<v8::Array>& info) {
  ExceptionState exception_state(
      info.GetIsolate(),
      ExceptionState::kEnumerationContext,
      "CSSStyleDeclaration");

  CSSStyleDeclaration* impl = V8CSSStyleDeclaration::ToImpl(info.Holder());

  Vector<String> names;
  impl->NamedPropertyEnumerator(names, exception_state);
  if (exception_state.HadException())
    return;
  V8SetReturnValue(info, ToV8(names, info.Holder(), info.GetIsolate()).As<v8::Array>());
}

static void IndexedPropertyGetter(
    uint32_t index,
    const v8::PropertyCallbackInfo<v8::Value>& info) {
  CSSStyleDeclaration* impl = V8CSSStyleDeclaration::ToImpl(info.Holder());

  // We assume that all the implementations support length() method, although
  // the spec doesn't require that length() must exist.  It's okay that
  // the interface does not have length attribute as long as the
  // implementation supports length() member function.
  if (index >= impl->length())
    return;  // Returns undefined due to out-of-range.

  String result = impl->item(index);
  V8SetReturnValueString(info, result, info.GetIsolate());
}

static void IndexedPropertyDescriptor(
    uint32_t index, const v8::PropertyCallbackInfo<v8::Value>& info) {
  // https://heycam.github.io/webidl/#LegacyPlatformObjectGetOwnProperty
  // Steps 1.1 to 1.2.4 are covered here: we rely on indexedPropertyGetter() to
  // call the getter function and check that |index| is a valid property index,
  // in which case it will have set info.GetReturnValue() to something other
  // than undefined.
  V8CSSStyleDeclaration::IndexedPropertyGetterCallback(index, info);
  v8::Local<v8::Value> getter_value = info.GetReturnValue().Get();
  if (!getter_value->IsUndefined()) {
    // 1.2.5. Let |desc| be a newly created Property Descriptor with no fields.
    // 1.2.6. Set desc.[[Value]] to the result of converting value to an
    //        ECMAScript value.
    // 1.2.7. If O implements an interface with an indexed property setter,
    //        then set desc.[[Writable]] to true, otherwise set it to false.
    v8::PropertyDescriptor desc(getter_value, false);
    // 1.2.8. Set desc.[[Enumerable]] and desc.[[Configurable]] to true.
    desc.set_enumerable(true);
    desc.set_configurable(true);
    // 1.2.9. Return |desc|.
    V8SetReturnValue(info, desc);
  }
}

}  // namespace css_style_declaration_v8_internal

void V8CSSStyleDeclaration::CSSTextAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_CSSStyleDeclaration_cssText_Getter");

  css_style_declaration_v8_internal::CSSTextAttributeGetter(info);
}

void V8CSSStyleDeclaration::CSSTextAttributeSetterCallback(
    const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_CSSStyleDeclaration_cssText_Setter");

  v8::Local<v8::Value> v8_value = info[0];

  css_style_declaration_v8_internal::CSSTextAttributeSetter(v8_value, info);
}

void V8CSSStyleDeclaration::LengthAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_CSSStyleDeclaration_length_Getter");

  css_style_declaration_v8_internal::LengthAttributeGetter(info);
}

void V8CSSStyleDeclaration::ParentRuleAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_CSSStyleDeclaration_parentRule_Getter");

  css_style_declaration_v8_internal::ParentRuleAttributeGetter(info);
}

void V8CSSStyleDeclaration::CSSFloatAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_CSSStyleDeclaration_cssFloat_Getter");

  css_style_declaration_v8_internal::CSSFloatAttributeGetter(info);
}

void V8CSSStyleDeclaration::CSSFloatAttributeSetterCallback(
    const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_CSSStyleDeclaration_cssFloat_Setter");

  v8::Local<v8::Value> v8_value = info[0];

  css_style_declaration_v8_internal::CSSFloatAttributeSetter(v8_value, info);
}

void V8CSSStyleDeclaration::ItemMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_CSSStyleDeclaration_item");

  css_style_declaration_v8_internal::ItemMethod(info);
}

void V8CSSStyleDeclaration::GetPropertyValueMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_CSSStyleDeclaration_getPropertyValue");

  css_style_declaration_v8_internal::GetPropertyValueMethod(info);
}

void V8CSSStyleDeclaration::GetPropertyPriorityMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_CSSStyleDeclaration_getPropertyPriority");

  css_style_declaration_v8_internal::GetPropertyPriorityMethod(info);
}

void V8CSSStyleDeclaration::SetPropertyMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_CSSStyleDeclaration_setProperty");

  css_style_declaration_v8_internal::SetPropertyMethod(info);
}

void V8CSSStyleDeclaration::RemovePropertyMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_CSSStyleDeclaration_removeProperty");

  css_style_declaration_v8_internal::RemovePropertyMethod(info);
}

void V8CSSStyleDeclaration::NamedPropertyGetterCallback(
    v8::Local<v8::Name> name, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_CSSStyleDeclaration_NamedPropertyGetter");

  if (!name->IsString())
    return;
  const AtomicString& property_name = ToCoreAtomicString(name.As<v8::String>());

  css_style_declaration_v8_internal::NamedPropertyGetter(property_name, info);
}

void V8CSSStyleDeclaration::NamedPropertySetterCallback(
    v8::Local<v8::Name> name,
    v8::Local<v8::Value> v8_value,
    const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_CSSStyleDeclaration_NamedPropertySetter");

  if (!name->IsString())
    return;
  const AtomicString& property_name = ToCoreAtomicString(name.As<v8::String>());

  css_style_declaration_v8_internal::NamedPropertySetter(property_name, v8_value, info);
}

void V8CSSStyleDeclaration::NamedPropertyQueryCallback(
    v8::Local<v8::Name> name, const v8::PropertyCallbackInfo<v8::Integer>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_CSSStyleDeclaration_NamedPropertyQuery");

  if (!name->IsString())
    return;
  const AtomicString& property_name = ToCoreAtomicString(name.As<v8::String>());

  css_style_declaration_v8_internal::NamedPropertyQuery(property_name, info);
}

void V8CSSStyleDeclaration::NamedPropertyEnumeratorCallback(
    const v8::PropertyCallbackInfo<v8::Array>& info) {
  css_style_declaration_v8_internal::NamedPropertyEnumerator(info);
}

void V8CSSStyleDeclaration::IndexedPropertyGetterCallback(
    uint32_t index, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_CSSStyleDeclaration_IndexedPropertyGetter");

  css_style_declaration_v8_internal::IndexedPropertyGetter(index, info);
}

void V8CSSStyleDeclaration::IndexedPropertyDescriptorCallback(
    uint32_t index, const v8::PropertyCallbackInfo<v8::Value>& info) {
  css_style_declaration_v8_internal::IndexedPropertyDescriptor(index, info);
}

void V8CSSStyleDeclaration::IndexedPropertySetterCallback(
    uint32_t index,
    v8::Local<v8::Value> v8_value,
    const v8::PropertyCallbackInfo<v8::Value>& info) {
  // No indexed property setter defined.  Do not fall back to the default
  // setter.
  V8SetReturnValue(info, v8::Null(info.GetIsolate()));
  if (info.ShouldThrowOnError()) {
    ExceptionState exception_state(info.GetIsolate(),
                                   ExceptionState::kIndexedSetterContext,
                                   "CSSStyleDeclaration");
    CEReactionsScope ce_reactions_scope;
    exception_state.ThrowTypeError("Index property setter is not supported.");
  }
}

void V8CSSStyleDeclaration::IndexedPropertyDefinerCallback(
    uint32_t index,
    const v8::PropertyDescriptor& desc,
    const v8::PropertyCallbackInfo<v8::Value>& info) {
  // https://heycam.github.io/webidl/#legacy-platform-object-defineownproperty
  // 3.9.3. [[DefineOwnProperty]]
  // step 1.2. If O does not implement an interface with an indexed property
  //   setter, then return false.
  //
  // https://html.spec.whatwg.org/C/window-object.html#windowproxy-defineownproperty
  // 7.4.6 [[DefineOwnProperty]] (P, Desc)
  // step 2.1. If P is an array index property name, return false.
  V8SetReturnValue(info, v8::Null(info.GetIsolate()));
  if (info.ShouldThrowOnError()) {
    ExceptionState exception_state(info.GetIsolate(),
                                   ExceptionState::kIndexedSetterContext,
                                   "CSSStyleDeclaration");
    exception_state.ThrowTypeError("Index property setter is not supported.");
  }
}

static constexpr V8DOMConfiguration::AccessorConfiguration kV8CSSStyleDeclarationAccessors[] = {
    { "cssText", V8CSSStyleDeclaration::CSSTextAttributeGetterCallback, V8CSSStyleDeclaration::CSSTextAttributeSetterCallback, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
    { "length", V8CSSStyleDeclaration::LengthAttributeGetterCallback, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasNoSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
    { "parentRule", V8CSSStyleDeclaration::ParentRuleAttributeGetterCallback, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
    { "cssFloat", V8CSSStyleDeclaration::CSSFloatAttributeGetterCallback, V8CSSStyleDeclaration::CSSFloatAttributeSetterCallback, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
};

static constexpr V8DOMConfiguration::MethodConfiguration kV8CSSStyleDeclarationMethods[] = {
    {"item", V8CSSStyleDeclaration::ItemMethodCallback, 1, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasNoSideEffect, V8DOMConfiguration::kAllWorlds},
    {"getPropertyValue", V8CSSStyleDeclaration::GetPropertyValueMethodCallback, 1, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"getPropertyPriority", V8CSSStyleDeclaration::GetPropertyPriorityMethodCallback, 1, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"setProperty", V8CSSStyleDeclaration::SetPropertyMethodCallback, 2, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"removeProperty", V8CSSStyleDeclaration::RemovePropertyMethodCallback, 1, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
};

static void InstallV8CSSStyleDeclarationTemplate(
    v8::Isolate* isolate,
    const DOMWrapperWorld& world,
    v8::Local<v8::FunctionTemplate> interface_template) {
  // Initialize the interface object's template.
  V8DOMConfiguration::InitializeDOMInterfaceTemplate(isolate, interface_template, V8CSSStyleDeclaration::GetWrapperTypeInfo()->interface_name, v8::Local<v8::FunctionTemplate>(), V8CSSStyleDeclaration::kInternalFieldCount);

  v8::Local<v8::Signature> signature = v8::Signature::New(isolate, interface_template);
  ALLOW_UNUSED_LOCAL(signature);
  v8::Local<v8::ObjectTemplate> instance_template = interface_template->InstanceTemplate();
  ALLOW_UNUSED_LOCAL(instance_template);
  v8::Local<v8::ObjectTemplate> prototype_template = interface_template->PrototypeTemplate();
  ALLOW_UNUSED_LOCAL(prototype_template);

  // Register IDL constants, attributes and operations.
  V8DOMConfiguration::InstallAccessors(
      isolate, world, instance_template, prototype_template, interface_template,
      signature, kV8CSSStyleDeclarationAccessors, base::size(kV8CSSStyleDeclarationAccessors));
  V8DOMConfiguration::InstallMethods(
      isolate, world, instance_template, prototype_template, interface_template,
      signature, kV8CSSStyleDeclarationMethods, base::size(kV8CSSStyleDeclarationMethods));

  // Indexed properties
  v8::IndexedPropertyHandlerConfiguration indexedPropertyHandlerConfig(
      V8CSSStyleDeclaration::IndexedPropertyGetterCallback,
      V8CSSStyleDeclaration::IndexedPropertySetterCallback,
      V8CSSStyleDeclaration::IndexedPropertyDescriptorCallback,
      nullptr,
      IndexedPropertyEnumerator<CSSStyleDeclaration>,
      V8CSSStyleDeclaration::IndexedPropertyDefinerCallback,
      v8::Local<v8::Value>(),
      v8::PropertyHandlerFlags::kHasNoSideEffect);
  instance_template->SetHandler(indexedPropertyHandlerConfig);
  // Named properties
  v8::NamedPropertyHandlerConfiguration namedPropertyHandlerConfig(V8CSSStyleDeclaration::NamedPropertyGetterCallback, V8CSSStyleDeclaration::NamedPropertySetterCallback, V8CSSStyleDeclaration::NamedPropertyQueryCallback, nullptr, V8CSSStyleDeclaration::NamedPropertyEnumeratorCallback, v8::Local<v8::Value>(), static_cast<v8::PropertyHandlerFlags>(int(v8::PropertyHandlerFlags::kOnlyInterceptStrings) | int(v8::PropertyHandlerFlags::kNonMasking) | int(v8::PropertyHandlerFlags::kHasNoSideEffect)));
  instance_template->SetHandler(namedPropertyHandlerConfig);

  // Array iterator (@@iterator)
  prototype_template->SetIntrinsicDataProperty(v8::Symbol::GetIterator(isolate), v8::kArrayProto_values, v8::DontEnum);

  // Custom signature

  V8CSSStyleDeclaration::InstallRuntimeEnabledFeaturesOnTemplate(
      isolate, world, interface_template);
}

void V8CSSStyleDeclaration::InstallRuntimeEnabledFeaturesOnTemplate(
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

v8::Local<v8::FunctionTemplate> V8CSSStyleDeclaration::DomTemplate(
    v8::Isolate* isolate, const DOMWrapperWorld& world) {
  return V8DOMConfiguration::DomClassTemplate(
      isolate, world, const_cast<WrapperTypeInfo*>(V8CSSStyleDeclaration::GetWrapperTypeInfo()),
      InstallV8CSSStyleDeclarationTemplate);
}

bool V8CSSStyleDeclaration::HasInstance(v8::Local<v8::Value> v8_value, v8::Isolate* isolate) {
  return V8PerIsolateData::From(isolate)->HasInstance(V8CSSStyleDeclaration::GetWrapperTypeInfo(), v8_value);
}

v8::Local<v8::Object> V8CSSStyleDeclaration::FindInstanceInPrototypeChain(
    v8::Local<v8::Value> v8_value, v8::Isolate* isolate) {
  return V8PerIsolateData::From(isolate)->FindInstanceInPrototypeChain(
      V8CSSStyleDeclaration::GetWrapperTypeInfo(), v8_value);
}

CSSStyleDeclaration* V8CSSStyleDeclaration::ToImplWithTypeCheck(
    v8::Isolate* isolate, v8::Local<v8::Value> value) {
  return HasInstance(value, isolate) ? ToImpl(v8::Local<v8::Object>::Cast(value)) : nullptr;
}

CSSStyleDeclaration* NativeValueTraits<CSSStyleDeclaration>::NativeValue(
    v8::Isolate* isolate, v8::Local<v8::Value> value, ExceptionState& exception_state) {
  CSSStyleDeclaration* native_value = V8CSSStyleDeclaration::ToImplWithTypeCheck(isolate, value);
  if (!native_value) {
    exception_state.ThrowTypeError(ExceptionMessages::FailedToConvertJSValue(
        "CSSStyleDeclaration"));
  }
  return native_value;
}

}  // namespace blink
