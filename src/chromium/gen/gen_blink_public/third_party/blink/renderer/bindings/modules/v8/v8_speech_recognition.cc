// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated from the Jinja2 template
// third_party/blink/renderer/bindings/templates/interface.cc.tmpl
// by the script code_generator_v8.py.
// DO NOT MODIFY!

// clang-format off
#include "third_party/blink/renderer/bindings/modules/v8/v8_speech_recognition.h"

#include <algorithm>

#include "base/memory/scoped_refptr.h"
#include "third_party/blink/renderer/bindings/core/v8/idl_types.h"
#include "third_party/blink/renderer/bindings/core/v8/js_event_handler.h"
#include "third_party/blink/renderer/bindings/core/v8/native_value_traits_impl.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_dom_configuration.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_speech_grammar_list.h"
#include "third_party/blink/renderer/core/execution_context/execution_context.h"
#include "third_party/blink/renderer/core/frame/local_dom_window.h"
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
const WrapperTypeInfo v8_speech_recognition_wrapper_type_info = {
    gin::kEmbedderBlink,
    V8SpeechRecognition::DomTemplate,
    nullptr,
    "SpeechRecognition",
    V8EventTarget::GetWrapperTypeInfo(),
    WrapperTypeInfo::kWrapperTypeObjectPrototype,
    WrapperTypeInfo::kObjectClassId,
    WrapperTypeInfo::kInheritFromActiveScriptWrappable,
};
#if defined(COMPONENT_BUILD) && defined(WIN32) && defined(__clang__)
#pragma clang diagnostic pop
#endif

// This static member must be declared by DEFINE_WRAPPERTYPEINFO in SpeechRecognition.h.
// For details, see the comment of DEFINE_WRAPPERTYPEINFO in
// platform/bindings/ScriptWrappable.h.
const WrapperTypeInfo& SpeechRecognition::wrapper_type_info_ = v8_speech_recognition_wrapper_type_info;

// [ActiveScriptWrappable]
static_assert(
    std::is_base_of<ActiveScriptWrappableBase, SpeechRecognition>::value,
    "SpeechRecognition does not inherit from ActiveScriptWrappable<>, but specifying "
    "[ActiveScriptWrappable] extended attribute in the IDL file.  "
    "Be consistent.");
static_assert(
    !std::is_same<decltype(&SpeechRecognition::HasPendingActivity),
                  decltype(&ScriptWrappable::HasPendingActivity)>::value,
    "SpeechRecognition is not overriding hasPendingActivity(), but is specifying "
    "[ActiveScriptWrappable] extended attribute in the IDL file.  "
    "Be consistent.");

namespace speech_recognition_v8_internal {

static void GrammarsAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  SpeechRecognition* impl = V8SpeechRecognition::ToImpl(holder);

  V8SetReturnValueFast(info, WTF::GetPtr(impl->grammars()), impl);
}

static void GrammarsAttributeSetter(
    v8::Local<v8::Value> v8_value, const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Isolate* isolate = info.GetIsolate();
  ALLOW_UNUSED_LOCAL(isolate);

  v8::Local<v8::Object> holder = info.Holder();
  ALLOW_UNUSED_LOCAL(holder);

  SpeechRecognition* impl = V8SpeechRecognition::ToImpl(holder);

  ExceptionState exception_state(isolate, ExceptionState::kSetterContext, "SpeechRecognition", "grammars");

  // Prepare the value to be set.
  SpeechGrammarList* cpp_value = V8SpeechGrammarList::ToImplWithTypeCheck(info.GetIsolate(), v8_value);

  // Type check per: http://heycam.github.io/webidl/#es-interface
  if (!cpp_value) {
    exception_state.ThrowTypeError("The provided value is not of type 'SpeechGrammarList'.");
    return;
  }

  impl->setGrammars(cpp_value);
}

static void LangAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  SpeechRecognition* impl = V8SpeechRecognition::ToImpl(holder);

  V8SetReturnValueString(info, impl->lang(), info.GetIsolate());
}

