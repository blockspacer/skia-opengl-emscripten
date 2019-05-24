// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated from the Jinja2 template
// third_party/blink/renderer/bindings/templates/dictionary_impl.cc.tmpl
// by the script code_generator_v8.py.
// DO NOT MODIFY!

// clang-format off
#include "third_party/blink/renderer/modules/xr/xr_input_source_event_init.h"

#include "third_party/blink/renderer/modules/xr/xr_frame.h"
#include "third_party/blink/renderer/modules/xr/xr_input_source.h"

namespace blink {

XRInputSourceEventInit::XRInputSourceEventInit() {
}

XRInputSourceEventInit::~XRInputSourceEventInit() = default;

void XRInputSourceEventInit::Trace(blink::Visitor* visitor) {
  visitor->Trace(frame_);
  visitor->Trace(input_source_);
  EventInit::Trace(visitor);
}

}  // namespace blink
