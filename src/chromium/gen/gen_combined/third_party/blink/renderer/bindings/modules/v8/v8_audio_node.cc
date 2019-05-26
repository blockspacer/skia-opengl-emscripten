// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated from the Jinja2 template
// third_party/blink/renderer/bindings/templates/interface.cc.tmpl
// by the script code_generator_v8.py.
// DO NOT MODIFY!

// clang-format off
#include "third_party/blink/renderer/bindings/modules/v8/v8_audio_node.h"

#include <algorithm>

#include "base/memory/scoped_refptr.h"
#include "third_party/blink/renderer/bindings/core/v8/idl_types.h"
#include "third_party/blink/renderer/bindings/core/v8/native_value_traits_impl.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_dom_configuration.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_audio_node.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_audio_param.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_base_audio_context.h"
#include "third_party/blink/renderer/core/execution_context/execution_context.h"
#include "third_party/blink/renderer/core/frame/use_counter.h"
#include "third_party/blink/renderer/core/inspector/console_message.h"
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
const WrapperTypeInfo v8_audio_node_wrapper_type_info = {
    gin::kEmbedderBlink,
    V8AudioNode::DomTemplate,
    nullptr,
    "AudioNode",
    V8EventTarget::GetWrapperTypeInfo(),
    WrapperTypeInfo::kWrapperTypeObjectPrototype,
    WrapperTypeInfo::kObjectClassId,
    WrapperTypeInfo::kNotInheritFromActiveScriptWrappable,
};
#if defined(COMPONENT_BUILD) && defined(WIN32) && defined(__clang__)
#pragma clang diagnostic pop
#endif

// This static member must be declared by DEFINE_WRAPPERTYPEINFO in AudioNode.h.
// For details, see the comment of DEFINE_WRAPPERTYPEINFO in
// platform/bindings/ScriptWrappable.h.
const WrapperTypeInfo& AudioNode::wrapper_type_info_ = v8_audio_node_wrapper_type_info;

// not [ActiveScriptWrappable]
static_assert(
    !std::is_base_of<ActiveScriptWrappableBase, AudioNode>::value,
    "AudioNode inherits from ActiveScriptWrappable<>, but is not specifying "
    "[ActiveScriptWrappable] extended attribute in the IDL file.  "
    "Be consistent.");
static_assert(
    std::is_same<decltype(&AudioNode::HasPendingActivity),
                 decltype(&ScriptWrappable::HasPendingActivity)>::value,
    "AudioNode is overriding hasPendingActivity(), but is not specifying "
    "[ActiveScriptWrappable] extended attribute in the IDL file.  "
    "Be consistent.");

namespace audio_node_v8_internal {

static void ContextAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  AudioNode* impl = V8AudioNode::ToImpl(holder);

  BaseAudioContext* cpp_value(WTF::GetPtr(impl->context()));

  // Keep the wrapper object for the return value alive as long as |this|
  // object is alive in order to save creation time of the wrapper object.
  if (cpp_value && DOMDataStore::SetReturnValue(info.GetReturnValue(), cpp_value))
    return;
  v8::Local<v8::Value> v8_value(ToV8(cpp_value, holder, info.GetIsolate()));
  V8PrivateProperty::GetSymbol(
      info.GetIsolate(), "KeepAlive#AudioNode#context")
      .Set(holder, v8_value);

  V8SetReturnValue(info, v8_value);
}

static void NumberOfInputsAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  AudioNode* impl = V8AudioNode::ToImpl(holder);

  V8SetReturnValueUnsigned(info, impl->numberOfInputs());
}

static void NumberOfOutputsAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  AudioNode* impl = V8AudioNode::ToImpl(holder);

  V8SetReturnValueUnsigned(info, impl->numberOfOutputs());
}

static void ChannelCountAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  AudioNode* impl = V8AudioNode::ToImpl(holder);

  V8SetReturnValueUnsigned(info, impl->channelCount());
}

static void ChannelCountAttributeSetter(
    v8::Local<v8::Value> v8_value, const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Isolate* isolate = info.GetIsolate();
  ALLOW_UNUSED_LOCAL(isolate);

  v8::Local<v8::Object> holder = info.Holder();
  ALLOW_UNUSED_LOCAL(holder);

  AudioNode* impl = V8AudioNode::ToImpl(holder);

  ExceptionState exception_state(isolate, ExceptionState::kSetterContext, "AudioNode", "channelCount");

  // Prepare the value to be set.
  uint32_t cpp_value = NativeValueTraits<IDLUnsignedLong>::NativeValue(info.GetIsolate(), v8_value, exception_state);
  if (exception_state.HadException())
    return;

  impl->setChannelCount(cpp_value, exception_state);
}