static void LangAttributeSetter(
    v8::Local<v8::Value> v8_value, const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Isolate* isolate = info.GetIsolate();
  ALLOW_UNUSED_LOCAL(isolate);

  v8::Local<v8::Object> holder = info.Holder();
  ALLOW_UNUSED_LOCAL(holder);

  SpeechRecognition* impl = V8SpeechRecognition::ToImpl(holder);

  // Prepare the value to be set.
  V8StringResource<> cpp_value = v8_value;
  if (!cpp_value.Prepare())
    return;

  impl->setLang(cpp_value);
}

static void ContinuousAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  SpeechRecognition* impl = V8SpeechRecognition::ToImpl(holder);

  V8SetReturnValueBool(info, impl->continuous());
}

static void ContinuousAttributeSetter(
    v8::Local<v8::Value> v8_value, const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Isolate* isolate = info.GetIsolate();
  ALLOW_UNUSED_LOCAL(isolate);

  v8::Local<v8::Object> holder = info.Holder();
  ALLOW_UNUSED_LOCAL(holder);

  SpeechRecognition* impl = V8SpeechRecognition::ToImpl(holder);

  ExceptionState exception_state(isolate, ExceptionState::kSetterContext, "SpeechRecognition", "continuous");

  // Prepare the value to be set.
  bool cpp_value = NativeValueTraits<IDLBoolean>::NativeValue(info.GetIsolate(), v8_value, exception_state);
  if (exception_state.HadException())
    return;

  impl->setContinuous(cpp_value);
}

static void InterimResultsAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  SpeechRecognition* impl = V8SpeechRecognition::ToImpl(holder);

  V8SetReturnValueBool(info, impl->interimResults());
}

static void InterimResultsAttributeSetter(
    v8::Local<v8::Value> v8_value, const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Isolate* isolate = info.GetIsolate();
  ALLOW_UNUSED_LOCAL(isolate);

  v8::Local<v8::Object> holder = info.Holder();
  ALLOW_UNUSED_LOCAL(holder);

  SpeechRecognition* impl = V8SpeechRecognition::ToImpl(holder);

  ExceptionState exception_state(isolate, ExceptionState::kSetterContext, "SpeechRecognition", "interimResults");

  // Prepare the value to be set.
  bool cpp_value = NativeValueTraits<IDLBoolean>::NativeValue(info.GetIsolate(), v8_value, exception_state);
  if (exception_state.HadException())
    return;

  impl->setInterimResults(cpp_value);
}

static void MaxAlternativesAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  SpeechRecognition* impl = V8SpeechRecognition::ToImpl(holder);

  V8SetReturnValueUnsigned(info, impl->maxAlternatives());
}

static void MaxAlternativesAttributeSetter(
    v8::Local<v8::Value> v8_value, const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Isolate* isolate = info.GetIsolate();
  ALLOW_UNUSED_LOCAL(isolate);

  v8::Local<v8::Object> holder = info.Holder();
  ALLOW_UNUSED_LOCAL(holder);

  SpeechRecognition* impl = V8SpeechRecognition::ToImpl(holder);

  ExceptionState exception_state(isolate, ExceptionState::kSetterContext, "SpeechRecognition", "maxAlternatives");

  // Prepare the value to be set.
  uint32_t cpp_value = NativeValueTraits<IDLUnsignedLong>::NativeValue(info.GetIsolate(), v8_value, exception_state);
  if (exception_state.HadException())
    return;

  impl->setMaxAlternatives(cpp_value);
}

static void OnaudiostartAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  SpeechRecognition* impl = V8SpeechRecognition::ToImpl(holder);

  EventListener* cpp_value(WTF::GetPtr(impl->onaudiostart()));

  V8SetReturnValue(info, JSEventHandler::AsV8Value(info.GetIsolate(), impl, cpp_value));
}

static void OnaudiostartAttributeSetter(
    v8::Local<v8::Value> v8_value, const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Isolate* isolate = info.GetIsolate();
  ALLOW_UNUSED_LOCAL(isolate);

  v8::Local<v8::Object> holder = info.Holder();
  ALLOW_UNUSED_LOCAL(holder);

  SpeechRecognition* impl = V8SpeechRecognition::ToImpl(holder);

  // Prepare the value to be set.

  impl->setOnaudiostart(JSEventHandler::CreateOrNull(v8_value, JSEventHandler::HandlerType::kEventHandler));
}

