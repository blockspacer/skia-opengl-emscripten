// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated from the Jinja2 template
// third_party/blink/renderer/bindings/templates/partial_interface.cc.tmpl
// by the script code_generator_v8.py.
// DO NOT MODIFY!

// clang-format off
#include "third_party/blink/renderer/bindings/modules/v8/v8_worker_navigator_partial.h"

#include <algorithm>

#include "base/memory/scoped_refptr.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_dom_configuration.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_worker_navigator.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_lock_manager.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_network_information.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_permissions.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_serial.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_storage_manager.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_usb.h"
#include "third_party/blink/renderer/core/execution_context/execution_context.h"
#include "third_party/blink/renderer/core/frame/use_counter.h"
#include "third_party/blink/renderer/modules/locks/navigator_locks.h"
#include "third_party/blink/renderer/modules/netinfo/worker_navigator_network_information.h"
#include "third_party/blink/renderer/modules/permissions/worker_navigator_permissions.h"
#include "third_party/blink/renderer/modules/quota/worker_navigator_storage_quota.h"
#include "third_party/blink/renderer/modules/serial/worker_navigator_serial.h"
#include "third_party/blink/renderer/modules/webusb/worker_navigator_usb.h"
#include "third_party/blink/renderer/platform/bindings/exception_messages.h"
#include "third_party/blink/renderer/platform/bindings/exception_state.h"
#include "third_party/blink/renderer/platform/bindings/runtime_call_stats.h"
#include "third_party/blink/renderer/platform/bindings/v8_object_constructor.h"
#include "third_party/blink/renderer/platform/bindings/v8_private_property.h"
#include "third_party/blink/renderer/platform/runtime_enabled_features.h"
#include "third_party/blink/renderer/platform/scheduler/public/cooperative_scheduling_manager.h"
#include "third_party/blink/renderer/platform/wtf/get_ptr.h"

namespace blink {

namespace worker_navigator_partial_v8_internal {

static void LocksAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  WorkerNavigator* impl = V8WorkerNavigator::ToImpl(holder);

  ScriptState* script_state = ScriptState::ForRelevantRealm(info);

  LockManager* cpp_value(NavigatorLocks::locks(script_state, *impl));

  // Keep the wrapper object for the return value alive as long as |this|
  // object is alive in order to save creation time of the wrapper object.
  if (cpp_value && DOMDataStore::SetReturnValue(info.GetReturnValue(), cpp_value))
    return;
  v8::Local<v8::Value> v8_value(ToV8(cpp_value, holder, info.GetIsolate()));
  V8PrivateProperty::GetSymbol(
      info.GetIsolate(), "KeepAlive#WorkerNavigator#locks")
      .Set(holder, v8_value);

  V8SetReturnValue(info, v8_value);
}

static void ConnectionAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  WorkerNavigator* impl = V8WorkerNavigator::ToImpl(holder);

  ScriptState* script_state = ScriptState::ForRelevantRealm(info);

  NetworkInformation* cpp_value(WorkerNavigatorNetworkInformation::connection(script_state, *impl));

  // Keep the wrapper object for the return value alive as long as |this|
  // object is alive in order to save creation time of the wrapper object.
  if (cpp_value && DOMDataStore::SetReturnValue(info.GetReturnValue(), cpp_value))
    return;
  v8::Local<v8::Value> v8_value(ToV8(cpp_value, holder, info.GetIsolate()));
  V8PrivateProperty::GetSymbol(
      info.GetIsolate(), "KeepAlive#WorkerNavigator#connection")
      .Set(holder, v8_value);

  V8SetReturnValue(info, v8_value);
}

static void PermissionsAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  WorkerNavigator* impl = V8WorkerNavigator::ToImpl(holder);

  Permissions* cpp_value(WorkerNavigatorPermissions::permissions(*impl));

  // Keep the wrapper object for the return value alive as long as |this|
  // object is alive in order to save creation time of the wrapper object.
  if (cpp_value && DOMDataStore::SetReturnValue(info.GetReturnValue(), cpp_value))
    return;
  v8::Local<v8::Value> v8_value(ToV8(cpp_value, holder, info.GetIsolate()));
  V8PrivateProperty::GetSymbol(
      info.GetIsolate(), "KeepAlive#WorkerNavigator#permissions")
      .Set(holder, v8_value);

  V8SetReturnValue(info, v8_value);
}

