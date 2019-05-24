// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated from the Jinja2 template
// third_party/blink/renderer/bindings/templates/interface.cc.tmpl
// by the script code_generator_v8.py.
// DO NOT MODIFY!

// clang-format off
#include "third_party/blink/renderer/bindings/modules/v8/v8_idb_transaction.h"

#include <algorithm>

#include "base/memory/scoped_refptr.h"
#include "third_party/blink/renderer/bindings/core/v8/idl_types.h"
#include "third_party/blink/renderer/bindings/core/v8/js_event_handler.h"
#include "third_party/blink/renderer/bindings/core/v8/native_value_traits_impl.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_dom_configuration.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_dom_exception.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_dom_string_list.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_idb_database.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_idb_object_store.h"
#include "third_party/blink/renderer/core/execution_context/execution_context.h"
#include "third_party/blink/renderer/core/inspector/console_message.h"
#include "third_party/blink/renderer/platform/bindings/exception_messages.h"
#include "third_party/blink/renderer/platform/bindings/exception_state.h"
#include "third_party/blink/renderer/platform/bindings/runtime_call_stats.h"
#include "third_party/blink/renderer/platform/bindings/v8_object_constructor.h"
#include "third_party/blink/renderer/platform/bindings/v8_private_property.h"
#include "third_party/blink/renderer/platform/runtime_enabled_features.h"
#include "third_party/blink/renderer/platform/scheduler/public/cooperative_scheduling_manager.h"
#include "third_party/blink/renderer/platform/wtf/get_ptr.h"

namespace blink {

// Suppress warning: global constructors, because struct WrapperTypeInfo is trivial
// and does not depend on another global objects.
#if defined(COMPONENT_BUILD) && defined(WIN32) && defined(__clang__)
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wglobal-constructors"
#endif
const WrapperTypeInfo v8_idb_transaction_wrapper_type_info = {
    gin::kEmbedderBlink,
    V8IDBTransaction::DomTemplate,
    nullptr,
    "IDBTransaction",
    V8EventTarget::GetWrapperTypeInfo(),
    WrapperTypeInfo::kWrapperTypeObjectPrototype,
    WrapperTypeInfo::kObjectClassId,
    WrapperTypeInfo::kInheritFromActiveScriptWrappable,
};
#if defined(COMPONENT_BUILD) && defined(WIN32) && defined(__clang__)
#pragma clang diagnostic pop
#endif

// This static member must be declared by DEFINE_WRAPPERTYPEINFO in IDBTransaction.h.
// For details, see the comment of DEFINE_WRAPPERTYPEINFO in
// platform/bindings/ScriptWrappable.h.
const WrapperTypeInfo& IDBTransaction::wrapper_type_info_ = v8_idb_transaction_wrapper_type_info;

// [ActiveScriptWrappable]
static_assert(
    std::is_base_of<ActiveScriptWrappableBase, IDBTransaction>::value,
    "IDBTransaction does not inherit from ActiveScriptWrappable<>, but specifying "
    "[ActiveScriptWrappable] extended attribute in the IDL file.  "
    "Be consistent.");
static_assert(
    !std::is_same<decltype(&IDBTransaction::HasPendingActivity),
                  decltype(&ScriptWrappable::HasPendingActivity)>::value,
    "IDBTransaction is not overriding hasPendingActivity(), but is specifying "
    "[ActiveScriptWrappable] extended attribute in the IDL file.  "
    "Be consistent.");

namespace idb_transaction_v8_internal {

static void ObjectStoreNamesAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  IDBTransaction* impl = V8IDBTransaction::ToImpl(holder);

  DOMStringList* cpp_value(WTF::GetPtr(impl->objectStoreNames()));

  // Keep the wrapper object for the return value alive as long as |this|
  // object is alive in order to save creation time of the wrapper object.
  if (cpp_value && DOMDataStore::SetReturnValue(info.GetReturnValue(), cpp_value))
    return;
  v8::Local<v8::Value> v8_value(ToV8(cpp_value, holder, info.GetIsolate()));
  V8PrivateProperty::GetSymbol(
      info.GetIsolate(), "KeepAlive#IDBTransaction#objectStoreNames")
      .Set(holder, v8_value);

  V8SetReturnValue(info, v8_value);
}

static void ModeAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  IDBTransaction* impl = V8IDBTransaction::ToImpl(holder);

  V8SetReturnValueString(info, impl->mode(), info.GetIsolate());
}

