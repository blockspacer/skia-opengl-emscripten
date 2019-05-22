// Copyright (c) 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// Generated from template:
//   templates/runtime_enabled_features.h.tmpl
// and input files:
//   /home/avakimov_am/skia-opengl-emscripten/src/chromium/third_party/blink/renderer/platform/runtime_enabled_features.json5


#ifndef RUNTIME_ENABLED_FEATURES_H_
#define RUNTIME_ENABLED_FEATURES_H_

#include <string>

#include "third_party/blink/renderer/platform/platform_export.h"
#include "third_party/blink/renderer/platform/wtf/allocator.h"

#define ASSERT_ORIGIN_TRIAL(feature) \
static_assert(std::is_same<decltype(::blink::RuntimeEnabledFeatures::feature##Enabled(\
                                        nullptr)), bool>(), \
              #feature " must be part of an origin trial");

namespace blink {

enum class OriginTrialFeature : int32_t {
  // For testing
  kNonExisting = 0,

  kAnimationWorklet,
  kAutoPictureInPicture,
  kBadging,
  kBuiltInModuleInfra,
  kBuiltInModuleKvStorage,
  kContactsManager,
  kCookieStore,
  kCustomElementsV0,
  kDisableHardwareNoiseSuppression,
  kElementTiming,
  kEventTiming,
  kExperimentalIsInputPending,
  kFeaturePolicyReporting,
  kHrefTranslate,
  kHTMLImports,
  kInstalledApp,
  kJankTracking,
  kLayoutJankAPI,
  kLegacyPerformanceMemoryCounters,
  kMediaCapabilitiesEncryptedMedia,
  kMuteButton,
  kOriginTrialsSampleAPI,
  kOriginTrialsSampleAPIImplied,
  kOriginTrialsSampleAPIInvalidOS,
  kOriginTrialsSampleAPINavigation,
  kPageLifecycleTransitionsOptIn,
  kPageLifecycleTransitionsOptOut,
  kPerMethodCanMakePaymentQuota,
  kPriorityHints,
  kRtcAudioJitterBufferMaxPackets,
  kRtcAudioJitterBufferRtxHandling,
  kRTCIceTransportExtension,
  kRtcJitterBufferDelayHint,
  kRTCQuicTransport,
  kRTCStatsRelativePacketArrivalDelay,
  kShadowDOMV0,
  kSignatureBasedIntegrity,
  kSkipAd,
  kStaleWhileRevalidate,
  kTouchEventFeatureDetection,
  kTrustedDOMTypes,
  kUnoptimizedImagePolicies,
  kWebAssemblyThreads,
  kWebVR,
  kWebXR,
};

// A pure virtual interface for checking the availability of origin trial
// features in a context.
class PLATFORM_EXPORT FeatureContext {
 public:
  virtual bool FeatureEnabled(OriginTrialFeature) const = 0;
};

// A class that stores static enablers for all experimental features.

class PLATFORM_EXPORT RuntimeEnabledFeatures {
  STATIC_ONLY(RuntimeEnabledFeatures);
 public:
  class PLATFORM_EXPORT Backup {
   public:
    explicit Backup();
    void Restore();

   private:
    bool accelerated_2d_canvas_;
    bool accessibility_object_model_;
    bool ad_tagging_;
    bool allow_activation_delegation_attr_;
    bool allow_content_initiated_data_url_navigations_;
    bool animation_worklet_;
    bool async_clipboard_;
    bool audio_output_devices_;
    bool audio_video_tracks_;
    bool automation_controlled_;
    bool auto_picture_in_picture_;
    bool autoplay_ignores_web_audio_;
    bool background_fetch_;
    bool background_video_track_optimization_;
    bool badging_;
    bool bidi_caret_affinity_;
    bool blink_gen_property_trees_;
    bool blink_runtime_call_stats_;
    bool bloated_renderer_detection_;
    bool bloated_renderer_detection_skip_uptime_check_;
    bool blob_read_methods_;
    bool block_credentialed_subresources_;
    bool blocking_downloads_in_sandbox_without_user_activation_;
    bool block_meta_set_cookie_;
    bool built_in_module_all_;
    bool built_in_module_infra_;
    bool built_in_module_kv_storage_;
    bool cache_inline_script_code_;
    bool cache_storage_add_all_rejects_duplicates_;
    bool call_capture_listeners_at_capture_phase_at_shadow_hosts_;
    bool canvas_2d_context_lost_restored_;
    bool canvas_2d_fixed_rendering_mode_;
    bool canvas_2d_image_chromium_;
    bool canvas_2d_scroll_path_into_view_;
    bool canvas_color_management_;
    bool canvas_hit_region_;
    bool canvas_image_smoothing_;
    bool click_retargetting_;
    bool client_placeholders_for_server_lo_fi_;
    bool composite_after_paint_;
    bool composited_selection_update_;
    bool compositor_touch_action_;
    bool computed_accessibility_info_;
    bool contacts_manager_;
    bool context_menu_;
    bool cookie_store_;
    bool cors_rfc_1918_;
    bool css_3_text_;
    bool css_additive_animations_;
    bool css_alt_text_;
    bool css_backdrop_filter_;
    bool css_calc_as_int_;
    bool css_focus_visible_;
    bool css_font_feature_values_;
    bool css_font_size_adjust_;
    bool css_hex_alpha_color_;
    bool css_independent_transform_properties_;
    bool css_layout_api_;
    bool css_logical_;
    bool css_mask_source_type_;
    bool css_offset_path_ray_;
    bool css_offset_path_ray_contain_;
    bool css_offset_position_anchor_;
    bool css_paint_api_arguments_;
    bool css_part_pseudo_element_;
    bool css_picture_in_picture_;
    bool css_pseudo_is_;
    bool css_pseudo_where_;
    bool css_snap_size_;
    bool css_variables_2_;
    bool css_variables_2_image_values_;
    bool css_variables_2_transform_values_;
    bool css_viewport_;
    bool custom_element_default_style_;
    bool custom_elements_v0_;
    bool custom_user_timing_;
    bool database_;
    bool decode_to_yuv_;
    bool desktop_capture_disable_local_echo_control_;
    bool disable_hardware_noise_suppression_;
    bool display_cutout_api_;
    bool display_locking_;
    bool document_cookie_;
    bool document_domain_;
    bool document_write_;
    bool editing_ng_;
    bool element_internals_;
    bool element_timing_;
    bool encrypted_media_encryption_scheme_query_;
    bool encrypted_media_hdcp_policy_check_;
    bool encrypted_media_persistent_usage_record_session_;
    bool event_timing_;
    bool exec_command_in_java_script_;
    bool expensive_background_timer_throttling_;
    bool experimental_content_security_policy_features_;
    bool experimental_is_input_pending_;
    bool experimental_productivity_features_;
    bool extended_text_metrics_;
    bool extra_webgl_video_texture_metadata_;
    bool fallback_cursor_mode_;
    bool fast_border_radius_;
    bool fast_flat_tree_traversal_;
    bool fast_mobile_scrolling_;
    bool feature_policy_for_sandbox_;
    bool feature_policy_java_script_interface_;
    bool feature_policy_reporting_;
    bool feature_policy_vibrate_feature_;
    bool fetch_metadata_;
    bool fetch_metadata_destination_;
    bool file_system_;
    bool first_contentful_paint_plus_plus_;
    bool focusless_spatial_navigation_;
    bool font_src_local_matching_;
    bool forbid_sync_xhr_in_page_dismissal_;
    bool force_overlay_fullscreen_video_;
    bool force_synchronous_html_parsing_;
    bool force_taller_select_popup_;
    bool form_associated_custom_elements_;
    bool form_data_event_;
    bool fractional_mouse_event_;
    bool fractional_scroll_offsets_;
    bool freeze_frames_on_visibility_;
    bool gamepad_button_axis_events_;
    bool get_display_media_;
    bool heap_compaction_;
    bool heap_concurrent_marking_;
    bool heap_incremental_marking_;
    bool heap_incremental_marking_stress_;
    bool href_translate_;
    bool html_imports_;
    bool html_imports_only_chrome_;
    bool html_imports_style_application_;
    bool idb_observer_;
    bool idb_transaction_commit_;
    bool idle_detection_;
    bool ignore_cross_origin_window_when_named_access_on_window_;
    bool image_orientation_;
    bool implicit_root_scroller_;
    bool inert_attribute_;
    bool input_multiple_fields_ui_;
    bool installed_app_;
    bool intersection_observer_v_2_;
    bool invisible_dom_;
    bool isolated_code_cache_;
    bool isolated_world_csp_;
    bool jank_tracking_;
    bool jank_tracking_sweep_line_;
    bool keyboard_focusable_scrollers_;
    bool lang_attribute_aware_form_control_ui_;
    bool lang_client_hint_header_;
    bool layout_jank_api_;
    bool layout_ng_;
    bool layout_ng_block_fragmentation_;
    bool layout_ng_fieldset_;
    bool layout_ng_flex_box_;
    bool layout_ng_fragment_caching_;
    bool lazy_frame_loading_;
    bool lazy_frame_visible_load_time_metrics_;
    bool lazy_image_loading_;
    bool lazy_image_visible_load_time_metrics_;
    bool lazy_initialize_media_controls_;
    bool legacy_performance_memory_counters_;
    bool long_task_v_2_;
    bool manual_slotting_;
    bool media_capabilities_encoding_info_;
    bool media_capabilities_encrypted_media_;
    bool media_capture_;
    bool media_capture_depth_video_kind_;
    bool media_cast_overlay_button_;
    bool media_controls_expand_gesture_;
    bool media_controls_overlay_play_button_;
    bool media_document_download_button_;
    bool media_engagement_bypass_autoplay_policies_;
    bool media_query_prefers_color_scheme_;
    bool media_query_shape_;
    bool media_session_;
    bool media_source_experimental_;
    bool media_source_new_abort_and_duration_;
    bool media_stream_track_content_hint_;
    bool merge_blocking_non_blocking_pools_;
    bool meta_color_scheme_;
    bool middle_click_autoscroll_;
    bool mime_handler_view_in_cross_process_frame_;
    bool mobile_layout_theme_;
    bool modern_media_controls_;
    bool module_dedicated_worker_;
    bool module_service_worker_;
    bool mojo_js_;
    bool mojo_js_test_;
    bool movement_xy_in_blink_;
    bool mute_button_;
    bool native_file_system_;
    bool native_streams_;
    bool navigator_content_utils_;
    bool navigator_device_memory_;
    bool navigator_language_in_insecure_context_;
    bool net_info_downlink_max_;
    bool network_service_;
    bool new_remote_playback_pipeline_;
    bool no_idle_encoding_for_web_tests_;
    bool notification_constructor_;
    bool notification_content_image_;
    bool notifications_;
    bool notification_triggers_;
    bool off_main_thread_css_paint_;
    bool offscreen_canvas_;
    bool offscreen_canvas_commit_;
    bool offscreen_canvas_text_;
    bool on_device_change_;
    bool orientation_event_;
    bool origin_trials_;
    bool origin_trials_sample_api_;
    bool origin_trials_sample_api_dependent_;
    bool origin_trials_sample_api_implied_;
    bool origin_trials_sample_api_invalid_os_;
    bool origin_trials_sample_api_navigation_;
    bool out_of_blink_cors_;
    bool overflow_icons_for_media_controls_;
    bool overlay_scrollbars_;
    bool overscroll_customization_;
    bool page_lifecycle_transitions_opt_in_;
    bool page_lifecycle_transitions_opt_out_;
    bool page_popup_;
    bool paint_under_invalidation_checking_;
    bool passive_document_event_listeners_;
    bool passive_document_wheel_event_listeners_;
    bool pass_paint_visual_rect_to_compositor_;
    bool payment_app_;
    bool payment_handler_change_payment_method_;
    bool payment_method_change_event_;
    bool payment_request_;
    bool payment_request_has_enrolled_instrument_;
    bool payment_request_merchant_validation_event_;
    bool payment_retry_;
    bool performance_manager_instrumentation_;
    bool performance_observer_buffered_flag_;
    bool periodic_background_sync_;
    bool per_method_can_make_payment_quota_;
    bool permission_delegation_;
    bool permissions_;
    bool permissions_request_revoke_;
    bool picture_in_picture_;
    bool picture_in_picture_api_;
    bool picture_in_picture_v_2_;
    bool pointer_raw_update_;
    bool portals_;
    bool post_animation_frame_;
    bool precise_memory_info_;
    bool predicted_events_;
    bool prefixed_video_fullscreen_;
    bool presentation_;
    bool print_browser_;
    bool priority_hints_;
    bool push_messaging_;
    bool raster_inducing_scroll_;
    bool reduced_referrer_granularity_;
    bool remote_playback_;
    bool remote_playback_backend_;
    bool rendering_pipeline_throttling_;
    bool resource_load_scheduler_;
    bool restrict_app_cache_to_secure_contexts_;
    bool restrict_device_sensor_events_to_secure_contexts_;
    bool restrict_lazy_frame_loading_to_data_saver_;
    bool restrict_lazy_image_loading_to_data_saver_;
    bool rtc_audio_jitter_buffer_max_packets_;
    bool rtc_audio_jitter_buffer_rtx_handling_;
    bool rtc_dtls_transport_;
    bool rtc_ice_transport_extension_;
    bool rtc_jitter_buffer_delay_hint_;
    bool rtc_quic_transport_;
    bool rtc_rtp_sender_parameters_;
    bool rtc_sctp_transport_;
    bool rtc_stats_relative_packet_arrival_delay_;
    bool rtc_unified_plan_;
    bool rtc_unified_plan_by_default_;
    bool scripted_speech_recognition_;
    bool scripted_speech_synthesis_;
    bool script_streaming_on_preload_;
    bool scroll_anchor_serialization_;
    bool scroll_customization_;
    bool scroll_top_left_interop_;
    bool send_beacon_throw_for_blob_with_non_simple_type_;
    bool send_mouse_events_disabled_form_controls_;
    bool sensor_;
    bool sensor_extra_classes_;
    bool serial_;
    bool set_root_scroller_;
    bool shadow_dom_v0_;
    bool shadow_piercing_descendant_combinator_;
    bool shape_detection_;
    bool shared_array_buffer_;
    bool shared_worker_;
    bool signature_based_integrity_;
    bool signed_exchange_subresource_prefetch_;
    bool skip_ad_;
    bool skip_touch_event_filter_;
    bool smooth_scroll_js_intervention_;
    bool sms_receiver_;
    bool speech_synthesis_event_char_length_;
    bool stable_blink_features_;
    bool stacked_css_property_animations_;
    bool stale_while_revalidate_;
    bool storage_quota_details_;
    bool streams_native_;
    bool text_fragment_identifiers_;
    bool text_underline_position_left_right_;
    bool timer_throttling_for_background_tabs_;
    bool timer_throttling_for_hidden_frames_;
    bool touch_event_feature_detection_;
    bool track_layout_passes_per_block_;
    bool transferable_streams_;
    bool translate_service_;
    bool trusted_dom_types_;
    bool unclosed_form_control_is_invalid_;
    bool unified_pointer_capture_in_blink_;
    bool unified_touch_adjustment_;
    bool unoptimized_image_policies_;
    bool update_hover_from_layout_change_at_begin_frame_;
    bool update_hover_from_scroll_at_begin_frame_;
    bool user_activation_api_;
    bool user_activation_post_message_transfer_;
    bool user_activation_same_origin_visibility_;
    bool user_activation_v_2_;
    bool user_agent_client_hint_;
    bool v8_idle_tasks_;
    bool video_auto_fullscreen_;
    bool video_fullscreen_detection_;
    bool video_fullscreen_orientation_lock_;
    bool video_rotate_to_fullscreen_;
    bool visibility_collapse_column_;
    bool wake_lock_navigator_;
    bool wasm_code_cache_;
    bool web_animations_api_;
    bool web_animations_svg_;
    bool web_assembly_threads_;
    bool web_auth_;
    bool web_bluetooth_;
    bool web_bluetooth_scanning_;
    bool webgl2_compute_context_;
    bool webgl_draft_extensions_;
    bool webgl_image_chromium_;
    bool webgpu_;
    bool web_hid_;
    bool web_nfc_;
    bool web_share_;
    bool web_share_v_2_;
    bool web_usb_;
    bool web_usb_on_dedicated_workers_;
    bool web_vr_;
    bool web_vtt_regions_;
    bool web_xr_;
    bool web_xr_hit_test_;
    bool web_xr_plane_detection_;
    bool worker_nosniff_block_;
    bool worker_nosniff_warn_;
    bool worker_task_queue_;
    bool xslt_;
  };

  static void SetStableFeaturesEnabled(bool);
  static void SetExperimentalFeaturesEnabled(bool);
  static void SetTestFeaturesEnabled(bool);
  static void SetOriginTrialControlledFeaturesEnabled(bool);

  static void SetFeatureEnabledFromString(const std::string& name, bool enabled);

  static void SetAccelerated2dCanvasEnabled(bool enabled) { is_accelerated_2d_canvas_enabled_ = enabled; }
  static bool Accelerated2dCanvasEnabled() { return is_accelerated_2d_canvas_enabled_; }
  static bool Accelerated2dCanvasEnabled(const FeatureContext*) { return is_accelerated_2d_canvas_enabled_; }

  static void SetAccessibilityObjectModelEnabled(bool enabled) { is_accessibility_object_model_enabled_ = enabled; }
  static bool AccessibilityObjectModelEnabled() { return is_accessibility_object_model_enabled_; }
  static bool AccessibilityObjectModelEnabled(const FeatureContext*) { return is_accessibility_object_model_enabled_; }

  static void SetAdTaggingEnabled(bool enabled) { is_ad_tagging_enabled_ = enabled; }
  static bool AdTaggingEnabled() { return is_ad_tagging_enabled_; }
  static bool AdTaggingEnabled(const FeatureContext*) { return is_ad_tagging_enabled_; }

  static void SetAllowActivationDelegationAttrEnabled(bool enabled) { is_allow_activation_delegation_attr_enabled_ = enabled; }
  static bool AllowActivationDelegationAttrEnabled() { return is_allow_activation_delegation_attr_enabled_; }
  static bool AllowActivationDelegationAttrEnabled(const FeatureContext*) { return is_allow_activation_delegation_attr_enabled_; }

  static void SetAllowContentInitiatedDataUrlNavigationsEnabled(bool enabled) { is_allow_content_initiated_data_url_navigations_enabled_ = enabled; }
  static bool AllowContentInitiatedDataUrlNavigationsEnabled() { return is_allow_content_initiated_data_url_navigations_enabled_; }
  static bool AllowContentInitiatedDataUrlNavigationsEnabled(const FeatureContext*) { return is_allow_content_initiated_data_url_navigations_enabled_; }

  static void SetAsyncClipboardEnabled(bool enabled) { is_async_clipboard_enabled_ = enabled; }
  static bool AsyncClipboardEnabled() { return is_async_clipboard_enabled_; }
  static bool AsyncClipboardEnabled(const FeatureContext*) { return is_async_clipboard_enabled_; }

  static void SetAudioOutputDevicesEnabled(bool enabled) { is_audio_output_devices_enabled_ = enabled; }
  static bool AudioOutputDevicesEnabled() { return is_audio_output_devices_enabled_; }
  static bool AudioOutputDevicesEnabled(const FeatureContext*) { return is_audio_output_devices_enabled_; }

  static void SetAudioVideoTracksEnabled(bool enabled) { is_audio_video_tracks_enabled_ = enabled; }
  static bool AudioVideoTracksEnabled() { return is_audio_video_tracks_enabled_; }
  static bool AudioVideoTracksEnabled(const FeatureContext*) { return is_audio_video_tracks_enabled_; }

  static void SetAutomationControlledEnabled(bool enabled) { is_automation_controlled_enabled_ = enabled; }
  static bool AutomationControlledEnabled() { return is_automation_controlled_enabled_; }
  static bool AutomationControlledEnabled(const FeatureContext*) { return is_automation_controlled_enabled_; }

  static void SetAutoplayIgnoresWebAudioEnabled(bool enabled) { is_autoplay_ignores_web_audio_enabled_ = enabled; }
  static bool AutoplayIgnoresWebAudioEnabled() { return is_autoplay_ignores_web_audio_enabled_; }
  static bool AutoplayIgnoresWebAudioEnabled(const FeatureContext*) { return is_autoplay_ignores_web_audio_enabled_; }

  static void SetBackgroundFetchEnabled(bool enabled) { is_background_fetch_enabled_ = enabled; }
  static bool BackgroundFetchEnabled() { return is_background_fetch_enabled_; }
  static bool BackgroundFetchEnabled(const FeatureContext*) { return is_background_fetch_enabled_; }

