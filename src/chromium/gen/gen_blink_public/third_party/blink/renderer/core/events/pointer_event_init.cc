// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated from the Jinja2 template
// third_party/blink/renderer/bindings/templates/dictionary_impl.cc.tmpl
// by the script code_generator_v8.py.
// DO NOT MODIFY!

// clang-format off
#include "third_party/blink/renderer/core/events/pointer_event_init.h"

#include "third_party/blink/renderer/core/events/pointer_event.h"
#include "third_party/blink/renderer/platform/wtf/vector.h"

namespace blink {

PointerEventInit::PointerEventInit() {
  setCoalescedEvents(HeapVector<Member<PointerEvent>>());
  setHeight(1);
  setIsPrimary(false);
  setPointerId(0);
  setPointerType(WTF::g_empty_string);
  setPredictedEvents(HeapVector<Member<PointerEvent>>());
  setPressure(0);
  setTangentialPressure(0);
  setTiltX(0);
  setTiltY(0);
  setTwist(0);
  setWidth(1);
}

PointerEventInit::~PointerEventInit() = default;

void PointerEventInit::setCoalescedEvents(const HeapVector<Member<PointerEvent>>& value) {
  coalesced_events_ = value;
  has_coalesced_events_ = true;
}

void PointerEventInit::setPredictedEvents(const HeapVector<Member<PointerEvent>>& value) {
  predicted_events_ = value;
  has_predicted_events_ = true;
}

void PointerEventInit::Trace(blink::Visitor* visitor) {
  visitor->Trace(coalesced_events_);
  visitor->Trace(predicted_events_);
  MouseEventInit::Trace(visitor);
}

}  // namespace blink
