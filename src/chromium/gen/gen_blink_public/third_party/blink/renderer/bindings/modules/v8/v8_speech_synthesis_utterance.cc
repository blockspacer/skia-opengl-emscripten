// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated from the Jinja2 template
// third_party/blink/renderer/bindings/templates/interface.cc.tmpl
// by the script code_generator_v8.py.
// DO NOT MODIFY!

// clang-format off
#include "third_party/blink/renderer/bindings/modules/v8/v8_speech_synthesis_utterance.h"

#include <algorithm>

#include "base/memory/scoped_refptr.h"
#include "third_party/blink/renderer/bindings/core/v8/idl_types.h"
#include "third_party/blink/renderer/bindings/core/v8/js_event_handler.h"
#include "third_party/blink/renderer/bindings/core/v8/native_value_traits_impl.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_dom_configuration.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_speech_synthesis_voice.h"
#include "third_party/blink/renderer/core/execution_context/execution_context.h"
#include "third_party/blink/renderer/core/frame/local_dom_window.h"
#include "third_party/blink/renderer/platform/bindings/exception_messages.h"
#include "third_party/blink/renderer/platform/bindings/exception_state.h"
#include "third_party/blink/renderer/platform/bindings/runtime_call_stats.h"
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
const WrapperTypeInfo v8_speech_synthesis_utterance_wrapper_type_info = {
    gin::kEmbedderBlink,
    V8SpeechSynthesisUtterance::DomTemplate,
    nullptr,
    "SpeechSynthesisUtterance",
    V8EventTarget::GetWrapperTypeInfo(),
    WrapperTypeInfo::kWrapperTypeObjectPrototype,
    WrapperTypeInfo::kObjectClassId,
    WrapperTypeInfo::kNotInheritFromActiveScriptWrappable,
};
#if defined(COMPONENT_BUILD) && defined(WIN32) && defined(__clang__)
#pragma clang diagnostic pop
#endif

// This static member must be declared by DEFINE_WRAPPERTYPEINFO in SpeechSynthesisUtterance.h.
// For details, see the comment of DEFINE_WRAPPERTYPEINFO in
// platform/bindings/ScriptWrappable.h.
const WrapperTypeInfo& SpeechSynthesisUtterance::wrapper_type_info_ = v8_speech_synthesis_utterance_wrapper_type_info;

// not [ActiveScriptWrappable]
static_assert(
    !std::is_base_of<ActiveScriptWrappableBase, SpeechSynthesisUtterance>::value,
    "SpeechSynthesisUtterance inherits from ActiveScriptWrappable<>, but is not specifying "
    "[ActiveScriptWrappable] extended attribute in the IDL file.  "
    "Be consistent.");
static_assert(
    std::is_same<decltype(&SpeechSynthesisUtterance::HasPendingActivity),
                 decltype(&ScriptWrappable::HasPendingActivity)>::value,
    "SpeechSynthesisUtterance is overriding hasPendingActivity(), but is not specifying "
    "[ActiveScriptWrappable] extended attribute in the IDL file.  "
    "Be consistent.");

namespace speech_synthesis_utterance_v8_internal {

static void TextAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  SpeechSynthesisUtterance* impl = V8SpeechSynthesisUtterance::ToImpl(holder);

  V8SetReturnValueString(info, impl->text(), info.GetIsolate());
}

static void TextAttributeSetter(
    v8::Local<v8::Value> v8_value, const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Isolate* isolate = info.GetIsolate();
  ALLOW_UNUSED_LOCAL(isolate);

  v8::Local<v8::Object> holder = info.Holder();
  ALLOW_UNUSED_LOCAL(holder);

  SpeechSynthesisUtterance* impl = V8SpeechSynthesisUtterance::ToImpl(holder);

  // Prepare the value to be set.
  V8StringResource<> cpp_value = v8_value;
  if (!cpp_value.Prepare())
    return;

  impl->setText(cpp_value);
}

static void LangAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  SpeechSynthesisUtterance* impl = V8SpeechSynthesisUtterance::ToImpl(holder);

  V8SetReturnValueString(info, impl->lang(), info.GetIsolate());
}

