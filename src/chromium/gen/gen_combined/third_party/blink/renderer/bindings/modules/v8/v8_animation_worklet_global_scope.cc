// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated from the Jinja2 template
// third_party/blink/renderer/bindings/templates/interface.cc.tmpl
// by the script code_generator_v8.py.
// DO NOT MODIFY!

// clang-format off
#include "third_party/blink/renderer/bindings/modules/v8/v8_animation_worklet_global_scope.h"

#include <algorithm>

#include "base/memory/scoped_refptr.h"
#include "third_party/blink/renderer/bindings/core/v8/idl_types.h"
#include "third_party/blink/renderer/bindings/core/v8/native_value_traits_impl.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_dom_configuration.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_readable_stream.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_readable_stream_default_reader.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_transform_stream.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_worklet_global_scope.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_writable_stream.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_writable_stream_default_writer.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_animation_worklet_global_scope.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_animator_constructor.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_effect_proxy.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_worklet_group_effect_proxy.h"
#include "third_party/blink/renderer/core/execution_context/execution_context.h"
#include "third_party/blink/renderer/core/frame/use_counter.h"
#include "third_party/blink/renderer/modules/animation_worklet_global_scope_core_constructors.h"
#include "third_party/blink/renderer/modules/animation_worklet_global_scope_modules_constructors.h"
#include "third_party/blink/renderer/platform/bindings/exception_messages.h"
#include "third_party/blink/renderer/platform/bindings/exception_state.h"
#include "third_party/blink/renderer/platform/bindings/runtime_call_stats.h"
#include "third_party/blink/renderer/platform/bindings/script_state.h"
#include "third_party/blink/renderer/platform/bindings/v8_object_constructor.h"
#include "third_party/blink/renderer/platform/bindings/v8_per_context_data.h"
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
const WrapperTypeInfo v8_animation_worklet_global_scope_wrapper_type_info = {
    gin::kEmbedderBlink,
    V8AnimationWorkletGlobalScope::DomTemplate,
    nullptr,
    "AnimationWorkletGlobalScope",
    V8WorkletGlobalScope::GetWrapperTypeInfo(),
    WrapperTypeInfo::kWrapperTypeObjectPrototype,
    WrapperTypeInfo::kObjectClassId,
    WrapperTypeInfo::kInheritFromActiveScriptWrappable,
};
#if defined(COMPONENT_BUILD) && defined(WIN32) && defined(__clang__)
#pragma clang diagnostic pop
#endif

// This static member must be declared by DEFINE_WRAPPERTYPEINFO in AnimationWorkletGlobalScope.h.
// For details, see the comment of DEFINE_WRAPPERTYPEINFO in
// platform/bindings/ScriptWrappable.h.
const WrapperTypeInfo& AnimationWorkletGlobalScope::wrapper_type_info_ = v8_animation_worklet_global_scope_wrapper_type_info;

// [ActiveScriptWrappable]
static_assert(
    std::is_base_of<ActiveScriptWrappableBase, AnimationWorkletGlobalScope>::value,
    "AnimationWorkletGlobalScope does not inherit from ActiveScriptWrappable<>, but specifying "
    "[ActiveScriptWrappable] extended attribute in the IDL file.  "
    "Be consistent.");
static_assert(
    !std::is_same<decltype(&AnimationWorkletGlobalScope::HasPendingActivity),
                  decltype(&ScriptWrappable::HasPendingActivity)>::value,
    "AnimationWorkletGlobalScope is not overriding hasPendingActivity(), but is specifying "
    "[ActiveScriptWrappable] extended attribute in the IDL file.  "
    "Be consistent.");

namespace animation_worklet_global_scope_v8_internal {

static void RegisterAnimatorMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exception_state(info.GetIsolate(), ExceptionState::kExecutionContext, "AnimationWorkletGlobalScope", "registerAnimator");

  AnimationWorkletGlobalScope* impl = V8AnimationWorkletGlobalScope::ToImpl(info.Holder());

  if (UNLIKELY(info.Length() < 2)) {
    exception_state.ThrowTypeError(ExceptionMessages::NotEnoughArguments(2, info.Length()));
    return;
  }