  static void SetBackgroundVideoTrackOptimizationEnabled(bool enabled) { is_background_video_track_optimization_enabled_ = enabled; }
  static bool BackgroundVideoTrackOptimizationEnabled() { return is_background_video_track_optimization_enabled_; }
  static bool BackgroundVideoTrackOptimizationEnabled(const FeatureContext*) { return is_background_video_track_optimization_enabled_; }

  static void SetBidiCaretAffinityEnabled(bool enabled) { is_bidi_caret_affinity_enabled_ = enabled; }
  static bool BidiCaretAffinityEnabled() { return is_bidi_caret_affinity_enabled_; }
  static bool BidiCaretAffinityEnabled(const FeatureContext*) { return is_bidi_caret_affinity_enabled_; }

  static void SetBlinkGenPropertyTreesEnabled(bool enabled) { is_blink_gen_property_trees_enabled_ = enabled; }
  static bool BlinkGenPropertyTreesEnabled() { return is_blink_gen_property_trees_enabled_ || is_composite_after_paint_enabled_; }
  static bool BlinkGenPropertyTreesEnabled(const FeatureContext*) { return is_blink_gen_property_trees_enabled_ || is_composite_after_paint_enabled_; }

  static void SetBlinkRuntimeCallStatsEnabled(bool enabled) { is_blink_runtime_call_stats_enabled_ = enabled; }
  static bool BlinkRuntimeCallStatsEnabled() { return is_blink_runtime_call_stats_enabled_; }
  static bool BlinkRuntimeCallStatsEnabled(const FeatureContext*) { return is_blink_runtime_call_stats_enabled_; }

  static void SetBloatedRendererDetectionEnabled(bool enabled) { is_bloated_renderer_detection_enabled_ = enabled; }
  static bool BloatedRendererDetectionEnabled() { return is_bloated_renderer_detection_enabled_; }
  static bool BloatedRendererDetectionEnabled(const FeatureContext*) { return is_bloated_renderer_detection_enabled_; }

  static void SetBloatedRendererDetectionSkipUptimeCheckEnabled(bool enabled) { is_bloated_renderer_detection_skip_uptime_check_enabled_ = enabled; }
  static bool BloatedRendererDetectionSkipUptimeCheckEnabled() { return is_bloated_renderer_detection_skip_uptime_check_enabled_; }
  static bool BloatedRendererDetectionSkipUptimeCheckEnabled(const FeatureContext*) { return is_bloated_renderer_detection_skip_uptime_check_enabled_; }

  static void SetBlobReadMethodsEnabled(bool enabled) { is_blob_read_methods_enabled_ = enabled; }
  static bool BlobReadMethodsEnabled() { return is_blob_read_methods_enabled_; }
  static bool BlobReadMethodsEnabled(const FeatureContext*) { return is_blob_read_methods_enabled_; }

  static void SetBlockCredentialedSubresourcesEnabled(bool enabled) { is_block_credentialed_subresources_enabled_ = enabled; }
  static bool BlockCredentialedSubresourcesEnabled() { return is_block_credentialed_subresources_enabled_; }
  static bool BlockCredentialedSubresourcesEnabled(const FeatureContext*) { return is_block_credentialed_subresources_enabled_; }

  static void SetBlockingDownloadsInSandboxWithoutUserActivationEnabled(bool enabled) { is_blocking_downloads_in_sandbox_without_user_activation_enabled_ = enabled; }
  static bool BlockingDownloadsInSandboxWithoutUserActivationEnabled() { return is_blocking_downloads_in_sandbox_without_user_activation_enabled_; }
  static bool BlockingDownloadsInSandboxWithoutUserActivationEnabled(const FeatureContext*) { return is_blocking_downloads_in_sandbox_without_user_activation_enabled_; }

  static void SetBlockMetaSetCookieEnabled(bool enabled) { is_block_meta_set_cookie_enabled_ = enabled; }
  static bool BlockMetaSetCookieEnabled() { return is_block_meta_set_cookie_enabled_; }
  static bool BlockMetaSetCookieEnabled(const FeatureContext*) { return is_block_meta_set_cookie_enabled_; }

  static void SetBuiltInModuleAllEnabled(bool enabled) { is_built_in_module_all_enabled_ = enabled; }
  static bool BuiltInModuleAllEnabled() { return is_built_in_module_all_enabled_ || is_experimental_productivity_features_enabled_; }
  static bool BuiltInModuleAllEnabled(const FeatureContext*) { return is_built_in_module_all_enabled_ || is_experimental_productivity_features_enabled_; }

  static void SetCacheInlineScriptCodeEnabled(bool enabled) { is_cache_inline_script_code_enabled_ = enabled; }
  static bool CacheInlineScriptCodeEnabled() { return is_cache_inline_script_code_enabled_; }
  static bool CacheInlineScriptCodeEnabled(const FeatureContext*) { return is_cache_inline_script_code_enabled_; }

  static void SetCacheStorageAddAllRejectsDuplicatesEnabled(bool enabled) { is_cache_storage_add_all_rejects_duplicates_enabled_ = enabled; }
  static bool CacheStorageAddAllRejectsDuplicatesEnabled() { return is_cache_storage_add_all_rejects_duplicates_enabled_; }
  static bool CacheStorageAddAllRejectsDuplicatesEnabled(const FeatureContext*) { return is_cache_storage_add_all_rejects_duplicates_enabled_; }

  static void SetCallCaptureListenersAtCapturePhaseAtShadowHostsEnabled(bool enabled) { is_call_capture_listeners_at_capture_phase_at_shadow_hosts_enabled_ = enabled; }
  static bool CallCaptureListenersAtCapturePhaseAtShadowHostsEnabled() { return is_call_capture_listeners_at_capture_phase_at_shadow_hosts_enabled_; }
  static bool CallCaptureListenersAtCapturePhaseAtShadowHostsEnabled(const FeatureContext*) { return is_call_capture_listeners_at_capture_phase_at_shadow_hosts_enabled_; }

  static void SetCanvas2dContextLostRestoredEnabled(bool enabled) { is_canvas_2d_context_lost_restored_enabled_ = enabled; }
  static bool Canvas2dContextLostRestoredEnabled() { return is_canvas_2d_context_lost_restored_enabled_; }
  static bool Canvas2dContextLostRestoredEnabled(const FeatureContext*) { return is_canvas_2d_context_lost_restored_enabled_; }

  static void SetCanvas2dFixedRenderingModeEnabled(bool enabled) { is_canvas_2d_fixed_rendering_mode_enabled_ = enabled; }
  static bool Canvas2dFixedRenderingModeEnabled() { return is_canvas_2d_fixed_rendering_mode_enabled_; }
  static bool Canvas2dFixedRenderingModeEnabled(const FeatureContext*) { return is_canvas_2d_fixed_rendering_mode_enabled_; }

  static void SetCanvas2dImageChromiumEnabled(bool enabled) { is_canvas_2d_image_chromium_enabled_ = enabled; }
  static bool Canvas2dImageChromiumEnabled() { return is_canvas_2d_image_chromium_enabled_; }
  static bool Canvas2dImageChromiumEnabled(const FeatureContext*) { return is_canvas_2d_image_chromium_enabled_; }

  static void SetCanvas2dScrollPathIntoViewEnabled(bool enabled) { is_canvas_2d_scroll_path_into_view_enabled_ = enabled; }
  static bool Canvas2dScrollPathIntoViewEnabled() { return is_canvas_2d_scroll_path_into_view_enabled_; }
  static bool Canvas2dScrollPathIntoViewEnabled(const FeatureContext*) { return is_canvas_2d_scroll_path_into_view_enabled_; }

  static void SetCanvasColorManagementEnabled(bool enabled) { is_canvas_color_management_enabled_ = enabled; }
  static bool CanvasColorManagementEnabled() { return is_canvas_color_management_enabled_; }
  static bool CanvasColorManagementEnabled(const FeatureContext*) { return is_canvas_color_management_enabled_; }

  static void SetCanvasHitRegionEnabled(bool enabled) { is_canvas_hit_region_enabled_ = enabled; }
  static bool CanvasHitRegionEnabled() { return is_canvas_hit_region_enabled_; }
  static bool CanvasHitRegionEnabled(const FeatureContext*) { return is_canvas_hit_region_enabled_; }

  static void SetCanvasImageSmoothingEnabled(bool enabled) { is_canvas_image_smoothing_enabled_ = enabled; }
  static bool CanvasImageSmoothingEnabled() { return is_canvas_image_smoothing_enabled_; }
  static bool CanvasImageSmoothingEnabled(const FeatureContext*) { return is_canvas_image_smoothing_enabled_; }

  static void SetClickRetargettingEnabled(bool enabled) { is_click_retargetting_enabled_ = enabled; }
  static bool ClickRetargettingEnabled() { return is_click_retargetting_enabled_; }
  static bool ClickRetargettingEnabled(const FeatureContext*) { return is_click_retargetting_enabled_; }

  static void SetClientPlaceholdersForServerLoFiEnabled(bool enabled) { is_client_placeholders_for_server_lo_fi_enabled_ = enabled; }
  static bool ClientPlaceholdersForServerLoFiEnabled() { return is_client_placeholders_for_server_lo_fi_enabled_; }
  static bool ClientPlaceholdersForServerLoFiEnabled(const FeatureContext*) { return is_client_placeholders_for_server_lo_fi_enabled_; }

  static void SetCompositeAfterPaintEnabled(bool enabled) { is_composite_after_paint_enabled_ = enabled; }
  static bool CompositeAfterPaintEnabled() { return is_composite_after_paint_enabled_; }
  static bool CompositeAfterPaintEnabled(const FeatureContext*) { return is_composite_after_paint_enabled_; }

  static void SetCompositedSelectionUpdateEnabled(bool enabled) { is_composited_selection_update_enabled_ = enabled; }
  static bool CompositedSelectionUpdateEnabled() { return is_composited_selection_update_enabled_; }
  static bool CompositedSelectionUpdateEnabled(const FeatureContext*) { return is_composited_selection_update_enabled_; }

  static void SetCompositorTouchActionEnabled(bool enabled) { is_compositor_touch_action_enabled_ = enabled; }
  static bool CompositorTouchActionEnabled() { return is_compositor_touch_action_enabled_; }
  static bool CompositorTouchActionEnabled(const FeatureContext*) { return is_compositor_touch_action_enabled_; }

  static void SetComputedAccessibilityInfoEnabled(bool enabled) { is_computed_accessibility_info_enabled_ = enabled; }
  static bool ComputedAccessibilityInfoEnabled() { return is_computed_accessibility_info_enabled_; }
  static bool ComputedAccessibilityInfoEnabled(const FeatureContext*) { return is_computed_accessibility_info_enabled_; }

  static void SetContextMenuEnabled(bool enabled) { is_context_menu_enabled_ = enabled; }
  static bool ContextMenuEnabled() { return is_context_menu_enabled_; }
  static bool ContextMenuEnabled(const FeatureContext*) { return is_context_menu_enabled_; }

  static void SetCorsRFC1918Enabled(bool enabled) { is_cors_rfc_1918_enabled_ = enabled; }
  static bool CorsRFC1918Enabled() { return is_cors_rfc_1918_enabled_; }
  static bool CorsRFC1918Enabled(const FeatureContext*) { return is_cors_rfc_1918_enabled_; }

  static void SetCSS3TextEnabled(bool enabled) { is_css_3_text_enabled_ = enabled; }
  static bool CSS3TextEnabled() { return is_css_3_text_enabled_; }
  static bool CSS3TextEnabled(const FeatureContext*) { return is_css_3_text_enabled_; }

  static void SetCSSAdditiveAnimationsEnabled(bool enabled) { is_css_additive_animations_enabled_ = enabled; }
  static bool CSSAdditiveAnimationsEnabled() { return is_css_additive_animations_enabled_ && is_stacked_css_property_animations_enabled_; }
  static bool CSSAdditiveAnimationsEnabled(const FeatureContext*) { return is_css_additive_animations_enabled_ && is_stacked_css_property_animations_enabled_; }

  static void SetCSSAltTextEnabled(bool enabled) { is_css_alt_text_enabled_ = enabled; }
  static bool CSSAltTextEnabled() { return is_css_alt_text_enabled_; }
  static bool CSSAltTextEnabled(const FeatureContext*) { return is_css_alt_text_enabled_; }

  static void SetCSSBackdropFilterEnabled(bool enabled) { is_css_backdrop_filter_enabled_ = enabled; }
  static bool CSSBackdropFilterEnabled() { return is_css_backdrop_filter_enabled_; }
  static bool CSSBackdropFilterEnabled(const FeatureContext*) { return is_css_backdrop_filter_enabled_; }

  static void SetCSSCalcAsIntEnabled(bool enabled) { is_css_calc_as_int_enabled_ = enabled; }
  static bool CSSCalcAsIntEnabled() { return is_css_calc_as_int_enabled_; }
  static bool CSSCalcAsIntEnabled(const FeatureContext*) { return is_css_calc_as_int_enabled_; }

  static void SetCSSFocusVisibleEnabled(bool enabled) { is_css_focus_visible_enabled_ = enabled; }
  static bool CSSFocusVisibleEnabled() { return is_css_focus_visible_enabled_; }
  static bool CSSFocusVisibleEnabled(const FeatureContext*) { return is_css_focus_visible_enabled_; }

  static void SetCSSFontFeatureValuesEnabled(bool enabled) { is_css_font_feature_values_enabled_ = enabled; }
  static bool CSSFontFeatureValuesEnabled() { return is_css_font_feature_values_enabled_; }
  static bool CSSFontFeatureValuesEnabled(const FeatureContext*) { return is_css_font_feature_values_enabled_; }

  static void SetCSSFontSizeAdjustEnabled(bool enabled) { is_css_font_size_adjust_enabled_ = enabled; }
  static bool CSSFontSizeAdjustEnabled() { return is_css_font_size_adjust_enabled_; }
  static bool CSSFontSizeAdjustEnabled(const FeatureContext*) { return is_css_font_size_adjust_enabled_; }

  static void SetCSSHexAlphaColorEnabled(bool enabled) { is_css_hex_alpha_color_enabled_ = enabled; }
  static bool CSSHexAlphaColorEnabled() { return is_css_hex_alpha_color_enabled_; }
  static bool CSSHexAlphaColorEnabled(const FeatureContext*) { return is_css_hex_alpha_color_enabled_; }

  static void SetCSSIndependentTransformPropertiesEnabled(bool enabled) { is_css_independent_transform_properties_enabled_ = enabled; }
  static bool CSSIndependentTransformPropertiesEnabled() { return is_css_independent_transform_properties_enabled_; }
  static bool CSSIndependentTransformPropertiesEnabled(const FeatureContext*) { return is_css_independent_transform_properties_enabled_; }

  static void SetCSSLayoutAPIEnabled(bool enabled) { is_css_layout_api_enabled_ = enabled; }
  static bool CSSLayoutAPIEnabled() { return is_css_layout_api_enabled_; }
  static bool CSSLayoutAPIEnabled(const FeatureContext*) { return is_css_layout_api_enabled_; }

  static void SetCSSLogicalEnabled(bool enabled) { is_css_logical_enabled_ = enabled; }
  static bool CSSLogicalEnabled() { return is_css_logical_enabled_; }
  static bool CSSLogicalEnabled(const FeatureContext*) { return is_css_logical_enabled_; }

  static void SetCSSMaskSourceTypeEnabled(bool enabled) { is_css_mask_source_type_enabled_ = enabled; }
  static bool CSSMaskSourceTypeEnabled() { return is_css_mask_source_type_enabled_; }
  static bool CSSMaskSourceTypeEnabled(const FeatureContext*) { return is_css_mask_source_type_enabled_; }

  static void SetCSSOffsetPathRayEnabled(bool enabled) { is_css_offset_path_ray_enabled_ = enabled; }
  static bool CSSOffsetPathRayEnabled() { return is_css_offset_path_ray_enabled_; }
  static bool CSSOffsetPathRayEnabled(const FeatureContext*) { return is_css_offset_path_ray_enabled_; }

  static void SetCSSOffsetPathRayContainEnabled(bool enabled) { is_css_offset_path_ray_contain_enabled_ = enabled; }
  static bool CSSOffsetPathRayContainEnabled() { return is_css_offset_path_ray_contain_enabled_; }
  static bool CSSOffsetPathRayContainEnabled(const FeatureContext*) { return is_css_offset_path_ray_contain_enabled_; }

  static void SetCSSOffsetPositionAnchorEnabled(bool enabled) { is_css_offset_position_anchor_enabled_ = enabled; }
  static bool CSSOffsetPositionAnchorEnabled() { return is_css_offset_position_anchor_enabled_; }
  static bool CSSOffsetPositionAnchorEnabled(const FeatureContext*) { return is_css_offset_position_anchor_enabled_; }

  static void SetCSSPaintAPIArgumentsEnabled(bool enabled) { is_css_paint_api_arguments_enabled_ = enabled; }
  static bool CSSPaintAPIArgumentsEnabled() { return is_css_paint_api_arguments_enabled_ && is_css_variables_2_enabled_; }
  static bool CSSPaintAPIArgumentsEnabled(const FeatureContext*) { return is_css_paint_api_arguments_enabled_ && is_css_variables_2_enabled_; }

  static void SetCSSPartPseudoElementEnabled(bool enabled) { is_css_part_pseudo_element_enabled_ = enabled; }
  static bool CSSPartPseudoElementEnabled() { return is_css_part_pseudo_element_enabled_; }
  static bool CSSPartPseudoElementEnabled(const FeatureContext*) { return is_css_part_pseudo_element_enabled_; }

  static void SetCSSPictureInPictureEnabled(bool enabled) { is_css_picture_in_picture_enabled_ = enabled; }
  static bool CSSPictureInPictureEnabled() { return is_css_picture_in_picture_enabled_ && is_picture_in_picture_api_enabled_; }
  static bool CSSPictureInPictureEnabled(const FeatureContext*) { return is_css_picture_in_picture_enabled_ && is_picture_in_picture_api_enabled_; }

  static void SetCSSPseudoIsEnabled(bool enabled) { is_css_pseudo_is_enabled_ = enabled; }
  static bool CSSPseudoIsEnabled() { return is_css_pseudo_is_enabled_; }
  static bool CSSPseudoIsEnabled(const FeatureContext*) { return is_css_pseudo_is_enabled_; }

  static void SetCSSPseudoWhereEnabled(bool enabled) { is_css_pseudo_where_enabled_ = enabled; }
  static bool CSSPseudoWhereEnabled() { return is_css_pseudo_where_enabled_; }
  static bool CSSPseudoWhereEnabled(const FeatureContext*) { return is_css_pseudo_where_enabled_; }

  static void SetCSSSnapSizeEnabled(bool enabled) { is_css_snap_size_enabled_ = enabled; }
  static bool CSSSnapSizeEnabled() { return is_css_snap_size_enabled_; }
  static bool CSSSnapSizeEnabled(const FeatureContext*) { return is_css_snap_size_enabled_; }

  static void SetCSSVariables2Enabled(bool enabled) { is_css_variables_2_enabled_ = enabled; }
  static bool CSSVariables2Enabled() { return is_css_variables_2_enabled_; }
  static bool CSSVariables2Enabled(const FeatureContext*) { return is_css_variables_2_enabled_; }

  static void SetCSSVariables2ImageValuesEnabled(bool enabled) { is_css_variables_2_image_values_enabled_ = enabled; }
  static bool CSSVariables2ImageValuesEnabled() { return is_css_variables_2_image_values_enabled_ && is_css_variables_2_enabled_; }
  static bool CSSVariables2ImageValuesEnabled(const FeatureContext*) { return is_css_variables_2_image_values_enabled_ && is_css_variables_2_enabled_; }

  static void SetCSSVariables2TransformValuesEnabled(bool enabled) { is_css_variables_2_transform_values_enabled_ = enabled; }
  static bool CSSVariables2TransformValuesEnabled() { return is_css_variables_2_transform_values_enabled_ && is_css_variables_2_enabled_; }
  static bool CSSVariables2TransformValuesEnabled(const FeatureContext*) { return is_css_variables_2_transform_values_enabled_ && is_css_variables_2_enabled_; }

  static void SetCSSViewportEnabled(bool enabled) { is_css_viewport_enabled_ = enabled; }
  static bool CSSViewportEnabled() { return is_css_viewport_enabled_; }
  static bool CSSViewportEnabled(const FeatureContext*) { return is_css_viewport_enabled_; }

