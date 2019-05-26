// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated from the Jinja2 template
// third_party/blink/renderer/bindings/templates/interface.cc.tmpl
// by the script code_generator_v8.py.
// DO NOT MODIFY!

// clang-format off
#include "third_party/blink/renderer/bindings/modules/v8/v8_analyser_node.h"

#include <algorithm>

#include "base/memory/scoped_refptr.h"
#include "third_party/blink/renderer/bindings/core/v8/idl_types.h"
#include "third_party/blink/renderer/bindings/core/v8/native_value_traits_impl.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_array_buffer_view.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_dom_configuration.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_float32_array.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_uint8_array.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_analyser_options.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_base_audio_context.h"
#include "third_party/blink/renderer/core/execution_context/execution_context.h"
#include "third_party/blink/renderer/core/frame/dactyloscoper.h"
#include "third_party/blink/renderer/core/frame/local_dom_window.h"
#include "third_party/blink/renderer/core/frame/use_counter.h"
#include "third_party/blink/renderer/core/typed_arrays/array_buffer_view_helpers.h"
#include "third_party/blink/renderer/core/typed_arrays/flexible_array_buffer_view.h"
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
const WrapperTypeInfo v8_analyser_node_wrapper_type_info = {
    gin::kEmbedderBlink,
    V8AnalyserNode::DomTemplate,
    nullptr,
    "AnalyserNode",
    V8AudioNode::GetWrapperTypeInfo(),
    WrapperTypeInfo::kWrapperTypeObjectPrototype,
    WrapperTypeInfo::kObjectClassId,
    WrapperTypeInfo::kNotInheritFromActiveScriptWrappable,
};
#if defined(COMPONENT_BUILD) && defined(WIN32) && defined(__clang__)
#pragma clang diagnostic pop
#endif

// This static member must be declared by DEFINE_WRAPPERTYPEINFO in AnalyserNode.h.
// For details, see the comment of DEFINE_WRAPPERTYPEINFO in
// platform/bindings/ScriptWrappable.h.
const WrapperTypeInfo& AnalyserNode::wrapper_type_info_ = v8_analyser_node_wrapper_type_info;

// not [ActiveScriptWrappable]
static_assert(
    !std::is_base_of<ActiveScriptWrappableBase, AnalyserNode>::value,
    "AnalyserNode inherits from ActiveScriptWrappable<>, but is not specifying "
    "[ActiveScriptWrappable] extended attribute in the IDL file.  "
    "Be consistent.");
static_assert(
    std::is_same<decltype(&AnalyserNode::HasPendingActivity),
                 decltype(&ScriptWrappable::HasPendingActivity)>::value,
    "AnalyserNode is overriding hasPendingActivity(), but is not specifying "
    "[ActiveScriptWrappable] extended attribute in the IDL file.  "
    "Be consistent.");

namespace analyser_node_v8_internal {

static void FftSizeAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  AnalyserNode* impl = V8AnalyserNode::ToImpl(holder);

  V8SetReturnValueUnsigned(info, impl->fftSize());
}

static void FftSizeAttributeSetter(
    v8::Local<v8::Value> v8_value, const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Isolate* isolate = info.GetIsolate();
  ALLOW_UNUSED_LOCAL(isolate);

  v8::Local<v8::Object> holder = info.Holder();
  ALLOW_UNUSED_LOCAL(holder);

  AnalyserNode* impl = V8AnalyserNode::ToImpl(holder);

  ExceptionState exception_state(isolate, ExceptionState::kSetterContext, "AnalyserNode", "fftSize");

  // Prepare the value to be set.
  uint32_t cpp_value = NativeValueTraits<IDLUnsignedLong>::NativeValue(info.GetIsolate(), v8_value, exception_state);
  if (exception_state.HadException())
    return;

  impl->setFftSize(cpp_value, exception_state);
}

static void FrequencyBinCountAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  AnalyserNode* impl = V8AnalyserNode::ToImpl(holder);

  V8SetReturnValueUnsigned(info, impl->frequencyBinCount());
}

static void MinDecibelsAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  AnalyserNode* impl = V8AnalyserNode::ToImpl(holder);

  V8SetReturnValue(info, impl->minDecibels());
}

