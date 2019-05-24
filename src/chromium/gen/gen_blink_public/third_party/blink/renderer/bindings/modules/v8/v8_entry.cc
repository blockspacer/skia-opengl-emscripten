// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated from the Jinja2 template
// third_party/blink/renderer/bindings/templates/interface.cc.tmpl
// by the script code_generator_v8.py.
// DO NOT MODIFY!

// clang-format off
#include "third_party/blink/renderer/bindings/modules/v8/v8_entry.h"

#include <algorithm>

#include "base/memory/scoped_refptr.h"
#include "third_party/blink/renderer/bindings/core/v8/idl_types.h"
#include "third_party/blink/renderer/bindings/core/v8/native_value_traits_impl.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_dom_configuration.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_void_callback.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_directory_entry.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_dom_file_system.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_entry_callback.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_error_callback.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_metadata_callback.h"
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
const WrapperTypeInfo v8_entry_wrapper_type_info = {
    gin::kEmbedderBlink,
    V8Entry::DomTemplate,
    nullptr,
    "Entry",
    nullptr,
    WrapperTypeInfo::kWrapperTypeObjectPrototype,
    WrapperTypeInfo::kObjectClassId,
    WrapperTypeInfo::kNotInheritFromActiveScriptWrappable,
};
#if defined(COMPONENT_BUILD) && defined(WIN32) && defined(__clang__)
#pragma clang diagnostic pop
#endif

// This static member must be declared by DEFINE_WRAPPERTYPEINFO in Entry.h.
// For details, see the comment of DEFINE_WRAPPERTYPEINFO in
// platform/bindings/ScriptWrappable.h.
const WrapperTypeInfo& Entry::wrapper_type_info_ = v8_entry_wrapper_type_info;

// not [ActiveScriptWrappable]
static_assert(
    !std::is_base_of<ActiveScriptWrappableBase, Entry>::value,
    "Entry inherits from ActiveScriptWrappable<>, but is not specifying "
    "[ActiveScriptWrappable] extended attribute in the IDL file.  "
    "Be consistent.");
static_assert(
    std::is_same<decltype(&Entry::HasPendingActivity),
                 decltype(&ScriptWrappable::HasPendingActivity)>::value,
    "Entry is overriding hasPendingActivity(), but is not specifying "
    "[ActiveScriptWrappable] extended attribute in the IDL file.  "
    "Be consistent.");

namespace entry_v8_internal {

static void IsFileAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  Entry* impl = V8Entry::ToImpl(holder);

  V8SetReturnValueBool(info, impl->isFile());
}

static void IsDirectoryAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  Entry* impl = V8Entry::ToImpl(holder);

  V8SetReturnValueBool(info, impl->isDirectory());
}

static void NameAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  Entry* impl = V8Entry::ToImpl(holder);

  V8SetReturnValueString(info, impl->name(), info.GetIsolate());
}

static void FullPathAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  Entry* impl = V8Entry::ToImpl(holder);

  V8SetReturnValueString(info, impl->fullPath(), info.GetIsolate());
}

static void FilesystemAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  Entry* impl = V8Entry::ToImpl(holder);

  ScriptState* script_state = ScriptState::ForRelevantRealm(info);

  DOMFileSystem* cpp_value(impl->filesystem(script_state));

  // Keep the wrapper object for the return value alive as long as |this|
  // object is alive in order to save creation time of the wrapper object.
  if (cpp_value && DOMDataStore::SetReturnValue(info.GetReturnValue(), cpp_value))
    return;
  v8::Local<v8::Value> v8_value(ToV8(cpp_value, holder, info.GetIsolate()));
  V8PrivateProperty::GetSymbol(
      info.GetIsolate(), "KeepAlive#Entry#filesystem")
      .Set(holder, v8_value);

  V8SetReturnValue(info, v8_value);
}

static void GetMetadataMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  Entry* impl = V8Entry::ToImpl(info.Holder());

  ScriptState* script_state = ScriptState::ForRelevantRealm(info);

  if (UNLIKELY(info.Length() < 1)) {
    V8ThrowException::ThrowTypeError(info.GetIsolate(), ExceptionMessages::FailedToExecute("getMetadata", "Entry", ExceptionMessages::NotEnoughArguments(1, info.Length())));
    return;
  }

  V8MetadataCallback* success_callback;
  V8ErrorCallback* error_callback;
  if (info[0]->IsObject()) {
    success_callback = V8MetadataCallback::Create(info[0].As<v8::Object>());
  } else {
    V8ThrowException::ThrowTypeError(info.GetIsolate(), ExceptionMessages::FailedToExecute("getMetadata", "Entry", "The callback provided as parameter 1 is not an object."));
    return;
  }

  if (info[1]->IsObject()) {
    error_callback = V8ErrorCallback::Create(info[1].As<v8::Object>());
  } else if (info[1]->IsNullOrUndefined()) {
    error_callback = nullptr;
  } else {
    V8ThrowException::ThrowTypeError(info.GetIsolate(), ExceptionMessages::FailedToExecute("getMetadata", "Entry", "The callback provided as parameter 2 is not an object."));
    return;
  }

  impl->getMetadata(script_state, success_callback, error_callback);
}