static void LangAttributeSetter(
    v8::Local<v8::Value> v8_value, const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Isolate* isolate = info.GetIsolate();
  ALLOW_UNUSED_LOCAL(isolate);

  v8::Local<v8::Object> holder = info.Holder();
  ALLOW_UNUSED_LOCAL(holder);

  SpeechSynthesisUtterance* impl = V8SpeechSynthesisUtterance::ToImpl(holder);

  // Prepare the value to be set.
  V8StringResource<> cpp_value = v8_value;
  if (!cpp_value.Prepare())
    return;

  impl->setLang(cpp_value);
}

static void VoiceAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  SpeechSynthesisUtterance* impl = V8SpeechSynthesisUtterance::ToImpl(holder);

  V8SetReturnValueFast(info, WTF::GetPtr(impl->voice()), impl);
}

static void VoiceAttributeSetter(
    v8::Local<v8::Value> v8_value, const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Isolate* isolate = info.GetIsolate();
  ALLOW_UNUSED_LOCAL(isolate);

  v8::Local<v8::Object> holder = info.Holder();
  ALLOW_UNUSED_LOCAL(holder);

  SpeechSynthesisUtterance* impl = V8SpeechSynthesisUtterance::ToImpl(holder);

  ExceptionState exception_state(isolate, ExceptionState::kSetterContext, "SpeechSynthesisUtterance", "voice");

  // Prepare the value to be set.
  SpeechSynthesisVoice* cpp_value = V8SpeechSynthesisVoice::ToImplWithTypeCheck(info.GetIsolate(), v8_value);

  // Type check per: http://heycam.github.io/webidl/#es-interface
  if (!cpp_value && !IsUndefinedOrNull(v8_value)) {
    exception_state.ThrowTypeError("The provided value is not of type 'SpeechSynthesisVoice'.");
    return;
  }

  impl->setVoice(cpp_value);
}

static void VolumeAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  SpeechSynthesisUtterance* impl = V8SpeechSynthesisUtterance::ToImpl(holder);

  V8SetReturnValue(info, impl->volume());
}

static void VolumeAttributeSetter(
    v8::Local<v8::Value> v8_value, const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Isolate* isolate = info.GetIsolate();
  ALLOW_UNUSED_LOCAL(isolate);

  v8::Local<v8::Object> holder = info.Holder();
  ALLOW_UNUSED_LOCAL(holder);

  SpeechSynthesisUtterance* impl = V8SpeechSynthesisUtterance::ToImpl(holder);

  ExceptionState exception_state(isolate, ExceptionState::kSetterContext, "SpeechSynthesisUtterance", "volume");

  // Prepare the value to be set.
  float cpp_value = NativeValueTraits<IDLFloat>::NativeValue(info.GetIsolate(), v8_value, exception_state);
  if (exception_state.HadException())
    return;

  impl->setVolume(cpp_value);
}

static void RateAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  SpeechSynthesisUtterance* impl = V8SpeechSynthesisUtterance::ToImpl(holder);

  V8SetReturnValue(info, impl->rate());
}

static void RateAttributeSetter(
    v8::Local<v8::Value> v8_value, const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Isolate* isolate = info.GetIsolate();
  ALLOW_UNUSED_LOCAL(isolate);

  v8::Local<v8::Object> holder = info.Holder();
  ALLOW_UNUSED_LOCAL(holder);

  SpeechSynthesisUtterance* impl = V8SpeechSynthesisUtterance::ToImpl(holder);

  ExceptionState exception_state(isolate, ExceptionState::kSetterContext, "SpeechSynthesisUtterance", "rate");

  // Prepare the value to be set.
  float cpp_value = NativeValueTraits<IDLFloat>::NativeValue(info.GetIsolate(), v8_value, exception_state);
  if (exception_state.HadException())
    return;

  impl->setRate(cpp_value);
}

static void PitchAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  SpeechSynthesisUtterance* impl = V8SpeechSynthesisUtterance::ToImpl(holder);

  V8SetReturnValue(info, impl->pitch());
}

static void PitchAttributeSetter(
    v8::Local<v8::Value> v8_value, const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Isolate* isolate = info.GetIsolate();
  ALLOW_UNUSED_LOCAL(isolate);

  v8::Local<v8::Object> holder = info.Holder();
  ALLOW_UNUSED_LOCAL(holder);

  SpeechSynthesisUtterance* impl = V8SpeechSynthesisUtterance::ToImpl(holder);

  ExceptionState exception_state(isolate, ExceptionState::kSetterContext, "SpeechSynthesisUtterance", "pitch");

  // Prepare the value to be set.
  float cpp_value = NativeValueTraits<IDLFloat>::NativeValue(info.GetIsolate(), v8_value, exception_state);
  if (exception_state.HadException())
    return;

  impl->setPitch(cpp_value);
}

