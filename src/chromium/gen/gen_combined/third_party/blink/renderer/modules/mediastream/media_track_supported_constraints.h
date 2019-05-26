// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated from the Jinja2 template
// third_party/blink/renderer/bindings/templates/dictionary_impl.h.tmpl
// by the script code_generator_v8.py.
// DO NOT MODIFY!

// clang-format off
#ifndef THIRD_PARTY_BLINK_RENDERER_MODULES_MEDIASTREAM_MEDIA_TRACK_SUPPORTED_CONSTRAINTS_H_
#define THIRD_PARTY_BLINK_RENDERER_MODULES_MEDIASTREAM_MEDIA_TRACK_SUPPORTED_CONSTRAINTS_H_

#include "third_party/blink/renderer/bindings/core/v8/idl_dictionary_base.h"
#include "third_party/blink/renderer/modules/modules_export.h"
#include "third_party/blink/renderer/platform/heap/handle.h"

namespace blink {

class MODULES_EXPORT MediaTrackSupportedConstraints : public IDLDictionaryBase {
 public:
  static MediaTrackSupportedConstraints* Create() { return MakeGarbageCollected<MediaTrackSupportedConstraints>(); }

  MediaTrackSupportedConstraints();
  virtual ~MediaTrackSupportedConstraints();

  bool hasAspectRatio() const { return has_aspect_ratio_; }
  bool aspectRatio() const {
    DCHECK(has_aspect_ratio_);
    return aspect_ratio_;
  }
  inline void setAspectRatio(bool);

  bool hasAutoGainControl() const { return has_auto_gain_control_; }
  bool autoGainControl() const {
    DCHECK(has_auto_gain_control_);
    return auto_gain_control_;
  }
  inline void setAutoGainControl(bool);

  bool hasBrightness() const { return has_brightness_; }
  bool brightness() const {
    DCHECK(has_brightness_);
    return brightness_;
  }
  inline void setBrightness(bool);

  bool hasChannelCount() const { return has_channel_count_; }
  bool channelCount() const {
    DCHECK(has_channel_count_);
    return channel_count_;
  }
  inline void setChannelCount(bool);

  bool hasColorTemperature() const { return has_color_temperature_; }
  bool colorTemperature() const {
    DCHECK(has_color_temperature_);
    return color_temperature_;
  }
  inline void setColorTemperature(bool);

  bool hasContrast() const { return has_contrast_; }
  bool contrast() const {
    DCHECK(has_contrast_);
    return contrast_;
  }
  inline void setContrast(bool);

  bool hasDeviceId() const { return has_device_id_; }
  bool deviceId() const {
    DCHECK(has_device_id_);
    return device_id_;
  }
  inline void setDeviceId(bool);

  bool hasEchoCancellation() const { return has_echo_cancellation_; }
  bool echoCancellation() const {
    DCHECK(has_echo_cancellation_);
    return echo_cancellation_;
  }
  inline void setEchoCancellation(bool);

  bool hasExposureCompensation() const { return has_exposure_compensation_; }
  bool exposureCompensation() const {
    DCHECK(has_exposure_compensation_);
    return exposure_compensation_;
  }
  inline void setExposureCompensation(bool);

  bool hasExposureMode() const { return has_exposure_mode_; }
  bool exposureMode() const {
    DCHECK(has_exposure_mode_);
    return exposure_mode_;
  }
  inline void setExposureMode(bool);

  bool hasExposureTime() const { return has_exposure_time_; }
  bool exposureTime() const {
    DCHECK(has_exposure_time_);
    return exposure_time_;
  }
  inline void setExposureTime(bool);

  bool hasFacingMode() const { return has_facing_mode_; }
  bool facingMode() const {
    DCHECK(has_facing_mode_);
    return facing_mode_;
  }
  inline void setFacingMode(bool);

  bool hasFocusDistance() const { return has_focus_distance_; }
  bool focusDistance() const {
    DCHECK(has_focus_distance_);
    return focus_distance_;
  }
  inline void setFocusDistance(bool);

  bool hasFocusMode() const { return has_focus_mode_; }
  bool focusMode() const {
    DCHECK(has_focus_mode_);
    return focus_mode_;
  }
  inline void setFocusMode(bool);

  bool hasFrameRate() const { return has_frame_rate_; }
  bool frameRate() const {
    DCHECK(has_frame_rate_);
    return frame_rate_;
  }
  inline void setFrameRate(bool);

  bool hasGroupId() const { return has_group_id_; }
  bool groupId() const {
    DCHECK(has_group_id_);
    return group_id_;
  }
  inline void setGroupId(bool);

  bool hasHeight() const { return has_height_; }
  bool height() const {
    DCHECK(has_height_);
    return height_;
  }
  inline void setHeight(bool);

  bool hasIso() const { return has_iso_; }
  bool iso() const {
    DCHECK(has_iso_);
    return iso_;
  }
  inline void setIso(bool);