static void OnsoundstartAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  SpeechRecognition* impl = V8SpeechRecognition::ToImpl(holder);

  EventListener* cpp_value(WTF::GetPtr(impl->onsoundstart()));

  V8SetReturnValue(info, JSEventHandler::AsV8Value(info.GetIsolate(), impl, cpp_value));
}

static void OnsoundstartAttributeSetter(
    v8::Local<v8::Value> v8_value, const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Isolate* isolate = info.GetIsolate();
  ALLOW_UNUSED_LOCAL(isolate);

  v8::Local<v8::Object> holder = info.Holder();
  ALLOW_UNUSED_LOCAL(holder);

  SpeechRecognition* impl = V8SpeechRecognition::ToImpl(holder);

  // Prepare the value to be set.

  impl->setOnsoundstart(JSEventHandler::CreateOrNull(v8_value, JSEventHandler::HandlerType::kEventHandler));
}

static void OnspeechstartAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  SpeechRecognition* impl = V8SpeechRecognition::ToImpl(holder);

  EventListener* cpp_value(WTF::GetPtr(impl->onspeechstart()));

  V8SetReturnValue(info, JSEventHandler::AsV8Value(info.GetIsolate(), impl, cpp_value));
}

static void OnspeechstartAttributeSetter(
    v8::Local<v8::Value> v8_value, const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Isolate* isolate = info.GetIsolate();
  ALLOW_UNUSED_LOCAL(isolate);

  v8::Local<v8::Object> holder = info.Holder();
  ALLOW_UNUSED_LOCAL(holder);

  SpeechRecognition* impl = V8SpeechRecognition::ToImpl(holder);

  // Prepare the value to be set.

  impl->setOnspeechstart(JSEventHandler::CreateOrNull(v8_value, JSEventHandler::HandlerType::kEventHandler));
}

static void OnspeechendAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  SpeechRecognition* impl = V8SpeechRecognition::ToImpl(holder);

  EventListener* cpp_value(WTF::GetPtr(impl->onspeechend()));

  V8SetReturnValue(info, JSEventHandler::AsV8Value(info.GetIsolate(), impl, cpp_value));
}

static void OnspeechendAttributeSetter(
    v8::Local<v8::Value> v8_value, const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Isolate* isolate = info.GetIsolate();
  ALLOW_UNUSED_LOCAL(isolate);

  v8::Local<v8::Object> holder = info.Holder();
  ALLOW_UNUSED_LOCAL(holder);

  SpeechRecognition* impl = V8SpeechRecognition::ToImpl(holder);

  // Prepare the value to be set.

  impl->setOnspeechend(JSEventHandler::CreateOrNull(v8_value, JSEventHandler::HandlerType::kEventHandler));
}

static void OnsoundendAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  SpeechRecognition* impl = V8SpeechRecognition::ToImpl(holder);

  EventListener* cpp_value(WTF::GetPtr(impl->onsoundend()));

  V8SetReturnValue(info, JSEventHandler::AsV8Value(info.GetIsolate(), impl, cpp_value));
}

static void OnsoundendAttributeSetter(
    v8::Local<v8::Value> v8_value, const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Isolate* isolate = info.GetIsolate();
  ALLOW_UNUSED_LOCAL(isolate);

  v8::Local<v8::Object> holder = info.Holder();
  ALLOW_UNUSED_LOCAL(holder);

  SpeechRecognition* impl = V8SpeechRecognition::ToImpl(holder);

  // Prepare the value to be set.

  impl->setOnsoundend(JSEventHandler::CreateOrNull(v8_value, JSEventHandler::HandlerType::kEventHandler));
}

static void OnaudioendAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  SpeechRecognition* impl = V8SpeechRecognition::ToImpl(holder);

  EventListener* cpp_value(WTF::GetPtr(impl->onaudioend()));

  V8SetReturnValue(info, JSEventHandler::AsV8Value(info.GetIsolate(), impl, cpp_value));
}

