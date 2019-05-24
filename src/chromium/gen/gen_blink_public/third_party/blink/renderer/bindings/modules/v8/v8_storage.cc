// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated from the Jinja2 template
// third_party/blink/renderer/bindings/templates/interface.cc.tmpl
// by the script code_generator_v8.py.
// DO NOT MODIFY!

// clang-format off
#include "third_party/blink/renderer/bindings/modules/v8/v8_storage.h"

#include <algorithm>

#include "base/memory/scoped_refptr.h"
#include "third_party/blink/renderer/bindings/core/v8/idl_types.h"
#include "third_party/blink/renderer/bindings/core/v8/native_value_traits_impl.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_dom_configuration.h"
#include "third_party/blink/renderer/core/execution_context/execution_context.h"
#include "third_party/blink/renderer/platform/bindings/exception_messages.h"
#include "third_party/blink/renderer/platform/bindings/exception_state.h"
#include "third_party/blink/renderer/platform/bindings/runtime_call_stats.h"
#include "third_party/blink/renderer/platform/bindings/v8_dom_activity_logger.h"
#include "third_party/blink/renderer/platform/bindings/v8_object_constructor.h"
#include "third_party/blink/renderer/platform/bindings/v8_per_context_data.h"
#include "third_party/blink/renderer/platform/scheduler/public/cooperative_scheduling_manager.h"
#include "third_party/blink/renderer/platform/wtf/get_ptr.h"

namespace blink {

// Suppress warning: global constructors, because struct WrapperTypeInfo is trivial
// and does not depend on another global objects.
#if defined(COMPONENT_BUILD) && defined(WIN32) && defined(__clang__)
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wglobal-constructors"
#endif
const WrapperTypeInfo v8_storage_wrapper_type_info = {
    gin::kEmbedderBlink,
    V8Storage::DomTemplate,
    nullptr,
    "Storage",
    nullptr,
    WrapperTypeInfo::kWrapperTypeObjectPrototype,
    WrapperTypeInfo::kObjectClassId,
    WrapperTypeInfo::kNotInheritFromActiveScriptWrappable,
};
#if defined(COMPONENT_BUILD) && defined(WIN32) && defined(__clang__)
#pragma clang diagnostic pop
#endif

// This static member must be declared by DEFINE_WRAPPERTYPEINFO in StorageArea.h.
// For details, see the comment of DEFINE_WRAPPERTYPEINFO in
// platform/bindings/ScriptWrappable.h.
const WrapperTypeInfo& StorageArea::wrapper_type_info_ = v8_storage_wrapper_type_info;

// not [ActiveScriptWrappable]
static_assert(
    !std::is_base_of<ActiveScriptWrappableBase, StorageArea>::value,
    "StorageArea inherits from ActiveScriptWrappable<>, but is not specifying "
    "[ActiveScriptWrappable] extended attribute in the IDL file.  "
    "Be consistent.");
static_assert(
    std::is_same<decltype(&StorageArea::HasPendingActivity),
                 decltype(&ScriptWrappable::HasPendingActivity)>::value,
    "StorageArea is overriding hasPendingActivity(), but is not specifying "
    "[ActiveScriptWrappable] extended attribute in the IDL file.  "
    "Be consistent.");

namespace storage_area_v8_internal {

static void LengthAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  StorageArea* impl = V8Storage::ToImpl(holder);

  ExceptionState exception_state(info.GetIsolate(), ExceptionState::kGetterContext, "Storage", "length");

  uint32_t cpp_value(impl->length(exception_state));

  if (UNLIKELY(exception_state.HadException()))
    return;

  V8SetReturnValueUnsigned(info, cpp_value);
}

static void KeyMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exception_state(info.GetIsolate(), ExceptionState::kExecutionContext, "Storage", "key");

  StorageArea* impl = V8Storage::ToImpl(info.Holder());

  if (UNLIKELY(info.Length() < 1)) {
    exception_state.ThrowTypeError(ExceptionMessages::NotEnoughArguments(1, info.Length()));
    return;
  }

  uint32_t index;
  index = NativeValueTraits<IDLUnsignedLong>::NativeValue(info.GetIsolate(), info[0], exception_state);
  if (exception_state.HadException())
    return;

  String result = impl->key(index, exception_state);
  if (exception_state.HadException()) {
    return;
  }
  V8SetReturnValueStringOrNull(info, result, info.GetIsolate());
}

