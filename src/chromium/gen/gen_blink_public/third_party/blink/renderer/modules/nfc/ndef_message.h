// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated from the Jinja2 template
// third_party/blink/renderer/bindings/templates/dictionary_impl.h.tmpl
// by the script code_generator_v8.py.
// DO NOT MODIFY!

// clang-format off
#ifndef THIRD_PARTY_BLINK_RENDERER_MODULES_NFC_NDEF_MESSAGE_H_
#define THIRD_PARTY_BLINK_RENDERER_MODULES_NFC_NDEF_MESSAGE_H_

#include "third_party/blink/renderer/bindings/core/v8/idl_dictionary_base.h"
#include "third_party/blink/renderer/modules/modules_export.h"
#include "third_party/blink/renderer/modules/nfc/ndef_record.h"
#include "third_party/blink/renderer/platform/heap/handle.h"
#include "third_party/blink/renderer/platform/wtf/text/wtf_string.h"
#include "third_party/blink/renderer/platform/wtf/vector.h"

namespace blink {

class MODULES_EXPORT NDEFMessage : public IDLDictionaryBase {
 public:
  static NDEFMessage* Create() { return MakeGarbageCollected<NDEFMessage>(); }

  NDEFMessage();
  virtual ~NDEFMessage();

  bool hasRecords() const { return has_records_; }
  const HeapVector<Member<NDEFRecord>>& records() const {
    DCHECK(has_records_);
    return records_;
  }
  void setRecords(const HeapVector<Member<NDEFRecord>>&);

  bool hasURL() const { return !url_.IsNull(); }
  const String& url() const {
    return url_;
  }
  inline void setURL(const String&);

  v8::Local<v8::Value> ToV8Impl(v8::Local<v8::Object>, v8::Isolate*) const override;
  void Trace(blink::Visitor*) override;

 private:
  bool has_records_ = false;

  HeapVector<Member<NDEFRecord>> records_;
  String url_;

  friend class V8NDEFMessage;
};

void NDEFMessage::setURL(const String& value) {
  url_ = value;
}

}  // namespace blink

#endif  // THIRD_PARTY_BLINK_RENDERER_MODULES_NFC_NDEF_MESSAGE_H_
