// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated from the Jinja2 template
// third_party/blink/renderer/bindings/templates/interface.cc.tmpl
// by the script code_generator_v8.py.
// DO NOT MODIFY!

// clang-format off
#include "third_party/blink/renderer/bindings/core/v8/v8_keyframe_effect.h"

#include <algorithm>

#include "base/memory/scoped_refptr.h"
#include "third_party/blink/renderer/bindings/core/v8/idl_types.h"
#include "third_party/blink/renderer/bindings/core/v8/native_value_traits_impl.h"
#include "third_party/blink/renderer/bindings/core/v8/script_value.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_dom_configuration.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_element.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_keyframe_effect.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_keyframe_effect_options.h"
#include "third_party/blink/renderer/core/execution_context/execution_context.h"
#include "third_party/blink/renderer/core/frame/local_dom_window.h"
#include "third_party/blink/renderer/core/inspector/console_message.h"
#include "third_party/blink/renderer/platform/bindings/exception_messages.h"
#include "third_party/blink/renderer/platform/bindings/exception_state.h"
#include "third_party/blink/renderer/platform/bindings/runtime_call_stats.h"
#include "third_party/blink/renderer/platform/bindings/script_state.h"
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
const WrapperTypeInfo v8_keyframe_effect_wrapper_type_info = {
    gin::kEmbedderBlink,
    V8KeyframeEffect::DomTemplate,
    nullptr,
    "KeyframeEffect",
    V8AnimationEffect::GetWrapperTypeInfo(),
    WrapperTypeInfo::kWrapperTypeObjectPrototype,
    WrapperTypeInfo::kObjectClassId,
    WrapperTypeInfo::kNotInheritFromActiveScriptWrappable,
};
#if defined(COMPONENT_BUILD) && defined(WIN32) && defined(__clang__)
#pragma clang diagnostic pop
#endif

// This static member must be declared by DEFINE_WRAPPERTYPEINFO in KeyframeEffect.h.
// For details, see the comment of DEFINE_WRAPPERTYPEINFO in
// platform/bindings/ScriptWrappable.h.
const WrapperTypeInfo& KeyframeEffect::wrapper_type_info_ = v8_keyframe_effect_wrapper_type_info;

// not [ActiveScriptWrappable]
static_assert(
    !std::is_base_of<ActiveScriptWrappableBase, KeyframeEffect>::value,
    "KeyframeEffect inherits from ActiveScriptWrappable<>, but is not specifying "
    "[ActiveScriptWrappable] extended attribute in the IDL file.  "
    "Be consistent.");
static_assert(
    std::is_same<decltype(&KeyframeEffect::HasPendingActivity),
                 decltype(&ScriptWrappable::HasPendingActivity)>::value,
    "KeyframeEffect is overriding hasPendingActivity(), but is not specifying "
    "[ActiveScriptWrappable] extended attribute in the IDL file.  "
    "Be consistent.");

namespace keyframe_effect_v8_internal {

static void TargetAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  KeyframeEffect* impl = V8KeyframeEffect::ToImpl(holder);

  V8SetReturnValueFast(info, WTF::GetPtr(impl->target()), impl);
}

static void TargetAttributeSetter(
    v8::Local<v8::Value> v8_value, const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Isolate* isolate = info.GetIsolate();
  ALLOW_UNUSED_LOCAL(isolate);

  v8::Local<v8::Object> holder = info.Holder();
  ALLOW_UNUSED_LOCAL(holder);

  KeyframeEffect* impl = V8KeyframeEffect::ToImpl(holder);

  ExceptionState exception_state(isolate, ExceptionState::kSetterContext, "KeyframeEffect", "target");

  // Prepare the value to be set.
  Element* cpp_value = V8Element::ToImplWithTypeCheck(info.GetIsolate(), v8_value);

  // Type check per: http://heycam.github.io/webidl/#es-interface
  if (!cpp_value && !IsUndefinedOrNull(v8_value)) {
    exception_state.ThrowTypeError("The provided value is not of type 'Element'.");
    return;
  }

  impl->setTarget(cpp_value);
}

static void CompositeAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  KeyframeEffect* impl = V8KeyframeEffect::ToImpl(holder);

  V8SetReturnValueString(info, impl->composite(), info.GetIsolate());
}

