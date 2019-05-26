// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated from the Jinja2 template
// third_party/blink/renderer/bindings/templates/dictionary_v8.cc.tmpl
// by the script code_generator_v8.py.
// DO NOT MODIFY!

// clang-format off
#include "third_party/blink/renderer/bindings/modules/v8/v8_public_key_credential_user_entity.h"

#include "base/stl_util.h"
#include "third_party/blink/renderer/bindings/core/v8/idl_types.h"
#include "third_party/blink/renderer/bindings/core/v8/native_value_traits_impl.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_array_buffer.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_array_buffer_view.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_public_key_credential_entity.h"
#include "third_party/blink/renderer/core/typed_arrays/array_buffer_view_helpers.h"
#include "third_party/blink/renderer/core/typed_arrays/flexible_array_buffer_view.h"
#include "third_party/blink/renderer/platform/bindings/exception_state.h"

namespace blink {

static const v8::Eternal<v8::Name>* eternalV8PublicKeyCredentialUserEntityKeys(v8::Isolate* isolate) {
  static const char* const kKeys[] = {
    "displayName",
    "id",
  };
  return V8PerIsolateData::From(isolate)->FindOrCreateEternalNameCache(
      kKeys, kKeys, base::size(kKeys));
}

void V8PublicKeyCredentialUserEntity::ToImpl(v8::Isolate* isolate, v8::Local<v8::Value> v8_value, PublicKeyCredentialUserEntity* impl, ExceptionState& exception_state) {
  if (IsUndefinedOrNull(v8_value)) {
    exception_state.ThrowTypeError("Missing required member(s): displayName, id.");
    return;
  }
  if (!v8_value->IsObject()) {
    exception_state.ThrowTypeError("cannot convert to dictionary.");
    return;
  }
  v8::Local<v8::Object> v8Object = v8_value.As<v8::Object>();
  ALLOW_UNUSED_LOCAL(v8Object);

  V8PublicKeyCredentialEntity::ToImpl(isolate, v8_value, impl, exception_state);
  if (exception_state.HadException())
    return;

  const v8::Eternal<v8::Name>* keys = eternalV8PublicKeyCredentialUserEntityKeys(isolate);
  v8::TryCatch block(isolate);
  v8::Local<v8::Context> context = isolate->GetCurrentContext();
  v8::Local<v8::Value> display_name_value;
  if (!v8Object->Get(context, keys[0].Get(isolate)).ToLocal(&display_name_value)) {
    exception_state.RethrowV8Exception(block.Exception());
    return;
  }
  if (display_name_value.IsEmpty() || display_name_value->IsUndefined()) {
    exception_state.ThrowTypeError("required member displayName is undefined.");
    return;
  } else {
    V8StringResource<> display_name_cpp_value = display_name_value;
    if (!display_name_cpp_value.Prepare(exception_state))
      return;
    impl->setDisplayName(display_name_cpp_value);
  }

  v8::Local<v8::Value> id_value;
  if (!v8Object->Get(context, keys[1].Get(isolate)).ToLocal(&id_value)) {
    exception_state.RethrowV8Exception(block.Exception());
    return;
  }
  if (id_value.IsEmpty() || id_value->IsUndefined()) {
    exception_state.ThrowTypeError("required member id is undefined.");
    return;
  } else {
    ArrayBufferOrArrayBufferView id_cpp_value;
    V8ArrayBufferOrArrayBufferView::ToImpl(isolate, id_value, id_cpp_value, UnionTypeConversionMode::kNotNullable, exception_state);
    if (exception_state.HadException())
      return;
    impl->setId(id_cpp_value);
  }
}

v8::Local<v8::Value> PublicKeyCredentialUserEntity::ToV8Impl(v8::Local<v8::Object> creationContext, v8::Isolate* isolate) const {
  v8::Local<v8::Object> v8Object = v8::Object::New(isolate);
  if (!toV8PublicKeyCredentialUserEntity(this, v8Object, creationContext, isolate))
    return v8::Undefined(isolate);
  return v8Object;
}

bool toV8PublicKeyCredentialUserEntity(const PublicKeyCredentialUserEntity* impl, v8::Local<v8::Object> dictionary, v8::Local<v8::Object> creationContext, v8::Isolate* isolate) {
  if (!toV8PublicKeyCredentialEntity(impl, dictionary, creationContext, isolate))
    return false;

  const v8::Eternal<v8::Name>* keys = eternalV8PublicKeyCredentialUserEntityKeys(isolate);
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

  v8::Local<v8::Value> display_name_value;
  bool display_name_has_value_or_default = false;
  if (impl->hasDisplayName()) {
    display_name_value = V8String(isolate, impl->displayName());
    display_name_has_value_or_default = true;
  } else {
    NOTREACHED();
  }
  if (display_name_has_value_or_default &&
      !create_property(0, display_name_value)) {
    return false;
  }

  v8::Local<v8::Value> id_value;
  bool id_has_value_or_default = false;
  if (impl->hasId()) {
    id_value = ToV8(impl->id(), creationContext, isolate);
    id_has_value_or_default = true;
  } else {
    NOTREACHED();
  }
  if (id_has_value_or_default &&
      !create_property(1, id_value)) {
    return false;
  }

  return true;
}

PublicKeyCredentialUserEntity* NativeValueTraits<PublicKeyCredentialUserEntity>::NativeValue(v8::Isolate* isolate, v8::Local<v8::Value> value, ExceptionState& exception_state) {
  PublicKeyCredentialUserEntity* impl = PublicKeyCredentialUserEntity::Create();
  V8PublicKeyCredentialUserEntity::ToImpl(isolate, value, impl, exception_state);
  return impl;
}

}  // namespace blink
