// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated from the Jinja2 template
// third_party/blink/renderer/bindings/templates/dictionary_impl.h.tmpl
// by the script code_generator_v8.py.
// DO NOT MODIFY!

// clang-format off
#ifndef THIRD_PARTY_BLINK_RENDERER_CORE_TESTING_INTERNAL_DICTIONARY_H_
#define THIRD_PARTY_BLINK_RENDERER_CORE_TESTING_INTERNAL_DICTIONARY_H_

#include "third_party/blink/renderer/bindings/core/v8/dictionary.h"
#include "third_party/blink/renderer/bindings/core/v8/double_or_string.h"
#include "third_party/blink/renderer/bindings/core/v8/idl_dictionary_base.h"
#include "third_party/blink/renderer/bindings/core/v8/internal_enum_or_internal_enum_sequence.h"
#include "third_party/blink/renderer/bindings/core/v8/script_value.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_test_callback.h"
#include "third_party/blink/renderer/platform/heap/handle.h"
#include "third_party/blink/renderer/platform/wtf/text/wtf_string.h"
#include "third_party/blink/renderer/platform/wtf/vector.h"

namespace blink {

class EventTarget;
class Element;

class InternalDictionary : public IDLDictionaryBase {
 public:
  static InternalDictionary* Create() { return MakeGarbageCollected<InternalDictionary>(); }

  InternalDictionary();
  virtual ~InternalDictionary();

  bool hasAnyMember() const { return !(any_member_.IsEmpty() || any_member_.IsUndefined()); }
  ScriptValue anyMember() const {
    return any_member_;
  }
  void setAnyMember(ScriptValue);

  bool hasBooleanMember() const { return has_boolean_member_; }
  bool booleanMember() const {
    DCHECK(has_boolean_member_);
    return boolean_member_;
  }
  inline void setBooleanMember(bool);

  bool hasByteStringMember() const { return !byte_string_member_.IsNull(); }
  const String& byteStringMember() const {
    return byte_string_member_;
  }
  inline void setByteStringMember(const String&);

  bool hasCallbackFunctionMember() const { return callback_function_member_; }
  V8TestCallback* callbackFunctionMember() const {
    return callback_function_member_;
  }
  void setCallbackFunctionMember(V8TestCallback*);

  bool hasDictionaryMember() const { return !dictionary_member_.IsUndefinedOrNull(); }
  Dictionary dictionaryMember() const {
    return dictionary_member_;
  }
  void setDictionaryMember(Dictionary);

  bool hasDoubleMember() const { return has_double_member_; }
  double doubleMember() const {
    DCHECK(has_double_member_);
    return double_member_;
  }
  inline void setDoubleMember(double);

  bool hasDoubleOrStringMember() const { return !double_or_string_member_.IsNull(); }
  const DoubleOrString& doubleOrStringMember() const {
    return double_or_string_member_;
  }
  void setDoubleOrStringMember(const DoubleOrString&);

  bool hasDoubleOrStringSequenceMember() const { return has_double_or_string_sequence_member_; }
  const HeapVector<DoubleOrString>& doubleOrStringSequenceMember() const {
    DCHECK(has_double_or_string_sequence_member_);
    return double_or_string_sequence_member_;
  }
  void setDoubleOrStringSequenceMember(const HeapVector<DoubleOrString>&);

  bool hasElementMember() const { return element_member_; }
  Element* elementMember() const {
    return element_member_;
  }
  inline void setElementMember(Element*);

  bool hasElementOrNullMember() const { return has_element_or_null_member_; }
  Element* elementOrNullMember() const {
    return element_or_null_member_;
  }
  inline void setElementOrNullMember(Element*);
  inline void setElementOrNullMemberToNull();

  bool hasEnumMember() const { return !enum_member_.IsNull(); }
  const String& enumMember() const {
    return enum_member_;
  }
  inline void setEnumMember(const String&);

  bool hasEnumMemberWithDefault() const { return !enum_member_with_default_.IsNull(); }
  const String& enumMemberWithDefault() const {
    return enum_member_with_default_;
  }
  inline void setEnumMemberWithDefault(const String&);

  bool hasEnumOrNullMember() const { return !enum_or_null_member_.IsNull(); }
  const String& enumOrNullMember() const {
    return enum_or_null_member_;
  }
  inline void setEnumOrNullMember(const String&);
  inline void setEnumOrNullMemberToNull();

  bool hasEventTargetOrNullMember() const { return has_event_target_or_null_member_; }
  EventTarget* eventTargetOrNullMember() const {
    return event_target_or_null_member_;
  }
  inline void setEventTargetOrNullMember(EventTarget*);
  inline void setEventTargetOrNullMemberToNull();

  bool hasInternalEnumOrInternalEnumSequenceMember() const { return !internal_enum_or_internal_enum_sequence_member_.IsNull(); }
  const InternalEnumOrInternalEnumSequence& internalEnumOrInternalEnumSequenceMember() const {
    return internal_enum_or_internal_enum_sequence_member_;
  }
  void setInternalEnumOrInternalEnumSequenceMember(const InternalEnumOrInternalEnumSequence&);

