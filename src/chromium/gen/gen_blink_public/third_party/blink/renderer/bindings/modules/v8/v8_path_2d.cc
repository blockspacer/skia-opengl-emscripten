// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated from the Jinja2 template
// third_party/blink/renderer/bindings/templates/interface.cc.tmpl
// by the script code_generator_v8.py.
// DO NOT MODIFY!

// clang-format off
#include "third_party/blink/renderer/bindings/modules/v8/v8_path_2d.h"

#include <algorithm>

#include "base/memory/scoped_refptr.h"
#include "third_party/blink/renderer/bindings/core/v8/idl_types.h"
#include "third_party/blink/renderer/bindings/core/v8/native_value_traits_impl.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_dom_configuration.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_dom_matrix_2d_init.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_path_2d.h"
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
const WrapperTypeInfo v8_path_2d_wrapper_type_info = {
    gin::kEmbedderBlink,
    V8Path2D::DomTemplate,
    nullptr,
    "Path2D",
    nullptr,
    WrapperTypeInfo::kWrapperTypeObjectPrototype,
    WrapperTypeInfo::kObjectClassId,
    WrapperTypeInfo::kNotInheritFromActiveScriptWrappable,
};
#if defined(COMPONENT_BUILD) && defined(WIN32) && defined(__clang__)
#pragma clang diagnostic pop
#endif

// This static member must be declared by DEFINE_WRAPPERTYPEINFO in Path2D.h.
// For details, see the comment of DEFINE_WRAPPERTYPEINFO in
// platform/bindings/ScriptWrappable.h.
const WrapperTypeInfo& Path2D::wrapper_type_info_ = v8_path_2d_wrapper_type_info;

// not [ActiveScriptWrappable]
static_assert(
    !std::is_base_of<ActiveScriptWrappableBase, Path2D>::value,
    "Path2D inherits from ActiveScriptWrappable<>, but is not specifying "
    "[ActiveScriptWrappable] extended attribute in the IDL file.  "
    "Be consistent.");
static_assert(
    std::is_same<decltype(&Path2D::HasPendingActivity),
                 decltype(&ScriptWrappable::HasPendingActivity)>::value,
    "Path2D is overriding hasPendingActivity(), but is not specifying "
    "[ActiveScriptWrappable] extended attribute in the IDL file.  "
    "Be consistent.");

namespace path_2d_v8_internal {

static void AddPathMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exception_state(info.GetIsolate(), ExceptionState::kExecutionContext, "Path2D", "addPath");

  Path2D* impl = V8Path2D::ToImpl(info.Holder());

  if (UNLIKELY(info.Length() < 1)) {
    exception_state.ThrowTypeError(ExceptionMessages::NotEnoughArguments(1, info.Length()));
    return;
  }

  Path2D* path;
  DOMMatrix2DInit* transform;
  path = V8Path2D::ToImplWithTypeCheck(info.GetIsolate(), info[0]);
  if (!path) {
    exception_state.ThrowTypeError("parameter 1 is not of type 'Path2D'.");
    return;
  }

  if (!info[1]->IsNullOrUndefined() && !info[1]->IsObject()) {
    exception_state.ThrowTypeError("parameter 2 ('transform') is not an object.");
    return;
  }
  transform = NativeValueTraits<DOMMatrix2DInit>::NativeValue(info.GetIsolate(), info[1], exception_state);
  if (exception_state.HadException())
    return;

  impl->addPath(path, transform, exception_state);
  if (exception_state.HadException()) {
    return;
  }
}

static void ClosePathMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  Path2D* impl = V8Path2D::ToImpl(info.Holder());

  impl->closePath();
}

static void MoveToMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exception_state(info.GetIsolate(), ExceptionState::kExecutionContext, "Path2D", "moveTo");

  Path2D* impl = V8Path2D::ToImpl(info.Holder());

  if (UNLIKELY(info.Length() < 2)) {
    exception_state.ThrowTypeError(ExceptionMessages::NotEnoughArguments(2, info.Length()));
    return;
  }

  double x;
  double y;
  x = NativeValueTraits<IDLUnrestrictedDouble>::NativeValue(info.GetIsolate(), info[0], exception_state);
  if (exception_state.HadException())
    return;

  y = NativeValueTraits<IDLUnrestrictedDouble>::NativeValue(info.GetIsolate(), info[1], exception_state);
  if (exception_state.HadException())
    return;

  impl->moveTo(x, y);
}

