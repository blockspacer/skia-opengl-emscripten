// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated from the Jinja2 template
// third_party/blink/renderer/bindings/templates/dictionary_v8.cc.tmpl
// by the script code_generator_v8.py.
// DO NOT MODIFY!

// clang-format off
#include "third_party/blink/renderer/bindings/modules/v8/v8_rtc_ice_gather_options.h"

#include "base/stl_util.h"
#include "third_party/blink/renderer/bindings/core/v8/idl_types.h"
#include "third_party/blink/renderer/bindings/core/v8/native_value_traits_impl.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_rtc_ice_server.h"
#include "third_party/blink/renderer/platform/bindings/exception_state.h"

namespace blink {

static const v8::Eternal<v8::Name>* eternalV8RTCIceGatherOptionsKeys(v8::Isolate* isolate) {
  static const char* const kKeys[] = {
    "gatherPolicy",
    "iceServers",
  };
  return V8PerIsolateData::From(isolate)->FindOrCreateEternalNameCache(
      kKeys, kKeys, base::size(kKeys));
}

void V8RTCIceGatherOptions::ToImpl(v8::Isolate* isolate, v8::Local<v8::Value> v8_value, RTCIceGatherOptions* impl, ExceptionState& exception_state) {
  if (IsUndefinedOrNull(v8_value)) {
    return;
  }
  if (!v8_value->IsObject()) {
    exception_state.ThrowTypeError("cannot convert to dictionary.");
    return;
  }
  v8::Local<v8::Object> v8Object = v8_value.As<v8::Object>();
  ALLOW_UNUSED_LOCAL(v8Object);

  const v8::Eternal<v8::Name>* keys = eternalV8RTCIceGatherOptionsKeys(isolate);
  v8::TryCatch block(isolate);
  v8::Local<v8::Context> context = isolate->GetCurrentContext();
  v8::Local<v8::Value> gather_policy_value;
  if (!v8Object->Get(context, keys[0].Get(isolate)).ToLocal(&gather_policy_value)) {
    exception_state.RethrowV8Exception(block.Exception());
    return;
  }
  if (gather_policy_value.IsEmpty() || gather_policy_value->IsUndefined()) {
    // Do nothing.
  } else {
    V8StringResource<> gather_policy_cpp_value = gather_policy_value;
    if (!gather_policy_cpp_value.Prepare(exception_state))
      return;
    const char* kValidValues[] = {
        "relay",
        "all",
    };
    if (!IsValidEnum(gather_policy_cpp_value, kValidValues, base::size(kValidValues), "RTCIceTransportPolicy", exception_state))
      return;
    impl->setGatherPolicy(gather_policy_cpp_value);
  }

  v8::Local<v8::Value> ice_servers_value;
  if (!v8Object->Get(context, keys[1].Get(isolate)).ToLocal(&ice_servers_value)) {
    exception_state.RethrowV8Exception(block.Exception());
    return;
  }
  if (ice_servers_value.IsEmpty() || ice_servers_value->IsUndefined()) {
    // Do nothing.
  } else {
    HeapVector<Member<RTCIceServer>> ice_servers_cpp_value = NativeValueTraits<IDLSequence<RTCIceServer>>::NativeValue(isolate, ice_servers_value, exception_state);
    if (exception_state.HadException())
      return;
    impl->setIceServers(ice_servers_cpp_value);
  }
}

v8::Local<v8::Value> RTCIceGatherOptions::ToV8Impl(v8::Local<v8::Object> creationContext, v8::Isolate* isolate) const {
  v8::Local<v8::Object> v8Object = v8::Object::New(isolate);
  if (!toV8RTCIceGatherOptions(this, v8Object, creationContext, isolate))
    return v8::Undefined(isolate);
  return v8Object;
}

bool toV8RTCIceGatherOptions(const RTCIceGatherOptions* impl, v8::Local<v8::Object> dictionary, v8::Local<v8::Object> creationContext, v8::Isolate* isolate) {
  const v8::Eternal<v8::Name>* keys = eternalV8RTCIceGatherOptionsKeys(isolate);
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

  v8::Local<v8::Value> gather_policy_value;
  bool gather_policy_has_value_or_default = false;
  if (impl->hasGatherPolicy()) {
    gather_policy_value = V8String(isolate, impl->gatherPolicy());
    gather_policy_has_value_or_default = true;
  } else {
    gather_policy_value = V8String(isolate, "all");
    gather_policy_has_value_or_default = true;
  }
  if (gather_policy_has_value_or_default &&
      !create_property(0, gather_policy_value)) {
    return false;
  }

  v8::Local<v8::Value> ice_servers_value;
  bool ice_servers_has_value_or_default = false;
  if (impl->hasIceServers()) {
    ice_servers_value = ToV8(impl->iceServers(), creationContext, isolate);
    ice_servers_has_value_or_default = true;
  }
  if (ice_servers_has_value_or_default &&
      !create_property(1, ice_servers_value)) {
    return false;
  }

  return true;
}

RTCIceGatherOptions* NativeValueTraits<RTCIceGatherOptions>::NativeValue(v8::Isolate* isolate, v8::Local<v8::Value> value, ExceptionState& exception_state) {
  RTCIceGatherOptions* impl = RTCIceGatherOptions::Create();
  V8RTCIceGatherOptions::ToImpl(isolate, value, impl, exception_state);
  return impl;
}

}  // namespace blink
