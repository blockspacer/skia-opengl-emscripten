// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated from the Jinja2 template
// third_party/blink/renderer/bindings/templates/dictionary_v8.cc.tmpl
// by the script code_generator_v8.py.
// DO NOT MODIFY!

// clang-format off
#include "third_party/blink/renderer/bindings/modules/v8/v8_cache_query_options.h"

#include "base/stl_util.h"
#include "third_party/blink/renderer/bindings/core/v8/idl_types.h"
#include "third_party/blink/renderer/bindings/core/v8/native_value_traits_impl.h"
#include "third_party/blink/renderer/platform/bindings/exception_state.h"

namespace blink {

static const v8::Eternal<v8::Name>* eternalV8CacheQueryOptionsKeys(v8::Isolate* isolate) {
  static const char* const kKeys[] = {
    "ignoreMethod",
    "ignoreSearch",
    "ignoreVary",
  };
  return V8PerIsolateData::From(isolate)->FindOrCreateEternalNameCache(
      kKeys, kKeys, base::size(kKeys));
}

void V8CacheQueryOptions::ToImpl(v8::Isolate* isolate, v8::Local<v8::Value> v8_value, CacheQueryOptions* impl, ExceptionState& exception_state) {
  if (IsUndefinedOrNull(v8_value)) {
    return;
  }
  if (!v8_value->IsObject()) {
    exception_state.ThrowTypeError("cannot convert to dictionary.");
    return;
  }
  v8::Local<v8::Object> v8Object = v8_value.As<v8::Object>();
  ALLOW_UNUSED_LOCAL(v8Object);

  const v8::Eternal<v8::Name>* keys = eternalV8CacheQueryOptionsKeys(isolate);
  v8::TryCatch block(isolate);
  v8::Local<v8::Context> context = isolate->GetCurrentContext();
  v8::Local<v8::Value> ignore_method_value;
  if (!v8Object->Get(context, keys[0].Get(isolate)).ToLocal(&ignore_method_value)) {
    exception_state.RethrowV8Exception(block.Exception());
    return;
  }
  if (ignore_method_value.IsEmpty() || ignore_method_value->IsUndefined()) {
    // Do nothing.
  } else {
    bool ignore_method_cpp_value = NativeValueTraits<IDLBoolean>::NativeValue(isolate, ignore_method_value, exception_state);
    if (exception_state.HadException())
      return;
    impl->setIgnoreMethod(ignore_method_cpp_value);
  }

  v8::Local<v8::Value> ignore_search_value;
  if (!v8Object->Get(context, keys[1].Get(isolate)).ToLocal(&ignore_search_value)) {
    exception_state.RethrowV8Exception(block.Exception());
    return;
  }
  if (ignore_search_value.IsEmpty() || ignore_search_value->IsUndefined()) {
    // Do nothing.
  } else {
    bool ignore_search_cpp_value = NativeValueTraits<IDLBoolean>::NativeValue(isolate, ignore_search_value, exception_state);
    if (exception_state.HadException())
      return;
    impl->setIgnoreSearch(ignore_search_cpp_value);
  }

  v8::Local<v8::Value> ignore_vary_value;
  if (!v8Object->Get(context, keys[2].Get(isolate)).ToLocal(&ignore_vary_value)) {
    exception_state.RethrowV8Exception(block.Exception());
    return;
  }
  if (ignore_vary_value.IsEmpty() || ignore_vary_value->IsUndefined()) {
    // Do nothing.
  } else {
    bool ignore_vary_cpp_value = NativeValueTraits<IDLBoolean>::NativeValue(isolate, ignore_vary_value, exception_state);
    if (exception_state.HadException())
      return;
    impl->setIgnoreVary(ignore_vary_cpp_value);
  }
}

v8::Local<v8::Value> CacheQueryOptions::ToV8Impl(v8::Local<v8::Object> creationContext, v8::Isolate* isolate) const {
  v8::Local<v8::Object> v8Object = v8::Object::New(isolate);
  if (!toV8CacheQueryOptions(this, v8Object, creationContext, isolate))
    return v8::Undefined(isolate);
  return v8Object;
}

bool toV8CacheQueryOptions(const CacheQueryOptions* impl, v8::Local<v8::Object> dictionary, v8::Local<v8::Object> creationContext, v8::Isolate* isolate) {
  const v8::Eternal<v8::Name>* keys = eternalV8CacheQueryOptionsKeys(isolate);
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

  v8::Local<v8::Value> ignore_method_value;
  bool ignore_method_has_value_or_default = false;
  if (impl->hasIgnoreMethod()) {
    ignore_method_value = v8::Boolean::New(isolate, impl->ignoreMethod());
    ignore_method_has_value_or_default = true;
  } else {
    ignore_method_value = v8::Boolean::New(isolate, false);
    ignore_method_has_value_or_default = true;
  }
  if (ignore_method_has_value_or_default &&
      !create_property(0, ignore_method_value)) {
    return false;
  }

  v8::Local<v8::Value> ignore_search_value;
  bool ignore_search_has_value_or_default = false;
  if (impl->hasIgnoreSearch()) {
    ignore_search_value = v8::Boolean::New(isolate, impl->ignoreSearch());
    ignore_search_has_value_or_default = true;
  } else {
    ignore_search_value = v8::Boolean::New(isolate, false);
    ignore_search_has_value_or_default = true;
  }
  if (ignore_search_has_value_or_default &&
      !create_property(1, ignore_search_value)) {
    return false;
  }

  v8::Local<v8::Value> ignore_vary_value;
  bool ignore_vary_has_value_or_default = false;
  if (impl->hasIgnoreVary()) {
    ignore_vary_value = v8::Boolean::New(isolate, impl->ignoreVary());
    ignore_vary_has_value_or_default = true;
  } else {
    ignore_vary_value = v8::Boolean::New(isolate, false);
    ignore_vary_has_value_or_default = true;
  }
  if (ignore_vary_has_value_or_default &&
      !create_property(2, ignore_vary_value)) {
    return false;
  }

  return true;
}

CacheQueryOptions* NativeValueTraits<CacheQueryOptions>::NativeValue(v8::Isolate* isolate, v8::Local<v8::Value> value, ExceptionState& exception_state) {
  CacheQueryOptions* impl = CacheQueryOptions::Create();
  V8CacheQueryOptions::ToImpl(isolate, value, impl, exception_state);
  return impl;
}

}  // namespace blink
