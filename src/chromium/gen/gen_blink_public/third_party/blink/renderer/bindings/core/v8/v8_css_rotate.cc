// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated from the Jinja2 template
// third_party/blink/renderer/bindings/templates/interface.cc.tmpl
// by the script code_generator_v8.py.
// DO NOT MODIFY!

// clang-format off
#include "third_party/blink/renderer/bindings/core/v8/v8_css_rotate.h"

#include <algorithm>

#include "base/memory/scoped_refptr.h"
#include "third_party/blink/renderer/bindings/core/v8/idl_types.h"
#include "third_party/blink/renderer/bindings/core/v8/native_value_traits_impl.h"
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
const WrapperTypeInfo v8_css_rotate_wrapper_type_info = {
    gin::kEmbedderBlink,
    V8CSSRotate::DomTemplate,
    nullptr,
    "CSSRotate",
    V8CSSTransformComponent::GetWrapperTypeInfo(),
    WrapperTypeInfo::kWrapperTypeObjectPrototype,
    WrapperTypeInfo::kObjectClassId,
    WrapperTypeInfo::kNotInheritFromActiveScriptWrappable,
};
#if defined(COMPONENT_BUILD) && defined(WIN32) && defined(__clang__)
#pragma clang diagnostic pop
#endif

// This static member must be declared by DEFINE_WRAPPERTYPEINFO in CSSRotate.h.
// For details, see the comment of DEFINE_WRAPPERTYPEINFO in
// platform/bindings/ScriptWrappable.h.
const WrapperTypeInfo& CSSRotate::wrapper_type_info_ = v8_css_rotate_wrapper_type_info;

// not [ActiveScriptWrappable]
static_assert(
    !std::is_base_of<ActiveScriptWrappableBase, CSSRotate>::value,
    "CSSRotate inherits from ActiveScriptWrappable<>, but is not specifying "
    "[ActiveScriptWrappable] extended attribute in the IDL file.  "
    "Be consistent.");
static_assert(
    std::is_same<decltype(&CSSRotate::HasPendingActivity),
                 decltype(&ScriptWrappable::HasPendingActivity)>::value,
    "CSSRotate is overriding hasPendingActivity(), but is not specifying "
    "[ActiveScriptWrappable] extended attribute in the IDL file.  "
    "Be consistent.");

namespace css_rotate_v8_internal {

static void AngleAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  CSSRotate* impl = V8CSSRotate::ToImpl(holder);

  V8SetReturnValueFast(info, WTF::GetPtr(impl->angle()), impl);
}

static void AngleAttributeSetter(
    v8::Local<v8::Value> v8_value, const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Isolate* isolate = info.GetIsolate();
  ALLOW_UNUSED_LOCAL(isolate);

  v8::Local<v8::Object> holder = info.Holder();
  ALLOW_UNUSED_LOCAL(holder);

  CSSRotate* impl = V8CSSRotate::ToImpl(holder);

  ExceptionState exception_state(isolate, ExceptionState::kSetterContext, "CSSRotate", "angle");

  // Prepare the value to be set.
  CSSNumericValue* cpp_value = V8CSSNumericValue::ToImplWithTypeCheck(info.GetIsolate(), v8_value);

  // Type check per: http://heycam.github.io/webidl/#es-interface
  if (!cpp_value) {
    exception_state.ThrowTypeError("The provided value is not of type 'CSSNumericValue'.");
    return;
  }

  impl->setAngle(cpp_value, exception_state);
}

static void XAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  CSSRotate* impl = V8CSSRotate::ToImpl(holder);

  DoubleOrCSSNumericValue result;
  impl->x(result);

  V8SetReturnValue(info, result);
}

static void XAttributeSetter(
    v8::Local<v8::Value> v8_value, const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Isolate* isolate = info.GetIsolate();
  ALLOW_UNUSED_LOCAL(isolate);

  v8::Local<v8::Object> holder = info.Holder();
  ALLOW_UNUSED_LOCAL(holder);

  CSSRotate* impl = V8CSSRotate::ToImpl(holder);

  ExceptionState exception_state(isolate, ExceptionState::kSetterContext, "CSSRotate", "x");

  // Prepare the value to be set.
  DoubleOrCSSNumericValue cpp_value;
  V8DoubleOrCSSNumericValue::ToImpl(info.GetIsolate(), v8_value, cpp_value, UnionTypeConversionMode::kNotNullable, exception_state);
  if (exception_state.HadException())
    return;

  impl->setX(cpp_value, exception_state);
}

static void YAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  CSSRotate* impl = V8CSSRotate::ToImpl(holder);

  DoubleOrCSSNumericValue result;
  impl->y(result);

  V8SetReturnValue(info, result);
}

