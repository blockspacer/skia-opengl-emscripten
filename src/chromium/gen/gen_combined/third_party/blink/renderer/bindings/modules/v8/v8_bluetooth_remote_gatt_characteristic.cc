// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated from the Jinja2 template
// third_party/blink/renderer/bindings/templates/interface.cc.tmpl
// by the script code_generator_v8.py.
// DO NOT MODIFY!

// clang-format off
#include "third_party/blink/renderer/bindings/modules/v8/v8_bluetooth_remote_gatt_characteristic.h"

#include <algorithm>

#include "base/memory/scoped_refptr.h"
#include "third_party/blink/renderer/bindings/core/v8/idl_types.h"
#include "third_party/blink/renderer/bindings/core/v8/js_event_handler.h"
#include "third_party/blink/renderer/bindings/core/v8/native_value_traits_impl.h"
#include "third_party/blink/renderer/bindings/core/v8/script_promise.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_array_buffer.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_array_buffer_view.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_data_view.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_dom_configuration.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_bluetooth_characteristic_properties.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_bluetooth_remote_gatt_service.h"
#include "third_party/blink/renderer/core/execution_context/execution_context.h"
#include "third_party/blink/renderer/core/frame/use_counter.h"
#include "third_party/blink/renderer/core/typed_arrays/array_buffer_view_helpers.h"
#include "third_party/blink/renderer/core/typed_arrays/flexible_array_buffer_view.h"
#include "third_party/blink/renderer/platform/bindings/exception_messages.h"
#include "third_party/blink/renderer/platform/bindings/exception_state.h"
#include "third_party/blink/renderer/platform/bindings/runtime_call_stats.h"
#include "third_party/blink/renderer/platform/bindings/script_state.h"
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
const WrapperTypeInfo v8_bluetooth_remote_gatt_characteristic_wrapper_type_info = {
    gin::kEmbedderBlink,
    V8BluetoothRemoteGATTCharacteristic::DomTemplate,
    V8BluetoothRemoteGATTCharacteristic::InstallConditionalFeatures,
    "BluetoothRemoteGATTCharacteristic",
    V8EventTarget::GetWrapperTypeInfo(),
    WrapperTypeInfo::kWrapperTypeObjectPrototype,
    WrapperTypeInfo::kObjectClassId,
    WrapperTypeInfo::kInheritFromActiveScriptWrappable,
};
#if defined(COMPONENT_BUILD) && defined(WIN32) && defined(__clang__)
#pragma clang diagnostic pop
#endif

// This static member must be declared by DEFINE_WRAPPERTYPEINFO in BluetoothRemoteGATTCharacteristic.h.
// For details, see the comment of DEFINE_WRAPPERTYPEINFO in
// platform/bindings/ScriptWrappable.h.
const WrapperTypeInfo& BluetoothRemoteGATTCharacteristic::wrapper_type_info_ = v8_bluetooth_remote_gatt_characteristic_wrapper_type_info;

// [ActiveScriptWrappable]
static_assert(
    std::is_base_of<ActiveScriptWrappableBase, BluetoothRemoteGATTCharacteristic>::value,
    "BluetoothRemoteGATTCharacteristic does not inherit from ActiveScriptWrappable<>, but specifying "
    "[ActiveScriptWrappable] extended attribute in the IDL file.  "
    "Be consistent.");
static_assert(
    !std::is_same<decltype(&BluetoothRemoteGATTCharacteristic::HasPendingActivity),
                  decltype(&ScriptWrappable::HasPendingActivity)>::value,
    "BluetoothRemoteGATTCharacteristic is not overriding hasPendingActivity(), but is specifying "
    "[ActiveScriptWrappable] extended attribute in the IDL file.  "
    "Be consistent.");

namespace bluetooth_remote_gatt_characteristic_v8_internal {

static void ServiceAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  BluetoothRemoteGATTCharacteristic* impl = V8BluetoothRemoteGATTCharacteristic::ToImpl(holder);

  BluetoothRemoteGATTService* cpp_value(WTF::GetPtr(impl->service()));

  // Keep the wrapper object for the return value alive as long as |this|
  // object is alive in order to save creation time of the wrapper object.
  if (cpp_value && DOMDataStore::SetReturnValue(info.GetReturnValue(), cpp_value))
    return;
  v8::Local<v8::Value> v8_value(ToV8(cpp_value, holder, info.GetIsolate()));
  V8PrivateProperty::GetSymbol(
      info.GetIsolate(), "KeepAlive#BluetoothRemoteGATTCharacteristic#service")
      .Set(holder, v8_value);

