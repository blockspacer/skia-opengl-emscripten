// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated from the Jinja2 template
// third_party/blink/renderer/bindings/templates/interface.cc.tmpl
// by the script code_generator_v8.py.
// DO NOT MODIFY!

// clang-format off
#include "third_party/blink/renderer/bindings/modules/v8/v8_biquad_filter_node.h"

#include <algorithm>

#include "base/memory/scoped_refptr.h"
#include "third_party/blink/renderer/bindings/core/v8/idl_types.h"
#include "third_party/blink/renderer/bindings/core/v8/native_value_traits_impl.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_array_buffer_view.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_dom_configuration.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_float32_array.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_audio_param.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_base_audio_context.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_biquad_filter_options.h"
#include "third_party/blink/renderer/core/execution_context/execution_context.h"
#include "third_party/blink/renderer/core/frame/local_dom_window.h"
#include "third_party/blink/renderer/core/frame/use_counter.h"
#include "third_party/blink/renderer/core/inspector/console_message.h"
#include "third_party/blink/renderer/core/typed_arrays/array_buffer_view_helpers.h"
#include "third_party/blink/renderer/core/typed_arrays/flexible_array_buffer_view.h"
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
const WrapperTypeInfo v8_biquad_filter_node_wrapper_type_info = {
    gin::kEmbedderBlink,
    V8BiquadFilterNode::DomTemplate,
    nullptr,
    "BiquadFilterNode",
    V8AudioNode::GetWrapperTypeInfo(),
    WrapperTypeInfo::kWrapperTypeObjectPrototype,
    WrapperTypeInfo::kObjectClassId,
    WrapperTypeInfo::kNotInheritFromActiveScriptWrappable,
};
#if defined(COMPONENT_BUILD) && defined(WIN32) && defined(__clang__)
#pragma clang diagnostic pop
#endif

// This static member must be declared by DEFINE_WRAPPERTYPEINFO in BiquadFilterNode.h.
// For details, see the comment of DEFINE_WRAPPERTYPEINFO in
// platform/bindings/ScriptWrappable.h.
const WrapperTypeInfo& BiquadFilterNode::wrapper_type_info_ = v8_biquad_filter_node_wrapper_type_info;

// not [ActiveScriptWrappable]
static_assert(
    !std::is_base_of<ActiveScriptWrappableBase, BiquadFilterNode>::value,
    "BiquadFilterNode inherits from ActiveScriptWrappable<>, but is not specifying "
    "[ActiveScriptWrappable] extended attribute in the IDL file.  "
    "Be consistent.");
static_assert(
    std::is_same<decltype(&BiquadFilterNode::HasPendingActivity),
                 decltype(&ScriptWrappable::HasPendingActivity)>::value,
    "BiquadFilterNode is overriding hasPendingActivity(), but is not specifying "
    "[ActiveScriptWrappable] extended attribute in the IDL file.  "
    "Be consistent.");

namespace biquad_filter_node_v8_internal {

static void TypeAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  BiquadFilterNode* impl = V8BiquadFilterNode::ToImpl(holder);

  V8SetReturnValueString(info, impl->type(), info.GetIsolate());
}

static void TypeAttributeSetter(
    v8::Local<v8::Value> v8_value, const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Isolate* isolate = info.GetIsolate();
  ALLOW_UNUSED_LOCAL(isolate);

  v8::Local<v8::Object> holder = info.Holder();
  ALLOW_UNUSED_LOCAL(holder);

  BiquadFilterNode* impl = V8BiquadFilterNode::ToImpl(holder);

  ExceptionState exception_state(isolate, ExceptionState::kSetterContext, "BiquadFilterNode", "type");

  // Prepare the value to be set.
  V8StringResource<> cpp_value = v8_value;
  if (!cpp_value.Prepare())
    return;

  // Type check per: http://heycam.github.io/webidl/#dfn-attribute-setter
  // Returns undefined without setting the value if the value is invalid.
  DummyExceptionStateForTesting dummy_exception_state;
  {
    const char* kValidValues[] = {
      "lowpass",
      "highpass",
      "bandpass",
      "lowshelf",
      "highshelf",
      "peaking",
      "notch",
      "allpass",
  };
    if (!IsValidEnum(cpp_value, kValidValues, base::size(kValidValues),
                     "BiquadFilterType", dummy_exception_state)) {
      ExecutionContext::ForCurrentRealm(info)->AddConsoleMessage(
          ConsoleMessage::Create(mojom::ConsoleMessageSource::kJavaScript,
                                 mojom::ConsoleMessageLevel::kWarning,
                                 dummy_exception_state.Message()));
      return;
    }
  }

  impl->setType(cpp_value);
}

