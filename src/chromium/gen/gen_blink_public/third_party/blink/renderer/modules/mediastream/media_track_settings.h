// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated from the Jinja2 template
// third_party/blink/renderer/bindings/templates/dictionary_impl.h.tmpl
// by the script code_generator_v8.py.
// DO NOT MODIFY!

// clang-format off
#ifndef THIRD_PARTY_BLINK_RENDERER_MODULES_MEDIASTREAM_MEDIA_TRACK_SETTINGS_H_
#define THIRD_PARTY_BLINK_RENDERER_MODULES_MEDIASTREAM_MEDIA_TRACK_SETTINGS_H_

#include "third_party/blink/renderer/bindings/core/v8/idl_dictionary_base.h"
#include "third_party/blink/renderer/modules/imagecapture/point_2d.h"
#include "third_party/blink/renderer/modules/modules_export.h"
#include "third_party/blink/renderer/platform/heap/handle.h"
#include "third_party/blink/renderer/platform/wtf/text/wtf_string.h"
#include "third_party/blink/renderer/platform/wtf/vector.h"

namespace blink {

class MODULES_EXPORT MediaTrackSettings : public IDLDictionaryBase {
 public:
  static MediaTrackSettings* Create() { return MakeGarbageCollected<MediaTrackSettings>(); }

  MediaTrackSettings();
  virtual ~MediaTrackSettings();

  bool hasAspectRatio() const { return has_aspect_ratio_; }
  double aspectRatio() const {
    DCHECK(has_aspect_ratio_);
    return aspect_ratio_;
  }
  inline void setAspectRatio(double);

  bool hasAutoGainControl() const { return has_auto_gain_control_; }
  bool autoGainControl() const {
    DCHECK(has_auto_gain_control_);
    return auto_gain_control_;
  }
  inline void setAutoGainControl(bool);

  bool hasBrightness() const { return has_brightness_; }
  double brightness() const {
    DCHECK(has_brightness_);
    return brightness_;
  }
  inline void setBrightness(double);

  bool hasChannelCount() const { return has_channel_count_; }
  int32_t channelCount() const {
    DCHECK(has_channel_count_);
    return channel_count_;
  }
  inline void setChannelCount(int32_t);

  bool hasColorTemperature() const { return has_color_temperature_; }
  double colorTemperature() const {
    DCHECK(has_color_temperature_);
    return color_temperature_;
  }
  inline void setColorTemperature(double);

  bool hasContrast() const { return has_contrast_; }
  double contrast() const {
    DCHECK(has_contrast_);
    return contrast_;
  }
  inline void setContrast(double);

  bool hasCursor() const { return !cursor_.IsNull(); }
  const String& cursor() const {
    return cursor_;
  }
  inline void setCursor(const String&);

  bool hasDeviceId() const { return !device_id_.IsNull(); }
  const String& deviceId() const {
    return device_id_;
  }
  inline void setDeviceId(const String&);

  bool hasDisplaySurface() const { return !display_surface_.IsNull(); }
  const String& displaySurface() const {
    return display_surface_;
  }
  inline void setDisplaySurface(const String&);

  bool hasEchoCancellation() const { return has_echo_cancellation_; }
  bool echoCancellation() const {
    DCHECK(has_echo_cancellation_);
    return echo_cancellation_;
  }
  inline void setEchoCancellation(bool);

  bool hasExposureCompensation() const { return has_exposure_compensation_; }
  double exposureCompensation() const {
    DCHECK(has_exposure_compensation_);
    return exposure_compensation_;
  }
  inline void setExposureCompensation(double);

  bool hasExposureMode() const { return !exposure_mode_.IsNull(); }
  const String& exposureMode() const {
    return exposure_mode_;
  }
  inline void setExposureMode(const String&);

  bool hasExposureTime() const { return has_exposure_time_; }
  double exposureTime() const {
    DCHECK(has_exposure_time_);
    return exposure_time_;
  }
  inline void setExposureTime(double);

  bool hasFacingMode() const { return !facing_mode_.IsNull(); }
  const String& facingMode() const {
    return facing_mode_;
  }
  inline void setFacingMode(const String&);

  bool hasFocusDistance() const { return has_focus_distance_; }
  double focusDistance() const {
    DCHECK(has_focus_distance_);
    return focus_distance_;
  }
  inline void setFocusDistance(double);

  bool hasFocusMode() const { return !focus_mode_.IsNull(); }
  const String& focusMode() const {
    return focus_mode_;
  }
  inline void setFocusMode(const String&);

  bool hasFrameRate() const { return has_frame_rate_; }
  double frameRate() const {
    DCHECK(has_frame_rate_);
    return frame_rate_;
  }
  inline void setFrameRate(double);

