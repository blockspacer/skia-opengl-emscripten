// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated from the Jinja2 template
// third_party/blink/renderer/bindings/templates/interface.cc.tmpl
// by the script code_generator_v8.py.
// DO NOT MODIFY!

// clang-format off
#include "third_party/blink/renderer/bindings/modules/v8/v8_idb_index.h"

#include <algorithm>

#include "base/memory/scoped_refptr.h"
#include "third_party/blink/renderer/bindings/core/v8/idl_types.h"
#include "third_party/blink/renderer/bindings/core/v8/native_value_traits_impl.h"
#include "third_party/blink/renderer/bindings/core/v8/script_value.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_dom_configuration.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_idb_object_store.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_idb_request.h"
#include "third_party/blink/renderer/core/execution_context/execution_context.h"
#include "third_party/blink/renderer/platform/bindings/exception_messages.h"
#include "third_party/blink/renderer/platform/bindings/exception_state.h"
#include "third_party/blink/renderer/platform/bindings/runtime_call_stats.h"
#include "third_party/blink/renderer/platform/bindings/script_state.h"
#include "third_party/blink/renderer/platform/bindings/v8_object_constructor.h"
#include "third_party/blink/renderer/platform/bindings/v8_private_property.h"
#include "third_party/blink/renderer/platform/scheduler/public/cooperative_scheduling_manager.h"
#include "third_party/blink/renderer/platform/wtf/get_ptr.h"

namespace blink {

// Suppress warning: global constructors, because struct WrapperTypeInfo is trivial
// and does not depend on another global objects.
#if defined(COMPONENT_BUILD) && defined(WIN32) && defined(__clang__)
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wglobal-constructors"
#endif
const WrapperTypeInfo v8_idb_index_wrapper_type_info = {
    gin::kEmbedderBlink,
    V8IDBIndex::DomTemplate,
    nullptr,
    "IDBIndex",
    nullptr,
    WrapperTypeInfo::kWrapperTypeObjectPrototype,
    WrapperTypeInfo::kObjectClassId,
    WrapperTypeInfo::kNotInheritFromActiveScriptWrappable,
};
#if defined(COMPONENT_BUILD) && defined(WIN32) && defined(__clang__)
#pragma clang diagnostic pop
#endif

// This static member must be declared by DEFINE_WRAPPERTYPEINFO in IDBIndex.h.
// For details, see the comment of DEFINE_WRAPPERTYPEINFO in
// platform/bindings/ScriptWrappable.h.
const WrapperTypeInfo& IDBIndex::wrapper_type_info_ = v8_idb_index_wrapper_type_info;

// not [ActiveScriptWrappable]
static_assert(
    !std::is_base_of<ActiveScriptWrappableBase, IDBIndex>::value,
    "IDBIndex inherits from ActiveScriptWrappable<>, but is not specifying "
    "[ActiveScriptWrappable] extended attribute in the IDL file.  "
    "Be consistent.");
static_assert(
    std::is_same<decltype(&IDBIndex::HasPendingActivity),
                 decltype(&ScriptWrappable::HasPendingActivity)>::value,
    "IDBIndex is overriding hasPendingActivity(), but is not specifying "
    "[ActiveScriptWrappable] extended attribute in the IDL file.  "
    "Be consistent.");

namespace idb_index_v8_internal {

static void NameAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  IDBIndex* impl = V8IDBIndex::ToImpl(holder);

  V8SetReturnValueString(info, impl->name(), info.GetIsolate());
}

static void NameAttributeSetter(
    v8::Local<v8::Value> v8_value, const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Isolate* isolate = info.GetIsolate();
  ALLOW_UNUSED_LOCAL(isolate);

  v8::Local<v8::Object> holder = info.Holder();
  ALLOW_UNUSED_LOCAL(holder);

  IDBIndex* impl = V8IDBIndex::ToImpl(holder);

  ExceptionState exception_state(isolate, ExceptionState::kSetterContext, "IDBIndex", "name");

  // Prepare the value to be set.
  V8StringResource<> cpp_value = v8_value;
  if (!cpp_value.Prepare())
    return;

  impl->setName(cpp_value, exception_state);
}

static void ObjectStoreAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  IDBIndex* impl = V8IDBIndex::ToImpl(holder);

