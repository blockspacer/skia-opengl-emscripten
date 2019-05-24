// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated from the Jinja2 template
// third_party/blink/renderer/bindings/templates/dictionary_v8.cc.tmpl
// by the script code_generator_v8.py.
// DO NOT MODIFY!

// clang-format off
#include "third_party/blink/renderer/bindings/modules/v8/v8_rtc_ice_parameters.h"

#include "base/stl_util.h"
#include "third_party/blink/renderer/bindings/core/v8/idl_types.h"
#include "third_party/blink/renderer/bindings/core/v8/native_value_traits_impl.h"
#include "third_party/blink/renderer/platform/bindings/exception_state.h"

namespace blink {

static const v8::Eternal<v8::Name>* eternalV8RTCIceParametersKeys(v8::Isolate* isolate) {
  static const char* const kKeys[] = {
    "password",
    "usernameFragment",
  };
  return V8PerIsolateData::From(isolate)->FindOrCreateEternalNameCache(
      kKeys, kKeys, base::size(kKeys));
}

void V8RTCIceParameters::ToImpl(v8::Isolate* isolate, v8::Local<v8::Value> v8_value, RTCIceParameters* impl, ExceptionState& exception_state) {
  if (IsUndefinedOrNull(v8_value)) {
    return;
  }
  if (!v8_value->IsObject()) {
    exception_state.ThrowTypeError("cannot convert to dictionary.");
    return;
  }
  v8::Local<v8::Object> v8Object = v8_value.As<v8::Object>();
  ALLOW_UNUSED_LOCAL(v8Object);

  const v8::Eternal<v8::Name>* keys = eternalV8RTCIceParametersKeys(isolate);
  v8::TryCatch block(isolate);
  v8::Local<v8::Context> context = isolate->GetCurrentContext();
  v8::Local<v8::Value> password_value;
  if (!v8Object->Get(context, keys[0].Get(isolate)).ToLocal(&password_value)) {
    exception_state.RethrowV8Exception(block.Exception());
    return;
  }
  if (password_value.IsEmpty() || password_value->IsUndefined()) {
    // Do nothing.
  } else {
    V8StringResource<> password_cpp_value = password_value;
    if (!password_cpp_value.Prepare(exception_state))
      return;
    impl->setPassword(password_cpp_value);
  }

  v8::Local<v8::Value> username_fragment_value;
  if (!v8Object->Get(context, keys[1].Get(isolate)).ToLocal(&username_fragment_value)) {
    exception_state.RethrowV8Exception(block.Exception());
    return;
  }
  if (username_fragment_value.IsEmpty() || username_fragment_value->IsUndefined()) {
    // Do nothing.
  } else {
    V8StringResource<> username_fragment_cpp_value = username_fragment_value;
    if (!username_fragment_cpp_value.Prepare(exception_state))
      return;
    impl->setUsernameFragment(username_fragment_cpp_value);
  }
}

v8::Local<v8::Value> RTCIceParameters::ToV8Impl(v8::Local<v8::Object> creationContext, v8::Isolate* isolate) const {
  v8::Local<v8::Object> v8Object = v8::Object::New(isolate);
  if (!toV8RTCIceParameters(this, v8Object, creationContext, isolate))
    return v8::Undefined(isolate);
  return v8Object;
}

bool toV8RTCIceParameters(const RTCIceParameters* impl, v8::Local<v8::Object> dictionary, v8::Local<v8::Object> creationContext, v8::Isolate* isolate) {
  const v8::Eternal<v8::Name>* keys = eternalV8RTCIceParametersKeys(isolate);
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

  v8::Local<v8::Value> password_value;
  bool password_has_value_or_default = false;
  if (impl->hasPassword()) {
    password_value = V8String(isolate, impl->password());
    password_has_value_or_default = true;
  }
  if (password_has_value_or_default &&
      !create_property(0, password_value)) {
    return false;
  }

  v8::Local<v8::Value> username_fragment_value;
  bool username_fragment_has_value_or_default = false;
  if (impl->hasUsernameFragment()) {
    username_fragment_value = V8String(isolate, impl->usernameFragment());
    username_fragment_has_value_or_default = true;
  }
  if (username_fragment_has_value_or_default &&
      !create_property(1, username_fragment_value)) {
    return false;
  }

  return true;
}

RTCIceParameters* NativeValueTraits<RTCIceParameters>::NativeValue(v8::Isolate* isolate, v8::Local<v8::Value> value, ExceptionState& exception_state) {
  RTCIceParameters* impl = RTCIceParameters::Create();
  V8RTCIceParameters::ToImpl(isolate, value, impl, exception_state);
  return impl;
}

}  // namespace blink
