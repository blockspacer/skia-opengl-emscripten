// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated from the Jinja2 template
// third_party/blink/renderer/bindings/templates/interface.cc.tmpl
// by the script code_generator_v8.py.
// DO NOT MODIFY!

// clang-format off
#include "third_party/blink/renderer/bindings/modules/v8/v8_base_audio_context.h"

#include <algorithm>

#include "base/memory/scoped_refptr.h"
#include "third_party/blink/renderer/bindings/core/v8/idl_types.h"
#include "third_party/blink/renderer/bindings/core/v8/js_event_handler.h"
#include "third_party/blink/renderer/bindings/core/v8/native_value_traits_impl.h"
#include "third_party/blink/renderer/bindings/core/v8/script_promise.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_array_buffer.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_dom_configuration.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_analyser_node.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_audio_buffer.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_audio_buffer_source_node.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_audio_destination_node.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_audio_listener.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_audio_worklet.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_biquad_filter_node.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_channel_merger_node.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_channel_splitter_node.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_constant_source_node.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_convolver_node.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_decode_error_callback.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_decode_success_callback.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_delay_node.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_dynamics_compressor_node.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_gain_node.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_iir_filter_node.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_oscillator_node.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_panner_node.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_periodic_wave.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_periodic_wave_constraints.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_script_processor_node.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_stereo_panner_node.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_wave_shaper_node.h"
#include "third_party/blink/renderer/core/execution_context/execution_context.h"
#include "third_party/blink/renderer/core/frame/use_counter.h"
#include "third_party/blink/renderer/core/inspector/console_message.h"
#include "third_party/blink/renderer/platform/bindings/exception_messages.h"
#include "third_party/blink/renderer/platform/bindings/exception_state.h"
#include "third_party/blink/renderer/platform/bindings/runtime_call_stats.h"
#include "third_party/blink/renderer/platform/bindings/script_state.h"
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
const WrapperTypeInfo v8_base_audio_context_wrapper_type_info = {
    gin::kEmbedderBlink,
    V8BaseAudioContext::DomTemplate,
    V8BaseAudioContext::InstallConditionalFeatures,
    "BaseAudioContext",
    V8EventTarget::GetWrapperTypeInfo(),
    WrapperTypeInfo::kWrapperTypeObjectPrototype,
    WrapperTypeInfo::kObjectClassId,
    WrapperTypeInfo::kInheritFromActiveScriptWrappable,
};
#if defined(COMPONENT_BUILD) && defined(WIN32) && defined(__clang__)
#pragma clang diagnostic pop
#endif

// This static member must be declared by DEFINE_WRAPPERTYPEINFO in BaseAudioContext.h.
// For details, see the comment of DEFINE_WRAPPERTYPEINFO in
// platform/bindings/ScriptWrappable.h.
const WrapperTypeInfo& BaseAudioContext::wrapper_type_info_ = v8_base_audio_context_wrapper_type_info;

// [ActiveScriptWrappable]
static_assert(
    std::is_base_of<ActiveScriptWrappableBase, BaseAudioContext>::value,
    "BaseAudioContext does not inherit from ActiveScriptWrappable<>, but specifying "
    "[ActiveScriptWrappable] extended attribute in the IDL file.  "
    "Be consistent.");
static_assert(
    !std::is_same<decltype(&BaseAudioContext::HasPendingActivity),
                  decltype(&ScriptWrappable::HasPendingActivity)>::value,
    "BaseAudioContext is not overriding hasPendingActivity(), but is specifying "
    "[ActiveScriptWrappable] extended attribute in the IDL file.  "
    "Be consistent.");

namespace base_audio_context_v8_internal {

static void DestinationAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  BaseAudioContext* impl = V8BaseAudioContext::ToImpl(holder);

  AudioDestinationNode* cpp_value(WTF::GetPtr(impl->destination()));

  // Keep the wrapper object for the return value alive as long as |this|
  // object is alive in order to save creation time of the wrapper object.
  if (cpp_value && DOMDataStore::SetReturnValue(info.GetReturnValue(), cpp_value))
    return;
  v8::Local<v8::Value> v8_value(ToV8(cpp_value, holder, info.GetIsolate()));
  V8PrivateProperty::GetSymbol(
      info.GetIsolate(), "KeepAlive#BaseAudioContext#destination")
      .Set(holder, v8_value);

  V8SetReturnValue(info, v8_value);
}

static void CurrentTimeAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  BaseAudioContext* impl = V8BaseAudioContext::ToImpl(holder);

  V8SetReturnValue(info, impl->currentTime());
}

static void SampleRateAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  BaseAudioContext* impl = V8BaseAudioContext::ToImpl(holder);

  V8SetReturnValue(info, impl->sampleRate());
}

