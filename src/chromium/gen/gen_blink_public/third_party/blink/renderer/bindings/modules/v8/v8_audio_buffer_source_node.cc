// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated from the Jinja2 template
// third_party/blink/renderer/bindings/templates/interface.cc.tmpl
// by the script code_generator_v8.py.
// DO NOT MODIFY!

// clang-format off
#include "third_party/blink/renderer/bindings/modules/v8/v8_audio_buffer_source_node.h"

#include <algorithm>

#include "base/memory/scoped_refptr.h"
#include "third_party/blink/renderer/bindings/core/v8/idl_types.h"
#include "third_party/blink/renderer/bindings/core/v8/native_value_traits_impl.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_dom_configuration.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_audio_buffer.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_audio_buffer_source_options.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_audio_param.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_base_audio_context.h"
#include "third_party/blink/renderer/core/execution_context/execution_context.h"
#include "third_party/blink/renderer/core/frame/local_dom_window.h"
#include "third_party/blink/renderer/core/frame/use_counter.h"
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
const WrapperTypeInfo v8_audio_buffer_source_node_wrapper_type_info = {
    gin::kEmbedderBlink,
    V8AudioBufferSourceNode::DomTemplate,
    nullptr,
    "AudioBufferSourceNode",
    V8AudioScheduledSourceNode::GetWrapperTypeInfo(),
    WrapperTypeInfo::kWrapperTypeObjectPrototype,
    WrapperTypeInfo::kObjectClassId,
    WrapperTypeInfo::kInheritFromActiveScriptWrappable,
};
#if defined(COMPONENT_BUILD) && defined(WIN32) && defined(__clang__)
#pragma clang diagnostic pop
#endif

// This static member must be declared by DEFINE_WRAPPERTYPEINFO in AudioBufferSourceNode.h.
// For details, see the comment of DEFINE_WRAPPERTYPEINFO in
// platform/bindings/ScriptWrappable.h.
const WrapperTypeInfo& AudioBufferSourceNode::wrapper_type_info_ = v8_audio_buffer_source_node_wrapper_type_info;

// [ActiveScriptWrappable]
static_assert(
    std::is_base_of<ActiveScriptWrappableBase, AudioBufferSourceNode>::value,
    "AudioBufferSourceNode does not inherit from ActiveScriptWrappable<>, but specifying "
    "[ActiveScriptWrappable] extended attribute in the IDL file.  "
    "Be consistent.");
static_assert(
    !std::is_same<decltype(&AudioBufferSourceNode::HasPendingActivity),
                  decltype(&ScriptWrappable::HasPendingActivity)>::value,
    "AudioBufferSourceNode is not overriding hasPendingActivity(), but is specifying "
    "[ActiveScriptWrappable] extended attribute in the IDL file.  "
    "Be consistent.");

namespace audio_buffer_source_node_v8_internal {

static void BufferAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  AudioBufferSourceNode* impl = V8AudioBufferSourceNode::ToImpl(holder);

  V8SetReturnValueFast(info, WTF::GetPtr(impl->buffer()), impl);
}

static void BufferAttributeSetter(
    v8::Local<v8::Value> v8_value, const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Isolate* isolate = info.GetIsolate();
  ALLOW_UNUSED_LOCAL(isolate);

  v8::Local<v8::Object> holder = info.Holder();
  ALLOW_UNUSED_LOCAL(holder);

  AudioBufferSourceNode* impl = V8AudioBufferSourceNode::ToImpl(holder);

  ExceptionState exception_state(isolate, ExceptionState::kSetterContext, "AudioBufferSourceNode", "buffer");

  // Prepare the value to be set.
  AudioBuffer* cpp_value = V8AudioBuffer::ToImplWithTypeCheck(info.GetIsolate(), v8_value);

  // Type check per: http://heycam.github.io/webidl/#es-interface
  if (!cpp_value && !IsUndefinedOrNull(v8_value)) {
    exception_state.ThrowTypeError("The provided value is not of type 'AudioBuffer'.");
    return;
  }

  impl->setBuffer(cpp_value, exception_state);
}

