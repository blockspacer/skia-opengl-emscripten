// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated from the Jinja2 template
// third_party/blink/renderer/bindings/templates/dictionary_impl.h.tmpl
// by the script code_generator_v8.py.
// DO NOT MODIFY!

// clang-format off
#ifndef THIRD_PARTY_BLINK_RENDERER_MODULES_ENCODING_TEXT_ENCODER_ENCODE_INTO_RESULT_H_
#define THIRD_PARTY_BLINK_RENDERER_MODULES_ENCODING_TEXT_ENCODER_ENCODE_INTO_RESULT_H_

#include "third_party/blink/renderer/bindings/core/v8/idl_dictionary_base.h"
#include "third_party/blink/renderer/modules/modules_export.h"
#include "third_party/blink/renderer/platform/heap/handle.h"

namespace blink {

class MODULES_EXPORT TextEncoderEncodeIntoResult : public IDLDictionaryBase {
 public:
  static TextEncoderEncodeIntoResult* Create() { return MakeGarbageCollected<TextEncoderEncodeIntoResult>(); }

  TextEncoderEncodeIntoResult();
  virtual ~TextEncoderEncodeIntoResult();

  bool hasRead() const { return has_read_; }
  uint64_t read() const {
    DCHECK(has_read_);
    return read_;
  }
  inline void setRead(uint64_t);

  bool hasWritten() const { return has_written_; }
  uint64_t written() const {
    DCHECK(has_written_);
    return written_;
  }
  inline void setWritten(uint64_t);

  v8::Local<v8::Value> ToV8Impl(v8::Local<v8::Object>, v8::Isolate*) const override;
  void Trace(blink::Visitor*) override;

 private:
  bool has_read_ = false;
  bool has_written_ = false;

  uint64_t read_;
  uint64_t written_;

  friend class V8TextEncoderEncodeIntoResult;
};

void TextEncoderEncodeIntoResult::setRead(uint64_t value) {
  read_ = value;
  has_read_ = true;
}

void TextEncoderEncodeIntoResult::setWritten(uint64_t value) {
  written_ = value;
  has_written_ = true;
}

}  // namespace blink

#endif  // THIRD_PARTY_BLINK_RENDERER_MODULES_ENCODING_TEXT_ENCODER_ENCODE_INTO_RESULT_H_
