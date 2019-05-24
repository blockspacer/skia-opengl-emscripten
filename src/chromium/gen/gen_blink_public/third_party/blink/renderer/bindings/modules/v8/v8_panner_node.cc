// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated from the Jinja2 template
// third_party/blink/renderer/bindings/templates/interface.cc.tmpl
// by the script code_generator_v8.py.
// DO NOT MODIFY!

// clang-format off
#include "third_party/blink/renderer/bindings/modules/v8/v8_panner_node.h"

#include <algorithm>

#include "base/memory/scoped_refptr.h"
#include "third_party/blink/renderer/bindings/core/v8/idl_types.h"
#include "third_party/blink/renderer/bindings/core/v8/native_value_traits_impl.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_dom_configuration.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_audio_param.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_base_audio_context.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_panner_options.h"
#include "third_party/blink/renderer/core/execution_context/execution_context.h"
#include "third_party/blink/renderer/core/frame/local_dom_window.h"
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
const WrapperTypeInfo v8_panner_node_wrapper_type_info = {
    gin::kEmbedderBlink,
    V8PannerNode::DomTemplate,
    nullptr,
    "PannerNode",
    V8AudioNode::GetWrapperTypeInfo(),
    WrapperTypeInfo::kWrapperTypeObjectPrototype,
    WrapperTypeInfo::kObjectClassId,
    WrapperTypeInfo::kNotInheritFromActiveScriptWrappable,
};
#if defined(COMPONENT_BUILD) && defined(WIN32) && defined(__clang__)
#pragma clang diagnostic pop
#endif

// This static member must be declared by DEFINE_WRAPPERTYPEINFO in PannerNode.h.
// For details, see the comment of DEFINE_WRAPPERTYPEINFO in
// platform/bindings/ScriptWrappable.h.
const WrapperTypeInfo& PannerNode::wrapper_type_info_ = v8_panner_node_wrapper_type_info;

// not [ActiveScriptWrappable]
static_assert(
    !std::is_base_of<ActiveScriptWrappableBase, PannerNode>::value,
    "PannerNode inherits from ActiveScriptWrappable<>, but is not specifying "
    "[ActiveScriptWrappable] extended attribute in the IDL file.  "
    "Be consistent.");
static_assert(
    std::is_same<decltype(&PannerNode::HasPendingActivity),
                 decltype(&ScriptWrappable::HasPendingActivity)>::value,
    "PannerNode is overriding hasPendingActivity(), but is not specifying "
    "[ActiveScriptWrappable] extended attribute in the IDL file.  "
    "Be consistent.");

namespace panner_node_v8_internal {

static void PanningModelAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  PannerNode* impl = V8PannerNode::ToImpl(holder);

  V8SetReturnValueString(info, impl->panningModel(), info.GetIsolate());
}

static void PanningModelAttributeSetter(
    v8::Local<v8::Value> v8_value, const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Isolate* isolate = info.GetIsolate();
  ALLOW_UNUSED_LOCAL(isolate);

  v8::Local<v8::Object> holder = info.Holder();
  ALLOW_UNUSED_LOCAL(holder);

  PannerNode* impl = V8PannerNode::ToImpl(holder);

  ExceptionState exception_state(isolate, ExceptionState::kSetterContext, "PannerNode", "panningModel");

  // Prepare the value to be set.
  V8StringResource<> cpp_value = v8_value;
  if (!cpp_value.Prepare())
    return;

  // Type check per: http://heycam.github.io/webidl/#dfn-attribute-setter
  // Returns undefined without setting the value if the value is invalid.
  DummyExceptionStateForTesting dummy_exception_state;
  {
    const char* kValidValues[] = {
      "equalpower",
      "HRTF",
  };
    if (!IsValidEnum(cpp_value, kValidValues, base::size(kValidValues),
                     "PanningModelType", dummy_exception_state)) {
      ExecutionContext::ForCurrentRealm(info)->AddConsoleMessage(
          ConsoleMessage::Create(mojom::ConsoleMessageSource::kJavaScript,
                                 mojom::ConsoleMessageLevel::kWarning,
                                 dummy_exception_state.Message()));
      return;
    }
  }

  impl->setPanningModel(cpp_value);
}

