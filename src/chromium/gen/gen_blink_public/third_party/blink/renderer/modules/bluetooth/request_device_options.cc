// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated from the Jinja2 template
// third_party/blink/renderer/bindings/templates/dictionary_impl.cc.tmpl
// by the script code_generator_v8.py.
// DO NOT MODIFY!

// clang-format off
#include "third_party/blink/renderer/modules/bluetooth/request_device_options.h"

namespace blink {

RequestDeviceOptions::RequestDeviceOptions() {
  setAcceptAllDevices(false);
  setOptionalServices(HeapVector<StringOrUnsignedLong>());
}

RequestDeviceOptions::~RequestDeviceOptions() = default;

void RequestDeviceOptions::setFilters(const HeapVector<Member<BluetoothLEScanFilterInit>>& value) {
  filters_ = value;
  has_filters_ = true;
}

void RequestDeviceOptions::setOptionalServices(const HeapVector<StringOrUnsignedLong>& value) {
  optional_services_ = value;
  has_optional_services_ = true;
}

void RequestDeviceOptions::Trace(blink::Visitor* visitor) {
  visitor->Trace(filters_);
  visitor->Trace(optional_services_);
  IDLDictionaryBase::Trace(visitor);
}

}  // namespace blink
