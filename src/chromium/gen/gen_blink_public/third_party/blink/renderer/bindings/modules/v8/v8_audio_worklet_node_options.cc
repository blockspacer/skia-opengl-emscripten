// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated from the Jinja2 template
// third_party/blink/renderer/bindings/templates/dictionary_v8.cc.tmpl
// by the script code_generator_v8.py.
// DO NOT MODIFY!

// clang-format off
#include "third_party/blink/renderer/bindings/modules/v8/v8_audio_worklet_node_options.h"

#include "base/stl_util.h"
#include "third_party/blink/renderer/bindings/core/v8/idl_types.h"
#include "third_party/blink/renderer/bindings/core/v8/native_value_traits_impl.h"
#include "third_party/blink/renderer/bindings/core/v8/script_value.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_audio_node_options.h"
#include "third_party/blink/renderer/platform/bindings/exception_state.h"

namespace blink {

static const v8::Eternal<v8::Name>* eternalV8AudioWorkletNodeOptionsKeys(v8::Isolate* isolate) {
  static const char* const kKeys[] = {
    "numberOfInputs",
    "numberOfOutputs",
    "outputChannelCount",
    "parameterData",
    "processorOptions",
  };
  return V8PerIsolateData::From(isolate)->FindOrCreateEternalNameCache(
      kKeys, kKeys, base::size(kKeys));
}

void V8AudioWorkletNodeOptions::ToImpl(v8::Isolate* isolate, v8::Local<v8::Value> v8_value, AudioWorkletNodeOptions* impl, ExceptionState& exception_state) {
  if (IsUndefinedOrNull(v8_value)) {
    return;
  }
  if (!v8_value->IsObject()) {
    exception_state.ThrowTypeError("cannot convert to dictionary.");
    return;
  }
  v8::Local<v8::Object> v8Object = v8_value.As<v8::Object>();
  ALLOW_UNUSED_LOCAL(v8Object);

  V8AudioNodeOptions::ToImpl(isolate, v8_value, impl, exception_state);
  if (exception_state.HadException())
    return;

  const v8::Eternal<v8::Name>* keys = eternalV8AudioWorkletNodeOptionsKeys(isolate);
  v8::TryCatch block(isolate);
  v8::Local<v8::Context> context = isolate->GetCurrentContext();
  v8::Local<v8::Value> number_of_inputs_value;
  if (!v8Object->Get(context, keys[0].Get(isolate)).ToLocal(&number_of_inputs_value)) {
    exception_state.RethrowV8Exception(block.Exception());
    return;
  }
  if (number_of_inputs_value.IsEmpty() || number_of_inputs_value->IsUndefined()) {
    // Do nothing.
  } else {
    uint32_t number_of_inputs_cpp_value = NativeValueTraits<IDLUnsignedLong>::NativeValue(isolate, number_of_inputs_value, exception_state);
    if (exception_state.HadException())
      return;
    impl->setNumberOfInputs(number_of_inputs_cpp_value);
  }

  v8::Local<v8::Value> number_of_outputs_value;
  if (!v8Object->Get(context, keys[1].Get(isolate)).ToLocal(&number_of_outputs_value)) {
    exception_state.RethrowV8Exception(block.Exception());
    return;
  }
  if (number_of_outputs_value.IsEmpty() || number_of_outputs_value->IsUndefined()) {
    // Do nothing.
  } else {
    uint32_t number_of_outputs_cpp_value = NativeValueTraits<IDLUnsignedLong>::NativeValue(isolate, number_of_outputs_value, exception_state);
    if (exception_state.HadException())
      return;
    impl->setNumberOfOutputs(number_of_outputs_cpp_value);
  }

  v8::Local<v8::Value> output_channel_count_value;
  if (!v8Object->Get(context, keys[2].Get(isolate)).ToLocal(&output_channel_count_value)) {
    exception_state.RethrowV8Exception(block.Exception());
    return;
  }
  if (output_channel_count_value.IsEmpty() || output_channel_count_value->IsUndefined()) {
    // Do nothing.
  } else {
    Vector<uint32_t> output_channel_count_cpp_value = NativeValueTraits<IDLSequence<IDLUnsignedLong>>::NativeValue(isolate, output_channel_count_value, exception_state);
    if (exception_state.HadException())
      return;
    impl->setOutputChannelCount(output_channel_count_cpp_value);
  }

  v8::Local<v8::Value> parameter_data_value;
  if (!v8Object->Get(context, keys[3].Get(isolate)).ToLocal(&parameter_data_value)) {
    exception_state.RethrowV8Exception(block.Exception());
    return;
  }
  if (parameter_data_value.IsEmpty() || parameter_data_value->IsUndefined()) {
    // Do nothing.
  } else {
    Vector<std::pair<String, double>> parameter_data_cpp_value = NativeValueTraits<IDLRecord<IDLString, IDLDouble>>::NativeValue(isolate, parameter_data_value, exception_state);
    if (exception_state.HadException())
      return;
    impl->setParameterData(parameter_data_cpp_value);
  }

  v8::Local<v8::Value> processor_options_value;
  if (!v8Object->Get(context, keys[4].Get(isolate)).ToLocal(&processor_options_value)) {
    exception_state.RethrowV8Exception(block.Exception());
    return;
  }
  if (processor_options_value.IsEmpty() || processor_options_value->IsUndefined()) {
    // Do nothing.
  } else {
    ScriptValue processor_options_cpp_value = ScriptValue(ScriptState::Current(isolate), processor_options_value);
    if (!processor_options_cpp_value.IsObject()) {
      exception_state.ThrowTypeError("member processorOptions is not an object.");
      return;
    }
    impl->setProcessorOptions(processor_options_cpp_value);
  }
}

v8::Local<v8::Value> AudioWorkletNodeOptions::ToV8Impl(v8::Local<v8::Object> creationContext, v8::Isolate* isolate) const {
  v8::Local<v8::Object> v8Object = v8::Object::New(isolate);
  if (!toV8AudioWorkletNodeOptions(this, v8Object, creationContext, isolate))
    return v8::Undefined(isolate);
  return v8Object;
}

bool toV8AudioWorkletNodeOptions(const AudioWorkletNodeOptions* impl, v8::Local<v8::Object> dictionary, v8::Local<v8::Object> creationContext, v8::Isolate* isolate) {
  if (!toV8AudioNodeOptions(impl, dictionary, creationContext, isolate))
    return false;

  const v8::Eternal<v8::Name>* keys = eternalV8AudioWorkletNodeOptionsKeys(isolate);
  v8::Local<v8::Context> context = isolate->GetCurrentContext();

  auto create_property = [dictionary, context, keys, isolate](
                             size_t key_index, v8::Local<v8::Value> value) {
    bool added_property;
    v8::Local<v8::Name> key = keys[key_index].Get(isolate);
    if (!dictionary->CreateDataProperty(context, key, value)
             .To(&added_property)) {
      return false;
    }
    return added_property;
  };

  v8::Local<v8::Value> number_of_inputs_value;
  bool number_of_inputs_has_value_or_default = false;
  if (impl->hasNumberOfInputs()) {
    number_of_inputs_value = v8::Integer::NewFromUnsigned(isolate, impl->numberOfInputs());
    number_of_inputs_has_value_or_default = true;
  } else {
    number_of_inputs_value = v8::Integer::NewFromUnsigned(isolate, 1u);
    number_of_inputs_has_value_or_default = true;
  }
  if (number_of_inputs_has_value_or_default &&
      !create_property(0, number_of_inputs_value)) {
    return false;
  }

  v8::Local<v8::Value> number_of_outputs_value;
  bool number_of_outputs_has_value_or_default = false;
  if (impl->hasNumberOfOutputs()) {
    number_of_outputs_value = v8::Integer::NewFromUnsigned(isolate, impl->numberOfOutputs());
    number_of_outputs_has_value_or_default = true;
  } else {
    number_of_outputs_value = v8::Integer::NewFromUnsigned(isolate, 1u);
    number_of_outputs_has_value_or_default = true;
  }
  if (number_of_outputs_has_value_or_default &&
      !create_property(1, number_of_outputs_value)) {
    return false;
  }

  v8::Local<v8::Value> output_channel_count_value;
  bool output_channel_count_has_value_or_default = false;
  if (impl->hasOutputChannelCount()) {
    output_channel_count_value = ToV8(impl->outputChannelCount(), creationContext, isolate);
    output_channel_count_has_value_or_default = true;
  }
  if (output_channel_count_has_value_or_default &&
      !create_property(2, output_channel_count_value)) {
    return false;
  }

  v8::Local<v8::Value> parameter_data_value;
  bool parameter_data_has_value_or_default = false;
  if (impl->hasParameterData()) {
    parameter_data_value = ToV8(impl->parameterData(), creationContext, isolate);
    parameter_data_has_value_or_default = true;
  }
  if (parameter_data_has_value_or_default &&
      !create_property(3, parameter_data_value)) {
    return false;
  }

  v8::Local<v8::Value> processor_options_value;
  bool processor_options_has_value_or_default = false;
  if (impl->hasProcessorOptions()) {
    DCHECK(impl->processorOptions().IsObject());
    processor_options_value = impl->processorOptions().V8Value();
    processor_options_has_value_or_default = true;
  }
  if (processor_options_has_value_or_default &&
      !create_property(4, processor_options_value)) {
    return false;
  }

  return true;
}

AudioWorkletNodeOptions* NativeValueTraits<AudioWorkletNodeOptions>::NativeValue(v8::Isolate* isolate, v8::Local<v8::Value> value, ExceptionState& exception_state) {
  AudioWorkletNodeOptions* impl = AudioWorkletNodeOptions::Create();
  V8AudioWorkletNodeOptions::ToImpl(isolate, value, impl, exception_state);
  return impl;
}

}  // namespace blink
