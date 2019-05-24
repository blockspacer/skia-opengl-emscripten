// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated from the Jinja2 template
// third_party/blink/renderer/bindings/templates/dictionary_v8.cc.tmpl
// by the script code_generator_v8.py.
// DO NOT MODIFY!

// clang-format off
#include "third_party/blink/renderer/bindings/modules/v8/v8_cable_authentication_data.h"

#include "base/stl_util.h"
#include "third_party/blink/renderer/bindings/core/v8/idl_types.h"
#include "third_party/blink/renderer/bindings/core/v8/native_value_traits_impl.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_array_buffer.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_array_buffer_view.h"
#include "third_party/blink/renderer/core/typed_arrays/array_buffer_view_helpers.h"
#include "third_party/blink/renderer/core/typed_arrays/flexible_array_buffer_view.h"
#include "third_party/blink/renderer/platform/bindings/exception_state.h"

namespace blink {

static const v8::Eternal<v8::Name>* eternalV8CableAuthenticationDataKeys(v8::Isolate* isolate) {
  static const char* const kKeys[] = {
    "authenticatorEid",
    "clientEid",
    "sessionPreKey",
    "version",
  };
  return V8PerIsolateData::From(isolate)->FindOrCreateEternalNameCache(
      kKeys, kKeys, base::size(kKeys));
}

void V8CableAuthenticationData::ToImpl(v8::Isolate* isolate, v8::Local<v8::Value> v8_value, CableAuthenticationData* impl, ExceptionState& exception_state) {
  if (IsUndefinedOrNull(v8_value)) {
    exception_state.ThrowTypeError("Missing required member(s): authenticatorEid, clientEid, sessionPreKey, version.");
    return;
  }
  if (!v8_value->IsObject()) {
    exception_state.ThrowTypeError("cannot convert to dictionary.");
    return;
  }
  v8::Local<v8::Object> v8Object = v8_value.As<v8::Object>();
  ALLOW_UNUSED_LOCAL(v8Object);

  const v8::Eternal<v8::Name>* keys = eternalV8CableAuthenticationDataKeys(isolate);
  v8::TryCatch block(isolate);
  v8::Local<v8::Context> context = isolate->GetCurrentContext();
  v8::Local<v8::Value> authenticator_eid_value;
  if (!v8Object->Get(context, keys[0].Get(isolate)).ToLocal(&authenticator_eid_value)) {
    exception_state.RethrowV8Exception(block.Exception());
    return;
  }
  if (authenticator_eid_value.IsEmpty() || authenticator_eid_value->IsUndefined()) {
    exception_state.ThrowTypeError("required member authenticatorEid is undefined.");
    return;
  } else {
    ArrayBufferOrArrayBufferView authenticator_eid_cpp_value;
    V8ArrayBufferOrArrayBufferView::ToImpl(isolate, authenticator_eid_value, authenticator_eid_cpp_value, UnionTypeConversionMode::kNotNullable, exception_state);
    if (exception_state.HadException())
      return;
    impl->setAuthenticatorEid(authenticator_eid_cpp_value);
  }

  v8::Local<v8::Value> client_eid_value;
  if (!v8Object->Get(context, keys[1].Get(isolate)).ToLocal(&client_eid_value)) {
    exception_state.RethrowV8Exception(block.Exception());
    return;
  }
  if (client_eid_value.IsEmpty() || client_eid_value->IsUndefined()) {
    exception_state.ThrowTypeError("required member clientEid is undefined.");
    return;
  } else {
    ArrayBufferOrArrayBufferView client_eid_cpp_value;
    V8ArrayBufferOrArrayBufferView::ToImpl(isolate, client_eid_value, client_eid_cpp_value, UnionTypeConversionMode::kNotNullable, exception_state);
    if (exception_state.HadException())
      return;
    impl->setClientEid(client_eid_cpp_value);
  }

  v8::Local<v8::Value> session_pre_key_value;
  if (!v8Object->Get(context, keys[2].Get(isolate)).ToLocal(&session_pre_key_value)) {
    exception_state.RethrowV8Exception(block.Exception());
    return;
  }
  if (session_pre_key_value.IsEmpty() || session_pre_key_value->IsUndefined()) {
    exception_state.ThrowTypeError("required member sessionPreKey is undefined.");
    return;
  } else {
    ArrayBufferOrArrayBufferView session_pre_key_cpp_value;
    V8ArrayBufferOrArrayBufferView::ToImpl(isolate, session_pre_key_value, session_pre_key_cpp_value, UnionTypeConversionMode::kNotNullable, exception_state);
    if (exception_state.HadException())
      return;
    impl->setSessionPreKey(session_pre_key_cpp_value);
  }

  v8::Local<v8::Value> version_value;
  if (!v8Object->Get(context, keys[3].Get(isolate)).ToLocal(&version_value)) {
    exception_state.RethrowV8Exception(block.Exception());
    return;
  }
  if (version_value.IsEmpty() || version_value->IsUndefined()) {
    exception_state.ThrowTypeError("required member version is undefined.");
    return;
  } else {
    uint8_t version_cpp_value = NativeValueTraits<IDLOctet>::NativeValue(isolate, version_value, exception_state);
    if (exception_state.HadException())
      return;
    impl->setVersion(version_cpp_value);
  }
}

v8::Local<v8::Value> CableAuthenticationData::ToV8Impl(v8::Local<v8::Object> creationContext, v8::Isolate* isolate) const {
  v8::Local<v8::Object> v8Object = v8::Object::New(isolate);
  if (!toV8CableAuthenticationData(this, v8Object, creationContext, isolate))
    return v8::Undefined(isolate);
  return v8Object;
}

bool toV8CableAuthenticationData(const CableAuthenticationData* impl, v8::Local<v8::Object> dictionary, v8::Local<v8::Object> creationContext, v8::Isolate* isolate) {
  const v8::Eternal<v8::Name>* keys = eternalV8CableAuthenticationDataKeys(isolate);
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

  v8::Local<v8::Value> authenticator_eid_value;
  bool authenticator_eid_has_value_or_default = false;
  if (impl->hasAuthenticatorEid()) {
    authenticator_eid_value = ToV8(impl->authenticatorEid(), creationContext, isolate);
    authenticator_eid_has_value_or_default = true;
  } else {
    NOTREACHED();
  }
  if (authenticator_eid_has_value_or_default &&
      !create_property(0, authenticator_eid_value)) {
    return false;
  }

  v8::Local<v8::Value> client_eid_value;
  bool client_eid_has_value_or_default = false;
  if (impl->hasClientEid()) {
    client_eid_value = ToV8(impl->clientEid(), creationContext, isolate);
    client_eid_has_value_or_default = true;
  } else {
    NOTREACHED();
  }
  if (client_eid_has_value_or_default &&
      !create_property(1, client_eid_value)) {
    return false;
  }

  v8::Local<v8::Value> session_pre_key_value;
  bool session_pre_key_has_value_or_default = false;
  if (impl->hasSessionPreKey()) {
    session_pre_key_value = ToV8(impl->sessionPreKey(), creationContext, isolate);
    session_pre_key_has_value_or_default = true;
  } else {
    NOTREACHED();
  }
  if (session_pre_key_has_value_or_default &&
      !create_property(2, session_pre_key_value)) {
    return false;
  }

  v8::Local<v8::Value> version_value;
  bool version_has_value_or_default = false;
  if (impl->hasVersion()) {
    version_value = v8::Integer::NewFromUnsigned(isolate, impl->version());
    version_has_value_or_default = true;
  } else {
    NOTREACHED();
  }
  if (version_has_value_or_default &&
      !create_property(3, version_value)) {
    return false;
  }

  return true;
}

CableAuthenticationData* NativeValueTraits<CableAuthenticationData>::NativeValue(v8::Isolate* isolate, v8::Local<v8::Value> value, ExceptionState& exception_state) {
  CableAuthenticationData* impl = CableAuthenticationData::Create();
  V8CableAuthenticationData::ToImpl(isolate, value, impl, exception_state);
  return impl;
}

}  // namespace blink