static void ListenerAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  BaseAudioContext* impl = V8BaseAudioContext::ToImpl(holder);

  AudioListener* cpp_value(WTF::GetPtr(impl->listener()));

  // Keep the wrapper object for the return value alive as long as |this|
  // object is alive in order to save creation time of the wrapper object.
  if (cpp_value && DOMDataStore::SetReturnValue(info.GetReturnValue(), cpp_value))
    return;
  v8::Local<v8::Value> v8_value(ToV8(cpp_value, holder, info.GetIsolate()));
  V8PrivateProperty::GetSymbol(
      info.GetIsolate(), "KeepAlive#BaseAudioContext#listener")
      .Set(holder, v8_value);

  V8SetReturnValue(info, v8_value);
}

static void StateAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  BaseAudioContext* impl = V8BaseAudioContext::ToImpl(holder);

  V8SetReturnValueString(info, impl->state(), info.GetIsolate());
}

static void AudioWorkletAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  BaseAudioContext* impl = V8BaseAudioContext::ToImpl(holder);

  AudioWorklet* cpp_value(WTF::GetPtr(impl->audioWorklet()));

  // Keep the wrapper object for the return value alive as long as |this|
  // object is alive in order to save creation time of the wrapper object.
  if (cpp_value && DOMDataStore::SetReturnValue(info.GetReturnValue(), cpp_value))
    return;
  v8::Local<v8::Value> v8_value(ToV8(cpp_value, holder, info.GetIsolate()));
  V8PrivateProperty::GetSymbol(
      info.GetIsolate(), "KeepAlive#BaseAudioContext#audioWorklet")
      .Set(holder, v8_value);

  V8SetReturnValue(info, v8_value);
}

static void OnstatechangeAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  BaseAudioContext* impl = V8BaseAudioContext::ToImpl(holder);

  EventListener* cpp_value(WTF::GetPtr(impl->onstatechange()));

  V8SetReturnValue(info, JSEventHandler::AsV8Value(info.GetIsolate(), impl, cpp_value));
}

static void OnstatechangeAttributeSetter(
    v8::Local<v8::Value> v8_value, const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Isolate* isolate = info.GetIsolate();
  ALLOW_UNUSED_LOCAL(isolate);

  v8::Local<v8::Object> holder = info.Holder();
  ALLOW_UNUSED_LOCAL(holder);

  BaseAudioContext* impl = V8BaseAudioContext::ToImpl(holder);

  // Prepare the value to be set.

  impl->setOnstatechange(JSEventHandler::CreateOrNull(v8_value, JSEventHandler::HandlerType::kEventHandler));
}

static void CreateBufferMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exception_state(info.GetIsolate(), ExceptionState::kExecutionContext, "BaseAudioContext", "createBuffer");

  BaseAudioContext* impl = V8BaseAudioContext::ToImpl(info.Holder());

  if (UNLIKELY(info.Length() < 3)) {
    exception_state.ThrowTypeError(ExceptionMessages::NotEnoughArguments(3, info.Length()));
    return;
  }

  uint32_t number_of_channels;
  uint32_t number_of_frames;
  float sample_rate;
  number_of_channels = NativeValueTraits<IDLUnsignedLong>::NativeValue(info.GetIsolate(), info[0], exception_state);
  if (exception_state.HadException())
    return;

  number_of_frames = NativeValueTraits<IDLUnsignedLong>::NativeValue(info.GetIsolate(), info[1], exception_state);
  if (exception_state.HadException())
    return;

  sample_rate = NativeValueTraits<IDLFloat>::NativeValue(info.GetIsolate(), info[2], exception_state);
  if (exception_state.HadException())
    return;

  AudioBuffer* result = impl->createBuffer(number_of_channels, number_of_frames, sample_rate, exception_state);
  if (exception_state.HadException()) {
    return;
  }
  V8SetReturnValue(info, result);
}

static void DecodeAudioDataMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exception_state(info.GetIsolate(), ExceptionState::kExecutionContext, "BaseAudioContext", "decodeAudioData");
  ExceptionToRejectPromiseScope reject_promise_scope(info, exception_state);

  // V8DOMConfiguration::kDoNotCheckHolder
  // Make sure that info.Holder() really points to an instance of the type.
  if (!V8BaseAudioContext::HasInstance(info.Holder(), info.GetIsolate())) {
    exception_state.ThrowTypeError("Illegal invocation");
    return;
  }
  BaseAudioContext* impl = V8BaseAudioContext::ToImpl(info.Holder());

  ScriptState* script_state = ScriptState::ForRelevantRealm(info);

  if (UNLIKELY(info.Length() < 1)) {
    exception_state.ThrowTypeError(ExceptionMessages::NotEnoughArguments(1, info.Length()));
    return;
  }

  DOMArrayBuffer* audio_data;
  V8DecodeSuccessCallback* success_callback;
  V8DecodeErrorCallback* error_callback;
  int num_args_passed = info.Length();
  while (num_args_passed > 0) {
    if (!info[num_args_passed - 1]->IsUndefined())
      break;
    --num_args_passed;
  }
  audio_data = info[0]->IsArrayBuffer() ? V8ArrayBuffer::ToImpl(v8::Local<v8::ArrayBuffer>::Cast(info[0])) : 0;
  if (!audio_data) {
    exception_state.ThrowTypeError("parameter 1 is not of type 'ArrayBuffer'.");
    return;
  }

  if (UNLIKELY(num_args_passed <= 1)) {
    ScriptPromise result = impl->decodeAudioData(script_state, audio_data, exception_state);
    if (exception_state.HadException()) {
      return;
    }
    V8SetReturnValue(info, result.V8Value());
    return;
  }
  if (info[1]->IsFunction()) {
    success_callback = V8DecodeSuccessCallback::Create(info[1].As<v8::Function>());
  } else if (info[1]->IsNullOrUndefined()) {
    success_callback = nullptr;
  } else {
    exception_state.ThrowTypeError("The callback provided as parameter 2 is not a function.");
    return;
  }

  if (UNLIKELY(num_args_passed <= 2)) {
    ScriptPromise result = impl->decodeAudioData(script_state, audio_data, success_callback, exception_state);
    if (exception_state.HadException()) {
      return;
    }
    V8SetReturnValue(info, result.V8Value());
    return;
  }
  if (info[2]->IsFunction()) {
    error_callback = V8DecodeErrorCallback::Create(info[2].As<v8::Function>());
  } else if (info[2]->IsNullOrUndefined()) {
    error_callback = nullptr;
  } else {
    exception_state.ThrowTypeError("The callback provided as parameter 3 is not a function.");
    return;
  }

  ScriptPromise result = impl->decodeAudioData(script_state, audio_data, success_callback, error_callback, exception_state);
  if (exception_state.HadException()) {
    return;
  }
  V8SetReturnValue(info, result.V8Value());
}

