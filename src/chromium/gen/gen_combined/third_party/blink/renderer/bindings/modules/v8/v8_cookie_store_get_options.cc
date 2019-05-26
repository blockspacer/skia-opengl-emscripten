// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated from the Jinja2 template
// third_party/blink/renderer/bindings/templates/dictionary_v8.cc.tmpl
// by the script code_generator_v8.py.
// DO NOT MODIFY!

// clang-format off
#include "third_party/blink/renderer/bindings/modules/v8/v8_cookie_store_get_options.h"

#include "base/stl_util.h"
#include "third_party/blink/renderer/bindings/core/v8/idl_types.h"
#include "third_party/blink/renderer/bindings/core/v8/native_value_traits_impl.h"
#include "third_party/blink/renderer/platform/bindings/exception_state.h"

namespace blink {

static const v8::Eternal<v8::Name>* eternalV8CookieStoreGetOptionsKeys(v8::Isolate* isolate) {
  static const char* const kKeys[] = {
    "matchType",
    "name",
    "url",
  };
  return V8PerIsolateData::From(isolate)->FindOrCreateEternalNameCache(
      kKeys, kKeys, base::size(kKeys));
}

void V8CookieStoreGetOptions::ToImpl(v8::Isolate* isolate, v8::Local<v8::Value> v8_value, CookieStoreGetOptions* impl, ExceptionState& exception_state) {
  if (IsUndefinedOrNull(v8_value)) {
    return;
  }
  if (!v8_value->IsObject()) {
    exception_state.ThrowTypeError("cannot convert to dictionary.");
    return;
  }
  v8::Local<v8::Object> v8Object = v8_value.As<v8::Object>();
  ALLOW_UNUSED_LOCAL(v8Object);

  const v8::Eternal<v8::Name>* keys = eternalV8CookieStoreGetOptionsKeys(isolate);
  v8::TryCatch block(isolate);
  v8::Local<v8::Context> context = isolate->GetCurrentContext();
  v8::Local<v8::Value> match_type_value;
  if (!v8Object->Get(context, keys[0].Get(isolate)).ToLocal(&match_type_value)) {
    exception_state.RethrowV8Exception(block.Exception());
    return;
  }
  if (match_type_value.IsEmpty() || match_type_value->IsUndefined()) {
    // Do nothing.
  } else {
    V8StringResource<> match_type_cpp_value = match_type_value;
    if (!match_type_cpp_value.Prepare(exception_state))
      return;
    const char* kValidValues[] = {
        "equals",
        "starts-with",
    };
    if (!IsValidEnum(match_type_cpp_value, kValidValues, base::size(kValidValues), "CookieMatchType", exception_state))
      return;
    impl->setMatchType(match_type_cpp_value);
  }

  v8::Local<v8::Value> name_value;
  if (!v8Object->Get(context, keys[1].Get(isolate)).ToLocal(&name_value)) {
    exception_state.RethrowV8Exception(block.Exception());
    return;
  }
  if (name_value.IsEmpty() || name_value->IsUndefined()) {
    // Do nothing.
  } else {
    V8StringResource<> name_cpp_value = NativeValueTraits<IDLUSVString>::NativeValue(isolate, name_value, exception_state);
    if (exception_state.HadException())
      return;
    impl->setName(name_cpp_value);
  }

  v8::Local<v8::Value> url_value;
  if (!v8Object->Get(context, keys[2].Get(isolate)).ToLocal(&url_value)) {
    exception_state.RethrowV8Exception(block.Exception());
    return;
  }
  if (url_value.IsEmpty() || url_value->IsUndefined()) {
    // Do nothing.
  } else {
    V8StringResource<> url_cpp_value = NativeValueTraits<IDLUSVString>::NativeValue(isolate, url_value, exception_state);
    if (exception_state.HadException())
      return;
    impl->setURL(url_cpp_value);
  }
}

v8::Local<v8::Value> CookieStoreGetOptions::ToV8Impl(v8::Local<v8::Object> creationContext, v8::Isolate* isolate) const {
  v8::Local<v8::Object> v8Object = v8::Object::New(isolate);
  if (!toV8CookieStoreGetOptions(this, v8Object, creationContext, isolate))
    return v8::Undefined(isolate);
  return v8Object;
}

bool toV8CookieStoreGetOptions(const CookieStoreGetOptions* impl, v8::Local<v8::Object> dictionary, v8::Local<v8::Object> creationContext, v8::Isolate* isolate) {
  const v8::Eternal<v8::Name>* keys = eternalV8CookieStoreGetOptionsKeys(isolate);
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

  v8::Local<v8::Value> match_type_value;
  bool match_type_has_value_or_default = false;
  if (impl->hasMatchType()) {
    match_type_value = V8String(isolate, impl->matchType());
    match_type_has_value_or_default = true;
  } else {
    match_type_value = V8String(isolate, "equals");
    match_type_has_value_or_default = true;
  }
  if (match_type_has_value_or_default &&
      !create_property(0, match_type_value)) {
    return false;
  }

  v8::Local<v8::Value> name_value;
  bool name_has_value_or_default = false;
  if (impl->hasName()) {
    name_value = V8String(isolate, impl->name());
    name_has_value_or_default = true;
  }
  if (name_has_value_or_default &&
      !create_property(1, name_value)) {
    return false;
  }

  v8::Local<v8::Value> url_value;
  bool url_has_value_or_default = false;
  if (impl->hasURL()) {
    url_value = V8String(isolate, impl->url());
    url_has_value_or_default = true;
  }
  if (url_has_value_or_default &&
      !create_property(2, url_value)) {
    return false;
  }

  return true;
}

CookieStoreGetOptions* NativeValueTraits<CookieStoreGetOptions>::NativeValue(v8::Isolate* isolate, v8::Local<v8::Value> value, ExceptionState& exception_state) {
  CookieStoreGetOptions* impl = CookieStoreGetOptions::Create();
  V8CookieStoreGetOptions::ToImpl(isolate, value, impl, exception_state);
  return impl;
}

}  // namespace blink
