// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated from the Jinja2 template
// third_party/blink/renderer/bindings/templates/dictionary_impl.cc.tmpl
// by the script code_generator_v8.py.
// DO NOT MODIFY!

// clang-format off
#include "third_party/blink/renderer/core/events/touch_event_init.h"

#include "third_party/blink/renderer/core/input/touch.h"
#include "third_party/blink/renderer/platform/wtf/vector.h"

namespace blink {

TouchEventInit::TouchEventInit() {
  setChangedTouches(HeapVector<Member<Touch>>());
  setTargetTouches(HeapVector<Member<Touch>>());
  setTouches(HeapVector<Member<Touch>>());
}

TouchEventInit::~TouchEventInit() = default;

void TouchEventInit::setChangedTouches(const HeapVector<Member<Touch>>& value) {
  changed_touches_ = value;
  has_changed_touches_ = true;
}

void TouchEventInit::setTargetTouches(const HeapVector<Member<Touch>>& value) {
  target_touches_ = value;
  has_target_touches_ = true;
}

void TouchEventInit::setTouches(const HeapVector<Member<Touch>>& value) {
  touches_ = value;
  has_touches_ = true;
}

void TouchEventInit::Trace(blink::Visitor* visitor) {
  visitor->Trace(changed_touches_);
  visitor->Trace(target_touches_);
  visitor->Trace(touches_);
  EventModifierInit::Trace(visitor);
}

}  // namespace blink
