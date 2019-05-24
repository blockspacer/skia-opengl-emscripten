// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated from the Jinja2 template
// third_party/blink/renderer/bindings/templates/interface.cc.tmpl
// by the script code_generator_v8.py.
// DO NOT MODIFY!

// clang-format off
#include "third_party/blink/renderer/bindings/modules/v8/v8_directory_entry.h"

#include <algorithm>

#include "base/memory/scoped_refptr.h"
#include "third_party/blink/renderer/bindings/core/v8/idl_types.h"
#include "third_party/blink/renderer/bindings/core/v8/native_value_traits_impl.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_dom_configuration.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_void_callback.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_directory_reader.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_entry_callback.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_error_callback.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_file_system_flags.h"
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
const WrapperTypeInfo v8_directory_entry_wrapper_type_info = {
    gin::kEmbedderBlink,
    V8DirectoryEntry::DomTemplate,
    nullptr,
    "DirectoryEntry",
    V8Entry::GetWrapperTypeInfo(),
    WrapperTypeInfo::kWrapperTypeObjectPrototype,
    WrapperTypeInfo::kObjectClassId,
    WrapperTypeInfo::kNotInheritFromActiveScriptWrappable,
};
#if defined(COMPONENT_BUILD) && defined(WIN32) && defined(__clang__)
#pragma clang diagnostic pop
#endif

// This static member must be declared by DEFINE_WRAPPERTYPEINFO in DirectoryEntry.h.
// For details, see the comment of DEFINE_WRAPPERTYPEINFO in
// platform/bindings/ScriptWrappable.h.
const WrapperTypeInfo& DirectoryEntry::wrapper_type_info_ = v8_directory_entry_wrapper_type_info;

// not [ActiveScriptWrappable]
static_assert(
    !std::is_base_of<ActiveScriptWrappableBase, DirectoryEntry>::value,
    "DirectoryEntry inherits from ActiveScriptWrappable<>, but is not specifying "
    "[ActiveScriptWrappable] extended attribute in the IDL file.  "
    "Be consistent.");
static_assert(
    std::is_same<decltype(&DirectoryEntry::HasPendingActivity),
                 decltype(&ScriptWrappable::HasPendingActivity)>::value,
    "DirectoryEntry is overriding hasPendingActivity(), but is not specifying "
    "[ActiveScriptWrappable] extended attribute in the IDL file.  "
    "Be consistent.");

namespace directory_entry_v8_internal {

static void CreateReaderMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  DirectoryEntry* impl = V8DirectoryEntry::ToImpl(info.Holder());

  V8SetReturnValue(info, impl->createReader());
}

static void GetFileMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exception_state(info.GetIsolate(), ExceptionState::kExecutionContext, "DirectoryEntry", "getFile");

  DirectoryEntry* impl = V8DirectoryEntry::ToImpl(info.Holder());

  if (UNLIKELY(info.Length() < 1)) {
    exception_state.ThrowTypeError(ExceptionMessages::NotEnoughArguments(1, info.Length()));
    return;
  }

  V8StringResource<kTreatNullAndUndefinedAsNullString> path;
  FileSystemFlags* options;
  V8EntryCallback* success_callback;
  V8ErrorCallback* error_callback;
  path = info[0];
  if (!path.Prepare())
    return;

  if (!info[1]->IsNullOrUndefined() && !info[1]->IsObject()) {
    exception_state.ThrowTypeError("parameter 2 ('options') is not an object.");
    return;
  }
  options = NativeValueTraits<FileSystemFlags>::NativeValue(info.GetIsolate(), info[1], exception_state);
  if (exception_state.HadException())
    return;

  if (info[2]->IsObject()) {
    success_callback = V8EntryCallback::Create(info[2].As<v8::Object>());
  } else if (info[2]->IsNullOrUndefined()) {
    success_callback = nullptr;
  } else {
    exception_state.ThrowTypeError("The callback provided as parameter 3 is not an object.");
    return;
  }

  if (info[3]->IsObject()) {
    error_callback = V8ErrorCallback::Create(info[3].As<v8::Object>());
  } else if (info[3]->IsNullOrUndefined()) {
    error_callback = nullptr;
  } else {
    exception_state.ThrowTypeError("The callback provided as parameter 4 is not an object.");
    return;
  }

  impl->getFile(path, options, success_callback, error_callback);
}

