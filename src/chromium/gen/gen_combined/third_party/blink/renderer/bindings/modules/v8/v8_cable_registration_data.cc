// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated from the Jinja2 template
// third_party/blink/renderer/bindings/templates/dictionary_v8.cc.tmpl
// by the script code_generator_v8.py.
// DO NOT MODIFY!

// clang-format off
#include "third_party/blink/renderer/bindings/modules/v8/v8_cable_registration_data.h"

#include "base/stl_util.h"
#include "third_party/blink/renderer/bindings/core/v8/idl_types.h"
#include "third_party/blink/renderer/bindings/core/v8/native_value_traits_impl.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_array_buffer.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_array_buffer_view.h"
#include "third_party/blink/renderer/core/typed_arrays/array_buffer_view_helpers.h"
#include "third_party/blink/renderer/core/typed_arrays/flexible_array_buffer_view.h"
#include "third_party/blink/renderer/platform/bindings/exception_state.h"

namespace blink {

static const v8::Eternal<v8::Name>* eternalV8CableRegistrationDataKeys(v8::Isolate* isolate) {
  static const char* const kKeys[] = {
    "rpPublicKey",
    "versions",
  };
  return V8PerIsolateData::From(isolate)->FindOrCreateEternalNameCache(
      kKeys, kKeys, base::size(kKeys));
}

void V8CableRegistrationData::ToImpl(v8::Isolate* isolate, v8::Local<v8::Value> v8_value, CableRegistrationData* impl, ExceptionState& exception_state) {
  if (IsUndefinedOrNull(v8_value)) {
    exception_state.ThrowTypeError("Missing required member(s): rpPublicKey, versions.");
    return;
  }
  if (!v8_value->IsObject()) {
    exception_state.ThrowTypeError("cannot convert to dictionary.");
    return;
  }
  v8::Local<v8::Object> v8Object = v8_value.As<v8::Object>();
  ALLOW_UNUSED_LOCAL(v8Object);

  const v8::Eternal<v8::Name>* keys = eternalV8CableRegistrationDataKeys(isolate);
  v8::TryCatch block(isolate);
  v8::Local<v8::Context> context = isolate->GetCurrentContext();
  v8::Local<v8::Value> rp_public_key_value;
  if (!v8Object->Get(context, keys[0].Get(isolate)).ToLocal(&rp_public_key_value)) {
    exception_state.RethrowV8Exception(block.Exception());
    return;
  }
  if (rp_public_key_value.IsEmpty() || rp_public_key_value->IsUndefined()) {
    exception_state.ThrowTypeError("required member rpPublicKey is undefined.");
    return;
  } else {
    ArrayBufferOrArrayBufferView rp_public_key_cpp_value;
    V8ArrayBufferOrArrayBufferView::ToImpl(isolate, rp_public_key_value, rp_public_key_cpp_value, UnionTypeConversionMode::kNotNullable, exception_state);
    if (exception_state.HadException())
      return;
    impl->setRpPublicKey(rp_public_key_cpp_value);
  }

  v8::Local<v8::Value> versions_value;
  if (!v8Object->Get(context, keys[1].Get(isolate)).ToLocal(&versions_value)) {
    exception_state.RethrowV8Exception(block.Exception());
    return;
  }
  if (versions_value.IsEmpty() || versions_value->IsUndefined()) {
    exception_state.ThrowTypeError("required member versions is undefined.");
    return;
  } else {
    Vector<uint8_t> versions_cpp_value = NativeValueTraits<IDLSequence<IDLOctet>>::NativeValue(isolate, versions_value, exception_state);
    if (exception_state.HadException())
      return;
    impl->setVersions(versions_cpp_value);
  }
}

v8::Local<v8::Value> CableRegistrationData::ToV8Impl(v8::Local<v8::Object> creationContext, v8::Isolate* isolate) const {
  v8::Local<v8::Object> v8Object = v8::Object::New(isolate);
  if (!toV8CableRegistrationData(this, v8Object, creationContext, isolate))
    return v8::Undefined(isolate);
  return v8Object;
}

bool toV8CableRegistrationData(const CableRegistrationData* impl, v8::Local<v8::Object> dictionary, v8::Local<v8::Object> creationContext, v8::Isolate* isolate) {
  const v8::Eternal<v8::Name>* keys = eternalV8CableRegistrationDataKeys(isolate);
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

  v8::Local<v8::Value> rp_public_key_value;
  bool rp_public_key_has_value_or_default = false;
  if (impl->hasRpPublicKey()) {
    rp_public_key_value = ToV8(impl->rpPublicKey(), creationContext, isolate);
    rp_public_key_has_value_or_default = true;
  } else {
    NOTREACHED();
  }
  if (rp_public_key_has_value_or_default &&
      !create_property(0, rp_public_key_value)) {
    return false;
  }

  v8::Local<v8::Value> versions_value;
  bool versions_has_value_or_default = false;
  if (impl->hasVersions()) {
    versions_value = ToV8(impl->versions(), creationContext, isolate);
    versions_has_value_or_default = true;
  } else {
    NOTREACHED();
  }
  if (versions_has_value_or_default &&
      !create_property(1, versions_value)) {
    return false;
  }

  return true;
}

CableRegistrationData* NativeValueTraits<CableRegistrationData>::NativeValue(v8::Isolate* isolate, v8::Local<v8::Value> value, ExceptionState& exception_state) {
  CableRegistrationData* impl = CableRegistrationData::Create();
  V8CableRegistrationData::ToImpl(isolate, value, impl, exception_state);
  return impl;
}

}  // namespace blink
