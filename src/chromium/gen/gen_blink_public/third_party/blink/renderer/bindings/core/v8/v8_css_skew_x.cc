// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated from the Jinja2 template
// third_party/blink/renderer/bindings/templates/interface.cc.tmpl
// by the script code_generator_v8.py.
// DO NOT MODIFY!

// clang-format off
#include "third_party/blink/renderer/bindings/core/v8/v8_css_skew_x.h"

#include <algorithm>

#include "base/memory/scoped_refptr.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_css_numeric_value.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_dom_configuration.h"
#include "third_party/blink/renderer/core/execution_context/execution_context.h"
#include "third_party/blink/renderer/core/frame/local_dom_window.h"
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
const WrapperTypeInfo v8_css_skew_x_wrapper_type_info = {
    gin::kEmbedderBlink,
    V8CSSSkewX::DomTemplate,
    nullptr,
    "CSSSkewX",
    V8CSSTransformComponent::GetWrapperTypeInfo(),
    WrapperTypeInfo::kWrapperTypeObjectPrototype,
    WrapperTypeInfo::kObjectClassId,
    WrapperTypeInfo::kNotInheritFromActiveScriptWrappable,
};
#if defined(COMPONENT_BUILD) && defined(WIN32) && defined(__clang__)
#pragma clang diagnostic pop
#endif

// This static member must be declared by DEFINE_WRAPPERTYPEINFO in CSSSkewX.h.
// For details, see the comment of DEFINE_WRAPPERTYPEINFO in
// platform/bindings/ScriptWrappable.h.
const WrapperTypeInfo& CSSSkewX::wrapper_type_info_ = v8_css_skew_x_wrapper_type_info;

// not [ActiveScriptWrappable]
static_assert(
    !std::is_base_of<ActiveScriptWrappableBase, CSSSkewX>::value,
    "CSSSkewX inherits from ActiveScriptWrappable<>, but is not specifying "
    "[ActiveScriptWrappable] extended attribute in the IDL file.  "
    "Be consistent.");
static_assert(
    std::is_same<decltype(&CSSSkewX::HasPendingActivity),
                 decltype(&ScriptWrappable::HasPendingActivity)>::value,
    "CSSSkewX is overriding hasPendingActivity(), but is not specifying "
    "[ActiveScriptWrappable] extended attribute in the IDL file.  "
    "Be consistent.");

namespace css_skew_x_v8_internal {

static void AXAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  CSSSkewX* impl = V8CSSSkewX::ToImpl(holder);

  V8SetReturnValueFast(info, WTF::GetPtr(impl->ax()), impl);
}

static void AXAttributeSetter(
    v8::Local<v8::Value> v8_value, const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Isolate* isolate = info.GetIsolate();
  ALLOW_UNUSED_LOCAL(isolate);

  v8::Local<v8::Object> holder = info.Holder();
  ALLOW_UNUSED_LOCAL(holder);

  CSSSkewX* impl = V8CSSSkewX::ToImpl(holder);

  ExceptionState exception_state(isolate, ExceptionState::kSetterContext, "CSSSkewX", "ax");

  // Prepare the value to be set.
  CSSNumericValue* cpp_value = V8CSSNumericValue::ToImplWithTypeCheck(info.GetIsolate(), v8_value);

  // Type check per: http://heycam.github.io/webidl/#es-interface
  if (!cpp_value) {
    exception_state.ThrowTypeError("The provided value is not of type 'CSSNumericValue'.");
    return;
  }

  impl->setAx(cpp_value, exception_state);
}

static void Constructor(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_CSSSkewX_ConstructorCallback");

  ExceptionState exception_state(info.GetIsolate(), ExceptionState::kConstructionContext, "CSSSkewX");

  if (UNLIKELY(info.Length() < 1)) {
    exception_state.ThrowTypeError(ExceptionMessages::NotEnoughArguments(1, info.Length()));
    return;
  }

  CSSNumericValue* ax;
  ax = V8CSSNumericValue::ToImplWithTypeCheck(info.GetIsolate(), info[0]);
  if (!ax) {
    exception_state.ThrowTypeError("parameter 1 is not of type 'CSSNumericValue'.");
    return;
  }

  CSSSkewX* impl = CSSSkewX::Create(ax, exception_state);
  if (exception_state.HadException()) {
    return;
  }
  v8::Local<v8::Object> wrapper = info.Holder();
  wrapper = impl->AssociateWithWrapper(info.GetIsolate(), V8CSSSkewX::GetWrapperTypeInfo(), wrapper);
  V8SetReturnValue(info, wrapper);
}

