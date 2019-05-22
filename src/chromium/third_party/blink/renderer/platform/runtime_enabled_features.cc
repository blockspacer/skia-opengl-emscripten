// Copyright (c) 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// Generated from template:
//   templates/runtime_enabled_features.cc.tmpl
// and input files:
//   /home/avakimov_am/skia-opengl-emscripten/src/chromium/third_party/blink/renderer/platform/runtime_enabled_features.json5


#include "build/build_config.h"

#include "third_party/blink/renderer/platform/runtime_enabled_features.h"

#include "third_party/blink/renderer/platform/wtf/assertions.h"
#include "third_party/blink/renderer/platform/wtf/text/wtf_string.h"

namespace blink {

RuntimeEnabledFeatures::Backup::Backup()
  :     accelerated_2d_canvas_(RuntimeEnabledFeatures::Accelerated2dCanvasEnabled())
,
        accessibility_object_model_(RuntimeEnabledFeatures::AccessibilityObjectModelEnabled())
,
        ad_tagging_(RuntimeEnabledFeatures::AdTaggingEnabled())
,
        allow_activation_delegation_attr_(RuntimeEnabledFeatures::AllowActivationDelegationAttrEnabled())
,
        allow_content_initiated_data_url_navigations_(RuntimeEnabledFeatures::AllowContentInitiatedDataUrlNavigationsEnabled())
,
        animation_worklet_(RuntimeEnabledFeatures::AnimationWorkletEnabledByRuntimeFlag())
,
        async_clipboard_(RuntimeEnabledFeatures::AsyncClipboardEnabled())
,
        audio_output_devices_(RuntimeEnabledFeatures::AudioOutputDevicesEnabled())
,
        audio_video_tracks_(RuntimeEnabledFeatures::AudioVideoTracksEnabled())
,
        automation_controlled_(RuntimeEnabledFeatures::AutomationControlledEnabled())
,
        auto_picture_in_picture_(RuntimeEnabledFeatures::AutoPictureInPictureEnabledByRuntimeFlag())
,
        autoplay_ignores_web_audio_(RuntimeEnabledFeatures::AutoplayIgnoresWebAudioEnabled())
,
        background_fetch_(RuntimeEnabledFeatures::BackgroundFetchEnabled())
,
        background_video_track_optimization_(RuntimeEnabledFeatures::BackgroundVideoTrackOptimizationEnabled())
,
        badging_(RuntimeEnabledFeatures::BadgingEnabledByRuntimeFlag())
,
        bidi_caret_affinity_(RuntimeEnabledFeatures::BidiCaretAffinityEnabled())
,
        blink_gen_property_trees_(RuntimeEnabledFeatures::BlinkGenPropertyTreesEnabled())
,
        blink_runtime_call_stats_(RuntimeEnabledFeatures::BlinkRuntimeCallStatsEnabled())
,
        bloated_renderer_detection_(RuntimeEnabledFeatures::BloatedRendererDetectionEnabled())
,
        bloated_renderer_detection_skip_uptime_check_(RuntimeEnabledFeatures::BloatedRendererDetectionSkipUptimeCheckEnabled())
,
        blob_read_methods_(RuntimeEnabledFeatures::BlobReadMethodsEnabled())
,
        block_credentialed_subresources_(RuntimeEnabledFeatures::BlockCredentialedSubresourcesEnabled())
,
        blocking_downloads_in_sandbox_without_user_activation_(RuntimeEnabledFeatures::BlockingDownloadsInSandboxWithoutUserActivationEnabled())
,
        block_meta_set_cookie_(RuntimeEnabledFeatures::BlockMetaSetCookieEnabled())
,
        built_in_module_all_(RuntimeEnabledFeatures::BuiltInModuleAllEnabled())
,
        built_in_module_infra_(RuntimeEnabledFeatures::BuiltInModuleInfraEnabledByRuntimeFlag())
,
        built_in_module_kv_storage_(RuntimeEnabledFeatures::BuiltInModuleKvStorageEnabledByRuntimeFlag())
,
        cache_inline_script_code_(RuntimeEnabledFeatures::CacheInlineScriptCodeEnabled())
,
        cache_storage_add_all_rejects_duplicates_(RuntimeEnabledFeatures::CacheStorageAddAllRejectsDuplicatesEnabled())
,
        call_capture_listeners_at_capture_phase_at_shadow_hosts_(RuntimeEnabledFeatures::CallCaptureListenersAtCapturePhaseAtShadowHostsEnabled())
,
        canvas_2d_context_lost_restored_(RuntimeEnabledFeatures::Canvas2dContextLostRestoredEnabled())
,
        canvas_2d_fixed_rendering_mode_(RuntimeEnabledFeatures::Canvas2dFixedRenderingModeEnabled())
,
        canvas_2d_image_chromium_(RuntimeEnabledFeatures::Canvas2dImageChromiumEnabled())
,
        canvas_2d_scroll_path_into_view_(RuntimeEnabledFeatures::Canvas2dScrollPathIntoViewEnabled())
,
        canvas_color_management_(RuntimeEnabledFeatures::CanvasColorManagementEnabled())
,
        canvas_hit_region_(RuntimeEnabledFeatures::CanvasHitRegionEnabled())
,
        canvas_image_smoothing_(RuntimeEnabledFeatures::CanvasImageSmoothingEnabled())
,
        click_retargetting_(RuntimeEnabledFeatures::ClickRetargettingEnabled())
,
        client_placeholders_for_server_lo_fi_(RuntimeEnabledFeatures::ClientPlaceholdersForServerLoFiEnabled())
,
        composite_after_paint_(RuntimeEnabledFeatures::CompositeAfterPaintEnabled())
,
        composited_selection_update_(RuntimeEnabledFeatures::CompositedSelectionUpdateEnabled())
,
        compositor_touch_action_(RuntimeEnabledFeatures::CompositorTouchActionEnabled())
,
        computed_accessibility_info_(RuntimeEnabledFeatures::ComputedAccessibilityInfoEnabled())
,
        contacts_manager_(RuntimeEnabledFeatures::ContactsManagerEnabledByRuntimeFlag())
,
        context_menu_(RuntimeEnabledFeatures::ContextMenuEnabled())
,
        cookie_store_(RuntimeEnabledFeatures::CookieStoreEnabledByRuntimeFlag())
,
        cors_rfc_1918_(RuntimeEnabledFeatures::CorsRFC1918Enabled())
,
        css_3_text_(RuntimeEnabledFeatures::CSS3TextEnabled())
,
        css_additive_animations_(RuntimeEnabledFeatures::CSSAdditiveAnimationsEnabled())
,
        css_alt_text_(RuntimeEnabledFeatures::CSSAltTextEnabled())
,
        css_backdrop_filter_(RuntimeEnabledFeatures::CSSBackdropFilterEnabled())
,
        css_calc_as_int_(RuntimeEnabledFeatures::CSSCalcAsIntEnabled())
,
        css_focus_visible_(RuntimeEnabledFeatures::CSSFocusVisibleEnabled())
,
        css_font_feature_values_(RuntimeEnabledFeatures::CSSFontFeatureValuesEnabled())
,
        css_font_size_adjust_(RuntimeEnabledFeatures::CSSFontSizeAdjustEnabled())
,
        css_hex_alpha_color_(RuntimeEnabledFeatures::CSSHexAlphaColorEnabled())
,
        css_independent_transform_properties_(RuntimeEnabledFeatures::CSSIndependentTransformPropertiesEnabled())
,
        css_layout_api_(RuntimeEnabledFeatures::CSSLayoutAPIEnabled())
,
        css_logical_(RuntimeEnabledFeatures::CSSLogicalEnabled())
,
        css_mask_source_type_(RuntimeEnabledFeatures::CSSMaskSourceTypeEnabled())
,
        css_offset_path_ray_(RuntimeEnabledFeatures::CSSOffsetPathRayEnabled())
,
        css_offset_path_ray_contain_(RuntimeEnabledFeatures::CSSOffsetPathRayContainEnabled())
,
        css_offset_position_anchor_(RuntimeEnabledFeatures::CSSOffsetPositionAnchorEnabled())
,
        css_paint_api_arguments_(RuntimeEnabledFeatures::CSSPaintAPIArgumentsEnabled())
,
        css_part_pseudo_element_(RuntimeEnabledFeatures::CSSPartPseudoElementEnabled())
,
        css_picture_in_picture_(RuntimeEnabledFeatures::CSSPictureInPictureEnabled())
,
        css_pseudo_is_(RuntimeEnabledFeatures::CSSPseudoIsEnabled())
,
        css_pseudo_where_(RuntimeEnabledFeatures::CSSPseudoWhereEnabled())
,
        css_snap_size_(RuntimeEnabledFeatures::CSSSnapSizeEnabled())
,
        css_variables_2_(RuntimeEnabledFeatures::CSSVariables2Enabled())
,
        css_variables_2_image_values_(RuntimeEnabledFeatures::CSSVariables2ImageValuesEnabled())
,
        css_variables_2_transform_values_(RuntimeEnabledFeatures::CSSVariables2TransformValuesEnabled())
,
        css_viewport_(RuntimeEnabledFeatures::CSSViewportEnabled())
,
        custom_element_default_style_(RuntimeEnabledFeatures::CustomElementDefaultStyleEnabled())
,
        custom_elements_v0_(RuntimeEnabledFeatures::CustomElementsV0EnabledByRuntimeFlag())
,
        custom_user_timing_(RuntimeEnabledFeatures::CustomUserTimingEnabled())
,
        database_(RuntimeEnabledFeatures::DatabaseEnabled())
,
        decode_to_yuv_(RuntimeEnabledFeatures::DecodeToYUVEnabled())
,
        desktop_capture_disable_local_echo_control_(RuntimeEnabledFeatures::DesktopCaptureDisableLocalEchoControlEnabled())
,
        disable_hardware_noise_suppression_(RuntimeEnabledFeatures::DisableHardwareNoiseSuppressionEnabledByRuntimeFlag())
,
        display_cutout_api_(RuntimeEnabledFeatures::DisplayCutoutAPIEnabled())
,
        display_locking_(RuntimeEnabledFeatures::DisplayLockingEnabled())
,
        document_cookie_(RuntimeEnabledFeatures::DocumentCookieEnabled())
,
        document_domain_(RuntimeEnabledFeatures::DocumentDomainEnabled())
,
        document_write_(RuntimeEnabledFeatures::DocumentWriteEnabled())
,
        editing_ng_(RuntimeEnabledFeatures::EditingNGEnabled())
,
        element_internals_(RuntimeEnabledFeatures::ElementInternalsEnabled())
,
        element_timing_(RuntimeEnabledFeatures::ElementTimingEnabledByRuntimeFlag())
,
        encrypted_media_encryption_scheme_query_(RuntimeEnabledFeatures::EncryptedMediaEncryptionSchemeQueryEnabled())
,
        encrypted_media_hdcp_policy_check_(RuntimeEnabledFeatures::EncryptedMediaHdcpPolicyCheckEnabled())
,
        encrypted_media_persistent_usage_record_session_(RuntimeEnabledFeatures::EncryptedMediaPersistentUsageRecordSessionEnabled())
,
        event_timing_(RuntimeEnabledFeatures::EventTimingEnabledByRuntimeFlag())
,
        exec_command_in_java_script_(RuntimeEnabledFeatures::ExecCommandInJavaScriptEnabled())
,
        expensive_background_timer_throttling_(RuntimeEnabledFeatures::ExpensiveBackgroundTimerThrottlingEnabled())
,
        experimental_content_security_policy_features_(RuntimeEnabledFeatures::ExperimentalContentSecurityPolicyFeaturesEnabled())
,
        experimental_is_input_pending_(RuntimeEnabledFeatures::ExperimentalIsInputPendingEnabledByRuntimeFlag())
,
        experimental_productivity_features_(RuntimeEnabledFeatures::ExperimentalProductivityFeaturesEnabled())
,
        extended_text_metrics_(RuntimeEnabledFeatures::ExtendedTextMetricsEnabled())
,
        extra_webgl_video_texture_metadata_(RuntimeEnabledFeatures::ExtraWebGLVideoTextureMetadataEnabled())
,
        fallback_cursor_mode_(RuntimeEnabledFeatures::FallbackCursorModeEnabled())
,
        fast_border_radius_(RuntimeEnabledFeatures::FastBorderRadiusEnabled())
,
        fast_flat_tree_traversal_(RuntimeEnabledFeatures::FastFlatTreeTraversalEnabled())
,
        fast_mobile_scrolling_(RuntimeEnabledFeatures::FastMobileScrollingEnabled())
,
        feature_policy_for_sandbox_(RuntimeEnabledFeatures::FeaturePolicyForSandboxEnabled())
,
        feature_policy_java_script_interface_(RuntimeEnabledFeatures::FeaturePolicyJavaScriptInterfaceEnabled())
,
        feature_policy_reporting_(RuntimeEnabledFeatures::FeaturePolicyReportingEnabledByRuntimeFlag())
,
        feature_policy_vibrate_feature_(RuntimeEnabledFeatures::FeaturePolicyVibrateFeatureEnabled())
,
        fetch_metadata_(RuntimeEnabledFeatures::FetchMetadataEnabled())
,
        fetch_metadata_destination_(RuntimeEnabledFeatures::FetchMetadataDestinationEnabled())
,
        file_system_(RuntimeEnabledFeatures::FileSystemEnabled())
,
        first_contentful_paint_plus_plus_(RuntimeEnabledFeatures::FirstContentfulPaintPlusPlusEnabled())
,
        focusless_spatial_navigation_(RuntimeEnabledFeatures::FocuslessSpatialNavigationEnabled())
,
        font_src_local_matching_(RuntimeEnabledFeatures::FontSrcLocalMatchingEnabled())
,
        forbid_sync_xhr_in_page_dismissal_(RuntimeEnabledFeatures::ForbidSyncXHRInPageDismissalEnabled())
,
        force_overlay_fullscreen_video_(RuntimeEnabledFeatures::ForceOverlayFullscreenVideoEnabled())
,
        force_synchronous_html_parsing_(RuntimeEnabledFeatures::ForceSynchronousHTMLParsingEnabled())
,
        force_taller_select_popup_(RuntimeEnabledFeatures::ForceTallerSelectPopupEnabled())
,
        form_associated_custom_elements_(RuntimeEnabledFeatures::FormAssociatedCustomElementsEnabled())
,
        form_data_event_(RuntimeEnabledFeatures::FormDataEventEnabled())
,
        fractional_mouse_event_(RuntimeEnabledFeatures::FractionalMouseEventEnabled())
,
        fractional_scroll_offsets_(RuntimeEnabledFeatures::FractionalScrollOffsetsEnabled())
,
        freeze_frames_on_visibility_(RuntimeEnabledFeatures::FreezeFramesOnVisibilityEnabled())
,
        gamepad_button_axis_events_(RuntimeEnabledFeatures::GamepadButtonAxisEventsEnabled())
,
        get_display_media_(RuntimeEnabledFeatures::GetDisplayMediaEnabled())
,
        heap_compaction_(RuntimeEnabledFeatures::HeapCompactionEnabled())
,
        heap_concurrent_marking_(RuntimeEnabledFeatures::HeapConcurrentMarkingEnabled())
,
        heap_incremental_marking_(RuntimeEnabledFeatures::HeapIncrementalMarkingEnabled())
,
        heap_incremental_marking_stress_(RuntimeEnabledFeatures::HeapIncrementalMarkingStressEnabled())
,
        href_translate_(RuntimeEnabledFeatures::HrefTranslateEnabledByRuntimeFlag())
,
        html_imports_(RuntimeEnabledFeatures::HTMLImportsEnabledByRuntimeFlag())
,
        html_imports_only_chrome_(RuntimeEnabledFeatures::HTMLImportsOnlyChromeEnabled())
,
        html_imports_style_application_(RuntimeEnabledFeatures::HTMLImportsStyleApplicationEnabled())
,
        idb_observer_(RuntimeEnabledFeatures::IDBObserverEnabled())
,
        idb_transaction_commit_(RuntimeEnabledFeatures::IDBTransactionCommitEnabled())
,
        idle_detection_(RuntimeEnabledFeatures::IdleDetectionEnabled())
,
        ignore_cross_origin_window_when_named_access_on_window_(RuntimeEnabledFeatures::IgnoreCrossOriginWindowWhenNamedAccessOnWindowEnabled())
,
        image_orientation_(RuntimeEnabledFeatures::ImageOrientationEnabled())
,
        implicit_root_scroller_(RuntimeEnabledFeatures::ImplicitRootScrollerEnabled())
,
        inert_attribute_(RuntimeEnabledFeatures::InertAttributeEnabled())
,
        input_multiple_fields_ui_(RuntimeEnabledFeatures::InputMultipleFieldsUIEnabled())
,
        installed_app_(RuntimeEnabledFeatures::InstalledAppEnabledByRuntimeFlag())
,
        intersection_observer_v_2_(RuntimeEnabledFeatures::IntersectionObserverV2Enabled())
,
        invisible_dom_(RuntimeEnabledFeatures::InvisibleDOMEnabled())
,
        isolated_code_cache_(RuntimeEnabledFeatures::IsolatedCodeCacheEnabled())
,
        isolated_world_csp_(RuntimeEnabledFeatures::IsolatedWorldCSPEnabled())
,
        jank_tracking_(RuntimeEnabledFeatures::JankTrackingEnabledByRuntimeFlag())
,
        jank_tracking_sweep_line_(RuntimeEnabledFeatures::JankTrackingSweepLineEnabled())
,
        keyboard_focusable_scrollers_(RuntimeEnabledFeatures::KeyboardFocusableScrollersEnabled())
,
        lang_attribute_aware_form_control_ui_(RuntimeEnabledFeatures::LangAttributeAwareFormControlUIEnabled())
,
        lang_client_hint_header_(RuntimeEnabledFeatures::LangClientHintHeaderEnabled())
,
        layout_jank_api_(RuntimeEnabledFeatures::LayoutJankAPIEnabledByRuntimeFlag())
,
        layout_ng_(RuntimeEnabledFeatures::LayoutNGEnabled())
,
        layout_ng_block_fragmentation_(RuntimeEnabledFeatures::LayoutNGBlockFragmentationEnabled())
,
        layout_ng_fieldset_(RuntimeEnabledFeatures::LayoutNGFieldsetEnabled())
,
        layout_ng_flex_box_(RuntimeEnabledFeatures::LayoutNGFlexBoxEnabled())
,
        layout_ng_fragment_caching_(RuntimeEnabledFeatures::LayoutNGFragmentCachingEnabled())
,
        lazy_frame_loading_(RuntimeEnabledFeatures::LazyFrameLoadingEnabled())
,
        lazy_frame_visible_load_time_metrics_(RuntimeEnabledFeatures::LazyFrameVisibleLoadTimeMetricsEnabled())
,
        lazy_image_loading_(RuntimeEnabledFeatures::LazyImageLoadingEnabled())
,
        lazy_image_visible_load_time_metrics_(RuntimeEnabledFeatures::LazyImageVisibleLoadTimeMetricsEnabled())
,
        lazy_initialize_media_controls_(RuntimeEnabledFeatures::LazyInitializeMediaControlsEnabled())
,
        legacy_performance_memory_counters_(RuntimeEnabledFeatures::LegacyPerformanceMemoryCountersEnabledByRuntimeFlag())
,
        long_task_v_2_(RuntimeEnabledFeatures::LongTaskV2Enabled())
,
        manual_slotting_(RuntimeEnabledFeatures::ManualSlottingEnabled())
,
        media_capabilities_encoding_info_(RuntimeEnabledFeatures::MediaCapabilitiesEncodingInfoEnabled())
,
        media_capabilities_encrypted_media_(RuntimeEnabledFeatures::MediaCapabilitiesEncryptedMediaEnabledByRuntimeFlag())
,
        media_capture_(RuntimeEnabledFeatures::MediaCaptureEnabled())
,
        media_capture_depth_video_kind_(RuntimeEnabledFeatures::MediaCaptureDepthVideoKindEnabled())
,
        media_cast_overlay_button_(RuntimeEnabledFeatures::MediaCastOverlayButtonEnabled())
,
        media_controls_expand_gesture_(RuntimeEnabledFeatures::MediaControlsExpandGestureEnabled())
,
        media_controls_overlay_play_button_(RuntimeEnabledFeatures::MediaControlsOverlayPlayButtonEnabled())
,
        media_document_download_button_(RuntimeEnabledFeatures::MediaDocumentDownloadButtonEnabled())
,
        media_engagement_bypass_autoplay_policies_(RuntimeEnabledFeatures::MediaEngagementBypassAutoplayPoliciesEnabled())
,
        media_query_prefers_color_scheme_(RuntimeEnabledFeatures::MediaQueryPrefersColorSchemeEnabled())
,
        media_query_shape_(RuntimeEnabledFeatures::MediaQueryShapeEnabled())
,
        media_session_(RuntimeEnabledFeatures::MediaSessionEnabled())
,
        media_source_experimental_(RuntimeEnabledFeatures::MediaSourceExperimentalEnabled())
,
        media_source_new_abort_and_duration_(RuntimeEnabledFeatures::MediaSourceNewAbortAndDurationEnabled())
,
        media_stream_track_content_hint_(RuntimeEnabledFeatures::MediaStreamTrackContentHintEnabled())
,
        merge_blocking_non_blocking_pools_(RuntimeEnabledFeatures::MergeBlockingNonBlockingPoolsEnabled())
,
        meta_color_scheme_(RuntimeEnabledFeatures::MetaColorSchemeEnabled())
,
        middle_click_autoscroll_(RuntimeEnabledFeatures::MiddleClickAutoscrollEnabled())
,
        mime_handler_view_in_cross_process_frame_(RuntimeEnabledFeatures::MimeHandlerViewInCrossProcessFrameEnabled())
,
        mobile_layout_theme_(RuntimeEnabledFeatures::MobileLayoutThemeEnabled())
,
        modern_media_controls_(RuntimeEnabledFeatures::ModernMediaControlsEnabled())
,
        module_dedicated_worker_(RuntimeEnabledFeatures::ModuleDedicatedWorkerEnabled())
,
        module_service_worker_(RuntimeEnabledFeatures::ModuleServiceWorkerEnabled())
,
        mojo_js_(RuntimeEnabledFeatures::MojoJSEnabled())
,
        mojo_js_test_(RuntimeEnabledFeatures::MojoJSTestEnabled())
,
        movement_xy_in_blink_(RuntimeEnabledFeatures::MovementXYInBlinkEnabled())
,
        mute_button_(RuntimeEnabledFeatures::MuteButtonEnabledByRuntimeFlag())
,
        native_file_system_(RuntimeEnabledFeatures::NativeFileSystemEnabled())
,
        native_streams_(RuntimeEnabledFeatures::NativeStreamsEnabled())
,
        navigator_content_utils_(RuntimeEnabledFeatures::NavigatorContentUtilsEnabled())
,
        navigator_device_memory_(RuntimeEnabledFeatures::NavigatorDeviceMemoryEnabled())
,
        navigator_language_in_insecure_context_(RuntimeEnabledFeatures::NavigatorLanguageInInsecureContextEnabled())
,
        net_info_downlink_max_(RuntimeEnabledFeatures::NetInfoDownlinkMaxEnabled())
,
        network_service_(RuntimeEnabledFeatures::NetworkServiceEnabled())
,
        new_remote_playback_pipeline_(RuntimeEnabledFeatures::NewRemotePlaybackPipelineEnabled())
,
        no_idle_encoding_for_web_tests_(RuntimeEnabledFeatures::NoIdleEncodingForWebTestsEnabled())
,
        notification_constructor_(RuntimeEnabledFeatures::NotificationConstructorEnabled())
,
        notification_content_image_(RuntimeEnabledFeatures::NotificationContentImageEnabled())
,
        notifications_(RuntimeEnabledFeatures::NotificationsEnabled())
,
        notification_triggers_(RuntimeEnabledFeatures::NotificationTriggersEnabled())
,
        off_main_thread_css_paint_(RuntimeEnabledFeatures::OffMainThreadCSSPaintEnabled())
,
        offscreen_canvas_(RuntimeEnabledFeatures::OffscreenCanvasEnabled())
,
        offscreen_canvas_commit_(RuntimeEnabledFeatures::OffscreenCanvasCommitEnabled())
,
        offscreen_canvas_text_(RuntimeEnabledFeatures::OffscreenCanvasTextEnabled())
,
        on_device_change_(RuntimeEnabledFeatures::OnDeviceChangeEnabled())
,
        orientation_event_(RuntimeEnabledFeatures::OrientationEventEnabled())
,
        origin_trials_(RuntimeEnabledFeatures::OriginTrialsEnabled())
,
        origin_trials_sample_api_(RuntimeEnabledFeatures::OriginTrialsSampleAPIEnabledByRuntimeFlag())
,
        origin_trials_sample_api_dependent_(RuntimeEnabledFeatures::OriginTrialsSampleAPIDependentEnabledByRuntimeFlag())
,
        origin_trials_sample_api_implied_(RuntimeEnabledFeatures::OriginTrialsSampleAPIImpliedEnabledByRuntimeFlag())
,
        origin_trials_sample_api_invalid_os_(RuntimeEnabledFeatures::OriginTrialsSampleAPIInvalidOSEnabledByRuntimeFlag())
,
        origin_trials_sample_api_navigation_(RuntimeEnabledFeatures::OriginTrialsSampleAPINavigationEnabledByRuntimeFlag())
,
        out_of_blink_cors_(RuntimeEnabledFeatures::OutOfBlinkCorsEnabled())
,
        overflow_icons_for_media_controls_(RuntimeEnabledFeatures::OverflowIconsForMediaControlsEnabled())
,
        overlay_scrollbars_(RuntimeEnabledFeatures::OverlayScrollbarsEnabled())
,
        overscroll_customization_(RuntimeEnabledFeatures::OverscrollCustomizationEnabled())
,
        page_lifecycle_transitions_opt_in_(RuntimeEnabledFeatures::PageLifecycleTransitionsOptInEnabledByRuntimeFlag())
,
        page_lifecycle_transitions_opt_out_(RuntimeEnabledFeatures::PageLifecycleTransitionsOptOutEnabledByRuntimeFlag())
,
        page_popup_(RuntimeEnabledFeatures::PagePopupEnabled())
,
        paint_under_invalidation_checking_(RuntimeEnabledFeatures::PaintUnderInvalidationCheckingEnabled())
,
        passive_document_event_listeners_(RuntimeEnabledFeatures::PassiveDocumentEventListenersEnabled())
,
        passive_document_wheel_event_listeners_(RuntimeEnabledFeatures::PassiveDocumentWheelEventListenersEnabled())
,
        pass_paint_visual_rect_to_compositor_(RuntimeEnabledFeatures::PassPaintVisualRectToCompositorEnabled())
,
        payment_app_(RuntimeEnabledFeatures::PaymentAppEnabled())
,
        payment_handler_change_payment_method_(RuntimeEnabledFeatures::PaymentHandlerChangePaymentMethodEnabled())
,
        payment_method_change_event_(RuntimeEnabledFeatures::PaymentMethodChangeEventEnabled())
,
        payment_request_(RuntimeEnabledFeatures::PaymentRequestEnabled())
,
        payment_request_has_enrolled_instrument_(RuntimeEnabledFeatures::PaymentRequestHasEnrolledInstrumentEnabled())
,
        payment_request_merchant_validation_event_(RuntimeEnabledFeatures::PaymentRequestMerchantValidationEventEnabled())
,
        payment_retry_(RuntimeEnabledFeatures::PaymentRetryEnabled())
,
        performance_manager_instrumentation_(RuntimeEnabledFeatures::PerformanceManagerInstrumentationEnabled())
,
        performance_observer_buffered_flag_(RuntimeEnabledFeatures::PerformanceObserverBufferedFlagEnabled())
,
        periodic_background_sync_(RuntimeEnabledFeatures::PeriodicBackgroundSyncEnabled())
,
        per_method_can_make_payment_quota_(RuntimeEnabledFeatures::PerMethodCanMakePaymentQuotaEnabledByRuntimeFlag())
,
        permission_delegation_(RuntimeEnabledFeatures::PermissionDelegationEnabled())
,
        permissions_(RuntimeEnabledFeatures::PermissionsEnabled())
,
        permissions_request_revoke_(RuntimeEnabledFeatures::PermissionsRequestRevokeEnabled())
,
        picture_in_picture_(RuntimeEnabledFeatures::PictureInPictureEnabled())
,
        picture_in_picture_api_(RuntimeEnabledFeatures::PictureInPictureAPIEnabled())
,
        picture_in_picture_v_2_(RuntimeEnabledFeatures::PictureInPictureV2Enabled())
,
        pointer_raw_update_(RuntimeEnabledFeatures::PointerRawUpdateEnabled())
,
        portals_(RuntimeEnabledFeatures::PortalsEnabled())
,
        post_animation_frame_(RuntimeEnabledFeatures::PostAnimationFrameEnabled())
,
        precise_memory_info_(RuntimeEnabledFeatures::PreciseMemoryInfoEnabled())
,
        predicted_events_(RuntimeEnabledFeatures::PredictedEventsEnabled())
,
        prefixed_video_fullscreen_(RuntimeEnabledFeatures::PrefixedVideoFullscreenEnabled())
,
        presentation_(RuntimeEnabledFeatures::PresentationEnabled())
,
        print_browser_(RuntimeEnabledFeatures::PrintBrowserEnabled())
,
        priority_hints_(RuntimeEnabledFeatures::PriorityHintsEnabledByRuntimeFlag())
,
        push_messaging_(RuntimeEnabledFeatures::PushMessagingEnabled())
,
        raster_inducing_scroll_(RuntimeEnabledFeatures::RasterInducingScrollEnabled())
,
        reduced_referrer_granularity_(RuntimeEnabledFeatures::ReducedReferrerGranularityEnabled())
,
        remote_playback_(RuntimeEnabledFeatures::RemotePlaybackEnabled())
,
        remote_playback_backend_(RuntimeEnabledFeatures::RemotePlaybackBackendEnabled())
,
        rendering_pipeline_throttling_(RuntimeEnabledFeatures::RenderingPipelineThrottlingEnabled())
,
        resource_load_scheduler_(RuntimeEnabledFeatures::ResourceLoadSchedulerEnabled())
,
        restrict_app_cache_to_secure_contexts_(RuntimeEnabledFeatures::RestrictAppCacheToSecureContextsEnabled())
,
        restrict_device_sensor_events_to_secure_contexts_(RuntimeEnabledFeatures::RestrictDeviceSensorEventsToSecureContextsEnabled())
,
        restrict_lazy_frame_loading_to_data_saver_(RuntimeEnabledFeatures::RestrictLazyFrameLoadingToDataSaverEnabled())
,
        restrict_lazy_image_loading_to_data_saver_(RuntimeEnabledFeatures::RestrictLazyImageLoadingToDataSaverEnabled())
,
        rtc_audio_jitter_buffer_max_packets_(RuntimeEnabledFeatures::RtcAudioJitterBufferMaxPacketsEnabledByRuntimeFlag())
,
        rtc_audio_jitter_buffer_rtx_handling_(RuntimeEnabledFeatures::RtcAudioJitterBufferRtxHandlingEnabledByRuntimeFlag())
,
        rtc_dtls_transport_(RuntimeEnabledFeatures::RTCDtlsTransportEnabled())
,
        rtc_ice_transport_extension_(RuntimeEnabledFeatures::RTCIceTransportExtensionEnabledByRuntimeFlag())
,
        rtc_jitter_buffer_delay_hint_(RuntimeEnabledFeatures::RtcJitterBufferDelayHintEnabledByRuntimeFlag())
,
        rtc_quic_transport_(RuntimeEnabledFeatures::RTCQuicTransportEnabledByRuntimeFlag())
,
        rtc_rtp_sender_parameters_(RuntimeEnabledFeatures::RTCRtpSenderParametersEnabled())
,
        rtc_sctp_transport_(RuntimeEnabledFeatures::RTCSctpTransportEnabled())
,
        rtc_stats_relative_packet_arrival_delay_(RuntimeEnabledFeatures::RTCStatsRelativePacketArrivalDelayEnabledByRuntimeFlag())
,
        rtc_unified_plan_(RuntimeEnabledFeatures::RTCUnifiedPlanEnabled())
,
        rtc_unified_plan_by_default_(RuntimeEnabledFeatures::RTCUnifiedPlanByDefaultEnabled())
,
        scripted_speech_recognition_(RuntimeEnabledFeatures::ScriptedSpeechRecognitionEnabled())
,
        scripted_speech_synthesis_(RuntimeEnabledFeatures::ScriptedSpeechSynthesisEnabled())
,
        script_streaming_on_preload_(RuntimeEnabledFeatures::ScriptStreamingOnPreloadEnabled())
,
        scroll_anchor_serialization_(RuntimeEnabledFeatures::ScrollAnchorSerializationEnabled())
,
        scroll_customization_(RuntimeEnabledFeatures::ScrollCustomizationEnabled())
,
        scroll_top_left_interop_(RuntimeEnabledFeatures::ScrollTopLeftInteropEnabled())
,
        send_beacon_throw_for_blob_with_non_simple_type_(RuntimeEnabledFeatures::SendBeaconThrowForBlobWithNonSimpleTypeEnabled())
,
        send_mouse_events_disabled_form_controls_(RuntimeEnabledFeatures::SendMouseEventsDisabledFormControlsEnabled())
,
        sensor_(RuntimeEnabledFeatures::SensorEnabled())
,
        sensor_extra_classes_(RuntimeEnabledFeatures::SensorExtraClassesEnabled())
,
        serial_(RuntimeEnabledFeatures::SerialEnabled())
,
        set_root_scroller_(RuntimeEnabledFeatures::SetRootScrollerEnabled())
,
        shadow_dom_v0_(RuntimeEnabledFeatures::ShadowDOMV0EnabledByRuntimeFlag())
,
        shadow_piercing_descendant_combinator_(RuntimeEnabledFeatures::ShadowPiercingDescendantCombinatorEnabled())
,
        shape_detection_(RuntimeEnabledFeatures::ShapeDetectionEnabled())
,
        shared_array_buffer_(RuntimeEnabledFeatures::SharedArrayBufferEnabled())
,
        shared_worker_(RuntimeEnabledFeatures::SharedWorkerEnabled())
,
        signature_based_integrity_(RuntimeEnabledFeatures::SignatureBasedIntegrityEnabledByRuntimeFlag())
,
        signed_exchange_subresource_prefetch_(RuntimeEnabledFeatures::SignedExchangeSubresourcePrefetchEnabled())
,
        skip_ad_(RuntimeEnabledFeatures::SkipAdEnabledByRuntimeFlag())
,
        skip_touch_event_filter_(RuntimeEnabledFeatures::SkipTouchEventFilterEnabled())
,
        smooth_scroll_js_intervention_(RuntimeEnabledFeatures::SmoothScrollJSInterventionEnabled())
,
        sms_receiver_(RuntimeEnabledFeatures::SmsReceiverEnabled())
,
        speech_synthesis_event_char_length_(RuntimeEnabledFeatures::SpeechSynthesisEventCharLengthEnabled())
,
        stable_blink_features_(RuntimeEnabledFeatures::StableBlinkFeaturesEnabled())
,
        stacked_css_property_animations_(RuntimeEnabledFeatures::StackedCSSPropertyAnimationsEnabled())
,
        stale_while_revalidate_(RuntimeEnabledFeatures::StaleWhileRevalidateEnabledByRuntimeFlag())
,
        storage_quota_details_(RuntimeEnabledFeatures::StorageQuotaDetailsEnabled())
,
        streams_native_(RuntimeEnabledFeatures::StreamsNativeEnabled())
,
        text_fragment_identifiers_(RuntimeEnabledFeatures::TextFragmentIdentifiersEnabled())
,
        text_underline_position_left_right_(RuntimeEnabledFeatures::TextUnderlinePositionLeftRightEnabled())
,
        timer_throttling_for_background_tabs_(RuntimeEnabledFeatures::TimerThrottlingForBackgroundTabsEnabled())
,
        timer_throttling_for_hidden_frames_(RuntimeEnabledFeatures::TimerThrottlingForHiddenFramesEnabled())
,
        touch_event_feature_detection_(RuntimeEnabledFeatures::TouchEventFeatureDetectionEnabledByRuntimeFlag())
,
        track_layout_passes_per_block_(RuntimeEnabledFeatures::TrackLayoutPassesPerBlockEnabled())
,
        transferable_streams_(RuntimeEnabledFeatures::TransferableStreamsEnabled())
,
        translate_service_(RuntimeEnabledFeatures::TranslateServiceEnabled())
,
        trusted_dom_types_(RuntimeEnabledFeatures::TrustedDOMTypesEnabledByRuntimeFlag())
,
        unclosed_form_control_is_invalid_(RuntimeEnabledFeatures::UnclosedFormControlIsInvalidEnabled())
,
        unified_pointer_capture_in_blink_(RuntimeEnabledFeatures::UnifiedPointerCaptureInBlinkEnabled())
,
        unified_touch_adjustment_(RuntimeEnabledFeatures::UnifiedTouchAdjustmentEnabled())
,
        unoptimized_image_policies_(RuntimeEnabledFeatures::UnoptimizedImagePoliciesEnabledByRuntimeFlag())
,
        update_hover_from_layout_change_at_begin_frame_(RuntimeEnabledFeatures::UpdateHoverFromLayoutChangeAtBeginFrameEnabled())
,
        update_hover_from_scroll_at_begin_frame_(RuntimeEnabledFeatures::UpdateHoverFromScrollAtBeginFrameEnabled())
,
        user_activation_api_(RuntimeEnabledFeatures::UserActivationAPIEnabled())
,
        user_activation_post_message_transfer_(RuntimeEnabledFeatures::UserActivationPostMessageTransferEnabled())
,
        user_activation_same_origin_visibility_(RuntimeEnabledFeatures::UserActivationSameOriginVisibilityEnabled())
,
        user_activation_v_2_(RuntimeEnabledFeatures::UserActivationV2Enabled())
,
        user_agent_client_hint_(RuntimeEnabledFeatures::UserAgentClientHintEnabled())
,
        v8_idle_tasks_(RuntimeEnabledFeatures::V8IdleTasksEnabled())
,
        video_auto_fullscreen_(RuntimeEnabledFeatures::VideoAutoFullscreenEnabled())
,
        video_fullscreen_detection_(RuntimeEnabledFeatures::VideoFullscreenDetectionEnabled())
,
        video_fullscreen_orientation_lock_(RuntimeEnabledFeatures::VideoFullscreenOrientationLockEnabled())
,
        video_rotate_to_fullscreen_(RuntimeEnabledFeatures::VideoRotateToFullscreenEnabled())
,
        visibility_collapse_column_(RuntimeEnabledFeatures::VisibilityCollapseColumnEnabled())
,
        wake_lock_navigator_(RuntimeEnabledFeatures::WakeLockNavigatorEnabled())
,
        wasm_code_cache_(RuntimeEnabledFeatures::WasmCodeCacheEnabled())
,
        web_animations_api_(RuntimeEnabledFeatures::WebAnimationsAPIEnabled())
,
        web_animations_svg_(RuntimeEnabledFeatures::WebAnimationsSVGEnabled())
,
        web_assembly_threads_(RuntimeEnabledFeatures::WebAssemblyThreadsEnabledByRuntimeFlag())
,
        web_auth_(RuntimeEnabledFeatures::WebAuthEnabled())
,
        web_bluetooth_(RuntimeEnabledFeatures::WebBluetoothEnabled())
,
        web_bluetooth_scanning_(RuntimeEnabledFeatures::WebBluetoothScanningEnabled())
,
        webgl2_compute_context_(RuntimeEnabledFeatures::WebGL2ComputeContextEnabled())
,
        webgl_draft_extensions_(RuntimeEnabledFeatures::WebGLDraftExtensionsEnabled())
,
        webgl_image_chromium_(RuntimeEnabledFeatures::WebGLImageChromiumEnabled())
,
        webgpu_(RuntimeEnabledFeatures::WebGPUEnabled())
,
        web_hid_(RuntimeEnabledFeatures::WebHIDEnabled())
,
        web_nfc_(RuntimeEnabledFeatures::WebNFCEnabled())
,
        web_share_(RuntimeEnabledFeatures::WebShareEnabled())
,
        web_share_v_2_(RuntimeEnabledFeatures::WebShareV2Enabled())
,
        web_usb_(RuntimeEnabledFeatures::WebUSBEnabled())
,
        web_usb_on_dedicated_workers_(RuntimeEnabledFeatures::WebUSBOnDedicatedWorkersEnabled())
,
        web_vr_(RuntimeEnabledFeatures::WebVREnabledByRuntimeFlag())
,
        web_vtt_regions_(RuntimeEnabledFeatures::WebVTTRegionsEnabled())
,
        web_xr_(RuntimeEnabledFeatures::WebXREnabledByRuntimeFlag())
,
        web_xr_hit_test_(RuntimeEnabledFeatures::WebXRHitTestEnabled())
,
        web_xr_plane_detection_(RuntimeEnabledFeatures::WebXRPlaneDetectionEnabled())
,
        worker_nosniff_block_(RuntimeEnabledFeatures::WorkerNosniffBlockEnabled())
,
        worker_nosniff_warn_(RuntimeEnabledFeatures::WorkerNosniffWarnEnabled())
,
        worker_task_queue_(RuntimeEnabledFeatures::WorkerTaskQueueEnabled())
,
        xslt_(RuntimeEnabledFeatures::XSLTEnabled())
 {}

void RuntimeEnabledFeatures::Backup::Restore() {
  RuntimeEnabledFeatures::SetAccelerated2dCanvasEnabled(accelerated_2d_canvas_);
  RuntimeEnabledFeatures::SetAccessibilityObjectModelEnabled(accessibility_object_model_);
  RuntimeEnabledFeatures::SetAdTaggingEnabled(ad_tagging_);
  RuntimeEnabledFeatures::SetAllowActivationDelegationAttrEnabled(allow_activation_delegation_attr_);
  RuntimeEnabledFeatures::SetAllowContentInitiatedDataUrlNavigationsEnabled(allow_content_initiated_data_url_navigations_);
  RuntimeEnabledFeatures::SetAnimationWorkletEnabled(animation_worklet_);
  RuntimeEnabledFeatures::SetAsyncClipboardEnabled(async_clipboard_);
  RuntimeEnabledFeatures::SetAudioOutputDevicesEnabled(audio_output_devices_);
  RuntimeEnabledFeatures::SetAudioVideoTracksEnabled(audio_video_tracks_);
  RuntimeEnabledFeatures::SetAutomationControlledEnabled(automation_controlled_);
  RuntimeEnabledFeatures::SetAutoPictureInPictureEnabled(auto_picture_in_picture_);
  RuntimeEnabledFeatures::SetAutoplayIgnoresWebAudioEnabled(autoplay_ignores_web_audio_);
  RuntimeEnabledFeatures::SetBackgroundFetchEnabled(background_fetch_);
  RuntimeEnabledFeatures::SetBackgroundVideoTrackOptimizationEnabled(background_video_track_optimization_);
  RuntimeEnabledFeatures::SetBadgingEnabled(badging_);
  RuntimeEnabledFeatures::SetBidiCaretAffinityEnabled(bidi_caret_affinity_);
  RuntimeEnabledFeatures::SetBlinkGenPropertyTreesEnabled(blink_gen_property_trees_);
  RuntimeEnabledFeatures::SetBlinkRuntimeCallStatsEnabled(blink_runtime_call_stats_);
  RuntimeEnabledFeatures::SetBloatedRendererDetectionEnabled(bloated_renderer_detection_);
  RuntimeEnabledFeatures::SetBloatedRendererDetectionSkipUptimeCheckEnabled(bloated_renderer_detection_skip_uptime_check_);
  RuntimeEnabledFeatures::SetBlobReadMethodsEnabled(blob_read_methods_);
  RuntimeEnabledFeatures::SetBlockCredentialedSubresourcesEnabled(block_credentialed_subresources_);
  RuntimeEnabledFeatures::SetBlockingDownloadsInSandboxWithoutUserActivationEnabled(blocking_downloads_in_sandbox_without_user_activation_);
  RuntimeEnabledFeatures::SetBlockMetaSetCookieEnabled(block_meta_set_cookie_);
  RuntimeEnabledFeatures::SetBuiltInModuleAllEnabled(built_in_module_all_);
  RuntimeEnabledFeatures::SetBuiltInModuleInfraEnabled(built_in_module_infra_);
  RuntimeEnabledFeatures::SetBuiltInModuleKvStorageEnabled(built_in_module_kv_storage_);
  RuntimeEnabledFeatures::SetCacheInlineScriptCodeEnabled(cache_inline_script_code_);
  RuntimeEnabledFeatures::SetCacheStorageAddAllRejectsDuplicatesEnabled(cache_storage_add_all_rejects_duplicates_);
  RuntimeEnabledFeatures::SetCallCaptureListenersAtCapturePhaseAtShadowHostsEnabled(call_capture_listeners_at_capture_phase_at_shadow_hosts_);
  RuntimeEnabledFeatures::SetCanvas2dContextLostRestoredEnabled(canvas_2d_context_lost_restored_);
  RuntimeEnabledFeatures::SetCanvas2dFixedRenderingModeEnabled(canvas_2d_fixed_rendering_mode_);
  RuntimeEnabledFeatures::SetCanvas2dImageChromiumEnabled(canvas_2d_image_chromium_);
  RuntimeEnabledFeatures::SetCanvas2dScrollPathIntoViewEnabled(canvas_2d_scroll_path_into_view_);
  RuntimeEnabledFeatures::SetCanvasColorManagementEnabled(canvas_color_management_);
  RuntimeEnabledFeatures::SetCanvasHitRegionEnabled(canvas_hit_region_);
  RuntimeEnabledFeatures::SetCanvasImageSmoothingEnabled(canvas_image_smoothing_);
  RuntimeEnabledFeatures::SetClickRetargettingEnabled(click_retargetting_);
  RuntimeEnabledFeatures::SetClientPlaceholdersForServerLoFiEnabled(client_placeholders_for_server_lo_fi_);
  RuntimeEnabledFeatures::SetCompositeAfterPaintEnabled(composite_after_paint_);
  RuntimeEnabledFeatures::SetCompositedSelectionUpdateEnabled(composited_selection_update_);
  RuntimeEnabledFeatures::SetCompositorTouchActionEnabled(compositor_touch_action_);
  RuntimeEnabledFeatures::SetComputedAccessibilityInfoEnabled(computed_accessibility_info_);
  RuntimeEnabledFeatures::SetContactsManagerEnabled(contacts_manager_);
  RuntimeEnabledFeatures::SetContextMenuEnabled(context_menu_);
  RuntimeEnabledFeatures::SetCookieStoreEnabled(cookie_store_);
  RuntimeEnabledFeatures::SetCorsRFC1918Enabled(cors_rfc_1918_);
  RuntimeEnabledFeatures::SetCSS3TextEnabled(css_3_text_);
  RuntimeEnabledFeatures::SetCSSAdditiveAnimationsEnabled(css_additive_animations_);
  RuntimeEnabledFeatures::SetCSSAltTextEnabled(css_alt_text_);
  RuntimeEnabledFeatures::SetCSSBackdropFilterEnabled(css_backdrop_filter_);
  RuntimeEnabledFeatures::SetCSSCalcAsIntEnabled(css_calc_as_int_);
  RuntimeEnabledFeatures::SetCSSFocusVisibleEnabled(css_focus_visible_);
  RuntimeEnabledFeatures::SetCSSFontFeatureValuesEnabled(css_font_feature_values_);
  RuntimeEnabledFeatures::SetCSSFontSizeAdjustEnabled(css_font_size_adjust_);
  RuntimeEnabledFeatures::SetCSSHexAlphaColorEnabled(css_hex_alpha_color_);
  RuntimeEnabledFeatures::SetCSSIndependentTransformPropertiesEnabled(css_independent_transform_properties_);
  RuntimeEnabledFeatures::SetCSSLayoutAPIEnabled(css_layout_api_);
  RuntimeEnabledFeatures::SetCSSLogicalEnabled(css_logical_);
  RuntimeEnabledFeatures::SetCSSMaskSourceTypeEnabled(css_mask_source_type_);
  RuntimeEnabledFeatures::SetCSSOffsetPathRayEnabled(css_offset_path_ray_);
  RuntimeEnabledFeatures::SetCSSOffsetPathRayContainEnabled(css_offset_path_ray_contain_);
  RuntimeEnabledFeatures::SetCSSOffsetPositionAnchorEnabled(css_offset_position_anchor_);
  RuntimeEnabledFeatures::SetCSSPaintAPIArgumentsEnabled(css_paint_api_arguments_);
  RuntimeEnabledFeatures::SetCSSPartPseudoElementEnabled(css_part_pseudo_element_);
  RuntimeEnabledFeatures::SetCSSPictureInPictureEnabled(css_picture_in_picture_);
  RuntimeEnabledFeatures::SetCSSPseudoIsEnabled(css_pseudo_is_);
  RuntimeEnabledFeatures::SetCSSPseudoWhereEnabled(css_pseudo_where_);
  RuntimeEnabledFeatures::SetCSSSnapSizeEnabled(css_snap_size_);
  RuntimeEnabledFeatures::SetCSSVariables2Enabled(css_variables_2_);
  RuntimeEnabledFeatures::SetCSSVariables2ImageValuesEnabled(css_variables_2_image_values_);
  RuntimeEnabledFeatures::SetCSSVariables2TransformValuesEnabled(css_variables_2_transform_values_);
  RuntimeEnabledFeatures::SetCSSViewportEnabled(css_viewport_);
  RuntimeEnabledFeatures::SetCustomElementDefaultStyleEnabled(custom_element_default_style_);
  RuntimeEnabledFeatures::SetCustomElementsV0Enabled(custom_elements_v0_);
  RuntimeEnabledFeatures::SetCustomUserTimingEnabled(custom_user_timing_);
  RuntimeEnabledFeatures::SetDatabaseEnabled(database_);
  RuntimeEnabledFeatures::SetDecodeToYUVEnabled(decode_to_yuv_);
  RuntimeEnabledFeatures::SetDesktopCaptureDisableLocalEchoControlEnabled(desktop_capture_disable_local_echo_control_);
  RuntimeEnabledFeatures::SetDisableHardwareNoiseSuppressionEnabled(disable_hardware_noise_suppression_);
  RuntimeEnabledFeatures::SetDisplayCutoutAPIEnabled(display_cutout_api_);
  RuntimeEnabledFeatures::SetDisplayLockingEnabled(display_locking_);
  RuntimeEnabledFeatures::SetDocumentCookieEnabled(document_cookie_);
  RuntimeEnabledFeatures::SetDocumentDomainEnabled(document_domain_);
  RuntimeEnabledFeatures::SetDocumentWriteEnabled(document_write_);
  RuntimeEnabledFeatures::SetEditingNGEnabled(editing_ng_);
  RuntimeEnabledFeatures::SetElementInternalsEnabled(element_internals_);
  RuntimeEnabledFeatures::SetElementTimingEnabled(element_timing_);
  RuntimeEnabledFeatures::SetEncryptedMediaEncryptionSchemeQueryEnabled(encrypted_media_encryption_scheme_query_);
  RuntimeEnabledFeatures::SetEncryptedMediaHdcpPolicyCheckEnabled(encrypted_media_hdcp_policy_check_);
  RuntimeEnabledFeatures::SetEncryptedMediaPersistentUsageRecordSessionEnabled(encrypted_media_persistent_usage_record_session_);
  RuntimeEnabledFeatures::SetEventTimingEnabled(event_timing_);
  RuntimeEnabledFeatures::SetExecCommandInJavaScriptEnabled(exec_command_in_java_script_);
  RuntimeEnabledFeatures::SetExpensiveBackgroundTimerThrottlingEnabled(expensive_background_timer_throttling_);
  RuntimeEnabledFeatures::SetExperimentalContentSecurityPolicyFeaturesEnabled(experimental_content_security_policy_features_);
  RuntimeEnabledFeatures::SetExperimentalIsInputPendingEnabled(experimental_is_input_pending_);
  RuntimeEnabledFeatures::SetExperimentalProductivityFeaturesEnabled(experimental_productivity_features_);
  RuntimeEnabledFeatures::SetExtendedTextMetricsEnabled(extended_text_metrics_);
  RuntimeEnabledFeatures::SetExtraWebGLVideoTextureMetadataEnabled(extra_webgl_video_texture_metadata_);
  RuntimeEnabledFeatures::SetFallbackCursorModeEnabled(fallback_cursor_mode_);
  RuntimeEnabledFeatures::SetFastBorderRadiusEnabled(fast_border_radius_);
  RuntimeEnabledFeatures::SetFastFlatTreeTraversalEnabled(fast_flat_tree_traversal_);
  RuntimeEnabledFeatures::SetFastMobileScrollingEnabled(fast_mobile_scrolling_);
  RuntimeEnabledFeatures::SetFeaturePolicyForSandboxEnabled(feature_policy_for_sandbox_);
  RuntimeEnabledFeatures::SetFeaturePolicyJavaScriptInterfaceEnabled(feature_policy_java_script_interface_);
  RuntimeEnabledFeatures::SetFeaturePolicyReportingEnabled(feature_policy_reporting_);
  RuntimeEnabledFeatures::SetFeaturePolicyVibrateFeatureEnabled(feature_policy_vibrate_feature_);
  RuntimeEnabledFeatures::SetFetchMetadataEnabled(fetch_metadata_);
  RuntimeEnabledFeatures::SetFetchMetadataDestinationEnabled(fetch_metadata_destination_);
  RuntimeEnabledFeatures::SetFileSystemEnabled(file_system_);
  RuntimeEnabledFeatures::SetFirstContentfulPaintPlusPlusEnabled(first_contentful_paint_plus_plus_);
  RuntimeEnabledFeatures::SetFocuslessSpatialNavigationEnabled(focusless_spatial_navigation_);
  RuntimeEnabledFeatures::SetFontSrcLocalMatchingEnabled(font_src_local_matching_);
  RuntimeEnabledFeatures::SetForbidSyncXHRInPageDismissalEnabled(forbid_sync_xhr_in_page_dismissal_);
  RuntimeEnabledFeatures::SetForceOverlayFullscreenVideoEnabled(force_overlay_fullscreen_video_);
  RuntimeEnabledFeatures::SetForceSynchronousHTMLParsingEnabled(force_synchronous_html_parsing_);
  RuntimeEnabledFeatures::SetForceTallerSelectPopupEnabled(force_taller_select_popup_);
  RuntimeEnabledFeatures::SetFormAssociatedCustomElementsEnabled(form_associated_custom_elements_);
  RuntimeEnabledFeatures::SetFormDataEventEnabled(form_data_event_);
  RuntimeEnabledFeatures::SetFractionalMouseEventEnabled(fractional_mouse_event_);
  RuntimeEnabledFeatures::SetFractionalScrollOffsetsEnabled(fractional_scroll_offsets_);
  RuntimeEnabledFeatures::SetFreezeFramesOnVisibilityEnabled(freeze_frames_on_visibility_);
  RuntimeEnabledFeatures::SetGamepadButtonAxisEventsEnabled(gamepad_button_axis_events_);
  RuntimeEnabledFeatures::SetGetDisplayMediaEnabled(get_display_media_);
  RuntimeEnabledFeatures::SetHeapCompactionEnabled(heap_compaction_);
  RuntimeEnabledFeatures::SetHeapConcurrentMarkingEnabled(heap_concurrent_marking_);
  RuntimeEnabledFeatures::SetHeapIncrementalMarkingEnabled(heap_incremental_marking_);
  RuntimeEnabledFeatures::SetHeapIncrementalMarkingStressEnabled(heap_incremental_marking_stress_);
  RuntimeEnabledFeatures::SetHrefTranslateEnabled(href_translate_);
  RuntimeEnabledFeatures::SetHTMLImportsEnabled(html_imports_);
  RuntimeEnabledFeatures::SetHTMLImportsOnlyChromeEnabled(html_imports_only_chrome_);
  RuntimeEnabledFeatures::SetHTMLImportsStyleApplicationEnabled(html_imports_style_application_);
  RuntimeEnabledFeatures::SetIDBObserverEnabled(idb_observer_);
  RuntimeEnabledFeatures::SetIDBTransactionCommitEnabled(idb_transaction_commit_);
  RuntimeEnabledFeatures::SetIdleDetectionEnabled(idle_detection_);
  RuntimeEnabledFeatures::SetIgnoreCrossOriginWindowWhenNamedAccessOnWindowEnabled(ignore_cross_origin_window_when_named_access_on_window_);
  RuntimeEnabledFeatures::SetImageOrientationEnabled(image_orientation_);
  RuntimeEnabledFeatures::SetImplicitRootScrollerEnabled(implicit_root_scroller_);
  RuntimeEnabledFeatures::SetInertAttributeEnabled(inert_attribute_);
  RuntimeEnabledFeatures::SetInputMultipleFieldsUIEnabled(input_multiple_fields_ui_);
  RuntimeEnabledFeatures::SetInstalledAppEnabled(installed_app_);
  RuntimeEnabledFeatures::SetIntersectionObserverV2Enabled(intersection_observer_v_2_);
  RuntimeEnabledFeatures::SetInvisibleDOMEnabled(invisible_dom_);
  RuntimeEnabledFeatures::SetIsolatedCodeCacheEnabled(isolated_code_cache_);
  RuntimeEnabledFeatures::SetIsolatedWorldCSPEnabled(isolated_world_csp_);
  RuntimeEnabledFeatures::SetJankTrackingEnabled(jank_tracking_);
  RuntimeEnabledFeatures::SetJankTrackingSweepLineEnabled(jank_tracking_sweep_line_);
  RuntimeEnabledFeatures::SetKeyboardFocusableScrollersEnabled(keyboard_focusable_scrollers_);
  RuntimeEnabledFeatures::SetLangAttributeAwareFormControlUIEnabled(lang_attribute_aware_form_control_ui_);
  RuntimeEnabledFeatures::SetLangClientHintHeaderEnabled(lang_client_hint_header_);
  RuntimeEnabledFeatures::SetLayoutJankAPIEnabled(layout_jank_api_);
  RuntimeEnabledFeatures::SetLayoutNGEnabled(layout_ng_);
  RuntimeEnabledFeatures::SetLayoutNGBlockFragmentationEnabled(layout_ng_block_fragmentation_);
  RuntimeEnabledFeatures::SetLayoutNGFieldsetEnabled(layout_ng_fieldset_);
  RuntimeEnabledFeatures::SetLayoutNGFlexBoxEnabled(layout_ng_flex_box_);
  RuntimeEnabledFeatures::SetLayoutNGFragmentCachingEnabled(layout_ng_fragment_caching_);
  RuntimeEnabledFeatures::SetLazyFrameLoadingEnabled(lazy_frame_loading_);
  RuntimeEnabledFeatures::SetLazyFrameVisibleLoadTimeMetricsEnabled(lazy_frame_visible_load_time_metrics_);
  RuntimeEnabledFeatures::SetLazyImageLoadingEnabled(lazy_image_loading_);
  RuntimeEnabledFeatures::SetLazyImageVisibleLoadTimeMetricsEnabled(lazy_image_visible_load_time_metrics_);
  RuntimeEnabledFeatures::SetLazyInitializeMediaControlsEnabled(lazy_initialize_media_controls_);
  RuntimeEnabledFeatures::SetLegacyPerformanceMemoryCountersEnabled(legacy_performance_memory_counters_);
  RuntimeEnabledFeatures::SetLongTaskV2Enabled(long_task_v_2_);
  RuntimeEnabledFeatures::SetManualSlottingEnabled(manual_slotting_);
  RuntimeEnabledFeatures::SetMediaCapabilitiesEncodingInfoEnabled(media_capabilities_encoding_info_);
  RuntimeEnabledFeatures::SetMediaCapabilitiesEncryptedMediaEnabled(media_capabilities_encrypted_media_);
  RuntimeEnabledFeatures::SetMediaCaptureEnabled(media_capture_);
  RuntimeEnabledFeatures::SetMediaCaptureDepthVideoKindEnabled(media_capture_depth_video_kind_);
  RuntimeEnabledFeatures::SetMediaCastOverlayButtonEnabled(media_cast_overlay_button_);
  RuntimeEnabledFeatures::SetMediaControlsExpandGestureEnabled(media_controls_expand_gesture_);
  RuntimeEnabledFeatures::SetMediaControlsOverlayPlayButtonEnabled(media_controls_overlay_play_button_);
  RuntimeEnabledFeatures::SetMediaDocumentDownloadButtonEnabled(media_document_download_button_);
  RuntimeEnabledFeatures::SetMediaEngagementBypassAutoplayPoliciesEnabled(media_engagement_bypass_autoplay_policies_);
  RuntimeEnabledFeatures::SetMediaQueryPrefersColorSchemeEnabled(media_query_prefers_color_scheme_);
  RuntimeEnabledFeatures::SetMediaQueryShapeEnabled(media_query_shape_);
  RuntimeEnabledFeatures::SetMediaSessionEnabled(media_session_);
  RuntimeEnabledFeatures::SetMediaSourceExperimentalEnabled(media_source_experimental_);
  RuntimeEnabledFeatures::SetMediaSourceNewAbortAndDurationEnabled(media_source_new_abort_and_duration_);
  RuntimeEnabledFeatures::SetMediaStreamTrackContentHintEnabled(media_stream_track_content_hint_);
  RuntimeEnabledFeatures::SetMergeBlockingNonBlockingPoolsEnabled(merge_blocking_non_blocking_pools_);
  RuntimeEnabledFeatures::SetMetaColorSchemeEnabled(meta_color_scheme_);
  RuntimeEnabledFeatures::SetMiddleClickAutoscrollEnabled(middle_click_autoscroll_);
  RuntimeEnabledFeatures::SetMimeHandlerViewInCrossProcessFrameEnabled(mime_handler_view_in_cross_process_frame_);
  RuntimeEnabledFeatures::SetMobileLayoutThemeEnabled(mobile_layout_theme_);
  RuntimeEnabledFeatures::SetModernMediaControlsEnabled(modern_media_controls_);
  RuntimeEnabledFeatures::SetModuleDedicatedWorkerEnabled(module_dedicated_worker_);
  RuntimeEnabledFeatures::SetModuleServiceWorkerEnabled(module_service_worker_);
  RuntimeEnabledFeatures::SetMojoJSEnabled(mojo_js_);
  RuntimeEnabledFeatures::SetMojoJSTestEnabled(mojo_js_test_);
  RuntimeEnabledFeatures::SetMovementXYInBlinkEnabled(movement_xy_in_blink_);
  RuntimeEnabledFeatures::SetMuteButtonEnabled(mute_button_);
  RuntimeEnabledFeatures::SetNativeFileSystemEnabled(native_file_system_);
  RuntimeEnabledFeatures::SetNativeStreamsEnabled(native_streams_);
  RuntimeEnabledFeatures::SetNavigatorContentUtilsEnabled(navigator_content_utils_);
  RuntimeEnabledFeatures::SetNavigatorDeviceMemoryEnabled(navigator_device_memory_);
  RuntimeEnabledFeatures::SetNavigatorLanguageInInsecureContextEnabled(navigator_language_in_insecure_context_);
  RuntimeEnabledFeatures::SetNetInfoDownlinkMaxEnabled(net_info_downlink_max_);
  RuntimeEnabledFeatures::SetNetworkServiceEnabled(network_service_);
  RuntimeEnabledFeatures::SetNewRemotePlaybackPipelineEnabled(new_remote_playback_pipeline_);
  RuntimeEnabledFeatures::SetNoIdleEncodingForWebTestsEnabled(no_idle_encoding_for_web_tests_);
  RuntimeEnabledFeatures::SetNotificationConstructorEnabled(notification_constructor_);
  RuntimeEnabledFeatures::SetNotificationContentImageEnabled(notification_content_image_);
  RuntimeEnabledFeatures::SetNotificationsEnabled(notifications_);
  RuntimeEnabledFeatures::SetNotificationTriggersEnabled(notification_triggers_);
  RuntimeEnabledFeatures::SetOffMainThreadCSSPaintEnabled(off_main_thread_css_paint_);
  RuntimeEnabledFeatures::SetOffscreenCanvasEnabled(offscreen_canvas_);
  RuntimeEnabledFeatures::SetOffscreenCanvasCommitEnabled(offscreen_canvas_commit_);
  RuntimeEnabledFeatures::SetOffscreenCanvasTextEnabled(offscreen_canvas_text_);
  RuntimeEnabledFeatures::SetOnDeviceChangeEnabled(on_device_change_);
  RuntimeEnabledFeatures::SetOrientationEventEnabled(orientation_event_);
  RuntimeEnabledFeatures::SetOriginTrialsEnabled(origin_trials_);
  RuntimeEnabledFeatures::SetOriginTrialsSampleAPIEnabled(origin_trials_sample_api_);
  RuntimeEnabledFeatures::SetOriginTrialsSampleAPIDependentEnabled(origin_trials_sample_api_dependent_);
  RuntimeEnabledFeatures::SetOriginTrialsSampleAPIImpliedEnabled(origin_trials_sample_api_implied_);
  RuntimeEnabledFeatures::SetOriginTrialsSampleAPIInvalidOSEnabled(origin_trials_sample_api_invalid_os_);
  RuntimeEnabledFeatures::SetOriginTrialsSampleAPINavigationEnabled(origin_trials_sample_api_navigation_);
  RuntimeEnabledFeatures::SetOutOfBlinkCorsEnabled(out_of_blink_cors_);
  RuntimeEnabledFeatures::SetOverflowIconsForMediaControlsEnabled(overflow_icons_for_media_controls_);
  RuntimeEnabledFeatures::SetOverlayScrollbarsEnabled(overlay_scrollbars_);
  RuntimeEnabledFeatures::SetOverscrollCustomizationEnabled(overscroll_customization_);
  RuntimeEnabledFeatures::SetPageLifecycleTransitionsOptInEnabled(page_lifecycle_transitions_opt_in_);
  RuntimeEnabledFeatures::SetPageLifecycleTransitionsOptOutEnabled(page_lifecycle_transitions_opt_out_);
  RuntimeEnabledFeatures::SetPagePopupEnabled(page_popup_);
  RuntimeEnabledFeatures::SetPaintUnderInvalidationCheckingEnabled(paint_under_invalidation_checking_);
  RuntimeEnabledFeatures::SetPassiveDocumentEventListenersEnabled(passive_document_event_listeners_);
  RuntimeEnabledFeatures::SetPassiveDocumentWheelEventListenersEnabled(passive_document_wheel_event_listeners_);
  RuntimeEnabledFeatures::SetPassPaintVisualRectToCompositorEnabled(pass_paint_visual_rect_to_compositor_);
  RuntimeEnabledFeatures::SetPaymentAppEnabled(payment_app_);
  RuntimeEnabledFeatures::SetPaymentHandlerChangePaymentMethodEnabled(payment_handler_change_payment_method_);
  RuntimeEnabledFeatures::SetPaymentMethodChangeEventEnabled(payment_method_change_event_);
  RuntimeEnabledFeatures::SetPaymentRequestEnabled(payment_request_);
  RuntimeEnabledFeatures::SetPaymentRequestHasEnrolledInstrumentEnabled(payment_request_has_enrolled_instrument_);
  RuntimeEnabledFeatures::SetPaymentRequestMerchantValidationEventEnabled(payment_request_merchant_validation_event_);
  RuntimeEnabledFeatures::SetPaymentRetryEnabled(payment_retry_);
  RuntimeEnabledFeatures::SetPerformanceManagerInstrumentationEnabled(performance_manager_instrumentation_);
  RuntimeEnabledFeatures::SetPerformanceObserverBufferedFlagEnabled(performance_observer_buffered_flag_);
  RuntimeEnabledFeatures::SetPeriodicBackgroundSyncEnabled(periodic_background_sync_);
  RuntimeEnabledFeatures::SetPerMethodCanMakePaymentQuotaEnabled(per_method_can_make_payment_quota_);
  RuntimeEnabledFeatures::SetPermissionDelegationEnabled(permission_delegation_);
  RuntimeEnabledFeatures::SetPermissionsEnabled(permissions_);
  RuntimeEnabledFeatures::SetPermissionsRequestRevokeEnabled(permissions_request_revoke_);
  RuntimeEnabledFeatures::SetPictureInPictureEnabled(picture_in_picture_);
  RuntimeEnabledFeatures::SetPictureInPictureAPIEnabled(picture_in_picture_api_);
  RuntimeEnabledFeatures::SetPictureInPictureV2Enabled(picture_in_picture_v_2_);
  RuntimeEnabledFeatures::SetPointerRawUpdateEnabled(pointer_raw_update_);
  RuntimeEnabledFeatures::SetPortalsEnabled(portals_);
  RuntimeEnabledFeatures::SetPostAnimationFrameEnabled(post_animation_frame_);
  RuntimeEnabledFeatures::SetPreciseMemoryInfoEnabled(precise_memory_info_);
  RuntimeEnabledFeatures::SetPredictedEventsEnabled(predicted_events_);
  RuntimeEnabledFeatures::SetPrefixedVideoFullscreenEnabled(prefixed_video_fullscreen_);
  RuntimeEnabledFeatures::SetPresentationEnabled(presentation_);
  RuntimeEnabledFeatures::SetPrintBrowserEnabled(print_browser_);
  RuntimeEnabledFeatures::SetPriorityHintsEnabled(priority_hints_);
  RuntimeEnabledFeatures::SetPushMessagingEnabled(push_messaging_);
  RuntimeEnabledFeatures::SetRasterInducingScrollEnabled(raster_inducing_scroll_);
  RuntimeEnabledFeatures::SetReducedReferrerGranularityEnabled(reduced_referrer_granularity_);
  RuntimeEnabledFeatures::SetRemotePlaybackEnabled(remote_playback_);
  RuntimeEnabledFeatures::SetRemotePlaybackBackendEnabled(remote_playback_backend_);
  RuntimeEnabledFeatures::SetRenderingPipelineThrottlingEnabled(rendering_pipeline_throttling_);
  RuntimeEnabledFeatures::SetResourceLoadSchedulerEnabled(resource_load_scheduler_);
  RuntimeEnabledFeatures::SetRestrictAppCacheToSecureContextsEnabled(restrict_app_cache_to_secure_contexts_);
  RuntimeEnabledFeatures::SetRestrictDeviceSensorEventsToSecureContextsEnabled(restrict_device_sensor_events_to_secure_contexts_);
  RuntimeEnabledFeatures::SetRestrictLazyFrameLoadingToDataSaverEnabled(restrict_lazy_frame_loading_to_data_saver_);
  RuntimeEnabledFeatures::SetRestrictLazyImageLoadingToDataSaverEnabled(restrict_lazy_image_loading_to_data_saver_);
  RuntimeEnabledFeatures::SetRtcAudioJitterBufferMaxPacketsEnabled(rtc_audio_jitter_buffer_max_packets_);
  RuntimeEnabledFeatures::SetRtcAudioJitterBufferRtxHandlingEnabled(rtc_audio_jitter_buffer_rtx_handling_);
  RuntimeEnabledFeatures::SetRTCDtlsTransportEnabled(rtc_dtls_transport_);
  RuntimeEnabledFeatures::SetRTCIceTransportExtensionEnabled(rtc_ice_transport_extension_);
  RuntimeEnabledFeatures::SetRtcJitterBufferDelayHintEnabled(rtc_jitter_buffer_delay_hint_);
  RuntimeEnabledFeatures::SetRTCQuicTransportEnabled(rtc_quic_transport_);
  RuntimeEnabledFeatures::SetRTCRtpSenderParametersEnabled(rtc_rtp_sender_parameters_);
  RuntimeEnabledFeatures::SetRTCSctpTransportEnabled(rtc_sctp_transport_);
  RuntimeEnabledFeatures::SetRTCStatsRelativePacketArrivalDelayEnabled(rtc_stats_relative_packet_arrival_delay_);
  RuntimeEnabledFeatures::SetRTCUnifiedPlanEnabled(rtc_unified_plan_);
  RuntimeEnabledFeatures::SetRTCUnifiedPlanByDefaultEnabled(rtc_unified_plan_by_default_);
  RuntimeEnabledFeatures::SetScriptedSpeechRecognitionEnabled(scripted_speech_recognition_);
  RuntimeEnabledFeatures::SetScriptedSpeechSynthesisEnabled(scripted_speech_synthesis_);
  RuntimeEnabledFeatures::SetScriptStreamingOnPreloadEnabled(script_streaming_on_preload_);
  RuntimeEnabledFeatures::SetScrollAnchorSerializationEnabled(scroll_anchor_serialization_);
  RuntimeEnabledFeatures::SetScrollCustomizationEnabled(scroll_customization_);
  RuntimeEnabledFeatures::SetScrollTopLeftInteropEnabled(scroll_top_left_interop_);
  RuntimeEnabledFeatures::SetSendBeaconThrowForBlobWithNonSimpleTypeEnabled(send_beacon_throw_for_blob_with_non_simple_type_);
  RuntimeEnabledFeatures::SetSendMouseEventsDisabledFormControlsEnabled(send_mouse_events_disabled_form_controls_);
  RuntimeEnabledFeatures::SetSensorEnabled(sensor_);
  RuntimeEnabledFeatures::SetSensorExtraClassesEnabled(sensor_extra_classes_);
  RuntimeEnabledFeatures::SetSerialEnabled(serial_);
  RuntimeEnabledFeatures::SetSetRootScrollerEnabled(set_root_scroller_);
  RuntimeEnabledFeatures::SetShadowDOMV0Enabled(shadow_dom_v0_);
  RuntimeEnabledFeatures::SetShadowPiercingDescendantCombinatorEnabled(shadow_piercing_descendant_combinator_);
  RuntimeEnabledFeatures::SetShapeDetectionEnabled(shape_detection_);
  RuntimeEnabledFeatures::SetSharedArrayBufferEnabled(shared_array_buffer_);
  RuntimeEnabledFeatures::SetSharedWorkerEnabled(shared_worker_);
  RuntimeEnabledFeatures::SetSignatureBasedIntegrityEnabled(signature_based_integrity_);
  RuntimeEnabledFeatures::SetSignedExchangeSubresourcePrefetchEnabled(signed_exchange_subresource_prefetch_);
  RuntimeEnabledFeatures::SetSkipAdEnabled(skip_ad_);
  RuntimeEnabledFeatures::SetSkipTouchEventFilterEnabled(skip_touch_event_filter_);
  RuntimeEnabledFeatures::SetSmoothScrollJSInterventionEnabled(smooth_scroll_js_intervention_);
  RuntimeEnabledFeatures::SetSmsReceiverEnabled(sms_receiver_);
  RuntimeEnabledFeatures::SetSpeechSynthesisEventCharLengthEnabled(speech_synthesis_event_char_length_);
  RuntimeEnabledFeatures::SetStableBlinkFeaturesEnabled(stable_blink_features_);
  RuntimeEnabledFeatures::SetStackedCSSPropertyAnimationsEnabled(stacked_css_property_animations_);
  RuntimeEnabledFeatures::SetStaleWhileRevalidateEnabled(stale_while_revalidate_);
  RuntimeEnabledFeatures::SetStorageQuotaDetailsEnabled(storage_quota_details_);
  RuntimeEnabledFeatures::SetStreamsNativeEnabled(streams_native_);
  RuntimeEnabledFeatures::SetTextFragmentIdentifiersEnabled(text_fragment_identifiers_);
  RuntimeEnabledFeatures::SetTextUnderlinePositionLeftRightEnabled(text_underline_position_left_right_);
  RuntimeEnabledFeatures::SetTimerThrottlingForBackgroundTabsEnabled(timer_throttling_for_background_tabs_);
  RuntimeEnabledFeatures::SetTimerThrottlingForHiddenFramesEnabled(timer_throttling_for_hidden_frames_);
  RuntimeEnabledFeatures::SetTouchEventFeatureDetectionEnabled(touch_event_feature_detection_);
  RuntimeEnabledFeatures::SetTrackLayoutPassesPerBlockEnabled(track_layout_passes_per_block_);
  RuntimeEnabledFeatures::SetTransferableStreamsEnabled(transferable_streams_);
  RuntimeEnabledFeatures::SetTranslateServiceEnabled(translate_service_);
  RuntimeEnabledFeatures::SetTrustedDOMTypesEnabled(trusted_dom_types_);
  RuntimeEnabledFeatures::SetUnclosedFormControlIsInvalidEnabled(unclosed_form_control_is_invalid_);
  RuntimeEnabledFeatures::SetUnifiedPointerCaptureInBlinkEnabled(unified_pointer_capture_in_blink_);
  RuntimeEnabledFeatures::SetUnifiedTouchAdjustmentEnabled(unified_touch_adjustment_);
  RuntimeEnabledFeatures::SetUnoptimizedImagePoliciesEnabled(unoptimized_image_policies_);
  RuntimeEnabledFeatures::SetUpdateHoverFromLayoutChangeAtBeginFrameEnabled(update_hover_from_layout_change_at_begin_frame_);
  RuntimeEnabledFeatures::SetUpdateHoverFromScrollAtBeginFrameEnabled(update_hover_from_scroll_at_begin_frame_);
  RuntimeEnabledFeatures::SetUserActivationAPIEnabled(user_activation_api_);
  RuntimeEnabledFeatures::SetUserActivationPostMessageTransferEnabled(user_activation_post_message_transfer_);
  RuntimeEnabledFeatures::SetUserActivationSameOriginVisibilityEnabled(user_activation_same_origin_visibility_);
  RuntimeEnabledFeatures::SetUserActivationV2Enabled(user_activation_v_2_);
  RuntimeEnabledFeatures::SetUserAgentClientHintEnabled(user_agent_client_hint_);
  RuntimeEnabledFeatures::SetV8IdleTasksEnabled(v8_idle_tasks_);
  RuntimeEnabledFeatures::SetVideoAutoFullscreenEnabled(video_auto_fullscreen_);
  RuntimeEnabledFeatures::SetVideoFullscreenDetectionEnabled(video_fullscreen_detection_);
  RuntimeEnabledFeatures::SetVideoFullscreenOrientationLockEnabled(video_fullscreen_orientation_lock_);
  RuntimeEnabledFeatures::SetVideoRotateToFullscreenEnabled(video_rotate_to_fullscreen_);
  RuntimeEnabledFeatures::SetVisibilityCollapseColumnEnabled(visibility_collapse_column_);
  RuntimeEnabledFeatures::SetWakeLockNavigatorEnabled(wake_lock_navigator_);
  RuntimeEnabledFeatures::SetWasmCodeCacheEnabled(wasm_code_cache_);
  RuntimeEnabledFeatures::SetWebAnimationsAPIEnabled(web_animations_api_);
  RuntimeEnabledFeatures::SetWebAnimationsSVGEnabled(web_animations_svg_);
  RuntimeEnabledFeatures::SetWebAssemblyThreadsEnabled(web_assembly_threads_);
  RuntimeEnabledFeatures::SetWebAuthEnabled(web_auth_);
  RuntimeEnabledFeatures::SetWebBluetoothEnabled(web_bluetooth_);
  RuntimeEnabledFeatures::SetWebBluetoothScanningEnabled(web_bluetooth_scanning_);
  RuntimeEnabledFeatures::SetWebGL2ComputeContextEnabled(webgl2_compute_context_);
  RuntimeEnabledFeatures::SetWebGLDraftExtensionsEnabled(webgl_draft_extensions_);
  RuntimeEnabledFeatures::SetWebGLImageChromiumEnabled(webgl_image_chromium_);
  RuntimeEnabledFeatures::SetWebGPUEnabled(webgpu_);
  RuntimeEnabledFeatures::SetWebHIDEnabled(web_hid_);
  RuntimeEnabledFeatures::SetWebNFCEnabled(web_nfc_);
  RuntimeEnabledFeatures::SetWebShareEnabled(web_share_);
  RuntimeEnabledFeatures::SetWebShareV2Enabled(web_share_v_2_);
  RuntimeEnabledFeatures::SetWebUSBEnabled(web_usb_);
  RuntimeEnabledFeatures::SetWebUSBOnDedicatedWorkersEnabled(web_usb_on_dedicated_workers_);
  RuntimeEnabledFeatures::SetWebVREnabled(web_vr_);
  RuntimeEnabledFeatures::SetWebVTTRegionsEnabled(web_vtt_regions_);
  RuntimeEnabledFeatures::SetWebXREnabled(web_xr_);
  RuntimeEnabledFeatures::SetWebXRHitTestEnabled(web_xr_hit_test_);
  RuntimeEnabledFeatures::SetWebXRPlaneDetectionEnabled(web_xr_plane_detection_);
  RuntimeEnabledFeatures::SetWorkerNosniffBlockEnabled(worker_nosniff_block_);
  RuntimeEnabledFeatures::SetWorkerNosniffWarnEnabled(worker_nosniff_warn_);
  RuntimeEnabledFeatures::SetWorkerTaskQueueEnabled(worker_task_queue_);
  RuntimeEnabledFeatures::SetXSLTEnabled(xslt_);
}

void RuntimeEnabledFeatures::SetStableFeaturesEnabled(bool enable) {
  SetAccelerated2dCanvasEnabled(enable);
  SetAllowContentInitiatedDataUrlNavigationsEnabled(enable);
  SetBackgroundFetchEnabled(enable);
  SetBackgroundVideoTrackOptimizationEnabled(enable);
  SetBlinkGenPropertyTreesEnabled(enable);
  SetBlobReadMethodsEnabled(enable);
  SetBlockCredentialedSubresourcesEnabled(enable);
  SetBlockMetaSetCookieEnabled(enable);
  SetCacheStorageAddAllRejectsDuplicatesEnabled(enable);
  SetCallCaptureListenersAtCapturePhaseAtShadowHostsEnabled(enable);
  SetCSSHexAlphaColorEnabled(enable);
  SetCSSPartPseudoElementEnabled(enable);
  SetCSSPictureInPictureEnabled(enable);
  SetCustomElementsV0Enabled(enable);
  SetDatabaseEnabled(enable);
  SetEncryptedMediaHdcpPolicyCheckEnabled(enable);
  SetExpensiveBackgroundTimerThrottlingEnabled(enable);
  SetFastFlatTreeTraversalEnabled(enable);
  SetFeaturePolicyJavaScriptInterfaceEnabled(enable);
  SetFetchMetadataEnabled(enable);
  SetFileSystemEnabled(enable);
  SetGetDisplayMediaEnabled(enable);
  SetHeapCompactionEnabled(enable);
  SetHeapIncrementalMarkingEnabled(enable);
  SetHTMLImportsEnabled(enable);
  SetHTMLImportsStyleApplicationEnabled(enable);
  SetIDBTransactionCommitEnabled(enable);
  SetIntersectionObserverV2Enabled(enable);
  SetJankTrackingEnabled(enable);
  SetMediaQueryPrefersColorSchemeEnabled(enable);
  SetMediaSessionEnabled(enable);
  SetMediaStreamTrackContentHintEnabled(enable);
  SetNavigatorDeviceMemoryEnabled(enable);
  SetNavigatorLanguageInInsecureContextEnabled(enable);
  SetNotificationsEnabled(enable);
  SetOffscreenCanvasEnabled(enable);
  SetOffscreenCanvasTextEnabled(enable);
  SetOriginTrialsEnabled(enable);
  SetPassiveDocumentEventListenersEnabled(enable);
  SetPassiveDocumentWheelEventListenersEnabled(enable);
  SetPaymentRequestHasEnrolledInstrumentEnabled(enable);
  SetPermissionsEnabled(enable);
  SetPrefixedVideoFullscreenEnabled(enable);
  SetPresentationEnabled(enable);
  SetPushMessagingEnabled(enable);
  SetRemotePlaybackEnabled(enable);
  SetRenderingPipelineThrottlingEnabled(enable);
  SetRestrictAppCacheToSecureContextsEnabled(enable);
  SetRTCDtlsTransportEnabled(enable);
  SetRTCRtpSenderParametersEnabled(enable);
  SetRTCUnifiedPlanEnabled(enable);
  SetScriptedSpeechRecognitionEnabled(enable);
  SetScriptedSpeechSynthesisEnabled(enable);
  SetScrollTopLeftInteropEnabled(enable);
  SetSendBeaconThrowForBlobWithNonSimpleTypeEnabled(enable);
  SetSensorEnabled(enable);
  SetShadowDOMV0Enabled(enable);
  SetSharedArrayBufferEnabled(enable);
  SetSmoothScrollJSInterventionEnabled(enable);
  SetStableBlinkFeaturesEnabled(enable);
  SetStaleWhileRevalidateEnabled(enable);
  SetStorageQuotaDetailsEnabled(enable);
  SetTextUnderlinePositionLeftRightEnabled(enable);
  SetTimerThrottlingForBackgroundTabsEnabled(enable);
  SetTimerThrottlingForHiddenFramesEnabled(enable);
  SetTouchEventFeatureDetectionEnabled(enable);
  SetUnifiedPointerCaptureInBlinkEnabled(enable);
  SetUnifiedTouchAdjustmentEnabled(enable);
  SetUserActivationAPIEnabled(enable);
  SetWebUSBEnabled(enable);
  SetWebUSBOnDedicatedWorkersEnabled(enable);
  SetWorkerNosniffBlockEnabled(enable);
  SetWorkerNosniffWarnEnabled(enable);
  SetXSLTEnabled(enable);

  // Platform-dependent features
#if defined(OS_ANDROID)
  SetCompositedSelectionUpdateEnabled(enable);
  SetFastMobileScrollingEnabled(enable);
  SetMediaCaptureEnabled(enable);
  SetMediaControlsOverlayPlayButtonEnabled(enable);
  SetNetInfoDownlinkMaxEnabled(enable);
  SetNotificationContentImageEnabled(enable);
  SetOrientationEventEnabled(enable);
  SetRemotePlaybackBackendEnabled(enable);
  SetWebBluetoothEnabled(enable);
#endif

#if defined(OS_WIN)
  SetAudioOutputDevicesEnabled(enable);
  SetInputMultipleFieldsUIEnabled(enable);
  SetNavigatorContentUtilsEnabled(enable);
  SetNotificationConstructorEnabled(enable);
  SetNotificationContentImageEnabled(enable);
  SetOnDeviceChangeEnabled(enable);
  SetPagePopupEnabled(enable);
  SetPictureInPictureAPIEnabled(enable);
  SetSharedWorkerEnabled(enable);
#endif

#if defined(OS_CHROMEOS)
  SetAudioOutputDevicesEnabled(enable);
  SetForceTallerSelectPopupEnabled(enable);
  SetInputMultipleFieldsUIEnabled(enable);
  SetNavigatorContentUtilsEnabled(enable);
  SetNetInfoDownlinkMaxEnabled(enable);
  SetNotificationConstructorEnabled(enable);
  SetNotificationContentImageEnabled(enable);
  SetOnDeviceChangeEnabled(enable);
  SetPagePopupEnabled(enable);
  SetPictureInPictureAPIEnabled(enable);
  SetSharedWorkerEnabled(enable);
  SetWebBluetoothEnabled(enable);
#endif

#if defined(OS_MACOSX)
  SetAudioOutputDevicesEnabled(enable);
  SetInputMultipleFieldsUIEnabled(enable);
  SetNavigatorContentUtilsEnabled(enable);
  SetNotificationConstructorEnabled(enable);
  SetOnDeviceChangeEnabled(enable);
  SetPagePopupEnabled(enable);
  SetPictureInPictureAPIEnabled(enable);
  SetSharedWorkerEnabled(enable);
  SetWebBluetoothEnabled(enable);
#endif

  // Default values for platforms not specifically handled above
#if !defined(OS_ANDROID) && !defined(OS_WIN) && !defined(OS_CHROMEOS) && !defined(OS_MACOSX)
  SetAudioOutputDevicesEnabled(enable);
  SetInputMultipleFieldsUIEnabled(enable);
  SetNavigatorContentUtilsEnabled(enable);
  SetNotificationConstructorEnabled(enable);
  SetNotificationContentImageEnabled(enable);
  SetOnDeviceChangeEnabled(enable);
  SetPagePopupEnabled(enable);
  SetPictureInPictureAPIEnabled(enable);
  SetSharedWorkerEnabled(enable);
#endif
}

void RuntimeEnabledFeatures::SetExperimentalFeaturesEnabled(bool enable) {
  SetAccessibilityObjectModelEnabled(enable);
  SetAnimationWorkletEnabled(enable);
  SetAsyncClipboardEnabled(enable);
  SetAudioVideoTracksEnabled(enable);
  SetAutoPictureInPictureEnabled(enable);
  SetBadgingEnabled(enable);
  SetBloatedRendererDetectionEnabled(enable);
  SetCanvas2dContextLostRestoredEnabled(enable);
  SetCanvas2dScrollPathIntoViewEnabled(enable);
  SetCanvasColorManagementEnabled(enable);
  SetCanvasHitRegionEnabled(enable);
  SetCanvasImageSmoothingEnabled(enable);
  SetClickRetargettingEnabled(enable);
  SetComputedAccessibilityInfoEnabled(enable);
  SetContactsManagerEnabled(enable);
  SetContextMenuEnabled(enable);
  SetCookieStoreEnabled(enable);
  SetCSS3TextEnabled(enable);
  SetCSSAdditiveAnimationsEnabled(enable);
  SetCSSAltTextEnabled(enable);
  SetCSSBackdropFilterEnabled(enable);
  SetCSSFocusVisibleEnabled(enable);
  SetCSSFontSizeAdjustEnabled(enable);
  SetCSSIndependentTransformPropertiesEnabled(enable);
  SetCSSLayoutAPIEnabled(enable);
  SetCSSLogicalEnabled(enable);
  SetCSSMaskSourceTypeEnabled(enable);
  SetCSSOffsetPathRayEnabled(enable);
  SetCSSOffsetPathRayContainEnabled(enable);
  SetCSSOffsetPositionAnchorEnabled(enable);
  SetCSSPaintAPIArgumentsEnabled(enable);
  SetCSSPseudoIsEnabled(enable);
  SetCSSPseudoWhereEnabled(enable);
  SetCSSSnapSizeEnabled(enable);
  SetCSSVariables2Enabled(enable);
  SetCSSViewportEnabled(enable);
  SetCustomElementDefaultStyleEnabled(enable);
  SetCustomUserTimingEnabled(enable);
  SetDecodeToYUVEnabled(enable);
  SetDesktopCaptureDisableLocalEchoControlEnabled(enable);
  SetDisableHardwareNoiseSuppressionEnabled(enable);
  SetElementTimingEnabled(enable);
  SetEventTimingEnabled(enable);
  SetExperimentalContentSecurityPolicyFeaturesEnabled(enable);
  SetExperimentalIsInputPendingEnabled(enable);
  SetExperimentalProductivityFeaturesEnabled(enable);
  SetExtendedTextMetricsEnabled(enable);
  SetFeaturePolicyForSandboxEnabled(enable);
  SetFeaturePolicyReportingEnabled(enable);
  SetFetchMetadataDestinationEnabled(enable);
  SetFormAssociatedCustomElementsEnabled(enable);
  SetFormDataEventEnabled(enable);
  SetFreezeFramesOnVisibilityEnabled(enable);
  SetGamepadButtonAxisEventsEnabled(enable);
  SetHrefTranslateEnabled(enable);
  SetIDBObserverEnabled(enable);
  SetIdleDetectionEnabled(enable);
  SetIgnoreCrossOriginWindowWhenNamedAccessOnWindowEnabled(enable);
  SetImplicitRootScrollerEnabled(enable);
  SetInertAttributeEnabled(enable);
  SetInstalledAppEnabled(enable);
  SetInvisibleDOMEnabled(enable);
  SetIsolatedCodeCacheEnabled(enable);
  SetJankTrackingSweepLineEnabled(enable);
  SetKeyboardFocusableScrollersEnabled(enable);
  SetLangClientHintHeaderEnabled(enable);
  SetLayoutJankAPIEnabled(enable);
  SetManualSlottingEnabled(enable);
  SetMediaCapabilitiesEncodingInfoEnabled(enable);
  SetMediaCapabilitiesEncryptedMediaEnabled(enable);
  SetMediaCaptureDepthVideoKindEnabled(enable);
  SetMediaQueryShapeEnabled(enable);
  SetMediaSourceExperimentalEnabled(enable);
  SetMediaSourceNewAbortAndDurationEnabled(enable);
  SetModuleDedicatedWorkerEnabled(enable);
  SetMuteButtonEnabled(enable);
  SetNotificationTriggersEnabled(enable);
  SetOffscreenCanvasCommitEnabled(enable);
  SetOverscrollCustomizationEnabled(enable);
  SetPageLifecycleTransitionsOptInEnabled(enable);
  SetPageLifecycleTransitionsOptOutEnabled(enable);
  SetPaymentAppEnabled(enable);
  SetPaymentHandlerChangePaymentMethodEnabled(enable);
  SetPaymentMethodChangeEventEnabled(enable);
  SetPaymentRequestEnabled(enable);
  SetPaymentRequestMerchantValidationEventEnabled(enable);
  SetPaymentRetryEnabled(enable);
  SetPerformanceObserverBufferedFlagEnabled(enable);
  SetPerMethodCanMakePaymentQuotaEnabled(enable);
  SetPermissionsRequestRevokeEnabled(enable);
  SetPointerRawUpdateEnabled(enable);
  SetPostAnimationFrameEnabled(enable);
  SetPredictedEventsEnabled(enable);
  SetPriorityHintsEnabled(enable);
  SetRasterInducingScrollEnabled(enable);
  SetResourceLoadSchedulerEnabled(enable);
  SetRtcAudioJitterBufferMaxPacketsEnabled(enable);
  SetRtcAudioJitterBufferRtxHandlingEnabled(enable);
  SetRTCIceTransportExtensionEnabled(enable);
  SetRtcJitterBufferDelayHintEnabled(enable);
  SetRTCQuicTransportEnabled(enable);
  SetRTCSctpTransportEnabled(enable);
  SetRTCStatsRelativePacketArrivalDelayEnabled(enable);
  SetSendMouseEventsDisabledFormControlsEnabled(enable);
  SetSensorExtraClassesEnabled(enable);
  SetSetRootScrollerEnabled(enable);
  SetShadowPiercingDescendantCombinatorEnabled(enable);
  SetShapeDetectionEnabled(enable);
  SetSignatureBasedIntegrityEnabled(enable);
  SetSkipAdEnabled(enable);
  SetSmsReceiverEnabled(enable);
  SetSpeechSynthesisEventCharLengthEnabled(enable);
  SetStackedCSSPropertyAnimationsEnabled(enable);
  SetTextFragmentIdentifiersEnabled(enable);
  SetTransferableStreamsEnabled(enable);
  SetTrustedDOMTypesEnabled(enable);
  SetUnclosedFormControlIsInvalidEnabled(enable);
  SetUnoptimizedImagePoliciesEnabled(enable);
  SetUserAgentClientHintEnabled(enable);
  SetWakeLockNavigatorEnabled(enable);
  SetWasmCodeCacheEnabled(enable);
  SetWebAnimationsAPIEnabled(enable);
  SetWebAnimationsSVGEnabled(enable);
  SetWebAssemblyThreadsEnabled(enable);
  SetWebAuthEnabled(enable);
  SetWebGL2ComputeContextEnabled(enable);
  SetWebGLDraftExtensionsEnabled(enable);
  SetWebHIDEnabled(enable);
  SetWebNFCEnabled(enable);
  SetWebShareEnabled(enable);
  SetWebShareV2Enabled(enable);
  SetWebVREnabled(enable);
  SetWebVTTRegionsEnabled(enable);
  SetWebXREnabled(enable);
  SetWebXRHitTestEnabled(enable);
  SetWorkerTaskQueueEnabled(enable);

  // Platform-dependent features
#if defined(OS_ANDROID)
#endif

#if defined(OS_WIN)
  SetSerialEnabled(enable);
  SetWebBluetoothEnabled(enable);
#endif

#if defined(OS_CHROMEOS)
  SetSerialEnabled(enable);
#endif

#if defined(OS_MACOSX)
  SetSerialEnabled(enable);
#endif

  // Default values for platforms not specifically handled above
#if !defined(OS_ANDROID) && !defined(OS_WIN) && !defined(OS_CHROMEOS) && !defined(OS_MACOSX)
  SetSerialEnabled(enable);
  SetWebBluetoothEnabled(enable);
#endif
}

void RuntimeEnabledFeatures::SetTestFeaturesEnabled(bool enable) {
  SetAdTaggingEnabled(enable);
  SetBlockingDownloadsInSandboxWithoutUserActivationEnabled(enable);
  SetCanvas2dFixedRenderingModeEnabled(enable);
  SetCompositorTouchActionEnabled(enable);
  SetCSSCalcAsIntEnabled(enable);
  SetCSSVariables2ImageValuesEnabled(enable);
  SetCSSVariables2TransformValuesEnabled(enable);
  SetEncryptedMediaEncryptionSchemeQueryEnabled(enable);
  SetEncryptedMediaPersistentUsageRecordSessionEnabled(enable);
  SetExecCommandInJavaScriptEnabled(enable);
  SetForbidSyncXHRInPageDismissalEnabled(enable);
  SetImageOrientationEnabled(enable);
  SetMiddleClickAutoscrollEnabled(enable);
  SetModuleServiceWorkerEnabled(enable);
  SetMojoJSEnabled(enable);
  SetMojoJSTestEnabled(enable);
  SetNoIdleEncodingForWebTestsEnabled(enable);
  SetPermissionDelegationEnabled(enable);
  SetPortalsEnabled(enable);
  SetScrollAnchorSerializationEnabled(enable);
  SetWebBluetoothScanningEnabled(enable);

  // Platform-dependent features
#if defined(OS_ANDROID)
  SetInputMultipleFieldsUIEnabled(enable);
#endif

#if defined(OS_WIN)
#endif

#if defined(OS_CHROMEOS)
#endif

#if defined(OS_MACOSX)
  SetNotificationContentImageEnabled(enable);
#endif

  // Default values for platforms not specifically handled above
#if !defined(OS_ANDROID) && !defined(OS_WIN) && !defined(OS_CHROMEOS) && !defined(OS_MACOSX)
#endif
}


void RuntimeEnabledFeatures::SetOriginTrialControlledFeaturesEnabled(bool enable) {
  SetAnimationWorkletEnabled(enable);
  SetAutoPictureInPictureEnabled(enable);
  SetBadgingEnabled(enable);
  SetBuiltInModuleInfraEnabled(enable);
  SetBuiltInModuleKvStorageEnabled(enable);
  SetContactsManagerEnabled(enable);
  SetCookieStoreEnabled(enable);
  SetCustomElementsV0Enabled(enable);
  SetDisableHardwareNoiseSuppressionEnabled(enable);
  SetElementTimingEnabled(enable);
  SetEventTimingEnabled(enable);
  SetExperimentalIsInputPendingEnabled(enable);
  SetFeaturePolicyReportingEnabled(enable);
  SetHrefTranslateEnabled(enable);
  SetHTMLImportsEnabled(enable);
  SetInstalledAppEnabled(enable);
  SetJankTrackingEnabled(enable);
  SetLayoutJankAPIEnabled(enable);
  SetLegacyPerformanceMemoryCountersEnabled(enable);
  SetMediaCapabilitiesEncryptedMediaEnabled(enable);
  SetMuteButtonEnabled(enable);
  SetOriginTrialsSampleAPIEnabled(enable);
  SetOriginTrialsSampleAPIDependentEnabled(enable);
  SetOriginTrialsSampleAPIImpliedEnabled(enable);
  SetOriginTrialsSampleAPIInvalidOSEnabled(enable);
  SetOriginTrialsSampleAPINavigationEnabled(enable);
  SetPageLifecycleTransitionsOptInEnabled(enable);
  SetPageLifecycleTransitionsOptOutEnabled(enable);
  SetPerMethodCanMakePaymentQuotaEnabled(enable);
  SetPriorityHintsEnabled(enable);
  SetRtcAudioJitterBufferMaxPacketsEnabled(enable);
  SetRtcAudioJitterBufferRtxHandlingEnabled(enable);
  SetRTCIceTransportExtensionEnabled(enable);
  SetRtcJitterBufferDelayHintEnabled(enable);
  SetRTCQuicTransportEnabled(enable);
  SetRTCStatsRelativePacketArrivalDelayEnabled(enable);
  SetShadowDOMV0Enabled(enable);
  SetSignatureBasedIntegrityEnabled(enable);
  SetSkipAdEnabled(enable);
  SetStaleWhileRevalidateEnabled(enable);
  SetTouchEventFeatureDetectionEnabled(enable);
  SetTrustedDOMTypesEnabled(enable);
  SetUnoptimizedImagePoliciesEnabled(enable);
  SetWebAssemblyThreadsEnabled(enable);
  SetWebVREnabled(enable);
  SetWebXREnabled(enable);
}

void RuntimeEnabledFeatures::SetFeatureEnabledFromString(
    const std::string& name, bool enable) {
  static const struct {
    const char* name;
    bool* setting;
  } kFeatures[] = {
    {"Accelerated2dCanvas", &is_accelerated_2d_canvas_enabled_},
    {"AccessibilityObjectModel", &is_accessibility_object_model_enabled_},
    {"AdTagging", &is_ad_tagging_enabled_},
    {"AllowActivationDelegationAttr", &is_allow_activation_delegation_attr_enabled_},
    {"AllowContentInitiatedDataUrlNavigations", &is_allow_content_initiated_data_url_navigations_enabled_},
    {"AnimationWorklet", &is_animation_worklet_enabled_},
    {"AsyncClipboard", &is_async_clipboard_enabled_},
    {"AudioOutputDevices", &is_audio_output_devices_enabled_},
    {"AudioVideoTracks", &is_audio_video_tracks_enabled_},
    {"AutomationControlled", &is_automation_controlled_enabled_},
    {"AutoPictureInPicture", &is_auto_picture_in_picture_enabled_},
    {"AutoplayIgnoresWebAudio", &is_autoplay_ignores_web_audio_enabled_},
    {"BackgroundFetch", &is_background_fetch_enabled_},
    {"BackgroundVideoTrackOptimization", &is_background_video_track_optimization_enabled_},
    {"Badging", &is_badging_enabled_},
    {"BidiCaretAffinity", &is_bidi_caret_affinity_enabled_},
    {"BlinkGenPropertyTrees", &is_blink_gen_property_trees_enabled_},
    {"BlinkRuntimeCallStats", &is_blink_runtime_call_stats_enabled_},
    {"BloatedRendererDetection", &is_bloated_renderer_detection_enabled_},
    {"BloatedRendererDetectionSkipUptimeCheck", &is_bloated_renderer_detection_skip_uptime_check_enabled_},
    {"BlobReadMethods", &is_blob_read_methods_enabled_},
    {"BlockCredentialedSubresources", &is_block_credentialed_subresources_enabled_},
    {"BlockingDownloadsInSandboxWithoutUserActivation", &is_blocking_downloads_in_sandbox_without_user_activation_enabled_},
    {"BlockMetaSetCookie", &is_block_meta_set_cookie_enabled_},
    {"BuiltInModuleAll", &is_built_in_module_all_enabled_},
    {"BuiltInModuleInfra", &is_built_in_module_infra_enabled_},
    {"BuiltInModuleKvStorage", &is_built_in_module_kv_storage_enabled_},
    {"CacheInlineScriptCode", &is_cache_inline_script_code_enabled_},
    {"CacheStorageAddAllRejectsDuplicates", &is_cache_storage_add_all_rejects_duplicates_enabled_},
    {"CallCaptureListenersAtCapturePhaseAtShadowHosts", &is_call_capture_listeners_at_capture_phase_at_shadow_hosts_enabled_},
    {"Canvas2dContextLostRestored", &is_canvas_2d_context_lost_restored_enabled_},
    {"Canvas2dFixedRenderingMode", &is_canvas_2d_fixed_rendering_mode_enabled_},
    {"Canvas2dImageChromium", &is_canvas_2d_image_chromium_enabled_},
    {"Canvas2dScrollPathIntoView", &is_canvas_2d_scroll_path_into_view_enabled_},
    {"CanvasColorManagement", &is_canvas_color_management_enabled_},
    {"CanvasHitRegion", &is_canvas_hit_region_enabled_},
    {"CanvasImageSmoothing", &is_canvas_image_smoothing_enabled_},
    {"ClickRetargetting", &is_click_retargetting_enabled_},
    {"ClientPlaceholdersForServerLoFi", &is_client_placeholders_for_server_lo_fi_enabled_},
    {"CompositeAfterPaint", &is_composite_after_paint_enabled_},
    {"CompositedSelectionUpdate", &is_composited_selection_update_enabled_},
    {"CompositorTouchAction", &is_compositor_touch_action_enabled_},
    {"ComputedAccessibilityInfo", &is_computed_accessibility_info_enabled_},
    {"ContactsManager", &is_contacts_manager_enabled_},
    {"ContextMenu", &is_context_menu_enabled_},
    {"CookieStore", &is_cookie_store_enabled_},
    {"CorsRFC1918", &is_cors_rfc_1918_enabled_},
    {"CSS3Text", &is_css_3_text_enabled_},
    {"CSSAdditiveAnimations", &is_css_additive_animations_enabled_},
    {"CSSAltText", &is_css_alt_text_enabled_},
    {"CSSBackdropFilter", &is_css_backdrop_filter_enabled_},
    {"CSSCalcAsInt", &is_css_calc_as_int_enabled_},
    {"CSSFocusVisible", &is_css_focus_visible_enabled_},
    {"CSSFontFeatureValues", &is_css_font_feature_values_enabled_},
    {"CSSFontSizeAdjust", &is_css_font_size_adjust_enabled_},
    {"CSSHexAlphaColor", &is_css_hex_alpha_color_enabled_},
    {"CSSIndependentTransformProperties", &is_css_independent_transform_properties_enabled_},
    {"CSSLayoutAPI", &is_css_layout_api_enabled_},
    {"CSSLogical", &is_css_logical_enabled_},
    {"CSSMaskSourceType", &is_css_mask_source_type_enabled_},
    {"CSSOffsetPathRay", &is_css_offset_path_ray_enabled_},
    {"CSSOffsetPathRayContain", &is_css_offset_path_ray_contain_enabled_},
    {"CSSOffsetPositionAnchor", &is_css_offset_position_anchor_enabled_},
    {"CSSPaintAPIArguments", &is_css_paint_api_arguments_enabled_},
    {"CSSPartPseudoElement", &is_css_part_pseudo_element_enabled_},
    {"CSSPictureInPicture", &is_css_picture_in_picture_enabled_},
    {"CSSPseudoIs", &is_css_pseudo_is_enabled_},
    {"CSSPseudoWhere", &is_css_pseudo_where_enabled_},
    {"CSSSnapSize", &is_css_snap_size_enabled_},
    {"CSSVariables2", &is_css_variables_2_enabled_},
    {"CSSVariables2ImageValues", &is_css_variables_2_image_values_enabled_},
    {"CSSVariables2TransformValues", &is_css_variables_2_transform_values_enabled_},
    {"CSSViewport", &is_css_viewport_enabled_},
    {"CustomElementDefaultStyle", &is_custom_element_default_style_enabled_},
    {"CustomElementsV0", &is_custom_elements_v0_enabled_},
    {"CustomUserTiming", &is_custom_user_timing_enabled_},
    {"Database", &is_database_enabled_},
    {"DecodeToYUV", &is_decode_to_yuv_enabled_},
    {"DesktopCaptureDisableLocalEchoControl", &is_desktop_capture_disable_local_echo_control_enabled_},
    {"DisableHardwareNoiseSuppression", &is_disable_hardware_noise_suppression_enabled_},
    {"DisplayCutoutAPI", &is_display_cutout_api_enabled_},
    {"DisplayLocking", &is_display_locking_enabled_},
    {"DocumentCookie", &is_document_cookie_enabled_},
    {"DocumentDomain", &is_document_domain_enabled_},
    {"DocumentWrite", &is_document_write_enabled_},
    {"EditingNG", &is_editing_ng_enabled_},
    {"ElementInternals", &is_element_internals_enabled_},
    {"ElementTiming", &is_element_timing_enabled_},
    {"EncryptedMediaEncryptionSchemeQuery", &is_encrypted_media_encryption_scheme_query_enabled_},
    {"EncryptedMediaHdcpPolicyCheck", &is_encrypted_media_hdcp_policy_check_enabled_},
    {"EncryptedMediaPersistentUsageRecordSession", &is_encrypted_media_persistent_usage_record_session_enabled_},
    {"EventTiming", &is_event_timing_enabled_},
    {"ExecCommandInJavaScript", &is_exec_command_in_java_script_enabled_},
    {"ExpensiveBackgroundTimerThrottling", &is_expensive_background_timer_throttling_enabled_},
    {"ExperimentalContentSecurityPolicyFeatures", &is_experimental_content_security_policy_features_enabled_},
    {"ExperimentalIsInputPending", &is_experimental_is_input_pending_enabled_},
    {"ExperimentalProductivityFeatures", &is_experimental_productivity_features_enabled_},
    {"ExtendedTextMetrics", &is_extended_text_metrics_enabled_},
    {"ExtraWebGLVideoTextureMetadata", &is_extra_webgl_video_texture_metadata_enabled_},
    {"FallbackCursorMode", &is_fallback_cursor_mode_enabled_},
    {"FastBorderRadius", &is_fast_border_radius_enabled_},
    {"FastFlatTreeTraversal", &is_fast_flat_tree_traversal_enabled_},
    {"FastMobileScrolling", &is_fast_mobile_scrolling_enabled_},
    {"FeaturePolicyForSandbox", &is_feature_policy_for_sandbox_enabled_},
    {"FeaturePolicyJavaScriptInterface", &is_feature_policy_java_script_interface_enabled_},
    {"FeaturePolicyReporting", &is_feature_policy_reporting_enabled_},
    {"FeaturePolicyVibrateFeature", &is_feature_policy_vibrate_feature_enabled_},
    {"FetchMetadata", &is_fetch_metadata_enabled_},
    {"FetchMetadataDestination", &is_fetch_metadata_destination_enabled_},
    {"FileSystem", &is_file_system_enabled_},
    {"FirstContentfulPaintPlusPlus", &is_first_contentful_paint_plus_plus_enabled_},
    {"FocuslessSpatialNavigation", &is_focusless_spatial_navigation_enabled_},
    {"FontSrcLocalMatching", &is_font_src_local_matching_enabled_},
    {"ForbidSyncXHRInPageDismissal", &is_forbid_sync_xhr_in_page_dismissal_enabled_},
    {"ForceOverlayFullscreenVideo", &is_force_overlay_fullscreen_video_enabled_},
    {"ForceSynchronousHTMLParsing", &is_force_synchronous_html_parsing_enabled_},
    {"ForceTallerSelectPopup", &is_force_taller_select_popup_enabled_},
    {"FormAssociatedCustomElements", &is_form_associated_custom_elements_enabled_},
    {"FormDataEvent", &is_form_data_event_enabled_},
    {"FractionalMouseEvent", &is_fractional_mouse_event_enabled_},
    {"FractionalScrollOffsets", &is_fractional_scroll_offsets_enabled_},
    {"FreezeFramesOnVisibility", &is_freeze_frames_on_visibility_enabled_},
    {"GamepadButtonAxisEvents", &is_gamepad_button_axis_events_enabled_},
    {"GetDisplayMedia", &is_get_display_media_enabled_},
    {"HeapCompaction", &is_heap_compaction_enabled_},
    {"HeapConcurrentMarking", &is_heap_concurrent_marking_enabled_},
    {"HeapIncrementalMarking", &is_heap_incremental_marking_enabled_},
    {"HeapIncrementalMarkingStress", &is_heap_incremental_marking_stress_enabled_},
    {"HrefTranslate", &is_href_translate_enabled_},
    {"HTMLImports", &is_html_imports_enabled_},
    {"HTMLImportsOnlyChrome", &is_html_imports_only_chrome_enabled_},
    {"HTMLImportsStyleApplication", &is_html_imports_style_application_enabled_},
    {"IDBObserver", &is_idb_observer_enabled_},
    {"IDBTransactionCommit", &is_idb_transaction_commit_enabled_},
    {"IdleDetection", &is_idle_detection_enabled_},
    {"IgnoreCrossOriginWindowWhenNamedAccessOnWindow", &is_ignore_cross_origin_window_when_named_access_on_window_enabled_},
    {"ImageOrientation", &is_image_orientation_enabled_},
    {"ImplicitRootScroller", &is_implicit_root_scroller_enabled_},
    {"InertAttribute", &is_inert_attribute_enabled_},
    {"InputMultipleFieldsUI", &is_input_multiple_fields_ui_enabled_},
    {"InstalledApp", &is_installed_app_enabled_},
    {"IntersectionObserverV2", &is_intersection_observer_v_2_enabled_},
    {"InvisibleDOM", &is_invisible_dom_enabled_},
    {"IsolatedCodeCache", &is_isolated_code_cache_enabled_},
    {"IsolatedWorldCSP", &is_isolated_world_csp_enabled_},
    {"JankTracking", &is_jank_tracking_enabled_},
    {"JankTrackingSweepLine", &is_jank_tracking_sweep_line_enabled_},
    {"KeyboardFocusableScrollers", &is_keyboard_focusable_scrollers_enabled_},
    {"LangAttributeAwareFormControlUI", &is_lang_attribute_aware_form_control_ui_enabled_},
    {"LangClientHintHeader", &is_lang_client_hint_header_enabled_},
    {"LayoutJankAPI", &is_layout_jank_api_enabled_},
    {"LayoutNG", &is_layout_ng_enabled_},
    {"LayoutNGBlockFragmentation", &is_layout_ng_block_fragmentation_enabled_},
    {"LayoutNGFieldset", &is_layout_ng_fieldset_enabled_},
    {"LayoutNGFlexBox", &is_layout_ng_flex_box_enabled_},
    {"LayoutNGFragmentCaching", &is_layout_ng_fragment_caching_enabled_},
    {"LazyFrameLoading", &is_lazy_frame_loading_enabled_},
    {"LazyFrameVisibleLoadTimeMetrics", &is_lazy_frame_visible_load_time_metrics_enabled_},
    {"LazyImageLoading", &is_lazy_image_loading_enabled_},
    {"LazyImageVisibleLoadTimeMetrics", &is_lazy_image_visible_load_time_metrics_enabled_},
    {"LazyInitializeMediaControls", &is_lazy_initialize_media_controls_enabled_},
    {"LegacyPerformanceMemoryCounters", &is_legacy_performance_memory_counters_enabled_},
    {"LongTaskV2", &is_long_task_v_2_enabled_},
    {"ManualSlotting", &is_manual_slotting_enabled_},
    {"MediaCapabilitiesEncodingInfo", &is_media_capabilities_encoding_info_enabled_},
    {"MediaCapabilitiesEncryptedMedia", &is_media_capabilities_encrypted_media_enabled_},
    {"MediaCapture", &is_media_capture_enabled_},
    {"MediaCaptureDepthVideoKind", &is_media_capture_depth_video_kind_enabled_},
    {"MediaCastOverlayButton", &is_media_cast_overlay_button_enabled_},
    {"MediaControlsExpandGesture", &is_media_controls_expand_gesture_enabled_},
    {"MediaControlsOverlayPlayButton", &is_media_controls_overlay_play_button_enabled_},
    {"MediaDocumentDownloadButton", &is_media_document_download_button_enabled_},
    {"MediaEngagementBypassAutoplayPolicies", &is_media_engagement_bypass_autoplay_policies_enabled_},
    {"MediaQueryPrefersColorScheme", &is_media_query_prefers_color_scheme_enabled_},
    {"MediaQueryShape", &is_media_query_shape_enabled_},
    {"MediaSession", &is_media_session_enabled_},
    {"MediaSourceExperimental", &is_media_source_experimental_enabled_},
    {"MediaSourceNewAbortAndDuration", &is_media_source_new_abort_and_duration_enabled_},
    {"MediaStreamTrackContentHint", &is_media_stream_track_content_hint_enabled_},
    {"MergeBlockingNonBlockingPools", &is_merge_blocking_non_blocking_pools_enabled_},
    {"MetaColorScheme", &is_meta_color_scheme_enabled_},
    {"MiddleClickAutoscroll", &is_middle_click_autoscroll_enabled_},
    {"MimeHandlerViewInCrossProcessFrame", &is_mime_handler_view_in_cross_process_frame_enabled_},
    {"MobileLayoutTheme", &is_mobile_layout_theme_enabled_},
    {"ModernMediaControls", &is_modern_media_controls_enabled_},
    {"ModuleDedicatedWorker", &is_module_dedicated_worker_enabled_},
    {"ModuleServiceWorker", &is_module_service_worker_enabled_},
    {"MojoJS", &is_mojo_js_enabled_},
    {"MojoJSTest", &is_mojo_js_test_enabled_},
    {"MovementXYInBlink", &is_movement_xy_in_blink_enabled_},
    {"MuteButton", &is_mute_button_enabled_},
    {"NativeFileSystem", &is_native_file_system_enabled_},
    {"NativeStreams", &is_native_streams_enabled_},
    {"NavigatorContentUtils", &is_navigator_content_utils_enabled_},
    {"NavigatorDeviceMemory", &is_navigator_device_memory_enabled_},
    {"NavigatorLanguageInInsecureContext", &is_navigator_language_in_insecure_context_enabled_},
    {"NetInfoDownlinkMax", &is_net_info_downlink_max_enabled_},
    {"NetworkService", &is_network_service_enabled_},
    {"NewRemotePlaybackPipeline", &is_new_remote_playback_pipeline_enabled_},
    {"NoIdleEncodingForWebTests", &is_no_idle_encoding_for_web_tests_enabled_},
    {"NotificationConstructor", &is_notification_constructor_enabled_},
    {"NotificationContentImage", &is_notification_content_image_enabled_},
    {"Notifications", &is_notifications_enabled_},
    {"NotificationTriggers", &is_notification_triggers_enabled_},
    {"OffMainThreadCSSPaint", &is_off_main_thread_css_paint_enabled_},
    {"OffscreenCanvas", &is_offscreen_canvas_enabled_},
    {"OffscreenCanvasCommit", &is_offscreen_canvas_commit_enabled_},
    {"OffscreenCanvasText", &is_offscreen_canvas_text_enabled_},
    {"OnDeviceChange", &is_on_device_change_enabled_},
    {"OrientationEvent", &is_orientation_event_enabled_},
    {"OriginTrials", &is_origin_trials_enabled_},
    {"OriginTrialsSampleAPI", &is_origin_trials_sample_api_enabled_},
    {"OriginTrialsSampleAPIDependent", &is_origin_trials_sample_api_dependent_enabled_},
    {"OriginTrialsSampleAPIImplied", &is_origin_trials_sample_api_implied_enabled_},
    {"OriginTrialsSampleAPIInvalidOS", &is_origin_trials_sample_api_invalid_os_enabled_},
    {"OriginTrialsSampleAPINavigation", &is_origin_trials_sample_api_navigation_enabled_},
    {"OutOfBlinkCors", &is_out_of_blink_cors_enabled_},
    {"OverflowIconsForMediaControls", &is_overflow_icons_for_media_controls_enabled_},
    {"OverlayScrollbars", &is_overlay_scrollbars_enabled_},
    {"OverscrollCustomization", &is_overscroll_customization_enabled_},
    {"PageLifecycleTransitionsOptIn", &is_page_lifecycle_transitions_opt_in_enabled_},
    {"PageLifecycleTransitionsOptOut", &is_page_lifecycle_transitions_opt_out_enabled_},
    {"PagePopup", &is_page_popup_enabled_},
    {"PaintUnderInvalidationChecking", &is_paint_under_invalidation_checking_enabled_},
    {"PassiveDocumentEventListeners", &is_passive_document_event_listeners_enabled_},
    {"PassiveDocumentWheelEventListeners", &is_passive_document_wheel_event_listeners_enabled_},
    {"PassPaintVisualRectToCompositor", &is_pass_paint_visual_rect_to_compositor_enabled_},
    {"PaymentApp", &is_payment_app_enabled_},
    {"PaymentHandlerChangePaymentMethod", &is_payment_handler_change_payment_method_enabled_},
    {"PaymentMethodChangeEvent", &is_payment_method_change_event_enabled_},
    {"PaymentRequest", &is_payment_request_enabled_},
    {"PaymentRequestHasEnrolledInstrument", &is_payment_request_has_enrolled_instrument_enabled_},
    {"PaymentRequestMerchantValidationEvent", &is_payment_request_merchant_validation_event_enabled_},
    {"PaymentRetry", &is_payment_retry_enabled_},
    {"PerformanceManagerInstrumentation", &is_performance_manager_instrumentation_enabled_},
    {"PerformanceObserverBufferedFlag", &is_performance_observer_buffered_flag_enabled_},
    {"PeriodicBackgroundSync", &is_periodic_background_sync_enabled_},
    {"PerMethodCanMakePaymentQuota", &is_per_method_can_make_payment_quota_enabled_},
    {"PermissionDelegation", &is_permission_delegation_enabled_},
    {"Permissions", &is_permissions_enabled_},
    {"PermissionsRequestRevoke", &is_permissions_request_revoke_enabled_},
    {"PictureInPicture", &is_picture_in_picture_enabled_},
    {"PictureInPictureAPI", &is_picture_in_picture_api_enabled_},
    {"PictureInPictureV2", &is_picture_in_picture_v_2_enabled_},
    {"PointerRawUpdate", &is_pointer_raw_update_enabled_},
    {"Portals", &is_portals_enabled_},
    {"PostAnimationFrame", &is_post_animation_frame_enabled_},
    {"PreciseMemoryInfo", &is_precise_memory_info_enabled_},
    {"PredictedEvents", &is_predicted_events_enabled_},
    {"PrefixedVideoFullscreen", &is_prefixed_video_fullscreen_enabled_},
    {"Presentation", &is_presentation_enabled_},
    {"PrintBrowser", &is_print_browser_enabled_},
    {"PriorityHints", &is_priority_hints_enabled_},
    {"PushMessaging", &is_push_messaging_enabled_},
    {"RasterInducingScroll", &is_raster_inducing_scroll_enabled_},
    {"ReducedReferrerGranularity", &is_reduced_referrer_granularity_enabled_},
    {"RemotePlayback", &is_remote_playback_enabled_},
    {"RemotePlaybackBackend", &is_remote_playback_backend_enabled_},
    {"RenderingPipelineThrottling", &is_rendering_pipeline_throttling_enabled_},
    {"ResourceLoadScheduler", &is_resource_load_scheduler_enabled_},
    {"RestrictAppCacheToSecureContexts", &is_restrict_app_cache_to_secure_contexts_enabled_},
    {"RestrictDeviceSensorEventsToSecureContexts", &is_restrict_device_sensor_events_to_secure_contexts_enabled_},
    {"RestrictLazyFrameLoadingToDataSaver", &is_restrict_lazy_frame_loading_to_data_saver_enabled_},
    {"RestrictLazyImageLoadingToDataSaver", &is_restrict_lazy_image_loading_to_data_saver_enabled_},
    {"RtcAudioJitterBufferMaxPackets", &is_rtc_audio_jitter_buffer_max_packets_enabled_},
    {"RtcAudioJitterBufferRtxHandling", &is_rtc_audio_jitter_buffer_rtx_handling_enabled_},
    {"RTCDtlsTransport", &is_rtc_dtls_transport_enabled_},
    {"RTCIceTransportExtension", &is_rtc_ice_transport_extension_enabled_},
    {"RtcJitterBufferDelayHint", &is_rtc_jitter_buffer_delay_hint_enabled_},
    {"RTCQuicTransport", &is_rtc_quic_transport_enabled_},
    {"RTCRtpSenderParameters", &is_rtc_rtp_sender_parameters_enabled_},
    {"RTCSctpTransport", &is_rtc_sctp_transport_enabled_},
    {"RTCStatsRelativePacketArrivalDelay", &is_rtc_stats_relative_packet_arrival_delay_enabled_},
    {"RTCUnifiedPlan", &is_rtc_unified_plan_enabled_},
    {"RTCUnifiedPlanByDefault", &is_rtc_unified_plan_by_default_enabled_},
    {"ScriptedSpeechRecognition", &is_scripted_speech_recognition_enabled_},
    {"ScriptedSpeechSynthesis", &is_scripted_speech_synthesis_enabled_},
    {"ScriptStreamingOnPreload", &is_script_streaming_on_preload_enabled_},
    {"ScrollAnchorSerialization", &is_scroll_anchor_serialization_enabled_},
    {"ScrollCustomization", &is_scroll_customization_enabled_},
    {"ScrollTopLeftInterop", &is_scroll_top_left_interop_enabled_},
    {"SendBeaconThrowForBlobWithNonSimpleType", &is_send_beacon_throw_for_blob_with_non_simple_type_enabled_},
    {"SendMouseEventsDisabledFormControls", &is_send_mouse_events_disabled_form_controls_enabled_},
    {"Sensor", &is_sensor_enabled_},
    {"SensorExtraClasses", &is_sensor_extra_classes_enabled_},
    {"Serial", &is_serial_enabled_},
    {"SetRootScroller", &is_set_root_scroller_enabled_},
    {"ShadowDOMV0", &is_shadow_dom_v0_enabled_},
    {"ShadowPiercingDescendantCombinator", &is_shadow_piercing_descendant_combinator_enabled_},
    {"ShapeDetection", &is_shape_detection_enabled_},
    {"SharedArrayBuffer", &is_shared_array_buffer_enabled_},
    {"SharedWorker", &is_shared_worker_enabled_},
    {"SignatureBasedIntegrity", &is_signature_based_integrity_enabled_},
    {"SignedExchangeSubresourcePrefetch", &is_signed_exchange_subresource_prefetch_enabled_},
    {"SkipAd", &is_skip_ad_enabled_},
    {"SkipTouchEventFilter", &is_skip_touch_event_filter_enabled_},
    {"SmoothScrollJSIntervention", &is_smooth_scroll_js_intervention_enabled_},
    {"SmsReceiver", &is_sms_receiver_enabled_},
    {"SpeechSynthesisEventCharLength", &is_speech_synthesis_event_char_length_enabled_},
    {"StableBlinkFeatures", &is_stable_blink_features_enabled_},
    {"StackedCSSPropertyAnimations", &is_stacked_css_property_animations_enabled_},
    {"StaleWhileRevalidate", &is_stale_while_revalidate_enabled_},
    {"StorageQuotaDetails", &is_storage_quota_details_enabled_},
    {"StreamsNative", &is_streams_native_enabled_},
    {"TextFragmentIdentifiers", &is_text_fragment_identifiers_enabled_},
    {"TextUnderlinePositionLeftRight", &is_text_underline_position_left_right_enabled_},
    {"TimerThrottlingForBackgroundTabs", &is_timer_throttling_for_background_tabs_enabled_},
    {"TimerThrottlingForHiddenFrames", &is_timer_throttling_for_hidden_frames_enabled_},
    {"TouchEventFeatureDetection", &is_touch_event_feature_detection_enabled_},
    {"TrackLayoutPassesPerBlock", &is_track_layout_passes_per_block_enabled_},
    {"TransferableStreams", &is_transferable_streams_enabled_},
    {"TranslateService", &is_translate_service_enabled_},
    {"TrustedDOMTypes", &is_trusted_dom_types_enabled_},
    {"UnclosedFormControlIsInvalid", &is_unclosed_form_control_is_invalid_enabled_},
    {"UnifiedPointerCaptureInBlink", &is_unified_pointer_capture_in_blink_enabled_},
    {"UnifiedTouchAdjustment", &is_unified_touch_adjustment_enabled_},
    {"UnoptimizedImagePolicies", &is_unoptimized_image_policies_enabled_},
    {"UpdateHoverFromLayoutChangeAtBeginFrame", &is_update_hover_from_layout_change_at_begin_frame_enabled_},
    {"UpdateHoverFromScrollAtBeginFrame", &is_update_hover_from_scroll_at_begin_frame_enabled_},
    {"UserActivationAPI", &is_user_activation_api_enabled_},
    {"UserActivationPostMessageTransfer", &is_user_activation_post_message_transfer_enabled_},
    {"UserActivationSameOriginVisibility", &is_user_activation_same_origin_visibility_enabled_},
    {"UserActivationV2", &is_user_activation_v_2_enabled_},
    {"UserAgentClientHint", &is_user_agent_client_hint_enabled_},
    {"V8IdleTasks", &is_v8_idle_tasks_enabled_},
    {"VideoAutoFullscreen", &is_video_auto_fullscreen_enabled_},
    {"VideoFullscreenDetection", &is_video_fullscreen_detection_enabled_},
    {"VideoFullscreenOrientationLock", &is_video_fullscreen_orientation_lock_enabled_},
    {"VideoRotateToFullscreen", &is_video_rotate_to_fullscreen_enabled_},
    {"VisibilityCollapseColumn", &is_visibility_collapse_column_enabled_},
    {"WakeLockNavigator", &is_wake_lock_navigator_enabled_},
    {"WasmCodeCache", &is_wasm_code_cache_enabled_},
    {"WebAnimationsAPI", &is_web_animations_api_enabled_},
    {"WebAnimationsSVG", &is_web_animations_svg_enabled_},
    {"WebAssemblyThreads", &is_web_assembly_threads_enabled_},
    {"WebAuth", &is_web_auth_enabled_},
    {"WebBluetooth", &is_web_bluetooth_enabled_},
    {"WebBluetoothScanning", &is_web_bluetooth_scanning_enabled_},
    {"WebGL2ComputeContext", &is_webgl2_compute_context_enabled_},
    {"WebGLDraftExtensions", &is_webgl_draft_extensions_enabled_},
    {"WebGLImageChromium", &is_webgl_image_chromium_enabled_},
    {"WebGPU", &is_webgpu_enabled_},
    {"WebHID", &is_web_hid_enabled_},
    {"WebNFC", &is_web_nfc_enabled_},
    {"WebShare", &is_web_share_enabled_},
    {"WebShareV2", &is_web_share_v_2_enabled_},
    {"WebUSB", &is_web_usb_enabled_},
    {"WebUSBOnDedicatedWorkers", &is_web_usb_on_dedicated_workers_enabled_},
    {"WebVR", &is_web_vr_enabled_},
    {"WebVTTRegions", &is_web_vtt_regions_enabled_},
    {"WebXR", &is_web_xr_enabled_},
    {"WebXRHitTest", &is_web_xr_hit_test_enabled_},
    {"WebXRPlaneDetection", &is_web_xr_plane_detection_enabled_},
    {"WorkerNosniffBlock", &is_worker_nosniff_block_enabled_},
    {"WorkerNosniffWarn", &is_worker_nosniff_warn_enabled_},
    {"WorkerTaskQueue", &is_worker_task_queue_enabled_},
    {"XSLT", &is_xslt_enabled_},
  };
  for (const auto& feature : kFeatures) {
    if (name == feature.name) {
      *feature.setting = enable;
      return;
    }
  }
  DLOG(ERROR) << "RuntimeEnabledFeature not recognized: " << name;
}


bool RuntimeEnabledFeatures::AnimationWorkletEnabled(const FeatureContext* context) {
  if (RuntimeEnabledFeatures::AnimationWorkletEnabledByRuntimeFlag())
    return true;
  return context && context->FeatureEnabled(OriginTrialFeature::kAnimationWorklet);
}


bool RuntimeEnabledFeatures::AutoPictureInPictureEnabled(const FeatureContext* context) {
  if (!RuntimeEnabledFeatures::PictureInPictureAPIEnabled(context))
    return false;
  if (RuntimeEnabledFeatures::AutoPictureInPictureEnabledByRuntimeFlag())
    return true;
  return context && context->FeatureEnabled(OriginTrialFeature::kAutoPictureInPicture);
}


bool RuntimeEnabledFeatures::BadgingEnabled(const FeatureContext* context) {
  if (RuntimeEnabledFeatures::BadgingEnabledByRuntimeFlag())
    return true;
  return context && context->FeatureEnabled(OriginTrialFeature::kBadging);
}


bool RuntimeEnabledFeatures::BuiltInModuleInfraEnabled(const FeatureContext* context) {
  if (RuntimeEnabledFeatures::BuiltInModuleInfraEnabledByRuntimeFlag())
    return true;
  return context && context->FeatureEnabled(OriginTrialFeature::kBuiltInModuleInfra);
}


bool RuntimeEnabledFeatures::BuiltInModuleKvStorageEnabled(const FeatureContext* context) {
  if (RuntimeEnabledFeatures::BuiltInModuleKvStorageEnabledByRuntimeFlag())
    return true;
  return context && context->FeatureEnabled(OriginTrialFeature::kBuiltInModuleKvStorage);
}


bool RuntimeEnabledFeatures::ContactsManagerEnabled(const FeatureContext* context) {
  if (RuntimeEnabledFeatures::ContactsManagerEnabledByRuntimeFlag())
    return true;
  return context && context->FeatureEnabled(OriginTrialFeature::kContactsManager);
}


bool RuntimeEnabledFeatures::CookieStoreEnabled(const FeatureContext* context) {
  if (RuntimeEnabledFeatures::CookieStoreEnabledByRuntimeFlag())
    return true;
  return context && context->FeatureEnabled(OriginTrialFeature::kCookieStore);
}


bool RuntimeEnabledFeatures::CustomElementsV0Enabled(const FeatureContext* context) {
  if (RuntimeEnabledFeatures::CustomElementsV0EnabledByRuntimeFlag())
    return true;
  return context && context->FeatureEnabled(OriginTrialFeature::kCustomElementsV0);
}


bool RuntimeEnabledFeatures::DisableHardwareNoiseSuppressionEnabled(const FeatureContext* context) {
  if (RuntimeEnabledFeatures::DisableHardwareNoiseSuppressionEnabledByRuntimeFlag())
    return true;
  return context && context->FeatureEnabled(OriginTrialFeature::kDisableHardwareNoiseSuppression);
}


bool RuntimeEnabledFeatures::ElementTimingEnabled(const FeatureContext* context) {
  if (RuntimeEnabledFeatures::ElementTimingEnabledByRuntimeFlag())
    return true;
  return context && context->FeatureEnabled(OriginTrialFeature::kElementTiming);
}


bool RuntimeEnabledFeatures::EventTimingEnabled(const FeatureContext* context) {
  if (RuntimeEnabledFeatures::EventTimingEnabledByRuntimeFlag())
    return true;
  return context && context->FeatureEnabled(OriginTrialFeature::kEventTiming);
}


bool RuntimeEnabledFeatures::ExperimentalIsInputPendingEnabled(const FeatureContext* context) {
  if (RuntimeEnabledFeatures::ExperimentalIsInputPendingEnabledByRuntimeFlag())
    return true;
  return context && context->FeatureEnabled(OriginTrialFeature::kExperimentalIsInputPending);
}


bool RuntimeEnabledFeatures::FeaturePolicyReportingEnabled(const FeatureContext* context) {
  if (RuntimeEnabledFeatures::FeaturePolicyReportingEnabledByRuntimeFlag())
    return true;
  return context && context->FeatureEnabled(OriginTrialFeature::kFeaturePolicyReporting);
}


bool RuntimeEnabledFeatures::HrefTranslateEnabled(const FeatureContext* context) {
  if (!RuntimeEnabledFeatures::TranslateServiceEnabled(context))
    return false;
  if (RuntimeEnabledFeatures::HrefTranslateEnabledByRuntimeFlag())
    return true;
  return context && context->FeatureEnabled(OriginTrialFeature::kHrefTranslate);
}


bool RuntimeEnabledFeatures::HTMLImportsEnabled(const FeatureContext* context) {
  if (RuntimeEnabledFeatures::HTMLImportsEnabledByRuntimeFlag())
    return true;
  return context && context->FeatureEnabled(OriginTrialFeature::kHTMLImports);
}


bool RuntimeEnabledFeatures::InstalledAppEnabled(const FeatureContext* context) {
  if (RuntimeEnabledFeatures::InstalledAppEnabledByRuntimeFlag())
    return true;
  return context && context->FeatureEnabled(OriginTrialFeature::kInstalledApp);
}


bool RuntimeEnabledFeatures::JankTrackingEnabled(const FeatureContext* context) {
  if (RuntimeEnabledFeatures::JankTrackingEnabledByRuntimeFlag())
    return true;
  return context && context->FeatureEnabled(OriginTrialFeature::kJankTracking);
}


bool RuntimeEnabledFeatures::LayoutJankAPIEnabled(const FeatureContext* context) {
  if (RuntimeEnabledFeatures::LayoutJankAPIEnabledByRuntimeFlag())
    return true;
  return context && context->FeatureEnabled(OriginTrialFeature::kLayoutJankAPI);
}


bool RuntimeEnabledFeatures::LegacyPerformanceMemoryCountersEnabled(const FeatureContext* context) {
  if (RuntimeEnabledFeatures::LegacyPerformanceMemoryCountersEnabledByRuntimeFlag())
    return true;
  return context && context->FeatureEnabled(OriginTrialFeature::kLegacyPerformanceMemoryCounters);
}


bool RuntimeEnabledFeatures::MediaCapabilitiesEncryptedMediaEnabled(const FeatureContext* context) {
  if (RuntimeEnabledFeatures::MediaCapabilitiesEncryptedMediaEnabledByRuntimeFlag())
    return true;
  return context && context->FeatureEnabled(OriginTrialFeature::kMediaCapabilitiesEncryptedMedia);
}


bool RuntimeEnabledFeatures::MuteButtonEnabled(const FeatureContext* context) {
  if (!RuntimeEnabledFeatures::PictureInPictureAPIEnabled(context))
    return false;
  if (RuntimeEnabledFeatures::MuteButtonEnabledByRuntimeFlag())
    return true;
  return context && context->FeatureEnabled(OriginTrialFeature::kMuteButton);
}


bool RuntimeEnabledFeatures::OriginTrialsSampleAPIEnabled(const FeatureContext* context) {
  if (RuntimeEnabledFeatures::OriginTrialsSampleAPIEnabledByRuntimeFlag())
    return true;
  return context && context->FeatureEnabled(OriginTrialFeature::kOriginTrialsSampleAPI);
}


bool RuntimeEnabledFeatures::OriginTrialsSampleAPIDependentEnabled(const FeatureContext* context) {
  if (!RuntimeEnabledFeatures::OriginTrialsSampleAPIEnabled(context))
    return false;
  if (RuntimeEnabledFeatures::OriginTrialsSampleAPIDependentEnabledByRuntimeFlag())
    return true;
  // The feature does not have an origin trial name and its runtime flag
  // is not enabled.
  return false;
}


bool RuntimeEnabledFeatures::OriginTrialsSampleAPIImpliedEnabled(const FeatureContext* context) {
  if (RuntimeEnabledFeatures::OriginTrialsSampleAPIImpliedEnabledByRuntimeFlag())
    return true;
  return context && context->FeatureEnabled(OriginTrialFeature::kOriginTrialsSampleAPIImplied);
}


bool RuntimeEnabledFeatures::OriginTrialsSampleAPIInvalidOSEnabled(const FeatureContext* context) {
  if (RuntimeEnabledFeatures::OriginTrialsSampleAPIInvalidOSEnabledByRuntimeFlag())
    return true;
  return context && context->FeatureEnabled(OriginTrialFeature::kOriginTrialsSampleAPIInvalidOS);
}


bool RuntimeEnabledFeatures::OriginTrialsSampleAPINavigationEnabled(const FeatureContext* context) {
  if (RuntimeEnabledFeatures::OriginTrialsSampleAPINavigationEnabledByRuntimeFlag())
    return true;
  return context && context->FeatureEnabled(OriginTrialFeature::kOriginTrialsSampleAPINavigation);
}


bool RuntimeEnabledFeatures::PageLifecycleTransitionsOptInEnabled(const FeatureContext* context) {
  if (RuntimeEnabledFeatures::PageLifecycleTransitionsOptInEnabledByRuntimeFlag())
    return true;
  return context && context->FeatureEnabled(OriginTrialFeature::kPageLifecycleTransitionsOptIn);
}


bool RuntimeEnabledFeatures::PageLifecycleTransitionsOptOutEnabled(const FeatureContext* context) {
  if (RuntimeEnabledFeatures::PageLifecycleTransitionsOptOutEnabledByRuntimeFlag())
    return true;
  return context && context->FeatureEnabled(OriginTrialFeature::kPageLifecycleTransitionsOptOut);
}


bool RuntimeEnabledFeatures::PerMethodCanMakePaymentQuotaEnabled(const FeatureContext* context) {
  if (RuntimeEnabledFeatures::PerMethodCanMakePaymentQuotaEnabledByRuntimeFlag())
    return true;
  return context && context->FeatureEnabled(OriginTrialFeature::kPerMethodCanMakePaymentQuota);
}


bool RuntimeEnabledFeatures::PriorityHintsEnabled(const FeatureContext* context) {
  if (RuntimeEnabledFeatures::PriorityHintsEnabledByRuntimeFlag())
    return true;
  return context && context->FeatureEnabled(OriginTrialFeature::kPriorityHints);
}


bool RuntimeEnabledFeatures::RtcAudioJitterBufferMaxPacketsEnabled(const FeatureContext* context) {
  if (RuntimeEnabledFeatures::RtcAudioJitterBufferMaxPacketsEnabledByRuntimeFlag())
    return true;
  return context && context->FeatureEnabled(OriginTrialFeature::kRtcAudioJitterBufferMaxPackets);
}


bool RuntimeEnabledFeatures::RtcAudioJitterBufferRtxHandlingEnabled(const FeatureContext* context) {
  if (RuntimeEnabledFeatures::RtcAudioJitterBufferRtxHandlingEnabledByRuntimeFlag())
    return true;
  return context && context->FeatureEnabled(OriginTrialFeature::kRtcAudioJitterBufferRtxHandling);
}


bool RuntimeEnabledFeatures::RTCIceTransportExtensionEnabled(const FeatureContext* context) {
  if (RuntimeEnabledFeatures::RTCIceTransportExtensionEnabledByRuntimeFlag())
    return true;
  return context && context->FeatureEnabled(OriginTrialFeature::kRTCIceTransportExtension);
}


bool RuntimeEnabledFeatures::RtcJitterBufferDelayHintEnabled(const FeatureContext* context) {
  if (RuntimeEnabledFeatures::RtcJitterBufferDelayHintEnabledByRuntimeFlag())
    return true;
  return context && context->FeatureEnabled(OriginTrialFeature::kRtcJitterBufferDelayHint);
}


bool RuntimeEnabledFeatures::RTCQuicTransportEnabled(const FeatureContext* context) {
  if (RuntimeEnabledFeatures::RTCQuicTransportEnabledByRuntimeFlag())
    return true;
  return context && context->FeatureEnabled(OriginTrialFeature::kRTCQuicTransport);
}


bool RuntimeEnabledFeatures::RTCStatsRelativePacketArrivalDelayEnabled(const FeatureContext* context) {
  if (RuntimeEnabledFeatures::RTCStatsRelativePacketArrivalDelayEnabledByRuntimeFlag())
    return true;
  return context && context->FeatureEnabled(OriginTrialFeature::kRTCStatsRelativePacketArrivalDelay);
}


bool RuntimeEnabledFeatures::ShadowDOMV0Enabled(const FeatureContext* context) {
  if (RuntimeEnabledFeatures::ShadowDOMV0EnabledByRuntimeFlag())
    return true;
  return context && context->FeatureEnabled(OriginTrialFeature::kShadowDOMV0);
}


bool RuntimeEnabledFeatures::SignatureBasedIntegrityEnabled(const FeatureContext* context) {
  if (RuntimeEnabledFeatures::SignatureBasedIntegrityEnabledByRuntimeFlag())
    return true;
  return context && context->FeatureEnabled(OriginTrialFeature::kSignatureBasedIntegrity);
}


bool RuntimeEnabledFeatures::SkipAdEnabled(const FeatureContext* context) {
  if (!RuntimeEnabledFeatures::MediaSessionEnabled(context))
    return false;
  if (RuntimeEnabledFeatures::SkipAdEnabledByRuntimeFlag())
    return true;
  return context && context->FeatureEnabled(OriginTrialFeature::kSkipAd);
}


bool RuntimeEnabledFeatures::StaleWhileRevalidateEnabled(const FeatureContext* context) {
  if (RuntimeEnabledFeatures::StaleWhileRevalidateEnabledByRuntimeFlag())
    return true;
  return context && context->FeatureEnabled(OriginTrialFeature::kStaleWhileRevalidate);
}


bool RuntimeEnabledFeatures::TouchEventFeatureDetectionEnabled(const FeatureContext* context) {
  if (RuntimeEnabledFeatures::TouchEventFeatureDetectionEnabledByRuntimeFlag())
    return true;
  return context && context->FeatureEnabled(OriginTrialFeature::kTouchEventFeatureDetection);
}


bool RuntimeEnabledFeatures::TrustedDOMTypesEnabled(const FeatureContext* context) {
  if (RuntimeEnabledFeatures::TrustedDOMTypesEnabledByRuntimeFlag())
    return true;
  return context && context->FeatureEnabled(OriginTrialFeature::kTrustedDOMTypes);
}


bool RuntimeEnabledFeatures::UnoptimizedImagePoliciesEnabled(const FeatureContext* context) {
  if (RuntimeEnabledFeatures::UnoptimizedImagePoliciesEnabledByRuntimeFlag())
    return true;
  return context && context->FeatureEnabled(OriginTrialFeature::kUnoptimizedImagePolicies);
}


bool RuntimeEnabledFeatures::WebAssemblyThreadsEnabled(const FeatureContext* context) {
  if (RuntimeEnabledFeatures::WebAssemblyThreadsEnabledByRuntimeFlag())
    return true;
  return context && context->FeatureEnabled(OriginTrialFeature::kWebAssemblyThreads);
}


bool RuntimeEnabledFeatures::WebVREnabled(const FeatureContext* context) {
  if (RuntimeEnabledFeatures::WebVREnabledByRuntimeFlag())
    return true;
  return context && context->FeatureEnabled(OriginTrialFeature::kWebVR);
}


bool RuntimeEnabledFeatures::WebXREnabled(const FeatureContext* context) {
  if (RuntimeEnabledFeatures::WebXREnabledByRuntimeFlag())
    return true;
  return context && context->FeatureEnabled(OriginTrialFeature::kWebXR);
}


bool RuntimeEnabledFeatures::is_accelerated_2d_canvas_enabled_ = true;
bool RuntimeEnabledFeatures::is_accessibility_object_model_enabled_ = false;
bool RuntimeEnabledFeatures::is_ad_tagging_enabled_ = false;
bool RuntimeEnabledFeatures::is_allow_activation_delegation_attr_enabled_ = false;
bool RuntimeEnabledFeatures::is_allow_content_initiated_data_url_navigations_enabled_ = true;
bool RuntimeEnabledFeatures::is_animation_worklet_enabled_ = false;
bool RuntimeEnabledFeatures::is_async_clipboard_enabled_ = false;
bool RuntimeEnabledFeatures::is_audio_video_tracks_enabled_ = false;
bool RuntimeEnabledFeatures::is_automation_controlled_enabled_ = false;
bool RuntimeEnabledFeatures::is_auto_picture_in_picture_enabled_ = false;
bool RuntimeEnabledFeatures::is_autoplay_ignores_web_audio_enabled_ = false;
bool RuntimeEnabledFeatures::is_background_fetch_enabled_ = true;
bool RuntimeEnabledFeatures::is_background_video_track_optimization_enabled_ = true;
bool RuntimeEnabledFeatures::is_badging_enabled_ = false;
bool RuntimeEnabledFeatures::is_bidi_caret_affinity_enabled_ = false;
bool RuntimeEnabledFeatures::is_blink_gen_property_trees_enabled_ = true;
bool RuntimeEnabledFeatures::is_blink_runtime_call_stats_enabled_ = false;
bool RuntimeEnabledFeatures::is_bloated_renderer_detection_enabled_ = false;
bool RuntimeEnabledFeatures::is_bloated_renderer_detection_skip_uptime_check_enabled_ = false;
bool RuntimeEnabledFeatures::is_blob_read_methods_enabled_ = true;
bool RuntimeEnabledFeatures::is_block_credentialed_subresources_enabled_ = true;
bool RuntimeEnabledFeatures::is_blocking_downloads_in_sandbox_without_user_activation_enabled_ = false;
bool RuntimeEnabledFeatures::is_block_meta_set_cookie_enabled_ = true;
bool RuntimeEnabledFeatures::is_built_in_module_all_enabled_ = false;
bool RuntimeEnabledFeatures::is_built_in_module_infra_enabled_ = false;
bool RuntimeEnabledFeatures::is_built_in_module_kv_storage_enabled_ = false;
bool RuntimeEnabledFeatures::is_cache_inline_script_code_enabled_ = false;
bool RuntimeEnabledFeatures::is_cache_storage_add_all_rejects_duplicates_enabled_ = true;
bool RuntimeEnabledFeatures::is_call_capture_listeners_at_capture_phase_at_shadow_hosts_enabled_ = true;
bool RuntimeEnabledFeatures::is_canvas_2d_context_lost_restored_enabled_ = false;
bool RuntimeEnabledFeatures::is_canvas_2d_fixed_rendering_mode_enabled_ = false;
bool RuntimeEnabledFeatures::is_canvas_2d_image_chromium_enabled_ = false;
bool RuntimeEnabledFeatures::is_canvas_2d_scroll_path_into_view_enabled_ = false;
bool RuntimeEnabledFeatures::is_canvas_color_management_enabled_ = false;
bool RuntimeEnabledFeatures::is_canvas_hit_region_enabled_ = false;
bool RuntimeEnabledFeatures::is_canvas_image_smoothing_enabled_ = false;
bool RuntimeEnabledFeatures::is_click_retargetting_enabled_ = false;
bool RuntimeEnabledFeatures::is_client_placeholders_for_server_lo_fi_enabled_ = false;
bool RuntimeEnabledFeatures::is_composite_after_paint_enabled_ = false;
bool RuntimeEnabledFeatures::is_compositor_touch_action_enabled_ = false;
bool RuntimeEnabledFeatures::is_computed_accessibility_info_enabled_ = false;
bool RuntimeEnabledFeatures::is_contacts_manager_enabled_ = false;
bool RuntimeEnabledFeatures::is_context_menu_enabled_ = false;
bool RuntimeEnabledFeatures::is_cookie_store_enabled_ = false;
bool RuntimeEnabledFeatures::is_cors_rfc_1918_enabled_ = false;
bool RuntimeEnabledFeatures::is_css_3_text_enabled_ = false;
bool RuntimeEnabledFeatures::is_css_additive_animations_enabled_ = false;
bool RuntimeEnabledFeatures::is_css_alt_text_enabled_ = false;
bool RuntimeEnabledFeatures::is_css_backdrop_filter_enabled_ = false;
bool RuntimeEnabledFeatures::is_css_calc_as_int_enabled_ = false;
bool RuntimeEnabledFeatures::is_css_focus_visible_enabled_ = false;
bool RuntimeEnabledFeatures::is_css_font_feature_values_enabled_ = false;
bool RuntimeEnabledFeatures::is_css_font_size_adjust_enabled_ = false;
bool RuntimeEnabledFeatures::is_css_hex_alpha_color_enabled_ = true;
bool RuntimeEnabledFeatures::is_css_independent_transform_properties_enabled_ = false;
bool RuntimeEnabledFeatures::is_css_layout_api_enabled_ = false;
bool RuntimeEnabledFeatures::is_css_logical_enabled_ = false;
bool RuntimeEnabledFeatures::is_css_mask_source_type_enabled_ = false;
bool RuntimeEnabledFeatures::is_css_offset_path_ray_enabled_ = false;
bool RuntimeEnabledFeatures::is_css_offset_path_ray_contain_enabled_ = false;
bool RuntimeEnabledFeatures::is_css_offset_position_anchor_enabled_ = false;
bool RuntimeEnabledFeatures::is_css_paint_api_arguments_enabled_ = false;
bool RuntimeEnabledFeatures::is_css_part_pseudo_element_enabled_ = true;
bool RuntimeEnabledFeatures::is_css_picture_in_picture_enabled_ = true;
bool RuntimeEnabledFeatures::is_css_pseudo_is_enabled_ = false;
bool RuntimeEnabledFeatures::is_css_pseudo_where_enabled_ = false;
bool RuntimeEnabledFeatures::is_css_snap_size_enabled_ = false;
bool RuntimeEnabledFeatures::is_css_variables_2_enabled_ = false;
bool RuntimeEnabledFeatures::is_css_variables_2_image_values_enabled_ = false;
bool RuntimeEnabledFeatures::is_css_variables_2_transform_values_enabled_ = false;
bool RuntimeEnabledFeatures::is_css_viewport_enabled_ = false;
bool RuntimeEnabledFeatures::is_custom_element_default_style_enabled_ = false;
bool RuntimeEnabledFeatures::is_custom_elements_v0_enabled_ = true;
bool RuntimeEnabledFeatures::is_custom_user_timing_enabled_ = false;
bool RuntimeEnabledFeatures::is_database_enabled_ = true;
bool RuntimeEnabledFeatures::is_decode_to_yuv_enabled_ = false;
bool RuntimeEnabledFeatures::is_desktop_capture_disable_local_echo_control_enabled_ = false;
bool RuntimeEnabledFeatures::is_disable_hardware_noise_suppression_enabled_ = false;
bool RuntimeEnabledFeatures::is_display_cutout_api_enabled_ = false;
bool RuntimeEnabledFeatures::is_display_locking_enabled_ = false;
bool RuntimeEnabledFeatures::is_document_cookie_enabled_ = false;
bool RuntimeEnabledFeatures::is_document_domain_enabled_ = false;
bool RuntimeEnabledFeatures::is_document_write_enabled_ = false;
bool RuntimeEnabledFeatures::is_editing_ng_enabled_ = false;
bool RuntimeEnabledFeatures::is_element_internals_enabled_ = false;
bool RuntimeEnabledFeatures::is_element_timing_enabled_ = false;
bool RuntimeEnabledFeatures::is_encrypted_media_encryption_scheme_query_enabled_ = false;
bool RuntimeEnabledFeatures::is_encrypted_media_hdcp_policy_check_enabled_ = true;
bool RuntimeEnabledFeatures::is_encrypted_media_persistent_usage_record_session_enabled_ = false;
bool RuntimeEnabledFeatures::is_event_timing_enabled_ = false;
bool RuntimeEnabledFeatures::is_exec_command_in_java_script_enabled_ = false;
bool RuntimeEnabledFeatures::is_expensive_background_timer_throttling_enabled_ = true;
bool RuntimeEnabledFeatures::is_experimental_content_security_policy_features_enabled_ = false;
bool RuntimeEnabledFeatures::is_experimental_is_input_pending_enabled_ = false;
bool RuntimeEnabledFeatures::is_experimental_productivity_features_enabled_ = false;
bool RuntimeEnabledFeatures::is_extended_text_metrics_enabled_ = false;
bool RuntimeEnabledFeatures::is_extra_webgl_video_texture_metadata_enabled_ = false;
bool RuntimeEnabledFeatures::is_fallback_cursor_mode_enabled_ = false;
bool RuntimeEnabledFeatures::is_fast_border_radius_enabled_ = false;
bool RuntimeEnabledFeatures::is_fast_flat_tree_traversal_enabled_ = true;
bool RuntimeEnabledFeatures::is_feature_policy_for_sandbox_enabled_ = false;
bool RuntimeEnabledFeatures::is_feature_policy_java_script_interface_enabled_ = true;
bool RuntimeEnabledFeatures::is_feature_policy_reporting_enabled_ = false;
bool RuntimeEnabledFeatures::is_feature_policy_vibrate_feature_enabled_ = false;
bool RuntimeEnabledFeatures::is_fetch_metadata_enabled_ = true;
bool RuntimeEnabledFeatures::is_fetch_metadata_destination_enabled_ = false;
bool RuntimeEnabledFeatures::is_file_system_enabled_ = true;
bool RuntimeEnabledFeatures::is_first_contentful_paint_plus_plus_enabled_ = false;
bool RuntimeEnabledFeatures::is_focusless_spatial_navigation_enabled_ = false;
bool RuntimeEnabledFeatures::is_font_src_local_matching_enabled_ = false;
bool RuntimeEnabledFeatures::is_forbid_sync_xhr_in_page_dismissal_enabled_ = false;
bool RuntimeEnabledFeatures::is_force_overlay_fullscreen_video_enabled_ = false;
bool RuntimeEnabledFeatures::is_force_synchronous_html_parsing_enabled_ = false;
bool RuntimeEnabledFeatures::is_form_associated_custom_elements_enabled_ = false;
bool RuntimeEnabledFeatures::is_form_data_event_enabled_ = false;
bool RuntimeEnabledFeatures::is_fractional_mouse_event_enabled_ = false;
bool RuntimeEnabledFeatures::is_fractional_scroll_offsets_enabled_ = false;
bool RuntimeEnabledFeatures::is_freeze_frames_on_visibility_enabled_ = false;
bool RuntimeEnabledFeatures::is_gamepad_button_axis_events_enabled_ = false;
bool RuntimeEnabledFeatures::is_get_display_media_enabled_ = true;
bool RuntimeEnabledFeatures::is_heap_compaction_enabled_ = true;
bool RuntimeEnabledFeatures::is_heap_concurrent_marking_enabled_ = false;
bool RuntimeEnabledFeatures::is_heap_incremental_marking_enabled_ = true;
bool RuntimeEnabledFeatures::is_heap_incremental_marking_stress_enabled_ = false;
bool RuntimeEnabledFeatures::is_href_translate_enabled_ = false;
bool RuntimeEnabledFeatures::is_html_imports_enabled_ = true;
bool RuntimeEnabledFeatures::is_html_imports_only_chrome_enabled_ = false;
bool RuntimeEnabledFeatures::is_html_imports_style_application_enabled_ = true;
bool RuntimeEnabledFeatures::is_idb_observer_enabled_ = false;
bool RuntimeEnabledFeatures::is_idb_transaction_commit_enabled_ = true;
bool RuntimeEnabledFeatures::is_idle_detection_enabled_ = false;
bool RuntimeEnabledFeatures::is_ignore_cross_origin_window_when_named_access_on_window_enabled_ = false;
bool RuntimeEnabledFeatures::is_image_orientation_enabled_ = false;
bool RuntimeEnabledFeatures::is_implicit_root_scroller_enabled_ = false;
bool RuntimeEnabledFeatures::is_inert_attribute_enabled_ = false;
bool RuntimeEnabledFeatures::is_installed_app_enabled_ = false;
bool RuntimeEnabledFeatures::is_intersection_observer_v_2_enabled_ = true;
bool RuntimeEnabledFeatures::is_invisible_dom_enabled_ = false;
bool RuntimeEnabledFeatures::is_isolated_code_cache_enabled_ = false;
bool RuntimeEnabledFeatures::is_isolated_world_csp_enabled_ = false;
bool RuntimeEnabledFeatures::is_jank_tracking_enabled_ = true;
bool RuntimeEnabledFeatures::is_jank_tracking_sweep_line_enabled_ = false;
bool RuntimeEnabledFeatures::is_keyboard_focusable_scrollers_enabled_ = false;
bool RuntimeEnabledFeatures::is_lang_attribute_aware_form_control_ui_enabled_ = false;
bool RuntimeEnabledFeatures::is_lang_client_hint_header_enabled_ = false;
bool RuntimeEnabledFeatures::is_layout_jank_api_enabled_ = false;
bool RuntimeEnabledFeatures::is_layout_ng_enabled_ = false;
bool RuntimeEnabledFeatures::is_layout_ng_block_fragmentation_enabled_ = false;
bool RuntimeEnabledFeatures::is_layout_ng_fieldset_enabled_ = false;
bool RuntimeEnabledFeatures::is_layout_ng_flex_box_enabled_ = false;
bool RuntimeEnabledFeatures::is_layout_ng_fragment_caching_enabled_ = false;
bool RuntimeEnabledFeatures::is_lazy_frame_loading_enabled_ = false;
bool RuntimeEnabledFeatures::is_lazy_frame_visible_load_time_metrics_enabled_ = false;
bool RuntimeEnabledFeatures::is_lazy_image_loading_enabled_ = false;
bool RuntimeEnabledFeatures::is_lazy_image_visible_load_time_metrics_enabled_ = false;
bool RuntimeEnabledFeatures::is_lazy_initialize_media_controls_enabled_ = false;
bool RuntimeEnabledFeatures::is_legacy_performance_memory_counters_enabled_ = false;
bool RuntimeEnabledFeatures::is_long_task_v_2_enabled_ = false;
bool RuntimeEnabledFeatures::is_manual_slotting_enabled_ = false;
bool RuntimeEnabledFeatures::is_media_capabilities_encoding_info_enabled_ = false;
bool RuntimeEnabledFeatures::is_media_capabilities_encrypted_media_enabled_ = false;
bool RuntimeEnabledFeatures::is_media_capture_depth_video_kind_enabled_ = false;
bool RuntimeEnabledFeatures::is_media_cast_overlay_button_enabled_ = false;
bool RuntimeEnabledFeatures::is_media_controls_expand_gesture_enabled_ = false;
bool RuntimeEnabledFeatures::is_media_document_download_button_enabled_ = false;
bool RuntimeEnabledFeatures::is_media_engagement_bypass_autoplay_policies_enabled_ = false;
bool RuntimeEnabledFeatures::is_media_query_prefers_color_scheme_enabled_ = true;
bool RuntimeEnabledFeatures::is_media_query_shape_enabled_ = false;
bool RuntimeEnabledFeatures::is_media_session_enabled_ = true;
bool RuntimeEnabledFeatures::is_media_source_experimental_enabled_ = false;
bool RuntimeEnabledFeatures::is_media_source_new_abort_and_duration_enabled_ = false;
bool RuntimeEnabledFeatures::is_media_stream_track_content_hint_enabled_ = true;
bool RuntimeEnabledFeatures::is_merge_blocking_non_blocking_pools_enabled_ = false;
bool RuntimeEnabledFeatures::is_meta_color_scheme_enabled_ = false;
bool RuntimeEnabledFeatures::is_middle_click_autoscroll_enabled_ = false;
bool RuntimeEnabledFeatures::is_mime_handler_view_in_cross_process_frame_enabled_ = false;
bool RuntimeEnabledFeatures::is_mobile_layout_theme_enabled_ = false;
bool RuntimeEnabledFeatures::is_modern_media_controls_enabled_ = false;
bool RuntimeEnabledFeatures::is_module_dedicated_worker_enabled_ = false;
bool RuntimeEnabledFeatures::is_module_service_worker_enabled_ = false;
bool RuntimeEnabledFeatures::is_mojo_js_enabled_ = false;
bool RuntimeEnabledFeatures::is_mojo_js_test_enabled_ = false;
bool RuntimeEnabledFeatures::is_movement_xy_in_blink_enabled_ = false;
bool RuntimeEnabledFeatures::is_mute_button_enabled_ = false;
bool RuntimeEnabledFeatures::is_native_file_system_enabled_ = false;
bool RuntimeEnabledFeatures::is_native_streams_enabled_ = false;
bool RuntimeEnabledFeatures::is_navigator_device_memory_enabled_ = true;
bool RuntimeEnabledFeatures::is_navigator_language_in_insecure_context_enabled_ = true;
bool RuntimeEnabledFeatures::is_network_service_enabled_ = false;
bool RuntimeEnabledFeatures::is_new_remote_playback_pipeline_enabled_ = false;
bool RuntimeEnabledFeatures::is_no_idle_encoding_for_web_tests_enabled_ = false;
bool RuntimeEnabledFeatures::is_notifications_enabled_ = true;
bool RuntimeEnabledFeatures::is_notification_triggers_enabled_ = false;
bool RuntimeEnabledFeatures::is_off_main_thread_css_paint_enabled_ = false;
bool RuntimeEnabledFeatures::is_offscreen_canvas_enabled_ = true;
bool RuntimeEnabledFeatures::is_offscreen_canvas_commit_enabled_ = false;
bool RuntimeEnabledFeatures::is_offscreen_canvas_text_enabled_ = true;
bool RuntimeEnabledFeatures::is_origin_trials_enabled_ = true;
bool RuntimeEnabledFeatures::is_origin_trials_sample_api_enabled_ = false;
bool RuntimeEnabledFeatures::is_origin_trials_sample_api_dependent_enabled_ = false;
bool RuntimeEnabledFeatures::is_origin_trials_sample_api_implied_enabled_ = false;
bool RuntimeEnabledFeatures::is_origin_trials_sample_api_invalid_os_enabled_ = false;
bool RuntimeEnabledFeatures::is_origin_trials_sample_api_navigation_enabled_ = false;
bool RuntimeEnabledFeatures::is_out_of_blink_cors_enabled_ = false;
bool RuntimeEnabledFeatures::is_overflow_icons_for_media_controls_enabled_ = false;
bool RuntimeEnabledFeatures::is_overlay_scrollbars_enabled_ = false;
bool RuntimeEnabledFeatures::is_overscroll_customization_enabled_ = false;
bool RuntimeEnabledFeatures::is_page_lifecycle_transitions_opt_in_enabled_ = false;
bool RuntimeEnabledFeatures::is_page_lifecycle_transitions_opt_out_enabled_ = false;
bool RuntimeEnabledFeatures::is_paint_under_invalidation_checking_enabled_ = false;
bool RuntimeEnabledFeatures::is_passive_document_event_listeners_enabled_ = true;
bool RuntimeEnabledFeatures::is_passive_document_wheel_event_listeners_enabled_ = true;
bool RuntimeEnabledFeatures::is_pass_paint_visual_rect_to_compositor_enabled_ = false;
bool RuntimeEnabledFeatures::is_payment_app_enabled_ = false;
bool RuntimeEnabledFeatures::is_payment_handler_change_payment_method_enabled_ = false;
bool RuntimeEnabledFeatures::is_payment_method_change_event_enabled_ = false;
bool RuntimeEnabledFeatures::is_payment_request_enabled_ = false;
bool RuntimeEnabledFeatures::is_payment_request_has_enrolled_instrument_enabled_ = true;
bool RuntimeEnabledFeatures::is_payment_request_merchant_validation_event_enabled_ = false;
bool RuntimeEnabledFeatures::is_payment_retry_enabled_ = false;
bool RuntimeEnabledFeatures::is_performance_manager_instrumentation_enabled_ = false;
bool RuntimeEnabledFeatures::is_performance_observer_buffered_flag_enabled_ = false;
bool RuntimeEnabledFeatures::is_periodic_background_sync_enabled_ = false;
bool RuntimeEnabledFeatures::is_per_method_can_make_payment_quota_enabled_ = false;
bool RuntimeEnabledFeatures::is_permission_delegation_enabled_ = false;
bool RuntimeEnabledFeatures::is_permissions_enabled_ = true;
bool RuntimeEnabledFeatures::is_permissions_request_revoke_enabled_ = false;
bool RuntimeEnabledFeatures::is_picture_in_picture_enabled_ = false;
bool RuntimeEnabledFeatures::is_picture_in_picture_v_2_enabled_ = false;
bool RuntimeEnabledFeatures::is_pointer_raw_update_enabled_ = false;
bool RuntimeEnabledFeatures::is_portals_enabled_ = false;
bool RuntimeEnabledFeatures::is_post_animation_frame_enabled_ = false;
bool RuntimeEnabledFeatures::is_precise_memory_info_enabled_ = false;
bool RuntimeEnabledFeatures::is_predicted_events_enabled_ = false;
bool RuntimeEnabledFeatures::is_prefixed_video_fullscreen_enabled_ = true;
bool RuntimeEnabledFeatures::is_presentation_enabled_ = true;
bool RuntimeEnabledFeatures::is_print_browser_enabled_ = false;
bool RuntimeEnabledFeatures::is_priority_hints_enabled_ = false;
bool RuntimeEnabledFeatures::is_push_messaging_enabled_ = true;
bool RuntimeEnabledFeatures::is_raster_inducing_scroll_enabled_ = false;
bool RuntimeEnabledFeatures::is_reduced_referrer_granularity_enabled_ = false;
bool RuntimeEnabledFeatures::is_remote_playback_enabled_ = true;
bool RuntimeEnabledFeatures::is_rendering_pipeline_throttling_enabled_ = true;
bool RuntimeEnabledFeatures::is_resource_load_scheduler_enabled_ = false;
bool RuntimeEnabledFeatures::is_restrict_app_cache_to_secure_contexts_enabled_ = true;
bool RuntimeEnabledFeatures::is_restrict_device_sensor_events_to_secure_contexts_enabled_ = false;
bool RuntimeEnabledFeatures::is_restrict_lazy_frame_loading_to_data_saver_enabled_ = false;
bool RuntimeEnabledFeatures::is_restrict_lazy_image_loading_to_data_saver_enabled_ = false;
bool RuntimeEnabledFeatures::is_rtc_audio_jitter_buffer_max_packets_enabled_ = false;
bool RuntimeEnabledFeatures::is_rtc_audio_jitter_buffer_rtx_handling_enabled_ = false;
bool RuntimeEnabledFeatures::is_rtc_dtls_transport_enabled_ = true;
bool RuntimeEnabledFeatures::is_rtc_ice_transport_extension_enabled_ = false;
bool RuntimeEnabledFeatures::is_rtc_jitter_buffer_delay_hint_enabled_ = false;
bool RuntimeEnabledFeatures::is_rtc_quic_transport_enabled_ = false;
bool RuntimeEnabledFeatures::is_rtc_rtp_sender_parameters_enabled_ = true;
bool RuntimeEnabledFeatures::is_rtc_sctp_transport_enabled_ = false;
bool RuntimeEnabledFeatures::is_rtc_stats_relative_packet_arrival_delay_enabled_ = false;
bool RuntimeEnabledFeatures::is_rtc_unified_plan_enabled_ = true;
bool RuntimeEnabledFeatures::is_rtc_unified_plan_by_default_enabled_ = false;
bool RuntimeEnabledFeatures::is_scripted_speech_recognition_enabled_ = true;
bool RuntimeEnabledFeatures::is_scripted_speech_synthesis_enabled_ = true;
bool RuntimeEnabledFeatures::is_script_streaming_on_preload_enabled_ = false;
bool RuntimeEnabledFeatures::is_scroll_anchor_serialization_enabled_ = false;
bool RuntimeEnabledFeatures::is_scroll_customization_enabled_ = false;
bool RuntimeEnabledFeatures::is_scroll_top_left_interop_enabled_ = true;
bool RuntimeEnabledFeatures::is_send_beacon_throw_for_blob_with_non_simple_type_enabled_ = true;
bool RuntimeEnabledFeatures::is_send_mouse_events_disabled_form_controls_enabled_ = false;
bool RuntimeEnabledFeatures::is_sensor_enabled_ = true;
bool RuntimeEnabledFeatures::is_sensor_extra_classes_enabled_ = false;
bool RuntimeEnabledFeatures::is_set_root_scroller_enabled_ = false;
bool RuntimeEnabledFeatures::is_shadow_dom_v0_enabled_ = true;
bool RuntimeEnabledFeatures::is_shadow_piercing_descendant_combinator_enabled_ = false;
bool RuntimeEnabledFeatures::is_shape_detection_enabled_ = false;
bool RuntimeEnabledFeatures::is_shared_array_buffer_enabled_ = true;
bool RuntimeEnabledFeatures::is_signature_based_integrity_enabled_ = false;
bool RuntimeEnabledFeatures::is_signed_exchange_subresource_prefetch_enabled_ = false;
bool RuntimeEnabledFeatures::is_skip_ad_enabled_ = false;
bool RuntimeEnabledFeatures::is_skip_touch_event_filter_enabled_ = false;
bool RuntimeEnabledFeatures::is_smooth_scroll_js_intervention_enabled_ = true;
bool RuntimeEnabledFeatures::is_sms_receiver_enabled_ = false;
bool RuntimeEnabledFeatures::is_speech_synthesis_event_char_length_enabled_ = false;
bool RuntimeEnabledFeatures::is_stable_blink_features_enabled_ = true;
bool RuntimeEnabledFeatures::is_stacked_css_property_animations_enabled_ = false;
bool RuntimeEnabledFeatures::is_stale_while_revalidate_enabled_ = true;
bool RuntimeEnabledFeatures::is_storage_quota_details_enabled_ = true;
bool RuntimeEnabledFeatures::is_streams_native_enabled_ = false;
bool RuntimeEnabledFeatures::is_text_fragment_identifiers_enabled_ = false;
bool RuntimeEnabledFeatures::is_text_underline_position_left_right_enabled_ = true;
bool RuntimeEnabledFeatures::is_timer_throttling_for_background_tabs_enabled_ = true;
bool RuntimeEnabledFeatures::is_timer_throttling_for_hidden_frames_enabled_ = true;
bool RuntimeEnabledFeatures::is_touch_event_feature_detection_enabled_ = true;
bool RuntimeEnabledFeatures::is_track_layout_passes_per_block_enabled_ = false;
bool RuntimeEnabledFeatures::is_transferable_streams_enabled_ = false;
bool RuntimeEnabledFeatures::is_translate_service_enabled_ = false;
bool RuntimeEnabledFeatures::is_trusted_dom_types_enabled_ = false;
bool RuntimeEnabledFeatures::is_unclosed_form_control_is_invalid_enabled_ = false;
bool RuntimeEnabledFeatures::is_unified_pointer_capture_in_blink_enabled_ = true;
bool RuntimeEnabledFeatures::is_unified_touch_adjustment_enabled_ = true;
bool RuntimeEnabledFeatures::is_unoptimized_image_policies_enabled_ = false;
bool RuntimeEnabledFeatures::is_update_hover_from_layout_change_at_begin_frame_enabled_ = false;
bool RuntimeEnabledFeatures::is_update_hover_from_scroll_at_begin_frame_enabled_ = false;
bool RuntimeEnabledFeatures::is_user_activation_api_enabled_ = true;
bool RuntimeEnabledFeatures::is_user_activation_post_message_transfer_enabled_ = false;
bool RuntimeEnabledFeatures::is_user_activation_same_origin_visibility_enabled_ = false;
bool RuntimeEnabledFeatures::is_user_activation_v_2_enabled_ = false;
bool RuntimeEnabledFeatures::is_user_agent_client_hint_enabled_ = false;
bool RuntimeEnabledFeatures::is_v8_idle_tasks_enabled_ = false;
bool RuntimeEnabledFeatures::is_video_auto_fullscreen_enabled_ = false;
bool RuntimeEnabledFeatures::is_video_fullscreen_detection_enabled_ = false;
bool RuntimeEnabledFeatures::is_video_fullscreen_orientation_lock_enabled_ = false;
bool RuntimeEnabledFeatures::is_video_rotate_to_fullscreen_enabled_ = false;
bool RuntimeEnabledFeatures::is_visibility_collapse_column_enabled_ = false;
bool RuntimeEnabledFeatures::is_wake_lock_navigator_enabled_ = false;
bool RuntimeEnabledFeatures::is_wasm_code_cache_enabled_ = false;
bool RuntimeEnabledFeatures::is_web_animations_api_enabled_ = false;
bool RuntimeEnabledFeatures::is_web_animations_svg_enabled_ = false;
bool RuntimeEnabledFeatures::is_web_assembly_threads_enabled_ = false;
bool RuntimeEnabledFeatures::is_web_auth_enabled_ = false;
bool RuntimeEnabledFeatures::is_web_bluetooth_scanning_enabled_ = false;
bool RuntimeEnabledFeatures::is_webgl2_compute_context_enabled_ = false;
bool RuntimeEnabledFeatures::is_webgl_draft_extensions_enabled_ = false;
bool RuntimeEnabledFeatures::is_webgl_image_chromium_enabled_ = false;
bool RuntimeEnabledFeatures::is_webgpu_enabled_ = false;
bool RuntimeEnabledFeatures::is_web_hid_enabled_ = false;
bool RuntimeEnabledFeatures::is_web_nfc_enabled_ = false;
bool RuntimeEnabledFeatures::is_web_share_enabled_ = false;
bool RuntimeEnabledFeatures::is_web_share_v_2_enabled_ = false;
bool RuntimeEnabledFeatures::is_web_usb_enabled_ = true;
bool RuntimeEnabledFeatures::is_web_usb_on_dedicated_workers_enabled_ = true;
bool RuntimeEnabledFeatures::is_web_vr_enabled_ = false;
bool RuntimeEnabledFeatures::is_web_vtt_regions_enabled_ = false;
bool RuntimeEnabledFeatures::is_web_xr_enabled_ = false;
bool RuntimeEnabledFeatures::is_web_xr_hit_test_enabled_ = false;
bool RuntimeEnabledFeatures::is_web_xr_plane_detection_enabled_ = false;
bool RuntimeEnabledFeatures::is_worker_nosniff_block_enabled_ = true;
bool RuntimeEnabledFeatures::is_worker_nosniff_warn_enabled_ = true;
bool RuntimeEnabledFeatures::is_worker_task_queue_enabled_ = false;
bool RuntimeEnabledFeatures::is_xslt_enabled_ = true;

// Platform-dependent features
#if defined(OS_ANDROID)
bool RuntimeEnabledFeatures::is_audio_output_devices_enabled_ = false;
bool RuntimeEnabledFeatures::is_composited_selection_update_enabled_ = true;
bool RuntimeEnabledFeatures::is_fast_mobile_scrolling_enabled_ = true;
bool RuntimeEnabledFeatures::is_force_taller_select_popup_enabled_ = false;
bool RuntimeEnabledFeatures::is_input_multiple_fields_ui_enabled_ = false;
bool RuntimeEnabledFeatures::is_media_capture_enabled_ = true;
bool RuntimeEnabledFeatures::is_media_controls_overlay_play_button_enabled_ = true;
bool RuntimeEnabledFeatures::is_navigator_content_utils_enabled_ = false;
bool RuntimeEnabledFeatures::is_net_info_downlink_max_enabled_ = true;
bool RuntimeEnabledFeatures::is_notification_constructor_enabled_ = false;
bool RuntimeEnabledFeatures::is_notification_content_image_enabled_ = true;
bool RuntimeEnabledFeatures::is_on_device_change_enabled_ = false;
bool RuntimeEnabledFeatures::is_orientation_event_enabled_ = true;
bool RuntimeEnabledFeatures::is_page_popup_enabled_ = false;
bool RuntimeEnabledFeatures::is_picture_in_picture_api_enabled_ = false;
bool RuntimeEnabledFeatures::is_remote_playback_backend_enabled_ = true;
bool RuntimeEnabledFeatures::is_serial_enabled_ = false;
bool RuntimeEnabledFeatures::is_shared_worker_enabled_ = false;
bool RuntimeEnabledFeatures::is_web_bluetooth_enabled_ = true;
#endif

#if defined(OS_WIN)
bool RuntimeEnabledFeatures::is_audio_output_devices_enabled_ = true;
bool RuntimeEnabledFeatures::is_composited_selection_update_enabled_ = false;
bool RuntimeEnabledFeatures::is_fast_mobile_scrolling_enabled_ = false;
bool RuntimeEnabledFeatures::is_force_taller_select_popup_enabled_ = false;
bool RuntimeEnabledFeatures::is_input_multiple_fields_ui_enabled_ = true;
bool RuntimeEnabledFeatures::is_media_capture_enabled_ = false;
bool RuntimeEnabledFeatures::is_media_controls_overlay_play_button_enabled_ = false;
bool RuntimeEnabledFeatures::is_navigator_content_utils_enabled_ = true;
bool RuntimeEnabledFeatures::is_net_info_downlink_max_enabled_ = false;
bool RuntimeEnabledFeatures::is_notification_constructor_enabled_ = true;
bool RuntimeEnabledFeatures::is_notification_content_image_enabled_ = true;
bool RuntimeEnabledFeatures::is_on_device_change_enabled_ = true;
bool RuntimeEnabledFeatures::is_orientation_event_enabled_ = false;
bool RuntimeEnabledFeatures::is_page_popup_enabled_ = true;
bool RuntimeEnabledFeatures::is_picture_in_picture_api_enabled_ = true;
bool RuntimeEnabledFeatures::is_remote_playback_backend_enabled_ = false;
bool RuntimeEnabledFeatures::is_serial_enabled_ = false;
bool RuntimeEnabledFeatures::is_shared_worker_enabled_ = true;
bool RuntimeEnabledFeatures::is_web_bluetooth_enabled_ = false;
#endif

#if defined(OS_CHROMEOS)
bool RuntimeEnabledFeatures::is_audio_output_devices_enabled_ = true;
bool RuntimeEnabledFeatures::is_composited_selection_update_enabled_ = false;
bool RuntimeEnabledFeatures::is_fast_mobile_scrolling_enabled_ = false;
bool RuntimeEnabledFeatures::is_force_taller_select_popup_enabled_ = true;
bool RuntimeEnabledFeatures::is_input_multiple_fields_ui_enabled_ = true;
bool RuntimeEnabledFeatures::is_media_capture_enabled_ = false;
bool RuntimeEnabledFeatures::is_media_controls_overlay_play_button_enabled_ = false;
bool RuntimeEnabledFeatures::is_navigator_content_utils_enabled_ = true;
bool RuntimeEnabledFeatures::is_net_info_downlink_max_enabled_ = true;
bool RuntimeEnabledFeatures::is_notification_constructor_enabled_ = true;
bool RuntimeEnabledFeatures::is_notification_content_image_enabled_ = true;
bool RuntimeEnabledFeatures::is_on_device_change_enabled_ = true;
bool RuntimeEnabledFeatures::is_orientation_event_enabled_ = false;
bool RuntimeEnabledFeatures::is_page_popup_enabled_ = true;
bool RuntimeEnabledFeatures::is_picture_in_picture_api_enabled_ = true;
bool RuntimeEnabledFeatures::is_remote_playback_backend_enabled_ = false;
bool RuntimeEnabledFeatures::is_serial_enabled_ = false;
bool RuntimeEnabledFeatures::is_shared_worker_enabled_ = true;
bool RuntimeEnabledFeatures::is_web_bluetooth_enabled_ = true;
#endif

#if defined(OS_MACOSX)
bool RuntimeEnabledFeatures::is_audio_output_devices_enabled_ = true;
bool RuntimeEnabledFeatures::is_composited_selection_update_enabled_ = false;
bool RuntimeEnabledFeatures::is_fast_mobile_scrolling_enabled_ = false;
bool RuntimeEnabledFeatures::is_force_taller_select_popup_enabled_ = false;
bool RuntimeEnabledFeatures::is_input_multiple_fields_ui_enabled_ = true;
bool RuntimeEnabledFeatures::is_media_capture_enabled_ = false;
bool RuntimeEnabledFeatures::is_media_controls_overlay_play_button_enabled_ = false;
bool RuntimeEnabledFeatures::is_navigator_content_utils_enabled_ = true;
bool RuntimeEnabledFeatures::is_net_info_downlink_max_enabled_ = false;
bool RuntimeEnabledFeatures::is_notification_constructor_enabled_ = true;
bool RuntimeEnabledFeatures::is_notification_content_image_enabled_ = false;
bool RuntimeEnabledFeatures::is_on_device_change_enabled_ = true;
bool RuntimeEnabledFeatures::is_orientation_event_enabled_ = false;
bool RuntimeEnabledFeatures::is_page_popup_enabled_ = true;
bool RuntimeEnabledFeatures::is_picture_in_picture_api_enabled_ = true;
bool RuntimeEnabledFeatures::is_remote_playback_backend_enabled_ = false;
bool RuntimeEnabledFeatures::is_serial_enabled_ = false;
bool RuntimeEnabledFeatures::is_shared_worker_enabled_ = true;
bool RuntimeEnabledFeatures::is_web_bluetooth_enabled_ = true;
#endif

// Default values for platforms not specifically handled above
#if !defined(OS_ANDROID) && !defined(OS_WIN) && !defined(OS_CHROMEOS) && !defined(OS_MACOSX)
bool RuntimeEnabledFeatures::is_audio_output_devices_enabled_ = true;
bool RuntimeEnabledFeatures::is_composited_selection_update_enabled_ = false;
bool RuntimeEnabledFeatures::is_fast_mobile_scrolling_enabled_ = false;
bool RuntimeEnabledFeatures::is_force_taller_select_popup_enabled_ = false;
bool RuntimeEnabledFeatures::is_input_multiple_fields_ui_enabled_ = true;
bool RuntimeEnabledFeatures::is_media_capture_enabled_ = false;
bool RuntimeEnabledFeatures::is_media_controls_overlay_play_button_enabled_ = false;
bool RuntimeEnabledFeatures::is_navigator_content_utils_enabled_ = true;
bool RuntimeEnabledFeatures::is_net_info_downlink_max_enabled_ = false;
bool RuntimeEnabledFeatures::is_notification_constructor_enabled_ = true;
bool RuntimeEnabledFeatures::is_notification_content_image_enabled_ = true;
bool RuntimeEnabledFeatures::is_on_device_change_enabled_ = true;
bool RuntimeEnabledFeatures::is_orientation_event_enabled_ = false;
bool RuntimeEnabledFeatures::is_page_popup_enabled_ = true;
bool RuntimeEnabledFeatures::is_picture_in_picture_api_enabled_ = true;
bool RuntimeEnabledFeatures::is_remote_playback_backend_enabled_ = false;
bool RuntimeEnabledFeatures::is_serial_enabled_ = false;
bool RuntimeEnabledFeatures::is_shared_worker_enabled_ = true;
bool RuntimeEnabledFeatures::is_web_bluetooth_enabled_ = false;
#endif

} // namespace blink
