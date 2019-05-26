// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated from the Jinja2 template
// third_party/blink/renderer/bindings/templates/dictionary_impl.cc.tmpl
// by the script code_generator_v8.py.
// DO NOT MODIFY!

// clang-format off
#include "third_party/blink/renderer/modules/bluetooth/bluetooth_advertising_event_init.h"

#include "third_party/blink/renderer/modules/bluetooth/bluetooth_device.h"
#include "third_party/blink/renderer/modules/bluetooth/bluetooth_manufacturer_data_map.h"
#include "third_party/blink/renderer/modules/bluetooth/bluetooth_service_data_map.h"

namespace blink {

BluetoothAdvertisingEventInit::BluetoothAdvertisingEventInit() {
}

BluetoothAdvertisingEventInit::~BluetoothAdvertisingEventInit() = default;

void BluetoothAdvertisingEventInit::setUuids(const HeapVector<StringOrUnsignedLong>& value) {
  uuids_ = value;
  has_uuids_ = true;
}

void BluetoothAdvertisingEventInit::Trace(blink::Visitor* visitor) {
  visitor->Trace(device_);
  visitor->Trace(manufacturer_data_);
  visitor->Trace(service_data_);
  visitor->Trace(uuids_);
  EventInit::Trace(visitor);
}

}  // namespace blink