static void GetItemMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exception_state(info.GetIsolate(), ExceptionState::kExecutionContext, "Storage", "getItem");

  StorageArea* impl = V8Storage::ToImpl(info.Holder());

  if (UNLIKELY(info.Length() < 1)) {
    exception_state.ThrowTypeError(ExceptionMessages::NotEnoughArguments(1, info.Length()));
    return;
  }

  V8StringResource<> key;
  key = info[0];
  if (!key.Prepare())
    return;

  String result = impl->getItem(key, exception_state);
  if (exception_state.HadException()) {
    return;
  }
  V8SetReturnValueStringOrNull(info, result, info.GetIsolate());
}

static void SetItemMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exception_state(info.GetIsolate(), ExceptionState::kExecutionContext, "Storage", "setItem");

  StorageArea* impl = V8Storage::ToImpl(info.Holder());

  if (UNLIKELY(info.Length() < 2)) {
    exception_state.ThrowTypeError(ExceptionMessages::NotEnoughArguments(2, info.Length()));
    return;
  }

  V8StringResource<> key;
  V8StringResource<> value;
  key = info[0];
  if (!key.Prepare())
    return;

  value = info[1];
  if (!value.Prepare())
    return;

  impl->setItem(key, value, exception_state);
  if (exception_state.HadException()) {
    return;
  }
}

static void RemoveItemMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exception_state(info.GetIsolate(), ExceptionState::kExecutionContext, "Storage", "removeItem");

  StorageArea* impl = V8Storage::ToImpl(info.Holder());

  if (UNLIKELY(info.Length() < 1)) {
    exception_state.ThrowTypeError(ExceptionMessages::NotEnoughArguments(1, info.Length()));
    return;
  }

  V8StringResource<> key;
  key = info[0];
  if (!key.Prepare())
    return;

  impl->removeItem(key, exception_state);
  if (exception_state.HadException()) {
    return;
  }
}

static void ClearMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exception_state(info.GetIsolate(), ExceptionState::kExecutionContext, "Storage", "clear");

  StorageArea* impl = V8Storage::ToImpl(info.Holder());

  impl->clear(exception_state);
  if (exception_state.HadException()) {
    return;
  }
}

static void NamedPropertyGetter(const AtomicString& name,
                                const v8::PropertyCallbackInfo<v8::Value>& info) {
  const CString& name_in_utf8 = name.Utf8();
  ExceptionState exception_state(
      info.GetIsolate(),
      ExceptionState::kGetterContext,
      "Storage",
      name_in_utf8.data());

  StorageArea* impl = V8Storage::ToImpl(info.Holder());
  String result = impl->getItem(name, exception_state);
  if (result.IsNull())
    return;
  V8SetReturnValueStringOrNull(info, result, info.GetIsolate());
}

static void NamedPropertySetter(
    const AtomicString& name,
    v8::Local<v8::Value> v8_value,
    const v8::PropertyCallbackInfo<v8::Value>& info) {
  const CString& name_in_utf8 = name.Utf8();
  ExceptionState exception_state(
      info.GetIsolate(),
      ExceptionState::kSetterContext,
      "Storage",
      name_in_utf8.data());

  StorageArea* impl = V8Storage::ToImpl(info.Holder());
  V8StringResource<> property_value = v8_value;
  if (!property_value.Prepare())
    return;

  bool result = impl->setItem(name, property_value, exception_state);
  if (exception_state.HadException())
    return;
  if (!result)
    return;
  V8SetReturnValue(info, v8_value);
}

static void NamedPropertyDeleter(
    const AtomicString& name, const v8::PropertyCallbackInfo<v8::Boolean>& info) {
  const CString& name_in_utf8 = name.Utf8();
  ExceptionState exception_state(
      info.GetIsolate(),
      ExceptionState::kDeletionContext,
      "Storage",
      name_in_utf8.data());

  StorageArea* impl = V8Storage::ToImpl(info.Holder());

  DeleteResult result = impl->removeItem(name, exception_state);
  if (exception_state.HadException())
    return;
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
      "Storage",
      name_in_utf8.data());

  StorageArea* impl = V8Storage::ToImpl(info.Holder());

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
  storage_area_v8_internal::NamedPropertyQuery(index_as_name, info);
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
      "Storage");

  StorageArea* impl = V8Storage::ToImpl(info.Holder());

  Vector<String> names;
  impl->NamedPropertyEnumerator(names, exception_state);
  if (exception_state.HadException())
    return;
  V8SetReturnValue(info, ToV8(names, info.Holder(), info.GetIsolate()).As<v8::Array>());
}

}  // namespace storage_area_v8_internal

void V8Storage::LengthAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_StorageArea_length_Getter");

  storage_area_v8_internal::LengthAttributeGetter(info);
}

void V8Storage::KeyMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_StorageArea_key");

  storage_area_v8_internal::KeyMethod(info);
}

