// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated from the Jinja2 template
// third_party/blink/renderer/bindings/templates/dictionary_v8.cc.tmpl
// by the script code_generator_v8.py.
// DO NOT MODIFY!

// clang-format off
#include "third_party/blink/renderer/bindings/core/v8/v8_mouse_event_init.h"

#include "base/stl_util.h"
#include "third_party/blink/renderer/bindings/core/v8/idl_types.h"
#include "third_party/blink/renderer/bindings/core/v8/native_value_traits_impl.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_event_modifier_init.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_event_target.h"
#include "third_party/blink/renderer/platform/bindings/exception_state.h"

namespace blink {

static const v8::Eternal<v8::Name>* eternalV8MouseEventInitKeys(v8::Isolate* isolate) {
  static const char* const kKeys[] = {
    "button",
    "buttons",
    "clientX",
    "clientY",
    "movementX",
    "movementY",
    "region",
    "relatedTarget",
    "screenX",
    "screenY",
  };
  return V8PerIsolateData::From(isolate)->FindOrCreateEternalNameCache(
      kKeys, kKeys, base::size(kKeys));
}

void V8MouseEventInit::ToImpl(v8::Isolate* isolate, v8::Local<v8::Value> v8_value, MouseEventInit* impl, ExceptionState& exception_state) {
  if (IsUndefinedOrNull(v8_value)) {
    return;
  }
  if (!v8_value->IsObject()) {
    exception_state.ThrowTypeError("cannot convert to dictionary.");
    return;
  }
  v8::Local<v8::Object> v8Object = v8_value.As<v8::Object>();
  ALLOW_UNUSED_LOCAL(v8Object);

  V8EventModifierInit::ToImpl(isolate, v8_value, impl, exception_state);
  if (exception_state.HadException())
    return;

  const v8::Eternal<v8::Name>* keys = eternalV8MouseEventInitKeys(isolate);
  v8::TryCatch block(isolate);
  v8::Local<v8::Context> context = isolate->GetCurrentContext();
  v8::Local<v8::Value> button_value;
  if (!v8Object->Get(context, keys[0].Get(isolate)).ToLocal(&button_value)) {
    exception_state.RethrowV8Exception(block.Exception());
    return;
  }
  if (button_value.IsEmpty() || button_value->IsUndefined()) {
    // Do nothing.
  } else {
    int16_t button_cpp_value = NativeValueTraits<IDLShort>::NativeValue(isolate, button_value, exception_state);
    if (exception_state.HadException())
      return;
    impl->setButton(button_cpp_value);
  }

  v8::Local<v8::Value> buttons_value;
  if (!v8Object->Get(context, keys[1].Get(isolate)).ToLocal(&buttons_value)) {
    exception_state.RethrowV8Exception(block.Exception());
    return;
  }
  if (buttons_value.IsEmpty() || buttons_value->IsUndefined()) {
    // Do nothing.
  } else {
    uint16_t buttons_cpp_value = NativeValueTraits<IDLUnsignedShort>::NativeValue(isolate, buttons_value, exception_state);
    if (exception_state.HadException())
      return;
    impl->setButtons(buttons_cpp_value);
  }

  v8::Local<v8::Value> client_x_value;
  if (!v8Object->Get(context, keys[2].Get(isolate)).ToLocal(&client_x_value)) {
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
  if (!v8Object->Get(context, keys[3].Get(isolate)).ToLocal(&client_y_value)) {
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

  v8::Local<v8::Value> movement_x_value;
  if (!v8Object->Get(context, keys[4].Get(isolate)).ToLocal(&movement_x_value)) {
    exception_state.RethrowV8Exception(block.Exception());
    return;
  }
  if (movement_x_value.IsEmpty() || movement_x_value->IsUndefined()) {
    // Do nothing.
  } else {
    int32_t movement_x_cpp_value = NativeValueTraits<IDLLong>::NativeValue(isolate, movement_x_value, exception_state);
    if (exception_state.HadException())
      return;
    impl->setMovementX(movement_x_cpp_value);
  }

  v8::Local<v8::Value> movement_y_value;
  if (!v8Object->Get(context, keys[5].Get(isolate)).ToLocal(&movement_y_value)) {
    exception_state.RethrowV8Exception(block.Exception());
    return;
  }
  if (movement_y_value.IsEmpty() || movement_y_value->IsUndefined()) {
    // Do nothing.
  } else {
    int32_t movement_y_cpp_value = NativeValueTraits<IDLLong>::NativeValue(isolate, movement_y_value, exception_state);
    if (exception_state.HadException())
      return;
    impl->setMovementY(movement_y_cpp_value);
  }

  v8::Local<v8::Value> region_value;
  if (!v8Object->Get(context, keys[6].Get(isolate)).ToLocal(&region_value)) {
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

  v8::Local<v8::Value> related_target_value;
  if (!v8Object->Get(context, keys[7].Get(isolate)).ToLocal(&related_target_value)) {
    exception_state.RethrowV8Exception(block.Exception());
    return;
  }
  if (related_target_value.IsEmpty() || related_target_value->IsUndefined()) {
    // Do nothing.
  } else if (related_target_value->IsNull()) {
    impl->setRelatedTargetToNull();
  } else {
    EventTarget* related_target_cpp_value = V8EventTarget::ToImplWithTypeCheck(isolate, related_target_value);
    if (!related_target_cpp_value) {
      exception_state.ThrowTypeError("member relatedTarget is not of type EventTarget.");
      return;
    }
    impl->setRelatedTarget(related_target_cpp_value);
  }

  v8::Local<v8::Value> screen_x_value;
  if (!v8Object->Get(context, keys[8].Get(isolate)).ToLocal(&screen_x_value)) {
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
  if (!v8Object->Get(context, keys[9].Get(isolate)).ToLocal(&screen_y_value)) {
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
}

v8::Local<v8::Value> MouseEventInit::ToV8Impl(v8::Local<v8::Object> creationContext, v8::Isolate* isolate) const {
  v8::Local<v8::Object> v8Object = v8::Object::New(isolate);
  if (!toV8MouseEventInit(this, v8Object, creationContext, isolate))
    return v8::Undefined(isolate);
  return v8Object;
}

bool toV8MouseEventInit(const MouseEventInit* impl, v8::Local<v8::Object> dictionary, v8::Local<v8::Object> creationContext, v8::Isolate* isolate) {
  if (!toV8EventModifierInit(impl, dictionary, creationContext, isolate))
    return false;

  const v8::Eternal<v8::Name>* keys = eternalV8MouseEventInitKeys(isolate);
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

  v8::Local<v8::Value> button_value;
  bool button_has_value_or_default = false;
  if (impl->hasButton()) {
    button_value = v8::Integer::New(isolate, impl->button());
    button_has_value_or_default = true;
  } else {
    button_value = v8::Integer::New(isolate, 0);
    button_has_value_or_default = true;
  }
  if (button_has_value_or_default &&
      !create_property(0, button_value)) {
    return false;
  }

  v8::Local<v8::Value> buttons_value;
  bool buttons_has_value_or_default = false;
  if (impl->hasButtons()) {
    buttons_value = v8::Integer::NewFromUnsigned(isolate, impl->buttons());
    buttons_has_value_or_default = true;
  } else {
    buttons_value = v8::Integer::NewFromUnsigned(isolate, 0u);
    buttons_has_value_or_default = true;
  }
  if (buttons_has_value_or_default &&
      !create_property(1, buttons_value)) {
    return false;
  }

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
      !create_property(2, client_x_value)) {
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
      !create_property(3, client_y_value)) {
    return false;
  }

  v8::Local<v8::Value> movement_x_value;
  bool movement_x_has_value_or_default = false;
  if (impl->hasMovementX()) {
    movement_x_value = v8::Integer::New(isolate, impl->movementX());
    movement_x_has_value_or_default = true;
  } else {
    movement_x_value = v8::Integer::New(isolate, 0);
    movement_x_has_value_or_default = true;
  }
  if (movement_x_has_value_or_default &&
      !create_property(4, movement_x_value)) {
    return false;
  }

  v8::Local<v8::Value> movement_y_value;
  bool movement_y_has_value_or_default = false;
  if (impl->hasMovementY()) {
    movement_y_value = v8::Integer::New(isolate, impl->movementY());
    movement_y_has_value_or_default = true;
  } else {
    movement_y_value = v8::Integer::New(isolate, 0);
    movement_y_has_value_or_default = true;
  }
  if (movement_y_has_value_or_default &&
      !create_property(5, movement_y_value)) {
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
      !create_property(6, region_value)) {
    return false;
  }

  v8::Local<v8::Value> related_target_value;
  bool related_target_has_value_or_default = false;
  if (impl->hasRelatedTarget()) {
    related_target_value = ToV8(impl->relatedTarget(), creationContext, isolate);
    related_target_has_value_or_default = true;
  } else {
    related_target_value = v8::Null(isolate);
    related_target_has_value_or_default = true;
  }
  if (related_target_has_value_or_default &&
      !create_property(7, related_target_value)) {
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
      !create_property(8, screen_x_value)) {
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
      !create_property(9, screen_y_value)) {
    return false;
  }

  return true;
}

MouseEventInit* NativeValueTraits<MouseEventInit>::NativeValue(v8::Isolate* isolate, v8::Local<v8::Value> value, ExceptionState& exception_state) {
  MouseEventInit* impl = MouseEventInit::Create();
  V8MouseEventInit::ToImpl(isolate, value, impl, exception_state);
  return impl;
}

}  // namespace blink