static void OnstartAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  SpeechSynthesisUtterance* impl = V8SpeechSynthesisUtterance::ToImpl(holder);

  EventListener* cpp_value(WTF::GetPtr(impl->onstart()));

  V8SetReturnValue(info, JSEventHandler::AsV8Value(info.GetIsolate(), impl, cpp_value));
}

static void OnstartAttributeSetter(
    v8::Local<v8::Value> v8_value, const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Isolate* isolate = info.GetIsolate();
  ALLOW_UNUSED_LOCAL(isolate);

  v8::Local<v8::Object> holder = info.Holder();
  ALLOW_UNUSED_LOCAL(holder);

  SpeechSynthesisUtterance* impl = V8SpeechSynthesisUtterance::ToImpl(holder);

  // Prepare the value to be set.

  impl->setOnstart(JSEventHandler::CreateOrNull(v8_value, JSEventHandler::HandlerType::kEventHandler));
}

static void OnendAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  SpeechSynthesisUtterance* impl = V8SpeechSynthesisUtterance::ToImpl(holder);

  EventListener* cpp_value(WTF::GetPtr(impl->onend()));

  V8SetReturnValue(info, JSEventHandler::AsV8Value(info.GetIsolate(), impl, cpp_value));
}

static void OnendAttributeSetter(
    v8::Local<v8::Value> v8_value, const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Isolate* isolate = info.GetIsolate();
  ALLOW_UNUSED_LOCAL(isolate);

  v8::Local<v8::Object> holder = info.Holder();
  ALLOW_UNUSED_LOCAL(holder);

  SpeechSynthesisUtterance* impl = V8SpeechSynthesisUtterance::ToImpl(holder);

  // Prepare the value to be set.

  impl->setOnend(JSEventHandler::CreateOrNull(v8_value, JSEventHandler::HandlerType::kEventHandler));
}

static void OnerrorAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  SpeechSynthesisUtterance* impl = V8SpeechSynthesisUtterance::ToImpl(holder);

  EventListener* cpp_value(WTF::GetPtr(impl->onerror()));

  V8SetReturnValue(info, JSEventHandler::AsV8Value(info.GetIsolate(), impl, cpp_value));
}

static void OnerrorAttributeSetter(
    v8::Local<v8::Value> v8_value, const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Isolate* isolate = info.GetIsolate();
  ALLOW_UNUSED_LOCAL(isolate);

  v8::Local<v8::Object> holder = info.Holder();
  ALLOW_UNUSED_LOCAL(holder);

  SpeechSynthesisUtterance* impl = V8SpeechSynthesisUtterance::ToImpl(holder);

  // Prepare the value to be set.

  impl->setOnerror(JSEventHandler::CreateOrNull(v8_value, JSEventHandler::HandlerType::kOnErrorEventHandler));
}

static void OnpauseAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  SpeechSynthesisUtterance* impl = V8SpeechSynthesisUtterance::ToImpl(holder);

  EventListener* cpp_value(WTF::GetPtr(impl->onpause()));

  V8SetReturnValue(info, JSEventHandler::AsV8Value(info.GetIsolate(), impl, cpp_value));
}

static void OnpauseAttributeSetter(
    v8::Local<v8::Value> v8_value, const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Isolate* isolate = info.GetIsolate();
  ALLOW_UNUSED_LOCAL(isolate);

  v8::Local<v8::Object> holder = info.Holder();
  ALLOW_UNUSED_LOCAL(holder);

  SpeechSynthesisUtterance* impl = V8SpeechSynthesisUtterance::ToImpl(holder);

  // Prepare the value to be set.

  impl->setOnpause(JSEventHandler::CreateOrNull(v8_value, JSEventHandler::HandlerType::kEventHandler));
}

static void OnresumeAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  SpeechSynthesisUtterance* impl = V8SpeechSynthesisUtterance::ToImpl(holder);

  EventListener* cpp_value(WTF::GetPtr(impl->onresume()));

  V8SetReturnValue(info, JSEventHandler::AsV8Value(info.GetIsolate(), impl, cpp_value));
}

