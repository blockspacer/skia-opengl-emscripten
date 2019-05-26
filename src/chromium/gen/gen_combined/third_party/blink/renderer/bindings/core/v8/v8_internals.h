// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated from the Jinja2 template
// third_party/blink/renderer/bindings/templates/interface.h.tmpl
// by the script code_generator_v8.py.
// DO NOT MODIFY!

// clang-format off
#ifndef THIRD_PARTY_BLINK_RENDERER_BINDINGS_CORE_V8_V8_INTERNALS_H_
#define THIRD_PARTY_BLINK_RENDERER_BINDINGS_CORE_V8_V8_INTERNALS_H_

#include "third_party/blink/renderer/bindings/core/v8/generated_code_helper.h"
#include "third_party/blink/renderer/bindings/core/v8/native_value_traits.h"
#include "third_party/blink/renderer/bindings/core/v8/to_v8_for_core.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_binding_for_core.h"
#include "third_party/blink/renderer/core/testing/internals.h"
#include "third_party/blink/renderer/platform/bindings/script_wrappable.h"
#include "third_party/blink/renderer/platform/bindings/v8_dom_wrapper.h"
#include "third_party/blink/renderer/platform/bindings/wrapper_type_info.h"
#include "third_party/blink/renderer/platform/heap/handle.h"

namespace blink {

extern WrapperTypeInfo v8_internals_wrapper_type_info;

class V8Internals {
  STATIC_ONLY(V8Internals);
 public:
  static bool HasInstance(v8::Local<v8::Value>, v8::Isolate*);
  static v8::Local<v8::Object> FindInstanceInPrototypeChain(v8::Local<v8::Value>, v8::Isolate*);
  static v8::Local<v8::FunctionTemplate> DomTemplate(v8::Isolate*, const DOMWrapperWorld&);
  static Internals* ToImpl(v8::Local<v8::Object> object) {
    return ToScriptWrappable(object)->ToImpl<Internals>();
  }
  static Internals* ToImplWithTypeCheck(v8::Isolate*, v8::Local<v8::Value>);

  static constexpr WrapperTypeInfo* GetWrapperTypeInfo() {
    return &v8_internals_wrapper_type_info;
  }

  static constexpr int kInternalFieldCount = kV8DefaultWrapperInternalFieldCount;

  static void InstallConditionalFeatures(
      v8::Local<v8::Context>,
      const DOMWrapperWorld&,
      v8::Local<v8::Object> instance_object,
      v8::Local<v8::Object> prototype_object,
      v8::Local<v8::Function> interface_object,
      v8::Local<v8::FunctionTemplate> interface_template);

  static void UpdateWrapperTypeInfo(
      InstallTemplateFunction,
      InstallRuntimeEnabledFeaturesFunction,
      InstallRuntimeEnabledFeaturesOnTemplateFunction,
      InstallConditionalFeaturesFunction);
  static void InstallV8InternalsTemplate(v8::Isolate*, const DOMWrapperWorld&, v8::Local<v8::FunctionTemplate> interface_template);

  // Callback functions

  static void PagePopupWindowAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  static void SettingsAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  static void RuntimeFlagsAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  static void WorkerThreadCountAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  static void CursorUpdatePendingAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  static void FakeMouseMovePendingAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  static void VisibleSelectionAnchorNodeAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  static void VisibleSelectionAnchorOffsetAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  static void VisibleSelectionFocusNodeAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  static void VisibleSelectionFocusOffsetAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  static void TextAffinityAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  static void InterestedElementAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  static void LengthAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  static void UnscopableAttributeAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>&);

