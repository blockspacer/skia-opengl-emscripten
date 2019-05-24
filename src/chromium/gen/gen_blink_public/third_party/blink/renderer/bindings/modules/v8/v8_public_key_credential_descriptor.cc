// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated from the Jinja2 template
// third_party/blink/renderer/bindings/templates/dictionary_v8.cc.tmpl
// by the script code_generator_v8.py.
// DO NOT MODIFY!

// clang-format off
#include "third_party/blink/renderer/bindings/modules/v8/v8_public_key_credential_descriptor.h"

#include "base/stl_util.h"
#include "third_party/blink/renderer/bindings/core/v8/idl_types.h"
#include "third_party/blink/renderer/bindings/core/v8/native_value_traits_impl.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_array_buffer.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_array_buffer_view.h"
#include "third_party/blink/renderer/core/typed_arrays/array_buffer_view_helpers.h"
#include "third_party/blink/renderer/core/typed_arrays/flexible_array_buffer_view.h"
#include "third_party/blink/renderer/platform/bindings/exception_state.h"

namespace blink {

static const v8::Eternal<v8::Name>* eternalV8PublicKeyCredentialDescriptorKeys(v8::Isolate* isolate) {
  static const char* const kKeys[] = {
    "id",
    "transports",
    "type",
  };
  return V8PerIsolateData::From(isolate)->FindOrCreateEternalNameCache(
      kKeys, kKeys, base::size(kKeys));
}

void V8PublicKeyCredentialDescriptor::ToImpl(v8::Isolate* isolate, v8::Local<v8::Value> v8_value, PublicKeyCredentialDescriptor* impl, ExceptionState& exception_state) {
  if (IsUndefinedOrNull(v8_value)) {
    exception_state.ThrowTypeError("Missing required member(s): id, type.");
    return;
  }
  if (!v8_value->IsObject()) {
    exception_state.ThrowTypeError("cannot convert to dictionary.");
    return;
  }
  v8::Local<v8::Object> v8Object = v8_value.As<v8::Object>();
  ALLOW_UNUSED_LOCAL(v8Object);

  const v8::Eternal<v8::Name>* keys = eternalV8PublicKeyCredentialDescriptorKeys(isolate);
  v8::TryCatch block(isolate);
  v8::Local<v8::Context> context = isolate->GetCurrentContext();
  v8::Local<v8::Value> id_value;
  if (!v8Object->Get(context, keys[0].Get(isolate)).ToLocal(&id_value)) {
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

  v8::Local<v8::Value> transports_value;
  if (!v8Object->Get(context, keys[1].Get(isolate)).ToLocal(&transports_value)) {
    exception_state.RethrowV8Exception(block.Exception());
    return;
  }
  if (transports_value.IsEmpty() || transports_value->IsUndefined()) {
    // Do nothing.
  } else {
    Vector<String> transports_cpp_value = NativeValueTraits<IDLSequence<IDLString>>::NativeValue(isolate, transports_value, exception_state);
    if (exception_state.HadException())
      return;
    const char* kValidValues[] = {
        "usb",
        "nfc",
        "ble",
        "cable",
        "internal",
    };
    if (!IsValidEnum(transports_cpp_value, kValidValues, base::size(kValidValues), "AuthenticatorTransport", exception_state))
      return;
    impl->setTransports(transports_cpp_value);
  }

  v8::Local<v8::Value> type_value;
  if (!v8Object->Get(context, keys[2].Get(isolate)).ToLocal(&type_value)) {
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
    const char* kValidValues[] = {
        "public-key",
    };
    if (!IsValidEnum(type_cpp_value, kValidValues, base::size(kValidValues), "PublicKeyCredentialType", exception_state))
      return;
    impl->setType(type_cpp_value);
  }
}

v8::Local<v8::Value> PublicKeyCredentialDescriptor::ToV8Impl(v8::Local<v8::Object> creationContext, v8::Isolate* isolate) const {
  v8::Local<v8::Object> v8Object = v8::Object::New(isolate);
  if (!toV8PublicKeyCredentialDescriptor(this, v8Object, creationContext, isolate))
    return v8::Undefined(isolate);
  return v8Object;
}

bool toV8PublicKeyCredentialDescriptor(const PublicKeyCredentialDescriptor* impl, v8::Local<v8::Object> dictionary, v8::Local<v8::Object> creationContext, v8::Isolate* isolate) {
  const v8::Eternal<v8::Name>* keys = eternalV8PublicKeyCredentialDescriptorKeys(isolate);
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

  v8::Local<v8::Value> id_value;
  bool id_has_value_or_default = false;
  if (impl->hasId()) {
    id_value = ToV8(impl->id(), creationContext, isolate);
    id_has_value_or_default = true;
  } else {
    NOTREACHED();
  }
  if (id_has_value_or_default &&
      !create_property(0, id_value)) {
    return false;
  }

  v8::Local<v8::Value> transports_value;
  bool transports_has_value_or_default = false;
  if (impl->hasTransports()) {
    transports_value = ToV8(impl->transports(), creationContext, isolate);
    transports_has_value_or_default = true;
  }
  if (transports_has_value_or_default &&
      !create_property(1, transports_value)) {
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
      !create_property(2, type_value)) {
    return false;
  }

  return true;
}

PublicKeyCredentialDescriptor* NativeValueTraits<PublicKeyCredentialDescriptor>::NativeValue(v8::Isolate* isolate, v8::Local<v8::Value> value, ExceptionState& exception_state) {
  PublicKeyCredentialDescriptor* impl = PublicKeyCredentialDescriptor::Create();
  V8PublicKeyCredentialDescriptor::ToImpl(isolate, value, impl, exception_state);
  return impl;
}

}  // namespace blink
