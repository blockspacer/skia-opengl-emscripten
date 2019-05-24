// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated from the Jinja2 template
// third_party/blink/renderer/bindings/templates/dictionary_v8.cc.tmpl
// by the script code_generator_v8.py.
// DO NOT MODIFY!

// clang-format off
#include "third_party/blink/renderer/bindings/modules/v8/v8_fetch_event_init.h"

#include "base/stl_util.h"
#include "third_party/blink/renderer/bindings/core/v8/idl_types.h"
#include "third_party/blink/renderer/bindings/core/v8/native_value_traits_impl.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_request.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_extendable_event_init.h"
#include "third_party/blink/renderer/platform/bindings/exception_state.h"

namespace blink {

static const v8::Eternal<v8::Name>* eternalV8FetchEventInitKeys(v8::Isolate* isolate) {
  static const char* const kKeys[] = {
    "clientId",
    "isReload",
    "request",
    "resultingClientId",
  };
  return V8PerIsolateData::From(isolate)->FindOrCreateEternalNameCache(
      kKeys, kKeys, base::size(kKeys));
}

void V8FetchEventInit::ToImpl(v8::Isolate* isolate, v8::Local<v8::Value> v8_value, FetchEventInit* impl, ExceptionState& exception_state) {
  if (IsUndefinedOrNull(v8_value)) {
    exception_state.ThrowTypeError("Missing required member(s): request.");
    return;
  }
  if (!v8_value->IsObject()) {
    exception_state.ThrowTypeError("cannot convert to dictionary.");
    return;
  }
  v8::Local<v8::Object> v8Object = v8_value.As<v8::Object>();
  ALLOW_UNUSED_LOCAL(v8Object);

  V8ExtendableEventInit::ToImpl(isolate, v8_value, impl, exception_state);
  if (exception_state.HadException())
    return;

  const v8::Eternal<v8::Name>* keys = eternalV8FetchEventInitKeys(isolate);
  v8::TryCatch block(isolate);
  v8::Local<v8::Context> context = isolate->GetCurrentContext();
  v8::Local<v8::Value> client_id_value;
  if (!v8Object->Get(context, keys[0].Get(isolate)).ToLocal(&client_id_value)) {
    exception_state.RethrowV8Exception(block.Exception());
    return;
  }
  if (client_id_value.IsEmpty() || client_id_value->IsUndefined()) {
    // Do nothing.
  } else {
    V8StringResource<> client_id_cpp_value = client_id_value;
    if (!client_id_cpp_value.Prepare(exception_state))
      return;
    impl->setClientId(client_id_cpp_value);
  }

  v8::Local<v8::Value> is_reload_value;
  if (!v8Object->Get(context, keys[1].Get(isolate)).ToLocal(&is_reload_value)) {
    exception_state.RethrowV8Exception(block.Exception());
    return;
  }
  if (is_reload_value.IsEmpty() || is_reload_value->IsUndefined()) {
    // Do nothing.
  } else {
    bool is_reload_cpp_value = NativeValueTraits<IDLBoolean>::NativeValue(isolate, is_reload_value, exception_state);
    if (exception_state.HadException())
      return;
    impl->setIsReload(is_reload_cpp_value);
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
    Request* request_cpp_value = V8Request::ToImplWithTypeCheck(isolate, request_value);
    if (!request_cpp_value) {
      exception_state.ThrowTypeError("member request is not of type Request.");
      return;
    }
    impl->setRequest(request_cpp_value);
  }

  v8::Local<v8::Value> resulting_client_id_value;
  if (!v8Object->Get(context, keys[3].Get(isolate)).ToLocal(&resulting_client_id_value)) {
    exception_state.RethrowV8Exception(block.Exception());
    return;
  }
  if (resulting_client_id_value.IsEmpty() || resulting_client_id_value->IsUndefined()) {
    // Do nothing.
  } else {
    V8StringResource<> resulting_client_id_cpp_value = resulting_client_id_value;
    if (!resulting_client_id_cpp_value.Prepare(exception_state))
      return;
    impl->setResultingClientId(resulting_client_id_cpp_value);
  }
}

v8::Local<v8::Value> FetchEventInit::ToV8Impl(v8::Local<v8::Object> creationContext, v8::Isolate* isolate) const {
  v8::Local<v8::Object> v8Object = v8::Object::New(isolate);
  if (!toV8FetchEventInit(this, v8Object, creationContext, isolate))
    return v8::Undefined(isolate);
  return v8Object;
}

bool toV8FetchEventInit(const FetchEventInit* impl, v8::Local<v8::Object> dictionary, v8::Local<v8::Object> creationContext, v8::Isolate* isolate) {
  if (!toV8ExtendableEventInit(impl, dictionary, creationContext, isolate))
    return false;

  const v8::Eternal<v8::Name>* keys = eternalV8FetchEventInitKeys(isolate);
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

  v8::Local<v8::Value> client_id_value;
  bool client_id_has_value_or_default = false;
  if (impl->hasClientId()) {
    client_id_value = V8String(isolate, impl->clientId());
    client_id_has_value_or_default = true;
  } else {
    client_id_value = V8String(isolate, WTF::g_empty_string);
    client_id_has_value_or_default = true;
  }
  if (client_id_has_value_or_default &&
      !create_property(0, client_id_value)) {
    return false;
  }

  v8::Local<v8::Value> is_reload_value;
  bool is_reload_has_value_or_default = false;
  if (impl->hasIsReload()) {
    is_reload_value = v8::Boolean::New(isolate, impl->isReload());
    is_reload_has_value_or_default = true;
  } else {
    is_reload_value = v8::Boolean::New(isolate, false);
    is_reload_has_value_or_default = true;
  }
  if (is_reload_has_value_or_default &&
      !create_property(1, is_reload_value)) {
    return false;
  }

  v8::Local<v8::Value> request_value;
  bool request_has_value_or_default = false;
  if (impl->hasRequest()) {
    request_value = ToV8(impl->request(), creationContext, isolate);
    request_has_value_or_default = true;
  } else {
    NOTREACHED();
  }
  if (request_has_value_or_default &&
      !create_property(2, request_value)) {
    return false;
  }

  v8::Local<v8::Value> resulting_client_id_value;
  bool resulting_client_id_has_value_or_default = false;
  if (impl->hasResultingClientId()) {
    resulting_client_id_value = V8String(isolate, impl->resultingClientId());
    resulting_client_id_has_value_or_default = true;
  } else {
    resulting_client_id_value = V8String(isolate, WTF::g_empty_string);
    resulting_client_id_has_value_or_default = true;
  }
  if (resulting_client_id_has_value_or_default &&
      !create_property(3, resulting_client_id_value)) {
    return false;
  }

  return true;
}

FetchEventInit* NativeValueTraits<FetchEventInit>::NativeValue(v8::Isolate* isolate, v8::Local<v8::Value> value, ExceptionState& exception_state) {
  FetchEventInit* impl = FetchEventInit::Create();
  V8FetchEventInit::ToImpl(isolate, value, impl, exception_state);
  return impl;
}

}  // namespace blink
