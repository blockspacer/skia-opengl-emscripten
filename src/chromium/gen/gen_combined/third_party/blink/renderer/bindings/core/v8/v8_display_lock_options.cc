// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated from the Jinja2 template
// third_party/blink/renderer/bindings/templates/dictionary_v8.cc.tmpl
// by the script code_generator_v8.py.
// DO NOT MODIFY!

// clang-format off
#include "third_party/blink/renderer/bindings/core/v8/v8_display_lock_options.h"

#include "base/stl_util.h"
#include "third_party/blink/renderer/bindings/core/v8/idl_types.h"
#include "third_party/blink/renderer/bindings/core/v8/native_value_traits_impl.h"
#include "third_party/blink/renderer/platform/bindings/exception_state.h"

namespace blink {

static const v8::Eternal<v8::Name>* eternalV8DisplayLockOptionsKeys(v8::Isolate* isolate) {
  static const char* const kKeys[] = {
    "activatable",
    "size",
    "timeout",
  };
  return V8PerIsolateData::From(isolate)->FindOrCreateEternalNameCache(
      kKeys, kKeys, base::size(kKeys));
}

void V8DisplayLockOptions::ToImpl(v8::Isolate* isolate, v8::Local<v8::Value> v8_value, DisplayLockOptions* impl, ExceptionState& exception_state) {
  if (IsUndefinedOrNull(v8_value)) {
    return;
  }
  if (!v8_value->IsObject()) {
    exception_state.ThrowTypeError("cannot convert to dictionary.");
    return;
  }
  v8::Local<v8::Object> v8Object = v8_value.As<v8::Object>();
  ALLOW_UNUSED_LOCAL(v8Object);

  const v8::Eternal<v8::Name>* keys = eternalV8DisplayLockOptionsKeys(isolate);
  v8::TryCatch block(isolate);
  v8::Local<v8::Context> context = isolate->GetCurrentContext();
  v8::Local<v8::Value> activatable_value;
  if (!v8Object->Get(context, keys[0].Get(isolate)).ToLocal(&activatable_value)) {
    exception_state.RethrowV8Exception(block.Exception());
    return;
  }
  if (activatable_value.IsEmpty() || activatable_value->IsUndefined()) {
    // Do nothing.
  } else {
    bool activatable_cpp_value = NativeValueTraits<IDLBoolean>::NativeValue(isolate, activatable_value, exception_state);
    if (exception_state.HadException())
      return;
    impl->setActivatable(activatable_cpp_value);
  }

  v8::Local<v8::Value> size_value;
  if (!v8Object->Get(context, keys[1].Get(isolate)).ToLocal(&size_value)) {
    exception_state.RethrowV8Exception(block.Exception());
    return;
  }
  if (size_value.IsEmpty() || size_value->IsUndefined()) {
    // Do nothing.
  } else {
    Vector<double> size_cpp_value = NativeValueTraits<IDLSequence<IDLDouble>>::NativeValue(isolate, size_value, exception_state);
    if (exception_state.HadException())
      return;
    impl->setSize(size_cpp_value);
  }

  v8::Local<v8::Value> timeout_value;
  if (!v8Object->Get(context, keys[2].Get(isolate)).ToLocal(&timeout_value)) {
    exception_state.RethrowV8Exception(block.Exception());
    return;
  }
  if (timeout_value.IsEmpty() || timeout_value->IsUndefined()) {
    // Do nothing.
  } else {
    double timeout_cpp_value = NativeValueTraits<IDLUnrestrictedDouble>::NativeValue(isolate, timeout_value, exception_state);
    if (exception_state.HadException())
      return;
    impl->setTimeout(timeout_cpp_value);
  }
}

v8::Local<v8::Value> DisplayLockOptions::ToV8Impl(v8::Local<v8::Object> creationContext, v8::Isolate* isolate) const {
  v8::Local<v8::Object> v8Object = v8::Object::New(isolate);
  if (!toV8DisplayLockOptions(this, v8Object, creationContext, isolate))
    return v8::Undefined(isolate);
  return v8Object;
}

bool toV8DisplayLockOptions(const DisplayLockOptions* impl, v8::Local<v8::Object> dictionary, v8::Local<v8::Object> creationContext, v8::Isolate* isolate) {
  const v8::Eternal<v8::Name>* keys = eternalV8DisplayLockOptionsKeys(isolate);
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

  v8::Local<v8::Value> activatable_value;
  bool activatable_has_value_or_default = false;
  if (impl->hasActivatable()) {
    activatable_value = v8::Boolean::New(isolate, impl->activatable());
    activatable_has_value_or_default = true;
  } else {
    activatable_value = v8::Boolean::New(isolate, false);
    activatable_has_value_or_default = true;
  }
  if (activatable_has_value_or_default &&
      !create_property(0, activatable_value)) {
    return false;
  }

  v8::Local<v8::Value> size_value;
  bool size_has_value_or_default = false;
  if (impl->hasSize()) {
    size_value = ToV8(impl->size(), creationContext, isolate);
    size_has_value_or_default = true;
  }
  if (size_has_value_or_default &&
      !create_property(1, size_value)) {
    return false;
  }

  v8::Local<v8::Value> timeout_value;
  bool timeout_has_value_or_default = false;
  if (impl->hasTimeout()) {
    timeout_value = v8::Number::New(isolate, impl->timeout());
    timeout_has_value_or_default = true;
  }
  if (timeout_has_value_or_default &&
      !create_property(2, timeout_value)) {
    return false;
  }

  return true;
}

DisplayLockOptions* NativeValueTraits<DisplayLockOptions>::NativeValue(v8::Isolate* isolate, v8::Local<v8::Value> value, ExceptionState& exception_state) {
  DisplayLockOptions* impl = DisplayLockOptions::Create();
  V8DisplayLockOptions::ToImpl(isolate, value, impl, exception_state);
  return impl;
}

}  // namespace blink
