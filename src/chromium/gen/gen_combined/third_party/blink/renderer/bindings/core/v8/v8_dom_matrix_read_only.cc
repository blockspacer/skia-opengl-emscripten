// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated from the Jinja2 template
// third_party/blink/renderer/bindings/templates/interface.cc.tmpl
// by the script code_generator_v8.py.
// DO NOT MODIFY!

// clang-format off
#include "third_party/blink/renderer/bindings/core/v8/v8_dom_matrix_read_only.h"

#include <algorithm>

#include "base/memory/scoped_refptr.h"
#include "third_party/blink/renderer/bindings/core/v8/idl_types.h"
#include "third_party/blink/renderer/bindings/core/v8/native_value_traits_impl.h"
#include "third_party/blink/renderer/bindings/core/v8/script_value.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_array_buffer_view.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_dom_configuration.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_dom_matrix.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_dom_matrix_init.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_dom_matrix_read_only.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_dom_point.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_dom_point_init.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_float32_array.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_float64_array.h"
#include "third_party/blink/renderer/core/execution_context/execution_context.h"
#include "third_party/blink/renderer/core/frame/local_dom_window.h"
#include "third_party/blink/renderer/core/typed_arrays/array_buffer_view_helpers.h"
#include "third_party/blink/renderer/core/typed_arrays/flexible_array_buffer_view.h"
#include "third_party/blink/renderer/platform/bindings/exception_messages.h"
#include "third_party/blink/renderer/platform/bindings/exception_state.h"
#include "third_party/blink/renderer/platform/bindings/runtime_call_stats.h"
#include "third_party/blink/renderer/platform/bindings/script_state.h"
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
const WrapperTypeInfo v8_dom_matrix_read_only_wrapper_type_info = {
    gin::kEmbedderBlink,
    V8DOMMatrixReadOnly::DomTemplate,
    V8DOMMatrixReadOnly::InstallConditionalFeatures,
    "DOMMatrixReadOnly",
    nullptr,
    WrapperTypeInfo::kWrapperTypeObjectPrototype,
    WrapperTypeInfo::kObjectClassId,
    WrapperTypeInfo::kNotInheritFromActiveScriptWrappable,
};
#if defined(COMPONENT_BUILD) && defined(WIN32) && defined(__clang__)
#pragma clang diagnostic pop
#endif

// This static member must be declared by DEFINE_WRAPPERTYPEINFO in DOMMatrixReadOnly.h.
// For details, see the comment of DEFINE_WRAPPERTYPEINFO in
// platform/bindings/ScriptWrappable.h.
const WrapperTypeInfo& DOMMatrixReadOnly::wrapper_type_info_ = v8_dom_matrix_read_only_wrapper_type_info;

// not [ActiveScriptWrappable]
static_assert(
    !std::is_base_of<ActiveScriptWrappableBase, DOMMatrixReadOnly>::value,
    "DOMMatrixReadOnly inherits from ActiveScriptWrappable<>, but is not specifying "
    "[ActiveScriptWrappable] extended attribute in the IDL file.  "
    "Be consistent.");
static_assert(
    std::is_same<decltype(&DOMMatrixReadOnly::HasPendingActivity),
                 decltype(&ScriptWrappable::HasPendingActivity)>::value,
    "DOMMatrixReadOnly is overriding hasPendingActivity(), but is not specifying "
    "[ActiveScriptWrappable] extended attribute in the IDL file.  "
    "Be consistent.");

namespace dom_matrix_read_only_v8_internal {

static void AAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  DOMMatrixReadOnly* impl = V8DOMMatrixReadOnly::ToImpl(holder);

  V8SetReturnValue(info, impl->a());
}

static void BAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  DOMMatrixReadOnly* impl = V8DOMMatrixReadOnly::ToImpl(holder);

  V8SetReturnValue(info, impl->b());
}

static void CAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  DOMMatrixReadOnly* impl = V8DOMMatrixReadOnly::ToImpl(holder);

  V8SetReturnValue(info, impl->c());
}

static void DAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  DOMMatrixReadOnly* impl = V8DOMMatrixReadOnly::ToImpl(holder);

  V8SetReturnValue(info, impl->d());
}

static void EAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  DOMMatrixReadOnly* impl = V8DOMMatrixReadOnly::ToImpl(holder);

  V8SetReturnValue(info, impl->e());
}

static void FAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  DOMMatrixReadOnly* impl = V8DOMMatrixReadOnly::ToImpl(holder);

  V8SetReturnValue(info, impl->f());
}

static void M11AttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  DOMMatrixReadOnly* impl = V8DOMMatrixReadOnly::ToImpl(holder);

  V8SetReturnValue(info, impl->m11());
}

static void M12AttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  DOMMatrixReadOnly* impl = V8DOMMatrixReadOnly::ToImpl(holder);

  V8SetReturnValue(info, impl->m12());
}

static void M13AttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  DOMMatrixReadOnly* impl = V8DOMMatrixReadOnly::ToImpl(holder);

  V8SetReturnValue(info, impl->m13());
}

static void M14AttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  DOMMatrixReadOnly* impl = V8DOMMatrixReadOnly::ToImpl(holder);

  V8SetReturnValue(info, impl->m14());
}

static void M21AttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  DOMMatrixReadOnly* impl = V8DOMMatrixReadOnly::ToImpl(holder);

  V8SetReturnValue(info, impl->m21());
}

static void M22AttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  DOMMatrixReadOnly* impl = V8DOMMatrixReadOnly::ToImpl(holder);

  V8SetReturnValue(info, impl->m22());
}

static void M23AttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  DOMMatrixReadOnly* impl = V8DOMMatrixReadOnly::ToImpl(holder);

  V8SetReturnValue(info, impl->m23());
}

