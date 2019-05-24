// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated from the Jinja2 template
// third_party/blink/renderer/bindings/templates/interface.cc.tmpl
// by the script code_generator_v8.py.
// DO NOT MODIFY!

// clang-format off
#include "third_party/blink/renderer/bindings/core/v8/v8_svg_angle.h"

#include <algorithm>

#include "base/memory/scoped_refptr.h"
#include "third_party/blink/renderer/bindings/core/v8/idl_types.h"
#include "third_party/blink/renderer/bindings/core/v8/native_value_traits_impl.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_dom_configuration.h"
#include "third_party/blink/renderer/core/execution_context/execution_context.h"
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
const WrapperTypeInfo v8_svg_angle_wrapper_type_info = {
    gin::kEmbedderBlink,
    V8SVGAngle::DomTemplate,
    nullptr,
    "SVGAngle",
    nullptr,
    WrapperTypeInfo::kWrapperTypeObjectPrototype,
    WrapperTypeInfo::kObjectClassId,
    WrapperTypeInfo::kNotInheritFromActiveScriptWrappable,
};
#if defined(COMPONENT_BUILD) && defined(WIN32) && defined(__clang__)
#pragma clang diagnostic pop
#endif

// This static member must be declared by DEFINE_WRAPPERTYPEINFO in SVGAngleTearOff.h.
// For details, see the comment of DEFINE_WRAPPERTYPEINFO in
// platform/bindings/ScriptWrappable.h.
const WrapperTypeInfo& SVGAngleTearOff::wrapper_type_info_ = v8_svg_angle_wrapper_type_info;

// not [ActiveScriptWrappable]
static_assert(
    !std::is_base_of<ActiveScriptWrappableBase, SVGAngleTearOff>::value,
    "SVGAngleTearOff inherits from ActiveScriptWrappable<>, but is not specifying "
    "[ActiveScriptWrappable] extended attribute in the IDL file.  "
    "Be consistent.");
static_assert(
    std::is_same<decltype(&SVGAngleTearOff::HasPendingActivity),
                 decltype(&ScriptWrappable::HasPendingActivity)>::value,
    "SVGAngleTearOff is overriding hasPendingActivity(), but is not specifying "
    "[ActiveScriptWrappable] extended attribute in the IDL file.  "
    "Be consistent.");

namespace svg_angle_tear_off_v8_internal {

static void UnitTypeAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  SVGAngleTearOff* impl = V8SVGAngle::ToImpl(holder);

  V8SetReturnValueUnsigned(info, impl->unitType());
}

static void ValueAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  SVGAngleTearOff* impl = V8SVGAngle::ToImpl(holder);

  V8SetReturnValue(info, impl->value());
}

static void ValueAttributeSetter(
    v8::Local<v8::Value> v8_value, const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Isolate* isolate = info.GetIsolate();
  ALLOW_UNUSED_LOCAL(isolate);

  v8::Local<v8::Object> holder = info.Holder();
  ALLOW_UNUSED_LOCAL(holder);

  SVGAngleTearOff* impl = V8SVGAngle::ToImpl(holder);

  ExceptionState exception_state(isolate, ExceptionState::kSetterContext, "SVGAngle", "value");

  // Prepare the value to be set.
  float cpp_value = NativeValueTraits<IDLFloat>::NativeValue(info.GetIsolate(), v8_value, exception_state);
  if (exception_state.HadException())
    return;

  impl->setValue(cpp_value, exception_state);
}

static void ValueInSpecifiedUnitsAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  SVGAngleTearOff* impl = V8SVGAngle::ToImpl(holder);

  V8SetReturnValue(info, impl->valueInSpecifiedUnits());
}

