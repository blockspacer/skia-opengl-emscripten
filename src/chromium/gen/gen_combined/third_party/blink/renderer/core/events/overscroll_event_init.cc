// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated from the Jinja2 template
// third_party/blink/renderer/bindings/templates/dictionary_impl.cc.tmpl
// by the script code_generator_v8.py.
// DO NOT MODIFY!

// clang-format off
#include "third_party/blink/renderer/core/events/overscroll_event_init.h"

namespace blink {

OverscrollEventInit::OverscrollEventInit() {
  setDeltaX(0);
  setDeltaY(0);
}

OverscrollEventInit::~OverscrollEventInit() = default;

void OverscrollEventInit::Trace(blink::Visitor* visitor) {
  EventInit::Trace(visitor);
}

}  // namespace blink
