// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated from the Jinja2 template
// third_party/blink/renderer/bindings/templates/partial_interface.cc.tmpl
// by the script code_generator_v8.py.
// DO NOT MODIFY!

// clang-format off
#include "third_party/blink/renderer/bindings/modules/v8/v8_worker_global_scope_partial.h"

#include <algorithm>

#include "base/memory/scoped_refptr.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_dom_configuration.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_worker_global_scope.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_cache_storage.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_crypto.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_idb_factory.h"
#include "third_party/blink/renderer/core/execution_context/execution_context.h"
#include "third_party/blink/renderer/core/frame/use_counter.h"
#include "third_party/blink/renderer/modules/cache_storage/global_cache_storage.h"
#include "third_party/blink/renderer/modules/crypto/worker_global_scope_crypto.h"
#include "third_party/blink/renderer/modules/indexeddb/global_indexed_db.h"
#include "third_party/blink/renderer/platform/bindings/exception_messages.h"
#include "third_party/blink/renderer/platform/bindings/exception_state.h"
#include "third_party/blink/renderer/platform/bindings/runtime_call_stats.h"
#include "third_party/blink/renderer/platform/bindings/script_state.h"
#include "third_party/blink/renderer/platform/bindings/v8_object_constructor.h"
#include "third_party/blink/renderer/platform/bindings/v8_private_property.h"
#include "third_party/blink/renderer/platform/runtime_enabled_features.h"
#include "third_party/blink/renderer/platform/scheduler/public/cooperative_scheduling_manager.h"
#include "third_party/blink/renderer/platform/wtf/get_ptr.h"

namespace blink {

namespace worker_global_scope_partial_v8_internal {

static void CachesAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  WorkerGlobalScope* impl = V8WorkerGlobalScope::ToImpl(holder);

  ExceptionState exception_state(info.GetIsolate(), ExceptionState::kGetterContext, "WorkerGlobalScope", "caches");

  CacheStorage* cpp_value(GlobalCacheStorage::caches(*impl, exception_state));

  if (UNLIKELY(exception_state.HadException()))
    return;

  // Keep the wrapper object for the return value alive as long as |this|
  // object is alive in order to save creation time of the wrapper object.
  if (cpp_value && DOMDataStore::SetReturnValue(info.GetReturnValue(), cpp_value))
    return;
  v8::Local<v8::Value> v8_value(ToV8(cpp_value, holder, info.GetIsolate()));
  V8PrivateProperty::GetSymbol(
      info.GetIsolate(), "KeepAlive#WorkerGlobalScope#caches")
      .Set(holder, v8_value);

  V8SetReturnValue(info, v8_value);
}

static void CryptoAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  WorkerGlobalScope* impl = V8WorkerGlobalScope::ToImpl(holder);

  Crypto* cpp_value(WorkerGlobalScopeCrypto::crypto(*impl));

  // Keep the wrapper object for the return value alive as long as |this|
  // object is alive in order to save creation time of the wrapper object.
  if (cpp_value && DOMDataStore::SetReturnValue(info.GetReturnValue(), cpp_value))
    return;
  v8::Local<v8::Value> v8_value(ToV8(cpp_value, holder, info.GetIsolate()));
  V8PrivateProperty::GetSymbol(
      info.GetIsolate(), "KeepAlive#WorkerGlobalScope#crypto")
      .Set(holder, v8_value);

  V8SetReturnValue(info, v8_value);
}

static void IndexedDBAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  WorkerGlobalScope* impl = V8WorkerGlobalScope::ToImpl(holder);

  IDBFactory* cpp_value(GlobalIndexedDB::indexedDB(*impl));

  // Keep the wrapper object for the return value alive as long as |this|
  // object is alive in order to save creation time of the wrapper object.
  if (cpp_value && DOMDataStore::SetReturnValue(info.GetReturnValue(), cpp_value))
    return;
  v8::Local<v8::Value> v8_value(ToV8(cpp_value, holder, info.GetIsolate()));
  V8PrivateProperty::GetSymbol(
      info.GetIsolate(), "KeepAlive#WorkerGlobalScope#indexedDB")
      .Set(holder, v8_value);

  V8SetReturnValue(info, v8_value);
}

}  // namespace worker_global_scope_partial_v8_internal

void V8WorkerGlobalScopePartial::CachesAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_WorkerGlobalScope_caches_Getter");

  ExecutionContext* execution_context_for_measurement = CurrentExecutionContext(info.GetIsolate());
  UseCounter::Count(execution_context_for_measurement, WebFeature::kGlobalCacheStorage);

  worker_global_scope_partial_v8_internal::CachesAttributeGetter(info);
}

void V8WorkerGlobalScopePartial::CryptoAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_WorkerGlobalScope_crypto_Getter");

  worker_global_scope_partial_v8_internal::CryptoAttributeGetter(info);
}

