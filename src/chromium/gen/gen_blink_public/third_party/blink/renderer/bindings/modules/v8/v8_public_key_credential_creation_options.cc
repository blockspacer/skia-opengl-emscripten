// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated from the Jinja2 template
// third_party/blink/renderer/bindings/templates/dictionary_v8.cc.tmpl
// by the script code_generator_v8.py.
// DO NOT MODIFY!

// clang-format off
#include "third_party/blink/renderer/bindings/modules/v8/v8_public_key_credential_creation_options.h"

#include "base/stl_util.h"
#include "third_party/blink/renderer/bindings/core/v8/idl_types.h"
#include "third_party/blink/renderer/bindings/core/v8/native_value_traits_impl.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_array_buffer.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_array_buffer_view.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_authentication_extensions_client_inputs.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_authenticator_selection_criteria.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_public_key_credential_descriptor.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_public_key_credential_parameters.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_public_key_credential_rp_entity.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_public_key_credential_user_entity.h"
#include "third_party/blink/renderer/core/typed_arrays/array_buffer_view_helpers.h"
#include "third_party/blink/renderer/core/typed_arrays/flexible_array_buffer_view.h"
#include "third_party/blink/renderer/platform/bindings/exception_state.h"

namespace blink {

static const v8::Eternal<v8::Name>* eternalV8PublicKeyCredentialCreationOptionsKeys(v8::Isolate* isolate) {
  static const char* const kKeys[] = {
    "attestation",
    "authenticatorSelection",
    "challenge",
    "excludeCredentials",
    "extensions",
    "pubKeyCredParams",
    "rp",
    "timeout",
    "user",
  };
  return V8PerIsolateData::From(isolate)->FindOrCreateEternalNameCache(
      kKeys, kKeys, base::size(kKeys));
}

void V8PublicKeyCredentialCreationOptions::ToImpl(v8::Isolate* isolate, v8::Local<v8::Value> v8_value, PublicKeyCredentialCreationOptions* impl, ExceptionState& exception_state) {
  if (IsUndefinedOrNull(v8_value)) {
    exception_state.ThrowTypeError("Missing required member(s): challenge, pubKeyCredParams, rp, user.");
    return;
  }
  if (!v8_value->IsObject()) {
    exception_state.ThrowTypeError("cannot convert to dictionary.");
    return;
  }
  v8::Local<v8::Object> v8Object = v8_value.As<v8::Object>();
  ALLOW_UNUSED_LOCAL(v8Object);

  const v8::Eternal<v8::Name>* keys = eternalV8PublicKeyCredentialCreationOptionsKeys(isolate);
  v8::TryCatch block(isolate);
  v8::Local<v8::Context> context = isolate->GetCurrentContext();
  v8::Local<v8::Value> attestation_value;
  if (!v8Object->Get(context, keys[0].Get(isolate)).ToLocal(&attestation_value)) {
    exception_state.RethrowV8Exception(block.Exception());
    return;
  }
  if (attestation_value.IsEmpty() || attestation_value->IsUndefined()) {
    // Do nothing.
  } else {
    V8StringResource<> attestation_cpp_value = attestation_value;
    if (!attestation_cpp_value.Prepare(exception_state))
      return;
    const char* kValidValues[] = {
        "none",
        "indirect",
        "direct",
        "enterprise",
    };
    if (!IsValidEnum(attestation_cpp_value, kValidValues, base::size(kValidValues), "AttestationConveyancePreference", exception_state))
      return;
    impl->setAttestation(attestation_cpp_value);
  }

  v8::Local<v8::Value> authenticator_selection_value;
  if (!v8Object->Get(context, keys[1].Get(isolate)).ToLocal(&authenticator_selection_value)) {
    exception_state.RethrowV8Exception(block.Exception());
    return;
  }
  if (authenticator_selection_value.IsEmpty() || authenticator_selection_value->IsUndefined()) {
    // Do nothing.
  } else {
    AuthenticatorSelectionCriteria* authenticator_selection_cpp_value = NativeValueTraits<AuthenticatorSelectionCriteria>::NativeValue(isolate, authenticator_selection_value, exception_state);
    if (exception_state.HadException())
      return;
    impl->setAuthenticatorSelection(authenticator_selection_cpp_value);
  }

  v8::Local<v8::Value> challenge_value;
  if (!v8Object->Get(context, keys[2].Get(isolate)).ToLocal(&challenge_value)) {
    exception_state.RethrowV8Exception(block.Exception());
    return;
  }
  if (challenge_value.IsEmpty() || challenge_value->IsUndefined()) {
    exception_state.ThrowTypeError("required member challenge is undefined.");
    return;
  } else {
    ArrayBufferOrArrayBufferView challenge_cpp_value;
    V8ArrayBufferOrArrayBufferView::ToImpl(isolate, challenge_value, challenge_cpp_value, UnionTypeConversionMode::kNotNullable, exception_state);
    if (exception_state.HadException())
      return;
    impl->setChallenge(challenge_cpp_value);
  }

  v8::Local<v8::Value> exclude_credentials_value;
  if (!v8Object->Get(context, keys[3].Get(isolate)).ToLocal(&exclude_credentials_value)) {
    exception_state.RethrowV8Exception(block.Exception());
    return;
  }
  if (exclude_credentials_value.IsEmpty() || exclude_credentials_value->IsUndefined()) {
    // Do nothing.
  } else {
    HeapVector<Member<PublicKeyCredentialDescriptor>> exclude_credentials_cpp_value = NativeValueTraits<IDLSequence<PublicKeyCredentialDescriptor>>::NativeValue(isolate, exclude_credentials_value, exception_state);
    if (exception_state.HadException())
      return;
    impl->setExcludeCredentials(exclude_credentials_cpp_value);
  }

  v8::Local<v8::Value> extensions_value;
  if (!v8Object->Get(context, keys[4].Get(isolate)).ToLocal(&extensions_value)) {
    exception_state.RethrowV8Exception(block.Exception());
    return;
  }
  if (extensions_value.IsEmpty() || extensions_value->IsUndefined()) {
    // Do nothing.
  } else {
    AuthenticationExtensionsClientInputs* extensions_cpp_value = NativeValueTraits<AuthenticationExtensionsClientInputs>::NativeValue(isolate, extensions_value, exception_state);
    if (exception_state.HadException())
      return;
    impl->setExtensions(extensions_cpp_value);
  }

  v8::Local<v8::Value> pub_key_cred_params_value;
  if (!v8Object->Get(context, keys[5].Get(isolate)).ToLocal(&pub_key_cred_params_value)) {
    exception_state.RethrowV8Exception(block.Exception());
    return;
  }
  if (pub_key_cred_params_value.IsEmpty() || pub_key_cred_params_value->IsUndefined()) {
    exception_state.ThrowTypeError("required member pubKeyCredParams is undefined.");
    return;
  } else {
    HeapVector<Member<PublicKeyCredentialParameters>> pub_key_cred_params_cpp_value = NativeValueTraits<IDLSequence<PublicKeyCredentialParameters>>::NativeValue(isolate, pub_key_cred_params_value, exception_state);
    if (exception_state.HadException())
      return;
    impl->setPubKeyCredParams(pub_key_cred_params_cpp_value);
  }

  v8::Local<v8::Value> rp_value;
  if (!v8Object->Get(context, keys[6].Get(isolate)).ToLocal(&rp_value)) {
    exception_state.RethrowV8Exception(block.Exception());
    return;
  }
  if (rp_value.IsEmpty() || rp_value->IsUndefined()) {
    exception_state.ThrowTypeError("required member rp is undefined.");
    return;
  } else {
    PublicKeyCredentialRpEntity* rp_cpp_value = NativeValueTraits<PublicKeyCredentialRpEntity>::NativeValue(isolate, rp_value, exception_state);
    if (exception_state.HadException())
      return;
    impl->setRp(rp_cpp_value);
  }

  v8::Local<v8::Value> timeout_value;
  if (!v8Object->Get(context, keys[7].Get(isolate)).ToLocal(&timeout_value)) {
    exception_state.RethrowV8Exception(block.Exception());
    return;
  }
  if (timeout_value.IsEmpty() || timeout_value->IsUndefined()) {
    // Do nothing.
  } else {
    uint32_t timeout_cpp_value = NativeValueTraits<IDLUnsignedLong>::NativeValue(isolate, timeout_value, exception_state);
    if (exception_state.HadException())
      return;
    impl->setTimeout(timeout_cpp_value);
  }

  v8::Local<v8::Value> user_value;
  if (!v8Object->Get(context, keys[8].Get(isolate)).ToLocal(&user_value)) {
    exception_state.RethrowV8Exception(block.Exception());
    return;
  }
  if (user_value.IsEmpty() || user_value->IsUndefined()) {
    exception_state.ThrowTypeError("required member user is undefined.");
    return;
  } else {
    PublicKeyCredentialUserEntity* user_cpp_value = NativeValueTraits<PublicKeyCredentialUserEntity>::NativeValue(isolate, user_value, exception_state);
    if (exception_state.HadException())
      return;
    impl->setUser(user_cpp_value);
  }
}

v8::Local<v8::Value> PublicKeyCredentialCreationOptions::ToV8Impl(v8::Local<v8::Object> creationContext, v8::Isolate* isolate) const {
  v8::Local<v8::Object> v8Object = v8::Object::New(isolate);
  if (!toV8PublicKeyCredentialCreationOptions(this, v8Object, creationContext, isolate))
    return v8::Undefined(isolate);
  return v8Object;
}

bool toV8PublicKeyCredentialCreationOptions(const PublicKeyCredentialCreationOptions* impl, v8::Local<v8::Object> dictionary, v8::Local<v8::Object> creationContext, v8::Isolate* isolate) {
  const v8::Eternal<v8::Name>* keys = eternalV8PublicKeyCredentialCreationOptionsKeys(isolate);
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

  v8::Local<v8::Value> attestation_value;
  bool attestation_has_value_or_default = false;
  if (impl->hasAttestation()) {
    attestation_value = V8String(isolate, impl->attestation());
    attestation_has_value_or_default = true;
  }
  if (attestation_has_value_or_default &&
      !create_property(0, attestation_value)) {
    return false;
  }

  v8::Local<v8::Value> authenticator_selection_value;
  bool authenticator_selection_has_value_or_default = false;
  if (impl->hasAuthenticatorSelection()) {
    authenticator_selection_value = ToV8(impl->authenticatorSelection(), creationContext, isolate);
    authenticator_selection_has_value_or_default = true;
  }
  if (authenticator_selection_has_value_or_default &&
      !create_property(1, authenticator_selection_value)) {
    return false;
  }

  v8::Local<v8::Value> challenge_value;
  bool challenge_has_value_or_default = false;
  if (impl->hasChallenge()) {
    challenge_value = ToV8(impl->challenge(), creationContext, isolate);
    challenge_has_value_or_default = true;
  } else {
    NOTREACHED();
  }
  if (challenge_has_value_or_default &&
      !create_property(2, challenge_value)) {
    return false;
  }

  v8::Local<v8::Value> exclude_credentials_value;
  bool exclude_credentials_has_value_or_default = false;
  if (impl->hasExcludeCredentials()) {
    exclude_credentials_value = ToV8(impl->excludeCredentials(), creationContext, isolate);
    exclude_credentials_has_value_or_default = true;
  } else {
    exclude_credentials_value = ToV8(HeapVector<Member<PublicKeyCredentialDescriptor>>(), creationContext, isolate);
    exclude_credentials_has_value_or_default = true;
  }
  if (exclude_credentials_has_value_or_default &&
      !create_property(3, exclude_credentials_value)) {
    return false;
  }

  v8::Local<v8::Value> extensions_value;
  bool extensions_has_value_or_default = false;
  if (impl->hasExtensions()) {
    extensions_value = ToV8(impl->extensions(), creationContext, isolate);
    extensions_has_value_or_default = true;
  }
  if (extensions_has_value_or_default &&
      !create_property(4, extensions_value)) {
    return false;
  }

  v8::Local<v8::Value> pub_key_cred_params_value;
  bool pub_key_cred_params_has_value_or_default = false;
  if (impl->hasPubKeyCredParams()) {
    pub_key_cred_params_value = ToV8(impl->pubKeyCredParams(), creationContext, isolate);
    pub_key_cred_params_has_value_or_default = true;
  } else {
    NOTREACHED();
  }
  if (pub_key_cred_params_has_value_or_default &&
      !create_property(5, pub_key_cred_params_value)) {
    return false;
  }

  v8::Local<v8::Value> rp_value;
  bool rp_has_value_or_default = false;
  if (impl->hasRp()) {
    rp_value = ToV8(impl->rp(), creationContext, isolate);
    rp_has_value_or_default = true;
  } else {
    NOTREACHED();
  }
  if (rp_has_value_or_default &&
      !create_property(6, rp_value)) {
    return false;
  }

  v8::Local<v8::Value> timeout_value;
  bool timeout_has_value_or_default = false;
  if (impl->hasTimeout()) {
    timeout_value = v8::Integer::NewFromUnsigned(isolate, impl->timeout());
    timeout_has_value_or_default = true;
  }
  if (timeout_has_value_or_default &&
      !create_property(7, timeout_value)) {
    return false;
  }

  v8::Local<v8::Value> user_value;
  bool user_has_value_or_default = false;
  if (impl->hasUser()) {
    user_value = ToV8(impl->user(), creationContext, isolate);
    user_has_value_or_default = true;
  } else {
    NOTREACHED();
  }
  if (user_has_value_or_default &&
      !create_property(8, user_value)) {
    return false;
  }

  return true;
}

PublicKeyCredentialCreationOptions* NativeValueTraits<PublicKeyCredentialCreationOptions>::NativeValue(v8::Isolate* isolate, v8::Local<v8::Value> value, ExceptionState& exception_state) {
  PublicKeyCredentialCreationOptions* impl = PublicKeyCredentialCreationOptions::Create();
  V8PublicKeyCredentialCreationOptions::ToImpl(isolate, value, impl, exception_state);
  return impl;
}

}  // namespace blink
