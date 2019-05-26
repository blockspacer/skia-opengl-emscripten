// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated from the Jinja2 template
// third_party/blink/renderer/bindings/templates/interface.h.tmpl
// by the script code_generator_v8.py.
// DO NOT MODIFY!

// clang-format off
#ifndef THIRD_PARTY_BLINK_RENDERER_BINDINGS_CORE_V8_V8_TYPE_CONVERSIONS_H_
#define THIRD_PARTY_BLINK_RENDERER_BINDINGS_CORE_V8_V8_TYPE_CONVERSIONS_H_

#include "third_party/blink/renderer/bindings/core/v8/generated_code_helper.h"
#include "third_party/blink/renderer/bindings/core/v8/native_value_traits.h"
#include "third_party/blink/renderer/bindings/core/v8/to_v8_for_core.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_binding_for_core.h"
#include "third_party/blink/renderer/core/testing/type_conversions.h"
#include "third_party/blink/renderer/platform/bindings/script_wrappable.h"
#include "third_party/blink/renderer/platform/bindings/v8_dom_wrapper.h"
#include "third_party/blink/renderer/platform/bindings/wrapper_type_info.h"
#include "third_party/blink/renderer/platform/heap/handle.h"

namespace blink {

extern const WrapperTypeInfo v8_type_conversions_wrapper_type_info;

class V8TypeConversions {
  STATIC_ONLY(V8TypeConversions);
 public:
  static bool HasInstance(v8::Local<v8::Value>, v8::Isolate*);
  static v8::Local<v8::Object> FindInstanceInPrototypeChain(v8::Local<v8::Value>, v8::Isolate*);
  static v8::Local<v8::FunctionTemplate> DomTemplate(v8::Isolate*, const DOMWrapperWorld&);
  static TypeConversions* ToImpl(v8::Local<v8::Object> object) {
    return ToScriptWrappable(object)->ToImpl<TypeConversions>();
  }
  static TypeConversions* ToImplWithTypeCheck(v8::Isolate*, v8::Local<v8::Value>);

  static constexpr const WrapperTypeInfo* GetWrapperTypeInfo() {
    return &v8_type_conversions_wrapper_type_info;
  }

  static constexpr int kInternalFieldCount = kV8DefaultWrapperInternalFieldCount;

  // Callback functions

  static void TestLongAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  static void TestLongAttributeSetterCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  static void TestEnforceRangeLongAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  static void TestEnforceRangeLongAttributeSetterCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  static void TestUnsignedLongAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  static void TestUnsignedLongAttributeSetterCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  static void TestEnforceRangeUnsignedLongAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  static void TestEnforceRangeUnsignedLongAttributeSetterCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  static void TestLongLongAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  static void TestLongLongAttributeSetterCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  static void TestEnforceRangeLongLongAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  static void TestEnforceRangeLongLongAttributeSetterCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  static void TestUnsignedLongLongAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  static void TestUnsignedLongLongAttributeSetterCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  static void TestEnforceRangeUnsignedLongLongAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  static void TestEnforceRangeUnsignedLongLongAttributeSetterCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  static void TestByteAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  static void TestByteAttributeSetterCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  static void TestEnforceRangeByteAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  static void TestEnforceRangeByteAttributeSetterCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  static void TestOctetAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  static void TestOctetAttributeSetterCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  static void TestEnforceRangeOctetAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  static void TestEnforceRangeOctetAttributeSetterCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  static void TestShortAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  static void TestShortAttributeSetterCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  static void TestEnforceRangeShortAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  static void TestEnforceRangeShortAttributeSetterCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  static void TestUnsignedShortAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  static void TestUnsignedShortAttributeSetterCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  static void TestEnforceRangeUnsignedShortAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  static void TestEnforceRangeUnsignedShortAttributeSetterCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  static void TestByteStringAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  static void TestByteStringAttributeSetterCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  static void TestUSVStringAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  static void TestUSVStringAttributeSetterCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  static void TestUSVStringOrNullAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  static void TestUSVStringOrNullAttributeSetterCallback(const v8::FunctionCallbackInfo<v8::Value>&);

  static void SetTestByteStringMethodCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  static void SetTestByteStringDefaultNullMethodCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  static void SetTestUSVStringMethodCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  static void SetTestUSVStringDefaultNullMethodCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  static void SetTestUSVStringOrNullMethodCallback(const v8::FunctionCallbackInfo<v8::Value>&);

  static void InstallRuntimeEnabledFeaturesOnTemplate(
      v8::Isolate*,
      const DOMWrapperWorld&,
      v8::Local<v8::FunctionTemplate> interface_template);
};

template <>
struct NativeValueTraits<TypeConversions> : public NativeValueTraitsBase<TypeConversions> {
  static TypeConversions* NativeValue(v8::Isolate*, v8::Local<v8::Value>, ExceptionState&);
  static TypeConversions* NullValue() { return nullptr; }
};

template <>
struct V8TypeOf<TypeConversions> {
  typedef V8TypeConversions Type;
};

}  // namespace blink

#endif  // THIRD_PARTY_BLINK_RENDERER_BINDINGS_CORE_V8_V8_TYPE_CONVERSIONS_H_