void V8Storage::GetItemMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_StorageArea_getItem");

  ScriptState* script_state = ScriptState::ForRelevantRealm(info);
  V8PerContextData* context_data = script_state->PerContextData();
  if (context_data && context_data->ActivityLogger()) {
    context_data->ActivityLogger()->LogMethod("Storage.getItem", info);
  }
  storage_area_v8_internal::GetItemMethod(info);
}

void V8Storage::SetItemMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_StorageArea_setItem");

  ScriptState* script_state = ScriptState::ForRelevantRealm(info);
  V8PerContextData* context_data = script_state->PerContextData();
  if (context_data && context_data->ActivityLogger()) {
    context_data->ActivityLogger()->LogMethod("Storage.setItem", info);
  }
  storage_area_v8_internal::SetItemMethod(info);
}

void V8Storage::RemoveItemMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_StorageArea_removeItem");

  ScriptState* script_state = ScriptState::ForRelevantRealm(info);
  V8PerContextData* context_data = script_state->PerContextData();
  if (context_data && context_data->ActivityLogger()) {
    context_data->ActivityLogger()->LogMethod("Storage.removeItem", info);
  }
  storage_area_v8_internal::RemoveItemMethod(info);
}

void V8Storage::ClearMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_StorageArea_clear");

  ScriptState* script_state = ScriptState::ForRelevantRealm(info);
  V8PerContextData* context_data = script_state->PerContextData();
  if (context_data && context_data->ActivityLogger()) {
    context_data->ActivityLogger()->LogMethod("Storage.clear", info);
  }
  storage_area_v8_internal::ClearMethod(info);
}

void V8Storage::NamedPropertyGetterCallback(
    v8::Local<v8::Name> name, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_StorageArea_NamedPropertyGetter");

  if (!name->IsString())
    return;
  const AtomicString& property_name = ToCoreAtomicString(name.As<v8::String>());

  storage_area_v8_internal::NamedPropertyGetter(property_name, info);
}

void V8Storage::NamedPropertySetterCallback(
    v8::Local<v8::Name> name,
    v8::Local<v8::Value> v8_value,
    const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_StorageArea_NamedPropertySetter");

  if (!name->IsString())
    return;
  const AtomicString& property_name = ToCoreAtomicString(name.As<v8::String>());

  storage_area_v8_internal::NamedPropertySetter(property_name, v8_value, info);
}

void V8Storage::NamedPropertyDeleterCallback(
    v8::Local<v8::Name> name, const v8::PropertyCallbackInfo<v8::Boolean>& info) {
  if (!name->IsString())
    return;
  const AtomicString& property_name = ToCoreAtomicString(name.As<v8::String>());

  storage_area_v8_internal::NamedPropertyDeleter(property_name, info);
}

void V8Storage::NamedPropertyQueryCallback(
    v8::Local<v8::Name> name, const v8::PropertyCallbackInfo<v8::Integer>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_StorageArea_NamedPropertyQuery");

  if (!name->IsString())
    return;
  const AtomicString& property_name = ToCoreAtomicString(name.As<v8::String>());

  storage_area_v8_internal::NamedPropertyQuery(property_name, info);
}

void V8Storage::NamedPropertyEnumeratorCallback(
    const v8::PropertyCallbackInfo<v8::Array>& info) {
  storage_area_v8_internal::NamedPropertyEnumerator(info);
}

void V8Storage::IndexedPropertyGetterCallback(
    uint32_t index, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_StorageArea_IndexedPropertyGetter");

  const AtomicString& property_name = AtomicString::Number(index);

  storage_area_v8_internal::NamedPropertyGetter(property_name, info);
}

void V8Storage::IndexedPropertyDescriptorCallback(
    uint32_t index, const v8::PropertyCallbackInfo<v8::Value>& info) {
  storage_area_v8_internal::NamedPropertyDescriptor(index, info);
}

void V8Storage::IndexedPropertySetterCallback(
    uint32_t index,
    v8::Local<v8::Value> v8_value,
    const v8::PropertyCallbackInfo<v8::Value>& info) {
  const AtomicString& property_name = AtomicString::Number(index);

  storage_area_v8_internal::NamedPropertySetter(property_name, v8_value, info);
}

void V8Storage::IndexedPropertyDeleterCallback(
    uint32_t index, const v8::PropertyCallbackInfo<v8::Boolean>& info) {
  const AtomicString& property_name = AtomicString::Number(index);

  storage_area_v8_internal::NamedPropertyDeleter(property_name, info);
}