static void OnaudioendAttributeSetter(
    v8::Local<v8::Value> v8_value, const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Isolate* isolate = info.GetIsolate();
  ALLOW_UNUSED_LOCAL(isolate);

  v8::Local<v8::Object> holder = info.Holder();
  ALLOW_UNUSED_LOCAL(holder);

  SpeechRecognition* impl = V8SpeechRecognition::ToImpl(holder);

  // Prepare the value to be set.

  impl->setOnaudioend(JSEventHandler::CreateOrNull(v8_value, JSEventHandler::HandlerType::kEventHandler));
}

static void OnresultAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  SpeechRecognition* impl = V8SpeechRecognition::ToImpl(holder);

  EventListener* cpp_value(WTF::GetPtr(impl->onresult()));

  V8SetReturnValue(info, JSEventHandler::AsV8Value(info.GetIsolate(), impl, cpp_value));
}

static void OnresultAttributeSetter(
    v8::Local<v8::Value> v8_value, const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Isolate* isolate = info.GetIsolate();
  ALLOW_UNUSED_LOCAL(isolate);

  v8::Local<v8::Object> holder = info.Holder();
  ALLOW_UNUSED_LOCAL(holder);

  SpeechRecognition* impl = V8SpeechRecognition::ToImpl(holder);

  // Prepare the value to be set.

  impl->setOnresult(JSEventHandler::CreateOrNull(v8_value, JSEventHandler::HandlerType::kEventHandler));
}

static void OnnomatchAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  SpeechRecognition* impl = V8SpeechRecognition::ToImpl(holder);

  EventListener* cpp_value(WTF::GetPtr(impl->onnomatch()));

  V8SetReturnValue(info, JSEventHandler::AsV8Value(info.GetIsolate(), impl, cpp_value));
}

static void OnnomatchAttributeSetter(
    v8::Local<v8::Value> v8_value, const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Isolate* isolate = info.GetIsolate();
  ALLOW_UNUSED_LOCAL(isolate);

  v8::Local<v8::Object> holder = info.Holder();
  ALLOW_UNUSED_LOCAL(holder);

  SpeechRecognition* impl = V8SpeechRecognition::ToImpl(holder);

  // Prepare the value to be set.

  impl->setOnnomatch(JSEventHandler::CreateOrNull(v8_value, JSEventHandler::HandlerType::kEventHandler));
}

static void OnerrorAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  SpeechRecognition* impl = V8SpeechRecognition::ToImpl(holder);

  EventListener* cpp_value(WTF::GetPtr(impl->onerror()));

  V8SetReturnValue(info, JSEventHandler::AsV8Value(info.GetIsolate(), impl, cpp_value));
}

static void OnerrorAttributeSetter(
    v8::Local<v8::Value> v8_value, const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Isolate* isolate = info.GetIsolate();
  ALLOW_UNUSED_LOCAL(isolate);

  v8::Local<v8::Object> holder = info.Holder();
  ALLOW_UNUSED_LOCAL(holder);

  SpeechRecognition* impl = V8SpeechRecognition::ToImpl(holder);

  // Prepare the value to be set.

  impl->setOnerror(JSEventHandler::CreateOrNull(v8_value, JSEventHandler::HandlerType::kOnErrorEventHandler));
}

static void OnstartAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  SpeechRecognition* impl = V8SpeechRecognition::ToImpl(holder);

  EventListener* cpp_value(WTF::GetPtr(impl->onstart()));

  V8SetReturnValue(info, JSEventHandler::AsV8Value(info.GetIsolate(), impl, cpp_value));
}

static void OnstartAttributeSetter(
    v8::Local<v8::Value> v8_value, const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Isolate* isolate = info.GetIsolate();
  ALLOW_UNUSED_LOCAL(isolate);

  v8::Local<v8::Object> holder = info.Holder();
  ALLOW_UNUSED_LOCAL(holder);

  SpeechRecognition* impl = V8SpeechRecognition::ToImpl(holder);

  // Prepare the value to be set.

  impl->setOnstart(JSEventHandler::CreateOrNull(v8_value, JSEventHandler::HandlerType::kEventHandler));
}

static void OnendAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  SpeechRecognition* impl = V8SpeechRecognition::ToImpl(holder);

  EventListener* cpp_value(WTF::GetPtr(impl->onend()));

  V8SetReturnValue(info, JSEventHandler::AsV8Value(info.GetIsolate(), impl, cpp_value));
}