  static void SetCustomElementDefaultStyleEnabled(bool enabled) { is_custom_element_default_style_enabled_ = enabled; }
  static bool CustomElementDefaultStyleEnabled() { return is_custom_element_default_style_enabled_; }
  static bool CustomElementDefaultStyleEnabled(const FeatureContext*) { return is_custom_element_default_style_enabled_; }

  static void SetCustomUserTimingEnabled(bool enabled) { is_custom_user_timing_enabled_ = enabled; }
  static bool CustomUserTimingEnabled() { return is_custom_user_timing_enabled_; }
  static bool CustomUserTimingEnabled(const FeatureContext*) { return is_custom_user_timing_enabled_; }

  static void SetDatabaseEnabled(bool enabled) { is_database_enabled_ = enabled; }
  static bool DatabaseEnabled() { return is_database_enabled_; }
  static bool DatabaseEnabled(const FeatureContext*) { return is_database_enabled_; }

  static void SetDecodeToYUVEnabled(bool enabled) { is_decode_to_yuv_enabled_ = enabled; }
  static bool DecodeToYUVEnabled() { return is_decode_to_yuv_enabled_; }
  static bool DecodeToYUVEnabled(const FeatureContext*) { return is_decode_to_yuv_enabled_; }

  static void SetDesktopCaptureDisableLocalEchoControlEnabled(bool enabled) { is_desktop_capture_disable_local_echo_control_enabled_ = enabled; }
  static bool DesktopCaptureDisableLocalEchoControlEnabled() { return is_desktop_capture_disable_local_echo_control_enabled_; }
  static bool DesktopCaptureDisableLocalEchoControlEnabled(const FeatureContext*) { return is_desktop_capture_disable_local_echo_control_enabled_; }

  static void SetDisplayCutoutAPIEnabled(bool enabled) { is_display_cutout_api_enabled_ = enabled; }
  static bool DisplayCutoutAPIEnabled() { return is_display_cutout_api_enabled_; }
  static bool DisplayCutoutAPIEnabled(const FeatureContext*) { return is_display_cutout_api_enabled_; }

  static void SetDisplayLockingEnabled(bool enabled) { is_display_locking_enabled_ = enabled; }
  static bool DisplayLockingEnabled() { return is_display_locking_enabled_; }
  static bool DisplayLockingEnabled(const FeatureContext*) { return is_display_locking_enabled_; }

  static void SetDocumentCookieEnabled(bool enabled) { is_document_cookie_enabled_ = enabled; }
  static bool DocumentCookieEnabled() { return is_document_cookie_enabled_; }
  static bool DocumentCookieEnabled(const FeatureContext*) { return is_document_cookie_enabled_; }

  static void SetDocumentDomainEnabled(bool enabled) { is_document_domain_enabled_ = enabled; }
  static bool DocumentDomainEnabled() { return is_document_domain_enabled_; }
  static bool DocumentDomainEnabled(const FeatureContext*) { return is_document_domain_enabled_; }

  static void SetDocumentWriteEnabled(bool enabled) { is_document_write_enabled_ = enabled; }
  static bool DocumentWriteEnabled() { return is_document_write_enabled_; }
  static bool DocumentWriteEnabled(const FeatureContext*) { return is_document_write_enabled_; }

  static void SetEditingNGEnabled(bool enabled) { is_editing_ng_enabled_ = enabled; }
  static bool EditingNGEnabled() { return is_editing_ng_enabled_; }
  static bool EditingNGEnabled(const FeatureContext*) { return is_editing_ng_enabled_; }

  static void SetElementInternalsEnabled(bool enabled) { is_element_internals_enabled_ = enabled; }
  static bool ElementInternalsEnabled() { return is_element_internals_enabled_ || is_form_associated_custom_elements_enabled_; }
  static bool ElementInternalsEnabled(const FeatureContext*) { return is_element_internals_enabled_ || is_form_associated_custom_elements_enabled_; }

  static void SetEncryptedMediaEncryptionSchemeQueryEnabled(bool enabled) { is_encrypted_media_encryption_scheme_query_enabled_ = enabled; }
  static bool EncryptedMediaEncryptionSchemeQueryEnabled() { return is_encrypted_media_encryption_scheme_query_enabled_; }
  static bool EncryptedMediaEncryptionSchemeQueryEnabled(const FeatureContext*) { return is_encrypted_media_encryption_scheme_query_enabled_; }

  static void SetEncryptedMediaHdcpPolicyCheckEnabled(bool enabled) { is_encrypted_media_hdcp_policy_check_enabled_ = enabled; }
  static bool EncryptedMediaHdcpPolicyCheckEnabled() { return is_encrypted_media_hdcp_policy_check_enabled_; }
  static bool EncryptedMediaHdcpPolicyCheckEnabled(const FeatureContext*) { return is_encrypted_media_hdcp_policy_check_enabled_; }

  static void SetEncryptedMediaPersistentUsageRecordSessionEnabled(bool enabled) { is_encrypted_media_persistent_usage_record_session_enabled_ = enabled; }
  static bool EncryptedMediaPersistentUsageRecordSessionEnabled() { return is_encrypted_media_persistent_usage_record_session_enabled_; }
  static bool EncryptedMediaPersistentUsageRecordSessionEnabled(const FeatureContext*) { return is_encrypted_media_persistent_usage_record_session_enabled_; }

  static void SetExecCommandInJavaScriptEnabled(bool enabled) { is_exec_command_in_java_script_enabled_ = enabled; }
  static bool ExecCommandInJavaScriptEnabled() { return is_exec_command_in_java_script_enabled_; }
  static bool ExecCommandInJavaScriptEnabled(const FeatureContext*) { return is_exec_command_in_java_script_enabled_; }

  static void SetExpensiveBackgroundTimerThrottlingEnabled(bool enabled) { is_expensive_background_timer_throttling_enabled_ = enabled; }
  static bool ExpensiveBackgroundTimerThrottlingEnabled() { return is_expensive_background_timer_throttling_enabled_; }
  static bool ExpensiveBackgroundTimerThrottlingEnabled(const FeatureContext*) { return is_expensive_background_timer_throttling_enabled_; }

  static void SetExperimentalContentSecurityPolicyFeaturesEnabled(bool enabled) { is_experimental_content_security_policy_features_enabled_ = enabled; }
  static bool ExperimentalContentSecurityPolicyFeaturesEnabled() { return is_experimental_content_security_policy_features_enabled_; }
  static bool ExperimentalContentSecurityPolicyFeaturesEnabled(const FeatureContext*) { return is_experimental_content_security_policy_features_enabled_; }

  static void SetExperimentalProductivityFeaturesEnabled(bool enabled) { is_experimental_productivity_features_enabled_ = enabled; }
  static bool ExperimentalProductivityFeaturesEnabled() { return is_experimental_productivity_features_enabled_; }
  static bool ExperimentalProductivityFeaturesEnabled(const FeatureContext*) { return is_experimental_productivity_features_enabled_; }

  static void SetExtendedTextMetricsEnabled(bool enabled) { is_extended_text_metrics_enabled_ = enabled; }
  static bool ExtendedTextMetricsEnabled() { return is_extended_text_metrics_enabled_; }
  static bool ExtendedTextMetricsEnabled(const FeatureContext*) { return is_extended_text_metrics_enabled_; }

  static void SetExtraWebGLVideoTextureMetadataEnabled(bool enabled) { is_extra_webgl_video_texture_metadata_enabled_ = enabled; }
  static bool ExtraWebGLVideoTextureMetadataEnabled() { return is_extra_webgl_video_texture_metadata_enabled_; }
  static bool ExtraWebGLVideoTextureMetadataEnabled(const FeatureContext*) { return is_extra_webgl_video_texture_metadata_enabled_; }

  static void SetFallbackCursorModeEnabled(bool enabled) { is_fallback_cursor_mode_enabled_ = enabled; }
  static bool FallbackCursorModeEnabled() { return is_fallback_cursor_mode_enabled_; }
  static bool FallbackCursorModeEnabled(const FeatureContext*) { return is_fallback_cursor_mode_enabled_; }

  static void SetFastBorderRadiusEnabled(bool enabled) { is_fast_border_radius_enabled_ = enabled; }
  static bool FastBorderRadiusEnabled() { return is_fast_border_radius_enabled_; }
  static bool FastBorderRadiusEnabled(const FeatureContext*) { return is_fast_border_radius_enabled_; }

  static void SetFastFlatTreeTraversalEnabled(bool enabled) { is_fast_flat_tree_traversal_enabled_ = enabled; }
  static bool FastFlatTreeTraversalEnabled() { return is_fast_flat_tree_traversal_enabled_; }
  static bool FastFlatTreeTraversalEnabled(const FeatureContext*) { return is_fast_flat_tree_traversal_enabled_; }

  static void SetFastMobileScrollingEnabled(bool enabled) { is_fast_mobile_scrolling_enabled_ = enabled; }
  static bool FastMobileScrollingEnabled() { return is_fast_mobile_scrolling_enabled_; }
  static bool FastMobileScrollingEnabled(const FeatureContext*) { return is_fast_mobile_scrolling_enabled_; }

  static void SetFeaturePolicyForSandboxEnabled(bool enabled) { is_feature_policy_for_sandbox_enabled_ = enabled; }
  static bool FeaturePolicyForSandboxEnabled() { return is_feature_policy_for_sandbox_enabled_; }
  static bool FeaturePolicyForSandboxEnabled(const FeatureContext*) { return is_feature_policy_for_sandbox_enabled_; }

  static void SetFeaturePolicyJavaScriptInterfaceEnabled(bool enabled) { is_feature_policy_java_script_interface_enabled_ = enabled; }
  static bool FeaturePolicyJavaScriptInterfaceEnabled() { return is_feature_policy_java_script_interface_enabled_; }
  static bool FeaturePolicyJavaScriptInterfaceEnabled(const FeatureContext*) { return is_feature_policy_java_script_interface_enabled_; }

  static void SetFeaturePolicyVibrateFeatureEnabled(bool enabled) { is_feature_policy_vibrate_feature_enabled_ = enabled; }
  static bool FeaturePolicyVibrateFeatureEnabled() { return is_feature_policy_vibrate_feature_enabled_; }
  static bool FeaturePolicyVibrateFeatureEnabled(const FeatureContext*) { return is_feature_policy_vibrate_feature_enabled_; }

  static void SetFetchMetadataEnabled(bool enabled) { is_fetch_metadata_enabled_ = enabled; }
  static bool FetchMetadataEnabled() { return is_fetch_metadata_enabled_; }
  static bool FetchMetadataEnabled(const FeatureContext*) { return is_fetch_metadata_enabled_; }

  static void SetFetchMetadataDestinationEnabled(bool enabled) { is_fetch_metadata_destination_enabled_ = enabled; }
  static bool FetchMetadataDestinationEnabled() { return is_fetch_metadata_destination_enabled_; }
  static bool FetchMetadataDestinationEnabled(const FeatureContext*) { return is_fetch_metadata_destination_enabled_; }

  static void SetFileSystemEnabled(bool enabled) { is_file_system_enabled_ = enabled; }
  static bool FileSystemEnabled() { return is_file_system_enabled_; }
  static bool FileSystemEnabled(const FeatureContext*) { return is_file_system_enabled_; }

  static void SetFirstContentfulPaintPlusPlusEnabled(bool enabled) { is_first_contentful_paint_plus_plus_enabled_ = enabled; }
  static bool FirstContentfulPaintPlusPlusEnabled() { return is_first_contentful_paint_plus_plus_enabled_; }
  static bool FirstContentfulPaintPlusPlusEnabled(const FeatureContext*) { return is_first_contentful_paint_plus_plus_enabled_; }

  static void SetFocuslessSpatialNavigationEnabled(bool enabled) { is_focusless_spatial_navigation_enabled_ = enabled; }
  static bool FocuslessSpatialNavigationEnabled() { return is_focusless_spatial_navigation_enabled_; }
  static bool FocuslessSpatialNavigationEnabled(const FeatureContext*) { return is_focusless_spatial_navigation_enabled_; }

  static void SetFontSrcLocalMatchingEnabled(bool enabled) { is_font_src_local_matching_enabled_ = enabled; }
  static bool FontSrcLocalMatchingEnabled() { return is_font_src_local_matching_enabled_; }
  static bool FontSrcLocalMatchingEnabled(const FeatureContext*) { return is_font_src_local_matching_enabled_; }

  static void SetForbidSyncXHRInPageDismissalEnabled(bool enabled) { is_forbid_sync_xhr_in_page_dismissal_enabled_ = enabled; }
  static bool ForbidSyncXHRInPageDismissalEnabled() { return is_forbid_sync_xhr_in_page_dismissal_enabled_; }
  static bool ForbidSyncXHRInPageDismissalEnabled(const FeatureContext*) { return is_forbid_sync_xhr_in_page_dismissal_enabled_; }

  static void SetForceOverlayFullscreenVideoEnabled(bool enabled) { is_force_overlay_fullscreen_video_enabled_ = enabled; }
  static bool ForceOverlayFullscreenVideoEnabled() { return is_force_overlay_fullscreen_video_enabled_; }
  static bool ForceOverlayFullscreenVideoEnabled(const FeatureContext*) { return is_force_overlay_fullscreen_video_enabled_; }

  static void SetForceSynchronousHTMLParsingEnabled(bool enabled) { is_force_synchronous_html_parsing_enabled_ = enabled; }
  static bool ForceSynchronousHTMLParsingEnabled() { return is_force_synchronous_html_parsing_enabled_; }
  static bool ForceSynchronousHTMLParsingEnabled(const FeatureContext*) { return is_force_synchronous_html_parsing_enabled_; }

  static void SetForceTallerSelectPopupEnabled(bool enabled) { is_force_taller_select_popup_enabled_ = enabled; }
  static bool ForceTallerSelectPopupEnabled() { return is_force_taller_select_popup_enabled_; }
  static bool ForceTallerSelectPopupEnabled(const FeatureContext*) { return is_force_taller_select_popup_enabled_; }

  static void SetFormAssociatedCustomElementsEnabled(bool enabled) { is_form_associated_custom_elements_enabled_ = enabled; }
  static bool FormAssociatedCustomElementsEnabled() { return is_form_associated_custom_elements_enabled_; }
  static bool FormAssociatedCustomElementsEnabled(const FeatureContext*) { return is_form_associated_custom_elements_enabled_; }

  static void SetFormDataEventEnabled(bool enabled) { is_form_data_event_enabled_ = enabled; }
  static bool FormDataEventEnabled() { return is_form_data_event_enabled_; }
  static bool FormDataEventEnabled(const FeatureContext*) { return is_form_data_event_enabled_; }

  static void SetFractionalMouseEventEnabled(bool enabled) { is_fractional_mouse_event_enabled_ = enabled; }
  static bool FractionalMouseEventEnabled() { return is_fractional_mouse_event_enabled_; }
  static bool FractionalMouseEventEnabled(const FeatureContext*) { return is_fractional_mouse_event_enabled_; }

  static void SetFractionalScrollOffsetsEnabled(bool enabled) { is_fractional_scroll_offsets_enabled_ = enabled; }
  static bool FractionalScrollOffsetsEnabled() { return is_fractional_scroll_offsets_enabled_; }
  static bool FractionalScrollOffsetsEnabled(const FeatureContext*) { return is_fractional_scroll_offsets_enabled_; }

  static void SetFreezeFramesOnVisibilityEnabled(bool enabled) { is_freeze_frames_on_visibility_enabled_ = enabled; }
  static bool FreezeFramesOnVisibilityEnabled() { return is_freeze_frames_on_visibility_enabled_; }
  static bool FreezeFramesOnVisibilityEnabled(const FeatureContext*) { return is_freeze_frames_on_visibility_enabled_; }

  static void SetGamepadButtonAxisEventsEnabled(bool enabled) { is_gamepad_button_axis_events_enabled_ = enabled; }
  static bool GamepadButtonAxisEventsEnabled() { return is_gamepad_button_axis_events_enabled_; }
  static bool GamepadButtonAxisEventsEnabled(const FeatureContext*) { return is_gamepad_button_axis_events_enabled_; }

  static void SetGetDisplayMediaEnabled(bool enabled) { is_get_display_media_enabled_ = enabled; }
  static bool GetDisplayMediaEnabled() { return is_get_display_media_enabled_; }
  static bool GetDisplayMediaEnabled(const FeatureContext*) { return is_get_display_media_enabled_; }

  static void SetHeapCompactionEnabled(bool enabled) { is_heap_compaction_enabled_ = enabled; }
  static bool HeapCompactionEnabled() { return is_heap_compaction_enabled_; }
  static bool HeapCompactionEnabled(const FeatureContext*) { return is_heap_compaction_enabled_; }

  static void SetHeapConcurrentMarkingEnabled(bool enabled) { is_heap_concurrent_marking_enabled_ = enabled; }
  static bool HeapConcurrentMarkingEnabled() { return is_heap_concurrent_marking_enabled_; }
  static bool HeapConcurrentMarkingEnabled(const FeatureContext*) { return is_heap_concurrent_marking_enabled_; }

  static void SetHeapIncrementalMarkingEnabled(bool enabled) { is_heap_incremental_marking_enabled_ = enabled; }
  static bool HeapIncrementalMarkingEnabled() { return is_heap_incremental_marking_enabled_; }
  static bool HeapIncrementalMarkingEnabled(const FeatureContext*) { return is_heap_incremental_marking_enabled_; }

  static void SetHeapIncrementalMarkingStressEnabled(bool enabled) { is_heap_incremental_marking_stress_enabled_ = enabled; }
  static bool HeapIncrementalMarkingStressEnabled() { return is_heap_incremental_marking_stress_enabled_; }
  static bool HeapIncrementalMarkingStressEnabled(const FeatureContext*) { return is_heap_incremental_marking_stress_enabled_; }

  static void SetHTMLImportsOnlyChromeEnabled(bool enabled) { is_html_imports_only_chrome_enabled_ = enabled; }
  static bool HTMLImportsOnlyChromeEnabled() { return is_html_imports_only_chrome_enabled_; }
  static bool HTMLImportsOnlyChromeEnabled(const FeatureContext*) { return is_html_imports_only_chrome_enabled_; }

  static void SetHTMLImportsStyleApplicationEnabled(bool enabled) { is_html_imports_style_application_enabled_ = enabled; }
  static bool HTMLImportsStyleApplicationEnabled() { return is_html_imports_style_application_enabled_; }
  static bool HTMLImportsStyleApplicationEnabled(const FeatureContext*) { return is_html_imports_style_application_enabled_; }

  static void SetIDBObserverEnabled(bool enabled) { is_idb_observer_enabled_ = enabled; }
  static bool IDBObserverEnabled() { return is_idb_observer_enabled_; }
  static bool IDBObserverEnabled(const FeatureContext*) { return is_idb_observer_enabled_; }

  static void SetIDBTransactionCommitEnabled(bool enabled) { is_idb_transaction_commit_enabled_ = enabled; }
  static bool IDBTransactionCommitEnabled() { return is_idb_transaction_commit_enabled_; }
  static bool IDBTransactionCommitEnabled(const FeatureContext*) { return is_idb_transaction_commit_enabled_; }

  static void SetIdleDetectionEnabled(bool enabled) { is_idle_detection_enabled_ = enabled; }
  static bool IdleDetectionEnabled() { return is_idle_detection_enabled_; }
  static bool IdleDetectionEnabled(const FeatureContext*) { return is_idle_detection_enabled_; }

  static void SetIgnoreCrossOriginWindowWhenNamedAccessOnWindowEnabled(bool enabled) { is_ignore_cross_origin_window_when_named_access_on_window_enabled_ = enabled; }
  static bool IgnoreCrossOriginWindowWhenNamedAccessOnWindowEnabled() { return is_ignore_cross_origin_window_when_named_access_on_window_enabled_; }
  static bool IgnoreCrossOriginWindowWhenNamedAccessOnWindowEnabled(const FeatureContext*) { return is_ignore_cross_origin_window_when_named_access_on_window_enabled_; }

  static void SetImageOrientationEnabled(bool enabled) { is_image_orientation_enabled_ = enabled; }
  static bool ImageOrientationEnabled() { return is_image_orientation_enabled_; }
  static bool ImageOrientationEnabled(const FeatureContext*) { return is_image_orientation_enabled_; }

  static void SetImplicitRootScrollerEnabled(bool enabled) { is_implicit_root_scroller_enabled_ = enabled; }
  static bool ImplicitRootScrollerEnabled() { return is_implicit_root_scroller_enabled_; }
  static bool ImplicitRootScrollerEnabled(const FeatureContext*) { return is_implicit_root_scroller_enabled_; }

