// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated from the Jinja2 template
// third_party/blink/renderer/bindings/templates/interface.cc.tmpl
// by the script code_generator_v8.py.
// DO NOT MODIFY!

// clang-format off
#include "third_party/blink/renderer/bindings/core/v8/v8_dom_string_map.h"

#include <algorithm>

#include "base/memory/scoped_refptr.h"
#include "third_party/blink/renderer/bindings/core/v8/idl_types.h"
#include "third_party/blink/renderer/bindings/core/v8/native_value_traits_impl.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_dom_configuration.h"
#include "third_party/blink/renderer/core/execution_context/execution_context.h"
#include "third_party/blink/renderer/core/html/custom/ce_reactions_scope.h"
#include "third_party/blink/renderer/platform/bindings/exception_messages.h"
#include "third_party/blink/renderer/platform/bindings/exception_state.h"
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
const WrapperTypeInfo v8_dom_string_map_wrapper_type_info = {
    gin::kEmbedderBlink,
    V8DOMStringMap::DomTemplate,
    nullptr,
    "DOMStringMap",
    nullptr,
    WrapperTypeInfo::kWrapperTypeObjectPrototype,
    WrapperTypeInfo::kObjectClassId,
    WrapperTypeInfo::kNotInheritFromActiveScriptWrappable,
};
#if defined(COMPONENT_BUILD) && defined(WIN32) && defined(__clang__)
#pragma clang diagnostic pop
#endif

// This static member must be declared by DEFINE_WRAPPERTYPEINFO in DOMStringMap.h.
// For details, see the comment of DEFINE_WRAPPERTYPEINFO in
// platform/bindings/ScriptWrappable.h.
const WrapperTypeInfo& DOMStringMap::wrapper_type_info_ = v8_dom_string_map_wrapper_type_info;

// not [ActiveScriptWrappable]
static_assert(
    !std::is_base_of<ActiveScriptWrappableBase, DOMStringMap>::value,
    "DOMStringMap inherits from ActiveScriptWrappable<>, but is not specifying "
    "[ActiveScriptWrappable] extended attribute in the IDL file.  "
    "Be consistent.");
static_assert(
    std::is_same<decltype(&DOMStringMap::HasPendingActivity),
                 decltype(&ScriptWrappable::HasPendingActivity)>::value,
    "DOMStringMap is overriding hasPendingActivity(), but is not specifying "
    "[ActiveScriptWrappable] extended attribute in the IDL file.  "
    "Be consistent.");

