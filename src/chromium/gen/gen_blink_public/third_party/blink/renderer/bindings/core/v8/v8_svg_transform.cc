// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated from the Jinja2 template
// third_party/blink/renderer/bindings/templates/interface.cc.tmpl
// by the script code_generator_v8.py.
// DO NOT MODIFY!

// clang-format off
#include "third_party/blink/renderer/bindings/core/v8/v8_svg_transform.h"

#include <algorithm>

#include "base/memory/scoped_refptr.h"
#include "third_party/blink/renderer/bindings/core/v8/idl_types.h"
#include "third_party/blink/renderer/bindings/core/v8/native_value_traits_impl.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_dom_configuration.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_svg_matrix.h"
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
const WrapperTypeInfo v8_svg_transform_wrapper_type_info = {
    gin::kEmbedderBlink,
    V8SVGTransform::DomTemplate,
    nullptr,
    "SVGTransform",
    nullptr,
    WrapperTypeInfo::kWrapperTypeObjectPrototype,
    WrapperTypeInfo::kObjectClassId,
    WrapperTypeInfo::kNotInheritFromActiveScriptWrappable,
};
#if defined(COMPONENT_BUILD) && defined(WIN32) && defined(__clang__)
#pragma clang diagnostic pop
#endif

// This static member must be declared by DEFINE_WRAPPERTYPEINFO in SVGTransformTearOff.h.
// For details, see the comment of DEFINE_WRAPPERTYPEINFO in
// platform/bindings/ScriptWrappable.h.
const WrapperTypeInfo& SVGTransformTearOff::wrapper_type_info_ = v8_svg_transform_wrapper_type_info;

// not [ActiveScriptWrappable]
static_assert(
    !std::is_base_of<ActiveScriptWrappableBase, SVGTransformTearOff>::value,
    "SVGTransformTearOff inherits from ActiveScriptWrappable<>, but is not specifying "
    "[ActiveScriptWrappable] extended attribute in the IDL file.  "
    "Be consistent.");
static_assert(
    std::is_same<decltype(&SVGTransformTearOff::HasPendingActivity),
                 decltype(&ScriptWrappable::HasPendingActivity)>::value,
    "SVGTransformTearOff is overriding hasPendingActivity(), but is not specifying "
    "[ActiveScriptWrappable] extended attribute in the IDL file.  "
    "Be consistent.");

namespace svg_transform_tear_off_v8_internal {

static void TypeAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  SVGTransformTearOff* impl = V8SVGTransform::ToImpl(holder);

  V8SetReturnValueUnsigned(info, impl->transformType());
}

static void MatrixAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  SVGTransformTearOff* impl = V8SVGTransform::ToImpl(holder);

  V8SetReturnValueFast(info, WTF::GetPtr(impl->matrix()), impl);
}

static void AngleAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  SVGTransformTearOff* impl = V8SVGTransform::ToImpl(holder);

  V8SetReturnValue(info, impl->angle());
}

static void SetMatrixMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exception_state(info.GetIsolate(), ExceptionState::kExecutionContext, "SVGTransform", "setMatrix");

  SVGTransformTearOff* impl = V8SVGTransform::ToImpl(info.Holder());

  if (UNLIKELY(info.Length() < 1)) {
    exception_state.ThrowTypeError(ExceptionMessages::NotEnoughArguments(1, info.Length()));
    return;
  }

  SVGMatrixTearOff* matrix;
  matrix = V8SVGMatrix::ToImplWithTypeCheck(info.GetIsolate(), info[0]);
  if (!matrix) {
    exception_state.ThrowTypeError("parameter 1 is not of type 'SVGMatrix'.");
    return;
  }

  impl->setMatrix(matrix, exception_state);
  if (exception_state.HadException()) {
    return;
  }
}

