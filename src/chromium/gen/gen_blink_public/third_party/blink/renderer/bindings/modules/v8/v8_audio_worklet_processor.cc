// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated from the Jinja2 template
// third_party/blink/renderer/bindings/templates/interface.cc.tmpl
// by the script code_generator_v8.py.
// DO NOT MODIFY!

// clang-format off
#include "third_party/blink/renderer/bindings/modules/v8/v8_audio_worklet_processor.h"

#include <algorithm>

#include "base/memory/scoped_refptr.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_dom_configuration.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_message_port.h"
#include "third_party/blink/renderer/core/execution_context/execution_context.h"
#include "third_party/blink/renderer/core/frame/local_dom_window.h"
#include "third_party/blink/renderer/platform/bindings/exception_messages.h"
#include "third_party/blink/renderer/platform/bindings/exception_state.h"
#include "third_party/blink/renderer/platform/bindings/runtime_call_stats.h"
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
const WrapperTypeInfo v8_audio_worklet_processor_wrapper_type_info = {
    gin::kEmbedderBlink,
    V8AudioWorkletProcessor::DomTemplate,
    nullptr,
    "AudioWorkletProcessor",
    nullptr,
    WrapperTypeInfo::kWrapperTypeObjectPrototype,
    WrapperTypeInfo::kObjectClassId,
    WrapperTypeInfo::kNotInheritFromActiveScriptWrappable,
};
#if defined(COMPONENT_BUILD) && defined(WIN32) && defined(__clang__)
#pragma clang diagnostic pop
#endif

// This static member must be declared by DEFINE_WRAPPERTYPEINFO in AudioWorkletProcessor.h.
// For details, see the comment of DEFINE_WRAPPERTYPEINFO in
// platform/bindings/ScriptWrappable.h.
const WrapperTypeInfo& AudioWorkletProcessor::wrapper_type_info_ = v8_audio_worklet_processor_wrapper_type_info;

// not [ActiveScriptWrappable]
static_assert(
    !std::is_base_of<ActiveScriptWrappableBase, AudioWorkletProcessor>::value,
    "AudioWorkletProcessor inherits from ActiveScriptWrappable<>, but is not specifying "
    "[ActiveScriptWrappable] extended attribute in the IDL file.  "
    "Be consistent.");
static_assert(
    std::is_same<decltype(&AudioWorkletProcessor::HasPendingActivity),
                 decltype(&ScriptWrappable::HasPendingActivity)>::value,
    "AudioWorkletProcessor is overriding hasPendingActivity(), but is not specifying "
    "[ActiveScriptWrappable] extended attribute in the IDL file.  "
    "Be consistent.");

namespace audio_worklet_processor_v8_internal {

static void PortAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  AudioWorkletProcessor* impl = V8AudioWorkletProcessor::ToImpl(holder);

  MessagePort* cpp_value(WTF::GetPtr(impl->port()));

  // Keep the wrapper object for the return value alive as long as |this|
  // object is alive in order to save creation time of the wrapper object.
  if (cpp_value && DOMDataStore::SetReturnValue(info.GetReturnValue(), cpp_value))
    return;
  v8::Local<v8::Value> v8_value(ToV8(cpp_value, holder, info.GetIsolate()));
  V8PrivateProperty::GetSymbol(
      info.GetIsolate(), "KeepAlive#AudioWorkletProcessor#port")
      .Set(holder, v8_value);

  V8SetReturnValue(info, v8_value);
}

static void Constructor(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_AudioWorkletProcessor_ConstructorCallback");

  ExecutionContext* execution_context = ToExecutionContext(
      info.NewTarget().As<v8::Object>()->CreationContext());
  AudioWorkletProcessor* impl = AudioWorkletProcessor::Create(execution_context);
  v8::Local<v8::Object> wrapper = info.Holder();
  wrapper = impl->AssociateWithWrapper(info.GetIsolate(), V8AudioWorkletProcessor::GetWrapperTypeInfo(), wrapper);
  V8SetReturnValue(info, wrapper);
}