static void OnresumeAttributeSetter(
    v8::Local<v8::Value> v8_value, const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Isolate* isolate = info.GetIsolate();
  ALLOW_UNUSED_LOCAL(isolate);

  v8::Local<v8::Object> holder = info.Holder();
  ALLOW_UNUSED_LOCAL(holder);

  SpeechSynthesisUtterance* impl = V8SpeechSynthesisUtterance::ToImpl(holder);

  // Prepare the value to be set.

  impl->setOnresume(JSEventHandler::CreateOrNull(v8_value, JSEventHandler::HandlerType::kEventHandler));
}

static void OnmarkAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  SpeechSynthesisUtterance* impl = V8SpeechSynthesisUtterance::ToImpl(holder);

  EventListener* cpp_value(WTF::GetPtr(impl->onmark()));

  V8SetReturnValue(info, JSEventHandler::AsV8Value(info.GetIsolate(), impl, cpp_value));
}

static void OnmarkAttributeSetter(
    v8::Local<v8::Value> v8_value, const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Isolate* isolate = info.GetIsolate();
  ALLOW_UNUSED_LOCAL(isolate);

  v8::Local<v8::Object> holder = info.Holder();
  ALLOW_UNUSED_LOCAL(holder);

  SpeechSynthesisUtterance* impl = V8SpeechSynthesisUtterance::ToImpl(holder);

  // Prepare the value to be set.

  impl->setOnmark(JSEventHandler::CreateOrNull(v8_value, JSEventHandler::HandlerType::kEventHandler));
}

static void OnboundaryAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  SpeechSynthesisUtterance* impl = V8SpeechSynthesisUtterance::ToImpl(holder);

  EventListener* cpp_value(WTF::GetPtr(impl->onboundary()));

  V8SetReturnValue(info, JSEventHandler::AsV8Value(info.GetIsolate(), impl, cpp_value));
}

static void OnboundaryAttributeSetter(
    v8::Local<v8::Value> v8_value, const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Isolate* isolate = info.GetIsolate();
  ALLOW_UNUSED_LOCAL(isolate);

  v8::Local<v8::Object> holder = info.Holder();
  ALLOW_UNUSED_LOCAL(holder);

  SpeechSynthesisUtterance* impl = V8SpeechSynthesisUtterance::ToImpl(holder);

  // Prepare the value to be set.

  impl->setOnboundary(JSEventHandler::CreateOrNull(v8_value, JSEventHandler::HandlerType::kEventHandler));
}

static void Constructor(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_SpeechSynthesisUtterance_ConstructorCallback");

  V8StringResource<> text;
  if (!info[0]->IsUndefined()) {
    text = info[0];
    if (!text.Prepare())
      return;
  } else {
    text = nullptr;
  }

  ExecutionContext* execution_context = ToExecutionContext(
      info.NewTarget().As<v8::Object>()->CreationContext());
  SpeechSynthesisUtterance* impl = SpeechSynthesisUtterance::Create(execution_context, text);
  v8::Local<v8::Object> wrapper = info.Holder();
  wrapper = impl->AssociateWithWrapper(info.GetIsolate(), V8SpeechSynthesisUtterance::GetWrapperTypeInfo(), wrapper);
  V8SetReturnValue(info, wrapper);
}

MODULES_EXPORT void ConstructorCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_SpeechSynthesisUtterance_Constructor");

  if (!info.IsConstructCall()) {
    V8ThrowException::ThrowTypeError(
        info.GetIsolate(),
        ExceptionMessages::ConstructorNotCallableAsFunction("SpeechSynthesisUtterance"));
    return;
  }

  if (ConstructorMode::Current(info.GetIsolate()) == ConstructorMode::kWrapExistingObject) {
    V8SetReturnValue(info, info.Holder());
    return;
  }

  speech_synthesis_utterance_v8_internal::Constructor(info);
}

}  // namespace speech_synthesis_utterance_v8_internal

void V8SpeechSynthesisUtterance::TextAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_SpeechSynthesisUtterance_text_Getter");

  speech_synthesis_utterance_v8_internal::TextAttributeGetter(info);
}