  bool hasGroupId() const { return !group_id_.IsNull(); }
  const String& groupId() const {
    return group_id_;
  }
  inline void setGroupId(const String&);

  bool hasHeight() const { return has_height_; }
  int32_t height() const {
    DCHECK(has_height_);
    return height_;
  }
  inline void setHeight(int32_t);

  bool hasIso() const { return has_iso_; }
  double iso() const {
    DCHECK(has_iso_);
    return iso_;
  }
  inline void setIso(double);

  bool hasLatency() const { return has_latency_; }
  double latency() const {
    DCHECK(has_latency_);
    return latency_;
  }
  inline void setLatency(double);

  bool hasLogicalSurface() const { return has_logical_surface_; }
  bool logicalSurface() const {
    DCHECK(has_logical_surface_);
    return logical_surface_;
  }
  inline void setLogicalSurface(bool);

  bool hasNoiseSuppression() const { return has_noise_suppression_; }
  bool noiseSuppression() const {
    DCHECK(has_noise_suppression_);
    return noise_suppression_;
  }
  inline void setNoiseSuppression(bool);

  bool hasPointsOfInterest() const { return has_points_of_interest_; }
  const HeapVector<Member<Point2D>>& pointsOfInterest() const {
    DCHECK(has_points_of_interest_);
    return points_of_interest_;
  }
  void setPointsOfInterest(const HeapVector<Member<Point2D>>&);

  bool hasResizeMode() const { return !resize_mode_.IsNull(); }
  const String& resizeMode() const {
    return resize_mode_;
  }
  inline void setResizeMode(const String&);

  bool hasSampleRate() const { return has_sample_rate_; }
  int32_t sampleRate() const {
    DCHECK(has_sample_rate_);
    return sample_rate_;
  }
  inline void setSampleRate(int32_t);

  bool hasSampleSize() const { return has_sample_size_; }
  int32_t sampleSize() const {
    DCHECK(has_sample_size_);
    return sample_size_;
  }
  inline void setSampleSize(int32_t);

  bool hasSaturation() const { return has_saturation_; }
  double saturation() const {
    DCHECK(has_saturation_);
    return saturation_;
  }
  inline void setSaturation(double);

  bool hasSharpness() const { return has_sharpness_; }
  double sharpness() const {
    DCHECK(has_sharpness_);
    return sharpness_;
  }
  inline void setSharpness(double);

  bool hasTorch() const { return has_torch_; }
  bool torch() const {
    DCHECK(has_torch_);
    return torch_;
  }
  inline void setTorch(bool);

  bool hasVideoKind() const { return !video_kind_.IsNull(); }
  const String& videoKind() const {
    return video_kind_;
  }
  inline void setVideoKind(const String&);

  bool hasVolume() const { return has_volume_; }
  double volume() const {
    DCHECK(has_volume_);
    return volume_;
  }
  inline void setVolume(double);

  bool hasWhiteBalanceMode() const { return !white_balance_mode_.IsNull(); }
  const String& whiteBalanceMode() const {
    return white_balance_mode_;
  }
  inline void setWhiteBalanceMode(const String&);

  bool hasWidth() const { return has_width_; }
  int32_t width() const {
    DCHECK(has_width_);
    return width_;
  }
  inline void setWidth(int32_t);

  bool hasZoom() const { return has_zoom_; }
  double zoom() const {
    DCHECK(has_zoom_);
    return zoom_;
  }
  inline void setZoom(double);

  v8::Local<v8::Value> ToV8Impl(v8::Local<v8::Object>, v8::Isolate*) const override;
  void Trace(blink::Visitor*) override;

 private:
  bool has_aspect_ratio_ = false;
  bool has_auto_gain_control_ = false;
  bool has_brightness_ = false;
  bool has_channel_count_ = false;
  bool has_color_temperature_ = false;
  bool has_contrast_ = false;
  bool has_echo_cancellation_ = false;
  bool has_exposure_compensation_ = false;
  bool has_exposure_time_ = false;
  bool has_focus_distance_ = false;
  bool has_frame_rate_ = false;
  bool has_height_ = false;
  bool has_iso_ = false;
  bool has_latency_ = false;
  bool has_logical_surface_ = false;
  bool has_noise_suppression_ = false;
  bool has_points_of_interest_ = false;
  bool has_sample_rate_ = false;
  bool has_sample_size_ = false;
  bool has_saturation_ = false;
  bool has_sharpness_ = false;
  bool has_torch_ = false;
  bool has_volume_ = false;
  bool has_width_ = false;
  bool has_zoom_ = false;

