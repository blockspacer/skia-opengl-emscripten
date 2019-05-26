// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated from the Jinja2 template
// third_party/blink/renderer/bindings/templates/dictionary_impl.h.tmpl
// by the script code_generator_v8.py.
// DO NOT MODIFY!

// clang-format off
#ifndef THIRD_PARTY_BLINK_RENDERER_MODULES_WEBAUDIO_CONSTANT_SOURCE_OPTIONS_H_
#define THIRD_PARTY_BLINK_RENDERER_MODULES_WEBAUDIO_CONSTANT_SOURCE_OPTIONS_H_

#include "third_party/blink/renderer/bindings/core/v8/idl_dictionary_base.h"
#include "third_party/blink/renderer/modules/modules_export.h"
#include "third_party/blink/renderer/platform/heap/handle.h"

namespace blink {

class MODULES_EXPORT ConstantSourceOptions : public IDLDictionaryBase {
 public:
  static ConstantSourceOptions* Create() { return MakeGarbageCollected<ConstantSourceOptions>(); }

  ConstantSourceOptions();
  virtual ~ConstantSourceOptions();

  bool hasOffset() const { return has_offset_; }
  float offset() const {
    DCHECK(has_offset_);
    return offset_;
  }
  inline void setOffset(float);

  v8::Local<v8::Value> ToV8Impl(v8::Local<v8::Object>, v8::Isolate*) const override;
  void Trace(blink::Visitor*) override;

 private:
  bool has_offset_ = false;

  float offset_;

  friend class V8ConstantSourceOptions;
};

void ConstantSourceOptions::setOffset(float value) {
  offset_ = value;
  has_offset_ = true;
}

}  // namespace blink

#endif  // THIRD_PARTY_BLINK_RENDERER_MODULES_WEBAUDIO_CONSTANT_SOURCE_OPTIONS_H_