  bool hasLongMember() const { return has_long_member_; }
  int32_t longMember() const {
    DCHECK(has_long_member_);
    return long_member_;
  }
  inline void setLongMember(int32_t);

  bool hasLongMemberWithClamp() const { return has_long_member_with_clamp_; }
  int32_t longMemberWithClamp() const {
    DCHECK(has_long_member_with_clamp_);
    return long_member_with_clamp_;
  }
  inline void setLongMemberWithClamp(int32_t);

  bool hasLongMemberWithDefault() const { return has_long_member_with_default_; }
  int32_t longMemberWithDefault() const {
    DCHECK(has_long_member_with_default_);
    return long_member_with_default_;
  }
  inline void setLongMemberWithDefault(int32_t);

  bool hasLongMemberWithEnforceRange() const { return has_long_member_with_enforce_range_; }
  int32_t longMemberWithEnforceRange() const {
    DCHECK(has_long_member_with_enforce_range_);
    return long_member_with_enforce_range_;
  }
  inline void setLongMemberWithEnforceRange(int32_t);

  bool hasLongOrNullMember() const { return has_long_or_null_member_; }
  int32_t longOrNullMember() const {
    DCHECK(has_long_or_null_member_);
    return long_or_null_member_;
  }
  inline void setLongOrNullMember(int32_t);
  inline void setLongOrNullMemberToNull();

  bool hasLongOrNullMemberWithDefault() const { return has_long_or_null_member_with_default_; }
  int32_t longOrNullMemberWithDefault() const {
    DCHECK(has_long_or_null_member_with_default_);
    return long_or_null_member_with_default_;
  }
  inline void setLongOrNullMemberWithDefault(int32_t);
  inline void setLongOrNullMemberWithDefaultToNull();

  bool hasObjectMember() const { return !(object_member_.IsEmpty() || object_member_.IsNull() || object_member_.IsUndefined()); }
  ScriptValue objectMember() const {
    return object_member_;
  }
  void setObjectMember(ScriptValue);

  bool hasObjectOrNullMemberWithDefault() const { return !(object_or_null_member_with_default_.IsEmpty() || object_or_null_member_with_default_.IsNull() || object_or_null_member_with_default_.IsUndefined()); }
  ScriptValue objectOrNullMemberWithDefault() const {
    return object_or_null_member_with_default_;
  }
  void setObjectOrNullMemberWithDefault(ScriptValue);
  void setObjectOrNullMemberWithDefaultToNull();

  bool hasStringMember() const { return !string_member_.IsNull(); }
  const String& stringMember() const {
    return string_member_;
  }
  inline void setStringMember(const String&);

  bool hasStringMemberWithDefault() const { return !string_member_with_default_.IsNull(); }
  const String& stringMemberWithDefault() const {
    return string_member_with_default_;
  }
  inline void setStringMemberWithDefault(const String&);

  bool hasStringSequenceMember() const { return has_string_sequence_member_; }
  const Vector<String>& stringSequenceMember() const {
    DCHECK(has_string_sequence_member_);
    return string_sequence_member_;
  }
  void setStringSequenceMember(const Vector<String>&);

  bool hasStringSequenceMemberWithDefault() const { return has_string_sequence_member_with_default_; }
  const Vector<String>& stringSequenceMemberWithDefault() const {
    DCHECK(has_string_sequence_member_with_default_);
    return string_sequence_member_with_default_;
  }
  void setStringSequenceMemberWithDefault(const Vector<String>&);

  bool hasStringSequenceOrNullMember() const { return has_string_sequence_or_null_member_; }
  const Vector<String>& stringSequenceOrNullMember() const {
    DCHECK(has_string_sequence_or_null_member_);
    return string_sequence_or_null_member_;
  }
  void setStringSequenceOrNullMember(const Vector<String>&);
  void setStringSequenceOrNullMemberToNull();

  bool hasUnrestrictedDoubleMember() const { return has_unrestricted_double_member_; }
  double unrestrictedDoubleMember() const {
    DCHECK(has_unrestricted_double_member_);
    return unrestricted_double_member_;
  }
  inline void setUnrestrictedDoubleMember(double);

  bool hasUsvStringMember() const { return !usv_string_member_.IsNull(); }
  const String& usvStringMember() const {
    return usv_string_member_;
  }
  inline void setUsvStringMember(const String&);

  v8::Local<v8::Value> ToV8Impl(v8::Local<v8::Object>, v8::Isolate*) const override;
  void Trace(blink::Visitor*) override;

