// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated from the Jinja2 template
// third_party/blink/renderer/bindings/templates/dictionary_v8.cc.tmpl
// by the script code_generator_v8.py.
// DO NOT MODIFY!

// clang-format off
#include "third_party/blink/renderer/bindings/modules/v8/v8_authenticator_selection_criteria.h"

#include "base/stl_util.h"
#include "third_party/blink/renderer/bindings/core/v8/idl_types.h"
#include "third_party/blink/renderer/bindings/core/v8/native_value_traits_impl.h"
#include "third_party/blink/renderer/platform/bindings/exception_state.h"

namespace blink {

static const v8::Eternal<v8::Name>* eternalV8AuthenticatorSelectionCriteriaKeys(v8::Isolate* isolate) {
  static const char* const kKeys[] = {
    "authenticatorAttachment",
    "requireResidentKey",
    "userVerification",
  };
  return V8PerIsolateData::From(isolate)->FindOrCreateEternalNameCache(
      kKeys, kKeys, base::size(kKeys));
}

void V8AuthenticatorSelectionCriteria::ToImpl(v8::Isolate* isolate, v8::Local<v8::Value> v8_value, AuthenticatorSelectionCriteria* impl, ExceptionState& exception_state) {
  if (IsUndefinedOrNull(v8_value)) {
    return;
  }
  if (!v8_value->IsObject()) {
    exception_state.ThrowTypeError("cannot convert to dictionary.");
    return;
  }
  v8::Local<v8::Object> v8Object = v8_value.As<v8::Object>();
  ALLOW_UNUSED_LOCAL(v8Object);

  const v8::Eternal<v8::Name>* keys = eternalV8AuthenticatorSelectionCriteriaKeys(isolate);
  v8::TryCatch block(isolate);
  v8::Local<v8::Context> context = isolate->GetCurrentContext();
  v8::Local<v8::Value> authenticator_attachment_value;
  if (!v8Object->Get(context, keys[0].Get(isolate)).ToLocal(&authenticator_attachment_value)) {
    exception_state.RethrowV8Exception(block.Exception());
    return;
  }
  if (authenticator_attachment_value.IsEmpty() || authenticator_attachment_value->IsUndefined()) {
    // Do nothing.
  } else {
    V8StringResource<> authenticator_attachment_cpp_value = authenticator_attachment_value;
    if (!authenticator_attachment_cpp_value.Prepare(exception_state))
      return;
    const char* kValidValues[] = {
        "platform",
        "cross-platform",
    };
    if (!IsValidEnum(authenticator_attachment_cpp_value, kValidValues, base::size(kValidValues), "AuthenticatorAttachment", exception_state))
      return;
    impl->setAuthenticatorAttachment(authenticator_attachment_cpp_value);
  }

  v8::Local<v8::Value> require_resident_key_value;
  if (!v8Object->Get(context, keys[1].Get(isolate)).ToLocal(&require_resident_key_value)) {
    exception_state.RethrowV8Exception(block.Exception());
    return;
  }
  if (require_resident_key_value.IsEmpty() || require_resident_key_value->IsUndefined()) {
    // Do nothing.
  } else {
    bool require_resident_key_cpp_value = NativeValueTraits<IDLBoolean>::NativeValue(isolate, require_resident_key_value, exception_state);
    if (exception_state.HadException())
      return;
    impl->setRequireResidentKey(require_resident_key_cpp_value);
  }

  v8::Local<v8::Value> user_verification_value;
  if (!v8Object->Get(context, keys[2].Get(isolate)).ToLocal(&user_verification_value)) {
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

v8::Local<v8::Value> AuthenticatorSelectionCriteria::ToV8Impl(v8::Local<v8::Object> creationContext, v8::Isolate* isolate) const {
  v8::Local<v8::Object> v8Object = v8::Object::New(isolate);
  if (!toV8AuthenticatorSelectionCriteria(this, v8Object, creationContext, isolate))
    return v8::Undefined(isolate);
  return v8Object;
}

bool toV8AuthenticatorSelectionCriteria(const AuthenticatorSelectionCriteria* impl, v8::Local<v8::Object> dictionary, v8::Local<v8::Object> creationContext, v8::Isolate* isolate) {
  const v8::Eternal<v8::Name>* keys = eternalV8AuthenticatorSelectionCriteriaKeys(isolate);
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

  v8::Local<v8::Value> authenticator_attachment_value;
  bool authenticator_attachment_has_value_or_default = false;
  if (impl->hasAuthenticatorAttachment()) {
    authenticator_attachment_value = V8String(isolate, impl->authenticatorAttachment());
    authenticator_attachment_has_value_or_default = true;
  }
  if (authenticator_attachment_has_value_or_default &&
      !create_property(0, authenticator_attachment_value)) {
    return false;
  }

  v8::Local<v8::Value> require_resident_key_value;
  bool require_resident_key_has_value_or_default = false;
  if (impl->hasRequireResidentKey()) {
    require_resident_key_value = v8::Boolean::New(isolate, impl->requireResidentKey());
    require_resident_key_has_value_or_default = true;
  } else {
    require_resident_key_value = v8::Boolean::New(isolate, false);
    require_resident_key_has_value_or_default = true;
  }
  if (require_resident_key_has_value_or_default &&
      !create_property(1, require_resident_key_value)) {
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
      !create_property(2, user_verification_value)) {
    return false;
  }

  return true;
}

AuthenticatorSelectionCriteria* NativeValueTraits<AuthenticatorSelectionCriteria>::NativeValue(v8::Isolate* isolate, v8::Local<v8::Value> value, ExceptionState& exception_state) {
  AuthenticatorSelectionCriteria* impl = AuthenticatorSelectionCriteria::Create();
  V8AuthenticatorSelectionCriteria::ToImpl(isolate, value, impl, exception_state);
  return impl;
}

}  // namespace blink