static void ChannelCountModeAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  AudioNode* impl = V8AudioNode::ToImpl(holder);

  V8SetReturnValueString(info, impl->channelCountMode(), info.GetIsolate());
}

static void ChannelCountModeAttributeSetter(
    v8::Local<v8::Value> v8_value, const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Isolate* isolate = info.GetIsolate();
  ALLOW_UNUSED_LOCAL(isolate);

  v8::Local<v8::Object> holder = info.Holder();
  ALLOW_UNUSED_LOCAL(holder);

  AudioNode* impl = V8AudioNode::ToImpl(holder);

  ExceptionState exception_state(isolate, ExceptionState::kSetterContext, "AudioNode", "channelCountMode");

  // Prepare the value to be set.
  V8StringResource<> cpp_value = v8_value;
  if (!cpp_value.Prepare())
    return;

  // Type check per: http://heycam.github.io/webidl/#dfn-attribute-setter
  // Returns undefined without setting the value if the value is invalid.
  DummyExceptionStateForTesting dummy_exception_state;
  {
    const char* kValidValues[] = {
      "max",
      "clamped-max",
      "explicit",
  };
    if (!IsValidEnum(cpp_value, kValidValues, base::size(kValidValues),
                     "ChannelCountMode", dummy_exception_state)) {
      ExecutionContext::ForCurrentRealm(info)->AddConsoleMessage(
          ConsoleMessage::Create(mojom::ConsoleMessageSource::kJavaScript,
                                 mojom::ConsoleMessageLevel::kWarning,
                                 dummy_exception_state.Message()));
      return;
    }
  }

  impl->setChannelCountMode(cpp_value, exception_state);
}

static void ChannelInterpretationAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  AudioNode* impl = V8AudioNode::ToImpl(holder);

  V8SetReturnValueString(info, impl->channelInterpretation(), info.GetIsolate());
}

static void ChannelInterpretationAttributeSetter(
    v8::Local<v8::Value> v8_value, const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Isolate* isolate = info.GetIsolate();
  ALLOW_UNUSED_LOCAL(isolate);

  v8::Local<v8::Object> holder = info.Holder();
  ALLOW_UNUSED_LOCAL(holder);

  AudioNode* impl = V8AudioNode::ToImpl(holder);

  ExceptionState exception_state(isolate, ExceptionState::kSetterContext, "AudioNode", "channelInterpretation");

  // Prepare the value to be set.
  V8StringResource<> cpp_value = v8_value;
  if (!cpp_value.Prepare())
    return;

  // Type check per: http://heycam.github.io/webidl/#dfn-attribute-setter
  // Returns undefined without setting the value if the value is invalid.
  DummyExceptionStateForTesting dummy_exception_state;
  {
    const char* kValidValues[] = {
      "speakers",
      "discrete",
  };
    if (!IsValidEnum(cpp_value, kValidValues, base::size(kValidValues),
                     "ChannelInterpretation", dummy_exception_state)) {
      ExecutionContext::ForCurrentRealm(info)->AddConsoleMessage(
          ConsoleMessage::Create(mojom::ConsoleMessageSource::kJavaScript,
                                 mojom::ConsoleMessageLevel::kWarning,
                                 dummy_exception_state.Message()));
      return;
    }
  }

  impl->setChannelInterpretation(cpp_value, exception_state);
}

static void Connect1Method(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exception_state(info.GetIsolate(), ExceptionState::kExecutionContext, "AudioNode", "connect");

  AudioNode* impl = V8AudioNode::ToImpl(info.Holder());

  AudioNode* destination;
  uint32_t output;
  uint32_t input;
  destination = V8AudioNode::ToImplWithTypeCheck(info.GetIsolate(), info[0]);
  if (!destination) {
    exception_state.ThrowTypeError("parameter 1 is not of type 'AudioNode'.");
    return;
  }

  if (!info[1]->IsUndefined()) {
    output = NativeValueTraits<IDLUnsignedLong>::NativeValue(info.GetIsolate(), info[1], exception_state);
    if (exception_state.HadException())
      return;
  } else {
    output = 0u;
  }
  if (!info[2]->IsUndefined()) {
    input = NativeValueTraits<IDLUnsignedLong>::NativeValue(info.GetIsolate(), info[2], exception_state);
    if (exception_state.HadException())
      return;
  } else {
    input = 0u;
  }

  AudioNode* result = impl->connect(destination, output, input, exception_state);
  if (exception_state.HadException()) {
    return;
  }
  V8SetReturnValue(info, result);
}