static void ValueInSpecifiedUnitsAttributeSetter(
    v8::Local<v8::Value> v8_value, const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Isolate* isolate = info.GetIsolate();
  ALLOW_UNUSED_LOCAL(isolate);

  v8::Local<v8::Object> holder = info.Holder();
  ALLOW_UNUSED_LOCAL(holder);

  SVGAngleTearOff* impl = V8SVGAngle::ToImpl(holder);

  ExceptionState exception_state(isolate, ExceptionState::kSetterContext, "SVGAngle", "valueInSpecifiedUnits");

  // Prepare the value to be set.
  float cpp_value = NativeValueTraits<IDLFloat>::NativeValue(info.GetIsolate(), v8_value, exception_state);
  if (exception_state.HadException())
    return;

  impl->setValueInSpecifiedUnits(cpp_value, exception_state);
}

static void ValueAsStringAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  SVGAngleTearOff* impl = V8SVGAngle::ToImpl(holder);

  V8SetReturnValueString(info, impl->valueAsString(), info.GetIsolate());
}

static void ValueAsStringAttributeSetter(
    v8::Local<v8::Value> v8_value, const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Isolate* isolate = info.GetIsolate();
  ALLOW_UNUSED_LOCAL(isolate);

  v8::Local<v8::Object> holder = info.Holder();
  ALLOW_UNUSED_LOCAL(holder);

  SVGAngleTearOff* impl = V8SVGAngle::ToImpl(holder);

  ExceptionState exception_state(isolate, ExceptionState::kSetterContext, "SVGAngle", "valueAsString");

  // Prepare the value to be set.
  V8StringResource<> cpp_value = v8_value;
  if (!cpp_value.Prepare())
    return;

  impl->setValueAsString(cpp_value, exception_state);
}

static void NewValueSpecifiedUnitsMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exception_state(info.GetIsolate(), ExceptionState::kExecutionContext, "SVGAngle", "newValueSpecifiedUnits");

  SVGAngleTearOff* impl = V8SVGAngle::ToImpl(info.Holder());

  if (UNLIKELY(info.Length() < 2)) {
    exception_state.ThrowTypeError(ExceptionMessages::NotEnoughArguments(2, info.Length()));
    return;
  }

  uint16_t unit_type;
  float value_in_specified_units;
  unit_type = NativeValueTraits<IDLUnsignedShort>::NativeValue(info.GetIsolate(), info[0], exception_state);
  if (exception_state.HadException())
    return;

  value_in_specified_units = NativeValueTraits<IDLFloat>::NativeValue(info.GetIsolate(), info[1], exception_state);
  if (exception_state.HadException())
    return;

  impl->newValueSpecifiedUnits(unit_type, value_in_specified_units, exception_state);
  if (exception_state.HadException()) {
    return;
  }
}

static void ConvertToSpecifiedUnitsMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exception_state(info.GetIsolate(), ExceptionState::kExecutionContext, "SVGAngle", "convertToSpecifiedUnits");

  SVGAngleTearOff* impl = V8SVGAngle::ToImpl(info.Holder());

  if (UNLIKELY(info.Length() < 1)) {
    exception_state.ThrowTypeError(ExceptionMessages::NotEnoughArguments(1, info.Length()));
    return;
  }

  uint16_t unit_type;
  unit_type = NativeValueTraits<IDLUnsignedShort>::NativeValue(info.GetIsolate(), info[0], exception_state);
  if (exception_state.HadException())
    return;

  impl->convertToSpecifiedUnits(unit_type, exception_state);
  if (exception_state.HadException()) {
    return;
  }
}

}  // namespace svg_angle_tear_off_v8_internal

void V8SVGAngle::UnitTypeAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_SVGAngleTearOff_unitType_Getter");

  svg_angle_tear_off_v8_internal::UnitTypeAttributeGetter(info);
}

void V8SVGAngle::ValueAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_SVGAngleTearOff_value_Getter");

  svg_angle_tear_off_v8_internal::ValueAttributeGetter(info);
}

void V8SVGAngle::ValueAttributeSetterCallback(
    const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_SVGAngleTearOff_value_Setter");

  v8::Local<v8::Value> v8_value = info[0];

  svg_angle_tear_off_v8_internal::ValueAttributeSetter(v8_value, info);
}

