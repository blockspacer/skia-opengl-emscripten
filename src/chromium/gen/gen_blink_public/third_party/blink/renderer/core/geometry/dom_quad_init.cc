// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated from the Jinja2 template
// third_party/blink/renderer/bindings/templates/dictionary_impl.cc.tmpl
// by the script code_generator_v8.py.
// DO NOT MODIFY!

// clang-format off
#include "third_party/blink/renderer/core/geometry/dom_quad_init.h"

namespace blink {

DOMQuadInit::DOMQuadInit() {
}

DOMQuadInit::~DOMQuadInit() = default;

void DOMQuadInit::setP1(DOMPointInit* value) {
  p_1_ = value;
}

void DOMQuadInit::setP2(DOMPointInit* value) {
  p_2_ = value;
}

void DOMQuadInit::setP3(DOMPointInit* value) {
  p_3_ = value;
}

void DOMQuadInit::setP4(DOMPointInit* value) {
  p_4_ = value;
}

void DOMQuadInit::Trace(blink::Visitor* visitor) {
  visitor->Trace(p_1_);
  visitor->Trace(p_2_);
  visitor->Trace(p_3_);
  visitor->Trace(p_4_);
  IDLDictionaryBase::Trace(visitor);
}

}  // namespace blink