static void CreateBufferSourceMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exception_state(info.GetIsolate(), ExceptionState::kExecutionContext, "BaseAudioContext", "createBufferSource");

  BaseAudioContext* impl = V8BaseAudioContext::ToImpl(info.Holder());

  AudioBufferSourceNode* result = impl->createBufferSource(exception_state);
  if (exception_state.HadException()) {
    return;
  }
  V8SetReturnValue(info, result);
}

static void CreateConstantSourceMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exception_state(info.GetIsolate(), ExceptionState::kExecutionContext, "BaseAudioContext", "createConstantSource");

  BaseAudioContext* impl = V8BaseAudioContext::ToImpl(info.Holder());

  ConstantSourceNode* result = impl->createConstantSource(exception_state);
  if (exception_state.HadException()) {
    return;
  }
  V8SetReturnValue(info, result);
}

static void CreateGainMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exception_state(info.GetIsolate(), ExceptionState::kExecutionContext, "BaseAudioContext", "createGain");

  BaseAudioContext* impl = V8BaseAudioContext::ToImpl(info.Holder());

  GainNode* result = impl->createGain(exception_state);
  if (exception_state.HadException()) {
    return;
  }
  V8SetReturnValue(info, result);
}

static void CreateDelayMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exception_state(info.GetIsolate(), ExceptionState::kExecutionContext, "BaseAudioContext", "createDelay");

  BaseAudioContext* impl = V8BaseAudioContext::ToImpl(info.Holder());

  double max_delay_time;
  int num_args_passed = info.Length();
  while (num_args_passed > 0) {
    if (!info[num_args_passed - 1]->IsUndefined())
      break;
    --num_args_passed;
  }
  if (UNLIKELY(num_args_passed <= 0)) {
    DelayNode* result = impl->createDelay(exception_state);
    if (exception_state.HadException()) {
      return;
    }
    V8SetReturnValue(info, result);
    return;
  }
  max_delay_time = NativeValueTraits<IDLDouble>::NativeValue(info.GetIsolate(), info[0], exception_state);
  if (exception_state.HadException())
    return;

  DelayNode* result = impl->createDelay(max_delay_time, exception_state);
  if (exception_state.HadException()) {
    return;
  }
  V8SetReturnValue(info, result);
}

static void CreateBiquadFilterMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exception_state(info.GetIsolate(), ExceptionState::kExecutionContext, "BaseAudioContext", "createBiquadFilter");

  BaseAudioContext* impl = V8BaseAudioContext::ToImpl(info.Holder());

  BiquadFilterNode* result = impl->createBiquadFilter(exception_state);
  if (exception_state.HadException()) {
    return;
  }
  V8SetReturnValue(info, result);
}

static void CreateIIRFilterMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exception_state(info.GetIsolate(), ExceptionState::kExecutionContext, "BaseAudioContext", "createIIRFilter");

  BaseAudioContext* impl = V8BaseAudioContext::ToImpl(info.Holder());

  if (UNLIKELY(info.Length() < 2)) {
    exception_state.ThrowTypeError(ExceptionMessages::NotEnoughArguments(2, info.Length()));
    return;
  }

  Vector<double> feed_forward;
  Vector<double> feed_back;
  feed_forward = NativeValueTraits<IDLSequence<IDLDouble>>::NativeValue(info.GetIsolate(), info[0], exception_state);
  if (exception_state.HadException())
    return;

  feed_back = NativeValueTraits<IDLSequence<IDLDouble>>::NativeValue(info.GetIsolate(), info[1], exception_state);
  if (exception_state.HadException())
    return;

  IIRFilterNode* result = impl->createIIRFilter(feed_forward, feed_back, exception_state);
  if (exception_state.HadException()) {
    return;
  }
  V8SetReturnValue(info, result);
}

