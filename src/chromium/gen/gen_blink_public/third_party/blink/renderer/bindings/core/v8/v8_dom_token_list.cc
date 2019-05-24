// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated from the Jinja2 template
// third_party/blink/renderer/bindings/templates/interface.cc.tmpl
// by the script code_generator_v8.py.
// DO NOT MODIFY!

// clang-format off
#include "third_party/blink/renderer/bindings/core/v8/v8_dom_token_list.h"

#include <algorithm>

#include "base/memory/scoped_refptr.h"
#include "third_party/blink/renderer/bindings/core/v8/idl_types.h"
#include "third_party/blink/renderer/bindings/core/v8/native_value_traits_impl.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_dom_configuration.h"
#include "third_party/blink/renderer/core/execution_context/execution_context.h"
#include "third_party/blink/renderer/core/html/custom/ce_reactions_scope.h"
#include "third_party/blink/renderer/core/html/custom/v0_custom_element_processing_stack.h"
#include "third_party/blink/renderer/platform/bindings/exception_messages.h"
#include "third_party/blink/renderer/platform/bindings/exception_state.h"
#include "third_party/blink/renderer/platform/bindings/runtime_call_stats.h"
#include "third_party/blink/renderer/platform/bindings/v8_object_constructor.h"
#include "third_party/blink/renderer/platform/scheduler/public/cooperative_scheduling_manager.h"
#include "third_party/blink/renderer/platform/wtf/get_ptr.h"

namespace blink {

// Suppress warning: global constructors, because struct WrapperTypeInfo is trivial
// and does not depend on another global objects.
#if defined(COMPONENT_BUILD) && defined(WIN32) && defined(__clang__)
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wglobal-constructors"
#endif
const WrapperTypeInfo v8_dom_token_list_wrapper_type_info = {
    gin::kEmbedderBlink,
    V8DOMTokenList::DomTemplate,
    nullptr,
    "DOMTokenList",
    nullptr,
    WrapperTypeInfo::kWrapperTypeObjectPrototype,
    WrapperTypeInfo::kObjectClassId,
    WrapperTypeInfo::kNotInheritFromActiveScriptWrappable,
};
#if defined(COMPONENT_BUILD) && defined(WIN32) && defined(__clang__)
#pragma clang diagnostic pop
#endif

// This static member must be declared by DEFINE_WRAPPERTYPEINFO in DOMTokenList.h.
// For details, see the comment of DEFINE_WRAPPERTYPEINFO in
// platform/bindings/ScriptWrappable.h.
const WrapperTypeInfo& DOMTokenList::wrapper_type_info_ = v8_dom_token_list_wrapper_type_info;

// not [ActiveScriptWrappable]
static_assert(
    !std::is_base_of<ActiveScriptWrappableBase, DOMTokenList>::value,
    "DOMTokenList inherits from ActiveScriptWrappable<>, but is not specifying "
    "[ActiveScriptWrappable] extended attribute in the IDL file.  "
    "Be consistent.");
static_assert(
    std::is_same<decltype(&DOMTokenList::HasPendingActivity),
                 decltype(&ScriptWrappable::HasPendingActivity)>::value,
    "DOMTokenList is overriding hasPendingActivity(), but is not specifying "
    "[ActiveScriptWrappable] extended attribute in the IDL file.  "
    "Be consistent.");

namespace dom_token_list_v8_internal {

static void LengthAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  DOMTokenList* impl = V8DOMTokenList::ToImpl(holder);

  V8SetReturnValueUnsigned(info, impl->length());
}

static void ValueAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  DOMTokenList* impl = V8DOMTokenList::ToImpl(holder);

  V8SetReturnValueString(info, impl->value(), info.GetIsolate());
}

static void ValueAttributeSetter(
    v8::Local<v8::Value> v8_value, const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Isolate* isolate = info.GetIsolate();
  ALLOW_UNUSED_LOCAL(isolate);

  v8::Local<v8::Object> holder = info.Holder();
  ALLOW_UNUSED_LOCAL(holder);

  DOMTokenList* impl = V8DOMTokenList::ToImpl(holder);

  CEReactionsScope ce_reactions_scope;

  // Prepare the value to be set.
  V8StringResource<> cpp_value = v8_value;
  if (!cpp_value.Prepare())
    return;

  impl->setValue(cpp_value);
}