static void CompositeAttributeSetter(
    v8::Local<v8::Value> v8_value, const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Isolate* isolate = info.GetIsolate();
  ALLOW_UNUSED_LOCAL(isolate);

  v8::Local<v8::Object> holder = info.Holder();
  ALLOW_UNUSED_LOCAL(holder);

  KeyframeEffect* impl = V8KeyframeEffect::ToImpl(holder);

  ExceptionState exception_state(isolate, ExceptionState::kSetterContext, "KeyframeEffect", "composite");

  // Prepare the value to be set.
  V8StringResource<> cpp_value = v8_value;
  if (!cpp_value.Prepare())
    return;

  // Type check per: http://heycam.github.io/webidl/#dfn-attribute-setter
  // Returns undefined without setting the value if the value is invalid.
  DummyExceptionStateForTesting dummy_exception_state;
  {
    const char* kValidValues[] = {
      "replace",
      "add",
      "accumulate",
  };
    if (!IsValidEnum(cpp_value, kValidValues, base::size(kValidValues),
                     "CompositeOperation", dummy_exception_state)) {
      ExecutionContext::ForCurrentRealm(info)->AddConsoleMessage(
          ConsoleMessage::Create(mojom::ConsoleMessageSource::kJavaScript,
                                 mojom::ConsoleMessageLevel::kWarning,
                                 dummy_exception_state.Message()));
      return;
    }
  }

  impl->setComposite(cpp_value);
}

static void GetKeyframesMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  KeyframeEffect* impl = V8KeyframeEffect::ToImpl(info.Holder());

  ScriptState* script_state = ScriptState::ForRelevantRealm(info);

  Vector<ScriptValue> result = impl->getKeyframes(script_state);
  V8SetReturnValue(info, ToV8(result, info.Holder(), info.GetIsolate()));
}

static void SetKeyframesMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exception_state(info.GetIsolate(), ExceptionState::kExecutionContext, "KeyframeEffect", "setKeyframes");

  KeyframeEffect* impl = V8KeyframeEffect::ToImpl(info.Holder());

  ScriptState* script_state = ScriptState::ForRelevantRealm(info);

  if (UNLIKELY(info.Length() < 1)) {
    exception_state.ThrowTypeError(ExceptionMessages::NotEnoughArguments(1, info.Length()));
    return;
  }

  ScriptValue keyframes;
  if (info[0]->IsObject()) {
    keyframes = ScriptValue(ScriptState::Current(info.GetIsolate()), info[0]);
  } else if (info[0]->IsNullOrUndefined()) {
    keyframes = ScriptValue(ScriptState::Current(info.GetIsolate()), v8::Null(info.GetIsolate()));
  } else {
    exception_state.ThrowTypeError("parameter 1 ('keyframes') is not an object.");
    return;
  }

  impl->setKeyframes(script_state, keyframes, exception_state);
  if (exception_state.HadException()) {
    return;
  }
}

static void Constructor1(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_KeyframeEffect_ConstructorCallback");

  ExceptionState exception_state(info.GetIsolate(), ExceptionState::kConstructionContext, "KeyframeEffect");
  ScriptState* script_state = ScriptState::From(
      info.NewTarget().As<v8::Object>()->CreationContext());

  Element* target;
  ScriptValue keyframes;
  UnrestrictedDoubleOrKeyframeEffectOptions options;
  int num_args_passed = info.Length();
  while (num_args_passed > 0) {
    if (!info[num_args_passed - 1]->IsUndefined())
      break;
    --num_args_passed;
  }
  target = V8Element::ToImplWithTypeCheck(info.GetIsolate(), info[0]);
  if (!target && !IsUndefinedOrNull(info[0])) {
    exception_state.ThrowTypeError("parameter 1 is not of type 'Element'.");
    return;
  }

  if (info[1]->IsObject()) {
    keyframes = ScriptValue(ScriptState::Current(info.GetIsolate()), info[1]);
  } else if (info[1]->IsNullOrUndefined()) {
    keyframes = ScriptValue(ScriptState::Current(info.GetIsolate()), v8::Null(info.GetIsolate()));
  } else {
    exception_state.ThrowTypeError("parameter 2 ('keyframes') is not an object.");
    return;
  }

  if (UNLIKELY(num_args_passed <= 2)) {
    KeyframeEffect* impl = KeyframeEffect::Create(script_state, target, keyframes, exception_state);
    if (exception_state.HadException()) {
      return;
    }
    v8::Local<v8::Object> wrapper = info.Holder();
    wrapper = impl->AssociateWithWrapper(info.GetIsolate(), V8KeyframeEffect::GetWrapperTypeInfo(), wrapper);
    V8SetReturnValue(info, wrapper);
    return;
  }
  V8UnrestrictedDoubleOrKeyframeEffectOptions::ToImpl(info.GetIsolate(), info[2], options, UnionTypeConversionMode::kNotNullable, exception_state);
  if (exception_state.HadException())
    return;

  KeyframeEffect* impl = KeyframeEffect::Create(script_state, target, keyframes, options, exception_state);
  if (exception_state.HadException()) {
    return;
  }
  v8::Local<v8::Object> wrapper = info.Holder();
  wrapper = impl->AssociateWithWrapper(info.GetIsolate(), V8KeyframeEffect::GetWrapperTypeInfo(), wrapper);
  V8SetReturnValue(info, wrapper);
}

