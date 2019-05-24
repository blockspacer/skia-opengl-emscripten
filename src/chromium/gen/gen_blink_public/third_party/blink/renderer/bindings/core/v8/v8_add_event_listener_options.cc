// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated from the Jinja2 template
// third_party/blink/renderer/bindings/templates/dictionary_v8.cc.tmpl
// by the script code_generator_v8.py.
// DO NOT MODIFY!

// clang-format off
#include "third_party/blink/renderer/bindings/core/v8/v8_add_event_listener_options.h"

#include "base/stl_util.h"
#include "third_party/blink/renderer/bindings/core/v8/idl_types.h"
#include "third_party/blink/renderer/bindings/core/v8/native_value_traits_impl.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_event_listener_options.h"
#include "third_party/blink/renderer/platform/bindings/exception_state.h"

namespace blink {

static const v8::Eternal<v8::Name>* eternalV8AddEventListenerOptionsKeys(v8::Isolate* isolate) {
  static const char* const kKeys[] = {
    "once",
    "passive",
  };
  return V8PerIsolateData::From(isolate)->FindOrCreateEternalNameCache(
      kKeys, kKeys, base::size(kKeys));
}

void V8AddEventListenerOptions::ToImpl(v8::Isolate* isolate, v8::Local<v8::Value> v8_value, AddEventListenerOptions* impl, ExceptionState& exception_state) {
  if (IsUndefinedOrNull(v8_value)) {
    return;
  }
  if (!v8_value->IsObject()) {
    exception_state.ThrowTypeError("cannot convert to dictionary.");
    return;
  }
  v8::Local<v8::Object> v8Object = v8_value.As<v8::Object>();
  ALLOW_UNUSED_LOCAL(v8Object);

  V8EventListenerOptions::ToImpl(isolate, v8_value, impl, exception_state);
  if (exception_state.HadException())
    return;

  const v8::Eternal<v8::Name>* keys = eternalV8AddEventListenerOptionsKeys(isolate);
  v8::TryCatch block(isolate);
  v8::Local<v8::Context> context = isolate->GetCurrentContext();
  v8::Local<v8::Value> once_value;
  if (!v8Object->Get(context, keys[0].Get(isolate)).ToLocal(&once_value)) {
    exception_state.RethrowV8Exception(block.Exception());
    return;
  }
  if (once_value.IsEmpty() || once_value->IsUndefined()) {
    // Do nothing.
  } else {
    bool once_cpp_value = NativeValueTraits<IDLBoolean>::NativeValue(isolate, once_value, exception_state);
    if (exception_state.HadException())
      return;
    impl->setOnce(once_cpp_value);
  }

  v8::Local<v8::Value> passive_value;
  if (!v8Object->Get(context, keys[1].Get(isolate)).ToLocal(&passive_value)) {
    exception_state.RethrowV8Exception(block.Exception());
    return;
  }
  if (passive_value.IsEmpty() || passive_value->IsUndefined()) {
    // Do nothing.
  } else {
    bool passive_cpp_value = NativeValueTraits<IDLBoolean>::NativeValue(isolate, passive_value, exception_state);
    if (exception_state.HadException())
      return;
    impl->setPassive(passive_cpp_value);
  }
}

v8::Local<v8::Value> AddEventListenerOptions::ToV8Impl(v8::Local<v8::Object> creationContext, v8::Isolate* isolate) const {
  v8::Local<v8::Object> v8Object = v8::Object::New(isolate);
  if (!toV8AddEventListenerOptions(this, v8Object, creationContext, isolate))
    return v8::Undefined(isolate);
  return v8Object;
}

bool toV8AddEventListenerOptions(const AddEventListenerOptions* impl, v8::Local<v8::Object> dictionary, v8::Local<v8::Object> creationContext, v8::Isolate* isolate) {
  if (!toV8EventListenerOptions(impl, dictionary, creationContext, isolate))
    return false;

  const v8::Eternal<v8::Name>* keys = eternalV8AddEventListenerOptionsKeys(isolate);
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

  v8::Local<v8::Value> once_value;
  bool once_has_value_or_default = false;
  if (impl->hasOnce()) {
    once_value = v8::Boolean::New(isolate, impl->once());
    once_has_value_or_default = true;
  } else {
    once_value = v8::Boolean::New(isolate, false);
    once_has_value_or_default = true;
  }
  if (once_has_value_or_default &&
      !create_property(0, once_value)) {
    return false;
  }

  v8::Local<v8::Value> passive_value;
  bool passive_has_value_or_default = false;
  if (impl->hasPassive()) {
    passive_value = v8::Boolean::New(isolate, impl->passive());
    passive_has_value_or_default = true;
  }
  if (passive_has_value_or_default &&
      !create_property(1, passive_value)) {
    return false;
  }

  return true;
}

AddEventListenerOptions* NativeValueTraits<AddEventListenerOptions>::NativeValue(v8::Isolate* isolate, v8::Local<v8::Value> value, ExceptionState& exception_state) {
  AddEventListenerOptions* impl = AddEventListenerOptions::Create();
  V8AddEventListenerOptions::ToImpl(isolate, value, impl, exception_state);
  return impl;
}

}  // namespace blink