static void LineToMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exception_state(info.GetIsolate(), ExceptionState::kExecutionContext, "Path2D", "lineTo");

  Path2D* impl = V8Path2D::ToImpl(info.Holder());

  if (UNLIKELY(info.Length() < 2)) {
    exception_state.ThrowTypeError(ExceptionMessages::NotEnoughArguments(2, info.Length()));
    return;
  }

  double x;
  double y;
  x = NativeValueTraits<IDLUnrestrictedDouble>::NativeValue(info.GetIsolate(), info[0], exception_state);
  if (exception_state.HadException())
    return;

  y = NativeValueTraits<IDLUnrestrictedDouble>::NativeValue(info.GetIsolate(), info[1], exception_state);
  if (exception_state.HadException())
    return;

  impl->lineTo(x, y);
}

static void QuadraticCurveToMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exception_state(info.GetIsolate(), ExceptionState::kExecutionContext, "Path2D", "quadraticCurveTo");

  Path2D* impl = V8Path2D::ToImpl(info.Holder());

  if (UNLIKELY(info.Length() < 4)) {
    exception_state.ThrowTypeError(ExceptionMessages::NotEnoughArguments(4, info.Length()));
    return;
  }

  double cpx;
  double cpy;
  double x;
  double y;
  cpx = NativeValueTraits<IDLUnrestrictedDouble>::NativeValue(info.GetIsolate(), info[0], exception_state);
  if (exception_state.HadException())
    return;

  cpy = NativeValueTraits<IDLUnrestrictedDouble>::NativeValue(info.GetIsolate(), info[1], exception_state);
  if (exception_state.HadException())
    return;

  x = NativeValueTraits<IDLUnrestrictedDouble>::NativeValue(info.GetIsolate(), info[2], exception_state);
  if (exception_state.HadException())
    return;

  y = NativeValueTraits<IDLUnrestrictedDouble>::NativeValue(info.GetIsolate(), info[3], exception_state);
  if (exception_state.HadException())
    return;

  impl->quadraticCurveTo(cpx, cpy, x, y);
}

static void BezierCurveToMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exception_state(info.GetIsolate(), ExceptionState::kExecutionContext, "Path2D", "bezierCurveTo");

  Path2D* impl = V8Path2D::ToImpl(info.Holder());

  if (UNLIKELY(info.Length() < 6)) {
    exception_state.ThrowTypeError(ExceptionMessages::NotEnoughArguments(6, info.Length()));
    return;
  }

  double cp_1_x;
  double cp_1_y;
  double cp_2_x;
  double cp_2_y;
  double x;
  double y;
  cp_1_x = NativeValueTraits<IDLUnrestrictedDouble>::NativeValue(info.GetIsolate(), info[0], exception_state);
  if (exception_state.HadException())
    return;

  cp_1_y = NativeValueTraits<IDLUnrestrictedDouble>::NativeValue(info.GetIsolate(), info[1], exception_state);
  if (exception_state.HadException())
    return;

  cp_2_x = NativeValueTraits<IDLUnrestrictedDouble>::NativeValue(info.GetIsolate(), info[2], exception_state);
  if (exception_state.HadException())
    return;

  cp_2_y = NativeValueTraits<IDLUnrestrictedDouble>::NativeValue(info.GetIsolate(), info[3], exception_state);
  if (exception_state.HadException())
    return;

  x = NativeValueTraits<IDLUnrestrictedDouble>::NativeValue(info.GetIsolate(), info[4], exception_state);
  if (exception_state.HadException())
    return;

  y = NativeValueTraits<IDLUnrestrictedDouble>::NativeValue(info.GetIsolate(), info[5], exception_state);
  if (exception_state.HadException())
    return;

  impl->bezierCurveTo(cp_1_x, cp_1_y, cp_2_x, cp_2_y, x, y);
}

