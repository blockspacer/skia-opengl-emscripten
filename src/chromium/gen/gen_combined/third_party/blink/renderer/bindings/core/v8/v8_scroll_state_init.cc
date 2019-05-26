// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated from the Jinja2 template
// third_party/blink/renderer/bindings/templates/dictionary_v8.cc.tmpl
// by the script code_generator_v8.py.
// DO NOT MODIFY!

// clang-format off
#include "third_party/blink/renderer/bindings/core/v8/v8_scroll_state_init.h"

#include "base/stl_util.h"
#include "third_party/blink/renderer/bindings/core/v8/idl_types.h"
#include "third_party/blink/renderer/bindings/core/v8/native_value_traits_impl.h"
#include "third_party/blink/renderer/platform/bindings/exception_state.h"

namespace blink {

static const v8::Eternal<v8::Name>* eternalV8ScrollStateInitKeys(v8::Isolate* isolate) {
  static const char* const kKeys[] = {
    "deltaGranularity",
    "deltaX",
    "deltaXHint",
    "deltaY",
    "deltaYHint",
    "fromUserInput",
    "isBeginning",
    "isDirectManipulation",
    "isEnding",
    "isInInertialPhase",
    "positionX",
    "positionY",
    "shouldPropagate",
    "velocityX",
    "velocityY",
  };
  return V8PerIsolateData::From(isolate)->FindOrCreateEternalNameCache(
      kKeys, kKeys, base::size(kKeys));
}

void V8ScrollStateInit::ToImpl(v8::Isolate* isolate, v8::Local<v8::Value> v8_value, ScrollStateInit* impl, ExceptionState& exception_state) {
  if (IsUndefinedOrNull(v8_value)) {
    return;
  }
  if (!v8_value->IsObject()) {
    exception_state.ThrowTypeError("cannot convert to dictionary.");
    return;
  }
  v8::Local<v8::Object> v8Object = v8_value.As<v8::Object>();
  ALLOW_UNUSED_LOCAL(v8Object);

  const v8::Eternal<v8::Name>* keys = eternalV8ScrollStateInitKeys(isolate);
  v8::TryCatch block(isolate);
  v8::Local<v8::Context> context = isolate->GetCurrentContext();
  v8::Local<v8::Value> delta_granularity_value;
  if (!v8Object->Get(context, keys[0].Get(isolate)).ToLocal(&delta_granularity_value)) {
    exception_state.RethrowV8Exception(block.Exception());
    return;
  }
  if (delta_granularity_value.IsEmpty() || delta_granularity_value->IsUndefined()) {
    // Do nothing.
  } else {
    double delta_granularity_cpp_value = NativeValueTraits<IDLDouble>::NativeValue(isolate, delta_granularity_value, exception_state);
    if (exception_state.HadException())
      return;
    impl->setDeltaGranularity(delta_granularity_cpp_value);
  }

  v8::Local<v8::Value> delta_x_value;
  if (!v8Object->Get(context, keys[1].Get(isolate)).ToLocal(&delta_x_value)) {
    exception_state.RethrowV8Exception(block.Exception());
    return;
  }
  if (delta_x_value.IsEmpty() || delta_x_value->IsUndefined()) {
    // Do nothing.
  } else {
    double delta_x_cpp_value = NativeValueTraits<IDLDouble>::NativeValue(isolate, delta_x_value, exception_state);
    if (exception_state.HadException())
      return;
    impl->setDeltaX(delta_x_cpp_value);
  }

  v8::Local<v8::Value> delta_x_hint_value;
  if (!v8Object->Get(context, keys[2].Get(isolate)).ToLocal(&delta_x_hint_value)) {
    exception_state.RethrowV8Exception(block.Exception());
    return;
  }
  if (delta_x_hint_value.IsEmpty() || delta_x_hint_value->IsUndefined()) {
    // Do nothing.
  } else {
    double delta_x_hint_cpp_value = NativeValueTraits<IDLDouble>::NativeValue(isolate, delta_x_hint_value, exception_state);
    if (exception_state.HadException())
      return;
    impl->setDeltaXHint(delta_x_hint_cpp_value);
  }

  v8::Local<v8::Value> delta_y_value;
  if (!v8Object->Get(context, keys[3].Get(isolate)).ToLocal(&delta_y_value)) {
    exception_state.RethrowV8Exception(block.Exception());
    return;
  }
  if (delta_y_value.IsEmpty() || delta_y_value->IsUndefined()) {
    // Do nothing.
  } else {
    double delta_y_cpp_value = NativeValueTraits<IDLDouble>::NativeValue(isolate, delta_y_value, exception_state);
    if (exception_state.HadException())
      return;
    impl->setDeltaY(delta_y_cpp_value);
  }

  v8::Local<v8::Value> delta_y_hint_value;
  if (!v8Object->Get(context, keys[4].Get(isolate)).ToLocal(&delta_y_hint_value)) {
    exception_state.RethrowV8Exception(block.Exception());
    return;
  }
  if (delta_y_hint_value.IsEmpty() || delta_y_hint_value->IsUndefined()) {
    // Do nothing.
  } else {
    double delta_y_hint_cpp_value = NativeValueTraits<IDLDouble>::NativeValue(isolate, delta_y_hint_value, exception_state);
    if (exception_state.HadException())
      return;
    impl->setDeltaYHint(delta_y_hint_cpp_value);
  }

  v8::Local<v8::Value> from_user_input_value;
  if (!v8Object->Get(context, keys[5].Get(isolate)).ToLocal(&from_user_input_value)) {
    exception_state.RethrowV8Exception(block.Exception());
    return;
  }
  if (from_user_input_value.IsEmpty() || from_user_input_value->IsUndefined()) {
    // Do nothing.
  } else {
    bool from_user_input_cpp_value = NativeValueTraits<IDLBoolean>::NativeValue(isolate, from_user_input_value, exception_state);
    if (exception_state.HadException())
      return;
    impl->setFromUserInput(from_user_input_cpp_value);
  }

  v8::Local<v8::Value> is_beginning_value;
  if (!v8Object->Get(context, keys[6].Get(isolate)).ToLocal(&is_beginning_value)) {
    exception_state.RethrowV8Exception(block.Exception());
    return;
  }
  if (is_beginning_value.IsEmpty() || is_beginning_value->IsUndefined()) {
    // Do nothing.
  } else {
    bool is_beginning_cpp_value = NativeValueTraits<IDLBoolean>::NativeValue(isolate, is_beginning_value, exception_state);
    if (exception_state.HadException())
      return;
    impl->setIsBeginning(is_beginning_cpp_value);
  }

  v8::Local<v8::Value> is_direct_manipulation_value;
  if (!v8Object->Get(context, keys[7].Get(isolate)).ToLocal(&is_direct_manipulation_value)) {
    exception_state.RethrowV8Exception(block.Exception());
    return;
  }
  if (is_direct_manipulation_value.IsEmpty() || is_direct_manipulation_value->IsUndefined()) {
    // Do nothing.
  } else {
    bool is_direct_manipulation_cpp_value = NativeValueTraits<IDLBoolean>::NativeValue(isolate, is_direct_manipulation_value, exception_state);
    if (exception_state.HadException())
      return;
    impl->setIsDirectManipulation(is_direct_manipulation_cpp_value);
  }

  v8::Local<v8::Value> is_ending_value;
  if (!v8Object->Get(context, keys[8].Get(isolate)).ToLocal(&is_ending_value)) {
    exception_state.RethrowV8Exception(block.Exception());
    return;
  }
  if (is_ending_value.IsEmpty() || is_ending_value->IsUndefined()) {
    // Do nothing.
  } else {
    bool is_ending_cpp_value = NativeValueTraits<IDLBoolean>::NativeValue(isolate, is_ending_value, exception_state);
    if (exception_state.HadException())
      return;
    impl->setIsEnding(is_ending_cpp_value);
  }

  v8::Local<v8::Value> is_in_inertial_phase_value;
  if (!v8Object->Get(context, keys[9].Get(isolate)).ToLocal(&is_in_inertial_phase_value)) {
    exception_state.RethrowV8Exception(block.Exception());
    return;
  }
  if (is_in_inertial_phase_value.IsEmpty() || is_in_inertial_phase_value->IsUndefined()) {
    // Do nothing.
  } else {
    bool is_in_inertial_phase_cpp_value = NativeValueTraits<IDLBoolean>::NativeValue(isolate, is_in_inertial_phase_value, exception_state);
    if (exception_state.HadException())
      return;
    impl->setIsInInertialPhase(is_in_inertial_phase_cpp_value);
  }

  v8::Local<v8::Value> position_x_value;
  if (!v8Object->Get(context, keys[10].Get(isolate)).ToLocal(&position_x_value)) {
    exception_state.RethrowV8Exception(block.Exception());
    return;
  }
  if (position_x_value.IsEmpty() || position_x_value->IsUndefined()) {
    // Do nothing.
  } else {
    int32_t position_x_cpp_value = NativeValueTraits<IDLLong>::NativeValue(isolate, position_x_value, exception_state);
    if (exception_state.HadException())
      return;
    impl->setPositionX(position_x_cpp_value);
  }

  v8::Local<v8::Value> position_y_value;
  if (!v8Object->Get(context, keys[11].Get(isolate)).ToLocal(&position_y_value)) {
    exception_state.RethrowV8Exception(block.Exception());
    return;
  }
  if (position_y_value.IsEmpty() || position_y_value->IsUndefined()) {
    // Do nothing.
  } else {
    int32_t position_y_cpp_value = NativeValueTraits<IDLLong>::NativeValue(isolate, position_y_value, exception_state);
    if (exception_state.HadException())
      return;
    impl->setPositionY(position_y_cpp_value);
  }

  v8::Local<v8::Value> should_propagate_value;
  if (!v8Object->Get(context, keys[12].Get(isolate)).ToLocal(&should_propagate_value)) {
    exception_state.RethrowV8Exception(block.Exception());
    return;
  }
  if (should_propagate_value.IsEmpty() || should_propagate_value->IsUndefined()) {
    // Do nothing.
  } else {
    bool should_propagate_cpp_value = NativeValueTraits<IDLBoolean>::NativeValue(isolate, should_propagate_value, exception_state);
    if (exception_state.HadException())
      return;
    impl->setShouldPropagate(should_propagate_cpp_value);
  }

  v8::Local<v8::Value> velocity_x_value;
  if (!v8Object->Get(context, keys[13].Get(isolate)).ToLocal(&velocity_x_value)) {
    exception_state.RethrowV8Exception(block.Exception());
    return;
  }
  if (velocity_x_value.IsEmpty() || velocity_x_value->IsUndefined()) {
    // Do nothing.
  } else {
    double velocity_x_cpp_value = NativeValueTraits<IDLDouble>::NativeValue(isolate, velocity_x_value, exception_state);
    if (exception_state.HadException())
      return;
    impl->setVelocityX(velocity_x_cpp_value);
  }

  v8::Local<v8::Value> velocity_y_value;
  if (!v8Object->Get(context, keys[14].Get(isolate)).ToLocal(&velocity_y_value)) {
    exception_state.RethrowV8Exception(block.Exception());
    return;
  }
  if (velocity_y_value.IsEmpty() || velocity_y_value->IsUndefined()) {
    // Do nothing.
  } else {
    double velocity_y_cpp_value = NativeValueTraits<IDLDouble>::NativeValue(isolate, velocity_y_value, exception_state);
    if (exception_state.HadException())
      return;
    impl->setVelocityY(velocity_y_cpp_value);
  }
}

v8::Local<v8::Value> ScrollStateInit::ToV8Impl(v8::Local<v8::Object> creationContext, v8::Isolate* isolate) const {
  v8::Local<v8::Object> v8Object = v8::Object::New(isolate);
  if (!toV8ScrollStateInit(this, v8Object, creationContext, isolate))
    return v8::Undefined(isolate);
  return v8Object;
}

bool toV8ScrollStateInit(const ScrollStateInit* impl, v8::Local<v8::Object> dictionary, v8::Local<v8::Object> creationContext, v8::Isolate* isolate) {
  const v8::Eternal<v8::Name>* keys = eternalV8ScrollStateInitKeys(isolate);
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

  v8::Local<v8::Value> delta_granularity_value;
  bool delta_granularity_has_value_or_default = false;
  if (impl->hasDeltaGranularity()) {
    delta_granularity_value = v8::Number::New(isolate, impl->deltaGranularity());
    delta_granularity_has_value_or_default = true;
  } else {
    delta_granularity_value = v8::Number::New(isolate, 0);
    delta_granularity_has_value_or_default = true;
  }
  if (delta_granularity_has_value_or_default &&
      !create_property(0, delta_granularity_value)) {
    return false;
  }

  v8::Local<v8::Value> delta_x_value;
  bool delta_x_has_value_or_default = false;
  if (impl->hasDeltaX()) {
    delta_x_value = v8::Number::New(isolate, impl->deltaX());
    delta_x_has_value_or_default = true;
  } else {
    delta_x_value = v8::Number::New(isolate, 0);
    delta_x_has_value_or_default = true;
  }
  if (delta_x_has_value_or_default &&
      !create_property(1, delta_x_value)) {
    return false;
  }

  v8::Local<v8::Value> delta_x_hint_value;
  bool delta_x_hint_has_value_or_default = false;
  if (impl->hasDeltaXHint()) {
    delta_x_hint_value = v8::Number::New(isolate, impl->deltaXHint());
    delta_x_hint_has_value_or_default = true;
  } else {
    delta_x_hint_value = v8::Number::New(isolate, 0);
    delta_x_hint_has_value_or_default = true;
  }
  if (delta_x_hint_has_value_or_default &&
      !create_property(2, delta_x_hint_value)) {
    return false;
  }

  v8::Local<v8::Value> delta_y_value;
  bool delta_y_has_value_or_default = false;
  if (impl->hasDeltaY()) {
    delta_y_value = v8::Number::New(isolate, impl->deltaY());
    delta_y_has_value_or_default = true;
  } else {
    delta_y_value = v8::Number::New(isolate, 0);
    delta_y_has_value_or_default = true;
  }
  if (delta_y_has_value_or_default &&
      !create_property(3, delta_y_value)) {
    return false;
  }

  v8::Local<v8::Value> delta_y_hint_value;
  bool delta_y_hint_has_value_or_default = false;
  if (impl->hasDeltaYHint()) {
    delta_y_hint_value = v8::Number::New(isolate, impl->deltaYHint());
    delta_y_hint_has_value_or_default = true;
  } else {
    delta_y_hint_value = v8::Number::New(isolate, 0);
    delta_y_hint_has_value_or_default = true;
  }
  if (delta_y_hint_has_value_or_default &&
      !create_property(4, delta_y_hint_value)) {
    return false;
  }

  v8::Local<v8::Value> from_user_input_value;
  bool from_user_input_has_value_or_default = false;
  if (impl->hasFromUserInput()) {
    from_user_input_value = v8::Boolean::New(isolate, impl->fromUserInput());
    from_user_input_has_value_or_default = true;
  } else {
    from_user_input_value = v8::Boolean::New(isolate, false);
    from_user_input_has_value_or_default = true;
  }
  if (from_user_input_has_value_or_default &&
      !create_property(5, from_user_input_value)) {
    return false;
  }

  v8::Local<v8::Value> is_beginning_value;
  bool is_beginning_has_value_or_default = false;
  if (impl->hasIsBeginning()) {
    is_beginning_value = v8::Boolean::New(isolate, impl->isBeginning());
    is_beginning_has_value_or_default = true;
  } else {
    is_beginning_value = v8::Boolean::New(isolate, false);
    is_beginning_has_value_or_default = true;
  }
  if (is_beginning_has_value_or_default &&
      !create_property(6, is_beginning_value)) {
    return false;
  }

  v8::Local<v8::Value> is_direct_manipulation_value;
  bool is_direct_manipulation_has_value_or_default = false;
  if (impl->hasIsDirectManipulation()) {
    is_direct_manipulation_value = v8::Boolean::New(isolate, impl->isDirectManipulation());
    is_direct_manipulation_has_value_or_default = true;
  } else {
    is_direct_manipulation_value = v8::Boolean::New(isolate, false);
    is_direct_manipulation_has_value_or_default = true;
  }
  if (is_direct_manipulation_has_value_or_default &&
      !create_property(7, is_direct_manipulation_value)) {
    return false;
  }

  v8::Local<v8::Value> is_ending_value;
  bool is_ending_has_value_or_default = false;
  if (impl->hasIsEnding()) {
    is_ending_value = v8::Boolean::New(isolate, impl->isEnding());
    is_ending_has_value_or_default = true;
  } else {
    is_ending_value = v8::Boolean::New(isolate, false);
    is_ending_has_value_or_default = true;
  }
  if (is_ending_has_value_or_default &&
      !create_property(8, is_ending_value)) {
    return false;
  }

  v8::Local<v8::Value> is_in_inertial_phase_value;
  bool is_in_inertial_phase_has_value_or_default = false;
  if (impl->hasIsInInertialPhase()) {
    is_in_inertial_phase_value = v8::Boolean::New(isolate, impl->isInInertialPhase());
    is_in_inertial_phase_has_value_or_default = true;
  } else {
    is_in_inertial_phase_value = v8::Boolean::New(isolate, false);
    is_in_inertial_phase_has_value_or_default = true;
  }
  if (is_in_inertial_phase_has_value_or_default &&
      !create_property(9, is_in_inertial_phase_value)) {
    return false;
  }

  v8::Local<v8::Value> position_x_value;
  bool position_x_has_value_or_default = false;
  if (impl->hasPositionX()) {
    position_x_value = v8::Integer::New(isolate, impl->positionX());
    position_x_has_value_or_default = true;
  } else {
    position_x_value = v8::Integer::New(isolate, 0);
    position_x_has_value_or_default = true;
  }
  if (position_x_has_value_or_default &&
      !create_property(10, position_x_value)) {
    return false;
  }

  v8::Local<v8::Value> position_y_value;
  bool position_y_has_value_or_default = false;
  if (impl->hasPositionY()) {
    position_y_value = v8::Integer::New(isolate, impl->positionY());
    position_y_has_value_or_default = true;
  } else {
    position_y_value = v8::Integer::New(isolate, 0);
    position_y_has_value_or_default = true;
  }
  if (position_y_has_value_or_default &&
      !create_property(11, position_y_value)) {
    return false;
  }

  v8::Local<v8::Value> should_propagate_value;
  bool should_propagate_has_value_or_default = false;
  if (impl->hasShouldPropagate()) {
    should_propagate_value = v8::Boolean::New(isolate, impl->shouldPropagate());
    should_propagate_has_value_or_default = true;
  } else {
    should_propagate_value = v8::Boolean::New(isolate, true);
    should_propagate_has_value_or_default = true;
  }
  if (should_propagate_has_value_or_default &&
      !create_property(12, should_propagate_value)) {
    return false;
  }

  v8::Local<v8::Value> velocity_x_value;
  bool velocity_x_has_value_or_default = false;
  if (impl->hasVelocityX()) {
    velocity_x_value = v8::Number::New(isolate, impl->velocityX());
    velocity_x_has_value_or_default = true;
  } else {
    velocity_x_value = v8::Number::New(isolate, 0);
    velocity_x_has_value_or_default = true;
  }
  if (velocity_x_has_value_or_default &&
      !create_property(13, velocity_x_value)) {
    return false;
  }

  v8::Local<v8::Value> velocity_y_value;
  bool velocity_y_has_value_or_default = false;
  if (impl->hasVelocityY()) {
    velocity_y_value = v8::Number::New(isolate, impl->velocityY());
    velocity_y_has_value_or_default = true;
  } else {
    velocity_y_value = v8::Number::New(isolate, 0);
    velocity_y_has_value_or_default = true;
  }
  if (velocity_y_has_value_or_default &&
      !create_property(14, velocity_y_value)) {
    return false;
  }

  return true;
}

ScrollStateInit* NativeValueTraits<ScrollStateInit>::NativeValue(v8::Isolate* isolate, v8::Local<v8::Value> value, ExceptionState& exception_state) {
  ScrollStateInit* impl = ScrollStateInit::Create();
  V8ScrollStateInit::ToImpl(isolate, value, impl, exception_state);
  return impl;
}

}  // namespace blink
