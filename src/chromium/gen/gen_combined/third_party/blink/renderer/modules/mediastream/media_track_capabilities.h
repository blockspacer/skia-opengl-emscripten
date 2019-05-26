// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated from the Jinja2 template
// third_party/blink/renderer/bindings/templates/dictionary_impl.h.tmpl
// by the script code_generator_v8.py.
// DO NOT MODIFY!

// clang-format off
#ifndef THIRD_PARTY_BLINK_RENDERER_MODULES_MEDIASTREAM_MEDIA_TRACK_CAPABILITIES_H_
#define THIRD_PARTY_BLINK_RENDERER_MODULES_MEDIASTREAM_MEDIA_TRACK_CAPABILITIES_H_

#include "third_party/blink/renderer/bindings/core/v8/idl_dictionary_base.h"
#include "third_party/blink/renderer/modules/mediastream/double_range.h"
#include "third_party/blink/renderer/modules/mediastream/long_range.h"
#include "third_party/blink/renderer/modules/modules_export.h"
#include "third_party/blink/renderer/platform/heap/handle.h"
#include "third_party/blink/renderer/platform/wtf/text/wtf_string.h"
#include "third_party/blink/renderer/platform/wtf/vector.h"

namespace blink {

class MediaSettingsRange;

class MODULES_EXPORT MediaTrackCapabilities : public IDLDictionaryBase {
 public:
  static MediaTrackCapabilities* Create() { return MakeGarbageCollected<MediaTrackCapabilities>(); }

  MediaTrackCapabilities();
  virtual ~MediaTrackCapabilities();

  bool hasAspectRatio() const { return aspect_ratio_; }
  DoubleRange* aspectRatio() const {
    return aspect_ratio_;
  }
  void setAspectRatio(DoubleRange*);

  bool hasAutoGainControl() const { return has_auto_gain_control_; }
  const Vector<bool>& autoGainControl() const {
    DCHECK(has_auto_gain_control_);
    return auto_gain_control_;
  }
  void setAutoGainControl(const Vector<bool>&);

  bool hasBrightness() const { return brightness_; }
  MediaSettingsRange* brightness() const {
    return brightness_;
  }
  inline void setBrightness(MediaSettingsRange*);

  bool hasChannelCount() const { return channel_count_; }
  LongRange* channelCount() const {
    return channel_count_;
  }
  void setChannelCount(LongRange*);

  bool hasColorTemperature() const { return color_temperature_; }
  MediaSettingsRange* colorTemperature() const {
    return color_temperature_;
  }
  inline void setColorTemperature(MediaSettingsRange*);

  bool hasContrast() const { return contrast_; }
  MediaSettingsRange* contrast() const {
    return contrast_;
  }
  inline void setContrast(MediaSettingsRange*);

  bool hasDeviceId() const { return !device_id_.IsNull(); }
  const String& deviceId() const {
    return device_id_;
  }
  inline void setDeviceId(const String&);

  bool hasEchoCancellation() const { return has_echo_cancellation_; }
  const Vector<bool>& echoCancellation() const {
    DCHECK(has_echo_cancellation_);
    return echo_cancellation_;
  }
  void setEchoCancellation(const Vector<bool>&);

  bool hasExposureCompensation() const { return exposure_compensation_; }
  MediaSettingsRange* exposureCompensation() const {
    return exposure_compensation_;
  }
  inline void setExposureCompensation(MediaSettingsRange*);

  bool hasExposureMode() const { return has_exposure_mode_; }
  const Vector<String>& exposureMode() const {
    DCHECK(has_exposure_mode_);
    return exposure_mode_;
  }
  void setExposureMode(const Vector<String>&);

  bool hasExposureTime() const { return exposure_time_; }
  MediaSettingsRange* exposureTime() const {
    return exposure_time_;
  }
  inline void setExposureTime(MediaSettingsRange*);

  bool hasFacingMode() const { return has_facing_mode_; }
  const Vector<String>& facingMode() const {
    DCHECK(has_facing_mode_);
    return facing_mode_;
  }
  void setFacingMode(const Vector<String>&);

  bool hasFocusDistance() const { return focus_distance_; }
  MediaSettingsRange* focusDistance() const {
    return focus_distance_;
  }
  inline void setFocusDistance(MediaSettingsRange*);

  bool hasFocusMode() const { return has_focus_mode_; }
  const Vector<String>& focusMode() const {
    DCHECK(has_focus_mode_);
    return focus_mode_;
  }
  void setFocusMode(const Vector<String>&);

  bool hasFrameRate() const { return frame_rate_; }
  DoubleRange* frameRate() const {
    return frame_rate_;
  }
  void setFrameRate(DoubleRange*);

  bool hasGroupId() const { return !group_id_.IsNull(); }
  const String& groupId() const {
    return group_id_;
  }
  inline void setGroupId(const String&);

  bool hasHeight() const { return height_; }
  LongRange* height() const {
    return height_;
  }
  void setHeight(LongRange*);

  bool hasIso() const { return iso_; }
  MediaSettingsRange* iso() const {
    return iso_;
  }
  inline void setIso(MediaSettingsRange*);

  bool hasLatency() const { return latency_; }
  DoubleRange* latency() const {
    return latency_;
  }
  void setLatency(DoubleRange*);