  static void ObserveGCMethodCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  static void ElementLayoutTreeAsTextMethodCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  static void IsPreloadedMethodCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  static void IsPreloadedByMethodCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  static void IsLoadingMethodCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  static void IsLoadingFromMemoryCacheMethodCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  static void GetResourcePriorityMethodCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  static void GetResourceHeaderMethodCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  static void DoesWindowHaveUrlFragmentMethodCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  static void ComputedStyleIncludingVisitedInfoMethodCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  static void CreateUserAgentShadowRootMethodCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  static void ShadowRootMethodCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  static void SetBrowserControlsStateMethodCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  static void SetBrowserControlsShownRatioMethodCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  static void EffectiveRootScrollerMethodCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  static void ShadowRootTypeMethodCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  static void HasShadowInsertionPointMethodCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  static void HasContentElementMethodCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  static void CountElementShadowMethodCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  static void ShadowPseudoIdMethodCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  static void IsValidContentSelectMethodCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  static void TreeScopeRootNodeMethodCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  static void ParentTreeScopeMethodCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  static void CompareTreeScopePositionMethodCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  static void UpdateStyleAndReturnAffectedElementCountMethodCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  static void NeedsLayoutCountMethodCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  static void HitTestCountMethodCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  static void HitTestCacheHitsMethodCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  static void ElementFromPointMethodCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  static void ClearHitTestCacheMethodCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  static void InnerEditorElementMethodCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  static void PauseAnimationsMethodCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  static void IsCompositedAnimationMethodCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  static void DisableCompositedAnimationMethodCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  static void DisableCSSAdditiveAnimationsMethodCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  static void AdvanceImageAnimationMethodCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  static void NextSiblingInFlatTreeMethodCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  static void FirstChildInFlatTreeMethodCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  static void LastChildInFlatTreeMethodCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  static void NextInFlatTreeMethodCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  static void PreviousInFlatTreeMethodCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  static void VisiblePlaceholderMethodCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  static void IsValidationMessageVisibleMethodCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  static void SelectColorInColorChooserMethodCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  static void EndColorChooserMethodCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  static void HasAutofocusRequestMethodCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  static void FormControlStateOfHistoryItemMethodCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  static void SetFormControlStateOfHistoryItemMethodCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  static void AbsoluteCaretBoundsMethodCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  static void BoundingBoxMethodCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  static void SetMarkerMethodCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  static void MarkerCountForNodeMethodCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  static void ActiveMarkerCountForNodeMethodCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  static void MarkerRangeForNodeMethodCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  static void MarkerDescriptionForNodeMethodCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  static void MarkerBackgroundColorForNodeMethodCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  static void MarkerUnderlineColorForNodeMethodCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  static void AddTextMatchMarkerMethodCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  static void AddCompositionMarkerMethodCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  static void AddActiveSuggestionMarkerMethodCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  static void AddSuggestionMarkerMethodCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  static void SetTextMatchMarkersActiveMethodCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  static void SetMarkedTextMatchesAreHighlightedMethodCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  static void ViewportAsTextMethodCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  static void ElementShouldAutoCompleteMethodCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  static void SuggestedValueMethodCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  static void SetSuggestedValueMethodCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  static void SetAutofilledValueMethodCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  static void SetEditingValueMethodCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  static void SetAutofilledMethodCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  static void RangeFromLocationAndLengthMethodCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  static void LocationFromRangeMethodCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  static void LengthFromRangeMethodCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  static void RangeAsTextMethodCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  static void TouchPositionAdjustedToBestClickableNodeMethodCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  static void TouchNodeAdjustedToBestClickableNodeMethodCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  static void TouchPositionAdjustedToBestContextMenuNodeMethodCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  static void TouchNodeAdjustedToBestContextMenuNodeMethodCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  static void LastSpellCheckRequestSequenceMethodCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  static void LastSpellCheckProcessedSequenceMethodCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  static void CancelCurrentSpellCheckRequestMethodCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  static void IdleTimeSpellCheckerStateMethodCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  static void RunIdleTimeSpellCheckerMethodCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  static void UserPreferredLanguagesMethodCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  static void SetUserPreferredLanguagesMethodCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  static void MediaKeysCountMethodCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  static void MediaKeySessionCountMethodCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  static void ContextLifecycleStateObserverObjectCountMethodCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  static void WheelEventHandlerCountMethodCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  static void ScrollEventHandlerCountMethodCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  static void TouchStartOrMoveEventHandlerCountMethodCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  static void TouchEndOrCancelEventHandlerCountMethodCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  static void PointerEventHandlerCountMethodCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  static void TouchEventTargetLayerRectsMethodCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  static void ExecuteCommandMethodCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  static void HTMLNamespaceMethodCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  static void HTMLTagsMethodCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  static void SVGNamespaceMethodCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  static void SVGTagsMethodCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  static void NodesFromRectMethodCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  static void HasSpellingMarkerMethodCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  static void HasGrammarMarkerMethodCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  static void ReplaceMisspelledMethodCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  static void CanHyphenateMethodCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  static void SetMockHyphenationMethodCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  static void IsOverwriteModeEnabledMethodCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  static void ToggleOverwriteModeEnabledMethodCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  static void NumberOfScrollableAreasMethodCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  static void IsPageBoxVisibleMethodCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  static void LayerTreeAsTextMethodCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  static void ElementLayerTreeAsTextMethodCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  static void ScrollsWithRespectToMethodCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  static void ScrollingStateTreeAsTextMethodCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  static void MainThreadScrollingReasonsMethodCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  static void NonFastScrollableRectsMethodCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  static void MarkGestureScrollRegionDirtyMethodCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  static void EvictAllResourcesMethodCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  static void NumberOfLiveNodesMethodCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  static void NumberOfLiveDocumentsMethodCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  static void CounterValueMethodCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  static void PageNumberMethodCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  static void ShortcutIconURLsMethodCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  static void AllIconURLsMethodCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  static void NumberOfPagesMethodCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  static void PagePropertyMethodCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  static void PageSizeAndMarginsInPixelsMethodCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  static void PageScaleFactorMethodCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  static void SetPageScaleFactorMethodCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  static void SetPageScaleFactorLimitsMethodCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  static void SetIsCursorVisibleMethodCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  static void EffectivePreloadMethodCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  static void MediaPlayerRemoteRouteAvailabilityChangedMethodCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  static void MediaPlayerPlayingRemotelyChangedMethodCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  static void SetPersistentMethodCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  static void ForceStaleStateForMediaElementMethodCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  static void IsMediaElementSuspendedMethodCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  static void SetMediaControlsTestModeMethodCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  static void RegisterURLSchemeAsBypassingContentSecurityPolicyMethodCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  static void RemoveURLSchemeRegisteredAsBypassingContentSecurityPolicyMethodCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  static void TypeConversionsMethodCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  static void GetReferencedFilePathsMethodCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  static void StartTrackingRepaintsMethodCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  static void StopTrackingRepaintsMethodCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  static void UpdateLayoutAndRunPostLayoutTasksMethodCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  static void ForceFullRepaintMethodCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  static void DraggableRegionsMethodCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  static void NonDraggableRegionsMethodCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  static void GetCurrentCursorInfoMethodCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  static void MarkerTextForListItemMethodCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  static void DeserializeBufferMethodCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  static void SerializeObjectMethodCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  static void DeserializeBufferContainingWasmMethodCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  static void SerializeWithInlineWasmMethodCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  static void ForceReloadMethodCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  static void GetImageSourceURLMethodCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  static void ForceImageReloadMethodCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  static void SelectMenuListTextMethodCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  static void IsSelectPopupVisibleMethodCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  static void SelectPopupItemStyleIsRtlMethodCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  static void SelectPopupItemStyleFontHeightMethodCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  static void ResetTypeAheadSessionMethodCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  static void GetDragCaretMethodCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  static void GetSelectionInFlatTreeMethodCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  static void SelectionBoundsMethodCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  static void LoseSharedGraphicsContext3DMethodCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  static void ForceCompositingUpdateMethodCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  static void SetZoomFactorMethodCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  static void SetShouldRevealPasswordMethodCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  static void CreateResolvedPromiseMethodCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  static void CreateRejectedPromiseMethodCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  static void AddOneToPromiseMethodCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  static void PromiseCheckMethodCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  static void PromiseCheckWithoutExceptionStateMethodCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  static void PromiseCheckRangeMethodCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  static void PromiseCheckOverloadMethodCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  static void SetValueForUserMethodCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  static void SetFocusedMethodCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  static void SetInitialFocusMethodCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  static void CountHitRegionsMethodCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  static void IsInCanvasFontCacheMethodCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  static void CanvasFontCacheMaxFontsMethodCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  static void DictionaryTestMethodCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  static void RecordTestMethodCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  static void SequenceTestMethodCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  static void UnionTypesTestMethodCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  static void CallbackFunctionTestMethodCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  static void SetScrollChainMethodCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  static void ScheduleBlinkGCMethodCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  static void SelectedHTMLForClipboardMethodCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  static void SelectedTextForClipboardMethodCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  static void SetVisualViewportOffsetMethodCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  static void IsUseCountedMethodCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  static void IsCSSPropertyUseCountedMethodCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  static void IsAnimatedCSSPropertyUseCountedMethodCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  static void ClearUseCounterMethodCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  static void GetCSSPropertyLonghandsMethodCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  static void GetCSSPropertyShorthandsMethodCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  static void GetCSSPropertyAliasesMethodCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  static void ObserveUseCounterMethodCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  static void UnscopableMethodMethodCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  static void SetCapsLockStateMethodCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  static void SetScrollbarVisibilityInScrollableAreaMethodCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  static void MonotonicTimeToZeroBasedDocumentTimeMethodCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  static void CurrentTimeTicksMethodCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  static void GetScrollAnimationStateMethodCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  static void GetProgrammaticScrollAnimationStateMethodCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  static void VisualRectMethodCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  static void OriginTrialsTestMethodCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  static void CrashMethodCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  static void EvaluateInInspectorOverlayMethodCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  static void SetIsLowEndDeviceMethodCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  static void IsLowEndDeviceMethodCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  static void SupportedTextEncodingLabelsMethodCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  static void SimulateRasterUnderInvalidationsMethodCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  static void BypassLongCompileThresholdOnceMethodCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  static void LifecycleUpdateCountMethodCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  static void DisableIntersectionObserverThrottleDelayMethodCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  static void IsSiteIsolatedMethodCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  static void IsTrackingOcclusionForIFrameMethodCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  static void AddEmbedderCustomElementNameMethodCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  static void ResolveModuleSpecifierMethodCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  static void SetDeviceEmulationScaleMethodCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  static void GetInternalResponseURLListMethodCallback(const v8::FunctionCallbackInfo<v8::Value>&);