void V8SpeechSynthesisUtterance::TextAttributeSetterCallback(
    const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_SpeechSynthesisUtterance_text_Setter");

  v8::Local<v8::Value> v8_value = info[0];

  speech_synthesis_utterance_v8_internal::TextAttributeSetter(v8_value, info);
}

void V8SpeechSynthesisUtterance::LangAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_SpeechSynthesisUtterance_lang_Getter");

  speech_synthesis_utterance_v8_internal::LangAttributeGetter(info);
}

void V8SpeechSynthesisUtterance::LangAttributeSetterCallback(
    const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_SpeechSynthesisUtterance_lang_Setter");

  v8::Local<v8::Value> v8_value = info[0];

  speech_synthesis_utterance_v8_internal::LangAttributeSetter(v8_value, info);
}

void V8SpeechSynthesisUtterance::VoiceAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_SpeechSynthesisUtterance_voice_Getter");

  speech_synthesis_utterance_v8_internal::VoiceAttributeGetter(info);
}

void V8SpeechSynthesisUtterance::VoiceAttributeSetterCallback(
    const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_SpeechSynthesisUtterance_voice_Setter");

  v8::Local<v8::Value> v8_value = info[0];

  speech_synthesis_utterance_v8_internal::VoiceAttributeSetter(v8_value, info);
}

void V8SpeechSynthesisUtterance::VolumeAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_SpeechSynthesisUtterance_volume_Getter");

  speech_synthesis_utterance_v8_internal::VolumeAttributeGetter(info);
}

void V8SpeechSynthesisUtterance::VolumeAttributeSetterCallback(
    const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_SpeechSynthesisUtterance_volume_Setter");

  v8::Local<v8::Value> v8_value = info[0];

  speech_synthesis_utterance_v8_internal::VolumeAttributeSetter(v8_value, info);
}

void V8SpeechSynthesisUtterance::RateAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_SpeechSynthesisUtterance_rate_Getter");

  speech_synthesis_utterance_v8_internal::RateAttributeGetter(info);
}

void V8SpeechSynthesisUtterance::RateAttributeSetterCallback(
    const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_SpeechSynthesisUtterance_rate_Setter");

  v8::Local<v8::Value> v8_value = info[0];

  speech_synthesis_utterance_v8_internal::RateAttributeSetter(v8_value, info);
}

void V8SpeechSynthesisUtterance::PitchAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_SpeechSynthesisUtterance_pitch_Getter");

  speech_synthesis_utterance_v8_internal::PitchAttributeGetter(info);
}

void V8SpeechSynthesisUtterance::PitchAttributeSetterCallback(
    const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_SpeechSynthesisUtterance_pitch_Setter");

  v8::Local<v8::Value> v8_value = info[0];

  speech_synthesis_utterance_v8_internal::PitchAttributeSetter(v8_value, info);
}

void V8SpeechSynthesisUtterance::OnstartAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_SpeechSynthesisUtterance_onstart_Getter");

  speech_synthesis_utterance_v8_internal::OnstartAttributeGetter(info);
}

void V8SpeechSynthesisUtterance::OnstartAttributeSetterCallback(
    const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_SpeechSynthesisUtterance_onstart_Setter");

  v8::Local<v8::Value> v8_value = info[0];

  speech_synthesis_utterance_v8_internal::OnstartAttributeSetter(v8_value, info);
}

void V8SpeechSynthesisUtterance::OnendAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_SpeechSynthesisUtterance_onend_Getter");

  speech_synthesis_utterance_v8_internal::OnendAttributeGetter(info);
}

void V8SpeechSynthesisUtterance::OnendAttributeSetterCallback(
    const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_SpeechSynthesisUtterance_onend_Setter");

  v8::Local<v8::Value> v8_value = info[0];

  speech_synthesis_utterance_v8_internal::OnendAttributeSetter(v8_value, info);
}

void V8SpeechSynthesisUtterance::OnerrorAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_SpeechSynthesisUtterance_onerror_Getter");

  speech_synthesis_utterance_v8_internal::OnerrorAttributeGetter(info);
}

void V8SpeechSynthesisUtterance::OnerrorAttributeSetterCallback(
    const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_SpeechSynthesisUtterance_onerror_Setter");

  v8::Local<v8::Value> v8_value = info[0];

  speech_synthesis_utterance_v8_internal::OnerrorAttributeSetter(v8_value, info);
}

