// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated from the Jinja2 template
// third_party/blink/renderer/bindings/templates/dictionary_v8.cc.tmpl
// by the script code_generator_v8.py.
// DO NOT MODIFY!

// clang-format off
#include "third_party/blink/renderer/bindings/modules/v8/v8_rtc_ice_server.h"

#include "base/stl_util.h"
#include "third_party/blink/renderer/bindings/core/v8/idl_types.h"
#include "third_party/blink/renderer/bindings/core/v8/native_value_traits_impl.h"
#include "third_party/blink/renderer/platform/bindings/exception_state.h"

namespace blink {

static const v8::Eternal<v8::Name>* eternalV8RTCIceServerKeys(v8::Isolate* isolate) {
  static const char* const kKeys[] = {
    "credential",
    "url",
    "urls",
    "username",
  };
  return V8PerIsolateData::From(isolate)->FindOrCreateEternalNameCache(
      kKeys, kKeys, base::size(kKeys));
}

void V8RTCIceServer::ToImpl(v8::Isolate* isolate, v8::Local<v8::Value> v8_value, RTCIceServer* impl, ExceptionState& exception_state) {
  if (IsUndefinedOrNull(v8_value)) {
    return;
  }
  if (!v8_value->IsObject()) {
    exception_state.ThrowTypeError("cannot convert to dictionary.");
    return;
  }
  v8::Local<v8::Object> v8Object = v8_value.As<v8::Object>();
  ALLOW_UNUSED_LOCAL(v8Object);

  const v8::Eternal<v8::Name>* keys = eternalV8RTCIceServerKeys(isolate);
  v8::TryCatch block(isolate);
  v8::Local<v8::Context> context = isolate->GetCurrentContext();
  v8::Local<v8::Value> credential_value;
  if (!v8Object->Get(context, keys[0].Get(isolate)).ToLocal(&credential_value)) {
    exception_state.RethrowV8Exception(block.Exception());
    return;
  }
  if (credential_value.IsEmpty() || credential_value->IsUndefined()) {
    // Do nothing.
  } else {
    V8StringResource<> credential_cpp_value = credential_value;
    if (!credential_cpp_value.Prepare(exception_state))
      return;
    impl->setCredential(credential_cpp_value);
  }

  v8::Local<v8::Value> url_value;
  if (!v8Object->Get(context, keys[1].Get(isolate)).ToLocal(&url_value)) {
    exception_state.RethrowV8Exception(block.Exception());
    return;
  }
  if (url_value.IsEmpty() || url_value->IsUndefined()) {
    // Do nothing.
  } else {
    V8StringResource<> url_cpp_value = url_value;
    if (!url_cpp_value.Prepare(exception_state))
      return;
    impl->setURL(url_cpp_value);
  }

  v8::Local<v8::Value> urls_value;
  if (!v8Object->Get(context, keys[2].Get(isolate)).ToLocal(&urls_value)) {
    exception_state.RethrowV8Exception(block.Exception());
    return;
  }
  if (urls_value.IsEmpty() || urls_value->IsUndefined()) {
    // Do nothing.
  } else {
    StringOrStringSequence urls_cpp_value;
    V8StringOrStringSequence::ToImpl(isolate, urls_value, urls_cpp_value, UnionTypeConversionMode::kNotNullable, exception_state);
    if (exception_state.HadException())
      return;
    impl->setURLs(urls_cpp_value);
  }

  v8::Local<v8::Value> username_value;
  if (!v8Object->Get(context, keys[3].Get(isolate)).ToLocal(&username_value)) {
    exception_state.RethrowV8Exception(block.Exception());
    return;
  }
  if (username_value.IsEmpty() || username_value->IsUndefined()) {
    // Do nothing.
  } else {
    V8StringResource<> username_cpp_value = username_value;
    if (!username_cpp_value.Prepare(exception_state))
      return;
    impl->setUsername(username_cpp_value);
  }
}

v8::Local<v8::Value> RTCIceServer::ToV8Impl(v8::Local<v8::Object> creationContext, v8::Isolate* isolate) const {
  v8::Local<v8::Object> v8Object = v8::Object::New(isolate);
  if (!toV8RTCIceServer(this, v8Object, creationContext, isolate))
    return v8::Undefined(isolate);
  return v8Object;
}

bool toV8RTCIceServer(const RTCIceServer* impl, v8::Local<v8::Object> dictionary, v8::Local<v8::Object> creationContext, v8::Isolate* isolate) {
  const v8::Eternal<v8::Name>* keys = eternalV8RTCIceServerKeys(isolate);
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

  v8::Local<v8::Value> credential_value;
  bool credential_has_value_or_default = false;
  if (impl->hasCredential()) {
    credential_value = V8String(isolate, impl->credential());
    credential_has_value_or_default = true;
  }
  if (credential_has_value_or_default &&
      !create_property(0, credential_value)) {
    return false;
  }

  v8::Local<v8::Value> url_value;
  bool url_has_value_or_default = false;
  if (impl->hasURL()) {
    url_value = V8String(isolate, impl->url());
    url_has_value_or_default = true;
  }
  if (url_has_value_or_default &&
      !create_property(1, url_value)) {
    return false;
  }

  v8::Local<v8::Value> urls_value;
  bool urls_has_value_or_default = false;
  if (impl->hasURLs()) {
    urls_value = ToV8(impl->urls(), creationContext, isolate);
    urls_has_value_or_default = true;
  }
  if (urls_has_value_or_default &&
      !create_property(2, urls_value)) {
    return false;
  }

  v8::Local<v8::Value> username_value;
  bool username_has_value_or_default = false;
  if (impl->hasUsername()) {
    username_value = V8String(isolate, impl->username());
    username_has_value_or_default = true;
  }
  if (username_has_value_or_default &&
      !create_property(3, username_value)) {
    return false;
  }

  return true;
}

RTCIceServer* NativeValueTraits<RTCIceServer>::NativeValue(v8::Isolate* isolate, v8::Local<v8::Value> value, ExceptionState& exception_state) {
  RTCIceServer* impl = RTCIceServer::Create();
  V8RTCIceServer::ToImpl(isolate, value, impl, exception_state);
  return impl;
}

}  // namespace blink
