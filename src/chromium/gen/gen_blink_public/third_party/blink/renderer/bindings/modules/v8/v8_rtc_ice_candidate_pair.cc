// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated from the Jinja2 template
// third_party/blink/renderer/bindings/templates/dictionary_v8.cc.tmpl
// by the script code_generator_v8.py.
// DO NOT MODIFY!

// clang-format off
#include "third_party/blink/renderer/bindings/modules/v8/v8_rtc_ice_candidate_pair.h"

#include "base/stl_util.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_rtc_ice_candidate.h"
#include "third_party/blink/renderer/platform/bindings/exception_state.h"

namespace blink {

static const v8::Eternal<v8::Name>* eternalV8RTCIceCandidatePairKeys(v8::Isolate* isolate) {
  static const char* const kKeys[] = {
    "local",
    "remote",
  };
  return V8PerIsolateData::From(isolate)->FindOrCreateEternalNameCache(
      kKeys, kKeys, base::size(kKeys));
}

void V8RTCIceCandidatePair::ToImpl(v8::Isolate* isolate, v8::Local<v8::Value> v8_value, RTCIceCandidatePair* impl, ExceptionState& exception_state) {
  if (IsUndefinedOrNull(v8_value)) {
    return;
  }
  if (!v8_value->IsObject()) {
    exception_state.ThrowTypeError("cannot convert to dictionary.");
    return;
  }
  v8::Local<v8::Object> v8Object = v8_value.As<v8::Object>();
  ALLOW_UNUSED_LOCAL(v8Object);

  const v8::Eternal<v8::Name>* keys = eternalV8RTCIceCandidatePairKeys(isolate);
  v8::TryCatch block(isolate);
  v8::Local<v8::Context> context = isolate->GetCurrentContext();
  v8::Local<v8::Value> local_value;
  if (!v8Object->Get(context, keys[0].Get(isolate)).ToLocal(&local_value)) {
    exception_state.RethrowV8Exception(block.Exception());
    return;
  }
  if (local_value.IsEmpty() || local_value->IsUndefined()) {
    // Do nothing.
  } else {
    RTCIceCandidate* local_cpp_value = V8RTCIceCandidate::ToImplWithTypeCheck(isolate, local_value);
    if (!local_cpp_value) {
      exception_state.ThrowTypeError("member local is not of type RTCIceCandidate.");
      return;
    }
    impl->setLocal(local_cpp_value);
  }

  v8::Local<v8::Value> remote_value;
  if (!v8Object->Get(context, keys[1].Get(isolate)).ToLocal(&remote_value)) {
    exception_state.RethrowV8Exception(block.Exception());
    return;
  }
  if (remote_value.IsEmpty() || remote_value->IsUndefined()) {
    // Do nothing.
  } else {
    RTCIceCandidate* remote_cpp_value = V8RTCIceCandidate::ToImplWithTypeCheck(isolate, remote_value);
    if (!remote_cpp_value) {
      exception_state.ThrowTypeError("member remote is not of type RTCIceCandidate.");
      return;
    }
    impl->setRemote(remote_cpp_value);
  }
}

v8::Local<v8::Value> RTCIceCandidatePair::ToV8Impl(v8::Local<v8::Object> creationContext, v8::Isolate* isolate) const {
  v8::Local<v8::Object> v8Object = v8::Object::New(isolate);
  if (!toV8RTCIceCandidatePair(this, v8Object, creationContext, isolate))
    return v8::Undefined(isolate);
  return v8Object;
}

bool toV8RTCIceCandidatePair(const RTCIceCandidatePair* impl, v8::Local<v8::Object> dictionary, v8::Local<v8::Object> creationContext, v8::Isolate* isolate) {
  const v8::Eternal<v8::Name>* keys = eternalV8RTCIceCandidatePairKeys(isolate);
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

  v8::Local<v8::Value> local_value;
  bool local_has_value_or_default = false;
  if (impl->hasLocal()) {
    local_value = ToV8(impl->local(), creationContext, isolate);
    local_has_value_or_default = true;
  }
  if (local_has_value_or_default &&
      !create_property(0, local_value)) {
    return false;
  }

  v8::Local<v8::Value> remote_value;
  bool remote_has_value_or_default = false;
  if (impl->hasRemote()) {
    remote_value = ToV8(impl->remote(), creationContext, isolate);
    remote_has_value_or_default = true;
  }
  if (remote_has_value_or_default &&
      !create_property(1, remote_value)) {
    return false;
  }

  return true;
}

RTCIceCandidatePair* NativeValueTraits<RTCIceCandidatePair>::NativeValue(v8::Isolate* isolate, v8::Local<v8::Value> value, ExceptionState& exception_state) {
  RTCIceCandidatePair* impl = RTCIceCandidatePair::Create();
  V8RTCIceCandidatePair::ToImpl(isolate, value, impl, exception_state);
  return impl;
}

}  // namespace blink