  V8StringResource<> name;
  V8AnimatorConstructor* animator_ctor;
  name = info[0];
  if (!name.Prepare())
    return;

  if (info[1]->IsFunction()) {
    animator_ctor = V8AnimatorConstructor::Create(info[1].As<v8::Function>());
  } else {
    exception_state.ThrowTypeError("The callback provided as parameter 2 is not a function.");
    return;
  }

  impl->registerAnimator(name, animator_ctor, exception_state);
  if (exception_state.HadException()) {
    return;
  }
}

}  // namespace animation_worklet_global_scope_v8_internal

void V8AnimationWorkletGlobalScope::ReadableStreamDefaultReaderConstructorGetterCallback(
    v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_AnimationWorkletGlobalScope_ReadableStreamDefaultReader_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, V8ReadableStreamDefaultReader::GetWrapperTypeInfo());
}

void V8AnimationWorkletGlobalScope::WritableStreamDefaultWriterConstructorGetterCallback(
    v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_AnimationWorkletGlobalScope_WritableStreamDefaultWriter_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, V8WritableStreamDefaultWriter::GetWrapperTypeInfo());
}

void V8AnimationWorkletGlobalScope::ReadableStreamConstructorGetterCallback(
    v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_AnimationWorkletGlobalScope_ReadableStream_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, V8ReadableStream::GetWrapperTypeInfo());
}

void V8AnimationWorkletGlobalScope::TransformStreamConstructorGetterCallback(
    v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_AnimationWorkletGlobalScope_TransformStream_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, V8TransformStream::GetWrapperTypeInfo());
}

void V8AnimationWorkletGlobalScope::WorkletGlobalScopeConstructorGetterCallback(
    v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_AnimationWorkletGlobalScope_WorkletGlobalScope_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, V8WorkletGlobalScope::GetWrapperTypeInfo());
}

void V8AnimationWorkletGlobalScope::WritableStreamConstructorGetterCallback(
    v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_AnimationWorkletGlobalScope_WritableStream_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, V8WritableStream::GetWrapperTypeInfo());
}

void V8AnimationWorkletGlobalScope::AnimationWorkletGlobalScopeConstructorGetterCallback(
    v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_AnimationWorkletGlobalScope_AnimationWorkletGlobalScope_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, V8AnimationWorkletGlobalScope::GetWrapperTypeInfo());
}

void V8AnimationWorkletGlobalScope::EffectProxyConstructorGetterCallback(
    v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_AnimationWorkletGlobalScope_EffectProxy_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, V8EffectProxy::GetWrapperTypeInfo());
}

void V8AnimationWorkletGlobalScope::WorkletGroupEffectProxyConstructorGetterCallback(
    v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_AnimationWorkletGlobalScope_WorkletGroupEffectProxy_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, V8WorkletGroupEffectProxy::GetWrapperTypeInfo());
}

void V8AnimationWorkletGlobalScope::RegisterAnimatorMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_AnimationWorkletGlobalScope_registerAnimator");

  ExecutionContext* execution_context_for_measurement = CurrentExecutionContext(info.GetIsolate());
  UseCounter::Count(execution_context_for_measurement, WebFeature::kAnimationWorkletRegisterAnimator);
  animation_worklet_global_scope_v8_internal::RegisterAnimatorMethod(info);
}

// Suppress warning: global constructors, because AttributeConfiguration is trivial
// and does not depend on another global objects.
#if defined(COMPONENT_BUILD) && defined(WIN32) && defined(__clang__)
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wglobal-constructors"
#endif
static constexpr V8DOMConfiguration::AttributeConfiguration kV8AnimationWorkletGlobalScopeAttributes[] = {
    { "ReadableStream", V8AnimationWorkletGlobalScope::ReadableStreamConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kReplaceWithDataProperty, V8DOMConfiguration::kAllWorlds },
    { "TransformStream", V8AnimationWorkletGlobalScope::TransformStreamConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kReplaceWithDataProperty, V8DOMConfiguration::kAllWorlds },
    { "WorkletGlobalScope", V8AnimationWorkletGlobalScope::WorkletGlobalScopeConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kReplaceWithDataProperty, V8DOMConfiguration::kAllWorlds },
    { "WritableStream", V8AnimationWorkletGlobalScope::WritableStreamConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kReplaceWithDataProperty, V8DOMConfiguration::kAllWorlds },
};
#if defined(COMPONENT_BUILD) && defined(WIN32) && defined(__clang__)
#pragma clang diagnostic pop
#endif

