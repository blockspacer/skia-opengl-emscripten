// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated from the Jinja2 template
// third_party/blink/renderer/bindings/templates/dictionary_v8.cc.tmpl
// by the script code_generator_v8.py.
// DO NOT MODIFY!

// clang-format off
#include "third_party/blink/renderer/bindings/modules/v8/v8_request_device_options.h"

#include "base/stl_util.h"
#include "third_party/blink/renderer/bindings/core/v8/idl_types.h"
#include "third_party/blink/renderer/bindings/core/v8/native_value_traits_impl.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_bluetooth_le_scan_filter_init.h"
#include "third_party/blink/renderer/platform/bindings/exception_state.h"

namespace blink {

static const v8::Eternal<v8::Name>* eternalV8RequestDeviceOptionsKeys(v8::Isolate* isolate) {
  static const char* const kKeys[] = {
    "acceptAllDevices",
    "filters",
    "optionalServices",
  };
  return V8PerIsolateData::From(isolate)->FindOrCreateEternalNameCache(
      kKeys, kKeys, base::size(kKeys));
}

void V8RequestDeviceOptions::ToImpl(v8::Isolate* isolate, v8::Local<v8::Value> v8_value, RequestDeviceOptions* impl, ExceptionState& exception_state) {
  if (IsUndefinedOrNull(v8_value)) {
    return;
  }
  if (!v8_value->IsObject()) {
    exception_state.ThrowTypeError("cannot convert to dictionary.");
    return;
  }
  v8::Local<v8::Object> v8Object = v8_value.As<v8::Object>();
  ALLOW_UNUSED_LOCAL(v8Object);

  const v8::Eternal<v8::Name>* keys = eternalV8RequestDeviceOptionsKeys(isolate);
  v8::TryCatch block(isolate);
  v8::Local<v8::Context> context = isolate->GetCurrentContext();
  v8::Local<v8::Value> accept_all_devices_value;
  if (!v8Object->Get(context, keys[0].Get(isolate)).ToLocal(&accept_all_devices_value)) {
    exception_state.RethrowV8Exception(block.Exception());
    return;
  }
  if (accept_all_devices_value.IsEmpty() || accept_all_devices_value->IsUndefined()) {
    // Do nothing.
  } else {
    bool accept_all_devices_cpp_value = NativeValueTraits<IDLBoolean>::NativeValue(isolate, accept_all_devices_value, exception_state);
    if (exception_state.HadException())
      return;
    impl->setAcceptAllDevices(accept_all_devices_cpp_value);
  }

  v8::Local<v8::Value> filters_value;
  if (!v8Object->Get(context, keys[1].Get(isolate)).ToLocal(&filters_value)) {
    exception_state.RethrowV8Exception(block.Exception());
    return;
  }
  if (filters_value.IsEmpty() || filters_value->IsUndefined()) {
    // Do nothing.
  } else {
    HeapVector<Member<BluetoothLEScanFilterInit>> filters_cpp_value = NativeValueTraits<IDLSequence<BluetoothLEScanFilterInit>>::NativeValue(isolate, filters_value, exception_state);
    if (exception_state.HadException())
      return;
    impl->setFilters(filters_cpp_value);
  }

  v8::Local<v8::Value> optional_services_value;
  if (!v8Object->Get(context, keys[2].Get(isolate)).ToLocal(&optional_services_value)) {
    exception_state.RethrowV8Exception(block.Exception());
    return;
  }
  if (optional_services_value.IsEmpty() || optional_services_value->IsUndefined()) {
    // Do nothing.
  } else {
    HeapVector<StringOrUnsignedLong> optional_services_cpp_value = NativeValueTraits<IDLSequence<StringOrUnsignedLong>>::NativeValue(isolate, optional_services_value, exception_state);
    if (exception_state.HadException())
      return;
    impl->setOptionalServices(optional_services_cpp_value);
  }
}

v8::Local<v8::Value> RequestDeviceOptions::ToV8Impl(v8::Local<v8::Object> creationContext, v8::Isolate* isolate) const {
  v8::Local<v8::Object> v8Object = v8::Object::New(isolate);
  if (!toV8RequestDeviceOptions(this, v8Object, creationContext, isolate))
    return v8::Undefined(isolate);
  return v8Object;
}

bool toV8RequestDeviceOptions(const RequestDeviceOptions* impl, v8::Local<v8::Object> dictionary, v8::Local<v8::Object> creationContext, v8::Isolate* isolate) {
  const v8::Eternal<v8::Name>* keys = eternalV8RequestDeviceOptionsKeys(isolate);
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

  v8::Local<v8::Value> accept_all_devices_value;
  bool accept_all_devices_has_value_or_default = false;
  if (impl->hasAcceptAllDevices()) {
    accept_all_devices_value = v8::Boolean::New(isolate, impl->acceptAllDevices());
    accept_all_devices_has_value_or_default = true;
  } else {
    accept_all_devices_value = v8::Boolean::New(isolate, false);
    accept_all_devices_has_value_or_default = true;
  }
  if (accept_all_devices_has_value_or_default &&
      !create_property(0, accept_all_devices_value)) {
    return false;
  }

  v8::Local<v8::Value> filters_value;
  bool filters_has_value_or_default = false;
  if (impl->hasFilters()) {
    filters_value = ToV8(impl->filters(), creationContext, isolate);
    filters_has_value_or_default = true;
  }
  if (filters_has_value_or_default &&
      !create_property(1, filters_value)) {
    return false;
  }

  v8::Local<v8::Value> optional_services_value;
  bool optional_services_has_value_or_default = false;
  if (impl->hasOptionalServices()) {
    optional_services_value = ToV8(impl->optionalServices(), creationContext, isolate);
    optional_services_has_value_or_default = true;
  } else {
    optional_services_value = ToV8(HeapVector<StringOrUnsignedLong>(), creationContext, isolate);
    optional_services_has_value_or_default = true;
  }
  if (optional_services_has_value_or_default &&
      !create_property(2, optional_services_value)) {
    return false;
  }

  return true;
}

RequestDeviceOptions* NativeValueTraits<RequestDeviceOptions>::NativeValue(v8::Isolate* isolate, v8::Local<v8::Value> value, ExceptionState& exception_state) {
  RequestDeviceOptions* impl = RequestDeviceOptions::Create();
  V8RequestDeviceOptions::ToImpl(isolate, value, impl, exception_state);
  return impl;
}

}  // namespace blink
