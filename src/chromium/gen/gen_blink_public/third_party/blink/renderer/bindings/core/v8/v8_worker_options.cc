// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated from the Jinja2 template
// third_party/blink/renderer/bindings/templates/dictionary_v8.cc.tmpl
// by the script code_generator_v8.py.
// DO NOT MODIFY!

// clang-format off
#include "third_party/blink/renderer/bindings/core/v8/v8_worker_options.h"

#include "base/stl_util.h"
#include "third_party/blink/renderer/bindings/core/v8/idl_types.h"
#include "third_party/blink/renderer/bindings/core/v8/native_value_traits_impl.h"
#include "third_party/blink/renderer/platform/bindings/exception_state.h"

namespace blink {

static const v8::Eternal<v8::Name>* eternalV8WorkerOptionsKeys(v8::Isolate* isolate) {
  static const char* const kKeys[] = {
    "credentials",
    "name",
    "type",
  };
  return V8PerIsolateData::From(isolate)->FindOrCreateEternalNameCache(
      kKeys, kKeys, base::size(kKeys));
}

void V8WorkerOptions::ToImpl(v8::Isolate* isolate, v8::Local<v8::Value> v8_value, WorkerOptions* impl, ExceptionState& exception_state) {
  if (IsUndefinedOrNull(v8_value)) {
    return;
  }
  if (!v8_value->IsObject()) {
    exception_state.ThrowTypeError("cannot convert to dictionary.");
    return;
  }
  v8::Local<v8::Object> v8Object = v8_value.As<v8::Object>();
  ALLOW_UNUSED_LOCAL(v8Object);

  const v8::Eternal<v8::Name>* keys = eternalV8WorkerOptionsKeys(isolate);
  v8::TryCatch block(isolate);
  v8::Local<v8::Context> context = isolate->GetCurrentContext();
  v8::Local<v8::Value> credentials_value;
  if (!v8Object->Get(context, keys[0].Get(isolate)).ToLocal(&credentials_value)) {
    exception_state.RethrowV8Exception(block.Exception());
    return;
  }
  if (credentials_value.IsEmpty() || credentials_value->IsUndefined()) {
    // Do nothing.
  } else {
    V8StringResource<> credentials_cpp_value = credentials_value;
    if (!credentials_cpp_value.Prepare(exception_state))
      return;
    const char* kValidValues[] = {
        "omit",
        "same-origin",
        "include",
    };
    if (!IsValidEnum(credentials_cpp_value, kValidValues, base::size(kValidValues), "RequestCredentials", exception_state))
      return;
    impl->setCredentials(credentials_cpp_value);
  }

  v8::Local<v8::Value> name_value;
  if (!v8Object->Get(context, keys[1].Get(isolate)).ToLocal(&name_value)) {
    exception_state.RethrowV8Exception(block.Exception());
    return;
  }
  if (name_value.IsEmpty() || name_value->IsUndefined()) {
    // Do nothing.
  } else {
    V8StringResource<> name_cpp_value = name_value;
    if (!name_cpp_value.Prepare(exception_state))
      return;
    impl->setName(name_cpp_value);
  }

  v8::Local<v8::Value> type_value;
  if (!v8Object->Get(context, keys[2].Get(isolate)).ToLocal(&type_value)) {
    exception_state.RethrowV8Exception(block.Exception());
    return;
  }
  if (type_value.IsEmpty() || type_value->IsUndefined()) {
    // Do nothing.
  } else {
    V8StringResource<> type_cpp_value = type_value;
    if (!type_cpp_value.Prepare(exception_state))
      return;
    const char* kValidValues[] = {
        "classic",
        "module",
    };
    if (!IsValidEnum(type_cpp_value, kValidValues, base::size(kValidValues), "WorkerType", exception_state))
      return;
    impl->setType(type_cpp_value);
  }
}

v8::Local<v8::Value> WorkerOptions::ToV8Impl(v8::Local<v8::Object> creationContext, v8::Isolate* isolate) const {
  v8::Local<v8::Object> v8Object = v8::Object::New(isolate);
  if (!toV8WorkerOptions(this, v8Object, creationContext, isolate))
    return v8::Undefined(isolate);
  return v8Object;
}

bool toV8WorkerOptions(const WorkerOptions* impl, v8::Local<v8::Object> dictionary, v8::Local<v8::Object> creationContext, v8::Isolate* isolate) {
  const v8::Eternal<v8::Name>* keys = eternalV8WorkerOptionsKeys(isolate);
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

  v8::Local<v8::Value> credentials_value;
  bool credentials_has_value_or_default = false;
  if (impl->hasCredentials()) {
    credentials_value = V8String(isolate, impl->credentials());
    credentials_has_value_or_default = true;
  } else {
    credentials_value = V8String(isolate, "same-origin");
    credentials_has_value_or_default = true;
  }
  if (credentials_has_value_or_default &&
      !create_property(0, credentials_value)) {
    return false;
  }

  v8::Local<v8::Value> name_value;
  bool name_has_value_or_default = false;
  if (impl->hasName()) {
    name_value = V8String(isolate, impl->name());
    name_has_value_or_default = true;
  } else {
    name_value = V8String(isolate, WTF::g_empty_string);
    name_has_value_or_default = true;
  }
  if (name_has_value_or_default &&
      !create_property(1, name_value)) {
    return false;
  }

  v8::Local<v8::Value> type_value;
  bool type_has_value_or_default = false;
  if (impl->hasType()) {
    type_value = V8String(isolate, impl->type());
    type_has_value_or_default = true;
  } else {
    type_value = V8String(isolate, "classic");
    type_has_value_or_default = true;
  }
  if (type_has_value_or_default &&
      !create_property(2, type_value)) {
    return false;
  }

  return true;
}

WorkerOptions* NativeValueTraits<WorkerOptions>::NativeValue(v8::Isolate* isolate, v8::Local<v8::Value> value, ExceptionState& exception_state) {
  WorkerOptions* impl = WorkerOptions::Create();
  V8WorkerOptions::ToImpl(isolate, value, impl, exception_state);
  return impl;
}

}  // namespace blink