static void CreateWaveShaperMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exception_state(info.GetIsolate(), ExceptionState::kExecutionContext, "BaseAudioContext", "createWaveShaper");

  BaseAudioContext* impl = V8BaseAudioContext::ToImpl(info.Holder());

  WaveShaperNode* result = impl->createWaveShaper(exception_state);
  if (exception_state.HadException()) {
    return;
  }
  V8SetReturnValue(info, result);
}

static void CreatePannerMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exception_state(info.GetIsolate(), ExceptionState::kExecutionContext, "BaseAudioContext", "createPanner");

  BaseAudioContext* impl = V8BaseAudioContext::ToImpl(info.Holder());

  PannerNode* result = impl->createPanner(exception_state);
  if (exception_state.HadException()) {
    return;
  }
  V8SetReturnValue(info, result);
}

static void CreateConvolverMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exception_state(info.GetIsolate(), ExceptionState::kExecutionContext, "BaseAudioContext", "createConvolver");

  BaseAudioContext* impl = V8BaseAudioContext::ToImpl(info.Holder());

  ConvolverNode* result = impl->createConvolver(exception_state);
  if (exception_state.HadException()) {
    return;
  }
  V8SetReturnValue(info, result);
}

static void CreateDynamicsCompressorMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exception_state(info.GetIsolate(), ExceptionState::kExecutionContext, "BaseAudioContext", "createDynamicsCompressor");

  BaseAudioContext* impl = V8BaseAudioContext::ToImpl(info.Holder());

  DynamicsCompressorNode* result = impl->createDynamicsCompressor(exception_state);
  if (exception_state.HadException()) {
    return;
  }
  V8SetReturnValue(info, result);
}

static void CreateAnalyserMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exception_state(info.GetIsolate(), ExceptionState::kExecutionContext, "BaseAudioContext", "createAnalyser");

  BaseAudioContext* impl = V8BaseAudioContext::ToImpl(info.Holder());

  AnalyserNode* result = impl->createAnalyser(exception_state);
  if (exception_state.HadException()) {
    return;
  }
  V8SetReturnValue(info, result);
}

static void CreateScriptProcessorMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exception_state(info.GetIsolate(), ExceptionState::kExecutionContext, "BaseAudioContext", "createScriptProcessor");

  BaseAudioContext* impl = V8BaseAudioContext::ToImpl(info.Holder());

  uint32_t buffer_size;
  uint32_t number_of_input_channels;
  uint32_t number_of_output_channels;
  int num_args_passed = info.Length();
  while (num_args_passed > 0) {
    if (!info[num_args_passed - 1]->IsUndefined())
      break;
    --num_args_passed;
  }
  if (UNLIKELY(num_args_passed <= 0)) {
    ScriptProcessorNode* result = impl->createScriptProcessor(exception_state);
    if (exception_state.HadException()) {
      return;
    }
    V8SetReturnValue(info, result);
    return;
  }
  buffer_size = NativeValueTraits<IDLUnsignedLong>::NativeValue(info.GetIsolate(), info[0], exception_state);
  if (exception_state.HadException())
    return;

  if (UNLIKELY(num_args_passed <= 1)) {
    ScriptProcessorNode* result = impl->createScriptProcessor(buffer_size, exception_state);
    if (exception_state.HadException()) {
      return;
    }
    V8SetReturnValue(info, result);
    return;
  }
  number_of_input_channels = NativeValueTraits<IDLUnsignedLong>::NativeValue(info.GetIsolate(), info[1], exception_state);
  if (exception_state.HadException())
    return;

  if (UNLIKELY(num_args_passed <= 2)) {
    ScriptProcessorNode* result = impl->createScriptProcessor(buffer_size, number_of_input_channels, exception_state);
    if (exception_state.HadException()) {
      return;
    }
    V8SetReturnValue(info, result);
    return;
  }
  number_of_output_channels = NativeValueTraits<IDLUnsignedLong>::NativeValue(info.GetIsolate(), info[2], exception_state);
  if (exception_state.HadException())
    return;

  ScriptProcessorNode* result = impl->createScriptProcessor(buffer_size, number_of_input_channels, number_of_output_channels, exception_state);
  if (exception_state.HadException()) {
    return;
  }
  V8SetReturnValue(info, result);
}

static void CreateStereoPannerMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exception_state(info.GetIsolate(), ExceptionState::kExecutionContext, "BaseAudioContext", "createStereoPanner");

  BaseAudioContext* impl = V8BaseAudioContext::ToImpl(info.Holder());

  StereoPannerNode* result = impl->createStereoPanner(exception_state);
  if (exception_state.HadException()) {
    return;
  }
  V8SetReturnValue(info, result);
}

static void CreateOscillatorMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exception_state(info.GetIsolate(), ExceptionState::kExecutionContext, "BaseAudioContext", "createOscillator");

  BaseAudioContext* impl = V8BaseAudioContext::ToImpl(info.Holder());

  OscillatorNode* result = impl->createOscillator(exception_state);
  if (exception_state.HadException()) {
    return;
  }
  V8SetReturnValue(info, result);
}

