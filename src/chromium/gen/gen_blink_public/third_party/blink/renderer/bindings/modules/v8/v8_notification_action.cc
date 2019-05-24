// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated from the Jinja2 template
// third_party/blink/renderer/bindings/templates/dictionary_v8.cc.tmpl
// by the script code_generator_v8.py.
// DO NOT MODIFY!

// clang-format off
#include "third_party/blink/renderer/bindings/modules/v8/v8_notification_action.h"

#include "base/stl_util.h"
#include "third_party/blink/renderer/bindings/core/v8/idl_types.h"
#include "third_party/blink/renderer/bindings/core/v8/native_value_traits_impl.h"
#include "third_party/blink/renderer/platform/bindings/exception_state.h"

namespace blink {

static const v8::Eternal<v8::Name>* eternalV8NotificationActionKeys(v8::Isolate* isolate) {
  static const char* const kKeys[] = {
    "action",
    "icon",
    "placeholder",
    "title",
    "type",
  };
  return V8PerIsolateData::From(isolate)->FindOrCreateEternalNameCache(
      kKeys, kKeys, base::size(kKeys));
}

void V8NotificationAction::ToImpl(v8::Isolate* isolate, v8::Local<v8::Value> v8_value, NotificationAction* impl, ExceptionState& exception_state) {
  if (IsUndefinedOrNull(v8_value)) {
    exception_state.ThrowTypeError("Missing required member(s): action, title.");
    return;
  }
  if (!v8_value->IsObject()) {
    exception_state.ThrowTypeError("cannot convert to dictionary.");
    return;
  }
  v8::Local<v8::Object> v8Object = v8_value.As<v8::Object>();
  ALLOW_UNUSED_LOCAL(v8Object);

  const v8::Eternal<v8::Name>* keys = eternalV8NotificationActionKeys(isolate);
  v8::TryCatch block(isolate);
  v8::Local<v8::Context> context = isolate->GetCurrentContext();
  v8::Local<v8::Value> action_value;
  if (!v8Object->Get(context, keys[0].Get(isolate)).ToLocal(&action_value)) {
    exception_state.RethrowV8Exception(block.Exception());
    return;
  }
  if (action_value.IsEmpty() || action_value->IsUndefined()) {
    exception_state.ThrowTypeError("required member action is undefined.");
    return;
  } else {
    V8StringResource<> action_cpp_value = action_value;
    if (!action_cpp_value.Prepare(exception_state))
      return;
    impl->setAction(action_cpp_value);
  }

  v8::Local<v8::Value> icon_value;
  if (!v8Object->Get(context, keys[1].Get(isolate)).ToLocal(&icon_value)) {
    exception_state.RethrowV8Exception(block.Exception());
    return;
  }
  if (icon_value.IsEmpty() || icon_value->IsUndefined()) {
    // Do nothing.
  } else {
    V8StringResource<> icon_cpp_value = NativeValueTraits<IDLUSVString>::NativeValue(isolate, icon_value, exception_state);
    if (exception_state.HadException())
      return;
    impl->setIcon(icon_cpp_value);
  }

  v8::Local<v8::Value> placeholder_value;
  if (!v8Object->Get(context, keys[2].Get(isolate)).ToLocal(&placeholder_value)) {
    exception_state.RethrowV8Exception(block.Exception());
    return;
  }
  if (placeholder_value.IsEmpty() || placeholder_value->IsUndefined()) {
    // Do nothing.
  } else {
    V8StringResource<kTreatNullAndUndefinedAsNullString> placeholder_cpp_value = placeholder_value;
    if (!placeholder_cpp_value.Prepare(exception_state))
      return;
    impl->setPlaceholder(placeholder_cpp_value);
  }

  v8::Local<v8::Value> title_value;
  if (!v8Object->Get(context, keys[3].Get(isolate)).ToLocal(&title_value)) {
    exception_state.RethrowV8Exception(block.Exception());
    return;
  }
  if (title_value.IsEmpty() || title_value->IsUndefined()) {
    exception_state.ThrowTypeError("required member title is undefined.");
    return;
  } else {
    V8StringResource<> title_cpp_value = title_value;
    if (!title_cpp_value.Prepare(exception_state))
      return;
    impl->setTitle(title_cpp_value);
  }

  v8::Local<v8::Value> type_value;
  if (!v8Object->Get(context, keys[4].Get(isolate)).ToLocal(&type_value)) {
    exception_state.RethrowV8Exception(block.Exception());
    return;
  }
  if (type_value.IsEmpty() || type_value->IsUndefined()) {
    // Do nothing.
  } else {
    V8StringResource<> type_cpp_value = type_value;
    if (!type_cpp_value.Prepare(exception_state))
      return;
    const char* kValidValues[] = {
        "button",
        "text",
    };
    if (!IsValidEnum(type_cpp_value, kValidValues, base::size(kValidValues), "NotificationActionType", exception_state))
      return;
    impl->setType(type_cpp_value);
  }
}

v8::Local<v8::Value> NotificationAction::ToV8Impl(v8::Local<v8::Object> creationContext, v8::Isolate* isolate) const {
  v8::Local<v8::Object> v8Object = v8::Object::New(isolate);
  if (!toV8NotificationAction(this, v8Object, creationContext, isolate))
    return v8::Undefined(isolate);
  return v8Object;
}

bool toV8NotificationAction(const NotificationAction* impl, v8::Local<v8::Object> dictionary, v8::Local<v8::Object> creationContext, v8::Isolate* isolate) {
  const v8::Eternal<v8::Name>* keys = eternalV8NotificationActionKeys(isolate);
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

  v8::Local<v8::Value> action_value;
  bool action_has_value_or_default = false;
  if (impl->hasAction()) {
    action_value = V8String(isolate, impl->action());
    action_has_value_or_default = true;
  } else {
    NOTREACHED();
  }
  if (action_has_value_or_default &&
      !create_property(0, action_value)) {
    return false;
  }

  v8::Local<v8::Value> icon_value;
  bool icon_has_value_or_default = false;
  if (impl->hasIcon()) {
    icon_value = V8String(isolate, impl->icon());
    icon_has_value_or_default = true;
  }
  if (icon_has_value_or_default &&
      !create_property(1, icon_value)) {
    return false;
  }

  v8::Local<v8::Value> placeholder_value;
  bool placeholder_has_value_or_default = false;
  if (impl->hasPlaceholder()) {
    placeholder_value = V8String(isolate, impl->placeholder());
    placeholder_has_value_or_default = true;
  } else {
    placeholder_value = v8::Null(isolate);
    placeholder_has_value_or_default = true;
  }
  if (placeholder_has_value_or_default &&
      !create_property(2, placeholder_value)) {
    return false;
  }

  v8::Local<v8::Value> title_value;
  bool title_has_value_or_default = false;
  if (impl->hasTitle()) {
    title_value = V8String(isolate, impl->title());
    title_has_value_or_default = true;
  } else {
    NOTREACHED();
  }
  if (title_has_value_or_default &&
      !create_property(3, title_value)) {
    return false;
  }

  v8::Local<v8::Value> type_value;
  bool type_has_value_or_default = false;
  if (impl->hasType()) {
    type_value = V8String(isolate, impl->type());
    type_has_value_or_default = true;
  } else {
    type_value = V8String(isolate, "button");
    type_has_value_or_default = true;
  }
  if (type_has_value_or_default &&
      !create_property(4, type_value)) {
    return false;
  }

  return true;
}

NotificationAction* NativeValueTraits<NotificationAction>::NativeValue(v8::Isolate* isolate, v8::Local<v8::Value> value, ExceptionState& exception_state) {
  NotificationAction* impl = NotificationAction::Create();
  V8NotificationAction::ToImpl(isolate, value, impl, exception_state);
  return impl;
}

}  // namespace blink
