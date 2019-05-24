// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated from the Jinja2 template
// third_party/blink/renderer/bindings/templates/dictionary_impl.h.tmpl
// by the script code_generator_v8.py.
// DO NOT MODIFY!

// clang-format off
#ifndef THIRD_PARTY_BLINK_RENDERER_MODULES_BLUETOOTH_BLUETOOTH_LE_SCAN_FILTER_INIT_H_
#define THIRD_PARTY_BLINK_RENDERER_MODULES_BLUETOOTH_BLUETOOTH_LE_SCAN_FILTER_INIT_H_

#include "third_party/blink/renderer/bindings/core/v8/idl_dictionary_base.h"
#include "third_party/blink/renderer/bindings/modules/v8/string_or_unsigned_long.h"
#include "third_party/blink/renderer/modules/modules_export.h"
#include "third_party/blink/renderer/platform/heap/handle.h"
#include "third_party/blink/renderer/platform/wtf/text/wtf_string.h"
#include "third_party/blink/renderer/platform/wtf/vector.h"

namespace blink {

class MODULES_EXPORT BluetoothLEScanFilterInit : public IDLDictionaryBase {
 public:
  static BluetoothLEScanFilterInit* Create() { return MakeGarbageCollected<BluetoothLEScanFilterInit>(); }

  BluetoothLEScanFilterInit();
  virtual ~BluetoothLEScanFilterInit();

  bool hasName() const { return !name_.IsNull(); }
  const String& name() const {
    return name_;
  }
  inline void setName(const String&);

  bool hasNamePrefix() const { return !name_prefix_.IsNull(); }
  const String& namePrefix() const {
    return name_prefix_;
  }
  inline void setNamePrefix(const String&);

  bool hasServices() const { return has_services_; }
  const HeapVector<StringOrUnsignedLong>& services() const {
    DCHECK(has_services_);
    return services_;
  }
  void setServices(const HeapVector<StringOrUnsignedLong>&);

  v8::Local<v8::Value> ToV8Impl(v8::Local<v8::Object>, v8::Isolate*) const override;
  void Trace(blink::Visitor*) override;

 private:
  bool has_services_ = false;

  String name_;
  String name_prefix_;
  HeapVector<StringOrUnsignedLong> services_;

  friend class V8BluetoothLEScanFilterInit;
};

void BluetoothLEScanFilterInit::setName(const String& value) {
  name_ = value;
}

void BluetoothLEScanFilterInit::setNamePrefix(const String& value) {
  name_prefix_ = value;
}

}  // namespace blink

#endif  // THIRD_PARTY_BLINK_RENDERER_MODULES_BLUETOOTH_BLUETOOTH_LE_SCAN_FILTER_INIT_H_