static void ArcToMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exception_state(info.GetIsolate(), ExceptionState::kExecutionContext, "Path2D", "arcTo");

  Path2D* impl = V8Path2D::ToImpl(info.Holder());

  if (UNLIKELY(info.Length() < 5)) {
    exception_state.ThrowTypeError(ExceptionMessages::NotEnoughArguments(5, info.Length()));
    return;
  }

  double x_1;
  double y_1;
  double x_2;
  double y_2;
  double radius;
  x_1 = NativeValueTraits<IDLUnrestrictedDouble>::NativeValue(info.GetIsolate(), info[0], exception_state);
  if (exception_state.HadException())
    return;

  y_1 = NativeValueTraits<IDLUnrestrictedDouble>::NativeValue(info.GetIsolate(), info[1], exception_state);
  if (exception_state.HadException())
    return;

  x_2 = NativeValueTraits<IDLUnrestrictedDouble>::NativeValue(info.GetIsolate(), info[2], exception_state);
  if (exception_state.HadException())
    return;

  y_2 = NativeValueTraits<IDLUnrestrictedDouble>::NativeValue(info.GetIsolate(), info[3], exception_state);
  if (exception_state.HadException())
    return;

  radius = NativeValueTraits<IDLUnrestrictedDouble>::NativeValue(info.GetIsolate(), info[4], exception_state);
  if (exception_state.HadException())
    return;

  impl->arcTo(x_1, y_1, x_2, y_2, radius, exception_state);
  if (exception_state.HadException()) {
    return;
  }
}

static void RectMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exception_state(info.GetIsolate(), ExceptionState::kExecutionContext, "Path2D", "rect");

  Path2D* impl = V8Path2D::ToImpl(info.Holder());

  if (UNLIKELY(info.Length() < 4)) {
    exception_state.ThrowTypeError(ExceptionMessages::NotEnoughArguments(4, info.Length()));
    return;
  }

  double x;
  double y;
  double width;
  double height;
  x = NativeValueTraits<IDLUnrestrictedDouble>::NativeValue(info.GetIsolate(), info[0], exception_state);
  if (exception_state.HadException())
    return;

  y = NativeValueTraits<IDLUnrestrictedDouble>::NativeValue(info.GetIsolate(), info[1], exception_state);
  if (exception_state.HadException())
    return;

  width = NativeValueTraits<IDLUnrestrictedDouble>::NativeValue(info.GetIsolate(), info[2], exception_state);
  if (exception_state.HadException())
    return;

  height = NativeValueTraits<IDLUnrestrictedDouble>::NativeValue(info.GetIsolate(), info[3], exception_state);
  if (exception_state.HadException())
    return;

  impl->rect(x, y, width, height);
}

static void ArcMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exception_state(info.GetIsolate(), ExceptionState::kExecutionContext, "Path2D", "arc");

  Path2D* impl = V8Path2D::ToImpl(info.Holder());

  if (UNLIKELY(info.Length() < 5)) {
    exception_state.ThrowTypeError(ExceptionMessages::NotEnoughArguments(5, info.Length()));
    return;
  }

  double x;
  double y;
  double radius;
  double start_angle;
  double end_angle;
  bool anticlockwise;
  x = NativeValueTraits<IDLUnrestrictedDouble>::NativeValue(info.GetIsolate(), info[0], exception_state);
  if (exception_state.HadException())
    return;

  y = NativeValueTraits<IDLUnrestrictedDouble>::NativeValue(info.GetIsolate(), info[1], exception_state);
  if (exception_state.HadException())
    return;

  radius = NativeValueTraits<IDLUnrestrictedDouble>::NativeValue(info.GetIsolate(), info[2], exception_state);
  if (exception_state.HadException())
    return;

  start_angle = NativeValueTraits<IDLUnrestrictedDouble>::NativeValue(info.GetIsolate(), info[3], exception_state);
  if (exception_state.HadException())
    return;

  end_angle = NativeValueTraits<IDLUnrestrictedDouble>::NativeValue(info.GetIsolate(), info[4], exception_state);
  if (exception_state.HadException())
    return;

  if (!info[5]->IsUndefined()) {
    anticlockwise = NativeValueTraits<IDLBoolean>::NativeValue(info.GetIsolate(), info[5], exception_state);
    if (exception_state.HadException())
      return;
  } else {
    anticlockwise = false;
  }

  impl->arc(x, y, radius, start_angle, end_angle, anticlockwise, exception_state);
  if (exception_state.HadException()) {
    return;
  }
}

