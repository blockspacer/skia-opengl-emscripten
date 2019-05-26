// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated from the Jinja2 template
// third_party/blink/renderer/bindings/templates/interface.cc.tmpl
// by the script code_generator_v8.py.
// DO NOT MODIFY!

// clang-format off
#include "third_party/blink/renderer/bindings/core/v8/v8_internal_runtime_flags.h"

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
const WrapperTypeInfo v8_internal_runtime_flags_wrapper_type_info = {
    gin::kEmbedderBlink,
    V8InternalRuntimeFlags::DomTemplate,
    nullptr,
    "InternalRuntimeFlags",
    nullptr,
    WrapperTypeInfo::kWrapperTypeObjectPrototype,
    WrapperTypeInfo::kObjectClassId,
    WrapperTypeInfo::kNotInheritFromActiveScriptWrappable,
};
#if defined(COMPONENT_BUILD) && defined(WIN32) && defined(__clang__)
#pragma clang diagnostic pop
#endif

// This static member must be declared by DEFINE_WRAPPERTYPEINFO in InternalRuntimeFlags.h.
// For details, see the comment of DEFINE_WRAPPERTYPEINFO in
// platform/bindings/ScriptWrappable.h.
const WrapperTypeInfo& InternalRuntimeFlags::wrapper_type_info_ = v8_internal_runtime_flags_wrapper_type_info;

// not [ActiveScriptWrappable]
static_assert(
    !std::is_base_of<ActiveScriptWrappableBase, InternalRuntimeFlags>::value,
    "InternalRuntimeFlags inherits from ActiveScriptWrappable<>, but is not specifying "
    "[ActiveScriptWrappable] extended attribute in the IDL file.  "
    "Be consistent.");
static_assert(
    std::is_same<decltype(&InternalRuntimeFlags::HasPendingActivity),
                 decltype(&ScriptWrappable::HasPendingActivity)>::value,
    "InternalRuntimeFlags is overriding hasPendingActivity(), but is not specifying "
    "[ActiveScriptWrappable] extended attribute in the IDL file.  "
    "Be consistent.");

namespace internal_runtime_flags_v8_internal {

static void Accelerated2dCanvasEnabledAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  InternalRuntimeFlags* impl = V8InternalRuntimeFlags::ToImpl(holder);

  V8SetReturnValueBool(info, impl->accelerated2dCanvasEnabled());
}

static void Accelerated2dCanvasEnabledAttributeSetter(
    v8::Local<v8::Value> v8_value, const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Isolate* isolate = info.GetIsolate();
  ALLOW_UNUSED_LOCAL(isolate);

  v8::Local<v8::Object> holder = info.Holder();
  ALLOW_UNUSED_LOCAL(holder);

  InternalRuntimeFlags* impl = V8InternalRuntimeFlags::ToImpl(holder);

  ExceptionState exception_state(isolate, ExceptionState::kSetterContext, "InternalRuntimeFlags", "accelerated2dCanvasEnabled");

  // Prepare the value to be set.
  bool cpp_value = NativeValueTraits<IDLBoolean>::NativeValue(info.GetIsolate(), v8_value, exception_state);
  if (exception_state.HadException())
    return;

  impl->setAccelerated2dCanvasEnabled(cpp_value);
}

static void AccessibilityObjectModelEnabledAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  InternalRuntimeFlags* impl = V8InternalRuntimeFlags::ToImpl(holder);

  V8SetReturnValueBool(info, impl->accessibilityObjectModelEnabled());
}

static void AdTaggingEnabledAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  InternalRuntimeFlags* impl = V8InternalRuntimeFlags::ToImpl(holder);

  V8SetReturnValueBool(info, impl->adTaggingEnabled());
}

static void AllowActivationDelegationAttrEnabledAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  InternalRuntimeFlags* impl = V8InternalRuntimeFlags::ToImpl(holder);

  V8SetReturnValueBool(info, impl->allowActivationDelegationAttrEnabled());
}

static void AllowContentInitiatedDataUrlNavigationsEnabledAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  InternalRuntimeFlags* impl = V8InternalRuntimeFlags::ToImpl(holder);

  V8SetReturnValueBool(info, impl->allowContentInitiatedDataUrlNavigationsEnabled());
}

static void AnimationWorkletEnabledAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  InternalRuntimeFlags* impl = V8InternalRuntimeFlags::ToImpl(holder);

  V8SetReturnValueBool(info, impl->animationWorkletEnabled());
}

static void AsyncClipboardEnabledAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  InternalRuntimeFlags* impl = V8InternalRuntimeFlags::ToImpl(holder);

  V8SetReturnValueBool(info, impl->asyncClipboardEnabled());
}

static void AudioOutputDevicesEnabledAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  InternalRuntimeFlags* impl = V8InternalRuntimeFlags::ToImpl(holder);

  V8SetReturnValueBool(info, impl->audioOutputDevicesEnabled());
}

static void AudioVideoTracksEnabledAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  InternalRuntimeFlags* impl = V8InternalRuntimeFlags::ToImpl(holder);

  V8SetReturnValueBool(info, impl->audioVideoTracksEnabled());
}

static void AutomationControlledEnabledAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  InternalRuntimeFlags* impl = V8InternalRuntimeFlags::ToImpl(holder);

  V8SetReturnValueBool(info, impl->automationControlledEnabled());
}

static void AutomationControlledEnabledAttributeSetter(
    v8::Local<v8::Value> v8_value, const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Isolate* isolate = info.GetIsolate();
  ALLOW_UNUSED_LOCAL(isolate);

  v8::Local<v8::Object> holder = info.Holder();
  ALLOW_UNUSED_LOCAL(holder);

  InternalRuntimeFlags* impl = V8InternalRuntimeFlags::ToImpl(holder);

  ExceptionState exception_state(isolate, ExceptionState::kSetterContext, "InternalRuntimeFlags", "automationControlledEnabled");

  // Prepare the value to be set.
  bool cpp_value = NativeValueTraits<IDLBoolean>::NativeValue(info.GetIsolate(), v8_value, exception_state);
  if (exception_state.HadException())
    return;

  impl->setAutomationControlledEnabled(cpp_value);
}

static void AutoPictureInPictureEnabledAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  InternalRuntimeFlags* impl = V8InternalRuntimeFlags::ToImpl(holder);

  V8SetReturnValueBool(info, impl->autoPictureInPictureEnabled());
}

static void AutoplayIgnoresWebAudioEnabledAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  InternalRuntimeFlags* impl = V8InternalRuntimeFlags::ToImpl(holder);

  V8SetReturnValueBool(info, impl->autoplayIgnoresWebAudioEnabled());
}

static void AutoplayIgnoresWebAudioEnabledAttributeSetter(
    v8::Local<v8::Value> v8_value, const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Isolate* isolate = info.GetIsolate();
  ALLOW_UNUSED_LOCAL(isolate);

  v8::Local<v8::Object> holder = info.Holder();
  ALLOW_UNUSED_LOCAL(holder);

  InternalRuntimeFlags* impl = V8InternalRuntimeFlags::ToImpl(holder);

  ExceptionState exception_state(isolate, ExceptionState::kSetterContext, "InternalRuntimeFlags", "autoplayIgnoresWebAudioEnabled");

  // Prepare the value to be set.
  bool cpp_value = NativeValueTraits<IDLBoolean>::NativeValue(info.GetIsolate(), v8_value, exception_state);
  if (exception_state.HadException())
    return;

  impl->setAutoplayIgnoresWebAudioEnabled(cpp_value);
}

static void BackgroundFetchEnabledAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  InternalRuntimeFlags* impl = V8InternalRuntimeFlags::ToImpl(holder);

  V8SetReturnValueBool(info, impl->backgroundFetchEnabled());
}

static void BackgroundVideoTrackOptimizationEnabledAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  InternalRuntimeFlags* impl = V8InternalRuntimeFlags::ToImpl(holder);

  V8SetReturnValueBool(info, impl->backgroundVideoTrackOptimizationEnabled());
}

static void BadgingEnabledAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  InternalRuntimeFlags* impl = V8InternalRuntimeFlags::ToImpl(holder);

  V8SetReturnValueBool(info, impl->badgingEnabled());
}

static void BidiCaretAffinityEnabledAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  InternalRuntimeFlags* impl = V8InternalRuntimeFlags::ToImpl(holder);

  V8SetReturnValueBool(info, impl->bidiCaretAffinityEnabled());
}

static void BlinkGenPropertyTreesEnabledAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  InternalRuntimeFlags* impl = V8InternalRuntimeFlags::ToImpl(holder);

  V8SetReturnValueBool(info, impl->blinkGenPropertyTreesEnabled());
}

static void BlinkRuntimeCallStatsEnabledAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  InternalRuntimeFlags* impl = V8InternalRuntimeFlags::ToImpl(holder);

  V8SetReturnValueBool(info, impl->blinkRuntimeCallStatsEnabled());
}

static void BloatedRendererDetectionEnabledAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  InternalRuntimeFlags* impl = V8InternalRuntimeFlags::ToImpl(holder);

  V8SetReturnValueBool(info, impl->bloatedRendererDetectionEnabled());
}

static void BloatedRendererDetectionSkipUptimeCheckEnabledAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  InternalRuntimeFlags* impl = V8InternalRuntimeFlags::ToImpl(holder);

  V8SetReturnValueBool(info, impl->bloatedRendererDetectionSkipUptimeCheckEnabled());
}

static void BlobReadMethodsEnabledAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  InternalRuntimeFlags* impl = V8InternalRuntimeFlags::ToImpl(holder);

  V8SetReturnValueBool(info, impl->blobReadMethodsEnabled());
}

static void BlockCredentialedSubresourcesEnabledAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  InternalRuntimeFlags* impl = V8InternalRuntimeFlags::ToImpl(holder);

  V8SetReturnValueBool(info, impl->blockCredentialedSubresourcesEnabled());
}

static void BlockingDownloadsInSandboxWithoutUserActivationEnabledAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  InternalRuntimeFlags* impl = V8InternalRuntimeFlags::ToImpl(holder);

  V8SetReturnValueBool(info, impl->blockingDownloadsInSandboxWithoutUserActivationEnabled());
}

static void BlockMetaSetCookieEnabledAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  InternalRuntimeFlags* impl = V8InternalRuntimeFlags::ToImpl(holder);

  V8SetReturnValueBool(info, impl->blockMetaSetCookieEnabled());
}

static void BuiltInModuleAllEnabledAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  InternalRuntimeFlags* impl = V8InternalRuntimeFlags::ToImpl(holder);

  V8SetReturnValueBool(info, impl->builtInModuleAllEnabled());
}

static void BuiltInModuleInfraEnabledAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  InternalRuntimeFlags* impl = V8InternalRuntimeFlags::ToImpl(holder);

  V8SetReturnValueBool(info, impl->builtInModuleInfraEnabled());
}

static void BuiltInModuleKvStorageEnabledAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  InternalRuntimeFlags* impl = V8InternalRuntimeFlags::ToImpl(holder);

  V8SetReturnValueBool(info, impl->builtInModuleKvStorageEnabled());
}

static void CacheInlineScriptCodeEnabledAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  InternalRuntimeFlags* impl = V8InternalRuntimeFlags::ToImpl(holder);

  V8SetReturnValueBool(info, impl->cacheInlineScriptCodeEnabled());
}

static void CacheStorageAddAllRejectsDuplicatesEnabledAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  InternalRuntimeFlags* impl = V8InternalRuntimeFlags::ToImpl(holder);

  V8SetReturnValueBool(info, impl->cacheStorageAddAllRejectsDuplicatesEnabled());
}

static void CallCaptureListenersAtCapturePhaseAtShadowHostsEnabledAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  InternalRuntimeFlags* impl = V8InternalRuntimeFlags::ToImpl(holder);

  V8SetReturnValueBool(info, impl->callCaptureListenersAtCapturePhaseAtShadowHostsEnabled());
}

static void Canvas2dContextLostRestoredEnabledAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  InternalRuntimeFlags* impl = V8InternalRuntimeFlags::ToImpl(holder);

  V8SetReturnValueBool(info, impl->canvas2dContextLostRestoredEnabled());
}

static void Canvas2dFixedRenderingModeEnabledAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  InternalRuntimeFlags* impl = V8InternalRuntimeFlags::ToImpl(holder);

  V8SetReturnValueBool(info, impl->canvas2dFixedRenderingModeEnabled());
}

static void Canvas2dImageChromiumEnabledAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  InternalRuntimeFlags* impl = V8InternalRuntimeFlags::ToImpl(holder);

  V8SetReturnValueBool(info, impl->canvas2dImageChromiumEnabled());
}

static void Canvas2dScrollPathIntoViewEnabledAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  InternalRuntimeFlags* impl = V8InternalRuntimeFlags::ToImpl(holder);

  V8SetReturnValueBool(info, impl->canvas2dScrollPathIntoViewEnabled());
}

static void CanvasColorManagementEnabledAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  InternalRuntimeFlags* impl = V8InternalRuntimeFlags::ToImpl(holder);

  V8SetReturnValueBool(info, impl->canvasColorManagementEnabled());
}

static void CanvasHitRegionEnabledAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  InternalRuntimeFlags* impl = V8InternalRuntimeFlags::ToImpl(holder);

  V8SetReturnValueBool(info, impl->canvasHitRegionEnabled());
}

static void CanvasImageSmoothingEnabledAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  InternalRuntimeFlags* impl = V8InternalRuntimeFlags::ToImpl(holder);

  V8SetReturnValueBool(info, impl->canvasImageSmoothingEnabled());
}

static void ClickRetargettingEnabledAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  InternalRuntimeFlags* impl = V8InternalRuntimeFlags::ToImpl(holder);

  V8SetReturnValueBool(info, impl->clickRetargettingEnabled());
}

static void ClientPlaceholdersForServerLoFiEnabledAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  InternalRuntimeFlags* impl = V8InternalRuntimeFlags::ToImpl(holder);

  V8SetReturnValueBool(info, impl->clientPlaceholdersForServerLoFiEnabled());
}

static void CompositeAfterPaintEnabledAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  InternalRuntimeFlags* impl = V8InternalRuntimeFlags::ToImpl(holder);

  V8SetReturnValueBool(info, impl->compositeAfterPaintEnabled());
}

static void CompositedSelectionUpdateEnabledAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  InternalRuntimeFlags* impl = V8InternalRuntimeFlags::ToImpl(holder);

  V8SetReturnValueBool(info, impl->compositedSelectionUpdateEnabled());
}

static void CompositorTouchActionEnabledAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  InternalRuntimeFlags* impl = V8InternalRuntimeFlags::ToImpl(holder);

  V8SetReturnValueBool(info, impl->compositorTouchActionEnabled());
}

static void ComputedAccessibilityInfoEnabledAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  InternalRuntimeFlags* impl = V8InternalRuntimeFlags::ToImpl(holder);

  V8SetReturnValueBool(info, impl->computedAccessibilityInfoEnabled());
}

static void ContactsManagerEnabledAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  InternalRuntimeFlags* impl = V8InternalRuntimeFlags::ToImpl(holder);

  V8SetReturnValueBool(info, impl->contactsManagerEnabled());
}

static void ContextMenuEnabledAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  InternalRuntimeFlags* impl = V8InternalRuntimeFlags::ToImpl(holder);

  V8SetReturnValueBool(info, impl->contextMenuEnabled());
}

static void CookieStoreEnabledAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  InternalRuntimeFlags* impl = V8InternalRuntimeFlags::ToImpl(holder);

  V8SetReturnValueBool(info, impl->cookieStoreEnabled());
}

static void CorsRFC1918EnabledAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  InternalRuntimeFlags* impl = V8InternalRuntimeFlags::ToImpl(holder);

  V8SetReturnValueBool(info, impl->corsRFC1918Enabled());
}

static void CSS3TextEnabledAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  InternalRuntimeFlags* impl = V8InternalRuntimeFlags::ToImpl(holder);

  V8SetReturnValueBool(info, impl->css3TextEnabled());
}

static void CSSAdditiveAnimationsEnabledAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  InternalRuntimeFlags* impl = V8InternalRuntimeFlags::ToImpl(holder);

  V8SetReturnValueBool(info, impl->cssAdditiveAnimationsEnabled());
}

static void CSSAltTextEnabledAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  InternalRuntimeFlags* impl = V8InternalRuntimeFlags::ToImpl(holder);

  V8SetReturnValueBool(info, impl->cssAltTextEnabled());
}

static void CSSBackdropFilterEnabledAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  InternalRuntimeFlags* impl = V8InternalRuntimeFlags::ToImpl(holder);

  V8SetReturnValueBool(info, impl->cssBackdropFilterEnabled());
}

static void CSSCalcAsIntEnabledAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  InternalRuntimeFlags* impl = V8InternalRuntimeFlags::ToImpl(holder);

  V8SetReturnValueBool(info, impl->cssCalcAsIntEnabled());
}

static void CSSFocusVisibleEnabledAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  InternalRuntimeFlags* impl = V8InternalRuntimeFlags::ToImpl(holder);

  V8SetReturnValueBool(info, impl->cssFocusVisibleEnabled());
}

static void CSSFontFeatureValuesEnabledAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  InternalRuntimeFlags* impl = V8InternalRuntimeFlags::ToImpl(holder);

  V8SetReturnValueBool(info, impl->cssFontFeatureValuesEnabled());
}

static void CSSFontSizeAdjustEnabledAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  InternalRuntimeFlags* impl = V8InternalRuntimeFlags::ToImpl(holder);

  V8SetReturnValueBool(info, impl->cssFontSizeAdjustEnabled());
}

static void CSSHexAlphaColorEnabledAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  InternalRuntimeFlags* impl = V8InternalRuntimeFlags::ToImpl(holder);

  V8SetReturnValueBool(info, impl->cssHexAlphaColorEnabled());
}

static void CSSIndependentTransformPropertiesEnabledAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  InternalRuntimeFlags* impl = V8InternalRuntimeFlags::ToImpl(holder);

  V8SetReturnValueBool(info, impl->cssIndependentTransformPropertiesEnabled());
}

static void CSSLayoutAPIEnabledAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  InternalRuntimeFlags* impl = V8InternalRuntimeFlags::ToImpl(holder);

  V8SetReturnValueBool(info, impl->cssLayoutAPIEnabled());
}

static void CSSLogicalEnabledAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  InternalRuntimeFlags* impl = V8InternalRuntimeFlags::ToImpl(holder);

  V8SetReturnValueBool(info, impl->cssLogicalEnabled());
}

static void CSSLogicalEnabledAttributeSetter(
    v8::Local<v8::Value> v8_value, const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Isolate* isolate = info.GetIsolate();
  ALLOW_UNUSED_LOCAL(isolate);

  v8::Local<v8::Object> holder = info.Holder();
  ALLOW_UNUSED_LOCAL(holder);

  InternalRuntimeFlags* impl = V8InternalRuntimeFlags::ToImpl(holder);

  ExceptionState exception_state(isolate, ExceptionState::kSetterContext, "InternalRuntimeFlags", "cssLogicalEnabled");

  // Prepare the value to be set.
  bool cpp_value = NativeValueTraits<IDLBoolean>::NativeValue(info.GetIsolate(), v8_value, exception_state);
  if (exception_state.HadException())
    return;

  impl->setCSSLogicalEnabled(cpp_value);
}

static void CSSMaskSourceTypeEnabledAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  InternalRuntimeFlags* impl = V8InternalRuntimeFlags::ToImpl(holder);

  V8SetReturnValueBool(info, impl->cssMaskSourceTypeEnabled());
}

static void CSSOffsetPathRayEnabledAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  InternalRuntimeFlags* impl = V8InternalRuntimeFlags::ToImpl(holder);

  V8SetReturnValueBool(info, impl->cssOffsetPathRayEnabled());
}

static void CSSOffsetPathRayContainEnabledAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  InternalRuntimeFlags* impl = V8InternalRuntimeFlags::ToImpl(holder);

  V8SetReturnValueBool(info, impl->cssOffsetPathRayContainEnabled());
}

static void CSSOffsetPositionAnchorEnabledAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  InternalRuntimeFlags* impl = V8InternalRuntimeFlags::ToImpl(holder);

  V8SetReturnValueBool(info, impl->cssOffsetPositionAnchorEnabled());
}

static void CSSPaintAPIArgumentsEnabledAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  InternalRuntimeFlags* impl = V8InternalRuntimeFlags::ToImpl(holder);

  V8SetReturnValueBool(info, impl->cssPaintAPIArgumentsEnabled());
}

static void CSSPartPseudoElementEnabledAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  InternalRuntimeFlags* impl = V8InternalRuntimeFlags::ToImpl(holder);

  V8SetReturnValueBool(info, impl->cssPartPseudoElementEnabled());
}

static void CSSPictureInPictureEnabledAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  InternalRuntimeFlags* impl = V8InternalRuntimeFlags::ToImpl(holder);

  V8SetReturnValueBool(info, impl->cssPictureInPictureEnabled());
}

static void CSSPseudoIsEnabledAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  InternalRuntimeFlags* impl = V8InternalRuntimeFlags::ToImpl(holder);

  V8SetReturnValueBool(info, impl->cssPseudoIsEnabled());
}

static void CSSPseudoWhereEnabledAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  InternalRuntimeFlags* impl = V8InternalRuntimeFlags::ToImpl(holder);

  V8SetReturnValueBool(info, impl->cssPseudoWhereEnabled());
}

static void CSSSnapSizeEnabledAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  InternalRuntimeFlags* impl = V8InternalRuntimeFlags::ToImpl(holder);

  V8SetReturnValueBool(info, impl->cssSnapSizeEnabled());
}

static void CSSVariables2EnabledAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  InternalRuntimeFlags* impl = V8InternalRuntimeFlags::ToImpl(holder);

  V8SetReturnValueBool(info, impl->cssVariables2Enabled());
}

static void CSSVariables2ImageValuesEnabledAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  InternalRuntimeFlags* impl = V8InternalRuntimeFlags::ToImpl(holder);

  V8SetReturnValueBool(info, impl->cssVariables2ImageValuesEnabled());
}

static void CSSVariables2TransformValuesEnabledAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  InternalRuntimeFlags* impl = V8InternalRuntimeFlags::ToImpl(holder);

  V8SetReturnValueBool(info, impl->cssVariables2TransformValuesEnabled());
}

static void CSSViewportEnabledAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  InternalRuntimeFlags* impl = V8InternalRuntimeFlags::ToImpl(holder);

  V8SetReturnValueBool(info, impl->cssViewportEnabled());
}

static void CustomElementDefaultStyleEnabledAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  InternalRuntimeFlags* impl = V8InternalRuntimeFlags::ToImpl(holder);

  V8SetReturnValueBool(info, impl->customElementDefaultStyleEnabled());
}

static void CustomElementsV0EnabledAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  InternalRuntimeFlags* impl = V8InternalRuntimeFlags::ToImpl(holder);

  V8SetReturnValueBool(info, impl->customElementsV0Enabled());
}

static void CustomUserTimingEnabledAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  InternalRuntimeFlags* impl = V8InternalRuntimeFlags::ToImpl(holder);

  V8SetReturnValueBool(info, impl->customUserTimingEnabled());
}

static void DatabaseEnabledAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  InternalRuntimeFlags* impl = V8InternalRuntimeFlags::ToImpl(holder);

  V8SetReturnValueBool(info, impl->databaseEnabled());
}

static void DecodeToYUVEnabledAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  InternalRuntimeFlags* impl = V8InternalRuntimeFlags::ToImpl(holder);

  V8SetReturnValueBool(info, impl->decodeToYUVEnabled());
}

static void DesktopCaptureDisableLocalEchoControlEnabledAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  InternalRuntimeFlags* impl = V8InternalRuntimeFlags::ToImpl(holder);

  V8SetReturnValueBool(info, impl->desktopCaptureDisableLocalEchoControlEnabled());
}

static void DisableHardwareNoiseSuppressionEnabledAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  InternalRuntimeFlags* impl = V8InternalRuntimeFlags::ToImpl(holder);

  V8SetReturnValueBool(info, impl->disableHardwareNoiseSuppressionEnabled());
}

static void DisplayCutoutAPIEnabledAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  InternalRuntimeFlags* impl = V8InternalRuntimeFlags::ToImpl(holder);

  V8SetReturnValueBool(info, impl->displayCutoutAPIEnabled());
}

static void DisplayCutoutAPIEnabledAttributeSetter(
    v8::Local<v8::Value> v8_value, const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Isolate* isolate = info.GetIsolate();
  ALLOW_UNUSED_LOCAL(isolate);

  v8::Local<v8::Object> holder = info.Holder();
  ALLOW_UNUSED_LOCAL(holder);

  InternalRuntimeFlags* impl = V8InternalRuntimeFlags::ToImpl(holder);

  ExceptionState exception_state(isolate, ExceptionState::kSetterContext, "InternalRuntimeFlags", "displayCutoutAPIEnabled");

  // Prepare the value to be set.
  bool cpp_value = NativeValueTraits<IDLBoolean>::NativeValue(info.GetIsolate(), v8_value, exception_state);
  if (exception_state.HadException())
    return;

  impl->setDisplayCutoutAPIEnabled(cpp_value);
}

static void DisplayLockingEnabledAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  InternalRuntimeFlags* impl = V8InternalRuntimeFlags::ToImpl(holder);

  V8SetReturnValueBool(info, impl->displayLockingEnabled());
}

static void DocumentCookieEnabledAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  InternalRuntimeFlags* impl = V8InternalRuntimeFlags::ToImpl(holder);

  V8SetReturnValueBool(info, impl->documentCookieEnabled());
}

static void DocumentDomainEnabledAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  InternalRuntimeFlags* impl = V8InternalRuntimeFlags::ToImpl(holder);

  V8SetReturnValueBool(info, impl->documentDomainEnabled());
}

static void DocumentWriteEnabledAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  InternalRuntimeFlags* impl = V8InternalRuntimeFlags::ToImpl(holder);

  V8SetReturnValueBool(info, impl->documentWriteEnabled());
}

static void EditingNGEnabledAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  InternalRuntimeFlags* impl = V8InternalRuntimeFlags::ToImpl(holder);

  V8SetReturnValueBool(info, impl->editingNGEnabled());
}

static void ElementInternalsEnabledAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  InternalRuntimeFlags* impl = V8InternalRuntimeFlags::ToImpl(holder);

  V8SetReturnValueBool(info, impl->elementInternalsEnabled());
}

static void ElementTimingEnabledAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  InternalRuntimeFlags* impl = V8InternalRuntimeFlags::ToImpl(holder);

  V8SetReturnValueBool(info, impl->elementTimingEnabled());
}

static void EncryptedMediaEncryptionSchemeQueryEnabledAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  InternalRuntimeFlags* impl = V8InternalRuntimeFlags::ToImpl(holder);

  V8SetReturnValueBool(info, impl->encryptedMediaEncryptionSchemeQueryEnabled());
}

static void EncryptedMediaHdcpPolicyCheckEnabledAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  InternalRuntimeFlags* impl = V8InternalRuntimeFlags::ToImpl(holder);

  V8SetReturnValueBool(info, impl->encryptedMediaHdcpPolicyCheckEnabled());
}

static void EncryptedMediaPersistentUsageRecordSessionEnabledAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  InternalRuntimeFlags* impl = V8InternalRuntimeFlags::ToImpl(holder);

  V8SetReturnValueBool(info, impl->encryptedMediaPersistentUsageRecordSessionEnabled());
}

static void EventTimingEnabledAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  InternalRuntimeFlags* impl = V8InternalRuntimeFlags::ToImpl(holder);

  V8SetReturnValueBool(info, impl->eventTimingEnabled());
}

static void ExecCommandInJavaScriptEnabledAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  InternalRuntimeFlags* impl = V8InternalRuntimeFlags::ToImpl(holder);

  V8SetReturnValueBool(info, impl->execCommandInJavaScriptEnabled());
}

static void ExpensiveBackgroundTimerThrottlingEnabledAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  InternalRuntimeFlags* impl = V8InternalRuntimeFlags::ToImpl(holder);

  V8SetReturnValueBool(info, impl->expensiveBackgroundTimerThrottlingEnabled());
}

static void ExperimentalContentSecurityPolicyFeaturesEnabledAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  InternalRuntimeFlags* impl = V8InternalRuntimeFlags::ToImpl(holder);

  V8SetReturnValueBool(info, impl->experimentalContentSecurityPolicyFeaturesEnabled());
}

static void ExperimentalIsInputPendingEnabledAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  InternalRuntimeFlags* impl = V8InternalRuntimeFlags::ToImpl(holder);

  V8SetReturnValueBool(info, impl->experimentalIsInputPendingEnabled());
}

static void ExperimentalProductivityFeaturesEnabledAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  InternalRuntimeFlags* impl = V8InternalRuntimeFlags::ToImpl(holder);

  V8SetReturnValueBool(info, impl->experimentalProductivityFeaturesEnabled());
}

static void ExtendedTextMetricsEnabledAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  InternalRuntimeFlags* impl = V8InternalRuntimeFlags::ToImpl(holder);

  V8SetReturnValueBool(info, impl->extendedTextMetricsEnabled());
}

static void ExtraWebGLVideoTextureMetadataEnabledAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  InternalRuntimeFlags* impl = V8InternalRuntimeFlags::ToImpl(holder);

  V8SetReturnValueBool(info, impl->extraWebGLVideoTextureMetadataEnabled());
}

static void FallbackCursorModeEnabledAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  InternalRuntimeFlags* impl = V8InternalRuntimeFlags::ToImpl(holder);

  V8SetReturnValueBool(info, impl->fallbackCursorModeEnabled());
}

static void FastBorderRadiusEnabledAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  InternalRuntimeFlags* impl = V8InternalRuntimeFlags::ToImpl(holder);

  V8SetReturnValueBool(info, impl->fastBorderRadiusEnabled());
}

static void FastFlatTreeTraversalEnabledAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  InternalRuntimeFlags* impl = V8InternalRuntimeFlags::ToImpl(holder);

  V8SetReturnValueBool(info, impl->fastFlatTreeTraversalEnabled());
}

static void FastMobileScrollingEnabledAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  InternalRuntimeFlags* impl = V8InternalRuntimeFlags::ToImpl(holder);

  V8SetReturnValueBool(info, impl->fastMobileScrollingEnabled());
}

static void FeaturePolicyForSandboxEnabledAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  InternalRuntimeFlags* impl = V8InternalRuntimeFlags::ToImpl(holder);

  V8SetReturnValueBool(info, impl->featurePolicyForSandboxEnabled());
}

static void FeaturePolicyJavaScriptInterfaceEnabledAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  InternalRuntimeFlags* impl = V8InternalRuntimeFlags::ToImpl(holder);

  V8SetReturnValueBool(info, impl->featurePolicyJavaScriptInterfaceEnabled());
}

static void FeaturePolicyReportingEnabledAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  InternalRuntimeFlags* impl = V8InternalRuntimeFlags::ToImpl(holder);

  V8SetReturnValueBool(info, impl->featurePolicyReportingEnabled());
}

static void FeaturePolicyVibrateFeatureEnabledAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  InternalRuntimeFlags* impl = V8InternalRuntimeFlags::ToImpl(holder);

  V8SetReturnValueBool(info, impl->featurePolicyVibrateFeatureEnabled());
}

static void FetchMetadataEnabledAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  InternalRuntimeFlags* impl = V8InternalRuntimeFlags::ToImpl(holder);

  V8SetReturnValueBool(info, impl->fetchMetadataEnabled());
}

static void FetchMetadataDestinationEnabledAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  InternalRuntimeFlags* impl = V8InternalRuntimeFlags::ToImpl(holder);

  V8SetReturnValueBool(info, impl->fetchMetadataDestinationEnabled());
}

static void FileSystemEnabledAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  InternalRuntimeFlags* impl = V8InternalRuntimeFlags::ToImpl(holder);

  V8SetReturnValueBool(info, impl->fileSystemEnabled());
}

static void FirstContentfulPaintPlusPlusEnabledAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  InternalRuntimeFlags* impl = V8InternalRuntimeFlags::ToImpl(holder);

  V8SetReturnValueBool(info, impl->firstContentfulPaintPlusPlusEnabled());
}

static void FocuslessSpatialNavigationEnabledAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  InternalRuntimeFlags* impl = V8InternalRuntimeFlags::ToImpl(holder);

  V8SetReturnValueBool(info, impl->focuslessSpatialNavigationEnabled());
}

static void FocuslessSpatialNavigationEnabledAttributeSetter(
    v8::Local<v8::Value> v8_value, const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Isolate* isolate = info.GetIsolate();
  ALLOW_UNUSED_LOCAL(isolate);

  v8::Local<v8::Object> holder = info.Holder();
  ALLOW_UNUSED_LOCAL(holder);

  InternalRuntimeFlags* impl = V8InternalRuntimeFlags::ToImpl(holder);

  ExceptionState exception_state(isolate, ExceptionState::kSetterContext, "InternalRuntimeFlags", "focuslessSpatialNavigationEnabled");

  // Prepare the value to be set.
  bool cpp_value = NativeValueTraits<IDLBoolean>::NativeValue(info.GetIsolate(), v8_value, exception_state);
  if (exception_state.HadException())
    return;

  impl->setFocuslessSpatialNavigationEnabled(cpp_value);
}

static void FontSrcLocalMatchingEnabledAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  InternalRuntimeFlags* impl = V8InternalRuntimeFlags::ToImpl(holder);

  V8SetReturnValueBool(info, impl->fontSrcLocalMatchingEnabled());
}

static void ForbidSyncXHRInPageDismissalEnabledAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  InternalRuntimeFlags* impl = V8InternalRuntimeFlags::ToImpl(holder);

  V8SetReturnValueBool(info, impl->forbidSyncXHRInPageDismissalEnabled());
}

static void ForceOverlayFullscreenVideoEnabledAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  InternalRuntimeFlags* impl = V8InternalRuntimeFlags::ToImpl(holder);

  V8SetReturnValueBool(info, impl->forceOverlayFullscreenVideoEnabled());
}

static void ForceSynchronousHTMLParsingEnabledAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  InternalRuntimeFlags* impl = V8InternalRuntimeFlags::ToImpl(holder);

  V8SetReturnValueBool(info, impl->forceSynchronousHTMLParsingEnabled());
}

static void ForceTallerSelectPopupEnabledAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  InternalRuntimeFlags* impl = V8InternalRuntimeFlags::ToImpl(holder);

  V8SetReturnValueBool(info, impl->forceTallerSelectPopupEnabled());
}

static void FormAssociatedCustomElementsEnabledAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  InternalRuntimeFlags* impl = V8InternalRuntimeFlags::ToImpl(holder);

  V8SetReturnValueBool(info, impl->formAssociatedCustomElementsEnabled());
}

static void FormDataEventEnabledAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  InternalRuntimeFlags* impl = V8InternalRuntimeFlags::ToImpl(holder);

  V8SetReturnValueBool(info, impl->formDataEventEnabled());
}

static void FractionalMouseEventEnabledAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  InternalRuntimeFlags* impl = V8InternalRuntimeFlags::ToImpl(holder);

  V8SetReturnValueBool(info, impl->fractionalMouseEventEnabled());
}

static void FractionalScrollOffsetsEnabledAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  InternalRuntimeFlags* impl = V8InternalRuntimeFlags::ToImpl(holder);

  V8SetReturnValueBool(info, impl->fractionalScrollOffsetsEnabled());
}

static void FreezeFramesOnVisibilityEnabledAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  InternalRuntimeFlags* impl = V8InternalRuntimeFlags::ToImpl(holder);

  V8SetReturnValueBool(info, impl->freezeFramesOnVisibilityEnabled());
}

static void GamepadButtonAxisEventsEnabledAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  InternalRuntimeFlags* impl = V8InternalRuntimeFlags::ToImpl(holder);

  V8SetReturnValueBool(info, impl->gamepadButtonAxisEventsEnabled());
}

static void GetDisplayMediaEnabledAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  InternalRuntimeFlags* impl = V8InternalRuntimeFlags::ToImpl(holder);

  V8SetReturnValueBool(info, impl->getDisplayMediaEnabled());
}

static void HeapCompactionEnabledAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  InternalRuntimeFlags* impl = V8InternalRuntimeFlags::ToImpl(holder);

  V8SetReturnValueBool(info, impl->heapCompactionEnabled());
}

static void HeapConcurrentMarkingEnabledAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  InternalRuntimeFlags* impl = V8InternalRuntimeFlags::ToImpl(holder);

  V8SetReturnValueBool(info, impl->heapConcurrentMarkingEnabled());
}

static void HeapIncrementalMarkingEnabledAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  InternalRuntimeFlags* impl = V8InternalRuntimeFlags::ToImpl(holder);

  V8SetReturnValueBool(info, impl->heapIncrementalMarkingEnabled());
}

static void HeapIncrementalMarkingStressEnabledAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  InternalRuntimeFlags* impl = V8InternalRuntimeFlags::ToImpl(holder);

  V8SetReturnValueBool(info, impl->heapIncrementalMarkingStressEnabled());
}

static void HrefTranslateEnabledAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  InternalRuntimeFlags* impl = V8InternalRuntimeFlags::ToImpl(holder);

  V8SetReturnValueBool(info, impl->hrefTranslateEnabled());
}

static void HTMLImportsEnabledAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  InternalRuntimeFlags* impl = V8InternalRuntimeFlags::ToImpl(holder);

  V8SetReturnValueBool(info, impl->htmlImportsEnabled());
}

static void HTMLImportsOnlyChromeEnabledAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  InternalRuntimeFlags* impl = V8InternalRuntimeFlags::ToImpl(holder);

  V8SetReturnValueBool(info, impl->htmlImportsOnlyChromeEnabled());
}

static void HTMLImportsStyleApplicationEnabledAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  InternalRuntimeFlags* impl = V8InternalRuntimeFlags::ToImpl(holder);

  V8SetReturnValueBool(info, impl->htmlImportsStyleApplicationEnabled());
}

static void IdbObserverEnabledAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  InternalRuntimeFlags* impl = V8InternalRuntimeFlags::ToImpl(holder);

  V8SetReturnValueBool(info, impl->idbObserverEnabled());
}

static void IdbTransactionCommitEnabledAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  InternalRuntimeFlags* impl = V8InternalRuntimeFlags::ToImpl(holder);

  V8SetReturnValueBool(info, impl->idbTransactionCommitEnabled());
}

static void IdleDetectionEnabledAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  InternalRuntimeFlags* impl = V8InternalRuntimeFlags::ToImpl(holder);

  V8SetReturnValueBool(info, impl->idleDetectionEnabled());
}

static void IgnoreCrossOriginWindowWhenNamedAccessOnWindowEnabledAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  InternalRuntimeFlags* impl = V8InternalRuntimeFlags::ToImpl(holder);

  V8SetReturnValueBool(info, impl->ignoreCrossOriginWindowWhenNamedAccessOnWindowEnabled());
}

static void ImageOrientationEnabledAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  InternalRuntimeFlags* impl = V8InternalRuntimeFlags::ToImpl(holder);

  V8SetReturnValueBool(info, impl->imageOrientationEnabled());
}

static void ImplicitRootScrollerEnabledAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  InternalRuntimeFlags* impl = V8InternalRuntimeFlags::ToImpl(holder);

  V8SetReturnValueBool(info, impl->implicitRootScrollerEnabled());
}

static void ImplicitRootScrollerEnabledAttributeSetter(
    v8::Local<v8::Value> v8_value, const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Isolate* isolate = info.GetIsolate();
  ALLOW_UNUSED_LOCAL(isolate);

  v8::Local<v8::Object> holder = info.Holder();
  ALLOW_UNUSED_LOCAL(holder);

  InternalRuntimeFlags* impl = V8InternalRuntimeFlags::ToImpl(holder);

  ExceptionState exception_state(isolate, ExceptionState::kSetterContext, "InternalRuntimeFlags", "implicitRootScrollerEnabled");

  // Prepare the value to be set.
  bool cpp_value = NativeValueTraits<IDLBoolean>::NativeValue(info.GetIsolate(), v8_value, exception_state);
  if (exception_state.HadException())
    return;

  impl->setImplicitRootScrollerEnabled(cpp_value);
}

static void InertAttributeEnabledAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  InternalRuntimeFlags* impl = V8InternalRuntimeFlags::ToImpl(holder);

  V8SetReturnValueBool(info, impl->inertAttributeEnabled());
}

static void InputMultipleFieldsUIEnabledAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  InternalRuntimeFlags* impl = V8InternalRuntimeFlags::ToImpl(holder);

  V8SetReturnValueBool(info, impl->inputMultipleFieldsUIEnabled());
}

static void InstalledAppEnabledAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  InternalRuntimeFlags* impl = V8InternalRuntimeFlags::ToImpl(holder);

  V8SetReturnValueBool(info, impl->installedAppEnabled());
}

static void IntersectionObserverV2EnabledAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  InternalRuntimeFlags* impl = V8InternalRuntimeFlags::ToImpl(holder);

  V8SetReturnValueBool(info, impl->intersectionObserverV2Enabled());
}

static void InvisibleDOMEnabledAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  InternalRuntimeFlags* impl = V8InternalRuntimeFlags::ToImpl(holder);

  V8SetReturnValueBool(info, impl->invisibleDOMEnabled());
}

static void IsolatedCodeCacheEnabledAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  InternalRuntimeFlags* impl = V8InternalRuntimeFlags::ToImpl(holder);

  V8SetReturnValueBool(info, impl->isolatedCodeCacheEnabled());
}

static void IsolatedWorldCSPEnabledAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  InternalRuntimeFlags* impl = V8InternalRuntimeFlags::ToImpl(holder);

  V8SetReturnValueBool(info, impl->isolatedWorldCSPEnabled());
}

static void JankTrackingEnabledAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  InternalRuntimeFlags* impl = V8InternalRuntimeFlags::ToImpl(holder);

  V8SetReturnValueBool(info, impl->jankTrackingEnabled());
}

static void JankTrackingSweepLineEnabledAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  InternalRuntimeFlags* impl = V8InternalRuntimeFlags::ToImpl(holder);

  V8SetReturnValueBool(info, impl->jankTrackingSweepLineEnabled());
}

static void KeyboardFocusableScrollersEnabledAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  InternalRuntimeFlags* impl = V8InternalRuntimeFlags::ToImpl(holder);

  V8SetReturnValueBool(info, impl->keyboardFocusableScrollersEnabled());
}

static void LangAttributeAwareFormControlUIEnabledAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  InternalRuntimeFlags* impl = V8InternalRuntimeFlags::ToImpl(holder);

  V8SetReturnValueBool(info, impl->langAttributeAwareFormControlUIEnabled());
}

static void LangClientHintHeaderEnabledAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  InternalRuntimeFlags* impl = V8InternalRuntimeFlags::ToImpl(holder);

  V8SetReturnValueBool(info, impl->langClientHintHeaderEnabled());
}

static void LayoutJankAPIEnabledAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  InternalRuntimeFlags* impl = V8InternalRuntimeFlags::ToImpl(holder);

  V8SetReturnValueBool(info, impl->layoutJankAPIEnabled());
}

static void LayoutNGEnabledAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  InternalRuntimeFlags* impl = V8InternalRuntimeFlags::ToImpl(holder);

  V8SetReturnValueBool(info, impl->layoutNGEnabled());
}

static void LayoutNGBlockFragmentationEnabledAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  InternalRuntimeFlags* impl = V8InternalRuntimeFlags::ToImpl(holder);

  V8SetReturnValueBool(info, impl->layoutNGBlockFragmentationEnabled());
}

static void LayoutNGFieldsetEnabledAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  InternalRuntimeFlags* impl = V8InternalRuntimeFlags::ToImpl(holder);

  V8SetReturnValueBool(info, impl->layoutNGFieldsetEnabled());
}

static void LayoutNGFlexBoxEnabledAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  InternalRuntimeFlags* impl = V8InternalRuntimeFlags::ToImpl(holder);

  V8SetReturnValueBool(info, impl->layoutNGFlexBoxEnabled());
}

static void LayoutNGFragmentCachingEnabledAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  InternalRuntimeFlags* impl = V8InternalRuntimeFlags::ToImpl(holder);

  V8SetReturnValueBool(info, impl->layoutNGFragmentCachingEnabled());
}

static void LazyFrameLoadingEnabledAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  InternalRuntimeFlags* impl = V8InternalRuntimeFlags::ToImpl(holder);

  V8SetReturnValueBool(info, impl->lazyFrameLoadingEnabled());
}

static void LazyFrameVisibleLoadTimeMetricsEnabledAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  InternalRuntimeFlags* impl = V8InternalRuntimeFlags::ToImpl(holder);

  V8SetReturnValueBool(info, impl->lazyFrameVisibleLoadTimeMetricsEnabled());
}

static void LazyImageLoadingEnabledAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  InternalRuntimeFlags* impl = V8InternalRuntimeFlags::ToImpl(holder);

  V8SetReturnValueBool(info, impl->lazyImageLoadingEnabled());
}

static void LazyImageVisibleLoadTimeMetricsEnabledAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  InternalRuntimeFlags* impl = V8InternalRuntimeFlags::ToImpl(holder);

  V8SetReturnValueBool(info, impl->lazyImageVisibleLoadTimeMetricsEnabled());
}

static void LazyInitializeMediaControlsEnabledAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  InternalRuntimeFlags* impl = V8InternalRuntimeFlags::ToImpl(holder);

  V8SetReturnValueBool(info, impl->lazyInitializeMediaControlsEnabled());
}

static void LegacyPerformanceMemoryCountersEnabledAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  InternalRuntimeFlags* impl = V8InternalRuntimeFlags::ToImpl(holder);

  V8SetReturnValueBool(info, impl->legacyPerformanceMemoryCountersEnabled());
}

static void LongTaskV2EnabledAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  InternalRuntimeFlags* impl = V8InternalRuntimeFlags::ToImpl(holder);

  V8SetReturnValueBool(info, impl->longTaskV2Enabled());
}

static void ManualSlottingEnabledAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  InternalRuntimeFlags* impl = V8InternalRuntimeFlags::ToImpl(holder);

  V8SetReturnValueBool(info, impl->manualSlottingEnabled());
}

static void MediaCapabilitiesEncodingInfoEnabledAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  InternalRuntimeFlags* impl = V8InternalRuntimeFlags::ToImpl(holder);

  V8SetReturnValueBool(info, impl->mediaCapabilitiesEncodingInfoEnabled());
}

static void MediaCapabilitiesEncryptedMediaEnabledAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  InternalRuntimeFlags* impl = V8InternalRuntimeFlags::ToImpl(holder);

  V8SetReturnValueBool(info, impl->mediaCapabilitiesEncryptedMediaEnabled());
}

static void MediaCaptureEnabledAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  InternalRuntimeFlags* impl = V8InternalRuntimeFlags::ToImpl(holder);

  V8SetReturnValueBool(info, impl->mediaCaptureEnabled());
}

static void MediaCaptureDepthVideoKindEnabledAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  InternalRuntimeFlags* impl = V8InternalRuntimeFlags::ToImpl(holder);

  V8SetReturnValueBool(info, impl->mediaCaptureDepthVideoKindEnabled());
}

static void MediaCastOverlayButtonEnabledAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  InternalRuntimeFlags* impl = V8InternalRuntimeFlags::ToImpl(holder);

  V8SetReturnValueBool(info, impl->mediaCastOverlayButtonEnabled());
}

static void MediaControlsExpandGestureEnabledAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  InternalRuntimeFlags* impl = V8InternalRuntimeFlags::ToImpl(holder);

  V8SetReturnValueBool(info, impl->mediaControlsExpandGestureEnabled());
}

static void MediaControlsOverlayPlayButtonEnabledAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  InternalRuntimeFlags* impl = V8InternalRuntimeFlags::ToImpl(holder);

  V8SetReturnValueBool(info, impl->mediaControlsOverlayPlayButtonEnabled());
}

static void MediaControlsOverlayPlayButtonEnabledAttributeSetter(
    v8::Local<v8::Value> v8_value, const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Isolate* isolate = info.GetIsolate();
  ALLOW_UNUSED_LOCAL(isolate);

  v8::Local<v8::Object> holder = info.Holder();
  ALLOW_UNUSED_LOCAL(holder);

  InternalRuntimeFlags* impl = V8InternalRuntimeFlags::ToImpl(holder);

  ExceptionState exception_state(isolate, ExceptionState::kSetterContext, "InternalRuntimeFlags", "mediaControlsOverlayPlayButtonEnabled");

  // Prepare the value to be set.
  bool cpp_value = NativeValueTraits<IDLBoolean>::NativeValue(info.GetIsolate(), v8_value, exception_state);
  if (exception_state.HadException())
    return;

  impl->setMediaControlsOverlayPlayButtonEnabled(cpp_value);
}

static void MediaDocumentDownloadButtonEnabledAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  InternalRuntimeFlags* impl = V8InternalRuntimeFlags::ToImpl(holder);

  V8SetReturnValueBool(info, impl->mediaDocumentDownloadButtonEnabled());
}

static void MediaEngagementBypassAutoplayPoliciesEnabledAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  InternalRuntimeFlags* impl = V8InternalRuntimeFlags::ToImpl(holder);

  V8SetReturnValueBool(info, impl->mediaEngagementBypassAutoplayPoliciesEnabled());
}

static void MediaQueryPrefersColorSchemeEnabledAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  InternalRuntimeFlags* impl = V8InternalRuntimeFlags::ToImpl(holder);

  V8SetReturnValueBool(info, impl->mediaQueryPrefersColorSchemeEnabled());
}

static void MediaQueryShapeEnabledAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  InternalRuntimeFlags* impl = V8InternalRuntimeFlags::ToImpl(holder);

  V8SetReturnValueBool(info, impl->mediaQueryShapeEnabled());
}

static void MediaSessionEnabledAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  InternalRuntimeFlags* impl = V8InternalRuntimeFlags::ToImpl(holder);

  V8SetReturnValueBool(info, impl->mediaSessionEnabled());
}

static void MediaSourceExperimentalEnabledAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  InternalRuntimeFlags* impl = V8InternalRuntimeFlags::ToImpl(holder);

  V8SetReturnValueBool(info, impl->mediaSourceExperimentalEnabled());
}

static void MediaSourceNewAbortAndDurationEnabledAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  InternalRuntimeFlags* impl = V8InternalRuntimeFlags::ToImpl(holder);

  V8SetReturnValueBool(info, impl->mediaSourceNewAbortAndDurationEnabled());
}

static void MediaStreamTrackContentHintEnabledAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  InternalRuntimeFlags* impl = V8InternalRuntimeFlags::ToImpl(holder);

  V8SetReturnValueBool(info, impl->mediaStreamTrackContentHintEnabled());
}

static void MergeBlockingNonBlockingPoolsEnabledAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  InternalRuntimeFlags* impl = V8InternalRuntimeFlags::ToImpl(holder);

  V8SetReturnValueBool(info, impl->mergeBlockingNonBlockingPoolsEnabled());
}

static void MetaColorSchemeEnabledAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  InternalRuntimeFlags* impl = V8InternalRuntimeFlags::ToImpl(holder);

  V8SetReturnValueBool(info, impl->metaColorSchemeEnabled());
}

static void MiddleClickAutoscrollEnabledAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  InternalRuntimeFlags* impl = V8InternalRuntimeFlags::ToImpl(holder);

  V8SetReturnValueBool(info, impl->middleClickAutoscrollEnabled());
}

static void MimeHandlerViewInCrossProcessFrameEnabledAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  InternalRuntimeFlags* impl = V8InternalRuntimeFlags::ToImpl(holder);

  V8SetReturnValueBool(info, impl->mimeHandlerViewInCrossProcessFrameEnabled());
}

static void MobileLayoutThemeEnabledAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  InternalRuntimeFlags* impl = V8InternalRuntimeFlags::ToImpl(holder);

  V8SetReturnValueBool(info, impl->mobileLayoutThemeEnabled());
}

static void ModernMediaControlsEnabledAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  InternalRuntimeFlags* impl = V8InternalRuntimeFlags::ToImpl(holder);

  V8SetReturnValueBool(info, impl->modernMediaControlsEnabled());
}

static void ModuleDedicatedWorkerEnabledAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  InternalRuntimeFlags* impl = V8InternalRuntimeFlags::ToImpl(holder);

  V8SetReturnValueBool(info, impl->moduleDedicatedWorkerEnabled());
}

static void ModuleServiceWorkerEnabledAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  InternalRuntimeFlags* impl = V8InternalRuntimeFlags::ToImpl(holder);

  V8SetReturnValueBool(info, impl->moduleServiceWorkerEnabled());
}

static void MojoJSEnabledAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  InternalRuntimeFlags* impl = V8InternalRuntimeFlags::ToImpl(holder);

  V8SetReturnValueBool(info, impl->mojoJSEnabled());
}

static void MojoJSTestEnabledAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  InternalRuntimeFlags* impl = V8InternalRuntimeFlags::ToImpl(holder);

  V8SetReturnValueBool(info, impl->mojoJSTestEnabled());
}

static void MovementXYInBlinkEnabledAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  InternalRuntimeFlags* impl = V8InternalRuntimeFlags::ToImpl(holder);

  V8SetReturnValueBool(info, impl->movementXYInBlinkEnabled());
}

static void MuteButtonEnabledAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  InternalRuntimeFlags* impl = V8InternalRuntimeFlags::ToImpl(holder);

  V8SetReturnValueBool(info, impl->muteButtonEnabled());
}

static void NativeFileSystemEnabledAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  InternalRuntimeFlags* impl = V8InternalRuntimeFlags::ToImpl(holder);

  V8SetReturnValueBool(info, impl->nativeFileSystemEnabled());
}

static void NativeStreamsEnabledAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  InternalRuntimeFlags* impl = V8InternalRuntimeFlags::ToImpl(holder);

  V8SetReturnValueBool(info, impl->nativeStreamsEnabled());
}

static void NavigatorContentUtilsEnabledAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  InternalRuntimeFlags* impl = V8InternalRuntimeFlags::ToImpl(holder);

  V8SetReturnValueBool(info, impl->navigatorContentUtilsEnabled());
}

static void NavigatorDeviceMemoryEnabledAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  InternalRuntimeFlags* impl = V8InternalRuntimeFlags::ToImpl(holder);

  V8SetReturnValueBool(info, impl->navigatorDeviceMemoryEnabled());
}

static void NavigatorLanguageInInsecureContextEnabledAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  InternalRuntimeFlags* impl = V8InternalRuntimeFlags::ToImpl(holder);

  V8SetReturnValueBool(info, impl->navigatorLanguageInInsecureContextEnabled());
}

static void NavigatorLanguageInInsecureContextEnabledAttributeSetter(
    v8::Local<v8::Value> v8_value, const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Isolate* isolate = info.GetIsolate();
  ALLOW_UNUSED_LOCAL(isolate);

  v8::Local<v8::Object> holder = info.Holder();
  ALLOW_UNUSED_LOCAL(holder);

  InternalRuntimeFlags* impl = V8InternalRuntimeFlags::ToImpl(holder);

  ExceptionState exception_state(isolate, ExceptionState::kSetterContext, "InternalRuntimeFlags", "navigatorLanguageInInsecureContextEnabled");

  // Prepare the value to be set.
  bool cpp_value = NativeValueTraits<IDLBoolean>::NativeValue(info.GetIsolate(), v8_value, exception_state);
  if (exception_state.HadException())
    return;

  impl->setNavigatorLanguageInInsecureContextEnabled(cpp_value);
}

static void NetInfoDownlinkMaxEnabledAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  InternalRuntimeFlags* impl = V8InternalRuntimeFlags::ToImpl(holder);

  V8SetReturnValueBool(info, impl->netInfoDownlinkMaxEnabled());
}

static void NetworkServiceEnabledAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  InternalRuntimeFlags* impl = V8InternalRuntimeFlags::ToImpl(holder);

  V8SetReturnValueBool(info, impl->networkServiceEnabled());
}

static void NewRemotePlaybackPipelineEnabledAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  InternalRuntimeFlags* impl = V8InternalRuntimeFlags::ToImpl(holder);

  V8SetReturnValueBool(info, impl->newRemotePlaybackPipelineEnabled());
}

static void NoIdleEncodingForWebTestsEnabledAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  InternalRuntimeFlags* impl = V8InternalRuntimeFlags::ToImpl(holder);

  V8SetReturnValueBool(info, impl->noIdleEncodingForWebTestsEnabled());
}

static void NotificationConstructorEnabledAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  InternalRuntimeFlags* impl = V8InternalRuntimeFlags::ToImpl(holder);

  V8SetReturnValueBool(info, impl->notificationConstructorEnabled());
}

static void NotificationContentImageEnabledAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  InternalRuntimeFlags* impl = V8InternalRuntimeFlags::ToImpl(holder);

  V8SetReturnValueBool(info, impl->notificationContentImageEnabled());
}

static void NotificationsEnabledAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  InternalRuntimeFlags* impl = V8InternalRuntimeFlags::ToImpl(holder);

  V8SetReturnValueBool(info, impl->notificationsEnabled());
}

static void NotificationTriggersEnabledAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  InternalRuntimeFlags* impl = V8InternalRuntimeFlags::ToImpl(holder);

  V8SetReturnValueBool(info, impl->notificationTriggersEnabled());
}

static void OffMainThreadCSSPaintEnabledAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  InternalRuntimeFlags* impl = V8InternalRuntimeFlags::ToImpl(holder);

  V8SetReturnValueBool(info, impl->offMainThreadCSSPaintEnabled());
}

static void OffscreenCanvasEnabledAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  InternalRuntimeFlags* impl = V8InternalRuntimeFlags::ToImpl(holder);

  V8SetReturnValueBool(info, impl->offscreenCanvasEnabled());
}

static void OffscreenCanvasCommitEnabledAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  InternalRuntimeFlags* impl = V8InternalRuntimeFlags::ToImpl(holder);

  V8SetReturnValueBool(info, impl->offscreenCanvasCommitEnabled());
}

static void OffscreenCanvasTextEnabledAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  InternalRuntimeFlags* impl = V8InternalRuntimeFlags::ToImpl(holder);

  V8SetReturnValueBool(info, impl->offscreenCanvasTextEnabled());
}

static void OnDeviceChangeEnabledAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  InternalRuntimeFlags* impl = V8InternalRuntimeFlags::ToImpl(holder);

  V8SetReturnValueBool(info, impl->onDeviceChangeEnabled());
}

static void OrientationEventEnabledAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  InternalRuntimeFlags* impl = V8InternalRuntimeFlags::ToImpl(holder);

  V8SetReturnValueBool(info, impl->orientationEventEnabled());
}

static void OriginTrialsEnabledAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  InternalRuntimeFlags* impl = V8InternalRuntimeFlags::ToImpl(holder);

  V8SetReturnValueBool(info, impl->originTrialsEnabled());
}

static void OriginTrialsSampleAPIEnabledAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  InternalRuntimeFlags* impl = V8InternalRuntimeFlags::ToImpl(holder);

  V8SetReturnValueBool(info, impl->originTrialsSampleAPIEnabled());
}

static void OriginTrialsSampleAPIDependentEnabledAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  InternalRuntimeFlags* impl = V8InternalRuntimeFlags::ToImpl(holder);

  V8SetReturnValueBool(info, impl->originTrialsSampleAPIDependentEnabled());
}

static void OriginTrialsSampleAPIImpliedEnabledAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  InternalRuntimeFlags* impl = V8InternalRuntimeFlags::ToImpl(holder);

  V8SetReturnValueBool(info, impl->originTrialsSampleAPIImpliedEnabled());
}

static void OriginTrialsSampleAPIInvalidOSEnabledAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  InternalRuntimeFlags* impl = V8InternalRuntimeFlags::ToImpl(holder);

  V8SetReturnValueBool(info, impl->originTrialsSampleAPIInvalidOSEnabled());
}

static void OriginTrialsSampleAPINavigationEnabledAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  InternalRuntimeFlags* impl = V8InternalRuntimeFlags::ToImpl(holder);

  V8SetReturnValueBool(info, impl->originTrialsSampleAPINavigationEnabled());
}

static void OutOfBlinkCorsEnabledAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  InternalRuntimeFlags* impl = V8InternalRuntimeFlags::ToImpl(holder);

  V8SetReturnValueBool(info, impl->outOfBlinkCorsEnabled());
}

static void OverflowIconsForMediaControlsEnabledAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  InternalRuntimeFlags* impl = V8InternalRuntimeFlags::ToImpl(holder);

  V8SetReturnValueBool(info, impl->overflowIconsForMediaControlsEnabled());
}

static void OverlayScrollbarsEnabledAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  InternalRuntimeFlags* impl = V8InternalRuntimeFlags::ToImpl(holder);

  V8SetReturnValueBool(info, impl->overlayScrollbarsEnabled());
}

static void OverlayScrollbarsEnabledAttributeSetter(
    v8::Local<v8::Value> v8_value, const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Isolate* isolate = info.GetIsolate();
  ALLOW_UNUSED_LOCAL(isolate);

  v8::Local<v8::Object> holder = info.Holder();
  ALLOW_UNUSED_LOCAL(holder);

  InternalRuntimeFlags* impl = V8InternalRuntimeFlags::ToImpl(holder);

  ExceptionState exception_state(isolate, ExceptionState::kSetterContext, "InternalRuntimeFlags", "overlayScrollbarsEnabled");

  // Prepare the value to be set.
  bool cpp_value = NativeValueTraits<IDLBoolean>::NativeValue(info.GetIsolate(), v8_value, exception_state);
  if (exception_state.HadException())
    return;

  impl->setOverlayScrollbarsEnabled(cpp_value);
}

static void OverscrollCustomizationEnabledAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  InternalRuntimeFlags* impl = V8InternalRuntimeFlags::ToImpl(holder);

  V8SetReturnValueBool(info, impl->overscrollCustomizationEnabled());
}

static void OverscrollCustomizationEnabledAttributeSetter(
    v8::Local<v8::Value> v8_value, const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Isolate* isolate = info.GetIsolate();
  ALLOW_UNUSED_LOCAL(isolate);

  v8::Local<v8::Object> holder = info.Holder();
  ALLOW_UNUSED_LOCAL(holder);

  InternalRuntimeFlags* impl = V8InternalRuntimeFlags::ToImpl(holder);

  ExceptionState exception_state(isolate, ExceptionState::kSetterContext, "InternalRuntimeFlags", "overscrollCustomizationEnabled");

  // Prepare the value to be set.
  bool cpp_value = NativeValueTraits<IDLBoolean>::NativeValue(info.GetIsolate(), v8_value, exception_state);
  if (exception_state.HadException())
    return;

  impl->setOverscrollCustomizationEnabled(cpp_value);
}

static void PageLifecycleTransitionsOptInEnabledAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  InternalRuntimeFlags* impl = V8InternalRuntimeFlags::ToImpl(holder);

  V8SetReturnValueBool(info, impl->pageLifecycleTransitionsOptInEnabled());
}

static void PageLifecycleTransitionsOptOutEnabledAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  InternalRuntimeFlags* impl = V8InternalRuntimeFlags::ToImpl(holder);

  V8SetReturnValueBool(info, impl->pageLifecycleTransitionsOptOutEnabled());
}

static void PagePopupEnabledAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  InternalRuntimeFlags* impl = V8InternalRuntimeFlags::ToImpl(holder);

  V8SetReturnValueBool(info, impl->pagePopupEnabled());
}

static void PaintUnderInvalidationCheckingEnabledAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  InternalRuntimeFlags* impl = V8InternalRuntimeFlags::ToImpl(holder);

  V8SetReturnValueBool(info, impl->paintUnderInvalidationCheckingEnabled());
}

static void PaintUnderInvalidationCheckingEnabledAttributeSetter(
    v8::Local<v8::Value> v8_value, const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Isolate* isolate = info.GetIsolate();
  ALLOW_UNUSED_LOCAL(isolate);

  v8::Local<v8::Object> holder = info.Holder();
  ALLOW_UNUSED_LOCAL(holder);

  InternalRuntimeFlags* impl = V8InternalRuntimeFlags::ToImpl(holder);

  ExceptionState exception_state(isolate, ExceptionState::kSetterContext, "InternalRuntimeFlags", "paintUnderInvalidationCheckingEnabled");

  // Prepare the value to be set.
  bool cpp_value = NativeValueTraits<IDLBoolean>::NativeValue(info.GetIsolate(), v8_value, exception_state);
  if (exception_state.HadException())
    return;

  impl->setPaintUnderInvalidationCheckingEnabled(cpp_value);
}

static void PassiveDocumentEventListenersEnabledAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  InternalRuntimeFlags* impl = V8InternalRuntimeFlags::ToImpl(holder);

  V8SetReturnValueBool(info, impl->passiveDocumentEventListenersEnabled());
}

static void PassiveDocumentWheelEventListenersEnabledAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  InternalRuntimeFlags* impl = V8InternalRuntimeFlags::ToImpl(holder);

  V8SetReturnValueBool(info, impl->passiveDocumentWheelEventListenersEnabled());
}

static void PassPaintVisualRectToCompositorEnabledAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  InternalRuntimeFlags* impl = V8InternalRuntimeFlags::ToImpl(holder);

  V8SetReturnValueBool(info, impl->passPaintVisualRectToCompositorEnabled());
}

static void PaymentAppEnabledAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  InternalRuntimeFlags* impl = V8InternalRuntimeFlags::ToImpl(holder);

  V8SetReturnValueBool(info, impl->paymentAppEnabled());
}

static void PaymentHandlerChangePaymentMethodEnabledAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  InternalRuntimeFlags* impl = V8InternalRuntimeFlags::ToImpl(holder);

  V8SetReturnValueBool(info, impl->paymentHandlerChangePaymentMethodEnabled());
}

static void PaymentMethodChangeEventEnabledAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  InternalRuntimeFlags* impl = V8InternalRuntimeFlags::ToImpl(holder);

  V8SetReturnValueBool(info, impl->paymentMethodChangeEventEnabled());
}

static void PaymentRequestEnabledAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  InternalRuntimeFlags* impl = V8InternalRuntimeFlags::ToImpl(holder);

  V8SetReturnValueBool(info, impl->paymentRequestEnabled());
}

