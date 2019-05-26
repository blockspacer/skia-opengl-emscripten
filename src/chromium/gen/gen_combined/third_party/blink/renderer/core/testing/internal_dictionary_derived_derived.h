// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated from the Jinja2 template
// third_party/blink/renderer/bindings/templates/dictionary_impl.h.tmpl
// by the script code_generator_v8.py.
// DO NOT MODIFY!

// clang-format off
#ifndef THIRD_PARTY_BLINK_RENDERER_CORE_TESTING_INTERNAL_DICTIONARY_DERIVED_DERIVED_H_
#define THIRD_PARTY_BLINK_RENDERER_CORE_TESTING_INTERNAL_DICTIONARY_DERIVED_DERIVED_H_

#include "third_party/blink/renderer/core/testing/internal_dictionary_derived.h"
#include "third_party/blink/renderer/platform/heap/handle.h"
#include "third_party/blink/renderer/platform/wtf/text/wtf_string.h"

namespace blink {

class InternalDictionaryDerivedDerived : public InternalDictionaryDerived {
 public:
  static InternalDictionaryDerivedDerived* Create() { return MakeGarbageCollected<InternalDictionaryDerivedDerived>(); }

  InternalDictionaryDerivedDerived();
  virtual ~InternalDictionaryDerivedDerived();

  bool hasDerivedDerivedStringMember() const { return !derived_derived_string_member_.IsNull(); }
  const String& derivedDerivedStringMember() const {
    return derived_derived_string_member_;
  }
  inline void setDerivedDerivedStringMember(const String&);

  v8::Local<v8::Value> ToV8Impl(v8::Local<v8::Object>, v8::Isolate*) const override;
  void Trace(blink::Visitor*) override;

 private:

  String derived_derived_string_member_;

  friend class V8InternalDictionaryDerivedDerived;
};

void InternalDictionaryDerivedDerived::setDerivedDerivedStringMember(const String& value) {
  derived_derived_string_member_ = value;
}

}  // namespace blink

#endif  // THIRD_PARTY_BLINK_RENDERER_CORE_TESTING_INTERNAL_DICTIONARY_DERIVED_DERIVED_H_
