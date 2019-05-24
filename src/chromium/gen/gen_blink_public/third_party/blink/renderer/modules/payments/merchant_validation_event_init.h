// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated from the Jinja2 template
// third_party/blink/renderer/bindings/templates/dictionary_impl.h.tmpl
// by the script code_generator_v8.py.
// DO NOT MODIFY!

// clang-format off
#ifndef THIRD_PARTY_BLINK_RENDERER_MODULES_PAYMENTS_MERCHANT_VALIDATION_EVENT_INIT_H_
#define THIRD_PARTY_BLINK_RENDERER_MODULES_PAYMENTS_MERCHANT_VALIDATION_EVENT_INIT_H_

#include "third_party/blink/renderer/core/dom/events/event_init.h"
#include "third_party/blink/renderer/modules/modules_export.h"
#include "third_party/blink/renderer/platform/heap/handle.h"
#include "third_party/blink/renderer/platform/wtf/text/wtf_string.h"

namespace blink {

class MODULES_EXPORT MerchantValidationEventInit : public EventInit {
 public:
  static MerchantValidationEventInit* Create() { return MakeGarbageCollected<MerchantValidationEventInit>(); }

  MerchantValidationEventInit();
  virtual ~MerchantValidationEventInit();

  bool hasMethodName() const { return !method_name_.IsNull(); }
  const String& methodName() const {
    return method_name_;
  }
  inline void setMethodName(const String&);

  bool hasValidationURL() const { return !validation_url_.IsNull(); }
  const String& validationURL() const {
    return validation_url_;
  }
  inline void setValidationURL(const String&);

  v8::Local<v8::Value> ToV8Impl(v8::Local<v8::Object>, v8::Isolate*) const override;
  void Trace(blink::Visitor*) override;

 private:

  String method_name_;
  String validation_url_;

  friend class V8MerchantValidationEventInit;
};

void MerchantValidationEventInit::setMethodName(const String& value) {
  method_name_ = value;
}

void MerchantValidationEventInit::setValidationURL(const String& value) {
  validation_url_ = value;
}

}  // namespace blink

#endif  // THIRD_PARTY_BLINK_RENDERER_MODULES_PAYMENTS_MERCHANT_VALIDATION_EVENT_INIT_H_
