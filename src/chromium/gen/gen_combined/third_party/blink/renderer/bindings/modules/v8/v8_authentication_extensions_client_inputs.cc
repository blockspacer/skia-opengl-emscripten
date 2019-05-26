// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated from the Jinja2 template
// third_party/blink/renderer/bindings/templates/dictionary_v8.cc.tmpl
// by the script code_generator_v8.py.
// DO NOT MODIFY!

// clang-format off
#include "third_party/blink/renderer/bindings/modules/v8/v8_authentication_extensions_client_inputs.h"

#include "base/stl_util.h"
#include "third_party/blink/renderer/bindings/core/v8/idl_types.h"
#include "third_party/blink/renderer/bindings/core/v8/native_value_traits_impl.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_cable_authentication_data.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_cable_registration_data.h"
#include "third_party/blink/renderer/platform/bindings/exception_state.h"

namespace blink {

static const v8::Eternal<v8::Name>* eternalV8AuthenticationExtensionsClientInputsKeys(v8::Isolate* isolate) {
  static const char* const kKeys[] = {
    "appid",
    "cableAuthentication",
    "cableRegistration",
    "credentialProtectionPolicy",
    "enforceCredentialProtectionPolicy",
    "hmacCreateSecret",
    "uvm",
  };
  return V8PerIsolateData::From(isolate)->FindOrCreateEternalNameCache(
      kKeys, kKeys, base::size(kKeys));
}

void V8AuthenticationExtensionsClientInputs::ToImpl(v8::Isolate* isolate, v8::Local<v8::Value> v8_value, AuthenticationExtensionsClientInputs* impl, ExceptionState& exception_state) {
  if (IsUndefinedOrNull(v8_value)) {
    return;
  }
  if (!v8_value->IsObject()) {
    exception_state.ThrowTypeError("cannot convert to dictionary.");
    return;
  }
  v8::Local<v8::Object> v8Object = v8_value.As<v8::Object>();
  ALLOW_UNUSED_LOCAL(v8Object);

  const v8::Eternal<v8::Name>* keys = eternalV8AuthenticationExtensionsClientInputsKeys(isolate);
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
    V8StringResource<> appid_cpp_value = NativeValueTraits<IDLUSVString>::NativeValue(isolate, appid_value, exception_state);
    if (exception_state.HadException())
      return;
    impl->setAppid(appid_cpp_value);
  }

  v8::Local<v8::Value> cable_authentication_value;
  if (!v8Object->Get(context, keys[1].Get(isolate)).ToLocal(&cable_authentication_value)) {
    exception_state.RethrowV8Exception(block.Exception());
    return;
  }
  if (cable_authentication_value.IsEmpty() || cable_authentication_value->IsUndefined()) {
    // Do nothing.
  } else {
    HeapVector<Member<CableAuthenticationData>> cable_authentication_cpp_value = NativeValueTraits<IDLSequence<CableAuthenticationData>>::NativeValue(isolate, cable_authentication_value, exception_state);
    if (exception_state.HadException())
      return;
    impl->setCableAuthentication(cable_authentication_cpp_value);
  }

  v8::Local<v8::Value> cable_registration_value;
  if (!v8Object->Get(context, keys[2].Get(isolate)).ToLocal(&cable_registration_value)) {
    exception_state.RethrowV8Exception(block.Exception());
    return;
  }
  if (cable_registration_value.IsEmpty() || cable_registration_value->IsUndefined()) {
    // Do nothing.
  } else {
    CableRegistrationData* cable_registration_cpp_value = NativeValueTraits<CableRegistrationData>::NativeValue(isolate, cable_registration_value, exception_state);
    if (exception_state.HadException())
      return;
    impl->setCableRegistration(cable_registration_cpp_value);
  }

  v8::Local<v8::Value> credential_protection_policy_value;
  if (!v8Object->Get(context, keys[3].Get(isolate)).ToLocal(&credential_protection_policy_value)) {
    exception_state.RethrowV8Exception(block.Exception());
    return;
  }
  if (credential_protection_policy_value.IsEmpty() || credential_protection_policy_value->IsUndefined()) {
    // Do nothing.
  } else {
    V8StringResource<> credential_protection_policy_cpp_value = NativeValueTraits<IDLUSVString>::NativeValue(isolate, credential_protection_policy_value, exception_state);
    if (exception_state.HadException())
      return;
    impl->setCredentialProtectionPolicy(credential_protection_policy_cpp_value);
  }

  v8::Local<v8::Value> enforce_credential_protection_policy_value;
  if (!v8Object->Get(context, keys[4].Get(isolate)).ToLocal(&enforce_credential_protection_policy_value)) {
    exception_state.RethrowV8Exception(block.Exception());
    return;
  }
  if (enforce_credential_protection_policy_value.IsEmpty() || enforce_credential_protection_policy_value->IsUndefined()) {
    // Do nothing.
  } else {
    bool enforce_credential_protection_policy_cpp_value = NativeValueTraits<IDLBoolean>::NativeValue(isolate, enforce_credential_protection_policy_value, exception_state);
    if (exception_state.HadException())
      return;
    impl->setEnforceCredentialProtectionPolicy(enforce_credential_protection_policy_cpp_value);
  }

