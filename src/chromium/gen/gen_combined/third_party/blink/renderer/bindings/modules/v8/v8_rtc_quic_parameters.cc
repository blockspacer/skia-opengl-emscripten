// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated from the Jinja2 template
// third_party/blink/renderer/bindings/templates/dictionary_v8.cc.tmpl
// by the script code_generator_v8.py.
// DO NOT MODIFY!

// clang-format off
#include "third_party/blink/renderer/bindings/modules/v8/v8_rtc_quic_parameters.h"

#include "base/stl_util.h"
#include "third_party/blink/renderer/bindings/core/v8/idl_types.h"
#include "third_party/blink/renderer/bindings/core/v8/native_value_traits_impl.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_rtc_dtls_fingerprint.h"
#include "third_party/blink/renderer/platform/bindings/exception_state.h"

namespace blink {

static const v8::Eternal<v8::Name>* eternalV8RTCQuicParametersKeys(v8::Isolate* isolate) {
  static const char* const kKeys[] = {
    "fingerprints",
    "role",
  };
  return V8PerIsolateData::From(isolate)->FindOrCreateEternalNameCache(
      kKeys, kKeys, base::size(kKeys));
}

void V8RTCQuicParameters::ToImpl(v8::Isolate* isolate, v8::Local<v8::Value> v8_value, RTCQuicParameters* impl, ExceptionState& exception_state) {
  if (IsUndefinedOrNull(v8_value)) {
    return;
  }
  if (!v8_value->IsObject()) {
    exception_state.ThrowTypeError("cannot convert to dictionary.");
    return;
  }
  v8::Local<v8::Object> v8Object = v8_value.As<v8::Object>();
  ALLOW_UNUSED_LOCAL(v8Object);

  const v8::Eternal<v8::Name>* keys = eternalV8RTCQuicParametersKeys(isolate);
  v8::TryCatch block(isolate);
  v8::Local<v8::Context> context = isolate->GetCurrentContext();
  v8::Local<v8::Value> fingerprints_value;
  if (!v8Object->Get(context, keys[0].Get(isolate)).ToLocal(&fingerprints_value)) {
    exception_state.RethrowV8Exception(block.Exception());
    return;
  }
  if (fingerprints_value.IsEmpty() || fingerprints_value->IsUndefined()) {
    // Do nothing.
  } else {
    HeapVector<Member<RTCDtlsFingerprint>> fingerprints_cpp_value = NativeValueTraits<IDLSequence<RTCDtlsFingerprint>>::NativeValue(isolate, fingerprints_value, exception_state);
    if (exception_state.HadException())
      return;
    impl->setFingerprints(fingerprints_cpp_value);
  }

  v8::Local<v8::Value> role_value;
  if (!v8Object->Get(context, keys[1].Get(isolate)).ToLocal(&role_value)) {
    exception_state.RethrowV8Exception(block.Exception());
    return;
  }
  if (role_value.IsEmpty() || role_value->IsUndefined()) {
    // Do nothing.
  } else {
    V8StringResource<> role_cpp_value = role_value;
    if (!role_cpp_value.Prepare(exception_state))
      return;
    const char* kValidValues[] = {
        "auto",
        "client",
        "server",
    };
    if (!IsValidEnum(role_cpp_value, kValidValues, base::size(kValidValues), "RTCQuicRole", exception_state))
      return;
    impl->setRole(role_cpp_value);
  }
}

v8::Local<v8::Value> RTCQuicParameters::ToV8Impl(v8::Local<v8::Object> creationContext, v8::Isolate* isolate) const {
  v8::Local<v8::Object> v8Object = v8::Object::New(isolate);
  if (!toV8RTCQuicParameters(this, v8Object, creationContext, isolate))
    return v8::Undefined(isolate);
  return v8Object;
}

bool toV8RTCQuicParameters(const RTCQuicParameters* impl, v8::Local<v8::Object> dictionary, v8::Local<v8::Object> creationContext, v8::Isolate* isolate) {
  const v8::Eternal<v8::Name>* keys = eternalV8RTCQuicParametersKeys(isolate);
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

  v8::Local<v8::Value> fingerprints_value;
  bool fingerprints_has_value_or_default = false;
  if (impl->hasFingerprints()) {
    fingerprints_value = ToV8(impl->fingerprints(), creationContext, isolate);
    fingerprints_has_value_or_default = true;
  }
  if (fingerprints_has_value_or_default &&
      !create_property(0, fingerprints_value)) {
    return false;
  }

  v8::Local<v8::Value> role_value;
  bool role_has_value_or_default = false;
  if (impl->hasRole()) {
    role_value = V8String(isolate, impl->role());
    role_has_value_or_default = true;
  } else {
    role_value = V8String(isolate, "auto");
    role_has_value_or_default = true;
  }
  if (role_has_value_or_default &&
      !create_property(1, role_value)) {
    return false;
  }

  return true;
}

RTCQuicParameters* NativeValueTraits<RTCQuicParameters>::NativeValue(v8::Isolate* isolate, v8::Local<v8::Value> value, ExceptionState& exception_state) {
  RTCQuicParameters* impl = RTCQuicParameters::Create();
  V8RTCQuicParameters::ToImpl(isolate, value, impl, exception_state);
  return impl;
}

}  // namespace blink
