// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated from the Jinja2 template
// third_party/blink/renderer/bindings/templates/interface.cc.tmpl
// by the script code_generator_v8.py.
// DO NOT MODIFY!

// clang-format off
#include "third_party/blink/renderer/bindings/core/v8/v8_svg_number_list.h"

#include <algorithm>

#include "base/memory/scoped_refptr.h"
#include "third_party/blink/renderer/bindings/core/v8/idl_types.h"
#include "third_party/blink/renderer/bindings/core/v8/native_value_traits_impl.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_dom_configuration.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_svg_number.h"
#include "third_party/blink/renderer/core/execution_context/execution_context.h"
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
const WrapperTypeInfo v8_svg_number_list_wrapper_type_info = {
    gin::kEmbedderBlink,
    V8SVGNumberList::DomTemplate,
    nullptr,
    "SVGNumberList",
    nullptr,
    WrapperTypeInfo::kWrapperTypeObjectPrototype,
    WrapperTypeInfo::kObjectClassId,
    WrapperTypeInfo::kNotInheritFromActiveScriptWrappable,
};
#if defined(COMPONENT_BUILD) && defined(WIN32) && defined(__clang__)
#pragma clang diagnostic pop
#endif

// This static member must be declared by DEFINE_WRAPPERTYPEINFO in SVGNumberListTearOff.h.
// For details, see the comment of DEFINE_WRAPPERTYPEINFO in
// platform/bindings/ScriptWrappable.h.
const WrapperTypeInfo& SVGNumberListTearOff::wrapper_type_info_ = v8_svg_number_list_wrapper_type_info;

// not [ActiveScriptWrappable]
static_assert(
    !std::is_base_of<ActiveScriptWrappableBase, SVGNumberListTearOff>::value,
    "SVGNumberListTearOff inherits from ActiveScriptWrappable<>, but is not specifying "
    "[ActiveScriptWrappable] extended attribute in the IDL file.  "
    "Be consistent.");
static_assert(
    std::is_same<decltype(&SVGNumberListTearOff::HasPendingActivity),
                 decltype(&ScriptWrappable::HasPendingActivity)>::value,
    "SVGNumberListTearOff is overriding hasPendingActivity(), but is not specifying "
    "[ActiveScriptWrappable] extended attribute in the IDL file.  "
    "Be consistent.");

namespace svg_number_list_tear_off_v8_internal {

static void LengthAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  SVGNumberListTearOff* impl = V8SVGNumberList::ToImpl(holder);

  V8SetReturnValueUnsigned(info, impl->length());
}

static void NumberOfItemsAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  SVGNumberListTearOff* impl = V8SVGNumberList::ToImpl(holder);

  V8SetReturnValueUnsigned(info, impl->length());
}

static void ClearMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exception_state(info.GetIsolate(), ExceptionState::kExecutionContext, "SVGNumberList", "clear");

  SVGNumberListTearOff* impl = V8SVGNumberList::ToImpl(info.Holder());

  impl->clear(exception_state);
  if (exception_state.HadException()) {
    return;
  }
}

static void InitializeMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exception_state(info.GetIsolate(), ExceptionState::kExecutionContext, "SVGNumberList", "initialize");

  SVGNumberListTearOff* impl = V8SVGNumberList::ToImpl(info.Holder());

  if (UNLIKELY(info.Length() < 1)) {
    exception_state.ThrowTypeError(ExceptionMessages::NotEnoughArguments(1, info.Length()));
    return;
  }

  SVGNumberTearOff* new_item;
  new_item = V8SVGNumber::ToImplWithTypeCheck(info.GetIsolate(), info[0]);
  if (!new_item) {
    exception_state.ThrowTypeError("parameter 1 is not of type 'SVGNumber'.");
    return;
  }

  SVGNumberTearOff* result = impl->initialize(new_item, exception_state);
  if (exception_state.HadException()) {
    return;
  }
  V8SetReturnValue(info, result);
}

