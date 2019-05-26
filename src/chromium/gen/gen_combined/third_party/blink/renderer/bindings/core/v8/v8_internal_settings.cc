// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated from the Jinja2 template
// third_party/blink/renderer/bindings/templates/interface.cc.tmpl
// by the script code_generator_v8.py.
// DO NOT MODIFY!

// clang-format off
#include "third_party/blink/renderer/bindings/core/v8/v8_internal_settings.h"

#include <algorithm>

#include "base/memory/scoped_refptr.h"
#include "third_party/blink/renderer/bindings/core/v8/idl_types.h"
#include "third_party/blink/renderer/bindings/core/v8/native_value_traits_impl.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_dom_configuration.h"
#include "third_party/blink/renderer/core/execution_context/execution_context.h"
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
const WrapperTypeInfo v8_internal_settings_wrapper_type_info = {
    gin::kEmbedderBlink,
    V8InternalSettings::DomTemplate,
    nullptr,
    "InternalSettings",
    V8InternalSettingsGenerated::GetWrapperTypeInfo(),
    WrapperTypeInfo::kWrapperTypeObjectPrototype,
    WrapperTypeInfo::kObjectClassId,
    WrapperTypeInfo::kNotInheritFromActiveScriptWrappable,
};
#if defined(COMPONENT_BUILD) && defined(WIN32) && defined(__clang__)
#pragma clang diagnostic pop
#endif

// This static member must be declared by DEFINE_WRAPPERTYPEINFO in InternalSettings.h.
// For details, see the comment of DEFINE_WRAPPERTYPEINFO in
// platform/bindings/ScriptWrappable.h.
const WrapperTypeInfo& InternalSettings::wrapper_type_info_ = v8_internal_settings_wrapper_type_info;

// not [ActiveScriptWrappable]
static_assert(
    !std::is_base_of<ActiveScriptWrappableBase, InternalSettings>::value,
    "InternalSettings inherits from ActiveScriptWrappable<>, but is not specifying "
    "[ActiveScriptWrappable] extended attribute in the IDL file.  "
    "Be consistent.");
static_assert(
    std::is_same<decltype(&InternalSettings::HasPendingActivity),
                 decltype(&ScriptWrappable::HasPendingActivity)>::value,
    "InternalSettings is overriding hasPendingActivity(), but is not specifying "
    "[ActiveScriptWrappable] extended attribute in the IDL file.  "
    "Be consistent.");

namespace internal_settings_v8_internal {

static void SetMockScrollbarsEnabledMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exception_state(info.GetIsolate(), ExceptionState::kExecutionContext, "InternalSettings", "setMockScrollbarsEnabled");

  InternalSettings* impl = V8InternalSettings::ToImpl(info.Holder());

  if (UNLIKELY(info.Length() < 1)) {
    exception_state.ThrowTypeError(ExceptionMessages::NotEnoughArguments(1, info.Length()));
    return;
  }

  bool enabled;
  enabled = NativeValueTraits<IDLBoolean>::NativeValue(info.GetIsolate(), info[0], exception_state);
  if (exception_state.HadException())
    return;

  impl->setMockScrollbarsEnabled(enabled, exception_state);
  if (exception_state.HadException()) {
    return;
  }
}

static void SetHideScrollbarsMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exception_state(info.GetIsolate(), ExceptionState::kExecutionContext, "InternalSettings", "setHideScrollbars");

  InternalSettings* impl = V8InternalSettings::ToImpl(info.Holder());

  if (UNLIKELY(info.Length() < 1)) {
    exception_state.ThrowTypeError(ExceptionMessages::NotEnoughArguments(1, info.Length()));
    return;
  }

  bool enabled;
  enabled = NativeValueTraits<IDLBoolean>::NativeValue(info.GetIsolate(), info[0], exception_state);
  if (exception_state.HadException())
    return;

  impl->setHideScrollbars(enabled, exception_state);
  if (exception_state.HadException()) {
    return;
  }
}

static void SetMockGestureTapHighlightsEnabledMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exception_state(info.GetIsolate(), ExceptionState::kExecutionContext, "InternalSettings", "setMockGestureTapHighlightsEnabled");

  InternalSettings* impl = V8InternalSettings::ToImpl(info.Holder());

  if (UNLIKELY(info.Length() < 1)) {
    exception_state.ThrowTypeError(ExceptionMessages::NotEnoughArguments(1, info.Length()));
    return;
  }

  bool enabled;
  enabled = NativeValueTraits<IDLBoolean>::NativeValue(info.GetIsolate(), info[0], exception_state);
  if (exception_state.HadException())
    return;

  impl->setMockGestureTapHighlightsEnabled(enabled, exception_state);
  if (exception_state.HadException()) {
    return;
  }
}