static void M24AttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  DOMMatrixReadOnly* impl = V8DOMMatrixReadOnly::ToImpl(holder);

  V8SetReturnValue(info, impl->m24());
}

static void M31AttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  DOMMatrixReadOnly* impl = V8DOMMatrixReadOnly::ToImpl(holder);

  V8SetReturnValue(info, impl->m31());
}

static void M32AttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  DOMMatrixReadOnly* impl = V8DOMMatrixReadOnly::ToImpl(holder);

  V8SetReturnValue(info, impl->m32());
}

static void M33AttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  DOMMatrixReadOnly* impl = V8DOMMatrixReadOnly::ToImpl(holder);

  V8SetReturnValue(info, impl->m33());
}

static void M34AttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  DOMMatrixReadOnly* impl = V8DOMMatrixReadOnly::ToImpl(holder);

  V8SetReturnValue(info, impl->m34());
}

static void M41AttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  DOMMatrixReadOnly* impl = V8DOMMatrixReadOnly::ToImpl(holder);

  V8SetReturnValue(info, impl->m41());
}

static void M42AttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  DOMMatrixReadOnly* impl = V8DOMMatrixReadOnly::ToImpl(holder);

  V8SetReturnValue(info, impl->m42());
}

static void M43AttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  DOMMatrixReadOnly* impl = V8DOMMatrixReadOnly::ToImpl(holder);

  V8SetReturnValue(info, impl->m43());
}

static void M44AttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  DOMMatrixReadOnly* impl = V8DOMMatrixReadOnly::ToImpl(holder);

  V8SetReturnValue(info, impl->m44());
}

static void Is2DAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  DOMMatrixReadOnly* impl = V8DOMMatrixReadOnly::ToImpl(holder);

  V8SetReturnValueBool(info, impl->is2D());
}

static void IsIdentityAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  DOMMatrixReadOnly* impl = V8DOMMatrixReadOnly::ToImpl(holder);

  V8SetReturnValueBool(info, impl->isIdentity());
}

static void FromMatrixMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exception_state(info.GetIsolate(), ExceptionState::kExecutionContext, "DOMMatrixReadOnly", "fromMatrix");

  DOMMatrixInit* other;
  if (!info[0]->IsNullOrUndefined() && !info[0]->IsObject()) {
    exception_state.ThrowTypeError("parameter 1 ('other') is not an object.");
    return;
  }
  other = NativeValueTraits<DOMMatrixInit>::NativeValue(info.GetIsolate(), info[0], exception_state);
  if (exception_state.HadException())
    return;

  DOMMatrixReadOnly* result = DOMMatrixReadOnly::fromMatrix(other, exception_state);
  if (exception_state.HadException()) {
    return;
  }
  // [NewObject] must always create a new wrapper.  Check that a wrapper
  // does not exist yet.
  DCHECK(!result || DOMDataStore::GetWrapper(result, info.GetIsolate()).IsEmpty());
  V8SetReturnValue(info, result, info.GetIsolate()->GetCurrentContext()->Global());
}

static void FromFloat32ArrayMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exception_state(info.GetIsolate(), ExceptionState::kExecutionContext, "DOMMatrixReadOnly", "fromFloat32Array");

  if (UNLIKELY(info.Length() < 1)) {
    exception_state.ThrowTypeError(ExceptionMessages::NotEnoughArguments(1, info.Length()));
    return;
  }

  NotShared<DOMFloat32Array> array_32;
  array_32 = ToNotShared<NotShared<DOMFloat32Array>>(info.GetIsolate(), info[0], exception_state);
  if (exception_state.HadException())
    return;
  if (!array_32) {
    exception_state.ThrowTypeError("parameter 1 is not of type 'Float32Array'.");
    return;
  }

  DOMMatrixReadOnly* result = DOMMatrixReadOnly::fromFloat32Array(array_32, exception_state);
  if (exception_state.HadException()) {
    return;
  }
  // [NewObject] must always create a new wrapper.  Check that a wrapper
  // does not exist yet.
  DCHECK(!result || DOMDataStore::GetWrapper(result, info.GetIsolate()).IsEmpty());
  V8SetReturnValue(info, result, info.GetIsolate()->GetCurrentContext()->Global());
}

static void FromFloat64ArrayMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exception_state(info.GetIsolate(), ExceptionState::kExecutionContext, "DOMMatrixReadOnly", "fromFloat64Array");

  if (UNLIKELY(info.Length() < 1)) {
    exception_state.ThrowTypeError(ExceptionMessages::NotEnoughArguments(1, info.Length()));
    return;
  }

  NotShared<DOMFloat64Array> array_64;
  array_64 = ToNotShared<NotShared<DOMFloat64Array>>(info.GetIsolate(), info[0], exception_state);
  if (exception_state.HadException())
    return;
  if (!array_64) {
    exception_state.ThrowTypeError("parameter 1 is not of type 'Float64Array'.");
    return;
  }

  DOMMatrixReadOnly* result = DOMMatrixReadOnly::fromFloat64Array(array_64, exception_state);
  if (exception_state.HadException()) {
    return;
  }
  // [NewObject] must always create a new wrapper.  Check that a wrapper
  // does not exist yet.
  DCHECK(!result || DOMDataStore::GetWrapper(result, info.GetIsolate()).IsEmpty());
  V8SetReturnValue(info, result, info.GetIsolate()->GetCurrentContext()->Global());
}