static void MinDecibelsAttributeSetter(
    v8::Local<v8::Value> v8_value, const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Isolate* isolate = info.GetIsolate();
  ALLOW_UNUSED_LOCAL(isolate);

  v8::Local<v8::Object> holder = info.Holder();
  ALLOW_UNUSED_LOCAL(holder);

  AnalyserNode* impl = V8AnalyserNode::ToImpl(holder);

  ExceptionState exception_state(isolate, ExceptionState::kSetterContext, "AnalyserNode", "minDecibels");

  // Prepare the value to be set.
  double cpp_value = NativeValueTraits<IDLDouble>::NativeValue(info.GetIsolate(), v8_value, exception_state);
  if (exception_state.HadException())
    return;

  impl->setMinDecibels(cpp_value, exception_state);
}

static void MaxDecibelsAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  AnalyserNode* impl = V8AnalyserNode::ToImpl(holder);

  V8SetReturnValue(info, impl->maxDecibels());
}

static void MaxDecibelsAttributeSetter(
    v8::Local<v8::Value> v8_value, const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Isolate* isolate = info.GetIsolate();
  ALLOW_UNUSED_LOCAL(isolate);

  v8::Local<v8::Object> holder = info.Holder();
  ALLOW_UNUSED_LOCAL(holder);

  AnalyserNode* impl = V8AnalyserNode::ToImpl(holder);

  ExceptionState exception_state(isolate, ExceptionState::kSetterContext, "AnalyserNode", "maxDecibels");

  // Prepare the value to be set.
  double cpp_value = NativeValueTraits<IDLDouble>::NativeValue(info.GetIsolate(), v8_value, exception_state);
  if (exception_state.HadException())
    return;

  impl->setMaxDecibels(cpp_value, exception_state);
}

static void SmoothingTimeConstantAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  AnalyserNode* impl = V8AnalyserNode::ToImpl(holder);

  V8SetReturnValue(info, impl->smoothingTimeConstant());
}

static void SmoothingTimeConstantAttributeSetter(
    v8::Local<v8::Value> v8_value, const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Isolate* isolate = info.GetIsolate();
  ALLOW_UNUSED_LOCAL(isolate);

  v8::Local<v8::Object> holder = info.Holder();
  ALLOW_UNUSED_LOCAL(holder);

  AnalyserNode* impl = V8AnalyserNode::ToImpl(holder);

  ExceptionState exception_state(isolate, ExceptionState::kSetterContext, "AnalyserNode", "smoothingTimeConstant");

  // Prepare the value to be set.
  double cpp_value = NativeValueTraits<IDLDouble>::NativeValue(info.GetIsolate(), v8_value, exception_state);
  if (exception_state.HadException())
    return;

  impl->setSmoothingTimeConstant(cpp_value, exception_state);
}

static void GetFloatFrequencyDataMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exception_state(info.GetIsolate(), ExceptionState::kExecutionContext, "AnalyserNode", "getFloatFrequencyData");

  AnalyserNode* impl = V8AnalyserNode::ToImpl(info.Holder());

  if (UNLIKELY(info.Length() < 1)) {
    exception_state.ThrowTypeError(ExceptionMessages::NotEnoughArguments(1, info.Length()));
    return;
  }

  NotShared<DOMFloat32Array> array;
  array = ToNotShared<NotShared<DOMFloat32Array>>(info.GetIsolate(), info[0], exception_state);
  if (exception_state.HadException())
    return;
  if (!array) {
    exception_state.ThrowTypeError("parameter 1 is not of type 'Float32Array'.");
    return;
  }

  impl->getFloatFrequencyData(array);
}

static void GetByteFrequencyDataMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exception_state(info.GetIsolate(), ExceptionState::kExecutionContext, "AnalyserNode", "getByteFrequencyData");

  AnalyserNode* impl = V8AnalyserNode::ToImpl(info.Holder());

  if (UNLIKELY(info.Length() < 1)) {
    exception_state.ThrowTypeError(ExceptionMessages::NotEnoughArguments(1, info.Length()));
    return;
  }

  NotShared<DOMUint8Array> array;
  array = ToNotShared<NotShared<DOMUint8Array>>(info.GetIsolate(), info[0], exception_state);
  if (exception_state.HadException())
    return;
  if (!array) {
    exception_state.ThrowTypeError("parameter 1 is not of type 'Uint8Array'.");
    return;
  }

  impl->getByteFrequencyData(array);
}

static void GetFloatTimeDomainDataMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exception_state(info.GetIsolate(), ExceptionState::kExecutionContext, "AnalyserNode", "getFloatTimeDomainData");

  AnalyserNode* impl = V8AnalyserNode::ToImpl(info.Holder());

  if (UNLIKELY(info.Length() < 1)) {
    exception_state.ThrowTypeError(ExceptionMessages::NotEnoughArguments(1, info.Length()));
    return;
  }

  NotShared<DOMFloat32Array> array;
  array = ToNotShared<NotShared<DOMFloat32Array>>(info.GetIsolate(), info[0], exception_state);
  if (exception_state.HadException())
    return;
  if (!array) {
    exception_state.ThrowTypeError("parameter 1 is not of type 'Float32Array'.");
    return;
  }

  impl->getFloatTimeDomainData(array);
}

static void GetByteTimeDomainDataMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exception_state(info.GetIsolate(), ExceptionState::kExecutionContext, "AnalyserNode", "getByteTimeDomainData");

  AnalyserNode* impl = V8AnalyserNode::ToImpl(info.Holder());

  if (UNLIKELY(info.Length() < 1)) {
    exception_state.ThrowTypeError(ExceptionMessages::NotEnoughArguments(1, info.Length()));
    return;
  }

  NotShared<DOMUint8Array> array;
  array = ToNotShared<NotShared<DOMUint8Array>>(info.GetIsolate(), info[0], exception_state);
  if (exception_state.HadException())
    return;
  if (!array) {
    exception_state.ThrowTypeError("parameter 1 is not of type 'Uint8Array'.");
    return;
  }

  impl->getByteTimeDomainData(array);
}

static void Constructor(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_AnalyserNode_ConstructorCallback");

  ExceptionState exception_state(info.GetIsolate(), ExceptionState::kConstructionContext, "AnalyserNode");

  if (UNLIKELY(info.Length() < 1)) {
    exception_state.ThrowTypeError(ExceptionMessages::NotEnoughArguments(1, info.Length()));
    return;
  }

  BaseAudioContext* context;
  AnalyserOptions* options;
  context = V8BaseAudioContext::ToImplWithTypeCheck(info.GetIsolate(), info[0]);
  if (!context) {
    exception_state.ThrowTypeError("parameter 1 is not of type 'BaseAudioContext'.");
    return;
  }

  if (!info[1]->IsNullOrUndefined() && !info[1]->IsObject()) {
    exception_state.ThrowTypeError("parameter 2 ('options') is not an object.");
    return;
  }
  options = NativeValueTraits<AnalyserOptions>::NativeValue(info.GetIsolate(), info[1], exception_state);
  if (exception_state.HadException())
    return;

  AnalyserNode* impl = AnalyserNode::Create(context, options, exception_state);
  if (exception_state.HadException()) {
    return;
  }
  v8::Local<v8::Object> wrapper = info.Holder();
  wrapper = impl->AssociateWithWrapper(info.GetIsolate(), V8AnalyserNode::GetWrapperTypeInfo(), wrapper);
  V8SetReturnValue(info, wrapper);
}

MODULES_EXPORT void ConstructorCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_AnalyserNode_Constructor");

  ExecutionContext* execution_context_for_measurement = CurrentExecutionContext(info.GetIsolate());
  UseCounter::Count(execution_context_for_measurement, WebFeature::kV8AnalyserNode_Constructor);
  if (!info.IsConstructCall()) {
    V8ThrowException::ThrowTypeError(
        info.GetIsolate(),
        ExceptionMessages::ConstructorNotCallableAsFunction("AnalyserNode"));
    return;
  }

  if (ConstructorMode::Current(info.GetIsolate()) == ConstructorMode::kWrapExistingObject) {
    V8SetReturnValue(info, info.Holder());
    return;
  }

  analyser_node_v8_internal::Constructor(info);
}

}  // namespace analyser_node_v8_internal

void V8AnalyserNode::FftSizeAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_AnalyserNode_fftSize_Getter");

  analyser_node_v8_internal::FftSizeAttributeGetter(info);
}

void V8AnalyserNode::FftSizeAttributeSetterCallback(
    const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_AnalyserNode_fftSize_Setter");

  v8::Local<v8::Value> v8_value = info[0];

  analyser_node_v8_internal::FftSizeAttributeSetter(v8_value, info);
}