static void FrequencyAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  BiquadFilterNode* impl = V8BiquadFilterNode::ToImpl(holder);

  AudioParam* cpp_value(WTF::GetPtr(impl->frequency()));

  // Keep the wrapper object for the return value alive as long as |this|
  // object is alive in order to save creation time of the wrapper object.
  if (cpp_value && DOMDataStore::SetReturnValue(info.GetReturnValue(), cpp_value))
    return;
  v8::Local<v8::Value> v8_value(ToV8(cpp_value, holder, info.GetIsolate()));
  V8PrivateProperty::GetSymbol(
      info.GetIsolate(), "KeepAlive#BiquadFilterNode#frequency")
      .Set(holder, v8_value);

  V8SetReturnValue(info, v8_value);
}

static void DetuneAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  BiquadFilterNode* impl = V8BiquadFilterNode::ToImpl(holder);

  AudioParam* cpp_value(WTF::GetPtr(impl->detune()));

  // Keep the wrapper object for the return value alive as long as |this|
  // object is alive in order to save creation time of the wrapper object.
  if (cpp_value && DOMDataStore::SetReturnValue(info.GetReturnValue(), cpp_value))
    return;
  v8::Local<v8::Value> v8_value(ToV8(cpp_value, holder, info.GetIsolate()));
  V8PrivateProperty::GetSymbol(
      info.GetIsolate(), "KeepAlive#BiquadFilterNode#detune")
      .Set(holder, v8_value);

  V8SetReturnValue(info, v8_value);
}

static void QAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  BiquadFilterNode* impl = V8BiquadFilterNode::ToImpl(holder);

  AudioParam* cpp_value(WTF::GetPtr(impl->q()));

  // Keep the wrapper object for the return value alive as long as |this|
  // object is alive in order to save creation time of the wrapper object.
  if (cpp_value && DOMDataStore::SetReturnValue(info.GetReturnValue(), cpp_value))
    return;
  v8::Local<v8::Value> v8_value(ToV8(cpp_value, holder, info.GetIsolate()));
  V8PrivateProperty::GetSymbol(
      info.GetIsolate(), "KeepAlive#BiquadFilterNode#Q")
      .Set(holder, v8_value);

  V8SetReturnValue(info, v8_value);
}

static void GainAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  BiquadFilterNode* impl = V8BiquadFilterNode::ToImpl(holder);

  AudioParam* cpp_value(WTF::GetPtr(impl->gain()));

  // Keep the wrapper object for the return value alive as long as |this|
  // object is alive in order to save creation time of the wrapper object.
  if (cpp_value && DOMDataStore::SetReturnValue(info.GetReturnValue(), cpp_value))
    return;
  v8::Local<v8::Value> v8_value(ToV8(cpp_value, holder, info.GetIsolate()));
  V8PrivateProperty::GetSymbol(
      info.GetIsolate(), "KeepAlive#BiquadFilterNode#gain")
      .Set(holder, v8_value);

  V8SetReturnValue(info, v8_value);
}

