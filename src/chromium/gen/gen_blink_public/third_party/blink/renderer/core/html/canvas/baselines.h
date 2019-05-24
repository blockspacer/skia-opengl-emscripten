// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated from the Jinja2 template
// third_party/blink/renderer/bindings/templates/dictionary_impl.h.tmpl
// by the script code_generator_v8.py.
// DO NOT MODIFY!

// clang-format off
#ifndef THIRD_PARTY_BLINK_RENDERER_CORE_HTML_CANVAS_BASELINES_H_
#define THIRD_PARTY_BLINK_RENDERER_CORE_HTML_CANVAS_BASELINES_H_

#include "third_party/blink/renderer/bindings/core/v8/idl_dictionary_base.h"
#include "third_party/blink/renderer/core/core_export.h"
#include "third_party/blink/renderer/platform/heap/handle.h"

namespace blink {

class CORE_EXPORT Baselines : public IDLDictionaryBase {
 public:
  static Baselines* Create() { return MakeGarbageCollected<Baselines>(); }

  Baselines();
  virtual ~Baselines();

  bool hasAlphabetic() const { return has_alphabetic_; }
  double alphabetic() const {
    DCHECK(has_alphabetic_);
    return alphabetic_;
  }
  inline void setAlphabetic(double);

  bool hasHanging() const { return has_hanging_; }
  double hanging() const {
    DCHECK(has_hanging_);
    return hanging_;
  }
  inline void setHanging(double);

  bool hasIdeographic() const { return has_ideographic_; }
  double ideographic() const {
    DCHECK(has_ideographic_);
    return ideographic_;
  }
  inline void setIdeographic(double);

  v8::Local<v8::Value> ToV8Impl(v8::Local<v8::Object>, v8::Isolate*) const override;
  void Trace(blink::Visitor*) override;

 private:
  bool has_alphabetic_ = false;
  bool has_hanging_ = false;
  bool has_ideographic_ = false;

  double alphabetic_;
  double hanging_;
  double ideographic_;

  friend class V8Baselines;
};

void Baselines::setAlphabetic(double value) {
  alphabetic_ = value;
  has_alphabetic_ = true;
}

void Baselines::setHanging(double value) {
  hanging_ = value;
  has_hanging_ = true;
}

void Baselines::setIdeographic(double value) {
  ideographic_ = value;
  has_ideographic_ = true;
}

}  // namespace blink

#endif  // THIRD_PARTY_BLINK_RENDERER_CORE_HTML_CANVAS_BASELINES_H_