 private:
  bool has_boolean_member_ = false;
  bool has_double_member_ = false;
  bool has_double_or_string_sequence_member_ = false;
  bool has_element_or_null_member_ = false;
  bool has_event_target_or_null_member_ = false;
  bool has_long_member_ = false;
  bool has_long_member_with_clamp_ = false;
  bool has_long_member_with_default_ = false;
  bool has_long_member_with_enforce_range_ = false;
  bool has_long_or_null_member_ = false;
  bool has_long_or_null_member_with_default_ = false;
  bool has_string_sequence_member_ = false;
  bool has_string_sequence_member_with_default_ = false;
  bool has_string_sequence_or_null_member_ = false;
  bool has_unrestricted_double_member_ = false;

  ScriptValue any_member_;
  bool boolean_member_;
  String byte_string_member_;
  Member<V8TestCallback> callback_function_member_;
  Dictionary dictionary_member_;
  double double_member_;
  DoubleOrString double_or_string_member_;
  HeapVector<DoubleOrString> double_or_string_sequence_member_;
  Member<Element> element_member_;
  Member<Element> element_or_null_member_;
  String enum_member_;
  String enum_member_with_default_;
  String enum_or_null_member_;
  Member<EventTarget> event_target_or_null_member_;
  InternalEnumOrInternalEnumSequence internal_enum_or_internal_enum_sequence_member_;
  int32_t long_member_;
  int32_t long_member_with_clamp_;
  int32_t long_member_with_default_;
  int32_t long_member_with_enforce_range_;
  int32_t long_or_null_member_;
  int32_t long_or_null_member_with_default_;
  ScriptValue object_member_;
  ScriptValue object_or_null_member_with_default_;
  String string_member_;
  String string_member_with_default_;
  Vector<String> string_sequence_member_;
  Vector<String> string_sequence_member_with_default_;
  Vector<String> string_sequence_or_null_member_;
  double unrestricted_double_member_;
  String usv_string_member_;

  friend class V8InternalDictionary;
};

void InternalDictionary::setBooleanMember(bool value) {
  boolean_member_ = value;
  has_boolean_member_ = true;
}

void InternalDictionary::setByteStringMember(const String& value) {
  byte_string_member_ = value;
}

void InternalDictionary::setDoubleMember(double value) {
  double_member_ = value;
  has_double_member_ = true;
}

void InternalDictionary::setElementMember(Element* value) {
  element_member_ = value;
}

void InternalDictionary::setElementOrNullMember(Element* value) {
  element_or_null_member_ = value;
  has_element_or_null_member_ = true;
}

void InternalDictionary::setElementOrNullMemberToNull() {
  element_or_null_member_ = Member<Element>();
  has_element_or_null_member_ = true;
}

void InternalDictionary::setEnumMember(const String& value) {
  enum_member_ = value;
}

void InternalDictionary::setEnumMemberWithDefault(const String& value) {
  enum_member_with_default_ = value;
}

void InternalDictionary::setEnumOrNullMember(const String& value) {
  enum_or_null_member_ = value;
}

void InternalDictionary::setEnumOrNullMemberToNull() {
  enum_or_null_member_ = String();
}

void InternalDictionary::setEventTargetOrNullMember(EventTarget* value) {
  event_target_or_null_member_ = value;
  has_event_target_or_null_member_ = true;
}

void InternalDictionary::setEventTargetOrNullMemberToNull() {
  event_target_or_null_member_ = Member<EventTarget>();
  has_event_target_or_null_member_ = true;
}

void InternalDictionary::setLongMember(int32_t value) {
  long_member_ = value;
  has_long_member_ = true;
}

void InternalDictionary::setLongMemberWithClamp(int32_t value) {
  long_member_with_clamp_ = value;
  has_long_member_with_clamp_ = true;
}

void InternalDictionary::setLongMemberWithDefault(int32_t value) {
  long_member_with_default_ = value;
  has_long_member_with_default_ = true;
}

void InternalDictionary::setLongMemberWithEnforceRange(int32_t value) {
  long_member_with_enforce_range_ = value;
  has_long_member_with_enforce_range_ = true;
}

void InternalDictionary::setLongOrNullMember(int32_t value) {
  long_or_null_member_ = value;
  has_long_or_null_member_ = true;
}

void InternalDictionary::setLongOrNullMemberToNull() {
  has_long_or_null_member_ = false;
}

void InternalDictionary::setLongOrNullMemberWithDefault(int32_t value) {
  long_or_null_member_with_default_ = value;
  has_long_or_null_member_with_default_ = true;
}

void InternalDictionary::setLongOrNullMemberWithDefaultToNull() {
  has_long_or_null_member_with_default_ = false;
}

void InternalDictionary::setStringMember(const String& value) {
  string_member_ = value;
}

void InternalDictionary::setStringMemberWithDefault(const String& value) {
  string_member_with_default_ = value;
}

void InternalDictionary::setUnrestrictedDoubleMember(double value) {
  unrestricted_double_member_ = value;
  has_unrestricted_double_member_ = true;
}

void InternalDictionary::setUsvStringMember(const String& value) {
  usv_string_member_ = value;
}

}  // namespace blink

#endif  // THIRD_PARTY_BLINK_RENDERER_CORE_TESTING_INTERNAL_DICTIONARY_H_