static void PositionXAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  PannerNode* impl = V8PannerNode::ToImpl(holder);

  AudioParam* cpp_value(WTF::GetPtr(impl->positionX()));

  // Keep the wrapper object for the return value alive as long as |this|
  // object is alive in order to save creation time of the wrapper object.
  if (cpp_value && DOMDataStore::SetReturnValue(info.GetReturnValue(), cpp_value))
    return;
  v8::Local<v8::Value> v8_value(ToV8(cpp_value, holder, info.GetIsolate()));
  V8PrivateProperty::GetSymbol(
      info.GetIsolate(), "KeepAlive#PannerNode#positionX")
      .Set(holder, v8_value);

  V8SetReturnValue(info, v8_value);
}

static void PositionYAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  PannerNode* impl = V8PannerNode::ToImpl(holder);

  AudioParam* cpp_value(WTF::GetPtr(impl->positionY()));

  // Keep the wrapper object for the return value alive as long as |this|
  // object is alive in order to save creation time of the wrapper object.
  if (cpp_value && DOMDataStore::SetReturnValue(info.GetReturnValue(), cpp_value))
    return;
  v8::Local<v8::Value> v8_value(ToV8(cpp_value, holder, info.GetIsolate()));
  V8PrivateProperty::GetSymbol(
      info.GetIsolate(), "KeepAlive#PannerNode#positionY")
      .Set(holder, v8_value);

  V8SetReturnValue(info, v8_value);
}

static void PositionZAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  PannerNode* impl = V8PannerNode::ToImpl(holder);

  AudioParam* cpp_value(WTF::GetPtr(impl->positionZ()));

  // Keep the wrapper object for the return value alive as long as |this|
  // object is alive in order to save creation time of the wrapper object.
  if (cpp_value && DOMDataStore::SetReturnValue(info.GetReturnValue(), cpp_value))
    return;
  v8::Local<v8::Value> v8_value(ToV8(cpp_value, holder, info.GetIsolate()));
  V8PrivateProperty::GetSymbol(
      info.GetIsolate(), "KeepAlive#PannerNode#positionZ")
      .Set(holder, v8_value);

  V8SetReturnValue(info, v8_value);
}

static void OrientationXAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  PannerNode* impl = V8PannerNode::ToImpl(holder);

  AudioParam* cpp_value(WTF::GetPtr(impl->orientationX()));

  // Keep the wrapper object for the return value alive as long as |this|
  // object is alive in order to save creation time of the wrapper object.
  if (cpp_value && DOMDataStore::SetReturnValue(info.GetReturnValue(), cpp_value))
    return;
  v8::Local<v8::Value> v8_value(ToV8(cpp_value, holder, info.GetIsolate()));
  V8PrivateProperty::GetSymbol(
      info.GetIsolate(), "KeepAlive#PannerNode#orientationX")
      .Set(holder, v8_value);

  V8SetReturnValue(info, v8_value);
}

static void OrientationYAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  PannerNode* impl = V8PannerNode::ToImpl(holder);

  AudioParam* cpp_value(WTF::GetPtr(impl->orientationY()));

  // Keep the wrapper object for the return value alive as long as |this|
  // object is alive in order to save creation time of the wrapper object.
  if (cpp_value && DOMDataStore::SetReturnValue(info.GetReturnValue(), cpp_value))
    return;
  v8::Local<v8::Value> v8_value(ToV8(cpp_value, holder, info.GetIsolate()));
  V8PrivateProperty::GetSymbol(
      info.GetIsolate(), "KeepAlive#PannerNode#orientationY")
      .Set(holder, v8_value);

  V8SetReturnValue(info, v8_value);
}

static void OrientationZAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  PannerNode* impl = V8PannerNode::ToImpl(holder);

  AudioParam* cpp_value(WTF::GetPtr(impl->orientationZ()));

  // Keep the wrapper object for the return value alive as long as |this|
  // object is alive in order to save creation time of the wrapper object.
  if (cpp_value && DOMDataStore::SetReturnValue(info.GetReturnValue(), cpp_value))
    return;
  v8::Local<v8::Value> v8_value(ToV8(cpp_value, holder, info.GetIsolate()));
  V8PrivateProperty::GetSymbol(
      info.GetIsolate(), "KeepAlive#PannerNode#orientationZ")
      .Set(holder, v8_value);

  V8SetReturnValue(info, v8_value);
}

static void DistanceModelAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  PannerNode* impl = V8PannerNode::ToImpl(holder);

  V8SetReturnValueString(info, impl->distanceModel(), info.GetIsolate());
}

