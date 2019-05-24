// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated from the Jinja2 template
// third_party/blink/renderer/bindings/templates/dictionary_v8.cc.tmpl
// by the script code_generator_v8.py.
// DO NOT MODIFY!

// clang-format off
#include "third_party/blink/renderer/bindings/modules/v8/v8_bluetooth_le_scan_filter_init.h"

#include "base/stl_util.h"
#include "third_party/blink/renderer/bindings/core/v8/idl_types.h"
#include "third_party/blink/renderer/bindings/core/v8/native_value_traits_impl.h"
#include "third_party/blink/renderer/platform/bindings/exception_state.h"

namespace blink {

static const v8::Eternal<v8::Name>* eternalV8BluetoothLEScanFilterInitKeys(v8::Isolate* isolate) {
  static const char* const kKeys[] = {
    "name",
    "namePrefix",
    "services",
  };
  return V8PerIsolateData::From(isolate)->FindOrCreateEternalNameCache(
      kKeys, kKeys, base::size(kKeys));
}

void V8BluetoothLEScanFilterInit::ToImpl(v8::Isolate* isolate, v8::Local<v8::Value> v8_value, BluetoothLEScanFilterInit* impl, ExceptionState& exception_state) {
  if (IsUndefinedOrNull(v8_value)) {
    return;
  }
  if (!v8_value->IsObject()) {
    exception_state.ThrowTypeError("cannot convert to dictionary.");
    return;
  }
  v8::Local<v8::Object> v8Object = v8_value.As<v8::Object>();
  ALLOW_UNUSED_LOCAL(v8Object);

  const v8::Eternal<v8::Name>* keys = eternalV8BluetoothLEScanFilterInitKeys(isolate);
  v8::TryCatch block(isolate);
  v8::Local<v8::Context> context = isolate->GetCurrentContext();
  v8::Local<v8::Value> name_value;
  if (!v8Object->Get(context, keys[0].Get(isolate)).ToLocal(&name_value)) {
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

  v8::Local<v8::Value> name_prefix_value;
  if (!v8Object->Get(context, keys[1].Get(isolate)).ToLocal(&name_prefix_value)) {
    exception_state.RethrowV8Exception(block.Exception());
    return;
  }
  if (name_prefix_value.IsEmpty() || name_prefix_value->IsUndefined()) {
    // Do nothing.
  } else {
    V8StringResource<> name_prefix_cpp_value = name_prefix_value;
    if (!name_prefix_cpp_value.Prepare(exception_state))
      return;
    impl->setNamePrefix(name_prefix_cpp_value);
  }

  v8::Local<v8::Value> services_value;
  if (!v8Object->Get(context, keys[2].Get(isolate)).ToLocal(&services_value)) {
    exception_state.RethrowV8Exception(block.Exception());
    return;
  }
  if (services_value.IsEmpty() || services_value->IsUndefined()) {
    // Do nothing.
  } else {
    HeapVector<StringOrUnsignedLong> services_cpp_value = NativeValueTraits<IDLSequence<StringOrUnsignedLong>>::NativeValue(isolate, services_value, exception_state);
    if (exception_state.HadException())
      return;
    impl->setServices(services_cpp_value);
  }
}

v8::Local<v8::Value> BluetoothLEScanFilterInit::ToV8Impl(v8::Local<v8::Object> creationContext, v8::Isolate* isolate) const {
  v8::Local<v8::Object> v8Object = v8::Object::New(isolate);
  if (!toV8BluetoothLEScanFilterInit(this, v8Object, creationContext, isolate))
    return v8::Undefined(isolate);
  return v8Object;
}

bool toV8BluetoothLEScanFilterInit(const BluetoothLEScanFilterInit* impl, v8::Local<v8::Object> dictionary, v8::Local<v8::Object> creationContext, v8::Isolate* isolate) {
  const v8::Eternal<v8::Name>* keys = eternalV8BluetoothLEScanFilterInitKeys(isolate);
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
  }
  if (name_has_value_or_default &&
      !create_property(0, name_value)) {
    return false;
  }

  v8::Local<v8::Value> name_prefix_value;
  bool name_prefix_has_value_or_default = false;
  if (impl->hasNamePrefix()) {
    name_prefix_value = V8String(isolate, impl->namePrefix());
    name_prefix_has_value_or_default = true;
  }
  if (name_prefix_has_value_or_default &&
      !create_property(1, name_prefix_value)) {
    return false;
  }

  v8::Local<v8::Value> services_value;
  bool services_has_value_or_default = false;
  if (impl->hasServices()) {
    services_value = ToV8(impl->services(), creationContext, isolate);
    services_has_value_or_default = true;
  }
  if (services_has_value_or_default &&
      !create_property(2, services_value)) {
    return false;
  }

  return true;
}

BluetoothLEScanFilterInit* NativeValueTraits<BluetoothLEScanFilterInit>::NativeValue(v8::Isolate* isolate, v8::Local<v8::Value> value, ExceptionState& exception_state) {
  BluetoothLEScanFilterInit* impl = BluetoothLEScanFilterInit::Create();
  V8BluetoothLEScanFilterInit::ToImpl(isolate, value, impl, exception_state);
  return impl;
}

}  // namespace blink