static void CreatePeriodicWaveMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exception_state(info.GetIsolate(), ExceptionState::kExecutionContext, "BaseAudioContext", "createPeriodicWave");

  BaseAudioContext* impl = V8BaseAudioContext::ToImpl(info.Holder());

  if (UNLIKELY(info.Length() < 2)) {
    exception_state.ThrowTypeError(ExceptionMessages::NotEnoughArguments(2, info.Length()));
    return;
  }

  Vector<float> real;
  Vector<float> imag;
  PeriodicWaveConstraints* options;
  real = NativeValueTraits<IDLSequence<IDLFloat>>::NativeValue(info.GetIsolate(), info[0], exception_state);
  if (exception_state.HadException())
    return;

  imag = NativeValueTraits<IDLSequence<IDLFloat>>::NativeValue(info.GetIsolate(), info[1], exception_state);
  if (exception_state.HadException())
    return;

  if (!info[2]->IsNullOrUndefined() && !info[2]->IsObject()) {
    exception_state.ThrowTypeError("parameter 3 ('options') is not an object.");
    return;
  }
  options = NativeValueTraits<PeriodicWaveConstraints>::NativeValue(info.GetIsolate(), info[2], exception_state);
  if (exception_state.HadException())
    return;

  PeriodicWave* result = impl->createPeriodicWave(real, imag, options, exception_state);
  if (exception_state.HadException()) {
    return;
  }
  V8SetReturnValue(info, result);
}

static void CreateChannelSplitterMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exception_state(info.GetIsolate(), ExceptionState::kExecutionContext, "BaseAudioContext", "createChannelSplitter");

  BaseAudioContext* impl = V8BaseAudioContext::ToImpl(info.Holder());

  uint32_t number_of_outputs;
  int num_args_passed = info.Length();
  while (num_args_passed > 0) {
    if (!info[num_args_passed - 1]->IsUndefined())
      break;
    --num_args_passed;
  }
  if (UNLIKELY(num_args_passed <= 0)) {
    ChannelSplitterNode* result = impl->createChannelSplitter(exception_state);
    if (exception_state.HadException()) {
      return;
    }
    V8SetReturnValue(info, result);
    return;
  }
  number_of_outputs = NativeValueTraits<IDLUnsignedLong>::NativeValue(info.GetIsolate(), info[0], exception_state);
  if (exception_state.HadException())
    return;

  ChannelSplitterNode* result = impl->createChannelSplitter(number_of_outputs, exception_state);
  if (exception_state.HadException()) {
    return;
  }
  V8SetReturnValue(info, result);
}

static void CreateChannelMergerMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exception_state(info.GetIsolate(), ExceptionState::kExecutionContext, "BaseAudioContext", "createChannelMerger");

  BaseAudioContext* impl = V8BaseAudioContext::ToImpl(info.Holder());

  uint32_t number_of_inputs;
  int num_args_passed = info.Length();
  while (num_args_passed > 0) {
    if (!info[num_args_passed - 1]->IsUndefined())
      break;
    --num_args_passed;
  }
  if (UNLIKELY(num_args_passed <= 0)) {
    ChannelMergerNode* result = impl->createChannelMerger(exception_state);
    if (exception_state.HadException()) {
      return;
    }
    V8SetReturnValue(info, result);
    return;
  }
  number_of_inputs = NativeValueTraits<IDLUnsignedLong>::NativeValue(info.GetIsolate(), info[0], exception_state);
  if (exception_state.HadException())
    return;

  ChannelMergerNode* result = impl->createChannelMerger(number_of_inputs, exception_state);
  if (exception_state.HadException()) {
    return;
  }
  V8SetReturnValue(info, result);
}

}  // namespace base_audio_context_v8_internal

void V8BaseAudioContext::DestinationAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_BaseAudioContext_destination_Getter");

  base_audio_context_v8_internal::DestinationAttributeGetter(info);
}

void V8BaseAudioContext::CurrentTimeAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_BaseAudioContext_currentTime_Getter");

  base_audio_context_v8_internal::CurrentTimeAttributeGetter(info);
}

void V8BaseAudioContext::SampleRateAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_BaseAudioContext_sampleRate_Getter");

  base_audio_context_v8_internal::SampleRateAttributeGetter(info);
}

void V8BaseAudioContext::ListenerAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_BaseAudioContext_listener_Getter");

  base_audio_context_v8_internal::ListenerAttributeGetter(info);
}

void V8BaseAudioContext::StateAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_BaseAudioContext_state_Getter");

  base_audio_context_v8_internal::StateAttributeGetter(info);
}

void V8BaseAudioContext::AudioWorkletAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_BaseAudioContext_audioWorklet_Getter");

  base_audio_context_v8_internal::AudioWorkletAttributeGetter(info);
}

void V8BaseAudioContext::OnstatechangeAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_BaseAudioContext_onstatechange_Getter");

  base_audio_context_v8_internal::OnstatechangeAttributeGetter(info);
}

