// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated from the Jinja2 template
// third_party/blink/renderer/bindings/templates/dictionary_v8.cc.tmpl
// by the script code_generator_v8.py.
// DO NOT MODIFY!

// clang-format off
#include "third_party/blink/renderer/bindings/modules/v8/v8_usb_device_request_options.h"

#include "base/stl_util.h"
#include "third_party/blink/renderer/bindings/core/v8/idl_types.h"
#include "third_party/blink/renderer/bindings/core/v8/native_value_traits_impl.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_usb_device_filter.h"
#include "third_party/blink/renderer/platform/bindings/exception_state.h"

namespace blink {

static const v8::Eternal<v8::Name>* eternalV8USBDeviceRequestOptionsKeys(v8::Isolate* isolate) {
  static const char* const kKeys[] = {
    "filters",
  };
  return V8PerIsolateData::From(isolate)->FindOrCreateEternalNameCache(
      kKeys, kKeys, base::size(kKeys));
}

void V8USBDeviceRequestOptions::ToImpl(v8::Isolate* isolate, v8::Local<v8::Value> v8_value, USBDeviceRequestOptions* impl, ExceptionState& exception_state) {
  if (IsUndefinedOrNull(v8_value)) {
    exception_state.ThrowTypeError("Missing required member(s): filters.");
    return;
  }
  if (!v8_value->IsObject()) {
    exception_state.ThrowTypeError("cannot convert to dictionary.");
    return;
  }
  v8::Local<v8::Object> v8Object = v8_value.As<v8::Object>();
  ALLOW_UNUSED_LOCAL(v8Object);

  const v8::Eternal<v8::Name>* keys = eternalV8USBDeviceRequestOptionsKeys(isolate);
  v8::TryCatch block(isolate);
  v8::Local<v8::Context> context = isolate->GetCurrentContext();
  v8::Local<v8::Value> filters_value;
  if (!v8Object->Get(context, keys[0].Get(isolate)).ToLocal(&filters_value)) {
    exception_state.RethrowV8Exception(block.Exception());
    return;
  }
  if (filters_value.IsEmpty() || filters_value->IsUndefined()) {
    exception_state.ThrowTypeError("required member filters is undefined.");
    return;
  } else {
    HeapVector<Member<USBDeviceFilter>> filters_cpp_value = NativeValueTraits<IDLSequence<USBDeviceFilter>>::NativeValue(isolate, filters_value, exception_state);
    if (exception_state.HadException())
      return;
    impl->setFilters(filters_cpp_value);
  }
}

v8::Local<v8::Value> USBDeviceRequestOptions::ToV8Impl(v8::Local<v8::Object> creationContext, v8::Isolate* isolate) const {
  v8::Local<v8::Object> v8Object = v8::Object::New(isolate);
  if (!toV8USBDeviceRequestOptions(this, v8Object, creationContext, isolate))
    return v8::Undefined(isolate);
  return v8Object;
}

bool toV8USBDeviceRequestOptions(const USBDeviceRequestOptions* impl, v8::Local<v8::Object> dictionary, v8::Local<v8::Object> creationContext, v8::Isolate* isolate) {
  const v8::Eternal<v8::Name>* keys = eternalV8USBDeviceRequestOptionsKeys(isolate);
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

  v8::Local<v8::Value> filters_value;
  bool filters_has_value_or_default = false;
  if (impl->hasFilters()) {
    filters_value = ToV8(impl->filters(), creationContext, isolate);
    filters_has_value_or_default = true;
  } else {
    NOTREACHED();
  }
  if (filters_has_value_or_default &&
      !create_property(0, filters_value)) {
    return false;
  }

  return true;
}

USBDeviceRequestOptions* NativeValueTraits<USBDeviceRequestOptions>::NativeValue(v8::Isolate* isolate, v8::Local<v8::Value> value, ExceptionState& exception_state) {
  USBDeviceRequestOptions* impl = USBDeviceRequestOptions::Create();
  V8USBDeviceRequestOptions::ToImpl(isolate, value, impl, exception_state);
  return impl;
}

}  // namespace blink