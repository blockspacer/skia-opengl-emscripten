// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated from the Jinja2 template
// third_party/blink/renderer/bindings/templates/dictionary_impl.h.tmpl
// by the script code_generator_v8.py.
// DO NOT MODIFY!

// clang-format off
#ifndef THIRD_PARTY_BLINK_RENDERER_MODULES_PAYMENTS_ANDROID_PAY_TOKENIZATION_H_
#define THIRD_PARTY_BLINK_RENDERER_MODULES_PAYMENTS_ANDROID_PAY_TOKENIZATION_H_

#include "third_party/blink/renderer/bindings/core/v8/dictionary.h"
#include "third_party/blink/renderer/bindings/core/v8/idl_dictionary_base.h"
#include "third_party/blink/renderer/modules/modules_export.h"
#include "third_party/blink/renderer/platform/heap/handle.h"
#include "third_party/blink/renderer/platform/wtf/text/wtf_string.h"

namespace blink {

class MODULES_EXPORT AndroidPayTokenization : public IDLDictionaryBase {
 public:
  static AndroidPayTokenization* Create() { return MakeGarbageCollected<AndroidPayTokenization>(); }

  AndroidPayTokenization();
  virtual ~AndroidPayTokenization();

  bool hasParameters() const { return !parameters_.IsUndefinedOrNull(); }
  Dictionary parameters() const {
    return parameters_;
  }
  void setParameters(Dictionary);

  bool hasTokenizationType() const { return !tokenization_type_.IsNull(); }
  const String& tokenizationType() const {
    return tokenization_type_;
  }
  inline void setTokenizationType(const String&);

  v8::Local<v8::Value> ToV8Impl(v8::Local<v8::Object>, v8::Isolate*) const override;
  void Trace(blink::Visitor*) override;

 private:

  Dictionary parameters_;
  String tokenization_type_;

  friend class V8AndroidPayTokenization;
};

void AndroidPayTokenization::setTokenizationType(const String& value) {
  tokenization_type_ = value;
}

}  // namespace blink

#endif  // THIRD_PARTY_BLINK_RENDERER_MODULES_PAYMENTS_ANDROID_PAY_TOKENIZATION_H_
