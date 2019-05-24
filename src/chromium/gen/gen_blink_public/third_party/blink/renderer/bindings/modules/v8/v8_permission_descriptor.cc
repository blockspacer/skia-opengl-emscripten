// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated from the Jinja2 template
// third_party/blink/renderer/bindings/templates/dictionary_v8.cc.tmpl
// by the script code_generator_v8.py.
// DO NOT MODIFY!

// clang-format off
#include "third_party/blink/renderer/bindings/modules/v8/v8_permission_descriptor.h"

#include "base/stl_util.h"
#include "third_party/blink/renderer/bindings/core/v8/idl_types.h"
#include "third_party/blink/renderer/bindings/core/v8/native_value_traits_impl.h"
#include "third_party/blink/renderer/platform/bindings/exception_state.h"

namespace blink {

static const v8::Eternal<v8::Name>* eternalV8PermissionDescriptorKeys(v8::Isolate* isolate) {
  static const char* const kKeys[] = {
    "name",
  };
  return V8PerIsolateData::From(isolate)->FindOrCreateEternalNameCache(
      kKeys, kKeys, base::size(kKeys));
}

void V8PermissionDescriptor::ToImpl(v8::Isolate* isolate, v8::Local<v8::Value> v8_value, PermissionDescriptor* impl, ExceptionState& exception_state) {
  if (IsUndefinedOrNull(v8_value)) {
    exception_state.ThrowTypeError("Missing required member(s): name.");
    return;
  }
  if (!v8_value->IsObject()) {
    exception_state.ThrowTypeError("cannot convert to dictionary.");
    return;
  }
  v8::Local<v8::Object> v8Object = v8_value.As<v8::Object>();
  ALLOW_UNUSED_LOCAL(v8Object);

  const v8::Eternal<v8::Name>* keys = eternalV8PermissionDescriptorKeys(isolate);
  v8::TryCatch block(isolate);
  v8::Local<v8::Context> context = isolate->GetCurrentContext();
  v8::Local<v8::Value> name_value;
  if (!v8Object->Get(context, keys[0].Get(isolate)).ToLocal(&name_value)) {
    exception_state.RethrowV8Exception(block.Exception());
    return;
  }
  if (name_value.IsEmpty() || name_value->IsUndefined()) {
    exception_state.ThrowTypeError("required member name is undefined.");
    return;
  } else {
    V8StringResource<> name_cpp_value = name_value;
    if (!name_cpp_value.Prepare(exception_state))
      return;
    const char* kValidValues[] = {
        "geolocation",
        "notifications",
        "push",
        "midi",
        "camera",
        "microphone",
        "background-fetch",
        "background-sync",
        "persistent-storage",
        "ambient-light-sensor",
        "accelerometer",
        "gyroscope",
        "magnetometer",
        "accessibility-events",
        "clipboard-read",
        "clipboard-write",
        "payment-handler",
        "idle-detection",
        "periodic-background-sync",
    };
    if (!IsValidEnum(name_cpp_value, kValidValues, base::size(kValidValues), "PermissionName", exception_state))
      return;
    impl->setName(name_cpp_value);
  }
}

v8::Local<v8::Value> PermissionDescriptor::ToV8Impl(v8::Local<v8::Object> creationContext, v8::Isolate* isolate) const {
  v8::Local<v8::Object> v8Object = v8::Object::New(isolate);
  if (!toV8PermissionDescriptor(this, v8Object, creationContext, isolate))
    return v8::Undefined(isolate);
  return v8Object;
}

bool toV8PermissionDescriptor(const PermissionDescriptor* impl, v8::Local<v8::Object> dictionary, v8::Local<v8::Object> creationContext, v8::Isolate* isolate) {
  const v8::Eternal<v8::Name>* keys = eternalV8PermissionDescriptorKeys(isolate);
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

  v8::Local<v8::Value> name_value;
  bool name_has_value_or_default = false;
  if (impl->hasName()) {
    name_value = V8String(isolate, impl->name());
    name_has_value_or_default = true;
  } else {
    NOTREACHED();
  }
  if (name_has_value_or_default &&
      !create_property(0, name_value)) {
    return false;
  }

  return true;
}

PermissionDescriptor* NativeValueTraits<PermissionDescriptor>::NativeValue(v8::Isolate* isolate, v8::Local<v8::Value> value, ExceptionState& exception_state) {
  PermissionDescriptor* impl = PermissionDescriptor::Create();
  V8PermissionDescriptor::ToImpl(isolate, value, impl, exception_state);
  return impl;
}

}  // namespace blink
