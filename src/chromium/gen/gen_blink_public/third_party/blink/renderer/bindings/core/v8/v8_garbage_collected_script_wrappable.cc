// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated from the Jinja2 template
// third_party/blink/renderer/bindings/templates/interface.cc.tmpl
// by the script code_generator_v8.py.
// DO NOT MODIFY!

// clang-format off
#include "third_party/blink/renderer/bindings/core/v8/v8_garbage_collected_script_wrappable.h"

#include <algorithm>

#include "base/memory/scoped_refptr.h"
#include "third_party/blink/renderer/bindings/core/v8/idl_types.h"
#include "third_party/blink/renderer/bindings/core/v8/native_value_traits_impl.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_dom_configuration.h"
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
const WrapperTypeInfo v8_garbage_collected_script_wrappable_wrapper_type_info = {
    gin::kEmbedderBlink,
    V8GarbageCollectedScriptWrappable::DomTemplate,
    nullptr,
    "GarbageCollectedScriptWrappable",
    nullptr,
    WrapperTypeInfo::kWrapperTypeObjectPrototype,
    WrapperTypeInfo::kObjectClassId,
    WrapperTypeInfo::kNotInheritFromActiveScriptWrappable,
};
#if defined(COMPONENT_BUILD) && defined(WIN32) && defined(__clang__)
#pragma clang diagnostic pop
#endif

// This static member must be declared by DEFINE_WRAPPERTYPEINFO in GarbageCollectedScriptWrappable.h.
// For details, see the comment of DEFINE_WRAPPERTYPEINFO in
// platform/bindings/ScriptWrappable.h.
const WrapperTypeInfo& GarbageCollectedScriptWrappable::wrapper_type_info_ = v8_garbage_collected_script_wrappable_wrapper_type_info;

// not [ActiveScriptWrappable]
static_assert(
    !std::is_base_of<ActiveScriptWrappableBase, GarbageCollectedScriptWrappable>::value,
    "GarbageCollectedScriptWrappable inherits from ActiveScriptWrappable<>, but is not specifying "
    "[ActiveScriptWrappable] extended attribute in the IDL file.  "
    "Be consistent.");
static_assert(
    std::is_same<decltype(&GarbageCollectedScriptWrappable::HasPendingActivity),
                 decltype(&ScriptWrappable::HasPendingActivity)>::value,
    "GarbageCollectedScriptWrappable is overriding hasPendingActivity(), but is not specifying "
    "[ActiveScriptWrappable] extended attribute in the IDL file.  "
    "Be consistent.");

namespace garbage_collected_script_wrappable_v8_internal {

static void ToStringMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  GarbageCollectedScriptWrappable* impl = V8GarbageCollectedScriptWrappable::ToImpl(info.Holder());

  V8SetReturnValueString(info, impl->toString(), info.GetIsolate());
}

}  // namespace garbage_collected_script_wrappable_v8_internal

void V8GarbageCollectedScriptWrappable::ToStringMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_GarbageCollectedScriptWrappable_toString");

  garbage_collected_script_wrappable_v8_internal::ToStringMethod(info);
}

static constexpr V8DOMConfiguration::MethodConfiguration kV8GarbageCollectedScriptWrappableMethods[] = {
    {"toString", V8GarbageCollectedScriptWrappable::ToStringMethodCallback, 0, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
};

static void InstallV8GarbageCollectedScriptWrappableTemplate(
    v8::Isolate* isolate,
    const DOMWrapperWorld& world,
    v8::Local<v8::FunctionTemplate> interface_template) {
  // Initialize the interface object's template.
  V8DOMConfiguration::InitializeDOMInterfaceTemplate(isolate, interface_template, V8GarbageCollectedScriptWrappable::GetWrapperTypeInfo()->interface_name, v8::Local<v8::FunctionTemplate>(), V8GarbageCollectedScriptWrappable::kInternalFieldCount);

  v8::Local<v8::Signature> signature = v8::Signature::New(isolate, interface_template);
  ALLOW_UNUSED_LOCAL(signature);
  v8::Local<v8::ObjectTemplate> instance_template = interface_template->InstanceTemplate();
  ALLOW_UNUSED_LOCAL(instance_template);
  v8::Local<v8::ObjectTemplate> prototype_template = interface_template->PrototypeTemplate();
  ALLOW_UNUSED_LOCAL(prototype_template);

  // Register IDL constants, attributes and operations.
  V8DOMConfiguration::InstallMethods(
      isolate, world, instance_template, prototype_template, interface_template,
      signature, kV8GarbageCollectedScriptWrappableMethods, base::size(kV8GarbageCollectedScriptWrappableMethods));

  // Custom signature

  V8GarbageCollectedScriptWrappable::InstallRuntimeEnabledFeaturesOnTemplate(
      isolate, world, interface_template);
}

void V8GarbageCollectedScriptWrappable::InstallRuntimeEnabledFeaturesOnTemplate(
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

v8::Local<v8::FunctionTemplate> V8GarbageCollectedScriptWrappable::DomTemplate(
    v8::Isolate* isolate, const DOMWrapperWorld& world) {
  return V8DOMConfiguration::DomClassTemplate(
      isolate, world, const_cast<WrapperTypeInfo*>(V8GarbageCollectedScriptWrappable::GetWrapperTypeInfo()),
      InstallV8GarbageCollectedScriptWrappableTemplate);
}

bool V8GarbageCollectedScriptWrappable::HasInstance(v8::Local<v8::Value> v8_value, v8::Isolate* isolate) {
  return V8PerIsolateData::From(isolate)->HasInstance(V8GarbageCollectedScriptWrappable::GetWrapperTypeInfo(), v8_value);
}

v8::Local<v8::Object> V8GarbageCollectedScriptWrappable::FindInstanceInPrototypeChain(
    v8::Local<v8::Value> v8_value, v8::Isolate* isolate) {
  return V8PerIsolateData::From(isolate)->FindInstanceInPrototypeChain(
      V8GarbageCollectedScriptWrappable::GetWrapperTypeInfo(), v8_value);
}

GarbageCollectedScriptWrappable* V8GarbageCollectedScriptWrappable::ToImplWithTypeCheck(
    v8::Isolate* isolate, v8::Local<v8::Value> value) {
  return HasInstance(value, isolate) ? ToImpl(v8::Local<v8::Object>::Cast(value)) : nullptr;
}

GarbageCollectedScriptWrappable* NativeValueTraits<GarbageCollectedScriptWrappable>::NativeValue(
    v8::Isolate* isolate, v8::Local<v8::Value> value, ExceptionState& exception_state) {
  GarbageCollectedScriptWrappable* native_value = V8GarbageCollectedScriptWrappable::ToImplWithTypeCheck(isolate, value);
  if (!native_value) {
    exception_state.ThrowTypeError(ExceptionMessages::FailedToConvertJSValue(
        "GarbageCollectedScriptWrappable"));
  }
  return native_value;
}

}  // namespace blink
