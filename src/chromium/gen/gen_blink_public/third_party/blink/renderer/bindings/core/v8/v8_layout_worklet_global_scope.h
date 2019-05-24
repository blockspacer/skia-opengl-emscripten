// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated from the Jinja2 template
// third_party/blink/renderer/bindings/templates/interface.h.tmpl
// by the script code_generator_v8.py.
// DO NOT MODIFY!

// clang-format off
#ifndef THIRD_PARTY_BLINK_RENDERER_BINDINGS_CORE_V8_V8_LAYOUT_WORKLET_GLOBAL_SCOPE_H_
#define THIRD_PARTY_BLINK_RENDERER_BINDINGS_CORE_V8_V8_LAYOUT_WORKLET_GLOBAL_SCOPE_H_

#include "third_party/blink/renderer/bindings/core/v8/generated_code_helper.h"
#include "third_party/blink/renderer/bindings/core/v8/native_value_traits.h"
#include "third_party/blink/renderer/bindings/core/v8/to_v8_for_core.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_binding_for_core.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_worklet_global_scope.h"
#include "third_party/blink/renderer/core/core_export.h"
#include "third_party/blink/renderer/core/layout/custom/layout_worklet_global_scope.h"
#include "third_party/blink/renderer/platform/bindings/script_wrappable.h"
#include "third_party/blink/renderer/platform/bindings/v8_dom_wrapper.h"
#include "third_party/blink/renderer/platform/bindings/wrapper_type_info.h"
#include "third_party/blink/renderer/platform/heap/handle.h"

namespace blink {

CORE_EXPORT extern const WrapperTypeInfo v8_layout_worklet_global_scope_wrapper_type_info;

class V8LayoutWorkletGlobalScope {
  STATIC_ONLY(V8LayoutWorkletGlobalScope);
 public:
  CORE_EXPORT static bool HasInstance(v8::Local<v8::Value>, v8::Isolate*);
  static v8::Local<v8::Object> FindInstanceInPrototypeChain(v8::Local<v8::Value>, v8::Isolate*);
  CORE_EXPORT static v8::Local<v8::FunctionTemplate> DomTemplate(v8::Isolate*, const DOMWrapperWorld&);
  static LayoutWorkletGlobalScope* ToImpl(v8::Local<v8::Object> object) {
    return ToScriptWrappable(object)->ToImpl<LayoutWorkletGlobalScope>();
  }
  CORE_EXPORT static LayoutWorkletGlobalScope* ToImplWithTypeCheck(v8::Isolate*, v8::Local<v8::Value>);

  CORE_EXPORT static constexpr const WrapperTypeInfo* GetWrapperTypeInfo() {
    return &v8_layout_worklet_global_scope_wrapper_type_info;
  }

  static constexpr int kInternalFieldCount = kV8DefaultWrapperInternalFieldCount;

  // Callback functions