  V8SetReturnValue(info, v8_value);
}

static void UuidAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  BluetoothRemoteGATTCharacteristic* impl = V8BluetoothRemoteGATTCharacteristic::ToImpl(holder);

  V8SetReturnValueString(info, impl->uuid(), info.GetIsolate());
}

static void PropertiesAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  BluetoothRemoteGATTCharacteristic* impl = V8BluetoothRemoteGATTCharacteristic::ToImpl(holder);

  BluetoothCharacteristicProperties* cpp_value(WTF::GetPtr(impl->properties()));

  // Keep the wrapper object for the return value alive as long as |this|
  // object is alive in order to save creation time of the wrapper object.
  if (cpp_value && DOMDataStore::SetReturnValue(info.GetReturnValue(), cpp_value))
    return;
  v8::Local<v8::Value> v8_value(ToV8(cpp_value, holder, info.GetIsolate()));
  V8PrivateProperty::GetSymbol(
      info.GetIsolate(), "KeepAlive#BluetoothRemoteGATTCharacteristic#properties")
      .Set(holder, v8_value);

  V8SetReturnValue(info, v8_value);
}

static void ValueAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  BluetoothRemoteGATTCharacteristic* impl = V8BluetoothRemoteGATTCharacteristic::ToImpl(holder);

  DOMDataView* cpp_value(WTF::GetPtr(impl->value()));

  // Keep the wrapper object for the return value alive as long as |this|
  // object is alive in order to save creation time of the wrapper object.
  if (cpp_value && DOMDataStore::SetReturnValue(info.GetReturnValue(), cpp_value))
    return;
  v8::Local<v8::Value> v8_value(ToV8(cpp_value, holder, info.GetIsolate()));
  V8PrivateProperty::GetSymbol(
      info.GetIsolate(), "KeepAlive#BluetoothRemoteGATTCharacteristic#value")
      .Set(holder, v8_value);

  V8SetReturnValue(info, v8_value);
}

static void OncharacteristicvaluechangedAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  BluetoothRemoteGATTCharacteristic* impl = V8BluetoothRemoteGATTCharacteristic::ToImpl(holder);

  EventListener* cpp_value(WTF::GetPtr(impl->oncharacteristicvaluechanged()));

  V8SetReturnValue(info, JSEventHandler::AsV8Value(info.GetIsolate(), impl, cpp_value));
}

static void OncharacteristicvaluechangedAttributeSetter(
    v8::Local<v8::Value> v8_value, const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Isolate* isolate = info.GetIsolate();
  ALLOW_UNUSED_LOCAL(isolate);

  v8::Local<v8::Object> holder = info.Holder();
  ALLOW_UNUSED_LOCAL(holder);

  BluetoothRemoteGATTCharacteristic* impl = V8BluetoothRemoteGATTCharacteristic::ToImpl(holder);

  // Prepare the value to be set.

  impl->setOncharacteristicvaluechanged(JSEventHandler::CreateOrNull(v8_value, JSEventHandler::HandlerType::kEventHandler));
}

static void GetDescriptorMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exception_state(info.GetIsolate(), ExceptionState::kExecutionContext, "BluetoothRemoteGATTCharacteristic", "getDescriptor");
  ExceptionToRejectPromiseScope reject_promise_scope(info, exception_state);

  // V8DOMConfiguration::kDoNotCheckHolder
  // Make sure that info.Holder() really points to an instance of the type.
  if (!V8BluetoothRemoteGATTCharacteristic::HasInstance(info.Holder(), info.GetIsolate())) {
    exception_state.ThrowTypeError("Illegal invocation");
    return;
  }
  BluetoothRemoteGATTCharacteristic* impl = V8BluetoothRemoteGATTCharacteristic::ToImpl(info.Holder());

  ScriptState* script_state = ScriptState::ForRelevantRealm(info);

  if (UNLIKELY(info.Length() < 1)) {
    exception_state.ThrowTypeError(ExceptionMessages::NotEnoughArguments(1, info.Length()));
    return;
  }

  StringOrUnsignedLong descriptor;
  V8StringOrUnsignedLong::ToImpl(info.GetIsolate(), info[0], descriptor, UnionTypeConversionMode::kNotNullable, exception_state);
  if (exception_state.HadException())
    return;

  ScriptPromise result = impl->getDescriptor(script_state, descriptor, exception_state);
  if (exception_state.HadException()) {
    return;
  }
  V8SetReturnValue(info, result.V8Value());
}