static void OnendAttributeSetter(
    v8::Local<v8::Value> v8_value, const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Isolate* isolate = info.GetIsolate();
  ALLOW_UNUSED_LOCAL(isolate);

  v8::Local<v8::Object> holder = info.Holder();
  ALLOW_UNUSED_LOCAL(holder);

  SpeechRecognition* impl = V8SpeechRecognition::ToImpl(holder);

  // Prepare the value to be set.

  impl->setOnend(JSEventHandler::CreateOrNull(v8_value, JSEventHandler::HandlerType::kEventHandler));
}

static void StartMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exception_state(info.GetIsolate(), ExceptionState::kExecutionContext, "SpeechRecognition", "start");

  SpeechRecognition* impl = V8SpeechRecognition::ToImpl(info.Holder());

  impl->start(exception_state);
  if (exception_state.HadException()) {
    return;
  }
}

static void StopMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  SpeechRecognition* impl = V8SpeechRecognition::ToImpl(info.Holder());

  impl->stopFunction();
}

static void AbortMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  SpeechRecognition* impl = V8SpeechRecognition::ToImpl(info.Holder());

  impl->abort();
}

static void Constructor(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_SpeechRecognition_ConstructorCallback");

  ExecutionContext* execution_context = ToExecutionContext(
      info.NewTarget().As<v8::Object>()->CreationContext());
  SpeechRecognition* impl = SpeechRecognition::Create(execution_context);
  v8::Local<v8::Object> wrapper = info.Holder();
  wrapper = impl->AssociateWithWrapper(info.GetIsolate(), V8SpeechRecognition::GetWrapperTypeInfo(), wrapper);
  V8SetReturnValue(info, wrapper);
}

MODULES_EXPORT void ConstructorCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_SpeechRecognition_Constructor");

  if (!info.IsConstructCall()) {
    V8ThrowException::ThrowTypeError(
        info.GetIsolate(),
        ExceptionMessages::ConstructorNotCallableAsFunction("SpeechRecognition"));
    return;
  }

  if (ConstructorMode::Current(info.GetIsolate()) == ConstructorMode::kWrapExistingObject) {
    V8SetReturnValue(info, info.Holder());
    return;
  }

  speech_recognition_v8_internal::Constructor(info);
}

}  // namespace speech_recognition_v8_internal

void V8SpeechRecognition::GrammarsAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_SpeechRecognition_grammars_Getter");

  speech_recognition_v8_internal::GrammarsAttributeGetter(info);
}

void V8SpeechRecognition::GrammarsAttributeSetterCallback(
    const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_SpeechRecognition_grammars_Setter");

  v8::Local<v8::Value> v8_value = info[0];

  speech_recognition_v8_internal::GrammarsAttributeSetter(v8_value, info);
}

void V8SpeechRecognition::LangAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_SpeechRecognition_lang_Getter");

  speech_recognition_v8_internal::LangAttributeGetter(info);
}

void V8SpeechRecognition::LangAttributeSetterCallback(
    const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_SpeechRecognition_lang_Setter");

  v8::Local<v8::Value> v8_value = info[0];

  speech_recognition_v8_internal::LangAttributeSetter(v8_value, info);
}

void V8SpeechRecognition::ContinuousAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_SpeechRecognition_continuous_Getter");

  speech_recognition_v8_internal::ContinuousAttributeGetter(info);
}

void V8SpeechRecognition::ContinuousAttributeSetterCallback(
    const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_SpeechRecognition_continuous_Setter");

  v8::Local<v8::Value> v8_value = info[0];

  speech_recognition_v8_internal::ContinuousAttributeSetter(v8_value, info);
}

void V8SpeechRecognition::InterimResultsAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_SpeechRecognition_interimResults_Getter");

  speech_recognition_v8_internal::InterimResultsAttributeGetter(info);
}

void V8SpeechRecognition::InterimResultsAttributeSetterCallback(
    const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_SpeechRecognition_interimResults_Setter");

  v8::Local<v8::Value> v8_value = info[0];

  speech_recognition_v8_internal::InterimResultsAttributeSetter(v8_value, info);
}