static void PlaybackRateAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  AudioBufferSourceNode* impl = V8AudioBufferSourceNode::ToImpl(holder);

  AudioParam* cpp_value(WTF::GetPtr(impl->playbackRate()));

  // Keep the wrapper object for the return value alive as long as |this|
  // object is alive in order to save creation time of the wrapper object.
  if (cpp_value && DOMDataStore::SetReturnValue(info.GetReturnValue(), cpp_value))
    return;
  v8::Local<v8::Value> v8_value(ToV8(cpp_value, holder, info.GetIsolate()));
  V8PrivateProperty::GetSymbol(
      info.GetIsolate(), "KeepAlive#AudioBufferSourceNode#playbackRate")
      .Set(holder, v8_value);

  V8SetReturnValue(info, v8_value);
}

static void DetuneAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  AudioBufferSourceNode* impl = V8AudioBufferSourceNode::ToImpl(holder);

  AudioParam* cpp_value(WTF::GetPtr(impl->detune()));

  // Keep the wrapper object for the return value alive as long as |this|
  // object is alive in order to save creation time of the wrapper object.
  if (cpp_value && DOMDataStore::SetReturnValue(info.GetReturnValue(), cpp_value))
    return;
  v8::Local<v8::Value> v8_value(ToV8(cpp_value, holder, info.GetIsolate()));
  V8PrivateProperty::GetSymbol(
      info.GetIsolate(), "KeepAlive#AudioBufferSourceNode#detune")
      .Set(holder, v8_value);

  V8SetReturnValue(info, v8_value);
}

static void LoopAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  AudioBufferSourceNode* impl = V8AudioBufferSourceNode::ToImpl(holder);

  V8SetReturnValueBool(info, impl->loop());
}

static void LoopAttributeSetter(
    v8::Local<v8::Value> v8_value, const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Isolate* isolate = info.GetIsolate();
  ALLOW_UNUSED_LOCAL(isolate);

  v8::Local<v8::Object> holder = info.Holder();
  ALLOW_UNUSED_LOCAL(holder);

  AudioBufferSourceNode* impl = V8AudioBufferSourceNode::ToImpl(holder);

  ExceptionState exception_state(isolate, ExceptionState::kSetterContext, "AudioBufferSourceNode", "loop");

  // Prepare the value to be set.
  bool cpp_value = NativeValueTraits<IDLBoolean>::NativeValue(info.GetIsolate(), v8_value, exception_state);
  if (exception_state.HadException())
    return;

  impl->setLoop(cpp_value);
}

static void LoopStartAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  AudioBufferSourceNode* impl = V8AudioBufferSourceNode::ToImpl(holder);

  V8SetReturnValue(info, impl->loopStart());
}

static void LoopStartAttributeSetter(
    v8::Local<v8::Value> v8_value, const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Isolate* isolate = info.GetIsolate();
  ALLOW_UNUSED_LOCAL(isolate);

  v8::Local<v8::Object> holder = info.Holder();
  ALLOW_UNUSED_LOCAL(holder);

  AudioBufferSourceNode* impl = V8AudioBufferSourceNode::ToImpl(holder);

  ExceptionState exception_state(isolate, ExceptionState::kSetterContext, "AudioBufferSourceNode", "loopStart");

  // Prepare the value to be set.
  double cpp_value = NativeValueTraits<IDLDouble>::NativeValue(info.GetIsolate(), v8_value, exception_state);
  if (exception_state.HadException())
    return;

  impl->setLoopStart(cpp_value);
}

static void LoopEndAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  AudioBufferSourceNode* impl = V8AudioBufferSourceNode::ToImpl(holder);

  V8SetReturnValue(info, impl->loopEnd());
}

