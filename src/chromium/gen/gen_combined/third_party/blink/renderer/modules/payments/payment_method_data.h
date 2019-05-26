// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated from the Jinja2 template
// third_party/blink/renderer/bindings/templates/dictionary_impl.h.tmpl
// by the script code_generator_v8.py.
// DO NOT MODIFY!

// clang-format off
#ifndef THIRD_PARTY_BLINK_RENDERER_MODULES_PAYMENTS_PAYMENT_METHOD_DATA_H_
#define THIRD_PARTY_BLINK_RENDERER_MODULES_PAYMENTS_PAYMENT_METHOD_DATA_H_

#include "third_party/blink/renderer/bindings/core/v8/idl_dictionary_base.h"
#include "third_party/blink/renderer/bindings/core/v8/script_value.h"
#include "third_party/blink/renderer/modules/modules_export.h"
#include "third_party/blink/renderer/platform/heap/handle.h"
#include "third_party/blink/renderer/platform/wtf/text/wtf_string.h"

namespace blink {

class MODULES_EXPORT PaymentMethodData : public IDLDictionaryBase {
 public:
  static PaymentMethodData* Create() { return MakeGarbageCollected<PaymentMethodData>(); }

  PaymentMethodData();
  virtual ~PaymentMethodData();

  bool hasData() const { return !(data_.IsEmpty() || data_.IsNull() || data_.IsUndefined()); }
  ScriptValue data() const {
    return data_;
  }
  void setData(ScriptValue);

  bool hasSupportedMethod() const { return !supported_method_.IsNull(); }
  const String& supportedMethod() const {
    return supported_method_;
  }
  inline void setSupportedMethod(const String&);

  v8::Local<v8::Value> ToV8Impl(v8::Local<v8::Object>, v8::Isolate*) const override;
  void Trace(blink::Visitor*) override;

 private:

  ScriptValue data_;
  String supported_method_;

  friend class V8PaymentMethodData;
};

void PaymentMethodData::setSupportedMethod(const String& value) {
  supported_method_ = value;
}

}  // namespace blink

#endif  // THIRD_PARTY_BLINK_RENDERER_MODULES_PAYMENTS_PAYMENT_METHOD_DATA_H_
