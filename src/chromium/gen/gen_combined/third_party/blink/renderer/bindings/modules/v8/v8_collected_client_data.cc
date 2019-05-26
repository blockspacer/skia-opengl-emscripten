// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated from the Jinja2 template
// third_party/blink/renderer/bindings/templates/dictionary_v8.cc.tmpl
// by the script code_generator_v8.py.
// DO NOT MODIFY!

// clang-format off
#include "third_party/blink/renderer/bindings/modules/v8/v8_collected_client_data.h"

#include "base/stl_util.h"
#include "third_party/blink/renderer/bindings/core/v8/idl_types.h"
#include "third_party/blink/renderer/bindings/core/v8/native_value_traits_impl.h"
#include "third_party/blink/renderer/platform/bindings/exception_state.h"

namespace blink {

static const v8::Eternal<v8::Name>* eternalV8CollectedClientDataKeys(v8::Isolate* isolate) {
  static const char* const kKeys[] = {
    "challenge",
    "origin",
    "tokenBindingId",
    "type",
  };
  return V8PerIsolateData::From(isolate)->FindOrCreateEternalNameCache(
      kKeys, kKeys, base::size(kKeys));
}

void V8CollectedClientData::ToImpl(v8::Isolate* isolate, v8::Local<v8::Value> v8_value, CollectedClientData* impl, ExceptionState& exception_state) {
  if (IsUndefinedOrNull(v8_value)) {
    exception_state.ThrowTypeError("Missing required member(s): challenge, origin, type.");
    return;
  }
  if (!v8_value->IsObject()) {
    exception_state.ThrowTypeError("cannot convert to dictionary.");
    return;
  }
  v8::Local<v8::Object> v8Object = v8_value.As<v8::Object>();
  ALLOW_UNUSED_LOCAL(v8Object);

  const v8::Eternal<v8::Name>* keys = eternalV8CollectedClientDataKeys(isolate);
  v8::TryCatch block(isolate);
  v8::Local<v8::Context> context = isolate->GetCurrentContext();
  v8::Local<v8::Value> challenge_value;
  if (!v8Object->Get(context, keys[0].Get(isolate)).ToLocal(&challenge_value)) {
    exception_state.RethrowV8Exception(block.Exception());
    return;
  }
  if (challenge_value.IsEmpty() || challenge_value->IsUndefined()) {
    exception_state.ThrowTypeError("required member challenge is undefined.");
    return;
  } else {
    V8StringResource<> challenge_cpp_value = challenge_value;
    if (!challenge_cpp_value.Prepare(exception_state))
      return;
    impl->setChallenge(challenge_cpp_value);
  }

  v8::Local<v8::Value> origin_value;
  if (!v8Object->Get(context, keys[1].Get(isolate)).ToLocal(&origin_value)) {
    exception_state.RethrowV8Exception(block.Exception());
    return;
  }
  if (origin_value.IsEmpty() || origin_value->IsUndefined()) {
    exception_state.ThrowTypeError("required member origin is undefined.");
    return;
  } else {
    V8StringResource<> origin_cpp_value = origin_value;
    if (!origin_cpp_value.Prepare(exception_state))
      return;
    impl->setOrigin(origin_cpp_value);
  }

  v8::Local<v8::Value> token_binding_id_value;
  if (!v8Object->Get(context, keys[2].Get(isolate)).ToLocal(&token_binding_id_value)) {
    exception_state.RethrowV8Exception(block.Exception());
    return;
  }
  if (token_binding_id_value.IsEmpty() || token_binding_id_value->IsUndefined()) {
    // Do nothing.
  } else {
    V8StringResource<> token_binding_id_cpp_value = token_binding_id_value;
    if (!token_binding_id_cpp_value.Prepare(exception_state))
      return;
    impl->setTokenBindingId(token_binding_id_cpp_value);
  }

  v8::Local<v8::Value> type_value;
  if (!v8Object->Get(context, keys[3].Get(isolate)).ToLocal(&type_value)) {
    exception_state.RethrowV8Exception(block.Exception());
    return;
  }
  if (type_value.IsEmpty() || type_value->IsUndefined()) {
    exception_state.ThrowTypeError("required member type is undefined.");
    return;
  } else {
    V8StringResource<> type_cpp_value = type_value;
    if (!type_cpp_value.Prepare(exception_state))
      return;
    impl->setType(type_cpp_value);
  }
}

v8::Local<v8::Value> CollectedClientData::ToV8Impl(v8::Local<v8::Object> creationContext, v8::Isolate* isolate) const {
  v8::Local<v8::Object> v8Object = v8::Object::New(isolate);
  if (!toV8CollectedClientData(this, v8Object, creationContext, isolate))
    return v8::Undefined(isolate);
  return v8Object;
}

bool toV8CollectedClientData(const CollectedClientData* impl, v8::Local<v8::Object> dictionary, v8::Local<v8::Object> creationContext, v8::Isolate* isolate) {
  const v8::Eternal<v8::Name>* keys = eternalV8CollectedClientDataKeys(isolate);
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

  v8::Local<v8::Value> challenge_value;
  bool challenge_has_value_or_default = false;
  if (impl->hasChallenge()) {
    challenge_value = V8String(isolate, impl->challenge());
    challenge_has_value_or_default = true;
  } else {
    NOTREACHED();
  }
  if (challenge_has_value_or_default &&
      !create_property(0, challenge_value)) {
    return false;
  }

  v8::Local<v8::Value> origin_value;
  bool origin_has_value_or_default = false;
  if (impl->hasOrigin()) {
    origin_value = V8String(isolate, impl->origin());
    origin_has_value_or_default = true;
  } else {
    NOTREACHED();
  }
  if (origin_has_value_or_default &&
      !create_property(1, origin_value)) {
    return false;
  }

  v8::Local<v8::Value> token_binding_id_value;
  bool token_binding_id_has_value_or_default = false;
  if (impl->hasTokenBindingId()) {
    token_binding_id_value = V8String(isolate, impl->tokenBindingId());
    token_binding_id_has_value_or_default = true;
  }
  if (token_binding_id_has_value_or_default &&
      !create_property(2, token_binding_id_value)) {
    return false;
  }

  v8::Local<v8::Value> type_value;
  bool type_has_value_or_default = false;
  if (impl->hasType()) {
    type_value = V8String(isolate, impl->type());
    type_has_value_or_default = true;
  } else {
    NOTREACHED();
  }
  if (type_has_value_or_default &&
      !create_property(3, type_value)) {
    return false;
  }

  return true;
}

CollectedClientData* NativeValueTraits<CollectedClientData>::NativeValue(v8::Isolate* isolate, v8::Local<v8::Value> value, ExceptionState& exception_state) {
  CollectedClientData* impl = CollectedClientData::Create();
  V8CollectedClientData::ToImpl(isolate, value, impl, exception_state);
  return impl;
}

}  // namespace blink
