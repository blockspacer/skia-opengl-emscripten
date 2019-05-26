// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated from the Jinja2 template
// third_party/blink/renderer/bindings/templates/dictionary_impl.h.tmpl
// by the script code_generator_v8.py.
// DO NOT MODIFY!

// clang-format off
#ifndef THIRD_PARTY_BLINK_RENDERER_CORE_ANIMATION_BASE_PROPERTY_INDEXED_KEYFRAME_H_
#define THIRD_PARTY_BLINK_RENDERER_CORE_ANIMATION_BASE_PROPERTY_INDEXED_KEYFRAME_H_

#include "third_party/blink/renderer/bindings/core/v8/composite_operation_or_auto_or_composite_operation_or_auto_sequence.h"
#include "third_party/blink/renderer/bindings/core/v8/double_or_double_or_null_sequence.h"
#include "third_party/blink/renderer/bindings/core/v8/idl_dictionary_base.h"
#include "third_party/blink/renderer/bindings/core/v8/string_or_string_sequence.h"
#include "third_party/blink/renderer/core/core_export.h"
#include "third_party/blink/renderer/platform/heap/handle.h"
#include "third_party/blink/renderer/platform/wtf/text/wtf_string.h"
#include "third_party/blink/renderer/platform/wtf/vector.h"

namespace blink {

class CORE_EXPORT BasePropertyIndexedKeyframe : public IDLDictionaryBase {
 public:
  static BasePropertyIndexedKeyframe* Create() { return MakeGarbageCollected<BasePropertyIndexedKeyframe>(); }

  BasePropertyIndexedKeyframe();
  virtual ~BasePropertyIndexedKeyframe();

  bool hasComposite() const { return !composite_.IsNull(); }
  const CompositeOperationOrAutoOrCompositeOperationOrAutoSequence& composite() const {
    return composite_;
  }
  void setComposite(const CompositeOperationOrAutoOrCompositeOperationOrAutoSequence&);

  bool hasEasing() const { return !easing_.IsNull(); }
  const StringOrStringSequence& easing() const {
    return easing_;
  }
  void setEasing(const StringOrStringSequence&);

  bool hasOffset() const { return !offset_.IsNull(); }
  const DoubleOrDoubleOrNullSequence& offset() const {
    return offset_;
  }
  void setOffset(const DoubleOrDoubleOrNullSequence&);

  v8::Local<v8::Value> ToV8Impl(v8::Local<v8::Object>, v8::Isolate*) const override;
  void Trace(blink::Visitor*) override;

 private:

  CompositeOperationOrAutoOrCompositeOperationOrAutoSequence composite_;
  StringOrStringSequence easing_;
  DoubleOrDoubleOrNullSequence offset_;

  friend class V8BasePropertyIndexedKeyframe;
};

}  // namespace blink

#endif  // THIRD_PARTY_BLINK_RENDERER_CORE_ANIMATION_BASE_PROPERTY_INDEXED_KEYFRAME_H_
