// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated from the Jinja2 template
// third_party/blink/renderer/bindings/templates/dictionary_impl.h.tmpl
// by the script code_generator_v8.py.
// DO NOT MODIFY!

// clang-format off
#ifndef THIRD_PARTY_BLINK_RENDERER_CORE_TESTING_INTERNAL_DICTIONARY_DERIVED_H_
#define THIRD_PARTY_BLINK_RENDERER_CORE_TESTING_INTERNAL_DICTIONARY_DERIVED_H_

#include "third_party/blink/renderer/core/testing/internal_dictionary.h"
#include "third_party/blink/renderer/platform/heap/handle.h"
#include "third_party/blink/renderer/platform/wtf/text/wtf_string.h"

namespace blink {

class InternalDictionaryDerived : public InternalDictionary {
 public:
  static InternalDictionaryDerived* Create() { return MakeGarbageCollected<InternalDictionaryDerived>(); }

  InternalDictionaryDerived();
  virtual ~InternalDictionaryDerived();

  bool hasDerivedStringMember() const { return !derived_string_member_.IsNull(); }
  const String& derivedStringMember() const {
    return derived_string_member_;
  }
  inline void setDerivedStringMember(const String&);

  bool hasDerivedStringMemberWithDefault() const { return !derived_string_member_with_default_.IsNull(); }
  const String& derivedStringMemberWithDefault() const {
    return derived_string_member_with_default_;
  }
  inline void setDerivedStringMemberWithDefault(const String&);

  bool hasRequiredBooleanMember() const { return has_required_boolean_member_; }
  bool requiredBooleanMember() const {
    DCHECK(has_required_boolean_member_);
    return required_boolean_member_;
  }
  inline void setRequiredBooleanMember(bool);

  v8::Local<v8::Value> ToV8Impl(v8::Local<v8::Object>, v8::Isolate*) const override;
  void Trace(blink::Visitor*) override;

 private:
  bool has_required_boolean_member_ = false;

  String derived_string_member_;
  String derived_string_member_with_default_;
  bool required_boolean_member_;

  friend class V8InternalDictionaryDerived;
};

void InternalDictionaryDerived::setDerivedStringMember(const String& value) {
  derived_string_member_ = value;
}

void InternalDictionaryDerived::setDerivedStringMemberWithDefault(const String& value) {
  derived_string_member_with_default_ = value;
}

void InternalDictionaryDerived::setRequiredBooleanMember(bool value) {
  required_boolean_member_ = value;
  has_required_boolean_member_ = true;
}

}  // namespace blink

#endif  // THIRD_PARTY_BLINK_RENDERER_CORE_TESTING_INTERNAL_DICTIONARY_DERIVED_H_