static void StorageAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  WorkerNavigator* impl = V8WorkerNavigator::ToImpl(holder);

  StorageManager* cpp_value(WorkerNavigatorStorageQuota::storage(*impl));

  // Keep the wrapper object for the return value alive as long as |this|
  // object is alive in order to save creation time of the wrapper object.
  if (cpp_value && DOMDataStore::SetReturnValue(info.GetReturnValue(), cpp_value))
    return;
  v8::Local<v8::Value> v8_value(ToV8(cpp_value, holder, info.GetIsolate()));
  V8PrivateProperty::GetSymbol(
      info.GetIsolate(), "KeepAlive#WorkerNavigator#storage")
      .Set(holder, v8_value);

  V8SetReturnValue(info, v8_value);
}

static void SerialAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  WorkerNavigator* impl = V8WorkerNavigator::ToImpl(holder);

  ScriptState* script_state = ScriptState::ForRelevantRealm(info);

  Serial* cpp_value(WorkerNavigatorSerial::serial(script_state, *impl));

  // Keep the wrapper object for the return value alive as long as |this|
  // object is alive in order to save creation time of the wrapper object.
  if (cpp_value && DOMDataStore::SetReturnValue(info.GetReturnValue(), cpp_value))
    return;
  v8::Local<v8::Value> v8_value(ToV8(cpp_value, holder, info.GetIsolate()));
  V8PrivateProperty::GetSymbol(
      info.GetIsolate(), "KeepAlive#WorkerNavigator#serial")
      .Set(holder, v8_value);

  V8SetReturnValue(info, v8_value);
}

static void UsbAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  WorkerNavigator* impl = V8WorkerNavigator::ToImpl(holder);

  ScriptState* script_state = ScriptState::ForRelevantRealm(info);

  USB* cpp_value(WorkerNavigatorUSB::usb(script_state, *impl));

  // Keep the wrapper object for the return value alive as long as |this|
  // object is alive in order to save creation time of the wrapper object.
  if (cpp_value && DOMDataStore::SetReturnValue(info.GetReturnValue(), cpp_value))
    return;
  v8::Local<v8::Value> v8_value(ToV8(cpp_value, holder, info.GetIsolate()));
  V8PrivateProperty::GetSymbol(
      info.GetIsolate(), "KeepAlive#WorkerNavigator#usb")
      .Set(holder, v8_value);

  V8SetReturnValue(info, v8_value);
}

}  // namespace worker_navigator_partial_v8_internal

void V8WorkerNavigatorPartial::LocksAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_WorkerNavigator_locks_Getter");

  worker_navigator_partial_v8_internal::LocksAttributeGetter(info);
}

void V8WorkerNavigatorPartial::ConnectionAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_WorkerNavigator_connection_Getter");

  ExecutionContext* execution_context_for_measurement = CurrentExecutionContext(info.GetIsolate());
  UseCounter::Count(execution_context_for_measurement, WebFeature::kNetInfo);

  worker_navigator_partial_v8_internal::ConnectionAttributeGetter(info);
}

void V8WorkerNavigatorPartial::PermissionsAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_WorkerNavigator_permissions_Getter");

  worker_navigator_partial_v8_internal::PermissionsAttributeGetter(info);
}

void V8WorkerNavigatorPartial::StorageAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_WorkerNavigator_storage_Getter");

  worker_navigator_partial_v8_internal::StorageAttributeGetter(info);
}

void V8WorkerNavigatorPartial::SerialAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_WorkerNavigator_serial_Getter");

  worker_navigator_partial_v8_internal::SerialAttributeGetter(info);
}

void V8WorkerNavigatorPartial::UsbAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_WorkerNavigator_usb_Getter");

  worker_navigator_partial_v8_internal::UsbAttributeGetter(info);
}

