// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated from the Jinja2 template
// third_party/blink/renderer/bindings/templates/interface.cc.tmpl
// by the script code_generator_v8.py.
// DO NOT MODIFY!

// clang-format off
#include "third_party/blink/renderer/bindings/modules/v8/v8_directory_entry_sync.h"

#include <algorithm>

#include "base/memory/scoped_refptr.h"
#include "third_party/blink/renderer/bindings/core/v8/idl_types.h"
#include "third_party/blink/renderer/bindings/core/v8/native_value_traits_impl.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_dom_configuration.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_directory_entry_sync.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_directory_reader_sync.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_file_entry_sync.h"
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
const WrapperTypeInfo v8_directory_entry_sync_wrapper_type_info = {
    gin::kEmbedderBlink,
    V8DirectoryEntrySync::DomTemplate,
    nullptr,
    "DirectoryEntrySync",
    V8EntrySync::GetWrapperTypeInfo(),
    WrapperTypeInfo::kWrapperTypeObjectPrototype,
    WrapperTypeInfo::kObjectClassId,
    WrapperTypeInfo::kNotInheritFromActiveScriptWrappable,
};
#if defined(COMPONENT_BUILD) && defined(WIN32) && defined(__clang__)
#pragma clang diagnostic pop
#endif

// This static member must be declared by DEFINE_WRAPPERTYPEINFO in DirectoryEntrySync.h.
// For details, see the comment of DEFINE_WRAPPERTYPEINFO in
// platform/bindings/ScriptWrappable.h.
const WrapperTypeInfo& DirectoryEntrySync::wrapper_type_info_ = v8_directory_entry_sync_wrapper_type_info;

// not [ActiveScriptWrappable]
static_assert(
    !std::is_base_of<ActiveScriptWrappableBase, DirectoryEntrySync>::value,
    "DirectoryEntrySync inherits from ActiveScriptWrappable<>, but is not specifying "
    "[ActiveScriptWrappable] extended attribute in the IDL file.  "
    "Be consistent.");
static_assert(
    std::is_same<decltype(&DirectoryEntrySync::HasPendingActivity),
                 decltype(&ScriptWrappable::HasPendingActivity)>::value,
    "DirectoryEntrySync is overriding hasPendingActivity(), but is not specifying "
    "[ActiveScriptWrappable] extended attribute in the IDL file.  "
    "Be consistent.");

namespace directory_entry_sync_v8_internal {

static void CreateReaderMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  DirectoryEntrySync* impl = V8DirectoryEntrySync::ToImpl(info.Holder());

  V8SetReturnValue(info, impl->createReader());
}

static void GetFileMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exception_state(info.GetIsolate(), ExceptionState::kExecutionContext, "DirectoryEntrySync", "getFile");

  DirectoryEntrySync* impl = V8DirectoryEntrySync::ToImpl(info.Holder());

  if (UNLIKELY(info.Length() < 2)) {
    exception_state.ThrowTypeError(ExceptionMessages::NotEnoughArguments(2, info.Length()));
    return;
  }

  V8StringResource<kTreatNullAndUndefinedAsNullString> path;
  FileSystemFlags* flags;
  path = info[0];
  if (!path.Prepare())
    return;

  if (!info[1]->IsNullOrUndefined() && !info[1]->IsObject()) {
    exception_state.ThrowTypeError("parameter 2 ('flags') is not an object.");
    return;
  }
  flags = NativeValueTraits<FileSystemFlags>::NativeValue(info.GetIsolate(), info[1], exception_state);
  if (exception_state.HadException())
    return;

  FileEntrySync* result = impl->getFile(path, flags, exception_state);
  if (exception_state.HadException()) {
    return;
  }
  V8SetReturnValue(info, result);
}

static void GetDirectoryMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exception_state(info.GetIsolate(), ExceptionState::kExecutionContext, "DirectoryEntrySync", "getDirectory");

  DirectoryEntrySync* impl = V8DirectoryEntrySync::ToImpl(info.Holder());

  if (UNLIKELY(info.Length() < 2)) {
    exception_state.ThrowTypeError(ExceptionMessages::NotEnoughArguments(2, info.Length()));
    return;
  }

  V8StringResource<kTreatNullAndUndefinedAsNullString> path;
  FileSystemFlags* flags;
  path = info[0];
  if (!path.Prepare())
    return;

  if (!info[1]->IsNullOrUndefined() && !info[1]->IsObject()) {
    exception_state.ThrowTypeError("parameter 2 ('flags') is not an object.");
    return;
  }
  flags = NativeValueTraits<FileSystemFlags>::NativeValue(info.GetIsolate(), info[1], exception_state);
  if (exception_state.HadException())
    return;

  DirectoryEntrySync* result = impl->getDirectory(path, flags, exception_state);
  if (exception_state.HadException()) {
    return;
  }
  V8SetReturnValue(info, result);
}