static void MoveToMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  Entry* impl = V8Entry::ToImpl(info.Holder());

  ScriptState* script_state = ScriptState::ForRelevantRealm(info);

  if (UNLIKELY(info.Length() < 1)) {
    V8ThrowException::ThrowTypeError(info.GetIsolate(), ExceptionMessages::FailedToExecute("moveTo", "Entry", ExceptionMessages::NotEnoughArguments(1, info.Length())));
    return;
  }

  DirectoryEntry* parent;
  V8StringResource<kTreatNullAndUndefinedAsNullString> name;
  V8EntryCallback* success_callback;
  V8ErrorCallback* error_callback;
  int num_args_passed = info.Length();
  while (num_args_passed > 0) {
    if (!info[num_args_passed - 1]->IsUndefined())
      break;
    --num_args_passed;
  }
  parent = V8DirectoryEntry::ToImplWithTypeCheck(info.GetIsolate(), info[0]);
  if (!parent) {
    V8ThrowException::ThrowTypeError(info.GetIsolate(), ExceptionMessages::FailedToExecute("moveTo", "Entry", "parameter 1 is not of type 'DirectoryEntry'."));
    return;
  }

  if (UNLIKELY(num_args_passed <= 1)) {
    impl->moveTo(script_state, parent);
    return;
  }
  name = info[1];
  if (!name.Prepare())
    return;

  if (info[2]->IsObject()) {
    success_callback = V8EntryCallback::Create(info[2].As<v8::Object>());
  } else if (info[2]->IsNullOrUndefined()) {
    success_callback = nullptr;
  } else {
    V8ThrowException::ThrowTypeError(info.GetIsolate(), ExceptionMessages::FailedToExecute("moveTo", "Entry", "The callback provided as parameter 3 is not an object."));
    return;
  }

  if (info[3]->IsObject()) {
    error_callback = V8ErrorCallback::Create(info[3].As<v8::Object>());
  } else if (info[3]->IsNullOrUndefined()) {
    error_callback = nullptr;
  } else {
    V8ThrowException::ThrowTypeError(info.GetIsolate(), ExceptionMessages::FailedToExecute("moveTo", "Entry", "The callback provided as parameter 4 is not an object."));
    return;
  }

  impl->moveTo(script_state, parent, name, success_callback, error_callback);
}

static void CopyToMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  Entry* impl = V8Entry::ToImpl(info.Holder());

  ScriptState* script_state = ScriptState::ForRelevantRealm(info);

  if (UNLIKELY(info.Length() < 1)) {
    V8ThrowException::ThrowTypeError(info.GetIsolate(), ExceptionMessages::FailedToExecute("copyTo", "Entry", ExceptionMessages::NotEnoughArguments(1, info.Length())));
    return;
  }

  DirectoryEntry* parent;
  V8StringResource<kTreatNullAndUndefinedAsNullString> name;
  V8EntryCallback* success_callback;
  V8ErrorCallback* error_callback;
  int num_args_passed = info.Length();
  while (num_args_passed > 0) {
    if (!info[num_args_passed - 1]->IsUndefined())
      break;
    --num_args_passed;
  }
  parent = V8DirectoryEntry::ToImplWithTypeCheck(info.GetIsolate(), info[0]);
  if (!parent) {
    V8ThrowException::ThrowTypeError(info.GetIsolate(), ExceptionMessages::FailedToExecute("copyTo", "Entry", "parameter 1 is not of type 'DirectoryEntry'."));
    return;
  }

  if (UNLIKELY(num_args_passed <= 1)) {
    impl->copyTo(script_state, parent);
    return;
  }
  name = info[1];
  if (!name.Prepare())
    return;

  if (info[2]->IsObject()) {
    success_callback = V8EntryCallback::Create(info[2].As<v8::Object>());
  } else if (info[2]->IsNullOrUndefined()) {
    success_callback = nullptr;
  } else {
    V8ThrowException::ThrowTypeError(info.GetIsolate(), ExceptionMessages::FailedToExecute("copyTo", "Entry", "The callback provided as parameter 3 is not an object."));
    return;
  }

  if (info[3]->IsObject()) {
    error_callback = V8ErrorCallback::Create(info[3].As<v8::Object>());
  } else if (info[3]->IsNullOrUndefined()) {
    error_callback = nullptr;
  } else {
    V8ThrowException::ThrowTypeError(info.GetIsolate(), ExceptionMessages::FailedToExecute("copyTo", "Entry", "The callback provided as parameter 4 is not an object."));
    return;
  }

  impl->copyTo(script_state, parent, name, success_callback, error_callback);
}