static void DbAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  IDBTransaction* impl = V8IDBTransaction::ToImpl(holder);

  IDBDatabase* cpp_value(WTF::GetPtr(impl->db()));

  // Keep the wrapper object for the return value alive as long as |this|
  // object is alive in order to save creation time of the wrapper object.
  if (cpp_value && DOMDataStore::SetReturnValue(info.GetReturnValue(), cpp_value))
    return;
  v8::Local<v8::Value> v8_value(ToV8(cpp_value, holder, info.GetIsolate()));
  V8PrivateProperty::GetSymbol(
      info.GetIsolate(), "KeepAlive#IDBTransaction#db")
      .Set(holder, v8_value);

  V8SetReturnValue(info, v8_value);
}

static void ErrorAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  IDBTransaction* impl = V8IDBTransaction::ToImpl(holder);

  DOMException* cpp_value(WTF::GetPtr(impl->error()));

  // Keep the wrapper object for the return value alive as long as |this|
  // object is alive in order to save creation time of the wrapper object.
  if (cpp_value && DOMDataStore::SetReturnValue(info.GetReturnValue(), cpp_value))
    return;
  v8::Local<v8::Value> v8_value(ToV8(cpp_value, holder, info.GetIsolate()));
  V8PrivateProperty::GetSymbol(
      info.GetIsolate(), "KeepAlive#IDBTransaction#error")
      .Set(holder, v8_value);

  V8SetReturnValue(info, v8_value);
}

static void OnabortAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  IDBTransaction* impl = V8IDBTransaction::ToImpl(holder);

  EventListener* cpp_value(WTF::GetPtr(impl->onabort()));

  V8SetReturnValue(info, JSEventHandler::AsV8Value(info.GetIsolate(), impl, cpp_value));
}

static void OnabortAttributeSetter(
    v8::Local<v8::Value> v8_value, const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Isolate* isolate = info.GetIsolate();
  ALLOW_UNUSED_LOCAL(isolate);

  v8::Local<v8::Object> holder = info.Holder();
  ALLOW_UNUSED_LOCAL(holder);

  IDBTransaction* impl = V8IDBTransaction::ToImpl(holder);

  // Prepare the value to be set.

  impl->setOnabort(JSEventHandler::CreateOrNull(v8_value, JSEventHandler::HandlerType::kEventHandler));
}

static void OncompleteAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  IDBTransaction* impl = V8IDBTransaction::ToImpl(holder);

  EventListener* cpp_value(WTF::GetPtr(impl->oncomplete()));

  V8SetReturnValue(info, JSEventHandler::AsV8Value(info.GetIsolate(), impl, cpp_value));
}

static void OncompleteAttributeSetter(
    v8::Local<v8::Value> v8_value, const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Isolate* isolate = info.GetIsolate();
  ALLOW_UNUSED_LOCAL(isolate);

  v8::Local<v8::Object> holder = info.Holder();
  ALLOW_UNUSED_LOCAL(holder);

  IDBTransaction* impl = V8IDBTransaction::ToImpl(holder);

  // Prepare the value to be set.

  impl->setOncomplete(JSEventHandler::CreateOrNull(v8_value, JSEventHandler::HandlerType::kEventHandler));
}

static void OnerrorAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  IDBTransaction* impl = V8IDBTransaction::ToImpl(holder);

  EventListener* cpp_value(WTF::GetPtr(impl->onerror()));

  V8SetReturnValue(info, JSEventHandler::AsV8Value(info.GetIsolate(), impl, cpp_value));
}

static void OnerrorAttributeSetter(
    v8::Local<v8::Value> v8_value, const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Isolate* isolate = info.GetIsolate();
  ALLOW_UNUSED_LOCAL(isolate);

  v8::Local<v8::Object> holder = info.Holder();
  ALLOW_UNUSED_LOCAL(holder);

  IDBTransaction* impl = V8IDBTransaction::ToImpl(holder);

  // Prepare the value to be set.

  impl->setOnerror(JSEventHandler::CreateOrNull(v8_value, JSEventHandler::HandlerType::kOnErrorEventHandler));
}

static void ObjectStoreMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exception_state(info.GetIsolate(), ExceptionState::kExecutionContext, "IDBTransaction", "objectStore");

  IDBTransaction* impl = V8IDBTransaction::ToImpl(info.Holder());

  if (UNLIKELY(info.Length() < 1)) {
    exception_state.ThrowTypeError(ExceptionMessages::NotEnoughArguments(1, info.Length()));
    return;
  }

  V8StringResource<> name;
  name = info[0];
  if (!name.Prepare())
    return;

  IDBObjectStore* result = impl->objectStore(name, exception_state);
  if (exception_state.HadException()) {
    return;
  }
  V8SetReturnValue(info, result);
}

