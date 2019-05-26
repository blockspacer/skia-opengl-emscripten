// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated from the Jinja2 template
// third_party/blink/renderer/bindings/templates/interface.cc.tmpl
// by the script code_generator_v8.py.
// DO NOT MODIFY!

// clang-format off
#include "third_party/blink/renderer/bindings/core/v8/v8_dom_matrix.h"

#include <algorithm>

#include "base/memory/scoped_refptr.h"
#include "third_party/blink/renderer/bindings/core/v8/idl_types.h"
#include "third_party/blink/renderer/bindings/core/v8/native_value_traits_impl.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_array_buffer_view.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_dom_configuration.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_dom_matrix.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_dom_matrix_init.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_float32_array.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_float64_array.h"
#include "third_party/blink/renderer/core/execution_context/execution_context.h"
#include "third_party/blink/renderer/core/frame/local_dom_window.h"
#include "third_party/blink/renderer/core/typed_arrays/array_buffer_view_helpers.h"
#include "third_party/blink/renderer/core/typed_arrays/flexible_array_buffer_view.h"
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
const WrapperTypeInfo v8_dom_matrix_wrapper_type_info = {
    gin::kEmbedderBlink,
    V8DOMMatrix::DomTemplate,
    V8DOMMatrix::InstallConditionalFeatures,
    "DOMMatrix",
    V8DOMMatrixReadOnly::GetWrapperTypeInfo(),
    WrapperTypeInfo::kWrapperTypeObjectPrototype,
    WrapperTypeInfo::kObjectClassId,
    WrapperTypeInfo::kNotInheritFromActiveScriptWrappable,
};
#if defined(COMPONENT_BUILD) && defined(WIN32) && defined(__clang__)
#pragma clang diagnostic pop
#endif

// This static member must be declared by DEFINE_WRAPPERTYPEINFO in DOMMatrix.h.
// For details, see the comment of DEFINE_WRAPPERTYPEINFO in
// platform/bindings/ScriptWrappable.h.
const WrapperTypeInfo& DOMMatrix::wrapper_type_info_ = v8_dom_matrix_wrapper_type_info;

// not [ActiveScriptWrappable]
static_assert(
    !std::is_base_of<ActiveScriptWrappableBase, DOMMatrix>::value,
    "DOMMatrix inherits from ActiveScriptWrappable<>, but is not specifying "
    "[ActiveScriptWrappable] extended attribute in the IDL file.  "
    "Be consistent.");
static_assert(
    std::is_same<decltype(&DOMMatrix::HasPendingActivity),
                 decltype(&ScriptWrappable::HasPendingActivity)>::value,
    "DOMMatrix is overriding hasPendingActivity(), but is not specifying "
    "[ActiveScriptWrappable] extended attribute in the IDL file.  "
    "Be consistent.");

namespace dom_matrix_v8_internal {

static void AAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  DOMMatrix* impl = V8DOMMatrix::ToImpl(holder);

  V8SetReturnValue(info, impl->a());
}

static void AAttributeSetter(
    v8::Local<v8::Value> v8_value, const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Isolate* isolate = info.GetIsolate();
  ALLOW_UNUSED_LOCAL(isolate);

  v8::Local<v8::Object> holder = info.Holder();
  ALLOW_UNUSED_LOCAL(holder);

  DOMMatrix* impl = V8DOMMatrix::ToImpl(holder);

  ExceptionState exception_state(isolate, ExceptionState::kSetterContext, "DOMMatrix", "a");

  // Prepare the value to be set.
  double cpp_value = NativeValueTraits<IDLUnrestrictedDouble>::NativeValue(info.GetIsolate(), v8_value, exception_state);
  if (exception_state.HadException())
    return;

  impl->setA(cpp_value);
}

static void BAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  DOMMatrix* impl = V8DOMMatrix::ToImpl(holder);

  V8SetReturnValue(info, impl->b());
}

static void BAttributeSetter(
    v8::Local<v8::Value> v8_value, const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Isolate* isolate = info.GetIsolate();
  ALLOW_UNUSED_LOCAL(isolate);

  v8::Local<v8::Object> holder = info.Holder();
  ALLOW_UNUSED_LOCAL(holder);

  DOMMatrix* impl = V8DOMMatrix::ToImpl(holder);

  ExceptionState exception_state(isolate, ExceptionState::kSetterContext, "DOMMatrix", "b");

  // Prepare the value to be set.
  double cpp_value = NativeValueTraits<IDLUnrestrictedDouble>::NativeValue(info.GetIsolate(), v8_value, exception_state);
  if (exception_state.HadException())
    return;

  impl->setB(cpp_value);
}

static void CAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  DOMMatrix* impl = V8DOMMatrix::ToImpl(holder);

  V8SetReturnValue(info, impl->c());
}

static void CAttributeSetter(
    v8::Local<v8::Value> v8_value, const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Isolate* isolate = info.GetIsolate();
  ALLOW_UNUSED_LOCAL(isolate);

  v8::Local<v8::Object> holder = info.Holder();
  ALLOW_UNUSED_LOCAL(holder);

  DOMMatrix* impl = V8DOMMatrix::ToImpl(holder);

  ExceptionState exception_state(isolate, ExceptionState::kSetterContext, "DOMMatrix", "c");

  // Prepare the value to be set.
  double cpp_value = NativeValueTraits<IDLUnrestrictedDouble>::NativeValue(info.GetIsolate(), v8_value, exception_state);
  if (exception_state.HadException())
    return;

  impl->setC(cpp_value);
}

static void DAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  DOMMatrix* impl = V8DOMMatrix::ToImpl(holder);

  V8SetReturnValue(info, impl->d());
}

static void DAttributeSetter(
    v8::Local<v8::Value> v8_value, const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Isolate* isolate = info.GetIsolate();
  ALLOW_UNUSED_LOCAL(isolate);

  v8::Local<v8::Object> holder = info.Holder();
  ALLOW_UNUSED_LOCAL(holder);

  DOMMatrix* impl = V8DOMMatrix::ToImpl(holder);

  ExceptionState exception_state(isolate, ExceptionState::kSetterContext, "DOMMatrix", "d");

  // Prepare the value to be set.
  double cpp_value = NativeValueTraits<IDLUnrestrictedDouble>::NativeValue(info.GetIsolate(), v8_value, exception_state);
  if (exception_state.HadException())
    return;

  impl->setD(cpp_value);
}

static void EAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  DOMMatrix* impl = V8DOMMatrix::ToImpl(holder);

  V8SetReturnValue(info, impl->e());
}