  IDBObjectStore* cpp_value(WTF::GetPtr(impl->objectStore()));

  // Keep the wrapper object for the return value alive as long as |this|
  // object is alive in order to save creation time of the wrapper object.
  if (cpp_value && DOMDataStore::SetReturnValue(info.GetReturnValue(), cpp_value))
    return;
  v8::Local<v8::Value> v8_value(ToV8(cpp_value, holder, info.GetIsolate()));
  V8PrivateProperty::GetSymbol(
      info.GetIsolate(), "KeepAlive#IDBIndex#objectStore")
      .Set(holder, v8_value);

  V8SetReturnValue(info, v8_value);
}

static void KeyPathAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  IDBIndex* impl = V8IDBIndex::ToImpl(holder);

  ScriptState* script_state = ScriptState::ForRelevantRealm(info);

  V8SetReturnValue(info, impl->keyPath(script_state).V8Value());
}

static void MultiEntryAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  IDBIndex* impl = V8IDBIndex::ToImpl(holder);

  V8SetReturnValueBool(info, impl->multiEntry());
}

static void UniqueAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  IDBIndex* impl = V8IDBIndex::ToImpl(holder);

  V8SetReturnValueBool(info, impl->unique());
}

static void GetMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exception_state(info.GetIsolate(), ExceptionState::kExecutionContext, "IDBIndex", "get");

  IDBIndex* impl = V8IDBIndex::ToImpl(info.Holder());

  ScriptState* script_state = ScriptState::ForRelevantRealm(info);

  if (UNLIKELY(info.Length() < 1)) {
    exception_state.ThrowTypeError(ExceptionMessages::NotEnoughArguments(1, info.Length()));
    return;
  }

  ScriptValue key;
  key = ScriptValue(ScriptState::Current(info.GetIsolate()), info[0]);

  IDBRequest* result = impl->get(script_state, key, exception_state);
  if (exception_state.HadException()) {
    return;
  }
  // [NewObject] must always create a new wrapper.  Check that a wrapper
  // does not exist yet.
  DCHECK(!result || DOMDataStore::GetWrapper(result, info.GetIsolate()).IsEmpty());
  V8SetReturnValue(info, result);
}

static void GetKeyMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exception_state(info.GetIsolate(), ExceptionState::kExecutionContext, "IDBIndex", "getKey");

  IDBIndex* impl = V8IDBIndex::ToImpl(info.Holder());

  ScriptState* script_state = ScriptState::ForRelevantRealm(info);

  if (UNLIKELY(info.Length() < 1)) {
    exception_state.ThrowTypeError(ExceptionMessages::NotEnoughArguments(1, info.Length()));
    return;
  }

  ScriptValue key;
  key = ScriptValue(ScriptState::Current(info.GetIsolate()), info[0]);

  IDBRequest* result = impl->getKey(script_state, key, exception_state);
  if (exception_state.HadException()) {
    return;
  }
  // [NewObject] must always create a new wrapper.  Check that a wrapper
  // does not exist yet.
  DCHECK(!result || DOMDataStore::GetWrapper(result, info.GetIsolate()).IsEmpty());
  V8SetReturnValue(info, result);
}

static void GetAllMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exception_state(info.GetIsolate(), ExceptionState::kExecutionContext, "IDBIndex", "getAll");

  IDBIndex* impl = V8IDBIndex::ToImpl(info.Holder());

  ScriptState* script_state = ScriptState::ForRelevantRealm(info);

  ScriptValue query;
  uint32_t count;
  int num_args_passed = info.Length();
  while (num_args_passed > 0) {
    if (!info[num_args_passed - 1]->IsUndefined())
      break;
    --num_args_passed;
  }
  query = ScriptValue(ScriptState::Current(info.GetIsolate()), info[0]);

  if (UNLIKELY(num_args_passed <= 1)) {
    IDBRequest* result = impl->getAll(script_state, query, exception_state);
    if (exception_state.HadException()) {
      return;
    }
    // [NewObject] must always create a new wrapper.  Check that a wrapper
    // does not exist yet.
    DCHECK(!result || DOMDataStore::GetWrapper(result, info.GetIsolate()).IsEmpty());
    V8SetReturnValue(info, result);
    return;
  }
  count = NativeValueTraits<IDLUnsignedLongEnforceRange>::NativeValue(info.GetIsolate(), info[1], exception_state);
  if (exception_state.HadException())
    return;

  IDBRequest* result = impl->getAll(script_state, query, count, exception_state);
  if (exception_state.HadException()) {
    return;
  }
  // [NewObject] must always create a new wrapper.  Check that a wrapper
  // does not exist yet.
  DCHECK(!result || DOMDataStore::GetWrapper(result, info.GetIsolate()).IsEmpty());
  V8SetReturnValue(info, result);
}