static constexpr V8DOMConfiguration::AccessorConfiguration kV8WorkerNavigatorAccessors[] = {
    { "connection", V8WorkerNavigatorPartial::ConnectionAttributeGetterCallback, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
};

void V8WorkerNavigatorPartial::InstallV8WorkerNavigatorTemplate(
    v8::Isolate* isolate,
    const DOMWrapperWorld& world,
    v8::Local<v8::FunctionTemplate> interface_template) {
  // Initialize the interface object's template.
  V8WorkerNavigator::InstallV8WorkerNavigatorTemplate(isolate, world, interface_template);

  v8::Local<v8::Signature> signature = v8::Signature::New(isolate, interface_template);
  ALLOW_UNUSED_LOCAL(signature);
  v8::Local<v8::ObjectTemplate> instance_template = interface_template->InstanceTemplate();
  ALLOW_UNUSED_LOCAL(instance_template);
  v8::Local<v8::ObjectTemplate> prototype_template = interface_template->PrototypeTemplate();
  ALLOW_UNUSED_LOCAL(prototype_template);

  // Register IDL constants, attributes and operations.
  V8DOMConfiguration::InstallAccessors(
      isolate, world, instance_template, prototype_template, interface_template,
      signature, kV8WorkerNavigatorAccessors, base::size(kV8WorkerNavigatorAccessors));

  // Custom signature

  V8WorkerNavigatorPartial::InstallRuntimeEnabledFeaturesOnTemplate(
      isolate, world, interface_template);
}

void V8WorkerNavigatorPartial::InstallRuntimeEnabledFeaturesOnTemplate(
    v8::Isolate* isolate,
    const DOMWrapperWorld& world,
    v8::Local<v8::FunctionTemplate> interface_template) {
  V8WorkerNavigator::InstallRuntimeEnabledFeaturesOnTemplate(isolate, world, interface_template);

  v8::Local<v8::Signature> signature = v8::Signature::New(isolate, interface_template);
  ALLOW_UNUSED_LOCAL(signature);
  v8::Local<v8::ObjectTemplate> instance_template = interface_template->InstanceTemplate();
  ALLOW_UNUSED_LOCAL(instance_template);
  v8::Local<v8::ObjectTemplate> prototype_template = interface_template->PrototypeTemplate();
  ALLOW_UNUSED_LOCAL(prototype_template);

  // Register IDL constants, attributes and operations.

  if (RuntimeEnabledFeatures::PermissionsEnabled()) {
    static constexpr V8DOMConfiguration::AccessorConfiguration kConfigurations[] = {
        { "permissions", V8WorkerNavigatorPartial::PermissionsAttributeGetterCallback, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
    };
    V8DOMConfiguration::InstallAccessors(
        isolate, world, instance_template, prototype_template, interface_template,
        signature, kConfigurations, base::size(kConfigurations));
  }

  // Custom signature
}

void V8WorkerNavigatorPartial::InstallConditionalFeatures(
    v8::Local<v8::Context> context,
    const DOMWrapperWorld& world,
    v8::Local<v8::Object> instance_object,
    v8::Local<v8::Object> prototype_object,
    v8::Local<v8::Function> interface_object,
    v8::Local<v8::FunctionTemplate> interface_template) {
  CHECK(!interface_template.IsEmpty());
  DCHECK((!prototype_object.IsEmpty() && !interface_object.IsEmpty()) ||
         !instance_object.IsEmpty());
  V8WorkerNavigator::InstallConditionalFeatures(
      context, world, instance_object, prototype_object, interface_object, interface_template);

  v8::Isolate* isolate = context->GetIsolate();

  v8::Local<v8::Signature> signature = v8::Signature::New(isolate, interface_template);
  ExecutionContext* execution_context = ToExecutionContext(context);
  DCHECK(execution_context);
  bool is_secure_context = (execution_context && execution_context->IsSecureContext());

  if (!prototype_object.IsEmpty() || !interface_object.IsEmpty()) {
    if (is_secure_context) {
      static const V8DOMConfiguration::AccessorConfiguration accessor_configurations[] = {
          { "locks", V8WorkerNavigatorPartial::LocksAttributeGetterCallback, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
          { "storage", V8WorkerNavigatorPartial::StorageAttributeGetterCallback, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
          { "usb", V8WorkerNavigatorPartial::UsbAttributeGetterCallback, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
      };
      V8DOMConfiguration::InstallAccessors(
          isolate, world, instance_object, prototype_object, interface_object,
          signature, accessor_configurations,
          base::size(accessor_configurations));
      if (RuntimeEnabledFeatures::SerialEnabled()) {
        static const V8DOMConfiguration::AccessorConfiguration accessor_configurations[] = {
            { "serial", V8WorkerNavigatorPartial::SerialAttributeGetterCallback, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
        };
        V8DOMConfiguration::InstallAccessors(
            isolate, world, instance_object, prototype_object, interface_object,
            signature, accessor_configurations,
            base::size(accessor_configurations));
      }
    }
  }
}

void V8WorkerNavigatorPartial::Initialize() {
  // Should be invoked from ModulesInitializer.
  V8WorkerNavigator::UpdateWrapperTypeInfo(
      &V8WorkerNavigatorPartial::InstallV8WorkerNavigatorTemplate,
      nullptr,
      &V8WorkerNavigatorPartial::InstallRuntimeEnabledFeaturesOnTemplate,
      V8WorkerNavigatorPartial::InstallConditionalFeatures);
}

}  // namespace blink