void V8AnalyserNode::FrequencyBinCountAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_AnalyserNode_frequencyBinCount_Getter");

  analyser_node_v8_internal::FrequencyBinCountAttributeGetter(info);
}

void V8AnalyserNode::MinDecibelsAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_AnalyserNode_minDecibels_Getter");

  analyser_node_v8_internal::MinDecibelsAttributeGetter(info);
}

void V8AnalyserNode::MinDecibelsAttributeSetterCallback(
    const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_AnalyserNode_minDecibels_Setter");

  v8::Local<v8::Value> v8_value = info[0];

  analyser_node_v8_internal::MinDecibelsAttributeSetter(v8_value, info);
}

void V8AnalyserNode::MaxDecibelsAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_AnalyserNode_maxDecibels_Getter");

  analyser_node_v8_internal::MaxDecibelsAttributeGetter(info);
}

void V8AnalyserNode::MaxDecibelsAttributeSetterCallback(
    const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_AnalyserNode_maxDecibels_Setter");

  v8::Local<v8::Value> v8_value = info[0];

  analyser_node_v8_internal::MaxDecibelsAttributeSetter(v8_value, info);
}

void V8AnalyserNode::SmoothingTimeConstantAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_AnalyserNode_smoothingTimeConstant_Getter");

  analyser_node_v8_internal::SmoothingTimeConstantAttributeGetter(info);
}

void V8AnalyserNode::SmoothingTimeConstantAttributeSetterCallback(
    const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_AnalyserNode_smoothingTimeConstant_Setter");

  v8::Local<v8::Value> v8_value = info[0];

  analyser_node_v8_internal::SmoothingTimeConstantAttributeSetter(v8_value, info);
}

void V8AnalyserNode::GetFloatFrequencyDataMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_AnalyserNode_getFloatFrequencyData");

  ExecutionContext* execution_context_for_measurement = CurrentExecutionContext(info.GetIsolate());
  UseCounter::Count(execution_context_for_measurement, WebFeature::kV8AnalyserNode_GetFloatFrequencyData_Method);
  Dactyloscoper::Record(execution_context_for_measurement, WebFeature::kV8AnalyserNode_GetFloatFrequencyData_Method);
  analyser_node_v8_internal::GetFloatFrequencyDataMethod(info);
}

void V8AnalyserNode::GetByteFrequencyDataMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_AnalyserNode_getByteFrequencyData");

  ExecutionContext* execution_context_for_measurement = CurrentExecutionContext(info.GetIsolate());
  UseCounter::Count(execution_context_for_measurement, WebFeature::kV8AnalyserNode_GetByteFrequencyData_Method);
  Dactyloscoper::Record(execution_context_for_measurement, WebFeature::kV8AnalyserNode_GetByteFrequencyData_Method);
  analyser_node_v8_internal::GetByteFrequencyDataMethod(info);
}

void V8AnalyserNode::GetFloatTimeDomainDataMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_AnalyserNode_getFloatTimeDomainData");

  ExecutionContext* execution_context_for_measurement = CurrentExecutionContext(info.GetIsolate());
  UseCounter::Count(execution_context_for_measurement, WebFeature::kV8AnalyserNode_GetFloatTimeDomainData_Method);
  Dactyloscoper::Record(execution_context_for_measurement, WebFeature::kV8AnalyserNode_GetFloatTimeDomainData_Method);
  analyser_node_v8_internal::GetFloatTimeDomainDataMethod(info);
}

void V8AnalyserNode::GetByteTimeDomainDataMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_AnalyserNode_getByteTimeDomainData");

  ExecutionContext* execution_context_for_measurement = CurrentExecutionContext(info.GetIsolate());
  UseCounter::Count(execution_context_for_measurement, WebFeature::kV8AnalyserNode_GetByteTimeDomainData_Method);
  Dactyloscoper::Record(execution_context_for_measurement, WebFeature::kV8AnalyserNode_GetByteTimeDomainData_Method);
  analyser_node_v8_internal::GetByteTimeDomainDataMethod(info);
}