static void Constructor2(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_KeyframeEffect_ConstructorCallback");

  ExceptionState exception_state(info.GetIsolate(), ExceptionState::kConstructionContext, "KeyframeEffect");
  ScriptState* script_state = ScriptState::From(
      info.NewTarget().As<v8::Object>()->CreationContext());

  KeyframeEffect* source;
  source = V8KeyframeEffect::ToImplWithTypeCheck(info.GetIsolate(), info[0]);
  if (!source) {
    exception_state.ThrowTypeError("parameter 1 is not of type 'KeyframeEffect'.");
    return;
  }

  KeyframeEffect* impl = KeyframeEffect::Create(script_state, source, exception_state);
  if (exception_state.HadException()) {
    return;
  }
  v8::Local<v8::Object> wrapper = info.Holder();
  wrapper = impl->AssociateWithWrapper(info.GetIsolate(), V8KeyframeEffect::GetWrapperTypeInfo(), wrapper);
  V8SetReturnValue(info, wrapper);
}

static void Constructor(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exception_state(info.GetIsolate(), ExceptionState::kConstructionContext, "KeyframeEffect");
  switch (std::min(3, info.Length())) {
    case 1:
      if (true) {
        keyframe_effect_v8_internal::Constructor2(info);
        return;
      }
      break;
    case 2:
      if (true) {
        keyframe_effect_v8_internal::Constructor1(info);
        return;
      }
      break;
    case 3:
      if (true) {
        keyframe_effect_v8_internal::Constructor1(info);
        return;
      }
      break;
    default:
      exception_state.ThrowTypeError(ExceptionMessages::NotEnoughArguments(1, info.Length()));
      return;
  }
  exception_state.ThrowTypeError("No matching constructor signature.");
}

CORE_EXPORT void ConstructorCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_KeyframeEffect_Constructor");

  if (!info.IsConstructCall()) {
    V8ThrowException::ThrowTypeError(
        info.GetIsolate(),
        ExceptionMessages::ConstructorNotCallableAsFunction("KeyframeEffect"));
    return;
  }

  if (ConstructorMode::Current(info.GetIsolate()) == ConstructorMode::kWrapExistingObject) {
    V8SetReturnValue(info, info.Holder());
    return;
  }

  keyframe_effect_v8_internal::Constructor(info);
}

}  // namespace keyframe_effect_v8_internal

void V8KeyframeEffect::TargetAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_KeyframeEffect_target_Getter");

  keyframe_effect_v8_internal::TargetAttributeGetter(info);
}

void V8KeyframeEffect::TargetAttributeSetterCallback(
    const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_KeyframeEffect_target_Setter");

  v8::Local<v8::Value> v8_value = info[0];

  keyframe_effect_v8_internal::TargetAttributeSetter(v8_value, info);
}

void V8KeyframeEffect::CompositeAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_KeyframeEffect_composite_Getter");

  keyframe_effect_v8_internal::CompositeAttributeGetter(info);
}

void V8KeyframeEffect::CompositeAttributeSetterCallback(
    const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_KeyframeEffect_composite_Setter");

  v8::Local<v8::Value> v8_value = info[0];

  keyframe_effect_v8_internal::CompositeAttributeSetter(v8_value, info);
}

void V8KeyframeEffect::GetKeyframesMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_KeyframeEffect_getKeyframes");

  keyframe_effect_v8_internal::GetKeyframesMethod(info);
}

void V8KeyframeEffect::SetKeyframesMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_KeyframeEffect_setKeyframes");

  keyframe_effect_v8_internal::SetKeyframesMethod(info);
}