static constexpr V8DOMConfiguration::AccessorConfiguration kV8StorageAccessors[] = {
    { "length", V8Storage::LengthAttributeGetterCallback, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
};

static constexpr V8DOMConfiguration::MethodConfiguration kV8StorageMethods[] = {
    {"key", V8Storage::KeyMethodCallback, 1, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"getItem", V8Storage::GetItemMethodCallback, 1, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"setItem", V8Storage::SetItemMethodCallback, 2, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"removeItem", V8Storage::RemoveItemMethodCallback, 1, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"clear", V8Storage::ClearMethodCallback, 0, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
};

static void InstallV8StorageTemplate(
    v8::Isolate* isolate,
    const DOMWrapperWorld& world,
    v8::Local<v8::FunctionTemplate> interface_template) {
  // Initialize the interface object's template.
  V8DOMConfiguration::InitializeDOMInterfaceTemplate(isolate, interface_template, V8Storage::GetWrapperTypeInfo()->interface_name, v8::Local<v8::FunctionTemplate>(), V8Storage::kInternalFieldCount);

  v8::Local<v8::Signature> signature = v8::Signature::New(isolate, interface_template);
  ALLOW_UNUSED_LOCAL(signature);
  v8::Local<v8::ObjectTemplate> instance_template = interface_template->InstanceTemplate();
  ALLOW_UNUSED_LOCAL(instance_template);
  v8::Local<v8::ObjectTemplate> prototype_template = interface_template->PrototypeTemplate();
  ALLOW_UNUSED_LOCAL(prototype_template);

  // Register IDL constants, attributes and operations.
  V8DOMConfiguration::InstallAccessors(
      isolate, world, instance_template, prototype_template, interface_template,
      signature, kV8StorageAccessors, base::size(kV8StorageAccessors));
  V8DOMConfiguration::InstallMethods(
      isolate, world, instance_template, prototype_template, interface_template,
      signature, kV8StorageMethods, base::size(kV8StorageMethods));

  // Indexed properties
  v8::IndexedPropertyHandlerConfiguration indexedPropertyHandlerConfig(
      V8Storage::IndexedPropertyGetterCallback,
      V8Storage::IndexedPropertySetterCallback,
      V8Storage::IndexedPropertyDescriptorCallback,
      V8Storage::IndexedPropertyDeleterCallback,
      nullptr,
      nullptr,
      v8::Local<v8::Value>(),
      v8::PropertyHandlerFlags::kNone);
  instance_template->SetHandler(indexedPropertyHandlerConfig);
  // Named properties
  v8::NamedPropertyHandlerConfiguration namedPropertyHandlerConfig(V8Storage::NamedPropertyGetterCallback, V8Storage::NamedPropertySetterCallback, V8Storage::NamedPropertyQueryCallback, V8Storage::NamedPropertyDeleterCallback, V8Storage::NamedPropertyEnumeratorCallback, v8::Local<v8::Value>(), static_cast<v8::PropertyHandlerFlags>(int(v8::PropertyHandlerFlags::kOnlyInterceptStrings) | int(v8::PropertyHandlerFlags::kNonMasking)));
  instance_template->SetHandler(namedPropertyHandlerConfig);

  // Custom signature

  V8Storage::InstallRuntimeEnabledFeaturesOnTemplate(
      isolate, world, interface_template);
}

void V8Storage::InstallRuntimeEnabledFeaturesOnTemplate(
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

v8::Local<v8::FunctionTemplate> V8Storage::DomTemplate(
    v8::Isolate* isolate, const DOMWrapperWorld& world) {
  return V8DOMConfiguration::DomClassTemplate(
      isolate, world, const_cast<WrapperTypeInfo*>(V8Storage::GetWrapperTypeInfo()),
      InstallV8StorageTemplate);
}

bool V8Storage::HasInstance(v8::Local<v8::Value> v8_value, v8::Isolate* isolate) {
  return V8PerIsolateData::From(isolate)->HasInstance(V8Storage::GetWrapperTypeInfo(), v8_value);
}

v8::Local<v8::Object> V8Storage::FindInstanceInPrototypeChain(
    v8::Local<v8::Value> v8_value, v8::Isolate* isolate) {
  return V8PerIsolateData::From(isolate)->FindInstanceInPrototypeChain(
      V8Storage::GetWrapperTypeInfo(), v8_value);
}

StorageArea* V8Storage::ToImplWithTypeCheck(
    v8::Isolate* isolate, v8::Local<v8::Value> value) {
  return HasInstance(value, isolate) ? ToImpl(v8::Local<v8::Object>::Cast(value)) : nullptr;
}

StorageArea* NativeValueTraits<StorageArea>::NativeValue(
    v8::Isolate* isolate, v8::Local<v8::Value> value, ExceptionState& exception_state) {
  StorageArea* native_value = V8Storage::ToImplWithTypeCheck(isolate, value);
  if (!native_value) {
    exception_state.ThrowTypeError(ExceptionMessages::FailedToConvertJSValue(
        "Storage"));
  }
  return native_value;
}

}  // namespace blink
