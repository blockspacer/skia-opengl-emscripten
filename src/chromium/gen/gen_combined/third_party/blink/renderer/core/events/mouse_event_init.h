// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated from the Jinja2 template
// third_party/blink/renderer/bindings/templates/dictionary_impl.h.tmpl
// by the script code_generator_v8.py.
// DO NOT MODIFY!

// clang-format off
#ifndef THIRD_PARTY_BLINK_RENDERER_CORE_EVENTS_MOUSE_EVENT_INIT_H_
#define THIRD_PARTY_BLINK_RENDERER_CORE_EVENTS_MOUSE_EVENT_INIT_H_

#include "third_party/blink/renderer/core/core_export.h"
#include "third_party/blink/renderer/core/dom/events/event_modifier_init.h"
#include "third_party/blink/renderer/platform/heap/handle.h"
#include "third_party/blink/renderer/platform/wtf/text/wtf_string.h"

namespace blink {

class EventTarget;

class CORE_EXPORT MouseEventInit : public EventModifierInit {
 public:
  static MouseEventInit* Create() { return MakeGarbageCollected<MouseEventInit>(); }

  MouseEventInit();
  virtual ~MouseEventInit();

  bool hasButton() const { return has_button_; }
  int16_t button() const {
    DCHECK(has_button_);
    return button_;
  }
  inline void setButton(int16_t);

  bool hasButtons() const { return has_buttons_; }
  uint16_t buttons() const {
    DCHECK(has_buttons_);
    return buttons_;
  }
  inline void setButtons(uint16_t);

  bool hasClientX() const { return has_client_x_; }
  double clientX() const {
    DCHECK(has_client_x_);
    return client_x_;
  }
  inline void setClientX(double);

  bool hasClientY() const { return has_client_y_; }
  double clientY() const {
    DCHECK(has_client_y_);
    return client_y_;
  }
  inline void setClientY(double);

  bool hasMovementX() const { return has_movement_x_; }
  int32_t movementX() const {
    DCHECK(has_movement_x_);
    return movement_x_;
  }
  inline void setMovementX(int32_t);

  bool hasMovementY() const { return has_movement_y_; }
  int32_t movementY() const {
    DCHECK(has_movement_y_);
    return movement_y_;
  }
  inline void setMovementY(int32_t);

  bool hasRegion() const { return !region_.IsNull(); }
  const String& region() const {
    return region_;
  }
  inline void setRegion(const String&);
  inline void setRegionToNull();

  bool hasRelatedTarget() const { return has_related_target_; }
  EventTarget* relatedTarget() const {
    return related_target_;
  }
  inline void setRelatedTarget(EventTarget*);
  inline void setRelatedTargetToNull();

  bool hasScreenX() const { return has_screen_x_; }
  double screenX() const {
    DCHECK(has_screen_x_);
    return screen_x_;
  }
  inline void setScreenX(double);

  bool hasScreenY() const { return has_screen_y_; }
  double screenY() const {
    DCHECK(has_screen_y_);
    return screen_y_;
  }
  inline void setScreenY(double);

  v8::Local<v8::Value> ToV8Impl(v8::Local<v8::Object>, v8::Isolate*) const override;
  void Trace(blink::Visitor*) override;

 private:
  bool has_button_ = false;
  bool has_buttons_ = false;
  bool has_client_x_ = false;
  bool has_client_y_ = false;
  bool has_movement_x_ = false;
  bool has_movement_y_ = false;
  bool has_related_target_ = false;
  bool has_screen_x_ = false;
  bool has_screen_y_ = false;

  int16_t button_;
  uint16_t buttons_;
  double client_x_;
  double client_y_;
  int32_t movement_x_;
  int32_t movement_y_;
  String region_;
  Member<EventTarget> related_target_;
  double screen_x_;
  double screen_y_;

  friend class V8MouseEventInit;
};

void MouseEventInit::setButton(int16_t value) {
  button_ = value;
  has_button_ = true;
}

void MouseEventInit::setButtons(uint16_t value) {
  buttons_ = value;
  has_buttons_ = true;
}

void MouseEventInit::setClientX(double value) {
  client_x_ = value;
  has_client_x_ = true;
}

void MouseEventInit::setClientY(double value) {
  client_y_ = value;
  has_client_y_ = true;
}

void MouseEventInit::setMovementX(int32_t value) {
  movement_x_ = value;
  has_movement_x_ = true;
}

void MouseEventInit::setMovementY(int32_t value) {
  movement_y_ = value;
  has_movement_y_ = true;
}

void MouseEventInit::setRegion(const String& value) {
  region_ = value;
}

void MouseEventInit::setRegionToNull() {
  region_ = String();
}

void MouseEventInit::setRelatedTarget(EventTarget* value) {
  related_target_ = value;
  has_related_target_ = true;
}

void MouseEventInit::setRelatedTargetToNull() {
  related_target_ = Member<EventTarget>();
  has_related_target_ = true;
}

void MouseEventInit::setScreenX(double value) {
  screen_x_ = value;
  has_screen_x_ = true;
}

void MouseEventInit::setScreenY(double value) {
  screen_y_ = value;
  has_screen_y_ = true;
}

}  // namespace blink

#endif  // THIRD_PARTY_BLINK_RENDERER_CORE_EVENTS_MOUSE_EVENT_INIT_H_