static void EAttributeSetter(
    v8::Local<v8::Value> v8_value, const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Isolate* isolate = info.GetIsolate();
  ALLOW_UNUSED_LOCAL(isolate);

  v8::Local<v8::Object> holder = info.Holder();
  ALLOW_UNUSED_LOCAL(holder);

  DOMMatrix* impl = V8DOMMatrix::ToImpl(holder);

  ExceptionState exception_state(isolate, ExceptionState::kSetterContext, "DOMMatrix", "e");

  // Prepare the value to be set.
  double cpp_value = NativeValueTraits<IDLUnrestrictedDouble>::NativeValue(info.GetIsolate(), v8_value, exception_state);
  if (exception_state.HadException())
    return;

  impl->setE(cpp_value);
}

static void FAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  DOMMatrix* impl = V8DOMMatrix::ToImpl(holder);

  V8SetReturnValue(info, impl->f());
}

static void FAttributeSetter(
    v8::Local<v8::Value> v8_value, const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Isolate* isolate = info.GetIsolate();
  ALLOW_UNUSED_LOCAL(isolate);

  v8::Local<v8::Object> holder = info.Holder();
  ALLOW_UNUSED_LOCAL(holder);

  DOMMatrix* impl = V8DOMMatrix::ToImpl(holder);

  ExceptionState exception_state(isolate, ExceptionState::kSetterContext, "DOMMatrix", "f");

  // Prepare the value to be set.
  double cpp_value = NativeValueTraits<IDLUnrestrictedDouble>::NativeValue(info.GetIsolate(), v8_value, exception_state);
  if (exception_state.HadException())
    return;

  impl->setF(cpp_value);
}

static void M11AttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  DOMMatrix* impl = V8DOMMatrix::ToImpl(holder);

  V8SetReturnValue(info, impl->m11());
}

static void M11AttributeSetter(
    v8::Local<v8::Value> v8_value, const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Isolate* isolate = info.GetIsolate();
  ALLOW_UNUSED_LOCAL(isolate);

  v8::Local<v8::Object> holder = info.Holder();
  ALLOW_UNUSED_LOCAL(holder);

  DOMMatrix* impl = V8DOMMatrix::ToImpl(holder);

  ExceptionState exception_state(isolate, ExceptionState::kSetterContext, "DOMMatrix", "m11");

  // Prepare the value to be set.
  double cpp_value = NativeValueTraits<IDLUnrestrictedDouble>::NativeValue(info.GetIsolate(), v8_value, exception_state);
  if (exception_state.HadException())
    return;

  impl->setM11(cpp_value);
}

static void M12AttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  DOMMatrix* impl = V8DOMMatrix::ToImpl(holder);

  V8SetReturnValue(info, impl->m12());
}

static void M12AttributeSetter(
    v8::Local<v8::Value> v8_value, const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Isolate* isolate = info.GetIsolate();
  ALLOW_UNUSED_LOCAL(isolate);

  v8::Local<v8::Object> holder = info.Holder();
  ALLOW_UNUSED_LOCAL(holder);

  DOMMatrix* impl = V8DOMMatrix::ToImpl(holder);

  ExceptionState exception_state(isolate, ExceptionState::kSetterContext, "DOMMatrix", "m12");

  // Prepare the value to be set.
  double cpp_value = NativeValueTraits<IDLUnrestrictedDouble>::NativeValue(info.GetIsolate(), v8_value, exception_state);
  if (exception_state.HadException())
    return;

  impl->setM12(cpp_value);
}

static void M13AttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  DOMMatrix* impl = V8DOMMatrix::ToImpl(holder);

  V8SetReturnValue(info, impl->m13());
}

static void M13AttributeSetter(
    v8::Local<v8::Value> v8_value, const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Isolate* isolate = info.GetIsolate();
  ALLOW_UNUSED_LOCAL(isolate);

  v8::Local<v8::Object> holder = info.Holder();
  ALLOW_UNUSED_LOCAL(holder);

  DOMMatrix* impl = V8DOMMatrix::ToImpl(holder);

  ExceptionState exception_state(isolate, ExceptionState::kSetterContext, "DOMMatrix", "m13");

  // Prepare the value to be set.
  double cpp_value = NativeValueTraits<IDLUnrestrictedDouble>::NativeValue(info.GetIsolate(), v8_value, exception_state);
  if (exception_state.HadException())
    return;

  impl->setM13(cpp_value);
}

static void M14AttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  DOMMatrix* impl = V8DOMMatrix::ToImpl(holder);

  V8SetReturnValue(info, impl->m14());
}

static void M14AttributeSetter(
    v8::Local<v8::Value> v8_value, const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Isolate* isolate = info.GetIsolate();
  ALLOW_UNUSED_LOCAL(isolate);

  v8::Local<v8::Object> holder = info.Holder();
  ALLOW_UNUSED_LOCAL(holder);

  DOMMatrix* impl = V8DOMMatrix::ToImpl(holder);

  ExceptionState exception_state(isolate, ExceptionState::kSetterContext, "DOMMatrix", "m14");

  // Prepare the value to be set.
  double cpp_value = NativeValueTraits<IDLUnrestrictedDouble>::NativeValue(info.GetIsolate(), v8_value, exception_state);
  if (exception_state.HadException())
    return;

  impl->setM14(cpp_value);
}

static void M21AttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  DOMMatrix* impl = V8DOMMatrix::ToImpl(holder);

  V8SetReturnValue(info, impl->m21());
}

static void M21AttributeSetter(
    v8::Local<v8::Value> v8_value, const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Isolate* isolate = info.GetIsolate();
  ALLOW_UNUSED_LOCAL(isolate);

  v8::Local<v8::Object> holder = info.Holder();
  ALLOW_UNUSED_LOCAL(holder);

  DOMMatrix* impl = V8DOMMatrix::ToImpl(holder);

  ExceptionState exception_state(isolate, ExceptionState::kSetterContext, "DOMMatrix", "m21");

  // Prepare the value to be set.
  double cpp_value = NativeValueTraits<IDLUnrestrictedDouble>::NativeValue(info.GetIsolate(), v8_value, exception_state);
  if (exception_state.HadException())
    return;

  impl->setM21(cpp_value);
}

static void M22AttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  DOMMatrix* impl = V8DOMMatrix::ToImpl(holder);

  V8SetReturnValue(info, impl->m22());
}

