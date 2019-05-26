// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated from the Jinja2 template
// third_party/blink/renderer/bindings/templates/interface.cc.tmpl
// by the script code_generator_v8.py.
// DO NOT MODIFY!

// clang-format off
#include "third_party/blink/renderer/bindings/modules/v8/v8_database.h"

#include <algorithm>

#include "base/memory/scoped_refptr.h"
#include "third_party/blink/renderer/bindings/core/v8/idl_types.h"
#include "third_party/blink/renderer/bindings/core/v8/native_value_traits_impl.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_dom_configuration.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_void_callback.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_sql_transaction_callback.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_sql_transaction_error_callback.h"
#include "third_party/blink/renderer/core/execution_context/execution_context.h"
#include "third_party/blink/renderer/platform/bindings/exception_messages.h"
#include "third_party/blink/renderer/platform/bindings/exception_state.h"
#include "third_party/blink/renderer/platform/bindings/runtime_call_stats.h"
#include "third_party/blink/renderer/platform/bindings/v8_object_constructor.h"
#include "third_party/blink/renderer/platform/scheduler/public/cooperative_scheduling_manager.h"
#include "third_party/blink/renderer/platform/wtf/get_ptr.h"

namespace blink {

// Suppress warning: global constructors, because struct WrapperTypeInfo is trivial
// and does not depend on another global objects.
#if defined(COMPONENT_BUILD) && defined(WIN32) && defined(__clang__)
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wglobal-constructors"
#endif
const WrapperTypeInfo v8_database_wrapper_type_info = {
    gin::kEmbedderBlink,
    V8Database::DomTemplate,
    nullptr,
    "Database",
    nullptr,
    WrapperTypeInfo::kWrapperTypeObjectPrototype,
    WrapperTypeInfo::kObjectClassId,
    WrapperTypeInfo::kNotInheritFromActiveScriptWrappable,
};
#if defined(COMPONENT_BUILD) && defined(WIN32) && defined(__clang__)
#pragma clang diagnostic pop
#endif

// This static member must be declared by DEFINE_WRAPPERTYPEINFO in Database.h.
// For details, see the comment of DEFINE_WRAPPERTYPEINFO in
// platform/bindings/ScriptWrappable.h.
const WrapperTypeInfo& Database::wrapper_type_info_ = v8_database_wrapper_type_info;

// not [ActiveScriptWrappable]
static_assert(
    !std::is_base_of<ActiveScriptWrappableBase, Database>::value,
    "Database inherits from ActiveScriptWrappable<>, but is not specifying "
    "[ActiveScriptWrappable] extended attribute in the IDL file.  "
    "Be consistent.");
static_assert(
    std::is_same<decltype(&Database::HasPendingActivity),
                 decltype(&ScriptWrappable::HasPendingActivity)>::value,
    "Database is overriding hasPendingActivity(), but is not specifying "
    "[ActiveScriptWrappable] extended attribute in the IDL file.  "
    "Be consistent.");

namespace database_v8_internal {

static void VersionAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  Database* impl = V8Database::ToImpl(holder);

  V8SetReturnValueString(info, impl->version(), info.GetIsolate());
}

static void ChangeVersionMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  Database* impl = V8Database::ToImpl(info.Holder());

  if (UNLIKELY(info.Length() < 2)) {
    V8ThrowException::ThrowTypeError(info.GetIsolate(), ExceptionMessages::FailedToExecute("changeVersion", "Database", ExceptionMessages::NotEnoughArguments(2, info.Length())));
    return;
  }

  V8StringResource<> old_version;
  V8StringResource<> new_version;
  V8SQLTransactionCallback* callback;
  V8SQLTransactionErrorCallback* error_callback;
  V8VoidCallback* success_callback;
  old_version = info[0];
  if (!old_version.Prepare())
    return;

  new_version = info[1];
  if (!new_version.Prepare())
    return;

  if (info[2]->IsObject()) {
    callback = V8SQLTransactionCallback::Create(info[2].As<v8::Object>());
  } else if (info[2]->IsNullOrUndefined()) {
    callback = nullptr;
  } else {
    V8ThrowException::ThrowTypeError(info.GetIsolate(), ExceptionMessages::FailedToExecute("changeVersion", "Database", "The callback provided as parameter 3 is not an object."));
    return;
  }