void V8BaseAudioContext::OnstatechangeAttributeSetterCallback(
    const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_BaseAudioContext_onstatechange_Setter");

  v8::Local<v8::Value> v8_value = info[0];

  base_audio_context_v8_internal::OnstatechangeAttributeSetter(v8_value, info);
}

void V8BaseAudioContext::CreateBufferMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_BaseAudioContext_createBuffer");

  base_audio_context_v8_internal::CreateBufferMethod(info);
}

void V8BaseAudioContext::DecodeAudioDataMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_BaseAudioContext_decodeAudioData");

  ExecutionContext* execution_context_for_measurement = CurrentExecutionContext(info.GetIsolate());
  UseCounter::Count(execution_context_for_measurement, WebFeature::kAudioContextDecodeAudioData);
  base_audio_context_v8_internal::DecodeAudioDataMethod(info);
}

void V8BaseAudioContext::CreateBufferSourceMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_BaseAudioContext_createBufferSource");

  ExecutionContext* execution_context_for_measurement = CurrentExecutionContext(info.GetIsolate());
  UseCounter::Count(execution_context_for_measurement, WebFeature::kAudioContextCreateBufferSource);
  base_audio_context_v8_internal::CreateBufferSourceMethod(info);
}

void V8BaseAudioContext::CreateConstantSourceMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_BaseAudioContext_createConstantSource");

  ExecutionContext* execution_context_for_measurement = CurrentExecutionContext(info.GetIsolate());
  UseCounter::Count(execution_context_for_measurement, WebFeature::kAudioContextCreateConstantSource);
  base_audio_context_v8_internal::CreateConstantSourceMethod(info);
}

void V8BaseAudioContext::CreateGainMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_BaseAudioContext_createGain");

  ExecutionContext* execution_context_for_measurement = CurrentExecutionContext(info.GetIsolate());
  UseCounter::Count(execution_context_for_measurement, WebFeature::kAudioContextCreateGain);
  base_audio_context_v8_internal::CreateGainMethod(info);
}

void V8BaseAudioContext::CreateDelayMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_BaseAudioContext_createDelay");

  ExecutionContext* execution_context_for_measurement = CurrentExecutionContext(info.GetIsolate());
  UseCounter::Count(execution_context_for_measurement, WebFeature::kAudioContextCreateDelay);
  base_audio_context_v8_internal::CreateDelayMethod(info);
}

void V8BaseAudioContext::CreateBiquadFilterMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_BaseAudioContext_createBiquadFilter");

  ExecutionContext* execution_context_for_measurement = CurrentExecutionContext(info.GetIsolate());
  UseCounter::Count(execution_context_for_measurement, WebFeature::kAudioContextCreateBiquadFilter);
  base_audio_context_v8_internal::CreateBiquadFilterMethod(info);
}

void V8BaseAudioContext::CreateIIRFilterMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_BaseAudioContext_createIIRFilter");

  ExecutionContext* execution_context_for_measurement = CurrentExecutionContext(info.GetIsolate());
  UseCounter::Count(execution_context_for_measurement, WebFeature::kAudioContextCreateIIRFilter);
  base_audio_context_v8_internal::CreateIIRFilterMethod(info);
}

void V8BaseAudioContext::CreateWaveShaperMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_BaseAudioContext_createWaveShaper");

  ExecutionContext* execution_context_for_measurement = CurrentExecutionContext(info.GetIsolate());
  UseCounter::Count(execution_context_for_measurement, WebFeature::kAudioContextCreateWaveShaper);
  base_audio_context_v8_internal::CreateWaveShaperMethod(info);
}

void V8BaseAudioContext::CreatePannerMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_BaseAudioContext_createPanner");

  ExecutionContext* execution_context_for_measurement = CurrentExecutionContext(info.GetIsolate());
  UseCounter::Count(execution_context_for_measurement, WebFeature::kAudioContextCreatePannerAutomated);
  base_audio_context_v8_internal::CreatePannerMethod(info);
}

void V8BaseAudioContext::CreateConvolverMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_BaseAudioContext_createConvolver");

  ExecutionContext* execution_context_for_measurement = CurrentExecutionContext(info.GetIsolate());
  UseCounter::Count(execution_context_for_measurement, WebFeature::kAudioContextCreateConvolver);
  base_audio_context_v8_internal::CreateConvolverMethod(info);
}

void V8BaseAudioContext::CreateDynamicsCompressorMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_BaseAudioContext_createDynamicsCompressor");

  ExecutionContext* execution_context_for_measurement = CurrentExecutionContext(info.GetIsolate());
  UseCounter::Count(execution_context_for_measurement, WebFeature::kAudioContextCreateDynamicsCompressor);
  base_audio_context_v8_internal::CreateDynamicsCompressorMethod(info);
}

void V8BaseAudioContext::CreateAnalyserMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_BaseAudioContext_createAnalyser");

  ExecutionContext* execution_context_for_measurement = CurrentExecutionContext(info.GetIsolate());
  UseCounter::Count(execution_context_for_measurement, WebFeature::kAudioContextCreateAnalyser);
  base_audio_context_v8_internal::CreateAnalyserMethod(info);
}