static void ToURLMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  Entry* impl = V8Entry::ToImpl(info.Holder());

  ScriptState* script_state = ScriptState::ForRelevantRealm(info);

  String result = impl->toURL(script_state);
  V8SetReturnValueString(info, result, info.GetIsolate());
}

static void RemoveMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  Entry* impl = V8Entry::ToImpl(info.Holder());

  ScriptState* script_state = ScriptState::ForRelevantRealm(info);

  if (UNLIKELY(info.Length() < 1)) {
    V8ThrowException::ThrowTypeError(info.GetIsolate(), ExceptionMessages::FailedToExecute("remove", "Entry", ExceptionMessages::NotEnoughArguments(1, info.Length())));
    return;
  }

  V8VoidCallback* success_callback;
  V8ErrorCallback* error_callback;
  if (info[0]->IsObject()) {
    success_callback = V8VoidCallback::Create(info[0].As<v8::Object>());
  } else {
    V8ThrowException::ThrowTypeError(info.GetIsolate(), ExceptionMessages::FailedToExecute("remove", "Entry", "The callback provided as parameter 1 is not an object."));
    return;
  }

  if (info[1]->IsObject()) {
    error_callback = V8ErrorCallback::Create(info[1].As<v8::Object>());
  } else if (info[1]->IsNullOrUndefined()) {
    error_callback = nullptr;
  } else {
    V8ThrowException::ThrowTypeError(info.GetIsolate(), ExceptionMessages::FailedToExecute("remove", "Entry", "The callback provided as parameter 2 is not an object."));
    return;
  }

  impl->remove(script_state, success_callback, error_callback);
}

static void GetParentMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  Entry* impl = V8Entry::ToImpl(info.Holder());

  ScriptState* script_state = ScriptState::ForRelevantRealm(info);

  V8EntryCallback* success_callback;
  V8ErrorCallback* error_callback;
  if (info[0]->IsObject()) {
    success_callback = V8EntryCallback::Create(info[0].As<v8::Object>());
  } else if (info[0]->IsNullOrUndefined()) {
    success_callback = nullptr;
  } else {
    V8ThrowException::ThrowTypeError(info.GetIsolate(), ExceptionMessages::FailedToExecute("getParent", "Entry", "The callback provided as parameter 1 is not an object."));
    return;
  }

  if (info[1]->IsObject()) {
    error_callback = V8ErrorCallback::Create(info[1].As<v8::Object>());
  } else if (info[1]->IsNullOrUndefined()) {
    error_callback = nullptr;
  } else {
    V8ThrowException::ThrowTypeError(info.GetIsolate(), ExceptionMessages::FailedToExecute("getParent", "Entry", "The callback provided as parameter 2 is not an object."));
    return;
  }

  impl->getParent(script_state, success_callback, error_callback);
}

}  // namespace entry_v8_internal

void V8Entry::IsFileAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_Entry_isFile_Getter");

  entry_v8_internal::IsFileAttributeGetter(info);
}

void V8Entry::IsDirectoryAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_Entry_isDirectory_Getter");

  entry_v8_internal::IsDirectoryAttributeGetter(info);
}

void V8Entry::NameAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_Entry_name_Getter");

  entry_v8_internal::NameAttributeGetter(info);
}

void V8Entry::FullPathAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_Entry_fullPath_Getter");

  entry_v8_internal::FullPathAttributeGetter(info);
}

void V8Entry::FilesystemAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_Entry_filesystem_Getter");

  entry_v8_internal::FilesystemAttributeGetter(info);
}

void V8Entry::GetMetadataMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_Entry_getMetadata");

  entry_v8_internal::GetMetadataMethod(info);
}

void V8Entry::MoveToMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_Entry_moveTo");

  entry_v8_internal::MoveToMethod(info);
}

void V8Entry::CopyToMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_Entry_copyTo");

  entry_v8_internal::CopyToMethod(info);
}

