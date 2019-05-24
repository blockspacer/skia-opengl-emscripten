// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated from the Jinja2 template
// third_party/blink/renderer/bindings/templates/dictionary_impl.cc.tmpl
// by the script code_generator_v8.py.
// DO NOT MODIFY!

// clang-format off
#include "third_party/blink/renderer/core/animation/base_property_indexed_keyframe.h"

namespace blink {

BasePropertyIndexedKeyframe::BasePropertyIndexedKeyframe() {
  setComposite(CompositeOperationOrAutoOrCompositeOperationOrAutoSequence::FromCompositeOperationOrAutoSequence(Vector<String>()));
  setEasing(StringOrStringSequence::FromStringSequence(Vector<String>()));
  setOffset(DoubleOrDoubleOrNullSequence::FromDoubleOrNullSequence(Vector<base::Optional<double>>()));
}

BasePropertyIndexedKeyframe::~BasePropertyIndexedKeyframe() = default;

void BasePropertyIndexedKeyframe::setComposite(const CompositeOperationOrAutoOrCompositeOperationOrAutoSequence& value) {
  composite_ = value;
}

void BasePropertyIndexedKeyframe::setEasing(const StringOrStringSequence& value) {
  easing_ = value;
}

void BasePropertyIndexedKeyframe::setOffset(const DoubleOrDoubleOrNullSequence& value) {
  offset_ = value;
}

void BasePropertyIndexedKeyframe::Trace(blink::Visitor* visitor) {
  visitor->Trace(composite_);
  visitor->Trace(easing_);
  visitor->Trace(offset_);
  IDLDictionaryBase::Trace(visitor);
}

}  // namespace blink
