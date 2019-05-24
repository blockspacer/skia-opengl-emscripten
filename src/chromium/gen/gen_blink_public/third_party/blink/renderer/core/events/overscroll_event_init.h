// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated from the Jinja2 template
// third_party/blink/renderer/bindings/templates/dictionary_impl.h.tmpl
// by the script code_generator_v8.py.
// DO NOT MODIFY!

// clang-format off
#ifndef THIRD_PARTY_BLINK_RENDERER_CORE_EVENTS_OVERSCROLL_EVENT_INIT_H_
#define THIRD_PARTY_BLINK_RENDERER_CORE_EVENTS_OVERSCROLL_EVENT_INIT_H_

#include "third_party/blink/renderer/core/core_export.h"
#include "third_party/blink/renderer/core/dom/events/event_init.h"
#include "third_party/blink/renderer/platform/heap/handle.h"

namespace blink {

class CORE_EXPORT OverscrollEventInit : public EventInit {
 public:
  static OverscrollEventInit* Create() { return MakeGarbageCollected<OverscrollEventInit>(); }

  OverscrollEventInit();
  virtual ~OverscrollEventInit();

  bool hasDeltaX() const { return has_delta_x_; }
  double deltaX() const {
    DCHECK(has_delta_x_);
    return delta_x_;
  }
  inline void setDeltaX(double);

  bool hasDeltaY() const { return has_delta_y_; }
  double deltaY() const {
    DCHECK(has_delta_y_);
    return delta_y_;
  }
  inline void setDeltaY(double);

  v8::Local<v8::Value> ToV8Impl(v8::Local<v8::Object>, v8::Isolate*) const override;
  void Trace(blink::Visitor*) override;

 private:
  bool has_delta_x_ = false;
  bool has_delta_y_ = false;

  double delta_x_;
  double delta_y_;

  friend class V8OverscrollEventInit;
};

void OverscrollEventInit::setDeltaX(double value) {
  delta_x_ = value;
  has_delta_x_ = true;
}

void OverscrollEventInit::setDeltaY(double value) {
  delta_y_ = value;
  has_delta_y_ = true;
}

}  // namespace blink

#endif  // THIRD_PARTY_BLINK_RENDERER_CORE_EVENTS_OVERSCROLL_EVENT_INIT_H_
