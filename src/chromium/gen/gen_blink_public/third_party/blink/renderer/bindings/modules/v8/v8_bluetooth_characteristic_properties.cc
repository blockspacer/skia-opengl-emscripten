// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated from the Jinja2 template
// third_party/blink/renderer/bindings/templates/interface.cc.tmpl
// by the script code_generator_v8.py.
// DO NOT MODIFY!

// clang-format off
#include "third_party/blink/renderer/bindings/modules/v8/v8_bluetooth_characteristic_properties.h"

#include <algorithm>

#include "base/memory/scoped_refptr.h"
#include "third_party/blink/renderer/bindings/core/v8/idl_types.h"
#include "third_party/blink/renderer/bindings/core/v8/native_value_traits_impl.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_dom_configuration.h"
#include "third_party/blink/renderer/core/execution_context/execution_context.h"
#include "third_party/blink/renderer/platform/bindings/exception_messages.h"
#include "third_party/blink/renderer/platform/bindings/exception_state.h"
#include "third_party/blink/renderer/platform/bindings/runtime_call_stats.h"
#include "third_party/blink/renderer/platform/bindings/v8_object_constructor.h"
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
const WrapperTypeInfo v8_bluetooth_characteristic_properties_wrapper_type_info = {
    gin::kEmbedderBlink,
    V8BluetoothCharacteristicProperties::DomTemplate,
    V8BluetoothCharacteristicProperties::InstallConditionalFeatures,
    "BluetoothCharacteristicProperties",
    nullptr,
    WrapperTypeInfo::kWrapperTypeObjectPrototype,
    WrapperTypeInfo::kObjectClassId,
    WrapperTypeInfo::kNotInheritFromActiveScriptWrappable,
};
#if defined(COMPONENT_BUILD) && defined(WIN32) && defined(__clang__)
#pragma clang diagnostic pop
#endif

// This static member must be declared by DEFINE_WRAPPERTYPEINFO in BluetoothCharacteristicProperties.h.
// For details, see the comment of DEFINE_WRAPPERTYPEINFO in
// platform/bindings/ScriptWrappable.h.
const WrapperTypeInfo& BluetoothCharacteristicProperties::wrapper_type_info_ = v8_bluetooth_characteristic_properties_wrapper_type_info;

// not [ActiveScriptWrappable]
static_assert(
    !std::is_base_of<ActiveScriptWrappableBase, BluetoothCharacteristicProperties>::value,
    "BluetoothCharacteristicProperties inherits from ActiveScriptWrappable<>, but is not specifying "
    "[ActiveScriptWrappable] extended attribute in the IDL file.  "
    "Be consistent.");
static_assert(
    std::is_same<decltype(&BluetoothCharacteristicProperties::HasPendingActivity),
                 decltype(&ScriptWrappable::HasPendingActivity)>::value,
    "BluetoothCharacteristicProperties is overriding hasPendingActivity(), but is not specifying "
    "[ActiveScriptWrappable] extended attribute in the IDL file.  "
    "Be consistent.");

namespace bluetooth_characteristic_properties_v8_internal {

static void BroadcastAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  BluetoothCharacteristicProperties* impl = V8BluetoothCharacteristicProperties::ToImpl(holder);

  V8SetReturnValueBool(info, impl->broadcast());
}

static void ReadAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  BluetoothCharacteristicProperties* impl = V8BluetoothCharacteristicProperties::ToImpl(holder);

  V8SetReturnValueBool(info, impl->read());
}

static void WriteWithoutResponseAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  BluetoothCharacteristicProperties* impl = V8BluetoothCharacteristicProperties::ToImpl(holder);

  V8SetReturnValueBool(info, impl->writeWithoutResponse());
}

static void WriteAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  BluetoothCharacteristicProperties* impl = V8BluetoothCharacteristicProperties::ToImpl(holder);

  V8SetReturnValueBool(info, impl->write());
}

static void NotifyAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  BluetoothCharacteristicProperties* impl = V8BluetoothCharacteristicProperties::ToImpl(holder);

  V8SetReturnValueBool(info, impl->notify());
}

static void IndicateAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  BluetoothCharacteristicProperties* impl = V8BluetoothCharacteristicProperties::ToImpl(holder);

  V8SetReturnValueBool(info, impl->indicate());
}

static void AuthenticatedSignedWritesAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  BluetoothCharacteristicProperties* impl = V8BluetoothCharacteristicProperties::ToImpl(holder);

  V8SetReturnValueBool(info, impl->authenticatedSignedWrites());
}

