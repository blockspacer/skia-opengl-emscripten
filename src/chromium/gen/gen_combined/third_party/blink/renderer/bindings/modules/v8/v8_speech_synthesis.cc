// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated from the Jinja2 template
// third_party/blink/renderer/bindings/templates/interface.cc.tmpl
// by the script code_generator_v8.py.
// DO NOT MODIFY!

// clang-format off
#include "third_party/blink/renderer/bindings/modules/v8/v8_speech_synthesis.h"

#include <algorithm>

#include "base/memory/scoped_refptr.h"
#include "third_party/blink/renderer/bindings/core/v8/idl_types.h"
#include "third_party/blink/renderer/bindings/core/v8/js_event_handler.h"
#include "third_party/blink/renderer/bindings/core/v8/native_value_traits_impl.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_dom_configuration.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_speech_synthesis_utterance.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_speech_synthesis_voice.h"
#include "third_party/blink/renderer/core/execution_context/execution_context.h"
#include "third_party/blink/renderer/core/frame/use_counter.h"
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
const WrapperTypeInfo v8_speech_synthesis_wrapper_type_info = {
    gin::kEmbedderBlink,
    V8SpeechSynthesis::DomTemplate,
    nullptr,
    "SpeechSynthesis",
    V8EventTarget::GetWrapperTypeInfo(),
    WrapperTypeInfo::kWrapperTypeObjectPrototype,
    WrapperTypeInfo::kObjectClassId,
    WrapperTypeInfo::kNotInheritFromActiveScriptWrappable,
};
#if defined(COMPONENT_BUILD) && defined(WIN32) && defined(__clang__)
#pragma clang diagnostic pop
#endif

// This static member must be declared by DEFINE_WRAPPERTYPEINFO in SpeechSynthesis.h.
// For details, see the comment of DEFINE_WRAPPERTYPEINFO in
// platform/bindings/ScriptWrappable.h.
const WrapperTypeInfo& SpeechSynthesis::wrapper_type_info_ = v8_speech_synthesis_wrapper_type_info;

// not [ActiveScriptWrappable]
static_assert(
    !std::is_base_of<ActiveScriptWrappableBase, SpeechSynthesis>::value,
    "SpeechSynthesis inherits from ActiveScriptWrappable<>, but is not specifying "
    "[ActiveScriptWrappable] extended attribute in the IDL file.  "
    "Be consistent.");
static_assert(
    std::is_same<decltype(&SpeechSynthesis::HasPendingActivity),
                 decltype(&ScriptWrappable::HasPendingActivity)>::value,
    "SpeechSynthesis is overriding hasPendingActivity(), but is not specifying "
    "[ActiveScriptWrappable] extended attribute in the IDL file.  "
    "Be consistent.");

namespace speech_synthesis_v8_internal {

static void PendingAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  SpeechSynthesis* impl = V8SpeechSynthesis::ToImpl(holder);

  V8SetReturnValueBool(info, impl->pending());
}

static void SpeakingAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  SpeechSynthesis* impl = V8SpeechSynthesis::ToImpl(holder);

  V8SetReturnValueBool(info, impl->speaking());
}

static void PausedAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  SpeechSynthesis* impl = V8SpeechSynthesis::ToImpl(holder);

  V8SetReturnValueBool(info, impl->paused());
}

static void OnvoiceschangedAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  SpeechSynthesis* impl = V8SpeechSynthesis::ToImpl(holder);

  EventListener* cpp_value(WTF::GetPtr(impl->onvoiceschanged()));

  V8SetReturnValue(info, JSEventHandler::AsV8Value(info.GetIsolate(), impl, cpp_value));
}

static void OnvoiceschangedAttributeSetter(
    v8::Local<v8::Value> v8_value, const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Isolate* isolate = info.GetIsolate();
  ALLOW_UNUSED_LOCAL(isolate);

  v8::Local<v8::Object> holder = info.Holder();
  ALLOW_UNUSED_LOCAL(holder);

  SpeechSynthesis* impl = V8SpeechSynthesis::ToImpl(holder);

  // Prepare the value to be set.

  impl->setOnvoiceschanged(JSEventHandler::CreateOrNull(v8_value, JSEventHandler::HandlerType::kEventHandler));
}

