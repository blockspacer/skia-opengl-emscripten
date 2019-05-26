// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated from the Jinja2 template
// third_party/blink/renderer/bindings/templates/dictionary_impl.h.tmpl
// by the script code_generator_v8.py.
// DO NOT MODIFY!

// clang-format off
#ifndef THIRD_PARTY_BLINK_RENDERER_MODULES_PAYMENTS_PAYMENT_DETAILS_INIT_H_
#define THIRD_PARTY_BLINK_RENDERER_MODULES_PAYMENTS_PAYMENT_DETAILS_INIT_H_

#include "third_party/blink/renderer/modules/modules_export.h"
#include "third_party/blink/renderer/modules/payments/payment_details_base.h"
#include "third_party/blink/renderer/modules/payments/payment_item.h"
#include "third_party/blink/renderer/platform/heap/handle.h"
#include "third_party/blink/renderer/platform/wtf/text/wtf_string.h"

namespace blink {

class MODULES_EXPORT PaymentDetailsInit : public PaymentDetailsBase {
 public:
  static PaymentDetailsInit* Create() { return MakeGarbageCollected<PaymentDetailsInit>(); }

  PaymentDetailsInit();
  virtual ~PaymentDetailsInit();

  bool hasId() const { return !id_.IsNull(); }
  const String& id() const {
    return id_;
  }
  inline void setId(const String&);

  bool hasTotal() const { return total_; }
  PaymentItem* total() const {
    return total_;
  }
  void setTotal(PaymentItem*);

  v8::Local<v8::Value> ToV8Impl(v8::Local<v8::Object>, v8::Isolate*) const override;
  void Trace(blink::Visitor*) override;

 private:

  String id_;
  Member<PaymentItem> total_;

  friend class V8PaymentDetailsInit;
};

void PaymentDetailsInit::setId(const String& value) {
  id_ = value;
}

}  // namespace blink

#endif  // THIRD_PARTY_BLINK_RENDERER_MODULES_PAYMENTS_PAYMENT_DETAILS_INIT_H_