static void Connect2Method(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exception_state(info.GetIsolate(), ExceptionState::kExecutionContext, "AudioNode", "connect");

  AudioNode* impl = V8AudioNode::ToImpl(info.Holder());

  AudioParam* destination;
  uint32_t output;
  destination = V8AudioParam::ToImplWithTypeCheck(info.GetIsolate(), info[0]);
  if (!destination) {
    exception_state.ThrowTypeError("parameter 1 is not of type 'AudioParam'.");
    return;
  }

  if (!info[1]->IsUndefined()) {
    output = NativeValueTraits<IDLUnsignedLong>::NativeValue(info.GetIsolate(), info[1], exception_state);
    if (exception_state.HadException())
      return;
  } else {
    output = 0u;
  }

  impl->connect(destination, output, exception_state);
  if (exception_state.HadException()) {
    return;
  }
}

static void ConnectMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  scheduler::CooperativeSchedulingManager::Instance()->Safepoint();

  bool is_arity_error = false;

  switch (std::min(3, info.Length())) {
    case 1:
      if (V8AudioNode::HasInstance(info[0], info.GetIsolate())) {
        ExecutionContext* execution_context_for_measurement = CurrentExecutionContext(info.GetIsolate());
        UseCounter::Count(execution_context_for_measurement, WebFeature::kAudioNodeConnectToAudioNode);
        Connect1Method(info);
        return;
      }
      if (V8AudioParam::HasInstance(info[0], info.GetIsolate())) {
        ExecutionContext* execution_context_for_measurement = CurrentExecutionContext(info.GetIsolate());
        UseCounter::Count(execution_context_for_measurement, WebFeature::kAudioNodeConnectToAudioParam);
        Connect2Method(info);
        return;
      }
      break;
    case 2:
      if (V8AudioNode::HasInstance(info[0], info.GetIsolate())) {
        ExecutionContext* execution_context_for_measurement = CurrentExecutionContext(info.GetIsolate());
        UseCounter::Count(execution_context_for_measurement, WebFeature::kAudioNodeConnectToAudioNode);
        Connect1Method(info);
        return;
      }
      if (V8AudioParam::HasInstance(info[0], info.GetIsolate())) {
        ExecutionContext* execution_context_for_measurement = CurrentExecutionContext(info.GetIsolate());
        UseCounter::Count(execution_context_for_measurement, WebFeature::kAudioNodeConnectToAudioParam);
        Connect2Method(info);
        return;
      }
      break;
    case 3:
      if (true) {
        ExecutionContext* execution_context_for_measurement = CurrentExecutionContext(info.GetIsolate());
        UseCounter::Count(execution_context_for_measurement, WebFeature::kAudioNodeConnectToAudioNode);
        Connect1Method(info);
        return;
      }
      break;
    default:
      is_arity_error = true;
  }

  ExceptionState exception_state(info.GetIsolate(), ExceptionState::kExecutionContext, "AudioNode", "connect");
  if (is_arity_error) {
    if (info.Length() < 1) {
      exception_state.ThrowTypeError(ExceptionMessages::NotEnoughArguments(1, info.Length()));
      return;
    }
  }
  exception_state.ThrowTypeError("No function was found that matched the signature provided.");
}

static void Disconnect1Method(const v8::FunctionCallbackInfo<v8::Value>& info) {
  AudioNode* impl = V8AudioNode::ToImpl(info.Holder());

  impl->disconnect();
}

static void Disconnect2Method(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exception_state(info.GetIsolate(), ExceptionState::kExecutionContext, "AudioNode", "disconnect");

  AudioNode* impl = V8AudioNode::ToImpl(info.Holder());

  uint32_t output;
  output = NativeValueTraits<IDLUnsignedLong>::NativeValue(info.GetIsolate(), info[0], exception_state);
  if (exception_state.HadException())
    return;

  impl->disconnect(output, exception_state);
  if (exception_state.HadException()) {
    return;
  }
}