void V8SpeechRecognition::MaxAlternativesAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_SpeechRecognition_maxAlternatives_Getter");

  speech_recognition_v8_internal::MaxAlternativesAttributeGetter(info);
}

void V8SpeechRecognition::MaxAlternativesAttributeSetterCallback(
    const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_SpeechRecognition_maxAlternatives_Setter");

  v8::Local<v8::Value> v8_value = info[0];

  speech_recognition_v8_internal::MaxAlternativesAttributeSetter(v8_value, info);
}

void V8SpeechRecognition::OnaudiostartAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_SpeechRecognition_onaudiostart_Getter");

  speech_recognition_v8_internal::OnaudiostartAttributeGetter(info);
}

void V8SpeechRecognition::OnaudiostartAttributeSetterCallback(
    const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_SpeechRecognition_onaudiostart_Setter");

  v8::Local<v8::Value> v8_value = info[0];

  speech_recognition_v8_internal::OnaudiostartAttributeSetter(v8_value, info);
}

void V8SpeechRecognition::OnsoundstartAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_SpeechRecognition_onsoundstart_Getter");

  speech_recognition_v8_internal::OnsoundstartAttributeGetter(info);
}

void V8SpeechRecognition::OnsoundstartAttributeSetterCallback(
    const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_SpeechRecognition_onsoundstart_Setter");

  v8::Local<v8::Value> v8_value = info[0];

  speech_recognition_v8_internal::OnsoundstartAttributeSetter(v8_value, info);
}

void V8SpeechRecognition::OnspeechstartAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_SpeechRecognition_onspeechstart_Getter");

  speech_recognition_v8_internal::OnspeechstartAttributeGetter(info);
}

void V8SpeechRecognition::OnspeechstartAttributeSetterCallback(
    const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_SpeechRecognition_onspeechstart_Setter");

  v8::Local<v8::Value> v8_value = info[0];

  speech_recognition_v8_internal::OnspeechstartAttributeSetter(v8_value, info);
}

void V8SpeechRecognition::OnspeechendAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_SpeechRecognition_onspeechend_Getter");

  speech_recognition_v8_internal::OnspeechendAttributeGetter(info);
}

void V8SpeechRecognition::OnspeechendAttributeSetterCallback(
    const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_SpeechRecognition_onspeechend_Setter");

  v8::Local<v8::Value> v8_value = info[0];

  speech_recognition_v8_internal::OnspeechendAttributeSetter(v8_value, info);
}

void V8SpeechRecognition::OnsoundendAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_SpeechRecognition_onsoundend_Getter");

  speech_recognition_v8_internal::OnsoundendAttributeGetter(info);
}

void V8SpeechRecognition::OnsoundendAttributeSetterCallback(
    const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_SpeechRecognition_onsoundend_Setter");

  v8::Local<v8::Value> v8_value = info[0];

  speech_recognition_v8_internal::OnsoundendAttributeSetter(v8_value, info);
}

void V8SpeechRecognition::OnaudioendAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_SpeechRecognition_onaudioend_Getter");

  speech_recognition_v8_internal::OnaudioendAttributeGetter(info);
}

void V8SpeechRecognition::OnaudioendAttributeSetterCallback(
    const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_SpeechRecognition_onaudioend_Setter");

  v8::Local<v8::Value> v8_value = info[0];

  speech_recognition_v8_internal::OnaudioendAttributeSetter(v8_value, info);
}

void V8SpeechRecognition::OnresultAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_SpeechRecognition_onresult_Getter");

  speech_recognition_v8_internal::OnresultAttributeGetter(info);
}

void V8SpeechRecognition::OnresultAttributeSetterCallback(
    const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_SpeechRecognition_onresult_Setter");

  v8::Local<v8::Value> v8_value = info[0];

  speech_recognition_v8_internal::OnresultAttributeSetter(v8_value, info);
}

void V8SpeechRecognition::OnnomatchAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_SpeechRecognition_onnomatch_Getter");

  speech_recognition_v8_internal::OnnomatchAttributeGetter(info);
}