static void GetAllKeysMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exception_state(info.GetIsolate(), ExceptionState::kExecutionContext, "IDBIndex", "getAllKeys");

  IDBIndex* impl = V8IDBIndex::ToImpl(info.Holder());

  ScriptState* script_state = ScriptState::ForRelevantRealm(info);

  ScriptValue query;
  uint32_t count;
  int num_args_passed = info.Length();
  while (num_args_passed > 0) {
    if (!info[num_args_passed - 1]->IsUndefined())
      break;
    --num_args_passed;
  }
  query = ScriptValue(ScriptState::Current(info.GetIsolate()), info[0]);

  if (UNLIKELY(num_args_passed <= 1)) {
    IDBRequest* result = impl->getAllKeys(script_state, query, exception_state);
    if (exception_state.HadException()) {
      return;
    }
    // [NewObject] must always create a new wrapper.  Check that a wrapper
    // does not exist yet.
    DCHECK(!result || DOMDataStore::GetWrapper(result, info.GetIsolate()).IsEmpty());
    V8SetReturnValue(info, result);
    return;
  }
  count = NativeValueTraits<IDLUnsignedLongEnforceRange>::NativeValue(info.GetIsolate(), info[1], exception_state);
  if (exception_state.HadException())
    return;

  IDBRequest* result = impl->getAllKeys(script_state, query, count, exception_state);
  if (exception_state.HadException()) {
    return;
  }
  // [NewObject] must always create a new wrapper.  Check that a wrapper
  // does not exist yet.
  DCHECK(!result || DOMDataStore::GetWrapper(result, info.GetIsolate()).IsEmpty());
  V8SetReturnValue(info, result);
}

static void CountMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exception_state(info.GetIsolate(), ExceptionState::kExecutionContext, "IDBIndex", "count");

  IDBIndex* impl = V8IDBIndex::ToImpl(info.Holder());

  ScriptState* script_state = ScriptState::ForRelevantRealm(info);

  ScriptValue key;
  key = ScriptValue(ScriptState::Current(info.GetIsolate()), info[0]);

  IDBRequest* result = impl->count(script_state, key, exception_state);
  if (exception_state.HadException()) {
    return;
  }
  // [NewObject] must always create a new wrapper.  Check that a wrapper
  // does not exist yet.
  DCHECK(!result || DOMDataStore::GetWrapper(result, info.GetIsolate()).IsEmpty());
  V8SetReturnValue(info, result);
}

static void OpenCursorMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exception_state(info.GetIsolate(), ExceptionState::kExecutionContext, "IDBIndex", "openCursor");

  IDBIndex* impl = V8IDBIndex::ToImpl(info.Holder());

  ScriptState* script_state = ScriptState::ForRelevantRealm(info);

  ScriptValue range;
  V8StringResource<> direction;
  range = ScriptValue(ScriptState::Current(info.GetIsolate()), info[0]);

  if (!info[1]->IsUndefined()) {
    direction = info[1];
    if (!direction.Prepare())
      return;
    const char* kValidDirectionValues[] = {
        "next",
        "nextunique",
        "prev",
        "prevunique",
    };
    if (!IsValidEnum(direction, kValidDirectionValues, base::size(kValidDirectionValues), "IDBCursorDirection", exception_state)) {
      return;
    }
  } else {
    direction = "next";
  }

  IDBRequest* result = impl->openCursor(script_state, range, direction, exception_state);
  if (exception_state.HadException()) {
    return;
  }
  // [NewObject] must always create a new wrapper.  Check that a wrapper
  // does not exist yet.
  DCHECK(!result || DOMDataStore::GetWrapper(result, info.GetIsolate()).IsEmpty());
  V8SetReturnValue(info, result);
}

