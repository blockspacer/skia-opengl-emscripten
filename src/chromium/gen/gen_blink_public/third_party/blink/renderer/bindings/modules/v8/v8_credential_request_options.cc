// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated from the Jinja2 template
// third_party/blink/renderer/bindings/templates/dictionary_v8.cc.tmpl
// by the script code_generator_v8.py.
// DO NOT MODIFY!

// clang-format off
#include "third_party/blink/renderer/bindings/modules/v8/v8_credential_request_options.h"

#include "base/stl_util.h"
#include "third_party/blink/renderer/bindings/core/v8/idl_types.h"
#include "third_party/blink/renderer/bindings/core/v8/native_value_traits_impl.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_abort_signal.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_federated_credential_request_options.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_public_key_credential_request_options.h"
#include "third_party/blink/renderer/platform/bindings/exception_state.h"

namespace blink {

static const v8::Eternal<v8::Name>* eternalV8CredentialRequestOptionsKeys(v8::Isolate* isolate) {
  static const char* const kKeys[] = {
    "federated",
    "mediation",
    "password",
    "publicKey",
    "signal",
  };
  return V8PerIsolateData::From(isolate)->FindOrCreateEternalNameCache(
      kKeys, kKeys, base::size(kKeys));
}

void V8CredentialRequestOptions::ToImpl(v8::Isolate* isolate, v8::Local<v8::Value> v8_value, CredentialRequestOptions* impl, ExceptionState& exception_state) {
  if (IsUndefinedOrNull(v8_value)) {
    return;
  }
  if (!v8_value->IsObject()) {
    exception_state.ThrowTypeError("cannot convert to dictionary.");
    return;
  }
  v8::Local<v8::Object> v8Object = v8_value.As<v8::Object>();
  ALLOW_UNUSED_LOCAL(v8Object);

  const v8::Eternal<v8::Name>* keys = eternalV8CredentialRequestOptionsKeys(isolate);
  v8::TryCatch block(isolate);
  v8::Local<v8::Context> context = isolate->GetCurrentContext();
  v8::Local<v8::Value> federated_value;
  if (!v8Object->Get(context, keys[0].Get(isolate)).ToLocal(&federated_value)) {
    exception_state.RethrowV8Exception(block.Exception());
    return;
  }
  if (federated_value.IsEmpty() || federated_value->IsUndefined()) {
    // Do nothing.
  } else {
    FederatedCredentialRequestOptions* federated_cpp_value = NativeValueTraits<FederatedCredentialRequestOptions>::NativeValue(isolate, federated_value, exception_state);
    if (exception_state.HadException())
      return;
    impl->setFederated(federated_cpp_value);
  }

  v8::Local<v8::Value> mediation_value;
  if (!v8Object->Get(context, keys[1].Get(isolate)).ToLocal(&mediation_value)) {
    exception_state.RethrowV8Exception(block.Exception());
    return;
  }
  if (mediation_value.IsEmpty() || mediation_value->IsUndefined()) {
    // Do nothing.
  } else {
    V8StringResource<> mediation_cpp_value = mediation_value;
    if (!mediation_cpp_value.Prepare(exception_state))
      return;
    const char* kValidValues[] = {
        "silent",
        "optional",
        "required",
    };
    if (!IsValidEnum(mediation_cpp_value, kValidValues, base::size(kValidValues), "CredentialMediationRequirement", exception_state))
      return;
    impl->setMediation(mediation_cpp_value);
  }

  v8::Local<v8::Value> password_value;
  if (!v8Object->Get(context, keys[2].Get(isolate)).ToLocal(&password_value)) {
    exception_state.RethrowV8Exception(block.Exception());
    return;
  }
  if (password_value.IsEmpty() || password_value->IsUndefined()) {
    // Do nothing.
  } else {
    bool password_cpp_value = NativeValueTraits<IDLBoolean>::NativeValue(isolate, password_value, exception_state);
    if (exception_state.HadException())
      return;
    impl->setPassword(password_cpp_value);
  }

  v8::Local<v8::Value> public_key_value;
  if (!v8Object->Get(context, keys[3].Get(isolate)).ToLocal(&public_key_value)) {
    exception_state.RethrowV8Exception(block.Exception());
    return;
  }
  if (public_key_value.IsEmpty() || public_key_value->IsUndefined()) {
    // Do nothing.
  } else {
    PublicKeyCredentialRequestOptions* public_key_cpp_value = NativeValueTraits<PublicKeyCredentialRequestOptions>::NativeValue(isolate, public_key_value, exception_state);
    if (exception_state.HadException())
      return;
    impl->setPublicKey(public_key_cpp_value);
  }

  v8::Local<v8::Value> signal_value;
  if (!v8Object->Get(context, keys[4].Get(isolate)).ToLocal(&signal_value)) {
    exception_state.RethrowV8Exception(block.Exception());
    return;
  }
  if (signal_value.IsEmpty() || signal_value->IsUndefined()) {
    // Do nothing.
  } else {
    AbortSignal* signal_cpp_value = V8AbortSignal::ToImplWithTypeCheck(isolate, signal_value);
    if (!signal_cpp_value) {
      exception_state.ThrowTypeError("member signal is not of type AbortSignal.");
      return;
    }
    impl->setSignal(signal_cpp_value);
  }
}

v8::Local<v8::Value> CredentialRequestOptions::ToV8Impl(v8::Local<v8::Object> creationContext, v8::Isolate* isolate) const {
  v8::Local<v8::Object> v8Object = v8::Object::New(isolate);
  if (!toV8CredentialRequestOptions(this, v8Object, creationContext, isolate))
    return v8::Undefined(isolate);
  return v8Object;
}

bool toV8CredentialRequestOptions(const CredentialRequestOptions* impl, v8::Local<v8::Object> dictionary, v8::Local<v8::Object> creationContext, v8::Isolate* isolate) {
  const v8::Eternal<v8::Name>* keys = eternalV8CredentialRequestOptionsKeys(isolate);
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

  v8::Local<v8::Value> federated_value;
  bool federated_has_value_or_default = false;
  if (impl->hasFederated()) {
    federated_value = ToV8(impl->federated(), creationContext, isolate);
    federated_has_value_or_default = true;
  }
  if (federated_has_value_or_default &&
      !create_property(0, federated_value)) {
    return false;
  }

  v8::Local<v8::Value> mediation_value;
  bool mediation_has_value_or_default = false;
  if (impl->hasMediation()) {
    mediation_value = V8String(isolate, impl->mediation());
    mediation_has_value_or_default = true;
  } else {
    mediation_value = V8String(isolate, "optional");
    mediation_has_value_or_default = true;
  }
  if (mediation_has_value_or_default &&
      !create_property(1, mediation_value)) {
    return false;
  }

  v8::Local<v8::Value> password_value;
  bool password_has_value_or_default = false;
  if (impl->hasPassword()) {
    password_value = v8::Boolean::New(isolate, impl->password());
    password_has_value_or_default = true;
  } else {
    password_value = v8::Boolean::New(isolate, false);
    password_has_value_or_default = true;
  }
  if (password_has_value_or_default &&
      !create_property(2, password_value)) {
    return false;
  }

  v8::Local<v8::Value> public_key_value;
  bool public_key_has_value_or_default = false;
  if (impl->hasPublicKey()) {
    public_key_value = ToV8(impl->publicKey(), creationContext, isolate);
    public_key_has_value_or_default = true;
  }
  if (public_key_has_value_or_default &&
      !create_property(3, public_key_value)) {
    return false;
  }

  v8::Local<v8::Value> signal_value;
  bool signal_has_value_or_default = false;
  if (impl->hasSignal()) {
    signal_value = ToV8(impl->signal(), creationContext, isolate);
    signal_has_value_or_default = true;
  }
  if (signal_has_value_or_default &&
      !create_property(4, signal_value)) {
    return false;
  }

  return true;
}

CredentialRequestOptions* NativeValueTraits<CredentialRequestOptions>::NativeValue(v8::Isolate* isolate, v8::Local<v8::Value> value, ExceptionState& exception_state) {
  CredentialRequestOptions* impl = CredentialRequestOptions::Create();
  V8CredentialRequestOptions::ToImpl(isolate, value, impl, exception_state);
  return impl;
}

}  // namespace blink