  v8::Local<v8::Value> hmac_create_secret_value;
  if (!v8Object->Get(context, keys[5].Get(isolate)).ToLocal(&hmac_create_secret_value)) {
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
  if (!v8Object->Get(context, keys[6].Get(isolate)).ToLocal(&uvm_value)) {
    exception_state.RethrowV8Exception(block.Exception());
    return;
  }
  if (uvm_value.IsEmpty() || uvm_value->IsUndefined()) {
    // Do nothing.
  } else {
    bool uvm_cpp_value = NativeValueTraits<IDLBoolean>::NativeValue(isolate, uvm_value, exception_state);
    if (exception_state.HadException())
      return;
    impl->setUvm(uvm_cpp_value);
  }
}

v8::Local<v8::Value> AuthenticationExtensionsClientInputs::ToV8Impl(v8::Local<v8::Object> creationContext, v8::Isolate* isolate) const {
  v8::Local<v8::Object> v8Object = v8::Object::New(isolate);
  if (!toV8AuthenticationExtensionsClientInputs(this, v8Object, creationContext, isolate))
    return v8::Undefined(isolate);
  return v8Object;
}

bool toV8AuthenticationExtensionsClientInputs(const AuthenticationExtensionsClientInputs* impl, v8::Local<v8::Object> dictionary, v8::Local<v8::Object> creationContext, v8::Isolate* isolate) {
  const v8::Eternal<v8::Name>* keys = eternalV8AuthenticationExtensionsClientInputsKeys(isolate);
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
    appid_value = V8String(isolate, impl->appid());
    appid_has_value_or_default = true;
  }
  if (appid_has_value_or_default &&
      !create_property(0, appid_value)) {
    return false;
  }

  v8::Local<v8::Value> cable_authentication_value;
  bool cable_authentication_has_value_or_default = false;
  if (impl->hasCableAuthentication()) {
    cable_authentication_value = ToV8(impl->cableAuthentication(), creationContext, isolate);
    cable_authentication_has_value_or_default = true;
  }
  if (cable_authentication_has_value_or_default &&
      !create_property(1, cable_authentication_value)) {
    return false;
  }

  v8::Local<v8::Value> cable_registration_value;
  bool cable_registration_has_value_or_default = false;
  if (impl->hasCableRegistration()) {
    cable_registration_value = ToV8(impl->cableRegistration(), creationContext, isolate);
    cable_registration_has_value_or_default = true;
  }
  if (cable_registration_has_value_or_default &&
      !create_property(2, cable_registration_value)) {
    return false;
  }

  v8::Local<v8::Value> credential_protection_policy_value;
  bool credential_protection_policy_has_value_or_default = false;
  if (impl->hasCredentialProtectionPolicy()) {
    credential_protection_policy_value = V8String(isolate, impl->credentialProtectionPolicy());
    credential_protection_policy_has_value_or_default = true;
  }
  if (credential_protection_policy_has_value_or_default &&
      !create_property(3, credential_protection_policy_value)) {
    return false;
  }

  v8::Local<v8::Value> enforce_credential_protection_policy_value;
  bool enforce_credential_protection_policy_has_value_or_default = false;
  if (impl->hasEnforceCredentialProtectionPolicy()) {
    enforce_credential_protection_policy_value = v8::Boolean::New(isolate, impl->enforceCredentialProtectionPolicy());
    enforce_credential_protection_policy_has_value_or_default = true;
  } else {
    enforce_credential_protection_policy_value = v8::Boolean::New(isolate, false);
    enforce_credential_protection_policy_has_value_or_default = true;
  }
  if (enforce_credential_protection_policy_has_value_or_default &&
      !create_property(4, enforce_credential_protection_policy_value)) {
    return false;
  }

  v8::Local<v8::Value> hmac_create_secret_value;
  bool hmac_create_secret_has_value_or_default = false;
  if (impl->hasHmacCreateSecret()) {
    hmac_create_secret_value = v8::Boolean::New(isolate, impl->hmacCreateSecret());
    hmac_create_secret_has_value_or_default = true;
  }
  if (hmac_create_secret_has_value_or_default &&
      !create_property(5, hmac_create_secret_value)) {
    return false;
  }

  v8::Local<v8::Value> uvm_value;
  bool uvm_has_value_or_default = false;
  if (impl->hasUvm()) {
    uvm_value = v8::Boolean::New(isolate, impl->uvm());
    uvm_has_value_or_default = true;
  }
  if (uvm_has_value_or_default &&
      !create_property(6, uvm_value)) {
    return false;
  }

  return true;
}

AuthenticationExtensionsClientInputs* NativeValueTraits<AuthenticationExtensionsClientInputs>::NativeValue(v8::Isolate* isolate, v8::Local<v8::Value> value, ExceptionState& exception_state) {
  AuthenticationExtensionsClientInputs* impl = AuthenticationExtensionsClientInputs::Create();
  V8AuthenticationExtensionsClientInputs::ToImpl(isolate, value, impl, exception_state);
  return impl;
}

}  // namespace blink
