// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated from the Jinja2 template
// third_party/blink/renderer/bindings/templates/dictionary_impl.cc.tmpl
// by the script code_generator_v8.py.
// DO NOT MODIFY!

// clang-format off
#include "third_party/blink/renderer/core/events/mouse_event_init.h"

#include "third_party/blink/renderer/core/dom/events/event_target.h"

namespace blink {

MouseEventInit::MouseEventInit() {
  setButton(0);
  setButtons(0u);
  setClientX(0);
  setClientY(0);
  setMovementX(0);
  setMovementY(0);
  setRelatedTarget(nullptr);
  setScreenX(0);
  setScreenY(0);
}

MouseEventInit::~MouseEventInit() = default;

void MouseEventInit::Trace(blink::Visitor* visitor) {
  visitor->Trace(related_target_);
  EventModifierInit::Trace(visitor);
}

}  // namespace blink