static void OpenKeyCursorMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exception_state(info.GetIsolate(), ExceptionState::kExecutionContext, "IDBIndex", "openKeyCursor");

  IDBIndex* impl = V8IDBIndex::ToImpl(info.Holder());

  ScriptState* script_state = ScriptState::ForRelevantRealm(info);

  ScriptValue range;
  V8StringResource<> direction;
  range = ScriptValue(ScriptState::Current(info.GetIsolate()), info[0]);

  if (!info[1]->IsUndefined()) {
    direction = info[1];
    if (!direction.Prepare())
      return;
    const char* kValidDirectionValues[] = {
        "next",
        "nextunique",
        "prev",
        "prevunique",
    };
    if (!IsValidEnum(direction, kValidDirectionValues, base::size(kValidDirectionValues), "IDBCursorDirection", exception_state)) {
      return;
    }
  } else {
    direction = "next";
  }

  IDBRequest* result = impl->openKeyCursor(script_state, range, direction, exception_state);
  if (exception_state.HadException()) {
    return;
  }
  // [NewObject] must always create a new wrapper.  Check that a wrapper
  // does not exist yet.
  DCHECK(!result || DOMDataStore::GetWrapper(result, info.GetIsolate()).IsEmpty());
  V8SetReturnValue(info, result);
}

}  // namespace idb_index_v8_internal

void V8IDBIndex::NameAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_IDBIndex_name_Getter");

  idb_index_v8_internal::NameAttributeGetter(info);
}

void V8IDBIndex::NameAttributeSetterCallback(
    const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_IDBIndex_name_Setter");

  v8::Local<v8::Value> v8_value = info[0];

  idb_index_v8_internal::NameAttributeSetter(v8_value, info);
}

void V8IDBIndex::ObjectStoreAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_IDBIndex_objectStore_Getter");

  idb_index_v8_internal::ObjectStoreAttributeGetter(info);
}

void V8IDBIndex::KeyPathAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_IDBIndex_keyPath_Getter");

  idb_index_v8_internal::KeyPathAttributeGetter(info);
}

void V8IDBIndex::MultiEntryAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_IDBIndex_multiEntry_Getter");

  idb_index_v8_internal::MultiEntryAttributeGetter(info);
}

void V8IDBIndex::UniqueAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_IDBIndex_unique_Getter");

  idb_index_v8_internal::UniqueAttributeGetter(info);
}

void V8IDBIndex::GetMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_IDBIndex_get");

  idb_index_v8_internal::GetMethod(info);
}

void V8IDBIndex::GetKeyMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_IDBIndex_getKey");

  idb_index_v8_internal::GetKeyMethod(info);
}

void V8IDBIndex::GetAllMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_IDBIndex_getAll");

  idb_index_v8_internal::GetAllMethod(info);
}

void V8IDBIndex::GetAllKeysMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_IDBIndex_getAllKeys");

  idb_index_v8_internal::GetAllKeysMethod(info);
}

void V8IDBIndex::CountMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_IDBIndex_count");

  idb_index_v8_internal::CountMethod(info);
}

void V8IDBIndex::OpenCursorMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_IDBIndex_openCursor");

  idb_index_v8_internal::OpenCursorMethod(info);
}

void V8IDBIndex::OpenKeyCursorMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_IDBIndex_openKeyCursor");

  idb_index_v8_internal::OpenKeyCursorMethod(info);
}