static void YAttributeSetter(
    v8::Local<v8::Value> v8_value, const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Isolate* isolate = info.GetIsolate();
  ALLOW_UNUSED_LOCAL(isolate);

  v8::Local<v8::Object> holder = info.Holder();
  ALLOW_UNUSED_LOCAL(holder);

  CSSRotate* impl = V8CSSRotate::ToImpl(holder);

  ExceptionState exception_state(isolate, ExceptionState::kSetterContext, "CSSRotate", "y");

  // Prepare the value to be set.
  DoubleOrCSSNumericValue cpp_value;
  V8DoubleOrCSSNumericValue::ToImpl(info.GetIsolate(), v8_value, cpp_value, UnionTypeConversionMode::kNotNullable, exception_state);
  if (exception_state.HadException())
    return;

  impl->setY(cpp_value, exception_state);
}

static void ZAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  CSSRotate* impl = V8CSSRotate::ToImpl(holder);

  DoubleOrCSSNumericValue result;
  impl->z(result);

  V8SetReturnValue(info, result);
}

static void ZAttributeSetter(
    v8::Local<v8::Value> v8_value, const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Isolate* isolate = info.GetIsolate();
  ALLOW_UNUSED_LOCAL(isolate);

  v8::Local<v8::Object> holder = info.Holder();
  ALLOW_UNUSED_LOCAL(holder);

  CSSRotate* impl = V8CSSRotate::ToImpl(holder);

  ExceptionState exception_state(isolate, ExceptionState::kSetterContext, "CSSRotate", "z");

  // Prepare the value to be set.
  DoubleOrCSSNumericValue cpp_value;
  V8DoubleOrCSSNumericValue::ToImpl(info.GetIsolate(), v8_value, cpp_value, UnionTypeConversionMode::kNotNullable, exception_state);
  if (exception_state.HadException())
    return;

  impl->setZ(cpp_value, exception_state);
}

static void Constructor1(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_CSSRotate_ConstructorCallback");

  ExceptionState exception_state(info.GetIsolate(), ExceptionState::kConstructionContext, "CSSRotate");

  CSSNumericValue* angle_value;
  angle_value = V8CSSNumericValue::ToImplWithTypeCheck(info.GetIsolate(), info[0]);
  if (!angle_value) {
    exception_state.ThrowTypeError("parameter 1 is not of type 'CSSNumericValue'.");
    return;
  }

  CSSRotate* impl = CSSRotate::Create(angle_value, exception_state);
  if (exception_state.HadException()) {
    return;
  }
  v8::Local<v8::Object> wrapper = info.Holder();
  wrapper = impl->AssociateWithWrapper(info.GetIsolate(), V8CSSRotate::GetWrapperTypeInfo(), wrapper);
  V8SetReturnValue(info, wrapper);
}

static void Constructor2(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_CSSRotate_ConstructorCallback");

  ExceptionState exception_state(info.GetIsolate(), ExceptionState::kConstructionContext, "CSSRotate");

  DoubleOrCSSNumericValue x;
  DoubleOrCSSNumericValue y;
  DoubleOrCSSNumericValue z;
  CSSNumericValue* angle;
  V8DoubleOrCSSNumericValue::ToImpl(info.GetIsolate(), info[0], x, UnionTypeConversionMode::kNotNullable, exception_state);
  if (exception_state.HadException())
    return;

  V8DoubleOrCSSNumericValue::ToImpl(info.GetIsolate(), info[1], y, UnionTypeConversionMode::kNotNullable, exception_state);
  if (exception_state.HadException())
    return;

  V8DoubleOrCSSNumericValue::ToImpl(info.GetIsolate(), info[2], z, UnionTypeConversionMode::kNotNullable, exception_state);
  if (exception_state.HadException())
    return;

  angle = V8CSSNumericValue::ToImplWithTypeCheck(info.GetIsolate(), info[3]);
  if (!angle) {
    exception_state.ThrowTypeError("parameter 4 is not of type 'CSSNumericValue'.");
    return;
  }

  CSSRotate* impl = CSSRotate::Create(x, y, z, angle, exception_state);
  if (exception_state.HadException()) {
    return;
  }
  v8::Local<v8::Object> wrapper = info.Holder();
  wrapper = impl->AssociateWithWrapper(info.GetIsolate(), V8CSSRotate::GetWrapperTypeInfo(), wrapper);
  V8SetReturnValue(info, wrapper);
}

static void Constructor(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exception_state(info.GetIsolate(), ExceptionState::kConstructionContext, "CSSRotate");
  switch (std::min(4, info.Length())) {
    case 1:
      if (true) {
        css_rotate_v8_internal::Constructor1(info);
        return;
      }
      break;
    case 4:
      if (true) {
        css_rotate_v8_internal::Constructor2(info);
        return;
      }
      break;
    default:
      if (info.Length() >= 1) {
        exception_state.ThrowTypeError(ExceptionMessages::InvalidArity("[1, 4]", info.Length()));
        return;
      }
      exception_state.ThrowTypeError(ExceptionMessages::NotEnoughArguments(1, info.Length()));
      return;
  }
  exception_state.ThrowTypeError("No matching constructor signature.");
}

CORE_EXPORT void ConstructorCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_CSSRotate_Constructor");

  if (!info.IsConstructCall()) {
    V8ThrowException::ThrowTypeError(
        info.GetIsolate(),
        ExceptionMessages::ConstructorNotCallableAsFunction("CSSRotate"));
    return;
  }

  if (ConstructorMode::Current(info.GetIsolate()) == ConstructorMode::kWrapExistingObject) {
    V8SetReturnValue(info, info.Holder());
    return;
  }

  css_rotate_v8_internal::Constructor(info);
}

}  // namespace css_rotate_v8_internal

