// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated from the Jinja2 template
// third_party/blink/renderer/bindings/templates/dictionary_impl.cc.tmpl
// by the script code_generator_v8.py.
// DO NOT MODIFY!

// clang-format off
#include "third_party/blink/renderer/core/input/touch_init.h"

#include "third_party/blink/renderer/core/dom/events/event_target.h"

namespace blink {

TouchInit::TouchInit() {
  setClientX(0);
  setClientY(0);
  setForce(0);
  setPageX(0);
  setPageY(0);
  setRadiusX(0);
  setRadiusY(0);
  setRotationAngle(0);
  setScreenX(0);
  setScreenY(0);
}

TouchInit::~TouchInit() = default;

void TouchInit::Trace(blink::Visitor* visitor) {
  visitor->Trace(target_);
  IDLDictionaryBase::Trace(visitor);
}

}  // namespace blink