static void Disconnect3Method(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exception_state(info.GetIsolate(), ExceptionState::kExecutionContext, "AudioNode", "disconnect");

  AudioNode* impl = V8AudioNode::ToImpl(info.Holder());

  AudioNode* destination;
  destination = V8AudioNode::ToImplWithTypeCheck(info.GetIsolate(), info[0]);
  if (!destination) {
    exception_state.ThrowTypeError("parameter 1 is not of type 'AudioNode'.");
    return;
  }

  impl->disconnect(destination, exception_state);
  if (exception_state.HadException()) {
    return;
  }
}

static void Disconnect4Method(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exception_state(info.GetIsolate(), ExceptionState::kExecutionContext, "AudioNode", "disconnect");

  AudioNode* impl = V8AudioNode::ToImpl(info.Holder());

  AudioNode* destination;
  uint32_t output;
  destination = V8AudioNode::ToImplWithTypeCheck(info.GetIsolate(), info[0]);
  if (!destination) {
    exception_state.ThrowTypeError("parameter 1 is not of type 'AudioNode'.");
    return;
  }

  output = NativeValueTraits<IDLUnsignedLong>::NativeValue(info.GetIsolate(), info[1], exception_state);
  if (exception_state.HadException())
    return;

  impl->disconnect(destination, output, exception_state);
  if (exception_state.HadException()) {
    return;
  }
}

static void Disconnect5Method(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exception_state(info.GetIsolate(), ExceptionState::kExecutionContext, "AudioNode", "disconnect");

  AudioNode* impl = V8AudioNode::ToImpl(info.Holder());

  AudioNode* destination;
  uint32_t output;
  uint32_t input;
  destination = V8AudioNode::ToImplWithTypeCheck(info.GetIsolate(), info[0]);
  if (!destination) {
    exception_state.ThrowTypeError("parameter 1 is not of type 'AudioNode'.");
    return;
  }

  output = NativeValueTraits<IDLUnsignedLong>::NativeValue(info.GetIsolate(), info[1], exception_state);
  if (exception_state.HadException())
    return;

  input = NativeValueTraits<IDLUnsignedLong>::NativeValue(info.GetIsolate(), info[2], exception_state);
  if (exception_state.HadException())
    return;

  impl->disconnect(destination, output, input, exception_state);
  if (exception_state.HadException()) {
    return;
  }
}

static void Disconnect6Method(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exception_state(info.GetIsolate(), ExceptionState::kExecutionContext, "AudioNode", "disconnect");

  AudioNode* impl = V8AudioNode::ToImpl(info.Holder());

  AudioParam* destination;
  destination = V8AudioParam::ToImplWithTypeCheck(info.GetIsolate(), info[0]);
  if (!destination) {
    exception_state.ThrowTypeError("parameter 1 is not of type 'AudioParam'.");
    return;
  }

  impl->disconnect(destination, exception_state);
  if (exception_state.HadException()) {
    return;
  }
}

static void Disconnect7Method(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exception_state(info.GetIsolate(), ExceptionState::kExecutionContext, "AudioNode", "disconnect");

  AudioNode* impl = V8AudioNode::ToImpl(info.Holder());

  AudioParam* destination;
  uint32_t output;
  destination = V8AudioParam::ToImplWithTypeCheck(info.GetIsolate(), info[0]);
  if (!destination) {
    exception_state.ThrowTypeError("parameter 1 is not of type 'AudioParam'.");
    return;
  }

  output = NativeValueTraits<IDLUnsignedLong>::NativeValue(info.GetIsolate(), info[1], exception_state);
  if (exception_state.HadException())
    return;

  impl->disconnect(destination, output, exception_state);
  if (exception_state.HadException()) {
    return;
  }
}