  if (info[3]->IsObject()) {
    error_callback = V8SQLTransactionErrorCallback::Create(info[3].As<v8::Object>());
  } else if (info[3]->IsNullOrUndefined()) {
    error_callback = nullptr;
  } else {
    V8ThrowException::ThrowTypeError(info.GetIsolate(), ExceptionMessages::FailedToExecute("changeVersion", "Database", "The callback provided as parameter 4 is not an object."));
    return;
  }

  if (info[4]->IsObject()) {
    success_callback = V8VoidCallback::Create(info[4].As<v8::Object>());
  } else if (info[4]->IsNullOrUndefined()) {
    success_callback = nullptr;
  } else {
    V8ThrowException::ThrowTypeError(info.GetIsolate(), ExceptionMessages::FailedToExecute("changeVersion", "Database", "The callback provided as parameter 5 is not an object."));
    return;
  }

  impl->changeVersion(old_version, new_version, callback, error_callback, success_callback);
}

static void TransactionMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  Database* impl = V8Database::ToImpl(info.Holder());

  if (UNLIKELY(info.Length() < 1)) {
    V8ThrowException::ThrowTypeError(info.GetIsolate(), ExceptionMessages::FailedToExecute("transaction", "Database", ExceptionMessages::NotEnoughArguments(1, info.Length())));
    return;
  }

  V8SQLTransactionCallback* callback;
  V8SQLTransactionErrorCallback* error_callback;
  V8VoidCallback* success_callback;
  if (info[0]->IsObject()) {
    callback = V8SQLTransactionCallback::Create(info[0].As<v8::Object>());
  } else {
    V8ThrowException::ThrowTypeError(info.GetIsolate(), ExceptionMessages::FailedToExecute("transaction", "Database", "The callback provided as parameter 1 is not an object."));
    return;
  }

  if (info[1]->IsObject()) {
    error_callback = V8SQLTransactionErrorCallback::Create(info[1].As<v8::Object>());
  } else if (info[1]->IsNullOrUndefined()) {
    error_callback = nullptr;
  } else {
    V8ThrowException::ThrowTypeError(info.GetIsolate(), ExceptionMessages::FailedToExecute("transaction", "Database", "The callback provided as parameter 2 is not an object."));
    return;
  }

  if (info[2]->IsObject()) {
    success_callback = V8VoidCallback::Create(info[2].As<v8::Object>());
  } else if (info[2]->IsNullOrUndefined()) {
    success_callback = nullptr;
  } else {
    V8ThrowException::ThrowTypeError(info.GetIsolate(), ExceptionMessages::FailedToExecute("transaction", "Database", "The callback provided as parameter 3 is not an object."));
    return;
  }

  impl->transaction(callback, error_callback, success_callback);
}

static void ReadTransactionMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  Database* impl = V8Database::ToImpl(info.Holder());

  if (UNLIKELY(info.Length() < 1)) {
    V8ThrowException::ThrowTypeError(info.GetIsolate(), ExceptionMessages::FailedToExecute("readTransaction", "Database", ExceptionMessages::NotEnoughArguments(1, info.Length())));
    return;
  }

  V8SQLTransactionCallback* callback;
  V8SQLTransactionErrorCallback* error_callback;
  V8VoidCallback* success_callback;
  if (info[0]->IsObject()) {
    callback = V8SQLTransactionCallback::Create(info[0].As<v8::Object>());
  } else {
    V8ThrowException::ThrowTypeError(info.GetIsolate(), ExceptionMessages::FailedToExecute("readTransaction", "Database", "The callback provided as parameter 1 is not an object."));
    return;
  }

  if (info[1]->IsObject()) {
    error_callback = V8SQLTransactionErrorCallback::Create(info[1].As<v8::Object>());
  } else if (info[1]->IsNullOrUndefined()) {
    error_callback = nullptr;
  } else {
    V8ThrowException::ThrowTypeError(info.GetIsolate(), ExceptionMessages::FailedToExecute("readTransaction", "Database", "The callback provided as parameter 2 is not an object."));
    return;
  }

  if (info[2]->IsObject()) {
    success_callback = V8VoidCallback::Create(info[2].As<v8::Object>());
  } else if (info[2]->IsNullOrUndefined()) {
    success_callback = nullptr;
  } else {
    V8ThrowException::ThrowTypeError(info.GetIsolate(), ExceptionMessages::FailedToExecute("readTransaction", "Database", "The callback provided as parameter 3 is not an object."));
    return;
  }

  impl->readTransaction(callback, error_callback, success_callback);
}

}  // namespace database_v8_internal