static void SpeakMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  SpeechSynthesis* impl = V8SpeechSynthesis::ToImpl(info.Holder());

  if (UNLIKELY(info.Length() < 1)) {
    V8ThrowException::ThrowTypeError(info.GetIsolate(), ExceptionMessages::FailedToExecute("speak", "SpeechSynthesis", ExceptionMessages::NotEnoughArguments(1, info.Length())));
    return;
  }

  SpeechSynthesisUtterance* utterance;
  utterance = V8SpeechSynthesisUtterance::ToImplWithTypeCheck(info.GetIsolate(), info[0]);
  if (!utterance) {
    V8ThrowException::ThrowTypeError(info.GetIsolate(), ExceptionMessages::FailedToExecute("speak", "SpeechSynthesis", "parameter 1 is not of type 'SpeechSynthesisUtterance'."));
    return;
  }

  impl->speak(utterance);
}

static void CancelMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  SpeechSynthesis* impl = V8SpeechSynthesis::ToImpl(info.Holder());

  impl->cancel();
}

static void PauseMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  SpeechSynthesis* impl = V8SpeechSynthesis::ToImpl(info.Holder());

  impl->pause();
}

static void ResumeMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  SpeechSynthesis* impl = V8SpeechSynthesis::ToImpl(info.Holder());

  impl->resume();
}

static void GetVoicesMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  SpeechSynthesis* impl = V8SpeechSynthesis::ToImpl(info.Holder());

  V8SetReturnValue(info, ToV8(impl->getVoices(), info.Holder(), info.GetIsolate()));
}

}  // namespace speech_synthesis_v8_internal

void V8SpeechSynthesis::PendingAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_SpeechSynthesis_pending_Getter");

  speech_synthesis_v8_internal::PendingAttributeGetter(info);
}

void V8SpeechSynthesis::SpeakingAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_SpeechSynthesis_speaking_Getter");

  speech_synthesis_v8_internal::SpeakingAttributeGetter(info);
}

void V8SpeechSynthesis::PausedAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_SpeechSynthesis_paused_Getter");

  speech_synthesis_v8_internal::PausedAttributeGetter(info);
}

void V8SpeechSynthesis::OnvoiceschangedAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_SpeechSynthesis_onvoiceschanged_Getter");

  speech_synthesis_v8_internal::OnvoiceschangedAttributeGetter(info);
}

void V8SpeechSynthesis::OnvoiceschangedAttributeSetterCallback(
    const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_SpeechSynthesis_onvoiceschanged_Setter");

  v8::Local<v8::Value> v8_value = info[0];

  speech_synthesis_v8_internal::OnvoiceschangedAttributeSetter(v8_value, info);
}

void V8SpeechSynthesis::SpeakMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_SpeechSynthesis_speak");

  ExecutionContext* execution_context_for_measurement = CurrentExecutionContext(info.GetIsolate());
  UseCounter::Count(execution_context_for_measurement, WebFeature::kV8SpeechSynthesis_Speak_Method);
  speech_synthesis_v8_internal::SpeakMethod(info);
}

void V8SpeechSynthesis::CancelMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_SpeechSynthesis_cancel");

  speech_synthesis_v8_internal::CancelMethod(info);
}

void V8SpeechSynthesis::PauseMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_SpeechSynthesis_pause");

  speech_synthesis_v8_internal::PauseMethod(info);
}

void V8SpeechSynthesis::ResumeMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_SpeechSynthesis_resume");

  speech_synthesis_v8_internal::ResumeMethod(info);
}

void V8SpeechSynthesis::GetVoicesMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_SpeechSynthesis_getVoices");

  speech_synthesis_v8_internal::GetVoicesMethod(info);
}

