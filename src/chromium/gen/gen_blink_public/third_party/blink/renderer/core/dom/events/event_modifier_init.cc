// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated from the Jinja2 template
// third_party/blink/renderer/bindings/templates/dictionary_impl.cc.tmpl
// by the script code_generator_v8.py.
// DO NOT MODIFY!

// clang-format off
#include "third_party/blink/renderer/core/dom/events/event_modifier_init.h"

namespace blink {

EventModifierInit::EventModifierInit() {
  setAltKey(false);
  setCtrlKey(false);
  setMetaKey(false);
  setModifierAltGraph(false);
  setModifierCapsLock(false);
  setModifierFn(false);
  setModifierNumLock(false);
  setModifierScrollLock(false);
  setModifierSymbol(false);
  setShiftKey(false);
}

EventModifierInit::~EventModifierInit() = default;

void EventModifierInit::Trace(blink::Visitor* visitor) {
  UIEventInit::Trace(visitor);
}

}  // namespace blink