static void GetDescriptorsMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exception_state(info.GetIsolate(), ExceptionState::kExecutionContext, "BluetoothRemoteGATTCharacteristic", "getDescriptors");
  ExceptionToRejectPromiseScope reject_promise_scope(info, exception_state);

  // V8DOMConfiguration::kDoNotCheckHolder
  // Make sure that info.Holder() really points to an instance of the type.
  if (!V8BluetoothRemoteGATTCharacteristic::HasInstance(info.Holder(), info.GetIsolate())) {
    exception_state.ThrowTypeError("Illegal invocation");
    return;
  }
  BluetoothRemoteGATTCharacteristic* impl = V8BluetoothRemoteGATTCharacteristic::ToImpl(info.Holder());

  ScriptState* script_state = ScriptState::ForRelevantRealm(info);

  StringOrUnsignedLong descriptor;
  int num_args_passed = info.Length();
  while (num_args_passed > 0) {
    if (!info[num_args_passed - 1]->IsUndefined())
      break;
    --num_args_passed;
  }
  if (UNLIKELY(num_args_passed <= 0)) {
    ScriptPromise result = impl->getDescriptors(script_state, exception_state);
    if (exception_state.HadException()) {
      return;
    }
    V8SetReturnValue(info, result.V8Value());
    return;
  }
  V8StringOrUnsignedLong::ToImpl(info.GetIsolate(), info[0], descriptor, UnionTypeConversionMode::kNotNullable, exception_state);
  if (exception_state.HadException())
    return;

  ScriptPromise result = impl->getDescriptors(script_state, descriptor, exception_state);
  if (exception_state.HadException()) {
    return;
  }
  V8SetReturnValue(info, result.V8Value());
}

static void ReadValueMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exception_state(info.GetIsolate(), ExceptionState::kExecutionContext, "BluetoothRemoteGATTCharacteristic", "readValue");
  ExceptionToRejectPromiseScope reject_promise_scope(info, exception_state);

  // V8DOMConfiguration::kDoNotCheckHolder
  // Make sure that info.Holder() really points to an instance of the type.
  if (!V8BluetoothRemoteGATTCharacteristic::HasInstance(info.Holder(), info.GetIsolate())) {
    exception_state.ThrowTypeError("Illegal invocation");
    return;
  }
  BluetoothRemoteGATTCharacteristic* impl = V8BluetoothRemoteGATTCharacteristic::ToImpl(info.Holder());

  ScriptState* script_state = ScriptState::ForRelevantRealm(info);

  ScriptPromise result = impl->readValue(script_state);
  V8SetReturnValue(info, result.V8Value());
}

static void WriteValueMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exception_state(info.GetIsolate(), ExceptionState::kExecutionContext, "BluetoothRemoteGATTCharacteristic", "writeValue");
  ExceptionToRejectPromiseScope reject_promise_scope(info, exception_state);

  // V8DOMConfiguration::kDoNotCheckHolder
  // Make sure that info.Holder() really points to an instance of the type.
  if (!V8BluetoothRemoteGATTCharacteristic::HasInstance(info.Holder(), info.GetIsolate())) {
    exception_state.ThrowTypeError("Illegal invocation");
    return;
  }
  BluetoothRemoteGATTCharacteristic* impl = V8BluetoothRemoteGATTCharacteristic::ToImpl(info.Holder());

  ScriptState* script_state = ScriptState::ForRelevantRealm(info);

  if (UNLIKELY(info.Length() < 1)) {
    exception_state.ThrowTypeError(ExceptionMessages::NotEnoughArguments(1, info.Length()));
    return;
  }

  ArrayBufferOrArrayBufferView value;
  V8ArrayBufferOrArrayBufferView::ToImpl(info.GetIsolate(), info[0], value, UnionTypeConversionMode::kNotNullable, exception_state);
  if (exception_state.HadException())
    return;

  ScriptPromise result = impl->writeValue(script_state, value);
  V8SetReturnValue(info, result.V8Value());
}