static void PaymentRequestHasEnrolledInstrumentEnabledAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  InternalRuntimeFlags* impl = V8InternalRuntimeFlags::ToImpl(holder);

  V8SetReturnValueBool(info, impl->paymentRequestHasEnrolledInstrumentEnabled());
}

static void PaymentRequestMerchantValidationEventEnabledAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  InternalRuntimeFlags* impl = V8InternalRuntimeFlags::ToImpl(holder);

  V8SetReturnValueBool(info, impl->paymentRequestMerchantValidationEventEnabled());
}

static void PaymentRetryEnabledAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  InternalRuntimeFlags* impl = V8InternalRuntimeFlags::ToImpl(holder);

  V8SetReturnValueBool(info, impl->paymentRetryEnabled());
}

static void PerformanceManagerInstrumentationEnabledAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  InternalRuntimeFlags* impl = V8InternalRuntimeFlags::ToImpl(holder);

  V8SetReturnValueBool(info, impl->performanceManagerInstrumentationEnabled());
}

static void PerformanceObserverBufferedFlagEnabledAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  InternalRuntimeFlags* impl = V8InternalRuntimeFlags::ToImpl(holder);

  V8SetReturnValueBool(info, impl->performanceObserverBufferedFlagEnabled());
}

static void PeriodicBackgroundSyncEnabledAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  InternalRuntimeFlags* impl = V8InternalRuntimeFlags::ToImpl(holder);

  V8SetReturnValueBool(info, impl->periodicBackgroundSyncEnabled());
}

static void PeriodicBackgroundSyncEnabledAttributeSetter(
    v8::Local<v8::Value> v8_value, const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Isolate* isolate = info.GetIsolate();
  ALLOW_UNUSED_LOCAL(isolate);

  v8::Local<v8::Object> holder = info.Holder();
  ALLOW_UNUSED_LOCAL(holder);

  InternalRuntimeFlags* impl = V8InternalRuntimeFlags::ToImpl(holder);

  ExceptionState exception_state(isolate, ExceptionState::kSetterContext, "InternalRuntimeFlags", "periodicBackgroundSyncEnabled");

  // Prepare the value to be set.
  bool cpp_value = NativeValueTraits<IDLBoolean>::NativeValue(info.GetIsolate(), v8_value, exception_state);
  if (exception_state.HadException())
    return;

  impl->setPeriodicBackgroundSyncEnabled(cpp_value);
}

static void PerMethodCanMakePaymentQuotaEnabledAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  InternalRuntimeFlags* impl = V8InternalRuntimeFlags::ToImpl(holder);

  V8SetReturnValueBool(info, impl->perMethodCanMakePaymentQuotaEnabled());
}

static void PermissionDelegationEnabledAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  InternalRuntimeFlags* impl = V8InternalRuntimeFlags::ToImpl(holder);

  V8SetReturnValueBool(info, impl->permissionDelegationEnabled());
}

static void PermissionsEnabledAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  InternalRuntimeFlags* impl = V8InternalRuntimeFlags::ToImpl(holder);

  V8SetReturnValueBool(info, impl->permissionsEnabled());
}

static void PermissionsRequestRevokeEnabledAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  InternalRuntimeFlags* impl = V8InternalRuntimeFlags::ToImpl(holder);

  V8SetReturnValueBool(info, impl->permissionsRequestRevokeEnabled());
}

static void PictureInPictureEnabledAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  InternalRuntimeFlags* impl = V8InternalRuntimeFlags::ToImpl(holder);

  V8SetReturnValueBool(info, impl->pictureInPictureEnabled());
}

static void PictureInPictureEnabledAttributeSetter(
    v8::Local<v8::Value> v8_value, const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Isolate* isolate = info.GetIsolate();
  ALLOW_UNUSED_LOCAL(isolate);

  v8::Local<v8::Object> holder = info.Holder();
  ALLOW_UNUSED_LOCAL(holder);

  InternalRuntimeFlags* impl = V8InternalRuntimeFlags::ToImpl(holder);

  ExceptionState exception_state(isolate, ExceptionState::kSetterContext, "InternalRuntimeFlags", "pictureInPictureEnabled");

  // Prepare the value to be set.
  bool cpp_value = NativeValueTraits<IDLBoolean>::NativeValue(info.GetIsolate(), v8_value, exception_state);
  if (exception_state.HadException())
    return;

  impl->setPictureInPictureEnabled(cpp_value);
}

static void PictureInPictureAPIEnabledAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  InternalRuntimeFlags* impl = V8InternalRuntimeFlags::ToImpl(holder);

  V8SetReturnValueBool(info, impl->pictureInPictureAPIEnabled());
}

static void PictureInPictureV2EnabledAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  InternalRuntimeFlags* impl = V8InternalRuntimeFlags::ToImpl(holder);

  V8SetReturnValueBool(info, impl->pictureInPictureV2Enabled());
}

static void PictureInPictureV2EnabledAttributeSetter(
    v8::Local<v8::Value> v8_value, const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Isolate* isolate = info.GetIsolate();
  ALLOW_UNUSED_LOCAL(isolate);

  v8::Local<v8::Object> holder = info.Holder();
  ALLOW_UNUSED_LOCAL(holder);

  InternalRuntimeFlags* impl = V8InternalRuntimeFlags::ToImpl(holder);

  ExceptionState exception_state(isolate, ExceptionState::kSetterContext, "InternalRuntimeFlags", "pictureInPictureV2Enabled");

  // Prepare the value to be set.
  bool cpp_value = NativeValueTraits<IDLBoolean>::NativeValue(info.GetIsolate(), v8_value, exception_state);
  if (exception_state.HadException())
    return;

  impl->setPictureInPictureV2Enabled(cpp_value);
}

static void PointerRawUpdateEnabledAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  InternalRuntimeFlags* impl = V8InternalRuntimeFlags::ToImpl(holder);

  V8SetReturnValueBool(info, impl->pointerRawUpdateEnabled());
}

static void PortalsEnabledAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  InternalRuntimeFlags* impl = V8InternalRuntimeFlags::ToImpl(holder);

  V8SetReturnValueBool(info, impl->portalsEnabled());
}

static void PostAnimationFrameEnabledAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  InternalRuntimeFlags* impl = V8InternalRuntimeFlags::ToImpl(holder);

  V8SetReturnValueBool(info, impl->postAnimationFrameEnabled());
}

static void PreciseMemoryInfoEnabledAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  InternalRuntimeFlags* impl = V8InternalRuntimeFlags::ToImpl(holder);

  V8SetReturnValueBool(info, impl->preciseMemoryInfoEnabled());
}

static void PredictedEventsEnabledAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  InternalRuntimeFlags* impl = V8InternalRuntimeFlags::ToImpl(holder);

  V8SetReturnValueBool(info, impl->predictedEventsEnabled());
}

static void PrefixedVideoFullscreenEnabledAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  InternalRuntimeFlags* impl = V8InternalRuntimeFlags::ToImpl(holder);

  V8SetReturnValueBool(info, impl->prefixedVideoFullscreenEnabled());
}

static void PresentationEnabledAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  InternalRuntimeFlags* impl = V8InternalRuntimeFlags::ToImpl(holder);

  V8SetReturnValueBool(info, impl->presentationEnabled());
}

static void PrintBrowserEnabledAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  InternalRuntimeFlags* impl = V8InternalRuntimeFlags::ToImpl(holder);

  V8SetReturnValueBool(info, impl->printBrowserEnabled());
}

static void PriorityHintsEnabledAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  InternalRuntimeFlags* impl = V8InternalRuntimeFlags::ToImpl(holder);

  V8SetReturnValueBool(info, impl->priorityHintsEnabled());
}

static void PushMessagingEnabledAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  InternalRuntimeFlags* impl = V8InternalRuntimeFlags::ToImpl(holder);

  V8SetReturnValueBool(info, impl->pushMessagingEnabled());
}

static void RasterInducingScrollEnabledAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  InternalRuntimeFlags* impl = V8InternalRuntimeFlags::ToImpl(holder);

  V8SetReturnValueBool(info, impl->rasterInducingScrollEnabled());
}

static void ReducedReferrerGranularityEnabledAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  InternalRuntimeFlags* impl = V8InternalRuntimeFlags::ToImpl(holder);

  V8SetReturnValueBool(info, impl->reducedReferrerGranularityEnabled());
}

static void RemotePlaybackEnabledAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  InternalRuntimeFlags* impl = V8InternalRuntimeFlags::ToImpl(holder);

  V8SetReturnValueBool(info, impl->remotePlaybackEnabled());
}

static void RemotePlaybackBackendEnabledAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  InternalRuntimeFlags* impl = V8InternalRuntimeFlags::ToImpl(holder);

  V8SetReturnValueBool(info, impl->remotePlaybackBackendEnabled());
}

static void RemotePlaybackBackendEnabledAttributeSetter(
    v8::Local<v8::Value> v8_value, const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Isolate* isolate = info.GetIsolate();
  ALLOW_UNUSED_LOCAL(isolate);

  v8::Local<v8::Object> holder = info.Holder();
  ALLOW_UNUSED_LOCAL(holder);

  InternalRuntimeFlags* impl = V8InternalRuntimeFlags::ToImpl(holder);

  ExceptionState exception_state(isolate, ExceptionState::kSetterContext, "InternalRuntimeFlags", "remotePlaybackBackendEnabled");

  // Prepare the value to be set.
  bool cpp_value = NativeValueTraits<IDLBoolean>::NativeValue(info.GetIsolate(), v8_value, exception_state);
  if (exception_state.HadException())
    return;

  impl->setRemotePlaybackBackendEnabled(cpp_value);
}

static void RenderingPipelineThrottlingEnabledAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  InternalRuntimeFlags* impl = V8InternalRuntimeFlags::ToImpl(holder);

  V8SetReturnValueBool(info, impl->renderingPipelineThrottlingEnabled());
}

static void ResourceLoadSchedulerEnabledAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  InternalRuntimeFlags* impl = V8InternalRuntimeFlags::ToImpl(holder);

  V8SetReturnValueBool(info, impl->resourceLoadSchedulerEnabled());
}

static void RestrictAppCacheToSecureContextsEnabledAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  InternalRuntimeFlags* impl = V8InternalRuntimeFlags::ToImpl(holder);

  V8SetReturnValueBool(info, impl->restrictAppCacheToSecureContextsEnabled());
}

static void RestrictDeviceSensorEventsToSecureContextsEnabledAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  InternalRuntimeFlags* impl = V8InternalRuntimeFlags::ToImpl(holder);

  V8SetReturnValueBool(info, impl->restrictDeviceSensorEventsToSecureContextsEnabled());
}

static void RestrictLazyFrameLoadingToDataSaverEnabledAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  InternalRuntimeFlags* impl = V8InternalRuntimeFlags::ToImpl(holder);

  V8SetReturnValueBool(info, impl->restrictLazyFrameLoadingToDataSaverEnabled());
}

static void RestrictLazyImageLoadingToDataSaverEnabledAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  InternalRuntimeFlags* impl = V8InternalRuntimeFlags::ToImpl(holder);

  V8SetReturnValueBool(info, impl->restrictLazyImageLoadingToDataSaverEnabled());
}

static void RTCAudioJitterBufferMaxPacketsEnabledAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  InternalRuntimeFlags* impl = V8InternalRuntimeFlags::ToImpl(holder);

  V8SetReturnValueBool(info, impl->rtcAudioJitterBufferMaxPacketsEnabled());
}

static void RTCAudioJitterBufferRtxHandlingEnabledAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  InternalRuntimeFlags* impl = V8InternalRuntimeFlags::ToImpl(holder);

  V8SetReturnValueBool(info, impl->rtcAudioJitterBufferRtxHandlingEnabled());
}

static void RTCDtlsTransportEnabledAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  InternalRuntimeFlags* impl = V8InternalRuntimeFlags::ToImpl(holder);

  V8SetReturnValueBool(info, impl->rtcDtlsTransportEnabled());
}

static void RTCIceTransportExtensionEnabledAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  InternalRuntimeFlags* impl = V8InternalRuntimeFlags::ToImpl(holder);

  V8SetReturnValueBool(info, impl->rtcIceTransportExtensionEnabled());
}

static void RTCJitterBufferDelayHintEnabledAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  InternalRuntimeFlags* impl = V8InternalRuntimeFlags::ToImpl(holder);

  V8SetReturnValueBool(info, impl->rtcJitterBufferDelayHintEnabled());
}

static void RTCQuicTransportEnabledAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  InternalRuntimeFlags* impl = V8InternalRuntimeFlags::ToImpl(holder);

  V8SetReturnValueBool(info, impl->rtcQuicTransportEnabled());
}

static void RTCRtpSenderParametersEnabledAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  InternalRuntimeFlags* impl = V8InternalRuntimeFlags::ToImpl(holder);

  V8SetReturnValueBool(info, impl->rtcRtpSenderParametersEnabled());
}

static void RTCSctpTransportEnabledAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  InternalRuntimeFlags* impl = V8InternalRuntimeFlags::ToImpl(holder);

  V8SetReturnValueBool(info, impl->rtcSctpTransportEnabled());
}

static void RTCStatsRelativePacketArrivalDelayEnabledAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  InternalRuntimeFlags* impl = V8InternalRuntimeFlags::ToImpl(holder);

  V8SetReturnValueBool(info, impl->rtcStatsRelativePacketArrivalDelayEnabled());
}

static void RTCUnifiedPlanEnabledAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  InternalRuntimeFlags* impl = V8InternalRuntimeFlags::ToImpl(holder);

  V8SetReturnValueBool(info, impl->rtcUnifiedPlanEnabled());
}

static void RTCUnifiedPlanByDefaultEnabledAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  InternalRuntimeFlags* impl = V8InternalRuntimeFlags::ToImpl(holder);

  V8SetReturnValueBool(info, impl->rtcUnifiedPlanByDefaultEnabled());
}

static void ScriptedSpeechRecognitionEnabledAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  InternalRuntimeFlags* impl = V8InternalRuntimeFlags::ToImpl(holder);

  V8SetReturnValueBool(info, impl->scriptedSpeechRecognitionEnabled());
}

static void ScriptedSpeechSynthesisEnabledAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  InternalRuntimeFlags* impl = V8InternalRuntimeFlags::ToImpl(holder);

  V8SetReturnValueBool(info, impl->scriptedSpeechSynthesisEnabled());
}

static void ScriptStreamingOnPreloadEnabledAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  InternalRuntimeFlags* impl = V8InternalRuntimeFlags::ToImpl(holder);

  V8SetReturnValueBool(info, impl->scriptStreamingOnPreloadEnabled());
}

static void ScrollAnchorSerializationEnabledAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  InternalRuntimeFlags* impl = V8InternalRuntimeFlags::ToImpl(holder);

  V8SetReturnValueBool(info, impl->scrollAnchorSerializationEnabled());
}

static void ScrollCustomizationEnabledAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  InternalRuntimeFlags* impl = V8InternalRuntimeFlags::ToImpl(holder);

  V8SetReturnValueBool(info, impl->scrollCustomizationEnabled());
}

static void ScrollTopLeftInteropEnabledAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  InternalRuntimeFlags* impl = V8InternalRuntimeFlags::ToImpl(holder);

  V8SetReturnValueBool(info, impl->scrollTopLeftInteropEnabled());
}

static void SendBeaconThrowForBlobWithNonSimpleTypeEnabledAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  InternalRuntimeFlags* impl = V8InternalRuntimeFlags::ToImpl(holder);

  V8SetReturnValueBool(info, impl->sendBeaconThrowForBlobWithNonSimpleTypeEnabled());
}

static void SendMouseEventsDisabledFormControlsEnabledAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  InternalRuntimeFlags* impl = V8InternalRuntimeFlags::ToImpl(holder);

  V8SetReturnValueBool(info, impl->sendMouseEventsDisabledFormControlsEnabled());
}

static void SensorEnabledAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  InternalRuntimeFlags* impl = V8InternalRuntimeFlags::ToImpl(holder);

  V8SetReturnValueBool(info, impl->sensorEnabled());
}

static void SensorExtraClassesEnabledAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  InternalRuntimeFlags* impl = V8InternalRuntimeFlags::ToImpl(holder);

  V8SetReturnValueBool(info, impl->sensorExtraClassesEnabled());
}

static void SerialEnabledAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  InternalRuntimeFlags* impl = V8InternalRuntimeFlags::ToImpl(holder);

  V8SetReturnValueBool(info, impl->serialEnabled());
}

static void SetRootScrollerEnabledAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  InternalRuntimeFlags* impl = V8InternalRuntimeFlags::ToImpl(holder);

  V8SetReturnValueBool(info, impl->setRootScrollerEnabled());
}

static void ShadowDOMV0EnabledAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  InternalRuntimeFlags* impl = V8InternalRuntimeFlags::ToImpl(holder);

  V8SetReturnValueBool(info, impl->shadowDOMV0Enabled());
}

static void ShadowPiercingDescendantCombinatorEnabledAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  InternalRuntimeFlags* impl = V8InternalRuntimeFlags::ToImpl(holder);

  V8SetReturnValueBool(info, impl->shadowPiercingDescendantCombinatorEnabled());
}

static void ShapeDetectionEnabledAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  InternalRuntimeFlags* impl = V8InternalRuntimeFlags::ToImpl(holder);

  V8SetReturnValueBool(info, impl->shapeDetectionEnabled());
}

static void SharedArrayBufferEnabledAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  InternalRuntimeFlags* impl = V8InternalRuntimeFlags::ToImpl(holder);

  V8SetReturnValueBool(info, impl->sharedArrayBufferEnabled());
}

static void SharedWorkerEnabledAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  InternalRuntimeFlags* impl = V8InternalRuntimeFlags::ToImpl(holder);

  V8SetReturnValueBool(info, impl->sharedWorkerEnabled());
}

static void SignatureBasedIntegrityEnabledAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  InternalRuntimeFlags* impl = V8InternalRuntimeFlags::ToImpl(holder);

  V8SetReturnValueBool(info, impl->signatureBasedIntegrityEnabled());
}

static void SignedExchangeSubresourcePrefetchEnabledAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  InternalRuntimeFlags* impl = V8InternalRuntimeFlags::ToImpl(holder);

  V8SetReturnValueBool(info, impl->signedExchangeSubresourcePrefetchEnabled());
}

static void SkipAdEnabledAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  InternalRuntimeFlags* impl = V8InternalRuntimeFlags::ToImpl(holder);

  V8SetReturnValueBool(info, impl->skipAdEnabled());
}

static void SkipTouchEventFilterEnabledAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  InternalRuntimeFlags* impl = V8InternalRuntimeFlags::ToImpl(holder);

  V8SetReturnValueBool(info, impl->skipTouchEventFilterEnabled());
}

static void SkipTouchEventFilterEnabledAttributeSetter(
    v8::Local<v8::Value> v8_value, const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Isolate* isolate = info.GetIsolate();
  ALLOW_UNUSED_LOCAL(isolate);

  v8::Local<v8::Object> holder = info.Holder();
  ALLOW_UNUSED_LOCAL(holder);

  InternalRuntimeFlags* impl = V8InternalRuntimeFlags::ToImpl(holder);

  ExceptionState exception_state(isolate, ExceptionState::kSetterContext, "InternalRuntimeFlags", "skipTouchEventFilterEnabled");

  // Prepare the value to be set.
  bool cpp_value = NativeValueTraits<IDLBoolean>::NativeValue(info.GetIsolate(), v8_value, exception_state);
  if (exception_state.HadException())
    return;

  impl->setSkipTouchEventFilterEnabled(cpp_value);
}

static void SmoothScrollJSInterventionEnabledAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  InternalRuntimeFlags* impl = V8InternalRuntimeFlags::ToImpl(holder);

  V8SetReturnValueBool(info, impl->smoothScrollJSInterventionEnabled());
}

static void SmsReceiverEnabledAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  InternalRuntimeFlags* impl = V8InternalRuntimeFlags::ToImpl(holder);

  V8SetReturnValueBool(info, impl->smsReceiverEnabled());
}

static void SpeechSynthesisEventCharLengthEnabledAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  InternalRuntimeFlags* impl = V8InternalRuntimeFlags::ToImpl(holder);

  V8SetReturnValueBool(info, impl->speechSynthesisEventCharLengthEnabled());
}

static void StableBlinkFeaturesEnabledAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  InternalRuntimeFlags* impl = V8InternalRuntimeFlags::ToImpl(holder);

  V8SetReturnValueBool(info, impl->stableBlinkFeaturesEnabled());
}

static void StackedCSSPropertyAnimationsEnabledAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  InternalRuntimeFlags* impl = V8InternalRuntimeFlags::ToImpl(holder);

  V8SetReturnValueBool(info, impl->stackedCSSPropertyAnimationsEnabled());
}

static void StaleWhileRevalidateEnabledAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  InternalRuntimeFlags* impl = V8InternalRuntimeFlags::ToImpl(holder);

  V8SetReturnValueBool(info, impl->staleWhileRevalidateEnabled());
}

static void StorageQuotaDetailsEnabledAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  InternalRuntimeFlags* impl = V8InternalRuntimeFlags::ToImpl(holder);

  V8SetReturnValueBool(info, impl->storageQuotaDetailsEnabled());
}

static void StreamsNativeEnabledAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  InternalRuntimeFlags* impl = V8InternalRuntimeFlags::ToImpl(holder);

  V8SetReturnValueBool(info, impl->streamsNativeEnabled());
}

static void TextFragmentIdentifiersEnabledAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  InternalRuntimeFlags* impl = V8InternalRuntimeFlags::ToImpl(holder);

  V8SetReturnValueBool(info, impl->textFragmentIdentifiersEnabled());
}

static void TextUnderlinePositionLeftRightEnabledAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  InternalRuntimeFlags* impl = V8InternalRuntimeFlags::ToImpl(holder);

  V8SetReturnValueBool(info, impl->textUnderlinePositionLeftRightEnabled());
}

static void TimerThrottlingForBackgroundTabsEnabledAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  InternalRuntimeFlags* impl = V8InternalRuntimeFlags::ToImpl(holder);

  V8SetReturnValueBool(info, impl->timerThrottlingForBackgroundTabsEnabled());
}

static void TimerThrottlingForHiddenFramesEnabledAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  InternalRuntimeFlags* impl = V8InternalRuntimeFlags::ToImpl(holder);

  V8SetReturnValueBool(info, impl->timerThrottlingForHiddenFramesEnabled());
}

static void TouchEventFeatureDetectionEnabledAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  InternalRuntimeFlags* impl = V8InternalRuntimeFlags::ToImpl(holder);

  V8SetReturnValueBool(info, impl->touchEventFeatureDetectionEnabled());
}

static void TrackLayoutPassesPerBlockEnabledAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  InternalRuntimeFlags* impl = V8InternalRuntimeFlags::ToImpl(holder);

  V8SetReturnValueBool(info, impl->trackLayoutPassesPerBlockEnabled());
}

static void TransferableStreamsEnabledAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  InternalRuntimeFlags* impl = V8InternalRuntimeFlags::ToImpl(holder);

  V8SetReturnValueBool(info, impl->transferableStreamsEnabled());
}

static void TranslateServiceEnabledAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  InternalRuntimeFlags* impl = V8InternalRuntimeFlags::ToImpl(holder);

  V8SetReturnValueBool(info, impl->translateServiceEnabled());
}

static void TrustedDOMTypesEnabledAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  InternalRuntimeFlags* impl = V8InternalRuntimeFlags::ToImpl(holder);

  V8SetReturnValueBool(info, impl->trustedDOMTypesEnabled());
}

static void UnclosedFormControlIsInvalidEnabledAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  InternalRuntimeFlags* impl = V8InternalRuntimeFlags::ToImpl(holder);

  V8SetReturnValueBool(info, impl->unclosedFormControlIsInvalidEnabled());
}

static void UnifiedPointerCaptureInBlinkEnabledAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  InternalRuntimeFlags* impl = V8InternalRuntimeFlags::ToImpl(holder);

  V8SetReturnValueBool(info, impl->unifiedPointerCaptureInBlinkEnabled());
}

static void UnifiedTouchAdjustmentEnabledAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  InternalRuntimeFlags* impl = V8InternalRuntimeFlags::ToImpl(holder);

  V8SetReturnValueBool(info, impl->unifiedTouchAdjustmentEnabled());
}

static void UnoptimizedImagePoliciesEnabledAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  InternalRuntimeFlags* impl = V8InternalRuntimeFlags::ToImpl(holder);

  V8SetReturnValueBool(info, impl->unoptimizedImagePoliciesEnabled());
}

static void UpdateHoverFromLayoutChangeAtBeginFrameEnabledAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  InternalRuntimeFlags* impl = V8InternalRuntimeFlags::ToImpl(holder);

  V8SetReturnValueBool(info, impl->updateHoverFromLayoutChangeAtBeginFrameEnabled());
}

static void UpdateHoverFromLayoutChangeAtBeginFrameEnabledAttributeSetter(
    v8::Local<v8::Value> v8_value, const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Isolate* isolate = info.GetIsolate();
  ALLOW_UNUSED_LOCAL(isolate);

  v8::Local<v8::Object> holder = info.Holder();
  ALLOW_UNUSED_LOCAL(holder);

  InternalRuntimeFlags* impl = V8InternalRuntimeFlags::ToImpl(holder);

  ExceptionState exception_state(isolate, ExceptionState::kSetterContext, "InternalRuntimeFlags", "updateHoverFromLayoutChangeAtBeginFrameEnabled");

  // Prepare the value to be set.
  bool cpp_value = NativeValueTraits<IDLBoolean>::NativeValue(info.GetIsolate(), v8_value, exception_state);
  if (exception_state.HadException())
    return;

  impl->setUpdateHoverFromLayoutChangeAtBeginFrameEnabled(cpp_value);
}

static void UpdateHoverFromScrollAtBeginFrameEnabledAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  InternalRuntimeFlags* impl = V8InternalRuntimeFlags::ToImpl(holder);

  V8SetReturnValueBool(info, impl->updateHoverFromScrollAtBeginFrameEnabled());
}

static void UpdateHoverFromScrollAtBeginFrameEnabledAttributeSetter(
    v8::Local<v8::Value> v8_value, const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Isolate* isolate = info.GetIsolate();
  ALLOW_UNUSED_LOCAL(isolate);

  v8::Local<v8::Object> holder = info.Holder();
  ALLOW_UNUSED_LOCAL(holder);

  InternalRuntimeFlags* impl = V8InternalRuntimeFlags::ToImpl(holder);

  ExceptionState exception_state(isolate, ExceptionState::kSetterContext, "InternalRuntimeFlags", "updateHoverFromScrollAtBeginFrameEnabled");

  // Prepare the value to be set.
  bool cpp_value = NativeValueTraits<IDLBoolean>::NativeValue(info.GetIsolate(), v8_value, exception_state);
  if (exception_state.HadException())
    return;

  impl->setUpdateHoverFromScrollAtBeginFrameEnabled(cpp_value);
}

static void UserActivationAPIEnabledAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  InternalRuntimeFlags* impl = V8InternalRuntimeFlags::ToImpl(holder);

  V8SetReturnValueBool(info, impl->userActivationAPIEnabled());
}

static void UserActivationPostMessageTransferEnabledAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  InternalRuntimeFlags* impl = V8InternalRuntimeFlags::ToImpl(holder);

  V8SetReturnValueBool(info, impl->userActivationPostMessageTransferEnabled());
}

static void UserActivationSameOriginVisibilityEnabledAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  InternalRuntimeFlags* impl = V8InternalRuntimeFlags::ToImpl(holder);

  V8SetReturnValueBool(info, impl->userActivationSameOriginVisibilityEnabled());
}

static void UserActivationV2EnabledAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  InternalRuntimeFlags* impl = V8InternalRuntimeFlags::ToImpl(holder);

  V8SetReturnValueBool(info, impl->userActivationV2Enabled());
}

static void UserAgentClientHintEnabledAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  InternalRuntimeFlags* impl = V8InternalRuntimeFlags::ToImpl(holder);

  V8SetReturnValueBool(info, impl->userAgentClientHintEnabled());
}

static void V8IdleTasksEnabledAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  InternalRuntimeFlags* impl = V8InternalRuntimeFlags::ToImpl(holder);

  V8SetReturnValueBool(info, impl->v8IdleTasksEnabled());
}

static void VideoAutoFullscreenEnabledAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  InternalRuntimeFlags* impl = V8InternalRuntimeFlags::ToImpl(holder);

  V8SetReturnValueBool(info, impl->videoAutoFullscreenEnabled());
}

static void VideoAutoFullscreenEnabledAttributeSetter(
    v8::Local<v8::Value> v8_value, const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Isolate* isolate = info.GetIsolate();
  ALLOW_UNUSED_LOCAL(isolate);

  v8::Local<v8::Object> holder = info.Holder();
  ALLOW_UNUSED_LOCAL(holder);

  InternalRuntimeFlags* impl = V8InternalRuntimeFlags::ToImpl(holder);

  ExceptionState exception_state(isolate, ExceptionState::kSetterContext, "InternalRuntimeFlags", "videoAutoFullscreenEnabled");

  // Prepare the value to be set.
  bool cpp_value = NativeValueTraits<IDLBoolean>::NativeValue(info.GetIsolate(), v8_value, exception_state);
  if (exception_state.HadException())
    return;

  impl->setVideoAutoFullscreenEnabled(cpp_value);
}

static void VideoFullscreenDetectionEnabledAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  InternalRuntimeFlags* impl = V8InternalRuntimeFlags::ToImpl(holder);

  V8SetReturnValueBool(info, impl->videoFullscreenDetectionEnabled());
}

static void VideoFullscreenOrientationLockEnabledAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  InternalRuntimeFlags* impl = V8InternalRuntimeFlags::ToImpl(holder);

  V8SetReturnValueBool(info, impl->videoFullscreenOrientationLockEnabled());
}

static void VideoRotateToFullscreenEnabledAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  InternalRuntimeFlags* impl = V8InternalRuntimeFlags::ToImpl(holder);

  V8SetReturnValueBool(info, impl->videoRotateToFullscreenEnabled());
}

static void VisibilityCollapseColumnEnabledAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  InternalRuntimeFlags* impl = V8InternalRuntimeFlags::ToImpl(holder);

  V8SetReturnValueBool(info, impl->visibilityCollapseColumnEnabled());
}

static void WakeLockNavigatorEnabledAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  InternalRuntimeFlags* impl = V8InternalRuntimeFlags::ToImpl(holder);

  V8SetReturnValueBool(info, impl->wakeLockNavigatorEnabled());
}

static void WasmCodeCacheEnabledAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  InternalRuntimeFlags* impl = V8InternalRuntimeFlags::ToImpl(holder);

  V8SetReturnValueBool(info, impl->wasmCodeCacheEnabled());
}

static void WebAnimationsAPIEnabledAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  InternalRuntimeFlags* impl = V8InternalRuntimeFlags::ToImpl(holder);

  V8SetReturnValueBool(info, impl->webAnimationsAPIEnabled());
}

static void WebAnimationsSVGEnabledAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  InternalRuntimeFlags* impl = V8InternalRuntimeFlags::ToImpl(holder);

  V8SetReturnValueBool(info, impl->webAnimationsSVGEnabled());
}

static void WebAssemblyThreadsEnabledAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  InternalRuntimeFlags* impl = V8InternalRuntimeFlags::ToImpl(holder);

  V8SetReturnValueBool(info, impl->webAssemblyThreadsEnabled());
}

static void WebAuthEnabledAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  InternalRuntimeFlags* impl = V8InternalRuntimeFlags::ToImpl(holder);

  V8SetReturnValueBool(info, impl->webAuthEnabled());
}

static void WebBluetoothEnabledAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  InternalRuntimeFlags* impl = V8InternalRuntimeFlags::ToImpl(holder);

  V8SetReturnValueBool(info, impl->webBluetoothEnabled());
}

static void WebBluetoothScanningEnabledAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  InternalRuntimeFlags* impl = V8InternalRuntimeFlags::ToImpl(holder);

  V8SetReturnValueBool(info, impl->webBluetoothScanningEnabled());
}

static void WebGL2ComputeContextEnabledAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  InternalRuntimeFlags* impl = V8InternalRuntimeFlags::ToImpl(holder);

  V8SetReturnValueBool(info, impl->webgl2ComputeContextEnabled());
}

static void WebGLDraftExtensionsEnabledAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  InternalRuntimeFlags* impl = V8InternalRuntimeFlags::ToImpl(holder);

  V8SetReturnValueBool(info, impl->webglDraftExtensionsEnabled());
}

static void WebGLImageChromiumEnabledAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  InternalRuntimeFlags* impl = V8InternalRuntimeFlags::ToImpl(holder);

  V8SetReturnValueBool(info, impl->webglImageChromiumEnabled());
}

static void WebGPUEnabledAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  InternalRuntimeFlags* impl = V8InternalRuntimeFlags::ToImpl(holder);

  V8SetReturnValueBool(info, impl->webgpuEnabled());
}

static void WebHIDEnabledAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  InternalRuntimeFlags* impl = V8InternalRuntimeFlags::ToImpl(holder);

  V8SetReturnValueBool(info, impl->webHIDEnabled());
}

