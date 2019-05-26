// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated from the Jinja2 template
// third_party/blink/renderer/bindings/templates/dictionary_v8.cc.tmpl
// by the script code_generator_v8.py.
// DO NOT MODIFY!

// clang-format off
#include "third_party/blink/renderer/bindings/modules/v8/v8_federated_credential_init.h"

#include "base/stl_util.h"
#include "third_party/blink/renderer/bindings/core/v8/idl_types.h"
#include "third_party/blink/renderer/bindings/core/v8/native_value_traits_impl.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_credential_data.h"
#include "third_party/blink/renderer/platform/bindings/exception_state.h"

namespace blink {

static const v8::Eternal<v8::Name>* eternalV8FederatedCredentialInitKeys(v8::Isolate* isolate) {
  static const char* const kKeys[] = {
    "iconURL",
    "name",
    "protocol",
    "provider",
  };
  return V8PerIsolateData::From(isolate)->FindOrCreateEternalNameCache(
      kKeys, kKeys, base::size(kKeys));
}

void V8FederatedCredentialInit::ToImpl(v8::Isolate* isolate, v8::Local<v8::Value> v8_value, FederatedCredentialInit* impl, ExceptionState& exception_state) {
  if (IsUndefinedOrNull(v8_value)) {
    exception_state.ThrowTypeError("Missing required member(s): provider.");
    return;
  }
  if (!v8_value->IsObject()) {
    exception_state.ThrowTypeError("cannot convert to dictionary.");
    return;
  }
  v8::Local<v8::Object> v8Object = v8_value.As<v8::Object>();
  ALLOW_UNUSED_LOCAL(v8Object);

  V8CredentialData::ToImpl(isolate, v8_value, impl, exception_state);
  if (exception_state.HadException())
    return;

  const v8::Eternal<v8::Name>* keys = eternalV8FederatedCredentialInitKeys(isolate);
  v8::TryCatch block(isolate);
  v8::Local<v8::Context> context = isolate->GetCurrentContext();
  v8::Local<v8::Value> icon_url_value;
  if (!v8Object->Get(context, keys[0].Get(isolate)).ToLocal(&icon_url_value)) {
    exception_state.RethrowV8Exception(block.Exception());
    return;
  }
  if (icon_url_value.IsEmpty() || icon_url_value->IsUndefined()) {
    // Do nothing.
  } else {
    V8StringResource<> icon_url_cpp_value = NativeValueTraits<IDLUSVString>::NativeValue(isolate, icon_url_value, exception_state);
    if (exception_state.HadException())
      return;
    impl->setIconURL(icon_url_cpp_value);
  }

  v8::Local<v8::Value> name_value;
  if (!v8Object->Get(context, keys[1].Get(isolate)).ToLocal(&name_value)) {
    exception_state.RethrowV8Exception(block.Exception());
    return;
  }
  if (name_value.IsEmpty() || name_value->IsUndefined()) {
    // Do nothing.
  } else {
    V8StringResource<> name_cpp_value = NativeValueTraits<IDLUSVString>::NativeValue(isolate, name_value, exception_state);
    if (exception_state.HadException())
      return;
    impl->setName(name_cpp_value);
  }

  v8::Local<v8::Value> protocol_value;
  if (!v8Object->Get(context, keys[2].Get(isolate)).ToLocal(&protocol_value)) {
    exception_state.RethrowV8Exception(block.Exception());
    return;
  }
  if (protocol_value.IsEmpty() || protocol_value->IsUndefined()) {
    // Do nothing.
  } else {
    V8StringResource<> protocol_cpp_value = protocol_value;
    if (!protocol_cpp_value.Prepare(exception_state))
      return;
    impl->setProtocol(protocol_cpp_value);
  }

  v8::Local<v8::Value> provider_value;
  if (!v8Object->Get(context, keys[3].Get(isolate)).ToLocal(&provider_value)) {
    exception_state.RethrowV8Exception(block.Exception());
    return;
  }
  if (provider_value.IsEmpty() || provider_value->IsUndefined()) {
    exception_state.ThrowTypeError("required member provider is undefined.");
    return;
  } else {
    V8StringResource<> provider_cpp_value = NativeValueTraits<IDLUSVString>::NativeValue(isolate, provider_value, exception_state);
    if (exception_state.HadException())
      return;
    impl->setProvider(provider_cpp_value);
  }
}

v8::Local<v8::Value> FederatedCredentialInit::ToV8Impl(v8::Local<v8::Object> creationContext, v8::Isolate* isolate) const {
  v8::Local<v8::Object> v8Object = v8::Object::New(isolate);
  if (!toV8FederatedCredentialInit(this, v8Object, creationContext, isolate))
    return v8::Undefined(isolate);
  return v8Object;
}

bool toV8FederatedCredentialInit(const FederatedCredentialInit* impl, v8::Local<v8::Object> dictionary, v8::Local<v8::Object> creationContext, v8::Isolate* isolate) {
  if (!toV8CredentialData(impl, dictionary, creationContext, isolate))
    return false;

  const v8::Eternal<v8::Name>* keys = eternalV8FederatedCredentialInitKeys(isolate);
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

  v8::Local<v8::Value> icon_url_value;
  bool icon_url_has_value_or_default = false;
  if (impl->hasIconURL()) {
    icon_url_value = V8String(isolate, impl->iconURL());
    icon_url_has_value_or_default = true;
  }
  if (icon_url_has_value_or_default &&
      !create_property(0, icon_url_value)) {
    return false;
  }

  v8::Local<v8::Value> name_value;
  bool name_has_value_or_default = false;
  if (impl->hasName()) {
    name_value = V8String(isolate, impl->name());
    name_has_value_or_default = true;
  }
  if (name_has_value_or_default &&
      !create_property(1, name_value)) {
    return false;
  }

  v8::Local<v8::Value> protocol_value;
  bool protocol_has_value_or_default = false;
  if (impl->hasProtocol()) {
    protocol_value = V8String(isolate, impl->protocol());
    protocol_has_value_or_default = true;
  }
  if (protocol_has_value_or_default &&
      !create_property(2, protocol_value)) {
    return false;
  }

  v8::Local<v8::Value> provider_value;
  bool provider_has_value_or_default = false;
  if (impl->hasProvider()) {
    provider_value = V8String(isolate, impl->provider());
    provider_has_value_or_default = true;
  } else {
    NOTREACHED();
  }
  if (provider_has_value_or_default &&
      !create_property(3, provider_value)) {
    return false;
  }

  return true;
}

FederatedCredentialInit* NativeValueTraits<FederatedCredentialInit>::NativeValue(v8::Isolate* isolate, v8::Local<v8::Value> value, ExceptionState& exception_state) {
  FederatedCredentialInit* impl = FederatedCredentialInit::Create();
  V8FederatedCredentialInit::ToImpl(isolate, value, impl, exception_state);
  return impl;
}

}  // namespace blink