static void M22AttributeSetter(
    v8::Local<v8::Value> v8_value, const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Isolate* isolate = info.GetIsolate();
  ALLOW_UNUSED_LOCAL(isolate);

  v8::Local<v8::Object> holder = info.Holder();
  ALLOW_UNUSED_LOCAL(holder);

  DOMMatrix* impl = V8DOMMatrix::ToImpl(holder);

  ExceptionState exception_state(isolate, ExceptionState::kSetterContext, "DOMMatrix", "m22");

  // Prepare the value to be set.
  double cpp_value = NativeValueTraits<IDLUnrestrictedDouble>::NativeValue(info.GetIsolate(), v8_value, exception_state);
  if (exception_state.HadException())
    return;

  impl->setM22(cpp_value);
}

static void M23AttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  DOMMatrix* impl = V8DOMMatrix::ToImpl(holder);

  V8SetReturnValue(info, impl->m23());
}

static void M23AttributeSetter(
    v8::Local<v8::Value> v8_value, const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Isolate* isolate = info.GetIsolate();
  ALLOW_UNUSED_LOCAL(isolate);

  v8::Local<v8::Object> holder = info.Holder();
  ALLOW_UNUSED_LOCAL(holder);

  DOMMatrix* impl = V8DOMMatrix::ToImpl(holder);

  ExceptionState exception_state(isolate, ExceptionState::kSetterContext, "DOMMatrix", "m23");

  // Prepare the value to be set.
  double cpp_value = NativeValueTraits<IDLUnrestrictedDouble>::NativeValue(info.GetIsolate(), v8_value, exception_state);
  if (exception_state.HadException())
    return;

  impl->setM23(cpp_value);
}

static void M24AttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  DOMMatrix* impl = V8DOMMatrix::ToImpl(holder);

  V8SetReturnValue(info, impl->m24());
}

static void M24AttributeSetter(
    v8::Local<v8::Value> v8_value, const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Isolate* isolate = info.GetIsolate();
  ALLOW_UNUSED_LOCAL(isolate);

  v8::Local<v8::Object> holder = info.Holder();
  ALLOW_UNUSED_LOCAL(holder);

  DOMMatrix* impl = V8DOMMatrix::ToImpl(holder);

  ExceptionState exception_state(isolate, ExceptionState::kSetterContext, "DOMMatrix", "m24");

  // Prepare the value to be set.
  double cpp_value = NativeValueTraits<IDLUnrestrictedDouble>::NativeValue(info.GetIsolate(), v8_value, exception_state);
  if (exception_state.HadException())
    return;

  impl->setM24(cpp_value);
}

static void M31AttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  DOMMatrix* impl = V8DOMMatrix::ToImpl(holder);

  V8SetReturnValue(info, impl->m31());
}

static void M31AttributeSetter(
    v8::Local<v8::Value> v8_value, const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Isolate* isolate = info.GetIsolate();
  ALLOW_UNUSED_LOCAL(isolate);

  v8::Local<v8::Object> holder = info.Holder();
  ALLOW_UNUSED_LOCAL(holder);

  DOMMatrix* impl = V8DOMMatrix::ToImpl(holder);

  ExceptionState exception_state(isolate, ExceptionState::kSetterContext, "DOMMatrix", "m31");

  // Prepare the value to be set.
  double cpp_value = NativeValueTraits<IDLUnrestrictedDouble>::NativeValue(info.GetIsolate(), v8_value, exception_state);
  if (exception_state.HadException())
    return;

  impl->setM31(cpp_value);
}

static void M32AttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  DOMMatrix* impl = V8DOMMatrix::ToImpl(holder);

  V8SetReturnValue(info, impl->m32());
}

static void M32AttributeSetter(
    v8::Local<v8::Value> v8_value, const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Isolate* isolate = info.GetIsolate();
  ALLOW_UNUSED_LOCAL(isolate);

  v8::Local<v8::Object> holder = info.Holder();
  ALLOW_UNUSED_LOCAL(holder);

  DOMMatrix* impl = V8DOMMatrix::ToImpl(holder);

  ExceptionState exception_state(isolate, ExceptionState::kSetterContext, "DOMMatrix", "m32");

  // Prepare the value to be set.
  double cpp_value = NativeValueTraits<IDLUnrestrictedDouble>::NativeValue(info.GetIsolate(), v8_value, exception_state);
  if (exception_state.HadException())
    return;

  impl->setM32(cpp_value);
}

static void M33AttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  DOMMatrix* impl = V8DOMMatrix::ToImpl(holder);

  V8SetReturnValue(info, impl->m33());
}

static void M33AttributeSetter(
    v8::Local<v8::Value> v8_value, const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Isolate* isolate = info.GetIsolate();
  ALLOW_UNUSED_LOCAL(isolate);

  v8::Local<v8::Object> holder = info.Holder();
  ALLOW_UNUSED_LOCAL(holder);

  DOMMatrix* impl = V8DOMMatrix::ToImpl(holder);

  ExceptionState exception_state(isolate, ExceptionState::kSetterContext, "DOMMatrix", "m33");

  // Prepare the value to be set.
  double cpp_value = NativeValueTraits<IDLUnrestrictedDouble>::NativeValue(info.GetIsolate(), v8_value, exception_state);
  if (exception_state.HadException())
    return;

  impl->setM33(cpp_value);
}

static void M34AttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  DOMMatrix* impl = V8DOMMatrix::ToImpl(holder);

  V8SetReturnValue(info, impl->m34());
}

static void M34AttributeSetter(
    v8::Local<v8::Value> v8_value, const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Isolate* isolate = info.GetIsolate();
  ALLOW_UNUSED_LOCAL(isolate);

  v8::Local<v8::Object> holder = info.Holder();
  ALLOW_UNUSED_LOCAL(holder);

  DOMMatrix* impl = V8DOMMatrix::ToImpl(holder);

  ExceptionState exception_state(isolate, ExceptionState::kSetterContext, "DOMMatrix", "m34");

  // Prepare the value to be set.
  double cpp_value = NativeValueTraits<IDLUnrestrictedDouble>::NativeValue(info.GetIsolate(), v8_value, exception_state);
  if (exception_state.HadException())
    return;

  impl->setM34(cpp_value);
}

static void M41AttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  DOMMatrix* impl = V8DOMMatrix::ToImpl(holder);

  V8SetReturnValue(info, impl->m41());
}

static void M41AttributeSetter(
    v8::Local<v8::Value> v8_value, const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Isolate* isolate = info.GetIsolate();
  ALLOW_UNUSED_LOCAL(isolate);

  v8::Local<v8::Object> holder = info.Holder();
  ALLOW_UNUSED_LOCAL(holder);

  DOMMatrix* impl = V8DOMMatrix::ToImpl(holder);

  ExceptionState exception_state(isolate, ExceptionState::kSetterContext, "DOMMatrix", "m41");

  // Prepare the value to be set.
  double cpp_value = NativeValueTraits<IDLUnrestrictedDouble>::NativeValue(info.GetIsolate(), v8_value, exception_state);
  if (exception_state.HadException())
    return;

  impl->setM41(cpp_value);
}