static void DistanceModelAttributeSetter(
    v8::Local<v8::Value> v8_value, const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Isolate* isolate = info.GetIsolate();
  ALLOW_UNUSED_LOCAL(isolate);

  v8::Local<v8::Object> holder = info.Holder();
  ALLOW_UNUSED_LOCAL(holder);

  PannerNode* impl = V8PannerNode::ToImpl(holder);

  ExceptionState exception_state(isolate, ExceptionState::kSetterContext, "PannerNode", "distanceModel");

  // Prepare the value to be set.
  V8StringResource<> cpp_value = v8_value;
  if (!cpp_value.Prepare())
    return;

  // Type check per: http://heycam.github.io/webidl/#dfn-attribute-setter
  // Returns undefined without setting the value if the value is invalid.
  DummyExceptionStateForTesting dummy_exception_state;
  {
    const char* kValidValues[] = {
      "linear",
      "inverse",
      "exponential",
  };
    if (!IsValidEnum(cpp_value, kValidValues, base::size(kValidValues),
                     "DistanceModelType", dummy_exception_state)) {
      ExecutionContext::ForCurrentRealm(info)->AddConsoleMessage(
          ConsoleMessage::Create(mojom::ConsoleMessageSource::kJavaScript,
                                 mojom::ConsoleMessageLevel::kWarning,
                                 dummy_exception_state.Message()));
      return;
    }
  }

  impl->setDistanceModel(cpp_value);
}

static void RefDistanceAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  PannerNode* impl = V8PannerNode::ToImpl(holder);

  V8SetReturnValue(info, impl->refDistance());
}

static void RefDistanceAttributeSetter(
    v8::Local<v8::Value> v8_value, const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Isolate* isolate = info.GetIsolate();
  ALLOW_UNUSED_LOCAL(isolate);

  v8::Local<v8::Object> holder = info.Holder();
  ALLOW_UNUSED_LOCAL(holder);

  PannerNode* impl = V8PannerNode::ToImpl(holder);

  ExceptionState exception_state(isolate, ExceptionState::kSetterContext, "PannerNode", "refDistance");

  // Prepare the value to be set.
  double cpp_value = NativeValueTraits<IDLDouble>::NativeValue(info.GetIsolate(), v8_value, exception_state);
  if (exception_state.HadException())
    return;

  impl->setRefDistance(cpp_value, exception_state);
}

static void MaxDistanceAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  PannerNode* impl = V8PannerNode::ToImpl(holder);

  V8SetReturnValue(info, impl->maxDistance());
}

static void MaxDistanceAttributeSetter(
    v8::Local<v8::Value> v8_value, const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Isolate* isolate = info.GetIsolate();
  ALLOW_UNUSED_LOCAL(isolate);

  v8::Local<v8::Object> holder = info.Holder();
  ALLOW_UNUSED_LOCAL(holder);

  PannerNode* impl = V8PannerNode::ToImpl(holder);

  ExceptionState exception_state(isolate, ExceptionState::kSetterContext, "PannerNode", "maxDistance");

  // Prepare the value to be set.
  double cpp_value = NativeValueTraits<IDLDouble>::NativeValue(info.GetIsolate(), v8_value, exception_state);
  if (exception_state.HadException())
    return;

  impl->setMaxDistance(cpp_value, exception_state);
}

static void RolloffFactorAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  PannerNode* impl = V8PannerNode::ToImpl(holder);

  V8SetReturnValue(info, impl->rolloffFactor());
}

static void RolloffFactorAttributeSetter(
    v8::Local<v8::Value> v8_value, const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Isolate* isolate = info.GetIsolate();
  ALLOW_UNUSED_LOCAL(isolate);

  v8::Local<v8::Object> holder = info.Holder();
  ALLOW_UNUSED_LOCAL(holder);

  PannerNode* impl = V8PannerNode::ToImpl(holder);

  ExceptionState exception_state(isolate, ExceptionState::kSetterContext, "PannerNode", "rolloffFactor");

  // Prepare the value to be set.
  double cpp_value = NativeValueTraits<IDLDouble>::NativeValue(info.GetIsolate(), v8_value, exception_state);
  if (exception_state.HadException())
    return;

  impl->setRolloffFactor(cpp_value, exception_state);
}