static void GetItemMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exception_state(info.GetIsolate(), ExceptionState::kExecutionContext, "SVGNumberList", "getItem");

  SVGNumberListTearOff* impl = V8SVGNumberList::ToImpl(info.Holder());

  if (UNLIKELY(info.Length() < 1)) {
    exception_state.ThrowTypeError(ExceptionMessages::NotEnoughArguments(1, info.Length()));
    return;
  }

  uint32_t index;
  index = NativeValueTraits<IDLUnsignedLong>::NativeValue(info.GetIsolate(), info[0], exception_state);
  if (exception_state.HadException())
    return;

  SVGNumberTearOff* result = impl->getItem(index, exception_state);
  if (exception_state.HadException()) {
    return;
  }
  V8SetReturnValue(info, result);
}

static void InsertItemBeforeMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exception_state(info.GetIsolate(), ExceptionState::kExecutionContext, "SVGNumberList", "insertItemBefore");

  SVGNumberListTearOff* impl = V8SVGNumberList::ToImpl(info.Holder());

  if (UNLIKELY(info.Length() < 2)) {
    exception_state.ThrowTypeError(ExceptionMessages::NotEnoughArguments(2, info.Length()));
    return;
  }

  SVGNumberTearOff* new_item;
  uint32_t index;
  new_item = V8SVGNumber::ToImplWithTypeCheck(info.GetIsolate(), info[0]);
  if (!new_item) {
    exception_state.ThrowTypeError("parameter 1 is not of type 'SVGNumber'.");
    return;
  }

  index = NativeValueTraits<IDLUnsignedLong>::NativeValue(info.GetIsolate(), info[1], exception_state);
  if (exception_state.HadException())
    return;

  SVGNumberTearOff* result = impl->insertItemBefore(new_item, index, exception_state);
  if (exception_state.HadException()) {
    return;
  }
  V8SetReturnValue(info, result);
}

static void ReplaceItemMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exception_state(info.GetIsolate(), ExceptionState::kExecutionContext, "SVGNumberList", "replaceItem");

  SVGNumberListTearOff* impl = V8SVGNumberList::ToImpl(info.Holder());

  if (UNLIKELY(info.Length() < 2)) {
    exception_state.ThrowTypeError(ExceptionMessages::NotEnoughArguments(2, info.Length()));
    return;
  }

  SVGNumberTearOff* new_item;
  uint32_t index;
  new_item = V8SVGNumber::ToImplWithTypeCheck(info.GetIsolate(), info[0]);
  if (!new_item) {
    exception_state.ThrowTypeError("parameter 1 is not of type 'SVGNumber'.");
    return;
  }

  index = NativeValueTraits<IDLUnsignedLong>::NativeValue(info.GetIsolate(), info[1], exception_state);
  if (exception_state.HadException())
    return;

  SVGNumberTearOff* result = impl->replaceItem(new_item, index, exception_state);
  if (exception_state.HadException()) {
    return;
  }
  V8SetReturnValue(info, result);
}

static void RemoveItemMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exception_state(info.GetIsolate(), ExceptionState::kExecutionContext, "SVGNumberList", "removeItem");

  SVGNumberListTearOff* impl = V8SVGNumberList::ToImpl(info.Holder());

  if (UNLIKELY(info.Length() < 1)) {
    exception_state.ThrowTypeError(ExceptionMessages::NotEnoughArguments(1, info.Length()));
    return;
  }

  uint32_t index;
  index = NativeValueTraits<IDLUnsignedLong>::NativeValue(info.GetIsolate(), info[0], exception_state);
  if (exception_state.HadException())
    return;

  SVGNumberTearOff* result = impl->removeItem(index, exception_state);
  if (exception_state.HadException()) {
    return;
  }
  V8SetReturnValue(info, result);
}