  bool hasLatency() const { return has_latency_; }
  bool latency() const {
    DCHECK(has_latency_);
    return latency_;
  }
  inline void setLatency(bool);

  bool hasNoiseSuppression() const { return has_noise_suppression_; }
  bool noiseSuppression() const {
    DCHECK(has_noise_suppression_);
    return noise_suppression_;
  }
  inline void setNoiseSuppression(bool);

  bool hasPointsOfInterest() const { return has_points_of_interest_; }
  bool pointsOfInterest() const {
    DCHECK(has_points_of_interest_);
    return points_of_interest_;
  }
  inline void setPointsOfInterest(bool);

  bool hasResizeMode() const { return has_resize_mode_; }
  bool resizeMode() const {
    DCHECK(has_resize_mode_);
    return resize_mode_;
  }
  inline void setResizeMode(bool);

  bool hasSampleRate() const { return has_sample_rate_; }
  bool sampleRate() const {
    DCHECK(has_sample_rate_);
    return sample_rate_;
  }
  inline void setSampleRate(bool);

  bool hasSampleSize() const { return has_sample_size_; }
  bool sampleSize() const {
    DCHECK(has_sample_size_);
    return sample_size_;
  }
  inline void setSampleSize(bool);

  bool hasSaturation() const { return has_saturation_; }
  bool saturation() const {
    DCHECK(has_saturation_);
    return saturation_;
  }
  inline void setSaturation(bool);

  bool hasSharpness() const { return has_sharpness_; }
  bool sharpness() const {
    DCHECK(has_sharpness_);
    return sharpness_;
  }
  inline void setSharpness(bool);

  bool hasTorch() const { return has_torch_; }
  bool torch() const {
    DCHECK(has_torch_);
    return torch_;
  }
  inline void setTorch(bool);

  bool hasVideoKind() const { return has_video_kind_; }
  bool videoKind() const {
    DCHECK(has_video_kind_);
    return video_kind_;
  }
  inline void setVideoKind(bool);

  bool hasVolume() const { return has_volume_; }
  bool volume() const {
    DCHECK(has_volume_);
    return volume_;
  }
  inline void setVolume(bool);

  bool hasWhiteBalanceMode() const { return has_white_balance_mode_; }
  bool whiteBalanceMode() const {
    DCHECK(has_white_balance_mode_);
    return white_balance_mode_;
  }
  inline void setWhiteBalanceMode(bool);

  bool hasWidth() const { return has_width_; }
  bool width() const {
    DCHECK(has_width_);
    return width_;
  }
  inline void setWidth(bool);

  bool hasZoom() const { return has_zoom_; }
  bool zoom() const {
    DCHECK(has_zoom_);
    return zoom_;
  }
  inline void setZoom(bool);

  v8::Local<v8::Value> ToV8Impl(v8::Local<v8::Object>, v8::Isolate*) const override;
  void Trace(blink::Visitor*) override;

 private:
  bool has_aspect_ratio_ = false;
  bool has_auto_gain_control_ = false;
  bool has_brightness_ = false;
  bool has_channel_count_ = false;
  bool has_color_temperature_ = false;
  bool has_contrast_ = false;
  bool has_device_id_ = false;
  bool has_echo_cancellation_ = false;
  bool has_exposure_compensation_ = false;
  bool has_exposure_mode_ = false;
  bool has_exposure_time_ = false;
  bool has_facing_mode_ = false;
  bool has_focus_distance_ = false;
  bool has_focus_mode_ = false;
  bool has_frame_rate_ = false;
  bool has_group_id_ = false;
  bool has_height_ = false;
  bool has_iso_ = false;
  bool has_latency_ = false;
  bool has_noise_suppression_ = false;
  bool has_points_of_interest_ = false;
  bool has_resize_mode_ = false;
  bool has_sample_rate_ = false;
  bool has_sample_size_ = false;
  bool has_saturation_ = false;
  bool has_sharpness_ = false;
  bool has_torch_ = false;
  bool has_video_kind_ = false;
  bool has_volume_ = false;
  bool has_white_balance_mode_ = false;
  bool has_width_ = false;
  bool has_zoom_ = false;

  bool aspect_ratio_;
  bool auto_gain_control_;
  bool brightness_;
  bool channel_count_;
  bool color_temperature_;
  bool contrast_;
  bool device_id_;
  bool echo_cancellation_;
  bool exposure_compensation_;
  bool exposure_mode_;
  bool exposure_time_;
  bool facing_mode_;
  bool focus_distance_;
  bool focus_mode_;
  bool frame_rate_;
  bool group_id_;
  bool height_;
  bool iso_;
  bool latency_;
  bool noise_suppression_;
  bool points_of_interest_;
  bool resize_mode_;
  bool sample_rate_;
  bool sample_size_;
  bool saturation_;
  bool sharpness_;
  bool torch_;
  bool video_kind_;
  bool volume_;
  bool white_balance_mode_;
  bool width_;
  bool zoom_;