static void ConeInnerAngleAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  PannerNode* impl = V8PannerNode::ToImpl(holder);

  V8SetReturnValue(info, impl->coneInnerAngle());
}

static void ConeInnerAngleAttributeSetter(
    v8::Local<v8::Value> v8_value, const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Isolate* isolate = info.GetIsolate();
  ALLOW_UNUSED_LOCAL(isolate);

  v8::Local<v8::Object> holder = info.Holder();
  ALLOW_UNUSED_LOCAL(holder);

  PannerNode* impl = V8PannerNode::ToImpl(holder);

  ExceptionState exception_state(isolate, ExceptionState::kSetterContext, "PannerNode", "coneInnerAngle");

  // Prepare the value to be set.
  double cpp_value = NativeValueTraits<IDLDouble>::NativeValue(info.GetIsolate(), v8_value, exception_state);
  if (exception_state.HadException())
    return;

  impl->setConeInnerAngle(cpp_value);
}

static void ConeOuterAngleAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  PannerNode* impl = V8PannerNode::ToImpl(holder);

  V8SetReturnValue(info, impl->coneOuterAngle());
}

static void ConeOuterAngleAttributeSetter(
    v8::Local<v8::Value> v8_value, const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Isolate* isolate = info.GetIsolate();
  ALLOW_UNUSED_LOCAL(isolate);

  v8::Local<v8::Object> holder = info.Holder();
  ALLOW_UNUSED_LOCAL(holder);

  PannerNode* impl = V8PannerNode::ToImpl(holder);

  ExceptionState exception_state(isolate, ExceptionState::kSetterContext, "PannerNode", "coneOuterAngle");

  // Prepare the value to be set.
  double cpp_value = NativeValueTraits<IDLDouble>::NativeValue(info.GetIsolate(), v8_value, exception_state);
  if (exception_state.HadException())
    return;

  impl->setConeOuterAngle(cpp_value);
}

static void ConeOuterGainAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  PannerNode* impl = V8PannerNode::ToImpl(holder);

  V8SetReturnValue(info, impl->coneOuterGain());
}

static void ConeOuterGainAttributeSetter(
    v8::Local<v8::Value> v8_value, const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Isolate* isolate = info.GetIsolate();
  ALLOW_UNUSED_LOCAL(isolate);

  v8::Local<v8::Object> holder = info.Holder();
  ALLOW_UNUSED_LOCAL(holder);

  PannerNode* impl = V8PannerNode::ToImpl(holder);

  ExceptionState exception_state(isolate, ExceptionState::kSetterContext, "PannerNode", "coneOuterGain");

  // Prepare the value to be set.
  double cpp_value = NativeValueTraits<IDLDouble>::NativeValue(info.GetIsolate(), v8_value, exception_state);
  if (exception_state.HadException())
    return;

  impl->setConeOuterGain(cpp_value, exception_state);
}

static void SetPositionMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exception_state(info.GetIsolate(), ExceptionState::kExecutionContext, "PannerNode", "setPosition");

  PannerNode* impl = V8PannerNode::ToImpl(info.Holder());

  if (UNLIKELY(info.Length() < 3)) {
    exception_state.ThrowTypeError(ExceptionMessages::NotEnoughArguments(3, info.Length()));
    return;
  }

  float x;
  float y;
  float z;
  x = NativeValueTraits<IDLFloat>::NativeValue(info.GetIsolate(), info[0], exception_state);
  if (exception_state.HadException())
    return;

  y = NativeValueTraits<IDLFloat>::NativeValue(info.GetIsolate(), info[1], exception_state);
  if (exception_state.HadException())
    return;

  z = NativeValueTraits<IDLFloat>::NativeValue(info.GetIsolate(), info[2], exception_state);
  if (exception_state.HadException())
    return;

  impl->setPosition(x, y, z, exception_state);
  if (exception_state.HadException()) {
    return;
  }
}