void V8Database::VersionAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_Database_version_Getter");

  database_v8_internal::VersionAttributeGetter(info);
}

void V8Database::ChangeVersionMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_Database_changeVersion");

  database_v8_internal::ChangeVersionMethod(info);
}

void V8Database::TransactionMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_Database_transaction");

  database_v8_internal::TransactionMethod(info);
}

void V8Database::ReadTransactionMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_Database_readTransaction");

  database_v8_internal::ReadTransactionMethod(info);
}

static constexpr V8DOMConfiguration::AccessorConfiguration kV8DatabaseAccessors[] = {
    { "version", V8Database::VersionAttributeGetterCallback, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
};

static constexpr V8DOMConfiguration::MethodConfiguration kV8DatabaseMethods[] = {
    {"changeVersion", V8Database::ChangeVersionMethodCallback, 2, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"transaction", V8Database::TransactionMethodCallback, 1, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"readTransaction", V8Database::ReadTransactionMethodCallback, 1, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
};

static void InstallV8DatabaseTemplate(
    v8::Isolate* isolate,
    const DOMWrapperWorld& world,
    v8::Local<v8::FunctionTemplate> interface_template) {
  // Initialize the interface object's template.
  V8DOMConfiguration::InitializeDOMInterfaceTemplate(isolate, interface_template, V8Database::GetWrapperTypeInfo()->interface_name, v8::Local<v8::FunctionTemplate>(), V8Database::kInternalFieldCount);

  v8::Local<v8::Signature> signature = v8::Signature::New(isolate, interface_template);
  ALLOW_UNUSED_LOCAL(signature);
  v8::Local<v8::ObjectTemplate> instance_template = interface_template->InstanceTemplate();
  ALLOW_UNUSED_LOCAL(instance_template);
  v8::Local<v8::ObjectTemplate> prototype_template = interface_template->PrototypeTemplate();
  ALLOW_UNUSED_LOCAL(prototype_template);

  // Register IDL constants, attributes and operations.
  V8DOMConfiguration::InstallAccessors(
      isolate, world, instance_template, prototype_template, interface_template,
      signature, kV8DatabaseAccessors, base::size(kV8DatabaseAccessors));
  V8DOMConfiguration::InstallMethods(
      isolate, world, instance_template, prototype_template, interface_template,
      signature, kV8DatabaseMethods, base::size(kV8DatabaseMethods));

  // Custom signature

  V8Database::InstallRuntimeEnabledFeaturesOnTemplate(
      isolate, world, interface_template);
}

void V8Database::InstallRuntimeEnabledFeaturesOnTemplate(
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
}

v8::Local<v8::FunctionTemplate> V8Database::DomTemplate(
    v8::Isolate* isolate, const DOMWrapperWorld& world) {
  return V8DOMConfiguration::DomClassTemplate(
      isolate, world, const_cast<WrapperTypeInfo*>(V8Database::GetWrapperTypeInfo()),
      InstallV8DatabaseTemplate);
}

bool V8Database::HasInstance(v8::Local<v8::Value> v8_value, v8::Isolate* isolate) {
  return V8PerIsolateData::From(isolate)->HasInstance(V8Database::GetWrapperTypeInfo(), v8_value);
}

v8::Local<v8::Object> V8Database::FindInstanceInPrototypeChain(
    v8::Local<v8::Value> v8_value, v8::Isolate* isolate) {
  return V8PerIsolateData::From(isolate)->FindInstanceInPrototypeChain(
      V8Database::GetWrapperTypeInfo(), v8_value);
}

Database* V8Database::ToImplWithTypeCheck(
    v8::Isolate* isolate, v8::Local<v8::Value> value) {
  return HasInstance(value, isolate) ? ToImpl(v8::Local<v8::Object>::Cast(value)) : nullptr;
}

Database* NativeValueTraits<Database>::NativeValue(
    v8::Isolate* isolate, v8::Local<v8::Value> value, ExceptionState& exception_state) {
  Database* native_value = V8Database::ToImplWithTypeCheck(isolate, value);
  if (!native_value) {
    exception_state.ThrowTypeError(ExceptionMessages::FailedToConvertJSValue(
        "Database"));
  }
  return native_value;
}

}  // namespace blink