static void StartNotificationsMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exception_state(info.GetIsolate(), ExceptionState::kExecutionContext, "BluetoothRemoteGATTCharacteristic", "startNotifications");
  ExceptionToRejectPromiseScope reject_promise_scope(info, exception_state);

  // V8DOMConfiguration::kDoNotCheckHolder
  // Make sure that info.Holder() really points to an instance of the type.
  if (!V8BluetoothRemoteGATTCharacteristic::HasInstance(info.Holder(), info.GetIsolate())) {
    exception_state.ThrowTypeError("Illegal invocation");
    return;
  }
  BluetoothRemoteGATTCharacteristic* impl = V8BluetoothRemoteGATTCharacteristic::ToImpl(info.Holder());

  ScriptState* script_state = ScriptState::ForRelevantRealm(info);

  ScriptPromise result = impl->startNotifications(script_state);
  V8SetReturnValue(info, result.V8Value());
}

static void StopNotificationsMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exception_state(info.GetIsolate(), ExceptionState::kExecutionContext, "BluetoothRemoteGATTCharacteristic", "stopNotifications");
  ExceptionToRejectPromiseScope reject_promise_scope(info, exception_state);

  // V8DOMConfiguration::kDoNotCheckHolder
  // Make sure that info.Holder() really points to an instance of the type.
  if (!V8BluetoothRemoteGATTCharacteristic::HasInstance(info.Holder(), info.GetIsolate())) {
    exception_state.ThrowTypeError("Illegal invocation");
    return;
  }
  BluetoothRemoteGATTCharacteristic* impl = V8BluetoothRemoteGATTCharacteristic::ToImpl(info.Holder());

  ScriptState* script_state = ScriptState::ForRelevantRealm(info);

  ScriptPromise result = impl->stopNotifications(script_state);
  V8SetReturnValue(info, result.V8Value());
}

}  // namespace bluetooth_remote_gatt_characteristic_v8_internal

void V8BluetoothRemoteGATTCharacteristic::ServiceAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_BluetoothRemoteGATTCharacteristic_service_Getter");

  bluetooth_remote_gatt_characteristic_v8_internal::ServiceAttributeGetter(info);
}

void V8BluetoothRemoteGATTCharacteristic::UuidAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_BluetoothRemoteGATTCharacteristic_uuid_Getter");

  bluetooth_remote_gatt_characteristic_v8_internal::UuidAttributeGetter(info);
}

void V8BluetoothRemoteGATTCharacteristic::PropertiesAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_BluetoothRemoteGATTCharacteristic_properties_Getter");

  bluetooth_remote_gatt_characteristic_v8_internal::PropertiesAttributeGetter(info);
}

void V8BluetoothRemoteGATTCharacteristic::ValueAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_BluetoothRemoteGATTCharacteristic_value_Getter");

  bluetooth_remote_gatt_characteristic_v8_internal::ValueAttributeGetter(info);
}

void V8BluetoothRemoteGATTCharacteristic::OncharacteristicvaluechangedAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_BluetoothRemoteGATTCharacteristic_oncharacteristicvaluechanged_Getter");

  bluetooth_remote_gatt_characteristic_v8_internal::OncharacteristicvaluechangedAttributeGetter(info);
}

void V8BluetoothRemoteGATTCharacteristic::OncharacteristicvaluechangedAttributeSetterCallback(
    const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_BluetoothRemoteGATTCharacteristic_oncharacteristicvaluechanged_Setter");

  v8::Local<v8::Value> v8_value = info[0];

  bluetooth_remote_gatt_characteristic_v8_internal::OncharacteristicvaluechangedAttributeSetter(v8_value, info);
}

void V8BluetoothRemoteGATTCharacteristic::GetDescriptorMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_BluetoothRemoteGATTCharacteristic_getDescriptor");

  ExecutionContext* execution_context_for_measurement = CurrentExecutionContext(info.GetIsolate());
  UseCounter::Count(execution_context_for_measurement, WebFeature::kWebBluetoothRemoteCharacteristicGetDescriptor);
  bluetooth_remote_gatt_characteristic_v8_internal::GetDescriptorMethod(info);
}

void V8BluetoothRemoteGATTCharacteristic::GetDescriptorsMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_BluetoothRemoteGATTCharacteristic_getDescriptors");

  ExecutionContext* execution_context_for_measurement = CurrentExecutionContext(info.GetIsolate());
  UseCounter::Count(execution_context_for_measurement, WebFeature::kWebBluetoothRemoteCharacteristicGetDescriptors);
  bluetooth_remote_gatt_characteristic_v8_internal::GetDescriptorsMethod(info);
}

