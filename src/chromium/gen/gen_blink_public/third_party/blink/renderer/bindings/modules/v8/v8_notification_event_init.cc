// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated from the Jinja2 template
// third_party/blink/renderer/bindings/templates/dictionary_v8.cc.tmpl
// by the script code_generator_v8.py.
// DO NOT MODIFY!

// clang-format off
#include "third_party/blink/renderer/bindings/modules/v8/v8_notification_event_init.h"

#include "base/stl_util.h"
#include "third_party/blink/renderer/bindings/core/v8/idl_types.h"
#include "third_party/blink/renderer/bindings/core/v8/native_value_traits_impl.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_extendable_event_init.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_notification.h"
#include "third_party/blink/renderer/platform/bindings/exception_state.h"

namespace blink {

static const v8::Eternal<v8::Name>* eternalV8NotificationEventInitKeys(v8::Isolate* isolate) {
  static const char* const kKeys[] = {
    "action",
    "notification",
    "reply",
  };
  return V8PerIsolateData::From(isolate)->FindOrCreateEternalNameCache(
      kKeys, kKeys, base::size(kKeys));
}

void V8NotificationEventInit::ToImpl(v8::Isolate* isolate, v8::Local<v8::Value> v8_value, NotificationEventInit* impl, ExceptionState& exception_state) {
  if (IsUndefinedOrNull(v8_value)) {
    exception_state.ThrowTypeError("Missing required member(s): notification.");
    return;
  }
  if (!v8_value->IsObject()) {
    exception_state.ThrowTypeError("cannot convert to dictionary.");
    return;
  }
  v8::Local<v8::Object> v8Object = v8_value.As<v8::Object>();
  ALLOW_UNUSED_LOCAL(v8Object);

  V8ExtendableEventInit::ToImpl(isolate, v8_value, impl, exception_state);
  if (exception_state.HadException())
    return;

  const v8::Eternal<v8::Name>* keys = eternalV8NotificationEventInitKeys(isolate);
  v8::TryCatch block(isolate);
  v8::Local<v8::Context> context = isolate->GetCurrentContext();
  v8::Local<v8::Value> action_value;
  if (!v8Object->Get(context, keys[0].Get(isolate)).ToLocal(&action_value)) {
    exception_state.RethrowV8Exception(block.Exception());
    return;
  }
  if (action_value.IsEmpty() || action_value->IsUndefined()) {
    // Do nothing.
  } else {
    V8StringResource<> action_cpp_value = action_value;
    if (!action_cpp_value.Prepare(exception_state))
      return;
    impl->setAction(action_cpp_value);
  }

  v8::Local<v8::Value> notification_value;
  if (!v8Object->Get(context, keys[1].Get(isolate)).ToLocal(&notification_value)) {
    exception_state.RethrowV8Exception(block.Exception());
    return;
  }
  if (notification_value.IsEmpty() || notification_value->IsUndefined()) {
    exception_state.ThrowTypeError("required member notification is undefined.");
    return;
  } else {
    Notification* notification_cpp_value = V8Notification::ToImplWithTypeCheck(isolate, notification_value);
    if (!notification_cpp_value) {
      exception_state.ThrowTypeError("member notification is not of type Notification.");
      return;
    }
    impl->setNotification(notification_cpp_value);
  }

  v8::Local<v8::Value> reply_value;
  if (!v8Object->Get(context, keys[2].Get(isolate)).ToLocal(&reply_value)) {
    exception_state.RethrowV8Exception(block.Exception());
    return;
  }
  if (reply_value.IsEmpty() || reply_value->IsUndefined()) {
    // Do nothing.
  } else {
    V8StringResource<kTreatNullAndUndefinedAsNullString> reply_cpp_value = reply_value;
    if (!reply_cpp_value.Prepare(exception_state))
      return;
    impl->setReply(reply_cpp_value);
  }
}

v8::Local<v8::Value> NotificationEventInit::ToV8Impl(v8::Local<v8::Object> creationContext, v8::Isolate* isolate) const {
  v8::Local<v8::Object> v8Object = v8::Object::New(isolate);
  if (!toV8NotificationEventInit(this, v8Object, creationContext, isolate))
    return v8::Undefined(isolate);
  return v8Object;
}

bool toV8NotificationEventInit(const NotificationEventInit* impl, v8::Local<v8::Object> dictionary, v8::Local<v8::Object> creationContext, v8::Isolate* isolate) {
  if (!toV8ExtendableEventInit(impl, dictionary, creationContext, isolate))
    return false;

  const v8::Eternal<v8::Name>* keys = eternalV8NotificationEventInitKeys(isolate);
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
    action_value = V8String(isolate, WTF::g_empty_string);
    action_has_value_or_default = true;
  }
  if (action_has_value_or_default &&
      !create_property(0, action_value)) {
    return false;
  }

  v8::Local<v8::Value> notification_value;
  bool notification_has_value_or_default = false;
  if (impl->hasNotification()) {
    notification_value = ToV8(impl->notification(), creationContext, isolate);
    notification_has_value_or_default = true;
  } else {
    NOTREACHED();
  }
  if (notification_has_value_or_default &&
      !create_property(1, notification_value)) {
    return false;
  }

  v8::Local<v8::Value> reply_value;
  bool reply_has_value_or_default = false;
  if (impl->hasReply()) {
    reply_value = V8String(isolate, impl->reply());
    reply_has_value_or_default = true;
  } else {
    reply_value = V8String(isolate, WTF::g_empty_string);
    reply_has_value_or_default = true;
  }
  if (reply_has_value_or_default &&
      !create_property(2, reply_value)) {
    return false;
  }

  return true;
}

NotificationEventInit* NativeValueTraits<NotificationEventInit>::NativeValue(v8::Isolate* isolate, v8::Local<v8::Value> value, ExceptionState& exception_state) {
  NotificationEventInit* impl = NotificationEventInit::Create();
  V8NotificationEventInit::ToImpl(isolate, value, impl, exception_state);
  return impl;
}

}  // namespace blink
