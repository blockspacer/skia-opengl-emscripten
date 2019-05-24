// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated from the Jinja2 template
// third_party/blink/renderer/bindings/templates/interface.cc.tmpl
// by the script code_generator_v8.py.
// DO NOT MODIFY!

// clang-format off
#include "third_party/blink/renderer/bindings/modules/v8/v8_native_file_system_directory_iterator.h"

#include <algorithm>

#include "base/memory/scoped_refptr.h"
#include "third_party/blink/renderer/bindings/core/v8/idl_types.h"
#include "third_party/blink/renderer/bindings/core/v8/native_value_traits_impl.h"
#include "third_party/blink/renderer/bindings/core/v8/script_promise.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_dom_configuration.h"
#include "third_party/blink/renderer/core/execution_context/execution_context.h"
#include "third_party/blink/renderer/platform/bindings/exception_messages.h"
#include "third_party/blink/renderer/platform/bindings/exception_state.h"
#include "third_party/blink/renderer/platform/bindings/runtime_call_stats.h"
#include "third_party/blink/renderer/platform/bindings/script_state.h"
#include "third_party/blink/renderer/platform/bindings/v8_object_constructor.h"
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
const WrapperTypeInfo v8_native_file_system_directory_iterator_wrapper_type_info = {
    gin::kEmbedderBlink,
    V8NativeFileSystemDirectoryIterator::DomTemplate,
    nullptr,
    "NativeFileSystemDirectoryIterator",
    nullptr,
    WrapperTypeInfo::kWrapperTypeObjectPrototype,
    WrapperTypeInfo::kObjectClassId,
    WrapperTypeInfo::kNotInheritFromActiveScriptWrappable,
};
#if defined(COMPONENT_BUILD) && defined(WIN32) && defined(__clang__)
#pragma clang diagnostic pop
#endif

// This static member must be declared by DEFINE_WRAPPERTYPEINFO in NativeFileSystemDirectoryIterator.h.
// For details, see the comment of DEFINE_WRAPPERTYPEINFO in
// platform/bindings/ScriptWrappable.h.
const WrapperTypeInfo& NativeFileSystemDirectoryIterator::wrapper_type_info_ = v8_native_file_system_directory_iterator_wrapper_type_info;

// not [ActiveScriptWrappable]
static_assert(
    !std::is_base_of<ActiveScriptWrappableBase, NativeFileSystemDirectoryIterator>::value,
    "NativeFileSystemDirectoryIterator inherits from ActiveScriptWrappable<>, but is not specifying "
    "[ActiveScriptWrappable] extended attribute in the IDL file.  "
    "Be consistent.");
static_assert(
    std::is_same<decltype(&NativeFileSystemDirectoryIterator::HasPendingActivity),
                 decltype(&ScriptWrappable::HasPendingActivity)>::value,
    "NativeFileSystemDirectoryIterator is overriding hasPendingActivity(), but is not specifying "
    "[ActiveScriptWrappable] extended attribute in the IDL file.  "
    "Be consistent.");

namespace native_file_system_directory_iterator_v8_internal {

static void NextMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exception_state(info.GetIsolate(), ExceptionState::kExecutionContext, "NativeFileSystemDirectoryIterator", "next");
  ExceptionToRejectPromiseScope reject_promise_scope(info, exception_state);

  // V8DOMConfiguration::kDoNotCheckHolder
  // Make sure that info.Holder() really points to an instance of the type.
  if (!V8NativeFileSystemDirectoryIterator::HasInstance(info.Holder(), info.GetIsolate())) {
    exception_state.ThrowTypeError("Illegal invocation");
    return;
  }
  NativeFileSystemDirectoryIterator* impl = V8NativeFileSystemDirectoryIterator::ToImpl(info.Holder());

  ScriptState* script_state = ScriptState::ForRelevantRealm(info);

  ScriptPromise result = impl->next(script_state);
  V8SetReturnValue(info, result.V8Value());
}

static void ReturnMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  NativeFileSystemDirectoryIterator* impl = V8NativeFileSystemDirectoryIterator::ToImpl(info.Holder());

  impl->IteratorReturn();
}

}  // namespace native_file_system_directory_iterator_v8_internal

void V8NativeFileSystemDirectoryIterator::NextMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_NativeFileSystemDirectoryIterator_next");

  native_file_system_directory_iterator_v8_internal::NextMethod(info);
}

void V8NativeFileSystemDirectoryIterator::ReturnMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_NativeFileSystemDirectoryIterator_return");

  native_file_system_directory_iterator_v8_internal::ReturnMethod(info);
}