  static void SetInertAttributeEnabled(bool enabled) { is_inert_attribute_enabled_ = enabled; }
  static bool InertAttributeEnabled() { return is_inert_attribute_enabled_; }
  static bool InertAttributeEnabled(const FeatureContext*) { return is_inert_attribute_enabled_; }

  static void SetInputMultipleFieldsUIEnabled(bool enabled) { is_input_multiple_fields_ui_enabled_ = enabled; }
  static bool InputMultipleFieldsUIEnabled() { return is_input_multiple_fields_ui_enabled_; }
  static bool InputMultipleFieldsUIEnabled(const FeatureContext*) { return is_input_multiple_fields_ui_enabled_; }

  static void SetIntersectionObserverV2Enabled(bool enabled) { is_intersection_observer_v_2_enabled_ = enabled; }
  static bool IntersectionObserverV2Enabled() { return is_intersection_observer_v_2_enabled_; }
  static bool IntersectionObserverV2Enabled(const FeatureContext*) { return is_intersection_observer_v_2_enabled_; }

  static void SetInvisibleDOMEnabled(bool enabled) { is_invisible_dom_enabled_ = enabled; }
  static bool InvisibleDOMEnabled() { return is_invisible_dom_enabled_; }
  static bool InvisibleDOMEnabled(const FeatureContext*) { return is_invisible_dom_enabled_; }

  static void SetIsolatedCodeCacheEnabled(bool enabled) { is_isolated_code_cache_enabled_ = enabled; }
  static bool IsolatedCodeCacheEnabled() { return is_isolated_code_cache_enabled_; }
  static bool IsolatedCodeCacheEnabled(const FeatureContext*) { return is_isolated_code_cache_enabled_; }

  static void SetIsolatedWorldCSPEnabled(bool enabled) { is_isolated_world_csp_enabled_ = enabled; }
  static bool IsolatedWorldCSPEnabled() { return is_isolated_world_csp_enabled_; }
  static bool IsolatedWorldCSPEnabled(const FeatureContext*) { return is_isolated_world_csp_enabled_; }

  static void SetJankTrackingSweepLineEnabled(bool enabled) { is_jank_tracking_sweep_line_enabled_ = enabled; }
  static bool JankTrackingSweepLineEnabled() { return is_jank_tracking_sweep_line_enabled_; }
  static bool JankTrackingSweepLineEnabled(const FeatureContext*) { return is_jank_tracking_sweep_line_enabled_; }

  static void SetKeyboardFocusableScrollersEnabled(bool enabled) { is_keyboard_focusable_scrollers_enabled_ = enabled; }
  static bool KeyboardFocusableScrollersEnabled() { return is_keyboard_focusable_scrollers_enabled_; }
  static bool KeyboardFocusableScrollersEnabled(const FeatureContext*) { return is_keyboard_focusable_scrollers_enabled_; }

  static void SetLangAttributeAwareFormControlUIEnabled(bool enabled) { is_lang_attribute_aware_form_control_ui_enabled_ = enabled; }
  static bool LangAttributeAwareFormControlUIEnabled() { return is_lang_attribute_aware_form_control_ui_enabled_; }
  static bool LangAttributeAwareFormControlUIEnabled(const FeatureContext*) { return is_lang_attribute_aware_form_control_ui_enabled_; }

  static void SetLangClientHintHeaderEnabled(bool enabled) { is_lang_client_hint_header_enabled_ = enabled; }
  static bool LangClientHintHeaderEnabled() { return is_lang_client_hint_header_enabled_; }
  static bool LangClientHintHeaderEnabled(const FeatureContext*) { return is_lang_client_hint_header_enabled_; }

  static void SetLayoutNGEnabled(bool enabled) { is_layout_ng_enabled_ = enabled; }
  static bool LayoutNGEnabled() { return is_layout_ng_enabled_ || is_layout_ng_block_fragmentation_enabled_ || is_layout_ng_fieldset_enabled_ || is_layout_ng_flex_box_enabled_ || is_editing_ng_enabled_ || is_bidi_caret_affinity_enabled_; }
  static bool LayoutNGEnabled(const FeatureContext*) { return is_layout_ng_enabled_ || is_layout_ng_block_fragmentation_enabled_ || is_layout_ng_fieldset_enabled_ || is_layout_ng_flex_box_enabled_ || is_editing_ng_enabled_ || is_bidi_caret_affinity_enabled_; }

  static void SetLayoutNGBlockFragmentationEnabled(bool enabled) { is_layout_ng_block_fragmentation_enabled_ = enabled; }
  static bool LayoutNGBlockFragmentationEnabled() { return is_layout_ng_block_fragmentation_enabled_; }
  static bool LayoutNGBlockFragmentationEnabled(const FeatureContext*) { return is_layout_ng_block_fragmentation_enabled_; }

  static void SetLayoutNGFieldsetEnabled(bool enabled) { is_layout_ng_fieldset_enabled_ = enabled; }
  static bool LayoutNGFieldsetEnabled() { return is_layout_ng_fieldset_enabled_; }
  static bool LayoutNGFieldsetEnabled(const FeatureContext*) { return is_layout_ng_fieldset_enabled_; }

  static void SetLayoutNGFlexBoxEnabled(bool enabled) { is_layout_ng_flex_box_enabled_ = enabled; }
  static bool LayoutNGFlexBoxEnabled() { return is_layout_ng_flex_box_enabled_; }
  static bool LayoutNGFlexBoxEnabled(const FeatureContext*) { return is_layout_ng_flex_box_enabled_; }

  static void SetLayoutNGFragmentCachingEnabled(bool enabled) { is_layout_ng_fragment_caching_enabled_ = enabled; }
  static bool LayoutNGFragmentCachingEnabled() { return is_layout_ng_fragment_caching_enabled_ || is_layout_ng_enabled_; }
  static bool LayoutNGFragmentCachingEnabled(const FeatureContext*) { return is_layout_ng_fragment_caching_enabled_ || is_layout_ng_enabled_; }

  static void SetLazyFrameLoadingEnabled(bool enabled) { is_lazy_frame_loading_enabled_ = enabled; }
  static bool LazyFrameLoadingEnabled() { return is_lazy_frame_loading_enabled_; }
  static bool LazyFrameLoadingEnabled(const FeatureContext*) { return is_lazy_frame_loading_enabled_; }

  static void SetLazyFrameVisibleLoadTimeMetricsEnabled(bool enabled) { is_lazy_frame_visible_load_time_metrics_enabled_ = enabled; }
  static bool LazyFrameVisibleLoadTimeMetricsEnabled() { return is_lazy_frame_visible_load_time_metrics_enabled_; }
  static bool LazyFrameVisibleLoadTimeMetricsEnabled(const FeatureContext*) { return is_lazy_frame_visible_load_time_metrics_enabled_; }

  static void SetLazyImageLoadingEnabled(bool enabled) { is_lazy_image_loading_enabled_ = enabled; }
  static bool LazyImageLoadingEnabled() { return is_lazy_image_loading_enabled_; }
  static bool LazyImageLoadingEnabled(const FeatureContext*) { return is_lazy_image_loading_enabled_; }

  static void SetLazyImageVisibleLoadTimeMetricsEnabled(bool enabled) { is_lazy_image_visible_load_time_metrics_enabled_ = enabled; }
  static bool LazyImageVisibleLoadTimeMetricsEnabled() { return is_lazy_image_visible_load_time_metrics_enabled_; }
  static bool LazyImageVisibleLoadTimeMetricsEnabled(const FeatureContext*) { return is_lazy_image_visible_load_time_metrics_enabled_; }

  static void SetLazyInitializeMediaControlsEnabled(bool enabled) { is_lazy_initialize_media_controls_enabled_ = enabled; }
  static bool LazyInitializeMediaControlsEnabled() { return is_lazy_initialize_media_controls_enabled_; }
  static bool LazyInitializeMediaControlsEnabled(const FeatureContext*) { return is_lazy_initialize_media_controls_enabled_; }

  static void SetLongTaskV2Enabled(bool enabled) { is_long_task_v_2_enabled_ = enabled; }
  static bool LongTaskV2Enabled() { return is_long_task_v_2_enabled_; }
  static bool LongTaskV2Enabled(const FeatureContext*) { return is_long_task_v_2_enabled_; }

  static void SetManualSlottingEnabled(bool enabled) { is_manual_slotting_enabled_ = enabled; }
  static bool ManualSlottingEnabled() { return is_manual_slotting_enabled_; }
  static bool ManualSlottingEnabled(const FeatureContext*) { return is_manual_slotting_enabled_; }

  static void SetMediaCapabilitiesEncodingInfoEnabled(bool enabled) { is_media_capabilities_encoding_info_enabled_ = enabled; }
  static bool MediaCapabilitiesEncodingInfoEnabled() { return is_media_capabilities_encoding_info_enabled_; }
  static bool MediaCapabilitiesEncodingInfoEnabled(const FeatureContext*) { return is_media_capabilities_encoding_info_enabled_; }

  static void SetMediaCaptureEnabled(bool enabled) { is_media_capture_enabled_ = enabled; }
  static bool MediaCaptureEnabled() { return is_media_capture_enabled_; }
  static bool MediaCaptureEnabled(const FeatureContext*) { return is_media_capture_enabled_; }

  static void SetMediaCaptureDepthVideoKindEnabled(bool enabled) { is_media_capture_depth_video_kind_enabled_ = enabled; }
  static bool MediaCaptureDepthVideoKindEnabled() { return is_media_capture_depth_video_kind_enabled_; }
  static bool MediaCaptureDepthVideoKindEnabled(const FeatureContext*) { return is_media_capture_depth_video_kind_enabled_; }

  static void SetMediaCastOverlayButtonEnabled(bool enabled) { is_media_cast_overlay_button_enabled_ = enabled; }
  static bool MediaCastOverlayButtonEnabled() { return is_media_cast_overlay_button_enabled_; }
  static bool MediaCastOverlayButtonEnabled(const FeatureContext*) { return is_media_cast_overlay_button_enabled_; }

  static void SetMediaControlsExpandGestureEnabled(bool enabled) { is_media_controls_expand_gesture_enabled_ = enabled; }
  static bool MediaControlsExpandGestureEnabled() { return is_media_controls_expand_gesture_enabled_; }
  static bool MediaControlsExpandGestureEnabled(const FeatureContext*) { return is_media_controls_expand_gesture_enabled_; }

  static void SetMediaControlsOverlayPlayButtonEnabled(bool enabled) { is_media_controls_overlay_play_button_enabled_ = enabled; }
  static bool MediaControlsOverlayPlayButtonEnabled() { return is_media_controls_overlay_play_button_enabled_; }
  static bool MediaControlsOverlayPlayButtonEnabled(const FeatureContext*) { return is_media_controls_overlay_play_button_enabled_; }

  static void SetMediaDocumentDownloadButtonEnabled(bool enabled) { is_media_document_download_button_enabled_ = enabled; }
  static bool MediaDocumentDownloadButtonEnabled() { return is_media_document_download_button_enabled_; }
  static bool MediaDocumentDownloadButtonEnabled(const FeatureContext*) { return is_media_document_download_button_enabled_; }

  static void SetMediaEngagementBypassAutoplayPoliciesEnabled(bool enabled) { is_media_engagement_bypass_autoplay_policies_enabled_ = enabled; }
  static bool MediaEngagementBypassAutoplayPoliciesEnabled() { return is_media_engagement_bypass_autoplay_policies_enabled_; }
  static bool MediaEngagementBypassAutoplayPoliciesEnabled(const FeatureContext*) { return is_media_engagement_bypass_autoplay_policies_enabled_; }

  static void SetMediaQueryPrefersColorSchemeEnabled(bool enabled) { is_media_query_prefers_color_scheme_enabled_ = enabled; }
  static bool MediaQueryPrefersColorSchemeEnabled() { return is_media_query_prefers_color_scheme_enabled_; }
  static bool MediaQueryPrefersColorSchemeEnabled(const FeatureContext*) { return is_media_query_prefers_color_scheme_enabled_; }

  static void SetMediaQueryShapeEnabled(bool enabled) { is_media_query_shape_enabled_ = enabled; }
  static bool MediaQueryShapeEnabled() { return is_media_query_shape_enabled_; }
  static bool MediaQueryShapeEnabled(const FeatureContext*) { return is_media_query_shape_enabled_; }

  static void SetMediaSessionEnabled(bool enabled) { is_media_session_enabled_ = enabled; }
  static bool MediaSessionEnabled() { return is_media_session_enabled_; }
  static bool MediaSessionEnabled(const FeatureContext*) { return is_media_session_enabled_; }

  static void SetMediaSourceExperimentalEnabled(bool enabled) { is_media_source_experimental_enabled_ = enabled; }
  static bool MediaSourceExperimentalEnabled() { return is_media_source_experimental_enabled_; }
  static bool MediaSourceExperimentalEnabled(const FeatureContext*) { return is_media_source_experimental_enabled_; }

  static void SetMediaSourceNewAbortAndDurationEnabled(bool enabled) { is_media_source_new_abort_and_duration_enabled_ = enabled; }
  static bool MediaSourceNewAbortAndDurationEnabled() { return is_media_source_new_abort_and_duration_enabled_; }
  static bool MediaSourceNewAbortAndDurationEnabled(const FeatureContext*) { return is_media_source_new_abort_and_duration_enabled_; }

  static void SetMediaStreamTrackContentHintEnabled(bool enabled) { is_media_stream_track_content_hint_enabled_ = enabled; }
  static bool MediaStreamTrackContentHintEnabled() { return is_media_stream_track_content_hint_enabled_; }
  static bool MediaStreamTrackContentHintEnabled(const FeatureContext*) { return is_media_stream_track_content_hint_enabled_; }

  static void SetMergeBlockingNonBlockingPoolsEnabled(bool enabled) { is_merge_blocking_non_blocking_pools_enabled_ = enabled; }
  static bool MergeBlockingNonBlockingPoolsEnabled() { return is_merge_blocking_non_blocking_pools_enabled_; }
  static bool MergeBlockingNonBlockingPoolsEnabled(const FeatureContext*) { return is_merge_blocking_non_blocking_pools_enabled_; }

  static void SetMetaColorSchemeEnabled(bool enabled) { is_meta_color_scheme_enabled_ = enabled; }
  static bool MetaColorSchemeEnabled() { return is_meta_color_scheme_enabled_; }
  static bool MetaColorSchemeEnabled(const FeatureContext*) { return is_meta_color_scheme_enabled_; }

  static void SetMiddleClickAutoscrollEnabled(bool enabled) { is_middle_click_autoscroll_enabled_ = enabled; }
  static bool MiddleClickAutoscrollEnabled() { return is_middle_click_autoscroll_enabled_; }
  static bool MiddleClickAutoscrollEnabled(const FeatureContext*) { return is_middle_click_autoscroll_enabled_; }

  static void SetMimeHandlerViewInCrossProcessFrameEnabled(bool enabled) { is_mime_handler_view_in_cross_process_frame_enabled_ = enabled; }
  static bool MimeHandlerViewInCrossProcessFrameEnabled() { return is_mime_handler_view_in_cross_process_frame_enabled_; }
  static bool MimeHandlerViewInCrossProcessFrameEnabled(const FeatureContext*) { return is_mime_handler_view_in_cross_process_frame_enabled_; }

  static void SetMobileLayoutThemeEnabled(bool enabled) { is_mobile_layout_theme_enabled_ = enabled; }
  static bool MobileLayoutThemeEnabled() { return is_mobile_layout_theme_enabled_; }
  static bool MobileLayoutThemeEnabled(const FeatureContext*) { return is_mobile_layout_theme_enabled_; }

  static void SetModernMediaControlsEnabled(bool enabled) { is_modern_media_controls_enabled_ = enabled; }
  static bool ModernMediaControlsEnabled() { return is_modern_media_controls_enabled_; }
  static bool ModernMediaControlsEnabled(const FeatureContext*) { return is_modern_media_controls_enabled_; }

  static void SetModuleDedicatedWorkerEnabled(bool enabled) { is_module_dedicated_worker_enabled_ = enabled; }
  static bool ModuleDedicatedWorkerEnabled() { return is_module_dedicated_worker_enabled_; }
  static bool ModuleDedicatedWorkerEnabled(const FeatureContext*) { return is_module_dedicated_worker_enabled_; }

  static void SetModuleServiceWorkerEnabled(bool enabled) { is_module_service_worker_enabled_ = enabled; }
  static bool ModuleServiceWorkerEnabled() { return is_module_service_worker_enabled_; }
  static bool ModuleServiceWorkerEnabled(const FeatureContext*) { return is_module_service_worker_enabled_; }

  static void SetMojoJSEnabled(bool enabled) { is_mojo_js_enabled_ = enabled; }
  static bool MojoJSEnabled() { return is_mojo_js_enabled_; }
  static bool MojoJSEnabled(const FeatureContext*) { return is_mojo_js_enabled_; }

  static void SetMojoJSTestEnabled(bool enabled) { is_mojo_js_test_enabled_ = enabled; }
  static bool MojoJSTestEnabled() { return is_mojo_js_test_enabled_; }
  static bool MojoJSTestEnabled(const FeatureContext*) { return is_mojo_js_test_enabled_; }

  static void SetMovementXYInBlinkEnabled(bool enabled) { is_movement_xy_in_blink_enabled_ = enabled; }
  static bool MovementXYInBlinkEnabled() { return is_movement_xy_in_blink_enabled_; }
  static bool MovementXYInBlinkEnabled(const FeatureContext*) { return is_movement_xy_in_blink_enabled_; }

  static void SetNativeFileSystemEnabled(bool enabled) { is_native_file_system_enabled_ = enabled; }
  static bool NativeFileSystemEnabled() { return is_native_file_system_enabled_; }
  static bool NativeFileSystemEnabled(const FeatureContext*) { return is_native_file_system_enabled_; }

  static void SetNativeStreamsEnabled(bool enabled) { is_native_streams_enabled_ = enabled; }
  static bool NativeStreamsEnabled() { return is_native_streams_enabled_; }
  static bool NativeStreamsEnabled(const FeatureContext*) { return is_native_streams_enabled_; }

  static void SetNavigatorContentUtilsEnabled(bool enabled) { is_navigator_content_utils_enabled_ = enabled; }
  static bool NavigatorContentUtilsEnabled() { return is_navigator_content_utils_enabled_; }
  static bool NavigatorContentUtilsEnabled(const FeatureContext*) { return is_navigator_content_utils_enabled_; }

  static void SetNavigatorDeviceMemoryEnabled(bool enabled) { is_navigator_device_memory_enabled_ = enabled; }
  static bool NavigatorDeviceMemoryEnabled() { return is_navigator_device_memory_enabled_; }
  static bool NavigatorDeviceMemoryEnabled(const FeatureContext*) { return is_navigator_device_memory_enabled_; }

  static void SetNavigatorLanguageInInsecureContextEnabled(bool enabled) { is_navigator_language_in_insecure_context_enabled_ = enabled; }
  static bool NavigatorLanguageInInsecureContextEnabled() { return is_navigator_language_in_insecure_context_enabled_; }
  static bool NavigatorLanguageInInsecureContextEnabled(const FeatureContext*) { return is_navigator_language_in_insecure_context_enabled_; }

  static void SetNetInfoDownlinkMaxEnabled(bool enabled) { is_net_info_downlink_max_enabled_ = enabled; }
  static bool NetInfoDownlinkMaxEnabled() { return is_net_info_downlink_max_enabled_; }
  static bool NetInfoDownlinkMaxEnabled(const FeatureContext*) { return is_net_info_downlink_max_enabled_; }

  static void SetNetworkServiceEnabled(bool enabled) { is_network_service_enabled_ = enabled; }
  static bool NetworkServiceEnabled() { return is_network_service_enabled_; }
  static bool NetworkServiceEnabled(const FeatureContext*) { return is_network_service_enabled_; }

  static void SetNewRemotePlaybackPipelineEnabled(bool enabled) { is_new_remote_playback_pipeline_enabled_ = enabled; }
  static bool NewRemotePlaybackPipelineEnabled() { return is_new_remote_playback_pipeline_enabled_; }
  static bool NewRemotePlaybackPipelineEnabled(const FeatureContext*) { return is_new_remote_playback_pipeline_enabled_; }

  static void SetNoIdleEncodingForWebTestsEnabled(bool enabled) { is_no_idle_encoding_for_web_tests_enabled_ = enabled; }
  static bool NoIdleEncodingForWebTestsEnabled() { return is_no_idle_encoding_for_web_tests_enabled_; }
  static bool NoIdleEncodingForWebTestsEnabled(const FeatureContext*) { return is_no_idle_encoding_for_web_tests_enabled_; }

