// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated from the Jinja2 template
// third_party/blink/renderer/bindings/templates/dictionary_v8.cc.tmpl
// by the script code_generator_v8.py.
// DO NOT MODIFY!

// clang-format off
#include "third_party/blink/renderer/bindings/modules/v8/v8_usb_control_transfer_parameters.h"

#include "base/stl_util.h"
#include "third_party/blink/renderer/bindings/core/v8/idl_types.h"
#include "third_party/blink/renderer/bindings/core/v8/native_value_traits_impl.h"
#include "third_party/blink/renderer/platform/bindings/exception_state.h"

namespace blink {

static const v8::Eternal<v8::Name>* eternalV8USBControlTransferParametersKeys(v8::Isolate* isolate) {
  static const char* const kKeys[] = {
    "index",
    "recipient",
    "request",
    "requestType",
    "value",
  };
  return V8PerIsolateData::From(isolate)->FindOrCreateEternalNameCache(
      kKeys, kKeys, base::size(kKeys));
}

void V8USBControlTransferParameters::ToImpl(v8::Isolate* isolate, v8::Local<v8::Value> v8_value, USBControlTransferParameters* impl, ExceptionState& exception_state) {
  if (IsUndefinedOrNull(v8_value)) {
    exception_state.ThrowTypeError("Missing required member(s): index, recipient, request, requestType, value.");
    return;
  }
  if (!v8_value->IsObject()) {
    exception_state.ThrowTypeError("cannot convert to dictionary.");
    return;
  }
  v8::Local<v8::Object> v8Object = v8_value.As<v8::Object>();
  ALLOW_UNUSED_LOCAL(v8Object);

  const v8::Eternal<v8::Name>* keys = eternalV8USBControlTransferParametersKeys(isolate);
  v8::TryCatch block(isolate);
  v8::Local<v8::Context> context = isolate->GetCurrentContext();
  v8::Local<v8::Value> index_value;
  if (!v8Object->Get(context, keys[0].Get(isolate)).ToLocal(&index_value)) {
    exception_state.RethrowV8Exception(block.Exception());
    return;
  }
  if (index_value.IsEmpty() || index_value->IsUndefined()) {
    exception_state.ThrowTypeError("required member index is undefined.");
    return;
  } else {
    uint16_t index_cpp_value = NativeValueTraits<IDLUnsignedShort>::NativeValue(isolate, index_value, exception_state);
    if (exception_state.HadException())
      return;
    impl->setIndex(index_cpp_value);
  }

  v8::Local<v8::Value> recipient_value;
  if (!v8Object->Get(context, keys[1].Get(isolate)).ToLocal(&recipient_value)) {
    exception_state.RethrowV8Exception(block.Exception());
    return;
  }
  if (recipient_value.IsEmpty() || recipient_value->IsUndefined()) {
    exception_state.ThrowTypeError("required member recipient is undefined.");
    return;
  } else {
    V8StringResource<> recipient_cpp_value = recipient_value;
    if (!recipient_cpp_value.Prepare(exception_state))
      return;
    const char* kValidValues[] = {
        "device",
        "interface",
        "endpoint",
        "other",
    };
    if (!IsValidEnum(recipient_cpp_value, kValidValues, base::size(kValidValues), "USBRecipient", exception_state))
      return;
    impl->setRecipient(recipient_cpp_value);
  }

  v8::Local<v8::Value> request_value;
  if (!v8Object->Get(context, keys[2].Get(isolate)).ToLocal(&request_value)) {
    exception_state.RethrowV8Exception(block.Exception());
    return;
  }
  if (request_value.IsEmpty() || request_value->IsUndefined()) {
    exception_state.ThrowTypeError("required member request is undefined.");
    return;
  } else {
    uint8_t request_cpp_value = NativeValueTraits<IDLOctet>::NativeValue(isolate, request_value, exception_state);
    if (exception_state.HadException())
      return;
    impl->setRequest(request_cpp_value);
  }

  v8::Local<v8::Value> request_type_value;
  if (!v8Object->Get(context, keys[3].Get(isolate)).ToLocal(&request_type_value)) {
    exception_state.RethrowV8Exception(block.Exception());
    return;
  }
  if (request_type_value.IsEmpty() || request_type_value->IsUndefined()) {
    exception_state.ThrowTypeError("required member requestType is undefined.");
    return;
  } else {
    V8StringResource<> request_type_cpp_value = request_type_value;
    if (!request_type_cpp_value.Prepare(exception_state))
      return;
    const char* kValidValues[] = {
        "standard",
        "class",
        "vendor",
    };
    if (!IsValidEnum(request_type_cpp_value, kValidValues, base::size(kValidValues), "USBRequestType", exception_state))
      return;
    impl->setRequestType(request_type_cpp_value);
  }

  v8::Local<v8::Value> value_value;
  if (!v8Object->Get(context, keys[4].Get(isolate)).ToLocal(&value_value)) {
    exception_state.RethrowV8Exception(block.Exception());
    return;
  }
  if (value_value.IsEmpty() || value_value->IsUndefined()) {
    exception_state.ThrowTypeError("required member value is undefined.");
    return;
  } else {
    uint16_t value_cpp_value = NativeValueTraits<IDLUnsignedShort>::NativeValue(isolate, value_value, exception_state);
    if (exception_state.HadException())
      return;
    impl->setValue(value_cpp_value);
  }
}

v8::Local<v8::Value> USBControlTransferParameters::ToV8Impl(v8::Local<v8::Object> creationContext, v8::Isolate* isolate) const {
  v8::Local<v8::Object> v8Object = v8::Object::New(isolate);
  if (!toV8USBControlTransferParameters(this, v8Object, creationContext, isolate))
    return v8::Undefined(isolate);
  return v8Object;
}

bool toV8USBControlTransferParameters(const USBControlTransferParameters* impl, v8::Local<v8::Object> dictionary, v8::Local<v8::Object> creationContext, v8::Isolate* isolate) {
  const v8::Eternal<v8::Name>* keys = eternalV8USBControlTransferParametersKeys(isolate);
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

  v8::Local<v8::Value> index_value;
  bool index_has_value_or_default = false;
  if (impl->hasIndex()) {
    index_value = v8::Integer::NewFromUnsigned(isolate, impl->index());
    index_has_value_or_default = true;
  } else {
    NOTREACHED();
  }
  if (index_has_value_or_default &&
      !create_property(0, index_value)) {
    return false;
  }

  v8::Local<v8::Value> recipient_value;
  bool recipient_has_value_or_default = false;
  if (impl->hasRecipient()) {
    recipient_value = V8String(isolate, impl->recipient());
    recipient_has_value_or_default = true;
  } else {
    NOTREACHED();
  }
  if (recipient_has_value_or_default &&
      !create_property(1, recipient_value)) {
    return false;
  }

  v8::Local<v8::Value> request_value;
  bool request_has_value_or_default = false;
  if (impl->hasRequest()) {
    request_value = v8::Integer::NewFromUnsigned(isolate, impl->request());
    request_has_value_or_default = true;
  } else {
    NOTREACHED();
  }
  if (request_has_value_or_default &&
      !create_property(2, request_value)) {
    return false;
  }

  v8::Local<v8::Value> request_type_value;
  bool request_type_has_value_or_default = false;
  if (impl->hasRequestType()) {
    request_type_value = V8String(isolate, impl->requestType());
    request_type_has_value_or_default = true;
  } else {
    NOTREACHED();
  }
  if (request_type_has_value_or_default &&
      !create_property(3, request_type_value)) {
    return false;
  }

  v8::Local<v8::Value> value_value;
  bool value_has_value_or_default = false;
  if (impl->hasValue()) {
    value_value = v8::Integer::NewFromUnsigned(isolate, impl->value());
    value_has_value_or_default = true;
  } else {
    NOTREACHED();
  }
  if (value_has_value_or_default &&
      !create_property(4, value_value)) {
    return false;
  }

  return true;
}

USBControlTransferParameters* NativeValueTraits<USBControlTransferParameters>::NativeValue(v8::Isolate* isolate, v8::Local<v8::Value> value, ExceptionState& exception_state) {
  USBControlTransferParameters* impl = USBControlTransferParameters::Create();
  V8USBControlTransferParameters::ToImpl(isolate, value, impl, exception_state);
  return impl;
}

}  // namespace blink
