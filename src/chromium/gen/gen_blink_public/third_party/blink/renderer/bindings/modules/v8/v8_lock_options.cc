// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated from the Jinja2 template
// third_party/blink/renderer/bindings/templates/dictionary_v8.cc.tmpl
// by the script code_generator_v8.py.
// DO NOT MODIFY!

// clang-format off
#include "third_party/blink/renderer/bindings/modules/v8/v8_lock_options.h"

#include "base/stl_util.h"
#include "third_party/blink/renderer/bindings/core/v8/idl_types.h"
#include "third_party/blink/renderer/bindings/core/v8/native_value_traits_impl.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_abort_signal.h"
#include "third_party/blink/renderer/platform/bindings/exception_state.h"

namespace blink {

static const v8::Eternal<v8::Name>* eternalV8LockOptionsKeys(v8::Isolate* isolate) {
  static const char* const kKeys[] = {
    "ifAvailable",
    "mode",
    "signal",
    "steal",
  };
  return V8PerIsolateData::From(isolate)->FindOrCreateEternalNameCache(
      kKeys, kKeys, base::size(kKeys));
}

void V8LockOptions::ToImpl(v8::Isolate* isolate, v8::Local<v8::Value> v8_value, LockOptions* impl, ExceptionState& exception_state) {
  if (IsUndefinedOrNull(v8_value)) {
    return;
  }
  if (!v8_value->IsObject()) {
    exception_state.ThrowTypeError("cannot convert to dictionary.");
    return;
  }
  v8::Local<v8::Object> v8Object = v8_value.As<v8::Object>();
  ALLOW_UNUSED_LOCAL(v8Object);

  const v8::Eternal<v8::Name>* keys = eternalV8LockOptionsKeys(isolate);
  v8::TryCatch block(isolate);
  v8::Local<v8::Context> context = isolate->GetCurrentContext();
  v8::Local<v8::Value> if_available_value;
  if (!v8Object->Get(context, keys[0].Get(isolate)).ToLocal(&if_available_value)) {
    exception_state.RethrowV8Exception(block.Exception());
    return;
  }
  if (if_available_value.IsEmpty() || if_available_value->IsUndefined()) {
    // Do nothing.
  } else {
    bool if_available_cpp_value = NativeValueTraits<IDLBoolean>::NativeValue(isolate, if_available_value, exception_state);
    if (exception_state.HadException())
      return;
    impl->setIfAvailable(if_available_cpp_value);
  }

  v8::Local<v8::Value> mode_value;
  if (!v8Object->Get(context, keys[1].Get(isolate)).ToLocal(&mode_value)) {
    exception_state.RethrowV8Exception(block.Exception());
    return;
  }
  if (mode_value.IsEmpty() || mode_value->IsUndefined()) {
    // Do nothing.
  } else {
    V8StringResource<> mode_cpp_value = mode_value;
    if (!mode_cpp_value.Prepare(exception_state))
      return;
    const char* kValidValues[] = {
        "shared",
        "exclusive",
    };
    if (!IsValidEnum(mode_cpp_value, kValidValues, base::size(kValidValues), "LockMode", exception_state))
      return;
    impl->setMode(mode_cpp_value);
  }

  v8::Local<v8::Value> signal_value;
  if (!v8Object->Get(context, keys[2].Get(isolate)).ToLocal(&signal_value)) {
    exception_state.RethrowV8Exception(block.Exception());
    return;
  }
  if (signal_value.IsEmpty() || signal_value->IsUndefined()) {
    // Do nothing.
  } else {
    AbortSignal* signal_cpp_value = V8AbortSignal::ToImplWithTypeCheck(isolate, signal_value);
    if (!signal_cpp_value) {
      exception_state.ThrowTypeError("member signal is not of type AbortSignal.");
      return;
    }
    impl->setSignal(signal_cpp_value);
  }

  v8::Local<v8::Value> steal_value;
  if (!v8Object->Get(context, keys[3].Get(isolate)).ToLocal(&steal_value)) {
    exception_state.RethrowV8Exception(block.Exception());
    return;
  }
  if (steal_value.IsEmpty() || steal_value->IsUndefined()) {
    // Do nothing.
  } else {
    bool steal_cpp_value = NativeValueTraits<IDLBoolean>::NativeValue(isolate, steal_value, exception_state);
    if (exception_state.HadException())
      return;
    impl->setSteal(steal_cpp_value);
  }
}

v8::Local<v8::Value> LockOptions::ToV8Impl(v8::Local<v8::Object> creationContext, v8::Isolate* isolate) const {
  v8::Local<v8::Object> v8Object = v8::Object::New(isolate);
  if (!toV8LockOptions(this, v8Object, creationContext, isolate))
    return v8::Undefined(isolate);
  return v8Object;
}

bool toV8LockOptions(const LockOptions* impl, v8::Local<v8::Object> dictionary, v8::Local<v8::Object> creationContext, v8::Isolate* isolate) {
  const v8::Eternal<v8::Name>* keys = eternalV8LockOptionsKeys(isolate);
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

  v8::Local<v8::Value> if_available_value;
  bool if_available_has_value_or_default = false;
  if (impl->hasIfAvailable()) {
    if_available_value = v8::Boolean::New(isolate, impl->ifAvailable());
    if_available_has_value_or_default = true;
  } else {
    if_available_value = v8::Boolean::New(isolate, false);
    if_available_has_value_or_default = true;
  }
  if (if_available_has_value_or_default &&
      !create_property(0, if_available_value)) {
    return false;
  }

  v8::Local<v8::Value> mode_value;
  bool mode_has_value_or_default = false;
  if (impl->hasMode()) {
    mode_value = V8String(isolate, impl->mode());
    mode_has_value_or_default = true;
  } else {
    mode_value = V8String(isolate, "exclusive");
    mode_has_value_or_default = true;
  }
  if (mode_has_value_or_default &&
      !create_property(1, mode_value)) {
    return false;
  }

  v8::Local<v8::Value> signal_value;
  bool signal_has_value_or_default = false;
  if (impl->hasSignal()) {
    signal_value = ToV8(impl->signal(), creationContext, isolate);
    signal_has_value_or_default = true;
  }
  if (signal_has_value_or_default &&
      !create_property(2, signal_value)) {
    return false;
  }

  v8::Local<v8::Value> steal_value;
  bool steal_has_value_or_default = false;
  if (impl->hasSteal()) {
    steal_value = v8::Boolean::New(isolate, impl->steal());
    steal_has_value_or_default = true;
  } else {
    steal_value = v8::Boolean::New(isolate, false);
    steal_has_value_or_default = true;
  }
  if (steal_has_value_or_default &&
      !create_property(3, steal_value)) {
    return false;
  }

  return true;
}

LockOptions* NativeValueTraits<LockOptions>::NativeValue(v8::Isolate* isolate, v8::Local<v8::Value> value, ExceptionState& exception_state) {
  LockOptions* impl = LockOptions::Create();
  V8LockOptions::ToImpl(isolate, value, impl, exception_state);
  return impl;
}

}  // namespace blink
