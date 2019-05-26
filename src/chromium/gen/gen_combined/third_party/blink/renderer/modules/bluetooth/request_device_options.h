// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated from the Jinja2 template
// third_party/blink/renderer/bindings/templates/dictionary_impl.h.tmpl
// by the script code_generator_v8.py.
// DO NOT MODIFY!

// clang-format off
#ifndef THIRD_PARTY_BLINK_RENDERER_MODULES_BLUETOOTH_REQUEST_DEVICE_OPTIONS_H_
#define THIRD_PARTY_BLINK_RENDERER_MODULES_BLUETOOTH_REQUEST_DEVICE_OPTIONS_H_

#include "third_party/blink/renderer/bindings/core/v8/idl_dictionary_base.h"
#include "third_party/blink/renderer/bindings/modules/v8/string_or_unsigned_long.h"
#include "third_party/blink/renderer/modules/bluetooth/bluetooth_le_scan_filter_init.h"
#include "third_party/blink/renderer/modules/modules_export.h"
#include "third_party/blink/renderer/platform/heap/handle.h"
#include "third_party/blink/renderer/platform/wtf/vector.h"

namespace blink {

class MODULES_EXPORT RequestDeviceOptions : public IDLDictionaryBase {
 public:
  static RequestDeviceOptions* Create() { return MakeGarbageCollected<RequestDeviceOptions>(); }

  RequestDeviceOptions();
  virtual ~RequestDeviceOptions();

  bool hasAcceptAllDevices() const { return has_accept_all_devices_; }
  bool acceptAllDevices() const {
    DCHECK(has_accept_all_devices_);
    return accept_all_devices_;
  }
  inline void setAcceptAllDevices(bool);

  bool hasFilters() const { return has_filters_; }
  const HeapVector<Member<BluetoothLEScanFilterInit>>& filters() const {
    DCHECK(has_filters_);
    return filters_;
  }
  void setFilters(const HeapVector<Member<BluetoothLEScanFilterInit>>&);

  bool hasOptionalServices() const { return has_optional_services_; }
  const HeapVector<StringOrUnsignedLong>& optionalServices() const {
    DCHECK(has_optional_services_);
    return optional_services_;
  }
  void setOptionalServices(const HeapVector<StringOrUnsignedLong>&);

  v8::Local<v8::Value> ToV8Impl(v8::Local<v8::Object>, v8::Isolate*) const override;
  void Trace(blink::Visitor*) override;

 private:
  bool has_accept_all_devices_ = false;
  bool has_filters_ = false;
  bool has_optional_services_ = false;

  bool accept_all_devices_;
  HeapVector<Member<BluetoothLEScanFilterInit>> filters_;
  HeapVector<StringOrUnsignedLong> optional_services_;

  friend class V8RequestDeviceOptions;
};

void RequestDeviceOptions::setAcceptAllDevices(bool value) {
  accept_all_devices_ = value;
  has_accept_all_devices_ = true;
}

}  // namespace blink

#endif  // THIRD_PARTY_BLINK_RENDERER_MODULES_BLUETOOTH_REQUEST_DEVICE_OPTIONS_H_