  static void SetNotificationConstructorEnabled(bool enabled) { is_notification_constructor_enabled_ = enabled; }
  static bool NotificationConstructorEnabled() { return is_notification_constructor_enabled_; }
  static bool NotificationConstructorEnabled(const FeatureContext*) { return is_notification_constructor_enabled_; }

  static void SetNotificationContentImageEnabled(bool enabled) { is_notification_content_image_enabled_ = enabled; }
  static bool NotificationContentImageEnabled() { return is_notification_content_image_enabled_; }
  static bool NotificationContentImageEnabled(const FeatureContext*) { return is_notification_content_image_enabled_; }

  static void SetNotificationsEnabled(bool enabled) { is_notifications_enabled_ = enabled; }
  static bool NotificationsEnabled() { return is_notifications_enabled_; }
  static bool NotificationsEnabled(const FeatureContext*) { return is_notifications_enabled_; }

  static void SetNotificationTriggersEnabled(bool enabled) { is_notification_triggers_enabled_ = enabled; }
  static bool NotificationTriggersEnabled() { return is_notification_triggers_enabled_; }
  static bool NotificationTriggersEnabled(const FeatureContext*) { return is_notification_triggers_enabled_; }

  static void SetOffMainThreadCSSPaintEnabled(bool enabled) { is_off_main_thread_css_paint_enabled_ = enabled; }
  static bool OffMainThreadCSSPaintEnabled() { return is_off_main_thread_css_paint_enabled_; }
  static bool OffMainThreadCSSPaintEnabled(const FeatureContext*) { return is_off_main_thread_css_paint_enabled_; }

  static void SetOffscreenCanvasEnabled(bool enabled) { is_offscreen_canvas_enabled_ = enabled; }
  static bool OffscreenCanvasEnabled() { return is_offscreen_canvas_enabled_; }
  static bool OffscreenCanvasEnabled(const FeatureContext*) { return is_offscreen_canvas_enabled_; }

  static void SetOffscreenCanvasCommitEnabled(bool enabled) { is_offscreen_canvas_commit_enabled_ = enabled; }
  static bool OffscreenCanvasCommitEnabled() { return is_offscreen_canvas_commit_enabled_; }
  static bool OffscreenCanvasCommitEnabled(const FeatureContext*) { return is_offscreen_canvas_commit_enabled_; }

  static void SetOffscreenCanvasTextEnabled(bool enabled) { is_offscreen_canvas_text_enabled_ = enabled; }
  static bool OffscreenCanvasTextEnabled() { return is_offscreen_canvas_text_enabled_; }
  static bool OffscreenCanvasTextEnabled(const FeatureContext*) { return is_offscreen_canvas_text_enabled_; }

  static void SetOnDeviceChangeEnabled(bool enabled) { is_on_device_change_enabled_ = enabled; }
  static bool OnDeviceChangeEnabled() { return is_on_device_change_enabled_; }
  static bool OnDeviceChangeEnabled(const FeatureContext*) { return is_on_device_change_enabled_; }

  static void SetOrientationEventEnabled(bool enabled) { is_orientation_event_enabled_ = enabled; }
  static bool OrientationEventEnabled() { return is_orientation_event_enabled_; }
  static bool OrientationEventEnabled(const FeatureContext*) { return is_orientation_event_enabled_; }

  static void SetOriginTrialsEnabled(bool enabled) { is_origin_trials_enabled_ = enabled; }
  static bool OriginTrialsEnabled() { return is_origin_trials_enabled_; }
  static bool OriginTrialsEnabled(const FeatureContext*) { return is_origin_trials_enabled_; }

  static void SetOutOfBlinkCorsEnabled(bool enabled) { is_out_of_blink_cors_enabled_ = enabled; }
  static bool OutOfBlinkCorsEnabled() { return is_out_of_blink_cors_enabled_; }
  static bool OutOfBlinkCorsEnabled(const FeatureContext*) { return is_out_of_blink_cors_enabled_; }

  static void SetOverflowIconsForMediaControlsEnabled(bool enabled) { is_overflow_icons_for_media_controls_enabled_ = enabled; }
  static bool OverflowIconsForMediaControlsEnabled() { return is_overflow_icons_for_media_controls_enabled_; }
  static bool OverflowIconsForMediaControlsEnabled(const FeatureContext*) { return is_overflow_icons_for_media_controls_enabled_; }

  static void SetOverlayScrollbarsEnabled(bool enabled) { is_overlay_scrollbars_enabled_ = enabled; }
  static bool OverlayScrollbarsEnabled() { return is_overlay_scrollbars_enabled_; }
  static bool OverlayScrollbarsEnabled(const FeatureContext*) { return is_overlay_scrollbars_enabled_; }

  static void SetOverscrollCustomizationEnabled(bool enabled) { is_overscroll_customization_enabled_ = enabled; }
  static bool OverscrollCustomizationEnabled() { return is_overscroll_customization_enabled_; }
  static bool OverscrollCustomizationEnabled(const FeatureContext*) { return is_overscroll_customization_enabled_; }

  static void SetPagePopupEnabled(bool enabled) { is_page_popup_enabled_ = enabled; }
  static bool PagePopupEnabled() { return is_page_popup_enabled_; }
  static bool PagePopupEnabled(const FeatureContext*) { return is_page_popup_enabled_; }

  static void SetPaintUnderInvalidationCheckingEnabled(bool enabled) { is_paint_under_invalidation_checking_enabled_ = enabled; }
  static bool PaintUnderInvalidationCheckingEnabled() { return is_paint_under_invalidation_checking_enabled_; }
  static bool PaintUnderInvalidationCheckingEnabled(const FeatureContext*) { return is_paint_under_invalidation_checking_enabled_; }

  static void SetPassiveDocumentEventListenersEnabled(bool enabled) { is_passive_document_event_listeners_enabled_ = enabled; }
  static bool PassiveDocumentEventListenersEnabled() { return is_passive_document_event_listeners_enabled_; }
  static bool PassiveDocumentEventListenersEnabled(const FeatureContext*) { return is_passive_document_event_listeners_enabled_; }

  static void SetPassiveDocumentWheelEventListenersEnabled(bool enabled) { is_passive_document_wheel_event_listeners_enabled_ = enabled; }
  static bool PassiveDocumentWheelEventListenersEnabled() { return is_passive_document_wheel_event_listeners_enabled_; }
  static bool PassiveDocumentWheelEventListenersEnabled(const FeatureContext*) { return is_passive_document_wheel_event_listeners_enabled_; }

  static void SetPassPaintVisualRectToCompositorEnabled(bool enabled) { is_pass_paint_visual_rect_to_compositor_enabled_ = enabled; }
  static bool PassPaintVisualRectToCompositorEnabled() { return is_pass_paint_visual_rect_to_compositor_enabled_; }
  static bool PassPaintVisualRectToCompositorEnabled(const FeatureContext*) { return is_pass_paint_visual_rect_to_compositor_enabled_; }

  static void SetPaymentAppEnabled(bool enabled) { is_payment_app_enabled_ = enabled; }
  static bool PaymentAppEnabled() { return is_payment_app_enabled_; }
  static bool PaymentAppEnabled(const FeatureContext*) { return is_payment_app_enabled_; }

  static void SetPaymentHandlerChangePaymentMethodEnabled(bool enabled) { is_payment_handler_change_payment_method_enabled_ = enabled; }
  static bool PaymentHandlerChangePaymentMethodEnabled() { return is_payment_handler_change_payment_method_enabled_; }
  static bool PaymentHandlerChangePaymentMethodEnabled(const FeatureContext*) { return is_payment_handler_change_payment_method_enabled_; }

  static void SetPaymentMethodChangeEventEnabled(bool enabled) { is_payment_method_change_event_enabled_ = enabled; }
  static bool PaymentMethodChangeEventEnabled() { return is_payment_method_change_event_enabled_; }
  static bool PaymentMethodChangeEventEnabled(const FeatureContext*) { return is_payment_method_change_event_enabled_; }

  static void SetPaymentRequestEnabled(bool enabled) { is_payment_request_enabled_ = enabled; }
  static bool PaymentRequestEnabled() { return is_payment_request_enabled_; }
  static bool PaymentRequestEnabled(const FeatureContext*) { return is_payment_request_enabled_; }

  static void SetPaymentRequestHasEnrolledInstrumentEnabled(bool enabled) { is_payment_request_has_enrolled_instrument_enabled_ = enabled; }
  static bool PaymentRequestHasEnrolledInstrumentEnabled() { return is_payment_request_has_enrolled_instrument_enabled_; }
  static bool PaymentRequestHasEnrolledInstrumentEnabled(const FeatureContext*) { return is_payment_request_has_enrolled_instrument_enabled_; }

  static void SetPaymentRequestMerchantValidationEventEnabled(bool enabled) { is_payment_request_merchant_validation_event_enabled_ = enabled; }
  static bool PaymentRequestMerchantValidationEventEnabled() { return is_payment_request_merchant_validation_event_enabled_; }
  static bool PaymentRequestMerchantValidationEventEnabled(const FeatureContext*) { return is_payment_request_merchant_validation_event_enabled_; }

  static void SetPaymentRetryEnabled(bool enabled) { is_payment_retry_enabled_ = enabled; }
  static bool PaymentRetryEnabled() { return is_payment_retry_enabled_; }
  static bool PaymentRetryEnabled(const FeatureContext*) { return is_payment_retry_enabled_; }

  static void SetPerformanceManagerInstrumentationEnabled(bool enabled) { is_performance_manager_instrumentation_enabled_ = enabled; }
  static bool PerformanceManagerInstrumentationEnabled() { return is_performance_manager_instrumentation_enabled_; }
  static bool PerformanceManagerInstrumentationEnabled(const FeatureContext*) { return is_performance_manager_instrumentation_enabled_; }

  static void SetPerformanceObserverBufferedFlagEnabled(bool enabled) { is_performance_observer_buffered_flag_enabled_ = enabled; }
  static bool PerformanceObserverBufferedFlagEnabled() { return is_performance_observer_buffered_flag_enabled_; }
  static bool PerformanceObserverBufferedFlagEnabled(const FeatureContext*) { return is_performance_observer_buffered_flag_enabled_; }

  static void SetPeriodicBackgroundSyncEnabled(bool enabled) { is_periodic_background_sync_enabled_ = enabled; }
  static bool PeriodicBackgroundSyncEnabled() { return is_periodic_background_sync_enabled_; }
  static bool PeriodicBackgroundSyncEnabled(const FeatureContext*) { return is_periodic_background_sync_enabled_; }

  static void SetPermissionDelegationEnabled(bool enabled) { is_permission_delegation_enabled_ = enabled; }
  static bool PermissionDelegationEnabled() { return is_permission_delegation_enabled_; }
  static bool PermissionDelegationEnabled(const FeatureContext*) { return is_permission_delegation_enabled_; }

  static void SetPermissionsEnabled(bool enabled) { is_permissions_enabled_ = enabled; }
  static bool PermissionsEnabled() { return is_permissions_enabled_; }
  static bool PermissionsEnabled(const FeatureContext*) { return is_permissions_enabled_; }

  static void SetPermissionsRequestRevokeEnabled(bool enabled) { is_permissions_request_revoke_enabled_ = enabled; }
  static bool PermissionsRequestRevokeEnabled() { return is_permissions_request_revoke_enabled_; }
  static bool PermissionsRequestRevokeEnabled(const FeatureContext*) { return is_permissions_request_revoke_enabled_; }

  static void SetPictureInPictureEnabled(bool enabled) { is_picture_in_picture_enabled_ = enabled; }
  static bool PictureInPictureEnabled() { return is_picture_in_picture_enabled_; }
  static bool PictureInPictureEnabled(const FeatureContext*) { return is_picture_in_picture_enabled_; }

  static void SetPictureInPictureAPIEnabled(bool enabled) { is_picture_in_picture_api_enabled_ = enabled; }
  static bool PictureInPictureAPIEnabled() { return is_picture_in_picture_api_enabled_; }
  static bool PictureInPictureAPIEnabled(const FeatureContext*) { return is_picture_in_picture_api_enabled_; }

  static void SetPictureInPictureV2Enabled(bool enabled) { is_picture_in_picture_v_2_enabled_ = enabled; }
  static bool PictureInPictureV2Enabled() { return is_picture_in_picture_v_2_enabled_ && is_picture_in_picture_api_enabled_; }
  static bool PictureInPictureV2Enabled(const FeatureContext*) { return is_picture_in_picture_v_2_enabled_ && is_picture_in_picture_api_enabled_; }

  static void SetPointerRawUpdateEnabled(bool enabled) { is_pointer_raw_update_enabled_ = enabled; }
  static bool PointerRawUpdateEnabled() { return is_pointer_raw_update_enabled_; }
  static bool PointerRawUpdateEnabled(const FeatureContext*) { return is_pointer_raw_update_enabled_; }

  static void SetPortalsEnabled(bool enabled) { is_portals_enabled_ = enabled; }
  static bool PortalsEnabled() { return is_portals_enabled_; }
  static bool PortalsEnabled(const FeatureContext*) { return is_portals_enabled_; }

  static void SetPostAnimationFrameEnabled(bool enabled) { is_post_animation_frame_enabled_ = enabled; }
  static bool PostAnimationFrameEnabled() { return is_post_animation_frame_enabled_; }
  static bool PostAnimationFrameEnabled(const FeatureContext*) { return is_post_animation_frame_enabled_; }

  static void SetPreciseMemoryInfoEnabled(bool enabled) { is_precise_memory_info_enabled_ = enabled; }
  static bool PreciseMemoryInfoEnabled() { return is_precise_memory_info_enabled_; }
  static bool PreciseMemoryInfoEnabled(const FeatureContext*) { return is_precise_memory_info_enabled_; }

  static void SetPredictedEventsEnabled(bool enabled) { is_predicted_events_enabled_ = enabled; }
  static bool PredictedEventsEnabled() { return is_predicted_events_enabled_; }
  static bool PredictedEventsEnabled(const FeatureContext*) { return is_predicted_events_enabled_; }

  static void SetPrefixedVideoFullscreenEnabled(bool enabled) { is_prefixed_video_fullscreen_enabled_ = enabled; }
  static bool PrefixedVideoFullscreenEnabled() { return is_prefixed_video_fullscreen_enabled_; }
  static bool PrefixedVideoFullscreenEnabled(const FeatureContext*) { return is_prefixed_video_fullscreen_enabled_; }

  static void SetPresentationEnabled(bool enabled) { is_presentation_enabled_ = enabled; }
  static bool PresentationEnabled() { return is_presentation_enabled_; }
  static bool PresentationEnabled(const FeatureContext*) { return is_presentation_enabled_; }

  static void SetPrintBrowserEnabled(bool enabled) { is_print_browser_enabled_ = enabled; }
  static bool PrintBrowserEnabled() { return is_print_browser_enabled_; }
  static bool PrintBrowserEnabled(const FeatureContext*) { return is_print_browser_enabled_; }

  static void SetPushMessagingEnabled(bool enabled) { is_push_messaging_enabled_ = enabled; }
  static bool PushMessagingEnabled() { return is_push_messaging_enabled_; }
  static bool PushMessagingEnabled(const FeatureContext*) { return is_push_messaging_enabled_; }

  static void SetRasterInducingScrollEnabled(bool enabled) { is_raster_inducing_scroll_enabled_ = enabled; }
  static bool RasterInducingScrollEnabled() { return is_raster_inducing_scroll_enabled_; }
  static bool RasterInducingScrollEnabled(const FeatureContext*) { return is_raster_inducing_scroll_enabled_; }

  static void SetReducedReferrerGranularityEnabled(bool enabled) { is_reduced_referrer_granularity_enabled_ = enabled; }
  static bool ReducedReferrerGranularityEnabled() { return is_reduced_referrer_granularity_enabled_; }
  static bool ReducedReferrerGranularityEnabled(const FeatureContext*) { return is_reduced_referrer_granularity_enabled_; }

  static void SetRemotePlaybackEnabled(bool enabled) { is_remote_playback_enabled_ = enabled; }
  static bool RemotePlaybackEnabled() { return is_remote_playback_enabled_; }
  static bool RemotePlaybackEnabled(const FeatureContext*) { return is_remote_playback_enabled_; }

  static void SetRemotePlaybackBackendEnabled(bool enabled) { is_remote_playback_backend_enabled_ = enabled; }
  static bool RemotePlaybackBackendEnabled() { return is_remote_playback_backend_enabled_; }
  static bool RemotePlaybackBackendEnabled(const FeatureContext*) { return is_remote_playback_backend_enabled_; }

  static void SetRenderingPipelineThrottlingEnabled(bool enabled) { is_rendering_pipeline_throttling_enabled_ = enabled; }
  static bool RenderingPipelineThrottlingEnabled() { return is_rendering_pipeline_throttling_enabled_; }
  static bool RenderingPipelineThrottlingEnabled(const FeatureContext*) { return is_rendering_pipeline_throttling_enabled_; }

  static void SetResourceLoadSchedulerEnabled(bool enabled) { is_resource_load_scheduler_enabled_ = enabled; }
  static bool ResourceLoadSchedulerEnabled() { return is_resource_load_scheduler_enabled_; }
  static bool ResourceLoadSchedulerEnabled(const FeatureContext*) { return is_resource_load_scheduler_enabled_; }

  static void SetRestrictAppCacheToSecureContextsEnabled(bool enabled) { is_restrict_app_cache_to_secure_contexts_enabled_ = enabled; }
  static bool RestrictAppCacheToSecureContextsEnabled() { return is_restrict_app_cache_to_secure_contexts_enabled_; }
  static bool RestrictAppCacheToSecureContextsEnabled(const FeatureContext*) { return is_restrict_app_cache_to_secure_contexts_enabled_; }

  static void SetRestrictDeviceSensorEventsToSecureContextsEnabled(bool enabled) { is_restrict_device_sensor_events_to_secure_contexts_enabled_ = enabled; }
  static bool RestrictDeviceSensorEventsToSecureContextsEnabled() { return is_restrict_device_sensor_events_to_secure_contexts_enabled_; }
  static bool RestrictDeviceSensorEventsToSecureContextsEnabled(const FeatureContext*) { return is_restrict_device_sensor_events_to_secure_contexts_enabled_; }

  static void SetRestrictLazyFrameLoadingToDataSaverEnabled(bool enabled) { is_restrict_lazy_frame_loading_to_data_saver_enabled_ = enabled; }
  static bool RestrictLazyFrameLoadingToDataSaverEnabled() { return is_restrict_lazy_frame_loading_to_data_saver_enabled_; }
  static bool RestrictLazyFrameLoadingToDataSaverEnabled(const FeatureContext*) { return is_restrict_lazy_frame_loading_to_data_saver_enabled_; }

  static void SetRestrictLazyImageLoadingToDataSaverEnabled(bool enabled) { is_restrict_lazy_image_loading_to_data_saver_enabled_ = enabled; }
  static bool RestrictLazyImageLoadingToDataSaverEnabled() { return is_restrict_lazy_image_loading_to_data_saver_enabled_; }
  static bool RestrictLazyImageLoadingToDataSaverEnabled(const FeatureContext*) { return is_restrict_lazy_image_loading_to_data_saver_enabled_; }

  static void SetRTCDtlsTransportEnabled(bool enabled) { is_rtc_dtls_transport_enabled_ = enabled; }
  static bool RTCDtlsTransportEnabled() { return is_rtc_dtls_transport_enabled_; }
  static bool RTCDtlsTransportEnabled(const FeatureContext*) { return is_rtc_dtls_transport_enabled_; }

  static void SetRTCRtpSenderParametersEnabled(bool enabled) { is_rtc_rtp_sender_parameters_enabled_ = enabled; }
  static bool RTCRtpSenderParametersEnabled() { return is_rtc_rtp_sender_parameters_enabled_; }
  static bool RTCRtpSenderParametersEnabled(const FeatureContext*) { return is_rtc_rtp_sender_parameters_enabled_; }

  static void SetRTCSctpTransportEnabled(bool enabled) { is_rtc_sctp_transport_enabled_ = enabled; }
  static bool RTCSctpTransportEnabled() { return is_rtc_sctp_transport_enabled_; }
  static bool RTCSctpTransportEnabled(const FeatureContext*) { return is_rtc_sctp_transport_enabled_; }

  static void SetRTCUnifiedPlanEnabled(bool enabled) { is_rtc_unified_plan_enabled_ = enabled; }
  static bool RTCUnifiedPlanEnabled() { return is_rtc_unified_plan_enabled_; }
  static bool RTCUnifiedPlanEnabled(const FeatureContext*) { return is_rtc_unified_plan_enabled_; }