static void DisconnectMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  scheduler::CooperativeSchedulingManager::Instance()->Safepoint();

  bool is_arity_error = false;

  switch (std::min(3, info.Length())) {
    case 0:
      if (true) {
        Disconnect1Method(info);
        return;
      }
      break;
    case 1:
      if (V8AudioNode::HasInstance(info[0], info.GetIsolate())) {
        ExecutionContext* execution_context_for_measurement = CurrentExecutionContext(info.GetIsolate());
        UseCounter::Count(execution_context_for_measurement, WebFeature::kAudioNodeDisconnectFromAudioNode);
        Disconnect3Method(info);
        return;
      }
      if (V8AudioParam::HasInstance(info[0], info.GetIsolate())) {
        ExecutionContext* execution_context_for_measurement = CurrentExecutionContext(info.GetIsolate());
        UseCounter::Count(execution_context_for_measurement, WebFeature::kAudioNodeDisconnectFromAudioParam);
        Disconnect6Method(info);
        return;
      }
      if (info[0]->IsNumber()) {
        ExecutionContext* execution_context_for_measurement = CurrentExecutionContext(info.GetIsolate());
        UseCounter::Count(execution_context_for_measurement, WebFeature::kAudioNodeDisconnectFromAudioNode);
        Disconnect2Method(info);
        return;
      }
      if (true) {
        ExecutionContext* execution_context_for_measurement = CurrentExecutionContext(info.GetIsolate());
        UseCounter::Count(execution_context_for_measurement, WebFeature::kAudioNodeDisconnectFromAudioNode);
        Disconnect2Method(info);
        return;
      }
      break;
    case 2:
      if (V8AudioNode::HasInstance(info[0], info.GetIsolate())) {
        ExecutionContext* execution_context_for_measurement = CurrentExecutionContext(info.GetIsolate());
        UseCounter::Count(execution_context_for_measurement, WebFeature::kAudioNodeDisconnectFromAudioNode);
        Disconnect4Method(info);
        return;
      }
      if (V8AudioParam::HasInstance(info[0], info.GetIsolate())) {
        ExecutionContext* execution_context_for_measurement = CurrentExecutionContext(info.GetIsolate());
        UseCounter::Count(execution_context_for_measurement, WebFeature::kAudioNodeDisconnectFromAudioParam);
        Disconnect7Method(info);
        return;
      }
      break;
    case 3:
      if (true) {
        ExecutionContext* execution_context_for_measurement = CurrentExecutionContext(info.GetIsolate());
        UseCounter::Count(execution_context_for_measurement, WebFeature::kAudioNodeDisconnectFromAudioNode);
        Disconnect5Method(info);
        return;
      }
      break;
    default:
      is_arity_error = true;
  }

  ExceptionState exception_state(info.GetIsolate(), ExceptionState::kExecutionContext, "AudioNode", "disconnect");
  if (is_arity_error) {
  }
  exception_state.ThrowTypeError("No function was found that matched the signature provided.");
}

}  // namespace audio_node_v8_internal

void V8AudioNode::ContextAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_AudioNode_context_Getter");

  audio_node_v8_internal::ContextAttributeGetter(info);
}

void V8AudioNode::NumberOfInputsAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_AudioNode_numberOfInputs_Getter");

  audio_node_v8_internal::NumberOfInputsAttributeGetter(info);
}

void V8AudioNode::NumberOfOutputsAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_AudioNode_numberOfOutputs_Getter");

  audio_node_v8_internal::NumberOfOutputsAttributeGetter(info);
}

void V8AudioNode::ChannelCountAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_AudioNode_channelCount_Getter");

  audio_node_v8_internal::ChannelCountAttributeGetter(info);
}

void V8AudioNode::ChannelCountAttributeSetterCallback(
    const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_AudioNode_channelCount_Setter");

  v8::Local<v8::Value> v8_value = info[0];

  audio_node_v8_internal::ChannelCountAttributeSetter(v8_value, info);
}

void V8AudioNode::ChannelCountModeAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_AudioNode_channelCountMode_Getter");

  audio_node_v8_internal::ChannelCountModeAttributeGetter(info);
}

void V8AudioNode::ChannelCountModeAttributeSetterCallback(
    const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_AudioNode_channelCountMode_Setter");

  v8::Local<v8::Value> v8_value = info[0];

  audio_node_v8_internal::ChannelCountModeAttributeSetter(v8_value, info);
}

void V8AudioNode::ChannelInterpretationAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_AudioNode_channelInterpretation_Getter");

  audio_node_v8_internal::ChannelInterpretationAttributeGetter(info);
}

void V8AudioNode::ChannelInterpretationAttributeSetterCallback(
    const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_AudioNode_channelInterpretation_Setter");

  v8::Local<v8::Value> v8_value = info[0];

  audio_node_v8_internal::ChannelInterpretationAttributeSetter(v8_value, info);
}

void V8AudioNode::ConnectMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_AudioNode_connect");

  audio_node_v8_internal::ConnectMethod(info);
}

void V8AudioNode::DisconnectMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_AudioNode_disconnect");

  audio_node_v8_internal::DisconnectMethod(info);
}

