// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated from the Jinja2 template
// third_party/blink/renderer/bindings/templates/union_container.h.tmpl
// by the script code_generator_v8.py.
// DO NOT MODIFY!

// clang-format off
#ifndef THIRD_PARTY_BLINK_RENDERER_BINDINGS_CORE_V8_USV_STRING_SEQUENCE_SEQUENCE_OR_USV_STRING_USV_STRING_RECORD_OR_USV_STRING_H_
#define THIRD_PARTY_BLINK_RENDERER_BINDINGS_CORE_V8_USV_STRING_SEQUENCE_SEQUENCE_OR_USV_STRING_USV_STRING_RECORD_OR_USV_STRING_H_

#include "base/optional.h"
#include "third_party/blink/renderer/bindings/core/v8/dictionary.h"
#include "third_party/blink/renderer/bindings/core/v8/native_value_traits.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_binding_for_core.h"
#include "third_party/blink/renderer/core/core_export.h"
#include "third_party/blink/renderer/platform/bindings/exception_state.h"
#include "third_party/blink/renderer/platform/heap/handle.h"

namespace blink {

class CORE_EXPORT USVStringSequenceSequenceOrUSVStringUSVStringRecordOrUSVString final {
  DISALLOW_NEW();
 public:
  USVStringSequenceSequenceOrUSVStringUSVStringRecordOrUSVString();
  bool IsNull() const { return type_ == SpecificType::kNone; }

  bool IsUSVString() const { return type_ == SpecificType::kUSVString; }
  const String& GetAsUSVString() const;
  void SetUSVString(const String&);
  static USVStringSequenceSequenceOrUSVStringUSVStringRecordOrUSVString FromUSVString(const String&);

  bool IsUSVStringSequenceSequence() const { return type_ == SpecificType::kUSVStringSequenceSequence; }
  const Vector<Vector<String>>& GetAsUSVStringSequenceSequence() const;
  void SetUSVStringSequenceSequence(const Vector<Vector<String>>&);
  static USVStringSequenceSequenceOrUSVStringUSVStringRecordOrUSVString FromUSVStringSequenceSequence(const Vector<Vector<String>>&);

  bool IsUSVStringUSVStringRecord() const { return type_ == SpecificType::kUSVStringUSVStringRecord; }
  const Vector<std::pair<String, String>>& GetAsUSVStringUSVStringRecord() const;
  void SetUSVStringUSVStringRecord(const Vector<std::pair<String, String>>&);
  static USVStringSequenceSequenceOrUSVStringUSVStringRecordOrUSVString FromUSVStringUSVStringRecord(const Vector<std::pair<String, String>>&);

  USVStringSequenceSequenceOrUSVStringUSVStringRecordOrUSVString(const USVStringSequenceSequenceOrUSVStringUSVStringRecordOrUSVString&);
  ~USVStringSequenceSequenceOrUSVStringUSVStringRecordOrUSVString();
  USVStringSequenceSequenceOrUSVStringUSVStringRecordOrUSVString& operator=(const USVStringSequenceSequenceOrUSVStringUSVStringRecordOrUSVString&);
  void Trace(blink::Visitor*);

 private:
  enum class SpecificType {
    kNone,
    kUSVString,
    kUSVStringSequenceSequence,
    kUSVStringUSVStringRecord,
  };
  SpecificType type_;

  String usv_string_;
  Vector<Vector<String>> usv_string_sequence_sequence_;
  Vector<std::pair<String, String>> usv_string_usv_string_record_;

  friend CORE_EXPORT v8::Local<v8::Value> ToV8(const USVStringSequenceSequenceOrUSVStringUSVStringRecordOrUSVString&, v8::Local<v8::Object>, v8::Isolate*);
};

class V8USVStringSequenceSequenceOrUSVStringUSVStringRecordOrUSVString final {
 public:
  CORE_EXPORT static void ToImpl(v8::Isolate*, v8::Local<v8::Value>, USVStringSequenceSequenceOrUSVStringUSVStringRecordOrUSVString&, UnionTypeConversionMode, ExceptionState&);
};

CORE_EXPORT v8::Local<v8::Value> ToV8(const USVStringSequenceSequenceOrUSVStringUSVStringRecordOrUSVString&, v8::Local<v8::Object>, v8::Isolate*);

template <class CallbackInfo>
inline void V8SetReturnValue(const CallbackInfo& callbackInfo, USVStringSequenceSequenceOrUSVStringUSVStringRecordOrUSVString& impl) {
  V8SetReturnValue(callbackInfo, ToV8(impl, callbackInfo.Holder(), callbackInfo.GetIsolate()));
}

template <class CallbackInfo>
inline void V8SetReturnValue(const CallbackInfo& callbackInfo, USVStringSequenceSequenceOrUSVStringUSVStringRecordOrUSVString& impl, v8::Local<v8::Object> creationContext) {
  V8SetReturnValue(callbackInfo, ToV8(impl, creationContext, callbackInfo.GetIsolate()));
}

template <>
struct NativeValueTraits<USVStringSequenceSequenceOrUSVStringUSVStringRecordOrUSVString> : public NativeValueTraitsBase<USVStringSequenceSequenceOrUSVStringUSVStringRecordOrUSVString> {
  CORE_EXPORT static USVStringSequenceSequenceOrUSVStringUSVStringRecordOrUSVString NativeValue(v8::Isolate*, v8::Local<v8::Value>, ExceptionState&);
  CORE_EXPORT static USVStringSequenceSequenceOrUSVStringUSVStringRecordOrUSVString NullValue() { return USVStringSequenceSequenceOrUSVStringUSVStringRecordOrUSVString(); }
};

template <>
struct V8TypeOf<USVStringSequenceSequenceOrUSVStringUSVStringRecordOrUSVString> {
  typedef V8USVStringSequenceSequenceOrUSVStringUSVStringRecordOrUSVString Type;
};

}  // namespace blink

// We need to set canInitializeWithMemset=true because HeapVector supports
// items that can initialize with memset or have a vtable. It is safe to
// set canInitializeWithMemset=true for a union type object in practice.
// See https://codereview.chromium.org/1118993002/#msg5 for more details.
WTF_ALLOW_MOVE_AND_INIT_WITH_MEM_FUNCTIONS(blink::USVStringSequenceSequenceOrUSVStringUSVStringRecordOrUSVString)

#endif  // THIRD_PARTY_BLINK_RENDERER_BINDINGS_CORE_V8_USV_STRING_SEQUENCE_SEQUENCE_OR_USV_STRING_USV_STRING_RECORD_OR_USV_STRING_H_
