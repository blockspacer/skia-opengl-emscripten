// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated from the Jinja2 template
// third_party/blink/renderer/bindings/templates/interface.cc.tmpl
// by the script code_generator_v8.py.
// DO NOT MODIFY!

// clang-format off
#include "third_party/blink/renderer/bindings/modules/v8/v8_convolver_node.h"

#include <algorithm>

#include "base/memory/scoped_refptr.h"
#include "third_party/blink/renderer/bindings/core/v8/idl_types.h"
#include "third_party/blink/renderer/bindings/core/v8/native_value_traits_impl.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_dom_configuration.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_audio_buffer.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_base_audio_context.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_convolver_options.h"
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
const WrapperTypeInfo v8_convolver_node_wrapper_type_info = {
    gin::kEmbedderBlink,
    V8ConvolverNode::DomTemplate,
    nullptr,
    "ConvolverNode",
    V8AudioNode::GetWrapperTypeInfo(),
    WrapperTypeInfo::kWrapperTypeObjectPrototype,
    WrapperTypeInfo::kObjectClassId,
    WrapperTypeInfo::kNotInheritFromActiveScriptWrappable,
};
#if defined(COMPONENT_BUILD) && defined(WIN32) && defined(__clang__)
#pragma clang diagnostic pop
#endif

// This static member must be declared by DEFINE_WRAPPERTYPEINFO in ConvolverNode.h.
// For details, see the comment of DEFINE_WRAPPERTYPEINFO in
// platform/bindings/ScriptWrappable.h.
const WrapperTypeInfo& ConvolverNode::wrapper_type_info_ = v8_convolver_node_wrapper_type_info;

// not [ActiveScriptWrappable]
static_assert(
    !std::is_base_of<ActiveScriptWrappableBase, ConvolverNode>::value,
    "ConvolverNode inherits from ActiveScriptWrappable<>, but is not specifying "
    "[ActiveScriptWrappable] extended attribute in the IDL file.  "
    "Be consistent.");
static_assert(
    std::is_same<decltype(&ConvolverNode::HasPendingActivity),
                 decltype(&ScriptWrappable::HasPendingActivity)>::value,
    "ConvolverNode is overriding hasPendingActivity(), but is not specifying "
    "[ActiveScriptWrappable] extended attribute in the IDL file.  "
    "Be consistent.");

namespace convolver_node_v8_internal {

static void BufferAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  ConvolverNode* impl = V8ConvolverNode::ToImpl(holder);

  V8SetReturnValueFast(info, WTF::GetPtr(impl->buffer()), impl);
}

static void BufferAttributeSetter(
    v8::Local<v8::Value> v8_value, const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Isolate* isolate = info.GetIsolate();
  ALLOW_UNUSED_LOCAL(isolate);

  v8::Local<v8::Object> holder = info.Holder();
  ALLOW_UNUSED_LOCAL(holder);

  ConvolverNode* impl = V8ConvolverNode::ToImpl(holder);

  ExceptionState exception_state(isolate, ExceptionState::kSetterContext, "ConvolverNode", "buffer");

  // Prepare the value to be set.
  AudioBuffer* cpp_value = V8AudioBuffer::ToImplWithTypeCheck(info.GetIsolate(), v8_value);

  // Type check per: http://heycam.github.io/webidl/#es-interface
  if (!cpp_value && !IsUndefinedOrNull(v8_value)) {
    exception_state.ThrowTypeError("The provided value is not of type 'AudioBuffer'.");
    return;
  }

  impl->setBuffer(cpp_value, exception_state);
}

static void NormalizeAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  ConvolverNode* impl = V8ConvolverNode::ToImpl(holder);

  V8SetReturnValueBool(info, impl->normalize());
}

static void NormalizeAttributeSetter(
    v8::Local<v8::Value> v8_value, const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Isolate* isolate = info.GetIsolate();
  ALLOW_UNUSED_LOCAL(isolate);

  v8::Local<v8::Object> holder = info.Holder();
  ALLOW_UNUSED_LOCAL(holder);

  ConvolverNode* impl = V8ConvolverNode::ToImpl(holder);

  ExceptionState exception_state(isolate, ExceptionState::kSetterContext, "ConvolverNode", "normalize");

  // Prepare the value to be set.
  bool cpp_value = NativeValueTraits<IDLBoolean>::NativeValue(info.GetIsolate(), v8_value, exception_state);
  if (exception_state.HadException())
    return;

  impl->setNormalize(cpp_value);
}

static void Constructor(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_ConvolverNode_ConstructorCallback");

  ExceptionState exception_state(info.GetIsolate(), ExceptionState::kConstructionContext, "ConvolverNode");

  if (UNLIKELY(info.Length() < 1)) {
    exception_state.ThrowTypeError(ExceptionMessages::NotEnoughArguments(1, info.Length()));
    return;
  }

  BaseAudioContext* context;
  ConvolverOptions* options;
  context = V8BaseAudioContext::ToImplWithTypeCheck(info.GetIsolate(), info[0]);
  if (!context) {
    exception_state.ThrowTypeError("parameter 1 is not of type 'BaseAudioContext'.");
    return;
  }

  if (!info[1]->IsNullOrUndefined() && !info[1]->IsObject()) {
    exception_state.ThrowTypeError("parameter 2 ('options') is not an object.");
    return;
  }
  options = NativeValueTraits<ConvolverOptions>::NativeValue(info.GetIsolate(), info[1], exception_state);
  if (exception_state.HadException())
    return;

  ConvolverNode* impl = ConvolverNode::Create(context, options, exception_state);
  if (exception_state.HadException()) {
    return;
  }
  v8::Local<v8::Object> wrapper = info.Holder();
  wrapper = impl->AssociateWithWrapper(info.GetIsolate(), V8ConvolverNode::GetWrapperTypeInfo(), wrapper);
  V8SetReturnValue(info, wrapper);
}