  bool hasNoiseSuppression() const { return has_noise_suppression_; }
  const Vector<bool>& noiseSuppression() const {
    DCHECK(has_noise_suppression_);
    return noise_suppression_;
  }
  void setNoiseSuppression(const Vector<bool>&);

  bool hasResizeMode() const { return has_resize_mode_; }
  const Vector<String>& resizeMode() const {
    DCHECK(has_resize_mode_);
    return resize_mode_;
  }
  void setResizeMode(const Vector<String>&);

  bool hasSampleRate() const { return sample_rate_; }
  LongRange* sampleRate() const {
    return sample_rate_;
  }
  void setSampleRate(LongRange*);

  bool hasSampleSize() const { return sample_size_; }
  LongRange* sampleSize() const {
    return sample_size_;
  }
  void setSampleSize(LongRange*);

  bool hasSaturation() const { return saturation_; }
  MediaSettingsRange* saturation() const {
    return saturation_;
  }
  inline void setSaturation(MediaSettingsRange*);

  bool hasSharpness() const { return sharpness_; }
  MediaSettingsRange* sharpness() const {
    return sharpness_;
  }
  inline void setSharpness(MediaSettingsRange*);

  bool hasTorch() const { return has_torch_; }
  bool torch() const {
    DCHECK(has_torch_);
    return torch_;
  }
  inline void setTorch(bool);

  bool hasWhiteBalanceMode() const { return has_white_balance_mode_; }
  const Vector<String>& whiteBalanceMode() const {
    DCHECK(has_white_balance_mode_);
    return white_balance_mode_;
  }
  void setWhiteBalanceMode(const Vector<String>&);

  bool hasWidth() const { return width_; }
  LongRange* width() const {
    return width_;
  }
  void setWidth(LongRange*);

  bool hasZoom() const { return zoom_; }
  MediaSettingsRange* zoom() const {
    return zoom_;
  }
  inline void setZoom(MediaSettingsRange*);

  v8::Local<v8::Value> ToV8Impl(v8::Local<v8::Object>, v8::Isolate*) const override;
  void Trace(blink::Visitor*) override;

 private:
  bool has_auto_gain_control_ = false;
  bool has_echo_cancellation_ = false;
  bool has_exposure_mode_ = false;
  bool has_facing_mode_ = false;
  bool has_focus_mode_ = false;
  bool has_noise_suppression_ = false;
  bool has_resize_mode_ = false;
  bool has_torch_ = false;
  bool has_white_balance_mode_ = false;

  Member<DoubleRange> aspect_ratio_;
  Vector<bool> auto_gain_control_;
  Member<MediaSettingsRange> brightness_;
  Member<LongRange> channel_count_;
  Member<MediaSettingsRange> color_temperature_;
  Member<MediaSettingsRange> contrast_;
  String device_id_;
  Vector<bool> echo_cancellation_;
  Member<MediaSettingsRange> exposure_compensation_;
  Vector<String> exposure_mode_;
  Member<MediaSettingsRange> exposure_time_;
  Vector<String> facing_mode_;
  Member<MediaSettingsRange> focus_distance_;
  Vector<String> focus_mode_;
  Member<DoubleRange> frame_rate_;
  String group_id_;
  Member<LongRange> height_;
  Member<MediaSettingsRange> iso_;
  Member<DoubleRange> latency_;
  Vector<bool> noise_suppression_;
  Vector<String> resize_mode_;
  Member<LongRange> sample_rate_;
  Member<LongRange> sample_size_;
  Member<MediaSettingsRange> saturation_;
  Member<MediaSettingsRange> sharpness_;
  bool torch_;
  Vector<String> white_balance_mode_;
  Member<LongRange> width_;
  Member<MediaSettingsRange> zoom_;

  friend class V8MediaTrackCapabilities;
};

void MediaTrackCapabilities::setBrightness(MediaSettingsRange* value) {
  brightness_ = value;
}

void MediaTrackCapabilities::setColorTemperature(MediaSettingsRange* value) {
  color_temperature_ = value;
}

void MediaTrackCapabilities::setContrast(MediaSettingsRange* value) {
  contrast_ = value;
}

void MediaTrackCapabilities::setDeviceId(const String& value) {
  device_id_ = value;
}

void MediaTrackCapabilities::setExposureCompensation(MediaSettingsRange* value) {
  exposure_compensation_ = value;
}

void MediaTrackCapabilities::setExposureTime(MediaSettingsRange* value) {
  exposure_time_ = value;
}

void MediaTrackCapabilities::setFocusDistance(MediaSettingsRange* value) {
  focus_distance_ = value;
}

void MediaTrackCapabilities::setGroupId(const String& value) {
  group_id_ = value;
}

void MediaTrackCapabilities::setIso(MediaSettingsRange* value) {
  iso_ = value;
}

void MediaTrackCapabilities::setSaturation(MediaSettingsRange* value) {
  saturation_ = value;
}

void MediaTrackCapabilities::setSharpness(MediaSettingsRange* value) {
  sharpness_ = value;
}

void MediaTrackCapabilities::setTorch(bool value) {
  torch_ = value;
  has_torch_ = true;
}

void MediaTrackCapabilities::setZoom(MediaSettingsRange* value) {
  zoom_ = value;
}

}  // namespace blink

#endif  // THIRD_PARTY_BLINK_RENDERER_MODULES_MEDIASTREAM_MEDIA_TRACK_CAPABILITIES_H_