void V8BluetoothRemoteGATTCharacteristic::ReadValueMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_BluetoothRemoteGATTCharacteristic_readValue");

  ExecutionContext* execution_context_for_measurement = CurrentExecutionContext(info.GetIsolate());
  UseCounter::Count(execution_context_for_measurement, WebFeature::kWebBluetoothRemoteCharacteristicReadValue);
  bluetooth_remote_gatt_characteristic_v8_internal::ReadValueMethod(info);
}

void V8BluetoothRemoteGATTCharacteristic::WriteValueMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_BluetoothRemoteGATTCharacteristic_writeValue");

  ExecutionContext* execution_context_for_measurement = CurrentExecutionContext(info.GetIsolate());
  UseCounter::Count(execution_context_for_measurement, WebFeature::kWebBluetoothRemoteCharacteristicWriteValue);
  bluetooth_remote_gatt_characteristic_v8_internal::WriteValueMethod(info);
}

void V8BluetoothRemoteGATTCharacteristic::StartNotificationsMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_BluetoothRemoteGATTCharacteristic_startNotifications");

  ExecutionContext* execution_context_for_measurement = CurrentExecutionContext(info.GetIsolate());
  UseCounter::Count(execution_context_for_measurement, WebFeature::kWebBluetoothRemoteCharacteristicStartNotifications);
  bluetooth_remote_gatt_characteristic_v8_internal::StartNotificationsMethod(info);
}

void V8BluetoothRemoteGATTCharacteristic::StopNotificationsMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_BluetoothRemoteGATTCharacteristic_stopNotifications");

  ExecutionContext* execution_context_for_measurement = CurrentExecutionContext(info.GetIsolate());
  UseCounter::Count(execution_context_for_measurement, WebFeature::kWebBluetoothRemoteCharacteristicStopNotifications);
  bluetooth_remote_gatt_characteristic_v8_internal::StopNotificationsMethod(info);
}

static void InstallV8BluetoothRemoteGATTCharacteristicTemplate(
    v8::Isolate* isolate,
    const DOMWrapperWorld& world,
    v8::Local<v8::FunctionTemplate> interface_template) {
  // Initialize the interface object's template.
  V8DOMConfiguration::InitializeDOMInterfaceTemplate(isolate, interface_template, V8BluetoothRemoteGATTCharacteristic::GetWrapperTypeInfo()->interface_name, V8EventTarget::DomTemplate(isolate, world), V8BluetoothRemoteGATTCharacteristic::kInternalFieldCount);

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

  V8BluetoothRemoteGATTCharacteristic::InstallRuntimeEnabledFeaturesOnTemplate(
      isolate, world, interface_template);
}