MODULES_EXPORT void ConstructorCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_ConvolverNode_Constructor");

  ExecutionContext* execution_context_for_measurement = CurrentExecutionContext(info.GetIsolate());
  UseCounter::Count(execution_context_for_measurement, WebFeature::kV8ConvolverNode_Constructor);
  if (!info.IsConstructCall()) {
    V8ThrowException::ThrowTypeError(
        info.GetIsolate(),
        ExceptionMessages::ConstructorNotCallableAsFunction("ConvolverNode"));
    return;
  }

  if (ConstructorMode::Current(info.GetIsolate()) == ConstructorMode::kWrapExistingObject) {
    V8SetReturnValue(info, info.Holder());
    return;
  }

  convolver_node_v8_internal::Constructor(info);
}

}  // namespace convolver_node_v8_internal

void V8ConvolverNode::BufferAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_ConvolverNode_buffer_Getter");

  convolver_node_v8_internal::BufferAttributeGetter(info);
}

void V8ConvolverNode::BufferAttributeSetterCallback(
    const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_ConvolverNode_buffer_Setter");

  v8::Local<v8::Value> v8_value = info[0];

  convolver_node_v8_internal::BufferAttributeSetter(v8_value, info);
}

void V8ConvolverNode::NormalizeAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_ConvolverNode_normalize_Getter");

  convolver_node_v8_internal::NormalizeAttributeGetter(info);
}

void V8ConvolverNode::NormalizeAttributeSetterCallback(
    const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_ConvolverNode_normalize_Setter");

  v8::Local<v8::Value> v8_value = info[0];

  convolver_node_v8_internal::NormalizeAttributeSetter(v8_value, info);
}

static constexpr V8DOMConfiguration::AccessorConfiguration kV8ConvolverNodeAccessors[] = {
    { "buffer", V8ConvolverNode::BufferAttributeGetterCallback, V8ConvolverNode::BufferAttributeSetterCallback, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
    { "normalize", V8ConvolverNode::NormalizeAttributeGetterCallback, V8ConvolverNode::NormalizeAttributeSetterCallback, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
};

static void InstallV8ConvolverNodeTemplate(
    v8::Isolate* isolate,
    const DOMWrapperWorld& world,
    v8::Local<v8::FunctionTemplate> interface_template) {
  // Initialize the interface object's template.
  V8DOMConfiguration::InitializeDOMInterfaceTemplate(isolate, interface_template, V8ConvolverNode::GetWrapperTypeInfo()->interface_name, V8AudioNode::DomTemplate(isolate, world), V8ConvolverNode::kInternalFieldCount);
  interface_template->SetCallHandler(convolver_node_v8_internal::ConstructorCallback);
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
      signature, kV8ConvolverNodeAccessors, base::size(kV8ConvolverNodeAccessors));

  // Custom signature

  V8ConvolverNode::InstallRuntimeEnabledFeaturesOnTemplate(
      isolate, world, interface_template);
}

void V8ConvolverNode::InstallRuntimeEnabledFeaturesOnTemplate(
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

v8::Local<v8::FunctionTemplate> V8ConvolverNode::DomTemplate(
    v8::Isolate* isolate, const DOMWrapperWorld& world) {
  return V8DOMConfiguration::DomClassTemplate(
      isolate, world, const_cast<WrapperTypeInfo*>(V8ConvolverNode::GetWrapperTypeInfo()),
      InstallV8ConvolverNodeTemplate);
}

bool V8ConvolverNode::HasInstance(v8::Local<v8::Value> v8_value, v8::Isolate* isolate) {
  return V8PerIsolateData::From(isolate)->HasInstance(V8ConvolverNode::GetWrapperTypeInfo(), v8_value);
}

v8::Local<v8::Object> V8ConvolverNode::FindInstanceInPrototypeChain(
    v8::Local<v8::Value> v8_value, v8::Isolate* isolate) {
  return V8PerIsolateData::From(isolate)->FindInstanceInPrototypeChain(
      V8ConvolverNode::GetWrapperTypeInfo(), v8_value);
}

ConvolverNode* V8ConvolverNode::ToImplWithTypeCheck(
    v8::Isolate* isolate, v8::Local<v8::Value> value) {
  return HasInstance(value, isolate) ? ToImpl(v8::Local<v8::Object>::Cast(value)) : nullptr;
}

ConvolverNode* NativeValueTraits<ConvolverNode>::NativeValue(
    v8::Isolate* isolate, v8::Local<v8::Value> value, ExceptionState& exception_state) {
  ConvolverNode* native_value = V8ConvolverNode::ToImplWithTypeCheck(isolate, value);
  if (!native_value) {
    exception_state.ThrowTypeError(ExceptionMessages::FailedToConvertJSValue(
        "ConvolverNode"));
  }
  return native_value;
}

}  // namespace blink