static void SetTranslateMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exception_state(info.GetIsolate(), ExceptionState::kExecutionContext, "SVGTransform", "setTranslate");

  SVGTransformTearOff* impl = V8SVGTransform::ToImpl(info.Holder());

  if (UNLIKELY(info.Length() < 2)) {
    exception_state.ThrowTypeError(ExceptionMessages::NotEnoughArguments(2, info.Length()));
    return;
  }

  float tx;
  float ty;
  tx = NativeValueTraits<IDLFloat>::NativeValue(info.GetIsolate(), info[0], exception_state);
  if (exception_state.HadException())
    return;

  ty = NativeValueTraits<IDLFloat>::NativeValue(info.GetIsolate(), info[1], exception_state);
  if (exception_state.HadException())
    return;

  impl->setTranslate(tx, ty, exception_state);
  if (exception_state.HadException()) {
    return;
  }
}

static void SetScaleMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exception_state(info.GetIsolate(), ExceptionState::kExecutionContext, "SVGTransform", "setScale");

  SVGTransformTearOff* impl = V8SVGTransform::ToImpl(info.Holder());

  if (UNLIKELY(info.Length() < 2)) {
    exception_state.ThrowTypeError(ExceptionMessages::NotEnoughArguments(2, info.Length()));
    return;
  }

  float sx;
  float sy;
  sx = NativeValueTraits<IDLFloat>::NativeValue(info.GetIsolate(), info[0], exception_state);
  if (exception_state.HadException())
    return;

  sy = NativeValueTraits<IDLFloat>::NativeValue(info.GetIsolate(), info[1], exception_state);
  if (exception_state.HadException())
    return;

  impl->setScale(sx, sy, exception_state);
  if (exception_state.HadException()) {
    return;
  }
}

static void SetRotateMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exception_state(info.GetIsolate(), ExceptionState::kExecutionContext, "SVGTransform", "setRotate");

  SVGTransformTearOff* impl = V8SVGTransform::ToImpl(info.Holder());

  if (UNLIKELY(info.Length() < 3)) {
    exception_state.ThrowTypeError(ExceptionMessages::NotEnoughArguments(3, info.Length()));
    return;
  }

  float angle;
  float cx;
  float cy;
  angle = NativeValueTraits<IDLFloat>::NativeValue(info.GetIsolate(), info[0], exception_state);
  if (exception_state.HadException())
    return;

  cx = NativeValueTraits<IDLFloat>::NativeValue(info.GetIsolate(), info[1], exception_state);
  if (exception_state.HadException())
    return;

  cy = NativeValueTraits<IDLFloat>::NativeValue(info.GetIsolate(), info[2], exception_state);
  if (exception_state.HadException())
    return;

  impl->setRotate(angle, cx, cy, exception_state);
  if (exception_state.HadException()) {
    return;
  }
}

static void SetSkewXMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exception_state(info.GetIsolate(), ExceptionState::kExecutionContext, "SVGTransform", "setSkewX");

  SVGTransformTearOff* impl = V8SVGTransform::ToImpl(info.Holder());

  if (UNLIKELY(info.Length() < 1)) {
    exception_state.ThrowTypeError(ExceptionMessages::NotEnoughArguments(1, info.Length()));
    return;
  }

  float angle;
  angle = NativeValueTraits<IDLFloat>::NativeValue(info.GetIsolate(), info[0], exception_state);
  if (exception_state.HadException())
    return;

  impl->setSkewX(angle, exception_state);
  if (exception_state.HadException()) {
    return;
  }
}

static void SetSkewYMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exception_state(info.GetIsolate(), ExceptionState::kExecutionContext, "SVGTransform", "setSkewY");

  SVGTransformTearOff* impl = V8SVGTransform::ToImpl(info.Holder());

  if (UNLIKELY(info.Length() < 1)) {
    exception_state.ThrowTypeError(ExceptionMessages::NotEnoughArguments(1, info.Length()));
    return;
  }

  float angle;
  angle = NativeValueTraits<IDLFloat>::NativeValue(info.GetIsolate(), info[0], exception_state);
  if (exception_state.HadException())
    return;

  impl->setSkewY(angle, exception_state);
  if (exception_state.HadException()) {
    return;
  }
}

}  // namespace svg_transform_tear_off_v8_internal

void V8SVGTransform::TypeAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_SVGTransformTearOff_type_Getter");

  svg_transform_tear_off_v8_internal::TypeAttributeGetter(info);
}

