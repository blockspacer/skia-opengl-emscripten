// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated from the Jinja2 template
// third_party/blink/renderer/bindings/templates/dictionary_v8.cc.tmpl
// by the script code_generator_v8.py.
// DO NOT MODIFY!

// clang-format off
#include "third_party/blink/renderer/bindings/modules/v8/v8_hid_device_filter.h"

#include "base/stl_util.h"
#include "third_party/blink/renderer/bindings/core/v8/idl_types.h"
#include "third_party/blink/renderer/bindings/core/v8/native_value_traits_impl.h"
#include "third_party/blink/renderer/platform/bindings/exception_state.h"

namespace blink {

static const v8::Eternal<v8::Name>* eternalV8HIDDeviceFilterKeys(v8::Isolate* isolate) {
  static const char* const kKeys[] = {
    "productId",
    "usage",
    "usagePage",
    "vendorId",
  };
  return V8PerIsolateData::From(isolate)->FindOrCreateEternalNameCache(
      kKeys, kKeys, base::size(kKeys));
}

void V8HIDDeviceFilter::ToImpl(v8::Isolate* isolate, v8::Local<v8::Value> v8_value, HIDDeviceFilter* impl, ExceptionState& exception_state) {
  if (IsUndefinedOrNull(v8_value)) {
    return;
  }
  if (!v8_value->IsObject()) {
    exception_state.ThrowTypeError("cannot convert to dictionary.");
    return;
  }
  v8::Local<v8::Object> v8Object = v8_value.As<v8::Object>();
  ALLOW_UNUSED_LOCAL(v8Object);

  const v8::Eternal<v8::Name>* keys = eternalV8HIDDeviceFilterKeys(isolate);
  v8::TryCatch block(isolate);
  v8::Local<v8::Context> context = isolate->GetCurrentContext();
  v8::Local<v8::Value> product_id_value;
  if (!v8Object->Get(context, keys[0].Get(isolate)).ToLocal(&product_id_value)) {
    exception_state.RethrowV8Exception(block.Exception());
    return;
  }
  if (product_id_value.IsEmpty() || product_id_value->IsUndefined()) {
    // Do nothing.
  } else {
    uint16_t product_id_cpp_value = NativeValueTraits<IDLUnsignedShort>::NativeValue(isolate, product_id_value, exception_state);
    if (exception_state.HadException())
      return;
    impl->setProductId(product_id_cpp_value);
  }

  v8::Local<v8::Value> usage_value;
  if (!v8Object->Get(context, keys[1].Get(isolate)).ToLocal(&usage_value)) {
    exception_state.RethrowV8Exception(block.Exception());
    return;
  }
  if (usage_value.IsEmpty() || usage_value->IsUndefined()) {
    // Do nothing.
  } else {
    uint16_t usage_cpp_value = NativeValueTraits<IDLUnsignedShort>::NativeValue(isolate, usage_value, exception_state);
    if (exception_state.HadException())
      return;
    impl->setUsage(usage_cpp_value);
  }

  v8::Local<v8::Value> usage_page_value;
  if (!v8Object->Get(context, keys[2].Get(isolate)).ToLocal(&usage_page_value)) {
    exception_state.RethrowV8Exception(block.Exception());
    return;
  }
  if (usage_page_value.IsEmpty() || usage_page_value->IsUndefined()) {
    // Do nothing.
  } else {
    uint16_t usage_page_cpp_value = NativeValueTraits<IDLUnsignedShort>::NativeValue(isolate, usage_page_value, exception_state);
    if (exception_state.HadException())
      return;
    impl->setUsagePage(usage_page_cpp_value);
  }

  v8::Local<v8::Value> vendor_id_value;
  if (!v8Object->Get(context, keys[3].Get(isolate)).ToLocal(&vendor_id_value)) {
    exception_state.RethrowV8Exception(block.Exception());
    return;
  }
  if (vendor_id_value.IsEmpty() || vendor_id_value->IsUndefined()) {
    // Do nothing.
  } else {
    uint32_t vendor_id_cpp_value = NativeValueTraits<IDLUnsignedLong>::NativeValue(isolate, vendor_id_value, exception_state);
    if (exception_state.HadException())
      return;
    impl->setVendorId(vendor_id_cpp_value);
  }
}

v8::Local<v8::Value> HIDDeviceFilter::ToV8Impl(v8::Local<v8::Object> creationContext, v8::Isolate* isolate) const {
  v8::Local<v8::Object> v8Object = v8::Object::New(isolate);
  if (!toV8HIDDeviceFilter(this, v8Object, creationContext, isolate))
    return v8::Undefined(isolate);
  return v8Object;
}

bool toV8HIDDeviceFilter(const HIDDeviceFilter* impl, v8::Local<v8::Object> dictionary, v8::Local<v8::Object> creationContext, v8::Isolate* isolate) {
  const v8::Eternal<v8::Name>* keys = eternalV8HIDDeviceFilterKeys(isolate);
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

  v8::Local<v8::Value> product_id_value;
  bool product_id_has_value_or_default = false;
  if (impl->hasProductId()) {
    product_id_value = v8::Integer::NewFromUnsigned(isolate, impl->productId());
    product_id_has_value_or_default = true;
  }
  if (product_id_has_value_or_default &&
      !create_property(0, product_id_value)) {
    return false;
  }

  v8::Local<v8::Value> usage_value;
  bool usage_has_value_or_default = false;
  if (impl->hasUsage()) {
    usage_value = v8::Integer::NewFromUnsigned(isolate, impl->usage());
    usage_has_value_or_default = true;
  }
  if (usage_has_value_or_default &&
      !create_property(1, usage_value)) {
    return false;
  }

  v8::Local<v8::Value> usage_page_value;
  bool usage_page_has_value_or_default = false;
  if (impl->hasUsagePage()) {
    usage_page_value = v8::Integer::NewFromUnsigned(isolate, impl->usagePage());
    usage_page_has_value_or_default = true;
  }
  if (usage_page_has_value_or_default &&
      !create_property(2, usage_page_value)) {
    return false;
  }

  v8::Local<v8::Value> vendor_id_value;
  bool vendor_id_has_value_or_default = false;
  if (impl->hasVendorId()) {
    vendor_id_value = v8::Integer::NewFromUnsigned(isolate, impl->vendorId());
    vendor_id_has_value_or_default = true;
  }
  if (vendor_id_has_value_or_default &&
      !create_property(3, vendor_id_value)) {
    return false;
  }

  return true;
}

HIDDeviceFilter* NativeValueTraits<HIDDeviceFilter>::NativeValue(v8::Isolate* isolate, v8::Local<v8::Value> value, ExceptionState& exception_state) {
  HIDDeviceFilter* impl = HIDDeviceFilter::Create();
  V8HIDDeviceFilter::ToImpl(isolate, value, impl, exception_state);
  return impl;
}

}  // namespace blink