static void RemoveRecursivelyMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exception_state(info.GetIsolate(), ExceptionState::kExecutionContext, "DirectoryEntrySync", "removeRecursively");

  DirectoryEntrySync* impl = V8DirectoryEntrySync::ToImpl(info.Holder());

  impl->removeRecursively(exception_state);
  if (exception_state.HadException()) {
    return;
  }
}

}  // namespace directory_entry_sync_v8_internal

void V8DirectoryEntrySync::CreateReaderMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DirectoryEntrySync_createReader");

  directory_entry_sync_v8_internal::CreateReaderMethod(info);
}

void V8DirectoryEntrySync::GetFileMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DirectoryEntrySync_getFile");

  directory_entry_sync_v8_internal::GetFileMethod(info);
}

void V8DirectoryEntrySync::GetDirectoryMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DirectoryEntrySync_getDirectory");

  directory_entry_sync_v8_internal::GetDirectoryMethod(info);
}

void V8DirectoryEntrySync::RemoveRecursivelyMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DirectoryEntrySync_removeRecursively");

  directory_entry_sync_v8_internal::RemoveRecursivelyMethod(info);
}

static constexpr V8DOMConfiguration::MethodConfiguration kV8DirectoryEntrySyncMethods[] = {
    {"createReader", V8DirectoryEntrySync::CreateReaderMethodCallback, 0, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"getFile", V8DirectoryEntrySync::GetFileMethodCallback, 2, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"getDirectory", V8DirectoryEntrySync::GetDirectoryMethodCallback, 2, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"removeRecursively", V8DirectoryEntrySync::RemoveRecursivelyMethodCallback, 0, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
};

static void InstallV8DirectoryEntrySyncTemplate(
    v8::Isolate* isolate,
    const DOMWrapperWorld& world,
    v8::Local<v8::FunctionTemplate> interface_template) {
  // Initialize the interface object's template.
  V8DOMConfiguration::InitializeDOMInterfaceTemplate(isolate, interface_template, V8DirectoryEntrySync::GetWrapperTypeInfo()->interface_name, V8EntrySync::DomTemplate(isolate, world), V8DirectoryEntrySync::kInternalFieldCount);

  v8::Local<v8::Signature> signature = v8::Signature::New(isolate, interface_template);
  ALLOW_UNUSED_LOCAL(signature);
  v8::Local<v8::ObjectTemplate> instance_template = interface_template->InstanceTemplate();
  ALLOW_UNUSED_LOCAL(instance_template);
  v8::Local<v8::ObjectTemplate> prototype_template = interface_template->PrototypeTemplate();
  ALLOW_UNUSED_LOCAL(prototype_template);

  // Register IDL constants, attributes and operations.
  V8DOMConfiguration::InstallMethods(
      isolate, world, instance_template, prototype_template, interface_template,
      signature, kV8DirectoryEntrySyncMethods, base::size(kV8DirectoryEntrySyncMethods));

  // Custom signature

  V8DirectoryEntrySync::InstallRuntimeEnabledFeaturesOnTemplate(
      isolate, world, interface_template);
}

void V8DirectoryEntrySync::InstallRuntimeEnabledFeaturesOnTemplate(
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

v8::Local<v8::FunctionTemplate> V8DirectoryEntrySync::DomTemplate(
    v8::Isolate* isolate, const DOMWrapperWorld& world) {
  return V8DOMConfiguration::DomClassTemplate(
      isolate, world, const_cast<WrapperTypeInfo*>(V8DirectoryEntrySync::GetWrapperTypeInfo()),
      InstallV8DirectoryEntrySyncTemplate);
}

bool V8DirectoryEntrySync::HasInstance(v8::Local<v8::Value> v8_value, v8::Isolate* isolate) {
  return V8PerIsolateData::From(isolate)->HasInstance(V8DirectoryEntrySync::GetWrapperTypeInfo(), v8_value);
}

v8::Local<v8::Object> V8DirectoryEntrySync::FindInstanceInPrototypeChain(
    v8::Local<v8::Value> v8_value, v8::Isolate* isolate) {
  return V8PerIsolateData::From(isolate)->FindInstanceInPrototypeChain(
      V8DirectoryEntrySync::GetWrapperTypeInfo(), v8_value);
}

DirectoryEntrySync* V8DirectoryEntrySync::ToImplWithTypeCheck(
    v8::Isolate* isolate, v8::Local<v8::Value> value) {
  return HasInstance(value, isolate) ? ToImpl(v8::Local<v8::Object>::Cast(value)) : nullptr;
}

DirectoryEntrySync* NativeValueTraits<DirectoryEntrySync>::NativeValue(
    v8::Isolate* isolate, v8::Local<v8::Value> value, ExceptionState& exception_state) {
  DirectoryEntrySync* native_value = V8DirectoryEntrySync::ToImplWithTypeCheck(isolate, value);
  if (!native_value) {
    exception_state.ThrowTypeError(ExceptionMessages::FailedToConvertJSValue(
        "DirectoryEntrySync"));
  }
  return native_value;
}

}  // namespace blink