  static void SetRTCUnifiedPlanByDefaultEnabled(bool enabled) { is_rtc_unified_plan_by_default_enabled_ = enabled; }
  static bool RTCUnifiedPlanByDefaultEnabled() { return is_rtc_unified_plan_by_default_enabled_; }
  static bool RTCUnifiedPlanByDefaultEnabled(const FeatureContext*) { return is_rtc_unified_plan_by_default_enabled_; }

  static void SetScriptedSpeechRecognitionEnabled(bool enabled) { is_scripted_speech_recognition_enabled_ = enabled; }
  static bool ScriptedSpeechRecognitionEnabled() { return is_scripted_speech_recognition_enabled_; }
  static bool ScriptedSpeechRecognitionEnabled(const FeatureContext*) { return is_scripted_speech_recognition_enabled_; }

  static void SetScriptedSpeechSynthesisEnabled(bool enabled) { is_scripted_speech_synthesis_enabled_ = enabled; }
  static bool ScriptedSpeechSynthesisEnabled() { return is_scripted_speech_synthesis_enabled_; }
  static bool ScriptedSpeechSynthesisEnabled(const FeatureContext*) { return is_scripted_speech_synthesis_enabled_; }

  static void SetScriptStreamingOnPreloadEnabled(bool enabled) { is_script_streaming_on_preload_enabled_ = enabled; }
  static bool ScriptStreamingOnPreloadEnabled() { return is_script_streaming_on_preload_enabled_; }
  static bool ScriptStreamingOnPreloadEnabled(const FeatureContext*) { return is_script_streaming_on_preload_enabled_; }

  static void SetScrollAnchorSerializationEnabled(bool enabled) { is_scroll_anchor_serialization_enabled_ = enabled; }
  static bool ScrollAnchorSerializationEnabled() { return is_scroll_anchor_serialization_enabled_; }
  static bool ScrollAnchorSerializationEnabled(const FeatureContext*) { return is_scroll_anchor_serialization_enabled_; }

  static void SetScrollCustomizationEnabled(bool enabled) { is_scroll_customization_enabled_ = enabled; }
  static bool ScrollCustomizationEnabled() { return is_scroll_customization_enabled_; }
  static bool ScrollCustomizationEnabled(const FeatureContext*) { return is_scroll_customization_enabled_; }

  static void SetScrollTopLeftInteropEnabled(bool enabled) { is_scroll_top_left_interop_enabled_ = enabled; }
  static bool ScrollTopLeftInteropEnabled() { return is_scroll_top_left_interop_enabled_; }
  static bool ScrollTopLeftInteropEnabled(const FeatureContext*) { return is_scroll_top_left_interop_enabled_; }

  static void SetSendBeaconThrowForBlobWithNonSimpleTypeEnabled(bool enabled) { is_send_beacon_throw_for_blob_with_non_simple_type_enabled_ = enabled; }
  static bool SendBeaconThrowForBlobWithNonSimpleTypeEnabled() { return is_send_beacon_throw_for_blob_with_non_simple_type_enabled_; }
  static bool SendBeaconThrowForBlobWithNonSimpleTypeEnabled(const FeatureContext*) { return is_send_beacon_throw_for_blob_with_non_simple_type_enabled_; }

  static void SetSendMouseEventsDisabledFormControlsEnabled(bool enabled) { is_send_mouse_events_disabled_form_controls_enabled_ = enabled; }
  static bool SendMouseEventsDisabledFormControlsEnabled() { return is_send_mouse_events_disabled_form_controls_enabled_; }
  static bool SendMouseEventsDisabledFormControlsEnabled(const FeatureContext*) { return is_send_mouse_events_disabled_form_controls_enabled_; }

  static void SetSensorEnabled(bool enabled) { is_sensor_enabled_ = enabled; }
  static bool SensorEnabled() { return is_sensor_enabled_; }
  static bool SensorEnabled(const FeatureContext*) { return is_sensor_enabled_; }

  static void SetSensorExtraClassesEnabled(bool enabled) { is_sensor_extra_classes_enabled_ = enabled; }
  static bool SensorExtraClassesEnabled() { return is_sensor_extra_classes_enabled_ && is_sensor_enabled_; }
  static bool SensorExtraClassesEnabled(const FeatureContext*) { return is_sensor_extra_classes_enabled_ && is_sensor_enabled_; }

  static void SetSerialEnabled(bool enabled) { is_serial_enabled_ = enabled; }
  static bool SerialEnabled() { return is_serial_enabled_; }
  static bool SerialEnabled(const FeatureContext*) { return is_serial_enabled_; }

  static void SetSetRootScrollerEnabled(bool enabled) { is_set_root_scroller_enabled_ = enabled; }
  static bool SetRootScrollerEnabled() { return is_set_root_scroller_enabled_; }
  static bool SetRootScrollerEnabled(const FeatureContext*) { return is_set_root_scroller_enabled_; }

  static void SetShadowPiercingDescendantCombinatorEnabled(bool enabled) { is_shadow_piercing_descendant_combinator_enabled_ = enabled; }
  static bool ShadowPiercingDescendantCombinatorEnabled() { return is_shadow_piercing_descendant_combinator_enabled_; }
  static bool ShadowPiercingDescendantCombinatorEnabled(const FeatureContext*) { return is_shadow_piercing_descendant_combinator_enabled_; }

  static void SetShapeDetectionEnabled(bool enabled) { is_shape_detection_enabled_ = enabled; }
  static bool ShapeDetectionEnabled() { return is_shape_detection_enabled_; }
  static bool ShapeDetectionEnabled(const FeatureContext*) { return is_shape_detection_enabled_; }

  static void SetSharedArrayBufferEnabled(bool enabled) { is_shared_array_buffer_enabled_ = enabled; }
  static bool SharedArrayBufferEnabled() { return is_shared_array_buffer_enabled_; }
  static bool SharedArrayBufferEnabled(const FeatureContext*) { return is_shared_array_buffer_enabled_; }

  static void SetSharedWorkerEnabled(bool enabled) { is_shared_worker_enabled_ = enabled; }
  static bool SharedWorkerEnabled() { return is_shared_worker_enabled_; }
  static bool SharedWorkerEnabled(const FeatureContext*) { return is_shared_worker_enabled_; }

  static void SetSignedExchangeSubresourcePrefetchEnabled(bool enabled) { is_signed_exchange_subresource_prefetch_enabled_ = enabled; }
  static bool SignedExchangeSubresourcePrefetchEnabled() { return is_signed_exchange_subresource_prefetch_enabled_; }
  static bool SignedExchangeSubresourcePrefetchEnabled(const FeatureContext*) { return is_signed_exchange_subresource_prefetch_enabled_; }

  static void SetSkipTouchEventFilterEnabled(bool enabled) { is_skip_touch_event_filter_enabled_ = enabled; }
  static bool SkipTouchEventFilterEnabled() { return is_skip_touch_event_filter_enabled_; }
  static bool SkipTouchEventFilterEnabled(const FeatureContext*) { return is_skip_touch_event_filter_enabled_; }

  static void SetSmoothScrollJSInterventionEnabled(bool enabled) { is_smooth_scroll_js_intervention_enabled_ = enabled; }
  static bool SmoothScrollJSInterventionEnabled() { return is_smooth_scroll_js_intervention_enabled_; }
  static bool SmoothScrollJSInterventionEnabled(const FeatureContext*) { return is_smooth_scroll_js_intervention_enabled_; }

  static void SetSmsReceiverEnabled(bool enabled) { is_sms_receiver_enabled_ = enabled; }
  static bool SmsReceiverEnabled() { return is_sms_receiver_enabled_; }
  static bool SmsReceiverEnabled(const FeatureContext*) { return is_sms_receiver_enabled_; }

  static void SetSpeechSynthesisEventCharLengthEnabled(bool enabled) { is_speech_synthesis_event_char_length_enabled_ = enabled; }
  static bool SpeechSynthesisEventCharLengthEnabled() { return is_speech_synthesis_event_char_length_enabled_; }
  static bool SpeechSynthesisEventCharLengthEnabled(const FeatureContext*) { return is_speech_synthesis_event_char_length_enabled_; }

  static void SetStableBlinkFeaturesEnabled(bool enabled) { is_stable_blink_features_enabled_ = enabled; }
  static bool StableBlinkFeaturesEnabled() { return is_stable_blink_features_enabled_; }
  static bool StableBlinkFeaturesEnabled(const FeatureContext*) { return is_stable_blink_features_enabled_; }

  static void SetStackedCSSPropertyAnimationsEnabled(bool enabled) { is_stacked_css_property_animations_enabled_ = enabled; }
  static bool StackedCSSPropertyAnimationsEnabled() { return is_stacked_css_property_animations_enabled_; }
  static bool StackedCSSPropertyAnimationsEnabled(const FeatureContext*) { return is_stacked_css_property_animations_enabled_; }

  static void SetStorageQuotaDetailsEnabled(bool enabled) { is_storage_quota_details_enabled_ = enabled; }
  static bool StorageQuotaDetailsEnabled() { return is_storage_quota_details_enabled_; }
  static bool StorageQuotaDetailsEnabled(const FeatureContext*) { return is_storage_quota_details_enabled_; }

  static void SetStreamsNativeEnabled(bool enabled) { is_streams_native_enabled_ = enabled; }
  static bool StreamsNativeEnabled() { return is_streams_native_enabled_; }
  static bool StreamsNativeEnabled(const FeatureContext*) { return is_streams_native_enabled_; }

  static void SetTextFragmentIdentifiersEnabled(bool enabled) { is_text_fragment_identifiers_enabled_ = enabled; }
  static bool TextFragmentIdentifiersEnabled() { return is_text_fragment_identifiers_enabled_; }
  static bool TextFragmentIdentifiersEnabled(const FeatureContext*) { return is_text_fragment_identifiers_enabled_; }

  static void SetTextUnderlinePositionLeftRightEnabled(bool enabled) { is_text_underline_position_left_right_enabled_ = enabled; }
  static bool TextUnderlinePositionLeftRightEnabled() { return is_text_underline_position_left_right_enabled_; }
  static bool TextUnderlinePositionLeftRightEnabled(const FeatureContext*) { return is_text_underline_position_left_right_enabled_; }

  static void SetTimerThrottlingForBackgroundTabsEnabled(bool enabled) { is_timer_throttling_for_background_tabs_enabled_ = enabled; }
  static bool TimerThrottlingForBackgroundTabsEnabled() { return is_timer_throttling_for_background_tabs_enabled_; }
  static bool TimerThrottlingForBackgroundTabsEnabled(const FeatureContext*) { return is_timer_throttling_for_background_tabs_enabled_; }

  static void SetTimerThrottlingForHiddenFramesEnabled(bool enabled) { is_timer_throttling_for_hidden_frames_enabled_ = enabled; }
  static bool TimerThrottlingForHiddenFramesEnabled() { return is_timer_throttling_for_hidden_frames_enabled_; }
  static bool TimerThrottlingForHiddenFramesEnabled(const FeatureContext*) { return is_timer_throttling_for_hidden_frames_enabled_; }

  static void SetTrackLayoutPassesPerBlockEnabled(bool enabled) { is_track_layout_passes_per_block_enabled_ = enabled; }
  static bool TrackLayoutPassesPerBlockEnabled() { return is_track_layout_passes_per_block_enabled_; }
  static bool TrackLayoutPassesPerBlockEnabled(const FeatureContext*) { return is_track_layout_passes_per_block_enabled_; }

  static void SetTransferableStreamsEnabled(bool enabled) { is_transferable_streams_enabled_ = enabled; }
  static bool TransferableStreamsEnabled() { return is_transferable_streams_enabled_; }
  static bool TransferableStreamsEnabled(const FeatureContext*) { return is_transferable_streams_enabled_; }

  static void SetTranslateServiceEnabled(bool enabled) { is_translate_service_enabled_ = enabled; }
  static bool TranslateServiceEnabled() { return is_translate_service_enabled_; }
  static bool TranslateServiceEnabled(const FeatureContext*) { return is_translate_service_enabled_; }

  static void SetUnclosedFormControlIsInvalidEnabled(bool enabled) { is_unclosed_form_control_is_invalid_enabled_ = enabled; }
  static bool UnclosedFormControlIsInvalidEnabled() { return is_unclosed_form_control_is_invalid_enabled_; }
  static bool UnclosedFormControlIsInvalidEnabled(const FeatureContext*) { return is_unclosed_form_control_is_invalid_enabled_; }

  static void SetUnifiedPointerCaptureInBlinkEnabled(bool enabled) { is_unified_pointer_capture_in_blink_enabled_ = enabled; }
  static bool UnifiedPointerCaptureInBlinkEnabled() { return is_unified_pointer_capture_in_blink_enabled_; }
  static bool UnifiedPointerCaptureInBlinkEnabled(const FeatureContext*) { return is_unified_pointer_capture_in_blink_enabled_; }

  static void SetUnifiedTouchAdjustmentEnabled(bool enabled) { is_unified_touch_adjustment_enabled_ = enabled; }
  static bool UnifiedTouchAdjustmentEnabled() { return is_unified_touch_adjustment_enabled_; }
  static bool UnifiedTouchAdjustmentEnabled(const FeatureContext*) { return is_unified_touch_adjustment_enabled_; }

  static void SetUpdateHoverFromLayoutChangeAtBeginFrameEnabled(bool enabled) { is_update_hover_from_layout_change_at_begin_frame_enabled_ = enabled; }
  static bool UpdateHoverFromLayoutChangeAtBeginFrameEnabled() { return is_update_hover_from_layout_change_at_begin_frame_enabled_; }
  static bool UpdateHoverFromLayoutChangeAtBeginFrameEnabled(const FeatureContext*) { return is_update_hover_from_layout_change_at_begin_frame_enabled_; }

  static void SetUpdateHoverFromScrollAtBeginFrameEnabled(bool enabled) { is_update_hover_from_scroll_at_begin_frame_enabled_ = enabled; }
  static bool UpdateHoverFromScrollAtBeginFrameEnabled() { return is_update_hover_from_scroll_at_begin_frame_enabled_; }
  static bool UpdateHoverFromScrollAtBeginFrameEnabled(const FeatureContext*) { return is_update_hover_from_scroll_at_begin_frame_enabled_; }

  static void SetUserActivationAPIEnabled(bool enabled) { is_user_activation_api_enabled_ = enabled; }
  static bool UserActivationAPIEnabled() { return is_user_activation_api_enabled_; }
  static bool UserActivationAPIEnabled(const FeatureContext*) { return is_user_activation_api_enabled_; }

  static void SetUserActivationPostMessageTransferEnabled(bool enabled) { is_user_activation_post_message_transfer_enabled_ = enabled; }
  static bool UserActivationPostMessageTransferEnabled() { return is_user_activation_post_message_transfer_enabled_; }
  static bool UserActivationPostMessageTransferEnabled(const FeatureContext*) { return is_user_activation_post_message_transfer_enabled_; }

  static void SetUserActivationSameOriginVisibilityEnabled(bool enabled) { is_user_activation_same_origin_visibility_enabled_ = enabled; }
  static bool UserActivationSameOriginVisibilityEnabled() { return is_user_activation_same_origin_visibility_enabled_; }
  static bool UserActivationSameOriginVisibilityEnabled(const FeatureContext*) { return is_user_activation_same_origin_visibility_enabled_; }

  static void SetUserActivationV2Enabled(bool enabled) { is_user_activation_v_2_enabled_ = enabled; }
  static bool UserActivationV2Enabled() { return is_user_activation_v_2_enabled_; }
  static bool UserActivationV2Enabled(const FeatureContext*) { return is_user_activation_v_2_enabled_; }

  static void SetUserAgentClientHintEnabled(bool enabled) { is_user_agent_client_hint_enabled_ = enabled; }
  static bool UserAgentClientHintEnabled() { return is_user_agent_client_hint_enabled_; }
  static bool UserAgentClientHintEnabled(const FeatureContext*) { return is_user_agent_client_hint_enabled_; }

  static void SetV8IdleTasksEnabled(bool enabled) { is_v8_idle_tasks_enabled_ = enabled; }
  static bool V8IdleTasksEnabled() { return is_v8_idle_tasks_enabled_; }
  static bool V8IdleTasksEnabled(const FeatureContext*) { return is_v8_idle_tasks_enabled_; }

  static void SetVideoAutoFullscreenEnabled(bool enabled) { is_video_auto_fullscreen_enabled_ = enabled; }
  static bool VideoAutoFullscreenEnabled() { return is_video_auto_fullscreen_enabled_; }
  static bool VideoAutoFullscreenEnabled(const FeatureContext*) { return is_video_auto_fullscreen_enabled_; }

  static void SetVideoFullscreenDetectionEnabled(bool enabled) { is_video_fullscreen_detection_enabled_ = enabled; }
  static bool VideoFullscreenDetectionEnabled() { return is_video_fullscreen_detection_enabled_; }
  static bool VideoFullscreenDetectionEnabled(const FeatureContext*) { return is_video_fullscreen_detection_enabled_; }

  static void SetVideoFullscreenOrientationLockEnabled(bool enabled) { is_video_fullscreen_orientation_lock_enabled_ = enabled; }
  static bool VideoFullscreenOrientationLockEnabled() { return is_video_fullscreen_orientation_lock_enabled_; }
  static bool VideoFullscreenOrientationLockEnabled(const FeatureContext*) { return is_video_fullscreen_orientation_lock_enabled_; }

  static void SetVideoRotateToFullscreenEnabled(bool enabled) { is_video_rotate_to_fullscreen_enabled_ = enabled; }
  static bool VideoRotateToFullscreenEnabled() { return is_video_rotate_to_fullscreen_enabled_; }
  static bool VideoRotateToFullscreenEnabled(const FeatureContext*) { return is_video_rotate_to_fullscreen_enabled_; }

  static void SetVisibilityCollapseColumnEnabled(bool enabled) { is_visibility_collapse_column_enabled_ = enabled; }
  static bool VisibilityCollapseColumnEnabled() { return is_visibility_collapse_column_enabled_; }
  static bool VisibilityCollapseColumnEnabled(const FeatureContext*) { return is_visibility_collapse_column_enabled_; }

  static void SetWakeLockNavigatorEnabled(bool enabled) { is_wake_lock_navigator_enabled_ = enabled; }
  static bool WakeLockNavigatorEnabled() { return is_wake_lock_navigator_enabled_; }
  static bool WakeLockNavigatorEnabled(const FeatureContext*) { return is_wake_lock_navigator_enabled_; }

  static void SetWasmCodeCacheEnabled(bool enabled) { is_wasm_code_cache_enabled_ = enabled; }
  static bool WasmCodeCacheEnabled() { return is_wasm_code_cache_enabled_; }
  static bool WasmCodeCacheEnabled(const FeatureContext*) { return is_wasm_code_cache_enabled_; }

  static void SetWebAnimationsAPIEnabled(bool enabled) { is_web_animations_api_enabled_ = enabled; }
  static bool WebAnimationsAPIEnabled() { return is_web_animations_api_enabled_ || is_animation_worklet_enabled_; }
  static bool WebAnimationsAPIEnabled(const FeatureContext*) { return is_web_animations_api_enabled_ || is_animation_worklet_enabled_; }

  static void SetWebAnimationsSVGEnabled(bool enabled) { is_web_animations_svg_enabled_ = enabled; }
  static bool WebAnimationsSVGEnabled() { return is_web_animations_svg_enabled_; }
  static bool WebAnimationsSVGEnabled(const FeatureContext*) { return is_web_animations_svg_enabled_; }

  static void SetWebAuthEnabled(bool enabled) { is_web_auth_enabled_ = enabled; }
  static bool WebAuthEnabled() { return is_web_auth_enabled_; }
  static bool WebAuthEnabled(const FeatureContext*) { return is_web_auth_enabled_; }

  static void SetWebBluetoothEnabled(bool enabled) { is_web_bluetooth_enabled_ = enabled; }
  static bool WebBluetoothEnabled() { return is_web_bluetooth_enabled_; }
  static bool WebBluetoothEnabled(const FeatureContext*) { return is_web_bluetooth_enabled_; }

  static void SetWebBluetoothScanningEnabled(bool enabled) { is_web_bluetooth_scanning_enabled_ = enabled; }
  static bool WebBluetoothScanningEnabled() { return is_web_bluetooth_scanning_enabled_; }
  static bool WebBluetoothScanningEnabled(const FeatureContext*) { return is_web_bluetooth_scanning_enabled_; }

  static void SetWebGL2ComputeContextEnabled(bool enabled) { is_webgl2_compute_context_enabled_ = enabled; }
  static bool WebGL2ComputeContextEnabled() { return is_webgl2_compute_context_enabled_; }
  static bool WebGL2ComputeContextEnabled(const FeatureContext*) { return is_webgl2_compute_context_enabled_; }