static constexpr V8DOMConfiguration::AccessorConfiguration kV8AudioNodeAccessors[] = {
    { "context", V8AudioNode::ContextAttributeGetterCallback, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
    { "numberOfInputs", V8AudioNode::NumberOfInputsAttributeGetterCallback, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
    { "numberOfOutputs", V8AudioNode::NumberOfOutputsAttributeGetterCallback, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
    { "channelCount", V8AudioNode::ChannelCountAttributeGetterCallback, V8AudioNode::ChannelCountAttributeSetterCallback, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
    { "channelCountMode", V8AudioNode::ChannelCountModeAttributeGetterCallback, V8AudioNode::ChannelCountModeAttributeSetterCallback, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
    { "channelInterpretation", V8AudioNode::ChannelInterpretationAttributeGetterCallback, V8AudioNode::ChannelInterpretationAttributeSetterCallback, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
};

static constexpr V8DOMConfiguration::MethodConfiguration kV8AudioNodeMethods[] = {
    {"connect", V8AudioNode::ConnectMethodCallback, 1, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"disconnect", V8AudioNode::DisconnectMethodCallback, 0, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
};

static void InstallV8AudioNodeTemplate(
    v8::Isolate* isolate,
    const DOMWrapperWorld& world,
    v8::Local<v8::FunctionTemplate> interface_template) {
  // Initialize the interface object's template.
  V8DOMConfiguration::InitializeDOMInterfaceTemplate(isolate, interface_template, V8AudioNode::GetWrapperTypeInfo()->interface_name, V8EventTarget::DomTemplate(isolate, world), V8AudioNode::kInternalFieldCount);

  v8::Local<v8::Signature> signature = v8::Signature::New(isolate, interface_template);
  ALLOW_UNUSED_LOCAL(signature);
  v8::Local<v8::ObjectTemplate> instance_template = interface_template->InstanceTemplate();
  ALLOW_UNUSED_LOCAL(instance_template);
  v8::Local<v8::ObjectTemplate> prototype_template = interface_template->PrototypeTemplate();
  ALLOW_UNUSED_LOCAL(prototype_template);

  // Register IDL constants, attributes and operations.
  V8DOMConfiguration::InstallAccessors(
      isolate, world, instance_template, prototype_template, interface_template,
      signature, kV8AudioNodeAccessors, base::size(kV8AudioNodeAccessors));
  V8DOMConfiguration::InstallMethods(
      isolate, world, instance_template, prototype_template, interface_template,
      signature, kV8AudioNodeMethods, base::size(kV8AudioNodeMethods));

  // Custom signature

  V8AudioNode::InstallRuntimeEnabledFeaturesOnTemplate(
      isolate, world, interface_template);
}

void V8AudioNode::InstallRuntimeEnabledFeaturesOnTemplate(
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

v8::Local<v8::FunctionTemplate> V8AudioNode::DomTemplate(
    v8::Isolate* isolate, const DOMWrapperWorld& world) {
  return V8DOMConfiguration::DomClassTemplate(
      isolate, world, const_cast<WrapperTypeInfo*>(V8AudioNode::GetWrapperTypeInfo()),
      InstallV8AudioNodeTemplate);
}

bool V8AudioNode::HasInstance(v8::Local<v8::Value> v8_value, v8::Isolate* isolate) {
  return V8PerIsolateData::From(isolate)->HasInstance(V8AudioNode::GetWrapperTypeInfo(), v8_value);
}

v8::Local<v8::Object> V8AudioNode::FindInstanceInPrototypeChain(
    v8::Local<v8::Value> v8_value, v8::Isolate* isolate) {
  return V8PerIsolateData::From(isolate)->FindInstanceInPrototypeChain(
      V8AudioNode::GetWrapperTypeInfo(), v8_value);
}

AudioNode* V8AudioNode::ToImplWithTypeCheck(
    v8::Isolate* isolate, v8::Local<v8::Value> value) {
  return HasInstance(value, isolate) ? ToImpl(v8::Local<v8::Object>::Cast(value)) : nullptr;
}

AudioNode* NativeValueTraits<AudioNode>::NativeValue(
    v8::Isolate* isolate, v8::Local<v8::Value> value, ExceptionState& exception_state) {
  AudioNode* native_value = V8AudioNode::ToImplWithTypeCheck(isolate, value);
  if (!native_value) {
    exception_state.ThrowTypeError(ExceptionMessages::FailedToConvertJSValue(
        "AudioNode"));
  }
  return native_value;
}

}  // namespace blink