namespace dom_string_map_v8_internal {

static void NamedPropertyGetter(const AtomicString& name,
                                const v8::PropertyCallbackInfo<v8::Value>& info) {
  DOMStringMap* impl = V8DOMStringMap::ToImpl(info.Holder());
  String result = impl->item(name);
  if (result.IsNull())
    return;
  V8SetReturnValueString(info, result, info.GetIsolate());
}

static void NamedPropertySetter(
    const AtomicString& name,
    v8::Local<v8::Value> v8_value,
    const v8::PropertyCallbackInfo<v8::Value>& info) {
  const CString& name_in_utf8 = name.Utf8();
  ExceptionState exception_state(
      info.GetIsolate(),
      ExceptionState::kSetterContext,
      "DOMStringMap",
      name_in_utf8.data());
  CEReactionsScope ce_reactions_scope;

  DOMStringMap* impl = V8DOMStringMap::ToImpl(info.Holder());
  V8StringResource<> property_value = v8_value;
  if (!property_value.Prepare())
    return;

  bool result = impl->AnonymousNamedSetter(name, property_value, exception_state);
  if (exception_state.HadException())
    return;
  if (!result)
    return;
  V8SetReturnValue(info, v8_value);
}

static void NamedPropertyDeleter(
    const AtomicString& name, const v8::PropertyCallbackInfo<v8::Boolean>& info) {
  CEReactionsScope ce_reactions_scope;

  DOMStringMap* impl = V8DOMStringMap::ToImpl(info.Holder());

  DeleteResult result = impl->AnonymousNamedDeleter(name);
  if (result == kDeleteUnknownProperty)
    return;
  V8SetReturnValue(info, result == kDeleteSuccess);
}

template <typename T>
static void NamedPropertyQuery(
    const AtomicString& name, const v8::PropertyCallbackInfo<T>& info) {
  const CString& name_in_utf8 = name.Utf8();
  ExceptionState exception_state(
      info.GetIsolate(),
      ExceptionState::kGetterContext,
      "DOMStringMap",
      name_in_utf8.data());

  DOMStringMap* impl = V8DOMStringMap::ToImpl(info.Holder());

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

static void NamedPropertyDescriptor(
    uint32_t index, const v8::PropertyCallbackInfo<v8::Value>& info) {
  // This function is called when an IDL interface supports named properties
  // but not indexed properties. When a numeric property is queried, V8 calls
  // indexedPropertyDescriptorCallback(), which calls this function.

  // Since we initialize our indexed and named property handlers differently
  // (the former use descriptors and definers, the latter uses a query
  // callback), we need to inefficiently call the query callback and convert
  // the v8::PropertyAttribute integer it returns into a v8::PropertyDescriptor
  // expected by a descriptor callback.
  // TODO(rakuco): remove this hack once we switch named property handlers to
  // using descriptor and definer callbacks (bug 764633).
  const AtomicString& index_as_name = AtomicString::Number(index);
  dom_string_map_v8_internal::NamedPropertyQuery(index_as_name, info);
  v8::Local<v8::Value> getter_value = info.GetReturnValue().Get();
  if (!getter_value->IsUndefined()) {
    DCHECK(getter_value->IsInt32());
    const int32_t props =
        getter_value->ToInt32(info.GetIsolate()->GetCurrentContext())
            .ToLocalChecked()
            ->Value();
    v8::PropertyDescriptor desc(V8String(info.GetIsolate(), index_as_name),
                                !(props & v8::ReadOnly));
    desc.set_enumerable(!(props & v8::DontEnum));
    desc.set_configurable(!(props & v8::DontDelete));
    V8SetReturnValue(info, desc);
  }
}

static void NamedPropertyEnumerator(const v8::PropertyCallbackInfo<v8::Array>& info) {
  ExceptionState exception_state(
      info.GetIsolate(),
      ExceptionState::kEnumerationContext,
      "DOMStringMap");

  DOMStringMap* impl = V8DOMStringMap::ToImpl(info.Holder());

  Vector<String> names;
  impl->NamedPropertyEnumerator(names, exception_state);
  if (exception_state.HadException())
    return;
  V8SetReturnValue(info, ToV8(names, info.Holder(), info.GetIsolate()).As<v8::Array>());
}

}  // namespace dom_string_map_v8_internal

void V8DOMStringMap::NamedPropertyGetterCallback(
    v8::Local<v8::Name> name, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMStringMap_NamedPropertyGetter");

  if (!name->IsString())
    return;
  const AtomicString& property_name = ToCoreAtomicString(name.As<v8::String>());

  dom_string_map_v8_internal::NamedPropertyGetter(property_name, info);
}

void V8DOMStringMap::NamedPropertySetterCallback(
    v8::Local<v8::Name> name,
    v8::Local<v8::Value> v8_value,
    const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMStringMap_NamedPropertySetter");

  if (!name->IsString())
    return;
  const AtomicString& property_name = ToCoreAtomicString(name.As<v8::String>());

  dom_string_map_v8_internal::NamedPropertySetter(property_name, v8_value, info);
}

void V8DOMStringMap::NamedPropertyDeleterCallback(
    v8::Local<v8::Name> name, const v8::PropertyCallbackInfo<v8::Boolean>& info) {
  if (!name->IsString())
    return;
  const AtomicString& property_name = ToCoreAtomicString(name.As<v8::String>());

  dom_string_map_v8_internal::NamedPropertyDeleter(property_name, info);
}

void V8DOMStringMap::NamedPropertyQueryCallback(
    v8::Local<v8::Name> name, const v8::PropertyCallbackInfo<v8::Integer>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMStringMap_NamedPropertyQuery");

  if (!name->IsString())
    return;
  const AtomicString& property_name = ToCoreAtomicString(name.As<v8::String>());

  dom_string_map_v8_internal::NamedPropertyQuery(property_name, info);
}

void V8DOMStringMap::NamedPropertyEnumeratorCallback(
    const v8::PropertyCallbackInfo<v8::Array>& info) {
  dom_string_map_v8_internal::NamedPropertyEnumerator(info);
}

void V8DOMStringMap::IndexedPropertyGetterCallback(
    uint32_t index, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMStringMap_IndexedPropertyGetter");

  const AtomicString& property_name = AtomicString::Number(index);

  dom_string_map_v8_internal::NamedPropertyGetter(property_name, info);
}

void V8DOMStringMap::IndexedPropertyDescriptorCallback(
    uint32_t index, const v8::PropertyCallbackInfo<v8::Value>& info) {
  dom_string_map_v8_internal::NamedPropertyDescriptor(index, info);
}

void V8DOMStringMap::IndexedPropertySetterCallback(
    uint32_t index,
    v8::Local<v8::Value> v8_value,
    const v8::PropertyCallbackInfo<v8::Value>& info) {
  const AtomicString& property_name = AtomicString::Number(index);

  dom_string_map_v8_internal::NamedPropertySetter(property_name, v8_value, info);
}

void V8DOMStringMap::IndexedPropertyDeleterCallback(
    uint32_t index, const v8::PropertyCallbackInfo<v8::Boolean>& info) {
  const AtomicString& property_name = AtomicString::Number(index);

  dom_string_map_v8_internal::NamedPropertyDeleter(property_name, info);
}

static void InstallV8DOMStringMapTemplate(
    v8::Isolate* isolate,
    const DOMWrapperWorld& world,
    v8::Local<v8::FunctionTemplate> interface_template) {
  // Initialize the interface object's template.
  V8DOMConfiguration::InitializeDOMInterfaceTemplate(isolate, interface_template, V8DOMStringMap::GetWrapperTypeInfo()->interface_name, v8::Local<v8::FunctionTemplate>(), V8DOMStringMap::kInternalFieldCount);

  v8::Local<v8::Signature> signature = v8::Signature::New(isolate, interface_template);
  ALLOW_UNUSED_LOCAL(signature);
  v8::Local<v8::ObjectTemplate> instance_template = interface_template->InstanceTemplate();
  ALLOW_UNUSED_LOCAL(instance_template);
  v8::Local<v8::ObjectTemplate> prototype_template = interface_template->PrototypeTemplate();
  ALLOW_UNUSED_LOCAL(prototype_template);

  // Register IDL constants, attributes and operations.

  // Indexed properties
  v8::IndexedPropertyHandlerConfiguration indexedPropertyHandlerConfig(
      V8DOMStringMap::IndexedPropertyGetterCallback,
      V8DOMStringMap::IndexedPropertySetterCallback,
      V8DOMStringMap::IndexedPropertyDescriptorCallback,
      V8DOMStringMap::IndexedPropertyDeleterCallback,
      nullptr,
      nullptr,
      v8::Local<v8::Value>(),
      v8::PropertyHandlerFlags::kNone);
  instance_template->SetHandler(indexedPropertyHandlerConfig);
  // Named properties
  v8::NamedPropertyHandlerConfiguration namedPropertyHandlerConfig(V8DOMStringMap::NamedPropertyGetterCallback, V8DOMStringMap::NamedPropertySetterCallback, V8DOMStringMap::NamedPropertyQueryCallback, V8DOMStringMap::NamedPropertyDeleterCallback, V8DOMStringMap::NamedPropertyEnumeratorCallback, v8::Local<v8::Value>(), static_cast<v8::PropertyHandlerFlags>(int(v8::PropertyHandlerFlags::kOnlyInterceptStrings)));
  instance_template->SetHandler(namedPropertyHandlerConfig);

  // Custom signature

  V8DOMStringMap::InstallRuntimeEnabledFeaturesOnTemplate(
      isolate, world, interface_template);
}

void V8DOMStringMap::InstallRuntimeEnabledFeaturesOnTemplate(
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

v8::Local<v8::FunctionTemplate> V8DOMStringMap::DomTemplate(
    v8::Isolate* isolate, const DOMWrapperWorld& world) {
  return V8DOMConfiguration::DomClassTemplate(
      isolate, world, const_cast<WrapperTypeInfo*>(V8DOMStringMap::GetWrapperTypeInfo()),
      InstallV8DOMStringMapTemplate);
}

bool V8DOMStringMap::HasInstance(v8::Local<v8::Value> v8_value, v8::Isolate* isolate) {
  return V8PerIsolateData::From(isolate)->HasInstance(V8DOMStringMap::GetWrapperTypeInfo(), v8_value);
}

v8::Local<v8::Object> V8DOMStringMap::FindInstanceInPrototypeChain(
    v8::Local<v8::Value> v8_value, v8::Isolate* isolate) {
  return V8PerIsolateData::From(isolate)->FindInstanceInPrototypeChain(
      V8DOMStringMap::GetWrapperTypeInfo(), v8_value);
}

DOMStringMap* V8DOMStringMap::ToImplWithTypeCheck(
    v8::Isolate* isolate, v8::Local<v8::Value> value) {
  return HasInstance(value, isolate) ? ToImpl(v8::Local<v8::Object>::Cast(value)) : nullptr;
}

DOMStringMap* NativeValueTraits<DOMStringMap>::NativeValue(
    v8::Isolate* isolate, v8::Local<v8::Value> value, ExceptionState& exception_state) {
  DOMStringMap* native_value = V8DOMStringMap::ToImplWithTypeCheck(isolate, value);
  if (!native_value) {
    exception_state.ThrowTypeError(ExceptionMessages::FailedToConvertJSValue(
        "DOMStringMap"));
  }
  return native_value;
}

}  // namespace blink