void V8Entry::ToURLMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_Entry_toURL");

  entry_v8_internal::ToURLMethod(info);
}

void V8Entry::RemoveMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_Entry_remove");

  entry_v8_internal::RemoveMethod(info);
}

void V8Entry::GetParentMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_Entry_getParent");

  entry_v8_internal::GetParentMethod(info);
}

static constexpr V8DOMConfiguration::AccessorConfiguration kV8EntryAccessors[] = {
    { "isFile", V8Entry::IsFileAttributeGetterCallback, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
    { "isDirectory", V8Entry::IsDirectoryAttributeGetterCallback, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
    { "name", V8Entry::NameAttributeGetterCallback, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
    { "fullPath", V8Entry::FullPathAttributeGetterCallback, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
    { "filesystem", V8Entry::FilesystemAttributeGetterCallback, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
};

static constexpr V8DOMConfiguration::MethodConfiguration kV8EntryMethods[] = {
    {"getMetadata", V8Entry::GetMetadataMethodCallback, 1, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"moveTo", V8Entry::MoveToMethodCallback, 1, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"copyTo", V8Entry::CopyToMethodCallback, 1, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"toURL", V8Entry::ToURLMethodCallback, 0, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"remove", V8Entry::RemoveMethodCallback, 1, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"getParent", V8Entry::GetParentMethodCallback, 0, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
};

static void InstallV8EntryTemplate(
    v8::Isolate* isolate,
    const DOMWrapperWorld& world,
    v8::Local<v8::FunctionTemplate> interface_template) {
  // Initialize the interface object's template.
  V8DOMConfiguration::InitializeDOMInterfaceTemplate(isolate, interface_template, V8Entry::GetWrapperTypeInfo()->interface_name, v8::Local<v8::FunctionTemplate>(), V8Entry::kInternalFieldCount);

  v8::Local<v8::Signature> signature = v8::Signature::New(isolate, interface_template);
  ALLOW_UNUSED_LOCAL(signature);
  v8::Local<v8::ObjectTemplate> instance_template = interface_template->InstanceTemplate();
  ALLOW_UNUSED_LOCAL(instance_template);
  v8::Local<v8::ObjectTemplate> prototype_template = interface_template->PrototypeTemplate();
  ALLOW_UNUSED_LOCAL(prototype_template);

  // Register IDL constants, attributes and operations.
  V8DOMConfiguration::InstallAccessors(
      isolate, world, instance_template, prototype_template, interface_template,
      signature, kV8EntryAccessors, base::size(kV8EntryAccessors));
  V8DOMConfiguration::InstallMethods(
      isolate, world, instance_template, prototype_template, interface_template,
      signature, kV8EntryMethods, base::size(kV8EntryMethods));

  // Custom signature

  V8Entry::InstallRuntimeEnabledFeaturesOnTemplate(
      isolate, world, interface_template);
}

void V8Entry::InstallRuntimeEnabledFeaturesOnTemplate(
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

v8::Local<v8::FunctionTemplate> V8Entry::DomTemplate(
    v8::Isolate* isolate, const DOMWrapperWorld& world) {
  return V8DOMConfiguration::DomClassTemplate(
      isolate, world, const_cast<WrapperTypeInfo*>(V8Entry::GetWrapperTypeInfo()),
      InstallV8EntryTemplate);
}

bool V8Entry::HasInstance(v8::Local<v8::Value> v8_value, v8::Isolate* isolate) {
  return V8PerIsolateData::From(isolate)->HasInstance(V8Entry::GetWrapperTypeInfo(), v8_value);
}

v8::Local<v8::Object> V8Entry::FindInstanceInPrototypeChain(
    v8::Local<v8::Value> v8_value, v8::Isolate* isolate) {
  return V8PerIsolateData::From(isolate)->FindInstanceInPrototypeChain(
      V8Entry::GetWrapperTypeInfo(), v8_value);
}

Entry* V8Entry::ToImplWithTypeCheck(
    v8::Isolate* isolate, v8::Local<v8::Value> value) {
  return HasInstance(value, isolate) ? ToImpl(v8::Local<v8::Object>::Cast(value)) : nullptr;
}

Entry* NativeValueTraits<Entry>::NativeValue(
    v8::Isolate* isolate, v8::Local<v8::Value> value, ExceptionState& exception_state) {
  Entry* native_value = V8Entry::ToImplWithTypeCheck(isolate, value);
  if (!native_value) {
    exception_state.ThrowTypeError(ExceptionMessages::FailedToConvertJSValue(
        "Entry"));
  }
  return native_value;
}

}  // namespace blink