static void GetFrequencyResponseMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exception_state(info.GetIsolate(), ExceptionState::kExecutionContext, "BiquadFilterNode", "getFrequencyResponse");

  BiquadFilterNode* impl = V8BiquadFilterNode::ToImpl(info.Holder());

  if (UNLIKELY(info.Length() < 3)) {
    exception_state.ThrowTypeError(ExceptionMessages::NotEnoughArguments(3, info.Length()));
    return;
  }

  NotShared<DOMFloat32Array> frequency_hz;
  NotShared<DOMFloat32Array> mag_response;
  NotShared<DOMFloat32Array> phase_response;
  frequency_hz = ToNotShared<NotShared<DOMFloat32Array>>(info.GetIsolate(), info[0], exception_state);
  if (exception_state.HadException())
    return;
  if (!frequency_hz) {
    exception_state.ThrowTypeError("parameter 1 is not of type 'Float32Array'.");
    return;
  }

  mag_response = ToNotShared<NotShared<DOMFloat32Array>>(info.GetIsolate(), info[1], exception_state);
  if (exception_state.HadException())
    return;
  if (!mag_response) {
    exception_state.ThrowTypeError("parameter 2 is not of type 'Float32Array'.");
    return;
  }

  phase_response = ToNotShared<NotShared<DOMFloat32Array>>(info.GetIsolate(), info[2], exception_state);
  if (exception_state.HadException())
    return;
  if (!phase_response) {
    exception_state.ThrowTypeError("parameter 3 is not of type 'Float32Array'.");
    return;
  }

  impl->getFrequencyResponse(frequency_hz, mag_response, phase_response, exception_state);
  if (exception_state.HadException()) {
    return;
  }
}

static void Constructor(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_BiquadFilterNode_ConstructorCallback");

  ExceptionState exception_state(info.GetIsolate(), ExceptionState::kConstructionContext, "BiquadFilterNode");

  if (UNLIKELY(info.Length() < 1)) {
    exception_state.ThrowTypeError(ExceptionMessages::NotEnoughArguments(1, info.Length()));
    return;
  }

  BaseAudioContext* context;
  BiquadFilterOptions* options;
  context = V8BaseAudioContext::ToImplWithTypeCheck(info.GetIsolate(), info[0]);
  if (!context) {
    exception_state.ThrowTypeError("parameter 1 is not of type 'BaseAudioContext'.");
    return;
  }

  if (!info[1]->IsNullOrUndefined() && !info[1]->IsObject()) {
    exception_state.ThrowTypeError("parameter 2 ('options') is not an object.");
    return;
  }
  options = NativeValueTraits<BiquadFilterOptions>::NativeValue(info.GetIsolate(), info[1], exception_state);
  if (exception_state.HadException())
    return;

  BiquadFilterNode* impl = BiquadFilterNode::Create(context, options, exception_state);
  if (exception_state.HadException()) {
    return;
  }
  v8::Local<v8::Object> wrapper = info.Holder();
  wrapper = impl->AssociateWithWrapper(info.GetIsolate(), V8BiquadFilterNode::GetWrapperTypeInfo(), wrapper);
  V8SetReturnValue(info, wrapper);
}

MODULES_EXPORT void ConstructorCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_BiquadFilterNode_Constructor");

  ExecutionContext* execution_context_for_measurement = CurrentExecutionContext(info.GetIsolate());
  UseCounter::Count(execution_context_for_measurement, WebFeature::kV8BiquadFilterNode_Constructor);
  if (!info.IsConstructCall()) {
    V8ThrowException::ThrowTypeError(
        info.GetIsolate(),
        ExceptionMessages::ConstructorNotCallableAsFunction("BiquadFilterNode"));
    return;
  }

  if (ConstructorMode::Current(info.GetIsolate()) == ConstructorMode::kWrapExistingObject) {
    V8SetReturnValue(info, info.Holder());
    return;
  }

  biquad_filter_node_v8_internal::Constructor(info);
}

}  // namespace biquad_filter_node_v8_internal

void V8BiquadFilterNode::TypeAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_BiquadFilterNode_type_Getter");

  biquad_filter_node_v8_internal::TypeAttributeGetter(info);
}

void V8BiquadFilterNode::TypeAttributeSetterCallback(
    const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_BiquadFilterNode_type_Setter");

  v8::Local<v8::Value> v8_value = info[0];

  biquad_filter_node_v8_internal::TypeAttributeSetter(v8_value, info);
}

void V8BiquadFilterNode::FrequencyAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_BiquadFilterNode_frequency_Getter");

  biquad_filter_node_v8_internal::FrequencyAttributeGetter(info);
}

void V8BiquadFilterNode::DetuneAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_BiquadFilterNode_detune_Getter");

  biquad_filter_node_v8_internal::DetuneAttributeGetter(info);
}

void V8BiquadFilterNode::QAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_BiquadFilterNode_Q_Getter");

  biquad_filter_node_v8_internal::QAttributeGetter(info);
}