  static void SetWebGLDraftExtensionsEnabled(bool enabled) { is_webgl_draft_extensions_enabled_ = enabled; }
  static bool WebGLDraftExtensionsEnabled() { return is_webgl_draft_extensions_enabled_; }
  static bool WebGLDraftExtensionsEnabled(const FeatureContext*) { return is_webgl_draft_extensions_enabled_; }

  static void SetWebGLImageChromiumEnabled(bool enabled) { is_webgl_image_chromium_enabled_ = enabled; }
  static bool WebGLImageChromiumEnabled() { return is_webgl_image_chromium_enabled_; }
  static bool WebGLImageChromiumEnabled(const FeatureContext*) { return is_webgl_image_chromium_enabled_; }

  static void SetWebGPUEnabled(bool enabled) { is_webgpu_enabled_ = enabled; }
  static bool WebGPUEnabled() { return is_webgpu_enabled_; }
  static bool WebGPUEnabled(const FeatureContext*) { return is_webgpu_enabled_; }

  static void SetWebHIDEnabled(bool enabled) { is_web_hid_enabled_ = enabled; }
  static bool WebHIDEnabled() { return is_web_hid_enabled_; }
  static bool WebHIDEnabled(const FeatureContext*) { return is_web_hid_enabled_; }

  static void SetWebNFCEnabled(bool enabled) { is_web_nfc_enabled_ = enabled; }
  static bool WebNFCEnabled() { return is_web_nfc_enabled_; }
  static bool WebNFCEnabled(const FeatureContext*) { return is_web_nfc_enabled_; }

  static void SetWebShareEnabled(bool enabled) { is_web_share_enabled_ = enabled; }
  static bool WebShareEnabled() { return is_web_share_enabled_; }
  static bool WebShareEnabled(const FeatureContext*) { return is_web_share_enabled_; }

  static void SetWebShareV2Enabled(bool enabled) { is_web_share_v_2_enabled_ = enabled; }
  static bool WebShareV2Enabled() { return is_web_share_v_2_enabled_ && is_web_share_enabled_; }
  static bool WebShareV2Enabled(const FeatureContext*) { return is_web_share_v_2_enabled_ && is_web_share_enabled_; }

  static void SetWebUSBEnabled(bool enabled) { is_web_usb_enabled_ = enabled; }
  static bool WebUSBEnabled() { return is_web_usb_enabled_; }
  static bool WebUSBEnabled(const FeatureContext*) { return is_web_usb_enabled_; }

  static void SetWebUSBOnDedicatedWorkersEnabled(bool enabled) { is_web_usb_on_dedicated_workers_enabled_ = enabled; }
  static bool WebUSBOnDedicatedWorkersEnabled() { return is_web_usb_on_dedicated_workers_enabled_ && is_web_usb_enabled_; }
  static bool WebUSBOnDedicatedWorkersEnabled(const FeatureContext*) { return is_web_usb_on_dedicated_workers_enabled_ && is_web_usb_enabled_; }

  static void SetWebVTTRegionsEnabled(bool enabled) { is_web_vtt_regions_enabled_ = enabled; }
  static bool WebVTTRegionsEnabled() { return is_web_vtt_regions_enabled_; }
  static bool WebVTTRegionsEnabled(const FeatureContext*) { return is_web_vtt_regions_enabled_; }

  static void SetWebXRHitTestEnabled(bool enabled) { is_web_xr_hit_test_enabled_ = enabled; }
  static bool WebXRHitTestEnabled() { return is_web_xr_hit_test_enabled_; }
  static bool WebXRHitTestEnabled(const FeatureContext*) { return is_web_xr_hit_test_enabled_; }

  static void SetWebXRPlaneDetectionEnabled(bool enabled) { is_web_xr_plane_detection_enabled_ = enabled; }
  static bool WebXRPlaneDetectionEnabled() { return is_web_xr_plane_detection_enabled_; }
  static bool WebXRPlaneDetectionEnabled(const FeatureContext*) { return is_web_xr_plane_detection_enabled_; }

  static void SetWorkerNosniffBlockEnabled(bool enabled) { is_worker_nosniff_block_enabled_ = enabled; }
  static bool WorkerNosniffBlockEnabled() { return is_worker_nosniff_block_enabled_; }
  static bool WorkerNosniffBlockEnabled(const FeatureContext*) { return is_worker_nosniff_block_enabled_; }

  static void SetWorkerNosniffWarnEnabled(bool enabled) { is_worker_nosniff_warn_enabled_ = enabled; }
  static bool WorkerNosniffWarnEnabled() { return is_worker_nosniff_warn_enabled_ || is_worker_nosniff_block_enabled_; }
  static bool WorkerNosniffWarnEnabled(const FeatureContext*) { return is_worker_nosniff_warn_enabled_ || is_worker_nosniff_block_enabled_; }

  static void SetWorkerTaskQueueEnabled(bool enabled) { is_worker_task_queue_enabled_ = enabled; }
  static bool WorkerTaskQueueEnabled() { return is_worker_task_queue_enabled_; }
  static bool WorkerTaskQueueEnabled(const FeatureContext*) { return is_worker_task_queue_enabled_; }

  static void SetXSLTEnabled(bool enabled) { is_xslt_enabled_ = enabled; }
  static bool XSLTEnabled() { return is_xslt_enabled_; }
  static bool XSLTEnabled(const FeatureContext*) { return is_xslt_enabled_; }


  // Origin-trial-enabled features:
  //
  // These features are currently part of an origin trial (see
  // https://www.chromium.org/blink/origin-trials). <feature>EnabledByRuntimeFlag()
  // can be used to test whether the feature is unconditionally enabled
  // (for example, by starting the browser with the appropriate command-line flag).
  // However, that is almost always the incorrect check. Most renderer code should
  // be calling <feature>Enabled(const FeatureContext*) instead, to test if the
  // feature is enabled in a given context.

  static void SetAnimationWorkletEnabled(bool enabled) { is_animation_worklet_enabled_ = enabled; }
  static bool AnimationWorkletEnabledByRuntimeFlag() { return is_animation_worklet_enabled_; }
  static bool AnimationWorkletEnabled(const FeatureContext*);

  static void SetAutoPictureInPictureEnabled(bool enabled) { is_auto_picture_in_picture_enabled_ = enabled; }
  static bool AutoPictureInPictureEnabledByRuntimeFlag() { return is_auto_picture_in_picture_enabled_ && is_picture_in_picture_api_enabled_; }
  static bool AutoPictureInPictureEnabled(const FeatureContext*);

  static void SetBadgingEnabled(bool enabled) { is_badging_enabled_ = enabled; }
  static bool BadgingEnabledByRuntimeFlag() { return is_badging_enabled_; }
  static bool BadgingEnabled(const FeatureContext*);

  static void SetBuiltInModuleInfraEnabled(bool enabled) { is_built_in_module_infra_enabled_ = enabled; }
  static bool BuiltInModuleInfraEnabledByRuntimeFlag() { return is_built_in_module_infra_enabled_ || is_experimental_productivity_features_enabled_ || is_built_in_module_all_enabled_ || is_built_in_module_kv_storage_enabled_; }
  static bool BuiltInModuleInfraEnabled(const FeatureContext*);

  static void SetBuiltInModuleKvStorageEnabled(bool enabled) { is_built_in_module_kv_storage_enabled_ = enabled; }
  static bool BuiltInModuleKvStorageEnabledByRuntimeFlag() { return is_built_in_module_kv_storage_enabled_ || is_experimental_productivity_features_enabled_; }
  static bool BuiltInModuleKvStorageEnabled(const FeatureContext*);

  static void SetContactsManagerEnabled(bool enabled) { is_contacts_manager_enabled_ = enabled; }
  static bool ContactsManagerEnabledByRuntimeFlag() { return is_contacts_manager_enabled_; }
  static bool ContactsManagerEnabled(const FeatureContext*);

  static void SetCookieStoreEnabled(bool enabled) { is_cookie_store_enabled_ = enabled; }
  static bool CookieStoreEnabledByRuntimeFlag() { return is_cookie_store_enabled_; }
  static bool CookieStoreEnabled(const FeatureContext*);

  static void SetCustomElementsV0Enabled(bool enabled) { is_custom_elements_v0_enabled_ = enabled; }
  static bool CustomElementsV0EnabledByRuntimeFlag() { return is_custom_elements_v0_enabled_; }
  static bool CustomElementsV0Enabled(const FeatureContext*);

  static void SetDisableHardwareNoiseSuppressionEnabled(bool enabled) { is_disable_hardware_noise_suppression_enabled_ = enabled; }
  static bool DisableHardwareNoiseSuppressionEnabledByRuntimeFlag() { return is_disable_hardware_noise_suppression_enabled_; }
  static bool DisableHardwareNoiseSuppressionEnabled(const FeatureContext*);

  static void SetElementTimingEnabled(bool enabled) { is_element_timing_enabled_ = enabled; }
  static bool ElementTimingEnabledByRuntimeFlag() { return is_element_timing_enabled_; }
  static bool ElementTimingEnabled(const FeatureContext*);

  static void SetEventTimingEnabled(bool enabled) { is_event_timing_enabled_ = enabled; }
  static bool EventTimingEnabledByRuntimeFlag() { return is_event_timing_enabled_; }
  static bool EventTimingEnabled(const FeatureContext*);

  static void SetExperimentalIsInputPendingEnabled(bool enabled) { is_experimental_is_input_pending_enabled_ = enabled; }
  static bool ExperimentalIsInputPendingEnabledByRuntimeFlag() { return is_experimental_is_input_pending_enabled_; }
  static bool ExperimentalIsInputPendingEnabled(const FeatureContext*);

  static void SetFeaturePolicyReportingEnabled(bool enabled) { is_feature_policy_reporting_enabled_ = enabled; }
  static bool FeaturePolicyReportingEnabledByRuntimeFlag() { return is_feature_policy_reporting_enabled_ || is_experimental_productivity_features_enabled_; }
  static bool FeaturePolicyReportingEnabled(const FeatureContext*);

  static void SetHrefTranslateEnabled(bool enabled) { is_href_translate_enabled_ = enabled; }
  static bool HrefTranslateEnabledByRuntimeFlag() { return is_href_translate_enabled_ && is_translate_service_enabled_; }
  static bool HrefTranslateEnabled(const FeatureContext*);

  static void SetHTMLImportsEnabled(bool enabled) { is_html_imports_enabled_ = enabled; }
  static bool HTMLImportsEnabledByRuntimeFlag() { return is_html_imports_enabled_; }
  static bool HTMLImportsEnabled(const FeatureContext*);

  static void SetInstalledAppEnabled(bool enabled) { is_installed_app_enabled_ = enabled; }
  static bool InstalledAppEnabledByRuntimeFlag() { return is_installed_app_enabled_; }
  static bool InstalledAppEnabled(const FeatureContext*);

  static void SetJankTrackingEnabled(bool enabled) { is_jank_tracking_enabled_ = enabled; }
  static bool JankTrackingEnabledByRuntimeFlag() { return is_jank_tracking_enabled_ || is_layout_jank_api_enabled_ || is_jank_tracking_sweep_line_enabled_; }
  static bool JankTrackingEnabled(const FeatureContext*);

  static void SetLayoutJankAPIEnabled(bool enabled) { is_layout_jank_api_enabled_ = enabled; }
  static bool LayoutJankAPIEnabledByRuntimeFlag() { return is_layout_jank_api_enabled_; }
  static bool LayoutJankAPIEnabled(const FeatureContext*);

  static void SetLegacyPerformanceMemoryCountersEnabled(bool enabled) { is_legacy_performance_memory_counters_enabled_ = enabled; }
  static bool LegacyPerformanceMemoryCountersEnabledByRuntimeFlag() { return is_legacy_performance_memory_counters_enabled_; }
  static bool LegacyPerformanceMemoryCountersEnabled(const FeatureContext*);

  static void SetMediaCapabilitiesEncryptedMediaEnabled(bool enabled) { is_media_capabilities_encrypted_media_enabled_ = enabled; }
  static bool MediaCapabilitiesEncryptedMediaEnabledByRuntimeFlag() { return is_media_capabilities_encrypted_media_enabled_; }
  static bool MediaCapabilitiesEncryptedMediaEnabled(const FeatureContext*);

  static void SetMuteButtonEnabled(bool enabled) { is_mute_button_enabled_ = enabled; }
  static bool MuteButtonEnabledByRuntimeFlag() { return is_mute_button_enabled_ && is_picture_in_picture_api_enabled_; }
  static bool MuteButtonEnabled(const FeatureContext*);

  static void SetOriginTrialsSampleAPIEnabled(bool enabled) { is_origin_trials_sample_api_enabled_ = enabled; }
  static bool OriginTrialsSampleAPIEnabledByRuntimeFlag() { return is_origin_trials_sample_api_enabled_; }
  static bool OriginTrialsSampleAPIEnabled(const FeatureContext*);

  static void SetOriginTrialsSampleAPIDependentEnabled(bool enabled) { is_origin_trials_sample_api_dependent_enabled_ = enabled; }
  static bool OriginTrialsSampleAPIDependentEnabledByRuntimeFlag() { return is_origin_trials_sample_api_dependent_enabled_ && is_origin_trials_sample_api_enabled_; }
  static bool OriginTrialsSampleAPIDependentEnabled(const FeatureContext*);

  static void SetOriginTrialsSampleAPIImpliedEnabled(bool enabled) { is_origin_trials_sample_api_implied_enabled_ = enabled; }
  static bool OriginTrialsSampleAPIImpliedEnabledByRuntimeFlag() { return is_origin_trials_sample_api_implied_enabled_ || is_origin_trials_sample_api_enabled_ || is_origin_trials_sample_api_invalid_os_enabled_; }
  static bool OriginTrialsSampleAPIImpliedEnabled(const FeatureContext*);

  static void SetOriginTrialsSampleAPIInvalidOSEnabled(bool enabled) { is_origin_trials_sample_api_invalid_os_enabled_ = enabled; }
  static bool OriginTrialsSampleAPIInvalidOSEnabledByRuntimeFlag() { return is_origin_trials_sample_api_invalid_os_enabled_; }
  static bool OriginTrialsSampleAPIInvalidOSEnabled(const FeatureContext*);

  static void SetOriginTrialsSampleAPINavigationEnabled(bool enabled) { is_origin_trials_sample_api_navigation_enabled_ = enabled; }
  static bool OriginTrialsSampleAPINavigationEnabledByRuntimeFlag() { return is_origin_trials_sample_api_navigation_enabled_; }
  static bool OriginTrialsSampleAPINavigationEnabled(const FeatureContext*);

  static void SetPageLifecycleTransitionsOptInEnabled(bool enabled) { is_page_lifecycle_transitions_opt_in_enabled_ = enabled; }
  static bool PageLifecycleTransitionsOptInEnabledByRuntimeFlag() { return is_page_lifecycle_transitions_opt_in_enabled_; }
  static bool PageLifecycleTransitionsOptInEnabled(const FeatureContext*);

  static void SetPageLifecycleTransitionsOptOutEnabled(bool enabled) { is_page_lifecycle_transitions_opt_out_enabled_ = enabled; }
  static bool PageLifecycleTransitionsOptOutEnabledByRuntimeFlag() { return is_page_lifecycle_transitions_opt_out_enabled_; }
  static bool PageLifecycleTransitionsOptOutEnabled(const FeatureContext*);

  static void SetPerMethodCanMakePaymentQuotaEnabled(bool enabled) { is_per_method_can_make_payment_quota_enabled_ = enabled; }
  static bool PerMethodCanMakePaymentQuotaEnabledByRuntimeFlag() { return is_per_method_can_make_payment_quota_enabled_; }
  static bool PerMethodCanMakePaymentQuotaEnabled(const FeatureContext*);

  static void SetPriorityHintsEnabled(bool enabled) { is_priority_hints_enabled_ = enabled; }
  static bool PriorityHintsEnabledByRuntimeFlag() { return is_priority_hints_enabled_; }
  static bool PriorityHintsEnabled(const FeatureContext*);

  static void SetRtcAudioJitterBufferMaxPacketsEnabled(bool enabled) { is_rtc_audio_jitter_buffer_max_packets_enabled_ = enabled; }
  static bool RtcAudioJitterBufferMaxPacketsEnabledByRuntimeFlag() { return is_rtc_audio_jitter_buffer_max_packets_enabled_; }
  static bool RtcAudioJitterBufferMaxPacketsEnabled(const FeatureContext*);

  static void SetRtcAudioJitterBufferRtxHandlingEnabled(bool enabled) { is_rtc_audio_jitter_buffer_rtx_handling_enabled_ = enabled; }
  static bool RtcAudioJitterBufferRtxHandlingEnabledByRuntimeFlag() { return is_rtc_audio_jitter_buffer_rtx_handling_enabled_; }
  static bool RtcAudioJitterBufferRtxHandlingEnabled(const FeatureContext*);

  static void SetRTCIceTransportExtensionEnabled(bool enabled) { is_rtc_ice_transport_extension_enabled_ = enabled; }
  static bool RTCIceTransportExtensionEnabledByRuntimeFlag() { return is_rtc_ice_transport_extension_enabled_; }
  static bool RTCIceTransportExtensionEnabled(const FeatureContext*);

  static void SetRtcJitterBufferDelayHintEnabled(bool enabled) { is_rtc_jitter_buffer_delay_hint_enabled_ = enabled; }
  static bool RtcJitterBufferDelayHintEnabledByRuntimeFlag() { return is_rtc_jitter_buffer_delay_hint_enabled_; }
  static bool RtcJitterBufferDelayHintEnabled(const FeatureContext*);

  static void SetRTCQuicTransportEnabled(bool enabled) { is_rtc_quic_transport_enabled_ = enabled; }
  static bool RTCQuicTransportEnabledByRuntimeFlag() { return is_rtc_quic_transport_enabled_; }
  static bool RTCQuicTransportEnabled(const FeatureContext*);

  static void SetRTCStatsRelativePacketArrivalDelayEnabled(bool enabled) { is_rtc_stats_relative_packet_arrival_delay_enabled_ = enabled; }
  static bool RTCStatsRelativePacketArrivalDelayEnabledByRuntimeFlag() { return is_rtc_stats_relative_packet_arrival_delay_enabled_; }
  static bool RTCStatsRelativePacketArrivalDelayEnabled(const FeatureContext*);

  static void SetShadowDOMV0Enabled(bool enabled) { is_shadow_dom_v0_enabled_ = enabled; }
  static bool ShadowDOMV0EnabledByRuntimeFlag() { return is_shadow_dom_v0_enabled_; }
  static bool ShadowDOMV0Enabled(const FeatureContext*);

  static void SetSignatureBasedIntegrityEnabled(bool enabled) { is_signature_based_integrity_enabled_ = enabled; }
  static bool SignatureBasedIntegrityEnabledByRuntimeFlag() { return is_signature_based_integrity_enabled_; }
  static bool SignatureBasedIntegrityEnabled(const FeatureContext*);

  static void SetSkipAdEnabled(bool enabled) { is_skip_ad_enabled_ = enabled; }
  static bool SkipAdEnabledByRuntimeFlag() { return is_skip_ad_enabled_ && is_media_session_enabled_; }
  static bool SkipAdEnabled(const FeatureContext*);

  static void SetStaleWhileRevalidateEnabled(bool enabled) { is_stale_while_revalidate_enabled_ = enabled; }
  static bool StaleWhileRevalidateEnabledByRuntimeFlag() { return is_stale_while_revalidate_enabled_; }
  static bool StaleWhileRevalidateEnabled(const FeatureContext*);

  static void SetTouchEventFeatureDetectionEnabled(bool enabled) { is_touch_event_feature_detection_enabled_ = enabled; }
  static bool TouchEventFeatureDetectionEnabledByRuntimeFlag() { return is_touch_event_feature_detection_enabled_; }
  static bool TouchEventFeatureDetectionEnabled(const FeatureContext*);

  static void SetTrustedDOMTypesEnabled(bool enabled) { is_trusted_dom_types_enabled_ = enabled; }
  static bool TrustedDOMTypesEnabledByRuntimeFlag() { return is_trusted_dom_types_enabled_; }
  static bool TrustedDOMTypesEnabled(const FeatureContext*);

  static void SetUnoptimizedImagePoliciesEnabled(bool enabled) { is_unoptimized_image_policies_enabled_ = enabled; }
  static bool UnoptimizedImagePoliciesEnabledByRuntimeFlag() { return is_unoptimized_image_policies_enabled_ || is_experimental_productivity_features_enabled_; }
  static bool UnoptimizedImagePoliciesEnabled(const FeatureContext*);

