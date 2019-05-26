// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated from the Jinja2 template
// third_party/blink/renderer/bindings/templates/dictionary_impl.cc.tmpl
// by the script code_generator_v8.py.
// DO NOT MODIFY!

// clang-format off
#include "third_party/blink/renderer/core/testing/internal_dictionary.h"

#include "third_party/blink/renderer/core/dom/element.h"
#include "third_party/blink/renderer/core/dom/events/event_target.h"

namespace blink {

InternalDictionary::InternalDictionary() {
  setEnumMemberWithDefault("foo");
  setEventTargetOrNullMember(nullptr);
  setLongMemberWithDefault(42);
  setStringMemberWithDefault("defaultStringValue");
  setStringSequenceMemberWithDefault(Vector<String>());
}

InternalDictionary::~InternalDictionary() = default;

void InternalDictionary::setAnyMember(ScriptValue value) {
  any_member_ = value;
}

void InternalDictionary::setCallbackFunctionMember(V8TestCallback* value) {
  callback_function_member_ = value;
}

void InternalDictionary::setDictionaryMember(Dictionary value) {
  dictionary_member_ = value;
}

void InternalDictionary::setDoubleOrStringMember(const DoubleOrString& value) {
  double_or_string_member_ = value;
}

void InternalDictionary::setDoubleOrStringSequenceMember(const HeapVector<DoubleOrString>& value) {
  double_or_string_sequence_member_ = value;
  has_double_or_string_sequence_member_ = true;
}

void InternalDictionary::setInternalEnumOrInternalEnumSequenceMember(const InternalEnumOrInternalEnumSequence& value) {
  internal_enum_or_internal_enum_sequence_member_ = value;
}

void InternalDictionary::setObjectMember(ScriptValue value) {
  object_member_ = value;
}

void InternalDictionary::setObjectOrNullMemberWithDefault(ScriptValue value) {
  object_or_null_member_with_default_ = value;
}

void InternalDictionary::setObjectOrNullMemberWithDefaultToNull() {
  object_or_null_member_with_default_ = ScriptValue();
}

void InternalDictionary::setStringSequenceMember(const Vector<String>& value) {
  string_sequence_member_ = value;
  has_string_sequence_member_ = true;
}

void InternalDictionary::setStringSequenceMemberWithDefault(const Vector<String>& value) {
  string_sequence_member_with_default_ = value;
  has_string_sequence_member_with_default_ = true;
}

void InternalDictionary::setStringSequenceOrNullMember(const Vector<String>& value) {
  string_sequence_or_null_member_ = value;
  has_string_sequence_or_null_member_ = true;
}

void InternalDictionary::setStringSequenceOrNullMemberToNull() {
  has_string_sequence_or_null_member_ = false;
}

void InternalDictionary::Trace(blink::Visitor* visitor) {
  visitor->Trace(callback_function_member_);
  visitor->Trace(double_or_string_member_);
  visitor->Trace(double_or_string_sequence_member_);
  visitor->Trace(element_member_);
  visitor->Trace(element_or_null_member_);
  visitor->Trace(event_target_or_null_member_);
  visitor->Trace(internal_enum_or_internal_enum_sequence_member_);
  IDLDictionaryBase::Trace(visitor);
}

}  // namespace blink