static void M42AttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  DOMMatrix* impl = V8DOMMatrix::ToImpl(holder);

  V8SetReturnValue(info, impl->m42());
}

static void M42AttributeSetter(
    v8::Local<v8::Value> v8_value, const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Isolate* isolate = info.GetIsolate();
  ALLOW_UNUSED_LOCAL(isolate);

  v8::Local<v8::Object> holder = info.Holder();
  ALLOW_UNUSED_LOCAL(holder);

  DOMMatrix* impl = V8DOMMatrix::ToImpl(holder);

  ExceptionState exception_state(isolate, ExceptionState::kSetterContext, "DOMMatrix", "m42");

  // Prepare the value to be set.
  double cpp_value = NativeValueTraits<IDLUnrestrictedDouble>::NativeValue(info.GetIsolate(), v8_value, exception_state);
  if (exception_state.HadException())
    return;

  impl->setM42(cpp_value);
}

static void M43AttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  DOMMatrix* impl = V8DOMMatrix::ToImpl(holder);

  V8SetReturnValue(info, impl->m43());
}

static void M43AttributeSetter(
    v8::Local<v8::Value> v8_value, const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Isolate* isolate = info.GetIsolate();
  ALLOW_UNUSED_LOCAL(isolate);

  v8::Local<v8::Object> holder = info.Holder();
  ALLOW_UNUSED_LOCAL(holder);

  DOMMatrix* impl = V8DOMMatrix::ToImpl(holder);

  ExceptionState exception_state(isolate, ExceptionState::kSetterContext, "DOMMatrix", "m43");

  // Prepare the value to be set.
  double cpp_value = NativeValueTraits<IDLUnrestrictedDouble>::NativeValue(info.GetIsolate(), v8_value, exception_state);
  if (exception_state.HadException())
    return;

  impl->setM43(cpp_value);
}

static void M44AttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  DOMMatrix* impl = V8DOMMatrix::ToImpl(holder);

  V8SetReturnValue(info, impl->m44());
}

static void M44AttributeSetter(
    v8::Local<v8::Value> v8_value, const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Isolate* isolate = info.GetIsolate();
  ALLOW_UNUSED_LOCAL(isolate);

  v8::Local<v8::Object> holder = info.Holder();
  ALLOW_UNUSED_LOCAL(holder);

  DOMMatrix* impl = V8DOMMatrix::ToImpl(holder);

  ExceptionState exception_state(isolate, ExceptionState::kSetterContext, "DOMMatrix", "m44");

  // Prepare the value to be set.
  double cpp_value = NativeValueTraits<IDLUnrestrictedDouble>::NativeValue(info.GetIsolate(), v8_value, exception_state);
  if (exception_state.HadException())
    return;

  impl->setM44(cpp_value);
}

static void FromMatrixMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exception_state(info.GetIsolate(), ExceptionState::kExecutionContext, "DOMMatrix", "fromMatrix");

  DOMMatrixInit* other;
  if (!info[0]->IsNullOrUndefined() && !info[0]->IsObject()) {
    exception_state.ThrowTypeError("parameter 1 ('other') is not an object.");
    return;
  }
  other = NativeValueTraits<DOMMatrixInit>::NativeValue(info.GetIsolate(), info[0], exception_state);
  if (exception_state.HadException())
    return;

  DOMMatrix* result = DOMMatrix::fromMatrix(other, exception_state);
  if (exception_state.HadException()) {
    return;
  }
  // [NewObject] must always create a new wrapper.  Check that a wrapper
  // does not exist yet.
  DCHECK(!result || DOMDataStore::GetWrapper(result, info.GetIsolate()).IsEmpty());
  V8SetReturnValue(info, result, info.GetIsolate()->GetCurrentContext()->Global());
}

static void FromFloat32ArrayMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exception_state(info.GetIsolate(), ExceptionState::kExecutionContext, "DOMMatrix", "fromFloat32Array");

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

  DOMMatrix* result = DOMMatrix::fromFloat32Array(array_32, exception_state);
  if (exception_state.HadException()) {
    return;
  }
  // [NewObject] must always create a new wrapper.  Check that a wrapper
  // does not exist yet.
  DCHECK(!result || DOMDataStore::GetWrapper(result, info.GetIsolate()).IsEmpty());
  V8SetReturnValue(info, result, info.GetIsolate()->GetCurrentContext()->Global());
}

static void FromFloat64ArrayMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exception_state(info.GetIsolate(), ExceptionState::kExecutionContext, "DOMMatrix", "fromFloat64Array");

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

  DOMMatrix* result = DOMMatrix::fromFloat64Array(array_64, exception_state);
  if (exception_state.HadException()) {
    return;
  }
  // [NewObject] must always create a new wrapper.  Check that a wrapper
  // does not exist yet.
  DCHECK(!result || DOMDataStore::GetWrapper(result, info.GetIsolate()).IsEmpty());
  V8SetReturnValue(info, result, info.GetIsolate()->GetCurrentContext()->Global());
}

static void MultiplySelfMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exception_state(info.GetIsolate(), ExceptionState::kExecutionContext, "DOMMatrix", "multiplySelf");

  DOMMatrix* impl = V8DOMMatrix::ToImpl(info.Holder());

  DOMMatrixInit* other;
  if (!info[0]->IsNullOrUndefined() && !info[0]->IsObject()) {
    exception_state.ThrowTypeError("parameter 1 ('other') is not an object.");
    return;
  }
  other = NativeValueTraits<DOMMatrixInit>::NativeValue(info.GetIsolate(), info[0], exception_state);
  if (exception_state.HadException())
    return;

  DOMMatrix* result = impl->multiplySelf(other, exception_state);
  if (exception_state.HadException()) {
    return;
  }
  V8SetReturnValue(info, result);
}

static void PreMultiplySelfMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exception_state(info.GetIsolate(), ExceptionState::kExecutionContext, "DOMMatrix", "preMultiplySelf");

  DOMMatrix* impl = V8DOMMatrix::ToImpl(info.Holder());

  DOMMatrixInit* other;
  if (!info[0]->IsNullOrUndefined() && !info[0]->IsObject()) {
    exception_state.ThrowTypeError("parameter 1 ('other') is not an object.");
    return;
  }
  other = NativeValueTraits<DOMMatrixInit>::NativeValue(info.GetIsolate(), info[0], exception_state);
  if (exception_state.HadException())
    return;

  DOMMatrix* result = impl->preMultiplySelf(other, exception_state);
  if (exception_state.HadException()) {
    return;
  }
  V8SetReturnValue(info, result);
}