  static void SetWebAssemblyThreadsEnabled(bool enabled) { is_web_assembly_threads_enabled_ = enabled; }
  static bool WebAssemblyThreadsEnabledByRuntimeFlag() { return is_web_assembly_threads_enabled_; }
  static bool WebAssemblyThreadsEnabled(const FeatureContext*);

  static void SetWebVREnabled(bool enabled) { is_web_vr_enabled_ = enabled; }
  static bool WebVREnabledByRuntimeFlag() { return is_web_vr_enabled_; }
  static bool WebVREnabled(const FeatureContext*);

  static void SetWebXREnabled(bool enabled) { is_web_xr_enabled_ = enabled; }
  static bool WebXREnabledByRuntimeFlag() { return is_web_xr_enabled_; }
  static bool WebXREnabled(const FeatureContext*);


 private:
  static bool is_accelerated_2d_canvas_enabled_;
  static bool is_accessibility_object_model_enabled_;
  static bool is_ad_tagging_enabled_;
  static bool is_allow_activation_delegation_attr_enabled_;
  static bool is_allow_content_initiated_data_url_navigations_enabled_;
  static bool is_animation_worklet_enabled_;
  static bool is_async_clipboard_enabled_;
  static bool is_audio_output_devices_enabled_;
  static bool is_audio_video_tracks_enabled_;
  static bool is_automation_controlled_enabled_;
  static bool is_auto_picture_in_picture_enabled_;
  static bool is_autoplay_ignores_web_audio_enabled_;
  static bool is_background_fetch_enabled_;
  static bool is_background_video_track_optimization_enabled_;
  static bool is_badging_enabled_;
  static bool is_bidi_caret_affinity_enabled_;
  static bool is_blink_gen_property_trees_enabled_;
  static bool is_blink_runtime_call_stats_enabled_;
  static bool is_bloated_renderer_detection_enabled_;
  static bool is_bloated_renderer_detection_skip_uptime_check_enabled_;
  static bool is_blob_read_methods_enabled_;
  static bool is_block_credentialed_subresources_enabled_;
  static bool is_blocking_downloads_in_sandbox_without_user_activation_enabled_;
  static bool is_block_meta_set_cookie_enabled_;
  static bool is_built_in_module_all_enabled_;
  static bool is_built_in_module_infra_enabled_;
  static bool is_built_in_module_kv_storage_enabled_;
  static bool is_cache_inline_script_code_enabled_;
  static bool is_cache_storage_add_all_rejects_duplicates_enabled_;
  static bool is_call_capture_listeners_at_capture_phase_at_shadow_hosts_enabled_;
  static bool is_canvas_2d_context_lost_restored_enabled_;
  static bool is_canvas_2d_fixed_rendering_mode_enabled_;
  static bool is_canvas_2d_image_chromium_enabled_;
  static bool is_canvas_2d_scroll_path_into_view_enabled_;
  static bool is_canvas_color_management_enabled_;
  static bool is_canvas_hit_region_enabled_;
  static bool is_canvas_image_smoothing_enabled_;
  static bool is_click_retargetting_enabled_;
  static bool is_client_placeholders_for_server_lo_fi_enabled_;
  static bool is_composite_after_paint_enabled_;
  static bool is_composited_selection_update_enabled_;
  static bool is_compositor_touch_action_enabled_;
  static bool is_computed_accessibility_info_enabled_;
  static bool is_contacts_manager_enabled_;
  static bool is_context_menu_enabled_;
  static bool is_cookie_store_enabled_;
  static bool is_cors_rfc_1918_enabled_;
  static bool is_css_3_text_enabled_;
  static bool is_css_additive_animations_enabled_;
  static bool is_css_alt_text_enabled_;
  static bool is_css_backdrop_filter_enabled_;
  static bool is_css_calc_as_int_enabled_;
  static bool is_css_focus_visible_enabled_;
  static bool is_css_font_feature_values_enabled_;
  static bool is_css_font_size_adjust_enabled_;
  static bool is_css_hex_alpha_color_enabled_;
  static bool is_css_independent_transform_properties_enabled_;
  static bool is_css_layout_api_enabled_;
  static bool is_css_logical_enabled_;
  static bool is_css_mask_source_type_enabled_;
  static bool is_css_offset_path_ray_enabled_;
  static bool is_css_offset_path_ray_contain_enabled_;
  static bool is_css_offset_position_anchor_enabled_;
  static bool is_css_paint_api_arguments_enabled_;
  static bool is_css_part_pseudo_element_enabled_;
  static bool is_css_picture_in_picture_enabled_;
  static bool is_css_pseudo_is_enabled_;
  static bool is_css_pseudo_where_enabled_;
  static bool is_css_snap_size_enabled_;
  static bool is_css_variables_2_enabled_;
  static bool is_css_variables_2_image_values_enabled_;
  static bool is_css_variables_2_transform_values_enabled_;
  static bool is_css_viewport_enabled_;
  static bool is_custom_element_default_style_enabled_;
  static bool is_custom_elements_v0_enabled_;
  static bool is_custom_user_timing_enabled_;
  static bool is_database_enabled_;
  static bool is_decode_to_yuv_enabled_;
  static bool is_desktop_capture_disable_local_echo_control_enabled_;
  static bool is_disable_hardware_noise_suppression_enabled_;
  static bool is_display_cutout_api_enabled_;
  static bool is_display_locking_enabled_;
  static bool is_document_cookie_enabled_;
  static bool is_document_domain_enabled_;
  static bool is_document_write_enabled_;
  static bool is_editing_ng_enabled_;
  static bool is_element_internals_enabled_;
  static bool is_element_timing_enabled_;
  static bool is_encrypted_media_encryption_scheme_query_enabled_;
  static bool is_encrypted_media_hdcp_policy_check_enabled_;
  static bool is_encrypted_media_persistent_usage_record_session_enabled_;
  static bool is_event_timing_enabled_;
  static bool is_exec_command_in_java_script_enabled_;
  static bool is_expensive_background_timer_throttling_enabled_;
  static bool is_experimental_content_security_policy_features_enabled_;
  static bool is_experimental_is_input_pending_enabled_;
  static bool is_experimental_productivity_features_enabled_;
  static bool is_extended_text_metrics_enabled_;
  static bool is_extra_webgl_video_texture_metadata_enabled_;
  static bool is_fallback_cursor_mode_enabled_;
  static bool is_fast_border_radius_enabled_;
  static bool is_fast_flat_tree_traversal_enabled_;
  static bool is_fast_mobile_scrolling_enabled_;
  static bool is_feature_policy_for_sandbox_enabled_;
  static bool is_feature_policy_java_script_interface_enabled_;
  static bool is_feature_policy_reporting_enabled_;
  static bool is_feature_policy_vibrate_feature_enabled_;
  static bool is_fetch_metadata_enabled_;
  static bool is_fetch_metadata_destination_enabled_;
  static bool is_file_system_enabled_;
  static bool is_first_contentful_paint_plus_plus_enabled_;
  static bool is_focusless_spatial_navigation_enabled_;
  static bool is_font_src_local_matching_enabled_;
  static bool is_forbid_sync_xhr_in_page_dismissal_enabled_;
  static bool is_force_overlay_fullscreen_video_enabled_;
  static bool is_force_synchronous_html_parsing_enabled_;
  static bool is_force_taller_select_popup_enabled_;
  static bool is_form_associated_custom_elements_enabled_;
  static bool is_form_data_event_enabled_;
  static bool is_fractional_mouse_event_enabled_;
  static bool is_fractional_scroll_offsets_enabled_;
  static bool is_freeze_frames_on_visibility_enabled_;
  static bool is_gamepad_button_axis_events_enabled_;
  static bool is_get_display_media_enabled_;
  static bool is_heap_compaction_enabled_;
  static bool is_heap_concurrent_marking_enabled_;
  static bool is_heap_incremental_marking_enabled_;
  static bool is_heap_incremental_marking_stress_enabled_;
  static bool is_href_translate_enabled_;
  static bool is_html_imports_enabled_;
  static bool is_html_imports_only_chrome_enabled_;
  static bool is_html_imports_style_application_enabled_;
  static bool is_idb_observer_enabled_;
  static bool is_idb_transaction_commit_enabled_;
  static bool is_idle_detection_enabled_;
  static bool is_ignore_cross_origin_window_when_named_access_on_window_enabled_;
  static bool is_image_orientation_enabled_;
  static bool is_implicit_root_scroller_enabled_;
  static bool is_inert_attribute_enabled_;
  static bool is_input_multiple_fields_ui_enabled_;
  static bool is_installed_app_enabled_;
  static bool is_intersection_observer_v_2_enabled_;
  static bool is_invisible_dom_enabled_;
  static bool is_isolated_code_cache_enabled_;
  static bool is_isolated_world_csp_enabled_;
  static bool is_jank_tracking_enabled_;
  static bool is_jank_tracking_sweep_line_enabled_;
  static bool is_keyboard_focusable_scrollers_enabled_;
  static bool is_lang_attribute_aware_form_control_ui_enabled_;
  static bool is_lang_client_hint_header_enabled_;
  static bool is_layout_jank_api_enabled_;
  static bool is_layout_ng_enabled_;
  static bool is_layout_ng_block_fragmentation_enabled_;
  static bool is_layout_ng_fieldset_enabled_;
  static bool is_layout_ng_flex_box_enabled_;
  static bool is_layout_ng_fragment_caching_enabled_;
  static bool is_lazy_frame_loading_enabled_;
  static bool is_lazy_frame_visible_load_time_metrics_enabled_;
  static bool is_lazy_image_loading_enabled_;
  static bool is_lazy_image_visible_load_time_metrics_enabled_;
  static bool is_lazy_initialize_media_controls_enabled_;
  static bool is_legacy_performance_memory_counters_enabled_;
  static bool is_long_task_v_2_enabled_;
  static bool is_manual_slotting_enabled_;
  static bool is_media_capabilities_encoding_info_enabled_;
  static bool is_media_capabilities_encrypted_media_enabled_;
  static bool is_media_capture_enabled_;
  static bool is_media_capture_depth_video_kind_enabled_;
  static bool is_media_cast_overlay_button_enabled_;
  static bool is_media_controls_expand_gesture_enabled_;
  static bool is_media_controls_overlay_play_button_enabled_;
  static bool is_media_document_download_button_enabled_;
  static bool is_media_engagement_bypass_autoplay_policies_enabled_;
  static bool is_media_query_prefers_color_scheme_enabled_;
  static bool is_media_query_shape_enabled_;
  static bool is_media_session_enabled_;
  static bool is_media_source_experimental_enabled_;
  static bool is_media_source_new_abort_and_duration_enabled_;
  static bool is_media_stream_track_content_hint_enabled_;
  static bool is_merge_blocking_non_blocking_pools_enabled_;
  static bool is_meta_color_scheme_enabled_;
  static bool is_middle_click_autoscroll_enabled_;
  static bool is_mime_handler_view_in_cross_process_frame_enabled_;
  static bool is_mobile_layout_theme_enabled_;
  static bool is_modern_media_controls_enabled_;
  static bool is_module_dedicated_worker_enabled_;
  static bool is_module_service_worker_enabled_;
  static bool is_mojo_js_enabled_;
  static bool is_mojo_js_test_enabled_;
  static bool is_movement_xy_in_blink_enabled_;
  static bool is_mute_button_enabled_;
  static bool is_native_file_system_enabled_;
  static bool is_native_streams_enabled_;
  static bool is_navigator_content_utils_enabled_;
  static bool is_navigator_device_memory_enabled_;
  static bool is_navigator_language_in_insecure_context_enabled_;
  static bool is_net_info_downlink_max_enabled_;
  static bool is_network_service_enabled_;
  static bool is_new_remote_playback_pipeline_enabled_;
  static bool is_no_idle_encoding_for_web_tests_enabled_;
  static bool is_notification_constructor_enabled_;
  static bool is_notification_content_image_enabled_;
  static bool is_notifications_enabled_;
  static bool is_notification_triggers_enabled_;
  static bool is_off_main_thread_css_paint_enabled_;
  static bool is_offscreen_canvas_enabled_;
  static bool is_offscreen_canvas_commit_enabled_;
  static bool is_offscreen_canvas_text_enabled_;
  static bool is_on_device_change_enabled_;
  static bool is_orientation_event_enabled_;
  static bool is_origin_trials_enabled_;
  static bool is_origin_trials_sample_api_enabled_;
  static bool is_origin_trials_sample_api_dependent_enabled_;
  static bool is_origin_trials_sample_api_implied_enabled_;
  static bool is_origin_trials_sample_api_invalid_os_enabled_;
  static bool is_origin_trials_sample_api_navigation_enabled_;
  static bool is_out_of_blink_cors_enabled_;
  static bool is_overflow_icons_for_media_controls_enabled_;
  static bool is_overlay_scrollbars_enabled_;
  static bool is_overscroll_customization_enabled_;
  static bool is_page_lifecycle_transitions_opt_in_enabled_;
  static bool is_page_lifecycle_transitions_opt_out_enabled_;
  static bool is_page_popup_enabled_;
  static bool is_paint_under_invalidation_checking_enabled_;
  static bool is_passive_document_event_listeners_enabled_;
  static bool is_passive_document_wheel_event_listeners_enabled_;
  static bool is_pass_paint_visual_rect_to_compositor_enabled_;
  static bool is_payment_app_enabled_;
  static bool is_payment_handler_change_payment_method_enabled_;
  static bool is_payment_method_change_event_enabled_;
  static bool is_payment_request_enabled_;
  static bool is_payment_request_has_enrolled_instrument_enabled_;
  static bool is_payment_request_merchant_validation_event_enabled_;
  static bool is_payment_retry_enabled_;
  static bool is_performance_manager_instrumentation_enabled_;
  static bool is_performance_observer_buffered_flag_enabled_;
  static bool is_periodic_background_sync_enabled_;
  static bool is_per_method_can_make_payment_quota_enabled_;
  static bool is_permission_delegation_enabled_;
  static bool is_permissions_enabled_;
  static bool is_permissions_request_revoke_enabled_;
  static bool is_picture_in_picture_enabled_;
  static bool is_picture_in_picture_api_enabled_;
  static bool is_picture_in_picture_v_2_enabled_;
  static bool is_pointer_raw_update_enabled_;
  static bool is_portals_enabled_;
  static bool is_post_animation_frame_enabled_;
  static bool is_precise_memory_info_enabled_;
  static bool is_predicted_events_enabled_;
  static bool is_prefixed_video_fullscreen_enabled_;
  static bool is_presentation_enabled_;
  static bool is_print_browser_enabled_;
  static bool is_priority_hints_enabled_;
  static bool is_push_messaging_enabled_;
  static bool is_raster_inducing_scroll_enabled_;
  static bool is_reduced_referrer_granularity_enabled_;
  static bool is_remote_playback_enabled_;
  static bool is_remote_playback_backend_enabled_;
  static bool is_rendering_pipeline_throttling_enabled_;
  static bool is_resource_load_scheduler_enabled_;
  static bool is_restrict_app_cache_to_secure_contexts_enabled_;
  static bool is_restrict_device_sensor_events_to_secure_contexts_enabled_;
  static bool is_restrict_lazy_frame_loading_to_data_saver_enabled_;
  static bool is_restrict_lazy_image_loading_to_data_saver_enabled_;
  static bool is_rtc_audio_jitter_buffer_max_packets_enabled_;
  static bool is_rtc_audio_jitter_buffer_rtx_handling_enabled_;
  static bool is_rtc_dtls_transport_enabled_;
  static bool is_rtc_ice_transport_extension_enabled_;
  static bool is_rtc_jitter_buffer_delay_hint_enabled_;
  static bool is_rtc_quic_transport_enabled_;
  static bool is_rtc_rtp_sender_parameters_enabled_;
  static bool is_rtc_sctp_transport_enabled_;
  static bool is_rtc_stats_relative_packet_arrival_delay_enabled_;
  static bool is_rtc_unified_plan_enabled_;
  static bool is_rtc_unified_plan_by_default_enabled_;
  static bool is_scripted_speech_recognition_enabled_;
  static bool is_scripted_speech_synthesis_enabled_;
  static bool is_script_streaming_on_preload_enabled_;
  static bool is_scroll_anchor_serialization_enabled_;
  static bool is_scroll_customization_enabled_;
  static bool is_scroll_top_left_interop_enabled_;
  static bool is_send_beacon_throw_for_blob_with_non_simple_type_enabled_;
  static bool is_send_mouse_events_disabled_form_controls_enabled_;
  static bool is_sensor_enabled_;
  static bool is_sensor_extra_classes_enabled_;
  static bool is_serial_enabled_;
  static bool is_set_root_scroller_enabled_;
  static bool is_shadow_dom_v0_enabled_;
  static bool is_shadow_piercing_descendant_combinator_enabled_;
  static bool is_shape_detection_enabled_;
  static bool is_shared_array_buffer_enabled_;
  static bool is_shared_worker_enabled_;
  static bool is_signature_based_integrity_enabled_;
  static bool is_signed_exchange_subresource_prefetch_enabled_;
  static bool is_skip_ad_enabled_;
  static bool is_skip_touch_event_filter_enabled_;
  static bool is_smooth_scroll_js_intervention_enabled_;
  static bool is_sms_receiver_enabled_;
  static bool is_speech_synthesis_event_char_length_enabled_;
  static bool is_stable_blink_features_enabled_;
  static bool is_stacked_css_property_animations_enabled_;
  static bool is_stale_while_revalidate_enabled_;
  static bool is_storage_quota_details_enabled_;
  static bool is_streams_native_enabled_;
  static bool is_text_fragment_identifiers_enabled_;
  static bool is_text_underline_position_left_right_enabled_;
  static bool is_timer_throttling_for_background_tabs_enabled_;
  static bool is_timer_throttling_for_hidden_frames_enabled_;
  static bool is_touch_event_feature_detection_enabled_;
  static bool is_track_layout_passes_per_block_enabled_;
  static bool is_transferable_streams_enabled_;
  static bool is_translate_service_enabled_;
  static bool is_trusted_dom_types_enabled_;
  static bool is_unclosed_form_control_is_invalid_enabled_;
  static bool is_unified_pointer_capture_in_blink_enabled_;
  static bool is_unified_touch_adjustment_enabled_;
  static bool is_unoptimized_image_policies_enabled_;
  static bool is_update_hover_from_layout_change_at_begin_frame_enabled_;
  static bool is_update_hover_from_scroll_at_begin_frame_enabled_;
  static bool is_user_activation_api_enabled_;
  static bool is_user_activation_post_message_transfer_enabled_;
  static bool is_user_activation_same_origin_visibility_enabled_;
  static bool is_user_activation_v_2_enabled_;
  static bool is_user_agent_client_hint_enabled_;
  static bool is_v8_idle_tasks_enabled_;
  static bool is_video_auto_fullscreen_enabled_;
  static bool is_video_fullscreen_detection_enabled_;
  static bool is_video_fullscreen_orientation_lock_enabled_;
  static bool is_video_rotate_to_fullscreen_enabled_;
  static bool is_visibility_collapse_column_enabled_;
  static bool is_wake_lock_navigator_enabled_;
  static bool is_wasm_code_cache_enabled_;
  static bool is_web_animations_api_enabled_;
  static bool is_web_animations_svg_enabled_;
  static bool is_web_assembly_threads_enabled_;
  static bool is_web_auth_enabled_;
  static bool is_web_bluetooth_enabled_;
  static bool is_web_bluetooth_scanning_enabled_;
  static bool is_webgl2_compute_context_enabled_;
  static bool is_webgl_draft_extensions_enabled_;
  static bool is_webgl_image_chromium_enabled_;
  static bool is_webgpu_enabled_;
  static bool is_web_hid_enabled_;
  static bool is_web_nfc_enabled_;
  static bool is_web_share_enabled_;
  static bool is_web_share_v_2_enabled_;
  static bool is_web_usb_enabled_;
  static bool is_web_usb_on_dedicated_workers_enabled_;
  static bool is_web_vr_enabled_;
  static bool is_web_vtt_regions_enabled_;
  static bool is_web_xr_enabled_;
  static bool is_web_xr_hit_test_enabled_;
  static bool is_web_xr_plane_detection_enabled_;
  static bool is_worker_nosniff_block_enabled_;
  static bool is_worker_nosniff_warn_enabled_;
  static bool is_worker_task_queue_enabled_;
  static bool is_xslt_enabled_;
};

}  // namespace blink

#endif  // RUNTIME_ENABLED_FEATURES_H_
