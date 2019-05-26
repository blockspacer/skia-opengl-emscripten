// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated from the Jinja2 template
// third_party/blink/renderer/bindings/templates/dictionary_v8.cc.tmpl
// by the script code_generator_v8.py.
// DO NOT MODIFY!

// clang-format off
#include "third_party/blink/renderer/bindings/modules/v8/v8_client_query_options.h"

#include "base/stl_util.h"
#include "third_party/blink/renderer/bindings/core/v8/idl_types.h"
#include "third_party/blink/renderer/bindings/core/v8/native_value_traits_impl.h"
#include "third_party/blink/renderer/platform/bindings/exception_state.h"

namespace blink {

static const v8::Eternal<v8::Name>* eternalV8ClientQueryOptionsKeys(v8::Isolate* isolate) {
  static const char* const kKeys[] = {
    "includeUncontrolled",
    "type",
  };
  return V8PerIsolateData::From(isolate)->FindOrCreateEternalNameCache(
      kKeys, kKeys, base::size(kKeys));
}

void V8ClientQueryOptions::ToImpl(v8::Isolate* isolate, v8::Local<v8::Value> v8_value, ClientQueryOptions* impl, ExceptionState& exception_state) {
  if (IsUndefinedOrNull(v8_value)) {
    return;
  }
  if (!v8_value->IsObject()) {
    exception_state.ThrowTypeError("cannot convert to dictionary.");
    return;
  }
  v8::Local<v8::Object> v8Object = v8_value.As<v8::Object>();
  ALLOW_UNUSED_LOCAL(v8Object);

  const v8::Eternal<v8::Name>* keys = eternalV8ClientQueryOptionsKeys(isolate);
  v8::TryCatch block(isolate);
  v8::Local<v8::Context> context = isolate->GetCurrentContext();
  v8::Local<v8::Value> include_uncontrolled_value;
  if (!v8Object->Get(context, keys[0].Get(isolate)).ToLocal(&include_uncontrolled_value)) {
    exception_state.RethrowV8Exception(block.Exception());
    return;
  }
  if (include_uncontrolled_value.IsEmpty() || include_uncontrolled_value->IsUndefined()) {
    // Do nothing.
  } else {
    bool include_uncontrolled_cpp_value = NativeValueTraits<IDLBoolean>::NativeValue(isolate, include_uncontrolled_value, exception_state);
    if (exception_state.HadException())
      return;
    impl->setIncludeUncontrolled(include_uncontrolled_cpp_value);
  }

  v8::Local<v8::Value> type_value;
  if (!v8Object->Get(context, keys[1].Get(isolate)).ToLocal(&type_value)) {
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
        "window",
        "worker",
        "sharedworker",
        "all",
    };
    if (!IsValidEnum(type_cpp_value, kValidValues, base::size(kValidValues), "ClientType", exception_state))
      return;
    impl->setType(type_cpp_value);
  }
}

v8::Local<v8::Value> ClientQueryOptions::ToV8Impl(v8::Local<v8::Object> creationContext, v8::Isolate* isolate) const {
  v8::Local<v8::Object> v8Object = v8::Object::New(isolate);
  if (!toV8ClientQueryOptions(this, v8Object, creationContext, isolate))
    return v8::Undefined(isolate);
  return v8Object;
}

bool toV8ClientQueryOptions(const ClientQueryOptions* impl, v8::Local<v8::Object> dictionary, v8::Local<v8::Object> creationContext, v8::Isolate* isolate) {
  const v8::Eternal<v8::Name>* keys = eternalV8ClientQueryOptionsKeys(isolate);
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

  v8::Local<v8::Value> include_uncontrolled_value;
  bool include_uncontrolled_has_value_or_default = false;
  if (impl->hasIncludeUncontrolled()) {
    include_uncontrolled_value = v8::Boolean::New(isolate, impl->includeUncontrolled());
    include_uncontrolled_has_value_or_default = true;
  } else {
    include_uncontrolled_value = v8::Boolean::New(isolate, false);
    include_uncontrolled_has_value_or_default = true;
  }
  if (include_uncontrolled_has_value_or_default &&
      !create_property(0, include_uncontrolled_value)) {
    return false;
  }

  v8::Local<v8::Value> type_value;
  bool type_has_value_or_default = false;
  if (impl->hasType()) {
    type_value = V8String(isolate, impl->type());
    type_has_value_or_default = true;
  } else {
    type_value = V8String(isolate, "window");
    type_has_value_or_default = true;
  }
  if (type_has_value_or_default &&
      !create_property(1, type_value)) {
    return false;
  }

  return true;
}

ClientQueryOptions* NativeValueTraits<ClientQueryOptions>::NativeValue(v8::Isolate* isolate, v8::Local<v8::Value> value, ExceptionState& exception_state) {
  ClientQueryOptions* impl = ClientQueryOptions::Create();
  V8ClientQueryOptions::ToImpl(isolate, value, impl, exception_state);
  return impl;
}

}  // namespace blink
