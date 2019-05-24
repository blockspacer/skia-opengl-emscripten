// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated from the Jinja2 template
// third_party/blink/renderer/bindings/templates/dictionary_v8.cc.tmpl
// by the script code_generator_v8.py.
// DO NOT MODIFY!

// clang-format off
#include "third_party/blink/renderer/bindings/modules/v8/v8_credential_creation_options.h"

#include "base/stl_util.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_abort_signal.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_html_form_element.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_federated_credential_init.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_password_credential_data.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_public_key_credential_creation_options.h"
#include "third_party/blink/renderer/platform/bindings/exception_state.h"

namespace blink {

static const v8::Eternal<v8::Name>* eternalV8CredentialCreationOptionsKeys(v8::Isolate* isolate) {
  static const char* const kKeys[] = {
    "federated",
    "password",
    "publicKey",
    "signal",
  };
  return V8PerIsolateData::From(isolate)->FindOrCreateEternalNameCache(
      kKeys, kKeys, base::size(kKeys));
}

void V8CredentialCreationOptions::ToImpl(v8::Isolate* isolate, v8::Local<v8::Value> v8_value, CredentialCreationOptions* impl, ExceptionState& exception_state) {
  if (IsUndefinedOrNull(v8_value)) {
    return;
  }
  if (!v8_value->IsObject()) {
    exception_state.ThrowTypeError("cannot convert to dictionary.");
    return;
  }
  v8::Local<v8::Object> v8Object = v8_value.As<v8::Object>();
  ALLOW_UNUSED_LOCAL(v8Object);

  const v8::Eternal<v8::Name>* keys = eternalV8CredentialCreationOptionsKeys(isolate);
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
    FederatedCredentialInit* federated_cpp_value = NativeValueTraits<FederatedCredentialInit>::NativeValue(isolate, federated_value, exception_state);
    if (exception_state.HadException())
      return;
    impl->setFederated(federated_cpp_value);
  }

  v8::Local<v8::Value> password_value;
  if (!v8Object->Get(context, keys[1].Get(isolate)).ToLocal(&password_value)) {
    exception_state.RethrowV8Exception(block.Exception());
    return;
  }
  if (password_value.IsEmpty() || password_value->IsUndefined()) {
    // Do nothing.
  } else {
    PasswordCredentialDataOrHTMLFormElement password_cpp_value;
    V8PasswordCredentialDataOrHTMLFormElement::ToImpl(isolate, password_value, password_cpp_value, UnionTypeConversionMode::kNotNullable, exception_state);
    if (exception_state.HadException())
      return;
    impl->setPassword(password_cpp_value);
  }

  v8::Local<v8::Value> public_key_value;
  if (!v8Object->Get(context, keys[2].Get(isolate)).ToLocal(&public_key_value)) {
    exception_state.RethrowV8Exception(block.Exception());
    return;
  }
  if (public_key_value.IsEmpty() || public_key_value->IsUndefined()) {
    // Do nothing.
  } else {
    PublicKeyCredentialCreationOptions* public_key_cpp_value = NativeValueTraits<PublicKeyCredentialCreationOptions>::NativeValue(isolate, public_key_value, exception_state);
    if (exception_state.HadException())
      return;
    impl->setPublicKey(public_key_cpp_value);
  }

  v8::Local<v8::Value> signal_value;
  if (!v8Object->Get(context, keys[3].Get(isolate)).ToLocal(&signal_value)) {
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

v8::Local<v8::Value> CredentialCreationOptions::ToV8Impl(v8::Local<v8::Object> creationContext, v8::Isolate* isolate) const {
  v8::Local<v8::Object> v8Object = v8::Object::New(isolate);
  if (!toV8CredentialCreationOptions(this, v8Object, creationContext, isolate))
    return v8::Undefined(isolate);
  return v8Object;
}

bool toV8CredentialCreationOptions(const CredentialCreationOptions* impl, v8::Local<v8::Object> dictionary, v8::Local<v8::Object> creationContext, v8::Isolate* isolate) {
  const v8::Eternal<v8::Name>* keys = eternalV8CredentialCreationOptionsKeys(isolate);
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

  v8::Local<v8::Value> password_value;
  bool password_has_value_or_default = false;
  if (impl->hasPassword()) {
    password_value = ToV8(impl->password(), creationContext, isolate);
    password_has_value_or_default = true;
  }
  if (password_has_value_or_default &&
      !create_property(1, password_value)) {
    return false;
  }

  v8::Local<v8::Value> public_key_value;
  bool public_key_has_value_or_default = false;
  if (impl->hasPublicKey()) {
    public_key_value = ToV8(impl->publicKey(), creationContext, isolate);
    public_key_has_value_or_default = true;
  }
  if (public_key_has_value_or_default &&
      !create_property(2, public_key_value)) {
    return false;
  }

  v8::Local<v8::Value> signal_value;
  bool signal_has_value_or_default = false;
  if (impl->hasSignal()) {
    signal_value = ToV8(impl->signal(), creationContext, isolate);
    signal_has_value_or_default = true;
  }
  if (signal_has_value_or_default &&
      !create_property(3, signal_value)) {
    return false;
  }

  return true;
}

CredentialCreationOptions* NativeValueTraits<CredentialCreationOptions>::NativeValue(v8::Isolate* isolate, v8::Local<v8::Value> value, ExceptionState& exception_state) {
  CredentialCreationOptions* impl = CredentialCreationOptions::Create();
  V8CredentialCreationOptions::ToImpl(isolate, value, impl, exception_state);
  return impl;
}

}  // namespace blink