static void WebNFCEnabledAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  InternalRuntimeFlags* impl = V8InternalRuntimeFlags::ToImpl(holder);

  V8SetReturnValueBool(info, impl->webNFCEnabled());
}

static void WebShareEnabledAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  InternalRuntimeFlags* impl = V8InternalRuntimeFlags::ToImpl(holder);

  V8SetReturnValueBool(info, impl->webShareEnabled());
}

static void WebShareV2EnabledAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  InternalRuntimeFlags* impl = V8InternalRuntimeFlags::ToImpl(holder);

  V8SetReturnValueBool(info, impl->webShareV2Enabled());
}

static void WebUSBEnabledAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  InternalRuntimeFlags* impl = V8InternalRuntimeFlags::ToImpl(holder);

  V8SetReturnValueBool(info, impl->webUSBEnabled());
}

static void WebUSBOnDedicatedWorkersEnabledAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  InternalRuntimeFlags* impl = V8InternalRuntimeFlags::ToImpl(holder);

  V8SetReturnValueBool(info, impl->webUSBOnDedicatedWorkersEnabled());
}

static void WebVREnabledAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  InternalRuntimeFlags* impl = V8InternalRuntimeFlags::ToImpl(holder);

  V8SetReturnValueBool(info, impl->webVREnabled());
}

static void WebVTTRegionsEnabledAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  InternalRuntimeFlags* impl = V8InternalRuntimeFlags::ToImpl(holder);

  V8SetReturnValueBool(info, impl->webVTTRegionsEnabled());
}

static void WebXREnabledAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  InternalRuntimeFlags* impl = V8InternalRuntimeFlags::ToImpl(holder);

  V8SetReturnValueBool(info, impl->webXREnabled());
}

static void WebXRHitTestEnabledAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  InternalRuntimeFlags* impl = V8InternalRuntimeFlags::ToImpl(holder);

  V8SetReturnValueBool(info, impl->webXRHitTestEnabled());
}

static void WebXRPlaneDetectionEnabledAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  InternalRuntimeFlags* impl = V8InternalRuntimeFlags::ToImpl(holder);

  V8SetReturnValueBool(info, impl->webXRPlaneDetectionEnabled());
}

static void WorkerNosniffBlockEnabledAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  InternalRuntimeFlags* impl = V8InternalRuntimeFlags::ToImpl(holder);

  V8SetReturnValueBool(info, impl->workerNosniffBlockEnabled());
}

static void WorkerNosniffWarnEnabledAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  InternalRuntimeFlags* impl = V8InternalRuntimeFlags::ToImpl(holder);

  V8SetReturnValueBool(info, impl->workerNosniffWarnEnabled());
}

static void WorkerTaskQueueEnabledAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  InternalRuntimeFlags* impl = V8InternalRuntimeFlags::ToImpl(holder);

  V8SetReturnValueBool(info, impl->workerTaskQueueEnabled());
}

static void XsltEnabledAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  InternalRuntimeFlags* impl = V8InternalRuntimeFlags::ToImpl(holder);

  V8SetReturnValueBool(info, impl->xsltEnabled());
}

}  // namespace internal_runtime_flags_v8_internal

void V8InternalRuntimeFlags::Accelerated2dCanvasEnabledAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_InternalRuntimeFlags_accelerated2dCanvasEnabled_Getter");

  internal_runtime_flags_v8_internal::Accelerated2dCanvasEnabledAttributeGetter(info);
}

void V8InternalRuntimeFlags::Accelerated2dCanvasEnabledAttributeSetterCallback(
    const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_InternalRuntimeFlags_accelerated2dCanvasEnabled_Setter");

  v8::Local<v8::Value> v8_value = info[0];

  internal_runtime_flags_v8_internal::Accelerated2dCanvasEnabledAttributeSetter(v8_value, info);
}

void V8InternalRuntimeFlags::AccessibilityObjectModelEnabledAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_InternalRuntimeFlags_accessibilityObjectModelEnabled_Getter");

  internal_runtime_flags_v8_internal::AccessibilityObjectModelEnabledAttributeGetter(info);
}

void V8InternalRuntimeFlags::AdTaggingEnabledAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_InternalRuntimeFlags_adTaggingEnabled_Getter");

  internal_runtime_flags_v8_internal::AdTaggingEnabledAttributeGetter(info);
}

void V8InternalRuntimeFlags::AllowActivationDelegationAttrEnabledAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_InternalRuntimeFlags_allowActivationDelegationAttrEnabled_Getter");

  internal_runtime_flags_v8_internal::AllowActivationDelegationAttrEnabledAttributeGetter(info);
}

void V8InternalRuntimeFlags::AllowContentInitiatedDataUrlNavigationsEnabledAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_InternalRuntimeFlags_allowContentInitiatedDataUrlNavigationsEnabled_Getter");

  internal_runtime_flags_v8_internal::AllowContentInitiatedDataUrlNavigationsEnabledAttributeGetter(info);
}

void V8InternalRuntimeFlags::AnimationWorkletEnabledAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_InternalRuntimeFlags_animationWorkletEnabled_Getter");

  internal_runtime_flags_v8_internal::AnimationWorkletEnabledAttributeGetter(info);
}

void V8InternalRuntimeFlags::AsyncClipboardEnabledAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_InternalRuntimeFlags_asyncClipboardEnabled_Getter");

  internal_runtime_flags_v8_internal::AsyncClipboardEnabledAttributeGetter(info);
}

void V8InternalRuntimeFlags::AudioOutputDevicesEnabledAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_InternalRuntimeFlags_audioOutputDevicesEnabled_Getter");

  internal_runtime_flags_v8_internal::AudioOutputDevicesEnabledAttributeGetter(info);
}

void V8InternalRuntimeFlags::AudioVideoTracksEnabledAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_InternalRuntimeFlags_audioVideoTracksEnabled_Getter");

  internal_runtime_flags_v8_internal::AudioVideoTracksEnabledAttributeGetter(info);
}

void V8InternalRuntimeFlags::AutomationControlledEnabledAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_InternalRuntimeFlags_automationControlledEnabled_Getter");

  internal_runtime_flags_v8_internal::AutomationControlledEnabledAttributeGetter(info);
}

void V8InternalRuntimeFlags::AutomationControlledEnabledAttributeSetterCallback(
    const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_InternalRuntimeFlags_automationControlledEnabled_Setter");

  v8::Local<v8::Value> v8_value = info[0];

  internal_runtime_flags_v8_internal::AutomationControlledEnabledAttributeSetter(v8_value, info);
}

void V8InternalRuntimeFlags::AutoPictureInPictureEnabledAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_InternalRuntimeFlags_autoPictureInPictureEnabled_Getter");

  internal_runtime_flags_v8_internal::AutoPictureInPictureEnabledAttributeGetter(info);
}

void V8InternalRuntimeFlags::AutoplayIgnoresWebAudioEnabledAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_InternalRuntimeFlags_autoplayIgnoresWebAudioEnabled_Getter");

  internal_runtime_flags_v8_internal::AutoplayIgnoresWebAudioEnabledAttributeGetter(info);
}

void V8InternalRuntimeFlags::AutoplayIgnoresWebAudioEnabledAttributeSetterCallback(
    const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_InternalRuntimeFlags_autoplayIgnoresWebAudioEnabled_Setter");

  v8::Local<v8::Value> v8_value = info[0];

  internal_runtime_flags_v8_internal::AutoplayIgnoresWebAudioEnabledAttributeSetter(v8_value, info);
}

void V8InternalRuntimeFlags::BackgroundFetchEnabledAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_InternalRuntimeFlags_backgroundFetchEnabled_Getter");

  internal_runtime_flags_v8_internal::BackgroundFetchEnabledAttributeGetter(info);
}

void V8InternalRuntimeFlags::BackgroundVideoTrackOptimizationEnabledAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_InternalRuntimeFlags_backgroundVideoTrackOptimizationEnabled_Getter");

  internal_runtime_flags_v8_internal::BackgroundVideoTrackOptimizationEnabledAttributeGetter(info);
}

void V8InternalRuntimeFlags::BadgingEnabledAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_InternalRuntimeFlags_badgingEnabled_Getter");

  internal_runtime_flags_v8_internal::BadgingEnabledAttributeGetter(info);
}

void V8InternalRuntimeFlags::BidiCaretAffinityEnabledAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_InternalRuntimeFlags_bidiCaretAffinityEnabled_Getter");

  internal_runtime_flags_v8_internal::BidiCaretAffinityEnabledAttributeGetter(info);
}

void V8InternalRuntimeFlags::BlinkGenPropertyTreesEnabledAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_InternalRuntimeFlags_blinkGenPropertyTreesEnabled_Getter");

  internal_runtime_flags_v8_internal::BlinkGenPropertyTreesEnabledAttributeGetter(info);
}

void V8InternalRuntimeFlags::BlinkRuntimeCallStatsEnabledAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_InternalRuntimeFlags_blinkRuntimeCallStatsEnabled_Getter");

  internal_runtime_flags_v8_internal::BlinkRuntimeCallStatsEnabledAttributeGetter(info);
}

void V8InternalRuntimeFlags::BloatedRendererDetectionEnabledAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_InternalRuntimeFlags_bloatedRendererDetectionEnabled_Getter");

  internal_runtime_flags_v8_internal::BloatedRendererDetectionEnabledAttributeGetter(info);
}

void V8InternalRuntimeFlags::BloatedRendererDetectionSkipUptimeCheckEnabledAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_InternalRuntimeFlags_bloatedRendererDetectionSkipUptimeCheckEnabled_Getter");

  internal_runtime_flags_v8_internal::BloatedRendererDetectionSkipUptimeCheckEnabledAttributeGetter(info);
}

void V8InternalRuntimeFlags::BlobReadMethodsEnabledAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_InternalRuntimeFlags_blobReadMethodsEnabled_Getter");

  internal_runtime_flags_v8_internal::BlobReadMethodsEnabledAttributeGetter(info);
}

void V8InternalRuntimeFlags::BlockCredentialedSubresourcesEnabledAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_InternalRuntimeFlags_blockCredentialedSubresourcesEnabled_Getter");

  internal_runtime_flags_v8_internal::BlockCredentialedSubresourcesEnabledAttributeGetter(info);
}

void V8InternalRuntimeFlags::BlockingDownloadsInSandboxWithoutUserActivationEnabledAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_InternalRuntimeFlags_blockingDownloadsInSandboxWithoutUserActivationEnabled_Getter");

  internal_runtime_flags_v8_internal::BlockingDownloadsInSandboxWithoutUserActivationEnabledAttributeGetter(info);
}

void V8InternalRuntimeFlags::BlockMetaSetCookieEnabledAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_InternalRuntimeFlags_blockMetaSetCookieEnabled_Getter");

  internal_runtime_flags_v8_internal::BlockMetaSetCookieEnabledAttributeGetter(info);
}

void V8InternalRuntimeFlags::BuiltInModuleAllEnabledAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_InternalRuntimeFlags_builtInModuleAllEnabled_Getter");

  internal_runtime_flags_v8_internal::BuiltInModuleAllEnabledAttributeGetter(info);
}

void V8InternalRuntimeFlags::BuiltInModuleInfraEnabledAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_InternalRuntimeFlags_builtInModuleInfraEnabled_Getter");

  internal_runtime_flags_v8_internal::BuiltInModuleInfraEnabledAttributeGetter(info);
}

void V8InternalRuntimeFlags::BuiltInModuleKvStorageEnabledAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_InternalRuntimeFlags_builtInModuleKvStorageEnabled_Getter");

  internal_runtime_flags_v8_internal::BuiltInModuleKvStorageEnabledAttributeGetter(info);
}

void V8InternalRuntimeFlags::CacheInlineScriptCodeEnabledAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_InternalRuntimeFlags_cacheInlineScriptCodeEnabled_Getter");

  internal_runtime_flags_v8_internal::CacheInlineScriptCodeEnabledAttributeGetter(info);
}

void V8InternalRuntimeFlags::CacheStorageAddAllRejectsDuplicatesEnabledAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_InternalRuntimeFlags_cacheStorageAddAllRejectsDuplicatesEnabled_Getter");

  internal_runtime_flags_v8_internal::CacheStorageAddAllRejectsDuplicatesEnabledAttributeGetter(info);
}

void V8InternalRuntimeFlags::CallCaptureListenersAtCapturePhaseAtShadowHostsEnabledAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_InternalRuntimeFlags_callCaptureListenersAtCapturePhaseAtShadowHostsEnabled_Getter");

  internal_runtime_flags_v8_internal::CallCaptureListenersAtCapturePhaseAtShadowHostsEnabledAttributeGetter(info);
}

void V8InternalRuntimeFlags::Canvas2dContextLostRestoredEnabledAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_InternalRuntimeFlags_canvas2dContextLostRestoredEnabled_Getter");

  internal_runtime_flags_v8_internal::Canvas2dContextLostRestoredEnabledAttributeGetter(info);
}

void V8InternalRuntimeFlags::Canvas2dFixedRenderingModeEnabledAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_InternalRuntimeFlags_canvas2dFixedRenderingModeEnabled_Getter");

  internal_runtime_flags_v8_internal::Canvas2dFixedRenderingModeEnabledAttributeGetter(info);
}

void V8InternalRuntimeFlags::Canvas2dImageChromiumEnabledAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_InternalRuntimeFlags_canvas2dImageChromiumEnabled_Getter");

  internal_runtime_flags_v8_internal::Canvas2dImageChromiumEnabledAttributeGetter(info);
}

void V8InternalRuntimeFlags::Canvas2dScrollPathIntoViewEnabledAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_InternalRuntimeFlags_canvas2dScrollPathIntoViewEnabled_Getter");

  internal_runtime_flags_v8_internal::Canvas2dScrollPathIntoViewEnabledAttributeGetter(info);
}

void V8InternalRuntimeFlags::CanvasColorManagementEnabledAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_InternalRuntimeFlags_canvasColorManagementEnabled_Getter");

  internal_runtime_flags_v8_internal::CanvasColorManagementEnabledAttributeGetter(info);
}

void V8InternalRuntimeFlags::CanvasHitRegionEnabledAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_InternalRuntimeFlags_canvasHitRegionEnabled_Getter");

  internal_runtime_flags_v8_internal::CanvasHitRegionEnabledAttributeGetter(info);
}

void V8InternalRuntimeFlags::CanvasImageSmoothingEnabledAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_InternalRuntimeFlags_canvasImageSmoothingEnabled_Getter");

  internal_runtime_flags_v8_internal::CanvasImageSmoothingEnabledAttributeGetter(info);
}

void V8InternalRuntimeFlags::ClickRetargettingEnabledAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_InternalRuntimeFlags_clickRetargettingEnabled_Getter");

  internal_runtime_flags_v8_internal::ClickRetargettingEnabledAttributeGetter(info);
}

void V8InternalRuntimeFlags::ClientPlaceholdersForServerLoFiEnabledAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_InternalRuntimeFlags_clientPlaceholdersForServerLoFiEnabled_Getter");

  internal_runtime_flags_v8_internal::ClientPlaceholdersForServerLoFiEnabledAttributeGetter(info);
}

void V8InternalRuntimeFlags::CompositeAfterPaintEnabledAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_InternalRuntimeFlags_compositeAfterPaintEnabled_Getter");

  internal_runtime_flags_v8_internal::CompositeAfterPaintEnabledAttributeGetter(info);
}

void V8InternalRuntimeFlags::CompositedSelectionUpdateEnabledAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_InternalRuntimeFlags_compositedSelectionUpdateEnabled_Getter");

  internal_runtime_flags_v8_internal::CompositedSelectionUpdateEnabledAttributeGetter(info);
}

void V8InternalRuntimeFlags::CompositorTouchActionEnabledAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_InternalRuntimeFlags_compositorTouchActionEnabled_Getter");

  internal_runtime_flags_v8_internal::CompositorTouchActionEnabledAttributeGetter(info);
}

void V8InternalRuntimeFlags::ComputedAccessibilityInfoEnabledAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_InternalRuntimeFlags_computedAccessibilityInfoEnabled_Getter");

  internal_runtime_flags_v8_internal::ComputedAccessibilityInfoEnabledAttributeGetter(info);
}

void V8InternalRuntimeFlags::ContactsManagerEnabledAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_InternalRuntimeFlags_contactsManagerEnabled_Getter");

  internal_runtime_flags_v8_internal::ContactsManagerEnabledAttributeGetter(info);
}

void V8InternalRuntimeFlags::ContextMenuEnabledAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_InternalRuntimeFlags_contextMenuEnabled_Getter");

  internal_runtime_flags_v8_internal::ContextMenuEnabledAttributeGetter(info);
}

void V8InternalRuntimeFlags::CookieStoreEnabledAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_InternalRuntimeFlags_cookieStoreEnabled_Getter");

  internal_runtime_flags_v8_internal::CookieStoreEnabledAttributeGetter(info);
}

void V8InternalRuntimeFlags::CorsRFC1918EnabledAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_InternalRuntimeFlags_corsRFC1918Enabled_Getter");

  internal_runtime_flags_v8_internal::CorsRFC1918EnabledAttributeGetter(info);
}

void V8InternalRuntimeFlags::CSS3TextEnabledAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_InternalRuntimeFlags_css3TextEnabled_Getter");

  internal_runtime_flags_v8_internal::CSS3TextEnabledAttributeGetter(info);
}

void V8InternalRuntimeFlags::CSSAdditiveAnimationsEnabledAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_InternalRuntimeFlags_cssAdditiveAnimationsEnabled_Getter");

  internal_runtime_flags_v8_internal::CSSAdditiveAnimationsEnabledAttributeGetter(info);
}

void V8InternalRuntimeFlags::CSSAltTextEnabledAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_InternalRuntimeFlags_cssAltTextEnabled_Getter");

  internal_runtime_flags_v8_internal::CSSAltTextEnabledAttributeGetter(info);
}

void V8InternalRuntimeFlags::CSSBackdropFilterEnabledAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_InternalRuntimeFlags_cssBackdropFilterEnabled_Getter");

  internal_runtime_flags_v8_internal::CSSBackdropFilterEnabledAttributeGetter(info);
}

void V8InternalRuntimeFlags::CSSCalcAsIntEnabledAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_InternalRuntimeFlags_cssCalcAsIntEnabled_Getter");

  internal_runtime_flags_v8_internal::CSSCalcAsIntEnabledAttributeGetter(info);
}

void V8InternalRuntimeFlags::CSSFocusVisibleEnabledAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_InternalRuntimeFlags_cssFocusVisibleEnabled_Getter");

  internal_runtime_flags_v8_internal::CSSFocusVisibleEnabledAttributeGetter(info);
}

void V8InternalRuntimeFlags::CSSFontFeatureValuesEnabledAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_InternalRuntimeFlags_cssFontFeatureValuesEnabled_Getter");

  internal_runtime_flags_v8_internal::CSSFontFeatureValuesEnabledAttributeGetter(info);
}

void V8InternalRuntimeFlags::CSSFontSizeAdjustEnabledAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_InternalRuntimeFlags_cssFontSizeAdjustEnabled_Getter");

  internal_runtime_flags_v8_internal::CSSFontSizeAdjustEnabledAttributeGetter(info);
}

void V8InternalRuntimeFlags::CSSHexAlphaColorEnabledAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_InternalRuntimeFlags_cssHexAlphaColorEnabled_Getter");

  internal_runtime_flags_v8_internal::CSSHexAlphaColorEnabledAttributeGetter(info);
}

void V8InternalRuntimeFlags::CSSIndependentTransformPropertiesEnabledAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_InternalRuntimeFlags_cssIndependentTransformPropertiesEnabled_Getter");

  internal_runtime_flags_v8_internal::CSSIndependentTransformPropertiesEnabledAttributeGetter(info);
}

void V8InternalRuntimeFlags::CSSLayoutAPIEnabledAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_InternalRuntimeFlags_cssLayoutAPIEnabled_Getter");

  internal_runtime_flags_v8_internal::CSSLayoutAPIEnabledAttributeGetter(info);
}

void V8InternalRuntimeFlags::CSSLogicalEnabledAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_InternalRuntimeFlags_cssLogicalEnabled_Getter");

  internal_runtime_flags_v8_internal::CSSLogicalEnabledAttributeGetter(info);
}

void V8InternalRuntimeFlags::CSSLogicalEnabledAttributeSetterCallback(
    const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_InternalRuntimeFlags_cssLogicalEnabled_Setter");

  v8::Local<v8::Value> v8_value = info[0];

  internal_runtime_flags_v8_internal::CSSLogicalEnabledAttributeSetter(v8_value, info);
}

void V8InternalRuntimeFlags::CSSMaskSourceTypeEnabledAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_InternalRuntimeFlags_cssMaskSourceTypeEnabled_Getter");

  internal_runtime_flags_v8_internal::CSSMaskSourceTypeEnabledAttributeGetter(info);
}

void V8InternalRuntimeFlags::CSSOffsetPathRayEnabledAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_InternalRuntimeFlags_cssOffsetPathRayEnabled_Getter");

  internal_runtime_flags_v8_internal::CSSOffsetPathRayEnabledAttributeGetter(info);
}

void V8InternalRuntimeFlags::CSSOffsetPathRayContainEnabledAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_InternalRuntimeFlags_cssOffsetPathRayContainEnabled_Getter");

  internal_runtime_flags_v8_internal::CSSOffsetPathRayContainEnabledAttributeGetter(info);
}

void V8InternalRuntimeFlags::CSSOffsetPositionAnchorEnabledAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_InternalRuntimeFlags_cssOffsetPositionAnchorEnabled_Getter");

  internal_runtime_flags_v8_internal::CSSOffsetPositionAnchorEnabledAttributeGetter(info);
}

void V8InternalRuntimeFlags::CSSPaintAPIArgumentsEnabledAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_InternalRuntimeFlags_cssPaintAPIArgumentsEnabled_Getter");

  internal_runtime_flags_v8_internal::CSSPaintAPIArgumentsEnabledAttributeGetter(info);
}

void V8InternalRuntimeFlags::CSSPartPseudoElementEnabledAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_InternalRuntimeFlags_cssPartPseudoElementEnabled_Getter");

  internal_runtime_flags_v8_internal::CSSPartPseudoElementEnabledAttributeGetter(info);
}

void V8InternalRuntimeFlags::CSSPictureInPictureEnabledAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_InternalRuntimeFlags_cssPictureInPictureEnabled_Getter");

  internal_runtime_flags_v8_internal::CSSPictureInPictureEnabledAttributeGetter(info);
}

void V8InternalRuntimeFlags::CSSPseudoIsEnabledAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_InternalRuntimeFlags_cssPseudoIsEnabled_Getter");

  internal_runtime_flags_v8_internal::CSSPseudoIsEnabledAttributeGetter(info);
}

void V8InternalRuntimeFlags::CSSPseudoWhereEnabledAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_InternalRuntimeFlags_cssPseudoWhereEnabled_Getter");

  internal_runtime_flags_v8_internal::CSSPseudoWhereEnabledAttributeGetter(info);
}

void V8InternalRuntimeFlags::CSSSnapSizeEnabledAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_InternalRuntimeFlags_cssSnapSizeEnabled_Getter");

  internal_runtime_flags_v8_internal::CSSSnapSizeEnabledAttributeGetter(info);
}

void V8InternalRuntimeFlags::CSSVariables2EnabledAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_InternalRuntimeFlags_cssVariables2Enabled_Getter");

  internal_runtime_flags_v8_internal::CSSVariables2EnabledAttributeGetter(info);
}

void V8InternalRuntimeFlags::CSSVariables2ImageValuesEnabledAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_InternalRuntimeFlags_cssVariables2ImageValuesEnabled_Getter");

  internal_runtime_flags_v8_internal::CSSVariables2ImageValuesEnabledAttributeGetter(info);
}

void V8InternalRuntimeFlags::CSSVariables2TransformValuesEnabledAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_InternalRuntimeFlags_cssVariables2TransformValuesEnabled_Getter");

  internal_runtime_flags_v8_internal::CSSVariables2TransformValuesEnabledAttributeGetter(info);
}

void V8InternalRuntimeFlags::CSSViewportEnabledAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_InternalRuntimeFlags_cssViewportEnabled_Getter");

  internal_runtime_flags_v8_internal::CSSViewportEnabledAttributeGetter(info);
}

void V8InternalRuntimeFlags::CustomElementDefaultStyleEnabledAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_InternalRuntimeFlags_customElementDefaultStyleEnabled_Getter");

  internal_runtime_flags_v8_internal::CustomElementDefaultStyleEnabledAttributeGetter(info);
}

void V8InternalRuntimeFlags::CustomElementsV0EnabledAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_InternalRuntimeFlags_customElementsV0Enabled_Getter");

  internal_runtime_flags_v8_internal::CustomElementsV0EnabledAttributeGetter(info);
}

void V8InternalRuntimeFlags::CustomUserTimingEnabledAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_InternalRuntimeFlags_customUserTimingEnabled_Getter");

  internal_runtime_flags_v8_internal::CustomUserTimingEnabledAttributeGetter(info);
}

void V8InternalRuntimeFlags::DatabaseEnabledAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_InternalRuntimeFlags_databaseEnabled_Getter");

  internal_runtime_flags_v8_internal::DatabaseEnabledAttributeGetter(info);
}

void V8InternalRuntimeFlags::DecodeToYUVEnabledAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_InternalRuntimeFlags_decodeToYUVEnabled_Getter");

  internal_runtime_flags_v8_internal::DecodeToYUVEnabledAttributeGetter(info);
}

void V8InternalRuntimeFlags::DesktopCaptureDisableLocalEchoControlEnabledAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_InternalRuntimeFlags_desktopCaptureDisableLocalEchoControlEnabled_Getter");

  internal_runtime_flags_v8_internal::DesktopCaptureDisableLocalEchoControlEnabledAttributeGetter(info);
}

void V8InternalRuntimeFlags::DisableHardwareNoiseSuppressionEnabledAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_InternalRuntimeFlags_disableHardwareNoiseSuppressionEnabled_Getter");

  internal_runtime_flags_v8_internal::DisableHardwareNoiseSuppressionEnabledAttributeGetter(info);
}

void V8InternalRuntimeFlags::DisplayCutoutAPIEnabledAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_InternalRuntimeFlags_displayCutoutAPIEnabled_Getter");

  internal_runtime_flags_v8_internal::DisplayCutoutAPIEnabledAttributeGetter(info);
}

void V8InternalRuntimeFlags::DisplayCutoutAPIEnabledAttributeSetterCallback(
    const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_InternalRuntimeFlags_displayCutoutAPIEnabled_Setter");

  v8::Local<v8::Value> v8_value = info[0];

  internal_runtime_flags_v8_internal::DisplayCutoutAPIEnabledAttributeSetter(v8_value, info);
}

void V8InternalRuntimeFlags::DisplayLockingEnabledAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_InternalRuntimeFlags_displayLockingEnabled_Getter");

  internal_runtime_flags_v8_internal::DisplayLockingEnabledAttributeGetter(info);
}

void V8InternalRuntimeFlags::DocumentCookieEnabledAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_InternalRuntimeFlags_documentCookieEnabled_Getter");

  internal_runtime_flags_v8_internal::DocumentCookieEnabledAttributeGetter(info);
}

void V8InternalRuntimeFlags::DocumentDomainEnabledAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_InternalRuntimeFlags_documentDomainEnabled_Getter");

  internal_runtime_flags_v8_internal::DocumentDomainEnabledAttributeGetter(info);
}

void V8InternalRuntimeFlags::DocumentWriteEnabledAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_InternalRuntimeFlags_documentWriteEnabled_Getter");

  internal_runtime_flags_v8_internal::DocumentWriteEnabledAttributeGetter(info);
}

void V8InternalRuntimeFlags::EditingNGEnabledAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_InternalRuntimeFlags_editingNGEnabled_Getter");

  internal_runtime_flags_v8_internal::EditingNGEnabledAttributeGetter(info);
}

void V8InternalRuntimeFlags::ElementInternalsEnabledAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_InternalRuntimeFlags_elementInternalsEnabled_Getter");

  internal_runtime_flags_v8_internal::ElementInternalsEnabledAttributeGetter(info);
}

void V8InternalRuntimeFlags::ElementTimingEnabledAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_InternalRuntimeFlags_elementTimingEnabled_Getter");

  internal_runtime_flags_v8_internal::ElementTimingEnabledAttributeGetter(info);
}

void V8InternalRuntimeFlags::EncryptedMediaEncryptionSchemeQueryEnabledAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_InternalRuntimeFlags_encryptedMediaEncryptionSchemeQueryEnabled_Getter");

  internal_runtime_flags_v8_internal::EncryptedMediaEncryptionSchemeQueryEnabledAttributeGetter(info);
}

void V8InternalRuntimeFlags::EncryptedMediaHdcpPolicyCheckEnabledAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_InternalRuntimeFlags_encryptedMediaHdcpPolicyCheckEnabled_Getter");

  internal_runtime_flags_v8_internal::EncryptedMediaHdcpPolicyCheckEnabledAttributeGetter(info);
}

void V8InternalRuntimeFlags::EncryptedMediaPersistentUsageRecordSessionEnabledAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_InternalRuntimeFlags_encryptedMediaPersistentUsageRecordSessionEnabled_Getter");

  internal_runtime_flags_v8_internal::EncryptedMediaPersistentUsageRecordSessionEnabledAttributeGetter(info);
}

void V8InternalRuntimeFlags::EventTimingEnabledAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_InternalRuntimeFlags_eventTimingEnabled_Getter");

  internal_runtime_flags_v8_internal::EventTimingEnabledAttributeGetter(info);
}

void V8InternalRuntimeFlags::ExecCommandInJavaScriptEnabledAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_InternalRuntimeFlags_execCommandInJavaScriptEnabled_Getter");

  internal_runtime_flags_v8_internal::ExecCommandInJavaScriptEnabledAttributeGetter(info);
}

void V8InternalRuntimeFlags::ExpensiveBackgroundTimerThrottlingEnabledAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_InternalRuntimeFlags_expensiveBackgroundTimerThrottlingEnabled_Getter");

  internal_runtime_flags_v8_internal::ExpensiveBackgroundTimerThrottlingEnabledAttributeGetter(info);
}

void V8InternalRuntimeFlags::ExperimentalContentSecurityPolicyFeaturesEnabledAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_InternalRuntimeFlags_experimentalContentSecurityPolicyFeaturesEnabled_Getter");

  internal_runtime_flags_v8_internal::ExperimentalContentSecurityPolicyFeaturesEnabledAttributeGetter(info);
}

void V8InternalRuntimeFlags::ExperimentalIsInputPendingEnabledAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_InternalRuntimeFlags_experimentalIsInputPendingEnabled_Getter");

  internal_runtime_flags_v8_internal::ExperimentalIsInputPendingEnabledAttributeGetter(info);
}

void V8InternalRuntimeFlags::ExperimentalProductivityFeaturesEnabledAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_InternalRuntimeFlags_experimentalProductivityFeaturesEnabled_Getter");

  internal_runtime_flags_v8_internal::ExperimentalProductivityFeaturesEnabledAttributeGetter(info);
}

void V8InternalRuntimeFlags::ExtendedTextMetricsEnabledAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_InternalRuntimeFlags_extendedTextMetricsEnabled_Getter");

  internal_runtime_flags_v8_internal::ExtendedTextMetricsEnabledAttributeGetter(info);
}

void V8InternalRuntimeFlags::ExtraWebGLVideoTextureMetadataEnabledAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_InternalRuntimeFlags_extraWebGLVideoTextureMetadataEnabled_Getter");

  internal_runtime_flags_v8_internal::ExtraWebGLVideoTextureMetadataEnabledAttributeGetter(info);
}

void V8InternalRuntimeFlags::FallbackCursorModeEnabledAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_InternalRuntimeFlags_fallbackCursorModeEnabled_Getter");

  internal_runtime_flags_v8_internal::FallbackCursorModeEnabledAttributeGetter(info);
}

void V8InternalRuntimeFlags::FastBorderRadiusEnabledAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_InternalRuntimeFlags_fastBorderRadiusEnabled_Getter");

  internal_runtime_flags_v8_internal::FastBorderRadiusEnabledAttributeGetter(info);
}

void V8InternalRuntimeFlags::FastFlatTreeTraversalEnabledAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_InternalRuntimeFlags_fastFlatTreeTraversalEnabled_Getter");

  internal_runtime_flags_v8_internal::FastFlatTreeTraversalEnabledAttributeGetter(info);
}

void V8InternalRuntimeFlags::FastMobileScrollingEnabledAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_InternalRuntimeFlags_fastMobileScrollingEnabled_Getter");

  internal_runtime_flags_v8_internal::FastMobileScrollingEnabledAttributeGetter(info);
}

void V8InternalRuntimeFlags::FeaturePolicyForSandboxEnabledAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_InternalRuntimeFlags_featurePolicyForSandboxEnabled_Getter");

  internal_runtime_flags_v8_internal::FeaturePolicyForSandboxEnabledAttributeGetter(info);
}

