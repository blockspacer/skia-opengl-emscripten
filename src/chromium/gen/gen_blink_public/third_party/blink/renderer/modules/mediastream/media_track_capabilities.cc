// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated from the Jinja2 template
// third_party/blink/renderer/bindings/templates/dictionary_impl.cc.tmpl
// by the script code_generator_v8.py.
// DO NOT MODIFY!

// clang-format off
#include "third_party/blink/renderer/modules/mediastream/media_track_capabilities.h"

#include "third_party/blink/renderer/modules/imagecapture/media_settings_range.h"

namespace blink {

MediaTrackCapabilities::MediaTrackCapabilities() {
}

MediaTrackCapabilities::~MediaTrackCapabilities() = default;

void MediaTrackCapabilities::setAspectRatio(DoubleRange* value) {
  aspect_ratio_ = value;
}

void MediaTrackCapabilities::setAutoGainControl(const Vector<bool>& value) {
  auto_gain_control_ = value;
  has_auto_gain_control_ = true;
}

void MediaTrackCapabilities::setChannelCount(LongRange* value) {
  channel_count_ = value;
}

void MediaTrackCapabilities::setEchoCancellation(const Vector<bool>& value) {
  echo_cancellation_ = value;
  has_echo_cancellation_ = true;
}

void MediaTrackCapabilities::setExposureMode(const Vector<String>& value) {
  exposure_mode_ = value;
  has_exposure_mode_ = true;
}

void MediaTrackCapabilities::setFacingMode(const Vector<String>& value) {
  facing_mode_ = value;
  has_facing_mode_ = true;
}

void MediaTrackCapabilities::setFocusMode(const Vector<String>& value) {
  focus_mode_ = value;
  has_focus_mode_ = true;
}

void MediaTrackCapabilities::setFrameRate(DoubleRange* value) {
  frame_rate_ = value;
}

void MediaTrackCapabilities::setHeight(LongRange* value) {
  height_ = value;
}

void MediaTrackCapabilities::setLatency(DoubleRange* value) {
  latency_ = value;
}

void MediaTrackCapabilities::setNoiseSuppression(const Vector<bool>& value) {
  noise_suppression_ = value;
  has_noise_suppression_ = true;
}

void MediaTrackCapabilities::setResizeMode(const Vector<String>& value) {
  resize_mode_ = value;
  has_resize_mode_ = true;
}

void MediaTrackCapabilities::setSampleRate(LongRange* value) {
  sample_rate_ = value;
}

void MediaTrackCapabilities::setSampleSize(LongRange* value) {
  sample_size_ = value;
}

void MediaTrackCapabilities::setWhiteBalanceMode(const Vector<String>& value) {
  white_balance_mode_ = value;
  has_white_balance_mode_ = true;
}

void MediaTrackCapabilities::setWidth(LongRange* value) {
  width_ = value;
}

void MediaTrackCapabilities::Trace(blink::Visitor* visitor) {
  visitor->Trace(aspect_ratio_);
  visitor->Trace(brightness_);
  visitor->Trace(channel_count_);
  visitor->Trace(color_temperature_);
  visitor->Trace(contrast_);
  visitor->Trace(exposure_compensation_);
  visitor->Trace(exposure_time_);
  visitor->Trace(focus_distance_);
  visitor->Trace(frame_rate_);
  visitor->Trace(height_);
  visitor->Trace(iso_);
  visitor->Trace(latency_);
  visitor->Trace(sample_rate_);
  visitor->Trace(sample_size_);
  visitor->Trace(saturation_);
  visitor->Trace(sharpness_);
  visitor->Trace(width_);
  visitor->Trace(zoom_);
  IDLDictionaryBase::Trace(visitor);
}

}  // namespace blink
