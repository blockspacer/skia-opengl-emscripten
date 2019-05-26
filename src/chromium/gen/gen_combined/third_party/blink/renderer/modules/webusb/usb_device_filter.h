// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated from the Jinja2 template
// third_party/blink/renderer/bindings/templates/dictionary_impl.h.tmpl
// by the script code_generator_v8.py.
// DO NOT MODIFY!

// clang-format off
#ifndef THIRD_PARTY_BLINK_RENDERER_MODULES_WEBUSB_USB_DEVICE_FILTER_H_
#define THIRD_PARTY_BLINK_RENDERER_MODULES_WEBUSB_USB_DEVICE_FILTER_H_

#include "third_party/blink/renderer/bindings/core/v8/idl_dictionary_base.h"
#include "third_party/blink/renderer/modules/modules_export.h"
#include "third_party/blink/renderer/platform/heap/handle.h"
#include "third_party/blink/renderer/platform/wtf/text/wtf_string.h"

namespace blink {

class MODULES_EXPORT USBDeviceFilter : public IDLDictionaryBase {
 public:
  static USBDeviceFilter* Create() { return MakeGarbageCollected<USBDeviceFilter>(); }

  USBDeviceFilter();
  virtual ~USBDeviceFilter();

  bool hasClassCode() const { return has_class_code_; }
  uint8_t classCode() const {
    DCHECK(has_class_code_);
    return class_code_;
  }
  inline void setClassCode(uint8_t);

  bool hasProductId() const { return has_product_id_; }
  uint16_t productId() const {
    DCHECK(has_product_id_);
    return product_id_;
  }
  inline void setProductId(uint16_t);

  bool hasProtocolCode() const { return has_protocol_code_; }
  uint8_t protocolCode() const {
    DCHECK(has_protocol_code_);
    return protocol_code_;
  }
  inline void setProtocolCode(uint8_t);

  bool hasSerialNumber() const { return !serial_number_.IsNull(); }
  const String& serialNumber() const {
    return serial_number_;
  }
  inline void setSerialNumber(const String&);

  bool hasSubclassCode() const { return has_subclass_code_; }
  uint8_t subclassCode() const {
    DCHECK(has_subclass_code_);
    return subclass_code_;
  }
  inline void setSubclassCode(uint8_t);

  bool hasVendorId() const { return has_vendor_id_; }
  uint16_t vendorId() const {
    DCHECK(has_vendor_id_);
    return vendor_id_;
  }
  inline void setVendorId(uint16_t);

  v8::Local<v8::Value> ToV8Impl(v8::Local<v8::Object>, v8::Isolate*) const override;
  void Trace(blink::Visitor*) override;

 private:
  bool has_class_code_ = false;
  bool has_product_id_ = false;
  bool has_protocol_code_ = false;
  bool has_subclass_code_ = false;
  bool has_vendor_id_ = false;

  uint8_t class_code_;
  uint16_t product_id_;
  uint8_t protocol_code_;
  String serial_number_;
  uint8_t subclass_code_;
  uint16_t vendor_id_;

  friend class V8USBDeviceFilter;
};

void USBDeviceFilter::setClassCode(uint8_t value) {
  class_code_ = value;
  has_class_code_ = true;
}

void USBDeviceFilter::setProductId(uint16_t value) {
  product_id_ = value;
  has_product_id_ = true;
}

void USBDeviceFilter::setProtocolCode(uint8_t value) {
  protocol_code_ = value;
  has_protocol_code_ = true;
}

void USBDeviceFilter::setSerialNumber(const String& value) {
  serial_number_ = value;
}

void USBDeviceFilter::setSubclassCode(uint8_t value) {
  subclass_code_ = value;
  has_subclass_code_ = true;
}

void USBDeviceFilter::setVendorId(uint16_t value) {
  vendor_id_ = value;
  has_vendor_id_ = true;
}

}  // namespace blink

#endif  // THIRD_PARTY_BLINK_RENDERER_MODULES_WEBUSB_USB_DEVICE_FILTER_H_