static void TranslateMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exception_state(info.GetIsolate(), ExceptionState::kExecutionContext, "DOMMatrixReadOnly", "translate");

  DOMMatrixReadOnly* impl = V8DOMMatrixReadOnly::ToImpl(info.Holder());

  double tx;
  double ty;
  double tz;
  if (!info[0]->IsUndefined()) {
    tx = NativeValueTraits<IDLUnrestrictedDouble>::NativeValue(info.GetIsolate(), info[0], exception_state);
    if (exception_state.HadException())
      return;
  } else {
    tx = 0;
  }
  if (!info[1]->IsUndefined()) {
    ty = NativeValueTraits<IDLUnrestrictedDouble>::NativeValue(info.GetIsolate(), info[1], exception_state);
    if (exception_state.HadException())
      return;
  } else {
    ty = 0;
  }
  if (!info[2]->IsUndefined()) {
    tz = NativeValueTraits<IDLUnrestrictedDouble>::NativeValue(info.GetIsolate(), info[2], exception_state);
    if (exception_state.HadException())
      return;
  } else {
    tz = 0;
  }

  V8SetReturnValue(info, impl->translate(tx, ty, tz));
}

static void ScaleMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exception_state(info.GetIsolate(), ExceptionState::kExecutionContext, "DOMMatrixReadOnly", "scale");

  DOMMatrixReadOnly* impl = V8DOMMatrixReadOnly::ToImpl(info.Holder());

  double scale_x;
  double scale_y;
  double scale_z;
  double origin_x;
  double origin_y;
  double origin_z;
  int num_args_passed = info.Length();
  while (num_args_passed > 0) {
    if (!info[num_args_passed - 1]->IsUndefined())
      break;
    --num_args_passed;
  }
  if (!info[0]->IsUndefined()) {
    scale_x = NativeValueTraits<IDLUnrestrictedDouble>::NativeValue(info.GetIsolate(), info[0], exception_state);
    if (exception_state.HadException())
      return;
  } else {
    scale_x = 1;
  }
  if (UNLIKELY(num_args_passed <= 1)) {
    V8SetReturnValue(info, impl->scale(scale_x));
    return;
  }
  scale_y = NativeValueTraits<IDLUnrestrictedDouble>::NativeValue(info.GetIsolate(), info[1], exception_state);
  if (exception_state.HadException())
    return;

  if (!info[2]->IsUndefined()) {
    scale_z = NativeValueTraits<IDLUnrestrictedDouble>::NativeValue(info.GetIsolate(), info[2], exception_state);
    if (exception_state.HadException())
      return;
  } else {
    scale_z = 1;
  }
  if (!info[3]->IsUndefined()) {
    origin_x = NativeValueTraits<IDLUnrestrictedDouble>::NativeValue(info.GetIsolate(), info[3], exception_state);
    if (exception_state.HadException())
      return;
  } else {
    origin_x = 0;
  }
  if (!info[4]->IsUndefined()) {
    origin_y = NativeValueTraits<IDLUnrestrictedDouble>::NativeValue(info.GetIsolate(), info[4], exception_state);
    if (exception_state.HadException())
      return;
  } else {
    origin_y = 0;
  }
  if (!info[5]->IsUndefined()) {
    origin_z = NativeValueTraits<IDLUnrestrictedDouble>::NativeValue(info.GetIsolate(), info[5], exception_state);
    if (exception_state.HadException())
      return;
  } else {
    origin_z = 0;
  }

  V8SetReturnValue(info, impl->scale(scale_x, scale_y, scale_z, origin_x, origin_y, origin_z));
}

static void ScaleNonUniformMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exception_state(info.GetIsolate(), ExceptionState::kExecutionContext, "DOMMatrixReadOnly", "scaleNonUniform");

  DOMMatrixReadOnly* impl = V8DOMMatrixReadOnly::ToImpl(info.Holder());

  double scale_x;
  double scale_y;
  if (!info[0]->IsUndefined()) {
    scale_x = NativeValueTraits<IDLUnrestrictedDouble>::NativeValue(info.GetIsolate(), info[0], exception_state);
    if (exception_state.HadException())
      return;
  } else {
    scale_x = 1;
  }
  if (!info[1]->IsUndefined()) {
    scale_y = NativeValueTraits<IDLUnrestrictedDouble>::NativeValue(info.GetIsolate(), info[1], exception_state);
    if (exception_state.HadException())
      return;
  } else {
    scale_y = 1;
  }

  V8SetReturnValue(info, impl->scaleNonUniform(scale_x, scale_y));
}

static void Scale3dMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exception_state(info.GetIsolate(), ExceptionState::kExecutionContext, "DOMMatrixReadOnly", "scale3d");

  DOMMatrixReadOnly* impl = V8DOMMatrixReadOnly::ToImpl(info.Holder());

  double scale;
  double origin_x;
  double origin_y;
  double origin_z;
  if (!info[0]->IsUndefined()) {
    scale = NativeValueTraits<IDLUnrestrictedDouble>::NativeValue(info.GetIsolate(), info[0], exception_state);
    if (exception_state.HadException())
      return;
  } else {
    scale = 1;
  }
  if (!info[1]->IsUndefined()) {
    origin_x = NativeValueTraits<IDLUnrestrictedDouble>::NativeValue(info.GetIsolate(), info[1], exception_state);
    if (exception_state.HadException())
      return;
  } else {
    origin_x = 0;
  }
  if (!info[2]->IsUndefined()) {
    origin_y = NativeValueTraits<IDLUnrestrictedDouble>::NativeValue(info.GetIsolate(), info[2], exception_state);
    if (exception_state.HadException())
      return;
  } else {
    origin_y = 0;
  }
  if (!info[3]->IsUndefined()) {
    origin_z = NativeValueTraits<IDLUnrestrictedDouble>::NativeValue(info.GetIsolate(), info[3], exception_state);
    if (exception_state.HadException())
      return;
  } else {
    origin_z = 0;
  }

  V8SetReturnValue(info, impl->scale3d(scale, origin_x, origin_y, origin_z));
}

