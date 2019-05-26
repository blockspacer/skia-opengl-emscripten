// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated from the Jinja2 template
// third_party/blink/renderer/bindings/templates/dictionary_v8.cc.tmpl
// by the script code_generator_v8.py.
// DO NOT MODIFY!

// clang-format off
#include "third_party/blink/renderer/bindings/modules/v8/v8_hid_connection_event_init.h"

#include "base/stl_util.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_event_init.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_hid_device.h"
#include "third_party/blink/renderer/platform/bindings/exception_state.h"

namespace blink {

static const v8::Eternal<v8::Name>* eternalV8HIDConnectionEventInitKeys(v8::Isolate* isolate) {
  static const char* const kKeys[] = {
    "device",
  };
  return V8PerIsolateData::From(isolate)->FindOrCreateEternalNameCache(
      kKeys, kKeys, base::size(kKeys));
}

void V8HIDConnectionEventInit::ToImpl(v8::Isolate* isolate, v8::Local<v8::Value> v8_value, HIDConnectionEventInit* impl, ExceptionState& exception_state) {
  if (IsUndefinedOrNull(v8_value)) {
    exception_state.ThrowTypeError("Missing required member(s): device.");
    return;
  }
  if (!v8_value->IsObject()) {
    exception_state.ThrowTypeError("cannot convert to dictionary.");
    return;
  }
  v8::Local<v8::Object> v8Object = v8_value.As<v8::Object>();
  ALLOW_UNUSED_LOCAL(v8Object);

  V8EventInit::ToImpl(isolate, v8_value, impl, exception_state);
  if (exception_state.HadException())
    return;

  const v8::Eternal<v8::Name>* keys = eternalV8HIDConnectionEventInitKeys(isolate);
  v8::TryCatch block(isolate);
  v8::Local<v8::Context> context = isolate->GetCurrentContext();
  v8::Local<v8::Value> device_value;
  if (!v8Object->Get(context, keys[0].Get(isolate)).ToLocal(&device_value)) {
    exception_state.RethrowV8Exception(block.Exception());
    return;
  }
  if (device_value.IsEmpty() || device_value->IsUndefined()) {
    exception_state.ThrowTypeError("required member device is undefined.");
    return;
  } else {
    HIDDevice* device_cpp_value = V8HIDDevice::ToImplWithTypeCheck(isolate, device_value);
    if (!device_cpp_value) {
      exception_state.ThrowTypeError("member device is not of type HIDDevice.");
      return;
    }
    impl->setDevice(device_cpp_value);
  }
}

v8::Local<v8::Value> HIDConnectionEventInit::ToV8Impl(v8::Local<v8::Object> creationContext, v8::Isolate* isolate) const {
  v8::Local<v8::Object> v8Object = v8::Object::New(isolate);
  if (!toV8HIDConnectionEventInit(this, v8Object, creationContext, isolate))
    return v8::Undefined(isolate);
  return v8Object;
}

bool toV8HIDConnectionEventInit(const HIDConnectionEventInit* impl, v8::Local<v8::Object> dictionary, v8::Local<v8::Object> creationContext, v8::Isolate* isolate) {
  if (!toV8EventInit(impl, dictionary, creationContext, isolate))
    return false;

  const v8::Eternal<v8::Name>* keys = eternalV8HIDConnectionEventInitKeys(isolate);
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

  v8::Local<v8::Value> device_value;
  bool device_has_value_or_default = false;
  if (impl->hasDevice()) {
    device_value = ToV8(impl->device(), creationContext, isolate);
    device_has_value_or_default = true;
  } else {
    NOTREACHED();
  }
  if (device_has_value_or_default &&
      !create_property(0, device_value)) {
    return false;
  }

  return true;
}

HIDConnectionEventInit* NativeValueTraits<HIDConnectionEventInit>::NativeValue(v8::Isolate* isolate, v8::Local<v8::Value> value, ExceptionState& exception_state) {
  HIDConnectionEventInit* impl = HIDConnectionEventInit::Create();
  V8HIDConnectionEventInit::ToImpl(isolate, value, impl, exception_state);
  return impl;
}

}  // namespace blink