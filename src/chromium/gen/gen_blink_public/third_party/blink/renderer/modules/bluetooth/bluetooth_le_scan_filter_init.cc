// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated from the Jinja2 template
// third_party/blink/renderer/bindings/templates/dictionary_impl.cc.tmpl
// by the script code_generator_v8.py.
// DO NOT MODIFY!

// clang-format off
#include "third_party/blink/renderer/modules/bluetooth/bluetooth_le_scan_filter_init.h"

namespace blink {

BluetoothLEScanFilterInit::BluetoothLEScanFilterInit() {
}

BluetoothLEScanFilterInit::~BluetoothLEScanFilterInit() = default;

void BluetoothLEScanFilterInit::setServices(const HeapVector<StringOrUnsignedLong>& value) {
  services_ = value;
  has_services_ = true;
}

void BluetoothLEScanFilterInit::Trace(blink::Visitor* visitor) {
  visitor->Trace(services_);
  IDLDictionaryBase::Trace(visitor);
}

}  // namespace blink
