// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated from the Jinja2 template
// third_party/blink/renderer/bindings/templates/dictionary_v8.cc.tmpl
// by the script code_generator_v8.py.
// DO NOT MODIFY!

// clang-format off
#include "third_party/blink/renderer/bindings/modules/v8/v8_media_key_message_event_init.h"

#include "base/stl_util.h"
#include "third_party/blink/renderer/bindings/core/v8/idl_types.h"
#include "third_party/blink/renderer/bindings/core/v8/native_value_traits_impl.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_array_buffer.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_event_init.h"
#include "third_party/blink/renderer/platform/bindings/exception_state.h"

namespace blink {

static const v8::Eternal<v8::Name>* eternalV8MediaKeyMessageEventInitKeys(v8::Isolate* isolate) {
  static const char* const kKeys[] = {
    "message",
    "messageType",
  };
  return V8PerIsolateData::From(isolate)->FindOrCreateEternalNameCache(
      kKeys, kKeys, base::size(kKeys));
}

void V8MediaKeyMessageEventInit::ToImpl(v8::Isolate* isolate, v8::Local<v8::Value> v8_value, MediaKeyMessageEventInit* impl, ExceptionState& exception_state) {
  if (IsUndefinedOrNull(v8_value)) {
    exception_state.ThrowTypeError("Missing required member(s): message, messageType.");
    return;
  }
  if (!v8_value->IsObject()) {
    exception_state.ThrowTypeError("cannot convert to dictionary.");
    return;
  }
  v8::Local<v8::Object> v8Object = v8_value.As<v8::Object>();
  ALLOW_UNUSED_LOCAL(v8Object);

  V8EventInit::ToImpl(isolate, v8_value, impl, exception_state);
  if (exception_state.HadException())
    return;

  const v8::Eternal<v8::Name>* keys = eternalV8MediaKeyMessageEventInitKeys(isolate);
  v8::TryCatch block(isolate);
  v8::Local<v8::Context> context = isolate->GetCurrentContext();
  v8::Local<v8::Value> message_value;
  if (!v8Object->Get(context, keys[0].Get(isolate)).ToLocal(&message_value)) {
    exception_state.RethrowV8Exception(block.Exception());
    return;
  }
  if (message_value.IsEmpty() || message_value->IsUndefined()) {
    exception_state.ThrowTypeError("required member message is undefined.");
    return;
  } else {
    DOMArrayBuffer* message_cpp_value = message_value->IsArrayBuffer() ? V8ArrayBuffer::ToImpl(v8::Local<v8::ArrayBuffer>::Cast(message_value)) : 0;
    if (!message_cpp_value) {
      exception_state.ThrowTypeError("member message is not of type ArrayBuffer.");
      return;
    }
    impl->setMessage(message_cpp_value);
  }

  v8::Local<v8::Value> message_type_value;
  if (!v8Object->Get(context, keys[1].Get(isolate)).ToLocal(&message_type_value)) {
    exception_state.RethrowV8Exception(block.Exception());
    return;
  }
  if (message_type_value.IsEmpty() || message_type_value->IsUndefined()) {
    exception_state.ThrowTypeError("required member messageType is undefined.");
    return;
  } else {
    V8StringResource<> message_type_cpp_value = message_type_value;
    if (!message_type_cpp_value.Prepare(exception_state))
      return;
    const char* kValidValues[] = {
        "license-request",
        "license-renewal",
        "license-release",
        "individualization-request",
    };
    if (!IsValidEnum(message_type_cpp_value, kValidValues, base::size(kValidValues), "MediaKeyMessageType", exception_state))
      return;
    impl->setMessageType(message_type_cpp_value);
  }
}

v8::Local<v8::Value> MediaKeyMessageEventInit::ToV8Impl(v8::Local<v8::Object> creationContext, v8::Isolate* isolate) const {
  v8::Local<v8::Object> v8Object = v8::Object::New(isolate);
  if (!toV8MediaKeyMessageEventInit(this, v8Object, creationContext, isolate))
    return v8::Undefined(isolate);
  return v8Object;
}

bool toV8MediaKeyMessageEventInit(const MediaKeyMessageEventInit* impl, v8::Local<v8::Object> dictionary, v8::Local<v8::Object> creationContext, v8::Isolate* isolate) {
  if (!toV8EventInit(impl, dictionary, creationContext, isolate))
    return false;

  const v8::Eternal<v8::Name>* keys = eternalV8MediaKeyMessageEventInitKeys(isolate);
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

  v8::Local<v8::Value> message_value;
  bool message_has_value_or_default = false;
  if (impl->hasMessage()) {
    message_value = ToV8(impl->message(), creationContext, isolate);
    message_has_value_or_default = true;
  } else {
    NOTREACHED();
  }
  if (message_has_value_or_default &&
      !create_property(0, message_value)) {
    return false;
  }

  v8::Local<v8::Value> message_type_value;
  bool message_type_has_value_or_default = false;
  if (impl->hasMessageType()) {
    message_type_value = V8String(isolate, impl->messageType());
    message_type_has_value_or_default = true;
  } else {
    NOTREACHED();
  }
  if (message_type_has_value_or_default &&
      !create_property(1, message_type_value)) {
    return false;
  }

  return true;
}

MediaKeyMessageEventInit* NativeValueTraits<MediaKeyMessageEventInit>::NativeValue(v8::Isolate* isolate, v8::Local<v8::Value> value, ExceptionState& exception_state) {
  MediaKeyMessageEventInit* impl = MediaKeyMessageEventInit::Create();
  V8MediaKeyMessageEventInit::ToImpl(isolate, value, impl, exception_state);
  return impl;
}

}  // namespace blink
