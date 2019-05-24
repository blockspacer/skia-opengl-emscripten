// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated from the Jinja2 template
// third_party/blink/renderer/bindings/templates/dictionary_v8.cc.tmpl
// by the script code_generator_v8.py.
// DO NOT MODIFY!

// clang-format off
#include "third_party/blink/renderer/bindings/modules/v8/v8_media_track_constraint_set.h"

#include "base/stl_util.h"
#include "third_party/blink/renderer/bindings/core/v8/dictionary.h"
#include "third_party/blink/renderer/bindings/core/v8/idl_types.h"
#include "third_party/blink/renderer/bindings/core/v8/native_value_traits_impl.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_constrain_boolean_parameters.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_constrain_dom_string_parameters.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_constrain_double_range.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_constrain_long_range.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_constrain_point_2d_parameters.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_point_2d.h"
#include "third_party/blink/renderer/platform/bindings/exception_state.h"
#include "third_party/blink/renderer/platform/runtime_enabled_features.h"

namespace blink {

static const v8::Eternal<v8::Name>* eternalV8MediaTrackConstraintSetKeys(v8::Isolate* isolate) {
  static const char* const kKeys[] = {
    "aspectRatio",
    "autoGainControl",
    "brightness",
    "channelCount",
    "colorTemperature",
    "contrast",
    "deviceId",
    "echoCancellation",
    "exposureCompensation",
    "exposureMode",
    "exposureTime",
    "facingMode",
    "focusDistance",
    "focusMode",
    "frameRate",
    "groupId",
    "height",
    "iso",
    "latency",
    "mandatory",
    "noiseSuppression",
    "optional",
    "pointsOfInterest",
    "resizeMode",
    "sampleRate",
    "sampleSize",
    "saturation",
    "sharpness",
    "torch",
    "videoKind",
    "volume",
    "whiteBalanceMode",
    "width",
    "zoom",
  };
  return V8PerIsolateData::From(isolate)->FindOrCreateEternalNameCache(
      kKeys, kKeys, base::size(kKeys));
}

void V8MediaTrackConstraintSet::ToImpl(v8::Isolate* isolate, v8::Local<v8::Value> v8_value, MediaTrackConstraintSet* impl, ExceptionState& exception_state) {
  if (IsUndefinedOrNull(v8_value)) {
    return;
  }
  if (!v8_value->IsObject()) {
    exception_state.ThrowTypeError("cannot convert to dictionary.");
    return;
  }
  v8::Local<v8::Object> v8Object = v8_value.As<v8::Object>();
  ALLOW_UNUSED_LOCAL(v8Object);

  const v8::Eternal<v8::Name>* keys = eternalV8MediaTrackConstraintSetKeys(isolate);
  v8::TryCatch block(isolate);
  v8::Local<v8::Context> context = isolate->GetCurrentContext();
  v8::Local<v8::Value> aspect_ratio_value;
  if (!v8Object->Get(context, keys[0].Get(isolate)).ToLocal(&aspect_ratio_value)) {
    exception_state.RethrowV8Exception(block.Exception());
    return;
  }
  if (aspect_ratio_value.IsEmpty() || aspect_ratio_value->IsUndefined()) {
    // Do nothing.
  } else {
    DoubleOrConstrainDoubleRange aspect_ratio_cpp_value;
    V8DoubleOrConstrainDoubleRange::ToImpl(isolate, aspect_ratio_value, aspect_ratio_cpp_value, UnionTypeConversionMode::kNotNullable, exception_state);
    if (exception_state.HadException())
      return;
    impl->setAspectRatio(aspect_ratio_cpp_value);
  }

  v8::Local<v8::Value> auto_gain_control_value;
  if (!v8Object->Get(context, keys[1].Get(isolate)).ToLocal(&auto_gain_control_value)) {
    exception_state.RethrowV8Exception(block.Exception());
    return;
  }
  if (auto_gain_control_value.IsEmpty() || auto_gain_control_value->IsUndefined()) {
    // Do nothing.
  } else {
    BooleanOrConstrainBooleanParameters auto_gain_control_cpp_value;
    V8BooleanOrConstrainBooleanParameters::ToImpl(isolate, auto_gain_control_value, auto_gain_control_cpp_value, UnionTypeConversionMode::kNotNullable, exception_state);
    if (exception_state.HadException())
      return;
    impl->setAutoGainControl(auto_gain_control_cpp_value);
  }

  v8::Local<v8::Value> brightness_value;
  if (!v8Object->Get(context, keys[2].Get(isolate)).ToLocal(&brightness_value)) {
    exception_state.RethrowV8Exception(block.Exception());
    return;
  }
  if (brightness_value.IsEmpty() || brightness_value->IsUndefined()) {
    // Do nothing.
  } else {
    DoubleOrConstrainDoubleRange brightness_cpp_value;
    V8DoubleOrConstrainDoubleRange::ToImpl(isolate, brightness_value, brightness_cpp_value, UnionTypeConversionMode::kNotNullable, exception_state);
    if (exception_state.HadException())
      return;
    impl->setBrightness(brightness_cpp_value);
  }

  v8::Local<v8::Value> channel_count_value;
  if (!v8Object->Get(context, keys[3].Get(isolate)).ToLocal(&channel_count_value)) {
    exception_state.RethrowV8Exception(block.Exception());
    return;
  }
  if (channel_count_value.IsEmpty() || channel_count_value->IsUndefined()) {
    // Do nothing.
  } else {
    LongOrConstrainLongRange channel_count_cpp_value;
    V8LongOrConstrainLongRange::ToImpl(isolate, channel_count_value, channel_count_cpp_value, UnionTypeConversionMode::kNotNullable, exception_state);
    if (exception_state.HadException())
      return;
    impl->setChannelCount(channel_count_cpp_value);
  }

  v8::Local<v8::Value> color_temperature_value;
  if (!v8Object->Get(context, keys[4].Get(isolate)).ToLocal(&color_temperature_value)) {
    exception_state.RethrowV8Exception(block.Exception());
    return;
  }
  if (color_temperature_value.IsEmpty() || color_temperature_value->IsUndefined()) {
    // Do nothing.
  } else {
    DoubleOrConstrainDoubleRange color_temperature_cpp_value;
    V8DoubleOrConstrainDoubleRange::ToImpl(isolate, color_temperature_value, color_temperature_cpp_value, UnionTypeConversionMode::kNotNullable, exception_state);
    if (exception_state.HadException())
      return;
    impl->setColorTemperature(color_temperature_cpp_value);
  }

  v8::Local<v8::Value> contrast_value;
  if (!v8Object->Get(context, keys[5].Get(isolate)).ToLocal(&contrast_value)) {
    exception_state.RethrowV8Exception(block.Exception());
    return;
  }
  if (contrast_value.IsEmpty() || contrast_value->IsUndefined()) {
    // Do nothing.
  } else {
    DoubleOrConstrainDoubleRange contrast_cpp_value;
    V8DoubleOrConstrainDoubleRange::ToImpl(isolate, contrast_value, contrast_cpp_value, UnionTypeConversionMode::kNotNullable, exception_state);
    if (exception_state.HadException())
      return;
    impl->setContrast(contrast_cpp_value);
  }

  v8::Local<v8::Value> device_id_value;
  if (!v8Object->Get(context, keys[6].Get(isolate)).ToLocal(&device_id_value)) {
    exception_state.RethrowV8Exception(block.Exception());
    return;
  }
  if (device_id_value.IsEmpty() || device_id_value->IsUndefined()) {
    // Do nothing.
  } else {
    StringOrStringSequenceOrConstrainDOMStringParameters device_id_cpp_value;
    V8StringOrStringSequenceOrConstrainDOMStringParameters::ToImpl(isolate, device_id_value, device_id_cpp_value, UnionTypeConversionMode::kNotNullable, exception_state);
    if (exception_state.HadException())
      return;
    impl->setDeviceId(device_id_cpp_value);
  }

  v8::Local<v8::Value> echo_cancellation_value;
  if (!v8Object->Get(context, keys[7].Get(isolate)).ToLocal(&echo_cancellation_value)) {
    exception_state.RethrowV8Exception(block.Exception());
    return;
  }
  if (echo_cancellation_value.IsEmpty() || echo_cancellation_value->IsUndefined()) {
    // Do nothing.
  } else {
    BooleanOrConstrainBooleanParameters echo_cancellation_cpp_value;
    V8BooleanOrConstrainBooleanParameters::ToImpl(isolate, echo_cancellation_value, echo_cancellation_cpp_value, UnionTypeConversionMode::kNotNullable, exception_state);
    if (exception_state.HadException())
      return;
    impl->setEchoCancellation(echo_cancellation_cpp_value);
  }

  v8::Local<v8::Value> exposure_compensation_value;
  if (!v8Object->Get(context, keys[8].Get(isolate)).ToLocal(&exposure_compensation_value)) {
    exception_state.RethrowV8Exception(block.Exception());
    return;
  }
  if (exposure_compensation_value.IsEmpty() || exposure_compensation_value->IsUndefined()) {
    // Do nothing.
  } else {
    DoubleOrConstrainDoubleRange exposure_compensation_cpp_value;
    V8DoubleOrConstrainDoubleRange::ToImpl(isolate, exposure_compensation_value, exposure_compensation_cpp_value, UnionTypeConversionMode::kNotNullable, exception_state);
    if (exception_state.HadException())
      return;
    impl->setExposureCompensation(exposure_compensation_cpp_value);
  }

  v8::Local<v8::Value> exposure_mode_value;
  if (!v8Object->Get(context, keys[9].Get(isolate)).ToLocal(&exposure_mode_value)) {
    exception_state.RethrowV8Exception(block.Exception());
    return;
  }
  if (exposure_mode_value.IsEmpty() || exposure_mode_value->IsUndefined()) {
    // Do nothing.
  } else {
    StringOrStringSequenceOrConstrainDOMStringParameters exposure_mode_cpp_value;
    V8StringOrStringSequenceOrConstrainDOMStringParameters::ToImpl(isolate, exposure_mode_value, exposure_mode_cpp_value, UnionTypeConversionMode::kNotNullable, exception_state);
    if (exception_state.HadException())
      return;
    impl->setExposureMode(exposure_mode_cpp_value);
  }

  v8::Local<v8::Value> exposure_time_value;
  if (!v8Object->Get(context, keys[10].Get(isolate)).ToLocal(&exposure_time_value)) {
    exception_state.RethrowV8Exception(block.Exception());
    return;
  }
  if (exposure_time_value.IsEmpty() || exposure_time_value->IsUndefined()) {
    // Do nothing.
  } else {
    DoubleOrConstrainDoubleRange exposure_time_cpp_value;
    V8DoubleOrConstrainDoubleRange::ToImpl(isolate, exposure_time_value, exposure_time_cpp_value, UnionTypeConversionMode::kNotNullable, exception_state);
    if (exception_state.HadException())
      return;
    impl->setExposureTime(exposure_time_cpp_value);
  }

  v8::Local<v8::Value> facing_mode_value;
  if (!v8Object->Get(context, keys[11].Get(isolate)).ToLocal(&facing_mode_value)) {
    exception_state.RethrowV8Exception(block.Exception());
    return;
  }
  if (facing_mode_value.IsEmpty() || facing_mode_value->IsUndefined()) {
    // Do nothing.
  } else {
    StringOrStringSequenceOrConstrainDOMStringParameters facing_mode_cpp_value;
    V8StringOrStringSequenceOrConstrainDOMStringParameters::ToImpl(isolate, facing_mode_value, facing_mode_cpp_value, UnionTypeConversionMode::kNotNullable, exception_state);
    if (exception_state.HadException())
      return;
    impl->setFacingMode(facing_mode_cpp_value);
  }

  v8::Local<v8::Value> focus_distance_value;
  if (!v8Object->Get(context, keys[12].Get(isolate)).ToLocal(&focus_distance_value)) {
    exception_state.RethrowV8Exception(block.Exception());
    return;
  }
  if (focus_distance_value.IsEmpty() || focus_distance_value->IsUndefined()) {
    // Do nothing.
  } else {
    DoubleOrConstrainDoubleRange focus_distance_cpp_value;
    V8DoubleOrConstrainDoubleRange::ToImpl(isolate, focus_distance_value, focus_distance_cpp_value, UnionTypeConversionMode::kNotNullable, exception_state);
    if (exception_state.HadException())
      return;
    impl->setFocusDistance(focus_distance_cpp_value);
  }

  v8::Local<v8::Value> focus_mode_value;
  if (!v8Object->Get(context, keys[13].Get(isolate)).ToLocal(&focus_mode_value)) {
    exception_state.RethrowV8Exception(block.Exception());
    return;
  }
  if (focus_mode_value.IsEmpty() || focus_mode_value->IsUndefined()) {
    // Do nothing.
  } else {
    StringOrStringSequenceOrConstrainDOMStringParameters focus_mode_cpp_value;
    V8StringOrStringSequenceOrConstrainDOMStringParameters::ToImpl(isolate, focus_mode_value, focus_mode_cpp_value, UnionTypeConversionMode::kNotNullable, exception_state);
    if (exception_state.HadException())
      return;
    impl->setFocusMode(focus_mode_cpp_value);
  }

  v8::Local<v8::Value> frame_rate_value;
  if (!v8Object->Get(context, keys[14].Get(isolate)).ToLocal(&frame_rate_value)) {
    exception_state.RethrowV8Exception(block.Exception());
    return;
  }
  if (frame_rate_value.IsEmpty() || frame_rate_value->IsUndefined()) {
    // Do nothing.
  } else {
    DoubleOrConstrainDoubleRange frame_rate_cpp_value;
    V8DoubleOrConstrainDoubleRange::ToImpl(isolate, frame_rate_value, frame_rate_cpp_value, UnionTypeConversionMode::kNotNullable, exception_state);
    if (exception_state.HadException())
      return;
    impl->setFrameRate(frame_rate_cpp_value);
  }

  v8::Local<v8::Value> group_id_value;
  if (!v8Object->Get(context, keys[15].Get(isolate)).ToLocal(&group_id_value)) {
    exception_state.RethrowV8Exception(block.Exception());
    return;
  }
  if (group_id_value.IsEmpty() || group_id_value->IsUndefined()) {
    // Do nothing.
  } else {
    StringOrStringSequenceOrConstrainDOMStringParameters group_id_cpp_value;
    V8StringOrStringSequenceOrConstrainDOMStringParameters::ToImpl(isolate, group_id_value, group_id_cpp_value, UnionTypeConversionMode::kNotNullable, exception_state);
    if (exception_state.HadException())
      return;
    impl->setGroupId(group_id_cpp_value);
  }

  v8::Local<v8::Value> height_value;
  if (!v8Object->Get(context, keys[16].Get(isolate)).ToLocal(&height_value)) {
    exception_state.RethrowV8Exception(block.Exception());
    return;
  }
  if (height_value.IsEmpty() || height_value->IsUndefined()) {
    // Do nothing.
  } else {
    LongOrConstrainLongRange height_cpp_value;
    V8LongOrConstrainLongRange::ToImpl(isolate, height_value, height_cpp_value, UnionTypeConversionMode::kNotNullable, exception_state);
    if (exception_state.HadException())
      return;
    impl->setHeight(height_cpp_value);
  }

  v8::Local<v8::Value> iso_value;
  if (!v8Object->Get(context, keys[17].Get(isolate)).ToLocal(&iso_value)) {
    exception_state.RethrowV8Exception(block.Exception());
    return;
  }
  if (iso_value.IsEmpty() || iso_value->IsUndefined()) {
    // Do nothing.
  } else {
    DoubleOrConstrainDoubleRange iso_cpp_value;
    V8DoubleOrConstrainDoubleRange::ToImpl(isolate, iso_value, iso_cpp_value, UnionTypeConversionMode::kNotNullable, exception_state);
    if (exception_state.HadException())
      return;
    impl->setIso(iso_cpp_value);
  }

  v8::Local<v8::Value> latency_value;
  if (!v8Object->Get(context, keys[18].Get(isolate)).ToLocal(&latency_value)) {
    exception_state.RethrowV8Exception(block.Exception());
    return;
  }
  if (latency_value.IsEmpty() || latency_value->IsUndefined()) {
    // Do nothing.
  } else {
    DoubleOrConstrainDoubleRange latency_cpp_value;
    V8DoubleOrConstrainDoubleRange::ToImpl(isolate, latency_value, latency_cpp_value, UnionTypeConversionMode::kNotNullable, exception_state);
    if (exception_state.HadException())
      return;
    impl->setLatency(latency_cpp_value);
  }

  v8::Local<v8::Value> mandatory_value;
  if (!v8Object->Get(context, keys[19].Get(isolate)).ToLocal(&mandatory_value)) {
    exception_state.RethrowV8Exception(block.Exception());
    return;
  }
  if (mandatory_value.IsEmpty() || mandatory_value->IsUndefined()) {
    // Do nothing.
  } else {
    Dictionary mandatory_cpp_value = NativeValueTraits<Dictionary>::NativeValue(isolate, mandatory_value, exception_state);
    if (exception_state.HadException())
      return;
    if (!mandatory_cpp_value.IsObject()) {
      exception_state.ThrowTypeError("member mandatory is not an object.");
      return;
    }
    impl->setMandatory(mandatory_cpp_value);
  }

  v8::Local<v8::Value> noise_suppression_value;
  if (!v8Object->Get(context, keys[20].Get(isolate)).ToLocal(&noise_suppression_value)) {
    exception_state.RethrowV8Exception(block.Exception());
    return;
  }
  if (noise_suppression_value.IsEmpty() || noise_suppression_value->IsUndefined()) {
    // Do nothing.
  } else {
    BooleanOrConstrainBooleanParameters noise_suppression_cpp_value;
    V8BooleanOrConstrainBooleanParameters::ToImpl(isolate, noise_suppression_value, noise_suppression_cpp_value, UnionTypeConversionMode::kNotNullable, exception_state);
    if (exception_state.HadException())
      return;
    impl->setNoiseSuppression(noise_suppression_cpp_value);
  }

  v8::Local<v8::Value> optional_value;
  if (!v8Object->Get(context, keys[21].Get(isolate)).ToLocal(&optional_value)) {
    exception_state.RethrowV8Exception(block.Exception());
    return;
  }
  if (optional_value.IsEmpty() || optional_value->IsUndefined()) {
    // Do nothing.
  } else {
    Vector<Dictionary> optional_cpp_value = NativeValueTraits<IDLSequence<Dictionary>>::NativeValue(isolate, optional_value, exception_state);
    if (exception_state.HadException())
      return;
    impl->setOptional(optional_cpp_value);
  }

  v8::Local<v8::Value> points_of_interest_value;
  if (!v8Object->Get(context, keys[22].Get(isolate)).ToLocal(&points_of_interest_value)) {
    exception_state.RethrowV8Exception(block.Exception());
    return;
  }
  if (points_of_interest_value.IsEmpty() || points_of_interest_value->IsUndefined()) {
    // Do nothing.
  } else {
    Point2DSequenceOrConstrainPoint2DParameters points_of_interest_cpp_value;
    V8Point2DSequenceOrConstrainPoint2DParameters::ToImpl(isolate, points_of_interest_value, points_of_interest_cpp_value, UnionTypeConversionMode::kNotNullable, exception_state);
    if (exception_state.HadException())
      return;
    impl->setPointsOfInterest(points_of_interest_cpp_value);
  }

  v8::Local<v8::Value> resize_mode_value;
  if (!v8Object->Get(context, keys[23].Get(isolate)).ToLocal(&resize_mode_value)) {
    exception_state.RethrowV8Exception(block.Exception());
    return;
  }
  if (resize_mode_value.IsEmpty() || resize_mode_value->IsUndefined()) {
    // Do nothing.
  } else {
    StringOrStringSequenceOrConstrainDOMStringParameters resize_mode_cpp_value;
    V8StringOrStringSequenceOrConstrainDOMStringParameters::ToImpl(isolate, resize_mode_value, resize_mode_cpp_value, UnionTypeConversionMode::kNotNullable, exception_state);
    if (exception_state.HadException())
      return;
    impl->setResizeMode(resize_mode_cpp_value);
  }

  v8::Local<v8::Value> sample_rate_value;
  if (!v8Object->Get(context, keys[24].Get(isolate)).ToLocal(&sample_rate_value)) {
    exception_state.RethrowV8Exception(block.Exception());
    return;
  }
  if (sample_rate_value.IsEmpty() || sample_rate_value->IsUndefined()) {
    // Do nothing.
  } else {
    LongOrConstrainLongRange sample_rate_cpp_value;
    V8LongOrConstrainLongRange::ToImpl(isolate, sample_rate_value, sample_rate_cpp_value, UnionTypeConversionMode::kNotNullable, exception_state);
    if (exception_state.HadException())
      return;
    impl->setSampleRate(sample_rate_cpp_value);
  }

  v8::Local<v8::Value> sample_size_value;
  if (!v8Object->Get(context, keys[25].Get(isolate)).ToLocal(&sample_size_value)) {
    exception_state.RethrowV8Exception(block.Exception());
    return;
  }
  if (sample_size_value.IsEmpty() || sample_size_value->IsUndefined()) {
    // Do nothing.
  } else {
    LongOrConstrainLongRange sample_size_cpp_value;
    V8LongOrConstrainLongRange::ToImpl(isolate, sample_size_value, sample_size_cpp_value, UnionTypeConversionMode::kNotNullable, exception_state);
    if (exception_state.HadException())
      return;
    impl->setSampleSize(sample_size_cpp_value);
  }

  v8::Local<v8::Value> saturation_value;
  if (!v8Object->Get(context, keys[26].Get(isolate)).ToLocal(&saturation_value)) {
    exception_state.RethrowV8Exception(block.Exception());
    return;
  }
  if (saturation_value.IsEmpty() || saturation_value->IsUndefined()) {
    // Do nothing.
  } else {
    DoubleOrConstrainDoubleRange saturation_cpp_value;
    V8DoubleOrConstrainDoubleRange::ToImpl(isolate, saturation_value, saturation_cpp_value, UnionTypeConversionMode::kNotNullable, exception_state);
    if (exception_state.HadException())
      return;
    impl->setSaturation(saturation_cpp_value);
  }

  v8::Local<v8::Value> sharpness_value;
  if (!v8Object->Get(context, keys[27].Get(isolate)).ToLocal(&sharpness_value)) {
    exception_state.RethrowV8Exception(block.Exception());
    return;
  }
  if (sharpness_value.IsEmpty() || sharpness_value->IsUndefined()) {
    // Do nothing.
  } else {
    DoubleOrConstrainDoubleRange sharpness_cpp_value;
    V8DoubleOrConstrainDoubleRange::ToImpl(isolate, sharpness_value, sharpness_cpp_value, UnionTypeConversionMode::kNotNullable, exception_state);
    if (exception_state.HadException())
      return;
    impl->setSharpness(sharpness_cpp_value);
  }

  v8::Local<v8::Value> torch_value;
  if (!v8Object->Get(context, keys[28].Get(isolate)).ToLocal(&torch_value)) {
    exception_state.RethrowV8Exception(block.Exception());
    return;
  }
  if (torch_value.IsEmpty() || torch_value->IsUndefined()) {
    // Do nothing.
  } else {
    BooleanOrConstrainBooleanParameters torch_cpp_value;
    V8BooleanOrConstrainBooleanParameters::ToImpl(isolate, torch_value, torch_cpp_value, UnionTypeConversionMode::kNotNullable, exception_state);
    if (exception_state.HadException())
      return;
    impl->setTorch(torch_cpp_value);
  }

  v8::Local<v8::Value> volume_value;
  if (!v8Object->Get(context, keys[30].Get(isolate)).ToLocal(&volume_value)) {
    exception_state.RethrowV8Exception(block.Exception());
    return;
  }
  if (volume_value.IsEmpty() || volume_value->IsUndefined()) {
    // Do nothing.
  } else {
    DoubleOrConstrainDoubleRange volume_cpp_value;
    V8DoubleOrConstrainDoubleRange::ToImpl(isolate, volume_value, volume_cpp_value, UnionTypeConversionMode::kNotNullable, exception_state);
    if (exception_state.HadException())
      return;
    impl->setVolume(volume_cpp_value);
  }

  v8::Local<v8::Value> white_balance_mode_value;
  if (!v8Object->Get(context, keys[31].Get(isolate)).ToLocal(&white_balance_mode_value)) {
    exception_state.RethrowV8Exception(block.Exception());
    return;
  }
  if (white_balance_mode_value.IsEmpty() || white_balance_mode_value->IsUndefined()) {
    // Do nothing.
  } else {
    StringOrStringSequenceOrConstrainDOMStringParameters white_balance_mode_cpp_value;
    V8StringOrStringSequenceOrConstrainDOMStringParameters::ToImpl(isolate, white_balance_mode_value, white_balance_mode_cpp_value, UnionTypeConversionMode::kNotNullable, exception_state);
    if (exception_state.HadException())
      return;
    impl->setWhiteBalanceMode(white_balance_mode_cpp_value);
  }

  v8::Local<v8::Value> width_value;
  if (!v8Object->Get(context, keys[32].Get(isolate)).ToLocal(&width_value)) {
    exception_state.RethrowV8Exception(block.Exception());
    return;
  }
  if (width_value.IsEmpty() || width_value->IsUndefined()) {
    // Do nothing.
  } else {
    LongOrConstrainLongRange width_cpp_value;
    V8LongOrConstrainLongRange::ToImpl(isolate, width_value, width_cpp_value, UnionTypeConversionMode::kNotNullable, exception_state);
    if (exception_state.HadException())
      return;
    impl->setWidth(width_cpp_value);
  }

  v8::Local<v8::Value> zoom_value;
  if (!v8Object->Get(context, keys[33].Get(isolate)).ToLocal(&zoom_value)) {
    exception_state.RethrowV8Exception(block.Exception());
    return;
  }
  if (zoom_value.IsEmpty() || zoom_value->IsUndefined()) {
    // Do nothing.
  } else {
    DoubleOrConstrainDoubleRange zoom_cpp_value;
    V8DoubleOrConstrainDoubleRange::ToImpl(isolate, zoom_value, zoom_cpp_value, UnionTypeConversionMode::kNotNullable, exception_state);
    if (exception_state.HadException())
      return;
    impl->setZoom(zoom_cpp_value);
  }

  if (RuntimeEnabledFeatures::MediaCaptureDepthVideoKindEnabled()) {
    v8::Local<v8::Value> video_kind_value;
    if (!v8Object->Get(context, keys[29].Get(isolate)).ToLocal(&video_kind_value)) {
      exception_state.RethrowV8Exception(block.Exception());
      return;
    }
    if (video_kind_value.IsEmpty() || video_kind_value->IsUndefined()) {
      // Do nothing.
    } else {
      StringOrStringSequenceOrConstrainDOMStringParameters video_kind_cpp_value;
      V8StringOrStringSequenceOrConstrainDOMStringParameters::ToImpl(isolate, video_kind_value, video_kind_cpp_value, UnionTypeConversionMode::kNotNullable, exception_state);
      if (exception_state.HadException())
        return;
      impl->setVideoKind(video_kind_cpp_value);
    }
  }
}

v8::Local<v8::Value> MediaTrackConstraintSet::ToV8Impl(v8::Local<v8::Object> creationContext, v8::Isolate* isolate) const {
  v8::Local<v8::Object> v8Object = v8::Object::New(isolate);
  if (!toV8MediaTrackConstraintSet(this, v8Object, creationContext, isolate))
    return v8::Undefined(isolate);
  return v8Object;
}

bool toV8MediaTrackConstraintSet(const MediaTrackConstraintSet* impl, v8::Local<v8::Object> dictionary, v8::Local<v8::Object> creationContext, v8::Isolate* isolate) {
  const v8::Eternal<v8::Name>* keys = eternalV8MediaTrackConstraintSetKeys(isolate);
  v8::Local<v8::Context> context = isolate->GetCurrentContext();

  auto create_property = [dictionary, context, keys, isolate](
                             size_t key_index, v8::Local<v8::Value> value) {
    bool added_property;
    v8::Local<v8::Name> key = keys[key_index].Get(isolate);
    if (!dictionary->CreateDataProperty(context, key, value)
             .To(&added_property)) {
      return false;
    }
    return added_property;
  };

  v8::Local<v8::Value> aspect_ratio_value;
  bool aspect_ratio_has_value_or_default = false;
  if (impl->hasAspectRatio()) {
    aspect_ratio_value = ToV8(impl->aspectRatio(), creationContext, isolate);
    aspect_ratio_has_value_or_default = true;
  }
  if (aspect_ratio_has_value_or_default &&
      !create_property(0, aspect_ratio_value)) {
    return false;
  }

  v8::Local<v8::Value> auto_gain_control_value;
  bool auto_gain_control_has_value_or_default = false;
  if (impl->hasAutoGainControl()) {
    auto_gain_control_value = ToV8(impl->autoGainControl(), creationContext, isolate);
    auto_gain_control_has_value_or_default = true;
  }
  if (auto_gain_control_has_value_or_default &&
      !create_property(1, auto_gain_control_value)) {
    return false;
  }

  v8::Local<v8::Value> brightness_value;
  bool brightness_has_value_or_default = false;
  if (impl->hasBrightness()) {
    brightness_value = ToV8(impl->brightness(), creationContext, isolate);
    brightness_has_value_or_default = true;
  }
  if (brightness_has_value_or_default &&
      !create_property(2, brightness_value)) {
    return false;
  }

  v8::Local<v8::Value> channel_count_value;
  bool channel_count_has_value_or_default = false;
  if (impl->hasChannelCount()) {
    channel_count_value = ToV8(impl->channelCount(), creationContext, isolate);
    channel_count_has_value_or_default = true;
  }
  if (channel_count_has_value_or_default &&
      !create_property(3, channel_count_value)) {
    return false;
  }

  v8::Local<v8::Value> color_temperature_value;
  bool color_temperature_has_value_or_default = false;
  if (impl->hasColorTemperature()) {
    color_temperature_value = ToV8(impl->colorTemperature(), creationContext, isolate);
    color_temperature_has_value_or_default = true;
  }
  if (color_temperature_has_value_or_default &&
      !create_property(4, color_temperature_value)) {
    return false;
  }

  v8::Local<v8::Value> contrast_value;
  bool contrast_has_value_or_default = false;
  if (impl->hasContrast()) {
    contrast_value = ToV8(impl->contrast(), creationContext, isolate);
    contrast_has_value_or_default = true;
  }
  if (contrast_has_value_or_default &&
      !create_property(5, contrast_value)) {
    return false;
  }

  v8::Local<v8::Value> device_id_value;
  bool device_id_has_value_or_default = false;
  if (impl->hasDeviceId()) {
    device_id_value = ToV8(impl->deviceId(), creationContext, isolate);
    device_id_has_value_or_default = true;
  }
  if (device_id_has_value_or_default &&
      !create_property(6, device_id_value)) {
    return false;
  }

  v8::Local<v8::Value> echo_cancellation_value;
  bool echo_cancellation_has_value_or_default = false;
  if (impl->hasEchoCancellation()) {
    echo_cancellation_value = ToV8(impl->echoCancellation(), creationContext, isolate);
    echo_cancellation_has_value_or_default = true;
  }
  if (echo_cancellation_has_value_or_default &&
      !create_property(7, echo_cancellation_value)) {
    return false;
  }

  v8::Local<v8::Value> exposure_compensation_value;
  bool exposure_compensation_has_value_or_default = false;
  if (impl->hasExposureCompensation()) {
    exposure_compensation_value = ToV8(impl->exposureCompensation(), creationContext, isolate);
    exposure_compensation_has_value_or_default = true;
  }
  if (exposure_compensation_has_value_or_default &&
      !create_property(8, exposure_compensation_value)) {
    return false;
  }

  v8::Local<v8::Value> exposure_mode_value;
  bool exposure_mode_has_value_or_default = false;
  if (impl->hasExposureMode()) {
    exposure_mode_value = ToV8(impl->exposureMode(), creationContext, isolate);
    exposure_mode_has_value_or_default = true;
  }
  if (exposure_mode_has_value_or_default &&
      !create_property(9, exposure_mode_value)) {
    return false;
  }

  v8::Local<v8::Value> exposure_time_value;
  bool exposure_time_has_value_or_default = false;
  if (impl->hasExposureTime()) {
    exposure_time_value = ToV8(impl->exposureTime(), creationContext, isolate);
    exposure_time_has_value_or_default = true;
  }
  if (exposure_time_has_value_or_default &&
      !create_property(10, exposure_time_value)) {
    return false;
  }

  v8::Local<v8::Value> facing_mode_value;
  bool facing_mode_has_value_or_default = false;
  if (impl->hasFacingMode()) {
    facing_mode_value = ToV8(impl->facingMode(), creationContext, isolate);
    facing_mode_has_value_or_default = true;
  }
  if (facing_mode_has_value_or_default &&
      !create_property(11, facing_mode_value)) {
    return false;
  }

  v8::Local<v8::Value> focus_distance_value;
  bool focus_distance_has_value_or_default = false;
  if (impl->hasFocusDistance()) {
    focus_distance_value = ToV8(impl->focusDistance(), creationContext, isolate);
    focus_distance_has_value_or_default = true;
  }
  if (focus_distance_has_value_or_default &&
      !create_property(12, focus_distance_value)) {
    return false;
  }

  v8::Local<v8::Value> focus_mode_value;
  bool focus_mode_has_value_or_default = false;
  if (impl->hasFocusMode()) {
    focus_mode_value = ToV8(impl->focusMode(), creationContext, isolate);
    focus_mode_has_value_or_default = true;
  }
  if (focus_mode_has_value_or_default &&
      !create_property(13, focus_mode_value)) {
    return false;
  }

  v8::Local<v8::Value> frame_rate_value;
  bool frame_rate_has_value_or_default = false;
  if (impl->hasFrameRate()) {
    frame_rate_value = ToV8(impl->frameRate(), creationContext, isolate);
    frame_rate_has_value_or_default = true;
  }
  if (frame_rate_has_value_or_default &&
      !create_property(14, frame_rate_value)) {
    return false;
  }

  v8::Local<v8::Value> group_id_value;
  bool group_id_has_value_or_default = false;
  if (impl->hasGroupId()) {
    group_id_value = ToV8(impl->groupId(), creationContext, isolate);
    group_id_has_value_or_default = true;
  }
  if (group_id_has_value_or_default &&
      !create_property(15, group_id_value)) {
    return false;
  }

  v8::Local<v8::Value> height_value;
  bool height_has_value_or_default = false;
  if (impl->hasHeight()) {
    height_value = ToV8(impl->height(), creationContext, isolate);
    height_has_value_or_default = true;
  }
  if (height_has_value_or_default &&
      !create_property(16, height_value)) {
    return false;
  }

  v8::Local<v8::Value> iso_value;
  bool iso_has_value_or_default = false;
  if (impl->hasIso()) {
    iso_value = ToV8(impl->iso(), creationContext, isolate);
    iso_has_value_or_default = true;
  }
  if (iso_has_value_or_default &&
      !create_property(17, iso_value)) {
    return false;
  }

  v8::Local<v8::Value> latency_value;
  bool latency_has_value_or_default = false;
  if (impl->hasLatency()) {
    latency_value = ToV8(impl->latency(), creationContext, isolate);
    latency_has_value_or_default = true;
  }
  if (latency_has_value_or_default &&
      !create_property(18, latency_value)) {
    return false;
  }

  v8::Local<v8::Value> mandatory_value;
  bool mandatory_has_value_or_default = false;
  if (impl->hasMandatory()) {
    DCHECK(impl->mandatory().IsObject());
    mandatory_value = impl->mandatory().V8Value();
    mandatory_has_value_or_default = true;
  }
  if (mandatory_has_value_or_default &&
      !create_property(19, mandatory_value)) {
    return false;
  }

  v8::Local<v8::Value> noise_suppression_value;
  bool noise_suppression_has_value_or_default = false;
  if (impl->hasNoiseSuppression()) {
    noise_suppression_value = ToV8(impl->noiseSuppression(), creationContext, isolate);
    noise_suppression_has_value_or_default = true;
  }
  if (noise_suppression_has_value_or_default &&
      !create_property(20, noise_suppression_value)) {
    return false;
  }

  v8::Local<v8::Value> optional_value;
  bool optional_has_value_or_default = false;
  if (impl->hasOptional()) {
    optional_value = ToV8(impl->optional(), creationContext, isolate);
    optional_has_value_or_default = true;
  }
  if (optional_has_value_or_default &&
      !create_property(21, optional_value)) {
    return false;
  }

  v8::Local<v8::Value> points_of_interest_value;
  bool points_of_interest_has_value_or_default = false;
  if (impl->hasPointsOfInterest()) {
    points_of_interest_value = ToV8(impl->pointsOfInterest(), creationContext, isolate);
    points_of_interest_has_value_or_default = true;
  }
  if (points_of_interest_has_value_or_default &&
      !create_property(22, points_of_interest_value)) {
    return false;
  }

  v8::Local<v8::Value> resize_mode_value;
  bool resize_mode_has_value_or_default = false;
  if (impl->hasResizeMode()) {
    resize_mode_value = ToV8(impl->resizeMode(), creationContext, isolate);
    resize_mode_has_value_or_default = true;
  }
  if (resize_mode_has_value_or_default &&
      !create_property(23, resize_mode_value)) {
    return false;
  }

  v8::Local<v8::Value> sample_rate_value;
  bool sample_rate_has_value_or_default = false;
  if (impl->hasSampleRate()) {
    sample_rate_value = ToV8(impl->sampleRate(), creationContext, isolate);
    sample_rate_has_value_or_default = true;
  }
  if (sample_rate_has_value_or_default &&
      !create_property(24, sample_rate_value)) {
    return false;
  }

  v8::Local<v8::Value> sample_size_value;
  bool sample_size_has_value_or_default = false;
  if (impl->hasSampleSize()) {
    sample_size_value = ToV8(impl->sampleSize(), creationContext, isolate);
    sample_size_has_value_or_default = true;
  }
  if (sample_size_has_value_or_default &&
      !create_property(25, sample_size_value)) {
    return false;
  }

  v8::Local<v8::Value> saturation_value;
  bool saturation_has_value_or_default = false;
  if (impl->hasSaturation()) {
    saturation_value = ToV8(impl->saturation(), creationContext, isolate);
    saturation_has_value_or_default = true;
  }
  if (saturation_has_value_or_default &&
      !create_property(26, saturation_value)) {
    return false;
  }

  v8::Local<v8::Value> sharpness_value;
  bool sharpness_has_value_or_default = false;
  if (impl->hasSharpness()) {
    sharpness_value = ToV8(impl->sharpness(), creationContext, isolate);
    sharpness_has_value_or_default = true;
  }
  if (sharpness_has_value_or_default &&
      !create_property(27, sharpness_value)) {
    return false;
  }

  v8::Local<v8::Value> torch_value;
  bool torch_has_value_or_default = false;
  if (impl->hasTorch()) {
    torch_value = ToV8(impl->torch(), creationContext, isolate);
    torch_has_value_or_default = true;
  }
  if (torch_has_value_or_default &&
      !create_property(28, torch_value)) {
    return false;
  }

  v8::Local<v8::Value> volume_value;
  bool volume_has_value_or_default = false;
  if (impl->hasVolume()) {
    volume_value = ToV8(impl->volume(), creationContext, isolate);
    volume_has_value_or_default = true;
  }
  if (volume_has_value_or_default &&
      !create_property(30, volume_value)) {
    return false;
  }

  v8::Local<v8::Value> white_balance_mode_value;
  bool white_balance_mode_has_value_or_default = false;
  if (impl->hasWhiteBalanceMode()) {
    white_balance_mode_value = ToV8(impl->whiteBalanceMode(), creationContext, isolate);
    white_balance_mode_has_value_or_default = true;
  }
  if (white_balance_mode_has_value_or_default &&
      !create_property(31, white_balance_mode_value)) {
    return false;
  }

  v8::Local<v8::Value> width_value;
  bool width_has_value_or_default = false;
  if (impl->hasWidth()) {
    width_value = ToV8(impl->width(), creationContext, isolate);
    width_has_value_or_default = true;
  }
  if (width_has_value_or_default &&
      !create_property(32, width_value)) {
    return false;
  }

  v8::Local<v8::Value> zoom_value;
  bool zoom_has_value_or_default = false;
  if (impl->hasZoom()) {
    zoom_value = ToV8(impl->zoom(), creationContext, isolate);
    zoom_has_value_or_default = true;
  }
  if (zoom_has_value_or_default &&
      !create_property(33, zoom_value)) {
    return false;
  }

  if (RuntimeEnabledFeatures::MediaCaptureDepthVideoKindEnabled()) {
    v8::Local<v8::Value> video_kind_value;
    bool video_kind_has_value_or_default = false;
    if (impl->hasVideoKind()) {
      video_kind_value = ToV8(impl->videoKind(), creationContext, isolate);
      video_kind_has_value_or_default = true;
    }
    if (video_kind_has_value_or_default &&
        !create_property(29, video_kind_value)) {
      return false;
    }
  }

  return true;
}

MediaTrackConstraintSet* NativeValueTraits<MediaTrackConstraintSet>::NativeValue(v8::Isolate* isolate, v8::Local<v8::Value> value, ExceptionState& exception_state) {
  MediaTrackConstraintSet* impl = MediaTrackConstraintSet::Create();
  V8MediaTrackConstraintSet::ToImpl(isolate, value, impl, exception_state);
  return impl;
}

}  // namespace blink