  double aspect_ratio_;
  bool auto_gain_control_;
  double brightness_;
  int32_t channel_count_;
  double color_temperature_;
  double contrast_;
  String cursor_;
  String device_id_;
  String display_surface_;
  bool echo_cancellation_;
  double exposure_compensation_;
  String exposure_mode_;
  double exposure_time_;
  String facing_mode_;
  double focus_distance_;
  String focus_mode_;
  double frame_rate_;
  String group_id_;
  int32_t height_;
  double iso_;
  double latency_;
  bool logical_surface_;
  bool noise_suppression_;
  HeapVector<Member<Point2D>> points_of_interest_;
  String resize_mode_;
  int32_t sample_rate_;
  int32_t sample_size_;
  double saturation_;
  double sharpness_;
  bool torch_;
  String video_kind_;
  double volume_;
  String white_balance_mode_;
  int32_t width_;
  double zoom_;

  friend class V8MediaTrackSettings;
};

void MediaTrackSettings::setAspectRatio(double value) {
  aspect_ratio_ = value;
  has_aspect_ratio_ = true;
}

void MediaTrackSettings::setAutoGainControl(bool value) {
  auto_gain_control_ = value;
  has_auto_gain_control_ = true;
}

void MediaTrackSettings::setBrightness(double value) {
  brightness_ = value;
  has_brightness_ = true;
}

void MediaTrackSettings::setChannelCount(int32_t value) {
  channel_count_ = value;
  has_channel_count_ = true;
}

void MediaTrackSettings::setColorTemperature(double value) {
  color_temperature_ = value;
  has_color_temperature_ = true;
}

void MediaTrackSettings::setContrast(double value) {
  contrast_ = value;
  has_contrast_ = true;
}

void MediaTrackSettings::setCursor(const String& value) {
  cursor_ = value;
}

void MediaTrackSettings::setDeviceId(const String& value) {
  device_id_ = value;
}

void MediaTrackSettings::setDisplaySurface(const String& value) {
  display_surface_ = value;
}

void MediaTrackSettings::setEchoCancellation(bool value) {
  echo_cancellation_ = value;
  has_echo_cancellation_ = true;
}

void MediaTrackSettings::setExposureCompensation(double value) {
  exposure_compensation_ = value;
  has_exposure_compensation_ = true;
}

void MediaTrackSettings::setExposureMode(const String& value) {
  exposure_mode_ = value;
}

void MediaTrackSettings::setExposureTime(double value) {
  exposure_time_ = value;
  has_exposure_time_ = true;
}

void MediaTrackSettings::setFacingMode(const String& value) {
  facing_mode_ = value;
}

void MediaTrackSettings::setFocusDistance(double value) {
  focus_distance_ = value;
  has_focus_distance_ = true;
}

void MediaTrackSettings::setFocusMode(const String& value) {
  focus_mode_ = value;
}

void MediaTrackSettings::setFrameRate(double value) {
  frame_rate_ = value;
  has_frame_rate_ = true;
}

void MediaTrackSettings::setGroupId(const String& value) {
  group_id_ = value;
}

void MediaTrackSettings::setHeight(int32_t value) {
  height_ = value;
  has_height_ = true;
}

void MediaTrackSettings::setIso(double value) {
  iso_ = value;
  has_iso_ = true;
}

void MediaTrackSettings::setLatency(double value) {
  latency_ = value;
  has_latency_ = true;
}

void MediaTrackSettings::setLogicalSurface(bool value) {
  logical_surface_ = value;
  has_logical_surface_ = true;
}

void MediaTrackSettings::setNoiseSuppression(bool value) {
  noise_suppression_ = value;
  has_noise_suppression_ = true;
}

void MediaTrackSettings::setResizeMode(const String& value) {
  resize_mode_ = value;
}

void MediaTrackSettings::setSampleRate(int32_t value) {
  sample_rate_ = value;
  has_sample_rate_ = true;
}

void MediaTrackSettings::setSampleSize(int32_t value) {
  sample_size_ = value;
  has_sample_size_ = true;
}

void MediaTrackSettings::setSaturation(double value) {
  saturation_ = value;
  has_saturation_ = true;
}

void MediaTrackSettings::setSharpness(double value) {
  sharpness_ = value;
  has_sharpness_ = true;
}

void MediaTrackSettings::setTorch(bool value) {
  torch_ = value;
  has_torch_ = true;
}

void MediaTrackSettings::setVideoKind(const String& value) {
  video_kind_ = value;
}

void MediaTrackSettings::setVolume(double value) {
  volume_ = value;
  has_volume_ = true;
}

void MediaTrackSettings::setWhiteBalanceMode(const String& value) {
  white_balance_mode_ = value;
}

void MediaTrackSettings::setWidth(int32_t value) {
  width_ = value;
  has_width_ = true;
}

void MediaTrackSettings::setZoom(double value) {
  zoom_ = value;
  has_zoom_ = true;
}

}  // namespace blink

#endif  // THIRD_PARTY_BLINK_RENDERER_MODULES_MEDIASTREAM_MEDIA_TRACK_SETTINGS_H_
