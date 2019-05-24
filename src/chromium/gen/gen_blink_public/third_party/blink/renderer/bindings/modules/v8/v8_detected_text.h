// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated from the Jinja2 template
// third_party/blink/renderer/bindings/templates/interface.h.tmpl
// by the script code_generator_v8.py.
// DO NOT MODIFY!

// clang-format off
#ifndef THIRD_PARTY_BLINK_RENDERER_BINDINGS_MODULES_V8_V8_DETECTED_TEXT_H_
#define THIRD_PARTY_BLINK_RENDERER_BINDINGS_MODULES_V8_V8_DETECTED_TEXT_H_

#include "third_party/blink/renderer/bindings/core/v8/generated_code_helper.h"
#include "third_party/blink/renderer/bindings/core/v8/native_value_traits.h"
#include "third_party/blink/renderer/bindings/core/v8/to_v8_for_core.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_binding_for_core.h"
#include "third_party/blink/renderer/modules/modules_export.h"
#include "third_party/blink/renderer/modules/shapedetection/detected_text.h"
#include "third_party/blink/renderer/platform/bindings/script_wrappable.h"
#include "third_party/blink/renderer/platform/bindings/v8_dom_wrapper.h"
#include "third_party/blink/renderer/platform/bindings/wrapper_type_info.h"
#include "third_party/blink/renderer/platform/heap/handle.h"

namespace blink {

MODULES_EXPORT extern const WrapperTypeInfo v8_detected_text_wrapper_type_info;

class V8DetectedText {
  STATIC_ONLY(V8DetectedText);
 public:
  MODULES_EXPORT static bool HasInstance(v8::Local<v8::Value>, v8::Isolate*);
  static v8::Local<v8::Object> FindInstanceInPrototypeChain(v8::Local<v8::Value>, v8::Isolate*);
  MODULES_EXPORT static v8::Local<v8::FunctionTemplate> DomTemplate(v8::Isolate*, const DOMWrapperWorld&);
  static DetectedText* ToImpl(v8::Local<v8::Object> object) {
    return ToScriptWrappable(object)->ToImpl<DetectedText>();
  }
  MODULES_EXPORT static DetectedText* ToImplWithTypeCheck(v8::Isolate*, v8::Local<v8::Value>);

  MODULES_EXPORT static constexpr const WrapperTypeInfo* GetWrapperTypeInfo() {
    return &v8_detected_text_wrapper_type_info;
  }

  static constexpr int kInternalFieldCount = kV8DefaultWrapperInternalFieldCount;

  // Callback functions

  MODULES_EXPORT static void RawValueAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  MODULES_EXPORT static void BoundingBoxAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  MODULES_EXPORT static void CornerPointsAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>&);

  MODULES_EXPORT static void ToJSONMethodCallback(const v8::FunctionCallbackInfo<v8::Value>&);

  static void InstallRuntimeEnabledFeaturesOnTemplate(
      v8::Isolate*,
      const DOMWrapperWorld&,
      v8::Local<v8::FunctionTemplate> interface_template);
};

template <>
struct NativeValueTraits<DetectedText> : public NativeValueTraitsBase<DetectedText> {
  MODULES_EXPORT static DetectedText* NativeValue(v8::Isolate*, v8::Local<v8::Value>, ExceptionState&);
  MODULES_EXPORT static DetectedText* NullValue() { return nullptr; }
};

template <>
struct V8TypeOf<DetectedText> {
  typedef V8DetectedText Type;
};

}  // namespace blink

#endif  // THIRD_PARTY_BLINK_RENDERER_BINDINGS_MODULES_V8_V8_DETECTED_TEXT_H_