void V8WorkerGlobalScopePartial::IndexedDBAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_WorkerGlobalScope_indexedDB_Getter");

  worker_global_scope_partial_v8_internal::IndexedDBAttributeGetter(info);
}

static constexpr V8DOMConfiguration::AccessorConfiguration kV8WorkerGlobalScopeAccessors[] = {
    { "crypto", V8WorkerGlobalScopePartial::CryptoAttributeGetterCallback, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
    { "indexedDB", V8WorkerGlobalScopePartial::IndexedDBAttributeGetterCallback, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
};

void V8WorkerGlobalScopePartial::InstallV8WorkerGlobalScopeTemplate(
    v8::Isolate* isolate,
    const DOMWrapperWorld& world,
    v8::Local<v8::FunctionTemplate> interface_template) {
  // Initialize the interface object's template.
  V8WorkerGlobalScope::InstallV8WorkerGlobalScopeTemplate(isolate, world, interface_template);

  v8::Local<v8::Signature> signature = v8::Signature::New(isolate, interface_template);
  ALLOW_UNUSED_LOCAL(signature);
  v8::Local<v8::ObjectTemplate> instance_template = interface_template->InstanceTemplate();
  ALLOW_UNUSED_LOCAL(instance_template);
  v8::Local<v8::ObjectTemplate> prototype_template = interface_template->PrototypeTemplate();
  ALLOW_UNUSED_LOCAL(prototype_template);

  // Global object prototype chain consists of Immutable Prototype Exotic Objects
  prototype_template->SetImmutableProto();

  // Register IDL constants, attributes and operations.
  V8DOMConfiguration::InstallAccessors(
      isolate, world, instance_template, prototype_template, interface_template,
      signature, kV8WorkerGlobalScopeAccessors, base::size(kV8WorkerGlobalScopeAccessors));

  // Custom signature

  V8WorkerGlobalScopePartial::InstallRuntimeEnabledFeaturesOnTemplate(
      isolate, world, interface_template);
}

void V8WorkerGlobalScopePartial::InstallRuntimeEnabledFeaturesOnTemplate(
    v8::Isolate* isolate,
    const DOMWrapperWorld& world,
    v8::Local<v8::FunctionTemplate> interface_template) {
  V8WorkerGlobalScope::InstallRuntimeEnabledFeaturesOnTemplate(isolate, world, interface_template);

  v8::Local<v8::Signature> signature = v8::Signature::New(isolate, interface_template);
  ALLOW_UNUSED_LOCAL(signature);
  v8::Local<v8::ObjectTemplate> instance_template = interface_template->InstanceTemplate();
  ALLOW_UNUSED_LOCAL(instance_template);
  v8::Local<v8::ObjectTemplate> prototype_template = interface_template->PrototypeTemplate();
  ALLOW_UNUSED_LOCAL(prototype_template);

  // Register IDL constants, attributes and operations.

  // Custom signature
}

void V8WorkerGlobalScopePartial::InstallConditionalFeatures(
    v8::Local<v8::Context> context,
    const DOMWrapperWorld& world,
    v8::Local<v8::Object> instance_object,
    v8::Local<v8::Object> prototype_object,
    v8::Local<v8::Function> interface_object,
    v8::Local<v8::FunctionTemplate> interface_template) {
  CHECK(!interface_template.IsEmpty());
  DCHECK((!prototype_object.IsEmpty() && !interface_object.IsEmpty()) ||
         !instance_object.IsEmpty());
  V8WorkerGlobalScope::InstallConditionalFeatures(
      context, world, instance_object, prototype_object, interface_object, interface_template);

  v8::Isolate* isolate = context->GetIsolate();

  v8::Local<v8::Signature> signature = v8::Signature::New(isolate, interface_template);
  ExecutionContext* execution_context = ToExecutionContext(context);
  DCHECK(execution_context);
  bool is_secure_context = (execution_context && execution_context->IsSecureContext());

  if (!prototype_object.IsEmpty() || !interface_object.IsEmpty()) {
    if (is_secure_context) {
      static const V8DOMConfiguration::AccessorConfiguration accessor_configurations[] = {
          { "caches", V8WorkerGlobalScopePartial::CachesAttributeGetterCallback, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
      };
      V8DOMConfiguration::InstallAccessors(
          isolate, world, instance_object, prototype_object, interface_object,
          signature, accessor_configurations,
          base::size(accessor_configurations));
    }
  }
}

void V8WorkerGlobalScopePartial::Initialize() {
  // Should be invoked from ModulesInitializer.
  V8WorkerGlobalScope::UpdateWrapperTypeInfo(
      &V8WorkerGlobalScopePartial::InstallV8WorkerGlobalScopeTemplate,
      nullptr,
      &V8WorkerGlobalScopePartial::InstallRuntimeEnabledFeaturesOnTemplate,
      V8WorkerGlobalScopePartial::InstallConditionalFeatures);
}

}  // namespace blink
