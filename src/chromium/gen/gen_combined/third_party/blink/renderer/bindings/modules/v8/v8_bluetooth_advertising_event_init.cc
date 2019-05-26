// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated from the Jinja2 template
// third_party/blink/renderer/bindings/templates/dictionary_v8.cc.tmpl
// by the script code_generator_v8.py.
// DO NOT MODIFY!

// clang-format off
#include "third_party/blink/renderer/bindings/modules/v8/v8_bluetooth_advertising_event_init.h"

#include "base/stl_util.h"
#include "third_party/blink/renderer/bindings/core/v8/idl_types.h"
#include "third_party/blink/renderer/bindings/core/v8/native_value_traits_impl.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_event_init.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_bluetooth_device.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_bluetooth_manufacturer_data_map.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_bluetooth_service_data_map.h"
#include "third_party/blink/renderer/platform/bindings/exception_state.h"

namespace blink {

static const v8::Eternal<v8::Name>* eternalV8BluetoothAdvertisingEventInitKeys(v8::Isolate* isolate) {
  static const char* const kKeys[] = {
    "appearance",
    "device",
    "manufacturerData",
    "name",
    "rssi",
    "serviceData",
    "txPower",
    "uuids",
  };
  return V8PerIsolateData::From(isolate)->FindOrCreateEternalNameCache(
      kKeys, kKeys, base::size(kKeys));
}

void V8BluetoothAdvertisingEventInit::ToImpl(v8::Isolate* isolate, v8::Local<v8::Value> v8_value, BluetoothAdvertisingEventInit* impl, ExceptionState& exception_state) {
  if (IsUndefinedOrNull(v8_value)) {
    exception_state.ThrowTypeError("Missing required member(s): device.");
    return;
  }
  if (!v8_value->IsObject()) {
    exception_state.ThrowTypeError("cannot convert to dictionary.");
    return;
  }
  v8::Local<v8::Object> v8Object = v8_value.As<v8::Object>();
  ALLOW_UNUSED_LOCAL(v8Object);

  V8EventInit::ToImpl(isolate, v8_value, impl, exception_state);
  if (exception_state.HadException())
    return;

  const v8::Eternal<v8::Name>* keys = eternalV8BluetoothAdvertisingEventInitKeys(isolate);
  v8::TryCatch block(isolate);
  v8::Local<v8::Context> context = isolate->GetCurrentContext();
  v8::Local<v8::Value> appearance_value;
  if (!v8Object->Get(context, keys[0].Get(isolate)).ToLocal(&appearance_value)) {
    exception_state.RethrowV8Exception(block.Exception());
    return;
  }
  if (appearance_value.IsEmpty() || appearance_value->IsUndefined()) {
    // Do nothing.
  } else {
    uint16_t appearance_cpp_value = NativeValueTraits<IDLUnsignedShort>::NativeValue(isolate, appearance_value, exception_state);
    if (exception_state.HadException())
      return;
    impl->setAppearance(appearance_cpp_value);
  }

  v8::Local<v8::Value> device_value;
  if (!v8Object->Get(context, keys[1].Get(isolate)).ToLocal(&device_value)) {
    exception_state.RethrowV8Exception(block.Exception());
    return;
  }
  if (device_value.IsEmpty() || device_value->IsUndefined()) {
    exception_state.ThrowTypeError("required member device is undefined.");
    return;
  } else {
    BluetoothDevice* device_cpp_value = V8BluetoothDevice::ToImplWithTypeCheck(isolate, device_value);
    if (!device_cpp_value) {
      exception_state.ThrowTypeError("member device is not of type BluetoothDevice.");
      return;
    }
    impl->setDevice(device_cpp_value);
  }

  v8::Local<v8::Value> manufacturer_data_value;
  if (!v8Object->Get(context, keys[2].Get(isolate)).ToLocal(&manufacturer_data_value)) {
    exception_state.RethrowV8Exception(block.Exception());
    return;
  }
  if (manufacturer_data_value.IsEmpty() || manufacturer_data_value->IsUndefined()) {
    // Do nothing.
  } else {
    BluetoothManufacturerDataMap* manufacturer_data_cpp_value = V8BluetoothManufacturerDataMap::ToImplWithTypeCheck(isolate, manufacturer_data_value);
    if (!manufacturer_data_cpp_value) {
      exception_state.ThrowTypeError("member manufacturerData is not of type BluetoothManufacturerDataMap.");
      return;
    }
    impl->setManufacturerData(manufacturer_data_cpp_value);
  }

  v8::Local<v8::Value> name_value;
  if (!v8Object->Get(context, keys[3].Get(isolate)).ToLocal(&name_value)) {
    exception_state.RethrowV8Exception(block.Exception());
    return;
  }
  if (name_value.IsEmpty() || name_value->IsUndefined()) {
    // Do nothing.
  } else {
    V8StringResource<> name_cpp_value = name_value;
    if (!name_cpp_value.Prepare(exception_state))
      return;
    impl->setName(name_cpp_value);
  }

  v8::Local<v8::Value> rssi_value;
  if (!v8Object->Get(context, keys[4].Get(isolate)).ToLocal(&rssi_value)) {
    exception_state.RethrowV8Exception(block.Exception());
    return;
  }
  if (rssi_value.IsEmpty() || rssi_value->IsUndefined()) {
    // Do nothing.
  } else {
    int8_t rssi_cpp_value = NativeValueTraits<IDLByte>::NativeValue(isolate, rssi_value, exception_state);
    if (exception_state.HadException())
      return;
    impl->setRssi(rssi_cpp_value);
  }

  v8::Local<v8::Value> service_data_value;
  if (!v8Object->Get(context, keys[5].Get(isolate)).ToLocal(&service_data_value)) {
    exception_state.RethrowV8Exception(block.Exception());
    return;
  }
  if (service_data_value.IsEmpty() || service_data_value->IsUndefined()) {
    // Do nothing.
  } else {
    BluetoothServiceDataMap* service_data_cpp_value = V8BluetoothServiceDataMap::ToImplWithTypeCheck(isolate, service_data_value);
    if (!service_data_cpp_value) {
      exception_state.ThrowTypeError("member serviceData is not of type BluetoothServiceDataMap.");
      return;
    }
    impl->setServiceData(service_data_cpp_value);
  }

  v8::Local<v8::Value> tx_power_value;
  if (!v8Object->Get(context, keys[6].Get(isolate)).ToLocal(&tx_power_value)) {
    exception_state.RethrowV8Exception(block.Exception());
    return;
  }
  if (tx_power_value.IsEmpty() || tx_power_value->IsUndefined()) {
    // Do nothing.
  } else {
    int8_t tx_power_cpp_value = NativeValueTraits<IDLByte>::NativeValue(isolate, tx_power_value, exception_state);
    if (exception_state.HadException())
      return;
    impl->setTxPower(tx_power_cpp_value);
  }

  v8::Local<v8::Value> uuids_value;
  if (!v8Object->Get(context, keys[7].Get(isolate)).ToLocal(&uuids_value)) {
    exception_state.RethrowV8Exception(block.Exception());
    return;
  }
  if (uuids_value.IsEmpty() || uuids_value->IsUndefined()) {
    // Do nothing.
  } else {
    HeapVector<StringOrUnsignedLong> uuids_cpp_value = NativeValueTraits<IDLSequence<StringOrUnsignedLong>>::NativeValue(isolate, uuids_value, exception_state);
    if (exception_state.HadException())
      return;
    impl->setUuids(uuids_cpp_value);
  }
}

v8::Local<v8::Value> BluetoothAdvertisingEventInit::ToV8Impl(v8::Local<v8::Object> creationContext, v8::Isolate* isolate) const {
  v8::Local<v8::Object> v8Object = v8::Object::New(isolate);
  if (!toV8BluetoothAdvertisingEventInit(this, v8Object, creationContext, isolate))
    return v8::Undefined(isolate);
  return v8Object;
}

bool toV8BluetoothAdvertisingEventInit(const BluetoothAdvertisingEventInit* impl, v8::Local<v8::Object> dictionary, v8::Local<v8::Object> creationContext, v8::Isolate* isolate) {
  if (!toV8EventInit(impl, dictionary, creationContext, isolate))
    return false;

  const v8::Eternal<v8::Name>* keys = eternalV8BluetoothAdvertisingEventInitKeys(isolate);
  v8::Local<v8::Context> context = isolate->GetCurrentContext();

  auto create_property = [dictionary, context, keys, isolate](
                             size_t key_index, v8::Local<v8::Value> value) {
    bool added_property;
    v8::Local<v8::Name> key = keys[key_index].Get(isolate);
    if (!dictionary->CreateDataProperty(context, key, value)
             .To(&added_property)) {
      return false;
    }
    return added_property;
  };

  v8::Local<v8::Value> appearance_value;
  bool appearance_has_value_or_default = false;
  if (impl->hasAppearance()) {
    appearance_value = v8::Integer::NewFromUnsigned(isolate, impl->appearance());
    appearance_has_value_or_default = true;
  }
  if (appearance_has_value_or_default &&
      !create_property(0, appearance_value)) {
    return false;
  }

  v8::Local<v8::Value> device_value;
  bool device_has_value_or_default = false;
  if (impl->hasDevice()) {
    device_value = ToV8(impl->device(), creationContext, isolate);
    device_has_value_or_default = true;
  } else {
    NOTREACHED();
  }
  if (device_has_value_or_default &&
      !create_property(1, device_value)) {
    return false;
  }

  v8::Local<v8::Value> manufacturer_data_value;
  bool manufacturer_data_has_value_or_default = false;
  if (impl->hasManufacturerData()) {
    manufacturer_data_value = ToV8(impl->manufacturerData(), creationContext, isolate);
    manufacturer_data_has_value_or_default = true;
  }
  if (manufacturer_data_has_value_or_default &&
      !create_property(2, manufacturer_data_value)) {
    return false;
  }

  v8::Local<v8::Value> name_value;
  bool name_has_value_or_default = false;
  if (impl->hasName()) {
    name_value = V8String(isolate, impl->name());
    name_has_value_or_default = true;
  }
  if (name_has_value_or_default &&
      !create_property(3, name_value)) {
    return false;
  }

  v8::Local<v8::Value> rssi_value;
  bool rssi_has_value_or_default = false;
  if (impl->hasRssi()) {
    rssi_value = v8::Integer::New(isolate, impl->rssi());
    rssi_has_value_or_default = true;
  }
  if (rssi_has_value_or_default &&
      !create_property(4, rssi_value)) {
    return false;
  }

  v8::Local<v8::Value> service_data_value;
  bool service_data_has_value_or_default = false;
  if (impl->hasServiceData()) {
    service_data_value = ToV8(impl->serviceData(), creationContext, isolate);
    service_data_has_value_or_default = true;
  }
  if (service_data_has_value_or_default &&
      !create_property(5, service_data_value)) {
    return false;
  }

  v8::Local<v8::Value> tx_power_value;
  bool tx_power_has_value_or_default = false;
  if (impl->hasTxPower()) {
    tx_power_value = v8::Integer::New(isolate, impl->txPower());
    tx_power_has_value_or_default = true;
  }
  if (tx_power_has_value_or_default &&
      !create_property(6, tx_power_value)) {
    return false;
  }

  v8::Local<v8::Value> uuids_value;
  bool uuids_has_value_or_default = false;
  if (impl->hasUuids()) {
    uuids_value = ToV8(impl->uuids(), creationContext, isolate);
    uuids_has_value_or_default = true;
  }
  if (uuids_has_value_or_default &&
      !create_property(7, uuids_value)) {
    return false;
  }

  return true;
}

BluetoothAdvertisingEventInit* NativeValueTraits<BluetoothAdvertisingEventInit>::NativeValue(v8::Isolate* isolate, v8::Local<v8::Value> value, ExceptionState& exception_state) {
  BluetoothAdvertisingEventInit* impl = BluetoothAdvertisingEventInit::Create();
  V8BluetoothAdvertisingEventInit::ToImpl(isolate, value, impl, exception_state);
  return impl;
}

}  // namespace blink
