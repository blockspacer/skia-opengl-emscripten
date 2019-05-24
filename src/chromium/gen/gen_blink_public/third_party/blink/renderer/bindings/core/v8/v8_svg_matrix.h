// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated from the Jinja2 template
// third_party/blink/renderer/bindings/templates/interface.h.tmpl
// by the script code_generator_v8.py.
// DO NOT MODIFY!

// clang-format off
#ifndef THIRD_PARTY_BLINK_RENDERER_BINDINGS_CORE_V8_V8_SVG_MATRIX_H_
#define THIRD_PARTY_BLINK_RENDERER_BINDINGS_CORE_V8_V8_SVG_MATRIX_H_

#include "third_party/blink/renderer/bindings/core/v8/generated_code_helper.h"
#include "third_party/blink/renderer/bindings/core/v8/native_value_traits.h"
#include "third_party/blink/renderer/bindings/core/v8/to_v8_for_core.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_binding_for_core.h"
#include "third_party/blink/renderer/core/core_export.h"
#include "third_party/blink/renderer/core/svg/svg_matrix_tear_off.h"
#include "third_party/blink/renderer/platform/bindings/script_wrappable.h"
#include "third_party/blink/renderer/platform/bindings/v8_dom_wrapper.h"
#include "third_party/blink/renderer/platform/bindings/wrapper_type_info.h"
#include "third_party/blink/renderer/platform/heap/handle.h"

namespace blink {

CORE_EXPORT extern const WrapperTypeInfo v8_svg_matrix_wrapper_type_info;

class V8SVGMatrix {
  STATIC_ONLY(V8SVGMatrix);
 public:
  CORE_EXPORT static bool HasInstance(v8::Local<v8::Value>, v8::Isolate*);
  static v8::Local<v8::Object> FindInstanceInPrototypeChain(v8::Local<v8::Value>, v8::Isolate*);
  CORE_EXPORT static v8::Local<v8::FunctionTemplate> DomTemplate(v8::Isolate*, const DOMWrapperWorld&);
  static SVGMatrixTearOff* ToImpl(v8::Local<v8::Object> object) {
    return ToScriptWrappable(object)->ToImpl<SVGMatrixTearOff>();
  }
  CORE_EXPORT static SVGMatrixTearOff* ToImplWithTypeCheck(v8::Isolate*, v8::Local<v8::Value>);

  CORE_EXPORT static constexpr const WrapperTypeInfo* GetWrapperTypeInfo() {
    return &v8_svg_matrix_wrapper_type_info;
  }

  static constexpr int kInternalFieldCount = kV8DefaultWrapperInternalFieldCount;

  // Callback functions

  CORE_EXPORT static void AAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  CORE_EXPORT static void AAttributeSetterCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  CORE_EXPORT static void BAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  CORE_EXPORT static void BAttributeSetterCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  CORE_EXPORT static void CAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  CORE_EXPORT static void CAttributeSetterCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  CORE_EXPORT static void DAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  CORE_EXPORT static void DAttributeSetterCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  CORE_EXPORT static void EAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  CORE_EXPORT static void EAttributeSetterCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  CORE_EXPORT static void FAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  CORE_EXPORT static void FAttributeSetterCallback(const v8::FunctionCallbackInfo<v8::Value>&);

  CORE_EXPORT static void MultiplyMethodCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  CORE_EXPORT static void InverseMethodCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  CORE_EXPORT static void TranslateMethodCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  CORE_EXPORT static void ScaleMethodCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  CORE_EXPORT static void ScaleNonUniformMethodCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  CORE_EXPORT static void RotateMethodCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  CORE_EXPORT static void RotateFromVectorMethodCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  CORE_EXPORT static void FlipXMethodCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  CORE_EXPORT static void FlipYMethodCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  CORE_EXPORT static void SkewXMethodCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  CORE_EXPORT static void SkewYMethodCallback(const v8::FunctionCallbackInfo<v8::Value>&);

  static void InstallRuntimeEnabledFeaturesOnTemplate(
      v8::Isolate*,
      const DOMWrapperWorld&,
      v8::Local<v8::FunctionTemplate> interface_template);
};

template <>
struct NativeValueTraits<SVGMatrixTearOff> : public NativeValueTraitsBase<SVGMatrixTearOff> {
  CORE_EXPORT static SVGMatrixTearOff* NativeValue(v8::Isolate*, v8::Local<v8::Value>, ExceptionState&);
  CORE_EXPORT static SVGMatrixTearOff* NullValue() { return nullptr; }
};

template <>
struct V8TypeOf<SVGMatrixTearOff> {
  typedef V8SVGMatrix Type;
};

}  // namespace blink

#endif  // THIRD_PARTY_BLINK_RENDERER_BINDINGS_CORE_V8_V8_SVG_MATRIX_H_
