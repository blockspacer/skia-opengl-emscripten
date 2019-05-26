// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated from the Jinja2 template
// third_party/blink/renderer/bindings/templates/dictionary_impl.cc.tmpl
// by the script code_generator_v8.py.
// DO NOT MODIFY!

// clang-format off
#include "third_party/blink/renderer/modules/imagecapture/constrain_point_2d_parameters.h"

namespace blink {

ConstrainPoint2DParameters::ConstrainPoint2DParameters() {
}

ConstrainPoint2DParameters::~ConstrainPoint2DParameters() = default;

void ConstrainPoint2DParameters::setExact(const HeapVector<Member<Point2D>>& value) {
  exact_ = value;
  has_exact_ = true;
}

void ConstrainPoint2DParameters::setIdeal(const HeapVector<Member<Point2D>>& value) {
  ideal_ = value;
  has_ideal_ = true;
}

void ConstrainPoint2DParameters::Trace(blink::Visitor* visitor) {
  visitor->Trace(exact_);
  visitor->Trace(ideal_);
  IDLDictionaryBase::Trace(visitor);
}

}  // namespace blink