static void AppendItemMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exception_state(info.GetIsolate(), ExceptionState::kExecutionContext, "SVGNumberList", "appendItem");

  SVGNumberListTearOff* impl = V8SVGNumberList::ToImpl(info.Holder());

  if (UNLIKELY(info.Length() < 1)) {
    exception_state.ThrowTypeError(ExceptionMessages::NotEnoughArguments(1, info.Length()));
    return;
  }

  SVGNumberTearOff* new_item;
  new_item = V8SVGNumber::ToImplWithTypeCheck(info.GetIsolate(), info[0]);
  if (!new_item) {
    exception_state.ThrowTypeError("parameter 1 is not of type 'SVGNumber'.");
    return;
  }

  SVGNumberTearOff* result = impl->appendItem(new_item, exception_state);
  if (exception_state.HadException()) {
    return;
  }
  V8SetReturnValue(info, result);
}

static void IndexedPropertyGetter(
    uint32_t index,
    const v8::PropertyCallbackInfo<v8::Value>& info) {
  ExceptionState exception_state(info.GetIsolate(), ExceptionState::kIndexedGetterContext, "SVGNumberList");

  SVGNumberListTearOff* impl = V8SVGNumberList::ToImpl(info.Holder());

  // We assume that all the implementations support length() method, although
  // the spec doesn't require that length() must exist.  It's okay that
  // the interface does not have length attribute as long as the
  // implementation supports length() member function.
  if (index >= impl->length())
    return;  // Returns undefined due to out-of-range.

  SVGNumberTearOff* result = impl->getItem(index, exception_state);
  V8SetReturnValueFast(info, result, impl);
}

static void IndexedPropertyDescriptor(
    uint32_t index, const v8::PropertyCallbackInfo<v8::Value>& info) {
  // https://heycam.github.io/webidl/#LegacyPlatformObjectGetOwnProperty
  // Steps 1.1 to 1.2.4 are covered here: we rely on indexedPropertyGetter() to
  // call the getter function and check that |index| is a valid property index,
  // in which case it will have set info.GetReturnValue() to something other
  // than undefined.
  V8SVGNumberList::IndexedPropertyGetterCallback(index, info);
  v8::Local<v8::Value> getter_value = info.GetReturnValue().Get();
  if (!getter_value->IsUndefined()) {
    // 1.2.5. Let |desc| be a newly created Property Descriptor with no fields.
    // 1.2.6. Set desc.[[Value]] to the result of converting value to an
    //        ECMAScript value.
    // 1.2.7. If O implements an interface with an indexed property setter,
    //        then set desc.[[Writable]] to true, otherwise set it to false.
    v8::PropertyDescriptor desc(getter_value, true);
    // 1.2.8. Set desc.[[Enumerable]] and desc.[[Configurable]] to true.
    desc.set_enumerable(true);
    desc.set_configurable(true);
    // 1.2.9. Return |desc|.
    V8SetReturnValue(info, desc);
  }
}

static void IndexedPropertySetter(
    uint32_t index,
    v8::Local<v8::Value> v8_value,
    const v8::PropertyCallbackInfo<v8::Value>& info) {
  ExceptionState exception_state(
      info.GetIsolate(),
      ExceptionState::kIndexedSetterContext,
      "SVGNumberList");

  SVGNumberListTearOff* impl = V8SVGNumberList::ToImpl(info.Holder());
  SVGNumberTearOff* property_value = V8SVGNumber::ToImplWithTypeCheck(info.GetIsolate(), v8_value);
  if (!property_value) {
    exception_state.ThrowTypeError("The provided value is not of type 'SVGNumber'.");
    return;
  }

  bool result = impl->AnonymousIndexedSetter(index, property_value, exception_state);
  if (exception_state.HadException())
    return;
  if (!result)
    return;
  V8SetReturnValue(info, v8_value);
}

}  // namespace svg_number_list_tear_off_v8_internal

void V8SVGNumberList::LengthAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_SVGNumberListTearOff_length_Getter");

  svg_number_list_tear_off_v8_internal::LengthAttributeGetter(info);
}

void V8SVGNumberList::NumberOfItemsAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_SVGNumberListTearOff_numberOfItems_Getter");

  svg_number_list_tear_off_v8_internal::NumberOfItemsAttributeGetter(info);
}

void V8SVGNumberList::ClearMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_SVGNumberListTearOff_clear");

  svg_number_list_tear_off_v8_internal::ClearMethod(info);
}

