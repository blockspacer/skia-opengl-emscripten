// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated from the Jinja2 template
// third_party/blink/renderer/bindings/templates/dictionary_impl.cc.tmpl
// by the script code_generator_v8.py.
// DO NOT MODIFY!

// clang-format off
#include "third_party/blink/renderer/modules/mediastream/media_track_constraint_set.h"

namespace blink {

MediaTrackConstraintSet::MediaTrackConstraintSet() {
}

MediaTrackConstraintSet::~MediaTrackConstraintSet() = default;

void MediaTrackConstraintSet::setAspectRatio(const DoubleOrConstrainDoubleRange& value) {
  aspect_ratio_ = value;
}

void MediaTrackConstraintSet::setAutoGainControl(const BooleanOrConstrainBooleanParameters& value) {
  auto_gain_control_ = value;
}

void MediaTrackConstraintSet::setBrightness(const DoubleOrConstrainDoubleRange& value) {
  brightness_ = value;
}

void MediaTrackConstraintSet::setChannelCount(const LongOrConstrainLongRange& value) {
  channel_count_ = value;
}

void MediaTrackConstraintSet::setColorTemperature(const DoubleOrConstrainDoubleRange& value) {
  color_temperature_ = value;
}

void MediaTrackConstraintSet::setContrast(const DoubleOrConstrainDoubleRange& value) {
  contrast_ = value;
}

void MediaTrackConstraintSet::setDeviceId(const StringOrStringSequenceOrConstrainDOMStringParameters& value) {
  device_id_ = value;
}

void MediaTrackConstraintSet::setEchoCancellation(const BooleanOrConstrainBooleanParameters& value) {
  echo_cancellation_ = value;
}

void MediaTrackConstraintSet::setExposureCompensation(const DoubleOrConstrainDoubleRange& value) {
  exposure_compensation_ = value;
}

void MediaTrackConstraintSet::setExposureMode(const StringOrStringSequenceOrConstrainDOMStringParameters& value) {
  exposure_mode_ = value;
}

void MediaTrackConstraintSet::setExposureTime(const DoubleOrConstrainDoubleRange& value) {
  exposure_time_ = value;
}

void MediaTrackConstraintSet::setFacingMode(const StringOrStringSequenceOrConstrainDOMStringParameters& value) {
  facing_mode_ = value;
}

void MediaTrackConstraintSet::setFocusDistance(const DoubleOrConstrainDoubleRange& value) {
  focus_distance_ = value;
}

void MediaTrackConstraintSet::setFocusMode(const StringOrStringSequenceOrConstrainDOMStringParameters& value) {
  focus_mode_ = value;
}

void MediaTrackConstraintSet::setFrameRate(const DoubleOrConstrainDoubleRange& value) {
  frame_rate_ = value;
}

void MediaTrackConstraintSet::setGroupId(const StringOrStringSequenceOrConstrainDOMStringParameters& value) {
  group_id_ = value;
}

void MediaTrackConstraintSet::setHeight(const LongOrConstrainLongRange& value) {
  height_ = value;
}

void MediaTrackConstraintSet::setIso(const DoubleOrConstrainDoubleRange& value) {
  iso_ = value;
}

void MediaTrackConstraintSet::setLatency(const DoubleOrConstrainDoubleRange& value) {
  latency_ = value;
}

void MediaTrackConstraintSet::setMandatory(Dictionary value) {
  mandatory_ = value;
}

void MediaTrackConstraintSet::setNoiseSuppression(const BooleanOrConstrainBooleanParameters& value) {
  noise_suppression_ = value;
}

void MediaTrackConstraintSet::setOptional(const Vector<Dictionary>& value) {
  optional_ = value;
  has_optional_ = true;
}

void MediaTrackConstraintSet::setPointsOfInterest(const Point2DSequenceOrConstrainPoint2DParameters& value) {
  points_of_interest_ = value;
}

void MediaTrackConstraintSet::setResizeMode(const StringOrStringSequenceOrConstrainDOMStringParameters& value) {
  resize_mode_ = value;
}

void MediaTrackConstraintSet::setSampleRate(const LongOrConstrainLongRange& value) {
  sample_rate_ = value;
}

void MediaTrackConstraintSet::setSampleSize(const LongOrConstrainLongRange& value) {
  sample_size_ = value;
}

void MediaTrackConstraintSet::setSaturation(const DoubleOrConstrainDoubleRange& value) {
  saturation_ = value;
}

void MediaTrackConstraintSet::setSharpness(const DoubleOrConstrainDoubleRange& value) {
  sharpness_ = value;
}

void MediaTrackConstraintSet::setTorch(const BooleanOrConstrainBooleanParameters& value) {
  torch_ = value;
}

void MediaTrackConstraintSet::setVideoKind(const StringOrStringSequenceOrConstrainDOMStringParameters& value) {
  video_kind_ = value;
}

void MediaTrackConstraintSet::setVolume(const DoubleOrConstrainDoubleRange& value) {
  volume_ = value;
}

void MediaTrackConstraintSet::setWhiteBalanceMode(const StringOrStringSequenceOrConstrainDOMStringParameters& value) {
  white_balance_mode_ = value;
}

void MediaTrackConstraintSet::setWidth(const LongOrConstrainLongRange& value) {
  width_ = value;
}

void MediaTrackConstraintSet::setZoom(const DoubleOrConstrainDoubleRange& value) {
  zoom_ = value;
}

void MediaTrackConstraintSet::Trace(blink::Visitor* visitor) {
  visitor->Trace(aspect_ratio_);
  visitor->Trace(auto_gain_control_);
  visitor->Trace(brightness_);
  visitor->Trace(channel_count_);
  visitor->Trace(color_temperature_);
  visitor->Trace(contrast_);
  visitor->Trace(device_id_);
  visitor->Trace(echo_cancellation_);
  visitor->Trace(exposure_compensation_);
  visitor->Trace(exposure_mode_);
  visitor->Trace(exposure_time_);
  visitor->Trace(facing_mode_);
  visitor->Trace(focus_distance_);
  visitor->Trace(focus_mode_);
  visitor->Trace(frame_rate_);
  visitor->Trace(group_id_);
  visitor->Trace(height_);
  visitor->Trace(iso_);
  visitor->Trace(latency_);
  visitor->Trace(noise_suppression_);
  visitor->Trace(points_of_interest_);
  visitor->Trace(resize_mode_);
  visitor->Trace(sample_rate_);
  visitor->Trace(sample_size_);
  visitor->Trace(saturation_);
  visitor->Trace(sharpness_);
  visitor->Trace(torch_);
  visitor->Trace(video_kind_);
  visitor->Trace(volume_);
  visitor->Trace(white_balance_mode_);
  visitor->Trace(width_);
  visitor->Trace(zoom_);
  IDLDictionaryBase::Trace(visitor);
}

}  // namespace blink