void V8SVGTransform::MatrixAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_SVGTransformTearOff_matrix_Getter");

  svg_transform_tear_off_v8_internal::MatrixAttributeGetter(info);
}

void V8SVGTransform::AngleAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_SVGTransformTearOff_angle_Getter");

  svg_transform_tear_off_v8_internal::AngleAttributeGetter(info);
}

void V8SVGTransform::SetMatrixMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_SVGTransformTearOff_setMatrix");

  svg_transform_tear_off_v8_internal::SetMatrixMethod(info);
}

void V8SVGTransform::SetTranslateMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_SVGTransformTearOff_setTranslate");

  svg_transform_tear_off_v8_internal::SetTranslateMethod(info);
}

void V8SVGTransform::SetScaleMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_SVGTransformTearOff_setScale");

  svg_transform_tear_off_v8_internal::SetScaleMethod(info);
}

void V8SVGTransform::SetRotateMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_SVGTransformTearOff_setRotate");

  svg_transform_tear_off_v8_internal::SetRotateMethod(info);
}

void V8SVGTransform::SetSkewXMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_SVGTransformTearOff_setSkewX");

  svg_transform_tear_off_v8_internal::SetSkewXMethod(info);
}

void V8SVGTransform::SetSkewYMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_SVGTransformTearOff_setSkewY");

  svg_transform_tear_off_v8_internal::SetSkewYMethod(info);
}