void V8SVGNumberList::InitializeMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_SVGNumberListTearOff_initialize");

  svg_number_list_tear_off_v8_internal::InitializeMethod(info);
}

void V8SVGNumberList::GetItemMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_SVGNumberListTearOff_getItem");

  svg_number_list_tear_off_v8_internal::GetItemMethod(info);
}

void V8SVGNumberList::InsertItemBeforeMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_SVGNumberListTearOff_insertItemBefore");

  svg_number_list_tear_off_v8_internal::InsertItemBeforeMethod(info);
}

void V8SVGNumberList::ReplaceItemMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_SVGNumberListTearOff_replaceItem");

  svg_number_list_tear_off_v8_internal::ReplaceItemMethod(info);
}

void V8SVGNumberList::RemoveItemMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_SVGNumberListTearOff_removeItem");

  svg_number_list_tear_off_v8_internal::RemoveItemMethod(info);
}

void V8SVGNumberList::AppendItemMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_SVGNumberListTearOff_appendItem");

  svg_number_list_tear_off_v8_internal::AppendItemMethod(info);
}

void V8SVGNumberList::IndexedPropertyGetterCallback(
    uint32_t index, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_SVGNumberListTearOff_IndexedPropertyGetter");

  svg_number_list_tear_off_v8_internal::IndexedPropertyGetter(index, info);
}

void V8SVGNumberList::IndexedPropertyDescriptorCallback(
    uint32_t index, const v8::PropertyCallbackInfo<v8::Value>& info) {
  svg_number_list_tear_off_v8_internal::IndexedPropertyDescriptor(index, info);
}

void V8SVGNumberList::IndexedPropertySetterCallback(
    uint32_t index,
    v8::Local<v8::Value> v8_value,
    const v8::PropertyCallbackInfo<v8::Value>& info) {
  svg_number_list_tear_off_v8_internal::IndexedPropertySetter(index, v8_value, info);
}

void V8SVGNumberList::IndexedPropertyDefinerCallback(
    uint32_t index,
    const v8::PropertyDescriptor& desc,
    const v8::PropertyCallbackInfo<v8::Value>& info) {
  // https://heycam.github.io/webidl/#legacy-platform-object-defineownproperty
  // 3.9.3. [[DefineOwnProperty]]
  // step 1.1. If the result of calling IsDataDescriptor(Desc) is false, then
  //   return false.
  if (desc.has_get() || desc.has_set()) {
    V8SetReturnValue(info, v8::Null(info.GetIsolate()));
    if (info.ShouldThrowOnError()) {
      ExceptionState exception_state(info.GetIsolate(),
                                     ExceptionState::kIndexedSetterContext,
                                     "SVGNumberList");
      exception_state.ThrowTypeError("Accessor properties are not allowed.");
    }
    return;
  }

  // Return nothing and fall back to indexedPropertySetterCallback.
}

