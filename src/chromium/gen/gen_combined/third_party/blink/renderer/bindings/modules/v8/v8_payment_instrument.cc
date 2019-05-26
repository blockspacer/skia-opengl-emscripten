// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated from the Jinja2 template
// third_party/blink/renderer/bindings/templates/dictionary_v8.cc.tmpl
// by the script code_generator_v8.py.
// DO NOT MODIFY!

// clang-format off
#include "third_party/blink/renderer/bindings/modules/v8/v8_payment_instrument.h"

#include "base/stl_util.h"
#include "third_party/blink/renderer/bindings/core/v8/idl_types.h"
#include "third_party/blink/renderer/bindings/core/v8/native_value_traits_impl.h"
#include "third_party/blink/renderer/bindings/core/v8/script_value.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_image_object.h"
#include "third_party/blink/renderer/platform/bindings/exception_state.h"

namespace blink {

static const v8::Eternal<v8::Name>* eternalV8PaymentInstrumentKeys(v8::Isolate* isolate) {
  static const char* const kKeys[] = {
    "capabilities",
    "icons",
    "method",
    "name",
  };
  return V8PerIsolateData::From(isolate)->FindOrCreateEternalNameCache(
      kKeys, kKeys, base::size(kKeys));
}

void V8PaymentInstrument::ToImpl(v8::Isolate* isolate, v8::Local<v8::Value> v8_value, PaymentInstrument* impl, ExceptionState& exception_state) {
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

  const v8::Eternal<v8::Name>* keys = eternalV8PaymentInstrumentKeys(isolate);
  v8::TryCatch block(isolate);
  v8::Local<v8::Context> context = isolate->GetCurrentContext();
  v8::Local<v8::Value> capabilities_value;
  if (!v8Object->Get(context, keys[0].Get(isolate)).ToLocal(&capabilities_value)) {
    exception_state.RethrowV8Exception(block.Exception());
    return;
  }
  if (capabilities_value.IsEmpty() || capabilities_value->IsUndefined()) {
    // Do nothing.
  } else {
    ScriptValue capabilities_cpp_value = ScriptValue(ScriptState::Current(isolate), capabilities_value);
    if (!capabilities_cpp_value.IsObject()) {
      exception_state.ThrowTypeError("member capabilities is not an object.");
      return;
    }
    impl->setCapabilities(capabilities_cpp_value);
  }

  v8::Local<v8::Value> icons_value;
  if (!v8Object->Get(context, keys[1].Get(isolate)).ToLocal(&icons_value)) {
    exception_state.RethrowV8Exception(block.Exception());
    return;
  }
  if (icons_value.IsEmpty() || icons_value->IsUndefined()) {
    // Do nothing.
  } else {
    HeapVector<Member<ImageObject>> icons_cpp_value = NativeValueTraits<IDLSequence<ImageObject>>::NativeValue(isolate, icons_value, exception_state);
    if (exception_state.HadException())
      return;
    impl->setIcons(icons_cpp_value);
  }

  v8::Local<v8::Value> method_value;
  if (!v8Object->Get(context, keys[2].Get(isolate)).ToLocal(&method_value)) {
    exception_state.RethrowV8Exception(block.Exception());
    return;
  }
  if (method_value.IsEmpty() || method_value->IsUndefined()) {
    // Do nothing.
  } else {
    V8StringResource<> method_cpp_value = method_value;
    if (!method_cpp_value.Prepare(exception_state))
      return;
    impl->setMethod(method_cpp_value);
  }

  v8::Local<v8::Value> name_value;
  if (!v8Object->Get(context, keys[3].Get(isolate)).ToLocal(&name_value)) {
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
    impl->setName(name_cpp_value);
  }
}

v8::Local<v8::Value> PaymentInstrument::ToV8Impl(v8::Local<v8::Object> creationContext, v8::Isolate* isolate) const {
  v8::Local<v8::Object> v8Object = v8::Object::New(isolate);
  if (!toV8PaymentInstrument(this, v8Object, creationContext, isolate))
    return v8::Undefined(isolate);
  return v8Object;
}

bool toV8PaymentInstrument(const PaymentInstrument* impl, v8::Local<v8::Object> dictionary, v8::Local<v8::Object> creationContext, v8::Isolate* isolate) {
  const v8::Eternal<v8::Name>* keys = eternalV8PaymentInstrumentKeys(isolate);
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

  v8::Local<v8::Value> capabilities_value;
  bool capabilities_has_value_or_default = false;
  if (impl->hasCapabilities()) {
    DCHECK(impl->capabilities().IsObject());
    capabilities_value = impl->capabilities().V8Value();
    capabilities_has_value_or_default = true;
  }
  if (capabilities_has_value_or_default &&
      !create_property(0, capabilities_value)) {
    return false;
  }

  v8::Local<v8::Value> icons_value;
  bool icons_has_value_or_default = false;
  if (impl->hasIcons()) {
    icons_value = ToV8(impl->icons(), creationContext, isolate);
    icons_has_value_or_default = true;
  }
  if (icons_has_value_or_default &&
      !create_property(1, icons_value)) {
    return false;
  }

  v8::Local<v8::Value> method_value;
  bool method_has_value_or_default = false;
  if (impl->hasMethod()) {
    method_value = V8String(isolate, impl->method());
    method_has_value_or_default = true;
  }
  if (method_has_value_or_default &&
      !create_property(2, method_value)) {
    return false;
  }

  v8::Local<v8::Value> name_value;
  bool name_has_value_or_default = false;
  if (impl->hasName()) {
    name_value = V8String(isolate, impl->name());
    name_has_value_or_default = true;
  } else {
    NOTREACHED();
  }
  if (name_has_value_or_default &&
      !create_property(3, name_value)) {
    return false;
  }

  return true;
}

PaymentInstrument* NativeValueTraits<PaymentInstrument>::NativeValue(v8::Isolate* isolate, v8::Local<v8::Value> value, ExceptionState& exception_state) {
  PaymentInstrument* impl = PaymentInstrument::Create();
  V8PaymentInstrument::ToImpl(isolate, value, impl, exception_state);
  return impl;
}

}  // namespace blink
