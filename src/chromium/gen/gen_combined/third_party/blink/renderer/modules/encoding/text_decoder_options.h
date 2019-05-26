// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated from the Jinja2 template
// third_party/blink/renderer/bindings/templates/dictionary_impl.h.tmpl
// by the script code_generator_v8.py.
// DO NOT MODIFY!

// clang-format off
#ifndef THIRD_PARTY_BLINK_RENDERER_MODULES_ENCODING_TEXT_DECODER_OPTIONS_H_
#define THIRD_PARTY_BLINK_RENDERER_MODULES_ENCODING_TEXT_DECODER_OPTIONS_H_

#include "third_party/blink/renderer/bindings/core/v8/idl_dictionary_base.h"
#include "third_party/blink/renderer/modules/modules_export.h"
#include "third_party/blink/renderer/platform/heap/handle.h"

namespace blink {

class MODULES_EXPORT TextDecoderOptions : public IDLDictionaryBase {
 public:
  static TextDecoderOptions* Create() { return MakeGarbageCollected<TextDecoderOptions>(); }

  TextDecoderOptions();
  virtual ~TextDecoderOptions();

  bool hasFatal() const { return has_fatal_; }
  bool fatal() const {
    DCHECK(has_fatal_);
    return fatal_;
  }
  inline void setFatal(bool);

  bool hasIgnoreBOM() const { return has_ignore_bom_; }
  bool ignoreBOM() const {
    DCHECK(has_ignore_bom_);
    return ignore_bom_;
  }
  inline void setIgnoreBOM(bool);

  v8::Local<v8::Value> ToV8Impl(v8::Local<v8::Object>, v8::Isolate*) const override;
  void Trace(blink::Visitor*) override;

 private:
  bool has_fatal_ = false;
  bool has_ignore_bom_ = false;

  bool fatal_;
  bool ignore_bom_;

  friend class V8TextDecoderOptions;
};

void TextDecoderOptions::setFatal(bool value) {
  fatal_ = value;
  has_fatal_ = true;
}

void TextDecoderOptions::setIgnoreBOM(bool value) {
  ignore_bom_ = value;
  has_ignore_bom_ = true;
}

}  // namespace blink

#endif  // THIRD_PARTY_BLINK_RENDERER_MODULES_ENCODING_TEXT_DECODER_OPTIONS_H_