void V8InternalRuntimeFlags::FeaturePolicyJavaScriptInterfaceEnabledAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_InternalRuntimeFlags_featurePolicyJavaScriptInterfaceEnabled_Getter");

  internal_runtime_flags_v8_internal::FeaturePolicyJavaScriptInterfaceEnabledAttributeGetter(info);
}

void V8InternalRuntimeFlags::FeaturePolicyReportingEnabledAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_InternalRuntimeFlags_featurePolicyReportingEnabled_Getter");

  internal_runtime_flags_v8_internal::FeaturePolicyReportingEnabledAttributeGetter(info);
}

void V8InternalRuntimeFlags::FeaturePolicyVibrateFeatureEnabledAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_InternalRuntimeFlags_featurePolicyVibrateFeatureEnabled_Getter");

  internal_runtime_flags_v8_internal::FeaturePolicyVibrateFeatureEnabledAttributeGetter(info);
}

void V8InternalRuntimeFlags::FetchMetadataEnabledAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_InternalRuntimeFlags_fetchMetadataEnabled_Getter");

  internal_runtime_flags_v8_internal::FetchMetadataEnabledAttributeGetter(info);
}

void V8InternalRuntimeFlags::FetchMetadataDestinationEnabledAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_InternalRuntimeFlags_fetchMetadataDestinationEnabled_Getter");

  internal_runtime_flags_v8_internal::FetchMetadataDestinationEnabledAttributeGetter(info);
}

void V8InternalRuntimeFlags::FileSystemEnabledAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_InternalRuntimeFlags_fileSystemEnabled_Getter");

  internal_runtime_flags_v8_internal::FileSystemEnabledAttributeGetter(info);
}

void V8InternalRuntimeFlags::FirstContentfulPaintPlusPlusEnabledAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_InternalRuntimeFlags_firstContentfulPaintPlusPlusEnabled_Getter");

  internal_runtime_flags_v8_internal::FirstContentfulPaintPlusPlusEnabledAttributeGetter(info);
}

void V8InternalRuntimeFlags::FocuslessSpatialNavigationEnabledAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_InternalRuntimeFlags_focuslessSpatialNavigationEnabled_Getter");

  internal_runtime_flags_v8_internal::FocuslessSpatialNavigationEnabledAttributeGetter(info);
}

void V8InternalRuntimeFlags::FocuslessSpatialNavigationEnabledAttributeSetterCallback(
    const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_InternalRuntimeFlags_focuslessSpatialNavigationEnabled_Setter");

  v8::Local<v8::Value> v8_value = info[0];

  internal_runtime_flags_v8_internal::FocuslessSpatialNavigationEnabledAttributeSetter(v8_value, info);
}

void V8InternalRuntimeFlags::FontSrcLocalMatchingEnabledAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_InternalRuntimeFlags_fontSrcLocalMatchingEnabled_Getter");

  internal_runtime_flags_v8_internal::FontSrcLocalMatchingEnabledAttributeGetter(info);
}

void V8InternalRuntimeFlags::ForbidSyncXHRInPageDismissalEnabledAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_InternalRuntimeFlags_forbidSyncXHRInPageDismissalEnabled_Getter");

  internal_runtime_flags_v8_internal::ForbidSyncXHRInPageDismissalEnabledAttributeGetter(info);
}

void V8InternalRuntimeFlags::ForceOverlayFullscreenVideoEnabledAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_InternalRuntimeFlags_forceOverlayFullscreenVideoEnabled_Getter");

  internal_runtime_flags_v8_internal::ForceOverlayFullscreenVideoEnabledAttributeGetter(info);
}

void V8InternalRuntimeFlags::ForceSynchronousHTMLParsingEnabledAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_InternalRuntimeFlags_forceSynchronousHTMLParsingEnabled_Getter");

  internal_runtime_flags_v8_internal::ForceSynchronousHTMLParsingEnabledAttributeGetter(info);
}

void V8InternalRuntimeFlags::ForceTallerSelectPopupEnabledAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_InternalRuntimeFlags_forceTallerSelectPopupEnabled_Getter");

  internal_runtime_flags_v8_internal::ForceTallerSelectPopupEnabledAttributeGetter(info);
}

void V8InternalRuntimeFlags::FormAssociatedCustomElementsEnabledAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_InternalRuntimeFlags_formAssociatedCustomElementsEnabled_Getter");

  internal_runtime_flags_v8_internal::FormAssociatedCustomElementsEnabledAttributeGetter(info);
}

void V8InternalRuntimeFlags::FormDataEventEnabledAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_InternalRuntimeFlags_formDataEventEnabled_Getter");

  internal_runtime_flags_v8_internal::FormDataEventEnabledAttributeGetter(info);
}

void V8InternalRuntimeFlags::FractionalMouseEventEnabledAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_InternalRuntimeFlags_fractionalMouseEventEnabled_Getter");

  internal_runtime_flags_v8_internal::FractionalMouseEventEnabledAttributeGetter(info);
}

void V8InternalRuntimeFlags::FractionalScrollOffsetsEnabledAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_InternalRuntimeFlags_fractionalScrollOffsetsEnabled_Getter");

  internal_runtime_flags_v8_internal::FractionalScrollOffsetsEnabledAttributeGetter(info);
}

void V8InternalRuntimeFlags::FreezeFramesOnVisibilityEnabledAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_InternalRuntimeFlags_freezeFramesOnVisibilityEnabled_Getter");

  internal_runtime_flags_v8_internal::FreezeFramesOnVisibilityEnabledAttributeGetter(info);
}

void V8InternalRuntimeFlags::GamepadButtonAxisEventsEnabledAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_InternalRuntimeFlags_gamepadButtonAxisEventsEnabled_Getter");

  internal_runtime_flags_v8_internal::GamepadButtonAxisEventsEnabledAttributeGetter(info);
}

void V8InternalRuntimeFlags::GetDisplayMediaEnabledAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_InternalRuntimeFlags_getDisplayMediaEnabled_Getter");

  internal_runtime_flags_v8_internal::GetDisplayMediaEnabledAttributeGetter(info);
}

void V8InternalRuntimeFlags::HeapCompactionEnabledAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_InternalRuntimeFlags_heapCompactionEnabled_Getter");

  internal_runtime_flags_v8_internal::HeapCompactionEnabledAttributeGetter(info);
}

void V8InternalRuntimeFlags::HeapConcurrentMarkingEnabledAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_InternalRuntimeFlags_heapConcurrentMarkingEnabled_Getter");

  internal_runtime_flags_v8_internal::HeapConcurrentMarkingEnabledAttributeGetter(info);
}

void V8InternalRuntimeFlags::HeapIncrementalMarkingEnabledAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_InternalRuntimeFlags_heapIncrementalMarkingEnabled_Getter");

  internal_runtime_flags_v8_internal::HeapIncrementalMarkingEnabledAttributeGetter(info);
}

void V8InternalRuntimeFlags::HeapIncrementalMarkingStressEnabledAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_InternalRuntimeFlags_heapIncrementalMarkingStressEnabled_Getter");

  internal_runtime_flags_v8_internal::HeapIncrementalMarkingStressEnabledAttributeGetter(info);
}

void V8InternalRuntimeFlags::HrefTranslateEnabledAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_InternalRuntimeFlags_hrefTranslateEnabled_Getter");

  internal_runtime_flags_v8_internal::HrefTranslateEnabledAttributeGetter(info);
}

void V8InternalRuntimeFlags::HTMLImportsEnabledAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_InternalRuntimeFlags_htmlImportsEnabled_Getter");

  internal_runtime_flags_v8_internal::HTMLImportsEnabledAttributeGetter(info);
}

void V8InternalRuntimeFlags::HTMLImportsOnlyChromeEnabledAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_InternalRuntimeFlags_htmlImportsOnlyChromeEnabled_Getter");

  internal_runtime_flags_v8_internal::HTMLImportsOnlyChromeEnabledAttributeGetter(info);
}

void V8InternalRuntimeFlags::HTMLImportsStyleApplicationEnabledAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_InternalRuntimeFlags_htmlImportsStyleApplicationEnabled_Getter");

  internal_runtime_flags_v8_internal::HTMLImportsStyleApplicationEnabledAttributeGetter(info);
}

void V8InternalRuntimeFlags::IdbObserverEnabledAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_InternalRuntimeFlags_idbObserverEnabled_Getter");

  internal_runtime_flags_v8_internal::IdbObserverEnabledAttributeGetter(info);
}

void V8InternalRuntimeFlags::IdbTransactionCommitEnabledAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_InternalRuntimeFlags_idbTransactionCommitEnabled_Getter");

  internal_runtime_flags_v8_internal::IdbTransactionCommitEnabledAttributeGetter(info);
}

void V8InternalRuntimeFlags::IdleDetectionEnabledAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_InternalRuntimeFlags_idleDetectionEnabled_Getter");

  internal_runtime_flags_v8_internal::IdleDetectionEnabledAttributeGetter(info);
}

void V8InternalRuntimeFlags::IgnoreCrossOriginWindowWhenNamedAccessOnWindowEnabledAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_InternalRuntimeFlags_ignoreCrossOriginWindowWhenNamedAccessOnWindowEnabled_Getter");

  internal_runtime_flags_v8_internal::IgnoreCrossOriginWindowWhenNamedAccessOnWindowEnabledAttributeGetter(info);
}

void V8InternalRuntimeFlags::ImageOrientationEnabledAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_InternalRuntimeFlags_imageOrientationEnabled_Getter");

  internal_runtime_flags_v8_internal::ImageOrientationEnabledAttributeGetter(info);
}

void V8InternalRuntimeFlags::ImplicitRootScrollerEnabledAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_InternalRuntimeFlags_implicitRootScrollerEnabled_Getter");

  internal_runtime_flags_v8_internal::ImplicitRootScrollerEnabledAttributeGetter(info);
}

void V8InternalRuntimeFlags::ImplicitRootScrollerEnabledAttributeSetterCallback(
    const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_InternalRuntimeFlags_implicitRootScrollerEnabled_Setter");

  v8::Local<v8::Value> v8_value = info[0];

  internal_runtime_flags_v8_internal::ImplicitRootScrollerEnabledAttributeSetter(v8_value, info);
}

void V8InternalRuntimeFlags::InertAttributeEnabledAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_InternalRuntimeFlags_inertAttributeEnabled_Getter");

  internal_runtime_flags_v8_internal::InertAttributeEnabledAttributeGetter(info);
}

void V8InternalRuntimeFlags::InputMultipleFieldsUIEnabledAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_InternalRuntimeFlags_inputMultipleFieldsUIEnabled_Getter");

  internal_runtime_flags_v8_internal::InputMultipleFieldsUIEnabledAttributeGetter(info);
}

void V8InternalRuntimeFlags::InstalledAppEnabledAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_InternalRuntimeFlags_installedAppEnabled_Getter");

  internal_runtime_flags_v8_internal::InstalledAppEnabledAttributeGetter(info);
}

void V8InternalRuntimeFlags::IntersectionObserverV2EnabledAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_InternalRuntimeFlags_intersectionObserverV2Enabled_Getter");

  internal_runtime_flags_v8_internal::IntersectionObserverV2EnabledAttributeGetter(info);
}

void V8InternalRuntimeFlags::InvisibleDOMEnabledAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_InternalRuntimeFlags_invisibleDOMEnabled_Getter");

  internal_runtime_flags_v8_internal::InvisibleDOMEnabledAttributeGetter(info);
}

void V8InternalRuntimeFlags::IsolatedCodeCacheEnabledAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_InternalRuntimeFlags_isolatedCodeCacheEnabled_Getter");

  internal_runtime_flags_v8_internal::IsolatedCodeCacheEnabledAttributeGetter(info);
}

void V8InternalRuntimeFlags::IsolatedWorldCSPEnabledAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_InternalRuntimeFlags_isolatedWorldCSPEnabled_Getter");

  internal_runtime_flags_v8_internal::IsolatedWorldCSPEnabledAttributeGetter(info);
}

void V8InternalRuntimeFlags::JankTrackingEnabledAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_InternalRuntimeFlags_jankTrackingEnabled_Getter");

  internal_runtime_flags_v8_internal::JankTrackingEnabledAttributeGetter(info);
}

void V8InternalRuntimeFlags::JankTrackingSweepLineEnabledAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_InternalRuntimeFlags_jankTrackingSweepLineEnabled_Getter");

  internal_runtime_flags_v8_internal::JankTrackingSweepLineEnabledAttributeGetter(info);
}

void V8InternalRuntimeFlags::KeyboardFocusableScrollersEnabledAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_InternalRuntimeFlags_keyboardFocusableScrollersEnabled_Getter");

  internal_runtime_flags_v8_internal::KeyboardFocusableScrollersEnabledAttributeGetter(info);
}

void V8InternalRuntimeFlags::LangAttributeAwareFormControlUIEnabledAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_InternalRuntimeFlags_langAttributeAwareFormControlUIEnabled_Getter");

  internal_runtime_flags_v8_internal::LangAttributeAwareFormControlUIEnabledAttributeGetter(info);
}

void V8InternalRuntimeFlags::LangClientHintHeaderEnabledAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_InternalRuntimeFlags_langClientHintHeaderEnabled_Getter");

  internal_runtime_flags_v8_internal::LangClientHintHeaderEnabledAttributeGetter(info);
}

void V8InternalRuntimeFlags::LayoutJankAPIEnabledAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_InternalRuntimeFlags_layoutJankAPIEnabled_Getter");

  internal_runtime_flags_v8_internal::LayoutJankAPIEnabledAttributeGetter(info);
}

void V8InternalRuntimeFlags::LayoutNGEnabledAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_InternalRuntimeFlags_layoutNGEnabled_Getter");

  internal_runtime_flags_v8_internal::LayoutNGEnabledAttributeGetter(info);
}

void V8InternalRuntimeFlags::LayoutNGBlockFragmentationEnabledAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_InternalRuntimeFlags_layoutNGBlockFragmentationEnabled_Getter");

  internal_runtime_flags_v8_internal::LayoutNGBlockFragmentationEnabledAttributeGetter(info);
}

void V8InternalRuntimeFlags::LayoutNGFieldsetEnabledAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_InternalRuntimeFlags_layoutNGFieldsetEnabled_Getter");

  internal_runtime_flags_v8_internal::LayoutNGFieldsetEnabledAttributeGetter(info);
}

void V8InternalRuntimeFlags::LayoutNGFlexBoxEnabledAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_InternalRuntimeFlags_layoutNGFlexBoxEnabled_Getter");

  internal_runtime_flags_v8_internal::LayoutNGFlexBoxEnabledAttributeGetter(info);
}

void V8InternalRuntimeFlags::LayoutNGFragmentCachingEnabledAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_InternalRuntimeFlags_layoutNGFragmentCachingEnabled_Getter");

  internal_runtime_flags_v8_internal::LayoutNGFragmentCachingEnabledAttributeGetter(info);
}

void V8InternalRuntimeFlags::LazyFrameLoadingEnabledAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_InternalRuntimeFlags_lazyFrameLoadingEnabled_Getter");

  internal_runtime_flags_v8_internal::LazyFrameLoadingEnabledAttributeGetter(info);
}

void V8InternalRuntimeFlags::LazyFrameVisibleLoadTimeMetricsEnabledAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_InternalRuntimeFlags_lazyFrameVisibleLoadTimeMetricsEnabled_Getter");

  internal_runtime_flags_v8_internal::LazyFrameVisibleLoadTimeMetricsEnabledAttributeGetter(info);
}

void V8InternalRuntimeFlags::LazyImageLoadingEnabledAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_InternalRuntimeFlags_lazyImageLoadingEnabled_Getter");

  internal_runtime_flags_v8_internal::LazyImageLoadingEnabledAttributeGetter(info);
}

void V8InternalRuntimeFlags::LazyImageVisibleLoadTimeMetricsEnabledAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_InternalRuntimeFlags_lazyImageVisibleLoadTimeMetricsEnabled_Getter");

  internal_runtime_flags_v8_internal::LazyImageVisibleLoadTimeMetricsEnabledAttributeGetter(info);
}

void V8InternalRuntimeFlags::LazyInitializeMediaControlsEnabledAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_InternalRuntimeFlags_lazyInitializeMediaControlsEnabled_Getter");

  internal_runtime_flags_v8_internal::LazyInitializeMediaControlsEnabledAttributeGetter(info);
}

void V8InternalRuntimeFlags::LegacyPerformanceMemoryCountersEnabledAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_InternalRuntimeFlags_legacyPerformanceMemoryCountersEnabled_Getter");

  internal_runtime_flags_v8_internal::LegacyPerformanceMemoryCountersEnabledAttributeGetter(info);
}

void V8InternalRuntimeFlags::LongTaskV2EnabledAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_InternalRuntimeFlags_longTaskV2Enabled_Getter");

  internal_runtime_flags_v8_internal::LongTaskV2EnabledAttributeGetter(info);
}

void V8InternalRuntimeFlags::ManualSlottingEnabledAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_InternalRuntimeFlags_manualSlottingEnabled_Getter");

  internal_runtime_flags_v8_internal::ManualSlottingEnabledAttributeGetter(info);
}

void V8InternalRuntimeFlags::MediaCapabilitiesEncodingInfoEnabledAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_InternalRuntimeFlags_mediaCapabilitiesEncodingInfoEnabled_Getter");

  internal_runtime_flags_v8_internal::MediaCapabilitiesEncodingInfoEnabledAttributeGetter(info);
}

void V8InternalRuntimeFlags::MediaCapabilitiesEncryptedMediaEnabledAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_InternalRuntimeFlags_mediaCapabilitiesEncryptedMediaEnabled_Getter");

  internal_runtime_flags_v8_internal::MediaCapabilitiesEncryptedMediaEnabledAttributeGetter(info);
}

void V8InternalRuntimeFlags::MediaCaptureEnabledAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_InternalRuntimeFlags_mediaCaptureEnabled_Getter");

  internal_runtime_flags_v8_internal::MediaCaptureEnabledAttributeGetter(info);
}

void V8InternalRuntimeFlags::MediaCaptureDepthVideoKindEnabledAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_InternalRuntimeFlags_mediaCaptureDepthVideoKindEnabled_Getter");

  internal_runtime_flags_v8_internal::MediaCaptureDepthVideoKindEnabledAttributeGetter(info);
}

void V8InternalRuntimeFlags::MediaCastOverlayButtonEnabledAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_InternalRuntimeFlags_mediaCastOverlayButtonEnabled_Getter");

  internal_runtime_flags_v8_internal::MediaCastOverlayButtonEnabledAttributeGetter(info);
}

void V8InternalRuntimeFlags::MediaControlsExpandGestureEnabledAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_InternalRuntimeFlags_mediaControlsExpandGestureEnabled_Getter");

  internal_runtime_flags_v8_internal::MediaControlsExpandGestureEnabledAttributeGetter(info);
}

void V8InternalRuntimeFlags::MediaControlsOverlayPlayButtonEnabledAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_InternalRuntimeFlags_mediaControlsOverlayPlayButtonEnabled_Getter");

  internal_runtime_flags_v8_internal::MediaControlsOverlayPlayButtonEnabledAttributeGetter(info);
}

void V8InternalRuntimeFlags::MediaControlsOverlayPlayButtonEnabledAttributeSetterCallback(
    const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_InternalRuntimeFlags_mediaControlsOverlayPlayButtonEnabled_Setter");

  v8::Local<v8::Value> v8_value = info[0];

  internal_runtime_flags_v8_internal::MediaControlsOverlayPlayButtonEnabledAttributeSetter(v8_value, info);
}

void V8InternalRuntimeFlags::MediaDocumentDownloadButtonEnabledAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_InternalRuntimeFlags_mediaDocumentDownloadButtonEnabled_Getter");

  internal_runtime_flags_v8_internal::MediaDocumentDownloadButtonEnabledAttributeGetter(info);
}

void V8InternalRuntimeFlags::MediaEngagementBypassAutoplayPoliciesEnabledAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_InternalRuntimeFlags_mediaEngagementBypassAutoplayPoliciesEnabled_Getter");

  internal_runtime_flags_v8_internal::MediaEngagementBypassAutoplayPoliciesEnabledAttributeGetter(info);
}

void V8InternalRuntimeFlags::MediaQueryPrefersColorSchemeEnabledAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_InternalRuntimeFlags_mediaQueryPrefersColorSchemeEnabled_Getter");

  internal_runtime_flags_v8_internal::MediaQueryPrefersColorSchemeEnabledAttributeGetter(info);
}

void V8InternalRuntimeFlags::MediaQueryShapeEnabledAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_InternalRuntimeFlags_mediaQueryShapeEnabled_Getter");

  internal_runtime_flags_v8_internal::MediaQueryShapeEnabledAttributeGetter(info);
}

void V8InternalRuntimeFlags::MediaSessionEnabledAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_InternalRuntimeFlags_mediaSessionEnabled_Getter");

  internal_runtime_flags_v8_internal::MediaSessionEnabledAttributeGetter(info);
}

void V8InternalRuntimeFlags::MediaSourceExperimentalEnabledAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_InternalRuntimeFlags_mediaSourceExperimentalEnabled_Getter");

  internal_runtime_flags_v8_internal::MediaSourceExperimentalEnabledAttributeGetter(info);
}

void V8InternalRuntimeFlags::MediaSourceNewAbortAndDurationEnabledAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_InternalRuntimeFlags_mediaSourceNewAbortAndDurationEnabled_Getter");

  internal_runtime_flags_v8_internal::MediaSourceNewAbortAndDurationEnabledAttributeGetter(info);
}

void V8InternalRuntimeFlags::MediaStreamTrackContentHintEnabledAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_InternalRuntimeFlags_mediaStreamTrackContentHintEnabled_Getter");

  internal_runtime_flags_v8_internal::MediaStreamTrackContentHintEnabledAttributeGetter(info);
}

void V8InternalRuntimeFlags::MergeBlockingNonBlockingPoolsEnabledAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_InternalRuntimeFlags_mergeBlockingNonBlockingPoolsEnabled_Getter");

  internal_runtime_flags_v8_internal::MergeBlockingNonBlockingPoolsEnabledAttributeGetter(info);
}

void V8InternalRuntimeFlags::MetaColorSchemeEnabledAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_InternalRuntimeFlags_metaColorSchemeEnabled_Getter");

  internal_runtime_flags_v8_internal::MetaColorSchemeEnabledAttributeGetter(info);
}

void V8InternalRuntimeFlags::MiddleClickAutoscrollEnabledAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_InternalRuntimeFlags_middleClickAutoscrollEnabled_Getter");

  internal_runtime_flags_v8_internal::MiddleClickAutoscrollEnabledAttributeGetter(info);
}

void V8InternalRuntimeFlags::MimeHandlerViewInCrossProcessFrameEnabledAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_InternalRuntimeFlags_mimeHandlerViewInCrossProcessFrameEnabled_Getter");

  internal_runtime_flags_v8_internal::MimeHandlerViewInCrossProcessFrameEnabledAttributeGetter(info);
}

void V8InternalRuntimeFlags::MobileLayoutThemeEnabledAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_InternalRuntimeFlags_mobileLayoutThemeEnabled_Getter");

  internal_runtime_flags_v8_internal::MobileLayoutThemeEnabledAttributeGetter(info);
}

void V8InternalRuntimeFlags::ModernMediaControlsEnabledAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_InternalRuntimeFlags_modernMediaControlsEnabled_Getter");

  internal_runtime_flags_v8_internal::ModernMediaControlsEnabledAttributeGetter(info);
}

void V8InternalRuntimeFlags::ModuleDedicatedWorkerEnabledAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_InternalRuntimeFlags_moduleDedicatedWorkerEnabled_Getter");

  internal_runtime_flags_v8_internal::ModuleDedicatedWorkerEnabledAttributeGetter(info);
}

void V8InternalRuntimeFlags::ModuleServiceWorkerEnabledAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_InternalRuntimeFlags_moduleServiceWorkerEnabled_Getter");

  internal_runtime_flags_v8_internal::ModuleServiceWorkerEnabledAttributeGetter(info);
}

void V8InternalRuntimeFlags::MojoJSEnabledAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_InternalRuntimeFlags_mojoJSEnabled_Getter");

  internal_runtime_flags_v8_internal::MojoJSEnabledAttributeGetter(info);
}

void V8InternalRuntimeFlags::MojoJSTestEnabledAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_InternalRuntimeFlags_mojoJSTestEnabled_Getter");

  internal_runtime_flags_v8_internal::MojoJSTestEnabledAttributeGetter(info);
}

void V8InternalRuntimeFlags::MovementXYInBlinkEnabledAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_InternalRuntimeFlags_movementXYInBlinkEnabled_Getter");

  internal_runtime_flags_v8_internal::MovementXYInBlinkEnabledAttributeGetter(info);
}

void V8InternalRuntimeFlags::MuteButtonEnabledAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_InternalRuntimeFlags_muteButtonEnabled_Getter");

  internal_runtime_flags_v8_internal::MuteButtonEnabledAttributeGetter(info);
}

void V8InternalRuntimeFlags::NativeFileSystemEnabledAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_InternalRuntimeFlags_nativeFileSystemEnabled_Getter");

  internal_runtime_flags_v8_internal::NativeFileSystemEnabledAttributeGetter(info);
}

void V8InternalRuntimeFlags::NativeStreamsEnabledAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_InternalRuntimeFlags_nativeStreamsEnabled_Getter");

  internal_runtime_flags_v8_internal::NativeStreamsEnabledAttributeGetter(info);
}

void V8InternalRuntimeFlags::NavigatorContentUtilsEnabledAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_InternalRuntimeFlags_navigatorContentUtilsEnabled_Getter");

  internal_runtime_flags_v8_internal::NavigatorContentUtilsEnabledAttributeGetter(info);
}

void V8InternalRuntimeFlags::NavigatorDeviceMemoryEnabledAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_InternalRuntimeFlags_navigatorDeviceMemoryEnabled_Getter");

  internal_runtime_flags_v8_internal::NavigatorDeviceMemoryEnabledAttributeGetter(info);
}

void V8InternalRuntimeFlags::NavigatorLanguageInInsecureContextEnabledAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_InternalRuntimeFlags_navigatorLanguageInInsecureContextEnabled_Getter");

  internal_runtime_flags_v8_internal::NavigatorLanguageInInsecureContextEnabledAttributeGetter(info);
}

void V8InternalRuntimeFlags::NavigatorLanguageInInsecureContextEnabledAttributeSetterCallback(
    const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_InternalRuntimeFlags_navigatorLanguageInInsecureContextEnabled_Setter");

  v8::Local<v8::Value> v8_value = info[0];

  internal_runtime_flags_v8_internal::NavigatorLanguageInInsecureContextEnabledAttributeSetter(v8_value, info);
}

void V8InternalRuntimeFlags::NetInfoDownlinkMaxEnabledAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_InternalRuntimeFlags_netInfoDownlinkMaxEnabled_Getter");

  internal_runtime_flags_v8_internal::NetInfoDownlinkMaxEnabledAttributeGetter(info);
}

void V8InternalRuntimeFlags::NetworkServiceEnabledAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_InternalRuntimeFlags_networkServiceEnabled_Getter");

  internal_runtime_flags_v8_internal::NetworkServiceEnabledAttributeGetter(info);
}

void V8InternalRuntimeFlags::NewRemotePlaybackPipelineEnabledAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_InternalRuntimeFlags_newRemotePlaybackPipelineEnabled_Getter");

  internal_runtime_flags_v8_internal::NewRemotePlaybackPipelineEnabledAttributeGetter(info);
}

void V8InternalRuntimeFlags::NoIdleEncodingForWebTestsEnabledAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_InternalRuntimeFlags_noIdleEncodingForWebTestsEnabled_Getter");

  internal_runtime_flags_v8_internal::NoIdleEncodingForWebTestsEnabledAttributeGetter(info);
}

void V8InternalRuntimeFlags::NotificationConstructorEnabledAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_InternalRuntimeFlags_notificationConstructorEnabled_Getter");

  internal_runtime_flags_v8_internal::NotificationConstructorEnabledAttributeGetter(info);
}

void V8InternalRuntimeFlags::NotificationContentImageEnabledAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_InternalRuntimeFlags_notificationContentImageEnabled_Getter");

  internal_runtime_flags_v8_internal::NotificationContentImageEnabledAttributeGetter(info);
}

void V8InternalRuntimeFlags::NotificationsEnabledAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_InternalRuntimeFlags_notificationsEnabled_Getter");

  internal_runtime_flags_v8_internal::NotificationsEnabledAttributeGetter(info);
}

void V8InternalRuntimeFlags::NotificationTriggersEnabledAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_InternalRuntimeFlags_notificationTriggersEnabled_Getter");

  internal_runtime_flags_v8_internal::NotificationTriggersEnabledAttributeGetter(info);
}

void V8InternalRuntimeFlags::OffMainThreadCSSPaintEnabledAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_InternalRuntimeFlags_offMainThreadCSSPaintEnabled_Getter");

  internal_runtime_flags_v8_internal::OffMainThreadCSSPaintEnabledAttributeGetter(info);
}

void V8InternalRuntimeFlags::OffscreenCanvasEnabledAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_InternalRuntimeFlags_offscreenCanvasEnabled_Getter");

  internal_runtime_flags_v8_internal::OffscreenCanvasEnabledAttributeGetter(info);
}

void V8InternalRuntimeFlags::OffscreenCanvasCommitEnabledAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_InternalRuntimeFlags_offscreenCanvasCommitEnabled_Getter");

  internal_runtime_flags_v8_internal::OffscreenCanvasCommitEnabledAttributeGetter(info);
}

void V8InternalRuntimeFlags::OffscreenCanvasTextEnabledAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_InternalRuntimeFlags_offscreenCanvasTextEnabled_Getter");

  internal_runtime_flags_v8_internal::OffscreenCanvasTextEnabledAttributeGetter(info);
}

void V8InternalRuntimeFlags::OnDeviceChangeEnabledAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_InternalRuntimeFlags_onDeviceChangeEnabled_Getter");

  internal_runtime_flags_v8_internal::OnDeviceChangeEnabledAttributeGetter(info);
}

void V8InternalRuntimeFlags::OrientationEventEnabledAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_InternalRuntimeFlags_orientationEventEnabled_Getter");

  internal_runtime_flags_v8_internal::OrientationEventEnabledAttributeGetter(info);
}

void V8InternalRuntimeFlags::OriginTrialsEnabledAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_InternalRuntimeFlags_originTrialsEnabled_Getter");

  internal_runtime_flags_v8_internal::OriginTrialsEnabledAttributeGetter(info);
}

void V8InternalRuntimeFlags::OriginTrialsSampleAPIEnabledAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_InternalRuntimeFlags_originTrialsSampleAPIEnabled_Getter");

  internal_runtime_flags_v8_internal::OriginTrialsSampleAPIEnabledAttributeGetter(info);
}

void V8InternalRuntimeFlags::OriginTrialsSampleAPIDependentEnabledAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_InternalRuntimeFlags_originTrialsSampleAPIDependentEnabled_Getter");

  internal_runtime_flags_v8_internal::OriginTrialsSampleAPIDependentEnabledAttributeGetter(info);
}

void V8InternalRuntimeFlags::OriginTrialsSampleAPIImpliedEnabledAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_InternalRuntimeFlags_originTrialsSampleAPIImpliedEnabled_Getter");

  internal_runtime_flags_v8_internal::OriginTrialsSampleAPIImpliedEnabledAttributeGetter(info);
}

void V8InternalRuntimeFlags::OriginTrialsSampleAPIInvalidOSEnabledAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_InternalRuntimeFlags_originTrialsSampleAPIInvalidOSEnabled_Getter");

  internal_runtime_flags_v8_internal::OriginTrialsSampleAPIInvalidOSEnabledAttributeGetter(info);
}

void V8InternalRuntimeFlags::OriginTrialsSampleAPINavigationEnabledAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_InternalRuntimeFlags_originTrialsSampleAPINavigationEnabled_Getter");

  internal_runtime_flags_v8_internal::OriginTrialsSampleAPINavigationEnabledAttributeGetter(info);
}

void V8InternalRuntimeFlags::OutOfBlinkCorsEnabledAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_InternalRuntimeFlags_outOfBlinkCorsEnabled_Getter");

  internal_runtime_flags_v8_internal::OutOfBlinkCorsEnabledAttributeGetter(info);
}

void V8InternalRuntimeFlags::OverflowIconsForMediaControlsEnabledAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_InternalRuntimeFlags_overflowIconsForMediaControlsEnabled_Getter");

  internal_runtime_flags_v8_internal::OverflowIconsForMediaControlsEnabledAttributeGetter(info);
}

void V8InternalRuntimeFlags::OverlayScrollbarsEnabledAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_InternalRuntimeFlags_overlayScrollbarsEnabled_Getter");

  internal_runtime_flags_v8_internal::OverlayScrollbarsEnabledAttributeGetter(info);
}

void V8InternalRuntimeFlags::OverlayScrollbarsEnabledAttributeSetterCallback(
    const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_InternalRuntimeFlags_overlayScrollbarsEnabled_Setter");

  v8::Local<v8::Value> v8_value = info[0];

  internal_runtime_flags_v8_internal::OverlayScrollbarsEnabledAttributeSetter(v8_value, info);
}

