// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated from the Jinja2 template
// third_party/blink/renderer/bindings/templates/dictionary_impl.h.tmpl
// by the script code_generator_v8.py.
// DO NOT MODIFY!

// clang-format off
#ifndef THIRD_PARTY_BLINK_RENDERER_MODULES_MEDIASTREAM_MEDIA_TRACK_CONSTRAINT_SET_H_
#define THIRD_PARTY_BLINK_RENDERER_MODULES_MEDIASTREAM_MEDIA_TRACK_CONSTRAINT_SET_H_

#include "third_party/blink/renderer/bindings/core/v8/dictionary.h"
#include "third_party/blink/renderer/bindings/core/v8/idl_dictionary_base.h"
#include "third_party/blink/renderer/bindings/modules/v8/boolean_or_constrain_boolean_parameters.h"
#include "third_party/blink/renderer/bindings/modules/v8/double_or_constrain_double_range.h"
#include "third_party/blink/renderer/bindings/modules/v8/long_or_constrain_long_range.h"
#include "third_party/blink/renderer/bindings/modules/v8/point_2d_sequence_or_constrain_point_2d_parameters.h"
#include "third_party/blink/renderer/bindings/modules/v8/string_or_string_sequence_or_constrain_dom_string_parameters.h"
#include "third_party/blink/renderer/modules/imagecapture/constrain_point_2d_parameters.h"
#include "third_party/blink/renderer/modules/imagecapture/point_2d.h"
#include "third_party/blink/renderer/modules/mediastream/constrain_boolean_parameters.h"
#include "third_party/blink/renderer/modules/mediastream/constrain_dom_string_parameters.h"
#include "third_party/blink/renderer/modules/mediastream/constrain_double_range.h"
#include "third_party/blink/renderer/modules/mediastream/constrain_long_range.h"
#include "third_party/blink/renderer/modules/modules_export.h"
#include "third_party/blink/renderer/platform/heap/handle.h"
#include "third_party/blink/renderer/platform/wtf/text/wtf_string.h"
#include "third_party/blink/renderer/platform/wtf/vector.h"

namespace blink {

class MODULES_EXPORT MediaTrackConstraintSet : public IDLDictionaryBase {
 public:
  static MediaTrackConstraintSet* Create() { return MakeGarbageCollected<MediaTrackConstraintSet>(); }

  MediaTrackConstraintSet();
  virtual ~MediaTrackConstraintSet();

  bool hasAspectRatio() const { return !aspect_ratio_.IsNull(); }
  const DoubleOrConstrainDoubleRange& aspectRatio() const {
    return aspect_ratio_;
  }
  void setAspectRatio(const DoubleOrConstrainDoubleRange&);

  bool hasAutoGainControl() const { return !auto_gain_control_.IsNull(); }
  const BooleanOrConstrainBooleanParameters& autoGainControl() const {
    return auto_gain_control_;
  }
  void setAutoGainControl(const BooleanOrConstrainBooleanParameters&);

  bool hasBrightness() const { return !brightness_.IsNull(); }
  const DoubleOrConstrainDoubleRange& brightness() const {
    return brightness_;
  }
  void setBrightness(const DoubleOrConstrainDoubleRange&);

  bool hasChannelCount() const { return !channel_count_.IsNull(); }
  const LongOrConstrainLongRange& channelCount() const {
    return channel_count_;
  }
  void setChannelCount(const LongOrConstrainLongRange&);

  bool hasColorTemperature() const { return !color_temperature_.IsNull(); }
  const DoubleOrConstrainDoubleRange& colorTemperature() const {
    return color_temperature_;
  }
  void setColorTemperature(const DoubleOrConstrainDoubleRange&);

  bool hasContrast() const { return !contrast_.IsNull(); }
  const DoubleOrConstrainDoubleRange& contrast() const {
    return contrast_;
  }
  void setContrast(const DoubleOrConstrainDoubleRange&);

  bool hasDeviceId() const { return !device_id_.IsNull(); }
  const StringOrStringSequenceOrConstrainDOMStringParameters& deviceId() const {
    return device_id_;
  }
  void setDeviceId(const StringOrStringSequenceOrConstrainDOMStringParameters&);

  bool hasEchoCancellation() const { return !echo_cancellation_.IsNull(); }
  const BooleanOrConstrainBooleanParameters& echoCancellation() const {
    return echo_cancellation_;
  }
  void setEchoCancellation(const BooleanOrConstrainBooleanParameters&);

