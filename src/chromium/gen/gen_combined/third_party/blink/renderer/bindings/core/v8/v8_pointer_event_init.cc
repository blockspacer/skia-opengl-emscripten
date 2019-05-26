// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated from the Jinja2 template
// third_party/blink/renderer/bindings/templates/dictionary_v8.cc.tmpl
// by the script code_generator_v8.py.
// DO NOT MODIFY!

// clang-format off
#include "third_party/blink/renderer/bindings/core/v8/v8_pointer_event_init.h"

#include "base/stl_util.h"
#include "third_party/blink/renderer/bindings/core/v8/idl_types.h"
#include "third_party/blink/renderer/bindings/core/v8/native_value_traits_impl.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_mouse_event_init.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_pointer_event.h"
#include "third_party/blink/renderer/platform/bindings/exception_state.h"
#include "third_party/blink/renderer/platform/runtime_enabled_features.h"

namespace blink {

static const v8::Eternal<v8::Name>* eternalV8PointerEventInitKeys(v8::Isolate* isolate) {
  static const char* const kKeys[] = {
    "coalescedEvents",
    "height",
    "isPrimary",
    "pointerId",
    "pointerType",
    "predictedEvents",
    "pressure",
    "tangentialPressure",
    "tiltX",
    "tiltY",
    "twist",
    "width",
  };
  return V8PerIsolateData::From(isolate)->FindOrCreateEternalNameCache(
      kKeys, kKeys, base::size(kKeys));
}

void V8PointerEventInit::ToImpl(v8::Isolate* isolate, v8::Local<v8::Value> v8_value, PointerEventInit* impl, ExceptionState& exception_state) {
  if (IsUndefinedOrNull(v8_value)) {
    return;
  }
  if (!v8_value->IsObject()) {
    exception_state.ThrowTypeError("cannot convert to dictionary.");
    return;
  }
  v8::Local<v8::Object> v8Object = v8_value.As<v8::Object>();
  ALLOW_UNUSED_LOCAL(v8Object);

  V8MouseEventInit::ToImpl(isolate, v8_value, impl, exception_state);
  if (exception_state.HadException())
    return;

  const v8::Eternal<v8::Name>* keys = eternalV8PointerEventInitKeys(isolate);
  v8::TryCatch block(isolate);
  v8::Local<v8::Context> context = isolate->GetCurrentContext();
  v8::Local<v8::Value> coalesced_events_value;
  if (!v8Object->Get(context, keys[0].Get(isolate)).ToLocal(&coalesced_events_value)) {
    exception_state.RethrowV8Exception(block.Exception());
    return;
  }
  if (coalesced_events_value.IsEmpty() || coalesced_events_value->IsUndefined()) {
    // Do nothing.
  } else {
    HeapVector<Member<PointerEvent>> coalesced_events_cpp_value = NativeValueTraits<IDLSequence<PointerEvent>>::NativeValue(isolate, coalesced_events_value, exception_state);
    if (exception_state.HadException())
      return;
    impl->setCoalescedEvents(coalesced_events_cpp_value);
  }

  v8::Local<v8::Value> height_value;
  if (!v8Object->Get(context, keys[1].Get(isolate)).ToLocal(&height_value)) {
    exception_state.RethrowV8Exception(block.Exception());
    return;
  }
  if (height_value.IsEmpty() || height_value->IsUndefined()) {
    // Do nothing.
  } else {
    double height_cpp_value = NativeValueTraits<IDLDouble>::NativeValue(isolate, height_value, exception_state);
    if (exception_state.HadException())
      return;
    impl->setHeight(height_cpp_value);
  }

  v8::Local<v8::Value> is_primary_value;
  if (!v8Object->Get(context, keys[2].Get(isolate)).ToLocal(&is_primary_value)) {
    exception_state.RethrowV8Exception(block.Exception());
    return;
  }
  if (is_primary_value.IsEmpty() || is_primary_value->IsUndefined()) {
    // Do nothing.
  } else {
    bool is_primary_cpp_value = NativeValueTraits<IDLBoolean>::NativeValue(isolate, is_primary_value, exception_state);
    if (exception_state.HadException())
      return;
    impl->setIsPrimary(is_primary_cpp_value);
  }

  v8::Local<v8::Value> pointer_id_value;
  if (!v8Object->Get(context, keys[3].Get(isolate)).ToLocal(&pointer_id_value)) {
    exception_state.RethrowV8Exception(block.Exception());
    return;
  }
  if (pointer_id_value.IsEmpty() || pointer_id_value->IsUndefined()) {
    // Do nothing.
  } else {
    int32_t pointer_id_cpp_value = NativeValueTraits<IDLLong>::NativeValue(isolate, pointer_id_value, exception_state);
    if (exception_state.HadException())
      return;
    impl->setPointerId(pointer_id_cpp_value);
  }

  v8::Local<v8::Value> pointer_type_value;
  if (!v8Object->Get(context, keys[4].Get(isolate)).ToLocal(&pointer_type_value)) {
    exception_state.RethrowV8Exception(block.Exception());
    return;
  }
  if (pointer_type_value.IsEmpty() || pointer_type_value->IsUndefined()) {
    // Do nothing.
  } else {
    V8StringResource<> pointer_type_cpp_value = pointer_type_value;
    if (!pointer_type_cpp_value.Prepare(exception_state))
      return;
    impl->setPointerType(pointer_type_cpp_value);
  }

  v8::Local<v8::Value> pressure_value;
  if (!v8Object->Get(context, keys[6].Get(isolate)).ToLocal(&pressure_value)) {
    exception_state.RethrowV8Exception(block.Exception());
    return;
  }
  if (pressure_value.IsEmpty() || pressure_value->IsUndefined()) {
    // Do nothing.
  } else {
    float pressure_cpp_value = NativeValueTraits<IDLFloat>::NativeValue(isolate, pressure_value, exception_state);
    if (exception_state.HadException())
      return;
    impl->setPressure(pressure_cpp_value);
  }

  v8::Local<v8::Value> tangential_pressure_value;
  if (!v8Object->Get(context, keys[7].Get(isolate)).ToLocal(&tangential_pressure_value)) {
    exception_state.RethrowV8Exception(block.Exception());
    return;
  }
  if (tangential_pressure_value.IsEmpty() || tangential_pressure_value->IsUndefined()) {
    // Do nothing.
  } else {
    float tangential_pressure_cpp_value = NativeValueTraits<IDLFloat>::NativeValue(isolate, tangential_pressure_value, exception_state);
    if (exception_state.HadException())
      return;
    impl->setTangentialPressure(tangential_pressure_cpp_value);
  }

  v8::Local<v8::Value> tilt_x_value;
  if (!v8Object->Get(context, keys[8].Get(isolate)).ToLocal(&tilt_x_value)) {
    exception_state.RethrowV8Exception(block.Exception());
    return;
  }
  if (tilt_x_value.IsEmpty() || tilt_x_value->IsUndefined()) {
    // Do nothing.
  } else {
    int32_t tilt_x_cpp_value = NativeValueTraits<IDLLong>::NativeValue(isolate, tilt_x_value, exception_state);
    if (exception_state.HadException())
      return;
    impl->setTiltX(tilt_x_cpp_value);
  }

  v8::Local<v8::Value> tilt_y_value;
  if (!v8Object->Get(context, keys[9].Get(isolate)).ToLocal(&tilt_y_value)) {
    exception_state.RethrowV8Exception(block.Exception());
    return;
  }
  if (tilt_y_value.IsEmpty() || tilt_y_value->IsUndefined()) {
    // Do nothing.
  } else {
    int32_t tilt_y_cpp_value = NativeValueTraits<IDLLong>::NativeValue(isolate, tilt_y_value, exception_state);
    if (exception_state.HadException())
      return;
    impl->setTiltY(tilt_y_cpp_value);
  }

  v8::Local<v8::Value> twist_value;
  if (!v8Object->Get(context, keys[10].Get(isolate)).ToLocal(&twist_value)) {
    exception_state.RethrowV8Exception(block.Exception());
    return;
  }
  if (twist_value.IsEmpty() || twist_value->IsUndefined()) {
    // Do nothing.
  } else {
    int32_t twist_cpp_value = NativeValueTraits<IDLLong>::NativeValue(isolate, twist_value, exception_state);
    if (exception_state.HadException())
      return;
    impl->setTwist(twist_cpp_value);
  }

  v8::Local<v8::Value> width_value;
  if (!v8Object->Get(context, keys[11].Get(isolate)).ToLocal(&width_value)) {
    exception_state.RethrowV8Exception(block.Exception());
    return;
  }
  if (width_value.IsEmpty() || width_value->IsUndefined()) {
    // Do nothing.
  } else {
    double width_cpp_value = NativeValueTraits<IDLDouble>::NativeValue(isolate, width_value, exception_state);
    if (exception_state.HadException())
      return;
    impl->setWidth(width_cpp_value);
  }

  if (RuntimeEnabledFeatures::PredictedEventsEnabled()) {
    v8::Local<v8::Value> predicted_events_value;
    if (!v8Object->Get(context, keys[5].Get(isolate)).ToLocal(&predicted_events_value)) {
      exception_state.RethrowV8Exception(block.Exception());
      return;
    }
    if (predicted_events_value.IsEmpty() || predicted_events_value->IsUndefined()) {
      // Do nothing.
    } else {
      HeapVector<Member<PointerEvent>> predicted_events_cpp_value = NativeValueTraits<IDLSequence<PointerEvent>>::NativeValue(isolate, predicted_events_value, exception_state);
      if (exception_state.HadException())
        return;
      impl->setPredictedEvents(predicted_events_cpp_value);
    }
  }
}

v8::Local<v8::Value> PointerEventInit::ToV8Impl(v8::Local<v8::Object> creationContext, v8::Isolate* isolate) const {
  v8::Local<v8::Object> v8Object = v8::Object::New(isolate);
  if (!toV8PointerEventInit(this, v8Object, creationContext, isolate))
    return v8::Undefined(isolate);
  return v8Object;
}

bool toV8PointerEventInit(const PointerEventInit* impl, v8::Local<v8::Object> dictionary, v8::Local<v8::Object> creationContext, v8::Isolate* isolate) {
  if (!toV8MouseEventInit(impl, dictionary, creationContext, isolate))
    return false;

  const v8::Eternal<v8::Name>* keys = eternalV8PointerEventInitKeys(isolate);
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

  v8::Local<v8::Value> coalesced_events_value;
  bool coalesced_events_has_value_or_default = false;
  if (impl->hasCoalescedEvents()) {
    coalesced_events_value = ToV8(impl->coalescedEvents(), creationContext, isolate);
    coalesced_events_has_value_or_default = true;
  } else {
    coalesced_events_value = ToV8(HeapVector<Member<PointerEvent>>(), creationContext, isolate);
    coalesced_events_has_value_or_default = true;
  }
  if (coalesced_events_has_value_or_default &&
      !create_property(0, coalesced_events_value)) {
    return false;
  }

  v8::Local<v8::Value> height_value;
  bool height_has_value_or_default = false;
  if (impl->hasHeight()) {
    height_value = v8::Number::New(isolate, impl->height());
    height_has_value_or_default = true;
  } else {
    height_value = v8::Number::New(isolate, 1);
    height_has_value_or_default = true;
  }
  if (height_has_value_or_default &&
      !create_property(1, height_value)) {
    return false;
  }

  v8::Local<v8::Value> is_primary_value;
  bool is_primary_has_value_or_default = false;
  if (impl->hasIsPrimary()) {
    is_primary_value = v8::Boolean::New(isolate, impl->isPrimary());
    is_primary_has_value_or_default = true;
  } else {
    is_primary_value = v8::Boolean::New(isolate, false);
    is_primary_has_value_or_default = true;
  }
  if (is_primary_has_value_or_default &&
      !create_property(2, is_primary_value)) {
    return false;
  }

  v8::Local<v8::Value> pointer_id_value;
  bool pointer_id_has_value_or_default = false;
  if (impl->hasPointerId()) {
    pointer_id_value = v8::Integer::New(isolate, impl->pointerId());
    pointer_id_has_value_or_default = true;
  } else {
    pointer_id_value = v8::Integer::New(isolate, 0);
    pointer_id_has_value_or_default = true;
  }
  if (pointer_id_has_value_or_default &&
      !create_property(3, pointer_id_value)) {
    return false;
  }

  v8::Local<v8::Value> pointer_type_value;
  bool pointer_type_has_value_or_default = false;
  if (impl->hasPointerType()) {
    pointer_type_value = V8String(isolate, impl->pointerType());
    pointer_type_has_value_or_default = true;
  } else {
    pointer_type_value = V8String(isolate, WTF::g_empty_string);
    pointer_type_has_value_or_default = true;
  }
  if (pointer_type_has_value_or_default &&
      !create_property(4, pointer_type_value)) {
    return false;
  }

  v8::Local<v8::Value> pressure_value;
  bool pressure_has_value_or_default = false;
  if (impl->hasPressure()) {
    pressure_value = v8::Number::New(isolate, impl->pressure());
    pressure_has_value_or_default = true;
  } else {
    pressure_value = v8::Number::New(isolate, 0);
    pressure_has_value_or_default = true;
  }
  if (pressure_has_value_or_default &&
      !create_property(6, pressure_value)) {
    return false;
  }

  v8::Local<v8::Value> tangential_pressure_value;
  bool tangential_pressure_has_value_or_default = false;
  if (impl->hasTangentialPressure()) {
    tangential_pressure_value = v8::Number::New(isolate, impl->tangentialPressure());
    tangential_pressure_has_value_or_default = true;
  } else {
    tangential_pressure_value = v8::Number::New(isolate, 0);
    tangential_pressure_has_value_or_default = true;
  }
  if (tangential_pressure_has_value_or_default &&
      !create_property(7, tangential_pressure_value)) {
    return false;
  }

  v8::Local<v8::Value> tilt_x_value;
  bool tilt_x_has_value_or_default = false;
  if (impl->hasTiltX()) {
    tilt_x_value = v8::Integer::New(isolate, impl->tiltX());
    tilt_x_has_value_or_default = true;
  } else {
    tilt_x_value = v8::Integer::New(isolate, 0);
    tilt_x_has_value_or_default = true;
  }
  if (tilt_x_has_value_or_default &&
      !create_property(8, tilt_x_value)) {
    return false;
  }

  v8::Local<v8::Value> tilt_y_value;
  bool tilt_y_has_value_or_default = false;
  if (impl->hasTiltY()) {
    tilt_y_value = v8::Integer::New(isolate, impl->tiltY());
    tilt_y_has_value_or_default = true;
  } else {
    tilt_y_value = v8::Integer::New(isolate, 0);
    tilt_y_has_value_or_default = true;
  }
  if (tilt_y_has_value_or_default &&
      !create_property(9, tilt_y_value)) {
    return false;
  }

  v8::Local<v8::Value> twist_value;
  bool twist_has_value_or_default = false;
  if (impl->hasTwist()) {
    twist_value = v8::Integer::New(isolate, impl->twist());
    twist_has_value_or_default = true;
  } else {
    twist_value = v8::Integer::New(isolate, 0);
    twist_has_value_or_default = true;
  }
  if (twist_has_value_or_default &&
      !create_property(10, twist_value)) {
    return false;
  }

  v8::Local<v8::Value> width_value;
  bool width_has_value_or_default = false;
  if (impl->hasWidth()) {
    width_value = v8::Number::New(isolate, impl->width());
    width_has_value_or_default = true;
  } else {
    width_value = v8::Number::New(isolate, 1);
    width_has_value_or_default = true;
  }
  if (width_has_value_or_default &&
      !create_property(11, width_value)) {
    return false;
  }

  if (RuntimeEnabledFeatures::PredictedEventsEnabled()) {
    v8::Local<v8::Value> predicted_events_value;
    bool predicted_events_has_value_or_default = false;
    if (impl->hasPredictedEvents()) {
      predicted_events_value = ToV8(impl->predictedEvents(), creationContext, isolate);
      predicted_events_has_value_or_default = true;
    } else {
      predicted_events_value = ToV8(HeapVector<Member<PointerEvent>>(), creationContext, isolate);
      predicted_events_has_value_or_default = true;
    }
    if (predicted_events_has_value_or_default &&
        !create_property(5, predicted_events_value)) {
      return false;
    }
  }

  return true;
}

PointerEventInit* NativeValueTraits<PointerEventInit>::NativeValue(v8::Isolate* isolate, v8::Local<v8::Value> value, ExceptionState& exception_state) {
  PointerEventInit* impl = PointerEventInit::Create();
  V8PointerEventInit::ToImpl(isolate, value, impl, exception_state);
  return impl;
}

}  // namespace blink
