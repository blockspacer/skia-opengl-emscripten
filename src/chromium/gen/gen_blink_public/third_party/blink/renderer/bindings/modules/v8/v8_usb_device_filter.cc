// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated from the Jinja2 template
// third_party/blink/renderer/bindings/templates/dictionary_v8.cc.tmpl
// by the script code_generator_v8.py.
// DO NOT MODIFY!

// clang-format off
#include "third_party/blink/renderer/bindings/modules/v8/v8_usb_device_filter.h"

#include "base/stl_util.h"
#include "third_party/blink/renderer/bindings/core/v8/idl_types.h"
#include "third_party/blink/renderer/bindings/core/v8/native_value_traits_impl.h"
#include "third_party/blink/renderer/platform/bindings/exception_state.h"

namespace blink {

static const v8::Eternal<v8::Name>* eternalV8USBDeviceFilterKeys(v8::Isolate* isolate) {
  static const char* const kKeys[] = {
    "classCode",
    "productId",
    "protocolCode",
    "serialNumber",
    "subclassCode",
    "vendorId",
  };
  return V8PerIsolateData::From(isolate)->FindOrCreateEternalNameCache(
      kKeys, kKeys, base::size(kKeys));
}

void V8USBDeviceFilter::ToImpl(v8::Isolate* isolate, v8::Local<v8::Value> v8_value, USBDeviceFilter* impl, ExceptionState& exception_state) {
  if (IsUndefinedOrNull(v8_value)) {
    return;
  }
  if (!v8_value->IsObject()) {
    exception_state.ThrowTypeError("cannot convert to dictionary.");
    return;
  }
  v8::Local<v8::Object> v8Object = v8_value.As<v8::Object>();
  ALLOW_UNUSED_LOCAL(v8Object);

  const v8::Eternal<v8::Name>* keys = eternalV8USBDeviceFilterKeys(isolate);
  v8::TryCatch block(isolate);
  v8::Local<v8::Context> context = isolate->GetCurrentContext();
  v8::Local<v8::Value> class_code_value;
  if (!v8Object->Get(context, keys[0].Get(isolate)).ToLocal(&class_code_value)) {
    exception_state.RethrowV8Exception(block.Exception());
    return;
  }
  if (class_code_value.IsEmpty() || class_code_value->IsUndefined()) {
    // Do nothing.
  } else {
    uint8_t class_code_cpp_value = NativeValueTraits<IDLOctet>::NativeValue(isolate, class_code_value, exception_state);
    if (exception_state.HadException())
      return;
    impl->setClassCode(class_code_cpp_value);
  }

  v8::Local<v8::Value> product_id_value;
  if (!v8Object->Get(context, keys[1].Get(isolate)).ToLocal(&product_id_value)) {
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

  v8::Local<v8::Value> protocol_code_value;
  if (!v8Object->Get(context, keys[2].Get(isolate)).ToLocal(&protocol_code_value)) {
    exception_state.RethrowV8Exception(block.Exception());
    return;
  }
  if (protocol_code_value.IsEmpty() || protocol_code_value->IsUndefined()) {
    // Do nothing.
  } else {
    uint8_t protocol_code_cpp_value = NativeValueTraits<IDLOctet>::NativeValue(isolate, protocol_code_value, exception_state);
    if (exception_state.HadException())
      return;
    impl->setProtocolCode(protocol_code_cpp_value);
  }

  v8::Local<v8::Value> serial_number_value;
  if (!v8Object->Get(context, keys[3].Get(isolate)).ToLocal(&serial_number_value)) {
    exception_state.RethrowV8Exception(block.Exception());
    return;
  }
  if (serial_number_value.IsEmpty() || serial_number_value->IsUndefined()) {
    // Do nothing.
  } else {
    V8StringResource<> serial_number_cpp_value = serial_number_value;
    if (!serial_number_cpp_value.Prepare(exception_state))
      return;
    impl->setSerialNumber(serial_number_cpp_value);
  }

  v8::Local<v8::Value> subclass_code_value;
  if (!v8Object->Get(context, keys[4].Get(isolate)).ToLocal(&subclass_code_value)) {
    exception_state.RethrowV8Exception(block.Exception());
    return;
  }
  if (subclass_code_value.IsEmpty() || subclass_code_value->IsUndefined()) {
    // Do nothing.
  } else {
    uint8_t subclass_code_cpp_value = NativeValueTraits<IDLOctet>::NativeValue(isolate, subclass_code_value, exception_state);
    if (exception_state.HadException())
      return;
    impl->setSubclassCode(subclass_code_cpp_value);
  }

  v8::Local<v8::Value> vendor_id_value;
  if (!v8Object->Get(context, keys[5].Get(isolate)).ToLocal(&vendor_id_value)) {
    exception_state.RethrowV8Exception(block.Exception());
    return;
  }
  if (vendor_id_value.IsEmpty() || vendor_id_value->IsUndefined()) {
    // Do nothing.
  } else {
    uint16_t vendor_id_cpp_value = NativeValueTraits<IDLUnsignedShort>::NativeValue(isolate, vendor_id_value, exception_state);
    if (exception_state.HadException())
      return;
    impl->setVendorId(vendor_id_cpp_value);
  }
}

v8::Local<v8::Value> USBDeviceFilter::ToV8Impl(v8::Local<v8::Object> creationContext, v8::Isolate* isolate) const {
  v8::Local<v8::Object> v8Object = v8::Object::New(isolate);
  if (!toV8USBDeviceFilter(this, v8Object, creationContext, isolate))
    return v8::Undefined(isolate);
  return v8Object;
}

bool toV8USBDeviceFilter(const USBDeviceFilter* impl, v8::Local<v8::Object> dictionary, v8::Local<v8::Object> creationContext, v8::Isolate* isolate) {
  const v8::Eternal<v8::Name>* keys = eternalV8USBDeviceFilterKeys(isolate);
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

  v8::Local<v8::Value> class_code_value;
  bool class_code_has_value_or_default = false;
  if (impl->hasClassCode()) {
    class_code_value = v8::Integer::NewFromUnsigned(isolate, impl->classCode());
    class_code_has_value_or_default = true;
  }
  if (class_code_has_value_or_default &&
      !create_property(0, class_code_value)) {
    return false;
  }

  v8::Local<v8::Value> product_id_value;
  bool product_id_has_value_or_default = false;
  if (impl->hasProductId()) {
    product_id_value = v8::Integer::NewFromUnsigned(isolate, impl->productId());
    product_id_has_value_or_default = true;
  }
  if (product_id_has_value_or_default &&
      !create_property(1, product_id_value)) {
    return false;
  }

  v8::Local<v8::Value> protocol_code_value;
  bool protocol_code_has_value_or_default = false;
  if (impl->hasProtocolCode()) {
    protocol_code_value = v8::Integer::NewFromUnsigned(isolate, impl->protocolCode());
    protocol_code_has_value_or_default = true;
  }
  if (protocol_code_has_value_or_default &&
      !create_property(2, protocol_code_value)) {
    return false;
  }

  v8::Local<v8::Value> serial_number_value;
  bool serial_number_has_value_or_default = false;
  if (impl->hasSerialNumber()) {
    serial_number_value = V8String(isolate, impl->serialNumber());
    serial_number_has_value_or_default = true;
  }
  if (serial_number_has_value_or_default &&
      !create_property(3, serial_number_value)) {
    return false;
  }

  v8::Local<v8::Value> subclass_code_value;
  bool subclass_code_has_value_or_default = false;
  if (impl->hasSubclassCode()) {
    subclass_code_value = v8::Integer::NewFromUnsigned(isolate, impl->subclassCode());
    subclass_code_has_value_or_default = true;
  }
  if (subclass_code_has_value_or_default &&
      !create_property(4, subclass_code_value)) {
    return false;
  }

  v8::Local<v8::Value> vendor_id_value;
  bool vendor_id_has_value_or_default = false;
  if (impl->hasVendorId()) {
    vendor_id_value = v8::Integer::NewFromUnsigned(isolate, impl->vendorId());
    vendor_id_has_value_or_default = true;
  }
  if (vendor_id_has_value_or_default &&
      !create_property(5, vendor_id_value)) {
    return false;
  }

  return true;
}

USBDeviceFilter* NativeValueTraits<USBDeviceFilter>::NativeValue(v8::Isolate* isolate, v8::Local<v8::Value> value, ExceptionState& exception_state) {
  USBDeviceFilter* impl = USBDeviceFilter::Create();
  V8USBDeviceFilter::ToImpl(isolate, value, impl, exception_state);
  return impl;
}

}  // namespace blink