static void SetOrientationMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exception_state(info.GetIsolate(), ExceptionState::kExecutionContext, "PannerNode", "setOrientation");

  PannerNode* impl = V8PannerNode::ToImpl(info.Holder());

  if (UNLIKELY(info.Length() < 3)) {
    exception_state.ThrowTypeError(ExceptionMessages::NotEnoughArguments(3, info.Length()));
    return;
  }

  float x;
  float y;
  float z;
  x = NativeValueTraits<IDLFloat>::NativeValue(info.GetIsolate(), info[0], exception_state);
  if (exception_state.HadException())
    return;

  y = NativeValueTraits<IDLFloat>::NativeValue(info.GetIsolate(), info[1], exception_state);
  if (exception_state.HadException())
    return;

  z = NativeValueTraits<IDLFloat>::NativeValue(info.GetIsolate(), info[2], exception_state);
  if (exception_state.HadException())
    return;

  impl->setOrientation(x, y, z, exception_state);
  if (exception_state.HadException()) {
    return;
  }
}

static void Constructor(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_PannerNode_ConstructorCallback");

  ExceptionState exception_state(info.GetIsolate(), ExceptionState::kConstructionContext, "PannerNode");

  if (UNLIKELY(info.Length() < 1)) {
    exception_state.ThrowTypeError(ExceptionMessages::NotEnoughArguments(1, info.Length()));
    return;
  }

  BaseAudioContext* context;
  PannerOptions* options;
  context = V8BaseAudioContext::ToImplWithTypeCheck(info.GetIsolate(), info[0]);
  if (!context) {
    exception_state.ThrowTypeError("parameter 1 is not of type 'BaseAudioContext'.");
    return;
  }

  if (!info[1]->IsNullOrUndefined() && !info[1]->IsObject()) {
    exception_state.ThrowTypeError("parameter 2 ('options') is not an object.");
    return;
  }
  options = NativeValueTraits<PannerOptions>::NativeValue(info.GetIsolate(), info[1], exception_state);
  if (exception_state.HadException())
    return;

  PannerNode* impl = PannerNode::Create(context, options, exception_state);
  if (exception_state.HadException()) {
    return;
  }
  v8::Local<v8::Object> wrapper = info.Holder();
  wrapper = impl->AssociateWithWrapper(info.GetIsolate(), V8PannerNode::GetWrapperTypeInfo(), wrapper);
  V8SetReturnValue(info, wrapper);
}

MODULES_EXPORT void ConstructorCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_PannerNode_Constructor");

  ExecutionContext* execution_context_for_measurement = CurrentExecutionContext(info.GetIsolate());
  UseCounter::Count(execution_context_for_measurement, WebFeature::kV8PannerNode_Constructor);
  if (!info.IsConstructCall()) {
    V8ThrowException::ThrowTypeError(
        info.GetIsolate(),
        ExceptionMessages::ConstructorNotCallableAsFunction("PannerNode"));
    return;
  }

  if (ConstructorMode::Current(info.GetIsolate()) == ConstructorMode::kWrapExistingObject) {
    V8SetReturnValue(info, info.Holder());
    return;
  }

  panner_node_v8_internal::Constructor(info);
}

}  // namespace panner_node_v8_internal

void V8PannerNode::PanningModelAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_PannerNode_panningModel_Getter");

  panner_node_v8_internal::PanningModelAttributeGetter(info);
}

void V8PannerNode::PanningModelAttributeSetterCallback(
    const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_PannerNode_panningModel_Setter");

  v8::Local<v8::Value> v8_value = info[0];

  panner_node_v8_internal::PanningModelAttributeSetter(v8_value, info);
}

void V8PannerNode::PositionXAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_PannerNode_positionX_Getter");

  panner_node_v8_internal::PositionXAttributeGetter(info);
}

void V8PannerNode::PositionYAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_PannerNode_positionY_Getter");

  panner_node_v8_internal::PositionYAttributeGetter(info);
}

void V8PannerNode::PositionZAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_PannerNode_positionZ_Getter");

  panner_node_v8_internal::PositionZAttributeGetter(info);
}

void V8PannerNode::OrientationXAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_PannerNode_orientationX_Getter");

  panner_node_v8_internal::OrientationXAttributeGetter(info);
}

void V8PannerNode::OrientationYAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_PannerNode_orientationY_Getter");

  panner_node_v8_internal::OrientationYAttributeGetter(info);
}

void V8PannerNode::OrientationZAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_PannerNode_orientationZ_Getter");

  panner_node_v8_internal::OrientationZAttributeGetter(info);
}

void V8PannerNode::DistanceModelAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_PannerNode_distanceModel_Getter");

  panner_node_v8_internal::DistanceModelAttributeGetter(info);
}