  bool hasExposureCompensation() const { return !exposure_compensation_.IsNull(); }
  const DoubleOrConstrainDoubleRange& exposureCompensation() const {
    return exposure_compensation_;
  }
  void setExposureCompensation(const DoubleOrConstrainDoubleRange&);

  bool hasExposureMode() const { return !exposure_mode_.IsNull(); }
  const StringOrStringSequenceOrConstrainDOMStringParameters& exposureMode() const {
    return exposure_mode_;
  }
  void setExposureMode(const StringOrStringSequenceOrConstrainDOMStringParameters&);

  bool hasExposureTime() const { return !exposure_time_.IsNull(); }
  const DoubleOrConstrainDoubleRange& exposureTime() const {
    return exposure_time_;
  }
  void setExposureTime(const DoubleOrConstrainDoubleRange&);

  bool hasFacingMode() const { return !facing_mode_.IsNull(); }
  const StringOrStringSequenceOrConstrainDOMStringParameters& facingMode() const {
    return facing_mode_;
  }
  void setFacingMode(const StringOrStringSequenceOrConstrainDOMStringParameters&);

  bool hasFocusDistance() const { return !focus_distance_.IsNull(); }
  const DoubleOrConstrainDoubleRange& focusDistance() const {
    return focus_distance_;
  }
  void setFocusDistance(const DoubleOrConstrainDoubleRange&);

  bool hasFocusMode() const { return !focus_mode_.IsNull(); }
  const StringOrStringSequenceOrConstrainDOMStringParameters& focusMode() const {
    return focus_mode_;
  }
  void setFocusMode(const StringOrStringSequenceOrConstrainDOMStringParameters&);

  bool hasFrameRate() const { return !frame_rate_.IsNull(); }
  const DoubleOrConstrainDoubleRange& frameRate() const {
    return frame_rate_;
  }
  void setFrameRate(const DoubleOrConstrainDoubleRange&);

  bool hasGroupId() const { return !group_id_.IsNull(); }
  const StringOrStringSequenceOrConstrainDOMStringParameters& groupId() const {
    return group_id_;
  }
  void setGroupId(const StringOrStringSequenceOrConstrainDOMStringParameters&);

  bool hasHeight() const { return !height_.IsNull(); }
  const LongOrConstrainLongRange& height() const {
    return height_;
  }
  void setHeight(const LongOrConstrainLongRange&);

  bool hasIso() const { return !iso_.IsNull(); }
  const DoubleOrConstrainDoubleRange& iso() const {
    return iso_;
  }
  void setIso(const DoubleOrConstrainDoubleRange&);

  bool hasLatency() const { return !latency_.IsNull(); }
  const DoubleOrConstrainDoubleRange& latency() const {
    return latency_;
  }
  void setLatency(const DoubleOrConstrainDoubleRange&);

  bool hasMandatory() const { return !mandatory_.IsUndefinedOrNull(); }
  Dictionary mandatory() const {
    return mandatory_;
  }
  void setMandatory(Dictionary);

  bool hasNoiseSuppression() const { return !noise_suppression_.IsNull(); }
  const BooleanOrConstrainBooleanParameters& noiseSuppression() const {
    return noise_suppression_;
  }
  void setNoiseSuppression(const BooleanOrConstrainBooleanParameters&);

  bool hasOptional() const { return has_optional_; }
  const Vector<Dictionary>& optional() const {
    DCHECK(has_optional_);
    return optional_;
  }
  void setOptional(const Vector<Dictionary>&);

  bool hasPointsOfInterest() const { return !points_of_interest_.IsNull(); }
  const Point2DSequenceOrConstrainPoint2DParameters& pointsOfInterest() const {
    return points_of_interest_;
  }
  void setPointsOfInterest(const Point2DSequenceOrConstrainPoint2DParameters&);

  bool hasResizeMode() const { return !resize_mode_.IsNull(); }
  const StringOrStringSequenceOrConstrainDOMStringParameters& resizeMode() const {
    return resize_mode_;
  }
  void setResizeMode(const StringOrStringSequenceOrConstrainDOMStringParameters&);

  bool hasSampleRate() const { return !sample_rate_.IsNull(); }
  const LongOrConstrainLongRange& sampleRate() const {
    return sample_rate_;
  }
  void setSampleRate(const LongOrConstrainLongRange&);

  bool hasSampleSize() const { return !sample_size_.IsNull(); }
  const LongOrConstrainLongRange& sampleSize() const {
    return sample_size_;
  }
  void setSampleSize(const LongOrConstrainLongRange&);