void V8BluetoothRemoteGATTCharacteristic::InstallRuntimeEnabledFeaturesOnTemplate(
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

v8::Local<v8::FunctionTemplate> V8BluetoothRemoteGATTCharacteristic::DomTemplate(
    v8::Isolate* isolate, const DOMWrapperWorld& world) {
  return V8DOMConfiguration::DomClassTemplate(
      isolate, world, const_cast<WrapperTypeInfo*>(V8BluetoothRemoteGATTCharacteristic::GetWrapperTypeInfo()),
      InstallV8BluetoothRemoteGATTCharacteristicTemplate);
}

bool V8BluetoothRemoteGATTCharacteristic::HasInstance(v8::Local<v8::Value> v8_value, v8::Isolate* isolate) {
  return V8PerIsolateData::From(isolate)->HasInstance(V8BluetoothRemoteGATTCharacteristic::GetWrapperTypeInfo(), v8_value);
}

v8::Local<v8::Object> V8BluetoothRemoteGATTCharacteristic::FindInstanceInPrototypeChain(
    v8::Local<v8::Value> v8_value, v8::Isolate* isolate) {
  return V8PerIsolateData::From(isolate)->FindInstanceInPrototypeChain(
      V8BluetoothRemoteGATTCharacteristic::GetWrapperTypeInfo(), v8_value);
}

BluetoothRemoteGATTCharacteristic* V8BluetoothRemoteGATTCharacteristic::ToImplWithTypeCheck(
    v8::Isolate* isolate, v8::Local<v8::Value> value) {
  return HasInstance(value, isolate) ? ToImpl(v8::Local<v8::Object>::Cast(value)) : nullptr;
}

BluetoothRemoteGATTCharacteristic* NativeValueTraits<BluetoothRemoteGATTCharacteristic>::NativeValue(
    v8::Isolate* isolate, v8::Local<v8::Value> value, ExceptionState& exception_state) {
  BluetoothRemoteGATTCharacteristic* native_value = V8BluetoothRemoteGATTCharacteristic::ToImplWithTypeCheck(isolate, value);
  if (!native_value) {
    exception_state.ThrowTypeError(ExceptionMessages::FailedToConvertJSValue(
        "BluetoothRemoteGATTCharacteristic"));
  }
  return native_value;
}

void V8BluetoothRemoteGATTCharacteristic::InstallConditionalFeatures(
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
          { "uuid", V8BluetoothRemoteGATTCharacteristic::UuidAttributeGetterCallback, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
          { "properties", V8BluetoothRemoteGATTCharacteristic::PropertiesAttributeGetterCallback, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
          { "service", V8BluetoothRemoteGATTCharacteristic::ServiceAttributeGetterCallback, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
          { "value", V8BluetoothRemoteGATTCharacteristic::ValueAttributeGetterCallback, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
          { "oncharacteristicvaluechanged", V8BluetoothRemoteGATTCharacteristic::OncharacteristicvaluechangedAttributeGetterCallback, V8BluetoothRemoteGATTCharacteristic::OncharacteristicvaluechangedAttributeSetterCallback, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
      };
      V8DOMConfiguration::InstallAccessors(
          isolate, world, instance_object, prototype_object, interface_object,
          signature, accessor_configurations,
          base::size(accessor_configurations));
    }
    if (is_secure_context) {
      {
        // Install getDescriptor configuration
        const V8DOMConfiguration::MethodConfiguration kConfigurations[] = {
            {"getDescriptor", V8BluetoothRemoteGATTCharacteristic::GetDescriptorMethodCallback, 1, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kDoNotCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds}
        };
        for (const auto& config : kConfigurations) {
          V8DOMConfiguration::InstallMethod(
              isolate, world, instance_object, prototype_object,
              interface_object, signature, config);
        }
      }
    }
    if (is_secure_context) {
      {
        // Install getDescriptors configuration
        const V8DOMConfiguration::MethodConfiguration kConfigurations[] = {
            {"getDescriptors", V8BluetoothRemoteGATTCharacteristic::GetDescriptorsMethodCallback, 0, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kDoNotCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds}
        };
        for (const auto& config : kConfigurations) {
          V8DOMConfiguration::InstallMethod(
              isolate, world, instance_object, prototype_object,
              interface_object, signature, config);
        }
      }
    }
    if (is_secure_context) {
      {
        // Install readValue configuration
        const V8DOMConfiguration::MethodConfiguration kConfigurations[] = {
            {"readValue", V8BluetoothRemoteGATTCharacteristic::ReadValueMethodCallback, 0, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kDoNotCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds}
        };
        for (const auto& config : kConfigurations) {
          V8DOMConfiguration::InstallMethod(
              isolate, world, instance_object, prototype_object,
              interface_object, signature, config);
        }
      }
    }
    if (is_secure_context) {
      {
        // Install writeValue configuration
        const V8DOMConfiguration::MethodConfiguration kConfigurations[] = {
            {"writeValue", V8BluetoothRemoteGATTCharacteristic::WriteValueMethodCallback, 1, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kDoNotCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds}
        };
        for (const auto& config : kConfigurations) {
          V8DOMConfiguration::InstallMethod(
              isolate, world, instance_object, prototype_object,
              interface_object, signature, config);
        }
      }
    }
    if (is_secure_context) {
      {
        // Install startNotifications configuration
        const V8DOMConfiguration::MethodConfiguration kConfigurations[] = {
            {"startNotifications", V8BluetoothRemoteGATTCharacteristic::StartNotificationsMethodCallback, 0, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kDoNotCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds}
        };
        for (const auto& config : kConfigurations) {
          V8DOMConfiguration::InstallMethod(
              isolate, world, instance_object, prototype_object,
              interface_object, signature, config);
        }
      }
    }
    if (is_secure_context) {
      {
        // Install stopNotifications configuration
        const V8DOMConfiguration::MethodConfiguration kConfigurations[] = {
            {"stopNotifications", V8BluetoothRemoteGATTCharacteristic::StopNotificationsMethodCallback, 0, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kDoNotCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds}
        };
        for (const auto& config : kConfigurations) {
          V8DOMConfiguration::InstallMethod(
              isolate, world, instance_object, prototype_object,
              interface_object, signature, config);
        }
      }
    }
  }
}

}  // namespace blink