static constexpr V8DOMConfiguration::AccessorConfiguration kV8SVGTransformAccessors[] = {
    { "type", V8SVGTransform::TypeAttributeGetterCallback, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
    { "matrix", V8SVGTransform::MatrixAttributeGetterCallback, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
    { "angle", V8SVGTransform::AngleAttributeGetterCallback, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
};

static constexpr V8DOMConfiguration::MethodConfiguration kV8SVGTransformMethods[] = {
    {"setMatrix", V8SVGTransform::SetMatrixMethodCallback, 1, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"setTranslate", V8SVGTransform::SetTranslateMethodCallback, 2, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"setScale", V8SVGTransform::SetScaleMethodCallback, 2, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"setRotate", V8SVGTransform::SetRotateMethodCallback, 3, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"setSkewX", V8SVGTransform::SetSkewXMethodCallback, 1, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"setSkewY", V8SVGTransform::SetSkewYMethodCallback, 1, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
};

static void InstallV8SVGTransformTemplate(
    v8::Isolate* isolate,
    const DOMWrapperWorld& world,
    v8::Local<v8::FunctionTemplate> interface_template) {
  // Initialize the interface object's template.
  V8DOMConfiguration::InitializeDOMInterfaceTemplate(isolate, interface_template, V8SVGTransform::GetWrapperTypeInfo()->interface_name, v8::Local<v8::FunctionTemplate>(), V8SVGTransform::kInternalFieldCount);

  v8::Local<v8::Signature> signature = v8::Signature::New(isolate, interface_template);
  ALLOW_UNUSED_LOCAL(signature);
  v8::Local<v8::ObjectTemplate> instance_template = interface_template->InstanceTemplate();
  ALLOW_UNUSED_LOCAL(instance_template);
  v8::Local<v8::ObjectTemplate> prototype_template = interface_template->PrototypeTemplate();
  ALLOW_UNUSED_LOCAL(prototype_template);

  // Register IDL constants, attributes and operations.
  {
    static constexpr V8DOMConfiguration::ConstantConfiguration kConstants[] = {
        {"SVG_TRANSFORM_UNKNOWN", V8DOMConfiguration::kConstantTypeUnsignedShort, static_cast<int>(0)},
        {"SVG_TRANSFORM_MATRIX", V8DOMConfiguration::kConstantTypeUnsignedShort, static_cast<int>(1)},
        {"SVG_TRANSFORM_TRANSLATE", V8DOMConfiguration::kConstantTypeUnsignedShort, static_cast<int>(2)},
        {"SVG_TRANSFORM_SCALE", V8DOMConfiguration::kConstantTypeUnsignedShort, static_cast<int>(3)},
        {"SVG_TRANSFORM_ROTATE", V8DOMConfiguration::kConstantTypeUnsignedShort, static_cast<int>(4)},
        {"SVG_TRANSFORM_SKEWX", V8DOMConfiguration::kConstantTypeUnsignedShort, static_cast<int>(5)},
        {"SVG_TRANSFORM_SKEWY", V8DOMConfiguration::kConstantTypeUnsignedShort, static_cast<int>(6)},
    };
    V8DOMConfiguration::InstallConstants(
        isolate, interface_template, prototype_template,
        kConstants, base::size(kConstants));
  }
  static_assert(0 == SVGTransformTearOff::kSvgTransformUnknown, "the value of SVGTransformTearOff_kSvgTransformUnknown does not match with implementation");
  static_assert(1 == SVGTransformTearOff::kSvgTransformMatrix, "the value of SVGTransformTearOff_kSvgTransformMatrix does not match with implementation");
  static_assert(2 == SVGTransformTearOff::kSvgTransformTranslate, "the value of SVGTransformTearOff_kSvgTransformTranslate does not match with implementation");
  static_assert(3 == SVGTransformTearOff::kSvgTransformScale, "the value of SVGTransformTearOff_kSvgTransformScale does not match with implementation");
  static_assert(4 == SVGTransformTearOff::kSvgTransformRotate, "the value of SVGTransformTearOff_kSvgTransformRotate does not match with implementation");
  static_assert(5 == SVGTransformTearOff::kSvgTransformSkewx, "the value of SVGTransformTearOff_kSvgTransformSkewx does not match with implementation");
  static_assert(6 == SVGTransformTearOff::kSvgTransformSkewy, "the value of SVGTransformTearOff_kSvgTransformSkewy does not match with implementation");
  V8DOMConfiguration::InstallAccessors(
      isolate, world, instance_template, prototype_template, interface_template,
      signature, kV8SVGTransformAccessors, base::size(kV8SVGTransformAccessors));
  V8DOMConfiguration::InstallMethods(
      isolate, world, instance_template, prototype_template, interface_template,
      signature, kV8SVGTransformMethods, base::size(kV8SVGTransformMethods));

  // Custom signature

  V8SVGTransform::InstallRuntimeEnabledFeaturesOnTemplate(
      isolate, world, interface_template);
}

void V8SVGTransform::InstallRuntimeEnabledFeaturesOnTemplate(
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

v8::Local<v8::FunctionTemplate> V8SVGTransform::DomTemplate(
    v8::Isolate* isolate, const DOMWrapperWorld& world) {
  return V8DOMConfiguration::DomClassTemplate(
      isolate, world, const_cast<WrapperTypeInfo*>(V8SVGTransform::GetWrapperTypeInfo()),
      InstallV8SVGTransformTemplate);
}

bool V8SVGTransform::HasInstance(v8::Local<v8::Value> v8_value, v8::Isolate* isolate) {
  return V8PerIsolateData::From(isolate)->HasInstance(V8SVGTransform::GetWrapperTypeInfo(), v8_value);
}

v8::Local<v8::Object> V8SVGTransform::FindInstanceInPrototypeChain(
    v8::Local<v8::Value> v8_value, v8::Isolate* isolate) {
  return V8PerIsolateData::From(isolate)->FindInstanceInPrototypeChain(
      V8SVGTransform::GetWrapperTypeInfo(), v8_value);
}

SVGTransformTearOff* V8SVGTransform::ToImplWithTypeCheck(
    v8::Isolate* isolate, v8::Local<v8::Value> value) {
  return HasInstance(value, isolate) ? ToImpl(v8::Local<v8::Object>::Cast(value)) : nullptr;
}

SVGTransformTearOff* NativeValueTraits<SVGTransformTearOff>::NativeValue(
    v8::Isolate* isolate, v8::Local<v8::Value> value, ExceptionState& exception_state) {
  SVGTransformTearOff* native_value = V8SVGTransform::ToImplWithTypeCheck(isolate, value);
  if (!native_value) {
    exception_state.ThrowTypeError(ExceptionMessages::FailedToConvertJSValue(
        "SVGTransform"));
  }
  return native_value;
}

}  // namespace blink
