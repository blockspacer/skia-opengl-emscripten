// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated from the Jinja2 template
// third_party/blink/renderer/bindings/templates/dictionary_impl.h.tmpl
// by the script code_generator_v8.py.
// DO NOT MODIFY!

// clang-format off
#ifndef THIRD_PARTY_BLINK_RENDERER_MODULES_WEBUSB_USB_CONTROL_TRANSFER_PARAMETERS_H_
#define THIRD_PARTY_BLINK_RENDERER_MODULES_WEBUSB_USB_CONTROL_TRANSFER_PARAMETERS_H_

#include "third_party/blink/renderer/bindings/core/v8/idl_dictionary_base.h"
#include "third_party/blink/renderer/modules/modules_export.h"
#include "third_party/blink/renderer/platform/heap/handle.h"
#include "third_party/blink/renderer/platform/wtf/text/wtf_string.h"

namespace blink {

class MODULES_EXPORT USBControlTransferParameters : public IDLDictionaryBase {
 public:
  static USBControlTransferParameters* Create() { return MakeGarbageCollected<USBControlTransferParameters>(); }

  USBControlTransferParameters();
  virtual ~USBControlTransferParameters();

  bool hasIndex() const { return has_index_; }
  uint16_t index() const {
    DCHECK(has_index_);
    return index_;
  }
  inline void setIndex(uint16_t);

  bool hasRecipient() const { return !recipient_.IsNull(); }
  const String& recipient() const {
    return recipient_;
  }
  inline void setRecipient(const String&);

  bool hasRequest() const { return has_request_; }
  uint8_t request() const {
    DCHECK(has_request_);
    return request_;
  }
  inline void setRequest(uint8_t);

  bool hasRequestType() const { return !request_type_.IsNull(); }
  const String& requestType() const {
    return request_type_;
  }
  inline void setRequestType(const String&);

  bool hasValue() const { return has_value_; }
  uint16_t value() const {
    DCHECK(has_value_);
    return value_;
  }
  inline void setValue(uint16_t);

  v8::Local<v8::Value> ToV8Impl(v8::Local<v8::Object>, v8::Isolate*) const override;
  void Trace(blink::Visitor*) override;

 private:
  bool has_index_ = false;
  bool has_request_ = false;
  bool has_value_ = false;

  uint16_t index_;
  String recipient_;
  uint8_t request_;
  String request_type_;
  uint16_t value_;

  friend class V8USBControlTransferParameters;
};

void USBControlTransferParameters::setIndex(uint16_t value) {
  index_ = value;
  has_index_ = true;
}

void USBControlTransferParameters::setRecipient(const String& value) {
  recipient_ = value;
}

void USBControlTransferParameters::setRequest(uint8_t value) {
  request_ = value;
  has_request_ = true;
}

void USBControlTransferParameters::setRequestType(const String& value) {
  request_type_ = value;
}

void USBControlTransferParameters::setValue(uint16_t value) {
  value_ = value;
  has_value_ = true;
}

}  // namespace blink

#endif  // THIRD_PARTY_BLINK_RENDERER_MODULES_WEBUSB_USB_CONTROL_TRANSFER_PARAMETERS_H_
