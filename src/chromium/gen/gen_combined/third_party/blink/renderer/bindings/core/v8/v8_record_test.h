// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated from the Jinja2 template
// third_party/blink/renderer/bindings/templates/interface.h.tmpl
// by the script code_generator_v8.py.
// DO NOT MODIFY!

// clang-format off
#ifndef THIRD_PARTY_BLINK_RENDERER_BINDINGS_CORE_V8_V8_RECORD_TEST_H_
#define THIRD_PARTY_BLINK_RENDERER_BINDINGS_CORE_V8_V8_RECORD_TEST_H_

#include "third_party/blink/renderer/bindings/core/v8/boolean_or_byte_string_byte_string_record.h"
#include "third_party/blink/renderer/bindings/core/v8/float_or_string_element_record.h"
#include "third_party/blink/renderer/bindings/core/v8/generated_code_helper.h"
#include "third_party/blink/renderer/bindings/core/v8/native_value_traits.h"
#include "third_party/blink/renderer/bindings/core/v8/to_v8_for_core.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_binding_for_core.h"
#include "third_party/blink/renderer/core/testing/record_test.h"
#include "third_party/blink/renderer/platform/bindings/script_wrappable.h"
#include "third_party/blink/renderer/platform/bindings/v8_dom_wrapper.h"
#include "third_party/blink/renderer/platform/bindings/wrapper_type_info.h"
#include "third_party/blink/renderer/platform/heap/handle.h"

namespace blink {

extern const WrapperTypeInfo v8_record_test_wrapper_type_info;

class V8RecordTest {
  STATIC_ONLY(V8RecordTest);
 public:
  static bool HasInstance(v8::Local<v8::Value>, v8::Isolate*);
  static v8::Local<v8::Object> FindInstanceInPrototypeChain(v8::Local<v8::Value>, v8::Isolate*);
  static v8::Local<v8::FunctionTemplate> DomTemplate(v8::Isolate*, const DOMWrapperWorld&);
  static RecordTest* ToImpl(v8::Local<v8::Object> object) {
    return ToScriptWrappable(object)->ToImpl<RecordTest>();
  }
  static RecordTest* ToImplWithTypeCheck(v8::Isolate*, v8::Local<v8::Value>);

  static constexpr const WrapperTypeInfo* GetWrapperTypeInfo() {
    return &v8_record_test_wrapper_type_info;
  }

  static constexpr int kInternalFieldCount = kV8DefaultWrapperInternalFieldCount;

  // Callback functions

  static void SetStringLongRecordMethodCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  static void GetStringLongRecordMethodCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  static void SetNullableStringLongRecordMethodCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  static void GetNullableStringLongRecordMethodCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  static void SetByteStringByteStringRecordMethodCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  static void SetStringElementRecordMethodCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  static void GetStringElementRecordMethodCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  static void SetUSVStringUSVStringBooleanRecordRecordMethodCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  static void GetUSVStringUSVStringBooleanRecordRecordMethodCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  static void ReturnStringByteStringSequenceRecordMethodCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  static void UnionReceivedARecordMethodCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  static void SetFloatOrStringElementRecordMethodCallback(const v8::FunctionCallbackInfo<v8::Value>&);

  static void InstallRuntimeEnabledFeaturesOnTemplate(
      v8::Isolate*,
      const DOMWrapperWorld&,
      v8::Local<v8::FunctionTemplate> interface_template);
};

template <>
struct NativeValueTraits<RecordTest> : public NativeValueTraitsBase<RecordTest> {
  static RecordTest* NativeValue(v8::Isolate*, v8::Local<v8::Value>, ExceptionState&);
  static RecordTest* NullValue() { return nullptr; }
};

template <>
struct V8TypeOf<RecordTest> {
  typedef V8RecordTest Type;
};

}  // namespace blink

#endif  // THIRD_PARTY_BLINK_RENDERER_BINDINGS_CORE_V8_V8_RECORD_TEST_H_