static void ItemMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exception_state(info.GetIsolate(), ExceptionState::kExecutionContext, "DOMTokenList", "item");

  DOMTokenList* impl = V8DOMTokenList::ToImpl(info.Holder());

  if (UNLIKELY(info.Length() < 1)) {
    exception_state.ThrowTypeError(ExceptionMessages::NotEnoughArguments(1, info.Length()));
    return;
  }

  uint32_t index;
  index = NativeValueTraits<IDLUnsignedLong>::NativeValue(info.GetIsolate(), info[0], exception_state);
  if (exception_state.HadException())
    return;

  V8SetReturnValueStringOrNull(info, impl->item(index), info.GetIsolate());
}

static void ContainsMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  DOMTokenList* impl = V8DOMTokenList::ToImpl(info.Holder());

  if (UNLIKELY(info.Length() < 1)) {
    V8ThrowException::ThrowTypeError(info.GetIsolate(), ExceptionMessages::FailedToExecute("contains", "DOMTokenList", ExceptionMessages::NotEnoughArguments(1, info.Length())));
    return;
  }

  V8StringResource<> token;
  token = info[0];
  if (!token.Prepare())
    return;

  V8SetReturnValueBool(info, impl->contains(token));
}

static void AddMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exception_state(info.GetIsolate(), ExceptionState::kExecutionContext, "DOMTokenList", "add");
  CEReactionsScope ce_reactions_scope;

  DOMTokenList* impl = V8DOMTokenList::ToImpl(info.Holder());

  V0CustomElementProcessingStack::CallbackDeliveryScope delivery_scope;

  Vector<String> tokens;
  tokens = ToImplArguments<IDLString>(info, 0, exception_state);
  if (exception_state.HadException())
    return;

  impl->add(tokens, exception_state);
  if (exception_state.HadException()) {
    return;
  }
}

static void RemoveMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exception_state(info.GetIsolate(), ExceptionState::kExecutionContext, "DOMTokenList", "remove");
  CEReactionsScope ce_reactions_scope;

  DOMTokenList* impl = V8DOMTokenList::ToImpl(info.Holder());

  V0CustomElementProcessingStack::CallbackDeliveryScope delivery_scope;

  Vector<String> tokens;
  tokens = ToImplArguments<IDLString>(info, 0, exception_state);
  if (exception_state.HadException())
    return;

  impl->remove(tokens, exception_state);
  if (exception_state.HadException()) {
    return;
  }
}

static void ToggleMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exception_state(info.GetIsolate(), ExceptionState::kExecutionContext, "DOMTokenList", "toggle");
  CEReactionsScope ce_reactions_scope;

  DOMTokenList* impl = V8DOMTokenList::ToImpl(info.Holder());

  V0CustomElementProcessingStack::CallbackDeliveryScope delivery_scope;

  if (UNLIKELY(info.Length() < 1)) {
    exception_state.ThrowTypeError(ExceptionMessages::NotEnoughArguments(1, info.Length()));
    return;
  }

  V8StringResource<> token;
  bool force;
  int num_args_passed = info.Length();
  while (num_args_passed > 0) {
    if (!info[num_args_passed - 1]->IsUndefined())
      break;
    --num_args_passed;
  }
  token = info[0];
  if (!token.Prepare())
    return;

  if (UNLIKELY(num_args_passed <= 1)) {
    bool result = impl->toggle(token, exception_state);
    if (exception_state.HadException()) {
      return;
    }
    V8SetReturnValueBool(info, result);
    return;
  }
  force = NativeValueTraits<IDLBoolean>::NativeValue(info.GetIsolate(), info[1], exception_state);
  if (exception_state.HadException())
    return;

  bool result = impl->toggle(token, force, exception_state);
  if (exception_state.HadException()) {
    return;
  }
  V8SetReturnValueBool(info, result);
}