static constexpr V8DOMConfiguration::AccessorConfiguration kV8SpeechSynthesisAccessors[] = {
    { "pending", V8SpeechSynthesis::PendingAttributeGetterCallback, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
    { "speaking", V8SpeechSynthesis::SpeakingAttributeGetterCallback, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
    { "paused", V8SpeechSynthesis::PausedAttributeGetterCallback, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
    { "onvoiceschanged", V8SpeechSynthesis::OnvoiceschangedAttributeGetterCallback, V8SpeechSynthesis::OnvoiceschangedAttributeSetterCallback, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
};

static constexpr V8DOMConfiguration::MethodConfiguration kV8SpeechSynthesisMethods[] = {
    {"speak", V8SpeechSynthesis::SpeakMethodCallback, 1, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"cancel", V8SpeechSynthesis::CancelMethodCallback, 0, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"pause", V8SpeechSynthesis::PauseMethodCallback, 0, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"resume", V8SpeechSynthesis::ResumeMethodCallback, 0, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"getVoices", V8SpeechSynthesis::GetVoicesMethodCallback, 0, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
};

static void InstallV8SpeechSynthesisTemplate(
    v8::Isolate* isolate,
    const DOMWrapperWorld& world,
    v8::Local<v8::FunctionTemplate> interface_template) {
  // Initialize the interface object's template.
  V8DOMConfiguration::InitializeDOMInterfaceTemplate(isolate, interface_template, V8SpeechSynthesis::GetWrapperTypeInfo()->interface_name, V8EventTarget::DomTemplate(isolate, world), V8SpeechSynthesis::kInternalFieldCount);

  v8::Local<v8::Signature> signature = v8::Signature::New(isolate, interface_template);
  ALLOW_UNUSED_LOCAL(signature);
  v8::Local<v8::ObjectTemplate> instance_template = interface_template->InstanceTemplate();
  ALLOW_UNUSED_LOCAL(instance_template);
  v8::Local<v8::ObjectTemplate> prototype_template = interface_template->PrototypeTemplate();
  ALLOW_UNUSED_LOCAL(prototype_template);

  // Register IDL constants, attributes and operations.
  V8DOMConfiguration::InstallAccessors(
      isolate, world, instance_template, prototype_template, interface_template,
      signature, kV8SpeechSynthesisAccessors, base::size(kV8SpeechSynthesisAccessors));
  V8DOMConfiguration::InstallMethods(
      isolate, world, instance_template, prototype_template, interface_template,
      signature, kV8SpeechSynthesisMethods, base::size(kV8SpeechSynthesisMethods));

  // Custom signature

  V8SpeechSynthesis::InstallRuntimeEnabledFeaturesOnTemplate(
      isolate, world, interface_template);
}

void V8SpeechSynthesis::InstallRuntimeEnabledFeaturesOnTemplate(
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

v8::Local<v8::FunctionTemplate> V8SpeechSynthesis::DomTemplate(
    v8::Isolate* isolate, const DOMWrapperWorld& world) {
  return V8DOMConfiguration::DomClassTemplate(
      isolate, world, const_cast<WrapperTypeInfo*>(V8SpeechSynthesis::GetWrapperTypeInfo()),
      InstallV8SpeechSynthesisTemplate);
}

bool V8SpeechSynthesis::HasInstance(v8::Local<v8::Value> v8_value, v8::Isolate* isolate) {
  return V8PerIsolateData::From(isolate)->HasInstance(V8SpeechSynthesis::GetWrapperTypeInfo(), v8_value);
}

v8::Local<v8::Object> V8SpeechSynthesis::FindInstanceInPrototypeChain(
    v8::Local<v8::Value> v8_value, v8::Isolate* isolate) {
  return V8PerIsolateData::From(isolate)->FindInstanceInPrototypeChain(
      V8SpeechSynthesis::GetWrapperTypeInfo(), v8_value);
}

SpeechSynthesis* V8SpeechSynthesis::ToImplWithTypeCheck(
    v8::Isolate* isolate, v8::Local<v8::Value> value) {
  return HasInstance(value, isolate) ? ToImpl(v8::Local<v8::Object>::Cast(value)) : nullptr;
}

SpeechSynthesis* NativeValueTraits<SpeechSynthesis>::NativeValue(
    v8::Isolate* isolate, v8::Local<v8::Value> value, ExceptionState& exception_state) {
  SpeechSynthesis* native_value = V8SpeechSynthesis::ToImplWithTypeCheck(isolate, value);
  if (!native_value) {
    exception_state.ThrowTypeError(ExceptionMessages::FailedToConvertJSValue(
        "SpeechSynthesis"));
  }
  return native_value;
}

}  // namespace blink
