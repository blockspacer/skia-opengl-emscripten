// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated from the Jinja2 template
// third_party/blink/renderer/bindings/templates/dictionary_impl.h.tmpl
// by the script code_generator_v8.py.
// DO NOT MODIFY!

// clang-format off
#ifndef THIRD_PARTY_BLINK_RENDERER_MODULES_HID_HID_DEVICE_FILTER_H_
#define THIRD_PARTY_BLINK_RENDERER_MODULES_HID_HID_DEVICE_FILTER_H_

#include "third_party/blink/renderer/bindings/core/v8/idl_dictionary_base.h"
#include "third_party/blink/renderer/modules/modules_export.h"
#include "third_party/blink/renderer/platform/heap/handle.h"

namespace blink {

class MODULES_EXPORT HIDDeviceFilter : public IDLDictionaryBase {
 public:
  static HIDDeviceFilter* Create() { return MakeGarbageCollected<HIDDeviceFilter>(); }

  HIDDeviceFilter();
  virtual ~HIDDeviceFilter();

  bool hasProductId() const { return has_product_id_; }
  uint16_t productId() const {
    DCHECK(has_product_id_);
    return product_id_;
  }
  inline void setProductId(uint16_t);

  bool hasUsage() const { return has_usage_; }
  uint16_t usage() const {
    DCHECK(has_usage_);
    return usage_;
  }
  inline void setUsage(uint16_t);

  bool hasUsagePage() const { return has_usage_page_; }
  uint16_t usagePage() const {
    DCHECK(has_usage_page_);
    return usage_page_;
  }
  inline void setUsagePage(uint16_t);

  bool hasVendorId() const { return has_vendor_id_; }
  uint32_t vendorId() const {
    DCHECK(has_vendor_id_);
    return vendor_id_;
  }
  inline void setVendorId(uint32_t);

  v8::Local<v8::Value> ToV8Impl(v8::Local<v8::Object>, v8::Isolate*) const override;
  void Trace(blink::Visitor*) override;

 private:
  bool has_product_id_ = false;
  bool has_usage_ = false;
  bool has_usage_page_ = false;
  bool has_vendor_id_ = false;

  uint16_t product_id_;
  uint16_t usage_;
  uint16_t usage_page_;
  uint32_t vendor_id_;

  friend class V8HIDDeviceFilter;
};

void HIDDeviceFilter::setProductId(uint16_t value) {
  product_id_ = value;
  has_product_id_ = true;
}

void HIDDeviceFilter::setUsage(uint16_t value) {
  usage_ = value;
  has_usage_ = true;
}

void HIDDeviceFilter::setUsagePage(uint16_t value) {
  usage_page_ = value;
  has_usage_page_ = true;
}

void HIDDeviceFilter::setVendorId(uint32_t value) {
  vendor_id_ = value;
  has_vendor_id_ = true;
}

}  // namespace blink

#endif  // THIRD_PARTY_BLINK_RENDERER_MODULES_HID_HID_DEVICE_FILTER_H_