static void CommitMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exception_state(info.GetIsolate(), ExceptionState::kExecutionContext, "IDBTransaction", "commit");

  IDBTransaction* impl = V8IDBTransaction::ToImpl(info.Holder());

  impl->commit(exception_state);
  if (exception_state.HadException()) {
    return;
  }
}

static void AbortMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exception_state(info.GetIsolate(), ExceptionState::kExecutionContext, "IDBTransaction", "abort");

  IDBTransaction* impl = V8IDBTransaction::ToImpl(info.Holder());

  impl->abort(exception_state);
  if (exception_state.HadException()) {
    return;
  }
}

}  // namespace idb_transaction_v8_internal

void V8IDBTransaction::ObjectStoreNamesAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_IDBTransaction_objectStoreNames_Getter");

  idb_transaction_v8_internal::ObjectStoreNamesAttributeGetter(info);
}

void V8IDBTransaction::ModeAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_IDBTransaction_mode_Getter");

  idb_transaction_v8_internal::ModeAttributeGetter(info);
}

void V8IDBTransaction::DbAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_IDBTransaction_db_Getter");

  idb_transaction_v8_internal::DbAttributeGetter(info);
}

void V8IDBTransaction::ErrorAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_IDBTransaction_error_Getter");

  idb_transaction_v8_internal::ErrorAttributeGetter(info);
}

void V8IDBTransaction::OnabortAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_IDBTransaction_onabort_Getter");

  idb_transaction_v8_internal::OnabortAttributeGetter(info);
}

void V8IDBTransaction::OnabortAttributeSetterCallback(
    const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_IDBTransaction_onabort_Setter");

  v8::Local<v8::Value> v8_value = info[0];

  idb_transaction_v8_internal::OnabortAttributeSetter(v8_value, info);
}

void V8IDBTransaction::OncompleteAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_IDBTransaction_oncomplete_Getter");

  idb_transaction_v8_internal::OncompleteAttributeGetter(info);
}

void V8IDBTransaction::OncompleteAttributeSetterCallback(
    const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_IDBTransaction_oncomplete_Setter");

  v8::Local<v8::Value> v8_value = info[0];

  idb_transaction_v8_internal::OncompleteAttributeSetter(v8_value, info);
}

void V8IDBTransaction::OnerrorAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_IDBTransaction_onerror_Getter");

  idb_transaction_v8_internal::OnerrorAttributeGetter(info);
}

void V8IDBTransaction::OnerrorAttributeSetterCallback(
    const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_IDBTransaction_onerror_Setter");

  v8::Local<v8::Value> v8_value = info[0];

  idb_transaction_v8_internal::OnerrorAttributeSetter(v8_value, info);
}

void V8IDBTransaction::ObjectStoreMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_IDBTransaction_objectStore");

  idb_transaction_v8_internal::ObjectStoreMethod(info);
}

void V8IDBTransaction::CommitMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_IDBTransaction_commit");

  idb_transaction_v8_internal::CommitMethod(info);
}

void V8IDBTransaction::AbortMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_IDBTransaction_abort");

  idb_transaction_v8_internal::AbortMethod(info);
}