void V8PannerNode::DistanceModelAttributeSetterCallback(
    const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_PannerNode_distanceModel_Setter");

  v8::Local<v8::Value> v8_value = info[0];

  panner_node_v8_internal::DistanceModelAttributeSetter(v8_value, info);
}

void V8PannerNode::RefDistanceAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_PannerNode_refDistance_Getter");

  panner_node_v8_internal::RefDistanceAttributeGetter(info);
}

void V8PannerNode::RefDistanceAttributeSetterCallback(
    const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_PannerNode_refDistance_Setter");

  v8::Local<v8::Value> v8_value = info[0];

  panner_node_v8_internal::RefDistanceAttributeSetter(v8_value, info);
}

void V8PannerNode::MaxDistanceAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_PannerNode_maxDistance_Getter");

  panner_node_v8_internal::MaxDistanceAttributeGetter(info);
}

void V8PannerNode::MaxDistanceAttributeSetterCallback(
    const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_PannerNode_maxDistance_Setter");

  v8::Local<v8::Value> v8_value = info[0];

  panner_node_v8_internal::MaxDistanceAttributeSetter(v8_value, info);
}

void V8PannerNode::RolloffFactorAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_PannerNode_rolloffFactor_Getter");

  panner_node_v8_internal::RolloffFactorAttributeGetter(info);
}

void V8PannerNode::RolloffFactorAttributeSetterCallback(
    const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_PannerNode_rolloffFactor_Setter");

  v8::Local<v8::Value> v8_value = info[0];

  panner_node_v8_internal::RolloffFactorAttributeSetter(v8_value, info);
}

void V8PannerNode::ConeInnerAngleAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_PannerNode_coneInnerAngle_Getter");

  panner_node_v8_internal::ConeInnerAngleAttributeGetter(info);
}

void V8PannerNode::ConeInnerAngleAttributeSetterCallback(
    const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_PannerNode_coneInnerAngle_Setter");

  v8::Local<v8::Value> v8_value = info[0];

  panner_node_v8_internal::ConeInnerAngleAttributeSetter(v8_value, info);
}

void V8PannerNode::ConeOuterAngleAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_PannerNode_coneOuterAngle_Getter");

  panner_node_v8_internal::ConeOuterAngleAttributeGetter(info);
}

void V8PannerNode::ConeOuterAngleAttributeSetterCallback(
    const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_PannerNode_coneOuterAngle_Setter");

  v8::Local<v8::Value> v8_value = info[0];

  panner_node_v8_internal::ConeOuterAngleAttributeSetter(v8_value, info);
}

void V8PannerNode::ConeOuterGainAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_PannerNode_coneOuterGain_Getter");

  panner_node_v8_internal::ConeOuterGainAttributeGetter(info);
}

void V8PannerNode::ConeOuterGainAttributeSetterCallback(
    const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_PannerNode_coneOuterGain_Setter");

  v8::Local<v8::Value> v8_value = info[0];

  panner_node_v8_internal::ConeOuterGainAttributeSetter(v8_value, info);
}

void V8PannerNode::SetPositionMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_PannerNode_setPosition");

  ExecutionContext* execution_context_for_measurement = CurrentExecutionContext(info.GetIsolate());
  UseCounter::Count(execution_context_for_measurement, WebFeature::kPannerNodeSetPosition);
  panner_node_v8_internal::SetPositionMethod(info);
}

void V8PannerNode::SetOrientationMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_PannerNode_setOrientation");

  ExecutionContext* execution_context_for_measurement = CurrentExecutionContext(info.GetIsolate());
  UseCounter::Count(execution_context_for_measurement, WebFeature::kPannerNodeSetOrientation);
  panner_node_v8_internal::SetOrientationMethod(info);
}

