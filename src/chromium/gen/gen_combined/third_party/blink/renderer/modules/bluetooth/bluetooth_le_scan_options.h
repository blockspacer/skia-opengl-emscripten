// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated from the Jinja2 template
// third_party/blink/renderer/bindings/templates/dictionary_impl.h.tmpl
// by the script code_generator_v8.py.
// DO NOT MODIFY!

// clang-format off
#ifndef THIRD_PARTY_BLINK_RENDERER_MODULES_BLUETOOTH_BLUETOOTH_LE_SCAN_OPTIONS_H_
#define THIRD_PARTY_BLINK_RENDERER_MODULES_BLUETOOTH_BLUETOOTH_LE_SCAN_OPTIONS_H_

#include "third_party/blink/renderer/bindings/core/v8/idl_dictionary_base.h"
#include "third_party/blink/renderer/modules/bluetooth/bluetooth_le_scan_filter_init.h"
#include "third_party/blink/renderer/modules/modules_export.h"
#include "third_party/blink/renderer/platform/heap/handle.h"
#include "third_party/blink/renderer/platform/wtf/vector.h"

namespace blink {

class MODULES_EXPORT BluetoothLEScanOptions : public IDLDictionaryBase {
 public:
  static BluetoothLEScanOptions* Create() { return MakeGarbageCollected<BluetoothLEScanOptions>(); }

  BluetoothLEScanOptions();
  virtual ~BluetoothLEScanOptions();

  bool hasAcceptAllAdvertisements() const { return has_accept_all_advertisements_; }
  bool acceptAllAdvertisements() const {
    DCHECK(has_accept_all_advertisements_);
    return accept_all_advertisements_;
  }
  inline void setAcceptAllAdvertisements(bool);

  bool hasFilters() const { return has_filters_; }
  const HeapVector<Member<BluetoothLEScanFilterInit>>& filters() const {
    DCHECK(has_filters_);
    return filters_;
  }
  void setFilters(const HeapVector<Member<BluetoothLEScanFilterInit>>&);

  bool hasKeepRepeatedDevices() const { return has_keep_repeated_devices_; }
  bool keepRepeatedDevices() const {
    DCHECK(has_keep_repeated_devices_);
    return keep_repeated_devices_;
  }
  inline void setKeepRepeatedDevices(bool);

  v8::Local<v8::Value> ToV8Impl(v8::Local<v8::Object>, v8::Isolate*) const override;
  void Trace(blink::Visitor*) override;

 private:
  bool has_accept_all_advertisements_ = false;
  bool has_filters_ = false;
  bool has_keep_repeated_devices_ = false;

  bool accept_all_advertisements_;
  HeapVector<Member<BluetoothLEScanFilterInit>> filters_;
  bool keep_repeated_devices_;

  friend class V8BluetoothLEScanOptions;
};

void BluetoothLEScanOptions::setAcceptAllAdvertisements(bool value) {
  accept_all_advertisements_ = value;
  has_accept_all_advertisements_ = true;
}

void BluetoothLEScanOptions::setKeepRepeatedDevices(bool value) {
  keep_repeated_devices_ = value;
  has_keep_repeated_devices_ = true;
}

}  // namespace blink

#endif  // THIRD_PARTY_BLINK_RENDERER_MODULES_BLUETOOTH_BLUETOOTH_LE_SCAN_OPTIONS_H_
