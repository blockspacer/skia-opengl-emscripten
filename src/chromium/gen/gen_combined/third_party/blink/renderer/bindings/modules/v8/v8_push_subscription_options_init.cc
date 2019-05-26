// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated from the Jinja2 template
// third_party/blink/renderer/bindings/templates/dictionary_v8.cc.tmpl
// by the script code_generator_v8.py.
// DO NOT MODIFY!

// clang-format off
#include "third_party/blink/renderer/bindings/modules/v8/v8_push_subscription_options_init.h"

#include "base/stl_util.h"
#include "third_party/blink/renderer/bindings/core/v8/idl_types.h"
#include "third_party/blink/renderer/bindings/core/v8/native_value_traits_impl.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_array_buffer.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_array_buffer_view.h"
#include "third_party/blink/renderer/core/typed_arrays/array_buffer_view_helpers.h"
#include "third_party/blink/renderer/core/typed_arrays/flexible_array_buffer_view.h"
#include "third_party/blink/renderer/platform/bindings/exception_state.h"

namespace blink {

static const v8::Eternal<v8::Name>* eternalV8PushSubscriptionOptionsInitKeys(v8::Isolate* isolate) {
  static const char* const kKeys[] = {
    "applicationServerKey",
    "userVisibleOnly",
  };
  return V8PerIsolateData::From(isolate)->FindOrCreateEternalNameCache(
      kKeys, kKeys, base::size(kKeys));
}

void V8PushSubscriptionOptionsInit::ToImpl(v8::Isolate* isolate, v8::Local<v8::Value> v8_value, PushSubscriptionOptionsInit* impl, ExceptionState& exception_state) {
  if (IsUndefinedOrNull(v8_value)) {
    return;
  }
  if (!v8_value->IsObject()) {
    exception_state.ThrowTypeError("cannot convert to dictionary.");
    return;
  }
  v8::Local<v8::Object> v8Object = v8_value.As<v8::Object>();
  ALLOW_UNUSED_LOCAL(v8Object);

  const v8::Eternal<v8::Name>* keys = eternalV8PushSubscriptionOptionsInitKeys(isolate);
  v8::TryCatch block(isolate);
  v8::Local<v8::Context> context = isolate->GetCurrentContext();
  v8::Local<v8::Value> application_server_key_value;
  if (!v8Object->Get(context, keys[0].Get(isolate)).ToLocal(&application_server_key_value)) {
    exception_state.RethrowV8Exception(block.Exception());
    return;
  }
  if (application_server_key_value.IsEmpty() || application_server_key_value->IsUndefined()) {
    // Do nothing.
  } else if (application_server_key_value->IsNull()) {
    impl->setApplicationServerKeyToNull();
  } else {
    ArrayBufferOrArrayBufferView application_server_key_cpp_value;
    V8ArrayBufferOrArrayBufferView::ToImpl(isolate, application_server_key_value, application_server_key_cpp_value, UnionTypeConversionMode::kNullable, exception_state);
    if (exception_state.HadException())
      return;
    impl->setApplicationServerKey(application_server_key_cpp_value);
  }

  v8::Local<v8::Value> user_visible_only_value;
  if (!v8Object->Get(context, keys[1].Get(isolate)).ToLocal(&user_visible_only_value)) {
    exception_state.RethrowV8Exception(block.Exception());
    return;
  }
  if (user_visible_only_value.IsEmpty() || user_visible_only_value->IsUndefined()) {
    // Do nothing.
  } else {
    bool user_visible_only_cpp_value = NativeValueTraits<IDLBoolean>::NativeValue(isolate, user_visible_only_value, exception_state);
    if (exception_state.HadException())
      return;
    impl->setUserVisibleOnly(user_visible_only_cpp_value);
  }
}

v8::Local<v8::Value> PushSubscriptionOptionsInit::ToV8Impl(v8::Local<v8::Object> creationContext, v8::Isolate* isolate) const {
  v8::Local<v8::Object> v8Object = v8::Object::New(isolate);
  if (!toV8PushSubscriptionOptionsInit(this, v8Object, creationContext, isolate))
    return v8::Undefined(isolate);
  return v8Object;
}

bool toV8PushSubscriptionOptionsInit(const PushSubscriptionOptionsInit* impl, v8::Local<v8::Object> dictionary, v8::Local<v8::Object> creationContext, v8::Isolate* isolate) {
  const v8::Eternal<v8::Name>* keys = eternalV8PushSubscriptionOptionsInitKeys(isolate);
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

  v8::Local<v8::Value> application_server_key_value;
  bool application_server_key_has_value_or_default = false;
  if (impl->hasApplicationServerKey()) {
    application_server_key_value = ToV8(impl->applicationServerKey(), creationContext, isolate);
    application_server_key_has_value_or_default = true;
  } else {
    application_server_key_value = v8::Null(isolate);
    application_server_key_has_value_or_default = true;
  }
  if (application_server_key_has_value_or_default &&
      !create_property(0, application_server_key_value)) {
    return false;
  }

  v8::Local<v8::Value> user_visible_only_value;
  bool user_visible_only_has_value_or_default = false;
  if (impl->hasUserVisibleOnly()) {
    user_visible_only_value = v8::Boolean::New(isolate, impl->userVisibleOnly());
    user_visible_only_has_value_or_default = true;
  } else {
    user_visible_only_value = v8::Boolean::New(isolate, false);
    user_visible_only_has_value_or_default = true;
  }
  if (user_visible_only_has_value_or_default &&
      !create_property(1, user_visible_only_value)) {
    return false;
  }

  return true;
}

PushSubscriptionOptionsInit* NativeValueTraits<PushSubscriptionOptionsInit>::NativeValue(v8::Isolate* isolate, v8::Local<v8::Value> value, ExceptionState& exception_state) {
  PushSubscriptionOptionsInit* impl = PushSubscriptionOptionsInit::Create();
  V8PushSubscriptionOptionsInit::ToImpl(isolate, value, impl, exception_state);
  return impl;
}

}  // namespace blink