static constexpr V8DOMConfiguration::AccessorConfiguration kV8PannerNodeAccessors[] = {
    { "panningModel", V8PannerNode::PanningModelAttributeGetterCallback, V8PannerNode::PanningModelAttributeSetterCallback, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
    { "positionX", V8PannerNode::PositionXAttributeGetterCallback, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
    { "positionY", V8PannerNode::PositionYAttributeGetterCallback, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
    { "positionZ", V8PannerNode::PositionZAttributeGetterCallback, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
    { "orientationX", V8PannerNode::OrientationXAttributeGetterCallback, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
    { "orientationY", V8PannerNode::OrientationYAttributeGetterCallback, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
    { "orientationZ", V8PannerNode::OrientationZAttributeGetterCallback, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
    { "distanceModel", V8PannerNode::DistanceModelAttributeGetterCallback, V8PannerNode::DistanceModelAttributeSetterCallback, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
    { "refDistance", V8PannerNode::RefDistanceAttributeGetterCallback, V8PannerNode::RefDistanceAttributeSetterCallback, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
    { "maxDistance", V8PannerNode::MaxDistanceAttributeGetterCallback, V8PannerNode::MaxDistanceAttributeSetterCallback, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
    { "rolloffFactor", V8PannerNode::RolloffFactorAttributeGetterCallback, V8PannerNode::RolloffFactorAttributeSetterCallback, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
    { "coneInnerAngle", V8PannerNode::ConeInnerAngleAttributeGetterCallback, V8PannerNode::ConeInnerAngleAttributeSetterCallback, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
    { "coneOuterAngle", V8PannerNode::ConeOuterAngleAttributeGetterCallback, V8PannerNode::ConeOuterAngleAttributeSetterCallback, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
    { "coneOuterGain", V8PannerNode::ConeOuterGainAttributeGetterCallback, V8PannerNode::ConeOuterGainAttributeSetterCallback, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
};

static constexpr V8DOMConfiguration::MethodConfiguration kV8PannerNodeMethods[] = {
    {"setPosition", V8PannerNode::SetPositionMethodCallback, 3, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"setOrientation", V8PannerNode::SetOrientationMethodCallback, 3, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
};

static void InstallV8PannerNodeTemplate(
    v8::Isolate* isolate,
    const DOMWrapperWorld& world,
    v8::Local<v8::FunctionTemplate> interface_template) {
  // Initialize the interface object's template.
  V8DOMConfiguration::InitializeDOMInterfaceTemplate(isolate, interface_template, V8PannerNode::GetWrapperTypeInfo()->interface_name, V8AudioNode::DomTemplate(isolate, world), V8PannerNode::kInternalFieldCount);
  interface_template->SetCallHandler(panner_node_v8_internal::ConstructorCallback);
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
      signature, kV8PannerNodeAccessors, base::size(kV8PannerNodeAccessors));
  V8DOMConfiguration::InstallMethods(
      isolate, world, instance_template, prototype_template, interface_template,
      signature, kV8PannerNodeMethods, base::size(kV8PannerNodeMethods));

  // Custom signature

  V8PannerNode::InstallRuntimeEnabledFeaturesOnTemplate(
      isolate, world, interface_template);
}

void V8PannerNode::InstallRuntimeEnabledFeaturesOnTemplate(
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

v8::Local<v8::FunctionTemplate> V8PannerNode::DomTemplate(
    v8::Isolate* isolate, const DOMWrapperWorld& world) {
  return V8DOMConfiguration::DomClassTemplate(
      isolate, world, const_cast<WrapperTypeInfo*>(V8PannerNode::GetWrapperTypeInfo()),
      InstallV8PannerNodeTemplate);
}

bool V8PannerNode::HasInstance(v8::Local<v8::Value> v8_value, v8::Isolate* isolate) {
  return V8PerIsolateData::From(isolate)->HasInstance(V8PannerNode::GetWrapperTypeInfo(), v8_value);
}

v8::Local<v8::Object> V8PannerNode::FindInstanceInPrototypeChain(
    v8::Local<v8::Value> v8_value, v8::Isolate* isolate) {
  return V8PerIsolateData::From(isolate)->FindInstanceInPrototypeChain(
      V8PannerNode::GetWrapperTypeInfo(), v8_value);
}

PannerNode* V8PannerNode::ToImplWithTypeCheck(
    v8::Isolate* isolate, v8::Local<v8::Value> value) {
  return HasInstance(value, isolate) ? ToImpl(v8::Local<v8::Object>::Cast(value)) : nullptr;
}

PannerNode* NativeValueTraits<PannerNode>::NativeValue(
    v8::Isolate* isolate, v8::Local<v8::Value> value, ExceptionState& exception_state) {
  PannerNode* native_value = V8PannerNode::ToImplWithTypeCheck(isolate, value);
  if (!native_value) {
    exception_state.ThrowTypeError(ExceptionMessages::FailedToConvertJSValue(
        "PannerNode"));
  }
  return native_value;
}

}  // namespace blink
