// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated from the Jinja2 template
// third_party/blink/renderer/bindings/templates/dictionary_v8.cc.tmpl
// by the script code_generator_v8.py.
// DO NOT MODIFY!

// clang-format off
#include "third_party/blink/renderer/bindings/modules/v8/v8_payment_method_change_event_init.h"

#include "base/stl_util.h"
#include "third_party/blink/renderer/bindings/core/v8/idl_types.h"
#include "third_party/blink/renderer/bindings/core/v8/native_value_traits_impl.h"
#include "third_party/blink/renderer/bindings/core/v8/script_value.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_payment_request_update_event_init.h"
#include "third_party/blink/renderer/platform/bindings/exception_state.h"

namespace blink {

static const v8::Eternal<v8::Name>* eternalV8PaymentMethodChangeEventInitKeys(v8::Isolate* isolate) {
  static const char* const kKeys[] = {
    "methodDetails",
    "methodName",
  };
  return V8PerIsolateData::From(isolate)->FindOrCreateEternalNameCache(
      kKeys, kKeys, base::size(kKeys));
}

void V8PaymentMethodChangeEventInit::ToImpl(v8::Isolate* isolate, v8::Local<v8::Value> v8_value, PaymentMethodChangeEventInit* impl, ExceptionState& exception_state) {
  if (IsUndefinedOrNull(v8_value)) {
    return;
  }
  if (!v8_value->IsObject()) {
    exception_state.ThrowTypeError("cannot convert to dictionary.");
    return;
  }
  v8::Local<v8::Object> v8Object = v8_value.As<v8::Object>();
  ALLOW_UNUSED_LOCAL(v8Object);

  V8PaymentRequestUpdateEventInit::ToImpl(isolate, v8_value, impl, exception_state);
  if (exception_state.HadException())
    return;

  const v8::Eternal<v8::Name>* keys = eternalV8PaymentMethodChangeEventInitKeys(isolate);
  v8::TryCatch block(isolate);
  v8::Local<v8::Context> context = isolate->GetCurrentContext();
  v8::Local<v8::Value> method_details_value;
  if (!v8Object->Get(context, keys[0].Get(isolate)).ToLocal(&method_details_value)) {
    exception_state.RethrowV8Exception(block.Exception());
    return;
  }
  if (method_details_value.IsEmpty() || method_details_value->IsUndefined()) {
    // Do nothing.
  } else if (method_details_value->IsNull()) {
    impl->setMethodDetailsToNull();
  } else {
    ScriptValue method_details_cpp_value = ScriptValue(ScriptState::Current(isolate), method_details_value);
    if (!method_details_cpp_value.IsObject()) {
      exception_state.ThrowTypeError("member methodDetails is not an object.");
      return;
    }
    impl->setMethodDetails(method_details_cpp_value);
  }

  v8::Local<v8::Value> method_name_value;
  if (!v8Object->Get(context, keys[1].Get(isolate)).ToLocal(&method_name_value)) {
    exception_state.RethrowV8Exception(block.Exception());
    return;
  }
  if (method_name_value.IsEmpty() || method_name_value->IsUndefined()) {
    // Do nothing.
  } else {
    V8StringResource<> method_name_cpp_value = method_name_value;
    if (!method_name_cpp_value.Prepare(exception_state))
      return;
    impl->setMethodName(method_name_cpp_value);
  }
}

v8::Local<v8::Value> PaymentMethodChangeEventInit::ToV8Impl(v8::Local<v8::Object> creationContext, v8::Isolate* isolate) const {
  v8::Local<v8::Object> v8Object = v8::Object::New(isolate);
  if (!toV8PaymentMethodChangeEventInit(this, v8Object, creationContext, isolate))
    return v8::Undefined(isolate);
  return v8Object;
}

bool toV8PaymentMethodChangeEventInit(const PaymentMethodChangeEventInit* impl, v8::Local<v8::Object> dictionary, v8::Local<v8::Object> creationContext, v8::Isolate* isolate) {
  if (!toV8PaymentRequestUpdateEventInit(impl, dictionary, creationContext, isolate))
    return false;

  const v8::Eternal<v8::Name>* keys = eternalV8PaymentMethodChangeEventInitKeys(isolate);
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

  v8::Local<v8::Value> method_details_value;
  bool method_details_has_value_or_default = false;
  if (impl->hasMethodDetails()) {
    DCHECK(impl->methodDetails().IsObject());
    method_details_value = impl->methodDetails().V8Value();
    method_details_has_value_or_default = true;
  } else {
    method_details_value = v8::Null(isolate);
    method_details_has_value_or_default = true;
  }
  if (method_details_has_value_or_default &&
      !create_property(0, method_details_value)) {
    return false;
  }

  v8::Local<v8::Value> method_name_value;
  bool method_name_has_value_or_default = false;
  if (impl->hasMethodName()) {
    method_name_value = V8String(isolate, impl->methodName());
    method_name_has_value_or_default = true;
  } else {
    method_name_value = V8String(isolate, WTF::g_empty_string);
    method_name_has_value_or_default = true;
  }
  if (method_name_has_value_or_default &&
      !create_property(1, method_name_value)) {
    return false;
  }

  return true;
}

PaymentMethodChangeEventInit* NativeValueTraits<PaymentMethodChangeEventInit>::NativeValue(v8::Isolate* isolate, v8::Local<v8::Value> value, ExceptionState& exception_state) {
  PaymentMethodChangeEventInit* impl = PaymentMethodChangeEventInit::Create();
  V8PaymentMethodChangeEventInit::ToImpl(isolate, value, impl, exception_state);
  return impl;
}

}  // namespace blink
