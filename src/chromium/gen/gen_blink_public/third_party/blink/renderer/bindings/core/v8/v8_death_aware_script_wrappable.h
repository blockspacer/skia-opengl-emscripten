// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated from the Jinja2 template
// third_party/blink/renderer/bindings/templates/interface.h.tmpl
// by the script code_generator_v8.py.
// DO NOT MODIFY!

// clang-format off
#ifndef THIRD_PARTY_BLINK_RENDERER_BINDINGS_CORE_V8_V8_DEATH_AWARE_SCRIPT_WRAPPABLE_H_
#define THIRD_PARTY_BLINK_RENDERER_BINDINGS_CORE_V8_V8_DEATH_AWARE_SCRIPT_WRAPPABLE_H_

#include "third_party/blink/renderer/bindings/core/v8/generated_code_helper.h"
#include "third_party/blink/renderer/bindings/core/v8/native_value_traits.h"
#include "third_party/blink/renderer/bindings/core/v8/to_v8_for_core.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_binding_for_core.h"
#include "third_party/blink/renderer/core/testing/death_aware_script_wrappable.h"
#include "third_party/blink/renderer/platform/bindings/script_wrappable.h"
#include "third_party/blink/renderer/platform/bindings/v8_dom_wrapper.h"
#include "third_party/blink/renderer/platform/bindings/wrapper_type_info.h"
#include "third_party/blink/renderer/platform/heap/handle.h"

namespace blink {

extern const WrapperTypeInfo v8_death_aware_script_wrappable_wrapper_type_info;

class V8DeathAwareScriptWrappable {
  STATIC_ONLY(V8DeathAwareScriptWrappable);
 public:
  static bool HasInstance(v8::Local<v8::Value>, v8::Isolate*);
  static v8::Local<v8::Object> FindInstanceInPrototypeChain(v8::Local<v8::Value>, v8::Isolate*);
  static v8::Local<v8::FunctionTemplate> DomTemplate(v8::Isolate*, const DOMWrapperWorld&);
  static DeathAwareScriptWrappable* ToImpl(v8::Local<v8::Object> object) {
    return ToScriptWrappable(object)->ToImpl<DeathAwareScriptWrappable>();
  }
  static DeathAwareScriptWrappable* ToImplWithTypeCheck(v8::Isolate*, v8::Local<v8::Value>);

  static constexpr const WrapperTypeInfo* GetWrapperTypeInfo() {
    return &v8_death_aware_script_wrappable_wrapper_type_info;
  }

  static constexpr int kInternalFieldCount = kV8DefaultWrapperInternalFieldCount;

  // Callback functions

  static void InstallRuntimeEnabledFeaturesOnTemplate(
      v8::Isolate*,
      const DOMWrapperWorld&,
      v8::Local<v8::FunctionTemplate> interface_template);
};

template <>
struct NativeValueTraits<DeathAwareScriptWrappable> : public NativeValueTraitsBase<DeathAwareScriptWrappable> {
  static DeathAwareScriptWrappable* NativeValue(v8::Isolate*, v8::Local<v8::Value>, ExceptionState&);
  static DeathAwareScriptWrappable* NullValue() { return nullptr; }
};

template <>
struct V8TypeOf<DeathAwareScriptWrappable> {
  typedef V8DeathAwareScriptWrappable Type;
};

}  // namespace blink

#endif  // THIRD_PARTY_BLINK_RENDERER_BINDINGS_CORE_V8_V8_DEATH_AWARE_SCRIPT_WRAPPABLE_H_
