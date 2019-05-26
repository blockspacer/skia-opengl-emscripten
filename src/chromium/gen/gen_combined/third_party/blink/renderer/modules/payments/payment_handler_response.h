// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated from the Jinja2 template
// third_party/blink/renderer/bindings/templates/dictionary_impl.h.tmpl
// by the script code_generator_v8.py.
// DO NOT MODIFY!

// clang-format off
#ifndef THIRD_PARTY_BLINK_RENDERER_MODULES_PAYMENTS_PAYMENT_HANDLER_RESPONSE_H_
#define THIRD_PARTY_BLINK_RENDERER_MODULES_PAYMENTS_PAYMENT_HANDLER_RESPONSE_H_

#include "third_party/blink/renderer/bindings/core/v8/idl_dictionary_base.h"
#include "third_party/blink/renderer/bindings/core/v8/script_value.h"
#include "third_party/blink/renderer/modules/modules_export.h"
#include "third_party/blink/renderer/platform/heap/handle.h"
#include "third_party/blink/renderer/platform/wtf/text/wtf_string.h"

namespace blink {

class MODULES_EXPORT PaymentHandlerResponse : public IDLDictionaryBase {
 public:
  static PaymentHandlerResponse* Create() { return MakeGarbageCollected<PaymentHandlerResponse>(); }

  PaymentHandlerResponse();
  virtual ~PaymentHandlerResponse();

  bool hasDetails() const { return !(details_.IsEmpty() || details_.IsNull() || details_.IsUndefined()); }
  ScriptValue details() const {
    return details_;
  }
  void setDetails(ScriptValue);

  bool hasMethodName() const { return !method_name_.IsNull(); }
  const String& methodName() const {
    return method_name_;
  }
  inline void setMethodName(const String&);

  v8::Local<v8::Value> ToV8Impl(v8::Local<v8::Object>, v8::Isolate*) const override;
  void Trace(blink::Visitor*) override;

 private:

  ScriptValue details_;
  String method_name_;

  friend class V8PaymentHandlerResponse;
};

void PaymentHandlerResponse::setMethodName(const String& value) {
  method_name_ = value;
}

}  // namespace blink

#endif  // THIRD_PARTY_BLINK_RENDERER_MODULES_PAYMENTS_PAYMENT_HANDLER_RESPONSE_H_