static constexpr V8DOMConfiguration::AccessorConfiguration kV8IDBTransactionAccessors[] = {
    { "objectStoreNames", V8IDBTransaction::ObjectStoreNamesAttributeGetterCallback, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
    { "mode", V8IDBTransaction::ModeAttributeGetterCallback, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
    { "db", V8IDBTransaction::DbAttributeGetterCallback, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
    { "error", V8IDBTransaction::ErrorAttributeGetterCallback, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
    { "onabort", V8IDBTransaction::OnabortAttributeGetterCallback, V8IDBTransaction::OnabortAttributeSetterCallback, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
    { "oncomplete", V8IDBTransaction::OncompleteAttributeGetterCallback, V8IDBTransaction::OncompleteAttributeSetterCallback, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
    { "onerror", V8IDBTransaction::OnerrorAttributeGetterCallback, V8IDBTransaction::OnerrorAttributeSetterCallback, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
};

static constexpr V8DOMConfiguration::MethodConfiguration kV8IDBTransactionMethods[] = {
    {"objectStore", V8IDBTransaction::ObjectStoreMethodCallback, 1, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"abort", V8IDBTransaction::AbortMethodCallback, 0, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
};

static void InstallV8IDBTransactionTemplate(
    v8::Isolate* isolate,
    const DOMWrapperWorld& world,
    v8::Local<v8::FunctionTemplate> interface_template) {
  // Initialize the interface object's template.
  V8DOMConfiguration::InitializeDOMInterfaceTemplate(isolate, interface_template, V8IDBTransaction::GetWrapperTypeInfo()->interface_name, V8EventTarget::DomTemplate(isolate, world), V8IDBTransaction::kInternalFieldCount);

  v8::Local<v8::Signature> signature = v8::Signature::New(isolate, interface_template);
  ALLOW_UNUSED_LOCAL(signature);
  v8::Local<v8::ObjectTemplate> instance_template = interface_template->InstanceTemplate();
  ALLOW_UNUSED_LOCAL(instance_template);
  v8::Local<v8::ObjectTemplate> prototype_template = interface_template->PrototypeTemplate();
  ALLOW_UNUSED_LOCAL(prototype_template);

  // Register IDL constants, attributes and operations.
  V8DOMConfiguration::InstallAccessors(
      isolate, world, instance_template, prototype_template, interface_template,
      signature, kV8IDBTransactionAccessors, base::size(kV8IDBTransactionAccessors));
  V8DOMConfiguration::InstallMethods(
      isolate, world, instance_template, prototype_template, interface_template,
      signature, kV8IDBTransactionMethods, base::size(kV8IDBTransactionMethods));

  // Custom signature

  V8IDBTransaction::InstallRuntimeEnabledFeaturesOnTemplate(
      isolate, world, interface_template);
}

void V8IDBTransaction::InstallRuntimeEnabledFeaturesOnTemplate(
    v8::Isolate* isolate,
    const DOMWrapperWorld& world,
    v8::Local<v8::FunctionTemplate> interface_template) {
  v8::Local<v8::Signature> signature = v8::Signature::New(isolate, interface_template);
  ALLOW_UNUSED_LOCAL(signature);
  v8::Local<v8::ObjectTemplate> instance_template = interface_template->InstanceTemplate();
  ALLOW_UNUSED_LOCAL(instance_template);
  v8::Local<v8::ObjectTemplate> prototype_template = interface_template->PrototypeTemplate();
  ALLOW_UNUSED_LOCAL(prototype_template);

  // Register IDL constants, attributes and operations.

  // Custom signature
  if (RuntimeEnabledFeatures::IDBTransactionCommitEnabled()) {
    {
      // Install commit configuration
      constexpr V8DOMConfiguration::MethodConfiguration kConfigurations[] = {
          {"commit", V8IDBTransaction::CommitMethodCallback, 0, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds}
      };
      for (const auto& config : kConfigurations) {
        V8DOMConfiguration::InstallMethod(
            isolate, world, instance_template, prototype_template,
            interface_template, signature, config);
      }
    }
  }
}

v8::Local<v8::FunctionTemplate> V8IDBTransaction::DomTemplate(
    v8::Isolate* isolate, const DOMWrapperWorld& world) {
  return V8DOMConfiguration::DomClassTemplate(
      isolate, world, const_cast<WrapperTypeInfo*>(V8IDBTransaction::GetWrapperTypeInfo()),
      InstallV8IDBTransactionTemplate);
}

bool V8IDBTransaction::HasInstance(v8::Local<v8::Value> v8_value, v8::Isolate* isolate) {
  return V8PerIsolateData::From(isolate)->HasInstance(V8IDBTransaction::GetWrapperTypeInfo(), v8_value);
}

v8::Local<v8::Object> V8IDBTransaction::FindInstanceInPrototypeChain(
    v8::Local<v8::Value> v8_value, v8::Isolate* isolate) {
  return V8PerIsolateData::From(isolate)->FindInstanceInPrototypeChain(
      V8IDBTransaction::GetWrapperTypeInfo(), v8_value);
}

IDBTransaction* V8IDBTransaction::ToImplWithTypeCheck(
    v8::Isolate* isolate, v8::Local<v8::Value> value) {
  return HasInstance(value, isolate) ? ToImpl(v8::Local<v8::Object>::Cast(value)) : nullptr;
}

IDBTransaction* NativeValueTraits<IDBTransaction>::NativeValue(
    v8::Isolate* isolate, v8::Local<v8::Value> value, ExceptionState& exception_state) {
  IDBTransaction* native_value = V8IDBTransaction::ToImplWithTypeCheck(isolate, value);
  if (!native_value) {
    exception_state.ThrowTypeError(ExceptionMessages::FailedToConvertJSValue(
        "IDBTransaction"));
  }
  return native_value;
}

}  // namespace blink