static void GetDirectoryMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exception_state(info.GetIsolate(), ExceptionState::kExecutionContext, "DirectoryEntry", "getDirectory");

  DirectoryEntry* impl = V8DirectoryEntry::ToImpl(info.Holder());

  if (UNLIKELY(info.Length() < 1)) {
    exception_state.ThrowTypeError(ExceptionMessages::NotEnoughArguments(1, info.Length()));
    return;
  }

  V8StringResource<kTreatNullAndUndefinedAsNullString> path;
  FileSystemFlags* options;
  V8EntryCallback* success_callback;
  V8ErrorCallback* error_callback;
  path = info[0];
  if (!path.Prepare())
    return;

  if (!info[1]->IsNullOrUndefined() && !info[1]->IsObject()) {
    exception_state.ThrowTypeError("parameter 2 ('options') is not an object.");
    return;
  }
  options = NativeValueTraits<FileSystemFlags>::NativeValue(info.GetIsolate(), info[1], exception_state);
  if (exception_state.HadException())
    return;

  if (info[2]->IsObject()) {
    success_callback = V8EntryCallback::Create(info[2].As<v8::Object>());
  } else if (info[2]->IsNullOrUndefined()) {
    success_callback = nullptr;
  } else {
    exception_state.ThrowTypeError("The callback provided as parameter 3 is not an object.");
    return;
  }

  if (info[3]->IsObject()) {
    error_callback = V8ErrorCallback::Create(info[3].As<v8::Object>());
  } else if (info[3]->IsNullOrUndefined()) {
    error_callback = nullptr;
  } else {
    exception_state.ThrowTypeError("The callback provided as parameter 4 is not an object.");
    return;
  }

  impl->getDirectory(path, options, success_callback, error_callback);
}

static void RemoveRecursivelyMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  DirectoryEntry* impl = V8DirectoryEntry::ToImpl(info.Holder());

  if (UNLIKELY(info.Length() < 1)) {
    V8ThrowException::ThrowTypeError(info.GetIsolate(), ExceptionMessages::FailedToExecute("removeRecursively", "DirectoryEntry", ExceptionMessages::NotEnoughArguments(1, info.Length())));
    return;
  }

  V8VoidCallback* success_callback;
  V8ErrorCallback* error_callback;
  if (info[0]->IsObject()) {
    success_callback = V8VoidCallback::Create(info[0].As<v8::Object>());
  } else {
    V8ThrowException::ThrowTypeError(info.GetIsolate(), ExceptionMessages::FailedToExecute("removeRecursively", "DirectoryEntry", "The callback provided as parameter 1 is not an object."));
    return;
  }

  if (info[1]->IsObject()) {
    error_callback = V8ErrorCallback::Create(info[1].As<v8::Object>());
  } else if (info[1]->IsNullOrUndefined()) {
    error_callback = nullptr;
  } else {
    V8ThrowException::ThrowTypeError(info.GetIsolate(), ExceptionMessages::FailedToExecute("removeRecursively", "DirectoryEntry", "The callback provided as parameter 2 is not an object."));
    return;
  }

  impl->removeRecursively(success_callback, error_callback);
}

}  // namespace directory_entry_v8_internal

void V8DirectoryEntry::CreateReaderMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DirectoryEntry_createReader");

  directory_entry_v8_internal::CreateReaderMethod(info);
}

void V8DirectoryEntry::GetFileMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DirectoryEntry_getFile");

  directory_entry_v8_internal::GetFileMethod(info);
}

void V8DirectoryEntry::GetDirectoryMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DirectoryEntry_getDirectory");

  directory_entry_v8_internal::GetDirectoryMethod(info);
}

