// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated from the Jinja2 template
// third_party/blink/renderer/bindings/templates/dictionary_v8.cc.tmpl
// by the script code_generator_v8.py.
// DO NOT MODIFY!

// clang-format off
#include "third_party/blink/renderer/bindings/modules/v8/v8_public_key_credential_request_options.h"

#include "base/stl_util.h"
#include "third_party/blink/renderer/bindings/core/v8/idl_types.h"
#include "third_party/blink/renderer/bindings/core/v8/native_value_traits_impl.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_array_buffer.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_array_buffer_view.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_authentication_extensions_client_inputs.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_public_key_credential_descriptor.h"
#include "third_party/blink/renderer/core/typed_arrays/array_buffer_view_helpers.h"
#include "third_party/blink/renderer/core/typed_arrays/flexible_array_buffer_view.h"
#include "third_party/blink/renderer/platform/bindings/exception_state.h"

namespace blink {

static const v8::Eternal<v8::Name>* eternalV8PublicKeyCredentialRequestOptionsKeys(v8::Isolate* isolate) {
  static const char* const kKeys[] = {
    "allowCredentials",
    "challenge",
    "extensions",
    "rpId",
    "timeout",
    "userVerification",
  };
  return V8PerIsolateData::From(isolate)->FindOrCreateEternalNameCache(
      kKeys, kKeys, base::size(kKeys));
}

void V8PublicKeyCredentialRequestOptions::ToImpl(v8::Isolate* isolate, v8::Local<v8::Value> v8_value, PublicKeyCredentialRequestOptions* impl, ExceptionState& exception_state) {
  if (IsUndefinedOrNull(v8_value)) {
    exception_state.ThrowTypeError("Missing required member(s): challenge.");
    return;
  }
  if (!v8_value->IsObject()) {
    exception_state.ThrowTypeError("cannot convert to dictionary.");
    return;
  }
  v8::Local<v8::Object> v8Object = v8_value.As<v8::Object>();
  ALLOW_UNUSED_LOCAL(v8Object);

  const v8::Eternal<v8::Name>* keys = eternalV8PublicKeyCredentialRequestOptionsKeys(isolate);
  v8::TryCatch block(isolate);
  v8::Local<v8::Context> context = isolate->GetCurrentContext();
  v8::Local<v8::Value> allow_credentials_value;
  if (!v8Object->Get(context, keys[0].Get(isolate)).ToLocal(&allow_credentials_value)) {
    exception_state.RethrowV8Exception(block.Exception());
    return;
  }
  if (allow_credentials_value.IsEmpty() || allow_credentials_value->IsUndefined()) {
    // Do nothing.
  } else {
    HeapVector<Member<PublicKeyCredentialDescriptor>> allow_credentials_cpp_value = NativeValueTraits<IDLSequence<PublicKeyCredentialDescriptor>>::NativeValue(isolate, allow_credentials_value, exception_state);
    if (exception_state.HadException())
      return;
    impl->setAllowCredentials(allow_credentials_cpp_value);
  }

  v8::Local<v8::Value> challenge_value;
  if (!v8Object->Get(context, keys[1].Get(isolate)).ToLocal(&challenge_value)) {
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

  v8::Local<v8::Value> extensions_value;
  if (!v8Object->Get(context, keys[2].Get(isolate)).ToLocal(&extensions_value)) {
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

  v8::Local<v8::Value> rp_id_value;
  if (!v8Object->Get(context, keys[3].Get(isolate)).ToLocal(&rp_id_value)) {
    exception_state.RethrowV8Exception(block.Exception());
    return;
  }
  if (rp_id_value.IsEmpty() || rp_id_value->IsUndefined()) {
    // Do nothing.
  } else {
    V8StringResource<> rp_id_cpp_value = NativeValueTraits<IDLUSVString>::NativeValue(isolate, rp_id_value, exception_state);
    if (exception_state.HadException())
      return;
    impl->setRpId(rp_id_cpp_value);
  }

  v8::Local<v8::Value> timeout_value;
  if (!v8Object->Get(context, keys[4].Get(isolate)).ToLocal(&timeout_value)) {
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

  v8::Local<v8::Value> user_verification_value;
  if (!v8Object->Get(context, keys[5].Get(isolate)).ToLocal(&user_verification_value)) {
    exception_state.RethrowV8Exception(block.Exception());
    return;
  }
  if (user_verification_value.IsEmpty() || user_verification_value->IsUndefined()) {
    // Do nothing.
  } else {
    V8StringResource<> user_verification_cpp_value = user_verification_value;
    if (!user_verification_cpp_value.Prepare(exception_state))
      return;
    const char* kValidValues[] = {
        "required",
        "preferred",
        "discouraged",
    };
    if (!IsValidEnum(user_verification_cpp_value, kValidValues, base::size(kValidValues), "UserVerificationRequirement", exception_state))
      return;
    impl->setUserVerification(user_verification_cpp_value);
  }
}

v8::Local<v8::Value> PublicKeyCredentialRequestOptions::ToV8Impl(v8::Local<v8::Object> creationContext, v8::Isolate* isolate) const {
  v8::Local<v8::Object> v8Object = v8::Object::New(isolate);
  if (!toV8PublicKeyCredentialRequestOptions(this, v8Object, creationContext, isolate))
    return v8::Undefined(isolate);
  return v8Object;
}

bool toV8PublicKeyCredentialRequestOptions(const PublicKeyCredentialRequestOptions* impl, v8::Local<v8::Object> dictionary, v8::Local<v8::Object> creationContext, v8::Isolate* isolate) {
  const v8::Eternal<v8::Name>* keys = eternalV8PublicKeyCredentialRequestOptionsKeys(isolate);
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

  v8::Local<v8::Value> allow_credentials_value;
  bool allow_credentials_has_value_or_default = false;
  if (impl->hasAllowCredentials()) {
    allow_credentials_value = ToV8(impl->allowCredentials(), creationContext, isolate);
    allow_credentials_has_value_or_default = true;
  } else {
    allow_credentials_value = ToV8(HeapVector<Member<PublicKeyCredentialDescriptor>>(), creationContext, isolate);
    allow_credentials_has_value_or_default = true;
  }
  if (allow_credentials_has_value_or_default &&
      !create_property(0, allow_credentials_value)) {
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
      !create_property(1, challenge_value)) {
    return false;
  }

  v8::Local<v8::Value> extensions_value;
  bool extensions_has_value_or_default = false;
  if (impl->hasExtensions()) {
    extensions_value = ToV8(impl->extensions(), creationContext, isolate);
    extensions_has_value_or_default = true;
  }
  if (extensions_has_value_or_default &&
      !create_property(2, extensions_value)) {
    return false;
  }

  v8::Local<v8::Value> rp_id_value;
  bool rp_id_has_value_or_default = false;
  if (impl->hasRpId()) {
    rp_id_value = V8String(isolate, impl->rpId());
    rp_id_has_value_or_default = true;
  }
  if (rp_id_has_value_or_default &&
      !create_property(3, rp_id_value)) {
    return false;
  }

  v8::Local<v8::Value> timeout_value;
  bool timeout_has_value_or_default = false;
  if (impl->hasTimeout()) {
    timeout_value = v8::Integer::NewFromUnsigned(isolate, impl->timeout());
    timeout_has_value_or_default = true;
  }
  if (timeout_has_value_or_default &&
      !create_property(4, timeout_value)) {
    return false;
  }

  v8::Local<v8::Value> user_verification_value;
  bool user_verification_has_value_or_default = false;
  if (impl->hasUserVerification()) {
    user_verification_value = V8String(isolate, impl->userVerification());
    user_verification_has_value_or_default = true;
  } else {
    user_verification_value = V8String(isolate, "preferred");
    user_verification_has_value_or_default = true;
  }
  if (user_verification_has_value_or_default &&
      !create_property(5, user_verification_value)) {
    return false;
  }

  return true;
}

PublicKeyCredentialRequestOptions* NativeValueTraits<PublicKeyCredentialRequestOptions>::NativeValue(v8::Isolate* isolate, v8::Local<v8::Value> value, ExceptionState& exception_state) {
  PublicKeyCredentialRequestOptions* impl = PublicKeyCredentialRequestOptions::Create();
  V8PublicKeyCredentialRequestOptions::ToImpl(isolate, value, impl, exception_state);
  return impl;
}

}  // namespace blink