  friend class V8MediaTrackSupportedConstraints;
};

void MediaTrackSupportedConstraints::setAspectRatio(bool value) {
  aspect_ratio_ = value;
  has_aspect_ratio_ = true;
}

void MediaTrackSupportedConstraints::setAutoGainControl(bool value) {
  auto_gain_control_ = value;
  has_auto_gain_control_ = true;
}

void MediaTrackSupportedConstraints::setBrightness(bool value) {
  brightness_ = value;
  has_brightness_ = true;
}

void MediaTrackSupportedConstraints::setChannelCount(bool value) {
  channel_count_ = value;
  has_channel_count_ = true;
}

void MediaTrackSupportedConstraints::setColorTemperature(bool value) {
  color_temperature_ = value;
  has_color_temperature_ = true;
}

void MediaTrackSupportedConstraints::setContrast(bool value) {
  contrast_ = value;
  has_contrast_ = true;
}

void MediaTrackSupportedConstraints::setDeviceId(bool value) {
  device_id_ = value;
  has_device_id_ = true;
}

void MediaTrackSupportedConstraints::setEchoCancellation(bool value) {
  echo_cancellation_ = value;
  has_echo_cancellation_ = true;
}

void MediaTrackSupportedConstraints::setExposureCompensation(bool value) {
  exposure_compensation_ = value;
  has_exposure_compensation_ = true;
}

void MediaTrackSupportedConstraints::setExposureMode(bool value) {
  exposure_mode_ = value;
  has_exposure_mode_ = true;
}

void MediaTrackSupportedConstraints::setExposureTime(bool value) {
  exposure_time_ = value;
  has_exposure_time_ = true;
}

void MediaTrackSupportedConstraints::setFacingMode(bool value) {
  facing_mode_ = value;
  has_facing_mode_ = true;
}

void MediaTrackSupportedConstraints::setFocusDistance(bool value) {
  focus_distance_ = value;
  has_focus_distance_ = true;
}

void MediaTrackSupportedConstraints::setFocusMode(bool value) {
  focus_mode_ = value;
  has_focus_mode_ = true;
}

void MediaTrackSupportedConstraints::setFrameRate(bool value) {
  frame_rate_ = value;
  has_frame_rate_ = true;
}

void MediaTrackSupportedConstraints::setGroupId(bool value) {
  group_id_ = value;
  has_group_id_ = true;
}

void MediaTrackSupportedConstraints::setHeight(bool value) {
  height_ = value;
  has_height_ = true;
}

void MediaTrackSupportedConstraints::setIso(bool value) {
  iso_ = value;
  has_iso_ = true;
}

void MediaTrackSupportedConstraints::setLatency(bool value) {
  latency_ = value;
  has_latency_ = true;
}

void MediaTrackSupportedConstraints::setNoiseSuppression(bool value) {
  noise_suppression_ = value;
  has_noise_suppression_ = true;
}

void MediaTrackSupportedConstraints::setPointsOfInterest(bool value) {
  points_of_interest_ = value;
  has_points_of_interest_ = true;
}

void MediaTrackSupportedConstraints::setResizeMode(bool value) {
  resize_mode_ = value;
  has_resize_mode_ = true;
}

void MediaTrackSupportedConstraints::setSampleRate(bool value) {
  sample_rate_ = value;
  has_sample_rate_ = true;
}

void MediaTrackSupportedConstraints::setSampleSize(bool value) {
  sample_size_ = value;
  has_sample_size_ = true;
}

void MediaTrackSupportedConstraints::setSaturation(bool value) {
  saturation_ = value;
  has_saturation_ = true;
}

void MediaTrackSupportedConstraints::setSharpness(bool value) {
  sharpness_ = value;
  has_sharpness_ = true;
}

void MediaTrackSupportedConstraints::setTorch(bool value) {
  torch_ = value;
  has_torch_ = true;
}

void MediaTrackSupportedConstraints::setVideoKind(bool value) {
  video_kind_ = value;
  has_video_kind_ = true;
}

void MediaTrackSupportedConstraints::setVolume(bool value) {
  volume_ = value;
  has_volume_ = true;
}

void MediaTrackSupportedConstraints::setWhiteBalanceMode(bool value) {
  white_balance_mode_ = value;
  has_white_balance_mode_ = true;
}

void MediaTrackSupportedConstraints::setWidth(bool value) {
  width_ = value;
  has_width_ = true;
}

void MediaTrackSupportedConstraints::setZoom(bool value) {
  zoom_ = value;
  has_zoom_ = true;
}

}  // namespace blink

#endif  // THIRD_PARTY_BLINK_RENDERER_MODULES_MEDIASTREAM_MEDIA_TRACK_SUPPORTED_CONSTRAINTS_H_
