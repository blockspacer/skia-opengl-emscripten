// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated from the Jinja2 template
// third_party/blink/renderer/bindings/templates/dictionary_v8.cc.tmpl
// by the script code_generator_v8.py.
// DO NOT MODIFY!

// clang-format off
#include "third_party/blink/renderer/bindings/modules/v8/v8_authentication_extensions_client_outputs.h"

#include "base/stl_util.h"
#include "third_party/blink/renderer/bindings/core/v8/idl_types.h"
#include "third_party/blink/renderer/bindings/core/v8/native_value_traits_impl.h"
#include "third_party/blink/renderer/platform/bindings/exception_state.h"

namespace blink {

static const v8::Eternal<v8::Name>* eternalV8AuthenticationExtensionsClientOutputsKeys(v8::Isolate* isolate) {
  static const char* const kKeys[] = {
    "appid",
    "hmacCreateSecret",
    "uvm",
  };
  return V8PerIsolateData::From(isolate)->FindOrCreateEternalNameCache(
      kKeys, kKeys, base::size(kKeys));
}

void V8AuthenticationExtensionsClientOutputs::ToImpl(v8::Isolate* isolate, v8::Local<v8::Value> v8_value, AuthenticationExtensionsClientOutputs* impl, ExceptionState& exception_state) {
  if (IsUndefinedOrNull(v8_value)) {
    return;
  }
  if (!v8_value->IsObject()) {
    exception_state.ThrowTypeError("cannot convert to dictionary.");
    return;
  }
  v8::Local<v8::Object> v8Object = v8_value.As<v8::Object>();
  ALLOW_UNUSED_LOCAL(v8Object);

  const v8::Eternal<v8::Name>* keys = eternalV8AuthenticationExtensionsClientOutputsKeys(isolate);
  v8::TryCatch block(isolate);
  v8::Local<v8::Context> context = isolate->GetCurrentContext();
  v8::Local<v8::Value> appid_value;
  if (!v8Object->Get(context, keys[0].Get(isolate)).ToLocal(&appid_value)) {
    exception_state.RethrowV8Exception(block.Exception());
    return;
  }
  if (appid_value.IsEmpty() || appid_value->IsUndefined()) {
    // Do nothing.
  } else {
    bool appid_cpp_value = NativeValueTraits<IDLBoolean>::NativeValue(isolate, appid_value, exception_state);
    if (exception_state.HadException())
      return;
    impl->setAppid(appid_cpp_value);
  }

  v8::Local<v8::Value> hmac_create_secret_value;
  if (!v8Object->Get(context, keys[1].Get(isolate)).ToLocal(&hmac_create_secret_value)) {
    exception_state.RethrowV8Exception(block.Exception());
    return;
  }
  if (hmac_create_secret_value.IsEmpty() || hmac_create_secret_value->IsUndefined()) {
    // Do nothing.
  } else {
    bool hmac_create_secret_cpp_value = NativeValueTraits<IDLBoolean>::NativeValue(isolate, hmac_create_secret_value, exception_state);
    if (exception_state.HadException())
      return;
    impl->setHmacCreateSecret(hmac_create_secret_cpp_value);
  }

  v8::Local<v8::Value> uvm_value;
  if (!v8Object->Get(context, keys[2].Get(isolate)).ToLocal(&uvm_value)) {
    exception_state.RethrowV8Exception(block.Exception());
    return;
  }
  if (uvm_value.IsEmpty() || uvm_value->IsUndefined()) {
    // Do nothing.
  } else {
    Vector<Vector<uint32_t>> uvm_cpp_value = NativeValueTraits<IDLSequence<IDLSequence<IDLUnsignedLong>>>::NativeValue(isolate, uvm_value, exception_state);
    if (exception_state.HadException())
      return;
    impl->setUvm(uvm_cpp_value);
  }
}

v8::Local<v8::Value> AuthenticationExtensionsClientOutputs::ToV8Impl(v8::Local<v8::Object> creationContext, v8::Isolate* isolate) const {
  v8::Local<v8::Object> v8Object = v8::Object::New(isolate);
  if (!toV8AuthenticationExtensionsClientOutputs(this, v8Object, creationContext, isolate))
    return v8::Undefined(isolate);
  return v8Object;
}

bool toV8AuthenticationExtensionsClientOutputs(const AuthenticationExtensionsClientOutputs* impl, v8::Local<v8::Object> dictionary, v8::Local<v8::Object> creationContext, v8::Isolate* isolate) {
  const v8::Eternal<v8::Name>* keys = eternalV8AuthenticationExtensionsClientOutputsKeys(isolate);
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

  v8::Local<v8::Value> appid_value;
  bool appid_has_value_or_default = false;
  if (impl->hasAppid()) {
    appid_value = v8::Boolean::New(isolate, impl->appid());
    appid_has_value_or_default = true;
  }
  if (appid_has_value_or_default &&
      !create_property(0, appid_value)) {
    return false;
  }

  v8::Local<v8::Value> hmac_create_secret_value;
  bool hmac_create_secret_has_value_or_default = false;
  if (impl->hasHmacCreateSecret()) {
    hmac_create_secret_value = v8::Boolean::New(isolate, impl->hmacCreateSecret());
    hmac_create_secret_has_value_or_default = true;
  }
  if (hmac_create_secret_has_value_or_default &&
      !create_property(1, hmac_create_secret_value)) {
    return false;
  }

  v8::Local<v8::Value> uvm_value;
  bool uvm_has_value_or_default = false;
  if (impl->hasUvm()) {
    uvm_value = ToV8(impl->uvm(), creationContext, isolate);
    uvm_has_value_or_default = true;
  }
  if (uvm_has_value_or_default &&
      !create_property(2, uvm_value)) {
    return false;
  }

  return true;
}

AuthenticationExtensionsClientOutputs* NativeValueTraits<AuthenticationExtensionsClientOutputs>::NativeValue(v8::Isolate* isolate, v8::Local<v8::Value> value, ExceptionState& exception_state) {
  AuthenticationExtensionsClientOutputs* impl = AuthenticationExtensionsClientOutputs::Create();
  V8AuthenticationExtensionsClientOutputs::ToImpl(isolate, value, impl, exception_state);
  return impl;
}

}  // namespace blink