static void TranslateSelfMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exception_state(info.GetIsolate(), ExceptionState::kExecutionContext, "DOMMatrix", "translateSelf");

  DOMMatrix* impl = V8DOMMatrix::ToImpl(info.Holder());

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

  V8SetReturnValue(info, impl->translateSelf(tx, ty, tz));
}

static void ScaleSelfMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exception_state(info.GetIsolate(), ExceptionState::kExecutionContext, "DOMMatrix", "scaleSelf");

  DOMMatrix* impl = V8DOMMatrix::ToImpl(info.Holder());

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
    V8SetReturnValue(info, impl->scaleSelf(scale_x));
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

  V8SetReturnValue(info, impl->scaleSelf(scale_x, scale_y, scale_z, origin_x, origin_y, origin_z));
}

static void Scale3dSelfMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exception_state(info.GetIsolate(), ExceptionState::kExecutionContext, "DOMMatrix", "scale3dSelf");

  DOMMatrix* impl = V8DOMMatrix::ToImpl(info.Holder());

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

  V8SetReturnValue(info, impl->scale3dSelf(scale, origin_x, origin_y, origin_z));
}

static void RotateSelfMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exception_state(info.GetIsolate(), ExceptionState::kExecutionContext, "DOMMatrix", "rotateSelf");

  DOMMatrix* impl = V8DOMMatrix::ToImpl(info.Holder());

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
    V8SetReturnValue(info, impl->rotateSelf(rot_x));
    return;
  }
  rot_y = NativeValueTraits<IDLUnrestrictedDouble>::NativeValue(info.GetIsolate(), info[1], exception_state);
  if (exception_state.HadException())
    return;

  if (UNLIKELY(num_args_passed <= 2)) {
    V8SetReturnValue(info, impl->rotateSelf(rot_x, rot_y));
    return;
  }
  rot_z = NativeValueTraits<IDLUnrestrictedDouble>::NativeValue(info.GetIsolate(), info[2], exception_state);
  if (exception_state.HadException())
    return;

  V8SetReturnValue(info, impl->rotateSelf(rot_x, rot_y, rot_z));
}

static void RotateFromVectorSelfMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exception_state(info.GetIsolate(), ExceptionState::kExecutionContext, "DOMMatrix", "rotateFromVectorSelf");

  DOMMatrix* impl = V8DOMMatrix::ToImpl(info.Holder());

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

  V8SetReturnValue(info, impl->rotateFromVectorSelf(x, y));
}

static void RotateAxisAngleSelfMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exception_state(info.GetIsolate(), ExceptionState::kExecutionContext, "DOMMatrix", "rotateAxisAngleSelf");

  DOMMatrix* impl = V8DOMMatrix::ToImpl(info.Holder());

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

  V8SetReturnValue(info, impl->rotateAxisAngleSelf(x, y, z, angle));
}

static void SkewXSelfMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exception_state(info.GetIsolate(), ExceptionState::kExecutionContext, "DOMMatrix", "skewXSelf");

  DOMMatrix* impl = V8DOMMatrix::ToImpl(info.Holder());

  double sx;
  if (!info[0]->IsUndefined()) {
    sx = NativeValueTraits<IDLUnrestrictedDouble>::NativeValue(info.GetIsolate(), info[0], exception_state);
    if (exception_state.HadException())
      return;
  } else {
    sx = 0;
  }

  V8SetReturnValue(info, impl->skewXSelf(sx));
}

static void SkewYSelfMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exception_state(info.GetIsolate(), ExceptionState::kExecutionContext, "DOMMatrix", "skewYSelf");

  DOMMatrix* impl = V8DOMMatrix::ToImpl(info.Holder());

  double sy;
  if (!info[0]->IsUndefined()) {
    sy = NativeValueTraits<IDLUnrestrictedDouble>::NativeValue(info.GetIsolate(), info[0], exception_state);
    if (exception_state.HadException())
      return;
  } else {
    sy = 0;
  }

  V8SetReturnValue(info, impl->skewYSelf(sy));
}

static void InvertSelfMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  DOMMatrix* impl = V8DOMMatrix::ToImpl(info.Holder());

  V8SetReturnValue(info, impl->invertSelf());
}

static void SetMatrixValueMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exception_state(info.GetIsolate(), ExceptionState::kExecutionContext, "DOMMatrix", "setMatrixValue");

  DOMMatrix* impl = V8DOMMatrix::ToImpl(info.Holder());

  if (UNLIKELY(info.Length() < 1)) {
    exception_state.ThrowTypeError(ExceptionMessages::NotEnoughArguments(1, info.Length()));
    return;
  }

  V8StringResource<> transform_list;
  transform_list = info[0];
  if (!transform_list.Prepare())
    return;

  ExecutionContext* execution_context = ExecutionContext::ForRelevantRealm(info);
  DOMMatrix* result = impl->setMatrixValue(execution_context, transform_list, exception_state);
  if (exception_state.HadException()) {
    return;
  }
  V8SetReturnValue(info, result);
}

static void Constructor(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMMatrix_ConstructorCallback");

  ExceptionState exception_state(info.GetIsolate(), ExceptionState::kConstructionContext, "DOMMatrix");

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
    DOMMatrix* impl = DOMMatrix::Create(execution_context, exception_state);
    if (exception_state.HadException()) {
      return;
    }
    v8::Local<v8::Object> wrapper = info.Holder();
    wrapper = impl->AssociateWithWrapper(info.GetIsolate(), V8DOMMatrix::GetWrapperTypeInfo(), wrapper);
    V8SetReturnValue(info, wrapper);
    return;
  }
  V8StringOrUnrestrictedDoubleSequence::ToImpl(info.GetIsolate(), info[0], init, UnionTypeConversionMode::kNotNullable, exception_state);
  if (exception_state.HadException())
    return;

  ExecutionContext* execution_context = ToExecutionContext(
      info.NewTarget().As<v8::Object>()->CreationContext());
  DOMMatrix* impl = DOMMatrix::Create(execution_context, init, exception_state);
  if (exception_state.HadException()) {
    return;
  }
  v8::Local<v8::Object> wrapper = info.Holder();
  wrapper = impl->AssociateWithWrapper(info.GetIsolate(), V8DOMMatrix::GetWrapperTypeInfo(), wrapper);
  V8SetReturnValue(info, wrapper);
}

