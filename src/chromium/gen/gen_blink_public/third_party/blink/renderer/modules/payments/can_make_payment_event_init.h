// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated from the Jinja2 template
// third_party/blink/renderer/bindings/templates/dictionary_impl.h.tmpl
// by the script code_generator_v8.py.
// DO NOT MODIFY!

// clang-format off
#ifndef THIRD_PARTY_BLINK_RENDERER_MODULES_PAYMENTS_CAN_MAKE_PAYMENT_EVENT_INIT_H_
#define THIRD_PARTY_BLINK_RENDERER_MODULES_PAYMENTS_CAN_MAKE_PAYMENT_EVENT_INIT_H_

#include "third_party/blink/renderer/modules/modules_export.h"
#include "third_party/blink/renderer/modules/payments/payment_details_modifier.h"
#include "third_party/blink/renderer/modules/payments/payment_method_data.h"
#include "third_party/blink/renderer/modules/service_worker/extendable_event_init.h"
#include "third_party/blink/renderer/platform/heap/handle.h"
#include "third_party/blink/renderer/platform/wtf/text/wtf_string.h"
#include "third_party/blink/renderer/platform/wtf/vector.h"

namespace blink {

class MODULES_EXPORT CanMakePaymentEventInit : public ExtendableEventInit {
 public:
  static CanMakePaymentEventInit* Create() { return MakeGarbageCollected<CanMakePaymentEventInit>(); }

  CanMakePaymentEventInit();
  virtual ~CanMakePaymentEventInit();

  bool hasMethodData() const { return has_method_data_; }
  const HeapVector<Member<PaymentMethodData>>& methodData() const {
    DCHECK(has_method_data_);
    return method_data_;
  }
  void setMethodData(const HeapVector<Member<PaymentMethodData>>&);

  bool hasModifiers() const { return has_modifiers_; }
  const HeapVector<Member<PaymentDetailsModifier>>& modifiers() const {
    DCHECK(has_modifiers_);
    return modifiers_;
  }
  void setModifiers(const HeapVector<Member<PaymentDetailsModifier>>&);

  bool hasPaymentRequestOrigin() const { return !payment_request_origin_.IsNull(); }
  const String& paymentRequestOrigin() const {
    return payment_request_origin_;
  }
  inline void setPaymentRequestOrigin(const String&);

  bool hasTopOrigin() const { return !top_origin_.IsNull(); }
  const String& topOrigin() const {
    return top_origin_;
  }
  inline void setTopOrigin(const String&);

  v8::Local<v8::Value> ToV8Impl(v8::Local<v8::Object>, v8::Isolate*) const override;
  void Trace(blink::Visitor*) override;

 private:
  bool has_method_data_ = false;
  bool has_modifiers_ = false;

  HeapVector<Member<PaymentMethodData>> method_data_;
  HeapVector<Member<PaymentDetailsModifier>> modifiers_;
  String payment_request_origin_;
  String top_origin_;

  friend class V8CanMakePaymentEventInit;
};

void CanMakePaymentEventInit::setPaymentRequestOrigin(const String& value) {
  payment_request_origin_ = value;
}

void CanMakePaymentEventInit::setTopOrigin(const String& value) {
  top_origin_ = value;
}

}  // namespace blink

#endif  // THIRD_PARTY_BLINK_RENDERER_MODULES_PAYMENTS_CAN_MAKE_PAYMENT_EVENT_INIT_H_