static constexpr V8DOMConfiguration::AccessorConfiguration kV8SVGNumberListAccessors[] = {
    { "length", V8SVGNumberList::LengthAttributeGetterCallback, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
    { "numberOfItems", V8SVGNumberList::NumberOfItemsAttributeGetterCallback, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
};

static constexpr V8DOMConfiguration::MethodConfiguration kV8SVGNumberListMethods[] = {
    {"clear", V8SVGNumberList::ClearMethodCallback, 0, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"initialize", V8SVGNumberList::InitializeMethodCallback, 1, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"getItem", V8SVGNumberList::GetItemMethodCallback, 1, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"insertItemBefore", V8SVGNumberList::InsertItemBeforeMethodCallback, 2, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"replaceItem", V8SVGNumberList::ReplaceItemMethodCallback, 2, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"removeItem", V8SVGNumberList::RemoveItemMethodCallback, 1, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"appendItem", V8SVGNumberList::AppendItemMethodCallback, 1, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
};

static void InstallV8SVGNumberListTemplate(
    v8::Isolate* isolate,
    const DOMWrapperWorld& world,
    v8::Local<v8::FunctionTemplate> interface_template) {
  // Initialize the interface object's template.
  V8DOMConfiguration::InitializeDOMInterfaceTemplate(isolate, interface_template, V8SVGNumberList::GetWrapperTypeInfo()->interface_name, v8::Local<v8::FunctionTemplate>(), V8SVGNumberList::kInternalFieldCount);

  v8::Local<v8::Signature> signature = v8::Signature::New(isolate, interface_template);
  ALLOW_UNUSED_LOCAL(signature);
  v8::Local<v8::ObjectTemplate> instance_template = interface_template->InstanceTemplate();
  ALLOW_UNUSED_LOCAL(instance_template);
  v8::Local<v8::ObjectTemplate> prototype_template = interface_template->PrototypeTemplate();
  ALLOW_UNUSED_LOCAL(prototype_template);

  // Register IDL constants, attributes and operations.
  V8DOMConfiguration::InstallAccessors(
      isolate, world, instance_template, prototype_template, interface_template,
      signature, kV8SVGNumberListAccessors, base::size(kV8SVGNumberListAccessors));
  V8DOMConfiguration::InstallMethods(
      isolate, world, instance_template, prototype_template, interface_template,
      signature, kV8SVGNumberListMethods, base::size(kV8SVGNumberListMethods));

  // Indexed properties
  v8::IndexedPropertyHandlerConfiguration indexedPropertyHandlerConfig(
      V8SVGNumberList::IndexedPropertyGetterCallback,
      V8SVGNumberList::IndexedPropertySetterCallback,
      V8SVGNumberList::IndexedPropertyDescriptorCallback,
      nullptr,
      IndexedPropertyEnumerator<SVGNumberListTearOff>,
      V8SVGNumberList::IndexedPropertyDefinerCallback,
      v8::Local<v8::Value>(),
      v8::PropertyHandlerFlags::kNone);
  instance_template->SetHandler(indexedPropertyHandlerConfig);

  // Array iterator (@@iterator)
  prototype_template->SetIntrinsicDataProperty(v8::Symbol::GetIterator(isolate), v8::kArrayProto_values, v8::DontEnum);

  // Custom signature

  V8SVGNumberList::InstallRuntimeEnabledFeaturesOnTemplate(
      isolate, world, interface_template);
}

void V8SVGNumberList::InstallRuntimeEnabledFeaturesOnTemplate(
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

v8::Local<v8::FunctionTemplate> V8SVGNumberList::DomTemplate(
    v8::Isolate* isolate, const DOMWrapperWorld& world) {
  return V8DOMConfiguration::DomClassTemplate(
      isolate, world, const_cast<WrapperTypeInfo*>(V8SVGNumberList::GetWrapperTypeInfo()),
      InstallV8SVGNumberListTemplate);
}

bool V8SVGNumberList::HasInstance(v8::Local<v8::Value> v8_value, v8::Isolate* isolate) {
  return V8PerIsolateData::From(isolate)->HasInstance(V8SVGNumberList::GetWrapperTypeInfo(), v8_value);
}

v8::Local<v8::Object> V8SVGNumberList::FindInstanceInPrototypeChain(
    v8::Local<v8::Value> v8_value, v8::Isolate* isolate) {
  return V8PerIsolateData::From(isolate)->FindInstanceInPrototypeChain(
      V8SVGNumberList::GetWrapperTypeInfo(), v8_value);
}

SVGNumberListTearOff* V8SVGNumberList::ToImplWithTypeCheck(
    v8::Isolate* isolate, v8::Local<v8::Value> value) {
  return HasInstance(value, isolate) ? ToImpl(v8::Local<v8::Object>::Cast(value)) : nullptr;
}

SVGNumberListTearOff* NativeValueTraits<SVGNumberListTearOff>::NativeValue(
    v8::Isolate* isolate, v8::Local<v8::Value> value, ExceptionState& exception_state) {
  SVGNumberListTearOff* native_value = V8SVGNumberList::ToImplWithTypeCheck(isolate, value);
  if (!native_value) {
    exception_state.ThrowTypeError(ExceptionMessages::FailedToConvertJSValue(
        "SVGNumberList"));
  }
  return native_value;
}

}  // namespace blink
