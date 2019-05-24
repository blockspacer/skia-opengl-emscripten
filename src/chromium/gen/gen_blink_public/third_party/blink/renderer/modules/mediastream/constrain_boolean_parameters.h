// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated from the Jinja2 template
// third_party/blink/renderer/bindings/templates/dictionary_impl.h.tmpl
// by the script code_generator_v8.py.
// DO NOT MODIFY!

// clang-format off
#ifndef THIRD_PARTY_BLINK_RENDERER_MODULES_MEDIASTREAM_CONSTRAIN_BOOLEAN_PARAMETERS_H_
#define THIRD_PARTY_BLINK_RENDERER_MODULES_MEDIASTREAM_CONSTRAIN_BOOLEAN_PARAMETERS_H_

#include "third_party/blink/renderer/bindings/core/v8/idl_dictionary_base.h"
#include "third_party/blink/renderer/modules/modules_export.h"
#include "third_party/blink/renderer/platform/heap/handle.h"

namespace blink {

class MODULES_EXPORT ConstrainBooleanParameters : public IDLDictionaryBase {
 public:
  static ConstrainBooleanParameters* Create() { return MakeGarbageCollected<ConstrainBooleanParameters>(); }

  ConstrainBooleanParameters();
  virtual ~ConstrainBooleanParameters();

  bool hasExact() const { return has_exact_; }
  bool exact() const {
    DCHECK(has_exact_);
    return exact_;
  }
  inline void setExact(bool);

  bool hasIdeal() const { return has_ideal_; }
  bool ideal() const {
    DCHECK(has_ideal_);
    return ideal_;
  }
  inline void setIdeal(bool);

  v8::Local<v8::Value> ToV8Impl(v8::Local<v8::Object>, v8::Isolate*) const override;
  void Trace(blink::Visitor*) override;

 private:
  bool has_exact_ = false;
  bool has_ideal_ = false;

  bool exact_;
  bool ideal_;

  friend class V8ConstrainBooleanParameters;
};

void ConstrainBooleanParameters::setExact(bool value) {
  exact_ = value;
  has_exact_ = true;
}

void ConstrainBooleanParameters::setIdeal(bool value) {
  ideal_ = value;
  has_ideal_ = true;
}

}  // namespace blink

#endif  // THIRD_PARTY_BLINK_RENDERER_MODULES_MEDIASTREAM_CONSTRAIN_BOOLEAN_PARAMETERS_H_