static constexpr V8DOMConfiguration::AccessorConfiguration kV8IDBIndexAccessors[] = {
    { "name", V8IDBIndex::NameAttributeGetterCallback, V8IDBIndex::NameAttributeSetterCallback, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
    { "objectStore", V8IDBIndex::ObjectStoreAttributeGetterCallback, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
    { "keyPath", V8IDBIndex::KeyPathAttributeGetterCallback, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
    { "multiEntry", V8IDBIndex::MultiEntryAttributeGetterCallback, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
    { "unique", V8IDBIndex::UniqueAttributeGetterCallback, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
};

static constexpr V8DOMConfiguration::MethodConfiguration kV8IDBIndexMethods[] = {
    {"get", V8IDBIndex::GetMethodCallback, 1, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"getKey", V8IDBIndex::GetKeyMethodCallback, 1, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"getAll", V8IDBIndex::GetAllMethodCallback, 0, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"getAllKeys", V8IDBIndex::GetAllKeysMethodCallback, 0, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"count", V8IDBIndex::CountMethodCallback, 0, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"openCursor", V8IDBIndex::OpenCursorMethodCallback, 0, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"openKeyCursor", V8IDBIndex::OpenKeyCursorMethodCallback, 0, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
};

static void InstallV8IDBIndexTemplate(
    v8::Isolate* isolate,
    const DOMWrapperWorld& world,
    v8::Local<v8::FunctionTemplate> interface_template) {
  // Initialize the interface object's template.
  V8DOMConfiguration::InitializeDOMInterfaceTemplate(isolate, interface_template, V8IDBIndex::GetWrapperTypeInfo()->interface_name, v8::Local<v8::FunctionTemplate>(), V8IDBIndex::kInternalFieldCount);

  v8::Local<v8::Signature> signature = v8::Signature::New(isolate, interface_template);
  ALLOW_UNUSED_LOCAL(signature);
  v8::Local<v8::ObjectTemplate> instance_template = interface_template->InstanceTemplate();
  ALLOW_UNUSED_LOCAL(instance_template);
  v8::Local<v8::ObjectTemplate> prototype_template = interface_template->PrototypeTemplate();
  ALLOW_UNUSED_LOCAL(prototype_template);

  // Register IDL constants, attributes and operations.
  V8DOMConfiguration::InstallAccessors(
      isolate, world, instance_template, prototype_template, interface_template,
      signature, kV8IDBIndexAccessors, base::size(kV8IDBIndexAccessors));
  V8DOMConfiguration::InstallMethods(
      isolate, world, instance_template, prototype_template, interface_template,
      signature, kV8IDBIndexMethods, base::size(kV8IDBIndexMethods));

  // Custom signature

  V8IDBIndex::InstallRuntimeEnabledFeaturesOnTemplate(
      isolate, world, interface_template);
}

void V8IDBIndex::InstallRuntimeEnabledFeaturesOnTemplate(
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

v8::Local<v8::FunctionTemplate> V8IDBIndex::DomTemplate(
    v8::Isolate* isolate, const DOMWrapperWorld& world) {
  return V8DOMConfiguration::DomClassTemplate(
      isolate, world, const_cast<WrapperTypeInfo*>(V8IDBIndex::GetWrapperTypeInfo()),
      InstallV8IDBIndexTemplate);
}

bool V8IDBIndex::HasInstance(v8::Local<v8::Value> v8_value, v8::Isolate* isolate) {
  return V8PerIsolateData::From(isolate)->HasInstance(V8IDBIndex::GetWrapperTypeInfo(), v8_value);
}

v8::Local<v8::Object> V8IDBIndex::FindInstanceInPrototypeChain(
    v8::Local<v8::Value> v8_value, v8::Isolate* isolate) {
  return V8PerIsolateData::From(isolate)->FindInstanceInPrototypeChain(
      V8IDBIndex::GetWrapperTypeInfo(), v8_value);
}

IDBIndex* V8IDBIndex::ToImplWithTypeCheck(
    v8::Isolate* isolate, v8::Local<v8::Value> value) {
  return HasInstance(value, isolate) ? ToImpl(v8::Local<v8::Object>::Cast(value)) : nullptr;
}

IDBIndex* NativeValueTraits<IDBIndex>::NativeValue(
    v8::Isolate* isolate, v8::Local<v8::Value> value, ExceptionState& exception_state) {
  IDBIndex* native_value = V8IDBIndex::ToImplWithTypeCheck(isolate, value);
  if (!native_value) {
    exception_state.ThrowTypeError(ExceptionMessages::FailedToConvertJSValue(
        "IDBIndex"));
  }
  return native_value;
}

}  // namespace blink