static void RotateMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exception_state(info.GetIsolate(), ExceptionState::kExecutionContext, "DOMMatrixReadOnly", "rotate");

  DOMMatrixReadOnly* impl = V8DOMMatrixReadOnly::ToImpl(info.Holder());

  double rot_x;
  double rot_y;
  double rot_z;
  int num_args_passed = info.Length();
  while (num_args_passed > 0) {
    if (!info[num_args_passed - 1]->IsUndefined())
      break;
    --num_args_passed;
  }
  if (!info[0]->IsUndefined()) {
    rot_x = NativeValueTraits<IDLUnrestrictedDouble>::NativeValue(info.GetIsolate(), info[0], exception_state);
    if (exception_state.HadException())
      return;
  } else {
    rot_x = 0;
  }
  if (UNLIKELY(num_args_passed <= 1)) {
    V8SetReturnValue(info, impl->rotate(rot_x));
    return;
  }
  rot_y = NativeValueTraits<IDLUnrestrictedDouble>::NativeValue(info.GetIsolate(), info[1], exception_state);
  if (exception_state.HadException())
    return;

  if (UNLIKELY(num_args_passed <= 2)) {
    V8SetReturnValue(info, impl->rotate(rot_x, rot_y));
    return;
  }
  rot_z = NativeValueTraits<IDLUnrestrictedDouble>::NativeValue(info.GetIsolate(), info[2], exception_state);
  if (exception_state.HadException())
    return;

  V8SetReturnValue(info, impl->rotate(rot_x, rot_y, rot_z));
}

static void RotateFromVectorMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exception_state(info.GetIsolate(), ExceptionState::kExecutionContext, "DOMMatrixReadOnly", "rotateFromVector");

  DOMMatrixReadOnly* impl = V8DOMMatrixReadOnly::ToImpl(info.Holder());

  double x;
  double y;
  if (!info[0]->IsUndefined()) {
    x = NativeValueTraits<IDLUnrestrictedDouble>::NativeValue(info.GetIsolate(), info[0], exception_state);
    if (exception_state.HadException())
      return;
  } else {
    x = 0;
  }
  if (!info[1]->IsUndefined()) {
    y = NativeValueTraits<IDLUnrestrictedDouble>::NativeValue(info.GetIsolate(), info[1], exception_state);
    if (exception_state.HadException())
      return;
  } else {
    y = 0;
  }

  V8SetReturnValue(info, impl->rotateFromVector(x, y));
}

static void RotateAxisAngleMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exception_state(info.GetIsolate(), ExceptionState::kExecutionContext, "DOMMatrixReadOnly", "rotateAxisAngle");

  DOMMatrixReadOnly* impl = V8DOMMatrixReadOnly::ToImpl(info.Holder());

  double x;
  double y;
  double z;
  double angle;
  if (!info[0]->IsUndefined()) {
    x = NativeValueTraits<IDLUnrestrictedDouble>::NativeValue(info.GetIsolate(), info[0], exception_state);
    if (exception_state.HadException())
      return;
  } else {
    x = 0;
  }
  if (!info[1]->IsUndefined()) {
    y = NativeValueTraits<IDLUnrestrictedDouble>::NativeValue(info.GetIsolate(), info[1], exception_state);
    if (exception_state.HadException())
      return;
  } else {
    y = 0;
  }
  if (!info[2]->IsUndefined()) {
    z = NativeValueTraits<IDLUnrestrictedDouble>::NativeValue(info.GetIsolate(), info[2], exception_state);
    if (exception_state.HadException())
      return;
  } else {
    z = 0;
  }
  if (!info[3]->IsUndefined()) {
    angle = NativeValueTraits<IDLUnrestrictedDouble>::NativeValue(info.GetIsolate(), info[3], exception_state);
    if (exception_state.HadException())
      return;
  } else {
    angle = 0;
  }

  V8SetReturnValue(info, impl->rotateAxisAngle(x, y, z, angle));
}

static void SkewXMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exception_state(info.GetIsolate(), ExceptionState::kExecutionContext, "DOMMatrixReadOnly", "skewX");

  DOMMatrixReadOnly* impl = V8DOMMatrixReadOnly::ToImpl(info.Holder());

  double sx;
  if (!info[0]->IsUndefined()) {
    sx = NativeValueTraits<IDLUnrestrictedDouble>::NativeValue(info.GetIsolate(), info[0], exception_state);
    if (exception_state.HadException())
      return;
  } else {
    sx = 0;
  }

  V8SetReturnValue(info, impl->skewX(sx));
}

static void SkewYMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exception_state(info.GetIsolate(), ExceptionState::kExecutionContext, "DOMMatrixReadOnly", "skewY");

  DOMMatrixReadOnly* impl = V8DOMMatrixReadOnly::ToImpl(info.Holder());

  double sy;
  if (!info[0]->IsUndefined()) {
    sy = NativeValueTraits<IDLUnrestrictedDouble>::NativeValue(info.GetIsolate(), info[0], exception_state);
    if (exception_state.HadException())
      return;
  } else {
    sy = 0;
  }

  V8SetReturnValue(info, impl->skewY(sy));
}

static void MultiplyMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exception_state(info.GetIsolate(), ExceptionState::kExecutionContext, "DOMMatrixReadOnly", "multiply");

  DOMMatrixReadOnly* impl = V8DOMMatrixReadOnly::ToImpl(info.Holder());

  DOMMatrixInit* other;
  if (!info[0]->IsNullOrUndefined() && !info[0]->IsObject()) {
    exception_state.ThrowTypeError("parameter 1 ('other') is not an object.");
    return;
  }
  other = NativeValueTraits<DOMMatrixInit>::NativeValue(info.GetIsolate(), info[0], exception_state);
  if (exception_state.HadException())
    return;

  DOMMatrix* result = impl->multiply(other, exception_state);
  if (exception_state.HadException()) {
    return;
  }
  V8SetReturnValue(info, result);
}