static constexpr V8DOMConfiguration::AccessorConfiguration kV8AnalyserNodeAccessors[] = {
    { "fftSize", V8AnalyserNode::FftSizeAttributeGetterCallback, V8AnalyserNode::FftSizeAttributeSetterCallback, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
    { "frequencyBinCount", V8AnalyserNode::FrequencyBinCountAttributeGetterCallback, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
    { "minDecibels", V8AnalyserNode::MinDecibelsAttributeGetterCallback, V8AnalyserNode::MinDecibelsAttributeSetterCallback, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
    { "maxDecibels", V8AnalyserNode::MaxDecibelsAttributeGetterCallback, V8AnalyserNode::MaxDecibelsAttributeSetterCallback, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
    { "smoothingTimeConstant", V8AnalyserNode::SmoothingTimeConstantAttributeGetterCallback, V8AnalyserNode::SmoothingTimeConstantAttributeSetterCallback, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
};

static constexpr V8DOMConfiguration::MethodConfiguration kV8AnalyserNodeMethods[] = {
    {"getFloatFrequencyData", V8AnalyserNode::GetFloatFrequencyDataMethodCallback, 1, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"getByteFrequencyData", V8AnalyserNode::GetByteFrequencyDataMethodCallback, 1, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"getFloatTimeDomainData", V8AnalyserNode::GetFloatTimeDomainDataMethodCallback, 1, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"getByteTimeDomainData", V8AnalyserNode::GetByteTimeDomainDataMethodCallback, 1, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
};

static void InstallV8AnalyserNodeTemplate(
    v8::Isolate* isolate,
    const DOMWrapperWorld& world,
    v8::Local<v8::FunctionTemplate> interface_template) {
  // Initialize the interface object's template.
  V8DOMConfiguration::InitializeDOMInterfaceTemplate(isolate, interface_template, V8AnalyserNode::GetWrapperTypeInfo()->interface_name, V8AudioNode::DomTemplate(isolate, world), V8AnalyserNode::kInternalFieldCount);
  interface_template->SetCallHandler(analyser_node_v8_internal::ConstructorCallback);
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
      signature, kV8AnalyserNodeAccessors, base::size(kV8AnalyserNodeAccessors));
  V8DOMConfiguration::InstallMethods(
      isolate, world, instance_template, prototype_template, interface_template,
      signature, kV8AnalyserNodeMethods, base::size(kV8AnalyserNodeMethods));

  // Custom signature

  V8AnalyserNode::InstallRuntimeEnabledFeaturesOnTemplate(
      isolate, world, interface_template);
}

void V8AnalyserNode::InstallRuntimeEnabledFeaturesOnTemplate(
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

v8::Local<v8::FunctionTemplate> V8AnalyserNode::DomTemplate(
    v8::Isolate* isolate, const DOMWrapperWorld& world) {
  return V8DOMConfiguration::DomClassTemplate(
      isolate, world, const_cast<WrapperTypeInfo*>(V8AnalyserNode::GetWrapperTypeInfo()),
      InstallV8AnalyserNodeTemplate);
}

bool V8AnalyserNode::HasInstance(v8::Local<v8::Value> v8_value, v8::Isolate* isolate) {
  return V8PerIsolateData::From(isolate)->HasInstance(V8AnalyserNode::GetWrapperTypeInfo(), v8_value);
}

v8::Local<v8::Object> V8AnalyserNode::FindInstanceInPrototypeChain(
    v8::Local<v8::Value> v8_value, v8::Isolate* isolate) {
  return V8PerIsolateData::From(isolate)->FindInstanceInPrototypeChain(
      V8AnalyserNode::GetWrapperTypeInfo(), v8_value);
}

AnalyserNode* V8AnalyserNode::ToImplWithTypeCheck(
    v8::Isolate* isolate, v8::Local<v8::Value> value) {
  return HasInstance(value, isolate) ? ToImpl(v8::Local<v8::Object>::Cast(value)) : nullptr;
}

AnalyserNode* NativeValueTraits<AnalyserNode>::NativeValue(
    v8::Isolate* isolate, v8::Local<v8::Value> value, ExceptionState& exception_state) {
  AnalyserNode* native_value = V8AnalyserNode::ToImplWithTypeCheck(isolate, value);
  if (!native_value) {
    exception_state.ThrowTypeError(ExceptionMessages::FailedToConvertJSValue(
        "AnalyserNode"));
  }
  return native_value;
}

}  // namespace blink