CORE_EXPORT void ConstructorCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMMatrix_Constructor");

  if (!info.IsConstructCall()) {
    V8ThrowException::ThrowTypeError(
        info.GetIsolate(),
        ExceptionMessages::ConstructorNotCallableAsFunction("DOMMatrix"));
    return;
  }

  if (ConstructorMode::Current(info.GetIsolate()) == ConstructorMode::kWrapExistingObject) {
    V8SetReturnValue(info, info.Holder());
    return;
  }

  dom_matrix_v8_internal::Constructor(info);
}

}  // namespace dom_matrix_v8_internal

void V8DOMMatrix::AAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMMatrix_a_Getter");

  dom_matrix_v8_internal::AAttributeGetter(info);
}

void V8DOMMatrix::AAttributeSetterCallback(
    const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMMatrix_a_Setter");

  v8::Local<v8::Value> v8_value = info[0];

  dom_matrix_v8_internal::AAttributeSetter(v8_value, info);
}

void V8DOMMatrix::BAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMMatrix_b_Getter");

  dom_matrix_v8_internal::BAttributeGetter(info);
}

void V8DOMMatrix::BAttributeSetterCallback(
    const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMMatrix_b_Setter");

  v8::Local<v8::Value> v8_value = info[0];

  dom_matrix_v8_internal::BAttributeSetter(v8_value, info);
}

void V8DOMMatrix::CAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMMatrix_c_Getter");

  dom_matrix_v8_internal::CAttributeGetter(info);
}

void V8DOMMatrix::CAttributeSetterCallback(
    const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMMatrix_c_Setter");

  v8::Local<v8::Value> v8_value = info[0];

  dom_matrix_v8_internal::CAttributeSetter(v8_value, info);
}

void V8DOMMatrix::DAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMMatrix_d_Getter");

  dom_matrix_v8_internal::DAttributeGetter(info);
}

void V8DOMMatrix::DAttributeSetterCallback(
    const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMMatrix_d_Setter");

  v8::Local<v8::Value> v8_value = info[0];

  dom_matrix_v8_internal::DAttributeSetter(v8_value, info);
}

void V8DOMMatrix::EAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMMatrix_e_Getter");

  dom_matrix_v8_internal::EAttributeGetter(info);
}

void V8DOMMatrix::EAttributeSetterCallback(
    const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMMatrix_e_Setter");

  v8::Local<v8::Value> v8_value = info[0];

  dom_matrix_v8_internal::EAttributeSetter(v8_value, info);
}

void V8DOMMatrix::FAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMMatrix_f_Getter");

  dom_matrix_v8_internal::FAttributeGetter(info);
}

void V8DOMMatrix::FAttributeSetterCallback(
    const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMMatrix_f_Setter");

  v8::Local<v8::Value> v8_value = info[0];

  dom_matrix_v8_internal::FAttributeSetter(v8_value, info);
}

void V8DOMMatrix::M11AttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMMatrix_m11_Getter");

  dom_matrix_v8_internal::M11AttributeGetter(info);
}

void V8DOMMatrix::M11AttributeSetterCallback(
    const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMMatrix_m11_Setter");

  v8::Local<v8::Value> v8_value = info[0];

  dom_matrix_v8_internal::M11AttributeSetter(v8_value, info);
}

void V8DOMMatrix::M12AttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMMatrix_m12_Getter");

  dom_matrix_v8_internal::M12AttributeGetter(info);
}

void V8DOMMatrix::M12AttributeSetterCallback(
    const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMMatrix_m12_Setter");

  v8::Local<v8::Value> v8_value = info[0];

  dom_matrix_v8_internal::M12AttributeSetter(v8_value, info);
}

void V8DOMMatrix::M13AttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMMatrix_m13_Getter");

  dom_matrix_v8_internal::M13AttributeGetter(info);
}

void V8DOMMatrix::M13AttributeSetterCallback(
    const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMMatrix_m13_Setter");

  v8::Local<v8::Value> v8_value = info[0];

  dom_matrix_v8_internal::M13AttributeSetter(v8_value, info);
}

void V8DOMMatrix::M14AttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMMatrix_m14_Getter");

  dom_matrix_v8_internal::M14AttributeGetter(info);
}

void V8DOMMatrix::M14AttributeSetterCallback(
    const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMMatrix_m14_Setter");

  v8::Local<v8::Value> v8_value = info[0];

  dom_matrix_v8_internal::M14AttributeSetter(v8_value, info);
}

void V8DOMMatrix::M21AttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMMatrix_m21_Getter");

  dom_matrix_v8_internal::M21AttributeGetter(info);
}

void V8DOMMatrix::M21AttributeSetterCallback(
    const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMMatrix_m21_Setter");

  v8::Local<v8::Value> v8_value = info[0];

  dom_matrix_v8_internal::M21AttributeSetter(v8_value, info);
}

void V8DOMMatrix::M22AttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMMatrix_m22_Getter");

  dom_matrix_v8_internal::M22AttributeGetter(info);
}

void V8DOMMatrix::M22AttributeSetterCallback(
    const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMMatrix_m22_Setter");

  v8::Local<v8::Value> v8_value = info[0];

  dom_matrix_v8_internal::M22AttributeSetter(v8_value, info);
}

void V8DOMMatrix::M23AttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMMatrix_m23_Getter");

  dom_matrix_v8_internal::M23AttributeGetter(info);
}

void V8DOMMatrix::M23AttributeSetterCallback(
    const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMMatrix_m23_Setter");

  v8::Local<v8::Value> v8_value = info[0];

  dom_matrix_v8_internal::M23AttributeSetter(v8_value, info);
}

void V8DOMMatrix::M24AttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMMatrix_m24_Getter");

  dom_matrix_v8_internal::M24AttributeGetter(info);
}

void V8DOMMatrix::M24AttributeSetterCallback(
    const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMMatrix_m24_Setter");

  v8::Local<v8::Value> v8_value = info[0];

  dom_matrix_v8_internal::M24AttributeSetter(v8_value, info);
}

void V8DOMMatrix::M31AttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMMatrix_m31_Getter");

  dom_matrix_v8_internal::M31AttributeGetter(info);
}

void V8DOMMatrix::M31AttributeSetterCallback(
    const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMMatrix_m31_Setter");

  v8::Local<v8::Value> v8_value = info[0];

  dom_matrix_v8_internal::M31AttributeSetter(v8_value, info);
}