static void FlipXMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  DOMMatrixReadOnly* impl = V8DOMMatrixReadOnly::ToImpl(info.Holder());

  V8SetReturnValue(info, impl->flipX());
}

static void FlipYMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  DOMMatrixReadOnly* impl = V8DOMMatrixReadOnly::ToImpl(info.Holder());

  V8SetReturnValue(info, impl->flipY());
}

static void InverseMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  DOMMatrixReadOnly* impl = V8DOMMatrixReadOnly::ToImpl(info.Holder());

  V8SetReturnValue(info, impl->inverse());
}

static void TransformPointMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exception_state(info.GetIsolate(), ExceptionState::kExecutionContext, "DOMMatrixReadOnly", "transformPoint");

  DOMMatrixReadOnly* impl = V8DOMMatrixReadOnly::ToImpl(info.Holder());

  DOMPointInit* point;
  if (!info[0]->IsNullOrUndefined() && !info[0]->IsObject()) {
    exception_state.ThrowTypeError("parameter 1 ('point') is not an object.");
    return;
  }
  point = NativeValueTraits<DOMPointInit>::NativeValue(info.GetIsolate(), info[0], exception_state);
  if (exception_state.HadException())
    return;

  V8SetReturnValue(info, impl->transformPoint(point));
}

static void ToFloat32ArrayMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  DOMMatrixReadOnly* impl = V8DOMMatrixReadOnly::ToImpl(info.Holder());

  V8SetReturnValue(info, impl->toFloat32Array());
}

static void ToFloat64ArrayMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  DOMMatrixReadOnly* impl = V8DOMMatrixReadOnly::ToImpl(info.Holder());

  V8SetReturnValue(info, impl->toFloat64Array());
}

static void ToJSONMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  DOMMatrixReadOnly* impl = V8DOMMatrixReadOnly::ToImpl(info.Holder());

  ScriptState* script_state = ScriptState::ForRelevantRealm(info);

  ScriptValue result = impl->toJSONForBinding(script_state);
  V8SetReturnValue(info, result.V8Value());
}

static void ToStringMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exception_state(info.GetIsolate(), ExceptionState::kExecutionContext, "DOMMatrixReadOnly", "toString");

  DOMMatrixReadOnly* impl = V8DOMMatrixReadOnly::ToImpl(info.Holder());

  String result = impl->toString(exception_state);
  if (exception_state.HadException()) {
    return;
  }
  V8SetReturnValueString(info, result, info.GetIsolate());
}

static void Constructor(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMMatrixReadOnly_ConstructorCallback");

  ExceptionState exception_state(info.GetIsolate(), ExceptionState::kConstructionContext, "DOMMatrixReadOnly");

  StringOrUnrestrictedDoubleSequence init;
  int num_args_passed = info.Length();
  while (num_args_passed > 0) {
    if (!info[num_args_passed - 1]->IsUndefined())
      break;
    --num_args_passed;
  }
  if (UNLIKELY(num_args_passed <= 0)) {
    ExecutionContext* execution_context = ToExecutionContext(
        info.NewTarget().As<v8::Object>()->CreationContext());
    DOMMatrixReadOnly* impl = DOMMatrixReadOnly::Create(execution_context, exception_state);
    if (exception_state.HadException()) {
      return;
    }
    v8::Local<v8::Object> wrapper = info.Holder();
    wrapper = impl->AssociateWithWrapper(info.GetIsolate(), V8DOMMatrixReadOnly::GetWrapperTypeInfo(), wrapper);
    V8SetReturnValue(info, wrapper);
    return;
  }
  V8StringOrUnrestrictedDoubleSequence::ToImpl(info.GetIsolate(), info[0], init, UnionTypeConversionMode::kNotNullable, exception_state);
  if (exception_state.HadException())
    return;

  ExecutionContext* execution_context = ToExecutionContext(
      info.NewTarget().As<v8::Object>()->CreationContext());
  DOMMatrixReadOnly* impl = DOMMatrixReadOnly::Create(execution_context, init, exception_state);
  if (exception_state.HadException()) {
    return;
  }
  v8::Local<v8::Object> wrapper = info.Holder();
  wrapper = impl->AssociateWithWrapper(info.GetIsolate(), V8DOMMatrixReadOnly::GetWrapperTypeInfo(), wrapper);
  V8SetReturnValue(info, wrapper);
}

CORE_EXPORT void ConstructorCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMMatrixReadOnly_Constructor");

  if (!info.IsConstructCall()) {
    V8ThrowException::ThrowTypeError(
        info.GetIsolate(),
        ExceptionMessages::ConstructorNotCallableAsFunction("DOMMatrixReadOnly"));
    return;
  }

  if (ConstructorMode::Current(info.GetIsolate()) == ConstructorMode::kWrapExistingObject) {
    V8SetReturnValue(info, info.Holder());
    return;
  }

  dom_matrix_read_only_v8_internal::Constructor(info);
}

}  // namespace dom_matrix_read_only_v8_internal

void V8DOMMatrixReadOnly::AAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMMatrixReadOnly_a_Getter");

  dom_matrix_read_only_v8_internal::AAttributeGetter(info);
}

void V8DOMMatrixReadOnly::BAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMMatrixReadOnly_b_Getter");

  dom_matrix_read_only_v8_internal::BAttributeGetter(info);
}

void V8DOMMatrixReadOnly::CAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMMatrixReadOnly_c_Getter");

  dom_matrix_read_only_v8_internal::CAttributeGetter(info);
}

void V8DOMMatrixReadOnly::DAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMMatrixReadOnly_d_Getter");

  dom_matrix_read_only_v8_internal::DAttributeGetter(info);
}

