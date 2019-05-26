// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated from the Jinja2 template
// third_party/blink/renderer/bindings/templates/dictionary_impl.h.tmpl
// by the script code_generator_v8.py.
// DO NOT MODIFY!

// clang-format off
#ifndef THIRD_PARTY_BLINK_RENDERER_MODULES_PAYMENTS_PAYMENT_INSTRUMENT_H_
#define THIRD_PARTY_BLINK_RENDERER_MODULES_PAYMENTS_PAYMENT_INSTRUMENT_H_

#include "third_party/blink/renderer/bindings/core/v8/idl_dictionary_base.h"
#include "third_party/blink/renderer/bindings/core/v8/script_value.h"
#include "third_party/blink/renderer/modules/modules_export.h"
#include "third_party/blink/renderer/modules/payments/image_object.h"
#include "third_party/blink/renderer/platform/heap/handle.h"
#include "third_party/blink/renderer/platform/wtf/text/wtf_string.h"
#include "third_party/blink/renderer/platform/wtf/vector.h"

namespace blink {

class MODULES_EXPORT PaymentInstrument : public IDLDictionaryBase {
 public:
  static PaymentInstrument* Create() { return MakeGarbageCollected<PaymentInstrument>(); }

  PaymentInstrument();
  virtual ~PaymentInstrument();

  bool hasCapabilities() const { return !(capabilities_.IsEmpty() || capabilities_.IsNull() || capabilities_.IsUndefined()); }
  ScriptValue capabilities() const {
    return capabilities_;
  }
  void setCapabilities(ScriptValue);

  bool hasIcons() const { return has_icons_; }
  const HeapVector<Member<ImageObject>>& icons() const {
    DCHECK(has_icons_);
    return icons_;
  }
  void setIcons(const HeapVector<Member<ImageObject>>&);

  bool hasMethod() const { return !method_.IsNull(); }
  const String& method() const {
    return method_;
  }
  inline void setMethod(const String&);

  bool hasName() const { return !name_.IsNull(); }
  const String& name() const {
    return name_;
  }
  inline void setName(const String&);

  v8::Local<v8::Value> ToV8Impl(v8::Local<v8::Object>, v8::Isolate*) const override;
  void Trace(blink::Visitor*) override;

 private:
  bool has_icons_ = false;

  ScriptValue capabilities_;
  HeapVector<Member<ImageObject>> icons_;
  String method_;
  String name_;

  friend class V8PaymentInstrument;
};

void PaymentInstrument::setMethod(const String& value) {
  method_ = value;
}

void PaymentInstrument::setName(const String& value) {
  name_ = value;
}

}  // namespace blink

#endif  // THIRD_PARTY_BLINK_RENDERER_MODULES_PAYMENTS_PAYMENT_INSTRUMENT_H_