static constexpr V8DOMConfiguration::MethodConfiguration kV8AnimationWorkletGlobalScopeMethods[] = {
    {"registerAnimator", V8AnimationWorkletGlobalScope::RegisterAnimatorMethodCallback, 2, v8::None, V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
};

static void InstallV8AnimationWorkletGlobalScopeTemplate(
    v8::Isolate* isolate,
    const DOMWrapperWorld& world,
    v8::Local<v8::FunctionTemplate> interface_template) {
  // Initialize the interface object's template.
  V8DOMConfiguration::InitializeDOMInterfaceTemplate(isolate, interface_template, V8AnimationWorkletGlobalScope::GetWrapperTypeInfo()->interface_name, V8WorkletGlobalScope::DomTemplate(isolate, world), V8AnimationWorkletGlobalScope::kInternalFieldCount);

  v8::Local<v8::Signature> signature = v8::Signature::New(isolate, interface_template);
  ALLOW_UNUSED_LOCAL(signature);
  v8::Local<v8::ObjectTemplate> instance_template = interface_template->InstanceTemplate();
  ALLOW_UNUSED_LOCAL(instance_template);
  v8::Local<v8::ObjectTemplate> prototype_template = interface_template->PrototypeTemplate();
  ALLOW_UNUSED_LOCAL(prototype_template);

  // Global object prototype chain consists of Immutable Prototype Exotic Objects
  prototype_template->SetImmutableProto();

  // Global objects are Immutable Prototype Exotic Objects
  instance_template->SetImmutableProto();

  // Register IDL constants, attributes and operations.
  V8DOMConfiguration::InstallAttributes(
      isolate, world, instance_template, prototype_template,
      kV8AnimationWorkletGlobalScopeAttributes, base::size(kV8AnimationWorkletGlobalScopeAttributes));
  V8DOMConfiguration::InstallMethods(
      isolate, world, instance_template, prototype_template, interface_template,
      signature, kV8AnimationWorkletGlobalScopeMethods, base::size(kV8AnimationWorkletGlobalScopeMethods));

  // Custom signature

  V8AnimationWorkletGlobalScope::InstallRuntimeEnabledFeaturesOnTemplate(
      isolate, world, interface_template);
}

void V8AnimationWorkletGlobalScope::InstallRuntimeEnabledFeaturesOnTemplate(
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

  if (RuntimeEnabledFeatures::StreamsNativeEnabled()) {
    static constexpr V8DOMConfiguration::AttributeConfiguration kConfigurations[] = {
        { "ReadableStreamDefaultReader", V8AnimationWorkletGlobalScope::ReadableStreamDefaultReaderConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kReplaceWithDataProperty, V8DOMConfiguration::kAllWorlds },
        { "WritableStreamDefaultWriter", V8AnimationWorkletGlobalScope::WritableStreamDefaultWriterConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kReplaceWithDataProperty, V8DOMConfiguration::kAllWorlds },
    };
    V8DOMConfiguration::InstallAttributes(
        isolate, world, instance_template, prototype_template,
        kConfigurations, base::size(kConfigurations));
  }

  // Custom signature
}

void V8AnimationWorkletGlobalScope::InstallAnimationWorklet(
    v8::Isolate* isolate,
    const DOMWrapperWorld& world,
    v8::Local<v8::Object> instance,
    v8::Local<v8::Object> prototype,
    v8::Local<v8::Function> interface) {
  v8::Local<v8::FunctionTemplate> interface_template =
      V8AnimationWorkletGlobalScope::GetWrapperTypeInfo()->DomTemplate(isolate, world);
  v8::Local<v8::Signature> signature = v8::Signature::New(isolate, interface_template);
  ALLOW_UNUSED_LOCAL(signature);
  static constexpr V8DOMConfiguration::AttributeConfiguration
  kAnimationWorkletGlobalScopeConfigurations[] = {
      { "AnimationWorkletGlobalScope", V8AnimationWorkletGlobalScope::AnimationWorkletGlobalScopeConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kReplaceWithDataProperty, V8DOMConfiguration::kAllWorlds }
  };
  for (const auto& config : kAnimationWorkletGlobalScopeConfigurations)
    V8DOMConfiguration::InstallAttribute(isolate, world, instance, prototype, config);
  static constexpr V8DOMConfiguration::AttributeConfiguration
  kEffectProxyConfigurations[] = {
      { "EffectProxy", V8AnimationWorkletGlobalScope::EffectProxyConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kReplaceWithDataProperty, V8DOMConfiguration::kAllWorlds }
  };
  for (const auto& config : kEffectProxyConfigurations)
    V8DOMConfiguration::InstallAttribute(isolate, world, instance, prototype, config);
  static constexpr V8DOMConfiguration::AttributeConfiguration
  kWorkletGroupEffectProxyConfigurations[] = {
      { "WorkletGroupEffectProxy", V8AnimationWorkletGlobalScope::WorkletGroupEffectProxyConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kReplaceWithDataProperty, V8DOMConfiguration::kAllWorlds }
  };
  for (const auto& config : kWorkletGroupEffectProxyConfigurations)
    V8DOMConfiguration::InstallAttribute(isolate, world, instance, prototype, config);
}

void V8AnimationWorkletGlobalScope::InstallAnimationWorklet(
    ScriptState* script_state, v8::Local<v8::Object> instance) {
  V8PerContextData* per_context_data = script_state->PerContextData();
  v8::Local<v8::Object> prototype = per_context_data->PrototypeForType(
      V8AnimationWorkletGlobalScope::GetWrapperTypeInfo());
  v8::Local<v8::Function> interface = per_context_data->ConstructorForType(
      V8AnimationWorkletGlobalScope::GetWrapperTypeInfo());
  ALLOW_UNUSED_LOCAL(interface);
  InstallAnimationWorklet(script_state->GetIsolate(), script_state->World(), instance, prototype, interface);
}

v8::Local<v8::FunctionTemplate> V8AnimationWorkletGlobalScope::DomTemplate(
    v8::Isolate* isolate, const DOMWrapperWorld& world) {
  return V8DOMConfiguration::DomClassTemplate(
      isolate, world, const_cast<WrapperTypeInfo*>(V8AnimationWorkletGlobalScope::GetWrapperTypeInfo()),
      InstallV8AnimationWorkletGlobalScopeTemplate);
}

bool V8AnimationWorkletGlobalScope::HasInstance(v8::Local<v8::Value> v8_value, v8::Isolate* isolate) {
  return V8PerIsolateData::From(isolate)->HasInstance(V8AnimationWorkletGlobalScope::GetWrapperTypeInfo(), v8_value);
}

v8::Local<v8::Object> V8AnimationWorkletGlobalScope::FindInstanceInPrototypeChain(
    v8::Local<v8::Value> v8_value, v8::Isolate* isolate) {
  return V8PerIsolateData::From(isolate)->FindInstanceInPrototypeChain(
      V8AnimationWorkletGlobalScope::GetWrapperTypeInfo(), v8_value);
}

AnimationWorkletGlobalScope* V8AnimationWorkletGlobalScope::ToImplWithTypeCheck(
    v8::Isolate* isolate, v8::Local<v8::Value> value) {
  return HasInstance(value, isolate) ? ToImpl(v8::Local<v8::Object>::Cast(value)) : nullptr;
}

AnimationWorkletGlobalScope* NativeValueTraits<AnimationWorkletGlobalScope>::NativeValue(
    v8::Isolate* isolate, v8::Local<v8::Value> value, ExceptionState& exception_state) {
  AnimationWorkletGlobalScope* native_value = V8AnimationWorkletGlobalScope::ToImplWithTypeCheck(isolate, value);
  if (!native_value) {
    exception_state.ThrowTypeError(ExceptionMessages::FailedToConvertJSValue(
        "AnimationWorkletGlobalScope"));
  }
  return native_value;
}

}  // namespace blink