void V8BiquadFilterNode::GainAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_BiquadFilterNode_gain_Getter");

  biquad_filter_node_v8_internal::GainAttributeGetter(info);
}

void V8BiquadFilterNode::GetFrequencyResponseMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_BiquadFilterNode_getFrequencyResponse");

  biquad_filter_node_v8_internal::GetFrequencyResponseMethod(info);
}

static constexpr V8DOMConfiguration::AccessorConfiguration kV8BiquadFilterNodeAccessors[] = {
    { "type", V8BiquadFilterNode::TypeAttributeGetterCallback, V8BiquadFilterNode::TypeAttributeSetterCallback, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
    { "frequency", V8BiquadFilterNode::FrequencyAttributeGetterCallback, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
    { "detune", V8BiquadFilterNode::DetuneAttributeGetterCallback, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
    { "Q", V8BiquadFilterNode::QAttributeGetterCallback, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
    { "gain", V8BiquadFilterNode::GainAttributeGetterCallback, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
};

static constexpr V8DOMConfiguration::MethodConfiguration kV8BiquadFilterNodeMethods[] = {
    {"getFrequencyResponse", V8BiquadFilterNode::GetFrequencyResponseMethodCallback, 3, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
};

static void InstallV8BiquadFilterNodeTemplate(
    v8::Isolate* isolate,
    const DOMWrapperWorld& world,
    v8::Local<v8::FunctionTemplate> interface_template) {
  // Initialize the interface object's template.
  V8DOMConfiguration::InitializeDOMInterfaceTemplate(isolate, interface_template, V8BiquadFilterNode::GetWrapperTypeInfo()->interface_name, V8AudioNode::DomTemplate(isolate, world), V8BiquadFilterNode::kInternalFieldCount);
  interface_template->SetCallHandler(biquad_filter_node_v8_internal::ConstructorCallback);
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
      signature, kV8BiquadFilterNodeAccessors, base::size(kV8BiquadFilterNodeAccessors));
  V8DOMConfiguration::InstallMethods(
      isolate, world, instance_template, prototype_template, interface_template,
      signature, kV8BiquadFilterNodeMethods, base::size(kV8BiquadFilterNodeMethods));

  // Custom signature

  V8BiquadFilterNode::InstallRuntimeEnabledFeaturesOnTemplate(
      isolate, world, interface_template);
}

void V8BiquadFilterNode::InstallRuntimeEnabledFeaturesOnTemplate(
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

v8::Local<v8::FunctionTemplate> V8BiquadFilterNode::DomTemplate(
    v8::Isolate* isolate, const DOMWrapperWorld& world) {
  return V8DOMConfiguration::DomClassTemplate(
      isolate, world, const_cast<WrapperTypeInfo*>(V8BiquadFilterNode::GetWrapperTypeInfo()),
      InstallV8BiquadFilterNodeTemplate);
}

bool V8BiquadFilterNode::HasInstance(v8::Local<v8::Value> v8_value, v8::Isolate* isolate) {
  return V8PerIsolateData::From(isolate)->HasInstance(V8BiquadFilterNode::GetWrapperTypeInfo(), v8_value);
}

v8::Local<v8::Object> V8BiquadFilterNode::FindInstanceInPrototypeChain(
    v8::Local<v8::Value> v8_value, v8::Isolate* isolate) {
  return V8PerIsolateData::From(isolate)->FindInstanceInPrototypeChain(
      V8BiquadFilterNode::GetWrapperTypeInfo(), v8_value);
}

BiquadFilterNode* V8BiquadFilterNode::ToImplWithTypeCheck(
    v8::Isolate* isolate, v8::Local<v8::Value> value) {
  return HasInstance(value, isolate) ? ToImpl(v8::Local<v8::Object>::Cast(value)) : nullptr;
}

BiquadFilterNode* NativeValueTraits<BiquadFilterNode>::NativeValue(
    v8::Isolate* isolate, v8::Local<v8::Value> value, ExceptionState& exception_state) {
  BiquadFilterNode* native_value = V8BiquadFilterNode::ToImplWithTypeCheck(isolate, value);
  if (!native_value) {
    exception_state.ThrowTypeError(ExceptionMessages::FailedToConvertJSValue(
        "BiquadFilterNode"));
  }
  return native_value;
}

}  // namespace blink