static void ReliableWriteAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  BluetoothCharacteristicProperties* impl = V8BluetoothCharacteristicProperties::ToImpl(holder);

  V8SetReturnValueBool(info, impl->reliableWrite());
}

static void WritableAuxiliariesAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  BluetoothCharacteristicProperties* impl = V8BluetoothCharacteristicProperties::ToImpl(holder);

  V8SetReturnValueBool(info, impl->writableAuxiliaries());
}

}  // namespace bluetooth_characteristic_properties_v8_internal

void V8BluetoothCharacteristicProperties::BroadcastAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_BluetoothCharacteristicProperties_broadcast_Getter");

  bluetooth_characteristic_properties_v8_internal::BroadcastAttributeGetter(info);
}

void V8BluetoothCharacteristicProperties::ReadAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_BluetoothCharacteristicProperties_read_Getter");

  bluetooth_characteristic_properties_v8_internal::ReadAttributeGetter(info);
}

void V8BluetoothCharacteristicProperties::WriteWithoutResponseAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_BluetoothCharacteristicProperties_writeWithoutResponse_Getter");

  bluetooth_characteristic_properties_v8_internal::WriteWithoutResponseAttributeGetter(info);
}

void V8BluetoothCharacteristicProperties::WriteAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_BluetoothCharacteristicProperties_write_Getter");

  bluetooth_characteristic_properties_v8_internal::WriteAttributeGetter(info);
}

void V8BluetoothCharacteristicProperties::NotifyAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_BluetoothCharacteristicProperties_notify_Getter");

  bluetooth_characteristic_properties_v8_internal::NotifyAttributeGetter(info);
}

void V8BluetoothCharacteristicProperties::IndicateAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_BluetoothCharacteristicProperties_indicate_Getter");

  bluetooth_characteristic_properties_v8_internal::IndicateAttributeGetter(info);
}

void V8BluetoothCharacteristicProperties::AuthenticatedSignedWritesAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_BluetoothCharacteristicProperties_authenticatedSignedWrites_Getter");

  bluetooth_characteristic_properties_v8_internal::AuthenticatedSignedWritesAttributeGetter(info);
}

void V8BluetoothCharacteristicProperties::ReliableWriteAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_BluetoothCharacteristicProperties_reliableWrite_Getter");

  bluetooth_characteristic_properties_v8_internal::ReliableWriteAttributeGetter(info);
}

void V8BluetoothCharacteristicProperties::WritableAuxiliariesAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_BluetoothCharacteristicProperties_writableAuxiliaries_Getter");

  bluetooth_characteristic_properties_v8_internal::WritableAuxiliariesAttributeGetter(info);
}

static void InstallV8BluetoothCharacteristicPropertiesTemplate(
    v8::Isolate* isolate,
    const DOMWrapperWorld& world,
    v8::Local<v8::FunctionTemplate> interface_template) {
  // Initialize the interface object's template.
  V8DOMConfiguration::InitializeDOMInterfaceTemplate(isolate, interface_template, V8BluetoothCharacteristicProperties::GetWrapperTypeInfo()->interface_name, v8::Local<v8::FunctionTemplate>(), V8BluetoothCharacteristicProperties::kInternalFieldCount);

  if (!RuntimeEnabledFeatures::WebBluetoothEnabled()) {
    return;
  }

  v8::Local<v8::Signature> signature = v8::Signature::New(isolate, interface_template);
  ALLOW_UNUSED_LOCAL(signature);
  v8::Local<v8::ObjectTemplate> instance_template = interface_template->InstanceTemplate();
  ALLOW_UNUSED_LOCAL(instance_template);
  v8::Local<v8::ObjectTemplate> prototype_template = interface_template->PrototypeTemplate();
  ALLOW_UNUSED_LOCAL(prototype_template);

  // Register IDL constants, attributes and operations.

  // Custom signature

  V8BluetoothCharacteristicProperties::InstallRuntimeEnabledFeaturesOnTemplate(
      isolate, world, interface_template);
}

void V8BluetoothCharacteristicProperties::InstallRuntimeEnabledFeaturesOnTemplate(
    v8::Isolate* isolate,
    const DOMWrapperWorld& world,
    v8::Local<v8::FunctionTemplate> interface_template) {
  if (!RuntimeEnabledFeatures::WebBluetoothEnabled()) {
    return;
  }

  v8::Local<v8::Signature> signature = v8::Signature::New(isolate, interface_template);
  ALLOW_UNUSED_LOCAL(signature);
  v8::Local<v8::ObjectTemplate> instance_template = interface_template->InstanceTemplate();
  ALLOW_UNUSED_LOCAL(instance_template);
  v8::Local<v8::ObjectTemplate> prototype_template = interface_template->PrototypeTemplate();
  ALLOW_UNUSED_LOCAL(prototype_template);

  // Register IDL constants, attributes and operations.

  // Custom signature
}

