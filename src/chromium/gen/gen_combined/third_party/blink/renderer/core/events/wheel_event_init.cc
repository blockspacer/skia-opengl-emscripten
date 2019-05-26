// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated from the Jinja2 template
// third_party/blink/renderer/bindings/templates/dictionary_impl.cc.tmpl
// by the script code_generator_v8.py.
// DO NOT MODIFY!

// clang-format off
#include "third_party/blink/renderer/core/events/wheel_event_init.h"

namespace blink {

WheelEventInit::WheelEventInit() {
  setDeltaMode(0u);
  setDeltaX(0);
  setDeltaY(0);
  setDeltaZ(0);
  setWheelDeltaX(0);
  setWheelDeltaY(0);
}

WheelEventInit::~WheelEventInit() = default;

void WheelEventInit::Trace(blink::Visitor* visitor) {
  MouseEventInit::Trace(visitor);
}

}  // namespace blink
