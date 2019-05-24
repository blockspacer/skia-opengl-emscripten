// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated from the Jinja2 template
// third_party/blink/renderer/bindings/templates/dictionary_impl.h.tmpl
// by the script code_generator_v8.py.
// DO NOT MODIFY!

// clang-format off
#ifndef THIRD_PARTY_BLINK_RENDERER_CORE_INPUT_TOUCH_INIT_H_
#define THIRD_PARTY_BLINK_RENDERER_CORE_INPUT_TOUCH_INIT_H_

#include "third_party/blink/renderer/bindings/core/v8/idl_dictionary_base.h"
#include "third_party/blink/renderer/core/core_export.h"
#include "third_party/blink/renderer/platform/heap/handle.h"
#include "third_party/blink/renderer/platform/wtf/text/wtf_string.h"

namespace blink {

class EventTarget;

class CORE_EXPORT TouchInit : public IDLDictionaryBase {
 public:
  static TouchInit* Create() { return MakeGarbageCollected<TouchInit>(); }

  TouchInit();
  virtual ~TouchInit();

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

  bool hasForce() const { return has_force_; }
  float force() const {
    DCHECK(has_force_);
    return force_;
  }
  inline void setForce(float);

  bool hasIdentifier() const { return has_identifier_; }
  int32_t identifier() const {
    DCHECK(has_identifier_);
    return identifier_;
  }
  inline void setIdentifier(int32_t);

  bool hasPageX() const { return has_page_x_; }
  double pageX() const {
    DCHECK(has_page_x_);
    return page_x_;
  }
  inline void setPageX(double);

  bool hasPageY() const { return has_page_y_; }
  double pageY() const {
    DCHECK(has_page_y_);
    return page_y_;
  }
  inline void setPageY(double);

  bool hasRadiusX() const { return has_radius_x_; }
  float radiusX() const {
    DCHECK(has_radius_x_);
    return radius_x_;
  }
  inline void setRadiusX(float);

  bool hasRadiusY() const { return has_radius_y_; }
  float radiusY() const {
    DCHECK(has_radius_y_);
    return radius_y_;
  }
  inline void setRadiusY(float);

  bool hasRegion() const { return !region_.IsNull(); }
  const String& region() const {
    return region_;
  }
  inline void setRegion(const String&);
  inline void setRegionToNull();

  bool hasRotationAngle() const { return has_rotation_angle_; }
  float rotationAngle() const {
    DCHECK(has_rotation_angle_);
    return rotation_angle_;
  }
  inline void setRotationAngle(float);

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

  bool hasTarget() const { return target_; }
  EventTarget* target() const {
    return target_;
  }
  inline void setTarget(EventTarget*);

  v8::Local<v8::Value> ToV8Impl(v8::Local<v8::Object>, v8::Isolate*) const override;
  void Trace(blink::Visitor*) override;

 private:
  bool has_client_x_ = false;
  bool has_client_y_ = false;
  bool has_force_ = false;
  bool has_identifier_ = false;
  bool has_page_x_ = false;
  bool has_page_y_ = false;
  bool has_radius_x_ = false;
  bool has_radius_y_ = false;
  bool has_rotation_angle_ = false;
  bool has_screen_x_ = false;
  bool has_screen_y_ = false;

  double client_x_;
  double client_y_;
  float force_;
  int32_t identifier_;
  double page_x_;
  double page_y_;
  float radius_x_;
  float radius_y_;
  String region_;
  float rotation_angle_;
  double screen_x_;
  double screen_y_;
  Member<EventTarget> target_;

  friend class V8TouchInit;
};

void TouchInit::setClientX(double value) {
  client_x_ = value;
  has_client_x_ = true;
}

void TouchInit::setClientY(double value) {
  client_y_ = value;
  has_client_y_ = true;
}

void TouchInit::setForce(float value) {
  force_ = value;
  has_force_ = true;
}

void TouchInit::setIdentifier(int32_t value) {
  identifier_ = value;
  has_identifier_ = true;
}

void TouchInit::setPageX(double value) {
  page_x_ = value;
  has_page_x_ = true;
}

void TouchInit::setPageY(double value) {
  page_y_ = value;
  has_page_y_ = true;
}

void TouchInit::setRadiusX(float value) {
  radius_x_ = value;
  has_radius_x_ = true;
}

void TouchInit::setRadiusY(float value) {
  radius_y_ = value;
  has_radius_y_ = true;
}

void TouchInit::setRegion(const String& value) {
  region_ = value;
}

void TouchInit::setRegionToNull() {
  region_ = String();
}

void TouchInit::setRotationAngle(float value) {
  rotation_angle_ = value;
  has_rotation_angle_ = true;
}

void TouchInit::setScreenX(double value) {
  screen_x_ = value;
  has_screen_x_ = true;
}

void TouchInit::setScreenY(double value) {
  screen_y_ = value;
  has_screen_y_ = true;
}

void TouchInit::setTarget(EventTarget* value) {
  target_ = value;
}

}  // namespace blink

#endif  // THIRD_PARTY_BLINK_RENDERER_CORE_INPUT_TOUCH_INIT_H_