MODULES_EXPORT void ConstructorCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_AudioWorkletProcessor_Constructor");

  if (!info.IsConstructCall()) {
    V8ThrowException::ThrowTypeError(
        info.GetIsolate(),
        ExceptionMessages::ConstructorNotCallableAsFunction("AudioWorkletProcessor"));
    return;
  }

  if (ConstructorMode::Current(info.GetIsolate()) == ConstructorMode::kWrapExistingObject) {
    V8SetReturnValue(info, info.Holder());
    return;
  }

  audio_worklet_processor_v8_internal::Constructor(info);
}

}  // namespace audio_worklet_processor_v8_internal

void V8AudioWorkletProcessor::PortAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_AudioWorkletProcessor_port_Getter");

  audio_worklet_processor_v8_internal::PortAttributeGetter(info);
}

static constexpr V8DOMConfiguration::AccessorConfiguration kV8AudioWorkletProcessorAccessors[] = {
    { "port", V8AudioWorkletProcessor::PortAttributeGetterCallback, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
};

static void InstallV8AudioWorkletProcessorTemplate(
    v8::Isolate* isolate,
    const DOMWrapperWorld& world,
    v8::Local<v8::FunctionTemplate> interface_template) {
  // Initialize the interface object's template.
  V8DOMConfiguration::InitializeDOMInterfaceTemplate(isolate, interface_template, V8AudioWorkletProcessor::GetWrapperTypeInfo()->interface_name, v8::Local<v8::FunctionTemplate>(), V8AudioWorkletProcessor::kInternalFieldCount);
  interface_template->SetCallHandler(audio_worklet_processor_v8_internal::ConstructorCallback);
  interface_template->SetLength(0);

  v8::Local<v8::Signature> signature = v8::Signature::New(isolate, interface_template);
  ALLOW_UNUSED_LOCAL(signature);
  v8::Local<v8::ObjectTemplate> instance_template = interface_template->InstanceTemplate();
  ALLOW_UNUSED_LOCAL(instance_template);
  v8::Local<v8::ObjectTemplate> prototype_template = interface_template->PrototypeTemplate();
  ALLOW_UNUSED_LOCAL(prototype_template);

  // Register IDL constants, attributes and operations.
  V8DOMConfiguration::InstallAccessors(
      isolate, world, instance_template, prototype_template, interface_template,
      signature, kV8AudioWorkletProcessorAccessors, base::size(kV8AudioWorkletProcessorAccessors));

  // Custom signature

  V8AudioWorkletProcessor::InstallRuntimeEnabledFeaturesOnTemplate(
      isolate, world, interface_template);
}

void V8AudioWorkletProcessor::InstallRuntimeEnabledFeaturesOnTemplate(
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

v8::Local<v8::FunctionTemplate> V8AudioWorkletProcessor::DomTemplate(
    v8::Isolate* isolate, const DOMWrapperWorld& world) {
  return V8DOMConfiguration::DomClassTemplate(
      isolate, world, const_cast<WrapperTypeInfo*>(V8AudioWorkletProcessor::GetWrapperTypeInfo()),
      InstallV8AudioWorkletProcessorTemplate);
}

bool V8AudioWorkletProcessor::HasInstance(v8::Local<v8::Value> v8_value, v8::Isolate* isolate) {
  return V8PerIsolateData::From(isolate)->HasInstance(V8AudioWorkletProcessor::GetWrapperTypeInfo(), v8_value);
}

v8::Local<v8::Object> V8AudioWorkletProcessor::FindInstanceInPrototypeChain(
    v8::Local<v8::Value> v8_value, v8::Isolate* isolate) {
  return V8PerIsolateData::From(isolate)->FindInstanceInPrototypeChain(
      V8AudioWorkletProcessor::GetWrapperTypeInfo(), v8_value);
}

AudioWorkletProcessor* V8AudioWorkletProcessor::ToImplWithTypeCheck(
    v8::Isolate* isolate, v8::Local<v8::Value> value) {
  return HasInstance(value, isolate) ? ToImpl(v8::Local<v8::Object>::Cast(value)) : nullptr;
}

AudioWorkletProcessor* NativeValueTraits<AudioWorkletProcessor>::NativeValue(
    v8::Isolate* isolate, v8::Local<v8::Value> value, ExceptionState& exception_state) {
  AudioWorkletProcessor* native_value = V8AudioWorkletProcessor::ToImplWithTypeCheck(isolate, value);
  if (!native_value) {
    exception_state.ThrowTypeError(ExceptionMessages::FailedToConvertJSValue(
        "AudioWorkletProcessor"));
  }
  return native_value;
}

}  // namespace blink