void V8BaseAudioContext::CreateScriptProcessorMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_BaseAudioContext_createScriptProcessor");

  ExecutionContext* execution_context_for_measurement = CurrentExecutionContext(info.GetIsolate());
  UseCounter::Count(execution_context_for_measurement, WebFeature::kAudioContextCreateScriptProcessor);
  base_audio_context_v8_internal::CreateScriptProcessorMethod(info);
}

void V8BaseAudioContext::CreateStereoPannerMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_BaseAudioContext_createStereoPanner");

  ExecutionContext* execution_context_for_measurement = CurrentExecutionContext(info.GetIsolate());
  UseCounter::Count(execution_context_for_measurement, WebFeature::kAudioContextCreateStereoPanner);
  base_audio_context_v8_internal::CreateStereoPannerMethod(info);
}

void V8BaseAudioContext::CreateOscillatorMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_BaseAudioContext_createOscillator");

  ExecutionContext* execution_context_for_measurement = CurrentExecutionContext(info.GetIsolate());
  UseCounter::Count(execution_context_for_measurement, WebFeature::kAudioContextCreateOscillator);
  base_audio_context_v8_internal::CreateOscillatorMethod(info);
}

void V8BaseAudioContext::CreatePeriodicWaveMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_BaseAudioContext_createPeriodicWave");

  ExecutionContext* execution_context_for_measurement = CurrentExecutionContext(info.GetIsolate());
  UseCounter::Count(execution_context_for_measurement, WebFeature::kAudioContextCreatePeriodicWave);
  base_audio_context_v8_internal::CreatePeriodicWaveMethod(info);
}

void V8BaseAudioContext::CreateChannelSplitterMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_BaseAudioContext_createChannelSplitter");

  ExecutionContext* execution_context_for_measurement = CurrentExecutionContext(info.GetIsolate());
  UseCounter::Count(execution_context_for_measurement, WebFeature::kAudioContextCreateChannelSplitter);
  base_audio_context_v8_internal::CreateChannelSplitterMethod(info);
}

void V8BaseAudioContext::CreateChannelMergerMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_BaseAudioContext_createChannelMerger");

  ExecutionContext* execution_context_for_measurement = CurrentExecutionContext(info.GetIsolate());
  UseCounter::Count(execution_context_for_measurement, WebFeature::kAudioContextCreateChannelMerger);
  base_audio_context_v8_internal::CreateChannelMergerMethod(info);
}

