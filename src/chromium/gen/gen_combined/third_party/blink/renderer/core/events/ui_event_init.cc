// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated from the Jinja2 template
// third_party/blink/renderer/bindings/templates/dictionary_impl.cc.tmpl
// by the script code_generator_v8.py.
// DO NOT MODIFY!

// clang-format off
#include "third_party/blink/renderer/core/events/ui_event_init.h"

#include "third_party/blink/renderer/core/frame/dom_window.h"
#include "third_party/blink/renderer/core/input/input_device_capabilities.h"

namespace blink {

UIEventInit::UIEventInit() {
  setDetail(0);
  setSourceCapabilities(nullptr);
  setView(nullptr);
}

UIEventInit::~UIEventInit() = default;

void UIEventInit::Trace(blink::Visitor* visitor) {
  visitor->Trace(source_capabilities_);
  visitor->Trace(view_);
  EventInit::Trace(visitor);
}

}  // namespace blink
