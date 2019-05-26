// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated from the Jinja2 template
// third_party/blink/renderer/bindings/templates/dictionary_impl.h.tmpl
// by the script code_generator_v8.py.
// DO NOT MODIFY!

// clang-format off
#ifndef THIRD_PARTY_BLINK_RENDERER_MODULES_ENCODING_TEXT_DECODE_OPTIONS_H_
#define THIRD_PARTY_BLINK_RENDERER_MODULES_ENCODING_TEXT_DECODE_OPTIONS_H_

#include "third_party/blink/renderer/bindings/core/v8/idl_dictionary_base.h"
#include "third_party/blink/renderer/modules/modules_export.h"
#include "third_party/blink/renderer/platform/heap/handle.h"

namespace blink {

class MODULES_EXPORT TextDecodeOptions : public IDLDictionaryBase {
 public:
  static TextDecodeOptions* Create() { return MakeGarbageCollected<TextDecodeOptions>(); }

  TextDecodeOptions();
  virtual ~TextDecodeOptions();

  bool hasStream() const { return has_stream_; }
  bool stream() const {
    DCHECK(has_stream_);
    return stream_;
  }
  inline void setStream(bool);

  v8::Local<v8::Value> ToV8Impl(v8::Local<v8::Object>, v8::Isolate*) const override;
  void Trace(blink::Visitor*) override;

 private:
  bool has_stream_ = false;

  bool stream_;

  friend class V8TextDecodeOptions;
};

void TextDecodeOptions::setStream(bool value) {
  stream_ = value;
  has_stream_ = true;
}

}  // namespace blink

#endif  // THIRD_PARTY_BLINK_RENDERER_MODULES_ENCODING_TEXT_DECODE_OPTIONS_H_