static void ReplaceMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exception_state(info.GetIsolate(), ExceptionState::kExecutionContext, "DOMTokenList", "replace");
  CEReactionsScope ce_reactions_scope;

  DOMTokenList* impl = V8DOMTokenList::ToImpl(info.Holder());

  if (UNLIKELY(info.Length() < 2)) {
    exception_state.ThrowTypeError(ExceptionMessages::NotEnoughArguments(2, info.Length()));
    return;
  }

  V8StringResource<> token;
  V8StringResource<> new_token;
  token = info[0];
  if (!token.Prepare())
    return;

  new_token = info[1];
  if (!new_token.Prepare())
    return;

  bool result = impl->replace(token, new_token, exception_state);
  if (exception_state.HadException()) {
    return;
  }
  V8SetReturnValueBool(info, result);
}

static void SupportsMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exception_state(info.GetIsolate(), ExceptionState::kExecutionContext, "DOMTokenList", "supports");

  DOMTokenList* impl = V8DOMTokenList::ToImpl(info.Holder());

  V0CustomElementProcessingStack::CallbackDeliveryScope delivery_scope;

  if (UNLIKELY(info.Length() < 1)) {
    exception_state.ThrowTypeError(ExceptionMessages::NotEnoughArguments(1, info.Length()));
    return;
  }

  V8StringResource<> token;
  token = info[0];
  if (!token.Prepare())
    return;

  bool result = impl->supports(token, exception_state);
  if (exception_state.HadException()) {
    return;
  }
  V8SetReturnValueBool(info, result);
}

static void ToStringMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  DOMTokenList* impl = V8DOMTokenList::ToImpl(info.Holder());

  V8SetReturnValueString(info, impl->toString(), info.GetIsolate());
}

static void IndexedPropertyGetter(
    uint32_t index,
    const v8::PropertyCallbackInfo<v8::Value>& info) {
  DOMTokenList* impl = V8DOMTokenList::ToImpl(info.Holder());

  // We assume that all the implementations support length() method, although
  // the spec doesn't require that length() must exist.  It's okay that
  // the interface does not have length attribute as long as the
  // implementation supports length() member function.
  if (index >= impl->length())
    return;  // Returns undefined due to out-of-range.

  String result = impl->item(index);
  V8SetReturnValueStringOrNull(info, result, info.GetIsolate());
}

static void IndexedPropertyDescriptor(
    uint32_t index, const v8::PropertyCallbackInfo<v8::Value>& info) {
  // https://heycam.github.io/webidl/#LegacyPlatformObjectGetOwnProperty
  // Steps 1.1 to 1.2.4 are covered here: we rely on indexedPropertyGetter() to
  // call the getter function and check that |index| is a valid property index,
  // in which case it will have set info.GetReturnValue() to something other
  // than undefined.
  V8DOMTokenList::IndexedPropertyGetterCallback(index, info);
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

}  // namespace dom_token_list_v8_internal

void V8DOMTokenList::LengthAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMTokenList_length_Getter");

  dom_token_list_v8_internal::LengthAttributeGetter(info);
}

void V8DOMTokenList::ValueAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMTokenList_value_Getter");

  dom_token_list_v8_internal::ValueAttributeGetter(info);
}

void V8DOMTokenList::ValueAttributeSetterCallback(
    const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMTokenList_value_Setter");

  v8::Local<v8::Value> v8_value = info[0];

  dom_token_list_v8_internal::ValueAttributeSetter(v8_value, info);
}

void V8DOMTokenList::ItemMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMTokenList_item");

  dom_token_list_v8_internal::ItemMethod(info);
}

void V8DOMTokenList::ContainsMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMTokenList_contains");

  dom_token_list_v8_internal::ContainsMethod(info);
}

void V8DOMTokenList::AddMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMTokenList_add");

  dom_token_list_v8_internal::AddMethod(info);
}

void V8DOMTokenList::RemoveMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMTokenList_remove");

  dom_token_list_v8_internal::RemoveMethod(info);
}

