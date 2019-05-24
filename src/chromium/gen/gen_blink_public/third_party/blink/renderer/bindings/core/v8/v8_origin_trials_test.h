// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated from the Jinja2 template
// third_party/blink/renderer/bindings/templates/interface.h.tmpl
// by the script code_generator_v8.py.
// DO NOT MODIFY!

// clang-format off
#ifndef THIRD_PARTY_BLINK_RENDERER_BINDINGS_CORE_V8_V8_ORIGIN_TRIALS_TEST_H_
#define THIRD_PARTY_BLINK_RENDERER_BINDINGS_CORE_V8_V8_ORIGIN_TRIALS_TEST_H_

#include "third_party/blink/renderer/bindings/core/v8/generated_code_helper.h"
#include "third_party/blink/renderer/bindings/core/v8/native_value_traits.h"
#include "third_party/blink/renderer/bindings/core/v8/to_v8_for_core.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_binding_for_core.h"
#include "third_party/blink/renderer/core/testing/origin_trials_test.h"
#include "third_party/blink/renderer/platform/bindings/script_wrappable.h"
#include "third_party/blink/renderer/platform/bindings/v8_dom_wrapper.h"
#include "third_party/blink/renderer/platform/bindings/wrapper_type_info.h"
#include "third_party/blink/renderer/platform/heap/handle.h"

namespace blink {

class ScriptState;

extern const WrapperTypeInfo v8_origin_trials_test_wrapper_type_info;

class V8OriginTrialsTest {
  STATIC_ONLY(V8OriginTrialsTest);
 public:
  static bool HasInstance(v8::Local<v8::Value>, v8::Isolate*);
  static v8::Local<v8::Object> FindInstanceInPrototypeChain(v8::Local<v8::Value>, v8::Isolate*);
  static v8::Local<v8::FunctionTemplate> DomTemplate(v8::Isolate*, const DOMWrapperWorld&);
  static OriginTrialsTest* ToImpl(v8::Local<v8::Object> object) {
    return ToScriptWrappable(object)->ToImpl<OriginTrialsTest>();
  }
  static OriginTrialsTest* ToImplWithTypeCheck(v8::Isolate*, v8::Local<v8::Value>);

  static constexpr const WrapperTypeInfo* GetWrapperTypeInfo() {
    return &v8_origin_trials_test_wrapper_type_info;
  }

  static constexpr int kInternalFieldCount = kV8DefaultWrapperInternalFieldCount;

  static void InstallConditionalFeatures(
      v8::Local<v8::Context>,
      const DOMWrapperWorld&,
      v8::Local<v8::Object> instance_object,
      v8::Local<v8::Object> prototype_object,
      v8::Local<v8::Function> interface_object,
      v8::Local<v8::FunctionTemplate> interface_template);

  static void InstallOriginTrialsSampleAPIImplied(v8::Isolate*, const DOMWrapperWorld&, v8::Local<v8::Object> instance, v8::Local<v8::Object> prototype, v8::Local<v8::Function> interface);
  static void InstallOriginTrialsSampleAPIImplied(ScriptState*, v8::Local<v8::Object> instance);
  static void InstallOriginTrialsSampleAPIImplied(ScriptState*);

  static void InstallOriginTrialsSampleAPIInvalidOS(v8::Isolate*, const DOMWrapperWorld&, v8::Local<v8::Object> instance, v8::Local<v8::Object> prototype, v8::Local<v8::Function> interface);
  static void InstallOriginTrialsSampleAPIInvalidOS(ScriptState*, v8::Local<v8::Object> instance);
  static void InstallOriginTrialsSampleAPIInvalidOS(ScriptState*);

  static void InstallOriginTrialsSampleAPI(v8::Isolate*, const DOMWrapperWorld&, v8::Local<v8::Object> instance, v8::Local<v8::Object> prototype, v8::Local<v8::Function> interface);
  static void InstallOriginTrialsSampleAPI(ScriptState*, v8::Local<v8::Object> instance);
  static void InstallOriginTrialsSampleAPI(ScriptState*);

  // Callback functions

  static void NormalAttributeAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  static void StaticAttributeAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  static void ThrowingAttributeAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  static void UnconditionalAttributeAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  static void StaticUnconditionalAttributeAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  static void SecureUnconditionalAttributeAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  static void SecureStaticUnconditionalAttributeAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  static void SecureAttributeAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  static void SecureStaticAttributeAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  static void ImpliedAttributeAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  static void InvalidOSAttributeAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  static void NormalAttributePartialAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  static void StaticAttributePartialAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  static void SecureAttributePartialAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  static void SecureStaticAttributePartialAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>&);

  static void NormalMethodMethodCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  static void StaticMethodMethodCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  static void GetDictionaryMethodMethodCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  static void CheckDictionaryMethodMethodCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  static void UnconditionalMethodMethodCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  static void UnconditionalDictionaryMethodMethodCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  static void StaticUnconditionalMethodMethodCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  static void SecureUnconditionalMethodMethodCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  static void SecureStaticUnconditionalMethodMethodCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  static void SecureMethodMethodCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  static void SecureStaticMethodMethodCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  static void NormalMethodPartialMethodCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  static void StaticMethodPartialMethodCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  static void SecureMethodPartialMethodCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  static void SecureStaticMethodPartialMethodCallback(const v8::FunctionCallbackInfo<v8::Value>&);

  static void InstallRuntimeEnabledFeaturesOnTemplate(
      v8::Isolate*,
      const DOMWrapperWorld&,
      v8::Local<v8::FunctionTemplate> interface_template);
};

template <>
struct NativeValueTraits<OriginTrialsTest> : public NativeValueTraitsBase<OriginTrialsTest> {
  static OriginTrialsTest* NativeValue(v8::Isolate*, v8::Local<v8::Value>, ExceptionState&);
  static OriginTrialsTest* NullValue() { return nullptr; }
};

template <>
struct V8TypeOf<OriginTrialsTest> {
  typedef V8OriginTrialsTest Type;
};

}  // namespace blink

#endif  // THIRD_PARTY_BLINK_RENDERER_BINDINGS_CORE_V8_V8_ORIGIN_TRIALS_TEST_H_
