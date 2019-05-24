// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated from the Jinja2 template
// third_party/blink/renderer/bindings/templates/dictionary_impl.h.tmpl
// by the script code_generator_v8.py.
// DO NOT MODIFY!

// clang-format off
#ifndef THIRD_PARTY_BLINK_RENDERER_MODULES_PAYMENTS_PAYMENT_METHOD_CHANGE_EVENT_INIT_H_
#define THIRD_PARTY_BLINK_RENDERER_MODULES_PAYMENTS_PAYMENT_METHOD_CHANGE_EVENT_INIT_H_

#include "third_party/blink/renderer/bindings/core/v8/script_value.h"
#include "third_party/blink/renderer/modules/modules_export.h"
#include "third_party/blink/renderer/modules/payments/payment_request_update_event_init.h"
#include "third_party/blink/renderer/platform/heap/handle.h"
#include "third_party/blink/renderer/platform/wtf/text/wtf_string.h"

namespace blink {

class MODULES_EXPORT PaymentMethodChangeEventInit : public PaymentRequestUpdateEventInit {
 public:
  static PaymentMethodChangeEventInit* Create() { return MakeGarbageCollected<PaymentMethodChangeEventInit>(); }

  PaymentMethodChangeEventInit();
  virtual ~PaymentMethodChangeEventInit();

  bool hasMethodDetails() const { return !(method_details_.IsEmpty() || method_details_.IsNull() || method_details_.IsUndefined()); }
  ScriptValue methodDetails() const {
    return method_details_;
  }
  void setMethodDetails(ScriptValue);
  void setMethodDetailsToNull();

  bool hasMethodName() const { return !method_name_.IsNull(); }
  const String& methodName() const {
    return method_name_;
  }
  inline void setMethodName(const String&);

  v8::Local<v8::Value> ToV8Impl(v8::Local<v8::Object>, v8::Isolate*) const override;
  void Trace(blink::Visitor*) override;

 private:

  ScriptValue method_details_;
  String method_name_;

  friend class V8PaymentMethodChangeEventInit;
};

void PaymentMethodChangeEventInit::setMethodName(const String& value) {
  method_name_ = value;
}

}  // namespace blink

#endif  // THIRD_PARTY_BLINK_RENDERER_MODULES_PAYMENTS_PAYMENT_METHOD_CHANGE_EVENT_INIT_H_