  static void IndexedPropertyGetterCallback(uint32_t index, const v8::PropertyCallbackInfo<v8::Value>&);
  static void IndexedPropertySetterCallback(uint32_t index, v8::Local<v8::Value>, const v8::PropertyCallbackInfo<v8::Value>&);
  static void IndexedPropertyDescriptorCallback(uint32_t index, const v8::PropertyCallbackInfo<v8::Value>&);
  static void IndexedPropertyDefinerCallback(uint32_t index, const v8::PropertyDescriptor&, const v8::PropertyCallbackInfo<v8::Value>&);

  static void InstallRuntimeEnabledFeaturesOnTemplate(
      v8::Isolate*,
      const DOMWrapperWorld&,
      v8::Local<v8::FunctionTemplate> interface_template);
  static InstallRuntimeEnabledFeaturesOnTemplateFunction
  install_runtime_enabled_features_on_template_function_;

 private:
  static InstallTemplateFunction install_v8_internals_template_function_;
};

template <>
struct NativeValueTraits<Internals> : public NativeValueTraitsBase<Internals> {
  static Internals* NativeValue(v8::Isolate*, v8::Local<v8::Value>, ExceptionState&);
  static Internals* NullValue() { return nullptr; }
};

template <>
struct V8TypeOf<Internals> {
  typedef V8Internals Type;
};

}  // namespace blink

#endif  // THIRD_PARTY_BLINK_RENDERER_BINDINGS_CORE_V8_V8_INTERNALS_H_