void V8DOMTokenList::ToggleMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMTokenList_toggle");

  dom_token_list_v8_internal::ToggleMethod(info);
}

void V8DOMTokenList::ReplaceMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMTokenList_replace");

  dom_token_list_v8_internal::ReplaceMethod(info);
}

void V8DOMTokenList::SupportsMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMTokenList_supports");

  dom_token_list_v8_internal::SupportsMethod(info);
}

void V8DOMTokenList::ToStringMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMTokenList_toString");

  dom_token_list_v8_internal::ToStringMethod(info);
}

void V8DOMTokenList::IndexedPropertyGetterCallback(
    uint32_t index, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMTokenList_IndexedPropertyGetter");

  dom_token_list_v8_internal::IndexedPropertyGetter(index, info);
}

void V8DOMTokenList::IndexedPropertyDescriptorCallback(
    uint32_t index, const v8::PropertyCallbackInfo<v8::Value>& info) {
  dom_token_list_v8_internal::IndexedPropertyDescriptor(index, info);
}

void V8DOMTokenList::IndexedPropertySetterCallback(
    uint32_t index,
    v8::Local<v8::Value> v8_value,
    const v8::PropertyCallbackInfo<v8::Value>& info) {
  // No indexed property setter defined.  Do not fall back to the default
  // setter.
  V8SetReturnValue(info, v8::Null(info.GetIsolate()));
  if (info.ShouldThrowOnError()) {
    ExceptionState exception_state(info.GetIsolate(),
                                   ExceptionState::kIndexedSetterContext,
                                   "DOMTokenList");
    exception_state.ThrowTypeError("Index property setter is not supported.");
  }
}

void V8DOMTokenList::IndexedPropertyDefinerCallback(
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
                                   "DOMTokenList");
    exception_state.ThrowTypeError("Index property setter is not supported.");
  }
}