static void LoopEndAttributeSetter(
    v8::Local<v8::Value> v8_value, const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Isolate* isolate = info.GetIsolate();
  ALLOW_UNUSED_LOCAL(isolate);

  v8::Local<v8::Object> holder = info.Holder();
  ALLOW_UNUSED_LOCAL(holder);

  AudioBufferSourceNode* impl = V8AudioBufferSourceNode::ToImpl(holder);

  ExceptionState exception_state(isolate, ExceptionState::kSetterContext, "AudioBufferSourceNode", "loopEnd");

  // Prepare the value to be set.
  double cpp_value = NativeValueTraits<IDLDouble>::NativeValue(info.GetIsolate(), v8_value, exception_state);
  if (exception_state.HadException())
    return;

  impl->setLoopEnd(cpp_value);
}

static void StartMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exception_state(info.GetIsolate(), ExceptionState::kExecutionContext, "AudioBufferSourceNode", "start");

  AudioBufferSourceNode* impl = V8AudioBufferSourceNode::ToImpl(info.Holder());

  double when;
  double grain_offset;
  double grain_duration;
  int num_args_passed = info.Length();
  while (num_args_passed > 0) {
    if (!info[num_args_passed - 1]->IsUndefined())
      break;
    --num_args_passed;
  }
  if (!info[0]->IsUndefined()) {
    when = NativeValueTraits<IDLDouble>::NativeValue(info.GetIsolate(), info[0], exception_state);
    if (exception_state.HadException())
      return;
  } else {
    when = 0;
  }
  if (UNLIKELY(num_args_passed <= 1)) {
    impl->start(when, exception_state);
    if (exception_state.HadException()) {
      return;
    }
    return;
  }
  grain_offset = NativeValueTraits<IDLDouble>::NativeValue(info.GetIsolate(), info[1], exception_state);
  if (exception_state.HadException())
    return;

  if (UNLIKELY(num_args_passed <= 2)) {
    impl->start(when, grain_offset, exception_state);
    if (exception_state.HadException()) {
      return;
    }
    return;
  }
  grain_duration = NativeValueTraits<IDLDouble>::NativeValue(info.GetIsolate(), info[2], exception_state);
  if (exception_state.HadException())
    return;

  impl->start(when, grain_offset, grain_duration, exception_state);
  if (exception_state.HadException()) {
    return;
  }
}

static void Constructor(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_AudioBufferSourceNode_ConstructorCallback");

  ExceptionState exception_state(info.GetIsolate(), ExceptionState::kConstructionContext, "AudioBufferSourceNode");

  if (UNLIKELY(info.Length() < 1)) {
    exception_state.ThrowTypeError(ExceptionMessages::NotEnoughArguments(1, info.Length()));
    return;
  }

  BaseAudioContext* context;
  AudioBufferSourceOptions* options;
  context = V8BaseAudioContext::ToImplWithTypeCheck(info.GetIsolate(), info[0]);
  if (!context) {
    exception_state.ThrowTypeError("parameter 1 is not of type 'BaseAudioContext'.");
    return;
  }

  if (!info[1]->IsNullOrUndefined() && !info[1]->IsObject()) {
    exception_state.ThrowTypeError("parameter 2 ('options') is not an object.");
    return;
  }
  options = NativeValueTraits<AudioBufferSourceOptions>::NativeValue(info.GetIsolate(), info[1], exception_state);
  if (exception_state.HadException())
    return;

  AudioBufferSourceNode* impl = AudioBufferSourceNode::Create(context, options, exception_state);
  if (exception_state.HadException()) {
    return;
  }
  v8::Local<v8::Object> wrapper = info.Holder();
  wrapper = impl->AssociateWithWrapper(info.GetIsolate(), V8AudioBufferSourceNode::GetWrapperTypeInfo(), wrapper);
  V8SetReturnValue(info, wrapper);
}

MODULES_EXPORT void ConstructorCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_AudioBufferSourceNode_Constructor");

  ExecutionContext* execution_context_for_measurement = CurrentExecutionContext(info.GetIsolate());
  UseCounter::Count(execution_context_for_measurement, WebFeature::kV8AudioBufferSourceNode_Constructor);
  if (!info.IsConstructCall()) {
    V8ThrowException::ThrowTypeError(
        info.GetIsolate(),
        ExceptionMessages::ConstructorNotCallableAsFunction("AudioBufferSourceNode"));
    return;
  }

  if (ConstructorMode::Current(info.GetIsolate()) == ConstructorMode::kWrapExistingObject) {
    V8SetReturnValue(info, info.Holder());
    return;
  }

  audio_buffer_source_node_v8_internal::Constructor(info);
}

}  // namespace audio_buffer_source_node_v8_internal