void V8SVGAngle::ValueInSpecifiedUnitsAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_SVGAngleTearOff_valueInSpecifiedUnits_Getter");

  svg_angle_tear_off_v8_internal::ValueInSpecifiedUnitsAttributeGetter(info);
}

void V8SVGAngle::ValueInSpecifiedUnitsAttributeSetterCallback(
    const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_SVGAngleTearOff_valueInSpecifiedUnits_Setter");

  v8::Local<v8::Value> v8_value = info[0];

  svg_angle_tear_off_v8_internal::ValueInSpecifiedUnitsAttributeSetter(v8_value, info);
}

void V8SVGAngle::ValueAsStringAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_SVGAngleTearOff_valueAsString_Getter");

  svg_angle_tear_off_v8_internal::ValueAsStringAttributeGetter(info);
}

void V8SVGAngle::ValueAsStringAttributeSetterCallback(
    const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_SVGAngleTearOff_valueAsString_Setter");

  v8::Local<v8::Value> v8_value = info[0];

  svg_angle_tear_off_v8_internal::ValueAsStringAttributeSetter(v8_value, info);
}

void V8SVGAngle::NewValueSpecifiedUnitsMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_SVGAngleTearOff_newValueSpecifiedUnits");

  svg_angle_tear_off_v8_internal::NewValueSpecifiedUnitsMethod(info);
}

void V8SVGAngle::ConvertToSpecifiedUnitsMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_SVGAngleTearOff_convertToSpecifiedUnits");

  svg_angle_tear_off_v8_internal::ConvertToSpecifiedUnitsMethod(info);
}