static void EllipseMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exception_state(info.GetIsolate(), ExceptionState::kExecutionContext, "Path2D", "ellipse");

  Path2D* impl = V8Path2D::ToImpl(info.Holder());

  if (UNLIKELY(info.Length() < 7)) {
    exception_state.ThrowTypeError(ExceptionMessages::NotEnoughArguments(7, info.Length()));
    return;
  }

  double x;
  double y;
  double radius_x;
  double radius_y;
  double rotation;
  double start_angle;
  double end_angle;
  bool anticlockwise;
  x = NativeValueTraits<IDLUnrestrictedDouble>::NativeValue(info.GetIsolate(), info[0], exception_state);
  if (exception_state.HadException())
    return;

  y = NativeValueTraits<IDLUnrestrictedDouble>::NativeValue(info.GetIsolate(), info[1], exception_state);
  if (exception_state.HadException())
    return;

  radius_x = NativeValueTraits<IDLUnrestrictedDouble>::NativeValue(info.GetIsolate(), info[2], exception_state);
  if (exception_state.HadException())
    return;

  radius_y = NativeValueTraits<IDLUnrestrictedDouble>::NativeValue(info.GetIsolate(), info[3], exception_state);
  if (exception_state.HadException())
    return;

  rotation = NativeValueTraits<IDLUnrestrictedDouble>::NativeValue(info.GetIsolate(), info[4], exception_state);
  if (exception_state.HadException())
    return;

  start_angle = NativeValueTraits<IDLUnrestrictedDouble>::NativeValue(info.GetIsolate(), info[5], exception_state);
  if (exception_state.HadException())
    return;

  end_angle = NativeValueTraits<IDLUnrestrictedDouble>::NativeValue(info.GetIsolate(), info[6], exception_state);
  if (exception_state.HadException())
    return;

  if (!info[7]->IsUndefined()) {
    anticlockwise = NativeValueTraits<IDLBoolean>::NativeValue(info.GetIsolate(), info[7], exception_state);
    if (exception_state.HadException())
      return;
  } else {
    anticlockwise = false;
  }

  impl->ellipse(x, y, radius_x, radius_y, rotation, start_angle, end_angle, anticlockwise, exception_state);
  if (exception_state.HadException()) {
    return;
  }
}

static void Constructor(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_Path2D_ConstructorCallback");

  ExceptionState exception_state(info.GetIsolate(), ExceptionState::kConstructionContext, "Path2D");

  Path2DOrString path;
  int num_args_passed = info.Length();
  while (num_args_passed > 0) {
    if (!info[num_args_passed - 1]->IsUndefined())
      break;
    --num_args_passed;
  }
  if (UNLIKELY(num_args_passed <= 0)) {
    Path2D* impl = Path2D::Create();
    v8::Local<v8::Object> wrapper = info.Holder();
    wrapper = impl->AssociateWithWrapper(info.GetIsolate(), V8Path2D::GetWrapperTypeInfo(), wrapper);
    V8SetReturnValue(info, wrapper);
    return;
  }
  V8Path2DOrString::ToImpl(info.GetIsolate(), info[0], path, UnionTypeConversionMode::kNotNullable, exception_state);
  if (exception_state.HadException())
    return;

  Path2D* impl = Path2D::Create(path);
  v8::Local<v8::Object> wrapper = info.Holder();
  wrapper = impl->AssociateWithWrapper(info.GetIsolate(), V8Path2D::GetWrapperTypeInfo(), wrapper);
  V8SetReturnValue(info, wrapper);
}

MODULES_EXPORT void ConstructorCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_Path2D_Constructor");

  if (!info.IsConstructCall()) {
    V8ThrowException::ThrowTypeError(
        info.GetIsolate(),
        ExceptionMessages::ConstructorNotCallableAsFunction("Path2D"));
    return;
  }

  if (ConstructorMode::Current(info.GetIsolate()) == ConstructorMode::kWrapExistingObject) {
    V8SetReturnValue(info, info.Holder());
    return;
  }

  path_2d_v8_internal::Constructor(info);
}

}  // namespace path_2d_v8_internal

void V8Path2D::AddPathMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_Path2D_addPath");

  path_2d_v8_internal::AddPathMethod(info);
}

void V8Path2D::ClosePathMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_Path2D_closePath");

  path_2d_v8_internal::ClosePathMethod(info);
}

void V8Path2D::MoveToMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_Path2D_moveTo");

  path_2d_v8_internal::MoveToMethod(info);
}

void V8Path2D::LineToMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_Path2D_lineTo");

  path_2d_v8_internal::LineToMethod(info);
}

void V8Path2D::QuadraticCurveToMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_Path2D_quadraticCurveTo");

  path_2d_v8_internal::QuadraticCurveToMethod(info);
}

void V8Path2D::BezierCurveToMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_Path2D_bezierCurveTo");

  path_2d_v8_internal::BezierCurveToMethod(info);
}

void V8Path2D::ArcToMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_Path2D_arcTo");

  path_2d_v8_internal::ArcToMethod(info);
}

