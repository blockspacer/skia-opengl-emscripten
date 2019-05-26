// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated from the Jinja2 template
// third_party/blink/renderer/bindings/templates/interface.h.tmpl
// by the script code_generator_v8.py.
// DO NOT MODIFY!

// clang-format off
#ifndef THIRD_PARTY_BLINK_RENDERER_BINDINGS_CORE_V8_V8_INTERNAL_SETTINGS_H_
#define THIRD_PARTY_BLINK_RENDERER_BINDINGS_CORE_V8_V8_INTERNAL_SETTINGS_H_

#include "third_party/blink/renderer/bindings/core/v8/generated_code_helper.h"
#include "third_party/blink/renderer/bindings/core/v8/native_value_traits.h"
#include "third_party/blink/renderer/bindings/core/v8/to_v8_for_core.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_binding_for_core.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_internal_settings_generated.h"
#include "third_party/blink/renderer/core/testing/internal_settings.h"
#include "third_party/blink/renderer/platform/bindings/script_wrappable.h"
#include "third_party/blink/renderer/platform/bindings/v8_dom_wrapper.h"
#include "third_party/blink/renderer/platform/bindings/wrapper_type_info.h"
#include "third_party/blink/renderer/platform/heap/handle.h"

namespace blink {

extern const WrapperTypeInfo v8_internal_settings_wrapper_type_info;

class V8InternalSettings {
  STATIC_ONLY(V8InternalSettings);
 public:
  static bool HasInstance(v8::Local<v8::Value>, v8::Isolate*);
  static v8::Local<v8::Object> FindInstanceInPrototypeChain(v8::Local<v8::Value>, v8::Isolate*);
  static v8::Local<v8::FunctionTemplate> DomTemplate(v8::Isolate*, const DOMWrapperWorld&);
  static InternalSettings* ToImpl(v8::Local<v8::Object> object) {
    return ToScriptWrappable(object)->ToImpl<InternalSettings>();
  }
  static InternalSettings* ToImplWithTypeCheck(v8::Isolate*, v8::Local<v8::Value>);

  static constexpr const WrapperTypeInfo* GetWrapperTypeInfo() {
    return &v8_internal_settings_wrapper_type_info;
  }

  static constexpr int kInternalFieldCount = kV8DefaultWrapperInternalFieldCount;

  // Callback functions

  static void SetMockScrollbarsEnabledMethodCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  static void SetHideScrollbarsMethodCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  static void SetMockGestureTapHighlightsEnabledMethodCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  static void SetStandardFontFamilyMethodCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  static void SetSerifFontFamilyMethodCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  static void SetSansSerifFontFamilyMethodCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  static void SetFixedFontFamilyMethodCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  static void SetCursiveFontFamilyMethodCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  static void SetFantasyFontFamilyMethodCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  static void SetPictographFontFamilyMethodCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  static void SetTextAutosizingEnabledMethodCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  static void SetTextAutosizingWindowSizeOverrideMethodCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  static void SetTextTrackKindUserPreferenceMethodCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  static void SetAccessibilityFontScaleFactorMethodCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  static void SetMediaTypeOverrideMethodCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  static void SetDisplayModeOverrideMethodCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  static void SetEditingBehaviorMethodCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  static void SetImagesEnabledMethodCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  static void SetDefaultVideoPosterURLMethodCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  static void SetViewportEnabledMethodCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  static void SetViewportMetaEnabledMethodCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  static void SetViewportStyleMethodCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  static void SetAvailablePointerTypesMethodCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  static void SetPrimaryPointerTypeMethodCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  static void SetAvailableHoverTypesMethodCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  static void SetPrimaryHoverTypeMethodCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  static void SetImageAnimationPolicyMethodCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  static void SetPresentationReceiverMethodCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  static void SetAutoplayPolicyMethodCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  static void SetLangAttributeAwareFormControlUIEnabledMethodCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  static void SetExperimentalContentSecurityPolicyFeaturesEnabledMethodCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  static void SetScrollTopLeftInteropEnabledMethodCallback(const v8::FunctionCallbackInfo<v8::Value>&);

  static void InstallRuntimeEnabledFeaturesOnTemplate(
      v8::Isolate*,
      const DOMWrapperWorld&,
      v8::Local<v8::FunctionTemplate> interface_template);
};

template <>
struct NativeValueTraits<InternalSettings> : public NativeValueTraitsBase<InternalSettings> {
  static InternalSettings* NativeValue(v8::Isolate*, v8::Local<v8::Value>, ExceptionState&);
  static InternalSettings* NullValue() { return nullptr; }
};

template <>
struct V8TypeOf<InternalSettings> {
  typedef V8InternalSettings Type;
};

}  // namespace blink

#endif  // THIRD_PARTY_BLINK_RENDERER_BINDINGS_CORE_V8_V8_INTERNAL_SETTINGS_H_