  bool hasSaturation() const { return !saturation_.IsNull(); }
  const DoubleOrConstrainDoubleRange& saturation() const {
    return saturation_;
  }
  void setSaturation(const DoubleOrConstrainDoubleRange&);

  bool hasSharpness() const { return !sharpness_.IsNull(); }
  const DoubleOrConstrainDoubleRange& sharpness() const {
    return sharpness_;
  }
  void setSharpness(const DoubleOrConstrainDoubleRange&);

  bool hasTorch() const { return !torch_.IsNull(); }
  const BooleanOrConstrainBooleanParameters& torch() const {
    return torch_;
  }
  void setTorch(const BooleanOrConstrainBooleanParameters&);

  bool hasVideoKind() const { return !video_kind_.IsNull(); }
  const StringOrStringSequenceOrConstrainDOMStringParameters& videoKind() const {
    return video_kind_;
  }
  void setVideoKind(const StringOrStringSequenceOrConstrainDOMStringParameters&);

  bool hasVolume() const { return !volume_.IsNull(); }
  const DoubleOrConstrainDoubleRange& volume() const {
    return volume_;
  }
  void setVolume(const DoubleOrConstrainDoubleRange&);

  bool hasWhiteBalanceMode() const { return !white_balance_mode_.IsNull(); }
  const StringOrStringSequenceOrConstrainDOMStringParameters& whiteBalanceMode() const {
    return white_balance_mode_;
  }
  void setWhiteBalanceMode(const StringOrStringSequenceOrConstrainDOMStringParameters&);

  bool hasWidth() const { return !width_.IsNull(); }
  const LongOrConstrainLongRange& width() const {
    return width_;
  }
  void setWidth(const LongOrConstrainLongRange&);

  bool hasZoom() const { return !zoom_.IsNull(); }
  const DoubleOrConstrainDoubleRange& zoom() const {
    return zoom_;
  }
  void setZoom(const DoubleOrConstrainDoubleRange&);

  v8::Local<v8::Value> ToV8Impl(v8::Local<v8::Object>, v8::Isolate*) const override;
  void Trace(blink::Visitor*) override;

 private:
  bool has_optional_ = false;

  DoubleOrConstrainDoubleRange aspect_ratio_;
  BooleanOrConstrainBooleanParameters auto_gain_control_;
  DoubleOrConstrainDoubleRange brightness_;
  LongOrConstrainLongRange channel_count_;
  DoubleOrConstrainDoubleRange color_temperature_;
  DoubleOrConstrainDoubleRange contrast_;
  StringOrStringSequenceOrConstrainDOMStringParameters device_id_;
  BooleanOrConstrainBooleanParameters echo_cancellation_;
  DoubleOrConstrainDoubleRange exposure_compensation_;
  StringOrStringSequenceOrConstrainDOMStringParameters exposure_mode_;
  DoubleOrConstrainDoubleRange exposure_time_;
  StringOrStringSequenceOrConstrainDOMStringParameters facing_mode_;
  DoubleOrConstrainDoubleRange focus_distance_;
  StringOrStringSequenceOrConstrainDOMStringParameters focus_mode_;
  DoubleOrConstrainDoubleRange frame_rate_;
  StringOrStringSequenceOrConstrainDOMStringParameters group_id_;
  LongOrConstrainLongRange height_;
  DoubleOrConstrainDoubleRange iso_;
  DoubleOrConstrainDoubleRange latency_;
  Dictionary mandatory_;
  BooleanOrConstrainBooleanParameters noise_suppression_;
  Vector<Dictionary> optional_;
  Point2DSequenceOrConstrainPoint2DParameters points_of_interest_;
  StringOrStringSequenceOrConstrainDOMStringParameters resize_mode_;
  LongOrConstrainLongRange sample_rate_;
  LongOrConstrainLongRange sample_size_;
  DoubleOrConstrainDoubleRange saturation_;
  DoubleOrConstrainDoubleRange sharpness_;
  BooleanOrConstrainBooleanParameters torch_;
  StringOrStringSequenceOrConstrainDOMStringParameters video_kind_;
  DoubleOrConstrainDoubleRange volume_;
  StringOrStringSequenceOrConstrainDOMStringParameters white_balance_mode_;
  LongOrConstrainLongRange width_;
  DoubleOrConstrainDoubleRange zoom_;

  friend class V8MediaTrackConstraintSet;
};

}  // namespace blink

#endif  // THIRD_PARTY_BLINK_RENDERER_MODULES_MEDIASTREAM_MEDIA_TRACK_CONSTRAINT_SET_H_