static constexpr V8DOMConfiguration::AccessorConfiguration kV8SVGAngleAccessors[] = {
    { "unitType", V8SVGAngle::UnitTypeAttributeGetterCallback, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
    { "value", V8SVGAngle::ValueAttributeGetterCallback, V8SVGAngle::ValueAttributeSetterCallback, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
    { "valueInSpecifiedUnits", V8SVGAngle::ValueInSpecifiedUnitsAttributeGetterCallback, V8SVGAngle::ValueInSpecifiedUnitsAttributeSetterCallback, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
    { "valueAsString", V8SVGAngle::ValueAsStringAttributeGetterCallback, V8SVGAngle::ValueAsStringAttributeSetterCallback, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
};

static constexpr V8DOMConfiguration::MethodConfiguration kV8SVGAngleMethods[] = {
    {"newValueSpecifiedUnits", V8SVGAngle::NewValueSpecifiedUnitsMethodCallback, 2, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"convertToSpecifiedUnits", V8SVGAngle::ConvertToSpecifiedUnitsMethodCallback, 1, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
};

static void InstallV8SVGAngleTemplate(
    v8::Isolate* isolate,
    const DOMWrapperWorld& world,
    v8::Local<v8::FunctionTemplate> interface_template) {
  // Initialize the interface object's template.
  V8DOMConfiguration::InitializeDOMInterfaceTemplate(isolate, interface_template, V8SVGAngle::GetWrapperTypeInfo()->interface_name, v8::Local<v8::FunctionTemplate>(), V8SVGAngle::kInternalFieldCount);

  v8::Local<v8::Signature> signature = v8::Signature::New(isolate, interface_template);
  ALLOW_UNUSED_LOCAL(signature);
  v8::Local<v8::ObjectTemplate> instance_template = interface_template->InstanceTemplate();
  ALLOW_UNUSED_LOCAL(instance_template);
  v8::Local<v8::ObjectTemplate> prototype_template = interface_template->PrototypeTemplate();
  ALLOW_UNUSED_LOCAL(prototype_template);

  // Register IDL constants, attributes and operations.
  {
    static constexpr V8DOMConfiguration::ConstantConfiguration kConstants[] = {
        {"SVG_ANGLETYPE_UNKNOWN", V8DOMConfiguration::kConstantTypeUnsignedShort, static_cast<int>(0)},
        {"SVG_ANGLETYPE_UNSPECIFIED", V8DOMConfiguration::kConstantTypeUnsignedShort, static_cast<int>(1)},
        {"SVG_ANGLETYPE_DEG", V8DOMConfiguration::kConstantTypeUnsignedShort, static_cast<int>(2)},
        {"SVG_ANGLETYPE_RAD", V8DOMConfiguration::kConstantTypeUnsignedShort, static_cast<int>(3)},
        {"SVG_ANGLETYPE_GRAD", V8DOMConfiguration::kConstantTypeUnsignedShort, static_cast<int>(4)},
    };
    V8DOMConfiguration::InstallConstants(
        isolate, interface_template, prototype_template,
        kConstants, base::size(kConstants));
  }
  static_assert(0 == SVGAngleTearOff::kSvgAngletypeUnknown, "the value of SVGAngleTearOff_kSvgAngletypeUnknown does not match with implementation");
  static_assert(1 == SVGAngleTearOff::kSvgAngletypeUnspecified, "the value of SVGAngleTearOff_kSvgAngletypeUnspecified does not match with implementation");
  static_assert(2 == SVGAngleTearOff::kSvgAngletypeDeg, "the value of SVGAngleTearOff_kSvgAngletypeDeg does not match with implementation");
  static_assert(3 == SVGAngleTearOff::kSvgAngletypeRad, "the value of SVGAngleTearOff_kSvgAngletypeRad does not match with implementation");
  static_assert(4 == SVGAngleTearOff::kSvgAngletypeGrad, "the value of SVGAngleTearOff_kSvgAngletypeGrad does not match with implementation");
  V8DOMConfiguration::InstallAccessors(
      isolate, world, instance_template, prototype_template, interface_template,
      signature, kV8SVGAngleAccessors, base::size(kV8SVGAngleAccessors));
  V8DOMConfiguration::InstallMethods(
      isolate, world, instance_template, prototype_template, interface_template,
      signature, kV8SVGAngleMethods, base::size(kV8SVGAngleMethods));

  // Custom signature

  V8SVGAngle::InstallRuntimeEnabledFeaturesOnTemplate(
      isolate, world, interface_template);
}

void V8SVGAngle::InstallRuntimeEnabledFeaturesOnTemplate(
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

v8::Local<v8::FunctionTemplate> V8SVGAngle::DomTemplate(
    v8::Isolate* isolate, const DOMWrapperWorld& world) {
  return V8DOMConfiguration::DomClassTemplate(
      isolate, world, const_cast<WrapperTypeInfo*>(V8SVGAngle::GetWrapperTypeInfo()),
      InstallV8SVGAngleTemplate);
}

bool V8SVGAngle::HasInstance(v8::Local<v8::Value> v8_value, v8::Isolate* isolate) {
  return V8PerIsolateData::From(isolate)->HasInstance(V8SVGAngle::GetWrapperTypeInfo(), v8_value);
}

v8::Local<v8::Object> V8SVGAngle::FindInstanceInPrototypeChain(
    v8::Local<v8::Value> v8_value, v8::Isolate* isolate) {
  return V8PerIsolateData::From(isolate)->FindInstanceInPrototypeChain(
      V8SVGAngle::GetWrapperTypeInfo(), v8_value);
}

SVGAngleTearOff* V8SVGAngle::ToImplWithTypeCheck(
    v8::Isolate* isolate, v8::Local<v8::Value> value) {
  return HasInstance(value, isolate) ? ToImpl(v8::Local<v8::Object>::Cast(value)) : nullptr;
}

SVGAngleTearOff* NativeValueTraits<SVGAngleTearOff>::NativeValue(
    v8::Isolate* isolate, v8::Local<v8::Value> value, ExceptionState& exception_state) {
  SVGAngleTearOff* native_value = V8SVGAngle::ToImplWithTypeCheck(isolate, value);
  if (!native_value) {
    exception_state.ThrowTypeError(ExceptionMessages::FailedToConvertJSValue(
        "SVGAngle"));
  }
  return native_value;
}

}  // namespace blink