static void SetStandardFontFamilyMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exception_state(info.GetIsolate(), ExceptionState::kExecutionContext, "InternalSettings", "setStandardFontFamily");

  InternalSettings* impl = V8InternalSettings::ToImpl(info.Holder());

  if (UNLIKELY(info.Length() < 2)) {
    exception_state.ThrowTypeError(ExceptionMessages::NotEnoughArguments(2, info.Length()));
    return;
  }

  V8StringResource<> family;
  V8StringResource<> script;
  family = info[0];
  if (!family.Prepare())
    return;

  script = info[1];
  if (!script.Prepare())
    return;

  impl->setStandardFontFamily(family, script, exception_state);
  if (exception_state.HadException()) {
    return;
  }
}

static void SetSerifFontFamilyMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exception_state(info.GetIsolate(), ExceptionState::kExecutionContext, "InternalSettings", "setSerifFontFamily");

  InternalSettings* impl = V8InternalSettings::ToImpl(info.Holder());

  if (UNLIKELY(info.Length() < 2)) {
    exception_state.ThrowTypeError(ExceptionMessages::NotEnoughArguments(2, info.Length()));
    return;
  }

  V8StringResource<> family;
  V8StringResource<> script;
  family = info[0];
  if (!family.Prepare())
    return;

  script = info[1];
  if (!script.Prepare())
    return;

  impl->setSerifFontFamily(family, script, exception_state);
  if (exception_state.HadException()) {
    return;
  }
}

static void SetSansSerifFontFamilyMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exception_state(info.GetIsolate(), ExceptionState::kExecutionContext, "InternalSettings", "setSansSerifFontFamily");

  InternalSettings* impl = V8InternalSettings::ToImpl(info.Holder());

  if (UNLIKELY(info.Length() < 2)) {
    exception_state.ThrowTypeError(ExceptionMessages::NotEnoughArguments(2, info.Length()));
    return;
  }

  V8StringResource<> family;
  V8StringResource<> script;
  family = info[0];
  if (!family.Prepare())
    return;

  script = info[1];
  if (!script.Prepare())
    return;

  impl->setSansSerifFontFamily(family, script, exception_state);
  if (exception_state.HadException()) {
    return;
  }
}

static void SetFixedFontFamilyMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exception_state(info.GetIsolate(), ExceptionState::kExecutionContext, "InternalSettings", "setFixedFontFamily");

  InternalSettings* impl = V8InternalSettings::ToImpl(info.Holder());

  if (UNLIKELY(info.Length() < 2)) {
    exception_state.ThrowTypeError(ExceptionMessages::NotEnoughArguments(2, info.Length()));
    return;
  }

  V8StringResource<> family;
  V8StringResource<> script;
  family = info[0];
  if (!family.Prepare())
    return;

  script = info[1];
  if (!script.Prepare())
    return;

  impl->setFixedFontFamily(family, script, exception_state);
  if (exception_state.HadException()) {
    return;
  }
}

static void SetCursiveFontFamilyMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exception_state(info.GetIsolate(), ExceptionState::kExecutionContext, "InternalSettings", "setCursiveFontFamily");

  InternalSettings* impl = V8InternalSettings::ToImpl(info.Holder());

  if (UNLIKELY(info.Length() < 2)) {
    exception_state.ThrowTypeError(ExceptionMessages::NotEnoughArguments(2, info.Length()));
    return;
  }

  V8StringResource<> family;
  V8StringResource<> script;
  family = info[0];
  if (!family.Prepare())
    return;

  script = info[1];
  if (!script.Prepare())
    return;

  impl->setCursiveFontFamily(family, script, exception_state);
  if (exception_state.HadException()) {
    return;
  }
}

static void SetFantasyFontFamilyMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exception_state(info.GetIsolate(), ExceptionState::kExecutionContext, "InternalSettings", "setFantasyFontFamily");

  InternalSettings* impl = V8InternalSettings::ToImpl(info.Holder());

  if (UNLIKELY(info.Length() < 2)) {
    exception_state.ThrowTypeError(ExceptionMessages::NotEnoughArguments(2, info.Length()));
    return;
  }

  V8StringResource<> family;
  V8StringResource<> script;
  family = info[0];
  if (!family.Prepare())
    return;

  script = info[1];
  if (!script.Prepare())
    return;

  impl->setFantasyFontFamily(family, script, exception_state);
  if (exception_state.HadException()) {
    return;
  }
}

static void SetPictographFontFamilyMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exception_state(info.GetIsolate(), ExceptionState::kExecutionContext, "InternalSettings", "setPictographFontFamily");

  InternalSettings* impl = V8InternalSettings::ToImpl(info.Holder());

  if (UNLIKELY(info.Length() < 2)) {
    exception_state.ThrowTypeError(ExceptionMessages::NotEnoughArguments(2, info.Length()));
    return;
  }

  V8StringResource<> family;
  V8StringResource<> script;
  family = info[0];
  if (!family.Prepare())
    return;

  script = info[1];
  if (!script.Prepare())
    return;

  impl->setPictographFontFamily(family, script, exception_state);
  if (exception_state.HadException()) {
    return;
  }
}

static void SetTextAutosizingEnabledMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exception_state(info.GetIsolate(), ExceptionState::kExecutionContext, "InternalSettings", "setTextAutosizingEnabled");

  InternalSettings* impl = V8InternalSettings::ToImpl(info.Holder());

  if (UNLIKELY(info.Length() < 1)) {
    exception_state.ThrowTypeError(ExceptionMessages::NotEnoughArguments(1, info.Length()));
    return;
  }

  bool enabled;
  enabled = NativeValueTraits<IDLBoolean>::NativeValue(info.GetIsolate(), info[0], exception_state);
  if (exception_state.HadException())
    return;

  impl->setTextAutosizingEnabled(enabled, exception_state);
  if (exception_state.HadException()) {
    return;
  }
}

static void SetTextAutosizingWindowSizeOverrideMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exception_state(info.GetIsolate(), ExceptionState::kExecutionContext, "InternalSettings", "setTextAutosizingWindowSizeOverride");

  InternalSettings* impl = V8InternalSettings::ToImpl(info.Holder());

  if (UNLIKELY(info.Length() < 2)) {
    exception_state.ThrowTypeError(ExceptionMessages::NotEnoughArguments(2, info.Length()));
    return;
  }

  int32_t width;
  int32_t height;
  width = NativeValueTraits<IDLLong>::NativeValue(info.GetIsolate(), info[0], exception_state);
  if (exception_state.HadException())
    return;

  height = NativeValueTraits<IDLLong>::NativeValue(info.GetIsolate(), info[1], exception_state);
  if (exception_state.HadException())
    return;

  impl->setTextAutosizingWindowSizeOverride(width, height, exception_state);
  if (exception_state.HadException()) {
    return;
  }
}

static void SetTextTrackKindUserPreferenceMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exception_state(info.GetIsolate(), ExceptionState::kExecutionContext, "InternalSettings", "setTextTrackKindUserPreference");

  InternalSettings* impl = V8InternalSettings::ToImpl(info.Holder());

  if (UNLIKELY(info.Length() < 1)) {
    exception_state.ThrowTypeError(ExceptionMessages::NotEnoughArguments(1, info.Length()));
    return;
  }

  V8StringResource<> preference;
  preference = info[0];
  if (!preference.Prepare())
    return;

  impl->setTextTrackKindUserPreference(preference, exception_state);
  if (exception_state.HadException()) {
    return;
  }
}

static void SetAccessibilityFontScaleFactorMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exception_state(info.GetIsolate(), ExceptionState::kExecutionContext, "InternalSettings", "setAccessibilityFontScaleFactor");

  InternalSettings* impl = V8InternalSettings::ToImpl(info.Holder());

  if (UNLIKELY(info.Length() < 1)) {
    exception_state.ThrowTypeError(ExceptionMessages::NotEnoughArguments(1, info.Length()));
    return;
  }

  float font_scale_factor;
  font_scale_factor = NativeValueTraits<IDLFloat>::NativeValue(info.GetIsolate(), info[0], exception_state);
  if (exception_state.HadException())
    return;

  impl->setAccessibilityFontScaleFactor(font_scale_factor, exception_state);
  if (exception_state.HadException()) {
    return;
  }
}

static void SetMediaTypeOverrideMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exception_state(info.GetIsolate(), ExceptionState::kExecutionContext, "InternalSettings", "setMediaTypeOverride");

  InternalSettings* impl = V8InternalSettings::ToImpl(info.Holder());

  if (UNLIKELY(info.Length() < 1)) {
    exception_state.ThrowTypeError(ExceptionMessages::NotEnoughArguments(1, info.Length()));
    return;
  }

  V8StringResource<> media_type_override;
  media_type_override = info[0];
  if (!media_type_override.Prepare())
    return;

  impl->setMediaTypeOverride(media_type_override, exception_state);
  if (exception_state.HadException()) {
    return;
  }
}

static void SetDisplayModeOverrideMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exception_state(info.GetIsolate(), ExceptionState::kExecutionContext, "InternalSettings", "setDisplayModeOverride");

  InternalSettings* impl = V8InternalSettings::ToImpl(info.Holder());

  if (UNLIKELY(info.Length() < 1)) {
    exception_state.ThrowTypeError(ExceptionMessages::NotEnoughArguments(1, info.Length()));
    return;
  }

  V8StringResource<> display_mode_override;
  display_mode_override = info[0];
  if (!display_mode_override.Prepare())
    return;

  impl->setDisplayModeOverride(display_mode_override, exception_state);
  if (exception_state.HadException()) {
    return;
  }
}