void V8DirectoryEntry::RemoveRecursivelyMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DirectoryEntry_removeRecursively");

  directory_entry_v8_internal::RemoveRecursivelyMethod(info);
}

static constexpr V8DOMConfiguration::MethodConfiguration kV8DirectoryEntryMethods[] = {
    {"createReader", V8DirectoryEntry::CreateReaderMethodCallback, 0, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"getFile", V8DirectoryEntry::GetFileMethodCallback, 1, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"getDirectory", V8DirectoryEntry::GetDirectoryMethodCallback, 1, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"removeRecursively", V8DirectoryEntry::RemoveRecursivelyMethodCallback, 1, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
};

static void InstallV8DirectoryEntryTemplate(
    v8::Isolate* isolate,
    const DOMWrapperWorld& world,
    v8::Local<v8::FunctionTemplate> interface_template) {
  // Initialize the interface object's template.
  V8DOMConfiguration::InitializeDOMInterfaceTemplate(isolate, interface_template, V8DirectoryEntry::GetWrapperTypeInfo()->interface_name, V8Entry::DomTemplate(isolate, world), V8DirectoryEntry::kInternalFieldCount);

  v8::Local<v8::Signature> signature = v8::Signature::New(isolate, interface_template);
  ALLOW_UNUSED_LOCAL(signature);
  v8::Local<v8::ObjectTemplate> instance_template = interface_template->InstanceTemplate();
  ALLOW_UNUSED_LOCAL(instance_template);
  v8::Local<v8::ObjectTemplate> prototype_template = interface_template->PrototypeTemplate();
  ALLOW_UNUSED_LOCAL(prototype_template);

  // Register IDL constants, attributes and operations.
  V8DOMConfiguration::InstallMethods(
      isolate, world, instance_template, prototype_template, interface_template,
      signature, kV8DirectoryEntryMethods, base::size(kV8DirectoryEntryMethods));

  // Custom signature

  V8DirectoryEntry::InstallRuntimeEnabledFeaturesOnTemplate(
      isolate, world, interface_template);
}

void V8DirectoryEntry::InstallRuntimeEnabledFeaturesOnTemplate(
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

v8::Local<v8::FunctionTemplate> V8DirectoryEntry::DomTemplate(
    v8::Isolate* isolate, const DOMWrapperWorld& world) {
  return V8DOMConfiguration::DomClassTemplate(
      isolate, world, const_cast<WrapperTypeInfo*>(V8DirectoryEntry::GetWrapperTypeInfo()),
      InstallV8DirectoryEntryTemplate);
}

bool V8DirectoryEntry::HasInstance(v8::Local<v8::Value> v8_value, v8::Isolate* isolate) {
  return V8PerIsolateData::From(isolate)->HasInstance(V8DirectoryEntry::GetWrapperTypeInfo(), v8_value);
}

v8::Local<v8::Object> V8DirectoryEntry::FindInstanceInPrototypeChain(
    v8::Local<v8::Value> v8_value, v8::Isolate* isolate) {
  return V8PerIsolateData::From(isolate)->FindInstanceInPrototypeChain(
      V8DirectoryEntry::GetWrapperTypeInfo(), v8_value);
}

DirectoryEntry* V8DirectoryEntry::ToImplWithTypeCheck(
    v8::Isolate* isolate, v8::Local<v8::Value> value) {
  return HasInstance(value, isolate) ? ToImpl(v8::Local<v8::Object>::Cast(value)) : nullptr;
}

DirectoryEntry* NativeValueTraits<DirectoryEntry>::NativeValue(
    v8::Isolate* isolate, v8::Local<v8::Value> value, ExceptionState& exception_state) {
  DirectoryEntry* native_value = V8DirectoryEntry::ToImplWithTypeCheck(isolate, value);
  if (!native_value) {
    exception_state.ThrowTypeError(ExceptionMessages::FailedToConvertJSValue(
        "DirectoryEntry"));
  }
  return native_value;
}

}  // namespace blink