void V8AudioBufferSourceNode::BufferAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_AudioBufferSourceNode_buffer_Getter");

  audio_buffer_source_node_v8_internal::BufferAttributeGetter(info);
}

void V8AudioBufferSourceNode::BufferAttributeSetterCallback(
    const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_AudioBufferSourceNode_buffer_Setter");

  v8::Local<v8::Value> v8_value = info[0];

  audio_buffer_source_node_v8_internal::BufferAttributeSetter(v8_value, info);
}

void V8AudioBufferSourceNode::PlaybackRateAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_AudioBufferSourceNode_playbackRate_Getter");

  audio_buffer_source_node_v8_internal::PlaybackRateAttributeGetter(info);
}

void V8AudioBufferSourceNode::DetuneAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_AudioBufferSourceNode_detune_Getter");

  audio_buffer_source_node_v8_internal::DetuneAttributeGetter(info);
}

void V8AudioBufferSourceNode::LoopAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_AudioBufferSourceNode_loop_Getter");

  audio_buffer_source_node_v8_internal::LoopAttributeGetter(info);
}

void V8AudioBufferSourceNode::LoopAttributeSetterCallback(
    const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_AudioBufferSourceNode_loop_Setter");

  v8::Local<v8::Value> v8_value = info[0];

  audio_buffer_source_node_v8_internal::LoopAttributeSetter(v8_value, info);
}

void V8AudioBufferSourceNode::LoopStartAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_AudioBufferSourceNode_loopStart_Getter");

  audio_buffer_source_node_v8_internal::LoopStartAttributeGetter(info);
}

void V8AudioBufferSourceNode::LoopStartAttributeSetterCallback(
    const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_AudioBufferSourceNode_loopStart_Setter");

  v8::Local<v8::Value> v8_value = info[0];

  audio_buffer_source_node_v8_internal::LoopStartAttributeSetter(v8_value, info);
}

void V8AudioBufferSourceNode::LoopEndAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_AudioBufferSourceNode_loopEnd_Getter");

  audio_buffer_source_node_v8_internal::LoopEndAttributeGetter(info);
}

void V8AudioBufferSourceNode::LoopEndAttributeSetterCallback(
    const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_AudioBufferSourceNode_loopEnd_Setter");

  v8::Local<v8::Value> v8_value = info[0];

  audio_buffer_source_node_v8_internal::LoopEndAttributeSetter(v8_value, info);
}

void V8AudioBufferSourceNode::StartMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_AudioBufferSourceNode_start");

  audio_buffer_source_node_v8_internal::StartMethod(info);
}