void V8DOMMatrix::M32AttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMMatrix_m32_Getter");

  dom_matrix_v8_internal::M32AttributeGetter(info);
}

void V8DOMMatrix::M32AttributeSetterCallback(
    const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMMatrix_m32_Setter");

  v8::Local<v8::Value> v8_value = info[0];

  dom_matrix_v8_internal::M32AttributeSetter(v8_value, info);
}

void V8DOMMatrix::M33AttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMMatrix_m33_Getter");

  dom_matrix_v8_internal::M33AttributeGetter(info);
}

void V8DOMMatrix::M33AttributeSetterCallback(
    const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMMatrix_m33_Setter");

  v8::Local<v8::Value> v8_value = info[0];

  dom_matrix_v8_internal::M33AttributeSetter(v8_value, info);
}

void V8DOMMatrix::M34AttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMMatrix_m34_Getter");

  dom_matrix_v8_internal::M34AttributeGetter(info);
}

void V8DOMMatrix::M34AttributeSetterCallback(
    const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMMatrix_m34_Setter");

  v8::Local<v8::Value> v8_value = info[0];

  dom_matrix_v8_internal::M34AttributeSetter(v8_value, info);
}

void V8DOMMatrix::M41AttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMMatrix_m41_Getter");

  dom_matrix_v8_internal::M41AttributeGetter(info);
}

void V8DOMMatrix::M41AttributeSetterCallback(
    const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMMatrix_m41_Setter");

  v8::Local<v8::Value> v8_value = info[0];

  dom_matrix_v8_internal::M41AttributeSetter(v8_value, info);
}

void V8DOMMatrix::M42AttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMMatrix_m42_Getter");

  dom_matrix_v8_internal::M42AttributeGetter(info);
}

void V8DOMMatrix::M42AttributeSetterCallback(
    const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMMatrix_m42_Setter");

  v8::Local<v8::Value> v8_value = info[0];

  dom_matrix_v8_internal::M42AttributeSetter(v8_value, info);
}

void V8DOMMatrix::M43AttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMMatrix_m43_Getter");

  dom_matrix_v8_internal::M43AttributeGetter(info);
}

void V8DOMMatrix::M43AttributeSetterCallback(
    const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMMatrix_m43_Setter");

  v8::Local<v8::Value> v8_value = info[0];

  dom_matrix_v8_internal::M43AttributeSetter(v8_value, info);
}

void V8DOMMatrix::M44AttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMMatrix_m44_Getter");

  dom_matrix_v8_internal::M44AttributeGetter(info);
}

void V8DOMMatrix::M44AttributeSetterCallback(
    const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMMatrix_m44_Setter");

  v8::Local<v8::Value> v8_value = info[0];

  dom_matrix_v8_internal::M44AttributeSetter(v8_value, info);
}

void V8DOMMatrix::FromMatrixMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMMatrix_fromMatrix");

  dom_matrix_v8_internal::FromMatrixMethod(info);
}

void V8DOMMatrix::FromFloat32ArrayMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMMatrix_fromFloat32Array");

  dom_matrix_v8_internal::FromFloat32ArrayMethod(info);
}

void V8DOMMatrix::FromFloat64ArrayMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMMatrix_fromFloat64Array");

  dom_matrix_v8_internal::FromFloat64ArrayMethod(info);
}

void V8DOMMatrix::MultiplySelfMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMMatrix_multiplySelf");

  dom_matrix_v8_internal::MultiplySelfMethod(info);
}

void V8DOMMatrix::PreMultiplySelfMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMMatrix_preMultiplySelf");

  dom_matrix_v8_internal::PreMultiplySelfMethod(info);
}

void V8DOMMatrix::TranslateSelfMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMMatrix_translateSelf");

  dom_matrix_v8_internal::TranslateSelfMethod(info);
}

void V8DOMMatrix::ScaleSelfMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMMatrix_scaleSelf");

  dom_matrix_v8_internal::ScaleSelfMethod(info);
}

void V8DOMMatrix::Scale3dSelfMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMMatrix_scale3dSelf");

  dom_matrix_v8_internal::Scale3dSelfMethod(info);
}

void V8DOMMatrix::RotateSelfMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMMatrix_rotateSelf");

  dom_matrix_v8_internal::RotateSelfMethod(info);
}

void V8DOMMatrix::RotateFromVectorSelfMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMMatrix_rotateFromVectorSelf");

  dom_matrix_v8_internal::RotateFromVectorSelfMethod(info);
}

void V8DOMMatrix::RotateAxisAngleSelfMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMMatrix_rotateAxisAngleSelf");

  dom_matrix_v8_internal::RotateAxisAngleSelfMethod(info);
}

void V8DOMMatrix::SkewXSelfMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMMatrix_skewXSelf");

  dom_matrix_v8_internal::SkewXSelfMethod(info);
}

void V8DOMMatrix::SkewYSelfMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMMatrix_skewYSelf");

  dom_matrix_v8_internal::SkewYSelfMethod(info);
}

void V8DOMMatrix::InvertSelfMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMMatrix_invertSelf");

  dom_matrix_v8_internal::InvertSelfMethod(info);
}

void V8DOMMatrix::SetMatrixValueMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMMatrix_setMatrixValue");

  dom_matrix_v8_internal::SetMatrixValueMethod(info);
}

