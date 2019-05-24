// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated from the Jinja2 template
// third_party/blink/renderer/bindings/templates/dictionary_impl.h.tmpl
// by the script code_generator_v8.py.
// DO NOT MODIFY!

// clang-format off
#ifndef THIRD_PARTY_BLINK_RENDERER_MODULES_PAYMENTS_PAYER_ERRORS_H_
#define THIRD_PARTY_BLINK_RENDERER_MODULES_PAYMENTS_PAYER_ERRORS_H_

#include "third_party/blink/renderer/bindings/core/v8/idl_dictionary_base.h"
#include "third_party/blink/renderer/modules/modules_export.h"
#include "third_party/blink/renderer/platform/heap/handle.h"
#include "third_party/blink/renderer/platform/wtf/text/wtf_string.h"

namespace blink {

class MODULES_EXPORT PayerErrors : public IDLDictionaryBase {
 public:
  static PayerErrors* Create() { return MakeGarbageCollected<PayerErrors>(); }

  PayerErrors();
  virtual ~PayerErrors();

  bool hasEmail() const { return !email_.IsNull(); }
  const String& email() const {
    return email_;
  }
  inline void setEmail(const String&);

  bool hasName() const { return !name_.IsNull(); }
  const String& name() const {
    return name_;
  }
  inline void setName(const String&);

  bool hasPhone() const { return !phone_.IsNull(); }
  const String& phone() const {
    return phone_;
  }
  inline void setPhone(const String&);

  v8::Local<v8::Value> ToV8Impl(v8::Local<v8::Object>, v8::Isolate*) const override;
  void Trace(blink::Visitor*) override;

 private:

  String email_;
  String name_;
  String phone_;

  friend class V8PayerErrors;
};

void PayerErrors::setEmail(const String& value) {
  email_ = value;
}

void PayerErrors::setName(const String& value) {
  name_ = value;
}

void PayerErrors::setPhone(const String& value) {
  phone_ = value;
}

}  // namespace blink

#endif  // THIRD_PARTY_BLINK_RENDERER_MODULES_PAYMENTS_PAYER_ERRORS_H_