void V8Path2D::RectMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_Path2D_rect");

  path_2d_v8_internal::RectMethod(info);
}

void V8Path2D::ArcMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_Path2D_arc");

  path_2d_v8_internal::ArcMethod(info);
}

void V8Path2D::EllipseMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_Path2D_ellipse");

  path_2d_v8_internal::EllipseMethod(info);
}

static constexpr V8DOMConfiguration::MethodConfiguration kV8Path2DMethods[] = {
    {"addPath", V8Path2D::AddPathMethodCallback, 1, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"closePath", V8Path2D::ClosePathMethodCallback, 0, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"moveTo", V8Path2D::MoveToMethodCallback, 2, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"lineTo", V8Path2D::LineToMethodCallback, 2, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"quadraticCurveTo", V8Path2D::QuadraticCurveToMethodCallback, 4, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"bezierCurveTo", V8Path2D::BezierCurveToMethodCallback, 6, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"arcTo", V8Path2D::ArcToMethodCallback, 5, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"rect", V8Path2D::RectMethodCallback, 4, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"arc", V8Path2D::ArcMethodCallback, 5, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"ellipse", V8Path2D::EllipseMethodCallback, 7, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
};

static void InstallV8Path2DTemplate(
    v8::Isolate* isolate,
    const DOMWrapperWorld& world,
    v8::Local<v8::FunctionTemplate> interface_template) {
  // Initialize the interface object's template.
  V8DOMConfiguration::InitializeDOMInterfaceTemplate(isolate, interface_template, V8Path2D::GetWrapperTypeInfo()->interface_name, v8::Local<v8::FunctionTemplate>(), V8Path2D::kInternalFieldCount);
  interface_template->SetCallHandler(path_2d_v8_internal::ConstructorCallback);
  interface_template->SetLength(0);

  v8::Local<v8::Signature> signature = v8::Signature::New(isolate, interface_template);
  ALLOW_UNUSED_LOCAL(signature);
  v8::Local<v8::ObjectTemplate> instance_template = interface_template->InstanceTemplate();
  ALLOW_UNUSED_LOCAL(instance_template);
  v8::Local<v8::ObjectTemplate> prototype_template = interface_template->PrototypeTemplate();
  ALLOW_UNUSED_LOCAL(prototype_template);

  // Register IDL constants, attributes and operations.
  V8DOMConfiguration::InstallMethods(
      isolate, world, instance_template, prototype_template, interface_template,
      signature, kV8Path2DMethods, base::size(kV8Path2DMethods));

  // Custom signature

  V8Path2D::InstallRuntimeEnabledFeaturesOnTemplate(
      isolate, world, interface_template);
}

void V8Path2D::InstallRuntimeEnabledFeaturesOnTemplate(
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

v8::Local<v8::FunctionTemplate> V8Path2D::DomTemplate(
    v8::Isolate* isolate, const DOMWrapperWorld& world) {
  return V8DOMConfiguration::DomClassTemplate(
      isolate, world, const_cast<WrapperTypeInfo*>(V8Path2D::GetWrapperTypeInfo()),
      InstallV8Path2DTemplate);
}

bool V8Path2D::HasInstance(v8::Local<v8::Value> v8_value, v8::Isolate* isolate) {
  return V8PerIsolateData::From(isolate)->HasInstance(V8Path2D::GetWrapperTypeInfo(), v8_value);
}

v8::Local<v8::Object> V8Path2D::FindInstanceInPrototypeChain(
    v8::Local<v8::Value> v8_value, v8::Isolate* isolate) {
  return V8PerIsolateData::From(isolate)->FindInstanceInPrototypeChain(
      V8Path2D::GetWrapperTypeInfo(), v8_value);
}

Path2D* V8Path2D::ToImplWithTypeCheck(
    v8::Isolate* isolate, v8::Local<v8::Value> value) {
  return HasInstance(value, isolate) ? ToImpl(v8::Local<v8::Object>::Cast(value)) : nullptr;
}

Path2D* NativeValueTraits<Path2D>::NativeValue(
    v8::Isolate* isolate, v8::Local<v8::Value> value, ExceptionState& exception_state) {
  Path2D* native_value = V8Path2D::ToImplWithTypeCheck(isolate, value);
  if (!native_value) {
    exception_state.ThrowTypeError(ExceptionMessages::FailedToConvertJSValue(
        "Path2D"));
  }
  return native_value;
}

}  // namespace blink
