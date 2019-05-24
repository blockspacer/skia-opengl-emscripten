// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated from the Jinja2 template
// third_party/blink/renderer/bindings/templates/dictionary_v8.cc.tmpl
// by the script code_generator_v8.py.
// DO NOT MODIFY!

// clang-format off
#include "third_party/blink/renderer/bindings/modules/v8/v8_lock_info.h"

#include "base/stl_util.h"
#include "third_party/blink/renderer/bindings/core/v8/idl_types.h"
#include "third_party/blink/renderer/bindings/core/v8/native_value_traits_impl.h"
#include "third_party/blink/renderer/platform/bindings/exception_state.h"

namespace blink {

static const v8::Eternal<v8::Name>* eternalV8LockInfoKeys(v8::Isolate* isolate) {
  static const char* const kKeys[] = {
    "clientId",
    "mode",
    "name",
  };
  return V8PerIsolateData::From(isolate)->FindOrCreateEternalNameCache(
      kKeys, kKeys, base::size(kKeys));
}

void V8LockInfo::ToImpl(v8::Isolate* isolate, v8::Local<v8::Value> v8_value, LockInfo* impl, ExceptionState& exception_state) {
  if (IsUndefinedOrNull(v8_value)) {
    return;
  }
  if (!v8_value->IsObject()) {
    exception_state.ThrowTypeError("cannot convert to dictionary.");
    return;
  }
  v8::Local<v8::Object> v8Object = v8_value.As<v8::Object>();
  ALLOW_UNUSED_LOCAL(v8Object);

  const v8::Eternal<v8::Name>* keys = eternalV8LockInfoKeys(isolate);
  v8::TryCatch block(isolate);
  v8::Local<v8::Context> context = isolate->GetCurrentContext();
  v8::Local<v8::Value> client_id_value;
  if (!v8Object->Get(context, keys[0].Get(isolate)).ToLocal(&client_id_value)) {
    exception_state.RethrowV8Exception(block.Exception());
    return;
  }
  if (client_id_value.IsEmpty() || client_id_value->IsUndefined()) {
    // Do nothing.
  } else {
    V8StringResource<> client_id_cpp_value = client_id_value;
    if (!client_id_cpp_value.Prepare(exception_state))
      return;
    impl->setClientId(client_id_cpp_value);
  }

  v8::Local<v8::Value> mode_value;
  if (!v8Object->Get(context, keys[1].Get(isolate)).ToLocal(&mode_value)) {
    exception_state.RethrowV8Exception(block.Exception());
    return;
  }
  if (mode_value.IsEmpty() || mode_value->IsUndefined()) {
    // Do nothing.
  } else {
    V8StringResource<> mode_cpp_value = mode_value;
    if (!mode_cpp_value.Prepare(exception_state))
      return;
    const char* kValidValues[] = {
        "shared",
        "exclusive",
    };
    if (!IsValidEnum(mode_cpp_value, kValidValues, base::size(kValidValues), "LockMode", exception_state))
      return;
    impl->setMode(mode_cpp_value);
  }

  v8::Local<v8::Value> name_value;
  if (!v8Object->Get(context, keys[2].Get(isolate)).ToLocal(&name_value)) {
    exception_state.RethrowV8Exception(block.Exception());
    return;
  }
  if (name_value.IsEmpty() || name_value->IsUndefined()) {
    // Do nothing.
  } else {
    V8StringResource<> name_cpp_value = name_value;
    if (!name_cpp_value.Prepare(exception_state))
      return;
    impl->setName(name_cpp_value);
  }
}

v8::Local<v8::Value> LockInfo::ToV8Impl(v8::Local<v8::Object> creationContext, v8::Isolate* isolate) const {
  v8::Local<v8::Object> v8Object = v8::Object::New(isolate);
  if (!toV8LockInfo(this, v8Object, creationContext, isolate))
    return v8::Undefined(isolate);
  return v8Object;
}

bool toV8LockInfo(const LockInfo* impl, v8::Local<v8::Object> dictionary, v8::Local<v8::Object> creationContext, v8::Isolate* isolate) {
  const v8::Eternal<v8::Name>* keys = eternalV8LockInfoKeys(isolate);
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

  v8::Local<v8::Value> client_id_value;
  bool client_id_has_value_or_default = false;
  if (impl->hasClientId()) {
    client_id_value = V8String(isolate, impl->clientId());
    client_id_has_value_or_default = true;
  }
  if (client_id_has_value_or_default &&
      !create_property(0, client_id_value)) {
    return false;
  }

  v8::Local<v8::Value> mode_value;
  bool mode_has_value_or_default = false;
  if (impl->hasMode()) {
    mode_value = V8String(isolate, impl->mode());
    mode_has_value_or_default = true;
  }
  if (mode_has_value_or_default &&
      !create_property(1, mode_value)) {
    return false;
  }

  v8::Local<v8::Value> name_value;
  bool name_has_value_or_default = false;
  if (impl->hasName()) {
    name_value = V8String(isolate, impl->name());
    name_has_value_or_default = true;
  }
  if (name_has_value_or_default &&
      !create_property(2, name_value)) {
    return false;
  }

  return true;
}

LockInfo* NativeValueTraits<LockInfo>::NativeValue(v8::Isolate* isolate, v8::Local<v8::Value> value, ExceptionState& exception_state) {
  LockInfo* impl = LockInfo::Create();
  V8LockInfo::ToImpl(isolate, value, impl, exception_state);
  return impl;
}

}  // namespace blink