static void SetEditingBehaviorMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exception_state(info.GetIsolate(), ExceptionState::kExecutionContext, "InternalSettings", "setEditingBehavior");

  InternalSettings* impl = V8InternalSettings::ToImpl(info.Holder());

  if (UNLIKELY(info.Length() < 1)) {
    exception_state.ThrowTypeError(ExceptionMessages::NotEnoughArguments(1, info.Length()));
    return;
  }

  V8StringResource<> behavior;
  behavior = info[0];
  if (!behavior.Prepare())
    return;

  impl->setEditingBehavior(behavior, exception_state);
  if (exception_state.HadException()) {
    return;
  }
}

static void SetImagesEnabledMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exception_state(info.GetIsolate(), ExceptionState::kExecutionContext, "InternalSettings", "setImagesEnabled");

  InternalSettings* impl = V8InternalSettings::ToImpl(info.Holder());

  if (UNLIKELY(info.Length() < 1)) {
    exception_state.ThrowTypeError(ExceptionMessages::NotEnoughArguments(1, info.Length()));
    return;
  }

  bool enabled;
  enabled = NativeValueTraits<IDLBoolean>::NativeValue(info.GetIsolate(), info[0], exception_state);
  if (exception_state.HadException())
    return;

  impl->setImagesEnabled(enabled, exception_state);
  if (exception_state.HadException()) {
    return;
  }
}

static void SetDefaultVideoPosterURLMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exception_state(info.GetIsolate(), ExceptionState::kExecutionContext, "InternalSettings", "setDefaultVideoPosterURL");

  InternalSettings* impl = V8InternalSettings::ToImpl(info.Holder());

  if (UNLIKELY(info.Length() < 1)) {
    exception_state.ThrowTypeError(ExceptionMessages::NotEnoughArguments(1, info.Length()));
    return;
  }

  V8StringResource<> poster;
  poster = info[0];
  if (!poster.Prepare())
    return;

  impl->setDefaultVideoPosterURL(poster, exception_state);
  if (exception_state.HadException()) {
    return;
  }
}

static void SetViewportEnabledMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exception_state(info.GetIsolate(), ExceptionState::kExecutionContext, "InternalSettings", "setViewportEnabled");

  InternalSettings* impl = V8InternalSettings::ToImpl(info.Holder());

  if (UNLIKELY(info.Length() < 1)) {
    exception_state.ThrowTypeError(ExceptionMessages::NotEnoughArguments(1, info.Length()));
    return;
  }

  bool enabled;
  enabled = NativeValueTraits<IDLBoolean>::NativeValue(info.GetIsolate(), info[0], exception_state);
  if (exception_state.HadException())
    return;

  impl->setViewportEnabled(enabled, exception_state);
  if (exception_state.HadException()) {
    return;
  }
}

static void SetViewportMetaEnabledMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exception_state(info.GetIsolate(), ExceptionState::kExecutionContext, "InternalSettings", "setViewportMetaEnabled");

  InternalSettings* impl = V8InternalSettings::ToImpl(info.Holder());

  if (UNLIKELY(info.Length() < 1)) {
    exception_state.ThrowTypeError(ExceptionMessages::NotEnoughArguments(1, info.Length()));
    return;
  }

  bool enabled;
  enabled = NativeValueTraits<IDLBoolean>::NativeValue(info.GetIsolate(), info[0], exception_state);
  if (exception_state.HadException())
    return;

  impl->setViewportMetaEnabled(enabled, exception_state);
  if (exception_state.HadException()) {
    return;
  }
}

static void SetViewportStyleMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exception_state(info.GetIsolate(), ExceptionState::kExecutionContext, "InternalSettings", "setViewportStyle");

  InternalSettings* impl = V8InternalSettings::ToImpl(info.Holder());

  if (UNLIKELY(info.Length() < 1)) {
    exception_state.ThrowTypeError(ExceptionMessages::NotEnoughArguments(1, info.Length()));
    return;
  }

  V8StringResource<> style;
  style = info[0];
  if (!style.Prepare())
    return;

  impl->setViewportStyle(style, exception_state);
  if (exception_state.HadException()) {
    return;
  }
}

static void SetAvailablePointerTypesMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exception_state(info.GetIsolate(), ExceptionState::kExecutionContext, "InternalSettings", "setAvailablePointerTypes");

  InternalSettings* impl = V8InternalSettings::ToImpl(info.Holder());

  if (UNLIKELY(info.Length() < 1)) {
    exception_state.ThrowTypeError(ExceptionMessages::NotEnoughArguments(1, info.Length()));
    return;
  }

  V8StringResource<> pointers;
  pointers = info[0];
  if (!pointers.Prepare())
    return;

  impl->setAvailablePointerTypes(pointers, exception_state);
  if (exception_state.HadException()) {
    return;
  }
}

static void SetPrimaryPointerTypeMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exception_state(info.GetIsolate(), ExceptionState::kExecutionContext, "InternalSettings", "setPrimaryPointerType");

  InternalSettings* impl = V8InternalSettings::ToImpl(info.Holder());

  if (UNLIKELY(info.Length() < 1)) {
    exception_state.ThrowTypeError(ExceptionMessages::NotEnoughArguments(1, info.Length()));
    return;
  }

  V8StringResource<> pointer;
  pointer = info[0];
  if (!pointer.Prepare())
    return;

  impl->setPrimaryPointerType(pointer, exception_state);
  if (exception_state.HadException()) {
    return;
  }
}

static void SetAvailableHoverTypesMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exception_state(info.GetIsolate(), ExceptionState::kExecutionContext, "InternalSettings", "setAvailableHoverTypes");

  InternalSettings* impl = V8InternalSettings::ToImpl(info.Holder());

  if (UNLIKELY(info.Length() < 1)) {
    exception_state.ThrowTypeError(ExceptionMessages::NotEnoughArguments(1, info.Length()));
    return;
  }

  V8StringResource<> types;
  types = info[0];
  if (!types.Prepare())
    return;

  impl->setAvailableHoverTypes(types, exception_state);
  if (exception_state.HadException()) {
    return;
  }
}

static void SetPrimaryHoverTypeMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exception_state(info.GetIsolate(), ExceptionState::kExecutionContext, "InternalSettings", "setPrimaryHoverType");

  InternalSettings* impl = V8InternalSettings::ToImpl(info.Holder());

  if (UNLIKELY(info.Length() < 1)) {
    exception_state.ThrowTypeError(ExceptionMessages::NotEnoughArguments(1, info.Length()));
    return;
  }

  V8StringResource<> type;
  type = info[0];
  if (!type.Prepare())
    return;

  impl->setPrimaryHoverType(type, exception_state);
  if (exception_state.HadException()) {
    return;
  }
}

static void SetImageAnimationPolicyMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exception_state(info.GetIsolate(), ExceptionState::kExecutionContext, "InternalSettings", "setImageAnimationPolicy");

  InternalSettings* impl = V8InternalSettings::ToImpl(info.Holder());

  if (UNLIKELY(info.Length() < 1)) {
    exception_state.ThrowTypeError(ExceptionMessages::NotEnoughArguments(1, info.Length()));
    return;
  }

  V8StringResource<> policy;
  policy = info[0];
  if (!policy.Prepare())
    return;

  impl->setImageAnimationPolicy(policy, exception_state);
  if (exception_state.HadException()) {
    return;
  }
}

static void SetPresentationReceiverMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exception_state(info.GetIsolate(), ExceptionState::kExecutionContext, "InternalSettings", "setPresentationReceiver");

  InternalSettings* impl = V8InternalSettings::ToImpl(info.Holder());

  if (UNLIKELY(info.Length() < 1)) {
    exception_state.ThrowTypeError(ExceptionMessages::NotEnoughArguments(1, info.Length()));
    return;
  }

  bool enabled;
  enabled = NativeValueTraits<IDLBoolean>::NativeValue(info.GetIsolate(), info[0], exception_state);
  if (exception_state.HadException())
    return;

  impl->setPresentationReceiver(enabled, exception_state);
  if (exception_state.HadException()) {
    return;
  }
}

static void SetAutoplayPolicyMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exception_state(info.GetIsolate(), ExceptionState::kExecutionContext, "InternalSettings", "setAutoplayPolicy");

  InternalSettings* impl = V8InternalSettings::ToImpl(info.Holder());

  if (UNLIKELY(info.Length() < 1)) {
    exception_state.ThrowTypeError(ExceptionMessages::NotEnoughArguments(1, info.Length()));
    return;
  }

  V8StringResource<> policy;
  policy = info[0];
  if (!policy.Prepare())
    return;

  impl->setAutoplayPolicy(policy, exception_state);
  if (exception_state.HadException()) {
    return;
  }
}

static void SetLangAttributeAwareFormControlUIEnabledMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exception_state(info.GetIsolate(), ExceptionState::kExecutionContext, "InternalSettings", "setLangAttributeAwareFormControlUIEnabled");

  InternalSettings* impl = V8InternalSettings::ToImpl(info.Holder());

  if (UNLIKELY(info.Length() < 1)) {
    exception_state.ThrowTypeError(ExceptionMessages::NotEnoughArguments(1, info.Length()));
    return;
  }

  bool enabled;
  enabled = NativeValueTraits<IDLBoolean>::NativeValue(info.GetIsolate(), info[0], exception_state);
  if (exception_state.HadException())
    return;

  impl->setLangAttributeAwareFormControlUIEnabled(enabled);
}

static void SetExperimentalContentSecurityPolicyFeaturesEnabledMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exception_state(info.GetIsolate(), ExceptionState::kExecutionContext, "InternalSettings", "setExperimentalContentSecurityPolicyFeaturesEnabled");

  InternalSettings* impl = V8InternalSettings::ToImpl(info.Holder());

  if (UNLIKELY(info.Length() < 1)) {
    exception_state.ThrowTypeError(ExceptionMessages::NotEnoughArguments(1, info.Length()));
    return;
  }

  bool enabled;
  enabled = NativeValueTraits<IDLBoolean>::NativeValue(info.GetIsolate(), info[0], exception_state);
  if (exception_state.HadException())
    return;

  impl->setExperimentalContentSecurityPolicyFeaturesEnabled(enabled);
}

static void SetScrollTopLeftInteropEnabledMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exception_state(info.GetIsolate(), ExceptionState::kExecutionContext, "InternalSettings", "setScrollTopLeftInteropEnabled");

  InternalSettings* impl = V8InternalSettings::ToImpl(info.Holder());

  if (UNLIKELY(info.Length() < 1)) {
    exception_state.ThrowTypeError(ExceptionMessages::NotEnoughArguments(1, info.Length()));
    return;
  }

  bool enabled;
  enabled = NativeValueTraits<IDLBoolean>::NativeValue(info.GetIsolate(), info[0], exception_state);
  if (exception_state.HadException())
    return;

  impl->setScrollTopLeftInteropEnabled(enabled);
}

}  // namespace internal_settings_v8_internal

void V8InternalSettings::SetMockScrollbarsEnabledMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_InternalSettings_setMockScrollbarsEnabled");

  internal_settings_v8_internal::SetMockScrollbarsEnabledMethod(info);
}

void V8InternalSettings::SetHideScrollbarsMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_InternalSettings_setHideScrollbars");

  internal_settings_v8_internal::SetHideScrollbarsMethod(info);
}

void V8InternalSettings::SetMockGestureTapHighlightsEnabledMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_InternalSettings_setMockGestureTapHighlightsEnabled");

  internal_settings_v8_internal::SetMockGestureTapHighlightsEnabledMethod(info);
}

void V8InternalSettings::SetStandardFontFamilyMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_InternalSettings_setStandardFontFamily");

  internal_settings_v8_internal::SetStandardFontFamilyMethod(info);
}

void V8InternalSettings::SetSerifFontFamilyMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_InternalSettings_setSerifFontFamily");

  internal_settings_v8_internal::SetSerifFontFamilyMethod(info);
}

void V8InternalSettings::SetSansSerifFontFamilyMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_InternalSettings_setSansSerifFontFamily");

  internal_settings_v8_internal::SetSansSerifFontFamilyMethod(info);
}

void V8InternalSettings::SetFixedFontFamilyMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_InternalSettings_setFixedFontFamily");

  internal_settings_v8_internal::SetFixedFontFamilyMethod(info);
}

void V8InternalSettings::SetCursiveFontFamilyMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_InternalSettings_setCursiveFontFamily");

  internal_settings_v8_internal::SetCursiveFontFamilyMethod(info);
}

void V8InternalSettings::SetFantasyFontFamilyMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_InternalSettings_setFantasyFontFamily");

  internal_settings_v8_internal::SetFantasyFontFamilyMethod(info);
}

void V8InternalSettings::SetPictographFontFamilyMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_InternalSettings_setPictographFontFamily");

  internal_settings_v8_internal::SetPictographFontFamilyMethod(info);
}

void V8InternalSettings::SetTextAutosizingEnabledMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_InternalSettings_setTextAutosizingEnabled");

  internal_settings_v8_internal::SetTextAutosizingEnabledMethod(info);
}

void V8InternalSettings::SetTextAutosizingWindowSizeOverrideMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_InternalSettings_setTextAutosizingWindowSizeOverride");

  internal_settings_v8_internal::SetTextAutosizingWindowSizeOverrideMethod(info);
}

void V8InternalSettings::SetTextTrackKindUserPreferenceMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_InternalSettings_setTextTrackKindUserPreference");

  internal_settings_v8_internal::SetTextTrackKindUserPreferenceMethod(info);
}

void V8InternalSettings::SetAccessibilityFontScaleFactorMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_InternalSettings_setAccessibilityFontScaleFactor");

  internal_settings_v8_internal::SetAccessibilityFontScaleFactorMethod(info);
}

void V8InternalSettings::SetMediaTypeOverrideMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_InternalSettings_setMediaTypeOverride");

  internal_settings_v8_internal::SetMediaTypeOverrideMethod(info);
}

void V8InternalSettings::SetDisplayModeOverrideMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_InternalSettings_setDisplayModeOverride");

  internal_settings_v8_internal::SetDisplayModeOverrideMethod(info);
}

void V8InternalSettings::SetEditingBehaviorMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_InternalSettings_setEditingBehavior");

  internal_settings_v8_internal::SetEditingBehaviorMethod(info);
}

void V8InternalSettings::SetImagesEnabledMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_InternalSettings_setImagesEnabled");

  internal_settings_v8_internal::SetImagesEnabledMethod(info);
}

void V8InternalSettings::SetDefaultVideoPosterURLMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_InternalSettings_setDefaultVideoPosterURL");

  internal_settings_v8_internal::SetDefaultVideoPosterURLMethod(info);
}