void V8SpeechSynthesisUtterance::OnpauseAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_SpeechSynthesisUtterance_onpause_Getter");

  speech_synthesis_utterance_v8_internal::OnpauseAttributeGetter(info);
}

void V8SpeechSynthesisUtterance::OnpauseAttributeSetterCallback(
    const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_SpeechSynthesisUtterance_onpause_Setter");

  v8::Local<v8::Value> v8_value = info[0];

  speech_synthesis_utterance_v8_internal::OnpauseAttributeSetter(v8_value, info);
}

void V8SpeechSynthesisUtterance::OnresumeAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_SpeechSynthesisUtterance_onresume_Getter");

  speech_synthesis_utterance_v8_internal::OnresumeAttributeGetter(info);
}

void V8SpeechSynthesisUtterance::OnresumeAttributeSetterCallback(
    const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_SpeechSynthesisUtterance_onresume_Setter");

  v8::Local<v8::Value> v8_value = info[0];

  speech_synthesis_utterance_v8_internal::OnresumeAttributeSetter(v8_value, info);
}

void V8SpeechSynthesisUtterance::OnmarkAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_SpeechSynthesisUtterance_onmark_Getter");

  speech_synthesis_utterance_v8_internal::OnmarkAttributeGetter(info);
}

void V8SpeechSynthesisUtterance::OnmarkAttributeSetterCallback(
    const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_SpeechSynthesisUtterance_onmark_Setter");

  v8::Local<v8::Value> v8_value = info[0];

  speech_synthesis_utterance_v8_internal::OnmarkAttributeSetter(v8_value, info);
}

void V8SpeechSynthesisUtterance::OnboundaryAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_SpeechSynthesisUtterance_onboundary_Getter");

  speech_synthesis_utterance_v8_internal::OnboundaryAttributeGetter(info);
}

void V8SpeechSynthesisUtterance::OnboundaryAttributeSetterCallback(
    const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_SpeechSynthesisUtterance_onboundary_Setter");

  v8::Local<v8::Value> v8_value = info[0];

  speech_synthesis_utterance_v8_internal::OnboundaryAttributeSetter(v8_value, info);
}