static constexpr V8DOMConfiguration::AccessorConfiguration kV8DOMMatrixAccessors[] = {
    { "a", V8DOMMatrix::AAttributeGetterCallback, V8DOMMatrix::AAttributeSetterCallback, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
    { "b", V8DOMMatrix::BAttributeGetterCallback, V8DOMMatrix::BAttributeSetterCallback, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
    { "c", V8DOMMatrix::CAttributeGetterCallback, V8DOMMatrix::CAttributeSetterCallback, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
    { "d", V8DOMMatrix::DAttributeGetterCallback, V8DOMMatrix::DAttributeSetterCallback, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
    { "e", V8DOMMatrix::EAttributeGetterCallback, V8DOMMatrix::EAttributeSetterCallback, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
    { "f", V8DOMMatrix::FAttributeGetterCallback, V8DOMMatrix::FAttributeSetterCallback, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
    { "m11", V8DOMMatrix::M11AttributeGetterCallback, V8DOMMatrix::M11AttributeSetterCallback, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
    { "m12", V8DOMMatrix::M12AttributeGetterCallback, V8DOMMatrix::M12AttributeSetterCallback, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
    { "m13", V8DOMMatrix::M13AttributeGetterCallback, V8DOMMatrix::M13AttributeSetterCallback, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
    { "m14", V8DOMMatrix::M14AttributeGetterCallback, V8DOMMatrix::M14AttributeSetterCallback, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
    { "m21", V8DOMMatrix::M21AttributeGetterCallback, V8DOMMatrix::M21AttributeSetterCallback, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
    { "m22", V8DOMMatrix::M22AttributeGetterCallback, V8DOMMatrix::M22AttributeSetterCallback, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
    { "m23", V8DOMMatrix::M23AttributeGetterCallback, V8DOMMatrix::M23AttributeSetterCallback, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
    { "m24", V8DOMMatrix::M24AttributeGetterCallback, V8DOMMatrix::M24AttributeSetterCallback, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
    { "m31", V8DOMMatrix::M31AttributeGetterCallback, V8DOMMatrix::M31AttributeSetterCallback, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
    { "m32", V8DOMMatrix::M32AttributeGetterCallback, V8DOMMatrix::M32AttributeSetterCallback, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
    { "m33", V8DOMMatrix::M33AttributeGetterCallback, V8DOMMatrix::M33AttributeSetterCallback, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
    { "m34", V8DOMMatrix::M34AttributeGetterCallback, V8DOMMatrix::M34AttributeSetterCallback, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
    { "m41", V8DOMMatrix::M41AttributeGetterCallback, V8DOMMatrix::M41AttributeSetterCallback, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
    { "m42", V8DOMMatrix::M42AttributeGetterCallback, V8DOMMatrix::M42AttributeSetterCallback, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
    { "m43", V8DOMMatrix::M43AttributeGetterCallback, V8DOMMatrix::M43AttributeSetterCallback, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
    { "m44", V8DOMMatrix::M44AttributeGetterCallback, V8DOMMatrix::M44AttributeSetterCallback, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
};

static constexpr V8DOMConfiguration::MethodConfiguration kV8DOMMatrixMethods[] = {
    {"fromMatrix", V8DOMMatrix::FromMatrixMethodCallback, 0, v8::None, V8DOMConfiguration::kOnInterface, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"fromFloat32Array", V8DOMMatrix::FromFloat32ArrayMethodCallback, 1, v8::None, V8DOMConfiguration::kOnInterface, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"fromFloat64Array", V8DOMMatrix::FromFloat64ArrayMethodCallback, 1, v8::None, V8DOMConfiguration::kOnInterface, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"multiplySelf", V8DOMMatrix::MultiplySelfMethodCallback, 0, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"preMultiplySelf", V8DOMMatrix::PreMultiplySelfMethodCallback, 0, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"translateSelf", V8DOMMatrix::TranslateSelfMethodCallback, 0, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"scaleSelf", V8DOMMatrix::ScaleSelfMethodCallback, 0, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"scale3dSelf", V8DOMMatrix::Scale3dSelfMethodCallback, 0, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"rotateSelf", V8DOMMatrix::RotateSelfMethodCallback, 0, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"rotateFromVectorSelf", V8DOMMatrix::RotateFromVectorSelfMethodCallback, 0, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"rotateAxisAngleSelf", V8DOMMatrix::RotateAxisAngleSelfMethodCallback, 0, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"skewXSelf", V8DOMMatrix::SkewXSelfMethodCallback, 0, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"skewYSelf", V8DOMMatrix::SkewYSelfMethodCallback, 0, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"invertSelf", V8DOMMatrix::InvertSelfMethodCallback, 0, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
};

static void InstallV8DOMMatrixTemplate(
    v8::Isolate* isolate,
    const DOMWrapperWorld& world,
    v8::Local<v8::FunctionTemplate> interface_template) {
  // Initialize the interface object's template.
  V8DOMConfiguration::InitializeDOMInterfaceTemplate(isolate, interface_template, V8DOMMatrix::GetWrapperTypeInfo()->interface_name, V8DOMMatrixReadOnly::DomTemplate(isolate, world), V8DOMMatrix::kInternalFieldCount);
  interface_template->SetCallHandler(dom_matrix_v8_internal::ConstructorCallback);
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
      signature, kV8DOMMatrixAccessors, base::size(kV8DOMMatrixAccessors));
  V8DOMConfiguration::InstallMethods(
      isolate, world, instance_template, prototype_template, interface_template,
      signature, kV8DOMMatrixMethods, base::size(kV8DOMMatrixMethods));

  // Custom signature

  V8DOMMatrix::InstallRuntimeEnabledFeaturesOnTemplate(
      isolate, world, interface_template);
}

void V8DOMMatrix::InstallRuntimeEnabledFeaturesOnTemplate(
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

v8::Local<v8::FunctionTemplate> V8DOMMatrix::DomTemplate(
    v8::Isolate* isolate, const DOMWrapperWorld& world) {
  return V8DOMConfiguration::DomClassTemplate(
      isolate, world, const_cast<WrapperTypeInfo*>(V8DOMMatrix::GetWrapperTypeInfo()),
      InstallV8DOMMatrixTemplate);
}

bool V8DOMMatrix::HasInstance(v8::Local<v8::Value> v8_value, v8::Isolate* isolate) {
  return V8PerIsolateData::From(isolate)->HasInstance(V8DOMMatrix::GetWrapperTypeInfo(), v8_value);
}

v8::Local<v8::Object> V8DOMMatrix::FindInstanceInPrototypeChain(
    v8::Local<v8::Value> v8_value, v8::Isolate* isolate) {
  return V8PerIsolateData::From(isolate)->FindInstanceInPrototypeChain(
      V8DOMMatrix::GetWrapperTypeInfo(), v8_value);
}

DOMMatrix* V8DOMMatrix::ToImplWithTypeCheck(
    v8::Isolate* isolate, v8::Local<v8::Value> value) {
  return HasInstance(value, isolate) ? ToImpl(v8::Local<v8::Object>::Cast(value)) : nullptr;
}

DOMMatrix* NativeValueTraits<DOMMatrix>::NativeValue(
    v8::Isolate* isolate, v8::Local<v8::Value> value, ExceptionState& exception_state) {
  DOMMatrix* native_value = V8DOMMatrix::ToImplWithTypeCheck(isolate, value);
  if (!native_value) {
    exception_state.ThrowTypeError(ExceptionMessages::FailedToConvertJSValue(
        "DOMMatrix"));
  }
  return native_value;
}

void V8DOMMatrix::InstallConditionalFeatures(
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
        // Install setMatrixValue configuration
        const V8DOMConfiguration::MethodConfiguration kConfigurations[] = {
            {"setMatrixValue", V8DOMMatrix::SetMatrixValueMethodCallback, 1, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds}
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
