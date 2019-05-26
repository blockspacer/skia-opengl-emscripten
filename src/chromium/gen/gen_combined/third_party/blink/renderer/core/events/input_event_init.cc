// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated from the Jinja2 template
// third_party/blink/renderer/bindings/templates/dictionary_impl.cc.tmpl
// by the script code_generator_v8.py.
// DO NOT MODIFY!

// clang-format off
#include "third_party/blink/renderer/core/events/input_event_init.h"

#include "third_party/blink/renderer/core/clipboard/data_transfer.h"
#include "third_party/blink/renderer/core/dom/static_range.h"
#include "third_party/blink/renderer/platform/wtf/vector.h"

namespace blink {

InputEventInit::InputEventInit() {
  setInputType(WTF::g_empty_string);
  setIsComposing(false);
  setTargetRanges(HeapVector<Member<StaticRange>>());
}

InputEventInit::~InputEventInit() = default;

void InputEventInit::setTargetRanges(const HeapVector<Member<StaticRange>>& value) {
  target_ranges_ = value;
  has_target_ranges_ = true;
}

void InputEventInit::Trace(blink::Visitor* visitor) {
  visitor->Trace(data_transfer_);
  visitor->Trace(target_ranges_);
  UIEventInit::Trace(visitor);
}

}  // namespace blink