void V8CSSRotate::AngleAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_CSSRotate_angle_Getter");

  css_rotate_v8_internal::AngleAttributeGetter(info);
}

void V8CSSRotate::AngleAttributeSetterCallback(
    const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_CSSRotate_angle_Setter");

  v8::Local<v8::Value> v8_value = info[0];

  css_rotate_v8_internal::AngleAttributeSetter(v8_value, info);
}

void V8CSSRotate::XAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_CSSRotate_x_Getter");

  css_rotate_v8_internal::XAttributeGetter(info);
}

void V8CSSRotate::XAttributeSetterCallback(
    const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_CSSRotate_x_Setter");

  v8::Local<v8::Value> v8_value = info[0];

  css_rotate_v8_internal::XAttributeSetter(v8_value, info);
}

void V8CSSRotate::YAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_CSSRotate_y_Getter");

  css_rotate_v8_internal::YAttributeGetter(info);
}

void V8CSSRotate::YAttributeSetterCallback(
    const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_CSSRotate_y_Setter");

  v8::Local<v8::Value> v8_value = info[0];

  css_rotate_v8_internal::YAttributeSetter(v8_value, info);
}

void V8CSSRotate::ZAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_CSSRotate_z_Getter");

  css_rotate_v8_internal::ZAttributeGetter(info);
}

void V8CSSRotate::ZAttributeSetterCallback(
    const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_CSSRotate_z_Setter");

  v8::Local<v8::Value> v8_value = info[0];

  css_rotate_v8_internal::ZAttributeSetter(v8_value, info);
}

static constexpr V8DOMConfiguration::AccessorConfiguration kV8CSSRotateAccessors[] = {
    { "angle", V8CSSRotate::AngleAttributeGetterCallback, V8CSSRotate::AngleAttributeSetterCallback, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
    { "x", V8CSSRotate::XAttributeGetterCallback, V8CSSRotate::XAttributeSetterCallback, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
    { "y", V8CSSRotate::YAttributeGetterCallback, V8CSSRotate::YAttributeSetterCallback, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
    { "z", V8CSSRotate::ZAttributeGetterCallback, V8CSSRotate::ZAttributeSetterCallback, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
};

static void InstallV8CSSRotateTemplate(
    v8::Isolate* isolate,
    const DOMWrapperWorld& world,
    v8::Local<v8::FunctionTemplate> interface_template) {
  // Initialize the interface object's template.
  V8DOMConfiguration::InitializeDOMInterfaceTemplate(isolate, interface_template, V8CSSRotate::GetWrapperTypeInfo()->interface_name, V8CSSTransformComponent::DomTemplate(isolate, world), V8CSSRotate::kInternalFieldCount);
  interface_template->SetCallHandler(css_rotate_v8_internal::ConstructorCallback);
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
      signature, kV8CSSRotateAccessors, base::size(kV8CSSRotateAccessors));

  // Custom signature

  V8CSSRotate::InstallRuntimeEnabledFeaturesOnTemplate(
      isolate, world, interface_template);
}

void V8CSSRotate::InstallRuntimeEnabledFeaturesOnTemplate(
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

v8::Local<v8::FunctionTemplate> V8CSSRotate::DomTemplate(
    v8::Isolate* isolate, const DOMWrapperWorld& world) {
  return V8DOMConfiguration::DomClassTemplate(
      isolate, world, const_cast<WrapperTypeInfo*>(V8CSSRotate::GetWrapperTypeInfo()),
      InstallV8CSSRotateTemplate);
}

bool V8CSSRotate::HasInstance(v8::Local<v8::Value> v8_value, v8::Isolate* isolate) {
  return V8PerIsolateData::From(isolate)->HasInstance(V8CSSRotate::GetWrapperTypeInfo(), v8_value);
}

v8::Local<v8::Object> V8CSSRotate::FindInstanceInPrototypeChain(
    v8::Local<v8::Value> v8_value, v8::Isolate* isolate) {
  return V8PerIsolateData::From(isolate)->FindInstanceInPrototypeChain(
      V8CSSRotate::GetWrapperTypeInfo(), v8_value);
}

CSSRotate* V8CSSRotate::ToImplWithTypeCheck(
    v8::Isolate* isolate, v8::Local<v8::Value> value) {
  return HasInstance(value, isolate) ? ToImpl(v8::Local<v8::Object>::Cast(value)) : nullptr;
}

CSSRotate* NativeValueTraits<CSSRotate>::NativeValue(
    v8::Isolate* isolate, v8::Local<v8::Value> value, ExceptionState& exception_state) {
  CSSRotate* native_value = V8CSSRotate::ToImplWithTypeCheck(isolate, value);
  if (!native_value) {
    exception_state.ThrowTypeError(ExceptionMessages::FailedToConvertJSValue(
        "CSSRotate"));
  }
  return native_value;
}

}  // namespace blink
