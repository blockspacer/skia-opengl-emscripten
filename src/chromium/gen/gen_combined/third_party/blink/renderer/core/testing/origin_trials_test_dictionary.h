// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated from the Jinja2 template
// third_party/blink/renderer/bindings/templates/dictionary_impl.h.tmpl
// by the script code_generator_v8.py.
// DO NOT MODIFY!

// clang-format off
#ifndef THIRD_PARTY_BLINK_RENDERER_CORE_TESTING_ORIGIN_TRIALS_TEST_DICTIONARY_H_
#define THIRD_PARTY_BLINK_RENDERER_CORE_TESTING_ORIGIN_TRIALS_TEST_DICTIONARY_H_

#include "third_party/blink/renderer/bindings/core/v8/idl_dictionary_base.h"
#include "third_party/blink/renderer/platform/heap/handle.h"

namespace blink {

class OriginTrialsTestDictionary : public IDLDictionaryBase {
 public:
  static OriginTrialsTestDictionary* Create() { return MakeGarbageCollected<OriginTrialsTestDictionary>(); }

  OriginTrialsTestDictionary();
  virtual ~OriginTrialsTestDictionary();

  bool hasNormalBool() const { return has_normal_bool_; }
  bool normalBool() const {
    DCHECK(has_normal_bool_);
    return normal_bool_;
  }
  inline void setNormalBool(bool);

  bool hasUnconditionalBool() const { return has_unconditional_bool_; }
  bool unconditionalBool() const {
    DCHECK(has_unconditional_bool_);
    return unconditional_bool_;
  }
  inline void setUnconditionalBool(bool);

  v8::Local<v8::Value> ToV8Impl(v8::Local<v8::Object>, v8::Isolate*) const override;
  void Trace(blink::Visitor*) override;

 private:
  bool has_normal_bool_ = false;
  bool has_unconditional_bool_ = false;

  bool normal_bool_;
  bool unconditional_bool_;

  friend class V8OriginTrialsTestDictionary;
};

void OriginTrialsTestDictionary::setNormalBool(bool value) {
  normal_bool_ = value;
  has_normal_bool_ = true;
}

void OriginTrialsTestDictionary::setUnconditionalBool(bool value) {
  unconditional_bool_ = value;
  has_unconditional_bool_ = true;
}

}  // namespace blink

#endif  // THIRD_PARTY_BLINK_RENDERER_CORE_TESTING_ORIGIN_TRIALS_TEST_DICTIONARY_H_