static constexpr V8DOMConfiguration::AccessorConfiguration kV8DOMTokenListAccessors[] = {
    { "length", V8DOMTokenList::LengthAttributeGetterCallback, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasNoSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
    { "value", V8DOMTokenList::ValueAttributeGetterCallback, V8DOMTokenList::ValueAttributeSetterCallback, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
};

static constexpr V8DOMConfiguration::MethodConfiguration kV8DOMTokenListMethods[] = {
    {"item", V8DOMTokenList::ItemMethodCallback, 1, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasNoSideEffect, V8DOMConfiguration::kAllWorlds},
    {"contains", V8DOMTokenList::ContainsMethodCallback, 1, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasNoSideEffect, V8DOMConfiguration::kAllWorlds},
    {"add", V8DOMTokenList::AddMethodCallback, 0, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"remove", V8DOMTokenList::RemoveMethodCallback, 0, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"toggle", V8DOMTokenList::ToggleMethodCallback, 1, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"replace", V8DOMTokenList::ReplaceMethodCallback, 2, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"supports", V8DOMTokenList::SupportsMethodCallback, 1, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"toString", V8DOMTokenList::ToStringMethodCallback, 0, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
};

static void InstallV8DOMTokenListTemplate(
    v8::Isolate* isolate,
    const DOMWrapperWorld& world,
    v8::Local<v8::FunctionTemplate> interface_template) {
  // Initialize the interface object's template.
  V8DOMConfiguration::InitializeDOMInterfaceTemplate(isolate, interface_template, V8DOMTokenList::GetWrapperTypeInfo()->interface_name, v8::Local<v8::FunctionTemplate>(), V8DOMTokenList::kInternalFieldCount);

  v8::Local<v8::Signature> signature = v8::Signature::New(isolate, interface_template);
  ALLOW_UNUSED_LOCAL(signature);
  v8::Local<v8::ObjectTemplate> instance_template = interface_template->InstanceTemplate();
  ALLOW_UNUSED_LOCAL(instance_template);
  v8::Local<v8::ObjectTemplate> prototype_template = interface_template->PrototypeTemplate();
  ALLOW_UNUSED_LOCAL(prototype_template);

  // Register IDL constants, attributes and operations.
  V8DOMConfiguration::InstallAccessors(
      isolate, world, instance_template, prototype_template, interface_template,
      signature, kV8DOMTokenListAccessors, base::size(kV8DOMTokenListAccessors));
  V8DOMConfiguration::InstallMethods(
      isolate, world, instance_template, prototype_template, interface_template,
      signature, kV8DOMTokenListMethods, base::size(kV8DOMTokenListMethods));

  // Indexed properties
  v8::IndexedPropertyHandlerConfiguration indexedPropertyHandlerConfig(
      V8DOMTokenList::IndexedPropertyGetterCallback,
      V8DOMTokenList::IndexedPropertySetterCallback,
      V8DOMTokenList::IndexedPropertyDescriptorCallback,
      nullptr,
      IndexedPropertyEnumerator<DOMTokenList>,
      V8DOMTokenList::IndexedPropertyDefinerCallback,
      v8::Local<v8::Value>(),
      v8::PropertyHandlerFlags::kHasNoSideEffect);
  instance_template->SetHandler(indexedPropertyHandlerConfig);

  // Array iterator (@@iterator)
  prototype_template->SetIntrinsicDataProperty(v8::Symbol::GetIterator(isolate), v8::kArrayProto_values, v8::DontEnum);
  // For value iterators, the properties below must originally be set to the corresponding ones in %ArrayPrototype%.
  // See https://heycam.github.io/webidl/#es-iterators.
  prototype_template->SetIntrinsicDataProperty(V8AtomicString(isolate, "entries"), v8::kArrayProto_entries);
  prototype_template->SetIntrinsicDataProperty(V8AtomicString(isolate, "forEach"), v8::kArrayProto_forEach);
  prototype_template->SetIntrinsicDataProperty(V8AtomicString(isolate, "keys"), v8::kArrayProto_keys);
  prototype_template->SetIntrinsicDataProperty(V8AtomicString(isolate, "values"), v8::kArrayProto_values);

  // Custom signature

  V8DOMTokenList::InstallRuntimeEnabledFeaturesOnTemplate(
      isolate, world, interface_template);
}

void V8DOMTokenList::InstallRuntimeEnabledFeaturesOnTemplate(
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

v8::Local<v8::FunctionTemplate> V8DOMTokenList::DomTemplate(
    v8::Isolate* isolate, const DOMWrapperWorld& world) {
  return V8DOMConfiguration::DomClassTemplate(
      isolate, world, const_cast<WrapperTypeInfo*>(V8DOMTokenList::GetWrapperTypeInfo()),
      InstallV8DOMTokenListTemplate);
}

bool V8DOMTokenList::HasInstance(v8::Local<v8::Value> v8_value, v8::Isolate* isolate) {
  return V8PerIsolateData::From(isolate)->HasInstance(V8DOMTokenList::GetWrapperTypeInfo(), v8_value);
}

v8::Local<v8::Object> V8DOMTokenList::FindInstanceInPrototypeChain(
    v8::Local<v8::Value> v8_value, v8::Isolate* isolate) {
  return V8PerIsolateData::From(isolate)->FindInstanceInPrototypeChain(
      V8DOMTokenList::GetWrapperTypeInfo(), v8_value);
}

DOMTokenList* V8DOMTokenList::ToImplWithTypeCheck(
    v8::Isolate* isolate, v8::Local<v8::Value> value) {
  return HasInstance(value, isolate) ? ToImpl(v8::Local<v8::Object>::Cast(value)) : nullptr;
}

DOMTokenList* NativeValueTraits<DOMTokenList>::NativeValue(
    v8::Isolate* isolate, v8::Local<v8::Value> value, ExceptionState& exception_state) {
  DOMTokenList* native_value = V8DOMTokenList::ToImplWithTypeCheck(isolate, value);
  if (!native_value) {
    exception_state.ThrowTypeError(ExceptionMessages::FailedToConvertJSValue(
        "DOMTokenList"));
  }
  return native_value;
}

}  // namespace blink