void V8InternalSettings::SetViewportEnabledMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_InternalSettings_setViewportEnabled");

  internal_settings_v8_internal::SetViewportEnabledMethod(info);
}

void V8InternalSettings::SetViewportMetaEnabledMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_InternalSettings_setViewportMetaEnabled");

  internal_settings_v8_internal::SetViewportMetaEnabledMethod(info);
}

void V8InternalSettings::SetViewportStyleMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_InternalSettings_setViewportStyle");

  internal_settings_v8_internal::SetViewportStyleMethod(info);
}

void V8InternalSettings::SetAvailablePointerTypesMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_InternalSettings_setAvailablePointerTypes");

  internal_settings_v8_internal::SetAvailablePointerTypesMethod(info);
}

void V8InternalSettings::SetPrimaryPointerTypeMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_InternalSettings_setPrimaryPointerType");

  internal_settings_v8_internal::SetPrimaryPointerTypeMethod(info);
}

void V8InternalSettings::SetAvailableHoverTypesMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_InternalSettings_setAvailableHoverTypes");

  internal_settings_v8_internal::SetAvailableHoverTypesMethod(info);
}

void V8InternalSettings::SetPrimaryHoverTypeMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_InternalSettings_setPrimaryHoverType");

  internal_settings_v8_internal::SetPrimaryHoverTypeMethod(info);
}

void V8InternalSettings::SetImageAnimationPolicyMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_InternalSettings_setImageAnimationPolicy");

  internal_settings_v8_internal::SetImageAnimationPolicyMethod(info);
}

void V8InternalSettings::SetPresentationReceiverMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_InternalSettings_setPresentationReceiver");

  internal_settings_v8_internal::SetPresentationReceiverMethod(info);
}

void V8InternalSettings::SetAutoplayPolicyMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_InternalSettings_setAutoplayPolicy");

  internal_settings_v8_internal::SetAutoplayPolicyMethod(info);
}

void V8InternalSettings::SetLangAttributeAwareFormControlUIEnabledMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_InternalSettings_setLangAttributeAwareFormControlUIEnabled");

  internal_settings_v8_internal::SetLangAttributeAwareFormControlUIEnabledMethod(info);
}

void V8InternalSettings::SetExperimentalContentSecurityPolicyFeaturesEnabledMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_InternalSettings_setExperimentalContentSecurityPolicyFeaturesEnabled");

  internal_settings_v8_internal::SetExperimentalContentSecurityPolicyFeaturesEnabledMethod(info);
}

void V8InternalSettings::SetScrollTopLeftInteropEnabledMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_InternalSettings_setScrollTopLeftInteropEnabled");

  internal_settings_v8_internal::SetScrollTopLeftInteropEnabledMethod(info);
}