static constexpr V8DOMConfiguration::AccessorConfiguration kV8AudioBufferSourceNodeAccessors[] = {
    { "buffer", V8AudioBufferSourceNode::BufferAttributeGetterCallback, V8AudioBufferSourceNode::BufferAttributeSetterCallback, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
    { "playbackRate", V8AudioBufferSourceNode::PlaybackRateAttributeGetterCallback, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
    { "detune", V8AudioBufferSourceNode::DetuneAttributeGetterCallback, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
    { "loop", V8AudioBufferSourceNode::LoopAttributeGetterCallback, V8AudioBufferSourceNode::LoopAttributeSetterCallback, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
    { "loopStart", V8AudioBufferSourceNode::LoopStartAttributeGetterCallback, V8AudioBufferSourceNode::LoopStartAttributeSetterCallback, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
    { "loopEnd", V8AudioBufferSourceNode::LoopEndAttributeGetterCallback, V8AudioBufferSourceNode::LoopEndAttributeSetterCallback, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
};

static constexpr V8DOMConfiguration::MethodConfiguration kV8AudioBufferSourceNodeMethods[] = {
    {"start", V8AudioBufferSourceNode::StartMethodCallback, 0, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
};

static void InstallV8AudioBufferSourceNodeTemplate(
    v8::Isolate* isolate,
    const DOMWrapperWorld& world,
    v8::Local<v8::FunctionTemplate> interface_template) {
  // Initialize the interface object's template.
  V8DOMConfiguration::InitializeDOMInterfaceTemplate(isolate, interface_template, V8AudioBufferSourceNode::GetWrapperTypeInfo()->interface_name, V8AudioScheduledSourceNode::DomTemplate(isolate, world), V8AudioBufferSourceNode::kInternalFieldCount);
  interface_template->SetCallHandler(audio_buffer_source_node_v8_internal::ConstructorCallback);
  interface_template->SetLength(1);

  v8::Local<v8::Signature> signature = v8::Signature::New(isolate, interface_template);
  ALLOW_UNUSED_LOCAL(signature);
  v8::Local<v8::ObjectTemplate> instance_template = interface_template->InstanceTemplate();
  ALLOW_UNUSED_LOCAL(instance_template);
  v8::Local<v8::ObjectTemplate> prototype_template = interface_template->PrototypeTemplate();
  ALLOW_UNUSED_LOCAL(prototype_template);

  // Register IDL constants, attributes and operations.
  V8DOMConfiguration::InstallAccessors(
      isolate, world, instance_template, prototype_template, interface_template,
      signature, kV8AudioBufferSourceNodeAccessors, base::size(kV8AudioBufferSourceNodeAccessors));
  V8DOMConfiguration::InstallMethods(
      isolate, world, instance_template, prototype_template, interface_template,
      signature, kV8AudioBufferSourceNodeMethods, base::size(kV8AudioBufferSourceNodeMethods));

  // Custom signature

  V8AudioBufferSourceNode::InstallRuntimeEnabledFeaturesOnTemplate(
      isolate, world, interface_template);
}

void V8AudioBufferSourceNode::InstallRuntimeEnabledFeaturesOnTemplate(
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

v8::Local<v8::FunctionTemplate> V8AudioBufferSourceNode::DomTemplate(
    v8::Isolate* isolate, const DOMWrapperWorld& world) {
  return V8DOMConfiguration::DomClassTemplate(
      isolate, world, const_cast<WrapperTypeInfo*>(V8AudioBufferSourceNode::GetWrapperTypeInfo()),
      InstallV8AudioBufferSourceNodeTemplate);
}

bool V8AudioBufferSourceNode::HasInstance(v8::Local<v8::Value> v8_value, v8::Isolate* isolate) {
  return V8PerIsolateData::From(isolate)->HasInstance(V8AudioBufferSourceNode::GetWrapperTypeInfo(), v8_value);
}

v8::Local<v8::Object> V8AudioBufferSourceNode::FindInstanceInPrototypeChain(
    v8::Local<v8::Value> v8_value, v8::Isolate* isolate) {
  return V8PerIsolateData::From(isolate)->FindInstanceInPrototypeChain(
      V8AudioBufferSourceNode::GetWrapperTypeInfo(), v8_value);
}

AudioBufferSourceNode* V8AudioBufferSourceNode::ToImplWithTypeCheck(
    v8::Isolate* isolate, v8::Local<v8::Value> value) {
  return HasInstance(value, isolate) ? ToImpl(v8::Local<v8::Object>::Cast(value)) : nullptr;
}

AudioBufferSourceNode* NativeValueTraits<AudioBufferSourceNode>::NativeValue(
    v8::Isolate* isolate, v8::Local<v8::Value> value, ExceptionState& exception_state) {
  AudioBufferSourceNode* native_value = V8AudioBufferSourceNode::ToImplWithTypeCheck(isolate, value);
  if (!native_value) {
    exception_state.ThrowTypeError(ExceptionMessages::FailedToConvertJSValue(
        "AudioBufferSourceNode"));
  }
  return native_value;
}

}  // namespace blink
