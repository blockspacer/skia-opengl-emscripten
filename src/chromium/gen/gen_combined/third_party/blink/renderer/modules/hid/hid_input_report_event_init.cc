// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated from the Jinja2 template
// third_party/blink/renderer/bindings/templates/dictionary_impl.cc.tmpl
// by the script code_generator_v8.py.
// DO NOT MODIFY!

// clang-format off
#include "third_party/blink/renderer/modules/hid/hid_input_report_event_init.h"

#include "third_party/blink/renderer/core/typed_arrays/dom_data_view.h"
#include "third_party/blink/renderer/modules/hid/hid_device.h"

namespace blink {

HIDInputReportEventInit::HIDInputReportEventInit() {
}

HIDInputReportEventInit::~HIDInputReportEventInit() = default;

void HIDInputReportEventInit::Trace(blink::Visitor* visitor) {
  visitor->Trace(data_);
  visitor->Trace(device_);
  EventInit::Trace(visitor);
}

}  // namespace blink
