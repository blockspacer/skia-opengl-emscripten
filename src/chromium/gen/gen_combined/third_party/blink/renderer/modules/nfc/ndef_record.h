// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated from the Jinja2 template
// third_party/blink/renderer/bindings/templates/dictionary_impl.h.tmpl
// by the script code_generator_v8.py.
// DO NOT MODIFY!

// clang-format off
#ifndef THIRD_PARTY_BLINK_RENDERER_MODULES_NFC_NDEF_RECORD_H_
#define THIRD_PARTY_BLINK_RENDERER_MODULES_NFC_NDEF_RECORD_H_

#include "third_party/blink/renderer/bindings/core/v8/idl_dictionary_base.h"
#include "third_party/blink/renderer/bindings/core/v8/script_value.h"
#include "third_party/blink/renderer/modules/modules_export.h"
#include "third_party/blink/renderer/platform/heap/handle.h"
#include "third_party/blink/renderer/platform/wtf/text/wtf_string.h"

namespace blink {

class MODULES_EXPORT NDEFRecord : public IDLDictionaryBase {
 public:
  static NDEFRecord* Create() { return MakeGarbageCollected<NDEFRecord>(); }

  NDEFRecord();
  virtual ~NDEFRecord();

  bool hasData() const { return !(data_.IsEmpty() || data_.IsUndefined()); }
  ScriptValue data() const {
    return data_;
  }
  void setData(ScriptValue);

  bool hasMediaType() const { return !media_type_.IsNull(); }
  const String& mediaType() const {
    return media_type_;
  }
  inline void setMediaType(const String&);

  bool hasRecordType() const { return !record_type_.IsNull(); }
  const String& recordType() const {
    return record_type_;
  }
  inline void setRecordType(const String&);

  v8::Local<v8::Value> ToV8Impl(v8::Local<v8::Object>, v8::Isolate*) const override;
  void Trace(blink::Visitor*) override;

 private:

  ScriptValue data_;
  String media_type_;
  String record_type_;

  friend class V8NDEFRecord;
};

void NDEFRecord::setMediaType(const String& value) {
  media_type_ = value;
}

void NDEFRecord::setRecordType(const String& value) {
  record_type_ = value;
}

}  // namespace blink

#endif  // THIRD_PARTY_BLINK_RENDERER_MODULES_NFC_NDEF_RECORD_H_