static constexpr V8DOMConfiguration::MethodConfiguration kV8NativeFileSystemDirectoryIteratorMethods[] = {
    {"next", V8NativeFileSystemDirectoryIterator::NextMethodCallback, 0, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kDoNotCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"return", V8NativeFileSystemDirectoryIterator::ReturnMethodCallback, 0, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
};

static void InstallV8NativeFileSystemDirectoryIteratorTemplate(
    v8::Isolate* isolate,
    const DOMWrapperWorld& world,
    v8::Local<v8::FunctionTemplate> interface_template) {
  // Initialize the interface object's template.
  V8DOMConfiguration::InitializeDOMInterfaceTemplate(isolate, interface_template, V8NativeFileSystemDirectoryIterator::GetWrapperTypeInfo()->interface_name, v8::Local<v8::FunctionTemplate>(), V8NativeFileSystemDirectoryIterator::kInternalFieldCount);

  if (!RuntimeEnabledFeatures::NativeFileSystemEnabled()) {
    return;
  }

  v8::Local<v8::Signature> signature = v8::Signature::New(isolate, interface_template);
  ALLOW_UNUSED_LOCAL(signature);
  v8::Local<v8::ObjectTemplate> instance_template = interface_template->InstanceTemplate();
  ALLOW_UNUSED_LOCAL(instance_template);
  v8::Local<v8::ObjectTemplate> prototype_template = interface_template->PrototypeTemplate();
  ALLOW_UNUSED_LOCAL(prototype_template);

  // Register IDL constants, attributes and operations.
  V8DOMConfiguration::InstallMethods(
      isolate, world, instance_template, prototype_template, interface_template,
      signature, kV8NativeFileSystemDirectoryIteratorMethods, base::size(kV8NativeFileSystemDirectoryIteratorMethods));

  // Custom signature

  V8NativeFileSystemDirectoryIterator::InstallRuntimeEnabledFeaturesOnTemplate(
      isolate, world, interface_template);
}

void V8NativeFileSystemDirectoryIterator::InstallRuntimeEnabledFeaturesOnTemplate(
    v8::Isolate* isolate,
    const DOMWrapperWorld& world,
    v8::Local<v8::FunctionTemplate> interface_template) {
  if (!RuntimeEnabledFeatures::NativeFileSystemEnabled()) {
    return;
  }

  v8::Local<v8::Signature> signature = v8::Signature::New(isolate, interface_template);
  ALLOW_UNUSED_LOCAL(signature);
  v8::Local<v8::ObjectTemplate> instance_template = interface_template->InstanceTemplate();
  ALLOW_UNUSED_LOCAL(instance_template);
  v8::Local<v8::ObjectTemplate> prototype_template = interface_template->PrototypeTemplate();
  ALLOW_UNUSED_LOCAL(prototype_template);

  // Register IDL constants, attributes and operations.

  // Custom signature
}

v8::Local<v8::FunctionTemplate> V8NativeFileSystemDirectoryIterator::DomTemplate(
    v8::Isolate* isolate, const DOMWrapperWorld& world) {
  return V8DOMConfiguration::DomClassTemplate(
      isolate, world, const_cast<WrapperTypeInfo*>(V8NativeFileSystemDirectoryIterator::GetWrapperTypeInfo()),
      InstallV8NativeFileSystemDirectoryIteratorTemplate);
}

bool V8NativeFileSystemDirectoryIterator::HasInstance(v8::Local<v8::Value> v8_value, v8::Isolate* isolate) {
  return V8PerIsolateData::From(isolate)->HasInstance(V8NativeFileSystemDirectoryIterator::GetWrapperTypeInfo(), v8_value);
}

v8::Local<v8::Object> V8NativeFileSystemDirectoryIterator::FindInstanceInPrototypeChain(
    v8::Local<v8::Value> v8_value, v8::Isolate* isolate) {
  return V8PerIsolateData::From(isolate)->FindInstanceInPrototypeChain(
      V8NativeFileSystemDirectoryIterator::GetWrapperTypeInfo(), v8_value);
}

NativeFileSystemDirectoryIterator* V8NativeFileSystemDirectoryIterator::ToImplWithTypeCheck(
    v8::Isolate* isolate, v8::Local<v8::Value> value) {
  return HasInstance(value, isolate) ? ToImpl(v8::Local<v8::Object>::Cast(value)) : nullptr;
}

NativeFileSystemDirectoryIterator* NativeValueTraits<NativeFileSystemDirectoryIterator>::NativeValue(
    v8::Isolate* isolate, v8::Local<v8::Value> value, ExceptionState& exception_state) {
  NativeFileSystemDirectoryIterator* native_value = V8NativeFileSystemDirectoryIterator::ToImplWithTypeCheck(isolate, value);
  if (!native_value) {
    exception_state.ThrowTypeError(ExceptionMessages::FailedToConvertJSValue(
        "NativeFileSystemDirectoryIterator"));
  }
  return native_value;
}

}  // namespace blink