void V8DOMMatrixReadOnly::EAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMMatrixReadOnly_e_Getter");

  dom_matrix_read_only_v8_internal::EAttributeGetter(info);
}

void V8DOMMatrixReadOnly::FAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMMatrixReadOnly_f_Getter");

  dom_matrix_read_only_v8_internal::FAttributeGetter(info);
}

void V8DOMMatrixReadOnly::M11AttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMMatrixReadOnly_m11_Getter");

  dom_matrix_read_only_v8_internal::M11AttributeGetter(info);
}

void V8DOMMatrixReadOnly::M12AttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMMatrixReadOnly_m12_Getter");

  dom_matrix_read_only_v8_internal::M12AttributeGetter(info);
}

void V8DOMMatrixReadOnly::M13AttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMMatrixReadOnly_m13_Getter");

  dom_matrix_read_only_v8_internal::M13AttributeGetter(info);
}

void V8DOMMatrixReadOnly::M14AttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMMatrixReadOnly_m14_Getter");

  dom_matrix_read_only_v8_internal::M14AttributeGetter(info);
}

void V8DOMMatrixReadOnly::M21AttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMMatrixReadOnly_m21_Getter");

  dom_matrix_read_only_v8_internal::M21AttributeGetter(info);
}

void V8DOMMatrixReadOnly::M22AttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMMatrixReadOnly_m22_Getter");

  dom_matrix_read_only_v8_internal::M22AttributeGetter(info);
}

void V8DOMMatrixReadOnly::M23AttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMMatrixReadOnly_m23_Getter");

  dom_matrix_read_only_v8_internal::M23AttributeGetter(info);
}

void V8DOMMatrixReadOnly::M24AttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMMatrixReadOnly_m24_Getter");

  dom_matrix_read_only_v8_internal::M24AttributeGetter(info);
}

void V8DOMMatrixReadOnly::M31AttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMMatrixReadOnly_m31_Getter");

  dom_matrix_read_only_v8_internal::M31AttributeGetter(info);
}

void V8DOMMatrixReadOnly::M32AttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMMatrixReadOnly_m32_Getter");

  dom_matrix_read_only_v8_internal::M32AttributeGetter(info);
}

void V8DOMMatrixReadOnly::M33AttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMMatrixReadOnly_m33_Getter");

  dom_matrix_read_only_v8_internal::M33AttributeGetter(info);
}

void V8DOMMatrixReadOnly::M34AttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMMatrixReadOnly_m34_Getter");

  dom_matrix_read_only_v8_internal::M34AttributeGetter(info);
}

void V8DOMMatrixReadOnly::M41AttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMMatrixReadOnly_m41_Getter");

  dom_matrix_read_only_v8_internal::M41AttributeGetter(info);
}

void V8DOMMatrixReadOnly::M42AttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMMatrixReadOnly_m42_Getter");

  dom_matrix_read_only_v8_internal::M42AttributeGetter(info);
}

void V8DOMMatrixReadOnly::M43AttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMMatrixReadOnly_m43_Getter");

  dom_matrix_read_only_v8_internal::M43AttributeGetter(info);
}

void V8DOMMatrixReadOnly::M44AttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMMatrixReadOnly_m44_Getter");

  dom_matrix_read_only_v8_internal::M44AttributeGetter(info);
}

void V8DOMMatrixReadOnly::Is2DAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMMatrixReadOnly_is2D_Getter");

  dom_matrix_read_only_v8_internal::Is2DAttributeGetter(info);
}

void V8DOMMatrixReadOnly::IsIdentityAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMMatrixReadOnly_isIdentity_Getter");

  dom_matrix_read_only_v8_internal::IsIdentityAttributeGetter(info);
}

void V8DOMMatrixReadOnly::FromMatrixMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMMatrixReadOnly_fromMatrix");

  dom_matrix_read_only_v8_internal::FromMatrixMethod(info);
}

void V8DOMMatrixReadOnly::FromFloat32ArrayMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMMatrixReadOnly_fromFloat32Array");

  dom_matrix_read_only_v8_internal::FromFloat32ArrayMethod(info);
}

void V8DOMMatrixReadOnly::FromFloat64ArrayMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMMatrixReadOnly_fromFloat64Array");

  dom_matrix_read_only_v8_internal::FromFloat64ArrayMethod(info);
}

void V8DOMMatrixReadOnly::TranslateMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMMatrixReadOnly_translate");

  dom_matrix_read_only_v8_internal::TranslateMethod(info);
}

void V8DOMMatrixReadOnly::ScaleMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMMatrixReadOnly_scale");

  dom_matrix_read_only_v8_internal::ScaleMethod(info);
}

void V8DOMMatrixReadOnly::ScaleNonUniformMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMMatrixReadOnly_scaleNonUniform");

  dom_matrix_read_only_v8_internal::ScaleNonUniformMethod(info);
}

void V8DOMMatrixReadOnly::Scale3dMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMMatrixReadOnly_scale3d");

  dom_matrix_read_only_v8_internal::Scale3dMethod(info);
}

void V8DOMMatrixReadOnly::RotateMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMMatrixReadOnly_rotate");

  dom_matrix_read_only_v8_internal::RotateMethod(info);
}

void V8DOMMatrixReadOnly::RotateFromVectorMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMMatrixReadOnly_rotateFromVector");

  dom_matrix_read_only_v8_internal::RotateFromVectorMethod(info);
}

void V8DOMMatrixReadOnly::RotateAxisAngleMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMMatrixReadOnly_rotateAxisAngle");

  dom_matrix_read_only_v8_internal::RotateAxisAngleMethod(info);
}

void V8DOMMatrixReadOnly::SkewXMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMMatrixReadOnly_skewX");

  dom_matrix_read_only_v8_internal::SkewXMethod(info);
}