static constexpr V8DOMConfiguration::AccessorConfiguration kV8SpeechSynthesisUtteranceAccessors[] = {
    { "text", V8SpeechSynthesisUtterance::TextAttributeGetterCallback, V8SpeechSynthesisUtterance::TextAttributeSetterCallback, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
    { "lang", V8SpeechSynthesisUtterance::LangAttributeGetterCallback, V8SpeechSynthesisUtterance::LangAttributeSetterCallback, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
    { "voice", V8SpeechSynthesisUtterance::VoiceAttributeGetterCallback, V8SpeechSynthesisUtterance::VoiceAttributeSetterCallback, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
    { "volume", V8SpeechSynthesisUtterance::VolumeAttributeGetterCallback, V8SpeechSynthesisUtterance::VolumeAttributeSetterCallback, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
    { "rate", V8SpeechSynthesisUtterance::RateAttributeGetterCallback, V8SpeechSynthesisUtterance::RateAttributeSetterCallback, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
    { "pitch", V8SpeechSynthesisUtterance::PitchAttributeGetterCallback, V8SpeechSynthesisUtterance::PitchAttributeSetterCallback, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
    { "onstart", V8SpeechSynthesisUtterance::OnstartAttributeGetterCallback, V8SpeechSynthesisUtterance::OnstartAttributeSetterCallback, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
    { "onend", V8SpeechSynthesisUtterance::OnendAttributeGetterCallback, V8SpeechSynthesisUtterance::OnendAttributeSetterCallback, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
    { "onerror", V8SpeechSynthesisUtterance::OnerrorAttributeGetterCallback, V8SpeechSynthesisUtterance::OnerrorAttributeSetterCallback, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
    { "onpause", V8SpeechSynthesisUtterance::OnpauseAttributeGetterCallback, V8SpeechSynthesisUtterance::OnpauseAttributeSetterCallback, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
    { "onresume", V8SpeechSynthesisUtterance::OnresumeAttributeGetterCallback, V8SpeechSynthesisUtterance::OnresumeAttributeSetterCallback, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
    { "onmark", V8SpeechSynthesisUtterance::OnmarkAttributeGetterCallback, V8SpeechSynthesisUtterance::OnmarkAttributeSetterCallback, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
    { "onboundary", V8SpeechSynthesisUtterance::OnboundaryAttributeGetterCallback, V8SpeechSynthesisUtterance::OnboundaryAttributeSetterCallback, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
};

static void InstallV8SpeechSynthesisUtteranceTemplate(
    v8::Isolate* isolate,
    const DOMWrapperWorld& world,
    v8::Local<v8::FunctionTemplate> interface_template) {
  // Initialize the interface object's template.
  V8DOMConfiguration::InitializeDOMInterfaceTemplate(isolate, interface_template, V8SpeechSynthesisUtterance::GetWrapperTypeInfo()->interface_name, V8EventTarget::DomTemplate(isolate, world), V8SpeechSynthesisUtterance::kInternalFieldCount);
  interface_template->SetCallHandler(speech_synthesis_utterance_v8_internal::ConstructorCallback);
  interface_template->SetLength(0);

  if (!RuntimeEnabledFeatures::ScriptedSpeechSynthesisEnabled()) {
    return;
  }

  v8::Local<v8::Signature> signature = v8::Signature::New(isolate, interface_template);
  ALLOW_UNUSED_LOCAL(signature);
  v8::Local<v8::ObjectTemplate> instance_template = interface_template->InstanceTemplate();
  ALLOW_UNUSED_LOCAL(instance_template);
  v8::Local<v8::ObjectTemplate> prototype_template = interface_template->PrototypeTemplate();
  ALLOW_UNUSED_LOCAL(prototype_template);

  // Register IDL constants, attributes and operations.
  V8DOMConfiguration::InstallAccessors(
      isolate, world, instance_template, prototype_template, interface_template,
      signature, kV8SpeechSynthesisUtteranceAccessors, base::size(kV8SpeechSynthesisUtteranceAccessors));

  // Custom signature

  V8SpeechSynthesisUtterance::InstallRuntimeEnabledFeaturesOnTemplate(
      isolate, world, interface_template);
}

void V8SpeechSynthesisUtterance::InstallRuntimeEnabledFeaturesOnTemplate(
    v8::Isolate* isolate,
    const DOMWrapperWorld& world,
    v8::Local<v8::FunctionTemplate> interface_template) {
  if (!RuntimeEnabledFeatures::ScriptedSpeechSynthesisEnabled()) {
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

v8::Local<v8::FunctionTemplate> V8SpeechSynthesisUtterance::DomTemplate(
    v8::Isolate* isolate, const DOMWrapperWorld& world) {
  return V8DOMConfiguration::DomClassTemplate(
      isolate, world, const_cast<WrapperTypeInfo*>(V8SpeechSynthesisUtterance::GetWrapperTypeInfo()),
      InstallV8SpeechSynthesisUtteranceTemplate);
}

bool V8SpeechSynthesisUtterance::HasInstance(v8::Local<v8::Value> v8_value, v8::Isolate* isolate) {
  return V8PerIsolateData::From(isolate)->HasInstance(V8SpeechSynthesisUtterance::GetWrapperTypeInfo(), v8_value);
}

v8::Local<v8::Object> V8SpeechSynthesisUtterance::FindInstanceInPrototypeChain(
    v8::Local<v8::Value> v8_value, v8::Isolate* isolate) {
  return V8PerIsolateData::From(isolate)->FindInstanceInPrototypeChain(
      V8SpeechSynthesisUtterance::GetWrapperTypeInfo(), v8_value);
}

SpeechSynthesisUtterance* V8SpeechSynthesisUtterance::ToImplWithTypeCheck(
    v8::Isolate* isolate, v8::Local<v8::Value> value) {
  return HasInstance(value, isolate) ? ToImpl(v8::Local<v8::Object>::Cast(value)) : nullptr;
}

SpeechSynthesisUtterance* NativeValueTraits<SpeechSynthesisUtterance>::NativeValue(
    v8::Isolate* isolate, v8::Local<v8::Value> value, ExceptionState& exception_state) {
  SpeechSynthesisUtterance* native_value = V8SpeechSynthesisUtterance::ToImplWithTypeCheck(isolate, value);
  if (!native_value) {
    exception_state.ThrowTypeError(ExceptionMessages::FailedToConvertJSValue(
        "SpeechSynthesisUtterance"));
  }
  return native_value;
}

}  // namespace blink