void V8InternalRuntimeFlags::OverscrollCustomizationEnabledAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_InternalRuntimeFlags_overscrollCustomizationEnabled_Getter");

  internal_runtime_flags_v8_internal::OverscrollCustomizationEnabledAttributeGetter(info);
}

void V8InternalRuntimeFlags::OverscrollCustomizationEnabledAttributeSetterCallback(
    const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_InternalRuntimeFlags_overscrollCustomizationEnabled_Setter");

  v8::Local<v8::Value> v8_value = info[0];

  internal_runtime_flags_v8_internal::OverscrollCustomizationEnabledAttributeSetter(v8_value, info);
}

void V8InternalRuntimeFlags::PageLifecycleTransitionsOptInEnabledAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_InternalRuntimeFlags_pageLifecycleTransitionsOptInEnabled_Getter");

  internal_runtime_flags_v8_internal::PageLifecycleTransitionsOptInEnabledAttributeGetter(info);
}

void V8InternalRuntimeFlags::PageLifecycleTransitionsOptOutEnabledAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_InternalRuntimeFlags_pageLifecycleTransitionsOptOutEnabled_Getter");

  internal_runtime_flags_v8_internal::PageLifecycleTransitionsOptOutEnabledAttributeGetter(info);
}

void V8InternalRuntimeFlags::PagePopupEnabledAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_InternalRuntimeFlags_pagePopupEnabled_Getter");

  internal_runtime_flags_v8_internal::PagePopupEnabledAttributeGetter(info);
}

void V8InternalRuntimeFlags::PaintUnderInvalidationCheckingEnabledAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_InternalRuntimeFlags_paintUnderInvalidationCheckingEnabled_Getter");

  internal_runtime_flags_v8_internal::PaintUnderInvalidationCheckingEnabledAttributeGetter(info);
}

void V8InternalRuntimeFlags::PaintUnderInvalidationCheckingEnabledAttributeSetterCallback(
    const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_InternalRuntimeFlags_paintUnderInvalidationCheckingEnabled_Setter");

  v8::Local<v8::Value> v8_value = info[0];

  internal_runtime_flags_v8_internal::PaintUnderInvalidationCheckingEnabledAttributeSetter(v8_value, info);
}

void V8InternalRuntimeFlags::PassiveDocumentEventListenersEnabledAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_InternalRuntimeFlags_passiveDocumentEventListenersEnabled_Getter");

  internal_runtime_flags_v8_internal::PassiveDocumentEventListenersEnabledAttributeGetter(info);
}

void V8InternalRuntimeFlags::PassiveDocumentWheelEventListenersEnabledAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_InternalRuntimeFlags_passiveDocumentWheelEventListenersEnabled_Getter");

  internal_runtime_flags_v8_internal::PassiveDocumentWheelEventListenersEnabledAttributeGetter(info);
}

void V8InternalRuntimeFlags::PassPaintVisualRectToCompositorEnabledAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_InternalRuntimeFlags_passPaintVisualRectToCompositorEnabled_Getter");

  internal_runtime_flags_v8_internal::PassPaintVisualRectToCompositorEnabledAttributeGetter(info);
}

void V8InternalRuntimeFlags::PaymentAppEnabledAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_InternalRuntimeFlags_paymentAppEnabled_Getter");

  internal_runtime_flags_v8_internal::PaymentAppEnabledAttributeGetter(info);
}

void V8InternalRuntimeFlags::PaymentHandlerChangePaymentMethodEnabledAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_InternalRuntimeFlags_paymentHandlerChangePaymentMethodEnabled_Getter");

  internal_runtime_flags_v8_internal::PaymentHandlerChangePaymentMethodEnabledAttributeGetter(info);
}

void V8InternalRuntimeFlags::PaymentMethodChangeEventEnabledAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_InternalRuntimeFlags_paymentMethodChangeEventEnabled_Getter");

  internal_runtime_flags_v8_internal::PaymentMethodChangeEventEnabledAttributeGetter(info);
}

void V8InternalRuntimeFlags::PaymentRequestEnabledAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_InternalRuntimeFlags_paymentRequestEnabled_Getter");

  internal_runtime_flags_v8_internal::PaymentRequestEnabledAttributeGetter(info);
}

void V8InternalRuntimeFlags::PaymentRequestHasEnrolledInstrumentEnabledAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_InternalRuntimeFlags_paymentRequestHasEnrolledInstrumentEnabled_Getter");

  internal_runtime_flags_v8_internal::PaymentRequestHasEnrolledInstrumentEnabledAttributeGetter(info);
}

void V8InternalRuntimeFlags::PaymentRequestMerchantValidationEventEnabledAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_InternalRuntimeFlags_paymentRequestMerchantValidationEventEnabled_Getter");

  internal_runtime_flags_v8_internal::PaymentRequestMerchantValidationEventEnabledAttributeGetter(info);
}

void V8InternalRuntimeFlags::PaymentRetryEnabledAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_InternalRuntimeFlags_paymentRetryEnabled_Getter");

  internal_runtime_flags_v8_internal::PaymentRetryEnabledAttributeGetter(info);
}

void V8InternalRuntimeFlags::PerformanceManagerInstrumentationEnabledAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_InternalRuntimeFlags_performanceManagerInstrumentationEnabled_Getter");

  internal_runtime_flags_v8_internal::PerformanceManagerInstrumentationEnabledAttributeGetter(info);
}

void V8InternalRuntimeFlags::PerformanceObserverBufferedFlagEnabledAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_InternalRuntimeFlags_performanceObserverBufferedFlagEnabled_Getter");

  internal_runtime_flags_v8_internal::PerformanceObserverBufferedFlagEnabledAttributeGetter(info);
}

void V8InternalRuntimeFlags::PeriodicBackgroundSyncEnabledAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_InternalRuntimeFlags_periodicBackgroundSyncEnabled_Getter");

  internal_runtime_flags_v8_internal::PeriodicBackgroundSyncEnabledAttributeGetter(info);
}

void V8InternalRuntimeFlags::PeriodicBackgroundSyncEnabledAttributeSetterCallback(
    const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_InternalRuntimeFlags_periodicBackgroundSyncEnabled_Setter");

  v8::Local<v8::Value> v8_value = info[0];

  internal_runtime_flags_v8_internal::PeriodicBackgroundSyncEnabledAttributeSetter(v8_value, info);
}

void V8InternalRuntimeFlags::PerMethodCanMakePaymentQuotaEnabledAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_InternalRuntimeFlags_perMethodCanMakePaymentQuotaEnabled_Getter");

  internal_runtime_flags_v8_internal::PerMethodCanMakePaymentQuotaEnabledAttributeGetter(info);
}

void V8InternalRuntimeFlags::PermissionDelegationEnabledAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_InternalRuntimeFlags_permissionDelegationEnabled_Getter");

  internal_runtime_flags_v8_internal::PermissionDelegationEnabledAttributeGetter(info);
}

void V8InternalRuntimeFlags::PermissionsEnabledAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_InternalRuntimeFlags_permissionsEnabled_Getter");

  internal_runtime_flags_v8_internal::PermissionsEnabledAttributeGetter(info);
}

void V8InternalRuntimeFlags::PermissionsRequestRevokeEnabledAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_InternalRuntimeFlags_permissionsRequestRevokeEnabled_Getter");

  internal_runtime_flags_v8_internal::PermissionsRequestRevokeEnabledAttributeGetter(info);
}

void V8InternalRuntimeFlags::PictureInPictureEnabledAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_InternalRuntimeFlags_pictureInPictureEnabled_Getter");

  internal_runtime_flags_v8_internal::PictureInPictureEnabledAttributeGetter(info);
}

void V8InternalRuntimeFlags::PictureInPictureEnabledAttributeSetterCallback(
    const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_InternalRuntimeFlags_pictureInPictureEnabled_Setter");

  v8::Local<v8::Value> v8_value = info[0];

  internal_runtime_flags_v8_internal::PictureInPictureEnabledAttributeSetter(v8_value, info);
}

void V8InternalRuntimeFlags::PictureInPictureAPIEnabledAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_InternalRuntimeFlags_pictureInPictureAPIEnabled_Getter");

  internal_runtime_flags_v8_internal::PictureInPictureAPIEnabledAttributeGetter(info);
}

void V8InternalRuntimeFlags::PictureInPictureV2EnabledAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_InternalRuntimeFlags_pictureInPictureV2Enabled_Getter");

  internal_runtime_flags_v8_internal::PictureInPictureV2EnabledAttributeGetter(info);
}

void V8InternalRuntimeFlags::PictureInPictureV2EnabledAttributeSetterCallback(
    const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_InternalRuntimeFlags_pictureInPictureV2Enabled_Setter");

  v8::Local<v8::Value> v8_value = info[0];

  internal_runtime_flags_v8_internal::PictureInPictureV2EnabledAttributeSetter(v8_value, info);
}

void V8InternalRuntimeFlags::PointerRawUpdateEnabledAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_InternalRuntimeFlags_pointerRawUpdateEnabled_Getter");

  internal_runtime_flags_v8_internal::PointerRawUpdateEnabledAttributeGetter(info);
}

void V8InternalRuntimeFlags::PortalsEnabledAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_InternalRuntimeFlags_portalsEnabled_Getter");

  internal_runtime_flags_v8_internal::PortalsEnabledAttributeGetter(info);
}

void V8InternalRuntimeFlags::PostAnimationFrameEnabledAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_InternalRuntimeFlags_postAnimationFrameEnabled_Getter");

  internal_runtime_flags_v8_internal::PostAnimationFrameEnabledAttributeGetter(info);
}

void V8InternalRuntimeFlags::PreciseMemoryInfoEnabledAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_InternalRuntimeFlags_preciseMemoryInfoEnabled_Getter");

  internal_runtime_flags_v8_internal::PreciseMemoryInfoEnabledAttributeGetter(info);
}

void V8InternalRuntimeFlags::PredictedEventsEnabledAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_InternalRuntimeFlags_predictedEventsEnabled_Getter");

  internal_runtime_flags_v8_internal::PredictedEventsEnabledAttributeGetter(info);
}

void V8InternalRuntimeFlags::PrefixedVideoFullscreenEnabledAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_InternalRuntimeFlags_prefixedVideoFullscreenEnabled_Getter");

  internal_runtime_flags_v8_internal::PrefixedVideoFullscreenEnabledAttributeGetter(info);
}

void V8InternalRuntimeFlags::PresentationEnabledAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_InternalRuntimeFlags_presentationEnabled_Getter");

  internal_runtime_flags_v8_internal::PresentationEnabledAttributeGetter(info);
}

void V8InternalRuntimeFlags::PrintBrowserEnabledAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_InternalRuntimeFlags_printBrowserEnabled_Getter");

  internal_runtime_flags_v8_internal::PrintBrowserEnabledAttributeGetter(info);
}

void V8InternalRuntimeFlags::PriorityHintsEnabledAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_InternalRuntimeFlags_priorityHintsEnabled_Getter");

  internal_runtime_flags_v8_internal::PriorityHintsEnabledAttributeGetter(info);
}

void V8InternalRuntimeFlags::PushMessagingEnabledAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_InternalRuntimeFlags_pushMessagingEnabled_Getter");

  internal_runtime_flags_v8_internal::PushMessagingEnabledAttributeGetter(info);
}

void V8InternalRuntimeFlags::RasterInducingScrollEnabledAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_InternalRuntimeFlags_rasterInducingScrollEnabled_Getter");

  internal_runtime_flags_v8_internal::RasterInducingScrollEnabledAttributeGetter(info);
}

void V8InternalRuntimeFlags::ReducedReferrerGranularityEnabledAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_InternalRuntimeFlags_reducedReferrerGranularityEnabled_Getter");

  internal_runtime_flags_v8_internal::ReducedReferrerGranularityEnabledAttributeGetter(info);
}

void V8InternalRuntimeFlags::RemotePlaybackEnabledAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_InternalRuntimeFlags_remotePlaybackEnabled_Getter");

  internal_runtime_flags_v8_internal::RemotePlaybackEnabledAttributeGetter(info);
}

void V8InternalRuntimeFlags::RemotePlaybackBackendEnabledAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_InternalRuntimeFlags_remotePlaybackBackendEnabled_Getter");

  internal_runtime_flags_v8_internal::RemotePlaybackBackendEnabledAttributeGetter(info);
}

void V8InternalRuntimeFlags::RemotePlaybackBackendEnabledAttributeSetterCallback(
    const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_InternalRuntimeFlags_remotePlaybackBackendEnabled_Setter");

  v8::Local<v8::Value> v8_value = info[0];

  internal_runtime_flags_v8_internal::RemotePlaybackBackendEnabledAttributeSetter(v8_value, info);
}

void V8InternalRuntimeFlags::RenderingPipelineThrottlingEnabledAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_InternalRuntimeFlags_renderingPipelineThrottlingEnabled_Getter");

  internal_runtime_flags_v8_internal::RenderingPipelineThrottlingEnabledAttributeGetter(info);
}

void V8InternalRuntimeFlags::ResourceLoadSchedulerEnabledAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_InternalRuntimeFlags_resourceLoadSchedulerEnabled_Getter");

  internal_runtime_flags_v8_internal::ResourceLoadSchedulerEnabledAttributeGetter(info);
}

void V8InternalRuntimeFlags::RestrictAppCacheToSecureContextsEnabledAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_InternalRuntimeFlags_restrictAppCacheToSecureContextsEnabled_Getter");

  internal_runtime_flags_v8_internal::RestrictAppCacheToSecureContextsEnabledAttributeGetter(info);
}

void V8InternalRuntimeFlags::RestrictDeviceSensorEventsToSecureContextsEnabledAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_InternalRuntimeFlags_restrictDeviceSensorEventsToSecureContextsEnabled_Getter");

  internal_runtime_flags_v8_internal::RestrictDeviceSensorEventsToSecureContextsEnabledAttributeGetter(info);
}

void V8InternalRuntimeFlags::RestrictLazyFrameLoadingToDataSaverEnabledAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_InternalRuntimeFlags_restrictLazyFrameLoadingToDataSaverEnabled_Getter");

  internal_runtime_flags_v8_internal::RestrictLazyFrameLoadingToDataSaverEnabledAttributeGetter(info);
}

void V8InternalRuntimeFlags::RestrictLazyImageLoadingToDataSaverEnabledAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_InternalRuntimeFlags_restrictLazyImageLoadingToDataSaverEnabled_Getter");

  internal_runtime_flags_v8_internal::RestrictLazyImageLoadingToDataSaverEnabledAttributeGetter(info);
}

void V8InternalRuntimeFlags::RTCAudioJitterBufferMaxPacketsEnabledAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_InternalRuntimeFlags_rtcAudioJitterBufferMaxPacketsEnabled_Getter");

  internal_runtime_flags_v8_internal::RTCAudioJitterBufferMaxPacketsEnabledAttributeGetter(info);
}

void V8InternalRuntimeFlags::RTCAudioJitterBufferRtxHandlingEnabledAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_InternalRuntimeFlags_rtcAudioJitterBufferRtxHandlingEnabled_Getter");

  internal_runtime_flags_v8_internal::RTCAudioJitterBufferRtxHandlingEnabledAttributeGetter(info);
}

void V8InternalRuntimeFlags::RTCDtlsTransportEnabledAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_InternalRuntimeFlags_rtcDtlsTransportEnabled_Getter");

  internal_runtime_flags_v8_internal::RTCDtlsTransportEnabledAttributeGetter(info);
}

void V8InternalRuntimeFlags::RTCIceTransportExtensionEnabledAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_InternalRuntimeFlags_rtcIceTransportExtensionEnabled_Getter");

  internal_runtime_flags_v8_internal::RTCIceTransportExtensionEnabledAttributeGetter(info);
}

void V8InternalRuntimeFlags::RTCJitterBufferDelayHintEnabledAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_InternalRuntimeFlags_rtcJitterBufferDelayHintEnabled_Getter");

  internal_runtime_flags_v8_internal::RTCJitterBufferDelayHintEnabledAttributeGetter(info);
}

void V8InternalRuntimeFlags::RTCQuicTransportEnabledAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_InternalRuntimeFlags_rtcQuicTransportEnabled_Getter");

  internal_runtime_flags_v8_internal::RTCQuicTransportEnabledAttributeGetter(info);
}

void V8InternalRuntimeFlags::RTCRtpSenderParametersEnabledAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_InternalRuntimeFlags_rtcRtpSenderParametersEnabled_Getter");

  internal_runtime_flags_v8_internal::RTCRtpSenderParametersEnabledAttributeGetter(info);
}

void V8InternalRuntimeFlags::RTCSctpTransportEnabledAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_InternalRuntimeFlags_rtcSctpTransportEnabled_Getter");

  internal_runtime_flags_v8_internal::RTCSctpTransportEnabledAttributeGetter(info);
}

void V8InternalRuntimeFlags::RTCStatsRelativePacketArrivalDelayEnabledAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_InternalRuntimeFlags_rtcStatsRelativePacketArrivalDelayEnabled_Getter");

  internal_runtime_flags_v8_internal::RTCStatsRelativePacketArrivalDelayEnabledAttributeGetter(info);
}

void V8InternalRuntimeFlags::RTCUnifiedPlanEnabledAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_InternalRuntimeFlags_rtcUnifiedPlanEnabled_Getter");

  internal_runtime_flags_v8_internal::RTCUnifiedPlanEnabledAttributeGetter(info);
}

void V8InternalRuntimeFlags::RTCUnifiedPlanByDefaultEnabledAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_InternalRuntimeFlags_rtcUnifiedPlanByDefaultEnabled_Getter");

  internal_runtime_flags_v8_internal::RTCUnifiedPlanByDefaultEnabledAttributeGetter(info);
}

void V8InternalRuntimeFlags::ScriptedSpeechRecognitionEnabledAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_InternalRuntimeFlags_scriptedSpeechRecognitionEnabled_Getter");

  internal_runtime_flags_v8_internal::ScriptedSpeechRecognitionEnabledAttributeGetter(info);
}

void V8InternalRuntimeFlags::ScriptedSpeechSynthesisEnabledAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_InternalRuntimeFlags_scriptedSpeechSynthesisEnabled_Getter");

  internal_runtime_flags_v8_internal::ScriptedSpeechSynthesisEnabledAttributeGetter(info);
}

void V8InternalRuntimeFlags::ScriptStreamingOnPreloadEnabledAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_InternalRuntimeFlags_scriptStreamingOnPreloadEnabled_Getter");

  internal_runtime_flags_v8_internal::ScriptStreamingOnPreloadEnabledAttributeGetter(info);
}

void V8InternalRuntimeFlags::ScrollAnchorSerializationEnabledAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_InternalRuntimeFlags_scrollAnchorSerializationEnabled_Getter");

  internal_runtime_flags_v8_internal::ScrollAnchorSerializationEnabledAttributeGetter(info);
}

void V8InternalRuntimeFlags::ScrollCustomizationEnabledAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_InternalRuntimeFlags_scrollCustomizationEnabled_Getter");

  internal_runtime_flags_v8_internal::ScrollCustomizationEnabledAttributeGetter(info);
}

void V8InternalRuntimeFlags::ScrollTopLeftInteropEnabledAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_InternalRuntimeFlags_scrollTopLeftInteropEnabled_Getter");

  internal_runtime_flags_v8_internal::ScrollTopLeftInteropEnabledAttributeGetter(info);
}

void V8InternalRuntimeFlags::SendBeaconThrowForBlobWithNonSimpleTypeEnabledAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_InternalRuntimeFlags_sendBeaconThrowForBlobWithNonSimpleTypeEnabled_Getter");

  internal_runtime_flags_v8_internal::SendBeaconThrowForBlobWithNonSimpleTypeEnabledAttributeGetter(info);
}

void V8InternalRuntimeFlags::SendMouseEventsDisabledFormControlsEnabledAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_InternalRuntimeFlags_sendMouseEventsDisabledFormControlsEnabled_Getter");

  internal_runtime_flags_v8_internal::SendMouseEventsDisabledFormControlsEnabledAttributeGetter(info);
}

void V8InternalRuntimeFlags::SensorEnabledAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_InternalRuntimeFlags_sensorEnabled_Getter");

  internal_runtime_flags_v8_internal::SensorEnabledAttributeGetter(info);
}

void V8InternalRuntimeFlags::SensorExtraClassesEnabledAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_InternalRuntimeFlags_sensorExtraClassesEnabled_Getter");

  internal_runtime_flags_v8_internal::SensorExtraClassesEnabledAttributeGetter(info);
}

void V8InternalRuntimeFlags::SerialEnabledAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_InternalRuntimeFlags_serialEnabled_Getter");

  internal_runtime_flags_v8_internal::SerialEnabledAttributeGetter(info);
}

void V8InternalRuntimeFlags::SetRootScrollerEnabledAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_InternalRuntimeFlags_setRootScrollerEnabled_Getter");

  internal_runtime_flags_v8_internal::SetRootScrollerEnabledAttributeGetter(info);
}

void V8InternalRuntimeFlags::ShadowDOMV0EnabledAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_InternalRuntimeFlags_shadowDOMV0Enabled_Getter");

  internal_runtime_flags_v8_internal::ShadowDOMV0EnabledAttributeGetter(info);
}

void V8InternalRuntimeFlags::ShadowPiercingDescendantCombinatorEnabledAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_InternalRuntimeFlags_shadowPiercingDescendantCombinatorEnabled_Getter");

  internal_runtime_flags_v8_internal::ShadowPiercingDescendantCombinatorEnabledAttributeGetter(info);
}

void V8InternalRuntimeFlags::ShapeDetectionEnabledAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_InternalRuntimeFlags_shapeDetectionEnabled_Getter");

  internal_runtime_flags_v8_internal::ShapeDetectionEnabledAttributeGetter(info);
}

void V8InternalRuntimeFlags::SharedArrayBufferEnabledAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_InternalRuntimeFlags_sharedArrayBufferEnabled_Getter");

  internal_runtime_flags_v8_internal::SharedArrayBufferEnabledAttributeGetter(info);
}

void V8InternalRuntimeFlags::SharedWorkerEnabledAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_InternalRuntimeFlags_sharedWorkerEnabled_Getter");

  internal_runtime_flags_v8_internal::SharedWorkerEnabledAttributeGetter(info);
}

void V8InternalRuntimeFlags::SignatureBasedIntegrityEnabledAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_InternalRuntimeFlags_signatureBasedIntegrityEnabled_Getter");

  internal_runtime_flags_v8_internal::SignatureBasedIntegrityEnabledAttributeGetter(info);
}

void V8InternalRuntimeFlags::SignedExchangeSubresourcePrefetchEnabledAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_InternalRuntimeFlags_signedExchangeSubresourcePrefetchEnabled_Getter");

  internal_runtime_flags_v8_internal::SignedExchangeSubresourcePrefetchEnabledAttributeGetter(info);
}

void V8InternalRuntimeFlags::SkipAdEnabledAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_InternalRuntimeFlags_skipAdEnabled_Getter");

  internal_runtime_flags_v8_internal::SkipAdEnabledAttributeGetter(info);
}

void V8InternalRuntimeFlags::SkipTouchEventFilterEnabledAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_InternalRuntimeFlags_skipTouchEventFilterEnabled_Getter");

  internal_runtime_flags_v8_internal::SkipTouchEventFilterEnabledAttributeGetter(info);
}

void V8InternalRuntimeFlags::SkipTouchEventFilterEnabledAttributeSetterCallback(
    const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_InternalRuntimeFlags_skipTouchEventFilterEnabled_Setter");

  v8::Local<v8::Value> v8_value = info[0];

  internal_runtime_flags_v8_internal::SkipTouchEventFilterEnabledAttributeSetter(v8_value, info);
}

void V8InternalRuntimeFlags::SmoothScrollJSInterventionEnabledAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_InternalRuntimeFlags_smoothScrollJSInterventionEnabled_Getter");

  internal_runtime_flags_v8_internal::SmoothScrollJSInterventionEnabledAttributeGetter(info);
}

void V8InternalRuntimeFlags::SmsReceiverEnabledAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_InternalRuntimeFlags_smsReceiverEnabled_Getter");

  internal_runtime_flags_v8_internal::SmsReceiverEnabledAttributeGetter(info);
}

void V8InternalRuntimeFlags::SpeechSynthesisEventCharLengthEnabledAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_InternalRuntimeFlags_speechSynthesisEventCharLengthEnabled_Getter");

  internal_runtime_flags_v8_internal::SpeechSynthesisEventCharLengthEnabledAttributeGetter(info);
}

void V8InternalRuntimeFlags::StableBlinkFeaturesEnabledAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_InternalRuntimeFlags_stableBlinkFeaturesEnabled_Getter");

  internal_runtime_flags_v8_internal::StableBlinkFeaturesEnabledAttributeGetter(info);
}

void V8InternalRuntimeFlags::StackedCSSPropertyAnimationsEnabledAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_InternalRuntimeFlags_stackedCSSPropertyAnimationsEnabled_Getter");

  internal_runtime_flags_v8_internal::StackedCSSPropertyAnimationsEnabledAttributeGetter(info);
}

void V8InternalRuntimeFlags::StaleWhileRevalidateEnabledAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_InternalRuntimeFlags_staleWhileRevalidateEnabled_Getter");

  internal_runtime_flags_v8_internal::StaleWhileRevalidateEnabledAttributeGetter(info);
}

void V8InternalRuntimeFlags::StorageQuotaDetailsEnabledAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_InternalRuntimeFlags_storageQuotaDetailsEnabled_Getter");

  internal_runtime_flags_v8_internal::StorageQuotaDetailsEnabledAttributeGetter(info);
}

void V8InternalRuntimeFlags::StreamsNativeEnabledAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_InternalRuntimeFlags_streamsNativeEnabled_Getter");

  internal_runtime_flags_v8_internal::StreamsNativeEnabledAttributeGetter(info);
}

void V8InternalRuntimeFlags::TextFragmentIdentifiersEnabledAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_InternalRuntimeFlags_textFragmentIdentifiersEnabled_Getter");

  internal_runtime_flags_v8_internal::TextFragmentIdentifiersEnabledAttributeGetter(info);
}

void V8InternalRuntimeFlags::TextUnderlinePositionLeftRightEnabledAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_InternalRuntimeFlags_textUnderlinePositionLeftRightEnabled_Getter");

  internal_runtime_flags_v8_internal::TextUnderlinePositionLeftRightEnabledAttributeGetter(info);
}

void V8InternalRuntimeFlags::TimerThrottlingForBackgroundTabsEnabledAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_InternalRuntimeFlags_timerThrottlingForBackgroundTabsEnabled_Getter");

  internal_runtime_flags_v8_internal::TimerThrottlingForBackgroundTabsEnabledAttributeGetter(info);
}

void V8InternalRuntimeFlags::TimerThrottlingForHiddenFramesEnabledAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_InternalRuntimeFlags_timerThrottlingForHiddenFramesEnabled_Getter");

  internal_runtime_flags_v8_internal::TimerThrottlingForHiddenFramesEnabledAttributeGetter(info);
}

void V8InternalRuntimeFlags::TouchEventFeatureDetectionEnabledAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_InternalRuntimeFlags_touchEventFeatureDetectionEnabled_Getter");

  internal_runtime_flags_v8_internal::TouchEventFeatureDetectionEnabledAttributeGetter(info);
}

void V8InternalRuntimeFlags::TrackLayoutPassesPerBlockEnabledAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_InternalRuntimeFlags_trackLayoutPassesPerBlockEnabled_Getter");

  internal_runtime_flags_v8_internal::TrackLayoutPassesPerBlockEnabledAttributeGetter(info);
}

void V8InternalRuntimeFlags::TransferableStreamsEnabledAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_InternalRuntimeFlags_transferableStreamsEnabled_Getter");

  internal_runtime_flags_v8_internal::TransferableStreamsEnabledAttributeGetter(info);
}

void V8InternalRuntimeFlags::TranslateServiceEnabledAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_InternalRuntimeFlags_translateServiceEnabled_Getter");

  internal_runtime_flags_v8_internal::TranslateServiceEnabledAttributeGetter(info);
}

void V8InternalRuntimeFlags::TrustedDOMTypesEnabledAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_InternalRuntimeFlags_trustedDOMTypesEnabled_Getter");

  internal_runtime_flags_v8_internal::TrustedDOMTypesEnabledAttributeGetter(info);
}

void V8InternalRuntimeFlags::UnclosedFormControlIsInvalidEnabledAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_InternalRuntimeFlags_unclosedFormControlIsInvalidEnabled_Getter");

  internal_runtime_flags_v8_internal::UnclosedFormControlIsInvalidEnabledAttributeGetter(info);
}

void V8InternalRuntimeFlags::UnifiedPointerCaptureInBlinkEnabledAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_InternalRuntimeFlags_unifiedPointerCaptureInBlinkEnabled_Getter");

  internal_runtime_flags_v8_internal::UnifiedPointerCaptureInBlinkEnabledAttributeGetter(info);
}

void V8InternalRuntimeFlags::UnifiedTouchAdjustmentEnabledAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_InternalRuntimeFlags_unifiedTouchAdjustmentEnabled_Getter");

  internal_runtime_flags_v8_internal::UnifiedTouchAdjustmentEnabledAttributeGetter(info);
}

void V8InternalRuntimeFlags::UnoptimizedImagePoliciesEnabledAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_InternalRuntimeFlags_unoptimizedImagePoliciesEnabled_Getter");

  internal_runtime_flags_v8_internal::UnoptimizedImagePoliciesEnabledAttributeGetter(info);
}

void V8InternalRuntimeFlags::UpdateHoverFromLayoutChangeAtBeginFrameEnabledAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_InternalRuntimeFlags_updateHoverFromLayoutChangeAtBeginFrameEnabled_Getter");

  internal_runtime_flags_v8_internal::UpdateHoverFromLayoutChangeAtBeginFrameEnabledAttributeGetter(info);
}

void V8InternalRuntimeFlags::UpdateHoverFromLayoutChangeAtBeginFrameEnabledAttributeSetterCallback(
    const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_InternalRuntimeFlags_updateHoverFromLayoutChangeAtBeginFrameEnabled_Setter");

  v8::Local<v8::Value> v8_value = info[0];

  internal_runtime_flags_v8_internal::UpdateHoverFromLayoutChangeAtBeginFrameEnabledAttributeSetter(v8_value, info);
}

void V8InternalRuntimeFlags::UpdateHoverFromScrollAtBeginFrameEnabledAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_InternalRuntimeFlags_updateHoverFromScrollAtBeginFrameEnabled_Getter");

  internal_runtime_flags_v8_internal::UpdateHoverFromScrollAtBeginFrameEnabledAttributeGetter(info);
}

void V8InternalRuntimeFlags::UpdateHoverFromScrollAtBeginFrameEnabledAttributeSetterCallback(
    const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_InternalRuntimeFlags_updateHoverFromScrollAtBeginFrameEnabled_Setter");

  v8::Local<v8::Value> v8_value = info[0];

  internal_runtime_flags_v8_internal::UpdateHoverFromScrollAtBeginFrameEnabledAttributeSetter(v8_value, info);
}

void V8InternalRuntimeFlags::UserActivationAPIEnabledAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_InternalRuntimeFlags_userActivationAPIEnabled_Getter");

  internal_runtime_flags_v8_internal::UserActivationAPIEnabledAttributeGetter(info);
}

void V8InternalRuntimeFlags::UserActivationPostMessageTransferEnabledAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_InternalRuntimeFlags_userActivationPostMessageTransferEnabled_Getter");

  internal_runtime_flags_v8_internal::UserActivationPostMessageTransferEnabledAttributeGetter(info);
}

void V8InternalRuntimeFlags::UserActivationSameOriginVisibilityEnabledAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_InternalRuntimeFlags_userActivationSameOriginVisibilityEnabled_Getter");

  internal_runtime_flags_v8_internal::UserActivationSameOriginVisibilityEnabledAttributeGetter(info);
}

void V8InternalRuntimeFlags::UserActivationV2EnabledAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_InternalRuntimeFlags_userActivationV2Enabled_Getter");

  internal_runtime_flags_v8_internal::UserActivationV2EnabledAttributeGetter(info);
}

void V8InternalRuntimeFlags::UserAgentClientHintEnabledAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_InternalRuntimeFlags_userAgentClientHintEnabled_Getter");

  internal_runtime_flags_v8_internal::UserAgentClientHintEnabledAttributeGetter(info);
}

void V8InternalRuntimeFlags::V8IdleTasksEnabledAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_InternalRuntimeFlags_v8IdleTasksEnabled_Getter");

  internal_runtime_flags_v8_internal::V8IdleTasksEnabledAttributeGetter(info);
}

void V8InternalRuntimeFlags::VideoAutoFullscreenEnabledAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_InternalRuntimeFlags_videoAutoFullscreenEnabled_Getter");

  internal_runtime_flags_v8_internal::VideoAutoFullscreenEnabledAttributeGetter(info);
}

void V8InternalRuntimeFlags::VideoAutoFullscreenEnabledAttributeSetterCallback(
    const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_InternalRuntimeFlags_videoAutoFullscreenEnabled_Setter");

  v8::Local<v8::Value> v8_value = info[0];

  internal_runtime_flags_v8_internal::VideoAutoFullscreenEnabledAttributeSetter(v8_value, info);
}

