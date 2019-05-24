// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated from the Jinja2 template
// third_party/blink/renderer/bindings/templates/dictionary_impl.h.tmpl
// by the script code_generator_v8.py.
// DO NOT MODIFY!

// clang-format off
#ifndef THIRD_PARTY_BLINK_RENDERER_MODULES_BLUETOOTH_BLUETOOTH_ADVERTISING_EVENT_INIT_H_
#define THIRD_PARTY_BLINK_RENDERER_MODULES_BLUETOOTH_BLUETOOTH_ADVERTISING_EVENT_INIT_H_

#include "third_party/blink/renderer/bindings/modules/v8/string_or_unsigned_long.h"
#include "third_party/blink/renderer/core/dom/events/event_init.h"
#include "third_party/blink/renderer/modules/modules_export.h"
#include "third_party/blink/renderer/platform/heap/handle.h"
#include "third_party/blink/renderer/platform/wtf/text/wtf_string.h"
#include "third_party/blink/renderer/platform/wtf/vector.h"

namespace blink {

class BluetoothServiceDataMap;
class BluetoothManufacturerDataMap;
class BluetoothDevice;

class MODULES_EXPORT BluetoothAdvertisingEventInit : public EventInit {
 public:
  static BluetoothAdvertisingEventInit* Create() { return MakeGarbageCollected<BluetoothAdvertisingEventInit>(); }

  BluetoothAdvertisingEventInit();
  virtual ~BluetoothAdvertisingEventInit();

  bool hasAppearance() const { return has_appearance_; }
  uint16_t appearance() const {
    DCHECK(has_appearance_);
    return appearance_;
  }
  inline void setAppearance(uint16_t);

  bool hasDevice() const { return device_; }
  BluetoothDevice* device() const {
    return device_;
  }
  inline void setDevice(BluetoothDevice*);

  bool hasManufacturerData() const { return manufacturer_data_; }
  BluetoothManufacturerDataMap* manufacturerData() const {
    return manufacturer_data_;
  }
  inline void setManufacturerData(BluetoothManufacturerDataMap*);

  bool hasName() const { return !name_.IsNull(); }
  const String& name() const {
    return name_;
  }
  inline void setName(const String&);

  bool hasRssi() const { return has_rssi_; }
  int8_t rssi() const {
    DCHECK(has_rssi_);
    return rssi_;
  }
  inline void setRssi(int8_t);

  bool hasServiceData() const { return service_data_; }
  BluetoothServiceDataMap* serviceData() const {
    return service_data_;
  }
  inline void setServiceData(BluetoothServiceDataMap*);

  bool hasTxPower() const { return has_tx_power_; }
  int8_t txPower() const {
    DCHECK(has_tx_power_);
    return tx_power_;
  }
  inline void setTxPower(int8_t);

  bool hasUuids() const { return has_uuids_; }
  const HeapVector<StringOrUnsignedLong>& uuids() const {
    DCHECK(has_uuids_);
    return uuids_;
  }
  void setUuids(const HeapVector<StringOrUnsignedLong>&);

  v8::Local<v8::Value> ToV8Impl(v8::Local<v8::Object>, v8::Isolate*) const override;
  void Trace(blink::Visitor*) override;

 private:
  bool has_appearance_ = false;
  bool has_rssi_ = false;
  bool has_tx_power_ = false;
  bool has_uuids_ = false;

  uint16_t appearance_;
  Member<BluetoothDevice> device_;
  Member<BluetoothManufacturerDataMap> manufacturer_data_;
  String name_;
  int8_t rssi_;
  Member<BluetoothServiceDataMap> service_data_;
  int8_t tx_power_;
  HeapVector<StringOrUnsignedLong> uuids_;

  friend class V8BluetoothAdvertisingEventInit;
};

void BluetoothAdvertisingEventInit::setAppearance(uint16_t value) {
  appearance_ = value;
  has_appearance_ = true;
}

void BluetoothAdvertisingEventInit::setDevice(BluetoothDevice* value) {
  device_ = value;
}

void BluetoothAdvertisingEventInit::setManufacturerData(BluetoothManufacturerDataMap* value) {
  manufacturer_data_ = value;
}

void BluetoothAdvertisingEventInit::setName(const String& value) {
  name_ = value;
}

void BluetoothAdvertisingEventInit::setRssi(int8_t value) {
  rssi_ = value;
  has_rssi_ = true;
}

void BluetoothAdvertisingEventInit::setServiceData(BluetoothServiceDataMap* value) {
  service_data_ = value;
}

void BluetoothAdvertisingEventInit::setTxPower(int8_t value) {
  tx_power_ = value;
  has_tx_power_ = true;
}

}  // namespace blink

#endif  // THIRD_PARTY_BLINK_RENDERER_MODULES_BLUETOOTH_BLUETOOTH_ADVERTISING_EVENT_INIT_H_