static constexpr V8DOMConfiguration::AccessorConfiguration kV8KeyframeEffectAccessors[] = {
    { "target", V8KeyframeEffect::TargetAttributeGetterCallback, V8KeyframeEffect::TargetAttributeSetterCallback, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
};

static void InstallV8KeyframeEffectTemplate(
    v8::Isolate* isolate,
    const DOMWrapperWorld& world,
    v8::Local<v8::FunctionTemplate> interface_template) {
  // Initialize the interface object's template.
  V8DOMConfiguration::InitializeDOMInterfaceTemplate(isolate, interface_template, V8KeyframeEffect::GetWrapperTypeInfo()->interface_name, V8AnimationEffect::DomTemplate(isolate, world), V8KeyframeEffect::kInternalFieldCount);
  interface_template->SetCallHandler(keyframe_effect_v8_internal::ConstructorCallback);
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
      signature, kV8KeyframeEffectAccessors, base::size(kV8KeyframeEffectAccessors));

  // Custom signature

  V8KeyframeEffect::InstallRuntimeEnabledFeaturesOnTemplate(
      isolate, world, interface_template);
}

void V8KeyframeEffect::InstallRuntimeEnabledFeaturesOnTemplate(
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

  if (RuntimeEnabledFeatures::WebAnimationsAPIEnabled()) {
    static constexpr V8DOMConfiguration::AccessorConfiguration kConfigurations[] = {
        { "composite", V8KeyframeEffect::CompositeAttributeGetterCallback, V8KeyframeEffect::CompositeAttributeSetterCallback, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
    };
    V8DOMConfiguration::InstallAccessors(
        isolate, world, instance_template, prototype_template, interface_template,
        signature, kConfigurations, base::size(kConfigurations));
  }

  // Custom signature
  if (RuntimeEnabledFeatures::WebAnimationsAPIEnabled()) {
    {
      // Install getKeyframes configuration
      constexpr V8DOMConfiguration::MethodConfiguration kConfigurations[] = {
          {"getKeyframes", V8KeyframeEffect::GetKeyframesMethodCallback, 0, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds}
      };
      for (const auto& config : kConfigurations) {
        V8DOMConfiguration::InstallMethod(
            isolate, world, instance_template, prototype_template,
            interface_template, signature, config);
      }
    }
  }
  if (RuntimeEnabledFeatures::WebAnimationsAPIEnabled()) {
    {
      // Install setKeyframes configuration
      constexpr V8DOMConfiguration::MethodConfiguration kConfigurations[] = {
          {"setKeyframes", V8KeyframeEffect::SetKeyframesMethodCallback, 1, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds}
      };
      for (const auto& config : kConfigurations) {
        V8DOMConfiguration::InstallMethod(
            isolate, world, instance_template, prototype_template,
            interface_template, signature, config);
      }
    }
  }
}

v8::Local<v8::FunctionTemplate> V8KeyframeEffect::DomTemplate(
    v8::Isolate* isolate, const DOMWrapperWorld& world) {
  return V8DOMConfiguration::DomClassTemplate(
      isolate, world, const_cast<WrapperTypeInfo*>(V8KeyframeEffect::GetWrapperTypeInfo()),
      InstallV8KeyframeEffectTemplate);
}

bool V8KeyframeEffect::HasInstance(v8::Local<v8::Value> v8_value, v8::Isolate* isolate) {
  return V8PerIsolateData::From(isolate)->HasInstance(V8KeyframeEffect::GetWrapperTypeInfo(), v8_value);
}

v8::Local<v8::Object> V8KeyframeEffect::FindInstanceInPrototypeChain(
    v8::Local<v8::Value> v8_value, v8::Isolate* isolate) {
  return V8PerIsolateData::From(isolate)->FindInstanceInPrototypeChain(
      V8KeyframeEffect::GetWrapperTypeInfo(), v8_value);
}

KeyframeEffect* V8KeyframeEffect::ToImplWithTypeCheck(
    v8::Isolate* isolate, v8::Local<v8::Value> value) {
  return HasInstance(value, isolate) ? ToImpl(v8::Local<v8::Object>::Cast(value)) : nullptr;
}

KeyframeEffect* NativeValueTraits<KeyframeEffect>::NativeValue(
    v8::Isolate* isolate, v8::Local<v8::Value> value, ExceptionState& exception_state) {
  KeyframeEffect* native_value = V8KeyframeEffect::ToImplWithTypeCheck(isolate, value);
  if (!native_value) {
    exception_state.ThrowTypeError(ExceptionMessages::FailedToConvertJSValue(
        "KeyframeEffect"));
  }
  return native_value;
}

}  // namespace blink