void V8InternalRuntimeFlags::VideoFullscreenDetectionEnabledAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_InternalRuntimeFlags_videoFullscreenDetectionEnabled_Getter");

  internal_runtime_flags_v8_internal::VideoFullscreenDetectionEnabledAttributeGetter(info);
}

void V8InternalRuntimeFlags::VideoFullscreenOrientationLockEnabledAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_InternalRuntimeFlags_videoFullscreenOrientationLockEnabled_Getter");

  internal_runtime_flags_v8_internal::VideoFullscreenOrientationLockEnabledAttributeGetter(info);
}

void V8InternalRuntimeFlags::VideoRotateToFullscreenEnabledAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_InternalRuntimeFlags_videoRotateToFullscreenEnabled_Getter");

  internal_runtime_flags_v8_internal::VideoRotateToFullscreenEnabledAttributeGetter(info);
}

void V8InternalRuntimeFlags::VisibilityCollapseColumnEnabledAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_InternalRuntimeFlags_visibilityCollapseColumnEnabled_Getter");

  internal_runtime_flags_v8_internal::VisibilityCollapseColumnEnabledAttributeGetter(info);
}

void V8InternalRuntimeFlags::WakeLockNavigatorEnabledAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_InternalRuntimeFlags_wakeLockNavigatorEnabled_Getter");

  internal_runtime_flags_v8_internal::WakeLockNavigatorEnabledAttributeGetter(info);
}

void V8InternalRuntimeFlags::WasmCodeCacheEnabledAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_InternalRuntimeFlags_wasmCodeCacheEnabled_Getter");

  internal_runtime_flags_v8_internal::WasmCodeCacheEnabledAttributeGetter(info);
}

void V8InternalRuntimeFlags::WebAnimationsAPIEnabledAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_InternalRuntimeFlags_webAnimationsAPIEnabled_Getter");

  internal_runtime_flags_v8_internal::WebAnimationsAPIEnabledAttributeGetter(info);
}

void V8InternalRuntimeFlags::WebAnimationsSVGEnabledAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_InternalRuntimeFlags_webAnimationsSVGEnabled_Getter");

  internal_runtime_flags_v8_internal::WebAnimationsSVGEnabledAttributeGetter(info);
}

void V8InternalRuntimeFlags::WebAssemblyThreadsEnabledAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_InternalRuntimeFlags_webAssemblyThreadsEnabled_Getter");

  internal_runtime_flags_v8_internal::WebAssemblyThreadsEnabledAttributeGetter(info);
}

void V8InternalRuntimeFlags::WebAuthEnabledAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_InternalRuntimeFlags_webAuthEnabled_Getter");

  internal_runtime_flags_v8_internal::WebAuthEnabledAttributeGetter(info);
}

void V8InternalRuntimeFlags::WebBluetoothEnabledAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_InternalRuntimeFlags_webBluetoothEnabled_Getter");

  internal_runtime_flags_v8_internal::WebBluetoothEnabledAttributeGetter(info);
}

void V8InternalRuntimeFlags::WebBluetoothScanningEnabledAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_InternalRuntimeFlags_webBluetoothScanningEnabled_Getter");

  internal_runtime_flags_v8_internal::WebBluetoothScanningEnabledAttributeGetter(info);
}

void V8InternalRuntimeFlags::WebGL2ComputeContextEnabledAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_InternalRuntimeFlags_webgl2ComputeContextEnabled_Getter");

  internal_runtime_flags_v8_internal::WebGL2ComputeContextEnabledAttributeGetter(info);
}

void V8InternalRuntimeFlags::WebGLDraftExtensionsEnabledAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_InternalRuntimeFlags_webglDraftExtensionsEnabled_Getter");

  internal_runtime_flags_v8_internal::WebGLDraftExtensionsEnabledAttributeGetter(info);
}

void V8InternalRuntimeFlags::WebGLImageChromiumEnabledAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_InternalRuntimeFlags_webglImageChromiumEnabled_Getter");

  internal_runtime_flags_v8_internal::WebGLImageChromiumEnabledAttributeGetter(info);
}

void V8InternalRuntimeFlags::WebGPUEnabledAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_InternalRuntimeFlags_webgpuEnabled_Getter");

  internal_runtime_flags_v8_internal::WebGPUEnabledAttributeGetter(info);
}

void V8InternalRuntimeFlags::WebHIDEnabledAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_InternalRuntimeFlags_webHIDEnabled_Getter");

  internal_runtime_flags_v8_internal::WebHIDEnabledAttributeGetter(info);
}

void V8InternalRuntimeFlags::WebNFCEnabledAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_InternalRuntimeFlags_webNFCEnabled_Getter");

  internal_runtime_flags_v8_internal::WebNFCEnabledAttributeGetter(info);
}

void V8InternalRuntimeFlags::WebShareEnabledAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_InternalRuntimeFlags_webShareEnabled_Getter");

  internal_runtime_flags_v8_internal::WebShareEnabledAttributeGetter(info);
}

void V8InternalRuntimeFlags::WebShareV2EnabledAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_InternalRuntimeFlags_webShareV2Enabled_Getter");

  internal_runtime_flags_v8_internal::WebShareV2EnabledAttributeGetter(info);
}

void V8InternalRuntimeFlags::WebUSBEnabledAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_InternalRuntimeFlags_webUSBEnabled_Getter");

  internal_runtime_flags_v8_internal::WebUSBEnabledAttributeGetter(info);
}

void V8InternalRuntimeFlags::WebUSBOnDedicatedWorkersEnabledAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_InternalRuntimeFlags_webUSBOnDedicatedWorkersEnabled_Getter");

  internal_runtime_flags_v8_internal::WebUSBOnDedicatedWorkersEnabledAttributeGetter(info);
}

void V8InternalRuntimeFlags::WebVREnabledAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_InternalRuntimeFlags_webVREnabled_Getter");

  internal_runtime_flags_v8_internal::WebVREnabledAttributeGetter(info);
}

void V8InternalRuntimeFlags::WebVTTRegionsEnabledAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_InternalRuntimeFlags_webVTTRegionsEnabled_Getter");

  internal_runtime_flags_v8_internal::WebVTTRegionsEnabledAttributeGetter(info);
}

void V8InternalRuntimeFlags::WebXREnabledAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_InternalRuntimeFlags_webXREnabled_Getter");

  internal_runtime_flags_v8_internal::WebXREnabledAttributeGetter(info);
}

void V8InternalRuntimeFlags::WebXRHitTestEnabledAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_InternalRuntimeFlags_webXRHitTestEnabled_Getter");

  internal_runtime_flags_v8_internal::WebXRHitTestEnabledAttributeGetter(info);
}

void V8InternalRuntimeFlags::WebXRPlaneDetectionEnabledAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_InternalRuntimeFlags_webXRPlaneDetectionEnabled_Getter");

  internal_runtime_flags_v8_internal::WebXRPlaneDetectionEnabledAttributeGetter(info);
}

void V8InternalRuntimeFlags::WorkerNosniffBlockEnabledAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_InternalRuntimeFlags_workerNosniffBlockEnabled_Getter");

  internal_runtime_flags_v8_internal::WorkerNosniffBlockEnabledAttributeGetter(info);
}

void V8InternalRuntimeFlags::WorkerNosniffWarnEnabledAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_InternalRuntimeFlags_workerNosniffWarnEnabled_Getter");

  internal_runtime_flags_v8_internal::WorkerNosniffWarnEnabledAttributeGetter(info);
}

void V8InternalRuntimeFlags::WorkerTaskQueueEnabledAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_InternalRuntimeFlags_workerTaskQueueEnabled_Getter");

  internal_runtime_flags_v8_internal::WorkerTaskQueueEnabledAttributeGetter(info);
}

void V8InternalRuntimeFlags::XsltEnabledAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_InternalRuntimeFlags_xsltEnabled_Getter");

  internal_runtime_flags_v8_internal::XsltEnabledAttributeGetter(info);
}

