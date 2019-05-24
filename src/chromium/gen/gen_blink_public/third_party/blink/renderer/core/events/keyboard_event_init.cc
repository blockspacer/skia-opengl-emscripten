// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated from the Jinja2 template
// third_party/blink/renderer/bindings/templates/dictionary_impl.cc.tmpl
// by the script code_generator_v8.py.
// DO NOT MODIFY!

// clang-format off
#include "third_party/blink/renderer/core/events/keyboard_event_init.h"

namespace blink {

KeyboardEventInit::KeyboardEventInit() {
  setCharCode(0u);
  setCode(WTF::g_empty_string);
  setIsComposing(false);
  setKey(WTF::g_empty_string);
  setKeyCode(0u);
  setLocation(0u);
  setRepeat(false);
}

KeyboardEventInit::~KeyboardEventInit() = default;

void KeyboardEventInit::Trace(blink::Visitor* visitor) {
  EventModifierInit::Trace(visitor);
}

}  // namespace blink
