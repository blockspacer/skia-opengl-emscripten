// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated from the Jinja2 template
// third_party/blink/renderer/bindings/templates/dictionary_v8.cc.tmpl
// by the script code_generator_v8.py.
// DO NOT MODIFY!

// clang-format off
#include "third_party/blink/renderer/bindings/modules/v8/v8_cookie_list_item.h"

#include "base/stl_util.h"
#include "third_party/blink/renderer/bindings/core/v8/idl_types.h"
#include "third_party/blink/renderer/bindings/core/v8/native_value_traits_impl.h"
#include "third_party/blink/renderer/platform/bindings/exception_state.h"

namespace blink {

static const v8::Eternal<v8::Name>* eternalV8CookieListItemKeys(v8::Isolate* isolate) {
  static const char* const kKeys[] = {
    "domain",
    "expires",
    "name",
    "path",
    "sameSite",
    "secure",
    "value",
  };
  return V8PerIsolateData::From(isolate)->FindOrCreateEternalNameCache(
      kKeys, kKeys, base::size(kKeys));
}

void V8CookieListItem::ToImpl(v8::Isolate* isolate, v8::Local<v8::Value> v8_value, CookieListItem* impl, ExceptionState& exception_state) {
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

  const v8::Eternal<v8::Name>* keys = eternalV8CookieListItemKeys(isolate);
  v8::TryCatch block(isolate);
  v8::Local<v8::Context> context = isolate->GetCurrentContext();
  v8::Local<v8::Value> domain_value;
  if (!v8Object->Get(context, keys[0].Get(isolate)).ToLocal(&domain_value)) {
    exception_state.RethrowV8Exception(block.Exception());
    return;
  }
  if (domain_value.IsEmpty() || domain_value->IsUndefined()) {
    // Do nothing.
  } else {
    V8StringResource<kTreatNullAndUndefinedAsNullString> domain_cpp_value = NativeValueTraits<IDLUSVStringOrNull>::NativeValue(isolate, domain_value, exception_state);
    if (exception_state.HadException())
      return;
    impl->setDomain(domain_cpp_value);
  }

  v8::Local<v8::Value> expires_value;
  if (!v8Object->Get(context, keys[1].Get(isolate)).ToLocal(&expires_value)) {
    exception_state.RethrowV8Exception(block.Exception());
    return;
  }
  if (expires_value.IsEmpty() || expires_value->IsUndefined()) {
    // Do nothing.
  } else if (expires_value->IsNull()) {
    impl->setExpiresToNull();
  } else {
    uint64_t expires_cpp_value = NativeValueTraits<IDLUnsignedLongLong>::NativeValue(isolate, expires_value, exception_state);
    if (exception_state.HadException())
      return;
    impl->setExpires(expires_cpp_value);
  }

  v8::Local<v8::Value> name_value;
  if (!v8Object->Get(context, keys[2].Get(isolate)).ToLocal(&name_value)) {
    exception_state.RethrowV8Exception(block.Exception());
    return;
  }
  if (name_value.IsEmpty() || name_value->IsUndefined()) {
    exception_state.ThrowTypeError("required member name is undefined.");
    return;
  } else {
    V8StringResource<> name_cpp_value = NativeValueTraits<IDLUSVString>::NativeValue(isolate, name_value, exception_state);
    if (exception_state.HadException())
      return;
    impl->setName(name_cpp_value);
  }

  v8::Local<v8::Value> path_value;
  if (!v8Object->Get(context, keys[3].Get(isolate)).ToLocal(&path_value)) {
    exception_state.RethrowV8Exception(block.Exception());
    return;
  }
  if (path_value.IsEmpty() || path_value->IsUndefined()) {
    // Do nothing.
  } else {
    V8StringResource<> path_cpp_value = NativeValueTraits<IDLUSVString>::NativeValue(isolate, path_value, exception_state);
    if (exception_state.HadException())
      return;
    impl->setPath(path_cpp_value);
  }

  v8::Local<v8::Value> same_site_value;
  if (!v8Object->Get(context, keys[4].Get(isolate)).ToLocal(&same_site_value)) {
    exception_state.RethrowV8Exception(block.Exception());
    return;
  }
  if (same_site_value.IsEmpty() || same_site_value->IsUndefined()) {
    // Do nothing.
  } else {
    V8StringResource<> same_site_cpp_value = same_site_value;
    if (!same_site_cpp_value.Prepare(exception_state))
      return;
    const char* kValidValues[] = {
        "strict",
        "lax",
        "unrestricted",
    };
    if (!IsValidEnum(same_site_cpp_value, kValidValues, base::size(kValidValues), "CookieSameSite", exception_state))
      return;
    impl->setSameSite(same_site_cpp_value);
  }

  v8::Local<v8::Value> secure_value;
  if (!v8Object->Get(context, keys[5].Get(isolate)).ToLocal(&secure_value)) {
    exception_state.RethrowV8Exception(block.Exception());
    return;
  }
  if (secure_value.IsEmpty() || secure_value->IsUndefined()) {
    // Do nothing.
  } else {
    bool secure_cpp_value = NativeValueTraits<IDLBoolean>::NativeValue(isolate, secure_value, exception_state);
    if (exception_state.HadException())
      return;
    impl->setSecure(secure_cpp_value);
  }

  v8::Local<v8::Value> value_value;
  if (!v8Object->Get(context, keys[6].Get(isolate)).ToLocal(&value_value)) {
    exception_state.RethrowV8Exception(block.Exception());
    return;
  }
  if (value_value.IsEmpty() || value_value->IsUndefined()) {
    // Do nothing.
  } else {
    V8StringResource<> value_cpp_value = NativeValueTraits<IDLUSVString>::NativeValue(isolate, value_value, exception_state);
    if (exception_state.HadException())
      return;
    impl->setValue(value_cpp_value);
  }
}

v8::Local<v8::Value> CookieListItem::ToV8Impl(v8::Local<v8::Object> creationContext, v8::Isolate* isolate) const {
  v8::Local<v8::Object> v8Object = v8::Object::New(isolate);
  if (!toV8CookieListItem(this, v8Object, creationContext, isolate))
    return v8::Undefined(isolate);
  return v8Object;
}

bool toV8CookieListItem(const CookieListItem* impl, v8::Local<v8::Object> dictionary, v8::Local<v8::Object> creationContext, v8::Isolate* isolate) {
  const v8::Eternal<v8::Name>* keys = eternalV8CookieListItemKeys(isolate);
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

  v8::Local<v8::Value> domain_value;
  bool domain_has_value_or_default = false;
  if (impl->hasDomain()) {
    domain_value = V8String(isolate, impl->domain());
    domain_has_value_or_default = true;
  } else {
    domain_value = v8::Null(isolate);
    domain_has_value_or_default = true;
  }
  if (domain_has_value_or_default &&
      !create_property(0, domain_value)) {
    return false;
  }

  v8::Local<v8::Value> expires_value;
  bool expires_has_value_or_default = false;
  if (impl->hasExpires()) {
    expires_value = v8::Number::New(isolate, static_cast<double>(impl->expires()));
    expires_has_value_or_default = true;
  } else {
    expires_value = v8::Null(isolate);
    expires_has_value_or_default = true;
  }
  if (expires_has_value_or_default &&
      !create_property(1, expires_value)) {
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
      !create_property(2, name_value)) {
    return false;
  }

  v8::Local<v8::Value> path_value;
  bool path_has_value_or_default = false;
  if (impl->hasPath()) {
    path_value = V8String(isolate, impl->path());
    path_has_value_or_default = true;
  } else {
    path_value = V8String(isolate, "/");
    path_has_value_or_default = true;
  }
  if (path_has_value_or_default &&
      !create_property(3, path_value)) {
    return false;
  }

  v8::Local<v8::Value> same_site_value;
  bool same_site_has_value_or_default = false;
  if (impl->hasSameSite()) {
    same_site_value = V8String(isolate, impl->sameSite());
    same_site_has_value_or_default = true;
  } else {
    same_site_value = V8String(isolate, "strict");
    same_site_has_value_or_default = true;
  }
  if (same_site_has_value_or_default &&
      !create_property(4, same_site_value)) {
    return false;
  }

  v8::Local<v8::Value> secure_value;
  bool secure_has_value_or_default = false;
  if (impl->hasSecure()) {
    secure_value = v8::Boolean::New(isolate, impl->secure());
    secure_has_value_or_default = true;
  } else {
    secure_value = v8::Boolean::New(isolate, true);
    secure_has_value_or_default = true;
  }
  if (secure_has_value_or_default &&
      !create_property(5, secure_value)) {
    return false;
  }

  v8::Local<v8::Value> value_value;
  bool value_has_value_or_default = false;
  if (impl->hasValue()) {
    value_value = V8String(isolate, impl->value());
    value_has_value_or_default = true;
  }
  if (value_has_value_or_default &&
      !create_property(6, value_value)) {
    return false;
  }

  return true;
}

CookieListItem* NativeValueTraits<CookieListItem>::NativeValue(v8::Isolate* isolate, v8::Local<v8::Value> value, ExceptionState& exception_state) {
  CookieListItem* impl = CookieListItem::Create();
  V8CookieListItem::ToImpl(isolate, value, impl, exception_state);
  return impl;
}

}  // namespace blink