void V8DOMMatrixReadOnly::SkewYMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMMatrixReadOnly_skewY");

  dom_matrix_read_only_v8_internal::SkewYMethod(info);
}

void V8DOMMatrixReadOnly::MultiplyMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMMatrixReadOnly_multiply");

  dom_matrix_read_only_v8_internal::MultiplyMethod(info);
}

void V8DOMMatrixReadOnly::FlipXMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMMatrixReadOnly_flipX");

  dom_matrix_read_only_v8_internal::FlipXMethod(info);
}

void V8DOMMatrixReadOnly::FlipYMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMMatrixReadOnly_flipY");

  dom_matrix_read_only_v8_internal::FlipYMethod(info);
}

void V8DOMMatrixReadOnly::InverseMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMMatrixReadOnly_inverse");

  dom_matrix_read_only_v8_internal::InverseMethod(info);
}

void V8DOMMatrixReadOnly::TransformPointMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMMatrixReadOnly_transformPoint");

  dom_matrix_read_only_v8_internal::TransformPointMethod(info);
}

void V8DOMMatrixReadOnly::ToFloat32ArrayMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMMatrixReadOnly_toFloat32Array");

  dom_matrix_read_only_v8_internal::ToFloat32ArrayMethod(info);
}

void V8DOMMatrixReadOnly::ToFloat64ArrayMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMMatrixReadOnly_toFloat64Array");

  dom_matrix_read_only_v8_internal::ToFloat64ArrayMethod(info);
}

void V8DOMMatrixReadOnly::ToJSONMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMMatrixReadOnly_toJSON");

  dom_matrix_read_only_v8_internal::ToJSONMethod(info);
}

void V8DOMMatrixReadOnly::ToStringMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMMatrixReadOnly_toString");

  dom_matrix_read_only_v8_internal::ToStringMethod(info);
}