static constexpr V8DOMConfiguration::MethodConfiguration kV8InternalSettingsMethods[] = {
    {"setMockScrollbarsEnabled", V8InternalSettings::SetMockScrollbarsEnabledMethodCallback, 1, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"setHideScrollbars", V8InternalSettings::SetHideScrollbarsMethodCallback, 1, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"setMockGestureTapHighlightsEnabled", V8InternalSettings::SetMockGestureTapHighlightsEnabledMethodCallback, 1, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"setStandardFontFamily", V8InternalSettings::SetStandardFontFamilyMethodCallback, 2, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"setSerifFontFamily", V8InternalSettings::SetSerifFontFamilyMethodCallback, 2, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"setSansSerifFontFamily", V8InternalSettings::SetSansSerifFontFamilyMethodCallback, 2, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"setFixedFontFamily", V8InternalSettings::SetFixedFontFamilyMethodCallback, 2, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"setCursiveFontFamily", V8InternalSettings::SetCursiveFontFamilyMethodCallback, 2, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"setFantasyFontFamily", V8InternalSettings::SetFantasyFontFamilyMethodCallback, 2, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"setPictographFontFamily", V8InternalSettings::SetPictographFontFamilyMethodCallback, 2, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"setTextAutosizingEnabled", V8InternalSettings::SetTextAutosizingEnabledMethodCallback, 1, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"setTextAutosizingWindowSizeOverride", V8InternalSettings::SetTextAutosizingWindowSizeOverrideMethodCallback, 2, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"setTextTrackKindUserPreference", V8InternalSettings::SetTextTrackKindUserPreferenceMethodCallback, 1, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"setAccessibilityFontScaleFactor", V8InternalSettings::SetAccessibilityFontScaleFactorMethodCallback, 1, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"setMediaTypeOverride", V8InternalSettings::SetMediaTypeOverrideMethodCallback, 1, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"setDisplayModeOverride", V8InternalSettings::SetDisplayModeOverrideMethodCallback, 1, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"setEditingBehavior", V8InternalSettings::SetEditingBehaviorMethodCallback, 1, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"setImagesEnabled", V8InternalSettings::SetImagesEnabledMethodCallback, 1, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"setDefaultVideoPosterURL", V8InternalSettings::SetDefaultVideoPosterURLMethodCallback, 1, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"setViewportEnabled", V8InternalSettings::SetViewportEnabledMethodCallback, 1, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"setViewportMetaEnabled", V8InternalSettings::SetViewportMetaEnabledMethodCallback, 1, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"setViewportStyle", V8InternalSettings::SetViewportStyleMethodCallback, 1, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"setAvailablePointerTypes", V8InternalSettings::SetAvailablePointerTypesMethodCallback, 1, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"setPrimaryPointerType", V8InternalSettings::SetPrimaryPointerTypeMethodCallback, 1, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"setAvailableHoverTypes", V8InternalSettings::SetAvailableHoverTypesMethodCallback, 1, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"setPrimaryHoverType", V8InternalSettings::SetPrimaryHoverTypeMethodCallback, 1, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"setImageAnimationPolicy", V8InternalSettings::SetImageAnimationPolicyMethodCallback, 1, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"setPresentationReceiver", V8InternalSettings::SetPresentationReceiverMethodCallback, 1, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"setAutoplayPolicy", V8InternalSettings::SetAutoplayPolicyMethodCallback, 1, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"setLangAttributeAwareFormControlUIEnabled", V8InternalSettings::SetLangAttributeAwareFormControlUIEnabledMethodCallback, 1, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"setExperimentalContentSecurityPolicyFeaturesEnabled", V8InternalSettings::SetExperimentalContentSecurityPolicyFeaturesEnabledMethodCallback, 1, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"setScrollTopLeftInteropEnabled", V8InternalSettings::SetScrollTopLeftInteropEnabledMethodCallback, 1, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
};

static void InstallV8InternalSettingsTemplate(
    v8::Isolate* isolate,
    const DOMWrapperWorld& world,
    v8::Local<v8::FunctionTemplate> interface_template) {
  // Initialize the interface object's template.
  V8DOMConfiguration::InitializeDOMInterfaceTemplate(isolate, interface_template, V8InternalSettings::GetWrapperTypeInfo()->interface_name, V8InternalSettingsGenerated::DomTemplate(isolate, world), V8InternalSettings::kInternalFieldCount);

  v8::Local<v8::Signature> signature = v8::Signature::New(isolate, interface_template);
  ALLOW_UNUSED_LOCAL(signature);
  v8::Local<v8::ObjectTemplate> instance_template = interface_template->InstanceTemplate();
  ALLOW_UNUSED_LOCAL(instance_template);
  v8::Local<v8::ObjectTemplate> prototype_template = interface_template->PrototypeTemplate();
  ALLOW_UNUSED_LOCAL(prototype_template);

  // Register IDL constants, attributes and operations.
  V8DOMConfiguration::InstallMethods(
      isolate, world, instance_template, prototype_template, interface_template,
      signature, kV8InternalSettingsMethods, base::size(kV8InternalSettingsMethods));

  // Custom signature

  V8InternalSettings::InstallRuntimeEnabledFeaturesOnTemplate(
      isolate, world, interface_template);
}

void V8InternalSettings::InstallRuntimeEnabledFeaturesOnTemplate(
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

v8::Local<v8::FunctionTemplate> V8InternalSettings::DomTemplate(
    v8::Isolate* isolate, const DOMWrapperWorld& world) {
  return V8DOMConfiguration::DomClassTemplate(
      isolate, world, const_cast<WrapperTypeInfo*>(V8InternalSettings::GetWrapperTypeInfo()),
      InstallV8InternalSettingsTemplate);
}

bool V8InternalSettings::HasInstance(v8::Local<v8::Value> v8_value, v8::Isolate* isolate) {
  return V8PerIsolateData::From(isolate)->HasInstance(V8InternalSettings::GetWrapperTypeInfo(), v8_value);
}

v8::Local<v8::Object> V8InternalSettings::FindInstanceInPrototypeChain(
    v8::Local<v8::Value> v8_value, v8::Isolate* isolate) {
  return V8PerIsolateData::From(isolate)->FindInstanceInPrototypeChain(
      V8InternalSettings::GetWrapperTypeInfo(), v8_value);
}

InternalSettings* V8InternalSettings::ToImplWithTypeCheck(
    v8::Isolate* isolate, v8::Local<v8::Value> value) {
  return HasInstance(value, isolate) ? ToImpl(v8::Local<v8::Object>::Cast(value)) : nullptr;
}

InternalSettings* NativeValueTraits<InternalSettings>::NativeValue(
    v8::Isolate* isolate, v8::Local<v8::Value> value, ExceptionState& exception_state) {
  InternalSettings* native_value = V8InternalSettings::ToImplWithTypeCheck(isolate, value);
  if (!native_value) {
    exception_state.ThrowTypeError(ExceptionMessages::FailedToConvertJSValue(
        "InternalSettings"));
  }
  return native_value;
}

}  // namespace blink
