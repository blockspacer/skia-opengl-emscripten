// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated from the Jinja2 template
// third_party/blink/renderer/bindings/templates/dictionary_v8.cc.tmpl
// by the script code_generator_v8.py.
// DO NOT MODIFY!

// clang-format off
#include "third_party/blink/renderer/bindings/core/v8/v8_touch_init.h"

#include "base/stl_util.h"
#include "third_party/blink/renderer/bindings/core/v8/idl_types.h"
#include "third_party/blink/renderer/bindings/core/v8/native_value_traits_impl.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_event_target.h"
#include "third_party/blink/renderer/platform/bindings/exception_state.h"

namespace blink {

static const v8::Eternal<v8::Name>* eternalV8TouchInitKeys(v8::Isolate* isolate) {
  static const char* const kKeys[] = {
    "clientX",
    "clientY",
    "force",
    "identifier",
    "pageX",
    "pageY",
    "radiusX",
    "radiusY",
    "region",
    "rotationAngle",
    "screenX",
    "screenY",
    "target",
  };
  return V8PerIsolateData::From(isolate)->FindOrCreateEternalNameCache(
      kKeys, kKeys, base::size(kKeys));
}

void V8TouchInit::ToImpl(v8::Isolate* isolate, v8::Local<v8::Value> v8_value, TouchInit* impl, ExceptionState& exception_state) {
  if (IsUndefinedOrNull(v8_value)) {
    exception_state.ThrowTypeError("Missing required member(s): identifier, target.");
    return;
  }
  if (!v8_value->IsObject()) {
    exception_state.ThrowTypeError("cannot convert to dictionary.");
    return;
  }
  v8::Local<v8::Object> v8Object = v8_value.As<v8::Object>();
  ALLOW_UNUSED_LOCAL(v8Object);

  const v8::Eternal<v8::Name>* keys = eternalV8TouchInitKeys(isolate);
  v8::TryCatch block(isolate);
  v8::Local<v8::Context> context = isolate->GetCurrentContext();
  v8::Local<v8::Value> client_x_value;
  if (!v8Object->Get(context, keys[0].Get(isolate)).ToLocal(&client_x_value)) {
    exception_state.RethrowV8Exception(block.Exception());
    return;
  }
  if (client_x_value.IsEmpty() || client_x_value->IsUndefined()) {
    // Do nothing.
  } else {
    double client_x_cpp_value = NativeValueTraits<IDLDouble>::NativeValue(isolate, client_x_value, exception_state);
    if (exception_state.HadException())
      return;
    impl->setClientX(client_x_cpp_value);
  }

  v8::Local<v8::Value> client_y_value;
  if (!v8Object->Get(context, keys[1].Get(isolate)).ToLocal(&client_y_value)) {
    exception_state.RethrowV8Exception(block.Exception());
    return;
  }
  if (client_y_value.IsEmpty() || client_y_value->IsUndefined()) {
    // Do nothing.
  } else {
    double client_y_cpp_value = NativeValueTraits<IDLDouble>::NativeValue(isolate, client_y_value, exception_state);
    if (exception_state.HadException())
      return;
    impl->setClientY(client_y_cpp_value);
  }

  v8::Local<v8::Value> force_value;
  if (!v8Object->Get(context, keys[2].Get(isolate)).ToLocal(&force_value)) {
    exception_state.RethrowV8Exception(block.Exception());
    return;
  }
  if (force_value.IsEmpty() || force_value->IsUndefined()) {
    // Do nothing.
  } else {
    float force_cpp_value = NativeValueTraits<IDLFloat>::NativeValue(isolate, force_value, exception_state);
    if (exception_state.HadException())
      return;
    impl->setForce(force_cpp_value);
  }

  v8::Local<v8::Value> identifier_value;
  if (!v8Object->Get(context, keys[3].Get(isolate)).ToLocal(&identifier_value)) {
    exception_state.RethrowV8Exception(block.Exception());
    return;
  }
  if (identifier_value.IsEmpty() || identifier_value->IsUndefined()) {
    exception_state.ThrowTypeError("required member identifier is undefined.");
    return;
  } else {
    int32_t identifier_cpp_value = NativeValueTraits<IDLLong>::NativeValue(isolate, identifier_value, exception_state);
    if (exception_state.HadException())
      return;
    impl->setIdentifier(identifier_cpp_value);
  }

  v8::Local<v8::Value> page_x_value;
  if (!v8Object->Get(context, keys[4].Get(isolate)).ToLocal(&page_x_value)) {
    exception_state.RethrowV8Exception(block.Exception());
    return;
  }
  if (page_x_value.IsEmpty() || page_x_value->IsUndefined()) {
    // Do nothing.
  } else {
    double page_x_cpp_value = NativeValueTraits<IDLDouble>::NativeValue(isolate, page_x_value, exception_state);
    if (exception_state.HadException())
      return;
    impl->setPageX(page_x_cpp_value);
  }

  v8::Local<v8::Value> page_y_value;
  if (!v8Object->Get(context, keys[5].Get(isolate)).ToLocal(&page_y_value)) {
    exception_state.RethrowV8Exception(block.Exception());
    return;
  }
  if (page_y_value.IsEmpty() || page_y_value->IsUndefined()) {
    // Do nothing.
  } else {
    double page_y_cpp_value = NativeValueTraits<IDLDouble>::NativeValue(isolate, page_y_value, exception_state);
    if (exception_state.HadException())
      return;
    impl->setPageY(page_y_cpp_value);
  }

  v8::Local<v8::Value> radius_x_value;
  if (!v8Object->Get(context, keys[6].Get(isolate)).ToLocal(&radius_x_value)) {
    exception_state.RethrowV8Exception(block.Exception());
    return;
  }
  if (radius_x_value.IsEmpty() || radius_x_value->IsUndefined()) {
    // Do nothing.
  } else {
    float radius_x_cpp_value = NativeValueTraits<IDLFloat>::NativeValue(isolate, radius_x_value, exception_state);
    if (exception_state.HadException())
      return;
    impl->setRadiusX(radius_x_cpp_value);
  }

  v8::Local<v8::Value> radius_y_value;
  if (!v8Object->Get(context, keys[7].Get(isolate)).ToLocal(&radius_y_value)) {
    exception_state.RethrowV8Exception(block.Exception());
    return;
  }
  if (radius_y_value.IsEmpty() || radius_y_value->IsUndefined()) {
    // Do nothing.
  } else {
    float radius_y_cpp_value = NativeValueTraits<IDLFloat>::NativeValue(isolate, radius_y_value, exception_state);
    if (exception_state.HadException())
      return;
    impl->setRadiusY(radius_y_cpp_value);
  }

  v8::Local<v8::Value> region_value;
  if (!v8Object->Get(context, keys[8].Get(isolate)).ToLocal(&region_value)) {
    exception_state.RethrowV8Exception(block.Exception());
    return;
  }
  if (region_value.IsEmpty() || region_value->IsUndefined()) {
    // Do nothing.
  } else {
    V8StringResource<kTreatNullAndUndefinedAsNullString> region_cpp_value = region_value;
    if (!region_cpp_value.Prepare(exception_state))
      return;
    impl->setRegion(region_cpp_value);
  }

  v8::Local<v8::Value> rotation_angle_value;
  if (!v8Object->Get(context, keys[9].Get(isolate)).ToLocal(&rotation_angle_value)) {
    exception_state.RethrowV8Exception(block.Exception());
    return;
  }
  if (rotation_angle_value.IsEmpty() || rotation_angle_value->IsUndefined()) {
    // Do nothing.
  } else {
    float rotation_angle_cpp_value = NativeValueTraits<IDLFloat>::NativeValue(isolate, rotation_angle_value, exception_state);
    if (exception_state.HadException())
      return;
    impl->setRotationAngle(rotation_angle_cpp_value);
  }

  v8::Local<v8::Value> screen_x_value;
  if (!v8Object->Get(context, keys[10].Get(isolate)).ToLocal(&screen_x_value)) {
    exception_state.RethrowV8Exception(block.Exception());
    return;
  }
  if (screen_x_value.IsEmpty() || screen_x_value->IsUndefined()) {
    // Do nothing.
  } else {
    double screen_x_cpp_value = NativeValueTraits<IDLDouble>::NativeValue(isolate, screen_x_value, exception_state);
    if (exception_state.HadException())
      return;
    impl->setScreenX(screen_x_cpp_value);
  }

  v8::Local<v8::Value> screen_y_value;
  if (!v8Object->Get(context, keys[11].Get(isolate)).ToLocal(&screen_y_value)) {
    exception_state.RethrowV8Exception(block.Exception());
    return;
  }
  if (screen_y_value.IsEmpty() || screen_y_value->IsUndefined()) {
    // Do nothing.
  } else {
    double screen_y_cpp_value = NativeValueTraits<IDLDouble>::NativeValue(isolate, screen_y_value, exception_state);
    if (exception_state.HadException())
      return;
    impl->setScreenY(screen_y_cpp_value);
  }

  v8::Local<v8::Value> target_value;
  if (!v8Object->Get(context, keys[12].Get(isolate)).ToLocal(&target_value)) {
    exception_state.RethrowV8Exception(block.Exception());
    return;
  }
  if (target_value.IsEmpty() || target_value->IsUndefined()) {
    exception_state.ThrowTypeError("required member target is undefined.");
    return;
  } else {
    EventTarget* target_cpp_value = V8EventTarget::ToImplWithTypeCheck(isolate, target_value);
    if (!target_cpp_value) {
      exception_state.ThrowTypeError("member target is not of type EventTarget.");
      return;
    }
    impl->setTarget(target_cpp_value);
  }
}

v8::Local<v8::Value> TouchInit::ToV8Impl(v8::Local<v8::Object> creationContext, v8::Isolate* isolate) const {
  v8::Local<v8::Object> v8Object = v8::Object::New(isolate);
  if (!toV8TouchInit(this, v8Object, creationContext, isolate))
    return v8::Undefined(isolate);
  return v8Object;
}

bool toV8TouchInit(const TouchInit* impl, v8::Local<v8::Object> dictionary, v8::Local<v8::Object> creationContext, v8::Isolate* isolate) {
  const v8::Eternal<v8::Name>* keys = eternalV8TouchInitKeys(isolate);
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

  v8::Local<v8::Value> client_x_value;
  bool client_x_has_value_or_default = false;
  if (impl->hasClientX()) {
    client_x_value = v8::Number::New(isolate, impl->clientX());
    client_x_has_value_or_default = true;
  } else {
    client_x_value = v8::Number::New(isolate, 0);
    client_x_has_value_or_default = true;
  }
  if (client_x_has_value_or_default &&
      !create_property(0, client_x_value)) {
    return false;
  }

  v8::Local<v8::Value> client_y_value;
  bool client_y_has_value_or_default = false;
  if (impl->hasClientY()) {
    client_y_value = v8::Number::New(isolate, impl->clientY());
    client_y_has_value_or_default = true;
  } else {
    client_y_value = v8::Number::New(isolate, 0);
    client_y_has_value_or_default = true;
  }
  if (client_y_has_value_or_default &&
      !create_property(1, client_y_value)) {
    return false;
  }

  v8::Local<v8::Value> force_value;
  bool force_has_value_or_default = false;
  if (impl->hasForce()) {
    force_value = v8::Number::New(isolate, impl->force());
    force_has_value_or_default = true;
  } else {
    force_value = v8::Number::New(isolate, 0);
    force_has_value_or_default = true;
  }
  if (force_has_value_or_default &&
      !create_property(2, force_value)) {
    return false;
  }

  v8::Local<v8::Value> identifier_value;
  bool identifier_has_value_or_default = false;
  if (impl->hasIdentifier()) {
    identifier_value = v8::Integer::New(isolate, impl->identifier());
    identifier_has_value_or_default = true;
  } else {
    NOTREACHED();
  }
  if (identifier_has_value_or_default &&
      !create_property(3, identifier_value)) {
    return false;
  }

  v8::Local<v8::Value> page_x_value;
  bool page_x_has_value_or_default = false;
  if (impl->hasPageX()) {
    page_x_value = v8::Number::New(isolate, impl->pageX());
    page_x_has_value_or_default = true;
  } else {
    page_x_value = v8::Number::New(isolate, 0);
    page_x_has_value_or_default = true;
  }
  if (page_x_has_value_or_default &&
      !create_property(4, page_x_value)) {
    return false;
  }

  v8::Local<v8::Value> page_y_value;
  bool page_y_has_value_or_default = false;
  if (impl->hasPageY()) {
    page_y_value = v8::Number::New(isolate, impl->pageY());
    page_y_has_value_or_default = true;
  } else {
    page_y_value = v8::Number::New(isolate, 0);
    page_y_has_value_or_default = true;
  }
  if (page_y_has_value_or_default &&
      !create_property(5, page_y_value)) {
    return false;
  }

  v8::Local<v8::Value> radius_x_value;
  bool radius_x_has_value_or_default = false;
  if (impl->hasRadiusX()) {
    radius_x_value = v8::Number::New(isolate, impl->radiusX());
    radius_x_has_value_or_default = true;
  } else {
    radius_x_value = v8::Number::New(isolate, 0);
    radius_x_has_value_or_default = true;
  }
  if (radius_x_has_value_or_default &&
      !create_property(6, radius_x_value)) {
    return false;
  }

  v8::Local<v8::Value> radius_y_value;
  bool radius_y_has_value_or_default = false;
  if (impl->hasRadiusY()) {
    radius_y_value = v8::Number::New(isolate, impl->radiusY());
    radius_y_has_value_or_default = true;
  } else {
    radius_y_value = v8::Number::New(isolate, 0);
    radius_y_has_value_or_default = true;
  }
  if (radius_y_has_value_or_default &&
      !create_property(7, radius_y_value)) {
    return false;
  }

  v8::Local<v8::Value> region_value;
  bool region_has_value_or_default = false;
  if (impl->hasRegion()) {
    region_value = V8String(isolate, impl->region());
    region_has_value_or_default = true;
  } else {
    region_value = v8::Null(isolate);
    region_has_value_or_default = true;
  }
  if (region_has_value_or_default &&
      !create_property(8, region_value)) {
    return false;
  }

  v8::Local<v8::Value> rotation_angle_value;
  bool rotation_angle_has_value_or_default = false;
  if (impl->hasRotationAngle()) {
    rotation_angle_value = v8::Number::New(isolate, impl->rotationAngle());
    rotation_angle_has_value_or_default = true;
  } else {
    rotation_angle_value = v8::Number::New(isolate, 0);
    rotation_angle_has_value_or_default = true;
  }
  if (rotation_angle_has_value_or_default &&
      !create_property(9, rotation_angle_value)) {
    return false;
  }

  v8::Local<v8::Value> screen_x_value;
  bool screen_x_has_value_or_default = false;
  if (impl->hasScreenX()) {
    screen_x_value = v8::Number::New(isolate, impl->screenX());
    screen_x_has_value_or_default = true;
  } else {
    screen_x_value = v8::Number::New(isolate, 0);
    screen_x_has_value_or_default = true;
  }
  if (screen_x_has_value_or_default &&
      !create_property(10, screen_x_value)) {
    return false;
  }

  v8::Local<v8::Value> screen_y_value;
  bool screen_y_has_value_or_default = false;
  if (impl->hasScreenY()) {
    screen_y_value = v8::Number::New(isolate, impl->screenY());
    screen_y_has_value_or_default = true;
  } else {
    screen_y_value = v8::Number::New(isolate, 0);
    screen_y_has_value_or_default = true;
  }
  if (screen_y_has_value_or_default &&
      !create_property(11, screen_y_value)) {
    return false;
  }

  v8::Local<v8::Value> target_value;
  bool target_has_value_or_default = false;
  if (impl->hasTarget()) {
    target_value = ToV8(impl->target(), creationContext, isolate);
    target_has_value_or_default = true;
  } else {
    NOTREACHED();
  }
  if (target_has_value_or_default &&
      !create_property(12, target_value)) {
    return false;
  }

  return true;
}

TouchInit* NativeValueTraits<TouchInit>::NativeValue(v8::Isolate* isolate, v8::Local<v8::Value> value, ExceptionState& exception_state) {
  TouchInit* impl = TouchInit::Create();
  V8TouchInit::ToImpl(isolate, value, impl, exception_state);
  return impl;
}

}  // namespace blink
