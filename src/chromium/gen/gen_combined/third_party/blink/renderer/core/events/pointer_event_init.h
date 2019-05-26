// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated from the Jinja2 template
// third_party/blink/renderer/bindings/templates/dictionary_impl.h.tmpl
// by the script code_generator_v8.py.
// DO NOT MODIFY!

// clang-format off
#ifndef THIRD_PARTY_BLINK_RENDERER_CORE_EVENTS_POINTER_EVENT_INIT_H_
#define THIRD_PARTY_BLINK_RENDERER_CORE_EVENTS_POINTER_EVENT_INIT_H_

#include "third_party/blink/renderer/core/core_export.h"
#include "third_party/blink/renderer/core/events/mouse_event_init.h"
#include "third_party/blink/renderer/platform/heap/handle.h"
#include "third_party/blink/renderer/platform/wtf/text/wtf_string.h"

namespace blink {

class PointerEvent;

class CORE_EXPORT PointerEventInit : public MouseEventInit {
 public:
  static PointerEventInit* Create() { return MakeGarbageCollected<PointerEventInit>(); }

  PointerEventInit();
  virtual ~PointerEventInit();

  bool hasCoalescedEvents() const { return has_coalesced_events_; }
  const HeapVector<Member<PointerEvent>>& coalescedEvents() const {
    DCHECK(has_coalesced_events_);
    return coalesced_events_;
  }
  void setCoalescedEvents(const HeapVector<Member<PointerEvent>>&);

  bool hasHeight() const { return has_height_; }
  double height() const {
    DCHECK(has_height_);
    return height_;
  }
  inline void setHeight(double);

  bool hasIsPrimary() const { return has_is_primary_; }
  bool isPrimary() const {
    DCHECK(has_is_primary_);
    return is_primary_;
  }
  inline void setIsPrimary(bool);

  bool hasPointerId() const { return has_pointer_id_; }
  int32_t pointerId() const {
    DCHECK(has_pointer_id_);
    return pointer_id_;
  }
  inline void setPointerId(int32_t);

  bool hasPointerType() const { return !pointer_type_.IsNull(); }
  const String& pointerType() const {
    return pointer_type_;
  }
  inline void setPointerType(const String&);

  bool hasPredictedEvents() const { return has_predicted_events_; }
  const HeapVector<Member<PointerEvent>>& predictedEvents() const {
    DCHECK(has_predicted_events_);
    return predicted_events_;
  }
  void setPredictedEvents(const HeapVector<Member<PointerEvent>>&);

  bool hasPressure() const { return has_pressure_; }
  float pressure() const {
    DCHECK(has_pressure_);
    return pressure_;
  }
  inline void setPressure(float);

  bool hasTangentialPressure() const { return has_tangential_pressure_; }
  float tangentialPressure() const {
    DCHECK(has_tangential_pressure_);
    return tangential_pressure_;
  }
  inline void setTangentialPressure(float);

  bool hasTiltX() const { return has_tilt_x_; }
  int32_t tiltX() const {
    DCHECK(has_tilt_x_);
    return tilt_x_;
  }
  inline void setTiltX(int32_t);

  bool hasTiltY() const { return has_tilt_y_; }
  int32_t tiltY() const {
    DCHECK(has_tilt_y_);
    return tilt_y_;
  }
  inline void setTiltY(int32_t);

  bool hasTwist() const { return has_twist_; }
  int32_t twist() const {
    DCHECK(has_twist_);
    return twist_;
  }
  inline void setTwist(int32_t);

  bool hasWidth() const { return has_width_; }
  double width() const {
    DCHECK(has_width_);
    return width_;
  }
  inline void setWidth(double);

  v8::Local<v8::Value> ToV8Impl(v8::Local<v8::Object>, v8::Isolate*) const override;
  void Trace(blink::Visitor*) override;

 private:
  bool has_coalesced_events_ = false;
  bool has_height_ = false;
  bool has_is_primary_ = false;
  bool has_pointer_id_ = false;
  bool has_predicted_events_ = false;
  bool has_pressure_ = false;
  bool has_tangential_pressure_ = false;
  bool has_tilt_x_ = false;
  bool has_tilt_y_ = false;
  bool has_twist_ = false;
  bool has_width_ = false;

  HeapVector<Member<PointerEvent>> coalesced_events_;
  double height_;
  bool is_primary_;
  int32_t pointer_id_;
  String pointer_type_;
  HeapVector<Member<PointerEvent>> predicted_events_;
  float pressure_;
  float tangential_pressure_;
  int32_t tilt_x_;
  int32_t tilt_y_;
  int32_t twist_;
  double width_;

  friend class V8PointerEventInit;
};

void PointerEventInit::setHeight(double value) {
  height_ = value;
  has_height_ = true;
}

void PointerEventInit::setIsPrimary(bool value) {
  is_primary_ = value;
  has_is_primary_ = true;
}

void PointerEventInit::setPointerId(int32_t value) {
  pointer_id_ = value;
  has_pointer_id_ = true;
}

void PointerEventInit::setPointerType(const String& value) {
  pointer_type_ = value;
}

void PointerEventInit::setPressure(float value) {
  pressure_ = value;
  has_pressure_ = true;
}

void PointerEventInit::setTangentialPressure(float value) {
  tangential_pressure_ = value;
  has_tangential_pressure_ = true;
}

void PointerEventInit::setTiltX(int32_t value) {
  tilt_x_ = value;
  has_tilt_x_ = true;
}

void PointerEventInit::setTiltY(int32_t value) {
  tilt_y_ = value;
  has_tilt_y_ = true;
}

void PointerEventInit::setTwist(int32_t value) {
  twist_ = value;
  has_twist_ = true;
}

void PointerEventInit::setWidth(double value) {
  width_ = value;
  has_width_ = true;
}

}  // namespace blink

#endif  // THIRD_PARTY_BLINK_RENDERER_CORE_EVENTS_POINTER_EVENT_INIT_H_