static constexpr V8DOMConfiguration::AccessorConfiguration kV8DOMMatrixReadOnlyAccessors[] = {
    { "a", V8DOMMatrixReadOnly::AAttributeGetterCallback, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
    { "b", V8DOMMatrixReadOnly::BAttributeGetterCallback, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
    { "c", V8DOMMatrixReadOnly::CAttributeGetterCallback, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
    { "d", V8DOMMatrixReadOnly::DAttributeGetterCallback, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
    { "e", V8DOMMatrixReadOnly::EAttributeGetterCallback, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
    { "f", V8DOMMatrixReadOnly::FAttributeGetterCallback, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
    { "m11", V8DOMMatrixReadOnly::M11AttributeGetterCallback, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
    { "m12", V8DOMMatrixReadOnly::M12AttributeGetterCallback, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
    { "m13", V8DOMMatrixReadOnly::M13AttributeGetterCallback, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
    { "m14", V8DOMMatrixReadOnly::M14AttributeGetterCallback, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
    { "m21", V8DOMMatrixReadOnly::M21AttributeGetterCallback, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
    { "m22", V8DOMMatrixReadOnly::M22AttributeGetterCallback, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
    { "m23", V8DOMMatrixReadOnly::M23AttributeGetterCallback, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
    { "m24", V8DOMMatrixReadOnly::M24AttributeGetterCallback, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
    { "m31", V8DOMMatrixReadOnly::M31AttributeGetterCallback, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
    { "m32", V8DOMMatrixReadOnly::M32AttributeGetterCallback, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
    { "m33", V8DOMMatrixReadOnly::M33AttributeGetterCallback, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
    { "m34", V8DOMMatrixReadOnly::M34AttributeGetterCallback, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
    { "m41", V8DOMMatrixReadOnly::M41AttributeGetterCallback, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
    { "m42", V8DOMMatrixReadOnly::M42AttributeGetterCallback, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
    { "m43", V8DOMMatrixReadOnly::M43AttributeGetterCallback, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
    { "m44", V8DOMMatrixReadOnly::M44AttributeGetterCallback, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
    { "is2D", V8DOMMatrixReadOnly::Is2DAttributeGetterCallback, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
    { "isIdentity", V8DOMMatrixReadOnly::IsIdentityAttributeGetterCallback, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
};

static constexpr V8DOMConfiguration::MethodConfiguration kV8DOMMatrixReadOnlyMethods[] = {
    {"fromMatrix", V8DOMMatrixReadOnly::FromMatrixMethodCallback, 0, v8::None, V8DOMConfiguration::kOnInterface, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"fromFloat32Array", V8DOMMatrixReadOnly::FromFloat32ArrayMethodCallback, 1, v8::None, V8DOMConfiguration::kOnInterface, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"fromFloat64Array", V8DOMMatrixReadOnly::FromFloat64ArrayMethodCallback, 1, v8::None, V8DOMConfiguration::kOnInterface, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"translate", V8DOMMatrixReadOnly::TranslateMethodCallback, 0, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"scale", V8DOMMatrixReadOnly::ScaleMethodCallback, 0, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"scaleNonUniform", V8DOMMatrixReadOnly::ScaleNonUniformMethodCallback, 0, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"scale3d", V8DOMMatrixReadOnly::Scale3dMethodCallback, 0, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"rotate", V8DOMMatrixReadOnly::RotateMethodCallback, 0, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"rotateFromVector", V8DOMMatrixReadOnly::RotateFromVectorMethodCallback, 0, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"rotateAxisAngle", V8DOMMatrixReadOnly::RotateAxisAngleMethodCallback, 0, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"skewX", V8DOMMatrixReadOnly::SkewXMethodCallback, 0, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"skewY", V8DOMMatrixReadOnly::SkewYMethodCallback, 0, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"multiply", V8DOMMatrixReadOnly::MultiplyMethodCallback, 0, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"flipX", V8DOMMatrixReadOnly::FlipXMethodCallback, 0, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"flipY", V8DOMMatrixReadOnly::FlipYMethodCallback, 0, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"inverse", V8DOMMatrixReadOnly::InverseMethodCallback, 0, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"transformPoint", V8DOMMatrixReadOnly::TransformPointMethodCallback, 0, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"toFloat32Array", V8DOMMatrixReadOnly::ToFloat32ArrayMethodCallback, 0, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"toFloat64Array", V8DOMMatrixReadOnly::ToFloat64ArrayMethodCallback, 0, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"toJSON", V8DOMMatrixReadOnly::ToJSONMethodCallback, 0, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
};

static void InstallV8DOMMatrixReadOnlyTemplate(
    v8::Isolate* isolate,
    const DOMWrapperWorld& world,
    v8::Local<v8::FunctionTemplate> interface_template) {
  // Initialize the interface object's template.
  V8DOMConfiguration::InitializeDOMInterfaceTemplate(isolate, interface_template, V8DOMMatrixReadOnly::GetWrapperTypeInfo()->interface_name, v8::Local<v8::FunctionTemplate>(), V8DOMMatrixReadOnly::kInternalFieldCount);
  interface_template->SetCallHandler(dom_matrix_read_only_v8_internal::ConstructorCallback);
  interface_template->SetLength(0);

  v8::Local<v8::Signature> signature = v8::Signature::New(isolate, interface_template);
  ALLOW_UNUSED_LOCAL(signature);
  v8::Local<v8::ObjectTemplate> instance_template = interface_template->InstanceTemplate();
  ALLOW_UNUSED_LOCAL(instance_template);
  v8::Local<v8::ObjectTemplate> prototype_template = interface_template->PrototypeTemplate();
  ALLOW_UNUSED_LOCAL(prototype_template);

  // Register IDL constants, attributes and operations.
  V8DOMConfiguration::InstallAccessors(
      isolate, world, instance_template, prototype_template, interface_template,
      signature, kV8DOMMatrixReadOnlyAccessors, base::size(kV8DOMMatrixReadOnlyAccessors));
  V8DOMConfiguration::InstallMethods(
      isolate, world, instance_template, prototype_template, interface_template,
      signature, kV8DOMMatrixReadOnlyMethods, base::size(kV8DOMMatrixReadOnlyMethods));

  // Custom signature

  V8DOMMatrixReadOnly::InstallRuntimeEnabledFeaturesOnTemplate(
      isolate, world, interface_template);
}

void V8DOMMatrixReadOnly::InstallRuntimeEnabledFeaturesOnTemplate(
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

v8::Local<v8::FunctionTemplate> V8DOMMatrixReadOnly::DomTemplate(
    v8::Isolate* isolate, const DOMWrapperWorld& world) {
  return V8DOMConfiguration::DomClassTemplate(
      isolate, world, const_cast<WrapperTypeInfo*>(V8DOMMatrixReadOnly::GetWrapperTypeInfo()),
      InstallV8DOMMatrixReadOnlyTemplate);
}

bool V8DOMMatrixReadOnly::HasInstance(v8::Local<v8::Value> v8_value, v8::Isolate* isolate) {
  return V8PerIsolateData::From(isolate)->HasInstance(V8DOMMatrixReadOnly::GetWrapperTypeInfo(), v8_value);
}

v8::Local<v8::Object> V8DOMMatrixReadOnly::FindInstanceInPrototypeChain(
    v8::Local<v8::Value> v8_value, v8::Isolate* isolate) {
  return V8PerIsolateData::From(isolate)->FindInstanceInPrototypeChain(
      V8DOMMatrixReadOnly::GetWrapperTypeInfo(), v8_value);
}

DOMMatrixReadOnly* V8DOMMatrixReadOnly::ToImplWithTypeCheck(
    v8::Isolate* isolate, v8::Local<v8::Value> value) {
  return HasInstance(value, isolate) ? ToImpl(v8::Local<v8::Object>::Cast(value)) : nullptr;
}

DOMMatrixReadOnly* NativeValueTraits<DOMMatrixReadOnly>::NativeValue(
    v8::Isolate* isolate, v8::Local<v8::Value> value, ExceptionState& exception_state) {
  DOMMatrixReadOnly* native_value = V8DOMMatrixReadOnly::ToImplWithTypeCheck(isolate, value);
  if (!native_value) {
    exception_state.ThrowTypeError(ExceptionMessages::FailedToConvertJSValue(
        "DOMMatrixReadOnly"));
  }
  return native_value;
}

void V8DOMMatrixReadOnly::InstallConditionalFeatures(
    v8::Local<v8::Context> context,
    const DOMWrapperWorld& world,
    v8::Local<v8::Object> instance_object,
    v8::Local<v8::Object> prototype_object,
    v8::Local<v8::Function> interface_object,
    v8::Local<v8::FunctionTemplate> interface_template) {
  CHECK(!interface_template.IsEmpty());
  DCHECK((!prototype_object.IsEmpty() && !interface_object.IsEmpty()) ||
         !instance_object.IsEmpty());

  v8::Isolate* isolate = context->GetIsolate();

  v8::Local<v8::Signature> signature = v8::Signature::New(isolate, interface_template);
  ExecutionContext* execution_context = ToExecutionContext(context);
  DCHECK(execution_context);

  if (!prototype_object.IsEmpty() || !interface_object.IsEmpty()) {
    if (execution_context && (execution_context->IsDocument())) {
      {
        // Install toString configuration
        const V8DOMConfiguration::MethodConfiguration kConfigurations[] = {
            {"toString", V8DOMMatrixReadOnly::ToStringMethodCallback, 0, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds}
        };
        for (const auto& config : kConfigurations) {
          V8DOMConfiguration::InstallMethod(
              isolate, world, instance_object, prototype_object,
              interface_object, signature, config);
        }
      }
    }
  }
}

}  // namespace blink