void V8SpeechRecognition::OnnomatchAttributeSetterCallback(
    const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_SpeechRecognition_onnomatch_Setter");

  v8::Local<v8::Value> v8_value = info[0];

  speech_recognition_v8_internal::OnnomatchAttributeSetter(v8_value, info);
}

void V8SpeechRecognition::OnerrorAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_SpeechRecognition_onerror_Getter");

  speech_recognition_v8_internal::OnerrorAttributeGetter(info);
}

void V8SpeechRecognition::OnerrorAttributeSetterCallback(
    const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_SpeechRecognition_onerror_Setter");

  v8::Local<v8::Value> v8_value = info[0];

  speech_recognition_v8_internal::OnerrorAttributeSetter(v8_value, info);
}

void V8SpeechRecognition::OnstartAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_SpeechRecognition_onstart_Getter");

  speech_recognition_v8_internal::OnstartAttributeGetter(info);
}

void V8SpeechRecognition::OnstartAttributeSetterCallback(
    const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_SpeechRecognition_onstart_Setter");

  v8::Local<v8::Value> v8_value = info[0];

  speech_recognition_v8_internal::OnstartAttributeSetter(v8_value, info);
}

void V8SpeechRecognition::OnendAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_SpeechRecognition_onend_Getter");

  speech_recognition_v8_internal::OnendAttributeGetter(info);
}

void V8SpeechRecognition::OnendAttributeSetterCallback(
    const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_SpeechRecognition_onend_Setter");

  v8::Local<v8::Value> v8_value = info[0];

  speech_recognition_v8_internal::OnendAttributeSetter(v8_value, info);
}

void V8SpeechRecognition::StartMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_SpeechRecognition_start");

  ExecutionContext* execution_context_for_measurement = CurrentExecutionContext(info.GetIsolate());
  UseCounter::Count(execution_context_for_measurement, WebFeature::kV8SpeechRecognition_Start_Method);
  speech_recognition_v8_internal::StartMethod(info);
}

void V8SpeechRecognition::StopMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_SpeechRecognition_stop");

  speech_recognition_v8_internal::StopMethod(info);
}

void V8SpeechRecognition::AbortMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_SpeechRecognition_abort");

  speech_recognition_v8_internal::AbortMethod(info);
}