v8::Local<v8::FunctionTemplate> V8BluetoothCharacteristicProperties::DomTemplate(
    v8::Isolate* isolate, const DOMWrapperWorld& world) {
  return V8DOMConfiguration::DomClassTemplate(
      isolate, world, const_cast<WrapperTypeInfo*>(V8BluetoothCharacteristicProperties::GetWrapperTypeInfo()),
      InstallV8BluetoothCharacteristicPropertiesTemplate);
}

bool V8BluetoothCharacteristicProperties::HasInstance(v8::Local<v8::Value> v8_value, v8::Isolate* isolate) {
  return V8PerIsolateData::From(isolate)->HasInstance(V8BluetoothCharacteristicProperties::GetWrapperTypeInfo(), v8_value);
}

v8::Local<v8::Object> V8BluetoothCharacteristicProperties::FindInstanceInPrototypeChain(
    v8::Local<v8::Value> v8_value, v8::Isolate* isolate) {
  return V8PerIsolateData::From(isolate)->FindInstanceInPrototypeChain(
      V8BluetoothCharacteristicProperties::GetWrapperTypeInfo(), v8_value);
}

BluetoothCharacteristicProperties* V8BluetoothCharacteristicProperties::ToImplWithTypeCheck(
    v8::Isolate* isolate, v8::Local<v8::Value> value) {
  return HasInstance(value, isolate) ? ToImpl(v8::Local<v8::Object>::Cast(value)) : nullptr;
}

BluetoothCharacteristicProperties* NativeValueTraits<BluetoothCharacteristicProperties>::NativeValue(
    v8::Isolate* isolate, v8::Local<v8::Value> value, ExceptionState& exception_state) {
  BluetoothCharacteristicProperties* native_value = V8BluetoothCharacteristicProperties::ToImplWithTypeCheck(isolate, value);
  if (!native_value) {
    exception_state.ThrowTypeError(ExceptionMessages::FailedToConvertJSValue(
        "BluetoothCharacteristicProperties"));
  }
  return native_value;
}

void V8BluetoothCharacteristicProperties::InstallConditionalFeatures(
    v8::Local<v8::Context> context,
    const DOMWrapperWorld& world,
    v8::Local<v8::Object> instance_object,
    v8::Local<v8::Object> prototype_object,
    v8::Local<v8::Function> interface_object,
    v8::Local<v8::FunctionTemplate> interface_template) {
  CHECK(!interface_template.IsEmpty());
  DCHECK((!prototype_object.IsEmpty() && !interface_object.IsEmpty()) ||
         !instance_object.IsEmpty());

  v8::Isolate* isolate = context->GetIsolate();

  v8::Local<v8::Signature> signature = v8::Signature::New(isolate, interface_template);
  ExecutionContext* execution_context = ToExecutionContext(context);
  DCHECK(execution_context);
  bool is_secure_context = (execution_context && execution_context->IsSecureContext());

  if (!prototype_object.IsEmpty() || !interface_object.IsEmpty()) {
    if (is_secure_context) {
      static const V8DOMConfiguration::AccessorConfiguration accessor_configurations[] = {
          { "authenticatedSignedWrites", V8BluetoothCharacteristicProperties::AuthenticatedSignedWritesAttributeGetterCallback, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
          { "broadcast", V8BluetoothCharacteristicProperties::BroadcastAttributeGetterCallback, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
          { "indicate", V8BluetoothCharacteristicProperties::IndicateAttributeGetterCallback, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
          { "notify", V8BluetoothCharacteristicProperties::NotifyAttributeGetterCallback, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
          { "read", V8BluetoothCharacteristicProperties::ReadAttributeGetterCallback, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
          { "reliableWrite", V8BluetoothCharacteristicProperties::ReliableWriteAttributeGetterCallback, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
          { "writableAuxiliaries", V8BluetoothCharacteristicProperties::WritableAuxiliariesAttributeGetterCallback, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
          { "write", V8BluetoothCharacteristicProperties::WriteAttributeGetterCallback, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
          { "writeWithoutResponse", V8BluetoothCharacteristicProperties::WriteWithoutResponseAttributeGetterCallback, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
      };
      V8DOMConfiguration::InstallAccessors(
          isolate, world, instance_object, prototype_object, interface_object,
          signature, accessor_configurations,
          base::size(accessor_configurations));
    }
  }
}

}  // namespace blink