CORE_EXPORT void ConstructorCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_CSSSkewX_Constructor");

  if (!info.IsConstructCall()) {
    V8ThrowException::ThrowTypeError(
        info.GetIsolate(),
        ExceptionMessages::ConstructorNotCallableAsFunction("CSSSkewX"));
    return;
  }

  if (ConstructorMode::Current(info.GetIsolate()) == ConstructorMode::kWrapExistingObject) {
    V8SetReturnValue(info, info.Holder());
    return;
  }

  css_skew_x_v8_internal::Constructor(info);
}

}  // namespace css_skew_x_v8_internal

void V8CSSSkewX::AXAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_CSSSkewX_ax_Getter");

  css_skew_x_v8_internal::AXAttributeGetter(info);
}

void V8CSSSkewX::AXAttributeSetterCallback(
    const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_CSSSkewX_ax_Setter");

  v8::Local<v8::Value> v8_value = info[0];

  css_skew_x_v8_internal::AXAttributeSetter(v8_value, info);
}

static constexpr V8DOMConfiguration::AccessorConfiguration kV8CSSSkewXAccessors[] = {
    { "ax", V8CSSSkewX::AXAttributeGetterCallback, V8CSSSkewX::AXAttributeSetterCallback, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
};

static void InstallV8CSSSkewXTemplate(
    v8::Isolate* isolate,
    const DOMWrapperWorld& world,
    v8::Local<v8::FunctionTemplate> interface_template) {
  // Initialize the interface object's template.
  V8DOMConfiguration::InitializeDOMInterfaceTemplate(isolate, interface_template, V8CSSSkewX::GetWrapperTypeInfo()->interface_name, V8CSSTransformComponent::DomTemplate(isolate, world), V8CSSSkewX::kInternalFieldCount);
  interface_template->SetCallHandler(css_skew_x_v8_internal::ConstructorCallback);
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
      signature, kV8CSSSkewXAccessors, base::size(kV8CSSSkewXAccessors));

  // Custom signature

  V8CSSSkewX::InstallRuntimeEnabledFeaturesOnTemplate(
      isolate, world, interface_template);
}

void V8CSSSkewX::InstallRuntimeEnabledFeaturesOnTemplate(
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

v8::Local<v8::FunctionTemplate> V8CSSSkewX::DomTemplate(
    v8::Isolate* isolate, const DOMWrapperWorld& world) {
  return V8DOMConfiguration::DomClassTemplate(
      isolate, world, const_cast<WrapperTypeInfo*>(V8CSSSkewX::GetWrapperTypeInfo()),
      InstallV8CSSSkewXTemplate);
}

bool V8CSSSkewX::HasInstance(v8::Local<v8::Value> v8_value, v8::Isolate* isolate) {
  return V8PerIsolateData::From(isolate)->HasInstance(V8CSSSkewX::GetWrapperTypeInfo(), v8_value);
}

v8::Local<v8::Object> V8CSSSkewX::FindInstanceInPrototypeChain(
    v8::Local<v8::Value> v8_value, v8::Isolate* isolate) {
  return V8PerIsolateData::From(isolate)->FindInstanceInPrototypeChain(
      V8CSSSkewX::GetWrapperTypeInfo(), v8_value);
}

CSSSkewX* V8CSSSkewX::ToImplWithTypeCheck(
    v8::Isolate* isolate, v8::Local<v8::Value> value) {
  return HasInstance(value, isolate) ? ToImpl(v8::Local<v8::Object>::Cast(value)) : nullptr;
}

CSSSkewX* NativeValueTraits<CSSSkewX>::NativeValue(
    v8::Isolate* isolate, v8::Local<v8::Value> value, ExceptionState& exception_state) {
  CSSSkewX* native_value = V8CSSSkewX::ToImplWithTypeCheck(isolate, value);
  if (!native_value) {
    exception_state.ThrowTypeError(ExceptionMessages::FailedToConvertJSValue(
        "CSSSkewX"));
  }
  return native_value;
}

}  // namespace blink