static constexpr V8DOMConfiguration::AccessorConfiguration kV8SpeechRecognitionAccessors[] = {
    { "grammars", V8SpeechRecognition::GrammarsAttributeGetterCallback, V8SpeechRecognition::GrammarsAttributeSetterCallback, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
    { "lang", V8SpeechRecognition::LangAttributeGetterCallback, V8SpeechRecognition::LangAttributeSetterCallback, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
    { "continuous", V8SpeechRecognition::ContinuousAttributeGetterCallback, V8SpeechRecognition::ContinuousAttributeSetterCallback, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
    { "interimResults", V8SpeechRecognition::InterimResultsAttributeGetterCallback, V8SpeechRecognition::InterimResultsAttributeSetterCallback, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
    { "maxAlternatives", V8SpeechRecognition::MaxAlternativesAttributeGetterCallback, V8SpeechRecognition::MaxAlternativesAttributeSetterCallback, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
    { "onaudiostart", V8SpeechRecognition::OnaudiostartAttributeGetterCallback, V8SpeechRecognition::OnaudiostartAttributeSetterCallback, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
    { "onsoundstart", V8SpeechRecognition::OnsoundstartAttributeGetterCallback, V8SpeechRecognition::OnsoundstartAttributeSetterCallback, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
    { "onspeechstart", V8SpeechRecognition::OnspeechstartAttributeGetterCallback, V8SpeechRecognition::OnspeechstartAttributeSetterCallback, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
    { "onspeechend", V8SpeechRecognition::OnspeechendAttributeGetterCallback, V8SpeechRecognition::OnspeechendAttributeSetterCallback, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
    { "onsoundend", V8SpeechRecognition::OnsoundendAttributeGetterCallback, V8SpeechRecognition::OnsoundendAttributeSetterCallback, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
    { "onaudioend", V8SpeechRecognition::OnaudioendAttributeGetterCallback, V8SpeechRecognition::OnaudioendAttributeSetterCallback, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
    { "onresult", V8SpeechRecognition::OnresultAttributeGetterCallback, V8SpeechRecognition::OnresultAttributeSetterCallback, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
    { "onnomatch", V8SpeechRecognition::OnnomatchAttributeGetterCallback, V8SpeechRecognition::OnnomatchAttributeSetterCallback, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
    { "onerror", V8SpeechRecognition::OnerrorAttributeGetterCallback, V8SpeechRecognition::OnerrorAttributeSetterCallback, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
    { "onstart", V8SpeechRecognition::OnstartAttributeGetterCallback, V8SpeechRecognition::OnstartAttributeSetterCallback, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
    { "onend", V8SpeechRecognition::OnendAttributeGetterCallback, V8SpeechRecognition::OnendAttributeSetterCallback, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
};

static constexpr V8DOMConfiguration::MethodConfiguration kV8SpeechRecognitionMethods[] = {
    {"start", V8SpeechRecognition::StartMethodCallback, 0, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"stop", V8SpeechRecognition::StopMethodCallback, 0, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"abort", V8SpeechRecognition::AbortMethodCallback, 0, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
};

static void InstallV8SpeechRecognitionTemplate(
    v8::Isolate* isolate,
    const DOMWrapperWorld& world,
    v8::Local<v8::FunctionTemplate> interface_template) {
  // Initialize the interface object's template.
  V8DOMConfiguration::InitializeDOMInterfaceTemplate(isolate, interface_template, V8SpeechRecognition::GetWrapperTypeInfo()->interface_name, V8EventTarget::DomTemplate(isolate, world), V8SpeechRecognition::kInternalFieldCount);
  interface_template->SetCallHandler(speech_recognition_v8_internal::ConstructorCallback);
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
      signature, kV8SpeechRecognitionAccessors, base::size(kV8SpeechRecognitionAccessors));
  V8DOMConfiguration::InstallMethods(
      isolate, world, instance_template, prototype_template, interface_template,
      signature, kV8SpeechRecognitionMethods, base::size(kV8SpeechRecognitionMethods));

  // Custom signature

  V8SpeechRecognition::InstallRuntimeEnabledFeaturesOnTemplate(
      isolate, world, interface_template);
}

void V8SpeechRecognition::InstallRuntimeEnabledFeaturesOnTemplate(
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

v8::Local<v8::FunctionTemplate> V8SpeechRecognition::DomTemplate(
    v8::Isolate* isolate, const DOMWrapperWorld& world) {
  return V8DOMConfiguration::DomClassTemplate(
      isolate, world, const_cast<WrapperTypeInfo*>(V8SpeechRecognition::GetWrapperTypeInfo()),
      InstallV8SpeechRecognitionTemplate);
}

bool V8SpeechRecognition::HasInstance(v8::Local<v8::Value> v8_value, v8::Isolate* isolate) {
  return V8PerIsolateData::From(isolate)->HasInstance(V8SpeechRecognition::GetWrapperTypeInfo(), v8_value);
}

v8::Local<v8::Object> V8SpeechRecognition::FindInstanceInPrototypeChain(
    v8::Local<v8::Value> v8_value, v8::Isolate* isolate) {
  return V8PerIsolateData::From(isolate)->FindInstanceInPrototypeChain(
      V8SpeechRecognition::GetWrapperTypeInfo(), v8_value);
}

SpeechRecognition* V8SpeechRecognition::ToImplWithTypeCheck(
    v8::Isolate* isolate, v8::Local<v8::Value> value) {
  return HasInstance(value, isolate) ? ToImpl(v8::Local<v8::Object>::Cast(value)) : nullptr;
}

SpeechRecognition* NativeValueTraits<SpeechRecognition>::NativeValue(
    v8::Isolate* isolate, v8::Local<v8::Value> value, ExceptionState& exception_state) {
  SpeechRecognition* native_value = V8SpeechRecognition::ToImplWithTypeCheck(isolate, value);
  if (!native_value) {
    exception_state.ThrowTypeError(ExceptionMessages::FailedToConvertJSValue(
        "SpeechRecognition"));
  }
  return native_value;
}

}  // namespace blink