  CORE_EXPORT static void LayoutChildConstructorGetterCallback(v8::Local<v8::Name>, const v8::PropertyCallbackInfo<v8::Value>&);
  CORE_EXPORT static void LayoutConstraintsConstructorGetterCallback(v8::Local<v8::Name>, const v8::PropertyCallbackInfo<v8::Value>&);
  CORE_EXPORT static void LayoutFragmentConstructorGetterCallback(v8::Local<v8::Name>, const v8::PropertyCallbackInfo<v8::Value>&);
  CORE_EXPORT static void LayoutFragmentRequestConstructorGetterCallback(v8::Local<v8::Name>, const v8::PropertyCallbackInfo<v8::Value>&);
  CORE_EXPORT static void LayoutWorkletGlobalScopeConstructorGetterCallback(v8::Local<v8::Name>, const v8::PropertyCallbackInfo<v8::Value>&);
  CORE_EXPORT static void ReadableStreamDefaultReaderConstructorGetterCallback(v8::Local<v8::Name>, const v8::PropertyCallbackInfo<v8::Value>&);
  CORE_EXPORT static void WritableStreamDefaultWriterConstructorGetterCallback(v8::Local<v8::Name>, const v8::PropertyCallbackInfo<v8::Value>&);
  CORE_EXPORT static void CSSImageValueConstructorGetterCallback(v8::Local<v8::Name>, const v8::PropertyCallbackInfo<v8::Value>&);
  CORE_EXPORT static void CSSKeywordValueConstructorGetterCallback(v8::Local<v8::Name>, const v8::PropertyCallbackInfo<v8::Value>&);
  CORE_EXPORT static void CSSMathInvertConstructorGetterCallback(v8::Local<v8::Name>, const v8::PropertyCallbackInfo<v8::Value>&);
  CORE_EXPORT static void CSSMathMaxConstructorGetterCallback(v8::Local<v8::Name>, const v8::PropertyCallbackInfo<v8::Value>&);
  CORE_EXPORT static void CSSMathMinConstructorGetterCallback(v8::Local<v8::Name>, const v8::PropertyCallbackInfo<v8::Value>&);
  CORE_EXPORT static void CSSMathNegateConstructorGetterCallback(v8::Local<v8::Name>, const v8::PropertyCallbackInfo<v8::Value>&);
  CORE_EXPORT static void CSSMathProductConstructorGetterCallback(v8::Local<v8::Name>, const v8::PropertyCallbackInfo<v8::Value>&);
  CORE_EXPORT static void CSSMathSumConstructorGetterCallback(v8::Local<v8::Name>, const v8::PropertyCallbackInfo<v8::Value>&);
  CORE_EXPORT static void CSSMathValueConstructorGetterCallback(v8::Local<v8::Name>, const v8::PropertyCallbackInfo<v8::Value>&);
  CORE_EXPORT static void CSSMatrixComponentConstructorGetterCallback(v8::Local<v8::Name>, const v8::PropertyCallbackInfo<v8::Value>&);
  CORE_EXPORT static void CSSNumericArrayConstructorGetterCallback(v8::Local<v8::Name>, const v8::PropertyCallbackInfo<v8::Value>&);
  CORE_EXPORT static void CSSNumericValueConstructorGetterCallback(v8::Local<v8::Name>, const v8::PropertyCallbackInfo<v8::Value>&);
  CORE_EXPORT static void CSSPerspectiveConstructorGetterCallback(v8::Local<v8::Name>, const v8::PropertyCallbackInfo<v8::Value>&);
  CORE_EXPORT static void CSSPositionValueConstructorGetterCallback(v8::Local<v8::Name>, const v8::PropertyCallbackInfo<v8::Value>&);
  CORE_EXPORT static void CSSRotateConstructorGetterCallback(v8::Local<v8::Name>, const v8::PropertyCallbackInfo<v8::Value>&);
  CORE_EXPORT static void CSSScaleConstructorGetterCallback(v8::Local<v8::Name>, const v8::PropertyCallbackInfo<v8::Value>&);
  CORE_EXPORT static void CSSSkewConstructorGetterCallback(v8::Local<v8::Name>, const v8::PropertyCallbackInfo<v8::Value>&);
  CORE_EXPORT static void CSSSkewXConstructorGetterCallback(v8::Local<v8::Name>, const v8::PropertyCallbackInfo<v8::Value>&);
  CORE_EXPORT static void CSSSkewYConstructorGetterCallback(v8::Local<v8::Name>, const v8::PropertyCallbackInfo<v8::Value>&);
  CORE_EXPORT static void CSSStyleValueConstructorGetterCallback(v8::Local<v8::Name>, const v8::PropertyCallbackInfo<v8::Value>&);
  CORE_EXPORT static void CSSTransformComponentConstructorGetterCallback(v8::Local<v8::Name>, const v8::PropertyCallbackInfo<v8::Value>&);
  CORE_EXPORT static void CSSTransformValueConstructorGetterCallback(v8::Local<v8::Name>, const v8::PropertyCallbackInfo<v8::Value>&);
  CORE_EXPORT static void CSSTranslateConstructorGetterCallback(v8::Local<v8::Name>, const v8::PropertyCallbackInfo<v8::Value>&);
  CORE_EXPORT static void CSSUnitValueConstructorGetterCallback(v8::Local<v8::Name>, const v8::PropertyCallbackInfo<v8::Value>&);
  CORE_EXPORT static void CSSUnparsedValueConstructorGetterCallback(v8::Local<v8::Name>, const v8::PropertyCallbackInfo<v8::Value>&);
  CORE_EXPORT static void CSSVariableReferenceValueConstructorGetterCallback(v8::Local<v8::Name>, const v8::PropertyCallbackInfo<v8::Value>&);
  CORE_EXPORT static void ReadableStreamConstructorGetterCallback(v8::Local<v8::Name>, const v8::PropertyCallbackInfo<v8::Value>&);
  CORE_EXPORT static void StylePropertyMapReadOnlyConstructorGetterCallback(v8::Local<v8::Name>, const v8::PropertyCallbackInfo<v8::Value>&);
  CORE_EXPORT static void TransformStreamConstructorGetterCallback(v8::Local<v8::Name>, const v8::PropertyCallbackInfo<v8::Value>&);
  CORE_EXPORT static void WorkletGlobalScopeConstructorGetterCallback(v8::Local<v8::Name>, const v8::PropertyCallbackInfo<v8::Value>&);
  CORE_EXPORT static void WritableStreamConstructorGetterCallback(v8::Local<v8::Name>, const v8::PropertyCallbackInfo<v8::Value>&);

  CORE_EXPORT static void RegisterLayoutMethodCallback(const v8::FunctionCallbackInfo<v8::Value>&);

  static void InstallRuntimeEnabledFeaturesOnTemplate(
      v8::Isolate*,
      const DOMWrapperWorld&,
      v8::Local<v8::FunctionTemplate> interface_template);
};

template <>
struct NativeValueTraits<LayoutWorkletGlobalScope> : public NativeValueTraitsBase<LayoutWorkletGlobalScope> {
  CORE_EXPORT static LayoutWorkletGlobalScope* NativeValue(v8::Isolate*, v8::Local<v8::Value>, ExceptionState&);
  CORE_EXPORT static LayoutWorkletGlobalScope* NullValue() { return nullptr; }
};

template <>
struct V8TypeOf<LayoutWorkletGlobalScope> {
  typedef V8LayoutWorkletGlobalScope Type;
};

}  // namespace blink

#endif  // THIRD_PARTY_BLINK_RENDERER_BINDINGS_CORE_V8_V8_LAYOUT_WORKLET_GLOBAL_SCOPE_H_
