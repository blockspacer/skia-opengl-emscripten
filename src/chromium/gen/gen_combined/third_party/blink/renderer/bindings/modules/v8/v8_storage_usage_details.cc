// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated from the Jinja2 template
// third_party/blink/renderer/bindings/templates/dictionary_v8.cc.tmpl
// by the script code_generator_v8.py.
// DO NOT MODIFY!

// clang-format off
#include "third_party/blink/renderer/bindings/modules/v8/v8_storage_usage_details.h"

#include "base/stl_util.h"
#include "third_party/blink/renderer/bindings/core/v8/idl_types.h"
#include "third_party/blink/renderer/bindings/core/v8/native_value_traits_impl.h"
#include "third_party/blink/renderer/platform/bindings/exception_state.h"

namespace blink {

static const v8::Eternal<v8::Name>* eternalV8StorageUsageDetailsKeys(v8::Isolate* isolate) {
  static const char* const kKeys[] = {
    "applicationCache",
    "caches",
    "fileSystem",
    "indexedDB",
    "serviceWorkerRegistrations",
  };
  return V8PerIsolateData::From(isolate)->FindOrCreateEternalNameCache(
      kKeys, kKeys, base::size(kKeys));
}

void V8StorageUsageDetails::ToImpl(v8::Isolate* isolate, v8::Local<v8::Value> v8_value, StorageUsageDetails* impl, ExceptionState& exception_state) {
  if (IsUndefinedOrNull(v8_value)) {
    return;
  }
  if (!v8_value->IsObject()) {
    exception_state.ThrowTypeError("cannot convert to dictionary.");
    return;
  }
  v8::Local<v8::Object> v8Object = v8_value.As<v8::Object>();
  ALLOW_UNUSED_LOCAL(v8Object);

  const v8::Eternal<v8::Name>* keys = eternalV8StorageUsageDetailsKeys(isolate);
  v8::TryCatch block(isolate);
  v8::Local<v8::Context> context = isolate->GetCurrentContext();
  v8::Local<v8::Value> application_cache_value;
  if (!v8Object->Get(context, keys[0].Get(isolate)).ToLocal(&application_cache_value)) {
    exception_state.RethrowV8Exception(block.Exception());
    return;
  }
  if (application_cache_value.IsEmpty() || application_cache_value->IsUndefined()) {
    // Do nothing.
  } else {
    uint64_t application_cache_cpp_value = NativeValueTraits<IDLUnsignedLongLong>::NativeValue(isolate, application_cache_value, exception_state);
    if (exception_state.HadException())
      return;
    impl->setApplicationCache(application_cache_cpp_value);
  }

  v8::Local<v8::Value> caches_value;
  if (!v8Object->Get(context, keys[1].Get(isolate)).ToLocal(&caches_value)) {
    exception_state.RethrowV8Exception(block.Exception());
    return;
  }
  if (caches_value.IsEmpty() || caches_value->IsUndefined()) {
    // Do nothing.
  } else {
    uint64_t caches_cpp_value = NativeValueTraits<IDLUnsignedLongLong>::NativeValue(isolate, caches_value, exception_state);
    if (exception_state.HadException())
      return;
    impl->setCaches(caches_cpp_value);
  }

  v8::Local<v8::Value> file_system_value;
  if (!v8Object->Get(context, keys[2].Get(isolate)).ToLocal(&file_system_value)) {
    exception_state.RethrowV8Exception(block.Exception());
    return;
  }
  if (file_system_value.IsEmpty() || file_system_value->IsUndefined()) {
    // Do nothing.
  } else {
    uint64_t file_system_cpp_value = NativeValueTraits<IDLUnsignedLongLong>::NativeValue(isolate, file_system_value, exception_state);
    if (exception_state.HadException())
      return;
    impl->setFileSystem(file_system_cpp_value);
  }

  v8::Local<v8::Value> indexed_db_value;
  if (!v8Object->Get(context, keys[3].Get(isolate)).ToLocal(&indexed_db_value)) {
    exception_state.RethrowV8Exception(block.Exception());
    return;
  }
  if (indexed_db_value.IsEmpty() || indexed_db_value->IsUndefined()) {
    // Do nothing.
  } else {
    uint64_t indexed_db_cpp_value = NativeValueTraits<IDLUnsignedLongLong>::NativeValue(isolate, indexed_db_value, exception_state);
    if (exception_state.HadException())
      return;
    impl->setIndexedDB(indexed_db_cpp_value);
  }

  v8::Local<v8::Value> service_worker_registrations_value;
  if (!v8Object->Get(context, keys[4].Get(isolate)).ToLocal(&service_worker_registrations_value)) {
    exception_state.RethrowV8Exception(block.Exception());
    return;
  }
  if (service_worker_registrations_value.IsEmpty() || service_worker_registrations_value->IsUndefined()) {
    // Do nothing.
  } else {
    uint64_t service_worker_registrations_cpp_value = NativeValueTraits<IDLUnsignedLongLong>::NativeValue(isolate, service_worker_registrations_value, exception_state);
    if (exception_state.HadException())
      return;
    impl->setServiceWorkerRegistrations(service_worker_registrations_cpp_value);
  }
}

v8::Local<v8::Value> StorageUsageDetails::ToV8Impl(v8::Local<v8::Object> creationContext, v8::Isolate* isolate) const {
  v8::Local<v8::Object> v8Object = v8::Object::New(isolate);
  if (!toV8StorageUsageDetails(this, v8Object, creationContext, isolate))
    return v8::Undefined(isolate);
  return v8Object;
}

bool toV8StorageUsageDetails(const StorageUsageDetails* impl, v8::Local<v8::Object> dictionary, v8::Local<v8::Object> creationContext, v8::Isolate* isolate) {
  const v8::Eternal<v8::Name>* keys = eternalV8StorageUsageDetailsKeys(isolate);
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

  v8::Local<v8::Value> application_cache_value;
  bool application_cache_has_value_or_default = false;
  if (impl->hasApplicationCache()) {
    application_cache_value = v8::Number::New(isolate, static_cast<double>(impl->applicationCache()));
    application_cache_has_value_or_default = true;
  }
  if (application_cache_has_value_or_default &&
      !create_property(0, application_cache_value)) {
    return false;
  }

  v8::Local<v8::Value> caches_value;
  bool caches_has_value_or_default = false;
  if (impl->hasCaches()) {
    caches_value = v8::Number::New(isolate, static_cast<double>(impl->caches()));
    caches_has_value_or_default = true;
  }
  if (caches_has_value_or_default &&
      !create_property(1, caches_value)) {
    return false;
  }

  v8::Local<v8::Value> file_system_value;
  bool file_system_has_value_or_default = false;
  if (impl->hasFileSystem()) {
    file_system_value = v8::Number::New(isolate, static_cast<double>(impl->fileSystem()));
    file_system_has_value_or_default = true;
  }
  if (file_system_has_value_or_default &&
      !create_property(2, file_system_value)) {
    return false;
  }

  v8::Local<v8::Value> indexed_db_value;
  bool indexed_db_has_value_or_default = false;
  if (impl->hasIndexedDB()) {
    indexed_db_value = v8::Number::New(isolate, static_cast<double>(impl->indexedDB()));
    indexed_db_has_value_or_default = true;
  }
  if (indexed_db_has_value_or_default &&
      !create_property(3, indexed_db_value)) {
    return false;
  }

  v8::Local<v8::Value> service_worker_registrations_value;
  bool service_worker_registrations_has_value_or_default = false;
  if (impl->hasServiceWorkerRegistrations()) {
    service_worker_registrations_value = v8::Number::New(isolate, static_cast<double>(impl->serviceWorkerRegistrations()));
    service_worker_registrations_has_value_or_default = true;
  }
  if (service_worker_registrations_has_value_or_default &&
      !create_property(4, service_worker_registrations_value)) {
    return false;
  }

  return true;
}

StorageUsageDetails* NativeValueTraits<StorageUsageDetails>::NativeValue(v8::Isolate* isolate, v8::Local<v8::Value> value, ExceptionState& exception_state) {
  StorageUsageDetails* impl = StorageUsageDetails::Create();
  V8StorageUsageDetails::ToImpl(isolate, value, impl, exception_state);
  return impl;
}

}  // namespace blink
