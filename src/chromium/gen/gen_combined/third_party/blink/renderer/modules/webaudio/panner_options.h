// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated from the Jinja2 template
// third_party/blink/renderer/bindings/templates/dictionary_impl.h.tmpl
// by the script code_generator_v8.py.
// DO NOT MODIFY!

// clang-format off
#ifndef THIRD_PARTY_BLINK_RENDERER_MODULES_WEBAUDIO_PANNER_OPTIONS_H_
#define THIRD_PARTY_BLINK_RENDERER_MODULES_WEBAUDIO_PANNER_OPTIONS_H_

#include "third_party/blink/renderer/modules/modules_export.h"
#include "third_party/blink/renderer/modules/webaudio/audio_node_options.h"
#include "third_party/blink/renderer/platform/heap/handle.h"
#include "third_party/blink/renderer/platform/wtf/text/wtf_string.h"

namespace blink {

class MODULES_EXPORT PannerOptions : public AudioNodeOptions {
 public:
  static PannerOptions* Create() { return MakeGarbageCollected<PannerOptions>(); }

  PannerOptions();
  virtual ~PannerOptions();

  bool hasConeInnerAngle() const { return has_cone_inner_angle_; }
  double coneInnerAngle() const {
    DCHECK(has_cone_inner_angle_);
    return cone_inner_angle_;
  }
  inline void setConeInnerAngle(double);

  bool hasConeOuterAngle() const { return has_cone_outer_angle_; }
  double coneOuterAngle() const {
    DCHECK(has_cone_outer_angle_);
    return cone_outer_angle_;
  }
  inline void setConeOuterAngle(double);

  bool hasConeOuterGain() const { return has_cone_outer_gain_; }
  double coneOuterGain() const {
    DCHECK(has_cone_outer_gain_);
    return cone_outer_gain_;
  }
  inline void setConeOuterGain(double);

  bool hasDistanceModel() const { return !distance_model_.IsNull(); }
  const String& distanceModel() const {
    return distance_model_;
  }
  inline void setDistanceModel(const String&);

  bool hasMaxDistance() const { return has_max_distance_; }
  double maxDistance() const {
    DCHECK(has_max_distance_);
    return max_distance_;
  }
  inline void setMaxDistance(double);

  bool hasOrientationX() const { return has_orientation_x_; }
  float orientationX() const {
    DCHECK(has_orientation_x_);
    return orientation_x_;
  }
  inline void setOrientationX(float);

  bool hasOrientationY() const { return has_orientation_y_; }
  float orientationY() const {
    DCHECK(has_orientation_y_);
    return orientation_y_;
  }
  inline void setOrientationY(float);

  bool hasOrientationZ() const { return has_orientation_z_; }
  float orientationZ() const {
    DCHECK(has_orientation_z_);
    return orientation_z_;
  }
  inline void setOrientationZ(float);

  bool hasPanningModel() const { return !panning_model_.IsNull(); }
  const String& panningModel() const {
    return panning_model_;
  }
  inline void setPanningModel(const String&);

  bool hasPositionX() const { return has_position_x_; }
  float positionX() const {
    DCHECK(has_position_x_);
    return position_x_;
  }
  inline void setPositionX(float);

  bool hasPositionY() const { return has_position_y_; }
  float positionY() const {
    DCHECK(has_position_y_);
    return position_y_;
  }
  inline void setPositionY(float);

  bool hasPositionZ() const { return has_position_z_; }
  float positionZ() const {
    DCHECK(has_position_z_);
    return position_z_;
  }
  inline void setPositionZ(float);

  bool hasRefDistance() const { return has_ref_distance_; }
  double refDistance() const {
    DCHECK(has_ref_distance_);
    return ref_distance_;
  }
  inline void setRefDistance(double);

  bool hasRolloffFactor() const { return has_rolloff_factor_; }
  double rolloffFactor() const {
    DCHECK(has_rolloff_factor_);
    return rolloff_factor_;
  }
  inline void setRolloffFactor(double);

  v8::Local<v8::Value> ToV8Impl(v8::Local<v8::Object>, v8::Isolate*) const override;
  void Trace(blink::Visitor*) override;

 private:
  bool has_cone_inner_angle_ = false;
  bool has_cone_outer_angle_ = false;
  bool has_cone_outer_gain_ = false;
  bool has_max_distance_ = false;
  bool has_orientation_x_ = false;
  bool has_orientation_y_ = false;
  bool has_orientation_z_ = false;
  bool has_position_x_ = false;
  bool has_position_y_ = false;
  bool has_position_z_ = false;
  bool has_ref_distance_ = false;
  bool has_rolloff_factor_ = false;

  double cone_inner_angle_;
  double cone_outer_angle_;
  double cone_outer_gain_;
  String distance_model_;
  double max_distance_;
  float orientation_x_;
  float orientation_y_;
  float orientation_z_;
  String panning_model_;
  float position_x_;
  float position_y_;
  float position_z_;
  double ref_distance_;
  double rolloff_factor_;

  friend class V8PannerOptions;
};

void PannerOptions::setConeInnerAngle(double value) {
  cone_inner_angle_ = value;
  has_cone_inner_angle_ = true;
}

void PannerOptions::setConeOuterAngle(double value) {
  cone_outer_angle_ = value;
  has_cone_outer_angle_ = true;
}

void PannerOptions::setConeOuterGain(double value) {
  cone_outer_gain_ = value;
  has_cone_outer_gain_ = true;
}

void PannerOptions::setDistanceModel(const String& value) {
  distance_model_ = value;
}

void PannerOptions::setMaxDistance(double value) {
  max_distance_ = value;
  has_max_distance_ = true;
}

void PannerOptions::setOrientationX(float value) {
  orientation_x_ = value;
  has_orientation_x_ = true;
}

void PannerOptions::setOrientationY(float value) {
  orientation_y_ = value;
  has_orientation_y_ = true;
}

void PannerOptions::setOrientationZ(float value) {
  orientation_z_ = value;
  has_orientation_z_ = true;
}

void PannerOptions::setPanningModel(const String& value) {
  panning_model_ = value;
}

void PannerOptions::setPositionX(float value) {
  position_x_ = value;
  has_position_x_ = true;
}

void PannerOptions::setPositionY(float value) {
  position_y_ = value;
  has_position_y_ = true;
}

void PannerOptions::setPositionZ(float value) {
  position_z_ = value;
  has_position_z_ = true;
}

void PannerOptions::setRefDistance(double value) {
  ref_distance_ = value;
  has_ref_distance_ = true;
}

void PannerOptions::setRolloffFactor(double value) {
  rolloff_factor_ = value;
  has_rolloff_factor_ = true;
}

}  // namespace blink

#endif  // THIRD_PARTY_BLINK_RENDERER_MODULES_WEBAUDIO_PANNER_OPTIONS_H_
