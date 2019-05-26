// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated from the Jinja2 template
// third_party/blink/renderer/bindings/templates/dictionary_impl.h.tmpl
// by the script code_generator_v8.py.
// DO NOT MODIFY!

// clang-format off
#ifndef THIRD_PARTY_BLINK_RENDERER_CORE_ANIMATION_BASE_KEYFRAME_H_
#define THIRD_PARTY_BLINK_RENDERER_CORE_ANIMATION_BASE_KEYFRAME_H_

#include "third_party/blink/renderer/bindings/core/v8/idl_dictionary_base.h"
#include "third_party/blink/renderer/core/core_export.h"
#include "third_party/blink/renderer/platform/heap/handle.h"
#include "third_party/blink/renderer/platform/wtf/text/wtf_string.h"

namespace blink {

class CORE_EXPORT BaseKeyframe : public IDLDictionaryBase {
 public:
  static BaseKeyframe* Create() { return MakeGarbageCollected<BaseKeyframe>(); }

  BaseKeyframe();
  virtual ~BaseKeyframe();

  bool hasComposite() const { return !composite_.IsNull(); }
  const String& composite() const {
    return composite_;
  }
  inline void setComposite(const String&);

  bool hasEasing() const { return !easing_.IsNull(); }
  const String& easing() const {
    return easing_;
  }
  inline void setEasing(const String&);

  bool hasOffset() const { return has_offset_; }
  double offset() const {
    DCHECK(has_offset_);
    return offset_;
  }
  inline void setOffset(double);
  inline void setOffsetToNull();

  v8::Local<v8::Value> ToV8Impl(v8::Local<v8::Object>, v8::Isolate*) const override;
  void Trace(blink::Visitor*) override;

 private:
  bool has_offset_ = false;

  String composite_;
  String easing_;
  double offset_;

  friend class V8BaseKeyframe;
};

void BaseKeyframe::setComposite(const String& value) {
  composite_ = value;
}

void BaseKeyframe::setEasing(const String& value) {
  easing_ = value;
}

void BaseKeyframe::setOffset(double value) {
  offset_ = value;
  has_offset_ = true;
}

void BaseKeyframe::setOffsetToNull() {
  has_offset_ = false;
}

}  // namespace blink

#endif  // THIRD_PARTY_BLINK_RENDERER_CORE_ANIMATION_BASE_KEYFRAME_H_
