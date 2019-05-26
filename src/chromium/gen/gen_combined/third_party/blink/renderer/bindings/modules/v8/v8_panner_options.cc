// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated from the Jinja2 template
// third_party/blink/renderer/bindings/templates/dictionary_v8.cc.tmpl
// by the script code_generator_v8.py.
// DO NOT MODIFY!

// clang-format off
#include "third_party/blink/renderer/bindings/modules/v8/v8_panner_options.h"

#include "base/stl_util.h"
#include "third_party/blink/renderer/bindings/core/v8/idl_types.h"
#include "third_party/blink/renderer/bindings/core/v8/native_value_traits_impl.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_audio_node_options.h"
#include "third_party/blink/renderer/platform/bindings/exception_state.h"

namespace blink {

static const v8::Eternal<v8::Name>* eternalV8PannerOptionsKeys(v8::Isolate* isolate) {
  static const char* const kKeys[] = {
    "coneInnerAngle",
    "coneOuterAngle",
    "coneOuterGain",
    "distanceModel",
    "maxDistance",
    "orientationX",
    "orientationY",
    "orientationZ",
    "panningModel",
    "positionX",
    "positionY",
    "positionZ",
    "refDistance",
    "rolloffFactor",
  };
  return V8PerIsolateData::From(isolate)->FindOrCreateEternalNameCache(
      kKeys, kKeys, base::size(kKeys));
}

void V8PannerOptions::ToImpl(v8::Isolate* isolate, v8::Local<v8::Value> v8_value, PannerOptions* impl, ExceptionState& exception_state) {
  if (IsUndefinedOrNull(v8_value)) {
    return;
  }
  if (!v8_value->IsObject()) {
    exception_state.ThrowTypeError("cannot convert to dictionary.");
    return;
  }
  v8::Local<v8::Object> v8Object = v8_value.As<v8::Object>();
  ALLOW_UNUSED_LOCAL(v8Object);

  V8AudioNodeOptions::ToImpl(isolate, v8_value, impl, exception_state);
  if (exception_state.HadException())
    return;

  const v8::Eternal<v8::Name>* keys = eternalV8PannerOptionsKeys(isolate);
  v8::TryCatch block(isolate);
  v8::Local<v8::Context> context = isolate->GetCurrentContext();
  v8::Local<v8::Value> cone_inner_angle_value;
  if (!v8Object->Get(context, keys[0].Get(isolate)).ToLocal(&cone_inner_angle_value)) {
    exception_state.RethrowV8Exception(block.Exception());
    return;
  }
  if (cone_inner_angle_value.IsEmpty() || cone_inner_angle_value->IsUndefined()) {
    // Do nothing.
  } else {
    double cone_inner_angle_cpp_value = NativeValueTraits<IDLDouble>::NativeValue(isolate, cone_inner_angle_value, exception_state);
    if (exception_state.HadException())
      return;
    impl->setConeInnerAngle(cone_inner_angle_cpp_value);
  }

  v8::Local<v8::Value> cone_outer_angle_value;
  if (!v8Object->Get(context, keys[1].Get(isolate)).ToLocal(&cone_outer_angle_value)) {
    exception_state.RethrowV8Exception(block.Exception());
    return;
  }
  if (cone_outer_angle_value.IsEmpty() || cone_outer_angle_value->IsUndefined()) {
    // Do nothing.
  } else {
    double cone_outer_angle_cpp_value = NativeValueTraits<IDLDouble>::NativeValue(isolate, cone_outer_angle_value, exception_state);
    if (exception_state.HadException())
      return;
    impl->setConeOuterAngle(cone_outer_angle_cpp_value);
  }

  v8::Local<v8::Value> cone_outer_gain_value;
  if (!v8Object->Get(context, keys[2].Get(isolate)).ToLocal(&cone_outer_gain_value)) {
    exception_state.RethrowV8Exception(block.Exception());
    return;
  }
  if (cone_outer_gain_value.IsEmpty() || cone_outer_gain_value->IsUndefined()) {
    // Do nothing.
  } else {
    double cone_outer_gain_cpp_value = NativeValueTraits<IDLDouble>::NativeValue(isolate, cone_outer_gain_value, exception_state);
    if (exception_state.HadException())
      return;
    impl->setConeOuterGain(cone_outer_gain_cpp_value);
  }

  v8::Local<v8::Value> distance_model_value;
  if (!v8Object->Get(context, keys[3].Get(isolate)).ToLocal(&distance_model_value)) {
    exception_state.RethrowV8Exception(block.Exception());
    return;
  }
  if (distance_model_value.IsEmpty() || distance_model_value->IsUndefined()) {
    // Do nothing.
  } else {
    V8StringResource<> distance_model_cpp_value = distance_model_value;
    if (!distance_model_cpp_value.Prepare(exception_state))
      return;
    const char* kValidValues[] = {
        "linear",
        "inverse",
        "exponential",
    };
    if (!IsValidEnum(distance_model_cpp_value, kValidValues, base::size(kValidValues), "DistanceModelType", exception_state))
      return;
    impl->setDistanceModel(distance_model_cpp_value);
  }

  v8::Local<v8::Value> max_distance_value;
  if (!v8Object->Get(context, keys[4].Get(isolate)).ToLocal(&max_distance_value)) {
    exception_state.RethrowV8Exception(block.Exception());
    return;
  }
  if (max_distance_value.IsEmpty() || max_distance_value->IsUndefined()) {
    // Do nothing.
  } else {
    double max_distance_cpp_value = NativeValueTraits<IDLDouble>::NativeValue(isolate, max_distance_value, exception_state);
    if (exception_state.HadException())
      return;
    impl->setMaxDistance(max_distance_cpp_value);
  }

  v8::Local<v8::Value> orientation_x_value;
  if (!v8Object->Get(context, keys[5].Get(isolate)).ToLocal(&orientation_x_value)) {
    exception_state.RethrowV8Exception(block.Exception());
    return;
  }
  if (orientation_x_value.IsEmpty() || orientation_x_value->IsUndefined()) {
    // Do nothing.
  } else {
    float orientation_x_cpp_value = NativeValueTraits<IDLFloat>::NativeValue(isolate, orientation_x_value, exception_state);
    if (exception_state.HadException())
      return;
    impl->setOrientationX(orientation_x_cpp_value);
  }

  v8::Local<v8::Value> orientation_y_value;
  if (!v8Object->Get(context, keys[6].Get(isolate)).ToLocal(&orientation_y_value)) {
    exception_state.RethrowV8Exception(block.Exception());
    return;
  }
  if (orientation_y_value.IsEmpty() || orientation_y_value->IsUndefined()) {
    // Do nothing.
  } else {
    float orientation_y_cpp_value = NativeValueTraits<IDLFloat>::NativeValue(isolate, orientation_y_value, exception_state);
    if (exception_state.HadException())
      return;
    impl->setOrientationY(orientation_y_cpp_value);
  }

  v8::Local<v8::Value> orientation_z_value;
  if (!v8Object->Get(context, keys[7].Get(isolate)).ToLocal(&orientation_z_value)) {
    exception_state.RethrowV8Exception(block.Exception());
    return;
  }
  if (orientation_z_value.IsEmpty() || orientation_z_value->IsUndefined()) {
    // Do nothing.
  } else {
    float orientation_z_cpp_value = NativeValueTraits<IDLFloat>::NativeValue(isolate, orientation_z_value, exception_state);
    if (exception_state.HadException())
      return;
    impl->setOrientationZ(orientation_z_cpp_value);
  }

  v8::Local<v8::Value> panning_model_value;
  if (!v8Object->Get(context, keys[8].Get(isolate)).ToLocal(&panning_model_value)) {
    exception_state.RethrowV8Exception(block.Exception());
    return;
  }
  if (panning_model_value.IsEmpty() || panning_model_value->IsUndefined()) {
    // Do nothing.
  } else {
    V8StringResource<> panning_model_cpp_value = panning_model_value;
    if (!panning_model_cpp_value.Prepare(exception_state))
      return;
    const char* kValidValues[] = {
        "equalpower",
        "HRTF",
    };
    if (!IsValidEnum(panning_model_cpp_value, kValidValues, base::size(kValidValues), "PanningModelType", exception_state))
      return;
    impl->setPanningModel(panning_model_cpp_value);
  }

  v8::Local<v8::Value> position_x_value;
  if (!v8Object->Get(context, keys[9].Get(isolate)).ToLocal(&position_x_value)) {
    exception_state.RethrowV8Exception(block.Exception());
    return;
  }
  if (position_x_value.IsEmpty() || position_x_value->IsUndefined()) {
    // Do nothing.
  } else {
    float position_x_cpp_value = NativeValueTraits<IDLFloat>::NativeValue(isolate, position_x_value, exception_state);
    if (exception_state.HadException())
      return;
    impl->setPositionX(position_x_cpp_value);
  }

  v8::Local<v8::Value> position_y_value;
  if (!v8Object->Get(context, keys[10].Get(isolate)).ToLocal(&position_y_value)) {
    exception_state.RethrowV8Exception(block.Exception());
    return;
  }
  if (position_y_value.IsEmpty() || position_y_value->IsUndefined()) {
    // Do nothing.
  } else {
    float position_y_cpp_value = NativeValueTraits<IDLFloat>::NativeValue(isolate, position_y_value, exception_state);
    if (exception_state.HadException())
      return;
    impl->setPositionY(position_y_cpp_value);
  }

  v8::Local<v8::Value> position_z_value;
  if (!v8Object->Get(context, keys[11].Get(isolate)).ToLocal(&position_z_value)) {
    exception_state.RethrowV8Exception(block.Exception());
    return;
  }
  if (position_z_value.IsEmpty() || position_z_value->IsUndefined()) {
    // Do nothing.
  } else {
    float position_z_cpp_value = NativeValueTraits<IDLFloat>::NativeValue(isolate, position_z_value, exception_state);
    if (exception_state.HadException())
      return;
    impl->setPositionZ(position_z_cpp_value);
  }

  v8::Local<v8::Value> ref_distance_value;
  if (!v8Object->Get(context, keys[12].Get(isolate)).ToLocal(&ref_distance_value)) {
    exception_state.RethrowV8Exception(block.Exception());
    return;
  }
  if (ref_distance_value.IsEmpty() || ref_distance_value->IsUndefined()) {
    // Do nothing.
  } else {
    double ref_distance_cpp_value = NativeValueTraits<IDLDouble>::NativeValue(isolate, ref_distance_value, exception_state);
    if (exception_state.HadException())
      return;
    impl->setRefDistance(ref_distance_cpp_value);
  }

  v8::Local<v8::Value> rolloff_factor_value;
  if (!v8Object->Get(context, keys[13].Get(isolate)).ToLocal(&rolloff_factor_value)) {
    exception_state.RethrowV8Exception(block.Exception());
    return;
  }
  if (rolloff_factor_value.IsEmpty() || rolloff_factor_value->IsUndefined()) {
    // Do nothing.
  } else {
    double rolloff_factor_cpp_value = NativeValueTraits<IDLDouble>::NativeValue(isolate, rolloff_factor_value, exception_state);
    if (exception_state.HadException())
      return;
    impl->setRolloffFactor(rolloff_factor_cpp_value);
  }
}

v8::Local<v8::Value> PannerOptions::ToV8Impl(v8::Local<v8::Object> creationContext, v8::Isolate* isolate) const {
  v8::Local<v8::Object> v8Object = v8::Object::New(isolate);
  if (!toV8PannerOptions(this, v8Object, creationContext, isolate))
    return v8::Undefined(isolate);
  return v8Object;
}

bool toV8PannerOptions(const PannerOptions* impl, v8::Local<v8::Object> dictionary, v8::Local<v8::Object> creationContext, v8::Isolate* isolate) {
  if (!toV8AudioNodeOptions(impl, dictionary, creationContext, isolate))
    return false;

  const v8::Eternal<v8::Name>* keys = eternalV8PannerOptionsKeys(isolate);
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

  v8::Local<v8::Value> cone_inner_angle_value;
  bool cone_inner_angle_has_value_or_default = false;
  if (impl->hasConeInnerAngle()) {
    cone_inner_angle_value = v8::Number::New(isolate, impl->coneInnerAngle());
    cone_inner_angle_has_value_or_default = true;
  } else {
    cone_inner_angle_value = v8::Number::New(isolate, 360);
    cone_inner_angle_has_value_or_default = true;
  }
  if (cone_inner_angle_has_value_or_default &&
      !create_property(0, cone_inner_angle_value)) {
    return false;
  }

  v8::Local<v8::Value> cone_outer_angle_value;
  bool cone_outer_angle_has_value_or_default = false;
  if (impl->hasConeOuterAngle()) {
    cone_outer_angle_value = v8::Number::New(isolate, impl->coneOuterAngle());
    cone_outer_angle_has_value_or_default = true;
  } else {
    cone_outer_angle_value = v8::Number::New(isolate, 360);
    cone_outer_angle_has_value_or_default = true;
  }
  if (cone_outer_angle_has_value_or_default &&
      !create_property(1, cone_outer_angle_value)) {
    return false;
  }

  v8::Local<v8::Value> cone_outer_gain_value;
  bool cone_outer_gain_has_value_or_default = false;
  if (impl->hasConeOuterGain()) {
    cone_outer_gain_value = v8::Number::New(isolate, impl->coneOuterGain());
    cone_outer_gain_has_value_or_default = true;
  } else {
    cone_outer_gain_value = v8::Number::New(isolate, 0);
    cone_outer_gain_has_value_or_default = true;
  }
  if (cone_outer_gain_has_value_or_default &&
      !create_property(2, cone_outer_gain_value)) {
    return false;
  }

  v8::Local<v8::Value> distance_model_value;
  bool distance_model_has_value_or_default = false;
  if (impl->hasDistanceModel()) {
    distance_model_value = V8String(isolate, impl->distanceModel());
    distance_model_has_value_or_default = true;
  } else {
    distance_model_value = V8String(isolate, "inverse");
    distance_model_has_value_or_default = true;
  }
  if (distance_model_has_value_or_default &&
      !create_property(3, distance_model_value)) {
    return false;
  }

  v8::Local<v8::Value> max_distance_value;
  bool max_distance_has_value_or_default = false;
  if (impl->hasMaxDistance()) {
    max_distance_value = v8::Number::New(isolate, impl->maxDistance());
    max_distance_has_value_or_default = true;
  } else {
    max_distance_value = v8::Number::New(isolate, 10000);
    max_distance_has_value_or_default = true;
  }
  if (max_distance_has_value_or_default &&
      !create_property(4, max_distance_value)) {
    return false;
  }

  v8::Local<v8::Value> orientation_x_value;
  bool orientation_x_has_value_or_default = false;
  if (impl->hasOrientationX()) {
    orientation_x_value = v8::Number::New(isolate, impl->orientationX());
    orientation_x_has_value_or_default = true;
  } else {
    orientation_x_value = v8::Number::New(isolate, 1);
    orientation_x_has_value_or_default = true;
  }
  if (orientation_x_has_value_or_default &&
      !create_property(5, orientation_x_value)) {
    return false;
  }

  v8::Local<v8::Value> orientation_y_value;
  bool orientation_y_has_value_or_default = false;
  if (impl->hasOrientationY()) {
    orientation_y_value = v8::Number::New(isolate, impl->orientationY());
    orientation_y_has_value_or_default = true;
  } else {
    orientation_y_value = v8::Number::New(isolate, 0);
    orientation_y_has_value_or_default = true;
  }
  if (orientation_y_has_value_or_default &&
      !create_property(6, orientation_y_value)) {
    return false;
  }

  v8::Local<v8::Value> orientation_z_value;
  bool orientation_z_has_value_or_default = false;
  if (impl->hasOrientationZ()) {
    orientation_z_value = v8::Number::New(isolate, impl->orientationZ());
    orientation_z_has_value_or_default = true;
  } else {
    orientation_z_value = v8::Number::New(isolate, 0);
    orientation_z_has_value_or_default = true;
  }
  if (orientation_z_has_value_or_default &&
      !create_property(7, orientation_z_value)) {
    return false;
  }

  v8::Local<v8::Value> panning_model_value;
  bool panning_model_has_value_or_default = false;
  if (impl->hasPanningModel()) {
    panning_model_value = V8String(isolate, impl->panningModel());
    panning_model_has_value_or_default = true;
  } else {
    panning_model_value = V8String(isolate, "equalpower");
    panning_model_has_value_or_default = true;
  }
  if (panning_model_has_value_or_default &&
      !create_property(8, panning_model_value)) {
    return false;
  }

  v8::Local<v8::Value> position_x_value;
  bool position_x_has_value_or_default = false;
  if (impl->hasPositionX()) {
    position_x_value = v8::Number::New(isolate, impl->positionX());
    position_x_has_value_or_default = true;
  } else {
    position_x_value = v8::Number::New(isolate, 0);
    position_x_has_value_or_default = true;
  }
  if (position_x_has_value_or_default &&
      !create_property(9, position_x_value)) {
    return false;
  }

  v8::Local<v8::Value> position_y_value;
  bool position_y_has_value_or_default = false;
  if (impl->hasPositionY()) {
    position_y_value = v8::Number::New(isolate, impl->positionY());
    position_y_has_value_or_default = true;
  } else {
    position_y_value = v8::Number::New(isolate, 0);
    position_y_has_value_or_default = true;
  }
  if (position_y_has_value_or_default &&
      !create_property(10, position_y_value)) {
    return false;
  }

  v8::Local<v8::Value> position_z_value;
  bool position_z_has_value_or_default = false;
  if (impl->hasPositionZ()) {
    position_z_value = v8::Number::New(isolate, impl->positionZ());
    position_z_has_value_or_default = true;
  } else {
    position_z_value = v8::Number::New(isolate, 0);
    position_z_has_value_or_default = true;
  }
  if (position_z_has_value_or_default &&
      !create_property(11, position_z_value)) {
    return false;
  }

  v8::Local<v8::Value> ref_distance_value;
  bool ref_distance_has_value_or_default = false;
  if (impl->hasRefDistance()) {
    ref_distance_value = v8::Number::New(isolate, impl->refDistance());
    ref_distance_has_value_or_default = true;
  } else {
    ref_distance_value = v8::Number::New(isolate, 1);
    ref_distance_has_value_or_default = true;
  }
  if (ref_distance_has_value_or_default &&
      !create_property(12, ref_distance_value)) {
    return false;
  }

  v8::Local<v8::Value> rolloff_factor_value;
  bool rolloff_factor_has_value_or_default = false;
  if (impl->hasRolloffFactor()) {
    rolloff_factor_value = v8::Number::New(isolate, impl->rolloffFactor());
    rolloff_factor_has_value_or_default = true;
  } else {
    rolloff_factor_value = v8::Number::New(isolate, 1);
    rolloff_factor_has_value_or_default = true;
  }
  if (rolloff_factor_has_value_or_default &&
      !create_property(13, rolloff_factor_value)) {
    return false;
  }

  return true;
}

PannerOptions* NativeValueTraits<PannerOptions>::NativeValue(v8::Isolate* isolate, v8::Local<v8::Value> value, ExceptionState& exception_state) {
  PannerOptions* impl = PannerOptions::Create();
  V8PannerOptions::ToImpl(isolate, value, impl, exception_state);
  return impl;
}

}  // namespace blink