static constexpr V8DOMConfiguration::AccessorConfiguration kV8BaseAudioContextAccessors[] = {
    { "destination", V8BaseAudioContext::DestinationAttributeGetterCallback, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
    { "currentTime", V8BaseAudioContext::CurrentTimeAttributeGetterCallback, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
    { "sampleRate", V8BaseAudioContext::SampleRateAttributeGetterCallback, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
    { "listener", V8BaseAudioContext::ListenerAttributeGetterCallback, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
    { "state", V8BaseAudioContext::StateAttributeGetterCallback, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
    { "onstatechange", V8BaseAudioContext::OnstatechangeAttributeGetterCallback, V8BaseAudioContext::OnstatechangeAttributeSetterCallback, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
};

static constexpr V8DOMConfiguration::MethodConfiguration kV8BaseAudioContextMethods[] = {
    {"createBuffer", V8BaseAudioContext::CreateBufferMethodCallback, 3, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"decodeAudioData", V8BaseAudioContext::DecodeAudioDataMethodCallback, 1, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kDoNotCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"createBufferSource", V8BaseAudioContext::CreateBufferSourceMethodCallback, 0, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"createConstantSource", V8BaseAudioContext::CreateConstantSourceMethodCallback, 0, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"createGain", V8BaseAudioContext::CreateGainMethodCallback, 0, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"createDelay", V8BaseAudioContext::CreateDelayMethodCallback, 0, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"createBiquadFilter", V8BaseAudioContext::CreateBiquadFilterMethodCallback, 0, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"createIIRFilter", V8BaseAudioContext::CreateIIRFilterMethodCallback, 2, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"createWaveShaper", V8BaseAudioContext::CreateWaveShaperMethodCallback, 0, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"createPanner", V8BaseAudioContext::CreatePannerMethodCallback, 0, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"createConvolver", V8BaseAudioContext::CreateConvolverMethodCallback, 0, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"createDynamicsCompressor", V8BaseAudioContext::CreateDynamicsCompressorMethodCallback, 0, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"createAnalyser", V8BaseAudioContext::CreateAnalyserMethodCallback, 0, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"createScriptProcessor", V8BaseAudioContext::CreateScriptProcessorMethodCallback, 0, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"createStereoPanner", V8BaseAudioContext::CreateStereoPannerMethodCallback, 0, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"createOscillator", V8BaseAudioContext::CreateOscillatorMethodCallback, 0, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"createPeriodicWave", V8BaseAudioContext::CreatePeriodicWaveMethodCallback, 2, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"createChannelSplitter", V8BaseAudioContext::CreateChannelSplitterMethodCallback, 0, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"createChannelMerger", V8BaseAudioContext::CreateChannelMergerMethodCallback, 0, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
};

static void InstallV8BaseAudioContextTemplate(
    v8::Isolate* isolate,
    const DOMWrapperWorld& world,
    v8::Local<v8::FunctionTemplate> interface_template) {
  // Initialize the interface object's template.
  V8DOMConfiguration::InitializeDOMInterfaceTemplate(isolate, interface_template, V8BaseAudioContext::GetWrapperTypeInfo()->interface_name, V8EventTarget::DomTemplate(isolate, world), V8BaseAudioContext::kInternalFieldCount);

  v8::Local<v8::Signature> signature = v8::Signature::New(isolate, interface_template);
  ALLOW_UNUSED_LOCAL(signature);
  v8::Local<v8::ObjectTemplate> instance_template = interface_template->InstanceTemplate();
  ALLOW_UNUSED_LOCAL(instance_template);
  v8::Local<v8::ObjectTemplate> prototype_template = interface_template->PrototypeTemplate();
  ALLOW_UNUSED_LOCAL(prototype_template);

  // Register IDL constants, attributes and operations.
  V8DOMConfiguration::InstallAccessors(
      isolate, world, instance_template, prototype_template, interface_template,
      signature, kV8BaseAudioContextAccessors, base::size(kV8BaseAudioContextAccessors));
  V8DOMConfiguration::InstallMethods(
      isolate, world, instance_template, prototype_template, interface_template,
      signature, kV8BaseAudioContextMethods, base::size(kV8BaseAudioContextMethods));

  // Custom signature

  V8BaseAudioContext::InstallRuntimeEnabledFeaturesOnTemplate(
      isolate, world, interface_template);
}

void V8BaseAudioContext::InstallRuntimeEnabledFeaturesOnTemplate(
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

v8::Local<v8::FunctionTemplate> V8BaseAudioContext::DomTemplate(
    v8::Isolate* isolate, const DOMWrapperWorld& world) {
  return V8DOMConfiguration::DomClassTemplate(
      isolate, world, const_cast<WrapperTypeInfo*>(V8BaseAudioContext::GetWrapperTypeInfo()),
      InstallV8BaseAudioContextTemplate);
}

bool V8BaseAudioContext::HasInstance(v8::Local<v8::Value> v8_value, v8::Isolate* isolate) {
  return V8PerIsolateData::From(isolate)->HasInstance(V8BaseAudioContext::GetWrapperTypeInfo(), v8_value);
}

v8::Local<v8::Object> V8BaseAudioContext::FindInstanceInPrototypeChain(
    v8::Local<v8::Value> v8_value, v8::Isolate* isolate) {
  return V8PerIsolateData::From(isolate)->FindInstanceInPrototypeChain(
      V8BaseAudioContext::GetWrapperTypeInfo(), v8_value);
}

BaseAudioContext* V8BaseAudioContext::ToImplWithTypeCheck(
    v8::Isolate* isolate, v8::Local<v8::Value> value) {
  return HasInstance(value, isolate) ? ToImpl(v8::Local<v8::Object>::Cast(value)) : nullptr;
}

BaseAudioContext* NativeValueTraits<BaseAudioContext>::NativeValue(
    v8::Isolate* isolate, v8::Local<v8::Value> value, ExceptionState& exception_state) {
  BaseAudioContext* native_value = V8BaseAudioContext::ToImplWithTypeCheck(isolate, value);
  if (!native_value) {
    exception_state.ThrowTypeError(ExceptionMessages::FailedToConvertJSValue(
        "BaseAudioContext"));
  }
  return native_value;
}

void V8BaseAudioContext::InstallConditionalFeatures(
    v8::Local<v8::Context> context,
    const DOMWrapperWorld& world,
    v8::Local<v8::Object> instance_object,
    v8::Local<v8::Object> prototype_object,
    v8::Local<v8::Function> interface_object,
    v8::Local<v8::FunctionTemplate> interface_template) {
  CHECK(!interface_template.IsEmpty());
  DCHECK((!prototype_object.IsEmpty() && !interface_object.IsEmpty()) ||
         !instance_object.IsEmpty());

  v8::Isolate* isolate = context->GetIsolate();

  v8::Local<v8::Signature> signature = v8::Signature::New(isolate, interface_template);
  ExecutionContext* execution_context = ToExecutionContext(context);
  DCHECK(execution_context);
  bool is_secure_context = (execution_context && execution_context->IsSecureContext());

  if (!prototype_object.IsEmpty() || !interface_object.IsEmpty()) {
    if (is_secure_context) {
      static const V8DOMConfiguration::AccessorConfiguration accessor_configurations[] = {
          { "audioWorklet", V8BaseAudioContext::AudioWorkletAttributeGetterCallback, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
      };
      V8DOMConfiguration::InstallAccessors(
          isolate, world, instance_object, prototype_object, interface_object,
          signature, accessor_configurations,
          base::size(accessor_configurations));
    }
  }
}

}  // namespace blink