static constexpr V8DOMConfiguration::AccessorConfiguration kV8InternalRuntimeFlagsAccessors[] = {
    { "accelerated2dCanvasEnabled", V8InternalRuntimeFlags::Accelerated2dCanvasEnabledAttributeGetterCallback, V8InternalRuntimeFlags::Accelerated2dCanvasEnabledAttributeSetterCallback, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
    { "accessibilityObjectModelEnabled", V8InternalRuntimeFlags::AccessibilityObjectModelEnabledAttributeGetterCallback, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
    { "adTaggingEnabled", V8InternalRuntimeFlags::AdTaggingEnabledAttributeGetterCallback, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
    { "allowActivationDelegationAttrEnabled", V8InternalRuntimeFlags::AllowActivationDelegationAttrEnabledAttributeGetterCallback, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
    { "allowContentInitiatedDataUrlNavigationsEnabled", V8InternalRuntimeFlags::AllowContentInitiatedDataUrlNavigationsEnabledAttributeGetterCallback, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
    { "animationWorkletEnabled", V8InternalRuntimeFlags::AnimationWorkletEnabledAttributeGetterCallback, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
    { "asyncClipboardEnabled", V8InternalRuntimeFlags::AsyncClipboardEnabledAttributeGetterCallback, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
    { "audioOutputDevicesEnabled", V8InternalRuntimeFlags::AudioOutputDevicesEnabledAttributeGetterCallback, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
    { "audioVideoTracksEnabled", V8InternalRuntimeFlags::AudioVideoTracksEnabledAttributeGetterCallback, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
    { "automationControlledEnabled", V8InternalRuntimeFlags::AutomationControlledEnabledAttributeGetterCallback, V8InternalRuntimeFlags::AutomationControlledEnabledAttributeSetterCallback, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
    { "autoPictureInPictureEnabled", V8InternalRuntimeFlags::AutoPictureInPictureEnabledAttributeGetterCallback, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
    { "autoplayIgnoresWebAudioEnabled", V8InternalRuntimeFlags::AutoplayIgnoresWebAudioEnabledAttributeGetterCallback, V8InternalRuntimeFlags::AutoplayIgnoresWebAudioEnabledAttributeSetterCallback, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
    { "backgroundFetchEnabled", V8InternalRuntimeFlags::BackgroundFetchEnabledAttributeGetterCallback, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
    { "backgroundVideoTrackOptimizationEnabled", V8InternalRuntimeFlags::BackgroundVideoTrackOptimizationEnabledAttributeGetterCallback, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
    { "badgingEnabled", V8InternalRuntimeFlags::BadgingEnabledAttributeGetterCallback, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
    { "bidiCaretAffinityEnabled", V8InternalRuntimeFlags::BidiCaretAffinityEnabledAttributeGetterCallback, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
    { "blinkGenPropertyTreesEnabled", V8InternalRuntimeFlags::BlinkGenPropertyTreesEnabledAttributeGetterCallback, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
    { "blinkRuntimeCallStatsEnabled", V8InternalRuntimeFlags::BlinkRuntimeCallStatsEnabledAttributeGetterCallback, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
    { "bloatedRendererDetectionEnabled", V8InternalRuntimeFlags::BloatedRendererDetectionEnabledAttributeGetterCallback, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
    { "bloatedRendererDetectionSkipUptimeCheckEnabled", V8InternalRuntimeFlags::BloatedRendererDetectionSkipUptimeCheckEnabledAttributeGetterCallback, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
    { "blobReadMethodsEnabled", V8InternalRuntimeFlags::BlobReadMethodsEnabledAttributeGetterCallback, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
    { "blockCredentialedSubresourcesEnabled", V8InternalRuntimeFlags::BlockCredentialedSubresourcesEnabledAttributeGetterCallback, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
    { "blockingDownloadsInSandboxWithoutUserActivationEnabled", V8InternalRuntimeFlags::BlockingDownloadsInSandboxWithoutUserActivationEnabledAttributeGetterCallback, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
    { "blockMetaSetCookieEnabled", V8InternalRuntimeFlags::BlockMetaSetCookieEnabledAttributeGetterCallback, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
    { "builtInModuleAllEnabled", V8InternalRuntimeFlags::BuiltInModuleAllEnabledAttributeGetterCallback, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
    { "builtInModuleInfraEnabled", V8InternalRuntimeFlags::BuiltInModuleInfraEnabledAttributeGetterCallback, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
    { "builtInModuleKvStorageEnabled", V8InternalRuntimeFlags::BuiltInModuleKvStorageEnabledAttributeGetterCallback, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
    { "cacheInlineScriptCodeEnabled", V8InternalRuntimeFlags::CacheInlineScriptCodeEnabledAttributeGetterCallback, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
    { "cacheStorageAddAllRejectsDuplicatesEnabled", V8InternalRuntimeFlags::CacheStorageAddAllRejectsDuplicatesEnabledAttributeGetterCallback, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
    { "callCaptureListenersAtCapturePhaseAtShadowHostsEnabled", V8InternalRuntimeFlags::CallCaptureListenersAtCapturePhaseAtShadowHostsEnabledAttributeGetterCallback, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
    { "canvas2dContextLostRestoredEnabled", V8InternalRuntimeFlags::Canvas2dContextLostRestoredEnabledAttributeGetterCallback, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
    { "canvas2dFixedRenderingModeEnabled", V8InternalRuntimeFlags::Canvas2dFixedRenderingModeEnabledAttributeGetterCallback, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
    { "canvas2dImageChromiumEnabled", V8InternalRuntimeFlags::Canvas2dImageChromiumEnabledAttributeGetterCallback, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
    { "canvas2dScrollPathIntoViewEnabled", V8InternalRuntimeFlags::Canvas2dScrollPathIntoViewEnabledAttributeGetterCallback, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
    { "canvasColorManagementEnabled", V8InternalRuntimeFlags::CanvasColorManagementEnabledAttributeGetterCallback, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
    { "canvasHitRegionEnabled", V8InternalRuntimeFlags::CanvasHitRegionEnabledAttributeGetterCallback, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
    { "canvasImageSmoothingEnabled", V8InternalRuntimeFlags::CanvasImageSmoothingEnabledAttributeGetterCallback, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
    { "clickRetargettingEnabled", V8InternalRuntimeFlags::ClickRetargettingEnabledAttributeGetterCallback, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
    { "clientPlaceholdersForServerLoFiEnabled", V8InternalRuntimeFlags::ClientPlaceholdersForServerLoFiEnabledAttributeGetterCallback, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
    { "compositeAfterPaintEnabled", V8InternalRuntimeFlags::CompositeAfterPaintEnabledAttributeGetterCallback, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
    { "compositedSelectionUpdateEnabled", V8InternalRuntimeFlags::CompositedSelectionUpdateEnabledAttributeGetterCallback, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
    { "compositorTouchActionEnabled", V8InternalRuntimeFlags::CompositorTouchActionEnabledAttributeGetterCallback, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
    { "computedAccessibilityInfoEnabled", V8InternalRuntimeFlags::ComputedAccessibilityInfoEnabledAttributeGetterCallback, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
    { "contactsManagerEnabled", V8InternalRuntimeFlags::ContactsManagerEnabledAttributeGetterCallback, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
    { "contextMenuEnabled", V8InternalRuntimeFlags::ContextMenuEnabledAttributeGetterCallback, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
    { "cookieStoreEnabled", V8InternalRuntimeFlags::CookieStoreEnabledAttributeGetterCallback, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
    { "corsRFC1918Enabled", V8InternalRuntimeFlags::CorsRFC1918EnabledAttributeGetterCallback, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
    { "css3TextEnabled", V8InternalRuntimeFlags::CSS3TextEnabledAttributeGetterCallback, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
    { "cssAdditiveAnimationsEnabled", V8InternalRuntimeFlags::CSSAdditiveAnimationsEnabledAttributeGetterCallback, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
    { "cssAltTextEnabled", V8InternalRuntimeFlags::CSSAltTextEnabledAttributeGetterCallback, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
    { "cssBackdropFilterEnabled", V8InternalRuntimeFlags::CSSBackdropFilterEnabledAttributeGetterCallback, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
    { "cssCalcAsIntEnabled", V8InternalRuntimeFlags::CSSCalcAsIntEnabledAttributeGetterCallback, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
    { "cssFocusVisibleEnabled", V8InternalRuntimeFlags::CSSFocusVisibleEnabledAttributeGetterCallback, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
    { "cssFontFeatureValuesEnabled", V8InternalRuntimeFlags::CSSFontFeatureValuesEnabledAttributeGetterCallback, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
    { "cssFontSizeAdjustEnabled", V8InternalRuntimeFlags::CSSFontSizeAdjustEnabledAttributeGetterCallback, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
    { "cssHexAlphaColorEnabled", V8InternalRuntimeFlags::CSSHexAlphaColorEnabledAttributeGetterCallback, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
    { "cssIndependentTransformPropertiesEnabled", V8InternalRuntimeFlags::CSSIndependentTransformPropertiesEnabledAttributeGetterCallback, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
    { "cssLayoutAPIEnabled", V8InternalRuntimeFlags::CSSLayoutAPIEnabledAttributeGetterCallback, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
    { "cssLogicalEnabled", V8InternalRuntimeFlags::CSSLogicalEnabledAttributeGetterCallback, V8InternalRuntimeFlags::CSSLogicalEnabledAttributeSetterCallback, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
    { "cssMaskSourceTypeEnabled", V8InternalRuntimeFlags::CSSMaskSourceTypeEnabledAttributeGetterCallback, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
    { "cssOffsetPathRayEnabled", V8InternalRuntimeFlags::CSSOffsetPathRayEnabledAttributeGetterCallback, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
    { "cssOffsetPathRayContainEnabled", V8InternalRuntimeFlags::CSSOffsetPathRayContainEnabledAttributeGetterCallback, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
    { "cssOffsetPositionAnchorEnabled", V8InternalRuntimeFlags::CSSOffsetPositionAnchorEnabledAttributeGetterCallback, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
    { "cssPaintAPIArgumentsEnabled", V8InternalRuntimeFlags::CSSPaintAPIArgumentsEnabledAttributeGetterCallback, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
    { "cssPartPseudoElementEnabled", V8InternalRuntimeFlags::CSSPartPseudoElementEnabledAttributeGetterCallback, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
    { "cssPictureInPictureEnabled", V8InternalRuntimeFlags::CSSPictureInPictureEnabledAttributeGetterCallback, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
    { "cssPseudoIsEnabled", V8InternalRuntimeFlags::CSSPseudoIsEnabledAttributeGetterCallback, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
    { "cssPseudoWhereEnabled", V8InternalRuntimeFlags::CSSPseudoWhereEnabledAttributeGetterCallback, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
    { "cssSnapSizeEnabled", V8InternalRuntimeFlags::CSSSnapSizeEnabledAttributeGetterCallback, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
    { "cssVariables2Enabled", V8InternalRuntimeFlags::CSSVariables2EnabledAttributeGetterCallback, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
    { "cssVariables2ImageValuesEnabled", V8InternalRuntimeFlags::CSSVariables2ImageValuesEnabledAttributeGetterCallback, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
    { "cssVariables2TransformValuesEnabled", V8InternalRuntimeFlags::CSSVariables2TransformValuesEnabledAttributeGetterCallback, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
    { "cssViewportEnabled", V8InternalRuntimeFlags::CSSViewportEnabledAttributeGetterCallback, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
    { "customElementDefaultStyleEnabled", V8InternalRuntimeFlags::CustomElementDefaultStyleEnabledAttributeGetterCallback, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
    { "customElementsV0Enabled", V8InternalRuntimeFlags::CustomElementsV0EnabledAttributeGetterCallback, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
    { "customUserTimingEnabled", V8InternalRuntimeFlags::CustomUserTimingEnabledAttributeGetterCallback, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
    { "databaseEnabled", V8InternalRuntimeFlags::DatabaseEnabledAttributeGetterCallback, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
    { "decodeToYUVEnabled", V8InternalRuntimeFlags::DecodeToYUVEnabledAttributeGetterCallback, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
    { "desktopCaptureDisableLocalEchoControlEnabled", V8InternalRuntimeFlags::DesktopCaptureDisableLocalEchoControlEnabledAttributeGetterCallback, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
    { "disableHardwareNoiseSuppressionEnabled", V8InternalRuntimeFlags::DisableHardwareNoiseSuppressionEnabledAttributeGetterCallback, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
    { "displayCutoutAPIEnabled", V8InternalRuntimeFlags::DisplayCutoutAPIEnabledAttributeGetterCallback, V8InternalRuntimeFlags::DisplayCutoutAPIEnabledAttributeSetterCallback, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
    { "displayLockingEnabled", V8InternalRuntimeFlags::DisplayLockingEnabledAttributeGetterCallback, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
    { "documentCookieEnabled", V8InternalRuntimeFlags::DocumentCookieEnabledAttributeGetterCallback, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
    { "documentDomainEnabled", V8InternalRuntimeFlags::DocumentDomainEnabledAttributeGetterCallback, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
    { "documentWriteEnabled", V8InternalRuntimeFlags::DocumentWriteEnabledAttributeGetterCallback, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
    { "editingNGEnabled", V8InternalRuntimeFlags::EditingNGEnabledAttributeGetterCallback, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
    { "elementInternalsEnabled", V8InternalRuntimeFlags::ElementInternalsEnabledAttributeGetterCallback, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
    { "elementTimingEnabled", V8InternalRuntimeFlags::ElementTimingEnabledAttributeGetterCallback, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
    { "encryptedMediaEncryptionSchemeQueryEnabled", V8InternalRuntimeFlags::EncryptedMediaEncryptionSchemeQueryEnabledAttributeGetterCallback, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
    { "encryptedMediaHdcpPolicyCheckEnabled", V8InternalRuntimeFlags::EncryptedMediaHdcpPolicyCheckEnabledAttributeGetterCallback, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
    { "encryptedMediaPersistentUsageRecordSessionEnabled", V8InternalRuntimeFlags::EncryptedMediaPersistentUsageRecordSessionEnabledAttributeGetterCallback, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
    { "eventTimingEnabled", V8InternalRuntimeFlags::EventTimingEnabledAttributeGetterCallback, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
    { "execCommandInJavaScriptEnabled", V8InternalRuntimeFlags::ExecCommandInJavaScriptEnabledAttributeGetterCallback, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
    { "expensiveBackgroundTimerThrottlingEnabled", V8InternalRuntimeFlags::ExpensiveBackgroundTimerThrottlingEnabledAttributeGetterCallback, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
    { "experimentalContentSecurityPolicyFeaturesEnabled", V8InternalRuntimeFlags::ExperimentalContentSecurityPolicyFeaturesEnabledAttributeGetterCallback, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
    { "experimentalIsInputPendingEnabled", V8InternalRuntimeFlags::ExperimentalIsInputPendingEnabledAttributeGetterCallback, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
    { "experimentalProductivityFeaturesEnabled", V8InternalRuntimeFlags::ExperimentalProductivityFeaturesEnabledAttributeGetterCallback, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
    { "extendedTextMetricsEnabled", V8InternalRuntimeFlags::ExtendedTextMetricsEnabledAttributeGetterCallback, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
    { "extraWebGLVideoTextureMetadataEnabled", V8InternalRuntimeFlags::ExtraWebGLVideoTextureMetadataEnabledAttributeGetterCallback, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
    { "fallbackCursorModeEnabled", V8InternalRuntimeFlags::FallbackCursorModeEnabledAttributeGetterCallback, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
    { "fastBorderRadiusEnabled", V8InternalRuntimeFlags::FastBorderRadiusEnabledAttributeGetterCallback, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
    { "fastFlatTreeTraversalEnabled", V8InternalRuntimeFlags::FastFlatTreeTraversalEnabledAttributeGetterCallback, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
    { "fastMobileScrollingEnabled", V8InternalRuntimeFlags::FastMobileScrollingEnabledAttributeGetterCallback, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
    { "featurePolicyForSandboxEnabled", V8InternalRuntimeFlags::FeaturePolicyForSandboxEnabledAttributeGetterCallback, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
    { "featurePolicyJavaScriptInterfaceEnabled", V8InternalRuntimeFlags::FeaturePolicyJavaScriptInterfaceEnabledAttributeGetterCallback, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
    { "featurePolicyReportingEnabled", V8InternalRuntimeFlags::FeaturePolicyReportingEnabledAttributeGetterCallback, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
    { "featurePolicyVibrateFeatureEnabled", V8InternalRuntimeFlags::FeaturePolicyVibrateFeatureEnabledAttributeGetterCallback, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
    { "fetchMetadataEnabled", V8InternalRuntimeFlags::FetchMetadataEnabledAttributeGetterCallback, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
    { "fetchMetadataDestinationEnabled", V8InternalRuntimeFlags::FetchMetadataDestinationEnabledAttributeGetterCallback, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
    { "fileSystemEnabled", V8InternalRuntimeFlags::FileSystemEnabledAttributeGetterCallback, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
    { "firstContentfulPaintPlusPlusEnabled", V8InternalRuntimeFlags::FirstContentfulPaintPlusPlusEnabledAttributeGetterCallback, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
    { "focuslessSpatialNavigationEnabled", V8InternalRuntimeFlags::FocuslessSpatialNavigationEnabledAttributeGetterCallback, V8InternalRuntimeFlags::FocuslessSpatialNavigationEnabledAttributeSetterCallback, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
    { "fontSrcLocalMatchingEnabled", V8InternalRuntimeFlags::FontSrcLocalMatchingEnabledAttributeGetterCallback, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
    { "forbidSyncXHRInPageDismissalEnabled", V8InternalRuntimeFlags::ForbidSyncXHRInPageDismissalEnabledAttributeGetterCallback, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
    { "forceOverlayFullscreenVideoEnabled", V8InternalRuntimeFlags::ForceOverlayFullscreenVideoEnabledAttributeGetterCallback, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
    { "forceSynchronousHTMLParsingEnabled", V8InternalRuntimeFlags::ForceSynchronousHTMLParsingEnabledAttributeGetterCallback, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
    { "forceTallerSelectPopupEnabled", V8InternalRuntimeFlags::ForceTallerSelectPopupEnabledAttributeGetterCallback, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
    { "formAssociatedCustomElementsEnabled", V8InternalRuntimeFlags::FormAssociatedCustomElementsEnabledAttributeGetterCallback, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
    { "formDataEventEnabled", V8InternalRuntimeFlags::FormDataEventEnabledAttributeGetterCallback, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
    { "fractionalMouseEventEnabled", V8InternalRuntimeFlags::FractionalMouseEventEnabledAttributeGetterCallback, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
    { "fractionalScrollOffsetsEnabled", V8InternalRuntimeFlags::FractionalScrollOffsetsEnabledAttributeGetterCallback, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
    { "freezeFramesOnVisibilityEnabled", V8InternalRuntimeFlags::FreezeFramesOnVisibilityEnabledAttributeGetterCallback, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
    { "gamepadButtonAxisEventsEnabled", V8InternalRuntimeFlags::GamepadButtonAxisEventsEnabledAttributeGetterCallback, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
    { "getDisplayMediaEnabled", V8InternalRuntimeFlags::GetDisplayMediaEnabledAttributeGetterCallback, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
    { "heapCompactionEnabled", V8InternalRuntimeFlags::HeapCompactionEnabledAttributeGetterCallback, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
    { "heapConcurrentMarkingEnabled", V8InternalRuntimeFlags::HeapConcurrentMarkingEnabledAttributeGetterCallback, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
    { "heapIncrementalMarkingEnabled", V8InternalRuntimeFlags::HeapIncrementalMarkingEnabledAttributeGetterCallback, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
    { "heapIncrementalMarkingStressEnabled", V8InternalRuntimeFlags::HeapIncrementalMarkingStressEnabledAttributeGetterCallback, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
    { "hrefTranslateEnabled", V8InternalRuntimeFlags::HrefTranslateEnabledAttributeGetterCallback, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
    { "htmlImportsEnabled", V8InternalRuntimeFlags::HTMLImportsEnabledAttributeGetterCallback, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
    { "htmlImportsOnlyChromeEnabled", V8InternalRuntimeFlags::HTMLImportsOnlyChromeEnabledAttributeGetterCallback, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
    { "htmlImportsStyleApplicationEnabled", V8InternalRuntimeFlags::HTMLImportsStyleApplicationEnabledAttributeGetterCallback, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
    { "idbObserverEnabled", V8InternalRuntimeFlags::IdbObserverEnabledAttributeGetterCallback, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
    { "idbTransactionCommitEnabled", V8InternalRuntimeFlags::IdbTransactionCommitEnabledAttributeGetterCallback, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
    { "idleDetectionEnabled", V8InternalRuntimeFlags::IdleDetectionEnabledAttributeGetterCallback, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
    { "ignoreCrossOriginWindowWhenNamedAccessOnWindowEnabled", V8InternalRuntimeFlags::IgnoreCrossOriginWindowWhenNamedAccessOnWindowEnabledAttributeGetterCallback, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
    { "imageOrientationEnabled", V8InternalRuntimeFlags::ImageOrientationEnabledAttributeGetterCallback, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
    { "implicitRootScrollerEnabled", V8InternalRuntimeFlags::ImplicitRootScrollerEnabledAttributeGetterCallback, V8InternalRuntimeFlags::ImplicitRootScrollerEnabledAttributeSetterCallback, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
    { "inertAttributeEnabled", V8InternalRuntimeFlags::InertAttributeEnabledAttributeGetterCallback, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
    { "inputMultipleFieldsUIEnabled", V8InternalRuntimeFlags::InputMultipleFieldsUIEnabledAttributeGetterCallback, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
    { "installedAppEnabled", V8InternalRuntimeFlags::InstalledAppEnabledAttributeGetterCallback, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
    { "intersectionObserverV2Enabled", V8InternalRuntimeFlags::IntersectionObserverV2EnabledAttributeGetterCallback, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
    { "invisibleDOMEnabled", V8InternalRuntimeFlags::InvisibleDOMEnabledAttributeGetterCallback, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
    { "isolatedCodeCacheEnabled", V8InternalRuntimeFlags::IsolatedCodeCacheEnabledAttributeGetterCallback, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
    { "isolatedWorldCSPEnabled", V8InternalRuntimeFlags::IsolatedWorldCSPEnabledAttributeGetterCallback, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
    { "jankTrackingEnabled", V8InternalRuntimeFlags::JankTrackingEnabledAttributeGetterCallback, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
    { "jankTrackingSweepLineEnabled", V8InternalRuntimeFlags::JankTrackingSweepLineEnabledAttributeGetterCallback, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
    { "keyboardFocusableScrollersEnabled", V8InternalRuntimeFlags::KeyboardFocusableScrollersEnabledAttributeGetterCallback, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
    { "langAttributeAwareFormControlUIEnabled", V8InternalRuntimeFlags::LangAttributeAwareFormControlUIEnabledAttributeGetterCallback, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
    { "langClientHintHeaderEnabled", V8InternalRuntimeFlags::LangClientHintHeaderEnabledAttributeGetterCallback, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
    { "layoutJankAPIEnabled", V8InternalRuntimeFlags::LayoutJankAPIEnabledAttributeGetterCallback, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
    { "layoutNGEnabled", V8InternalRuntimeFlags::LayoutNGEnabledAttributeGetterCallback, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
    { "layoutNGBlockFragmentationEnabled", V8InternalRuntimeFlags::LayoutNGBlockFragmentationEnabledAttributeGetterCallback, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
    { "layoutNGFieldsetEnabled", V8InternalRuntimeFlags::LayoutNGFieldsetEnabledAttributeGetterCallback, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
    { "layoutNGFlexBoxEnabled", V8InternalRuntimeFlags::LayoutNGFlexBoxEnabledAttributeGetterCallback, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
    { "layoutNGFragmentCachingEnabled", V8InternalRuntimeFlags::LayoutNGFragmentCachingEnabledAttributeGetterCallback, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
    { "lazyFrameLoadingEnabled", V8InternalRuntimeFlags::LazyFrameLoadingEnabledAttributeGetterCallback, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
    { "lazyFrameVisibleLoadTimeMetricsEnabled", V8InternalRuntimeFlags::LazyFrameVisibleLoadTimeMetricsEnabledAttributeGetterCallback, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
    { "lazyImageLoadingEnabled", V8InternalRuntimeFlags::LazyImageLoadingEnabledAttributeGetterCallback, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
    { "lazyImageVisibleLoadTimeMetricsEnabled", V8InternalRuntimeFlags::LazyImageVisibleLoadTimeMetricsEnabledAttributeGetterCallback, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
    { "lazyInitializeMediaControlsEnabled", V8InternalRuntimeFlags::LazyInitializeMediaControlsEnabledAttributeGetterCallback, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
    { "legacyPerformanceMemoryCountersEnabled", V8InternalRuntimeFlags::LegacyPerformanceMemoryCountersEnabledAttributeGetterCallback, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
    { "longTaskV2Enabled", V8InternalRuntimeFlags::LongTaskV2EnabledAttributeGetterCallback, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
    { "manualSlottingEnabled", V8InternalRuntimeFlags::ManualSlottingEnabledAttributeGetterCallback, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
    { "mediaCapabilitiesEncodingInfoEnabled", V8InternalRuntimeFlags::MediaCapabilitiesEncodingInfoEnabledAttributeGetterCallback, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
    { "mediaCapabilitiesEncryptedMediaEnabled", V8InternalRuntimeFlags::MediaCapabilitiesEncryptedMediaEnabledAttributeGetterCallback, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
    { "mediaCaptureEnabled", V8InternalRuntimeFlags::MediaCaptureEnabledAttributeGetterCallback, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
    { "mediaCaptureDepthVideoKindEnabled", V8InternalRuntimeFlags::MediaCaptureDepthVideoKindEnabledAttributeGetterCallback, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
    { "mediaCastOverlayButtonEnabled", V8InternalRuntimeFlags::MediaCastOverlayButtonEnabledAttributeGetterCallback, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
    { "mediaControlsExpandGestureEnabled", V8InternalRuntimeFlags::MediaControlsExpandGestureEnabledAttributeGetterCallback, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
    { "mediaControlsOverlayPlayButtonEnabled", V8InternalRuntimeFlags::MediaControlsOverlayPlayButtonEnabledAttributeGetterCallback, V8InternalRuntimeFlags::MediaControlsOverlayPlayButtonEnabledAttributeSetterCallback, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
    { "mediaDocumentDownloadButtonEnabled", V8InternalRuntimeFlags::MediaDocumentDownloadButtonEnabledAttributeGetterCallback, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
    { "mediaEngagementBypassAutoplayPoliciesEnabled", V8InternalRuntimeFlags::MediaEngagementBypassAutoplayPoliciesEnabledAttributeGetterCallback, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
    { "mediaQueryPrefersColorSchemeEnabled", V8InternalRuntimeFlags::MediaQueryPrefersColorSchemeEnabledAttributeGetterCallback, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
    { "mediaQueryShapeEnabled", V8InternalRuntimeFlags::MediaQueryShapeEnabledAttributeGetterCallback, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
    { "mediaSessionEnabled", V8InternalRuntimeFlags::MediaSessionEnabledAttributeGetterCallback, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
    { "mediaSourceExperimentalEnabled", V8InternalRuntimeFlags::MediaSourceExperimentalEnabledAttributeGetterCallback, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
    { "mediaSourceNewAbortAndDurationEnabled", V8InternalRuntimeFlags::MediaSourceNewAbortAndDurationEnabledAttributeGetterCallback, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
    { "mediaStreamTrackContentHintEnabled", V8InternalRuntimeFlags::MediaStreamTrackContentHintEnabledAttributeGetterCallback, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
    { "mergeBlockingNonBlockingPoolsEnabled", V8InternalRuntimeFlags::MergeBlockingNonBlockingPoolsEnabledAttributeGetterCallback, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
    { "metaColorSchemeEnabled", V8InternalRuntimeFlags::MetaColorSchemeEnabledAttributeGetterCallback, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
    { "middleClickAutoscrollEnabled", V8InternalRuntimeFlags::MiddleClickAutoscrollEnabledAttributeGetterCallback, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
    { "mimeHandlerViewInCrossProcessFrameEnabled", V8InternalRuntimeFlags::MimeHandlerViewInCrossProcessFrameEnabledAttributeGetterCallback, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
    { "mobileLayoutThemeEnabled", V8InternalRuntimeFlags::MobileLayoutThemeEnabledAttributeGetterCallback, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
    { "modernMediaControlsEnabled", V8InternalRuntimeFlags::ModernMediaControlsEnabledAttributeGetterCallback, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
    { "moduleDedicatedWorkerEnabled", V8InternalRuntimeFlags::ModuleDedicatedWorkerEnabledAttributeGetterCallback, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
    { "moduleServiceWorkerEnabled", V8InternalRuntimeFlags::ModuleServiceWorkerEnabledAttributeGetterCallback, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
    { "mojoJSEnabled", V8InternalRuntimeFlags::MojoJSEnabledAttributeGetterCallback, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
    { "mojoJSTestEnabled", V8InternalRuntimeFlags::MojoJSTestEnabledAttributeGetterCallback, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
    { "movementXYInBlinkEnabled", V8InternalRuntimeFlags::MovementXYInBlinkEnabledAttributeGetterCallback, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
    { "muteButtonEnabled", V8InternalRuntimeFlags::MuteButtonEnabledAttributeGetterCallback, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
    { "nativeFileSystemEnabled", V8InternalRuntimeFlags::NativeFileSystemEnabledAttributeGetterCallback, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
    { "nativeStreamsEnabled", V8InternalRuntimeFlags::NativeStreamsEnabledAttributeGetterCallback, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
    { "navigatorContentUtilsEnabled", V8InternalRuntimeFlags::NavigatorContentUtilsEnabledAttributeGetterCallback, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
    { "navigatorDeviceMemoryEnabled", V8InternalRuntimeFlags::NavigatorDeviceMemoryEnabledAttributeGetterCallback, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
    { "navigatorLanguageInInsecureContextEnabled", V8InternalRuntimeFlags::NavigatorLanguageInInsecureContextEnabledAttributeGetterCallback, V8InternalRuntimeFlags::NavigatorLanguageInInsecureContextEnabledAttributeSetterCallback, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
    { "netInfoDownlinkMaxEnabled", V8InternalRuntimeFlags::NetInfoDownlinkMaxEnabledAttributeGetterCallback, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
    { "networkServiceEnabled", V8InternalRuntimeFlags::NetworkServiceEnabledAttributeGetterCallback, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
    { "newRemotePlaybackPipelineEnabled", V8InternalRuntimeFlags::NewRemotePlaybackPipelineEnabledAttributeGetterCallback, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
    { "noIdleEncodingForWebTestsEnabled", V8InternalRuntimeFlags::NoIdleEncodingForWebTestsEnabledAttributeGetterCallback, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
    { "notificationConstructorEnabled", V8InternalRuntimeFlags::NotificationConstructorEnabledAttributeGetterCallback, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
    { "notificationContentImageEnabled", V8InternalRuntimeFlags::NotificationContentImageEnabledAttributeGetterCallback, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
    { "notificationsEnabled", V8InternalRuntimeFlags::NotificationsEnabledAttributeGetterCallback, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
    { "notificationTriggersEnabled", V8InternalRuntimeFlags::NotificationTriggersEnabledAttributeGetterCallback, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
    { "offMainThreadCSSPaintEnabled", V8InternalRuntimeFlags::OffMainThreadCSSPaintEnabledAttributeGetterCallback, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
    { "offscreenCanvasEnabled", V8InternalRuntimeFlags::OffscreenCanvasEnabledAttributeGetterCallback, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
    { "offscreenCanvasCommitEnabled", V8InternalRuntimeFlags::OffscreenCanvasCommitEnabledAttributeGetterCallback, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
    { "offscreenCanvasTextEnabled", V8InternalRuntimeFlags::OffscreenCanvasTextEnabledAttributeGetterCallback, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
    { "onDeviceChangeEnabled", V8InternalRuntimeFlags::OnDeviceChangeEnabledAttributeGetterCallback, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
    { "orientationEventEnabled", V8InternalRuntimeFlags::OrientationEventEnabledAttributeGetterCallback, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
    { "originTrialsEnabled", V8InternalRuntimeFlags::OriginTrialsEnabledAttributeGetterCallback, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
    { "originTrialsSampleAPIEnabled", V8InternalRuntimeFlags::OriginTrialsSampleAPIEnabledAttributeGetterCallback, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
    { "originTrialsSampleAPIDependentEnabled", V8InternalRuntimeFlags::OriginTrialsSampleAPIDependentEnabledAttributeGetterCallback, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
    { "originTrialsSampleAPIImpliedEnabled", V8InternalRuntimeFlags::OriginTrialsSampleAPIImpliedEnabledAttributeGetterCallback, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
    { "originTrialsSampleAPIInvalidOSEnabled", V8InternalRuntimeFlags::OriginTrialsSampleAPIInvalidOSEnabledAttributeGetterCallback, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
    { "originTrialsSampleAPINavigationEnabled", V8InternalRuntimeFlags::OriginTrialsSampleAPINavigationEnabledAttributeGetterCallback, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
    { "outOfBlinkCorsEnabled", V8InternalRuntimeFlags::OutOfBlinkCorsEnabledAttributeGetterCallback, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
    { "overflowIconsForMediaControlsEnabled", V8InternalRuntimeFlags::OverflowIconsForMediaControlsEnabledAttributeGetterCallback, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
    { "overlayScrollbarsEnabled", V8InternalRuntimeFlags::OverlayScrollbarsEnabledAttributeGetterCallback, V8InternalRuntimeFlags::OverlayScrollbarsEnabledAttributeSetterCallback, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
    { "overscrollCustomizationEnabled", V8InternalRuntimeFlags::OverscrollCustomizationEnabledAttributeGetterCallback, V8InternalRuntimeFlags::OverscrollCustomizationEnabledAttributeSetterCallback, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
    { "pageLifecycleTransitionsOptInEnabled", V8InternalRuntimeFlags::PageLifecycleTransitionsOptInEnabledAttributeGetterCallback, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
    { "pageLifecycleTransitionsOptOutEnabled", V8InternalRuntimeFlags::PageLifecycleTransitionsOptOutEnabledAttributeGetterCallback, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
    { "pagePopupEnabled", V8InternalRuntimeFlags::PagePopupEnabledAttributeGetterCallback, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
    { "paintUnderInvalidationCheckingEnabled", V8InternalRuntimeFlags::PaintUnderInvalidationCheckingEnabledAttributeGetterCallback, V8InternalRuntimeFlags::PaintUnderInvalidationCheckingEnabledAttributeSetterCallback, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
    { "passiveDocumentEventListenersEnabled", V8InternalRuntimeFlags::PassiveDocumentEventListenersEnabledAttributeGetterCallback, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
    { "passiveDocumentWheelEventListenersEnabled", V8InternalRuntimeFlags::PassiveDocumentWheelEventListenersEnabledAttributeGetterCallback, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
    { "passPaintVisualRectToCompositorEnabled", V8InternalRuntimeFlags::PassPaintVisualRectToCompositorEnabledAttributeGetterCallback, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
    { "paymentAppEnabled", V8InternalRuntimeFlags::PaymentAppEnabledAttributeGetterCallback, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
    { "paymentHandlerChangePaymentMethodEnabled", V8InternalRuntimeFlags::PaymentHandlerChangePaymentMethodEnabledAttributeGetterCallback, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
    { "paymentMethodChangeEventEnabled", V8InternalRuntimeFlags::PaymentMethodChangeEventEnabledAttributeGetterCallback, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
    { "paymentRequestEnabled", V8InternalRuntimeFlags::PaymentRequestEnabledAttributeGetterCallback, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
    { "paymentRequestHasEnrolledInstrumentEnabled", V8InternalRuntimeFlags::PaymentRequestHasEnrolledInstrumentEnabledAttributeGetterCallback, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
    { "paymentRequestMerchantValidationEventEnabled", V8InternalRuntimeFlags::PaymentRequestMerchantValidationEventEnabledAttributeGetterCallback, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
    { "paymentRetryEnabled", V8InternalRuntimeFlags::PaymentRetryEnabledAttributeGetterCallback, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
    { "performanceManagerInstrumentationEnabled", V8InternalRuntimeFlags::PerformanceManagerInstrumentationEnabledAttributeGetterCallback, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
    { "performanceObserverBufferedFlagEnabled", V8InternalRuntimeFlags::PerformanceObserverBufferedFlagEnabledAttributeGetterCallback, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
    { "periodicBackgroundSyncEnabled", V8InternalRuntimeFlags::PeriodicBackgroundSyncEnabledAttributeGetterCallback, V8InternalRuntimeFlags::PeriodicBackgroundSyncEnabledAttributeSetterCallback, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
    { "perMethodCanMakePaymentQuotaEnabled", V8InternalRuntimeFlags::PerMethodCanMakePaymentQuotaEnabledAttributeGetterCallback, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
    { "permissionDelegationEnabled", V8InternalRuntimeFlags::PermissionDelegationEnabledAttributeGetterCallback, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
    { "permissionsEnabled", V8InternalRuntimeFlags::PermissionsEnabledAttributeGetterCallback, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
    { "permissionsRequestRevokeEnabled", V8InternalRuntimeFlags::PermissionsRequestRevokeEnabledAttributeGetterCallback, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
    { "pictureInPictureEnabled", V8InternalRuntimeFlags::PictureInPictureEnabledAttributeGetterCallback, V8InternalRuntimeFlags::PictureInPictureEnabledAttributeSetterCallback, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
    { "pictureInPictureAPIEnabled", V8InternalRuntimeFlags::PictureInPictureAPIEnabledAttributeGetterCallback, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
    { "pictureInPictureV2Enabled", V8InternalRuntimeFlags::PictureInPictureV2EnabledAttributeGetterCallback, V8InternalRuntimeFlags::PictureInPictureV2EnabledAttributeSetterCallback, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
    { "pointerRawUpdateEnabled", V8InternalRuntimeFlags::PointerRawUpdateEnabledAttributeGetterCallback, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
    { "portalsEnabled", V8InternalRuntimeFlags::PortalsEnabledAttributeGetterCallback, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
    { "postAnimationFrameEnabled", V8InternalRuntimeFlags::PostAnimationFrameEnabledAttributeGetterCallback, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
    { "preciseMemoryInfoEnabled", V8InternalRuntimeFlags::PreciseMemoryInfoEnabledAttributeGetterCallback, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
    { "predictedEventsEnabled", V8InternalRuntimeFlags::PredictedEventsEnabledAttributeGetterCallback, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
    { "prefixedVideoFullscreenEnabled", V8InternalRuntimeFlags::PrefixedVideoFullscreenEnabledAttributeGetterCallback, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
    { "presentationEnabled", V8InternalRuntimeFlags::PresentationEnabledAttributeGetterCallback, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
    { "printBrowserEnabled", V8InternalRuntimeFlags::PrintBrowserEnabledAttributeGetterCallback, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
    { "priorityHintsEnabled", V8InternalRuntimeFlags::PriorityHintsEnabledAttributeGetterCallback, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
    { "pushMessagingEnabled", V8InternalRuntimeFlags::PushMessagingEnabledAttributeGetterCallback, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
    { "rasterInducingScrollEnabled", V8InternalRuntimeFlags::RasterInducingScrollEnabledAttributeGetterCallback, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
    { "reducedReferrerGranularityEnabled", V8InternalRuntimeFlags::ReducedReferrerGranularityEnabledAttributeGetterCallback, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
    { "remotePlaybackEnabled", V8InternalRuntimeFlags::RemotePlaybackEnabledAttributeGetterCallback, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
    { "remotePlaybackBackendEnabled", V8InternalRuntimeFlags::RemotePlaybackBackendEnabledAttributeGetterCallback, V8InternalRuntimeFlags::RemotePlaybackBackendEnabledAttributeSetterCallback, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
    { "renderingPipelineThrottlingEnabled", V8InternalRuntimeFlags::RenderingPipelineThrottlingEnabledAttributeGetterCallback, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
    { "resourceLoadSchedulerEnabled", V8InternalRuntimeFlags::ResourceLoadSchedulerEnabledAttributeGetterCallback, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
    { "restrictAppCacheToSecureContextsEnabled", V8InternalRuntimeFlags::RestrictAppCacheToSecureContextsEnabledAttributeGetterCallback, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
    { "restrictDeviceSensorEventsToSecureContextsEnabled", V8InternalRuntimeFlags::RestrictDeviceSensorEventsToSecureContextsEnabledAttributeGetterCallback, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
    { "restrictLazyFrameLoadingToDataSaverEnabled", V8InternalRuntimeFlags::RestrictLazyFrameLoadingToDataSaverEnabledAttributeGetterCallback, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
    { "restrictLazyImageLoadingToDataSaverEnabled", V8InternalRuntimeFlags::RestrictLazyImageLoadingToDataSaverEnabledAttributeGetterCallback, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
    { "rtcAudioJitterBufferMaxPacketsEnabled", V8InternalRuntimeFlags::RTCAudioJitterBufferMaxPacketsEnabledAttributeGetterCallback, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
    { "rtcAudioJitterBufferRtxHandlingEnabled", V8InternalRuntimeFlags::RTCAudioJitterBufferRtxHandlingEnabledAttributeGetterCallback, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
    { "rtcDtlsTransportEnabled", V8InternalRuntimeFlags::RTCDtlsTransportEnabledAttributeGetterCallback, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
    { "rtcIceTransportExtensionEnabled", V8InternalRuntimeFlags::RTCIceTransportExtensionEnabledAttributeGetterCallback, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
    { "rtcJitterBufferDelayHintEnabled", V8InternalRuntimeFlags::RTCJitterBufferDelayHintEnabledAttributeGetterCallback, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
    { "rtcQuicTransportEnabled", V8InternalRuntimeFlags::RTCQuicTransportEnabledAttributeGetterCallback, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
    { "rtcRtpSenderParametersEnabled", V8InternalRuntimeFlags::RTCRtpSenderParametersEnabledAttributeGetterCallback, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
    { "rtcSctpTransportEnabled", V8InternalRuntimeFlags::RTCSctpTransportEnabledAttributeGetterCallback, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
    { "rtcStatsRelativePacketArrivalDelayEnabled", V8InternalRuntimeFlags::RTCStatsRelativePacketArrivalDelayEnabledAttributeGetterCallback, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
    { "rtcUnifiedPlanEnabled", V8InternalRuntimeFlags::RTCUnifiedPlanEnabledAttributeGetterCallback, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
    { "rtcUnifiedPlanByDefaultEnabled", V8InternalRuntimeFlags::RTCUnifiedPlanByDefaultEnabledAttributeGetterCallback, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
    { "scriptedSpeechRecognitionEnabled", V8InternalRuntimeFlags::ScriptedSpeechRecognitionEnabledAttributeGetterCallback, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
    { "scriptedSpeechSynthesisEnabled", V8InternalRuntimeFlags::ScriptedSpeechSynthesisEnabledAttributeGetterCallback, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
    { "scriptStreamingOnPreloadEnabled", V8InternalRuntimeFlags::ScriptStreamingOnPreloadEnabledAttributeGetterCallback, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
    { "scrollAnchorSerializationEnabled", V8InternalRuntimeFlags::ScrollAnchorSerializationEnabledAttributeGetterCallback, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
    { "scrollCustomizationEnabled", V8InternalRuntimeFlags::ScrollCustomizationEnabledAttributeGetterCallback, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
    { "scrollTopLeftInteropEnabled", V8InternalRuntimeFlags::ScrollTopLeftInteropEnabledAttributeGetterCallback, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
    { "sendBeaconThrowForBlobWithNonSimpleTypeEnabled", V8InternalRuntimeFlags::SendBeaconThrowForBlobWithNonSimpleTypeEnabledAttributeGetterCallback, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
    { "sendMouseEventsDisabledFormControlsEnabled", V8InternalRuntimeFlags::SendMouseEventsDisabledFormControlsEnabledAttributeGetterCallback, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
    { "sensorEnabled", V8InternalRuntimeFlags::SensorEnabledAttributeGetterCallback, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
    { "sensorExtraClassesEnabled", V8InternalRuntimeFlags::SensorExtraClassesEnabledAttributeGetterCallback, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
    { "serialEnabled", V8InternalRuntimeFlags::SerialEnabledAttributeGetterCallback, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
    { "setRootScrollerEnabled", V8InternalRuntimeFlags::SetRootScrollerEnabledAttributeGetterCallback, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
    { "shadowDOMV0Enabled", V8InternalRuntimeFlags::ShadowDOMV0EnabledAttributeGetterCallback, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
    { "shadowPiercingDescendantCombinatorEnabled", V8InternalRuntimeFlags::ShadowPiercingDescendantCombinatorEnabledAttributeGetterCallback, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
    { "shapeDetectionEnabled", V8InternalRuntimeFlags::ShapeDetectionEnabledAttributeGetterCallback, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
    { "sharedArrayBufferEnabled", V8InternalRuntimeFlags::SharedArrayBufferEnabledAttributeGetterCallback, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
    { "sharedWorkerEnabled", V8InternalRuntimeFlags::SharedWorkerEnabledAttributeGetterCallback, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
    { "signatureBasedIntegrityEnabled", V8InternalRuntimeFlags::SignatureBasedIntegrityEnabledAttributeGetterCallback, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
    { "signedExchangeSubresourcePrefetchEnabled", V8InternalRuntimeFlags::SignedExchangeSubresourcePrefetchEnabledAttributeGetterCallback, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
    { "skipAdEnabled", V8InternalRuntimeFlags::SkipAdEnabledAttributeGetterCallback, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
    { "skipTouchEventFilterEnabled", V8InternalRuntimeFlags::SkipTouchEventFilterEnabledAttributeGetterCallback, V8InternalRuntimeFlags::SkipTouchEventFilterEnabledAttributeSetterCallback, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
    { "smoothScrollJSInterventionEnabled", V8InternalRuntimeFlags::SmoothScrollJSInterventionEnabledAttributeGetterCallback, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
    { "smsReceiverEnabled", V8InternalRuntimeFlags::SmsReceiverEnabledAttributeGetterCallback, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
    { "speechSynthesisEventCharLengthEnabled", V8InternalRuntimeFlags::SpeechSynthesisEventCharLengthEnabledAttributeGetterCallback, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
    { "stableBlinkFeaturesEnabled", V8InternalRuntimeFlags::StableBlinkFeaturesEnabledAttributeGetterCallback, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
    { "stackedCSSPropertyAnimationsEnabled", V8InternalRuntimeFlags::StackedCSSPropertyAnimationsEnabledAttributeGetterCallback, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
    { "staleWhileRevalidateEnabled", V8InternalRuntimeFlags::StaleWhileRevalidateEnabledAttributeGetterCallback, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
    { "storageQuotaDetailsEnabled", V8InternalRuntimeFlags::StorageQuotaDetailsEnabledAttributeGetterCallback, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
    { "streamsNativeEnabled", V8InternalRuntimeFlags::StreamsNativeEnabledAttributeGetterCallback, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
    { "textFragmentIdentifiersEnabled", V8InternalRuntimeFlags::TextFragmentIdentifiersEnabledAttributeGetterCallback, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
    { "textUnderlinePositionLeftRightEnabled", V8InternalRuntimeFlags::TextUnderlinePositionLeftRightEnabledAttributeGetterCallback, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
    { "timerThrottlingForBackgroundTabsEnabled", V8InternalRuntimeFlags::TimerThrottlingForBackgroundTabsEnabledAttributeGetterCallback, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
    { "timerThrottlingForHiddenFramesEnabled", V8InternalRuntimeFlags::TimerThrottlingForHiddenFramesEnabledAttributeGetterCallback, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
    { "touchEventFeatureDetectionEnabled", V8InternalRuntimeFlags::TouchEventFeatureDetectionEnabledAttributeGetterCallback, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
    { "trackLayoutPassesPerBlockEnabled", V8InternalRuntimeFlags::TrackLayoutPassesPerBlockEnabledAttributeGetterCallback, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
    { "transferableStreamsEnabled", V8InternalRuntimeFlags::TransferableStreamsEnabledAttributeGetterCallback, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
    { "translateServiceEnabled", V8InternalRuntimeFlags::TranslateServiceEnabledAttributeGetterCallback, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
    { "trustedDOMTypesEnabled", V8InternalRuntimeFlags::TrustedDOMTypesEnabledAttributeGetterCallback, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
    { "unclosedFormControlIsInvalidEnabled", V8InternalRuntimeFlags::UnclosedFormControlIsInvalidEnabledAttributeGetterCallback, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
    { "unifiedPointerCaptureInBlinkEnabled", V8InternalRuntimeFlags::UnifiedPointerCaptureInBlinkEnabledAttributeGetterCallback, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
    { "unifiedTouchAdjustmentEnabled", V8InternalRuntimeFlags::UnifiedTouchAdjustmentEnabledAttributeGetterCallback, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
    { "unoptimizedImagePoliciesEnabled", V8InternalRuntimeFlags::UnoptimizedImagePoliciesEnabledAttributeGetterCallback, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
    { "updateHoverFromLayoutChangeAtBeginFrameEnabled", V8InternalRuntimeFlags::UpdateHoverFromLayoutChangeAtBeginFrameEnabledAttributeGetterCallback, V8InternalRuntimeFlags::UpdateHoverFromLayoutChangeAtBeginFrameEnabledAttributeSetterCallback, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
    { "updateHoverFromScrollAtBeginFrameEnabled", V8InternalRuntimeFlags::UpdateHoverFromScrollAtBeginFrameEnabledAttributeGetterCallback, V8InternalRuntimeFlags::UpdateHoverFromScrollAtBeginFrameEnabledAttributeSetterCallback, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
    { "userActivationAPIEnabled", V8InternalRuntimeFlags::UserActivationAPIEnabledAttributeGetterCallback, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
    { "userActivationPostMessageTransferEnabled", V8InternalRuntimeFlags::UserActivationPostMessageTransferEnabledAttributeGetterCallback, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
    { "userActivationSameOriginVisibilityEnabled", V8InternalRuntimeFlags::UserActivationSameOriginVisibilityEnabledAttributeGetterCallback, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
    { "userActivationV2Enabled", V8InternalRuntimeFlags::UserActivationV2EnabledAttributeGetterCallback, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
    { "userAgentClientHintEnabled", V8InternalRuntimeFlags::UserAgentClientHintEnabledAttributeGetterCallback, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
    { "v8IdleTasksEnabled", V8InternalRuntimeFlags::V8IdleTasksEnabledAttributeGetterCallback, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
    { "videoAutoFullscreenEnabled", V8InternalRuntimeFlags::VideoAutoFullscreenEnabledAttributeGetterCallback, V8InternalRuntimeFlags::VideoAutoFullscreenEnabledAttributeSetterCallback, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
    { "videoFullscreenDetectionEnabled", V8InternalRuntimeFlags::VideoFullscreenDetectionEnabledAttributeGetterCallback, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
    { "videoFullscreenOrientationLockEnabled", V8InternalRuntimeFlags::VideoFullscreenOrientationLockEnabledAttributeGetterCallback, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
    { "videoRotateToFullscreenEnabled", V8InternalRuntimeFlags::VideoRotateToFullscreenEnabledAttributeGetterCallback, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
    { "visibilityCollapseColumnEnabled", V8InternalRuntimeFlags::VisibilityCollapseColumnEnabledAttributeGetterCallback, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
    { "wakeLockNavigatorEnabled", V8InternalRuntimeFlags::WakeLockNavigatorEnabledAttributeGetterCallback, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
    { "wasmCodeCacheEnabled", V8InternalRuntimeFlags::WasmCodeCacheEnabledAttributeGetterCallback, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
    { "webAnimationsAPIEnabled", V8InternalRuntimeFlags::WebAnimationsAPIEnabledAttributeGetterCallback, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
    { "webAnimationsSVGEnabled", V8InternalRuntimeFlags::WebAnimationsSVGEnabledAttributeGetterCallback, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
    { "webAssemblyThreadsEnabled", V8InternalRuntimeFlags::WebAssemblyThreadsEnabledAttributeGetterCallback, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
    { "webAuthEnabled", V8InternalRuntimeFlags::WebAuthEnabledAttributeGetterCallback, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
    { "webBluetoothEnabled", V8InternalRuntimeFlags::WebBluetoothEnabledAttributeGetterCallback, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
    { "webBluetoothScanningEnabled", V8InternalRuntimeFlags::WebBluetoothScanningEnabledAttributeGetterCallback, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
    { "webgl2ComputeContextEnabled", V8InternalRuntimeFlags::WebGL2ComputeContextEnabledAttributeGetterCallback, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
    { "webglDraftExtensionsEnabled", V8InternalRuntimeFlags::WebGLDraftExtensionsEnabledAttributeGetterCallback, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
    { "webglImageChromiumEnabled", V8InternalRuntimeFlags::WebGLImageChromiumEnabledAttributeGetterCallback, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
    { "webgpuEnabled", V8InternalRuntimeFlags::WebGPUEnabledAttributeGetterCallback, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
    { "webHIDEnabled", V8InternalRuntimeFlags::WebHIDEnabledAttributeGetterCallback, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
    { "webNFCEnabled", V8InternalRuntimeFlags::WebNFCEnabledAttributeGetterCallback, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
    { "webShareEnabled", V8InternalRuntimeFlags::WebShareEnabledAttributeGetterCallback, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
    { "webShareV2Enabled", V8InternalRuntimeFlags::WebShareV2EnabledAttributeGetterCallback, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
    { "webUSBEnabled", V8InternalRuntimeFlags::WebUSBEnabledAttributeGetterCallback, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
    { "webUSBOnDedicatedWorkersEnabled", V8InternalRuntimeFlags::WebUSBOnDedicatedWorkersEnabledAttributeGetterCallback, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
    { "webVREnabled", V8InternalRuntimeFlags::WebVREnabledAttributeGetterCallback, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
    { "webVTTRegionsEnabled", V8InternalRuntimeFlags::WebVTTRegionsEnabledAttributeGetterCallback, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
    { "webXREnabled", V8InternalRuntimeFlags::WebXREnabledAttributeGetterCallback, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
    { "webXRHitTestEnabled", V8InternalRuntimeFlags::WebXRHitTestEnabledAttributeGetterCallback, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
    { "webXRPlaneDetectionEnabled", V8InternalRuntimeFlags::WebXRPlaneDetectionEnabledAttributeGetterCallback, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
    { "workerNosniffBlockEnabled", V8InternalRuntimeFlags::WorkerNosniffBlockEnabledAttributeGetterCallback, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
    { "workerNosniffWarnEnabled", V8InternalRuntimeFlags::WorkerNosniffWarnEnabledAttributeGetterCallback, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
    { "workerTaskQueueEnabled", V8InternalRuntimeFlags::WorkerTaskQueueEnabledAttributeGetterCallback, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
    { "xsltEnabled", V8InternalRuntimeFlags::XsltEnabledAttributeGetterCallback, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
};

static void InstallV8InternalRuntimeFlagsTemplate(
    v8::Isolate* isolate,
    const DOMWrapperWorld& world,
    v8::Local<v8::FunctionTemplate> interface_template) {
  // Initialize the interface object's template.
  V8DOMConfiguration::InitializeDOMInterfaceTemplate(isolate, interface_template, V8InternalRuntimeFlags::GetWrapperTypeInfo()->interface_name, v8::Local<v8::FunctionTemplate>(), V8InternalRuntimeFlags::kInternalFieldCount);

  v8::Local<v8::Signature> signature = v8::Signature::New(isolate, interface_template);
  ALLOW_UNUSED_LOCAL(signature);
  v8::Local<v8::ObjectTemplate> instance_template = interface_template->InstanceTemplate();
  ALLOW_UNUSED_LOCAL(instance_template);
  v8::Local<v8::ObjectTemplate> prototype_template = interface_template->PrototypeTemplate();
  ALLOW_UNUSED_LOCAL(prototype_template);

  // Register IDL constants, attributes and operations.
  V8DOMConfiguration::InstallAccessors(
      isolate, world, instance_template, prototype_template, interface_template,
      signature, kV8InternalRuntimeFlagsAccessors, base::size(kV8InternalRuntimeFlagsAccessors));

  // Custom signature

  V8InternalRuntimeFlags::InstallRuntimeEnabledFeaturesOnTemplate(
      isolate, world, interface_template);
}

void V8InternalRuntimeFlags::InstallRuntimeEnabledFeaturesOnTemplate(
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

v8::Local<v8::FunctionTemplate> V8InternalRuntimeFlags::DomTemplate(
    v8::Isolate* isolate, const DOMWrapperWorld& world) {
  return V8DOMConfiguration::DomClassTemplate(
      isolate, world, const_cast<WrapperTypeInfo*>(V8InternalRuntimeFlags::GetWrapperTypeInfo()),
      InstallV8InternalRuntimeFlagsTemplate);
}

bool V8InternalRuntimeFlags::HasInstance(v8::Local<v8::Value> v8_value, v8::Isolate* isolate) {
  return V8PerIsolateData::From(isolate)->HasInstance(V8InternalRuntimeFlags::GetWrapperTypeInfo(), v8_value);
}

v8::Local<v8::Object> V8InternalRuntimeFlags::FindInstanceInPrototypeChain(
    v8::Local<v8::Value> v8_value, v8::Isolate* isolate) {
  return V8PerIsolateData::From(isolate)->FindInstanceInPrototypeChain(
      V8InternalRuntimeFlags::GetWrapperTypeInfo(), v8_value);
}

InternalRuntimeFlags* V8InternalRuntimeFlags::ToImplWithTypeCheck(
    v8::Isolate* isolate, v8::Local<v8::Value> value) {
  return HasInstance(value, isolate) ? ToImpl(v8::Local<v8::Object>::Cast(value)) : nullptr;
}

InternalRuntimeFlags* NativeValueTraits<InternalRuntimeFlags>::NativeValue(
    v8::Isolate* isolate, v8::Local<v8::Value> value, ExceptionState& exception_state) {
  InternalRuntimeFlags* native_value = V8InternalRuntimeFlags::ToImplWithTypeCheck(isolate, value);
  if (!native_value) {
    exception_state.ThrowTypeError(ExceptionMessages::FailedToConvertJSValue(
        "InternalRuntimeFlags"));
  }
  return native_value;
}

}  // namespace blink
