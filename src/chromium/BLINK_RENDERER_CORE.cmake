### --- BLINK_RENDERER_CORE ---###

set(CUR_SRC_DIR ${BLINK_RENDERER_CORE_DIR})

# path to ...gen/third_party/blink/renderer/core/
set(CUR_OUT_DIR ${GEN_COMBINED_DIR}/third_party/blink/renderer/core/)

# src/chromium/gen/gen_blink_public//third_party/blink/renderer/core/third_party/blink/renderer/bindings/core/v8/iterable.h
# message(FATAL_ERROR "GEN_BLINK_PUBLIC_DIR..=${GEN_BLINK_PUBLIC_DIR}/third_party/blink/renderer/bindings/core/v8/iterable.h")

list(APPEND BLINK_RENDERER_CORE_SOURCES
  #${CUR_SRC_DIR}core_export.h
  ${CUR_SRC_DIR}core_initializer.cc
  #${CUR_SRC_DIR}core_initializer.h
)

#if(ENABLE_HARFBUZZ)
  #
#endif(ENABLE_HARFBUZZ)

list(APPEND BLINK_RENDERER_CORE_TYPED_ARRAYS_SOURCES
  #${CUR_SRC_DIR}typed_arrays/array_buffer_view_helpers.h
  ${CUR_SRC_DIR}typed_arrays/dom_array_buffer.cc
  #${CUR_SRC_DIR}typed_arrays/dom_array_buffer.h
  #${CUR_SRC_DIR}typed_arrays/dom_array_buffer_base.h
  #${CUR_SRC_DIR}typed_arrays/dom_array_buffer_view.h
  ${CUR_SRC_DIR}typed_arrays/dom_array_piece.cc
  #${CUR_SRC_DIR}typed_arrays/dom_array_piece.h
  ${CUR_SRC_DIR}typed_arrays/dom_data_view.cc
  #${CUR_SRC_DIR}typed_arrays/dom_data_view.h
  ${CUR_SRC_DIR}typed_arrays/dom_shared_array_buffer.cc
  #${CUR_SRC_DIR}typed_arrays/dom_shared_array_buffer.h
  ${CUR_SRC_DIR}typed_arrays/dom_typed_array.cc
  #${CUR_SRC_DIR}typed_arrays/dom_typed_array.h
  #${CUR_SRC_DIR}typed_arrays/flexible_array_buffer_view.h
  #${CUR_SRC_DIR}typed_arrays/typed_flexible_array_buffer_view.h
)

# requires
# > renderer/bindings
# > renderer/platform
# > core/dom
# > core/fileapi
# > core/messaging
# > core/typed_arrays
# > core/frame
list(APPEND BLINK_RENDERER_CORE_EVENTS_SOURCES
  # blink_core_sources("events")
  #${CUR_SRC_DIR}events/after_print_event.h
  ${CUR_SRC_DIR}events/animation_event.cc
  #${CUR_SRC_DIR}events/animation_event.h
  ${CUR_SRC_DIR}events/animation_playback_event.cc
  #${CUR_SRC_DIR}events/animation_playback_event.h
  ${CUR_SRC_DIR}events/application_cache_error_event.cc
  #${CUR_SRC_DIR}events/application_cache_error_event.h
  #${CUR_SRC_DIR}events/before_print_event.h
  ${CUR_SRC_DIR}events/before_text_inserted_event.cc
  #${CUR_SRC_DIR}events/before_text_inserted_event.h
  ${CUR_SRC_DIR}events/before_unload_event.cc
  #${CUR_SRC_DIR}events/before_unload_event.h
  ${CUR_SRC_DIR}events/clipboard_event.cc
  #${CUR_SRC_DIR}events/clipboard_event.h
  ${CUR_SRC_DIR}events/composition_event.cc
  #${CUR_SRC_DIR}events/composition_event.h
  ${CUR_SRC_DIR}events/current_input_event.cc
  #${CUR_SRC_DIR}events/current_input_event.h
  ${CUR_SRC_DIR}events/drag_event.cc
  #${CUR_SRC_DIR}events/drag_event.h
  ${CUR_SRC_DIR}events/error_event.cc
  #${CUR_SRC_DIR}events/error_event.h
  #${CUR_SRC_DIR}events/event_factory.h
  ${CUR_SRC_DIR}events/event_util.cc
  #${CUR_SRC_DIR}events/event_util.h
  ${CUR_SRC_DIR}events/focus_event.cc
  #${CUR_SRC_DIR}events/focus_event.h
  ${CUR_SRC_DIR}events/gesture_event.cc
  #${CUR_SRC_DIR}events/gesture_event.h
  #${CUR_SRC_DIR}events/hash_change_event.h
  ${CUR_SRC_DIR}events/input_event.cc
  #${CUR_SRC_DIR}events/input_event.h
  ${CUR_SRC_DIR}events/keyboard_event.cc
  #${CUR_SRC_DIR}events/keyboard_event.h
  ${CUR_SRC_DIR}events/message_event.cc
  #${CUR_SRC_DIR}events/message_event.h
  ${CUR_SRC_DIR}events/mouse_event.cc
  #${CUR_SRC_DIR}events/mouse_event.h
  ${CUR_SRC_DIR}events/mutation_event.cc
  #${CUR_SRC_DIR}events/mutation_event.h
  ${CUR_SRC_DIR}events/navigator_events.cc
  #${CUR_SRC_DIR}events/navigator_events.h
  ${CUR_SRC_DIR}events/overscroll_event.cc
  #${CUR_SRC_DIR}events/overscroll_event.h
  ${CUR_SRC_DIR}events/page_transition_event.cc
  #${CUR_SRC_DIR}events/page_transition_event.h
  ${CUR_SRC_DIR}events/pointer_event.cc
  #${CUR_SRC_DIR}events/pointer_event.h
  ${CUR_SRC_DIR}events/pointer_event_factory.cc
  #${CUR_SRC_DIR}events/pointer_event_factory.h
  ${CUR_SRC_DIR}events/pop_state_event.cc
  #${CUR_SRC_DIR}events/pop_state_event.h
  ${CUR_SRC_DIR}events/portal_activate_event.cc
  #${CUR_SRC_DIR}events/portal_activate_event.h
  ${CUR_SRC_DIR}events/progress_event.cc
  #${CUR_SRC_DIR}events/progress_event.h
  ${CUR_SRC_DIR}events/promise_rejection_event.cc
  #${CUR_SRC_DIR}events/promise_rejection_event.h
  ${CUR_SRC_DIR}events/resource_progress_event.cc
  #${CUR_SRC_DIR}events/resource_progress_event.h
  ${CUR_SRC_DIR}events/security_policy_violation_event.cc
  #${CUR_SRC_DIR}events/security_policy_violation_event.h
  ${CUR_SRC_DIR}events/text_event.cc
  #${CUR_SRC_DIR}events/text_event.h
  #${CUR_SRC_DIR}events/text_event_input_type.h
  ${CUR_SRC_DIR}events/touch_event.cc
  #${CUR_SRC_DIR}events/touch_event.h
  ${CUR_SRC_DIR}events/touch_event_context.cc
  #${CUR_SRC_DIR}events/touch_event_context.h
  ${CUR_SRC_DIR}events/transition_event.cc
  #${CUR_SRC_DIR}events/transition_event.h
  ${CUR_SRC_DIR}events/ui_event.cc
  #${CUR_SRC_DIR}events/ui_event.h
  ${CUR_SRC_DIR}events/ui_event_with_key_state.cc
  #${CUR_SRC_DIR}events/ui_event_with_key_state.h
  ${CUR_SRC_DIR}events/visual_viewport_resize_event.cc
  #${CUR_SRC_DIR}events/visual_viewport_resize_event.h
  ${CUR_SRC_DIR}events/visual_viewport_scroll_event.cc
  #${CUR_SRC_DIR}events/visual_viewport_scroll_event.h
  ${CUR_SRC_DIR}events/web_input_event_conversion.cc
  #${CUR_SRC_DIR}events/web_input_event_conversion.h
  ${CUR_SRC_DIR}events/wheel_event.cc
  #${CUR_SRC_DIR}events/wheel_event.h
)


list(APPEND BLINK_RENDERER_CORE_EXECUTION_CONTEXT_SOURCES
  ${CUR_SRC_DIR}execution_context/agent.cc
  #${CUR_SRC_DIR}execution_context/agent.h
  ${CUR_SRC_DIR}execution_context/context_lifecycle_notifier.cc
  #${CUR_SRC_DIR}execution_context/context_lifecycle_notifier.h
  ${CUR_SRC_DIR}execution_context/context_lifecycle_observer.cc
  #${CUR_SRC_DIR}execution_context/context_lifecycle_observer.h
  ${CUR_SRC_DIR}execution_context/context_lifecycle_state_observer.cc
  #${CUR_SRC_DIR}execution_context/context_lifecycle_state_observer.h
  ${CUR_SRC_DIR}execution_context/execution_context.cc
  #${CUR_SRC_DIR}execution_context/execution_context.h
  ${CUR_SRC_DIR}execution_context/remote_security_context.cc
  #${CUR_SRC_DIR}execution_context/remote_security_context.h
  ${CUR_SRC_DIR}execution_context/security_context.cc
  #${CUR_SRC_DIR}execution_context/security_context.h
  ${CUR_SRC_DIR}execution_context/window_agent.cc
  #${CUR_SRC_DIR}execution_context/window_agent.h
  ${CUR_SRC_DIR}execution_context/window_agent_factory.cc
  #${CUR_SRC_DIR}execution_context/window_agent_factory.h
)

list(APPEND BLINK_RENDERER_CORE_EXPORTED_SOURCES
  ${CUR_SRC_DIR}exported/local_frame_client_impl.cc
  #${CUR_SRC_DIR}exported/local_frame_client_impl.h
  ${CUR_SRC_DIR}exported/web_array_buffer.cc
  ${CUR_SRC_DIR}exported/web_array_buffer_converter.cc
  ${CUR_SRC_DIR}exported/web_associated_url_loader_impl.cc
  #${CUR_SRC_DIR}exported/web_associated_url_loader_impl.h
  ${CUR_SRC_DIR}exported/web_blob.cc
  ${CUR_SRC_DIR}exported/web_console_message.cc
  ${CUR_SRC_DIR}exported/web_content_holder.cc
  ${CUR_SRC_DIR}exported/web_context_features.cc
  ${CUR_SRC_DIR}exported/web_custom_element.cc
  ${CUR_SRC_DIR}exported/web_dev_tools_agent_impl.cc
  #${CUR_SRC_DIR}exported/web_dev_tools_agent_impl.h
  ${CUR_SRC_DIR}exported/web_document.cc
  ${CUR_SRC_DIR}exported/web_document_loader_impl.cc
  #${CUR_SRC_DIR}exported/web_document_loader_impl.h
  ${CUR_SRC_DIR}exported/web_dom_activity_logger.cc
  ${CUR_SRC_DIR}exported/web_dom_event.cc
  ${CUR_SRC_DIR}exported/web_dom_message_event.cc
  ${CUR_SRC_DIR}exported/web_element.cc
  ${CUR_SRC_DIR}exported/web_element_collection.cc
  ${CUR_SRC_DIR}exported/web_form_control_element.cc
  ${CUR_SRC_DIR}exported/web_form_element.cc
  ${CUR_SRC_DIR}exported/web_form_element_observer_impl.cc
  #${CUR_SRC_DIR}exported/web_form_element_observer_impl.h
  ${CUR_SRC_DIR}exported/web_frame.cc
  ${CUR_SRC_DIR}exported/web_frame_content_dumper.cc
  ${CUR_SRC_DIR}exported/web_frame_serializer.cc
  ${CUR_SRC_DIR}exported/web_heap.cc
  ${CUR_SRC_DIR}exported/web_history_item.cc
  ${CUR_SRC_DIR}exported/web_hit_test_result.cc
  ${CUR_SRC_DIR}exported/web_image_cache.cc
  ${CUR_SRC_DIR}exported/web_input_element.cc
  ${CUR_SRC_DIR}exported/web_input_method_controller_impl.cc
  #${CUR_SRC_DIR}exported/web_input_method_controller_impl.h
  ${CUR_SRC_DIR}exported/web_label_element.cc
  ${CUR_SRC_DIR}exported/web_language_detection_details.cc
  ${CUR_SRC_DIR}exported/web_local_frame_client.cc
  ${CUR_SRC_DIR}exported/web_memory_statistics.cc
  ${CUR_SRC_DIR}exported/web_meta_element.cc
  ${CUR_SRC_DIR}exported/web_navigation_params.cc
  ${CUR_SRC_DIR}exported/web_node.cc
  ${CUR_SRC_DIR}exported/web_option_element.cc
  ${CUR_SRC_DIR}exported/web_page_importance_signals.cc
  ${CUR_SRC_DIR}exported/web_page_popup_impl.cc
  #${CUR_SRC_DIR}exported/web_page_popup_impl.h
  ${CUR_SRC_DIR}exported/web_performance.cc
  ${CUR_SRC_DIR}exported/web_plugin_container_impl.cc
  #${CUR_SRC_DIR}exported/web_plugin_container_impl.h
  ${CUR_SRC_DIR}exported/web_plugin_document.cc
  ${CUR_SRC_DIR}exported/web_plugin_script_forbidden_scope.cc
  ${CUR_SRC_DIR}exported/web_range.cc
  ${CUR_SRC_DIR}exported/web_remote_frame_impl.cc
  #${CUR_SRC_DIR}exported/web_remote_frame_impl.h
  ${CUR_SRC_DIR}exported/web_render_theme.cc
  ${CUR_SRC_DIR}exported/web_scoped_user_gesture.cc
  ${CUR_SRC_DIR}exported/web_scoped_window_focus_allowed_indicator.cc
  ${CUR_SRC_DIR}exported/web_script_controller.cc
  ${CUR_SRC_DIR}exported/web_script_source.cc
  ${CUR_SRC_DIR}exported/web_searchable_form_data.cc
  ${CUR_SRC_DIR}exported/web_security_policy.cc
  ${CUR_SRC_DIR}exported/web_select_element.cc
  ${CUR_SRC_DIR}exported/web_selector.cc
  ${CUR_SRC_DIR}exported/web_serialized_script_value.cc
  ${CUR_SRC_DIR}exported/web_settings_impl.cc
  #${CUR_SRC_DIR}exported/web_settings_impl.h
  ${CUR_SRC_DIR}exported/web_shared_worker_impl.cc
  #${CUR_SRC_DIR}exported/web_shared_worker_impl.h
  ${CUR_SRC_DIR}exported/web_surrounding_text.cc
  ${CUR_SRC_DIR}exported/web_text_checking_result.cc
  ${CUR_SRC_DIR}exported/web_user_gesture_indicator.cc
  ${CUR_SRC_DIR}exported/web_user_gesture_token.cc
  ${CUR_SRC_DIR}exported/web_v8_context_snapshot.cc
  ${CUR_SRC_DIR}exported/web_view_impl.cc
  #${CUR_SRC_DIR}exported/web_view_impl.h
  ${CUR_SRC_DIR}exported/worker_shadow_page.cc
  #${CUR_SRC_DIR}exported/worker_shadow_page.h
)

list(APPEND BLINK_RENDERER_CORE_FEATURE_POLICY_SOURCES
  #${CUR_SRC_DIR}feature_policy/document_policy.h
  ${CUR_SRC_DIR}feature_policy/dom_feature_policy.cc
  #${CUR_SRC_DIR}feature_policy/dom_feature_policy.h
  #${CUR_SRC_DIR}feature_policy/feature_policy_helper.h
  ${CUR_SRC_DIR}feature_policy/feature_policy_parser.cc
  #${CUR_SRC_DIR}feature_policy/feature_policy_parser.h
  #${CUR_SRC_DIR}feature_policy/iframe_policy.h
  ${CUR_SRC_DIR}feature_policy/layout_animations_policy.cc
  #${CUR_SRC_DIR}feature_policy/layout_animations_policy.h
)

list(APPEND BLINK_RENDERER_CORE_FETCH_SOURCES
  ${CUR_SRC_DIR}fetch/blob_bytes_consumer.cc
  #${CUR_SRC_DIR}fetch/blob_bytes_consumer.h
  ${CUR_SRC_DIR}fetch/body.cc
  #${CUR_SRC_DIR}fetch/body.h
  ${CUR_SRC_DIR}fetch/body_stream_buffer.cc
  #${CUR_SRC_DIR}fetch/body_stream_buffer.h
  ${CUR_SRC_DIR}fetch/bytes_consumer_tee.cc
  #${CUR_SRC_DIR}fetch/bytes_consumer_tee.h
  ${CUR_SRC_DIR}fetch/fetch_data_loader.cc
  #${CUR_SRC_DIR}fetch/fetch_data_loader.h
  ${CUR_SRC_DIR}fetch/fetch_header_list.cc
  #${CUR_SRC_DIR}fetch/fetch_header_list.h
  ${CUR_SRC_DIR}fetch/fetch_manager.cc
  #${CUR_SRC_DIR}fetch/fetch_manager.h
  ${CUR_SRC_DIR}fetch/fetch_request_data.cc
  #${CUR_SRC_DIR}fetch/fetch_request_data.h
  ${CUR_SRC_DIR}fetch/fetch_response_data.cc
  #${CUR_SRC_DIR}fetch/fetch_response_data.h
  ${CUR_SRC_DIR}fetch/form_data_bytes_consumer.cc
  #${CUR_SRC_DIR}fetch/form_data_bytes_consumer.h
  ${CUR_SRC_DIR}fetch/global_fetch.cc
  #${CUR_SRC_DIR}fetch/global_fetch.h
  ${CUR_SRC_DIR}fetch/headers.cc
  #${CUR_SRC_DIR}fetch/headers.h
  ${CUR_SRC_DIR}fetch/multipart_parser.cc
  #${CUR_SRC_DIR}fetch/multipart_parser.h
  ${CUR_SRC_DIR}fetch/place_holder_bytes_consumer.cc
  #${CUR_SRC_DIR}fetch/place_holder_bytes_consumer.h
  ${CUR_SRC_DIR}fetch/readable_stream_bytes_consumer.cc
  #${CUR_SRC_DIR}fetch/readable_stream_bytes_consumer.h
  ${CUR_SRC_DIR}fetch/request.cc
  #${CUR_SRC_DIR}fetch/request.h
  ${CUR_SRC_DIR}fetch/response.cc
  #${CUR_SRC_DIR}fetch/response.h
)

list(APPEND BLINK_RENDERER_CORE_FILEAPI_SOURCES
  ${CUR_SRC_DIR}fileapi/blob.cc
  #${CUR_SRC_DIR}fileapi/blob.h
  ${CUR_SRC_DIR}fileapi/file.cc
  #${CUR_SRC_DIR}fileapi/file.h
  ${CUR_SRC_DIR}fileapi/file_error.cc
  #${CUR_SRC_DIR}fileapi/file_error.h
  ${CUR_SRC_DIR}fileapi/file_list.cc
  #${CUR_SRC_DIR}fileapi/file_list.h
  ${CUR_SRC_DIR}fileapi/file_reader.cc
  #${CUR_SRC_DIR}fileapi/file_reader.h
  ${CUR_SRC_DIR}fileapi/file_reader_loader.cc
  #${CUR_SRC_DIR}fileapi/file_reader_loader.h
  #${CUR_SRC_DIR}fileapi/file_reader_loader_client.h
  ${CUR_SRC_DIR}fileapi/file_reader_sync.cc
  #${CUR_SRC_DIR}fileapi/file_reader_sync.h
  ${CUR_SRC_DIR}fileapi/public_url_manager.cc
  #${CUR_SRC_DIR}fileapi/public_url_manager.h
  ${CUR_SRC_DIR}fileapi/url_file_api.cc
  #${CUR_SRC_DIR}fileapi/url_file_api.h
  #${CUR_SRC_DIR}fileapi/url_registry.h
)

list(APPEND BLINK_RENDERER_CORE_FRAME_SOURCES
  ${CUR_SRC_DIR}frame/ad_tracker.cc
  #${CUR_SRC_DIR}frame/ad_tracker.h
  ${CUR_SRC_DIR}frame/bar_prop.cc
  #${CUR_SRC_DIR}frame/bar_prop.h
  ${CUR_SRC_DIR}frame/browser_controls.cc
  #${CUR_SRC_DIR}frame/browser_controls.h
  ${CUR_SRC_DIR}frame/csp/content_security_policy.cc
  #${CUR_SRC_DIR}frame/csp/content_security_policy.h
  #${CUR_SRC_DIR}frame/csp/csp_directive.h
  ${CUR_SRC_DIR}frame/csp/csp_directive_list.cc
  #${CUR_SRC_DIR}frame/csp/csp_directive_list.h
  ${CUR_SRC_DIR}frame/csp/csp_source.cc
  #${CUR_SRC_DIR}frame/csp/csp_source.h
  #${CUR_SRC_DIR}frame/csp/csp_violation_report_body.h
  ${CUR_SRC_DIR}frame/csp/execution_context_csp_delegate.cc
  #${CUR_SRC_DIR}frame/csp/execution_context_csp_delegate.h
  ${CUR_SRC_DIR}frame/csp/media_list_directive.cc
  #${CUR_SRC_DIR}frame/csp/media_list_directive.h
  ${CUR_SRC_DIR}frame/csp/source_list_directive.cc
  #${CUR_SRC_DIR}frame/csp/source_list_directive.h
  ${CUR_SRC_DIR}frame/csp/string_list_directive.cc
  #${CUR_SRC_DIR}frame/csp/string_list_directive.h
  ${CUR_SRC_DIR}frame/dactyloscoper.cc
  #${CUR_SRC_DIR}frame/dactyloscoper.h
  ${CUR_SRC_DIR}frame/deprecated_schedule_style_recalc_during_layout.cc
  #${CUR_SRC_DIR}frame/deprecated_schedule_style_recalc_during_layout.h
  ${CUR_SRC_DIR}frame/deprecation.cc
  #${CUR_SRC_DIR}frame/deprecation.h
  #${CUR_SRC_DIR}frame/deprecation_report_body.h
  ${CUR_SRC_DIR}frame/device_single_window_event_controller.cc
  #${CUR_SRC_DIR}frame/device_single_window_event_controller.h
  ${CUR_SRC_DIR}frame/display_cutout_client_impl.cc
  #${CUR_SRC_DIR}frame/display_cutout_client_impl.h
  ${CUR_SRC_DIR}frame/dom_timer.cc
  #${CUR_SRC_DIR}frame/dom_timer.h
  ${CUR_SRC_DIR}frame/dom_timer_coordinator.cc
  #${CUR_SRC_DIR}frame/dom_timer_coordinator.h
  ${CUR_SRC_DIR}frame/dom_visual_viewport.cc
  #${CUR_SRC_DIR}frame/dom_visual_viewport.h
  ${CUR_SRC_DIR}frame/dom_window.cc
  #${CUR_SRC_DIR}frame/dom_window.h
  ${CUR_SRC_DIR}frame/embedded_content_view.cc
  #${CUR_SRC_DIR}frame/embedded_content_view.h
  ${CUR_SRC_DIR}frame/event_handler_registry.cc
  #${CUR_SRC_DIR}frame/event_handler_registry.h
  #${CUR_SRC_DIR}frame/external.h
  #${CUR_SRC_DIR}frame/feature_policy_violation_report_body.h
  ${CUR_SRC_DIR}frame/find_in_page.cc
  #${CUR_SRC_DIR}frame/find_in_page.h
  ${CUR_SRC_DIR}frame/frame.cc
  #${CUR_SRC_DIR}frame/frame.h
  #${CUR_SRC_DIR}frame/frame_client.h
  ${CUR_SRC_DIR}frame/frame_console.cc
  #${CUR_SRC_DIR}frame/frame_console.h
  ${CUR_SRC_DIR}frame/frame_lifecycle.cc
  #${CUR_SRC_DIR}frame/frame_lifecycle.h
  ${CUR_SRC_DIR}frame/frame_overlay.cc
  #${CUR_SRC_DIR}frame/frame_overlay.h
  #${CUR_SRC_DIR}frame/frame_owner.h
  ${CUR_SRC_DIR}frame/frame_serializer.cc
  #${CUR_SRC_DIR}frame/frame_serializer.h
  #${CUR_SRC_DIR}frame/frame_types.h
  ${CUR_SRC_DIR}frame/frame_view.cc
  #${CUR_SRC_DIR}frame/frame_view.h
  ${CUR_SRC_DIR}frame/frame_view_auto_size_info.cc
  #${CUR_SRC_DIR}frame/frame_view_auto_size_info.h
  ${CUR_SRC_DIR}frame/fullscreen_controller.cc
  #${CUR_SRC_DIR}frame/fullscreen_controller.h
  ${CUR_SRC_DIR}frame/history.cc
  #${CUR_SRC_DIR}frame/history.h
  ${CUR_SRC_DIR}frame/hosts_using_features.cc
  #${CUR_SRC_DIR}frame/hosts_using_features.h
  ${CUR_SRC_DIR}frame/intervention.cc
  #${CUR_SRC_DIR}frame/intervention.h
  #${CUR_SRC_DIR}frame/intervention_report_body.h
  ${CUR_SRC_DIR}frame/layout_subtree_root_list.cc
  #${CUR_SRC_DIR}frame/layout_subtree_root_list.h
  ${CUR_SRC_DIR}frame/link_highlights.cc
  #${CUR_SRC_DIR}frame/link_highlights.h
  ${CUR_SRC_DIR}frame/local_dom_window.cc
  #${CUR_SRC_DIR}frame/local_dom_window.h
  ${CUR_SRC_DIR}frame/local_frame.cc
  #${CUR_SRC_DIR}frame/local_frame.h
  #${CUR_SRC_DIR}frame/local_frame_client.h
  ${CUR_SRC_DIR}frame/local_frame_ukm_aggregator.cc
  #${CUR_SRC_DIR}frame/local_frame_ukm_aggregator.h
  ${CUR_SRC_DIR}frame/local_frame_view.cc
  #${CUR_SRC_DIR}frame/local_frame_view.h
  ${CUR_SRC_DIR}frame/location.cc
  #${CUR_SRC_DIR}frame/location.h
  #${CUR_SRC_DIR}frame/location_report_body.h
  #${CUR_SRC_DIR}frame/message_report_body.h
  ${CUR_SRC_DIR}frame/navigation_rate_limiter.cc
  #${CUR_SRC_DIR}frame/navigation_rate_limiter.h
  ${CUR_SRC_DIR}frame/navigator.cc
  #${CUR_SRC_DIR}frame/navigator.h
  ${CUR_SRC_DIR}frame/navigator_concurrent_hardware.cc
  #${CUR_SRC_DIR}frame/navigator_concurrent_hardware.h
  ${CUR_SRC_DIR}frame/navigator_device_memory.cc
  #${CUR_SRC_DIR}frame/navigator_device_memory.h
  ${CUR_SRC_DIR}frame/navigator_id.cc
  #${CUR_SRC_DIR}frame/navigator_id.h
  ${CUR_SRC_DIR}frame/navigator_language.cc
  #${CUR_SRC_DIR}frame/navigator_language.h
  #${CUR_SRC_DIR}frame/navigator_on_line.h
  ${CUR_SRC_DIR}frame/navigator_scheduling.cc
  #${CUR_SRC_DIR}frame/navigator_scheduling.h
  ${CUR_SRC_DIR}frame/navigator_user_activation.cc
  #${CUR_SRC_DIR}frame/navigator_user_activation.h
  ${CUR_SRC_DIR}frame/navigator_user_agent.cc
  #${CUR_SRC_DIR}frame/navigator_user_agent.h
  ${CUR_SRC_DIR}frame/opened_frame_tracker.cc
  #${CUR_SRC_DIR}frame/opened_frame_tracker.h
  ${CUR_SRC_DIR}frame/page_scale_constraints.cc
  #${CUR_SRC_DIR}frame/page_scale_constraints.h
  ${CUR_SRC_DIR}frame/page_scale_constraints_set.cc
  #${CUR_SRC_DIR}frame/page_scale_constraints_set.h
  ${CUR_SRC_DIR}frame/pausable_script_executor.cc
  #${CUR_SRC_DIR}frame/pausable_script_executor.h
  ${CUR_SRC_DIR}frame/performance_monitor.cc
  #${CUR_SRC_DIR}frame/performance_monitor.h
  ${CUR_SRC_DIR}frame/picture_in_picture_controller.cc
  #${CUR_SRC_DIR}frame/picture_in_picture_controller.h
  ${CUR_SRC_DIR}frame/platform_event_controller.cc
  #${CUR_SRC_DIR}frame/platform_event_controller.h
  ${CUR_SRC_DIR}frame/platform_event_dispatcher.cc
  #${CUR_SRC_DIR}frame/platform_event_dispatcher.h
  ${CUR_SRC_DIR}frame/remote_dom_window.cc
  #${CUR_SRC_DIR}frame/remote_dom_window.h
  ${CUR_SRC_DIR}frame/remote_frame.cc
  #${CUR_SRC_DIR}frame/remote_frame.h
  #${CUR_SRC_DIR}frame/remote_frame_client.h
  ${CUR_SRC_DIR}frame/remote_frame_client_impl.cc
  #${CUR_SRC_DIR}frame/remote_frame_client_impl.h
  ${CUR_SRC_DIR}frame/remote_frame_owner.cc
  #${CUR_SRC_DIR}frame/remote_frame_owner.h
  ${CUR_SRC_DIR}frame/remote_frame_view.cc
  #${CUR_SRC_DIR}frame/remote_frame_view.h
  #${CUR_SRC_DIR}frame/report.h
  #${CUR_SRC_DIR}frame/report_body.h
  ${CUR_SRC_DIR}frame/reporting_context.cc
  #${CUR_SRC_DIR}frame/reporting_context.h
  ${CUR_SRC_DIR}frame/reporting_observer.cc
  #${CUR_SRC_DIR}frame/reporting_observer.h
  ${CUR_SRC_DIR}frame/resize_viewport_anchor.cc
  #${CUR_SRC_DIR}frame/resize_viewport_anchor.h
  ${CUR_SRC_DIR}frame/root_frame_viewport.cc
  #${CUR_SRC_DIR}frame/root_frame_viewport.h
  ${CUR_SRC_DIR}frame/rotation_viewport_anchor.cc
  #${CUR_SRC_DIR}frame/rotation_viewport_anchor.h
  ${CUR_SRC_DIR}frame/sandbox_flags.cc
  #${CUR_SRC_DIR}frame/sandbox_flags.h
  ${CUR_SRC_DIR}frame/scheduling.cc
  #${CUR_SRC_DIR}frame/scheduling.h
  ${CUR_SRC_DIR}frame/screen.cc
  #${CUR_SRC_DIR}frame/screen.h
  ${CUR_SRC_DIR}frame/screen_orientation_controller.cc
  #${CUR_SRC_DIR}frame/screen_orientation_controller.h
  ${CUR_SRC_DIR}frame/settings.cc
  #${CUR_SRC_DIR}frame/settings.h
  ${CUR_SRC_DIR}frame/settings_delegate.cc
  #${CUR_SRC_DIR}frame/settings_delegate.h
  ${CUR_SRC_DIR}frame/smart_clip.cc
  #${CUR_SRC_DIR}frame/smart_clip.h
  #${CUR_SRC_DIR}frame/test_report_body.h
  ${CUR_SRC_DIR}frame/use_counter.cc
  #${CUR_SRC_DIR}frame/use_counter.h
  ${CUR_SRC_DIR}frame/user_activation.cc
  #${CUR_SRC_DIR}frame/user_activation.h
  ${CUR_SRC_DIR}frame/viewport_data.cc
  #${CUR_SRC_DIR}frame/viewport_data.h
  ${CUR_SRC_DIR}frame/visual_viewport.cc
  #${CUR_SRC_DIR}frame/visual_viewport.h
  #${CUR_SRC_DIR}frame/web_feature.h
  #${CUR_SRC_DIR}frame/web_feature_forward.h
  ${CUR_SRC_DIR}frame/web_frame_serializer_impl.cc
  #${CUR_SRC_DIR}frame/web_frame_serializer_impl.h
  ${CUR_SRC_DIR}frame/web_frame_widget_base.cc
  #${CUR_SRC_DIR}frame/web_frame_widget_base.h
  ${CUR_SRC_DIR}frame/web_frame_widget_impl.cc
  #${CUR_SRC_DIR}frame/web_frame_widget_impl.h
  ${CUR_SRC_DIR}frame/web_local_frame_impl.cc
  #${CUR_SRC_DIR}frame/web_local_frame_impl.h
  ${CUR_SRC_DIR}frame/web_view_frame_widget.cc
  #${CUR_SRC_DIR}frame/web_view_frame_widget.h
  #${CUR_SRC_DIR}frame/window_event_handlers.h
  ${CUR_SRC_DIR}frame/window_or_worker_global_scope.cc
  #${CUR_SRC_DIR}frame/window_or_worker_global_scope.h
)

list(APPEND BLINK_RENDERER_CORE_FULLSCREEN_SOURCES
  ${CUR_SRC_DIR}fullscreen/document_fullscreen.cc
  #${CUR_SRC_DIR}fullscreen/document_fullscreen.h
  ${CUR_SRC_DIR}fullscreen/element_fullscreen.cc
  #${CUR_SRC_DIR}fullscreen/element_fullscreen.h
  ${CUR_SRC_DIR}fullscreen/fullscreen.cc
  #${CUR_SRC_DIR}fullscreen/fullscreen.h
  ${CUR_SRC_DIR}fullscreen/scoped_allow_fullscreen.cc
  #${CUR_SRC_DIR}fullscreen/scoped_allow_fullscreen.h
)

list(APPEND BLINK_RENDERER_CORE_ACCESSIBILITY_SOURCES
  ${CUR_SRC_DIR}accessibility/apply_dark_mode.cc
  #${CUR_SRC_DIR}accessibility/apply_dark_mode.h
  ${CUR_SRC_DIR}accessibility/ax_context.cc
  #${CUR_SRC_DIR}accessibility/ax_context.h
  ${CUR_SRC_DIR}accessibility/ax_object_cache.cc
  #${CUR_SRC_DIR}accessibility/ax_object_cache.h
  ${CUR_SRC_DIR}accessibility/ax_object_cache_base.cc
  #${CUR_SRC_DIR}accessibility/ax_object_cache_base.h
  #${CUR_SRC_DIR}accessibility/axid.h
)

list(APPEND BLINK_RENDERER_CORE_GEOMETRY_SOURCES
  ${CUR_SRC_DIR}geometry/dom_matrix.cc
  #${CUR_SRC_DIR}geometry/dom_matrix.h
  ${CUR_SRC_DIR}geometry/dom_matrix_read_only.cc
  #${CUR_SRC_DIR}geometry/dom_matrix_read_only.h
  ${CUR_SRC_DIR}geometry/dom_point.cc
  #${CUR_SRC_DIR}geometry/dom_point.h
  ${CUR_SRC_DIR}geometry/dom_point_read_only.cc
  #${CUR_SRC_DIR}geometry/dom_point_read_only.h
  ${CUR_SRC_DIR}geometry/dom_quad.cc
  #${CUR_SRC_DIR}geometry/dom_quad.h
  ${CUR_SRC_DIR}geometry/dom_rect.cc
  #${CUR_SRC_DIR}geometry/dom_rect.h
  ${CUR_SRC_DIR}geometry/dom_rect_list.cc
  #${CUR_SRC_DIR}geometry/dom_rect_list.h
  ${CUR_SRC_DIR}geometry/dom_rect_read_only.cc
  #${CUR_SRC_DIR}geometry/dom_rect_read_only.h
)

list(APPEND BLINK_RENDERER_CORE_HTML_PARSER_SOURCES
  ${CUR_SRC_DIR}html/parser/atomic_html_token.cc
  ${CUR_SRC_DIR}html/parser/atomic_html_token.h
  ${CUR_SRC_DIR}html/parser/background_html_input_stream.cc
  ${CUR_SRC_DIR}html/parser/background_html_input_stream.h
  ${CUR_SRC_DIR}html/parser/background_html_parser.cc
  ${CUR_SRC_DIR}html/parser/background_html_parser.h
  ${CUR_SRC_DIR}html/parser/compact_html_token.cc
  ${CUR_SRC_DIR}html/parser/compact_html_token.h
  ${CUR_SRC_DIR}html/parser/css_preload_scanner.cc
  ${CUR_SRC_DIR}html/parser/css_preload_scanner.h
  ${CUR_SRC_DIR}html/parser/html_construction_site.cc
  ${CUR_SRC_DIR}html/parser/html_construction_site.h
  ${CUR_SRC_DIR}html/parser/html_document_parser.cc
  ${CUR_SRC_DIR}html/parser/html_document_parser.h
  ${CUR_SRC_DIR}html/parser/html_element_stack.cc
  ${CUR_SRC_DIR}html/parser/html_element_stack.h
  ${CUR_SRC_DIR}html/parser/html_entity_parser.cc
  ${CUR_SRC_DIR}html/parser/html_entity_parser.h
  ${CUR_SRC_DIR}html/parser/html_entity_search.cc
  ${CUR_SRC_DIR}html/parser/html_entity_search.h
  ${CUR_SRC_DIR}html/parser/html_entity_table.h
  ${CUR_SRC_DIR}html/parser/html_formatting_element_list.cc
  ${CUR_SRC_DIR}html/parser/html_formatting_element_list.h
  ${CUR_SRC_DIR}html/parser/html_input_stream.h
  ${CUR_SRC_DIR}html/parser/html_meta_charset_parser.cc
  ${CUR_SRC_DIR}html/parser/html_meta_charset_parser.h
  ${CUR_SRC_DIR}html/parser/html_parser_idioms.cc
  ${CUR_SRC_DIR}html/parser/html_parser_idioms.h
  ${CUR_SRC_DIR}html/parser/html_parser_options.cc
  ${CUR_SRC_DIR}html/parser/html_parser_options.h
  ${CUR_SRC_DIR}html/parser/html_parser_reentry_permit.cc
  ${CUR_SRC_DIR}html/parser/html_parser_reentry_permit.h
  ${CUR_SRC_DIR}html/parser/html_parser_scheduler.cc
  ${CUR_SRC_DIR}html/parser/html_parser_scheduler.h
  ${CUR_SRC_DIR}html/parser/html_preload_scanner.cc
  ${CUR_SRC_DIR}html/parser/html_preload_scanner.h
  ${CUR_SRC_DIR}html/parser/html_resource_preloader.cc
  ${CUR_SRC_DIR}html/parser/html_resource_preloader.h
  ${CUR_SRC_DIR}html/parser/html_source_tracker.cc
  ${CUR_SRC_DIR}html/parser/html_source_tracker.h
  ${CUR_SRC_DIR}html/parser/html_srcset_parser.cc
  ${CUR_SRC_DIR}html/parser/html_srcset_parser.h
  ${CUR_SRC_DIR}html/parser/html_stack_item.h
  ${CUR_SRC_DIR}html/parser/html_token.h
  ${CUR_SRC_DIR}html/parser/html_tokenizer.cc
  ${CUR_SRC_DIR}html/parser/html_tokenizer.h
  ${CUR_SRC_DIR}html/parser/html_tree_builder.cc
  ${CUR_SRC_DIR}html/parser/html_tree_builder.h
  ${CUR_SRC_DIR}html/parser/html_tree_builder_simulator.cc
  ${CUR_SRC_DIR}html/parser/html_tree_builder_simulator.h
  ${CUR_SRC_DIR}html/parser/html_view_source_parser.cc
  ${CUR_SRC_DIR}html/parser/html_view_source_parser.h
  ${CUR_SRC_DIR}html/parser/input_stream_preprocessor.h
  ${CUR_SRC_DIR}html/parser/markup_tokenizer_inlines.h
  ${CUR_SRC_DIR}html/parser/nesting_level_incrementer.h
  ${CUR_SRC_DIR}html/parser/parser_synchronization_policy.h
  ${CUR_SRC_DIR}html/parser/preload_request.cc
  ${CUR_SRC_DIR}html/parser/preload_request.h
  ${CUR_SRC_DIR}html/parser/pump_session.cc
  ${CUR_SRC_DIR}html/parser/pump_session.h
  ${CUR_SRC_DIR}html/parser/resource_preloader.cc
  ${CUR_SRC_DIR}html/parser/resource_preloader.h
  ${CUR_SRC_DIR}html/parser/text_document_parser.cc
  ${CUR_SRC_DIR}html/parser/text_document_parser.h
  ${CUR_SRC_DIR}html/parser/text_resource_decoder.cc
  ${CUR_SRC_DIR}html/parser/text_resource_decoder.h
  ${CUR_SRC_DIR}html/parser/xss_auditor.cc
  ${CUR_SRC_DIR}html/parser/xss_auditor.h
  ${CUR_SRC_DIR}html/parser/xss_auditor_delegate.cc
  ${CUR_SRC_DIR}html/parser/xss_auditor_delegate.h
)

list(APPEND BLINK_RENDERER_CORE_HTML_SOURCES
  ${CUR_SRC_DIR}html/anchor_element_metrics.cc
  #${CUR_SRC_DIR}html/anchor_element_metrics.h
  ${CUR_SRC_DIR}html/anchor_element_metrics_sender.cc
  #${CUR_SRC_DIR}html/anchor_element_metrics_sender.h
  ${CUR_SRC_DIR}html/canvas/canvas_async_blob_creator.cc
  #${CUR_SRC_DIR}html/canvas/canvas_async_blob_creator.h
  ${CUR_SRC_DIR}html/canvas/canvas_context_creation_attributes_core.cc
  #${CUR_SRC_DIR}html/canvas/canvas_context_creation_attributes_core.h
  ${CUR_SRC_DIR}html/canvas/canvas_draw_listener.cc
  #${CUR_SRC_DIR}html/canvas/canvas_draw_listener.h
  ${CUR_SRC_DIR}html/canvas/canvas_font_cache.cc
  #${CUR_SRC_DIR}html/canvas/canvas_font_cache.h
  #${CUR_SRC_DIR}html/canvas/canvas_image_source.h
  ${CUR_SRC_DIR}html/canvas/canvas_rendering_context.cc
  #${CUR_SRC_DIR}html/canvas/canvas_rendering_context.h
  #${CUR_SRC_DIR}html/canvas/canvas_rendering_context_factory.h
  ${CUR_SRC_DIR}html/canvas/canvas_rendering_context_host.cc
  #${CUR_SRC_DIR}html/canvas/canvas_rendering_context_host.h
  ${CUR_SRC_DIR}html/canvas/html_canvas_element.cc
  #${CUR_SRC_DIR}html/canvas/html_canvas_element.h
  ${CUR_SRC_DIR}html/canvas/image_data.cc
  #${CUR_SRC_DIR}html/canvas/image_data.h
  ${CUR_SRC_DIR}html/canvas/image_element_base.cc
  #${CUR_SRC_DIR}html/canvas/image_element_base.h
  ${CUR_SRC_DIR}html/canvas/text_metrics.cc
  #${CUR_SRC_DIR}html/canvas/text_metrics.h
  #${CUR_SRC_DIR}html/collection_items_cache.h
  #${CUR_SRC_DIR}html/collection_type.h
  ${CUR_SRC_DIR}html/cross_origin_attribute.cc
  #${CUR_SRC_DIR}html/cross_origin_attribute.h
  ${CUR_SRC_DIR}html/custom/ce_reactions_scope.cc
  #${CUR_SRC_DIR}html/custom/ce_reactions_scope.h
  ${CUR_SRC_DIR}html/custom/custom_element.cc
  #${CUR_SRC_DIR}html/custom/custom_element.h
  ${CUR_SRC_DIR}html/custom/custom_element_definition.cc
  #${CUR_SRC_DIR}html/custom/custom_element_definition.h
  #${CUR_SRC_DIR}html/custom/custom_element_definition_builder.h
  #${CUR_SRC_DIR}html/custom/custom_element_descriptor.h
  #${CUR_SRC_DIR}html/custom/custom_element_descriptor_hash.h
  ${CUR_SRC_DIR}html/custom/custom_element_reaction.cc
  #${CUR_SRC_DIR}html/custom/custom_element_reaction.h
  ${CUR_SRC_DIR}html/custom/custom_element_reaction_factory.cc
  #${CUR_SRC_DIR}html/custom/custom_element_reaction_factory.h
  ${CUR_SRC_DIR}html/custom/custom_element_reaction_queue.cc
  #${CUR_SRC_DIR}html/custom/custom_element_reaction_queue.h
  ${CUR_SRC_DIR}html/custom/custom_element_reaction_stack.cc
  #${CUR_SRC_DIR}html/custom/custom_element_reaction_stack.h
  ${CUR_SRC_DIR}html/custom/custom_element_registry.cc
  #${CUR_SRC_DIR}html/custom/custom_element_registry.h
  ${CUR_SRC_DIR}html/custom/custom_element_upgrade_sorter.cc
  #${CUR_SRC_DIR}html/custom/custom_element_upgrade_sorter.h
  ${CUR_SRC_DIR}html/custom/element_internals.cc
  #${CUR_SRC_DIR}html/custom/element_internals.h
  ${CUR_SRC_DIR}html/custom/v0_custom_element.cc
  #${CUR_SRC_DIR}html/custom/v0_custom_element.h
  ${CUR_SRC_DIR}html/custom/v0_custom_element_async_import_microtask_queue.cc
  #${CUR_SRC_DIR}html/custom/v0_custom_element_async_import_microtask_queue.h
  ${CUR_SRC_DIR}html/custom/v0_custom_element_callback_invocation.cc
  #${CUR_SRC_DIR}html/custom/v0_custom_element_callback_invocation.h
  ${CUR_SRC_DIR}html/custom/v0_custom_element_callback_queue.cc
  #${CUR_SRC_DIR}html/custom/v0_custom_element_callback_queue.h
  ${CUR_SRC_DIR}html/custom/v0_custom_element_definition.cc
  #${CUR_SRC_DIR}html/custom/v0_custom_element_definition.h
  #${CUR_SRC_DIR}html/custom/v0_custom_element_descriptor.h
  #${CUR_SRC_DIR}html/custom/v0_custom_element_descriptor_hash.h
  ${CUR_SRC_DIR}html/custom/v0_custom_element_exception.cc
  #${CUR_SRC_DIR}html/custom/v0_custom_element_exception.h
  #${CUR_SRC_DIR}html/custom/v0_custom_element_lifecycle_callbacks.h
  ${CUR_SRC_DIR}html/custom/v0_custom_element_microtask_dispatcher.cc
  #${CUR_SRC_DIR}html/custom/v0_custom_element_microtask_dispatcher.h
  ${CUR_SRC_DIR}html/custom/v0_custom_element_microtask_import_step.cc
  #${CUR_SRC_DIR}html/custom/v0_custom_element_microtask_import_step.h
  ${CUR_SRC_DIR}html/custom/v0_custom_element_microtask_queue_base.cc
  #${CUR_SRC_DIR}html/custom/v0_custom_element_microtask_queue_base.h
  ${CUR_SRC_DIR}html/custom/v0_custom_element_microtask_resolution_step.cc
  #${CUR_SRC_DIR}html/custom/v0_custom_element_microtask_resolution_step.h
  ${CUR_SRC_DIR}html/custom/v0_custom_element_microtask_run_queue.cc
  #${CUR_SRC_DIR}html/custom/v0_custom_element_microtask_run_queue.h
  #${CUR_SRC_DIR}html/custom/v0_custom_element_microtask_step.h
  ${CUR_SRC_DIR}html/custom/v0_custom_element_observer.cc
  #${CUR_SRC_DIR}html/custom/v0_custom_element_observer.h
  ${CUR_SRC_DIR}html/custom/v0_custom_element_processing_stack.cc
  #${CUR_SRC_DIR}html/custom/v0_custom_element_processing_stack.h
  #${CUR_SRC_DIR}html/custom/v0_custom_element_processing_step.h
  ${CUR_SRC_DIR}html/custom/v0_custom_element_registration_context.cc
  #${CUR_SRC_DIR}html/custom/v0_custom_element_registration_context.h
  ${CUR_SRC_DIR}html/custom/v0_custom_element_registry.cc
  #${CUR_SRC_DIR}html/custom/v0_custom_element_registry.h
  ${CUR_SRC_DIR}html/custom/v0_custom_element_scheduler.cc
  #${CUR_SRC_DIR}html/custom/v0_custom_element_scheduler.h
  ${CUR_SRC_DIR}html/custom/v0_custom_element_sync_microtask_queue.cc
  #${CUR_SRC_DIR}html/custom/v0_custom_element_sync_microtask_queue.h
  ${CUR_SRC_DIR}html/custom/v0_custom_element_upgrade_candidate_map.cc
  #${CUR_SRC_DIR}html/custom/v0_custom_element_upgrade_candidate_map.h
  ${CUR_SRC_DIR}html/document_all_name_collection.cc
  #${CUR_SRC_DIR}html/document_all_name_collection.h
  ${CUR_SRC_DIR}html/document_name_collection.cc
  #${CUR_SRC_DIR}html/document_name_collection.h
  ${CUR_SRC_DIR}html/forms/base_button_input_type.cc
  #${CUR_SRC_DIR}html/forms/base_button_input_type.h
  ${CUR_SRC_DIR}html/forms/base_checkable_input_type.cc
  #${CUR_SRC_DIR}html/forms/base_checkable_input_type.h
  ${CUR_SRC_DIR}html/forms/base_temporal_input_type.cc
  #${CUR_SRC_DIR}html/forms/base_temporal_input_type.h
  ${CUR_SRC_DIR}html/forms/base_text_input_type.cc
  #${CUR_SRC_DIR}html/forms/base_text_input_type.h
  ${CUR_SRC_DIR}html/forms/button_input_type.cc
  #${CUR_SRC_DIR}html/forms/button_input_type.h
  ${CUR_SRC_DIR}html/forms/checkbox_input_type.cc
  #${CUR_SRC_DIR}html/forms/checkbox_input_type.h
  ${CUR_SRC_DIR}html/forms/chooser_only_temporal_input_type_view.cc
  #${CUR_SRC_DIR}html/forms/chooser_only_temporal_input_type_view.h
  ${CUR_SRC_DIR}html/forms/clear_button_element.cc
  #${CUR_SRC_DIR}html/forms/clear_button_element.h
  ${CUR_SRC_DIR}html/forms/color_chooser.cc
  #${CUR_SRC_DIR}html/forms/color_chooser.h
  ${CUR_SRC_DIR}html/forms/color_chooser_client.cc
  #${CUR_SRC_DIR}html/forms/color_chooser_client.h
  ${CUR_SRC_DIR}html/forms/color_chooser_popup_ui_controller.cc
  #${CUR_SRC_DIR}html/forms/color_chooser_popup_ui_controller.h
  ${CUR_SRC_DIR}html/forms/color_chooser_ui_controller.cc
  #${CUR_SRC_DIR}html/forms/color_chooser_ui_controller.h
  ${CUR_SRC_DIR}html/forms/color_input_type.cc
  #${CUR_SRC_DIR}html/forms/color_input_type.h
  ${CUR_SRC_DIR}html/forms/date_input_type.cc
  #${CUR_SRC_DIR}html/forms/date_input_type.h
  ${CUR_SRC_DIR}html/forms/date_time_chooser.cc
  #${CUR_SRC_DIR}html/forms/date_time_chooser.h
  ${CUR_SRC_DIR}html/forms/date_time_chooser_client.cc
  #${CUR_SRC_DIR}html/forms/date_time_chooser_client.h
  ${CUR_SRC_DIR}html/forms/date_time_chooser_impl.cc
  #${CUR_SRC_DIR}html/forms/date_time_chooser_impl.h
  ${CUR_SRC_DIR}html/forms/date_time_edit_element.cc
  #${CUR_SRC_DIR}html/forms/date_time_edit_element.h
  ${CUR_SRC_DIR}html/forms/date_time_field_element.cc
  #${CUR_SRC_DIR}html/forms/date_time_field_element.h
  ${CUR_SRC_DIR}html/forms/date_time_field_elements.cc
  #${CUR_SRC_DIR}html/forms/date_time_field_elements.h
  ${CUR_SRC_DIR}html/forms/date_time_fields_state.cc
  #${CUR_SRC_DIR}html/forms/date_time_fields_state.h
  ${CUR_SRC_DIR}html/forms/date_time_local_input_type.cc
  #${CUR_SRC_DIR}html/forms/date_time_local_input_type.h
  ${CUR_SRC_DIR}html/forms/date_time_numeric_field_element.cc
  #${CUR_SRC_DIR}html/forms/date_time_numeric_field_element.h
  ${CUR_SRC_DIR}html/forms/date_time_symbolic_field_element.cc
  #${CUR_SRC_DIR}html/forms/date_time_symbolic_field_element.h
  ${CUR_SRC_DIR}html/forms/email_input_type.cc
  #${CUR_SRC_DIR}html/forms/email_input_type.h
  ${CUR_SRC_DIR}html/forms/external_date_time_chooser.cc
  #${CUR_SRC_DIR}html/forms/external_date_time_chooser.h
  ${CUR_SRC_DIR}html/forms/external_popup_menu.cc
  #${CUR_SRC_DIR}html/forms/external_popup_menu.h
  ${CUR_SRC_DIR}html/forms/file_chooser.cc
  #${CUR_SRC_DIR}html/forms/file_chooser.h
  ${CUR_SRC_DIR}html/forms/file_input_type.cc
  #${CUR_SRC_DIR}html/forms/file_input_type.h
  #${CUR_SRC_DIR}html/forms/form_associated.h
  ${CUR_SRC_DIR}html/forms/form_controller.cc
  #${CUR_SRC_DIR}html/forms/form_controller.h
  ${CUR_SRC_DIR}html/forms/form_data.cc
  #${CUR_SRC_DIR}html/forms/form_data.h
  ${CUR_SRC_DIR}html/forms/form_data_event.cc
  #${CUR_SRC_DIR}html/forms/form_data_event.h
  ${CUR_SRC_DIR}html/forms/hidden_input_type.cc
  #${CUR_SRC_DIR}html/forms/hidden_input_type.h
  ${CUR_SRC_DIR}html/forms/html_button_element.cc
  #${CUR_SRC_DIR}html/forms/html_button_element.h
  ${CUR_SRC_DIR}html/forms/html_data_list_element.cc
  #${CUR_SRC_DIR}html/forms/html_data_list_element.h
  #${CUR_SRC_DIR}html/forms/html_data_list_options_collection.h
  ${CUR_SRC_DIR}html/forms/html_field_set_element.cc
  #${CUR_SRC_DIR}html/forms/html_field_set_element.h
  ${CUR_SRC_DIR}html/forms/html_form_control_element.cc
  #${CUR_SRC_DIR}html/forms/html_form_control_element.h
  ${CUR_SRC_DIR}html/forms/html_form_control_element_with_state.cc
  #${CUR_SRC_DIR}html/forms/html_form_control_element_with_state.h
  ${CUR_SRC_DIR}html/forms/html_form_controls_collection.cc
  #${CUR_SRC_DIR}html/forms/html_form_controls_collection.h
  ${CUR_SRC_DIR}html/forms/html_form_element.cc
  #${CUR_SRC_DIR}html/forms/html_form_element.h
  ${CUR_SRC_DIR}html/forms/html_input_element.cc
  #${CUR_SRC_DIR}html/forms/html_input_element.h
  ${CUR_SRC_DIR}html/forms/html_label_element.cc
  #${CUR_SRC_DIR}html/forms/html_label_element.h
  ${CUR_SRC_DIR}html/forms/html_legend_element.cc
  #${CUR_SRC_DIR}html/forms/html_legend_element.h
  ${CUR_SRC_DIR}html/forms/html_opt_group_element.cc
  #${CUR_SRC_DIR}html/forms/html_opt_group_element.h
  ${CUR_SRC_DIR}html/forms/html_option_element.cc
  #${CUR_SRC_DIR}html/forms/html_option_element.h
  ${CUR_SRC_DIR}html/forms/html_options_collection.cc
  #${CUR_SRC_DIR}html/forms/html_options_collection.h
  ${CUR_SRC_DIR}html/forms/html_output_element.cc
  #${CUR_SRC_DIR}html/forms/html_output_element.h
  ${CUR_SRC_DIR}html/forms/html_select_element.cc
  #${CUR_SRC_DIR}html/forms/html_select_element.h
  ${CUR_SRC_DIR}html/forms/html_text_area_element.cc
  #${CUR_SRC_DIR}html/forms/html_text_area_element.h
  ${CUR_SRC_DIR}html/forms/image_input_type.cc
  #${CUR_SRC_DIR}html/forms/image_input_type.h
  ${CUR_SRC_DIR}html/forms/input_type.cc
  #${CUR_SRC_DIR}html/forms/input_type.h
  ${CUR_SRC_DIR}html/forms/input_type_view.cc
  #${CUR_SRC_DIR}html/forms/input_type_view.h
  ${CUR_SRC_DIR}html/forms/internal_popup_menu.cc
  #${CUR_SRC_DIR}html/forms/internal_popup_menu.h
  ${CUR_SRC_DIR}html/forms/keyboard_clickable_input_type_view.cc
  #${CUR_SRC_DIR}html/forms/keyboard_clickable_input_type_view.h
  ${CUR_SRC_DIR}html/forms/labels_node_list.cc
  #${CUR_SRC_DIR}html/forms/labels_node_list.h
  ${CUR_SRC_DIR}html/forms/listed_element.cc
  #${CUR_SRC_DIR}html/forms/listed_element.h
  ${CUR_SRC_DIR}html/forms/month_input_type.cc
  #${CUR_SRC_DIR}html/forms/month_input_type.h
  ${CUR_SRC_DIR}html/forms/multiple_fields_temporal_input_type_view.cc
  #${CUR_SRC_DIR}html/forms/multiple_fields_temporal_input_type_view.h
  ${CUR_SRC_DIR}html/forms/number_input_type.cc
  #${CUR_SRC_DIR}html/forms/number_input_type.h
  ${CUR_SRC_DIR}html/forms/option_list.cc
  #${CUR_SRC_DIR}html/forms/option_list.h
  ${CUR_SRC_DIR}html/forms/password_input_type.cc
  #${CUR_SRC_DIR}html/forms/password_input_type.h
  ${CUR_SRC_DIR}html/forms/picker_indicator_element.cc
  #${CUR_SRC_DIR}html/forms/picker_indicator_element.h
  #${CUR_SRC_DIR}html/forms/popup_menu.h
  ${CUR_SRC_DIR}html/forms/radio_button_group_scope.cc
  #${CUR_SRC_DIR}html/forms/radio_button_group_scope.h
  ${CUR_SRC_DIR}html/forms/radio_input_type.cc
  #${CUR_SRC_DIR}html/forms/radio_input_type.h
  ${CUR_SRC_DIR}html/forms/radio_node_list.cc
  #${CUR_SRC_DIR}html/forms/radio_node_list.h
  ${CUR_SRC_DIR}html/forms/range_input_type.cc
  #${CUR_SRC_DIR}html/forms/range_input_type.h
  ${CUR_SRC_DIR}html/forms/reset_input_type.cc
  #${CUR_SRC_DIR}html/forms/reset_input_type.h
  ${CUR_SRC_DIR}html/forms/search_input_type.cc
  #${CUR_SRC_DIR}html/forms/search_input_type.h
  ${CUR_SRC_DIR}html/forms/slider_thumb_element.cc
  #${CUR_SRC_DIR}html/forms/slider_thumb_element.h
  ${CUR_SRC_DIR}html/forms/spin_button_element.cc
  #${CUR_SRC_DIR}html/forms/spin_button_element.h
  ${CUR_SRC_DIR}html/forms/step_range.cc
  #${CUR_SRC_DIR}html/forms/step_range.h
  ${CUR_SRC_DIR}html/forms/submit_input_type.cc
  #${CUR_SRC_DIR}html/forms/submit_input_type.h
  ${CUR_SRC_DIR}html/forms/telephone_input_type.cc
  #${CUR_SRC_DIR}html/forms/telephone_input_type.h
  ${CUR_SRC_DIR}html/forms/text_control_element.cc
  #${CUR_SRC_DIR}html/forms/text_control_element.h
  ${CUR_SRC_DIR}html/forms/text_control_inner_elements.cc
  #${CUR_SRC_DIR}html/forms/text_control_inner_elements.h
  ${CUR_SRC_DIR}html/forms/text_field_input_type.cc
  #${CUR_SRC_DIR}html/forms/text_field_input_type.h
  ${CUR_SRC_DIR}html/forms/text_input_type.cc
  #${CUR_SRC_DIR}html/forms/text_input_type.h
  ${CUR_SRC_DIR}html/forms/time_input_type.cc
  #${CUR_SRC_DIR}html/forms/time_input_type.h
  ${CUR_SRC_DIR}html/forms/type_ahead.cc
  #${CUR_SRC_DIR}html/forms/type_ahead.h
  ${CUR_SRC_DIR}html/forms/url_input_type.cc
  #${CUR_SRC_DIR}html/forms/url_input_type.h
  ${CUR_SRC_DIR}html/forms/validity_state.cc
  #${CUR_SRC_DIR}html/forms/validity_state.h
  ${CUR_SRC_DIR}html/forms/week_input_type.cc
  #${CUR_SRC_DIR}html/forms/week_input_type.h
  ${CUR_SRC_DIR}html/html_all_collection.cc
  #${CUR_SRC_DIR}html/html_all_collection.h
  ${CUR_SRC_DIR}html/html_anchor_element.cc
  #${CUR_SRC_DIR}html/html_anchor_element.h
  ${CUR_SRC_DIR}html/html_area_element.cc
  #${CUR_SRC_DIR}html/html_area_element.h
  ${CUR_SRC_DIR}html/html_base_element.cc
  #${CUR_SRC_DIR}html/html_base_element.h
  #${CUR_SRC_DIR}html/html_bdi_element.h
  ${CUR_SRC_DIR}html/html_body_element.cc
  #${CUR_SRC_DIR}html/html_body_element.h
  ${CUR_SRC_DIR}html/html_br_element.cc
  #${CUR_SRC_DIR}html/html_br_element.h
  ${CUR_SRC_DIR}html/html_collection.cc
  #${CUR_SRC_DIR}html/html_collection.h
  ${CUR_SRC_DIR}html/html_content_element.cc
  #${CUR_SRC_DIR}html/html_content_element.h
  ${CUR_SRC_DIR}html/html_data_element.cc
  #${CUR_SRC_DIR}html/html_data_element.h
  ${CUR_SRC_DIR}html/html_details_element.cc
  #${CUR_SRC_DIR}html/html_details_element.h
  ${CUR_SRC_DIR}html/html_dialog_element.cc
  #${CUR_SRC_DIR}html/html_dialog_element.h
  ${CUR_SRC_DIR}html/html_dimension.cc
  #${CUR_SRC_DIR}html/html_dimension.h
  ${CUR_SRC_DIR}html/html_directory_element.cc
  #${CUR_SRC_DIR}html/html_directory_element.h
  ${CUR_SRC_DIR}html/html_div_element.cc
  #${CUR_SRC_DIR}html/html_div_element.h
  ${CUR_SRC_DIR}html/html_dlist_element.cc
  #${CUR_SRC_DIR}html/html_dlist_element.h
  ${CUR_SRC_DIR}html/html_document.cc
  #${CUR_SRC_DIR}html/html_document.h
  ${CUR_SRC_DIR}html/html_element.cc
  #${CUR_SRC_DIR}html/html_element.h
  ${CUR_SRC_DIR}html/html_embed_element.cc
  #${CUR_SRC_DIR}html/html_embed_element.h
  ${CUR_SRC_DIR}html/html_font_element.cc
  #${CUR_SRC_DIR}html/html_font_element.h
  #${CUR_SRC_DIR}html/html_frame_element.cc
  #${CUR_SRC_DIR}html/html_frame_element.h
  ${CUR_SRC_DIR}html/html_frame_element_base.cc
  #${CUR_SRC_DIR}html/html_frame_element_base.h
  ${CUR_SRC_DIR}html/html_frame_owner_element.cc
  #${CUR_SRC_DIR}html/html_frame_owner_element.h
  ${CUR_SRC_DIR}html/html_frame_set_element.cc
  #${CUR_SRC_DIR}html/html_frame_set_element.h
  ${CUR_SRC_DIR}html/html_head_element.cc
  #${CUR_SRC_DIR}html/html_head_element.h
  ${CUR_SRC_DIR}html/html_heading_element.cc
  #${CUR_SRC_DIR}html/html_heading_element.h
  ${CUR_SRC_DIR}html/html_hr_element.cc
  #${CUR_SRC_DIR}html/html_hr_element.h
  ${CUR_SRC_DIR}html/html_html_element.cc
  #${CUR_SRC_DIR}html/html_html_element.h
  ${CUR_SRC_DIR}html/html_iframe_element.cc
  #${CUR_SRC_DIR}html/html_iframe_element.h
  ${CUR_SRC_DIR}html/html_iframe_element_sandbox.cc
  #${CUR_SRC_DIR}html/html_iframe_element_sandbox.h
  ${CUR_SRC_DIR}html/html_image_element.cc
  #${CUR_SRC_DIR}html/html_image_element.h
  ${CUR_SRC_DIR}html/html_image_fallback_helper.cc
  #${CUR_SRC_DIR}html/html_image_fallback_helper.h
  ${CUR_SRC_DIR}html/html_image_loader.cc
  #${CUR_SRC_DIR}html/html_image_loader.h
  ${CUR_SRC_DIR}html/html_li_element.cc
  #${CUR_SRC_DIR}html/html_li_element.h
  ${CUR_SRC_DIR}html/html_link_element.cc
  #${CUR_SRC_DIR}html/html_link_element.h
  ${CUR_SRC_DIR}html/html_map_element.cc
  #${CUR_SRC_DIR}html/html_map_element.h
  ${CUR_SRC_DIR}html/html_marquee_element.cc
  #${CUR_SRC_DIR}html/html_marquee_element.h
  ${CUR_SRC_DIR}html/html_menu_element.cc
  #${CUR_SRC_DIR}html/html_menu_element.h
  ${CUR_SRC_DIR}html/html_meta_element.cc
  #${CUR_SRC_DIR}html/html_meta_element.h
  ${CUR_SRC_DIR}html/html_meter_element.cc
  #${CUR_SRC_DIR}html/html_meter_element.h
  ${CUR_SRC_DIR}html/html_mod_element.cc
  #${CUR_SRC_DIR}html/html_mod_element.h
  ${CUR_SRC_DIR}html/html_name_collection.cc
  #${CUR_SRC_DIR}html/html_name_collection.h
  ${CUR_SRC_DIR}html/html_no_embed_element.cc
  #${CUR_SRC_DIR}html/html_no_embed_element.h
  ${CUR_SRC_DIR}html/html_no_script_element.cc
  #${CUR_SRC_DIR}html/html_no_script_element.h
  ${CUR_SRC_DIR}html/html_object_element.cc
  #${CUR_SRC_DIR}html/html_object_element.h
  ${CUR_SRC_DIR}html/html_olist_element.cc
  #${CUR_SRC_DIR}html/html_olist_element.h
  ${CUR_SRC_DIR}html/html_paragraph_element.cc
  #${CUR_SRC_DIR}html/html_paragraph_element.h
  ${CUR_SRC_DIR}html/html_param_element.cc
  #${CUR_SRC_DIR}html/html_param_element.h
  ${CUR_SRC_DIR}html/html_picture_element.cc
  #${CUR_SRC_DIR}html/html_picture_element.h
  ${CUR_SRC_DIR}html/html_plugin_element.cc
  #${CUR_SRC_DIR}html/html_plugin_element.h
  ${CUR_SRC_DIR}html/html_pre_element.cc
  #${CUR_SRC_DIR}html/html_pre_element.h
  ${CUR_SRC_DIR}html/html_progress_element.cc
  #${CUR_SRC_DIR}html/html_progress_element.h
  ${CUR_SRC_DIR}html/html_quote_element.cc
  #${CUR_SRC_DIR}html/html_quote_element.h
  ${CUR_SRC_DIR}html/html_rt_element.cc
  #${CUR_SRC_DIR}html/html_rt_element.h
  ${CUR_SRC_DIR}html/html_ruby_element.cc
  #${CUR_SRC_DIR}html/html_ruby_element.h
  ${CUR_SRC_DIR}html/html_script_element.cc
  #${CUR_SRC_DIR}html/html_script_element.h
  ${CUR_SRC_DIR}html/html_shadow_element.cc
  #${CUR_SRC_DIR}html/html_shadow_element.h
  ${CUR_SRC_DIR}html/html_slot_element.cc
  #${CUR_SRC_DIR}html/html_slot_element.h
  ${CUR_SRC_DIR}html/html_source_element.cc
  #${CUR_SRC_DIR}html/html_source_element.h
  ${CUR_SRC_DIR}html/html_span_element.cc
  #${CUR_SRC_DIR}html/html_span_element.h
  ${CUR_SRC_DIR}html/html_style_element.cc
  #${CUR_SRC_DIR}html/html_style_element.h
  ${CUR_SRC_DIR}html/html_summary_element.cc
  #${CUR_SRC_DIR}html/html_summary_element.h
  ${CUR_SRC_DIR}html/html_table_caption_element.cc
  #${CUR_SRC_DIR}html/html_table_caption_element.h
  ${CUR_SRC_DIR}html/html_table_cell_element.cc
  #${CUR_SRC_DIR}html/html_table_cell_element.h
  ${CUR_SRC_DIR}html/html_table_col_element.cc
  #${CUR_SRC_DIR}html/html_table_col_element.h
  ${CUR_SRC_DIR}html/html_table_element.cc
  #${CUR_SRC_DIR}html/html_table_element.h
  ${CUR_SRC_DIR}html/html_table_part_element.cc
  #${CUR_SRC_DIR}html/html_table_part_element.h
  ${CUR_SRC_DIR}html/html_table_row_element.cc
  #${CUR_SRC_DIR}html/html_table_row_element.h
  ${CUR_SRC_DIR}html/html_table_rows_collection.cc
  #${CUR_SRC_DIR}html/html_table_rows_collection.h
  ${CUR_SRC_DIR}html/html_table_section_element.cc
  #${CUR_SRC_DIR}html/html_table_section_element.h
  ${CUR_SRC_DIR}html/html_tag_collection.cc
  #${CUR_SRC_DIR}html/html_tag_collection.h
  ${CUR_SRC_DIR}html/html_template_element.cc
  #${CUR_SRC_DIR}html/html_template_element.h
  ${CUR_SRC_DIR}html/html_time_element.cc
  #${CUR_SRC_DIR}html/html_time_element.h
  ${CUR_SRC_DIR}html/html_title_element.cc
  #${CUR_SRC_DIR}html/html_title_element.h
  ${CUR_SRC_DIR}html/html_ulist_element.cc
  #${CUR_SRC_DIR}html/html_ulist_element.h
  ${CUR_SRC_DIR}html/html_unknown_element.cc
  #${CUR_SRC_DIR}html/html_unknown_element.h
  ${CUR_SRC_DIR}html/html_view_source_document.cc
  #${CUR_SRC_DIR}html/html_view_source_document.h
  ${CUR_SRC_DIR}html/html_wbr_element.cc
  #${CUR_SRC_DIR}html/html_wbr_element.h
  ${CUR_SRC_DIR}html/image_document.cc
  #${CUR_SRC_DIR}html/image_document.h
  ${CUR_SRC_DIR}html/imports/html_import.cc
  #${CUR_SRC_DIR}html/imports/html_import.h
  ${CUR_SRC_DIR}html/imports/html_import_child.cc
  #${CUR_SRC_DIR}html/imports/html_import_child.h
  #${CUR_SRC_DIR}html/imports/html_import_child_client.h
  ${CUR_SRC_DIR}html/imports/html_import_loader.cc
  #${CUR_SRC_DIR}html/imports/html_import_loader.h
  #${CUR_SRC_DIR}html/imports/html_import_state.h
  ${CUR_SRC_DIR}html/imports/html_import_state_resolver.cc
  #${CUR_SRC_DIR}html/imports/html_import_state_resolver.h
  ${CUR_SRC_DIR}html/imports/html_import_tree_root.cc
  #${CUR_SRC_DIR}html/imports/html_import_tree_root.h
  ${CUR_SRC_DIR}html/imports/html_imports_controller.cc
  #${CUR_SRC_DIR}html/imports/html_imports_controller.h
  ${CUR_SRC_DIR}html/imports/link_import.cc
  #${CUR_SRC_DIR}html/imports/link_import.h
  ${CUR_SRC_DIR}html/lazy_load_frame_observer.cc
  #${CUR_SRC_DIR}html/lazy_load_frame_observer.h
  ${CUR_SRC_DIR}html/lazy_load_image_observer.cc
  #${CUR_SRC_DIR}html/lazy_load_image_observer.h
  ${CUR_SRC_DIR}html/link_manifest.cc
  #${CUR_SRC_DIR}html/link_manifest.h
  ${CUR_SRC_DIR}html/link_rel_attribute.cc
  #${CUR_SRC_DIR}html/link_rel_attribute.h
  ${CUR_SRC_DIR}html/link_resource.cc
  #${CUR_SRC_DIR}html/link_resource.h
  ${CUR_SRC_DIR}html/link_style.cc
  #${CUR_SRC_DIR}html/link_style.h
  ${CUR_SRC_DIR}html/list_item_ordinal.cc
  #${CUR_SRC_DIR}html/list_item_ordinal.h
  ${CUR_SRC_DIR}html/media/autoplay_policy.cc
  #${CUR_SRC_DIR}html/media/autoplay_policy.h
  ${CUR_SRC_DIR}html/media/autoplay_uma_helper.cc
  #${CUR_SRC_DIR}html/media/autoplay_uma_helper.h
  ${CUR_SRC_DIR}html/media/html_audio_element.cc
  #${CUR_SRC_DIR}html/media/html_audio_element.h
  ${CUR_SRC_DIR}html/media/html_media_element.cc
  #${CUR_SRC_DIR}html/media/html_media_element.h
  ${CUR_SRC_DIR}html/media/html_media_element_controls_list.cc
  #${CUR_SRC_DIR}html/media/html_media_element_controls_list.h
  ${CUR_SRC_DIR}html/media/html_media_source.cc
  #${CUR_SRC_DIR}html/media/html_media_source.h
  ${CUR_SRC_DIR}html/media/html_video_element.cc
  #${CUR_SRC_DIR}html/media/html_video_element.h
  ${CUR_SRC_DIR}html/media/media_controls.cc
  #${CUR_SRC_DIR}html/media/media_controls.h
  ${CUR_SRC_DIR}html/media/media_custom_controls_fullscreen_detector.cc
  #${CUR_SRC_DIR}html/media/media_custom_controls_fullscreen_detector.h
  ${CUR_SRC_DIR}html/media/media_document.cc
  #${CUR_SRC_DIR}html/media/media_document.h
  ${CUR_SRC_DIR}html/media/media_element_parser_helpers.cc
  #${CUR_SRC_DIR}html/media/media_element_parser_helpers.h
  #${CUR_SRC_DIR}html/media/media_error.h
  ${CUR_SRC_DIR}html/media/media_fragment_uri_parser.cc
  #${CUR_SRC_DIR}html/media/media_fragment_uri_parser.h
  ${CUR_SRC_DIR}html/media/media_remoting_interstitial.cc
  #${CUR_SRC_DIR}html/media/media_remoting_interstitial.h
  ${CUR_SRC_DIR}html/media/picture_in_picture_interstitial.cc
  #${CUR_SRC_DIR}html/media/picture_in_picture_interstitial.h
  ${CUR_SRC_DIR}html/media/remote_playback_controller.cc
  #${CUR_SRC_DIR}html/media/remote_playback_controller.h
  #${CUR_SRC_DIR}html/media/remote_playback_observer.h
  ${CUR_SRC_DIR}html/media/video_wake_lock.cc
  #${CUR_SRC_DIR}html/media/video_wake_lock.h
  ${CUR_SRC_DIR}html/plugin_document.cc
  #${CUR_SRC_DIR}html/plugin_document.h
  ${CUR_SRC_DIR}html/portal/document_portals.cc
  #${CUR_SRC_DIR}html/portal/document_portals.h
  ${CUR_SRC_DIR}html/portal/dom_window_portal_host.cc
  #${CUR_SRC_DIR}html/portal/dom_window_portal_host.h
  ${CUR_SRC_DIR}html/portal/html_portal_element.cc
  #${CUR_SRC_DIR}html/portal/html_portal_element.h
  ${CUR_SRC_DIR}html/portal/portal_host.cc
  #${CUR_SRC_DIR}html/portal/portal_host.h
  ${CUR_SRC_DIR}html/portal/portal_post_message_helper.cc
  #${CUR_SRC_DIR}html/portal/portal_post_message_helper.h
  ${CUR_SRC_DIR}html/rel_list.cc
  #${CUR_SRC_DIR}html/rel_list.h
  ${CUR_SRC_DIR}html/shadow/details_marker_control.cc
  #${CUR_SRC_DIR}html/shadow/details_marker_control.h
  ${CUR_SRC_DIR}html/shadow/progress_shadow_element.cc
  #${CUR_SRC_DIR}html/shadow/progress_shadow_element.h
  ${CUR_SRC_DIR}html/shadow/shadow_element_names.cc
  #${CUR_SRC_DIR}html/shadow/shadow_element_names.h
  #${CUR_SRC_DIR}html/table_constants.h
  ${CUR_SRC_DIR}html/text_document.cc
  #${CUR_SRC_DIR}html/text_document.h
  ${CUR_SRC_DIR}html/time_ranges.cc
  #${CUR_SRC_DIR}html/time_ranges.h
  ${CUR_SRC_DIR}html/track/audio_track.cc
  #${CUR_SRC_DIR}html/track/audio_track.h
  ${CUR_SRC_DIR}html/track/audio_track_list.cc
  #${CUR_SRC_DIR}html/track/audio_track_list.h
  ${CUR_SRC_DIR}html/track/automatic_track_selection.cc
  #${CUR_SRC_DIR}html/track/automatic_track_selection.h
  ${CUR_SRC_DIR}html/track/cue_timeline.cc
  #${CUR_SRC_DIR}html/track/cue_timeline.h
  ${CUR_SRC_DIR}html/track/html_track_element.cc
  #${CUR_SRC_DIR}html/track/html_track_element.h
  ${CUR_SRC_DIR}html/track/inband_text_track.cc
  #${CUR_SRC_DIR}html/track/inband_text_track.h
  ${CUR_SRC_DIR}html/track/loadable_text_track.cc
  #${CUR_SRC_DIR}html/track/loadable_text_track.h
  ${CUR_SRC_DIR}html/track/text_track.cc
  #${CUR_SRC_DIR}html/track/text_track.h
  ${CUR_SRC_DIR}html/track/text_track_container.cc
  #${CUR_SRC_DIR}html/track/text_track_container.h
  ${CUR_SRC_DIR}html/track/text_track_cue.cc
  #${CUR_SRC_DIR}html/track/text_track_cue.h
  ${CUR_SRC_DIR}html/track/text_track_cue_list.cc
  #${CUR_SRC_DIR}html/track/text_track_cue_list.h
  #${CUR_SRC_DIR}html/track/text_track_kind_user_preference.h
  ${CUR_SRC_DIR}html/track/text_track_list.cc
  #${CUR_SRC_DIR}html/track/text_track_list.h
  ${CUR_SRC_DIR}html/track/track_base.cc
  #${CUR_SRC_DIR}html/track/track_base.h
  ${CUR_SRC_DIR}html/track/track_event.cc
  #${CUR_SRC_DIR}html/track/track_event.h
  #${CUR_SRC_DIR}html/track/track_list_base.h
  ${CUR_SRC_DIR}html/track/video_track.cc
  #${CUR_SRC_DIR}html/track/video_track.h
  ${CUR_SRC_DIR}html/track/video_track_list.cc
  #${CUR_SRC_DIR}html/track/video_track_list.h
  ${CUR_SRC_DIR}html/track/vtt/buffered_line_reader.cc
  #${CUR_SRC_DIR}html/track/vtt/buffered_line_reader.h
  ${CUR_SRC_DIR}html/track/vtt/vtt_cue.cc
  #${CUR_SRC_DIR}html/track/vtt/vtt_cue.h
  ${CUR_SRC_DIR}html/track/vtt/vtt_element.cc
  #${CUR_SRC_DIR}html/track/vtt/vtt_element.h
  ${CUR_SRC_DIR}html/track/vtt/vtt_parser.cc
  #${CUR_SRC_DIR}html/track/vtt/vtt_parser.h
  ${CUR_SRC_DIR}html/track/vtt/vtt_region.cc
  #${CUR_SRC_DIR}html/track/vtt/vtt_region.h
  ${CUR_SRC_DIR}html/track/vtt/vtt_scanner.cc
  #${CUR_SRC_DIR}html/track/vtt/vtt_scanner.h
  #${CUR_SRC_DIR}html/track/vtt/vtt_token.h
  ${CUR_SRC_DIR}html/track/vtt/vtt_tokenizer.cc
  #${CUR_SRC_DIR}html/track/vtt/vtt_tokenizer.h
  ${CUR_SRC_DIR}html/window_name_collection.cc
  #${CUR_SRC_DIR}html/window_name_collection.h
)

list(APPEND BLINK_RENDERER_CORE_IMAGE_BITMAP_SOURCES
  ${CUR_SRC_DIR}image_bitmap/image_bitmap.cc
  #${CUR_SRC_DIR}image_bitmap/image_bitmap.h
  ${CUR_SRC_DIR}image_bitmap/image_bitmap_factories.cc
  #${CUR_SRC_DIR}image_bitmap/image_bitmap_factories.h
  ${CUR_SRC_DIR}image_bitmap/image_bitmap_source.cc
  #${CUR_SRC_DIR}image_bitmap/image_bitmap_source.h
)

list(APPEND BLINK_RENDERER_CORE_INPUT_SOURCES
  ${CUR_SRC_DIR}input/boundary_event_dispatcher.cc
  #${CUR_SRC_DIR}input/boundary_event_dispatcher.h
  ${CUR_SRC_DIR}input/context_menu_allowed_scope.cc
  #${CUR_SRC_DIR}input/context_menu_allowed_scope.h
  ${CUR_SRC_DIR}input/event_handler.cc
  #${CUR_SRC_DIR}input/event_handler.h
  ${CUR_SRC_DIR}input/event_handling_util.cc
  #${CUR_SRC_DIR}input/event_handling_util.h
  ${CUR_SRC_DIR}input/fallback_cursor_event_manager.cc
  #${CUR_SRC_DIR}input/fallback_cursor_event_manager.h
  ${CUR_SRC_DIR}input/gesture_manager.cc
  #${CUR_SRC_DIR}input/gesture_manager.h
  ${CUR_SRC_DIR}input/input_device_capabilities.cc
  #${CUR_SRC_DIR}input/input_device_capabilities.h
  ${CUR_SRC_DIR}input/keyboard_event_manager.cc
  #${CUR_SRC_DIR}input/keyboard_event_manager.h
  ${CUR_SRC_DIR}input/mouse_event_manager.cc
  #${CUR_SRC_DIR}input/mouse_event_manager.h
  ${CUR_SRC_DIR}input/mouse_wheel_event_manager.cc
  #${CUR_SRC_DIR}input/mouse_wheel_event_manager.h
  ${CUR_SRC_DIR}input/pointer_event_manager.cc
  #${CUR_SRC_DIR}input/pointer_event_manager.h
  ${CUR_SRC_DIR}input/scroll_manager.cc
  #${CUR_SRC_DIR}input/scroll_manager.h
  ${CUR_SRC_DIR}input/touch.cc
  #${CUR_SRC_DIR}input/touch.h
  ${CUR_SRC_DIR}input/touch_action_util.cc
  #${CUR_SRC_DIR}input/touch_action_util.h
  ${CUR_SRC_DIR}input/touch_event_manager.cc
  #${CUR_SRC_DIR}input/touch_event_manager.h
  ${CUR_SRC_DIR}input/touch_list.cc
  #${CUR_SRC_DIR}input/touch_list.h
)

list(APPEND BLINK_RENDERER_CORE_INSPECTOR_SOURCES
  ${CUR_SRC_DIR}inspector/console_message.cc
  #${CUR_SRC_DIR}inspector/console_message.h
  ${CUR_SRC_DIR}inspector/console_message_storage.cc
  #${CUR_SRC_DIR}inspector/console_message_storage.h
  ${CUR_SRC_DIR}inspector/dev_tools_emulator.cc
  #${CUR_SRC_DIR}inspector/dev_tools_emulator.h
  ${CUR_SRC_DIR}inspector/dev_tools_host.cc
  #${CUR_SRC_DIR}inspector/dev_tools_host.h
  ${CUR_SRC_DIR}inspector/devtools_agent.cc
  #${CUR_SRC_DIR}inspector/devtools_agent.h
  ${CUR_SRC_DIR}inspector/devtools_session.cc
  #${CUR_SRC_DIR}inspector/devtools_session.h
  ${CUR_SRC_DIR}inspector/dom_editor.cc
  #${CUR_SRC_DIR}inspector/dom_editor.h
  ${CUR_SRC_DIR}inspector/dom_patch_support.cc
  #${CUR_SRC_DIR}inspector/dom_patch_support.h
  ${CUR_SRC_DIR}inspector/identifiers_factory.cc
  #${CUR_SRC_DIR}inspector/identifiers_factory.h
  ${CUR_SRC_DIR}inspector/inspect_tools.cc
  #${CUR_SRC_DIR}inspector/inspect_tools.h
  ${CUR_SRC_DIR}inspector/inspected_frames.cc
  #${CUR_SRC_DIR}inspector/inspected_frames.h
  ${CUR_SRC_DIR}inspector/inspector_animation_agent.cc
  #${CUR_SRC_DIR}inspector/inspector_animation_agent.h
  ${CUR_SRC_DIR}inspector/inspector_application_cache_agent.cc
  #${CUR_SRC_DIR}inspector/inspector_application_cache_agent.h
  ${CUR_SRC_DIR}inspector/inspector_audits_agent.cc
  #${CUR_SRC_DIR}inspector/inspector_audits_agent.h
  #${CUR_SRC_DIR}inspector/inspector_base_agent.h
  ${CUR_SRC_DIR}inspector/inspector_css_agent.cc
  #${CUR_SRC_DIR}inspector/inspector_css_agent.h
  ${CUR_SRC_DIR}inspector/inspector_dom_agent.cc
  #${CUR_SRC_DIR}inspector/inspector_dom_agent.h
  ${CUR_SRC_DIR}inspector/inspector_dom_debugger_agent.cc
  #${CUR_SRC_DIR}inspector/inspector_dom_debugger_agent.h
  ${CUR_SRC_DIR}inspector/inspector_dom_snapshot_agent.cc
  #${CUR_SRC_DIR}inspector/inspector_dom_snapshot_agent.h
  ${CUR_SRC_DIR}inspector/inspector_emulation_agent.cc
  #${CUR_SRC_DIR}inspector/inspector_emulation_agent.h
  #${CUR_SRC_DIR}inspector/inspector_frontend_client.h
  ${CUR_SRC_DIR}inspector/inspector_highlight.cc
  #${CUR_SRC_DIR}inspector/inspector_highlight.h
  ${CUR_SRC_DIR}inspector/inspector_history.cc
  #${CUR_SRC_DIR}inspector/inspector_history.h
  ${CUR_SRC_DIR}inspector/inspector_io_agent.cc
  #${CUR_SRC_DIR}inspector/inspector_io_agent.h
  ${CUR_SRC_DIR}inspector/inspector_layer_tree_agent.cc
  #${CUR_SRC_DIR}inspector/inspector_layer_tree_agent.h
  ${CUR_SRC_DIR}inspector/inspector_log_agent.cc
  #${CUR_SRC_DIR}inspector/inspector_log_agent.h
  ${CUR_SRC_DIR}inspector/inspector_memory_agent.cc
  #${CUR_SRC_DIR}inspector/inspector_memory_agent.h
  ${CUR_SRC_DIR}inspector/inspector_network_agent.cc
  #${CUR_SRC_DIR}inspector/inspector_network_agent.h
  ${CUR_SRC_DIR}inspector/inspector_overlay_agent.cc
  #${CUR_SRC_DIR}inspector/inspector_overlay_agent.h
  ${CUR_SRC_DIR}inspector/inspector_overlay_host.cc
  #${CUR_SRC_DIR}inspector/inspector_overlay_host.h
  ${CUR_SRC_DIR}inspector/inspector_page_agent.cc
  #${CUR_SRC_DIR}inspector/inspector_page_agent.h
  ${CUR_SRC_DIR}inspector/inspector_performance_agent.cc
  #${CUR_SRC_DIR}inspector/inspector_performance_agent.h
  ${CUR_SRC_DIR}inspector/inspector_resource_container.cc
  #${CUR_SRC_DIR}inspector/inspector_resource_container.h
  ${CUR_SRC_DIR}inspector/inspector_resource_content_loader.cc
  #${CUR_SRC_DIR}inspector/inspector_resource_content_loader.h
  ${CUR_SRC_DIR}inspector/inspector_session_state.cc
  #${CUR_SRC_DIR}inspector/inspector_session_state.h
  ${CUR_SRC_DIR}inspector/inspector_style_sheet.cc
  #${CUR_SRC_DIR}inspector/inspector_style_sheet.h
  ${CUR_SRC_DIR}inspector/inspector_task_runner.cc
  #${CUR_SRC_DIR}inspector/inspector_task_runner.h
  ${CUR_SRC_DIR}inspector/inspector_trace_events.cc
  #${CUR_SRC_DIR}inspector/inspector_trace_events.h
  ${CUR_SRC_DIR}inspector/main_thread_debugger.cc
  #${CUR_SRC_DIR}inspector/main_thread_debugger.h
  ${CUR_SRC_DIR}inspector/network_resources_data.cc
  #${CUR_SRC_DIR}inspector/network_resources_data.h
  ${CUR_SRC_DIR}inspector/resolve_node.cc
  #${CUR_SRC_DIR}inspector/resolve_node.h
  ${CUR_SRC_DIR}inspector/thread_debugger.cc
  #${CUR_SRC_DIR}inspector/thread_debugger.h
  ${CUR_SRC_DIR}inspector/v8_inspector_string.cc
  #${CUR_SRC_DIR}inspector/v8_inspector_string.h
  #${CUR_SRC_DIR}inspector/worker_devtools_params.h
  ${CUR_SRC_DIR}inspector/worker_inspector_controller.cc
  #${CUR_SRC_DIR}inspector/worker_inspector_controller.h
  ${CUR_SRC_DIR}inspector/worker_thread_debugger.cc
  #${CUR_SRC_DIR}inspector/worker_thread_debugger.h
)

list(APPEND BLINK_RENDERER_CORE_INTERSECTION_OBSERVER_SOURCES
  ${CUR_SRC_DIR}intersection_observer/element_intersection_observer_data.cc
  #${CUR_SRC_DIR}intersection_observer/element_intersection_observer_data.h
  ${CUR_SRC_DIR}intersection_observer/intersection_geometry.cc
  #${CUR_SRC_DIR}intersection_observer/intersection_geometry.h
  ${CUR_SRC_DIR}intersection_observer/intersection_observation.cc
  #${CUR_SRC_DIR}intersection_observer/intersection_observation.h
  ${CUR_SRC_DIR}intersection_observer/intersection_observer.cc
  #${CUR_SRC_DIR}intersection_observer/intersection_observer.h
  ${CUR_SRC_DIR}intersection_observer/intersection_observer_controller.cc
  #${CUR_SRC_DIR}intersection_observer/intersection_observer_controller.h
  ${CUR_SRC_DIR}intersection_observer/intersection_observer_entry.cc
  #${CUR_SRC_DIR}intersection_observer/intersection_observer_entry.h
)

list(APPEND BLINK_RENDERER_CORE_INVISIBLE_DOM_SOURCES
  ${CUR_SRC_DIR}invisible_dom/activate_invisible_event.cc
  #${CUR_SRC_DIR}invisible_dom/activate_invisible_event.h
  #${CUR_SRC_DIR}invisible_dom/activate_invisible_event.idl # .idl
  ${CUR_SRC_DIR}invisible_dom/invisible_dom.cc
  #${CUR_SRC_DIR}invisible_dom/invisible_dom.h
)

list(APPEND BLINK_RENDERER_CORE_LAYOUT_SOURCES
  #${CUR_SRC_DIR}layout/api/hit_test_action.h
  #${CUR_SRC_DIR}layout/api/line_layout_api_shim.h
  #${CUR_SRC_DIR}layout/api/line_layout_block_flow.h
  #${CUR_SRC_DIR}layout/api/line_layout_box.h
  #${CUR_SRC_DIR}layout/api/line_layout_box_model.h
  #${CUR_SRC_DIR}layout/api/line_layout_br.h
  #${CUR_SRC_DIR}layout/api/line_layout_inline.h
  #${CUR_SRC_DIR}layout/api/line_layout_item.h
  #${CUR_SRC_DIR}layout/api/line_layout_list_marker.h
  #${CUR_SRC_DIR}layout/api/line_layout_ruby_base.h
  #${CUR_SRC_DIR}layout/api/line_layout_ruby_run.h
  #${CUR_SRC_DIR}layout/api/line_layout_ruby_text.h
  #${CUR_SRC_DIR}layout/api/line_layout_svg_inline.h
  #${CUR_SRC_DIR}layout/api/line_layout_svg_inline_text.h
  #${CUR_SRC_DIR}layout/api/line_layout_svg_text_path.h
  #${CUR_SRC_DIR}layout/api/line_layout_text.h
  #${CUR_SRC_DIR}layout/api/line_layout_text_combine.h
  ${CUR_SRC_DIR}layout/api/selection_state.cc
  #${CUR_SRC_DIR}layout/api/selection_state.h
  #${CUR_SRC_DIR}layout/background_bleed_avoidance.h
  #${CUR_SRC_DIR}layout/bidi_run.h
  ${CUR_SRC_DIR}layout/bidi_run_for_line.cc
  #${CUR_SRC_DIR}layout/bidi_run_for_line.h
  #${CUR_SRC_DIR}layout/box_layout_extra_input.h
  ${CUR_SRC_DIR}layout/collapsed_border_value.cc
  #${CUR_SRC_DIR}layout/collapsed_border_value.h
  ${CUR_SRC_DIR}layout/column_balancer.cc
  #${CUR_SRC_DIR}layout/column_balancer.h
  #${CUR_SRC_DIR}layout/content_change_type.h
  ${CUR_SRC_DIR}layout/counter_node.cc
  #${CUR_SRC_DIR}layout/counter_node.h
  ${CUR_SRC_DIR}layout/custom/css_layout_definition.cc
  #${CUR_SRC_DIR}layout/custom/css_layout_definition.h
  ${CUR_SRC_DIR}layout/custom/css_layout_worklet.cc
  #${CUR_SRC_DIR}layout/custom/css_layout_worklet.h
  ${CUR_SRC_DIR}layout/custom/custom_layout_child.cc
  #${CUR_SRC_DIR}layout/custom/custom_layout_child.h
  ${CUR_SRC_DIR}layout/custom/custom_layout_constraints.cc
  #${CUR_SRC_DIR}layout/custom/custom_layout_constraints.h
  ${CUR_SRC_DIR}layout/custom/custom_layout_fragment.cc
  #${CUR_SRC_DIR}layout/custom/custom_layout_fragment.h
  ${CUR_SRC_DIR}layout/custom/custom_layout_fragment_request.cc
  #${CUR_SRC_DIR}layout/custom/custom_layout_fragment_request.h
  ${CUR_SRC_DIR}layout/custom/document_layout_definition.cc
  #${CUR_SRC_DIR}layout/custom/document_layout_definition.h
  ${CUR_SRC_DIR}layout/custom/layout_custom.cc
  #${CUR_SRC_DIR}layout/custom/layout_custom.h
  ${CUR_SRC_DIR}layout/custom/layout_worklet.cc
  #${CUR_SRC_DIR}layout/custom/layout_worklet.h
  ${CUR_SRC_DIR}layout/custom/layout_worklet_global_scope.cc
  #${CUR_SRC_DIR}layout/custom/layout_worklet_global_scope.h
  ${CUR_SRC_DIR}layout/custom/layout_worklet_global_scope_proxy.cc
  #${CUR_SRC_DIR}layout/custom/layout_worklet_global_scope_proxy.h
  ${CUR_SRC_DIR}layout/custom/pending_layout_registry.cc
  #${CUR_SRC_DIR}layout/custom/pending_layout_registry.h
  ${CUR_SRC_DIR}layout/depth_ordered_layout_object_list.cc
  #${CUR_SRC_DIR}layout/depth_ordered_layout_object_list.h
  ${CUR_SRC_DIR}layout/flexible_box_algorithm.cc
  #${CUR_SRC_DIR}layout/flexible_box_algorithm.h
  ${CUR_SRC_DIR}layout/floating_objects.cc
  #${CUR_SRC_DIR}layout/floating_objects.h
  ${CUR_SRC_DIR}layout/fragmentainer_iterator.cc
  #${CUR_SRC_DIR}layout/fragmentainer_iterator.h
  #${CUR_SRC_DIR}layout/fragmentation_context.h
  #${CUR_SRC_DIR}layout/generated_children.h
  ${CUR_SRC_DIR}layout/geometry/logical_offset.cc
  #${CUR_SRC_DIR}layout/geometry/logical_offset.h
  ${CUR_SRC_DIR}layout/geometry/logical_rect.cc
  #${CUR_SRC_DIR}layout/geometry/logical_rect.h
  ${CUR_SRC_DIR}layout/geometry/logical_size.cc
  #${CUR_SRC_DIR}layout/geometry/logical_size.h
  ${CUR_SRC_DIR}layout/geometry/physical_offset.cc
  #${CUR_SRC_DIR}layout/geometry/physical_offset.h
  ${CUR_SRC_DIR}layout/geometry/physical_rect.cc
  #${CUR_SRC_DIR}layout/geometry/physical_rect.h
  ${CUR_SRC_DIR}layout/geometry/physical_size.cc
  #${CUR_SRC_DIR}layout/geometry/physical_size.h
  ${CUR_SRC_DIR}layout/geometry/transform_state.cc
  #${CUR_SRC_DIR}layout/geometry/transform_state.h
  ${CUR_SRC_DIR}layout/grid.cc
  #${CUR_SRC_DIR}layout/grid.h
  ${CUR_SRC_DIR}layout/grid_baseline_alignment.cc
  #${CUR_SRC_DIR}layout/grid_baseline_alignment.h
  ${CUR_SRC_DIR}layout/grid_layout_utils.cc
  #${CUR_SRC_DIR}layout/grid_layout_utils.h
  ${CUR_SRC_DIR}layout/grid_track_sizing_algorithm.cc
  #${CUR_SRC_DIR}layout/grid_track_sizing_algorithm.h
  ${CUR_SRC_DIR}layout/hit_test_cache.cc
  #${CUR_SRC_DIR}layout/hit_test_cache.h
  ${CUR_SRC_DIR}layout/hit_test_canvas_result.cc
  #${CUR_SRC_DIR}layout/hit_test_canvas_result.h
  ${CUR_SRC_DIR}layout/hit_test_location.cc
  #${CUR_SRC_DIR}layout/hit_test_location.h
  #${CUR_SRC_DIR}layout/hit_test_request.h
  ${CUR_SRC_DIR}layout/hit_test_result.cc
  #${CUR_SRC_DIR}layout/hit_test_result.h
  ${CUR_SRC_DIR}layout/hit_testing_transform_state.cc
  #${CUR_SRC_DIR}layout/hit_testing_transform_state.h
  #${CUR_SRC_DIR}layout/intrinsic_sizing_info.h
  ${CUR_SRC_DIR}layout/jank_region.cc
  #${CUR_SRC_DIR}layout/jank_region.h
  ${CUR_SRC_DIR}layout/jank_tracker.cc
  #${CUR_SRC_DIR}layout/jank_tracker.h
  ${CUR_SRC_DIR}layout/layout_analyzer.cc
  #${CUR_SRC_DIR}layout/layout_analyzer.h
  ${CUR_SRC_DIR}layout/layout_block.cc
  #${CUR_SRC_DIR}layout/layout_block.h
  ${CUR_SRC_DIR}layout/layout_block_flow.cc
  #${CUR_SRC_DIR}layout/layout_block_flow.h
  ${CUR_SRC_DIR}layout/layout_block_flow_line.cc
  ${CUR_SRC_DIR}layout/layout_box.cc
  #${CUR_SRC_DIR}layout/layout_box.h
  ${CUR_SRC_DIR}layout/layout_box_model_object.cc
  #${CUR_SRC_DIR}layout/layout_box_model_object.h
  ${CUR_SRC_DIR}layout/layout_br.cc
  #${CUR_SRC_DIR}layout/layout_br.h
  ${CUR_SRC_DIR}layout/layout_button.cc
  #${CUR_SRC_DIR}layout/layout_button.h
  ${CUR_SRC_DIR}layout/layout_counter.cc
  #${CUR_SRC_DIR}layout/layout_counter.h
  ${CUR_SRC_DIR}layout/layout_deprecated_flexible_box.cc
  #${CUR_SRC_DIR}layout/layout_deprecated_flexible_box.h
  ${CUR_SRC_DIR}layout/layout_details_marker.cc
  #${CUR_SRC_DIR}layout/layout_details_marker.h
  ${CUR_SRC_DIR}layout/layout_embedded_content.cc
  #${CUR_SRC_DIR}layout/layout_embedded_content.h
  ${CUR_SRC_DIR}layout/layout_embedded_object.cc
  #${CUR_SRC_DIR}layout/layout_embedded_object.h
  ${CUR_SRC_DIR}layout/layout_fieldset.cc
  #${CUR_SRC_DIR}layout/layout_fieldset.h
  ${CUR_SRC_DIR}layout/layout_file_upload_control.cc
  #${CUR_SRC_DIR}layout/layout_file_upload_control.h
  ${CUR_SRC_DIR}layout/layout_flexible_box.cc
  #${CUR_SRC_DIR}layout/layout_flexible_box.h
  ${CUR_SRC_DIR}layout/layout_flow_thread.cc
  #${CUR_SRC_DIR}layout/layout_flow_thread.h
  ${CUR_SRC_DIR}layout/layout_frame.cc
  #${CUR_SRC_DIR}layout/layout_frame.h
  ${CUR_SRC_DIR}layout/layout_frame_set.cc
  #${CUR_SRC_DIR}layout/layout_frame_set.h
  ${CUR_SRC_DIR}layout/layout_geometry_map.cc
  #${CUR_SRC_DIR}layout/layout_geometry_map.h
  #${CUR_SRC_DIR}layout/layout_geometry_map_step.h
  ${CUR_SRC_DIR}layout/layout_grid.cc
  #${CUR_SRC_DIR}layout/layout_grid.h
  ${CUR_SRC_DIR}layout/layout_html_canvas.cc
  #${CUR_SRC_DIR}layout/layout_html_canvas.h
  ${CUR_SRC_DIR}layout/layout_iframe.cc
  #${CUR_SRC_DIR}layout/layout_iframe.h
  ${CUR_SRC_DIR}layout/layout_image.cc
  #${CUR_SRC_DIR}layout/layout_image.h
  ${CUR_SRC_DIR}layout/layout_image_resource.cc
  #${CUR_SRC_DIR}layout/layout_image_resource.h
  ${CUR_SRC_DIR}layout/layout_image_resource_style_image.cc
  #${CUR_SRC_DIR}layout/layout_image_resource_style_image.h
  ${CUR_SRC_DIR}layout/layout_inline.cc
  #${CUR_SRC_DIR}layout/layout_inline.h
  ${CUR_SRC_DIR}layout/layout_list_box.cc
  #${CUR_SRC_DIR}layout/layout_list_box.h
  ${CUR_SRC_DIR}layout/layout_list_item.cc
  #${CUR_SRC_DIR}layout/layout_list_item.h
  ${CUR_SRC_DIR}layout/layout_list_marker.cc
  #${CUR_SRC_DIR}layout/layout_list_marker.h
  ${CUR_SRC_DIR}layout/layout_media.cc
  #${CUR_SRC_DIR}layout/layout_media.h
  ${CUR_SRC_DIR}layout/layout_menu_list.cc
  #${CUR_SRC_DIR}layout/layout_menu_list.h
  ${CUR_SRC_DIR}layout/layout_multi_column_flow_thread.cc
  #${CUR_SRC_DIR}layout/layout_multi_column_flow_thread.h
  ${CUR_SRC_DIR}layout/layout_multi_column_set.cc
  #${CUR_SRC_DIR}layout/layout_multi_column_set.h
  ${CUR_SRC_DIR}layout/layout_multi_column_spanner_placeholder.cc
  #${CUR_SRC_DIR}layout/layout_multi_column_spanner_placeholder.h
  ${CUR_SRC_DIR}layout/layout_object.cc
  #${CUR_SRC_DIR}layout/layout_object.h
  ${CUR_SRC_DIR}layout/layout_object_child_list.cc
  #${CUR_SRC_DIR}layout/layout_object_child_list.h
  ${CUR_SRC_DIR}layout/layout_object_factory.cc
  #${CUR_SRC_DIR}layout/layout_object_factory.h
  #${CUR_SRC_DIR}layout/layout_object_inlines.h
  ${CUR_SRC_DIR}layout/layout_progress.cc
  #${CUR_SRC_DIR}layout/layout_progress.h
  ${CUR_SRC_DIR}layout/layout_quote.cc
  #${CUR_SRC_DIR}layout/layout_quote.h
  ${CUR_SRC_DIR}layout/layout_replaced.cc
  #${CUR_SRC_DIR}layout/layout_replaced.h
  ${CUR_SRC_DIR}layout/layout_ruby.cc
  #${CUR_SRC_DIR}layout/layout_ruby.h
  ${CUR_SRC_DIR}layout/layout_ruby_base.cc
  #${CUR_SRC_DIR}layout/layout_ruby_base.h
  ${CUR_SRC_DIR}layout/layout_ruby_run.cc
  #${CUR_SRC_DIR}layout/layout_ruby_run.h
  ${CUR_SRC_DIR}layout/layout_ruby_text.cc
  #${CUR_SRC_DIR}layout/layout_ruby_text.h
  ${CUR_SRC_DIR}layout/layout_scrollbar.cc
  #${CUR_SRC_DIR}layout/layout_scrollbar.h
  ${CUR_SRC_DIR}layout/layout_scrollbar_part.cc
  #${CUR_SRC_DIR}layout/layout_scrollbar_part.h
  ${CUR_SRC_DIR}layout/layout_scrollbar_theme.cc
  #${CUR_SRC_DIR}layout/layout_scrollbar_theme.h
  ${CUR_SRC_DIR}layout/layout_search_field.cc
  #${CUR_SRC_DIR}layout/layout_search_field.h
  ${CUR_SRC_DIR}layout/layout_slider.cc
  #${CUR_SRC_DIR}layout/layout_slider.h
  ${CUR_SRC_DIR}layout/layout_slider_container.cc
  #${CUR_SRC_DIR}layout/layout_slider_container.h
  ${CUR_SRC_DIR}layout/layout_state.cc
  #${CUR_SRC_DIR}layout/layout_state.h
  ${CUR_SRC_DIR}layout/layout_table.cc
  #${CUR_SRC_DIR}layout/layout_table.h
  ${CUR_SRC_DIR}layout/layout_table_box_component.cc
  #${CUR_SRC_DIR}layout/layout_table_box_component.h
  ${CUR_SRC_DIR}layout/layout_table_caption.cc
  #${CUR_SRC_DIR}layout/layout_table_caption.h
  ${CUR_SRC_DIR}layout/layout_table_cell.cc
  #${CUR_SRC_DIR}layout/layout_table_cell.h
  ${CUR_SRC_DIR}layout/layout_table_col.cc
  #${CUR_SRC_DIR}layout/layout_table_col.h
  ${CUR_SRC_DIR}layout/layout_table_row.cc
  #${CUR_SRC_DIR}layout/layout_table_row.h
  ${CUR_SRC_DIR}layout/layout_table_section.cc
  #${CUR_SRC_DIR}layout/layout_table_section.h
  ${CUR_SRC_DIR}layout/layout_text.cc
  #${CUR_SRC_DIR}layout/layout_text.h
  ${CUR_SRC_DIR}layout/layout_text_combine.cc
  #${CUR_SRC_DIR}layout/layout_text_combine.h
  ${CUR_SRC_DIR}layout/layout_text_control.cc
  #${CUR_SRC_DIR}layout/layout_text_control.h
  ${CUR_SRC_DIR}layout/layout_text_control_multi_line.cc
  #${CUR_SRC_DIR}layout/layout_text_control_multi_line.h
  ${CUR_SRC_DIR}layout/layout_text_control_single_line.cc
  #${CUR_SRC_DIR}layout/layout_text_control_single_line.h
  ${CUR_SRC_DIR}layout/layout_text_fragment.cc
  #${CUR_SRC_DIR}layout/layout_text_fragment.h
  ${CUR_SRC_DIR}layout/layout_theme.cc
  #${CUR_SRC_DIR}layout/layout_theme.h
  ${CUR_SRC_DIR}layout/layout_theme_default.cc
  #${CUR_SRC_DIR}layout/layout_theme_default.h
  ${CUR_SRC_DIR}layout/layout_theme_font_provider.cc
  #${CUR_SRC_DIR}layout/layout_theme_font_provider.h
  #${CUR_SRC_DIR}layout/layout_theme_mac.h
  ## TODO ## ${CUR_SRC_DIR}layout/layout_theme_mac.mm",
  ${CUR_SRC_DIR}layout/layout_theme_mobile.cc
  #${CUR_SRC_DIR}layout/layout_theme_mobile.h
  ${CUR_SRC_DIR}layout/layout_tree_as_text.cc
  #${CUR_SRC_DIR}layout/layout_tree_as_text.h
  ${CUR_SRC_DIR}layout/layout_video.cc
  #${CUR_SRC_DIR}layout/layout_video.h
  ${CUR_SRC_DIR}layout/layout_view.cc
  #${CUR_SRC_DIR}layout/layout_view.h
  ${CUR_SRC_DIR}layout/layout_vtt_cue.cc
  #${CUR_SRC_DIR}layout/layout_vtt_cue.h
  ${CUR_SRC_DIR}layout/layout_word_break.cc
  #${CUR_SRC_DIR}layout/layout_word_break.h
  ${CUR_SRC_DIR}layout/line/abstract_inline_text_box.cc
  #${CUR_SRC_DIR}layout/line/abstract_inline_text_box.h
  ${CUR_SRC_DIR}layout/line/breaking_context.cc
  #${CUR_SRC_DIR}layout/line/breaking_context_inline_headers.h
  ${CUR_SRC_DIR}layout/line/ellipsis_box.cc
  #${CUR_SRC_DIR}layout/line/ellipsis_box.h
  #${CUR_SRC_DIR}layout/line/glyph_overflow.h
  ${CUR_SRC_DIR}layout/line/inline_box.cc
  #${CUR_SRC_DIR}layout/line/inline_box.h
  ${CUR_SRC_DIR}layout/line/inline_flow_box.cc
  #${CUR_SRC_DIR}layout/line/inline_flow_box.h
  #${CUR_SRC_DIR}layout/line/inline_iterator.h
  ${CUR_SRC_DIR}layout/line/inline_text_box.cc
  #${CUR_SRC_DIR}layout/line/inline_text_box.h
  #${CUR_SRC_DIR}layout/line/layout_text_info.h
  ${CUR_SRC_DIR}layout/line/line_box_list.cc
  #${CUR_SRC_DIR}layout/line/line_box_list.h
  ${CUR_SRC_DIR}layout/line/line_breaker.cc
  #${CUR_SRC_DIR}layout/line/line_breaker.h
  #${CUR_SRC_DIR}layout/line/line_info.h
  #${CUR_SRC_DIR}layout/line/line_layout_state.h
  ${CUR_SRC_DIR}layout/line/line_orientation_utils.cc
  #${CUR_SRC_DIR}layout/line/line_orientation_utils.h
  ${CUR_SRC_DIR}layout/line/line_width.cc
  #${CUR_SRC_DIR}layout/line/line_width.h
  ${CUR_SRC_DIR}layout/line/root_inline_box.cc
  #${CUR_SRC_DIR}layout/line/root_inline_box.h
  ${CUR_SRC_DIR}layout/line/trailing_objects.cc
  #${CUR_SRC_DIR}layout/line/trailing_objects.h
  #${CUR_SRC_DIR}layout/line/word_measurement.h
  ${CUR_SRC_DIR}layout/list_marker_text.cc
  #${CUR_SRC_DIR}layout/list_marker_text.h
  ${CUR_SRC_DIR}layout/logical_values.cc
  #${CUR_SRC_DIR}layout/logical_values.h
  #${CUR_SRC_DIR}layout/map_coordinates_flags.h
  ${CUR_SRC_DIR}layout/min_max_size.cc
  #${CUR_SRC_DIR}layout/min_max_size.h
  ${CUR_SRC_DIR}layout/multi_column_fragmentainer_group.cc
  #${CUR_SRC_DIR}layout/multi_column_fragmentainer_group.h
  ${CUR_SRC_DIR}layout/ng/exclusions/ng_exclusion.cc
  #${CUR_SRC_DIR}layout/ng/exclusions/ng_exclusion.h
  ${CUR_SRC_DIR}layout/ng/exclusions/ng_exclusion_space.cc
  #${CUR_SRC_DIR}layout/ng/exclusions/ng_exclusion_space.h
  ${CUR_SRC_DIR}layout/ng/exclusions/ng_layout_opportunity.cc
  #${CUR_SRC_DIR}layout/ng/exclusions/ng_layout_opportunity.h
  #${CUR_SRC_DIR}layout/ng/exclusions/ng_line_layout_opportunity.h
  #${CUR_SRC_DIR}layout/ng/exclusions/ng_shape_exclusions.h
  ${CUR_SRC_DIR}layout/ng/geometry/ng_bfc_offset.cc
  #${CUR_SRC_DIR}layout/ng/geometry/ng_bfc_offset.h
  #${CUR_SRC_DIR}layout/ng/geometry/ng_bfc_rect.h
  #${CUR_SRC_DIR}layout/ng/geometry/ng_border_edges.h
  ${CUR_SRC_DIR}layout/ng/geometry/ng_box_strut.cc
  #${CUR_SRC_DIR}layout/ng/geometry/ng_box_strut.h
  #${CUR_SRC_DIR}layout/ng/geometry/ng_fragment_geometry.h
  ${CUR_SRC_DIR}layout/ng/geometry/ng_margin_strut.cc
  #${CUR_SRC_DIR}layout/ng/geometry/ng_margin_strut.h
  ${CUR_SRC_DIR}layout/ng/geometry/ng_static_position.cc
  #${CUR_SRC_DIR}layout/ng/geometry/ng_static_position.h
  #${CUR_SRC_DIR}layout/ng/inline/empty_offset_mapping_builder.h
  #${CUR_SRC_DIR}layout/ng/inline/layout_ng_text.h
  #${CUR_SRC_DIR}layout/ng/inline/layout_ng_text_fragment.h
  ${CUR_SRC_DIR}layout/ng/inline/ng_abstract_inline_text_box.cc
  #${CUR_SRC_DIR}layout/ng/inline/ng_abstract_inline_text_box.h
  ${CUR_SRC_DIR}layout/ng/inline/ng_baseline.cc
  #${CUR_SRC_DIR}layout/ng/inline/ng_baseline.h
  ${CUR_SRC_DIR}layout/ng/inline/ng_bidi_paragraph.cc
  #${CUR_SRC_DIR}layout/ng/inline/ng_bidi_paragraph.h
  ${CUR_SRC_DIR}layout/ng/inline/ng_caret_position.cc
  #${CUR_SRC_DIR}layout/ng/inline/ng_caret_position.h
  ${CUR_SRC_DIR}layout/ng/inline/ng_caret_rect.cc
  #${CUR_SRC_DIR}layout/ng/inline/ng_caret_rect.h
  ${CUR_SRC_DIR}layout/ng/inline/ng_dirty_lines.cc
  #${CUR_SRC_DIR}layout/ng/inline/ng_dirty_lines.h
  ${CUR_SRC_DIR}layout/ng/inline/ng_inline_box_state.cc
  #${CUR_SRC_DIR}layout/ng/inline/ng_inline_box_state.h
  ${CUR_SRC_DIR}layout/ng/inline/ng_inline_break_token.cc
  #${CUR_SRC_DIR}layout/ng/inline/ng_inline_break_token.h
  ${CUR_SRC_DIR}layout/ng/inline/ng_inline_child_layout_context.cc
  #${CUR_SRC_DIR}layout/ng/inline/ng_inline_child_layout_context.h
  ${CUR_SRC_DIR}layout/ng/inline/ng_inline_fragment_traversal.cc
  #${CUR_SRC_DIR}layout/ng/inline/ng_inline_fragment_traversal.h
  ${CUR_SRC_DIR}layout/ng/inline/ng_inline_item.cc
  #${CUR_SRC_DIR}layout/ng/inline/ng_inline_item.h
  ${CUR_SRC_DIR}layout/ng/inline/ng_inline_item_result.cc
  #${CUR_SRC_DIR}layout/ng/inline/ng_inline_item_result.h
  ${CUR_SRC_DIR}layout/ng/inline/ng_inline_item_segment.cc
  #${CUR_SRC_DIR}layout/ng/inline/ng_inline_item_segment.h
  #${CUR_SRC_DIR}layout/ng/inline/ng_inline_items.h
  ${CUR_SRC_DIR}layout/ng/inline/ng_inline_items_builder.cc
  #${CUR_SRC_DIR}layout/ng/inline/ng_inline_items_builder.h
  ${CUR_SRC_DIR}layout/ng/inline/ng_inline_layout_algorithm.cc
  #${CUR_SRC_DIR}layout/ng/inline/ng_inline_layout_algorithm.h
  ${CUR_SRC_DIR}layout/ng/inline/ng_inline_node.cc
  #${CUR_SRC_DIR}layout/ng/inline/ng_inline_node.h
  ${CUR_SRC_DIR}layout/ng/inline/ng_inline_node_data.cc
  #${CUR_SRC_DIR}layout/ng/inline/ng_inline_node_data.h
  ${CUR_SRC_DIR}layout/ng/inline/ng_line_box_fragment.cc
  #${CUR_SRC_DIR}layout/ng/inline/ng_line_box_fragment.h
  ${CUR_SRC_DIR}layout/ng/inline/ng_line_box_fragment_builder.cc
  #${CUR_SRC_DIR}layout/ng/inline/ng_line_box_fragment_builder.h
  ${CUR_SRC_DIR}layout/ng/inline/ng_line_breaker.cc
  #${CUR_SRC_DIR}layout/ng/inline/ng_line_breaker.h
  ${CUR_SRC_DIR}layout/ng/inline/ng_line_height_metrics.cc
  #${CUR_SRC_DIR}layout/ng/inline/ng_line_height_metrics.h
  ${CUR_SRC_DIR}layout/ng/inline/ng_line_truncator.cc
  #${CUR_SRC_DIR}layout/ng/inline/ng_line_truncator.h
  ${CUR_SRC_DIR}layout/ng/inline/ng_line_utils.cc
  #${CUR_SRC_DIR}layout/ng/inline/ng_line_utils.h
  ${CUR_SRC_DIR}layout/ng/inline/ng_offset_mapping.cc
  #${CUR_SRC_DIR}layout/ng/inline/ng_offset_mapping.h
  ${CUR_SRC_DIR}layout/ng/inline/ng_offset_mapping_builder.cc
  #${CUR_SRC_DIR}layout/ng/inline/ng_offset_mapping_builder.h
  ${CUR_SRC_DIR}layout/ng/inline/ng_physical_line_box_fragment.cc
  #${CUR_SRC_DIR}layout/ng/inline/ng_physical_line_box_fragment.h
  ${CUR_SRC_DIR}layout/ng/inline/ng_physical_text_fragment.cc
  #${CUR_SRC_DIR}layout/ng/inline/ng_physical_text_fragment.h
  ${CUR_SRC_DIR}layout/ng/inline/ng_text_fragment.cc
  #${CUR_SRC_DIR}layout/ng/inline/ng_text_fragment.h
  ${CUR_SRC_DIR}layout/ng/inline/ng_text_fragment_builder.cc
  #${CUR_SRC_DIR}layout/ng/inline/ng_text_fragment_builder.h
  ${CUR_SRC_DIR}layout/ng/layout_box_utils.cc
  #${CUR_SRC_DIR}layout/ng/layout_box_utils.h
  ${CUR_SRC_DIR}layout/ng/layout_ng_block_flow.cc
  #${CUR_SRC_DIR}layout/ng/layout_ng_block_flow.h
  ${CUR_SRC_DIR}layout/ng/layout_ng_fieldset.cc
  #${CUR_SRC_DIR}layout/ng/layout_ng_fieldset.h
  ${CUR_SRC_DIR}layout/ng/layout_ng_flexible_box.cc
  #${CUR_SRC_DIR}layout/ng/layout_ng_flexible_box.h
  ${CUR_SRC_DIR}layout/ng/layout_ng_mixin.cc
  #${CUR_SRC_DIR}layout/ng/layout_ng_mixin.h
  ${CUR_SRC_DIR}layout/ng/layout_ng_table_caption.cc
  #${CUR_SRC_DIR}layout/ng/layout_ng_table_caption.h
  ${CUR_SRC_DIR}layout/ng/layout_ng_table_cell.cc
  #${CUR_SRC_DIR}layout/ng/layout_ng_table_cell.h
  #${CUR_SRC_DIR}layout/ng/legacy_layout_tree_walking.h
  ${CUR_SRC_DIR}layout/ng/list/layout_ng_inside_list_marker.cc
  #${CUR_SRC_DIR}layout/ng/list/layout_ng_inside_list_marker.h
  ${CUR_SRC_DIR}layout/ng/list/layout_ng_list_item.cc
  #${CUR_SRC_DIR}layout/ng/list/layout_ng_list_item.h
  ${CUR_SRC_DIR}layout/ng/list/layout_ng_list_marker.cc
  #${CUR_SRC_DIR}layout/ng/list/layout_ng_list_marker.h
  ${CUR_SRC_DIR}layout/ng/list/layout_ng_list_marker_image.cc
  #${CUR_SRC_DIR}layout/ng/list/layout_ng_list_marker_image.h
  ${CUR_SRC_DIR}layout/ng/list/ng_unpositioned_list_marker.cc
  #${CUR_SRC_DIR}layout/ng/list/ng_unpositioned_list_marker.h
  ${CUR_SRC_DIR}layout/ng/ng_absolute_utils.cc
  #${CUR_SRC_DIR}layout/ng/ng_absolute_utils.h
  ${CUR_SRC_DIR}layout/ng/ng_block_break_token.cc
  #${CUR_SRC_DIR}layout/ng/ng_block_break_token.h
  ${CUR_SRC_DIR}layout/ng/ng_block_child_iterator.cc
  #${CUR_SRC_DIR}layout/ng/ng_block_child_iterator.h
  ${CUR_SRC_DIR}layout/ng/ng_block_layout_algorithm.cc
  #${CUR_SRC_DIR}layout/ng/ng_block_layout_algorithm.h
  ${CUR_SRC_DIR}layout/ng/ng_block_node.cc
  #${CUR_SRC_DIR}layout/ng/ng_block_node.h
  ${CUR_SRC_DIR}layout/ng/ng_box_fragment.cc
  #${CUR_SRC_DIR}layout/ng/ng_box_fragment.h
  ${CUR_SRC_DIR}layout/ng/ng_box_fragment_builder.cc
  #${CUR_SRC_DIR}layout/ng/ng_box_fragment_builder.h
  ${CUR_SRC_DIR}layout/ng/ng_break_token.cc
  #${CUR_SRC_DIR}layout/ng/ng_break_token.h
  ${CUR_SRC_DIR}layout/ng/ng_column_layout_algorithm.cc
  #${CUR_SRC_DIR}layout/ng/ng_column_layout_algorithm.h
  ${CUR_SRC_DIR}layout/ng/ng_constraint_space.cc
  #${CUR_SRC_DIR}layout/ng/ng_constraint_space.h
  ${CUR_SRC_DIR}layout/ng/ng_constraint_space_builder.cc
  #${CUR_SRC_DIR}layout/ng/ng_constraint_space_builder.h
  ${CUR_SRC_DIR}layout/ng/ng_container_fragment_builder.cc
  #${CUR_SRC_DIR}layout/ng/ng_container_fragment_builder.h
  ${CUR_SRC_DIR}layout/ng/ng_fieldset_layout_algorithm.cc
  #${CUR_SRC_DIR}layout/ng/ng_fieldset_layout_algorithm.h
  ${CUR_SRC_DIR}layout/ng/ng_flex_layout_algorithm.cc
  #${CUR_SRC_DIR}layout/ng/ng_flex_layout_algorithm.h
  ${CUR_SRC_DIR}layout/ng/ng_floats_utils.cc
  #${CUR_SRC_DIR}layout/ng/ng_floats_utils.h
  #${CUR_SRC_DIR}layout/ng/ng_fragment.h
  #${CUR_SRC_DIR}layout/ng/ng_fragment_builder.h
  ${CUR_SRC_DIR}layout/ng/ng_fragmentation_utils.cc
  #${CUR_SRC_DIR}layout/ng/ng_fragmentation_utils.h
  #${CUR_SRC_DIR}layout/ng/ng_layout_algorithm.h
  ${CUR_SRC_DIR}layout/ng/ng_layout_input_node.cc
  #${CUR_SRC_DIR}layout/ng/ng_layout_input_node.h
  ${CUR_SRC_DIR}layout/ng/ng_layout_result.cc
  #${CUR_SRC_DIR}layout/ng/ng_layout_result.h
  ${CUR_SRC_DIR}layout/ng/ng_layout_utils.cc
  #${CUR_SRC_DIR}layout/ng/ng_layout_utils.h
  ${CUR_SRC_DIR}layout/ng/ng_length_utils.cc
  #${CUR_SRC_DIR}layout/ng/ng_length_utils.h
  #${CUR_SRC_DIR}layout/ng/ng_link.h
  ${CUR_SRC_DIR}layout/ng/ng_out_of_flow_layout_part.cc
  #${CUR_SRC_DIR}layout/ng/ng_out_of_flow_layout_part.h
  #${CUR_SRC_DIR}layout/ng/ng_out_of_flow_positioned_descendant.h
  #${CUR_SRC_DIR}layout/ng/ng_outline_type.h
  ${CUR_SRC_DIR}layout/ng/ng_outline_utils.cc
  #${CUR_SRC_DIR}layout/ng/ng_outline_utils.h
  ${CUR_SRC_DIR}layout/ng/ng_page_layout_algorithm.cc
  #${CUR_SRC_DIR}layout/ng/ng_page_layout_algorithm.h
  ${CUR_SRC_DIR}layout/ng/ng_physical_box_fragment.cc
  #${CUR_SRC_DIR}layout/ng/ng_physical_box_fragment.h
  ${CUR_SRC_DIR}layout/ng/ng_physical_container_fragment.cc
  #${CUR_SRC_DIR}layout/ng/ng_physical_container_fragment.h
  ${CUR_SRC_DIR}layout/ng/ng_physical_fragment.cc
  #${CUR_SRC_DIR}layout/ng/ng_physical_fragment.h
  #${CUR_SRC_DIR}layout/ng/ng_positioned_float.h
  ${CUR_SRC_DIR}layout/ng/ng_relative_utils.cc
  #${CUR_SRC_DIR}layout/ng/ng_relative_utils.h
  ${CUR_SRC_DIR}layout/ng/ng_space_utils.cc
  #${CUR_SRC_DIR}layout/ng/ng_space_utils.h
  ${CUR_SRC_DIR}layout/ng/ng_text_decoration_offset.cc
  #${CUR_SRC_DIR}layout/ng/ng_text_decoration_offset.h
  #${CUR_SRC_DIR}layout/ng/ng_unpositioned_float.h
  ${CUR_SRC_DIR}layout/order_iterator.cc
  #${CUR_SRC_DIR}layout/order_iterator.h
  #${CUR_SRC_DIR}layout/overflow_model.h
  ${CUR_SRC_DIR}layout/pointer_events_hit_rules.cc
  #${CUR_SRC_DIR}layout/pointer_events_hit_rules.h
  ${CUR_SRC_DIR}layout/scroll_anchor.cc
  #${CUR_SRC_DIR}layout/scroll_anchor.h
  ${CUR_SRC_DIR}layout/shapes/box_shape.cc
  #${CUR_SRC_DIR}layout/shapes/box_shape.h
  ${CUR_SRC_DIR}layout/shapes/polygon_shape.cc
  #${CUR_SRC_DIR}layout/shapes/polygon_shape.h
  ${CUR_SRC_DIR}layout/shapes/raster_shape.cc
  #${CUR_SRC_DIR}layout/shapes/raster_shape.h
  ${CUR_SRC_DIR}layout/shapes/rectangle_shape.cc
  #${CUR_SRC_DIR}layout/shapes/rectangle_shape.h
  ${CUR_SRC_DIR}layout/shapes/shape.cc
  #${CUR_SRC_DIR}layout/shapes/shape.h
  #${CUR_SRC_DIR}layout/shapes/shape_interval.h
  ${CUR_SRC_DIR}layout/shapes/shape_outside_info.cc
  #${CUR_SRC_DIR}layout/shapes/shape_outside_info.h
  ${CUR_SRC_DIR}layout/subtree_layout_scope.cc
  #${CUR_SRC_DIR}layout/subtree_layout_scope.h
  ${CUR_SRC_DIR}layout/svg/line/svg_inline_flow_box.cc
  #${CUR_SRC_DIR}layout/svg/line/svg_inline_flow_box.h
  ${CUR_SRC_DIR}layout/svg/line/svg_inline_text_box.cc
  #${CUR_SRC_DIR}layout/svg/line/svg_inline_text_box.h
  ${CUR_SRC_DIR}layout/svg/line/svg_root_inline_box.cc
  #${CUR_SRC_DIR}layout/svg/line/svg_root_inline_box.h
  ${CUR_SRC_DIR}layout/table_grid_cell.cc
  #${CUR_SRC_DIR}layout/table_grid_cell.h
  #${CUR_SRC_DIR}layout/table_layout_algorithm.h
  ${CUR_SRC_DIR}layout/table_layout_algorithm_auto.cc
  #${CUR_SRC_DIR}layout/table_layout_algorithm_auto.h
  ${CUR_SRC_DIR}layout/table_layout_algorithm_fixed.cc
  #${CUR_SRC_DIR}layout/table_layout_algorithm_fixed.h
  ${CUR_SRC_DIR}layout/text_autosizer.cc
  #${CUR_SRC_DIR}layout/text_autosizer.h
  ${CUR_SRC_DIR}layout/text_decoration_offset.cc
  #${CUR_SRC_DIR}layout/text_decoration_offset.h
  ${CUR_SRC_DIR}layout/text_decoration_offset_base.cc
  #${CUR_SRC_DIR}layout/text_decoration_offset_base.h
  ${CUR_SRC_DIR}layout/text_run_constructor.cc
  #${CUR_SRC_DIR}layout/text_run_constructor.h
  #${CUR_SRC_DIR}layout/theme_types.h
  ${CUR_SRC_DIR}layout/traced_layout_object.cc
  #${CUR_SRC_DIR}layout/traced_layout_object.h
  #${CUR_SRC_DIR}layout/vertical_position_cache.h
  ${CUR_SRC_DIR}layout/view_fragmentation_context.cc
  #${CUR_SRC_DIR}layout/view_fragmentation_context.h
  #
  #if (is_win) {
  #  sources += [
  #    "layout_theme_font_provider_win.cc
  #    "layout_theme_win.cc
  #    "layout_theme_win.h
  #    "web_font_rendering_win.cc
  #  ]
  #} else {  # Not Windows.
  #  sources += [ "layout_theme_font_provider_default.cc" ]
  #}
  #
  #if (is_linux) {
  #  sources += [
  #    "layout_theme_linux.cc
  #    "layout_theme_linux.h
  #  ]
  #}
  #
  #if (is_android) {
  #  if (notouch_build) {
  #    sources += [
  #      "layout_theme_touchless.cc
  #      "layout_theme_touchless.h
  #    ]
  #  } else {
  #    sources += [
  #      "layout_theme_android.cc
  #      "layout_theme_android.h
  #    ]
  #  }
  #}
  #
  #if (is_fuchsia) {
  #  sources += [ "layout_theme_fuchsia.cc" ]
  #}
)

list(APPEND BLINK_RENDERER_CORE_LOADER_SOURCES
  ${CUR_SRC_DIR}loader/alternate_signed_exchange_resource_info.cc
  #${CUR_SRC_DIR}loader/alternate_signed_exchange_resource_info.h
  ${CUR_SRC_DIR}loader/appcache/application_cache.cc
  #${CUR_SRC_DIR}loader/appcache/application_cache.h
  ${CUR_SRC_DIR}loader/appcache/application_cache_host.cc
  #${CUR_SRC_DIR}loader/appcache/application_cache_host.h
  ${CUR_SRC_DIR}loader/base_fetch_context.cc
  #${CUR_SRC_DIR}loader/base_fetch_context.h
  ${CUR_SRC_DIR}loader/cookie_jar.cc
  #${CUR_SRC_DIR}loader/cookie_jar.h
  ${CUR_SRC_DIR}loader/document_load_timing.cc
  #${CUR_SRC_DIR}loader/document_load_timing.h
  ${CUR_SRC_DIR}loader/document_loader.cc
  #${CUR_SRC_DIR}loader/document_loader.h
  ${CUR_SRC_DIR}loader/empty_clients.cc
  #${CUR_SRC_DIR}loader/empty_clients.h
  ${CUR_SRC_DIR}loader/form_submission.cc
  #${CUR_SRC_DIR}loader/form_submission.h
  ${CUR_SRC_DIR}loader/frame_fetch_context.cc
  #${CUR_SRC_DIR}loader/frame_fetch_context.h
  ${CUR_SRC_DIR}loader/frame_load_request.cc
  #${CUR_SRC_DIR}loader/frame_load_request.h
  ${CUR_SRC_DIR}loader/frame_loader.cc
  #${CUR_SRC_DIR}loader/frame_loader.h
  ${CUR_SRC_DIR}loader/frame_loader_state_machine.cc
  #${CUR_SRC_DIR}loader/frame_loader_state_machine.h
  #${CUR_SRC_DIR}loader/frame_loader_types.h
  ${CUR_SRC_DIR}loader/frame_or_imported_document.cc
  #${CUR_SRC_DIR}loader/frame_or_imported_document.h
  ${CUR_SRC_DIR}loader/frame_resource_fetcher_properties.cc
  #${CUR_SRC_DIR}loader/frame_resource_fetcher_properties.h
  ${CUR_SRC_DIR}loader/history_item.cc
  #${CUR_SRC_DIR}loader/history_item.h
  ${CUR_SRC_DIR}loader/http_equiv.cc
  #${CUR_SRC_DIR}loader/http_equiv.h
  ${CUR_SRC_DIR}loader/http_refresh_scheduler.cc
  #${CUR_SRC_DIR}loader/http_refresh_scheduler.h
  ${CUR_SRC_DIR}loader/idleness_detector.cc
  #${CUR_SRC_DIR}loader/idleness_detector.h
  ${CUR_SRC_DIR}loader/image_loader.cc
  #${CUR_SRC_DIR}loader/image_loader.h
  ${CUR_SRC_DIR}loader/importance_attribute.cc
  #${CUR_SRC_DIR}loader/importance_attribute.h
  ${CUR_SRC_DIR}loader/interactive_detector.cc
  #${CUR_SRC_DIR}loader/interactive_detector.h
  ${CUR_SRC_DIR}loader/link_load_parameters.cc
  #${CUR_SRC_DIR}loader/link_load_parameters.h
  ${CUR_SRC_DIR}loader/link_loader.cc
  #${CUR_SRC_DIR}loader/link_loader.h
  #${CUR_SRC_DIR}loader/link_loader_client.h
  ${CUR_SRC_DIR}loader/loader_factory_for_frame.cc
  #${CUR_SRC_DIR}loader/loader_factory_for_frame.h
  ${CUR_SRC_DIR}loader/loader_factory_for_worker.cc
  #${CUR_SRC_DIR}loader/loader_factory_for_worker.h
  ${CUR_SRC_DIR}loader/long_task_detector.cc
  #${CUR_SRC_DIR}loader/long_task_detector.h
  ${CUR_SRC_DIR}loader/mixed_content_checker.cc
  #${CUR_SRC_DIR}loader/mixed_content_checker.h
  ${CUR_SRC_DIR}loader/modulescript/document_module_script_fetcher.cc
  #${CUR_SRC_DIR}loader/modulescript/document_module_script_fetcher.h
  ${CUR_SRC_DIR}loader/modulescript/installed_service_worker_module_script_fetcher.cc
  #${CUR_SRC_DIR}loader/modulescript/installed_service_worker_module_script_fetcher.h
  #${CUR_SRC_DIR}loader/modulescript/module_script_creation_params.h
  #${CUR_SRC_DIR}loader/modulescript/module_script_fetch_request.h
  ${CUR_SRC_DIR}loader/modulescript/module_script_fetcher.cc
  #${CUR_SRC_DIR}loader/modulescript/module_script_fetcher.h
  ${CUR_SRC_DIR}loader/modulescript/module_script_loader.cc
  #${CUR_SRC_DIR}loader/modulescript/module_script_loader.h
  #${CUR_SRC_DIR}loader/modulescript/module_script_loader_client.h
  ${CUR_SRC_DIR}loader/modulescript/module_script_loader_registry.cc
  #${CUR_SRC_DIR}loader/modulescript/module_script_loader_registry.h
  ${CUR_SRC_DIR}loader/modulescript/module_tree_linker.cc
  #${CUR_SRC_DIR}loader/modulescript/module_tree_linker.h
  ${CUR_SRC_DIR}loader/modulescript/module_tree_linker_registry.cc
  #${CUR_SRC_DIR}loader/modulescript/module_tree_linker_registry.h
  ${CUR_SRC_DIR}loader/modulescript/worker_module_script_fetcher.cc
  #${CUR_SRC_DIR}loader/modulescript/worker_module_script_fetcher.h
  ${CUR_SRC_DIR}loader/modulescript/worklet_module_script_fetcher.cc
  #${CUR_SRC_DIR}loader/modulescript/worklet_module_script_fetcher.h
  ${CUR_SRC_DIR}loader/navigation_policy.cc
  #${CUR_SRC_DIR}loader/navigation_policy.h
  ${CUR_SRC_DIR}loader/ping_loader.cc
  #${CUR_SRC_DIR}loader/ping_loader.h
  ${CUR_SRC_DIR}loader/preload_helper.cc
  #${CUR_SRC_DIR}loader/preload_helper.h
  ${CUR_SRC_DIR}loader/prerenderer_client.cc
  #${CUR_SRC_DIR}loader/prerenderer_client.h
  ${CUR_SRC_DIR}loader/previews_resource_loading_hints.cc
  #${CUR_SRC_DIR}loader/previews_resource_loading_hints.h
  ${CUR_SRC_DIR}loader/previews_resource_loading_hints_receiver_impl.cc
  #${CUR_SRC_DIR}loader/previews_resource_loading_hints_receiver_impl.h
  ${CUR_SRC_DIR}loader/private/frame_client_hints_preferences_context.cc
  #${CUR_SRC_DIR}loader/private/frame_client_hints_preferences_context.h
  ${CUR_SRC_DIR}loader/private/prerender_handle.cc
  #${CUR_SRC_DIR}loader/private/prerender_handle.h
  ${CUR_SRC_DIR}loader/progress_tracker.cc
  #${CUR_SRC_DIR}loader/progress_tracker.h
  ${CUR_SRC_DIR}loader/resource/css_style_sheet_resource.cc
  #${CUR_SRC_DIR}loader/resource/css_style_sheet_resource.h
  ${CUR_SRC_DIR}loader/resource/document_resource.cc
  #${CUR_SRC_DIR}loader/resource/document_resource.h
  ${CUR_SRC_DIR}loader/resource/font_resource.cc
  #${CUR_SRC_DIR}loader/resource/font_resource.h
  ${CUR_SRC_DIR}loader/resource/image_resource.cc
  #${CUR_SRC_DIR}loader/resource/image_resource.h
  ${CUR_SRC_DIR}loader/resource/image_resource_content.cc
  #${CUR_SRC_DIR}loader/resource/image_resource_content.h
  #${CUR_SRC_DIR}loader/resource/image_resource_info.h
  #${CUR_SRC_DIR}loader/resource/image_resource_observer.h
  ${CUR_SRC_DIR}loader/resource/link_fetch_resource.cc
  #${CUR_SRC_DIR}loader/resource/link_fetch_resource.h
  ${CUR_SRC_DIR}loader/resource/multipart_image_resource_parser.cc
  #${CUR_SRC_DIR}loader/resource/multipart_image_resource_parser.h
  ${CUR_SRC_DIR}loader/resource/script_resource.cc
  #${CUR_SRC_DIR}loader/resource/script_resource.h
  ${CUR_SRC_DIR}loader/resource/text_resource.cc
  #${CUR_SRC_DIR}loader/resource/text_resource.h
  ${CUR_SRC_DIR}loader/resource/xsl_style_sheet_resource.cc
  #${CUR_SRC_DIR}loader/resource/xsl_style_sheet_resource.h
  ${CUR_SRC_DIR}loader/resource_load_observer_for_frame.cc
  #${CUR_SRC_DIR}loader/resource_load_observer_for_frame.h
  ${CUR_SRC_DIR}loader/resource_load_observer_for_worker.cc
  #${CUR_SRC_DIR}loader/resource_load_observer_for_worker.h
  ${CUR_SRC_DIR}loader/subresource_filter.cc
  #${CUR_SRC_DIR}loader/subresource_filter.h
  ${CUR_SRC_DIR}loader/subresource_integrity_helper.cc
  #${CUR_SRC_DIR}loader/subresource_integrity_helper.h
  ${CUR_SRC_DIR}loader/text_resource_decoder_builder.cc
  #${CUR_SRC_DIR}loader/text_resource_decoder_builder.h
  ${CUR_SRC_DIR}loader/text_track_loader.cc
  #${CUR_SRC_DIR}loader/text_track_loader.h
  ${CUR_SRC_DIR}loader/threadable_loader.cc
  #${CUR_SRC_DIR}loader/threadable_loader.h
  #${CUR_SRC_DIR}loader/threadable_loader_client.h
  ${CUR_SRC_DIR}loader/worker_fetch_context.cc
  #${CUR_SRC_DIR}loader/worker_fetch_context.h
  ${CUR_SRC_DIR}loader/worker_resource_fetcher_properties.cc
  #${CUR_SRC_DIR}loader/worker_resource_fetcher_properties.h
  ${CUR_SRC_DIR}loader/worker_resource_timing_notifier_impl.cc
  #${CUR_SRC_DIR}loader/worker_resource_timing_notifier_impl.h
)

list(APPEND BLINK_RENDERER_MESSAGING_SOURCES
  ${CUR_SRC_DIR}messaging/blink_cloneable_message.cc
  #${CUR_SRC_DIR}messaging/blink_cloneable_message.h
  ${CUR_SRC_DIR}messaging/blink_cloneable_message_struct_traits.cc
  #${CUR_SRC_DIR}messaging/blink_cloneable_message_struct_traits.h
  ${CUR_SRC_DIR}messaging/blink_transferable_message.cc
  #${CUR_SRC_DIR}messaging/blink_transferable_message.h
  ${CUR_SRC_DIR}messaging/blink_transferable_message_struct_traits.cc
  #${CUR_SRC_DIR}messaging/blink_transferable_message_struct_traits.h
  ${CUR_SRC_DIR}messaging/message_channel.cc
  #${CUR_SRC_DIR}messaging/message_channel.h
  ${CUR_SRC_DIR}messaging/message_port.cc
  #${CUR_SRC_DIR}messaging/message_port.h
)

list(APPEND BLINK_RENDERER_MOJO_SOURCES
  ${CUR_SRC_DIR}mojo/mojo.cc
  #${CUR_SRC_DIR}mojo/mojo.h
  ${CUR_SRC_DIR}mojo/mojo_handle.cc
  #${CUR_SRC_DIR}mojo/mojo_handle.h
  ${CUR_SRC_DIR}mojo/mojo_watcher.cc
  #${CUR_SRC_DIR}mojo/mojo_watcher.h
  #${CUR_SRC_DIR}mojo/test/mojo_interface_interceptor.cc # test
  #${CUR_SRC_DIR}mojo/test/mojo_interface_interceptor.h
  #${CUR_SRC_DIR}mojo/test/mojo_interface_request_event.cc # test
  #${CUR_SRC_DIR}mojo/test/mojo_interface_request_event.h
)

list(APPEND BLINK_RENDERER_OFFSCREENCANVAS_SOURCES
  ${CUR_SRC_DIR}offscreencanvas/offscreen_canvas.cc
  #${CUR_SRC_DIR}offscreencanvas/offscreen_canvas.h
)

list(APPEND BLINK_RENDERER_PAGE_SOURCES
  ${CUR_SRC_DIR}/page/autoscroll_controller.cc
  #${CUR_SRC_DIR}/page/autoscroll_controller.h
  ${CUR_SRC_DIR}/page/chrome_client.cc
  #${CUR_SRC_DIR}/page/chrome_client.h
  ${CUR_SRC_DIR}/page/chrome_client_impl.cc
  #${CUR_SRC_DIR}/page/chrome_client_impl.h
  ${CUR_SRC_DIR}/page/context_menu_controller.cc
  #${CUR_SRC_DIR}/page/context_menu_controller.h
  #${CUR_SRC_DIR}/page/context_menu_provider.h
  ${CUR_SRC_DIR}/page/create_window.cc
  #${CUR_SRC_DIR}/page/create_window.h
  #${CUR_SRC_DIR}/page/drag_actions.h
  ${CUR_SRC_DIR}/page/drag_controller.cc
  #${CUR_SRC_DIR}/page/drag_controller.h
  ${CUR_SRC_DIR}/page/drag_data.cc
  #${CUR_SRC_DIR}/page/drag_data.h
  ${CUR_SRC_DIR}/page/drag_image.cc
  #${CUR_SRC_DIR}/page/drag_image.h
  #${CUR_SRC_DIR}/page/drag_state.h
  #${CUR_SRC_DIR}/page/event_with_hit_test_results.h
  ${CUR_SRC_DIR}/page/focus_changed_observer.cc
  #${CUR_SRC_DIR}/page/focus_changed_observer.h
  ${CUR_SRC_DIR}/page/focus_controller.cc
  #${CUR_SRC_DIR}/page/focus_controller.h
  ${CUR_SRC_DIR}/page/frame_tree.cc
  #${CUR_SRC_DIR}/page/frame_tree.h
  ${CUR_SRC_DIR}/page/page.cc
  #${CUR_SRC_DIR}/page/page.h
  ${CUR_SRC_DIR}/page/page_animator.cc
  #${CUR_SRC_DIR}/page/page_animator.h
  ${CUR_SRC_DIR}/page/page_hidden_state.cc
  #${CUR_SRC_DIR}/page/page_hidden_state.h
  #${CUR_SRC_DIR}/page/page_popup.h
  ${CUR_SRC_DIR}/page/page_popup_client.cc
  #${CUR_SRC_DIR}/page/page_popup_client.h
  ${CUR_SRC_DIR}/page/page_popup_controller.cc
  #${CUR_SRC_DIR}/page/page_popup_controller.h
  ${CUR_SRC_DIR}/page/page_popup_supplement.cc
  #${CUR_SRC_DIR}/page/page_popup_supplement.h
  ${CUR_SRC_DIR}/page/page_visibility_notifier.cc
  #${CUR_SRC_DIR}/page/page_visibility_notifier.h
  #${CUR_SRC_DIR}/page/page_visibility_observer.h
  ${CUR_SRC_DIR}/page/page_widget_delegate.cc
  #${CUR_SRC_DIR}/page/page_widget_delegate.h
  ${CUR_SRC_DIR}/page/plugin_data.cc
  #${CUR_SRC_DIR}/page/plugin_data.h
  ${CUR_SRC_DIR}/page/plugin_script_forbidden_scope.cc
  #${CUR_SRC_DIR}/page/plugin_script_forbidden_scope.h
  ${CUR_SRC_DIR}/page/plugins_changed_observer.cc
  #${CUR_SRC_DIR}/page/plugins_changed_observer.h
  ${CUR_SRC_DIR}/page/pointer_lock_controller.cc
  #${CUR_SRC_DIR}/page/pointer_lock_controller.h
  #${CUR_SRC_DIR}/page/popup_opening_observer.h
  ${CUR_SRC_DIR}/page/print_context.cc
  #${CUR_SRC_DIR}/page/print_context.h
  ${CUR_SRC_DIR}/page/scoped_page_pauser.cc
  #${CUR_SRC_DIR}/page/scoped_page_pauser.h
  ${CUR_SRC_DIR}/page/scrolling/element_fragment_anchor.cc
  #${CUR_SRC_DIR}/page/scrolling/element_fragment_anchor.h
  ${CUR_SRC_DIR}/page/scrolling/fragment_anchor.cc
  #${CUR_SRC_DIR}/page/scrolling/fragment_anchor.h
  ${CUR_SRC_DIR}/page/scrolling/overscroll_controller.cc
  #${CUR_SRC_DIR}/page/scrolling/overscroll_controller.h
  ${CUR_SRC_DIR}/page/scrolling/root_scroller_controller.cc
  #${CUR_SRC_DIR}/page/scrolling/root_scroller_controller.h
  ${CUR_SRC_DIR}/page/scrolling/root_scroller_util.cc
  #${CUR_SRC_DIR}/page/scrolling/root_scroller_util.h
  ${CUR_SRC_DIR}/page/scrolling/scroll_customization_callbacks.cc
  #${CUR_SRC_DIR}/page/scrolling/scroll_customization_callbacks.h
  ${CUR_SRC_DIR}/page/scrolling/scroll_state.cc
  #${CUR_SRC_DIR}/page/scrolling/scroll_state.h
  ${CUR_SRC_DIR}/page/scrolling/scroll_state_callback.cc
  #${CUR_SRC_DIR}/page/scrolling/scroll_state_callback.h
  ${CUR_SRC_DIR}/page/scrolling/scrolling_coordinator.cc
  #${CUR_SRC_DIR}/page/scrolling/scrolling_coordinator.h
  ${CUR_SRC_DIR}/page/scrolling/scrolling_coordinator_context.cc
  #${CUR_SRC_DIR}/page/scrolling/scrolling_coordinator_context.h
  ${CUR_SRC_DIR}/page/scrolling/snap_coordinator.cc
  #${CUR_SRC_DIR}/page/scrolling/snap_coordinator.h
  ${CUR_SRC_DIR}/page/scrolling/sticky_position_scrolling_constraints.cc
  #${CUR_SRC_DIR}/page/scrolling/sticky_position_scrolling_constraints.h
  ${CUR_SRC_DIR}/page/scrolling/text_fragment_anchor.cc
  #${CUR_SRC_DIR}/page/scrolling/text_fragment_anchor.h
  ${CUR_SRC_DIR}/page/scrolling/text_fragment_finder.cc
  #${CUR_SRC_DIR}/page/scrolling/text_fragment_finder.h
  ${CUR_SRC_DIR}/page/scrolling/text_fragment_selector.cc
  #${CUR_SRC_DIR}/page/scrolling/text_fragment_selector.h
  ${CUR_SRC_DIR}/page/scrolling/top_document_root_scroller_controller.cc
  #${CUR_SRC_DIR}/page/scrolling/top_document_root_scroller_controller.h
  ${CUR_SRC_DIR}/page/scrolling/viewport_scroll_callback.cc
  #${CUR_SRC_DIR}/page/scrolling/viewport_scroll_callback.h
  ${CUR_SRC_DIR}/page/slot_scoped_traversal.cc
  #${CUR_SRC_DIR}/page/slot_scoped_traversal.h
  ${CUR_SRC_DIR}/page/spatial_navigation.cc
  #${CUR_SRC_DIR}/page/spatial_navigation.h
  ${CUR_SRC_DIR}/page/spatial_navigation_controller.cc
  #${CUR_SRC_DIR}/page/spatial_navigation_controller.h
  ${CUR_SRC_DIR}/page/touch_adjustment.cc
  #${CUR_SRC_DIR}/page/touch_adjustment.h
  #${CUR_SRC_DIR}/page/validation_message_client.h
  ${CUR_SRC_DIR}/page/validation_message_client_impl.cc
  #${CUR_SRC_DIR}/page/validation_message_client_impl.h
  ${CUR_SRC_DIR}/page/validation_message_overlay_delegate.cc
  #${CUR_SRC_DIR}/page/validation_message_overlay_delegate.h
  ${CUR_SRC_DIR}/page/viewport_description.cc
  #${CUR_SRC_DIR}/page/viewport_description.h
)

list(APPEND BLINK_RENDERER_PROBE_SOURCES
  # action("instrumentation_probes")
  # $blink_core_output_dir/core_probes_impl.cc
  ${CUR_SRC_DIR}/probe/core_probes.cc
  #${CUR_SRC_DIR}/probe/core_probes.h
)

list(APPEND BLINK_RENDERER_RESIZE_OBSERVER_SOURCES
  ${CUR_SRC_DIR}/resize_observer/resize_observation.cc
  #${CUR_SRC_DIR}/resize_observer/resize_observation.h
  ${CUR_SRC_DIR}/resize_observer/resize_observer.cc
  #${CUR_SRC_DIR}/resize_observer/resize_observer.h
  ${CUR_SRC_DIR}/resize_observer/resize_observer_controller.cc
  #${CUR_SRC_DIR}/resize_observer/resize_observer_controller.h
  ${CUR_SRC_DIR}/resize_observer/resize_observer_entry.cc
  #${CUR_SRC_DIR}/resize_observer/resize_observer_entry.h
)

list(APPEND BLINK_RENDERER_SCHEDULER_SOURCES
  # tests for the Blink Scheduler
)

list(APPEND BLINK_RENDERER_SCRIPT_SOURCES
  # manage the `<script>` elements and
  # loading and execution of scripts in Blink.
)

list(APPEND BLINK_RENDERER_SCROLL_SOURCES
  #${CUR_SRC_DIR}/scroll/ns_scroller_imp_details.h
  ${CUR_SRC_DIR}/scroll/programmatic_scroll_animator.cc
  #${CUR_SRC_DIR}/scroll/programmatic_scroll_animator.h
  ${CUR_SRC_DIR}/scroll/scroll_alignment.cc
  #${CUR_SRC_DIR}/scroll/scroll_alignment.h
  ${CUR_SRC_DIR}/scroll/scroll_animator.cc
  #${CUR_SRC_DIR}/scroll/scroll_animator.h
  ${CUR_SRC_DIR}/scroll/scroll_animator_base.cc
  #${CUR_SRC_DIR}/scroll/scroll_animator_base.h
  ${CUR_SRC_DIR}/scroll/scroll_animator_compositor_coordinator.cc
  #${CUR_SRC_DIR}/scroll/scroll_animator_compositor_coordinator.h
  #${CUR_SRC_DIR}/scroll/scroll_animator_mac.h
  ## TODO ## ${CUR_SRC_DIR}/scroll/scroll_animator_mac.mm",
  ${CUR_SRC_DIR}/scroll/scroll_customization.cc
  #${CUR_SRC_DIR}/scroll/scroll_customization.h
  #${CUR_SRC_DIR}/scroll/scroll_state_data.h
  #${CUR_SRC_DIR}/scroll/scroll_types.h
  ${CUR_SRC_DIR}/scroll/scrollable_area.cc
  #${CUR_SRC_DIR}/scroll/scrollable_area.h
  ${CUR_SRC_DIR}/scroll/scrollbar.cc
  #${CUR_SRC_DIR}/scroll/scrollbar.h
  ${CUR_SRC_DIR}/scroll/scrollbar_layer_delegate.cc
  #${CUR_SRC_DIR}/scroll/scrollbar_layer_delegate.h
  #${CUR_SRC_DIR}/scroll/scrollbar_test_suite.h
  ${CUR_SRC_DIR}/scroll/scrollbar_theme.cc
  #${CUR_SRC_DIR}/scroll/scrollbar_theme.h
  ${CUR_SRC_DIR}/scroll/scrollbar_theme_android.cc
  #${CUR_SRC_DIR}/scroll/scrollbar_theme_mac.h
  ## TODO ## ${CUR_SRC_DIR}/scroll/scrollbar_theme_mac.mm",
  # ${CUR_SRC_DIR}/scroll/scrollbar_theme_mock.cc # tests
  #${CUR_SRC_DIR}/scroll/scrollbar_theme_mock.h
  ${CUR_SRC_DIR}/scroll/scrollbar_theme_overlay.cc
  #${CUR_SRC_DIR}/scroll/scrollbar_theme_overlay.h
  # ${CUR_SRC_DIR}/scroll/scrollbar_theme_overlay_mock.h
  ${CUR_SRC_DIR}/scroll/smooth_scroll_sequencer.cc
  #${CUR_SRC_DIR}/scroll/smooth_scroll_sequencer.h
  ${CUR_SRC_DIR}/scroll/web_scroll_into_view_params.cc
  #
  #if (is_mac) {
  #  sources -= [
  #    "scroll_animator.cc
  #    "scroll_animator.h
  #  ]
  #  sources += [ "web_scrollbar_theme.mm" ]
  #}
  #
  #if (use_default_render_theme) {
  #  sources += [
  #    "scrollbar_theme_aura.cc
  #    "scrollbar_theme_aura.h
  #  ]
  #}
)

list(APPEND BLINK_RENDERER_STREAMS_SOURCES
  # off by default
)

list(APPEND BLINK_RENDERER_STYLE_SOURCES
  ${CUR_SRC_DIR}style/applied_text_decoration.cc
  #${CUR_SRC_DIR}style/applied_text_decoration.h
  #${CUR_SRC_DIR}style/applied_text_decoration_list.h
  ${CUR_SRC_DIR}style/basic_shapes.cc
  #${CUR_SRC_DIR}style/basic_shapes.h
  ${CUR_SRC_DIR}style/border_edge.cc
  #${CUR_SRC_DIR}style/border_edge.h
  #${CUR_SRC_DIR}style/border_image_length.h
  #${CUR_SRC_DIR}style/border_image_length_box.h
  #${CUR_SRC_DIR}style/border_style.h
  #${CUR_SRC_DIR}style/border_value.h
  ${CUR_SRC_DIR}style/cached_ua_style.cc
  #${CUR_SRC_DIR}style/cached_ua_style.h
  #${CUR_SRC_DIR}style/clip_path_operation.h
  ${CUR_SRC_DIR}style/computed_style.cc
  #${CUR_SRC_DIR}style/computed_style.h
  #${CUR_SRC_DIR}style/computed_style_constants.h
  ${CUR_SRC_DIR}style/content_data.cc
  #${CUR_SRC_DIR}style/content_data.h
  #${CUR_SRC_DIR}style/counter_content.h
  ${CUR_SRC_DIR}style/counter_directives.cc
  #${CUR_SRC_DIR}style/counter_directives.h
  #${CUR_SRC_DIR}style/cursor_data.h
  #${CUR_SRC_DIR}style/cursor_list.h
  #${CUR_SRC_DIR}style/data_equivalency.h
  #${CUR_SRC_DIR}style/data_ref.h
  ${CUR_SRC_DIR}style/fill_layer.cc
  #${CUR_SRC_DIR}style/fill_layer.h
  ${CUR_SRC_DIR}style/filter_operation.cc
  #${CUR_SRC_DIR}style/filter_operation.h
  ${CUR_SRC_DIR}style/filter_operations.cc
  #${CUR_SRC_DIR}style/filter_operations.h
  #${CUR_SRC_DIR}style/gap_length.h
  #${CUR_SRC_DIR}style/grid_area.h
  #${CUR_SRC_DIR}style/grid_length.h
  #${CUR_SRC_DIR}style/grid_position.h
  ${CUR_SRC_DIR}style/grid_positions_resolver.cc
  #${CUR_SRC_DIR}style/grid_positions_resolver.h
  #${CUR_SRC_DIR}style/grid_track_size.h
  #${CUR_SRC_DIR}style/member_copy.h
  #${CUR_SRC_DIR}style/named_grid_lines_map.h
  ${CUR_SRC_DIR}style/nine_piece_image.cc
  #${CUR_SRC_DIR}style/nine_piece_image.h
  #${CUR_SRC_DIR}style/ordered_named_grid_lines.h
  #${CUR_SRC_DIR}style/paint_images.h
  #${CUR_SRC_DIR}style/quad_length_value.h
  ${CUR_SRC_DIR}style/quotes_data.cc
  #${CUR_SRC_DIR}style/quotes_data.h
  ${CUR_SRC_DIR}style/reference_clip_path_operation.cc
  #${CUR_SRC_DIR}style/reference_clip_path_operation.h
  ${CUR_SRC_DIR}style/shadow_data.cc
  #${CUR_SRC_DIR}style/shadow_data.h
  ${CUR_SRC_DIR}style/shadow_list.cc
  #${CUR_SRC_DIR}style/shadow_list.h
  #${CUR_SRC_DIR}style/shape_clip_path_operation.h
  #${CUR_SRC_DIR}style/shape_value.h
  #${CUR_SRC_DIR}style/style_content_alignment_data.h
  ${CUR_SRC_DIR}style/style_difference.cc
  #${CUR_SRC_DIR}style/style_difference.h
  ${CUR_SRC_DIR}style/style_fetched_image.cc
  #${CUR_SRC_DIR}style/style_fetched_image.h
  ${CUR_SRC_DIR}style/style_fetched_image_set.cc
  #${CUR_SRC_DIR}style/style_fetched_image_set.h
  ${CUR_SRC_DIR}style/style_filter_data.cc
  #${CUR_SRC_DIR}style/style_filter_data.h
  ${CUR_SRC_DIR}style/style_generated_image.cc
  #${CUR_SRC_DIR}style/style_generated_image.h
  ${CUR_SRC_DIR}style/style_image.cc
  #${CUR_SRC_DIR}style/style_image.h
  ${CUR_SRC_DIR}style/style_inherited_variables.cc
  #${CUR_SRC_DIR}style/style_inherited_variables.h
  ${CUR_SRC_DIR}style/style_initial_data.cc
  #${CUR_SRC_DIR}style/style_initial_data.h
  #${CUR_SRC_DIR}style/style_non_inherited_variables.h
  #${CUR_SRC_DIR}style/style_offset_rotation.h
  ${CUR_SRC_DIR}style/style_path.cc
  #${CUR_SRC_DIR}style/style_path.h
  #${CUR_SRC_DIR}style/style_pending_image.h
  ${CUR_SRC_DIR}style/style_ray.cc
  #${CUR_SRC_DIR}style/style_ray.h
  #${CUR_SRC_DIR}style/style_reflection.h
  #${CUR_SRC_DIR}style/style_self_alignment_data.h
  ${CUR_SRC_DIR}style/style_variables.cc
  #${CUR_SRC_DIR}style/style_variables.h
  #${CUR_SRC_DIR}style/text_size_adjust.h
  # blink_core_sources("svg_style")
  ${CUR_SRC_DIR}style/svg_computed_style.cc
  #${CUR_SRC_DIR}style/svg_computed_style.h
  ${CUR_SRC_DIR}style/svg_computed_style_defs.cc
  #${CUR_SRC_DIR}style/svg_computed_style_defs.h
)

list(APPEND BLINK_RENDERER_SVG_SOURCES
  ${CUR_SRC_DIR}svg/animation/smil_time.cc
  ${CUR_SRC_DIR}svg/animation/smil_time.h
  ${CUR_SRC_DIR}svg/animation/smil_time_container.cc
  ${CUR_SRC_DIR}svg/animation/smil_time_container.h
  ${CUR_SRC_DIR}svg/animation/svg_smil_element.cc
  ${CUR_SRC_DIR}svg/animation/svg_smil_element.h
  ${CUR_SRC_DIR}svg/color_distance.cc
  ${CUR_SRC_DIR}svg/color_distance.h
  ${CUR_SRC_DIR}svg/gradient_attributes.h
  ${CUR_SRC_DIR}svg/graphics/dark_mode_svg_image_classifier.cc
  ${CUR_SRC_DIR}svg/graphics/dark_mode_svg_image_classifier.h
  ${CUR_SRC_DIR}svg/graphics/filters/svg_fe_image.cc
  ${CUR_SRC_DIR}svg/graphics/filters/svg_fe_image.h
  ${CUR_SRC_DIR}svg/graphics/filters/svg_filter_builder.cc
  ${CUR_SRC_DIR}svg/graphics/filters/svg_filter_builder.h
  ${CUR_SRC_DIR}svg/graphics/svg_image.cc
  ${CUR_SRC_DIR}svg/graphics/svg_image.h
  ${CUR_SRC_DIR}svg/graphics/svg_image_chrome_client.cc
  ${CUR_SRC_DIR}svg/graphics/svg_image_chrome_client.h
  ${CUR_SRC_DIR}svg/graphics/svg_image_for_container.cc
  ${CUR_SRC_DIR}svg/graphics/svg_image_for_container.h
  ${CUR_SRC_DIR}svg/linear_gradient_attributes.h
  ${CUR_SRC_DIR}svg/pattern_attributes.h
  ${CUR_SRC_DIR}svg/properties/svg_animated_property.cc
  ${CUR_SRC_DIR}svg/properties/svg_animated_property.h
  ${CUR_SRC_DIR}svg/properties/svg_list_property_helper.h
  ${CUR_SRC_DIR}svg/properties/svg_list_property_tear_off_helper.h
  ${CUR_SRC_DIR}svg/properties/svg_property.h
  ${CUR_SRC_DIR}svg/properties/svg_property_helper.h
  ${CUR_SRC_DIR}svg/properties/svg_property_info.h
  ${CUR_SRC_DIR}svg/properties/svg_property_tear_off.cc
  ${CUR_SRC_DIR}svg/properties/svg_property_tear_off.h
  ${CUR_SRC_DIR}svg/radial_gradient_attributes.h
  ${CUR_SRC_DIR}svg/svg_a_element.cc
  ${CUR_SRC_DIR}svg/svg_a_element.h
  ${CUR_SRC_DIR}svg/svg_angle.cc
  ${CUR_SRC_DIR}svg/svg_angle.h
  ${CUR_SRC_DIR}svg/svg_angle_tear_off.cc
  ${CUR_SRC_DIR}svg/svg_angle_tear_off.h
  ${CUR_SRC_DIR}svg/svg_animate_element.cc
  ${CUR_SRC_DIR}svg/svg_animate_element.h
  ${CUR_SRC_DIR}svg/svg_animate_motion_element.cc
  ${CUR_SRC_DIR}svg/svg_animate_motion_element.h
  ${CUR_SRC_DIR}svg/svg_animate_transform_element.cc
  ${CUR_SRC_DIR}svg/svg_animate_transform_element.h
  ${CUR_SRC_DIR}svg/svg_animated_angle.cc
  ${CUR_SRC_DIR}svg/svg_animated_angle.h
  ${CUR_SRC_DIR}svg/svg_animated_boolean.h
  ${CUR_SRC_DIR}svg/svg_animated_color.cc
  ${CUR_SRC_DIR}svg/svg_animated_color.h
  ${CUR_SRC_DIR}svg/svg_animated_enumeration.h
  ${CUR_SRC_DIR}svg/svg_animated_enumeration_base.cc
  ${CUR_SRC_DIR}svg/svg_animated_enumeration_base.h
  ${CUR_SRC_DIR}svg/svg_animated_href.cc
  ${CUR_SRC_DIR}svg/svg_animated_href.h
  ${CUR_SRC_DIR}svg/svg_animated_integer.cc
  ${CUR_SRC_DIR}svg/svg_animated_integer.h
  ${CUR_SRC_DIR}svg/svg_animated_integer_optional_integer.cc
  ${CUR_SRC_DIR}svg/svg_animated_integer_optional_integer.h
  ${CUR_SRC_DIR}svg/svg_animated_length.cc
  ${CUR_SRC_DIR}svg/svg_animated_length.h
  ${CUR_SRC_DIR}svg/svg_animated_length_list.h
  ${CUR_SRC_DIR}svg/svg_animated_number.cc
  ${CUR_SRC_DIR}svg/svg_animated_number.h
  ${CUR_SRC_DIR}svg/svg_animated_number_list.h
  ${CUR_SRC_DIR}svg/svg_animated_number_optional_number.cc
  ${CUR_SRC_DIR}svg/svg_animated_number_optional_number.h
  ${CUR_SRC_DIR}svg/svg_animated_path.cc
  ${CUR_SRC_DIR}svg/svg_animated_path.h
  ${CUR_SRC_DIR}svg/svg_animated_point_list.h
  ${CUR_SRC_DIR}svg/svg_animated_preserve_aspect_ratio.h
  ${CUR_SRC_DIR}svg/svg_animated_rect.h
  ${CUR_SRC_DIR}svg/svg_animated_string.cc
  ${CUR_SRC_DIR}svg/svg_animated_string.h
  ${CUR_SRC_DIR}svg/svg_animated_transform_list.h
  ${CUR_SRC_DIR}svg/svg_animation_element.cc
  ${CUR_SRC_DIR}svg/svg_animation_element.h
  ${CUR_SRC_DIR}svg/svg_boolean.cc
  ${CUR_SRC_DIR}svg/svg_boolean.h
  ${CUR_SRC_DIR}svg/svg_circle_element.cc
  ${CUR_SRC_DIR}svg/svg_circle_element.h
  ${CUR_SRC_DIR}svg/svg_clip_path_element.cc
  ${CUR_SRC_DIR}svg/svg_clip_path_element.h
  ${CUR_SRC_DIR}svg/svg_component_transfer_function_element.cc
  ${CUR_SRC_DIR}svg/svg_component_transfer_function_element.h
  ${CUR_SRC_DIR}svg/svg_defs_element.cc
  ${CUR_SRC_DIR}svg/svg_defs_element.h
  ${CUR_SRC_DIR}svg/svg_desc_element.cc
  ${CUR_SRC_DIR}svg/svg_desc_element.h
  ${CUR_SRC_DIR}svg/svg_discard_element.cc
  ${CUR_SRC_DIR}svg/svg_discard_element.h
  ${CUR_SRC_DIR}svg/svg_document_extensions.cc
  ${CUR_SRC_DIR}svg/svg_document_extensions.h
  ${CUR_SRC_DIR}svg/svg_element.cc
  ${CUR_SRC_DIR}svg/svg_element.h
  ${CUR_SRC_DIR}svg/svg_element_rare_data.cc
  ${CUR_SRC_DIR}svg/svg_element_rare_data.h
  ${CUR_SRC_DIR}svg/svg_ellipse_element.cc
  ${CUR_SRC_DIR}svg/svg_ellipse_element.h
  ${CUR_SRC_DIR}svg/svg_enumeration.cc
  ${CUR_SRC_DIR}svg/svg_enumeration.h
  ${CUR_SRC_DIR}svg/svg_enumeration_map.cc
  ${CUR_SRC_DIR}svg/svg_enumeration_map.h
  ${CUR_SRC_DIR}svg/svg_fe_blend_element.cc
  ${CUR_SRC_DIR}svg/svg_fe_blend_element.h
  ${CUR_SRC_DIR}svg/svg_fe_color_matrix_element.cc
  ${CUR_SRC_DIR}svg/svg_fe_color_matrix_element.h
  ${CUR_SRC_DIR}svg/svg_fe_component_transfer_element.cc
  ${CUR_SRC_DIR}svg/svg_fe_component_transfer_element.h
  ${CUR_SRC_DIR}svg/svg_fe_composite_element.cc
  ${CUR_SRC_DIR}svg/svg_fe_composite_element.h
  ${CUR_SRC_DIR}svg/svg_fe_convolve_matrix_element.cc
  ${CUR_SRC_DIR}svg/svg_fe_convolve_matrix_element.h
  ${CUR_SRC_DIR}svg/svg_fe_diffuse_lighting_element.cc
  ${CUR_SRC_DIR}svg/svg_fe_diffuse_lighting_element.h
  ${CUR_SRC_DIR}svg/svg_fe_displacement_map_element.cc
  ${CUR_SRC_DIR}svg/svg_fe_displacement_map_element.h
  ${CUR_SRC_DIR}svg/svg_fe_distant_light_element.cc
  ${CUR_SRC_DIR}svg/svg_fe_distant_light_element.h
  ${CUR_SRC_DIR}svg/svg_fe_drop_shadow_element.cc
  ${CUR_SRC_DIR}svg/svg_fe_drop_shadow_element.h
  ${CUR_SRC_DIR}svg/svg_fe_flood_element.cc
  ${CUR_SRC_DIR}svg/svg_fe_flood_element.h
  ${CUR_SRC_DIR}svg/svg_fe_func_a_element.cc
  ${CUR_SRC_DIR}svg/svg_fe_func_a_element.h
  ${CUR_SRC_DIR}svg/svg_fe_func_b_element.cc
  ${CUR_SRC_DIR}svg/svg_fe_func_b_element.h
  ${CUR_SRC_DIR}svg/svg_fe_func_g_element.cc
  ${CUR_SRC_DIR}svg/svg_fe_func_g_element.h
  ${CUR_SRC_DIR}svg/svg_fe_func_r_element.cc
  ${CUR_SRC_DIR}svg/svg_fe_func_r_element.h
  ${CUR_SRC_DIR}svg/svg_fe_gaussian_blur_element.cc
  ${CUR_SRC_DIR}svg/svg_fe_gaussian_blur_element.h
  ${CUR_SRC_DIR}svg/svg_fe_image_element.cc
  ${CUR_SRC_DIR}svg/svg_fe_image_element.h
  ${CUR_SRC_DIR}svg/svg_fe_light_element.cc
  ${CUR_SRC_DIR}svg/svg_fe_light_element.h
  ${CUR_SRC_DIR}svg/svg_fe_merge_element.cc
  ${CUR_SRC_DIR}svg/svg_fe_merge_element.h
  ${CUR_SRC_DIR}svg/svg_fe_merge_node_element.cc
  ${CUR_SRC_DIR}svg/svg_fe_merge_node_element.h
  ${CUR_SRC_DIR}svg/svg_fe_morphology_element.cc
  ${CUR_SRC_DIR}svg/svg_fe_morphology_element.h
  ${CUR_SRC_DIR}svg/svg_fe_offset_element.cc
  ${CUR_SRC_DIR}svg/svg_fe_offset_element.h
  ${CUR_SRC_DIR}svg/svg_fe_point_light_element.cc
  ${CUR_SRC_DIR}svg/svg_fe_point_light_element.h
  ${CUR_SRC_DIR}svg/svg_fe_specular_lighting_element.cc
  ${CUR_SRC_DIR}svg/svg_fe_specular_lighting_element.h
  ${CUR_SRC_DIR}svg/svg_fe_spot_light_element.cc
  ${CUR_SRC_DIR}svg/svg_fe_spot_light_element.h
  ${CUR_SRC_DIR}svg/svg_fe_tile_element.cc
  ${CUR_SRC_DIR}svg/svg_fe_tile_element.h
  ${CUR_SRC_DIR}svg/svg_fe_turbulence_element.cc
  ${CUR_SRC_DIR}svg/svg_fe_turbulence_element.h
  ${CUR_SRC_DIR}svg/svg_filter_element.cc
  ${CUR_SRC_DIR}svg/svg_filter_element.h
  ${CUR_SRC_DIR}svg/svg_filter_primitive_standard_attributes.cc
  ${CUR_SRC_DIR}svg/svg_filter_primitive_standard_attributes.h
  ${CUR_SRC_DIR}svg/svg_fit_to_view_box.cc
  ${CUR_SRC_DIR}svg/svg_fit_to_view_box.h
  ${CUR_SRC_DIR}svg/svg_foreign_object_element.cc
  ${CUR_SRC_DIR}svg/svg_foreign_object_element.h
  ${CUR_SRC_DIR}svg/svg_g_element.cc
  ${CUR_SRC_DIR}svg/svg_g_element.h
  ${CUR_SRC_DIR}svg/svg_geometry_element.cc
  ${CUR_SRC_DIR}svg/svg_geometry_element.h
  ${CUR_SRC_DIR}svg/svg_gradient_element.cc
  ${CUR_SRC_DIR}svg/svg_gradient_element.h
  ${CUR_SRC_DIR}svg/svg_graphics_element.cc
  ${CUR_SRC_DIR}svg/svg_graphics_element.h
  ${CUR_SRC_DIR}svg/svg_image_element.cc
  ${CUR_SRC_DIR}svg/svg_image_element.h
  ${CUR_SRC_DIR}svg/svg_image_loader.cc
  ${CUR_SRC_DIR}svg/svg_image_loader.h
  ${CUR_SRC_DIR}svg/svg_integer.cc
  ${CUR_SRC_DIR}svg/svg_integer.h
  ${CUR_SRC_DIR}svg/svg_integer_optional_integer.cc
  ${CUR_SRC_DIR}svg/svg_integer_optional_integer.h
  ${CUR_SRC_DIR}svg/svg_length.cc
  ${CUR_SRC_DIR}svg/svg_length.h
  ${CUR_SRC_DIR}svg/svg_length_context.cc
  ${CUR_SRC_DIR}svg/svg_length_context.h
  ${CUR_SRC_DIR}svg/svg_length_list.cc
  ${CUR_SRC_DIR}svg/svg_length_list.h
  ${CUR_SRC_DIR}svg/svg_length_list_tear_off.h
  ${CUR_SRC_DIR}svg/svg_length_tear_off.cc
  ${CUR_SRC_DIR}svg/svg_length_tear_off.h
  ${CUR_SRC_DIR}svg/svg_line_element.cc
  ${CUR_SRC_DIR}svg/svg_line_element.h
  ${CUR_SRC_DIR}svg/svg_linear_gradient_element.cc
  ${CUR_SRC_DIR}svg/svg_linear_gradient_element.h
  ${CUR_SRC_DIR}svg/svg_marker_element.cc
  ${CUR_SRC_DIR}svg/svg_marker_element.h
  ${CUR_SRC_DIR}svg/svg_mask_element.cc
  ${CUR_SRC_DIR}svg/svg_mask_element.h
  ${CUR_SRC_DIR}svg/svg_matrix_tear_off.cc
  ${CUR_SRC_DIR}svg/svg_matrix_tear_off.h
  ${CUR_SRC_DIR}svg/svg_metadata_element.cc
  ${CUR_SRC_DIR}svg/svg_metadata_element.h
  ${CUR_SRC_DIR}svg/svg_mpath_element.cc
  ${CUR_SRC_DIR}svg/svg_mpath_element.h
  ${CUR_SRC_DIR}svg/svg_number.cc
  ${CUR_SRC_DIR}svg/svg_number.h
  ${CUR_SRC_DIR}svg/svg_number_list.cc
  ${CUR_SRC_DIR}svg/svg_number_list.h
  ${CUR_SRC_DIR}svg/svg_number_list_tear_off.h
  ${CUR_SRC_DIR}svg/svg_number_optional_number.cc
  ${CUR_SRC_DIR}svg/svg_number_optional_number.h
  ${CUR_SRC_DIR}svg/svg_number_tear_off.cc
  ${CUR_SRC_DIR}svg/svg_number_tear_off.h
  ${CUR_SRC_DIR}svg/svg_parser_utilities.cc
  ${CUR_SRC_DIR}svg/svg_parser_utilities.h
  ${CUR_SRC_DIR}svg/svg_parsing_error.cc
  ${CUR_SRC_DIR}svg/svg_parsing_error.h
  ${CUR_SRC_DIR}svg/svg_path.cc
  ${CUR_SRC_DIR}svg/svg_path.h
  ${CUR_SRC_DIR}svg/svg_path_blender.cc
  ${CUR_SRC_DIR}svg/svg_path_blender.h
  ${CUR_SRC_DIR}svg/svg_path_builder.cc
  ${CUR_SRC_DIR}svg/svg_path_builder.h
  ${CUR_SRC_DIR}svg/svg_path_byte_stream.h
  ${CUR_SRC_DIR}svg/svg_path_byte_stream_builder.cc
  ${CUR_SRC_DIR}svg/svg_path_byte_stream_builder.h
  ${CUR_SRC_DIR}svg/svg_path_byte_stream_source.cc
  ${CUR_SRC_DIR}svg/svg_path_byte_stream_source.h
  ${CUR_SRC_DIR}svg/svg_path_consumer.h
  ${CUR_SRC_DIR}svg/svg_path_data.h
  ${CUR_SRC_DIR}svg/svg_path_element.cc
  ${CUR_SRC_DIR}svg/svg_path_element.h
  ${CUR_SRC_DIR}svg/svg_path_parser.cc
  ${CUR_SRC_DIR}svg/svg_path_parser.h
  ${CUR_SRC_DIR}svg/svg_path_query.cc
  ${CUR_SRC_DIR}svg/svg_path_query.h
  ${CUR_SRC_DIR}svg/svg_path_string_builder.cc
  ${CUR_SRC_DIR}svg/svg_path_string_builder.h
  ${CUR_SRC_DIR}svg/svg_path_string_source.cc
  ${CUR_SRC_DIR}svg/svg_path_string_source.h
  ${CUR_SRC_DIR}svg/svg_path_utilities.cc
  ${CUR_SRC_DIR}svg/svg_path_utilities.h
  ${CUR_SRC_DIR}svg/svg_pattern_element.cc
  ${CUR_SRC_DIR}svg/svg_pattern_element.h
  ${CUR_SRC_DIR}svg/svg_point.cc
  ${CUR_SRC_DIR}svg/svg_point.h
  ${CUR_SRC_DIR}svg/svg_point_list.cc
  ${CUR_SRC_DIR}svg/svg_point_list.h
  ${CUR_SRC_DIR}svg/svg_point_list_tear_off.h
  ${CUR_SRC_DIR}svg/svg_point_tear_off.cc
  ${CUR_SRC_DIR}svg/svg_point_tear_off.h
  ${CUR_SRC_DIR}svg/svg_poly_element.cc
  ${CUR_SRC_DIR}svg/svg_poly_element.h
  ${CUR_SRC_DIR}svg/svg_polygon_element.cc
  ${CUR_SRC_DIR}svg/svg_polygon_element.h
  ${CUR_SRC_DIR}svg/svg_polyline_element.cc
  ${CUR_SRC_DIR}svg/svg_polyline_element.h
  ${CUR_SRC_DIR}svg/svg_preserve_aspect_ratio.cc
  ${CUR_SRC_DIR}svg/svg_preserve_aspect_ratio.h
  ${CUR_SRC_DIR}svg/svg_preserve_aspect_ratio_tear_off.cc
  ${CUR_SRC_DIR}svg/svg_preserve_aspect_ratio_tear_off.h
  ${CUR_SRC_DIR}svg/svg_radial_gradient_element.cc
  ${CUR_SRC_DIR}svg/svg_radial_gradient_element.h
  ${CUR_SRC_DIR}svg/svg_rect.cc
  ${CUR_SRC_DIR}svg/svg_rect.h
  ${CUR_SRC_DIR}svg/svg_rect_element.cc
  ${CUR_SRC_DIR}svg/svg_rect_element.h
  ${CUR_SRC_DIR}svg/svg_rect_tear_off.cc
  ${CUR_SRC_DIR}svg/svg_rect_tear_off.h
  ${CUR_SRC_DIR}svg/svg_resource.cc
  ${CUR_SRC_DIR}svg/svg_resource.h
  ${CUR_SRC_DIR}svg/svg_resource_client.h
  ${CUR_SRC_DIR}svg/svg_script_element.cc
  ${CUR_SRC_DIR}svg/svg_script_element.h
  ${CUR_SRC_DIR}svg/svg_set_element.cc
  ${CUR_SRC_DIR}svg/svg_set_element.h
  ${CUR_SRC_DIR}svg/svg_static_string_list.cc
  ${CUR_SRC_DIR}svg/svg_static_string_list.h
  ${CUR_SRC_DIR}svg/svg_stop_element.cc
  ${CUR_SRC_DIR}svg/svg_stop_element.h
  ${CUR_SRC_DIR}svg/svg_string.cc
  ${CUR_SRC_DIR}svg/svg_string.h
  ${CUR_SRC_DIR}svg/svg_string_list.cc
  ${CUR_SRC_DIR}svg/svg_string_list.h
  ${CUR_SRC_DIR}svg/svg_string_list_tear_off.cc
  ${CUR_SRC_DIR}svg/svg_string_list_tear_off.h
  ${CUR_SRC_DIR}svg/svg_style_element.cc
  ${CUR_SRC_DIR}svg/svg_style_element.h
  ${CUR_SRC_DIR}svg/svg_svg_element.cc
  ${CUR_SRC_DIR}svg/svg_svg_element.h
  ${CUR_SRC_DIR}svg/svg_switch_element.cc
  ${CUR_SRC_DIR}svg/svg_switch_element.h
  ${CUR_SRC_DIR}svg/svg_symbol_element.cc
  ${CUR_SRC_DIR}svg/svg_symbol_element.h
  ${CUR_SRC_DIR}svg/svg_tests.cc
  ${CUR_SRC_DIR}svg/svg_tests.h
  ${CUR_SRC_DIR}svg/svg_text_content_element.cc
  ${CUR_SRC_DIR}svg/svg_text_content_element.h
  ${CUR_SRC_DIR}svg/svg_text_element.cc
  ${CUR_SRC_DIR}svg/svg_text_element.h
  ${CUR_SRC_DIR}svg/svg_text_path_element.cc
  ${CUR_SRC_DIR}svg/svg_text_path_element.h
  ${CUR_SRC_DIR}svg/svg_text_positioning_element.cc
  ${CUR_SRC_DIR}svg/svg_text_positioning_element.h
  ${CUR_SRC_DIR}svg/svg_title_element.cc
  ${CUR_SRC_DIR}svg/svg_title_element.h
  ${CUR_SRC_DIR}svg/svg_transform.cc
  ${CUR_SRC_DIR}svg/svg_transform.h
  ${CUR_SRC_DIR}svg/svg_transform_distance.cc
  ${CUR_SRC_DIR}svg/svg_transform_distance.h
  ${CUR_SRC_DIR}svg/svg_transform_list.cc
  ${CUR_SRC_DIR}svg/svg_transform_list.h
  ${CUR_SRC_DIR}svg/svg_transform_list_tear_off.cc
  ${CUR_SRC_DIR}svg/svg_transform_list_tear_off.h
  ${CUR_SRC_DIR}svg/svg_transform_tear_off.cc
  ${CUR_SRC_DIR}svg/svg_transform_tear_off.h
  ${CUR_SRC_DIR}svg/svg_tree_scope_resources.cc
  ${CUR_SRC_DIR}svg/svg_tree_scope_resources.h
  ${CUR_SRC_DIR}svg/svg_tspan_element.cc
  ${CUR_SRC_DIR}svg/svg_tspan_element.h
  ${CUR_SRC_DIR}svg/svg_unit_types.cc
  ${CUR_SRC_DIR}svg/svg_unit_types.h
  ${CUR_SRC_DIR}svg/svg_unknown_element.cc
  ${CUR_SRC_DIR}svg/svg_unknown_element.h
  ${CUR_SRC_DIR}svg/svg_uri_reference.cc
  ${CUR_SRC_DIR}svg/svg_uri_reference.h
  ${CUR_SRC_DIR}svg/svg_use_element.cc
  ${CUR_SRC_DIR}svg/svg_use_element.h
  ${CUR_SRC_DIR}svg/svg_view_element.cc
  ${CUR_SRC_DIR}svg/svg_view_element.h
  ${CUR_SRC_DIR}svg/svg_view_spec.cc
  ${CUR_SRC_DIR}svg/svg_view_spec.h
  ${CUR_SRC_DIR}svg/svg_zoom_and_pan.cc
  ${CUR_SRC_DIR}svg/svg_zoom_and_pan.h
)

list(APPEND BLINK_RENDERER_TESTING_SOURCES
  # tests
)

list(APPEND BLINK_RENDERER_TIMING_SOURCES
  ${CUR_SRC_DIR}timing/dom_window_performance.cc
  #${CUR_SRC_DIR}timing/dom_window_performance.h
  ${CUR_SRC_DIR}timing/event_timing.cc
  #${CUR_SRC_DIR}timing/event_timing.h
  ${CUR_SRC_DIR}timing/memory_info.cc
  #${CUR_SRC_DIR}timing/memory_info.h
  ${CUR_SRC_DIR}timing/performance.cc
  #${CUR_SRC_DIR}timing/performance.h
  ${CUR_SRC_DIR}timing/performance_element_timing.cc
  #${CUR_SRC_DIR}timing/performance_element_timing.h
  ${CUR_SRC_DIR}timing/performance_entry.cc
  #${CUR_SRC_DIR}timing/performance_entry.h
  ${CUR_SRC_DIR}timing/performance_event_timing.cc
  #${CUR_SRC_DIR}timing/performance_event_timing.h
  ${CUR_SRC_DIR}timing/performance_layout_jank.cc
  #${CUR_SRC_DIR}timing/performance_layout_jank.h
  ${CUR_SRC_DIR}timing/performance_long_task_timing.cc
  #${CUR_SRC_DIR}timing/performance_long_task_timing.h
  ${CUR_SRC_DIR}timing/performance_mark.cc
  #${CUR_SRC_DIR}timing/performance_mark.h
  ${CUR_SRC_DIR}timing/performance_measure.cc
  #${CUR_SRC_DIR}timing/performance_measure.h
  ${CUR_SRC_DIR}timing/performance_navigation.cc
  #${CUR_SRC_DIR}timing/performance_navigation.h
  ${CUR_SRC_DIR}timing/performance_navigation_timing.cc
  #${CUR_SRC_DIR}timing/performance_navigation_timing.h
  ${CUR_SRC_DIR}timing/performance_observer.cc
  #${CUR_SRC_DIR}timing/performance_observer.h
  ${CUR_SRC_DIR}timing/performance_observer_entry_list.cc
  #${CUR_SRC_DIR}timing/performance_observer_entry_list.h
  ${CUR_SRC_DIR}timing/performance_paint_timing.cc
  #${CUR_SRC_DIR}timing/performance_paint_timing.h
  ${CUR_SRC_DIR}timing/performance_resource_timing.cc
  #${CUR_SRC_DIR}timing/performance_resource_timing.h
  ${CUR_SRC_DIR}timing/performance_server_timing.cc
  #${CUR_SRC_DIR}timing/performance_server_timing.h
  ${CUR_SRC_DIR}timing/performance_timing.cc
  #${CUR_SRC_DIR}timing/performance_timing.h
  ${CUR_SRC_DIR}timing/performance_user_timing.cc
  #${CUR_SRC_DIR}timing/performance_user_timing.h
  ${CUR_SRC_DIR}timing/sub_task_attribution.cc
  #${CUR_SRC_DIR}timing/sub_task_attribution.h
  ${CUR_SRC_DIR}timing/task_attribution_timing.cc
  #${CUR_SRC_DIR}timing/task_attribution_timing.h
  ${CUR_SRC_DIR}timing/time_clamper.cc
  #${CUR_SRC_DIR}timing/time_clamper.h
  ${CUR_SRC_DIR}timing/window_performance.cc
  #${CUR_SRC_DIR}timing/window_performance.h
  ${CUR_SRC_DIR}timing/worker_global_scope_performance.cc
  #${CUR_SRC_DIR}timing/worker_global_scope_performance.h
  ${CUR_SRC_DIR}timing/worker_performance.cc
  #${CUR_SRC_DIR}timing/worker_performance.h
)

list(APPEND BLINK_RENDERER_ORIGIN_TRIALS_SOURCES
  ${CUR_SRC_DIR}origin_trials/navigation_origin_trial_features.cc
  ${CUR_SRC_DIR}origin_trials/origin_trial_context.cc
  #${CUR_SRC_DIR}origin_trials/origin_trial_context.h
  #${CUR_SRC_DIR}origin_trials/origin_trials.h
)

list(APPEND BLINK_RENDERER_TRUTEDTYPES_SOURCES
  ${CUR_SRC_DIR}trustedtypes/trusted_html.cc
  #${CUR_SRC_DIR}trustedtypes/trusted_html.h
  ${CUR_SRC_DIR}trustedtypes/trusted_script.cc
  #${CUR_SRC_DIR}trustedtypes/trusted_script.h
  ${CUR_SRC_DIR}trustedtypes/trusted_script_url.cc
  #${CUR_SRC_DIR}trustedtypes/trusted_script_url.h
  ${CUR_SRC_DIR}trustedtypes/trusted_type_policy.cc
  #${CUR_SRC_DIR}trustedtypes/trusted_type_policy.h
  ${CUR_SRC_DIR}trustedtypes/trusted_type_policy_factory.cc
  #${CUR_SRC_DIR}trustedtypes/trusted_type_policy_factory.h
  ${CUR_SRC_DIR}trustedtypes/trusted_types_util.cc
  #${CUR_SRC_DIR}trustedtypes/trusted_types_util.h
  ${CUR_SRC_DIR}trustedtypes/trusted_url.cc
  #${CUR_SRC_DIR}trustedtypes/trusted_url.h
)

list(APPEND BLINK_RENDERER_URL_SOURCES
  ${CUR_SRC_DIR}url/dom_url.cc
  #${CUR_SRC_DIR}url/dom_url.h
  ${CUR_SRC_DIR}url/dom_url_utils.cc
  #${CUR_SRC_DIR}url/dom_url_utils.h
  ${CUR_SRC_DIR}url/dom_url_utils_read_only.cc
  #${CUR_SRC_DIR}url/dom_url_utils_read_only.h
  ${CUR_SRC_DIR}url/url_search_params.cc
  #${CUR_SRC_DIR}url/url_search_params.h
)

list(APPEND BLINK_RENDERER_WIN_SOURCES
  # windows
)

list(APPEND BLINK_RENDERER_WORKERS_SOURCES
  # TODO
)

list(APPEND BLINK_RENDERER_XML_SOURCES
  ${CUR_SRC_DIR}xml/document_xml_tree_viewer.cc
  ${CUR_SRC_DIR}xml/document_xml_tree_viewer.h
  ${CUR_SRC_DIR}xml/document_xpath_evaluator.cc
  ${CUR_SRC_DIR}xml/document_xpath_evaluator.h
  ${CUR_SRC_DIR}xml/document_xslt.cc
  ${CUR_SRC_DIR}xml/document_xslt.h
  ${CUR_SRC_DIR}xml/dom_parser.cc
  ${CUR_SRC_DIR}xml/dom_parser.h
  ${CUR_SRC_DIR}xml/native_xpath_ns_resolver.cc
  ${CUR_SRC_DIR}xml/native_xpath_ns_resolver.h
  ${CUR_SRC_DIR}xml/parser/shared_buffer_reader.cc
  ${CUR_SRC_DIR}xml/parser/shared_buffer_reader.h
  ${CUR_SRC_DIR}xml/parser/xml_document_parser.cc
  ${CUR_SRC_DIR}xml/parser/xml_document_parser.h
  ${CUR_SRC_DIR}xml/parser/xml_document_parser_scope.cc
  ${CUR_SRC_DIR}xml/parser/xml_document_parser_scope.h
  ${CUR_SRC_DIR}xml/parser/xml_errors.cc
  ${CUR_SRC_DIR}xml/parser/xml_errors.h
  ${CUR_SRC_DIR}xml/parser/xml_parser_input.h
  ${CUR_SRC_DIR}xml/xml_serializer.cc
  ${CUR_SRC_DIR}xml/xml_serializer.h
  ${CUR_SRC_DIR}xml/xpath_evaluator.cc
  ${CUR_SRC_DIR}xml/xpath_evaluator.h
  ${CUR_SRC_DIR}xml/xpath_expression.cc
  ${CUR_SRC_DIR}xml/xpath_expression.h
  ${CUR_SRC_DIR}xml/xpath_expression_node.cc
  ${CUR_SRC_DIR}xml/xpath_expression_node.h
  ${CUR_SRC_DIR}xml/xpath_functions.cc
  ${CUR_SRC_DIR}xml/xpath_functions.h
  ${CUR_SRC_DIR}xml/xpath_node_set.cc
  ${CUR_SRC_DIR}xml/xpath_node_set.h
  ${CUR_SRC_DIR}xml/xpath_ns_resolver.h
  ${CUR_SRC_DIR}xml/xpath_parser.cc
  ${CUR_SRC_DIR}xml/xpath_parser.h
  ${CUR_SRC_DIR}xml/xpath_path.cc
  ${CUR_SRC_DIR}xml/xpath_path.h
  ${CUR_SRC_DIR}xml/xpath_predicate.cc
  ${CUR_SRC_DIR}xml/xpath_predicate.h
  ${CUR_SRC_DIR}xml/xpath_result.cc
  ${CUR_SRC_DIR}xml/xpath_result.h
  ${CUR_SRC_DIR}xml/xpath_step.cc
  ${CUR_SRC_DIR}xml/xpath_step.h
  ${CUR_SRC_DIR}xml/xpath_util.cc
  ${CUR_SRC_DIR}xml/xpath_util.h
  ${CUR_SRC_DIR}xml/xpath_value.cc
  ${CUR_SRC_DIR}xml/xpath_value.h
  ${CUR_SRC_DIR}xml/xpath_variable_reference.cc
  ${CUR_SRC_DIR}xml/xpath_variable_reference.h
  ${CUR_SRC_DIR}xml/xsl_style_sheet.h
  ${CUR_SRC_DIR}xml/xsl_style_sheet_libxslt.cc
  ${CUR_SRC_DIR}xml/xslt_extensions.cc
  ${CUR_SRC_DIR}xml/xslt_extensions.h
  ${CUR_SRC_DIR}xml/xslt_processor.cc
  ${CUR_SRC_DIR}xml/xslt_processor.h
  ${CUR_SRC_DIR}xml/xslt_processor_libxslt.cc
  ${CUR_SRC_DIR}xml/xslt_unicode_sort.cc
  ${CUR_SRC_DIR}xml/xslt_unicode_sort.h
)

list(APPEND BLINK_RENDERER_CORE_XMLHTTPREQUEST_SOURCES
  ${CUR_SRC_DIR}xmlhttprequest/xml_http_request.cc
  ${CUR_SRC_DIR}xmlhttprequest/xml_http_request.h
  ${CUR_SRC_DIR}xmlhttprequest/xml_http_request_event_target.h
  ${CUR_SRC_DIR}xmlhttprequest/xml_http_request_progress_event_throttle.cc
  ${CUR_SRC_DIR}xmlhttprequest/xml_http_request_progress_event_throttle.h
  ${CUR_SRC_DIR}xmlhttprequest/xml_http_request_upload.cc
  ${CUR_SRC_DIR}xmlhttprequest/xml_http_request_upload.h
)

list(APPEND BLINK_RENDERER_CORE_AOM_SOURCES
  ${CUR_SRC_DIR}aom/accessible_node.cc
  #${CUR_SRC_DIR}accessible_node.h
  ${CUR_SRC_DIR}aom/accessible_node_list.cc
  #${CUR_SRC_DIR}accessible_node_list.h
  ${CUR_SRC_DIR}aom/computed_accessible_node.cc
  #${CUR_SRC_DIR}computed_accessible_node.h
)

list(APPEND BLINK_RENDERER_CORE_CLIPBOARD_SOURCES
  ${CUR_SRC_DIR}clipboard/clipboard_mime_types.cc
  ${CUR_SRC_DIR}clipboard/clipboard_mime_types.h
  ${CUR_SRC_DIR}clipboard/clipboard_utilities.cc
  ${CUR_SRC_DIR}clipboard/clipboard_utilities.h
  ${CUR_SRC_DIR}clipboard/data_object.cc
  ${CUR_SRC_DIR}clipboard/data_object.h
  ${CUR_SRC_DIR}clipboard/data_object_item.cc
  ${CUR_SRC_DIR}clipboard/data_object_item.h
  ${CUR_SRC_DIR}clipboard/data_transfer.cc
  ${CUR_SRC_DIR}clipboard/data_transfer.h
  ${CUR_SRC_DIR}clipboard/data_transfer_access_policy.h
  ${CUR_SRC_DIR}clipboard/data_transfer_item.cc
  ${CUR_SRC_DIR}clipboard/data_transfer_item.h
  ${CUR_SRC_DIR}clipboard/data_transfer_item_list.cc
  ${CUR_SRC_DIR}clipboard/data_transfer_item_list.h
  ${CUR_SRC_DIR}clipboard/dragged_isolated_file_system.cc
  ${CUR_SRC_DIR}clipboard/dragged_isolated_file_system.h
  ${CUR_SRC_DIR}clipboard/paste_mode.h
  ${CUR_SRC_DIR}clipboard/system_clipboard.cc
  ${CUR_SRC_DIR}clipboard/system_clipboard.h
  # clipboard_utilities_win.cc
)

list(APPEND BLINK_RENDERER_CONTENT_CAPTURE_SOURCES
  ${CUR_SRC_DIR}content_capture/content_capture_manager.cc
  #${CUR_SRC_DIR}content_capture/content_capture_manager.h
  ${CUR_SRC_DIR}content_capture/content_capture_task.cc
  #${CUR_SRC_DIR}content_capture/content_capture_task.h
  ${CUR_SRC_DIR}content_capture/content_capture_task_histogram_reporter.cc
  #${CUR_SRC_DIR}content_capture/content_capture_task_histogram_reporter.h
  ${CUR_SRC_DIR}content_capture/content_holder.cc
  #${CUR_SRC_DIR}content_capture/content_holder.h
  ${CUR_SRC_DIR}content_capture/sent_nodes.cc
  #${CUR_SRC_DIR}content_capture/sent_nodes.h
  ${CUR_SRC_DIR}content_capture/task_session.cc
  #${CUR_SRC_DIR}content_capture/task_session.h
)

list(APPEND BLINK_RENDERER_CONTENT_FEATURES_SOURCES
  ${CUR_SRC_DIR}context_features/context_feature_settings.cc
  ${CUR_SRC_DIR}context_features/context_feature_settings.h
)

list(APPEND BLINK_RENDERER_CSS_SOURCES
  ${CUR_SRC_DIR}css/abstract_property_set_css_style_declaration.cc
  #${CUR_SRC_DIR}css/abstract_property_set_css_style_declaration.h
  ${CUR_SRC_DIR}css/active_style_sheets.cc
  #${CUR_SRC_DIR}css/active_style_sheets.h
  ${CUR_SRC_DIR}css/basic_shape_functions.cc
  #${CUR_SRC_DIR}css/basic_shape_functions.h
  ${CUR_SRC_DIR}css/binary_data_font_face_source.cc
  #${CUR_SRC_DIR}css/binary_data_font_face_source.h
  ${CUR_SRC_DIR}css/computed_style_css_value_mapping.cc
  #${CUR_SRC_DIR}css/computed_style_css_value_mapping.h
  ${CUR_SRC_DIR}css/css_axis_value.cc
  #${CUR_SRC_DIR}css/css_axis_value.h
  ${CUR_SRC_DIR}css/css_basic_shape_values.cc
  #${CUR_SRC_DIR}css/css_basic_shape_values.h
  ${CUR_SRC_DIR}css/css_border_image.cc
  #${CUR_SRC_DIR}css/css_border_image.h
  ${CUR_SRC_DIR}css/css_border_image_slice_value.cc
  #${CUR_SRC_DIR}css/css_border_image_slice_value.h
  ${CUR_SRC_DIR}css/css_calculation_value.cc
  #${CUR_SRC_DIR}css/css_calculation_value.h
  ${CUR_SRC_DIR}css/css_color_value.cc
  #${CUR_SRC_DIR}css/css_color_value.h
  ${CUR_SRC_DIR}css/css_computed_style_declaration.cc
  #${CUR_SRC_DIR}css/css_computed_style_declaration.h
  ${CUR_SRC_DIR}css/css_condition_rule.cc
  #${CUR_SRC_DIR}css/css_condition_rule.h
  ${CUR_SRC_DIR}css/css_content_distribution_value.cc
  #${CUR_SRC_DIR}css/css_content_distribution_value.h
  ${CUR_SRC_DIR}css/css_counter_value.cc
  #${CUR_SRC_DIR}css/css_counter_value.h
  ${CUR_SRC_DIR}css/css_crossfade_value.cc
  #${CUR_SRC_DIR}css/css_crossfade_value.h
  ${CUR_SRC_DIR}css/css_cursor_image_value.cc
  #${CUR_SRC_DIR}css/css_cursor_image_value.h
  #${CUR_SRC_DIR}css/css_custom_font_data.h
  ${CUR_SRC_DIR}css/css_custom_ident_value.cc
  #${CUR_SRC_DIR}css/css_custom_ident_value.h
  ${CUR_SRC_DIR}css/css_custom_property_declaration.cc
  #${CUR_SRC_DIR}css/css_custom_property_declaration.h
  ${CUR_SRC_DIR}css/css_default_style_sheets.cc
  #${CUR_SRC_DIR}css/css_default_style_sheets.h
  ${CUR_SRC_DIR}css/css_font_face.cc
  #${CUR_SRC_DIR}css/css_font_face.h
  ${CUR_SRC_DIR}css/css_font_face_rule.cc
  #${CUR_SRC_DIR}css/css_font_face_rule.h
  ${CUR_SRC_DIR}css/css_font_face_source.cc
  #${CUR_SRC_DIR}css/css_font_face_source.h
  ${CUR_SRC_DIR}css/css_font_face_src_value.cc
  #${CUR_SRC_DIR}css/css_font_face_src_value.h
  ${CUR_SRC_DIR}css/css_font_family_value.cc
  #${CUR_SRC_DIR}css/css_font_family_value.h
  ${CUR_SRC_DIR}css/css_font_feature_value.cc
  #${CUR_SRC_DIR}css/css_font_feature_value.h
  ${CUR_SRC_DIR}css/css_font_feature_values_rule.cc
  #${CUR_SRC_DIR}css/css_font_feature_values_rule.h
  ${CUR_SRC_DIR}css/css_font_selector.cc
  #${CUR_SRC_DIR}css/css_font_selector.h
  ${CUR_SRC_DIR}css/css_font_style_range_value.cc
  #${CUR_SRC_DIR}css/css_font_style_range_value.h
  ${CUR_SRC_DIR}css/css_font_variation_value.cc
  #${CUR_SRC_DIR}css/css_font_variation_value.h
  ${CUR_SRC_DIR}css/css_function_value.cc
  #${CUR_SRC_DIR}css/css_function_value.h
  ${CUR_SRC_DIR}css/css_global_rule_set.cc
  #${CUR_SRC_DIR}css/css_global_rule_set.h
  ${CUR_SRC_DIR}css/css_gradient_value.cc
  #${CUR_SRC_DIR}css/css_gradient_value.h
  ${CUR_SRC_DIR}css/css_grid_auto_repeat_value.cc
  #${CUR_SRC_DIR}css/css_grid_auto_repeat_value.h
  ${CUR_SRC_DIR}css/css_grid_integer_repeat_value.cc
  #${CUR_SRC_DIR}css/css_grid_integer_repeat_value.h
  ${CUR_SRC_DIR}css/css_grid_line_names_value.cc
  #${CUR_SRC_DIR}css/css_grid_line_names_value.h
  ${CUR_SRC_DIR}css/css_grid_template_areas_value.cc
  #${CUR_SRC_DIR}css/css_grid_template_areas_value.h
  ${CUR_SRC_DIR}css/css_grouping_rule.cc
  #${CUR_SRC_DIR}css/css_grouping_rule.h
  ${CUR_SRC_DIR}css/css_identifier_value.cc
  #${CUR_SRC_DIR}css/css_identifier_value.h
  ${CUR_SRC_DIR}css/css_image_generator_value.cc
  #${CUR_SRC_DIR}css/css_image_generator_value.h
  ${CUR_SRC_DIR}css/css_image_set_value.cc
  #${CUR_SRC_DIR}css/css_image_set_value.h
  ${CUR_SRC_DIR}css/css_image_value.cc
  #${CUR_SRC_DIR}css/css_image_value.h
  ${CUR_SRC_DIR}css/css_import_rule.cc
  #${CUR_SRC_DIR}css/css_import_rule.h
  ${CUR_SRC_DIR}css/css_inherited_value.cc
  #${CUR_SRC_DIR}css/css_inherited_value.h
  ${CUR_SRC_DIR}css/css_initial_value.cc
  #${CUR_SRC_DIR}css/css_initial_value.h
  ${CUR_SRC_DIR}css/css_invalid_variable_value.cc
  #${CUR_SRC_DIR}css/css_invalid_variable_value.h
  ${CUR_SRC_DIR}css/css_keyframe_rule.cc
  #${CUR_SRC_DIR}css/css_keyframe_rule.h
  ${CUR_SRC_DIR}css/css_keyframes_rule.cc
  #${CUR_SRC_DIR}css/css_keyframes_rule.h
  ${CUR_SRC_DIR}css/css_layout_function_value.cc
  #${CUR_SRC_DIR}css/css_layout_function_value.h
  ${CUR_SRC_DIR}css/css_markup.cc
  #${CUR_SRC_DIR}css/css_markup.h
  ${CUR_SRC_DIR}css/css_media_rule.cc
  #${CUR_SRC_DIR}css/css_media_rule.h
  ${CUR_SRC_DIR}css/css_namespace_rule.cc
  #${CUR_SRC_DIR}css/css_namespace_rule.h
  ${CUR_SRC_DIR}css/css_page_rule.cc
  #${CUR_SRC_DIR}css/css_page_rule.h
  ${CUR_SRC_DIR}css/css_paint_image_generator.cc
  #${CUR_SRC_DIR}css/css_paint_image_generator.h
  ${CUR_SRC_DIR}css/css_paint_value.cc
  #${CUR_SRC_DIR}css/css_paint_value.h
  ${CUR_SRC_DIR}css/css_path_value.cc
  #${CUR_SRC_DIR}css/css_path_value.h
  ${CUR_SRC_DIR}css/css_pending_substitution_value.cc
  #${CUR_SRC_DIR}css/css_pending_substitution_value.h
  ${CUR_SRC_DIR}css/css_primitive_value.cc
  #${CUR_SRC_DIR}css/css_primitive_value.h
  #${CUR_SRC_DIR}css/css_primitive_value_mappings.h
  ${CUR_SRC_DIR}css/css_property_equality.cc
  #${CUR_SRC_DIR}css/css_property_equality.h
  #${CUR_SRC_DIR}css/css_property_id_templates.h
  ${CUR_SRC_DIR}css/css_property_name.cc
  #${CUR_SRC_DIR}css/css_property_name.h
  ${CUR_SRC_DIR}css/css_property_source_data.cc
  #${CUR_SRC_DIR}css/css_property_source_data.h
  ${CUR_SRC_DIR}css/css_property_value.cc
  #${CUR_SRC_DIR}css/css_property_value.h
  ${CUR_SRC_DIR}css/css_property_value_set.cc
  #${CUR_SRC_DIR}css/css_property_value_set.h
  ${CUR_SRC_DIR}css/css_quad_value.cc
  #${CUR_SRC_DIR}css/css_quad_value.h
  ${CUR_SRC_DIR}css/css_ray_value.cc
  #${CUR_SRC_DIR}css/css_ray_value.h
  ${CUR_SRC_DIR}css/css_reflect_value.cc
  #${CUR_SRC_DIR}css/css_reflect_value.h
  #${CUR_SRC_DIR}css/css_reflection_direction.h
  #${CUR_SRC_DIR}css/css_resolution_units.h
  ${CUR_SRC_DIR}css/css_rule.cc
  #${CUR_SRC_DIR}css/css_rule.h
  ${CUR_SRC_DIR}css/css_rule_list.cc
  #${CUR_SRC_DIR}css/css_rule_list.h
  ${CUR_SRC_DIR}css/css_segmented_font_face.cc
  #${CUR_SRC_DIR}css/css_segmented_font_face.h
  ${CUR_SRC_DIR}css/css_selector.cc
  #${CUR_SRC_DIR}css/css_selector.h
  ${CUR_SRC_DIR}css/css_selector_list.cc
  #${CUR_SRC_DIR}css/css_selector_list.h
  ${CUR_SRC_DIR}css/css_selector_watch.cc
  #${CUR_SRC_DIR}css/css_selector_watch.h
  ${CUR_SRC_DIR}css/css_shadow_value.cc
  #${CUR_SRC_DIR}css/css_shadow_value.h
  ${CUR_SRC_DIR}css/css_string_value.cc
  #${CUR_SRC_DIR}css/css_string_value.h
  ${CUR_SRC_DIR}css/css_style_declaration.cc
  #${CUR_SRC_DIR}css/css_style_declaration.h
  ${CUR_SRC_DIR}css/css_style_rule.cc
  #${CUR_SRC_DIR}css/css_style_rule.h
  ${CUR_SRC_DIR}css/css_style_sheet.cc
  #${CUR_SRC_DIR}css/css_style_sheet.h
  ${CUR_SRC_DIR}css/css_supports_rule.cc
  #${CUR_SRC_DIR}css/css_supports_rule.h
  ${CUR_SRC_DIR}css/css_syntax_component.cc
  #${CUR_SRC_DIR}css/css_syntax_component.h
  ${CUR_SRC_DIR}css/css_syntax_descriptor.cc
  #${CUR_SRC_DIR}css/css_syntax_descriptor.h
  ${CUR_SRC_DIR}css/css_syntax_string_parser.cc
  #${CUR_SRC_DIR}css/css_syntax_string_parser.h
  ${CUR_SRC_DIR}css/css_timing_function_value.cc
  #${CUR_SRC_DIR}css/css_timing_function_value.h
  ${CUR_SRC_DIR}css/css_to_length_conversion_data.cc
  #${CUR_SRC_DIR}css/css_to_length_conversion_data.h
  ${CUR_SRC_DIR}css/css_unicode_range_value.cc
  #${CUR_SRC_DIR}css/css_unicode_range_value.h
  ${CUR_SRC_DIR}css/css_unset_value.cc
  #${CUR_SRC_DIR}css/css_unset_value.h
  ${CUR_SRC_DIR}css/css_uri_value.cc
  #${CUR_SRC_DIR}css/css_uri_value.h
  ${CUR_SRC_DIR}css/css_value.cc
  #${CUR_SRC_DIR}css/css_value.h
  #${CUR_SRC_DIR}css/css_value_id_mappings.h
  ${CUR_SRC_DIR}css/css_value_list.cc
  #${CUR_SRC_DIR}css/css_value_list.h
  ${CUR_SRC_DIR}css/css_value_pair.cc
  #${CUR_SRC_DIR}css/css_value_pair.h
  ${CUR_SRC_DIR}css/css_value_pool.cc
  #${CUR_SRC_DIR}css/css_value_pool.h
  ${CUR_SRC_DIR}css/css_variable_data.cc
  #${CUR_SRC_DIR}css/css_variable_data.h
  ${CUR_SRC_DIR}css/css_variable_reference_value.cc
  #${CUR_SRC_DIR}css/css_variable_reference_value.h
  ${CUR_SRC_DIR}css/css_viewport_rule.cc
  #${CUR_SRC_DIR}css/css_viewport_rule.h
  ${CUR_SRC_DIR}css/cssom/computed_style_property_map.cc
  #${CUR_SRC_DIR}css/cssom/computed_style_property_map.h
  ${CUR_SRC_DIR}css/cssom/cross_thread_keyword_value.cc
  #${CUR_SRC_DIR}css/cssom/cross_thread_keyword_value.h
  #${CUR_SRC_DIR}css/cssom/cross_thread_style_value.h
  ${CUR_SRC_DIR}css/cssom/cross_thread_unit_value.cc
  #${CUR_SRC_DIR}css/cssom/cross_thread_unit_value.h
  ${CUR_SRC_DIR}css/cssom/cross_thread_unsupported_value.cc
  #${CUR_SRC_DIR}css/cssom/cross_thread_unsupported_value.h
  ${CUR_SRC_DIR}css/cssom/css_keyword_value.cc
  #${CUR_SRC_DIR}css/cssom/css_keyword_value.h
  ${CUR_SRC_DIR}css/cssom/css_math_invert.cc
  #${CUR_SRC_DIR}css/cssom/css_math_invert.h
  ${CUR_SRC_DIR}css/cssom/css_math_max.cc
  #${CUR_SRC_DIR}css/cssom/css_math_max.h
  ${CUR_SRC_DIR}css/cssom/css_math_min.cc
  #${CUR_SRC_DIR}css/cssom/css_math_min.h
  ${CUR_SRC_DIR}css/cssom/css_math_negate.cc
  #${CUR_SRC_DIR}css/cssom/css_math_negate.h
  ${CUR_SRC_DIR}css/cssom/css_math_product.cc
  #${CUR_SRC_DIR}css/cssom/css_math_product.h
  ${CUR_SRC_DIR}css/cssom/css_math_sum.cc
  #${CUR_SRC_DIR}css/cssom/css_math_sum.h
  ${CUR_SRC_DIR}css/cssom/css_math_value.cc
  #${CUR_SRC_DIR}css/cssom/css_math_value.h
  ${CUR_SRC_DIR}css/cssom/css_matrix_component.cc
  #${CUR_SRC_DIR}css/cssom/css_matrix_component.h
  ${CUR_SRC_DIR}css/cssom/css_numeric_value.cc
  #${CUR_SRC_DIR}css/cssom/css_numeric_value.h
  ${CUR_SRC_DIR}css/cssom/css_numeric_value_type.cc
  #${CUR_SRC_DIR}css/cssom/css_numeric_value_type.h
  ${CUR_SRC_DIR}css/cssom/css_perspective.cc
  #${CUR_SRC_DIR}css/cssom/css_perspective.h
  ${CUR_SRC_DIR}css/cssom/css_position_value.cc
  #${CUR_SRC_DIR}css/cssom/css_position_value.h
  #${CUR_SRC_DIR}css/cssom/css_resource_value.h
  ${CUR_SRC_DIR}css/cssom/css_rotate.cc
  #${CUR_SRC_DIR}css/cssom/css_rotate.h
  ${CUR_SRC_DIR}css/cssom/css_scale.cc
  #${CUR_SRC_DIR}css/cssom/css_scale.h
  ${CUR_SRC_DIR}css/cssom/css_skew.cc
  #${CUR_SRC_DIR}css/cssom/css_skew.h
  ${CUR_SRC_DIR}css/cssom/css_skew_x.cc
  #${CUR_SRC_DIR}css/cssom/css_skew_x.h
  ${CUR_SRC_DIR}css/cssom/css_skew_y.cc
  #${CUR_SRC_DIR}css/cssom/css_skew_y.h
  ${CUR_SRC_DIR}css/cssom/css_style_image_value.cc
  #${CUR_SRC_DIR}css/cssom/css_style_image_value.h
  ${CUR_SRC_DIR}css/cssom/css_style_value.cc
  #${CUR_SRC_DIR}css/cssom/css_style_value.h
  ${CUR_SRC_DIR}css/cssom/css_style_variable_reference_value.cc
  #${CUR_SRC_DIR}css/cssom/css_style_variable_reference_value.h
  ${CUR_SRC_DIR}css/cssom/css_transform_component.cc
  #${CUR_SRC_DIR}css/cssom/css_transform_component.h
  ${CUR_SRC_DIR}css/cssom/css_transform_value.cc
  #${CUR_SRC_DIR}css/cssom/css_transform_value.h
  ${CUR_SRC_DIR}css/cssom/css_translate.cc
  #${CUR_SRC_DIR}css/cssom/css_translate.h
  ${CUR_SRC_DIR}css/cssom/css_unit_value.cc
  #${CUR_SRC_DIR}css/cssom/css_unit_value.h
  #${CUR_SRC_DIR}css/cssom/css_unit_values.h
  ${CUR_SRC_DIR}css/cssom/css_unparsed_value.cc
  #${CUR_SRC_DIR}css/cssom/css_unparsed_value.h
  ${CUR_SRC_DIR}css/cssom/css_unsupported_style_value.cc
  #${CUR_SRC_DIR}css/cssom/css_unsupported_style_value.h
  ${CUR_SRC_DIR}css/cssom/css_url_image_value.cc
  #${CUR_SRC_DIR}css/cssom/css_url_image_value.h
  #${CUR_SRC_DIR}css/cssom/cssom_keywords.h
  #${CUR_SRC_DIR}css/cssom/cssom_types.h
  ${CUR_SRC_DIR}css/cssom/declared_style_property_map.cc
  #${CUR_SRC_DIR}css/cssom/declared_style_property_map.h
  #${CUR_SRC_DIR}css/cssom/element_computed_style_map.h
  ${CUR_SRC_DIR}css/cssom/inline_style_property_map.cc
  #${CUR_SRC_DIR}css/cssom/inline_style_property_map.h
  ${CUR_SRC_DIR}css/cssom/paint_worklet_deferred_image.cc
  #${CUR_SRC_DIR}css/cssom/paint_worklet_deferred_image.h
  ${CUR_SRC_DIR}css/cssom/paint_worklet_input.cc
  #${CUR_SRC_DIR}css/cssom/paint_worklet_input.h
  ${CUR_SRC_DIR}css/cssom/paint_worklet_style_property_map.cc
  #${CUR_SRC_DIR}css/cssom/paint_worklet_style_property_map.h
  ${CUR_SRC_DIR}css/cssom/prepopulated_computed_style_property_map.cc
  #${CUR_SRC_DIR}css/cssom/prepopulated_computed_style_property_map.h
  ${CUR_SRC_DIR}css/cssom/style_property_map.cc
  #${CUR_SRC_DIR}css/cssom/style_property_map.h
  #${CUR_SRC_DIR}css/cssom/style_property_map_read_only.h
  ${CUR_SRC_DIR}css/cssom/style_property_map_read_only_main_thread.cc
  #${CUR_SRC_DIR}css/cssom/style_property_map_read_only_main_thread.h
  ${CUR_SRC_DIR}css/cssom/style_value_factory.cc
  #${CUR_SRC_DIR}css/cssom/style_value_factory.h
  ${CUR_SRC_DIR}css/document_style_environment_variables.cc
  #${CUR_SRC_DIR}css/document_style_environment_variables.h
  ${CUR_SRC_DIR}css/document_style_sheet_collection.cc
  #${CUR_SRC_DIR}css/document_style_sheet_collection.h
  ${CUR_SRC_DIR}css/document_style_sheet_collector.cc
  #${CUR_SRC_DIR}css/document_style_sheet_collector.h
  ${CUR_SRC_DIR}css/dom_window_css.cc
  #${CUR_SRC_DIR}css/dom_window_css.h
  ${CUR_SRC_DIR}css/element_rule_collector.cc
  #${CUR_SRC_DIR}css/element_rule_collector.h
  ${CUR_SRC_DIR}css/font_display.cc
  #${CUR_SRC_DIR}css/font_display.h
  ${CUR_SRC_DIR}css/font_face.cc
  #${CUR_SRC_DIR}css/font_face.h
  ${CUR_SRC_DIR}css/font_face_cache.cc
  #${CUR_SRC_DIR}css/font_face_cache.h
  ${CUR_SRC_DIR}css/font_face_set.cc
  #${CUR_SRC_DIR}css/font_face_set.h
  ${CUR_SRC_DIR}css/font_face_set_document.cc
  #${CUR_SRC_DIR}css/font_face_set_document.h
  ${CUR_SRC_DIR}css/font_face_set_load_event.cc
  #${CUR_SRC_DIR}css/font_face_set_load_event.h
  ${CUR_SRC_DIR}css/font_face_set_worker.cc
  #${CUR_SRC_DIR}css/font_face_set_worker.h
  ${CUR_SRC_DIR}css/font_face_source.cc
  #${CUR_SRC_DIR}css/font_face_source.h
  ${CUR_SRC_DIR}css/font_size_functions.cc
  #${CUR_SRC_DIR}css/font_size_functions.h
  #${CUR_SRC_DIR}css/hash_tools.h
  ${CUR_SRC_DIR}css/inline_css_style_declaration.cc
  #${CUR_SRC_DIR}css/inline_css_style_declaration.h
  ${CUR_SRC_DIR}css/invalidation/invalidation_flags.cc
  #${CUR_SRC_DIR}css/invalidation/invalidation_flags.h
  ${CUR_SRC_DIR}css/invalidation/invalidation_set.cc
  #${CUR_SRC_DIR}css/invalidation/invalidation_set.h
  #${CUR_SRC_DIR}css/invalidation/node_invalidation_sets.h
  ${CUR_SRC_DIR}css/invalidation/pending_invalidations.cc
  #${CUR_SRC_DIR}css/invalidation/pending_invalidations.h
  ${CUR_SRC_DIR}css/invalidation/style_invalidator.cc
  #${CUR_SRC_DIR}css/invalidation/style_invalidator.h
  ${CUR_SRC_DIR}css/keyframe_style_rule_css_style_declaration.cc
  #${CUR_SRC_DIR}css/keyframe_style_rule_css_style_declaration.h
  ${CUR_SRC_DIR}css/layout_tree_rebuild_root.cc
  #${CUR_SRC_DIR}css/layout_tree_rebuild_root.h
  ${CUR_SRC_DIR}css/local_font_face_source.cc
  #${CUR_SRC_DIR}css/local_font_face_source.h
  ${CUR_SRC_DIR}css/media_list.cc
  #${CUR_SRC_DIR}css/media_list.h
  ${CUR_SRC_DIR}css/media_query.cc
  #${CUR_SRC_DIR}css/media_query.h
  ${CUR_SRC_DIR}css/media_query_evaluator.cc
  #${CUR_SRC_DIR}css/media_query_evaluator.h
  ${CUR_SRC_DIR}css/media_query_exp.cc
  #${CUR_SRC_DIR}css/media_query_exp.h
  ${CUR_SRC_DIR}css/media_query_list.cc
  #${CUR_SRC_DIR}css/media_query_list.h
  #${CUR_SRC_DIR}css/media_query_list_event.h
  ${CUR_SRC_DIR}css/media_query_list_listener.cc
  #${CUR_SRC_DIR}css/media_query_list_listener.h
  ${CUR_SRC_DIR}css/media_query_matcher.cc
  #${CUR_SRC_DIR}css/media_query_matcher.h
  ${CUR_SRC_DIR}css/media_values.cc
  #${CUR_SRC_DIR}css/media_values.h
  ${CUR_SRC_DIR}css/media_values_cached.cc
  #${CUR_SRC_DIR}css/media_values_cached.h
  ${CUR_SRC_DIR}css/media_values_dynamic.cc
  #${CUR_SRC_DIR}css/media_values_dynamic.h
  ${CUR_SRC_DIR}css/media_values_initial_viewport.cc
  #${CUR_SRC_DIR}css/media_values_initial_viewport.h
  ${CUR_SRC_DIR}css/offscreen_font_selector.cc
  #${CUR_SRC_DIR}css/offscreen_font_selector.h
  ${CUR_SRC_DIR}css/page_rule_collector.cc
  #${CUR_SRC_DIR}css/page_rule_collector.h
  ${CUR_SRC_DIR}css/parser/at_rule_descriptor_parser.cc
  #${CUR_SRC_DIR}css/parser/at_rule_descriptor_parser.h
  ${CUR_SRC_DIR}css/parser/css_at_rule_id.cc
  #${CUR_SRC_DIR}css/parser/css_at_rule_id.h
  ${CUR_SRC_DIR}css/parser/css_lazy_parsing_state.cc
  #${CUR_SRC_DIR}css/parser/css_lazy_parsing_state.h
  ${CUR_SRC_DIR}css/parser/css_lazy_property_parser_impl.cc
  #${CUR_SRC_DIR}css/parser/css_lazy_property_parser_impl.h
  ${CUR_SRC_DIR}css/parser/css_parser.cc
  #${CUR_SRC_DIR}css/parser/css_parser.h
  ${CUR_SRC_DIR}css/parser/css_parser_context.cc
  #${CUR_SRC_DIR}css/parser/css_parser_context.h
  ${CUR_SRC_DIR}css/parser/css_parser_fast_paths.cc
  #${CUR_SRC_DIR}css/parser/css_parser_fast_paths.h
  ${CUR_SRC_DIR}css/parser/css_parser_idioms.cc
  #${CUR_SRC_DIR}css/parser/css_parser_idioms.h
  ${CUR_SRC_DIR}css/parser/css_parser_impl.cc
  #${CUR_SRC_DIR}css/parser/css_parser_impl.h
  ${CUR_SRC_DIR}css/parser/css_parser_local_context.cc
  #${CUR_SRC_DIR}css/parser/css_parser_local_context.h
  #${CUR_SRC_DIR}css/parser/css_parser_mode.h
  #${CUR_SRC_DIR}css/parser/css_parser_observer.h
  ${CUR_SRC_DIR}css/parser/css_parser_selector.cc
  #${CUR_SRC_DIR}css/parser/css_parser_selector.h
  ${CUR_SRC_DIR}css/parser/css_parser_token.cc
  #${CUR_SRC_DIR}css/parser/css_parser_token.h
  ${CUR_SRC_DIR}css/parser/css_parser_token_range.cc
  #${CUR_SRC_DIR}css/parser/css_parser_token_range.h
  ${CUR_SRC_DIR}css/parser/css_parser_token_stream.cc
  #${CUR_SRC_DIR}css/parser/css_parser_token_stream.h
  ${CUR_SRC_DIR}css/parser/css_property_parser.cc
  #${CUR_SRC_DIR}css/parser/css_property_parser.h
  ${CUR_SRC_DIR}css/parser/css_property_parser_helpers.cc
  #${CUR_SRC_DIR}css/parser/css_property_parser_helpers.h
  ${CUR_SRC_DIR}css/parser/css_selector_parser.cc
  #${CUR_SRC_DIR}css/parser/css_selector_parser.h
  ${CUR_SRC_DIR}css/parser/css_supports_parser.cc
  #${CUR_SRC_DIR}css/parser/css_supports_parser.h
  ${CUR_SRC_DIR}css/parser/css_tokenizer.cc
  #${CUR_SRC_DIR}css/parser/css_tokenizer.h
  ${CUR_SRC_DIR}css/parser/css_tokenizer_input_stream.cc
  #${CUR_SRC_DIR}css/parser/css_tokenizer_input_stream.h
  ${CUR_SRC_DIR}css/parser/css_variable_parser.cc
  #${CUR_SRC_DIR}css/parser/css_variable_parser.h
  #${CUR_SRC_DIR}css/parser/font_variant_east_asian_parser.h
  #${CUR_SRC_DIR}css/parser/font_variant_ligatures_parser.h
  #${CUR_SRC_DIR}css/parser/font_variant_numeric_parser.h
  ${CUR_SRC_DIR}css/parser/media_query_block_watcher.cc
  #${CUR_SRC_DIR}css/parser/media_query_block_watcher.h
  ${CUR_SRC_DIR}css/parser/media_query_parser.cc
  #${CUR_SRC_DIR}css/parser/media_query_parser.h
  ${CUR_SRC_DIR}css/parser/sizes_attribute_parser.cc
  #${CUR_SRC_DIR}css/parser/sizes_attribute_parser.h
  ${CUR_SRC_DIR}css/parser/sizes_calc_parser.cc
  #${CUR_SRC_DIR}css/parser/sizes_calc_parser.h
  ${CUR_SRC_DIR}css/part_names.cc
  #${CUR_SRC_DIR}css/part_names.h
  ${CUR_SRC_DIR}css/properties/computed_style_utils.cc
  #${CUR_SRC_DIR}css/properties/computed_style_utils.h
  ${CUR_SRC_DIR}css/properties/css_parsing_utils.cc
  #${CUR_SRC_DIR}css/properties/css_parsing_utils.h
  ${CUR_SRC_DIR}css/properties/css_property.cc
  #${CUR_SRC_DIR}css/properties/css_property.h
  ${CUR_SRC_DIR}css/properties/css_property_ref.cc
  #${CUR_SRC_DIR}css/properties/css_property_ref.h
  ${CUR_SRC_DIR}css/properties/css_unresolved_property.cc
  #${CUR_SRC_DIR}css/properties/css_unresolved_property.h
  #${CUR_SRC_DIR}css/properties/longhand.h
  ${CUR_SRC_DIR}css/properties/longhands/custom_property.cc
  #${CUR_SRC_DIR}css/properties/longhands/custom_property.h
  ${CUR_SRC_DIR}css/properties/longhands/longhands_custom.cc
  ${CUR_SRC_DIR}css/properties/longhands/variable.cc
  #${CUR_SRC_DIR}css/properties/longhands/variable.h
  #${CUR_SRC_DIR}css/properties/shorthand.h
  ${CUR_SRC_DIR}css/properties/shorthands/shorthands_custom.cc
  #${CUR_SRC_DIR}css/properties/style_building_utils.h
  ${CUR_SRC_DIR}css/property_registration.cc
  #${CUR_SRC_DIR}css/property_registration.h
  ${CUR_SRC_DIR}css/property_registry.cc
  #${CUR_SRC_DIR}css/property_registry.h
  ${CUR_SRC_DIR}css/property_set_css_style_declaration.cc
  #${CUR_SRC_DIR}css/property_set_css_style_declaration.h
  #${CUR_SRC_DIR}css/pseudo_style_request.h
  ${CUR_SRC_DIR}css/remote_font_face_source.cc
  #${CUR_SRC_DIR}css/remote_font_face_source.h
  #${CUR_SRC_DIR}css/resolver/css_property_priority.h
  ${CUR_SRC_DIR}css/resolver/css_to_style_map.cc
  #${CUR_SRC_DIR}css/resolver/css_to_style_map.h
  ${CUR_SRC_DIR}css/resolver/css_variable_animator.cc
  #${CUR_SRC_DIR}css/resolver/css_variable_animator.h
  ${CUR_SRC_DIR}css/resolver/css_variable_resolver.cc
  #${CUR_SRC_DIR}css/resolver/css_variable_resolver.h
  ${CUR_SRC_DIR}css/resolver/element_resolve_context.cc
  #${CUR_SRC_DIR}css/resolver/element_resolve_context.h
  ${CUR_SRC_DIR}css/resolver/element_style_resources.cc
  #${CUR_SRC_DIR}css/resolver/element_style_resources.h
  ${CUR_SRC_DIR}css/resolver/filter_operation_resolver.cc
  #${CUR_SRC_DIR}css/resolver/filter_operation_resolver.h
  ${CUR_SRC_DIR}css/resolver/font_builder.cc
  #${CUR_SRC_DIR}css/resolver/font_builder.h
  ${CUR_SRC_DIR}css/resolver/font_style_resolver.cc
  #${CUR_SRC_DIR}css/resolver/font_style_resolver.h
  #${CUR_SRC_DIR}css/resolver/match_request.h
  ${CUR_SRC_DIR}css/resolver/match_result.cc
  #${CUR_SRC_DIR}css/resolver/match_result.h
  ${CUR_SRC_DIR}css/resolver/matched_properties_cache.cc
  #${CUR_SRC_DIR}css/resolver/matched_properties_cache.h
  #${CUR_SRC_DIR}css/resolver/media_query_result.h
  ${CUR_SRC_DIR}css/resolver/scoped_style_resolver.cc
  #${CUR_SRC_DIR}css/resolver/scoped_style_resolver.h
  ${CUR_SRC_DIR}css/resolver/selector_filter_parent_scope.cc
  #${CUR_SRC_DIR}css/resolver/selector_filter_parent_scope.h
  ${CUR_SRC_DIR}css/resolver/style_adjuster.cc
  #${CUR_SRC_DIR}css/resolver/style_adjuster.h
  ${CUR_SRC_DIR}css/resolver/style_builder.cc
  #${CUR_SRC_DIR}css/resolver/style_builder.h
  ${CUR_SRC_DIR}css/resolver/style_builder_converter.cc
  #${CUR_SRC_DIR}css/resolver/style_builder_converter.h
  ${CUR_SRC_DIR}css/resolver/style_resolver.cc
  #${CUR_SRC_DIR}css/resolver/style_resolver.h
  ${CUR_SRC_DIR}css/resolver/style_resolver_state.cc
  #${CUR_SRC_DIR}css/resolver/style_resolver_state.h
  ${CUR_SRC_DIR}css/resolver/style_resolver_stats.cc
  #${CUR_SRC_DIR}css/resolver/style_resolver_stats.h
  ${CUR_SRC_DIR}css/resolver/style_rule_usage_tracker.cc
  #${CUR_SRC_DIR}css/resolver/style_rule_usage_tracker.h
  ${CUR_SRC_DIR}css/resolver/transform_builder.cc
  #${CUR_SRC_DIR}css/resolver/transform_builder.h
  ${CUR_SRC_DIR}css/resolver/viewport_style_resolver.cc
  #${CUR_SRC_DIR}css/resolver/viewport_style_resolver.h
  ${CUR_SRC_DIR}css/rule_feature_set.cc
  #${CUR_SRC_DIR}css/rule_feature_set.h
  ${CUR_SRC_DIR}css/rule_set.cc
  #${CUR_SRC_DIR}css/rule_set.h
  ${CUR_SRC_DIR}css/select_rule_feature_set.cc
  #${CUR_SRC_DIR}css/select_rule_feature_set.h
  ${CUR_SRC_DIR}css/selector_checker.cc
  #${CUR_SRC_DIR}css/selector_checker.h
  ${CUR_SRC_DIR}css/selector_filter.cc
  #${CUR_SRC_DIR}css/selector_filter.h
  ${CUR_SRC_DIR}css/selector_query.cc
  #${CUR_SRC_DIR}css/selector_query.h
  ${CUR_SRC_DIR}css/shadow_tree_style_sheet_collection.cc
  #${CUR_SRC_DIR}css/shadow_tree_style_sheet_collection.h
  ${CUR_SRC_DIR}css/style_attribute_mutation_scope.cc
  #${CUR_SRC_DIR}css/style_attribute_mutation_scope.h
  #${CUR_SRC_DIR}css/style_auto_color.h
  ${CUR_SRC_DIR}css/style_change_reason.cc
  #${CUR_SRC_DIR}css/style_change_reason.h
  ${CUR_SRC_DIR}css/style_color.cc
  #${CUR_SRC_DIR}css/style_color.h
  ${CUR_SRC_DIR}css/style_element.cc
  #${CUR_SRC_DIR}css/style_element.h
  ${CUR_SRC_DIR}css/style_engine.cc
  #${CUR_SRC_DIR}css/style_engine.h
  ${CUR_SRC_DIR}css/style_engine_context.cc
  #${CUR_SRC_DIR}css/style_engine_context.h
  ${CUR_SRC_DIR}css/style_environment_variables.cc
  #${CUR_SRC_DIR}css/style_environment_variables.h
  ${CUR_SRC_DIR}css/style_invalidation_root.cc
  #${CUR_SRC_DIR}css/style_invalidation_root.h
  ${CUR_SRC_DIR}css/style_media.cc
  #${CUR_SRC_DIR}css/style_media.h
  ${CUR_SRC_DIR}css/style_property_serializer.cc
  #${CUR_SRC_DIR}css/style_property_serializer.h
  ${CUR_SRC_DIR}css/style_property_shorthand_custom.cc
  ${CUR_SRC_DIR}css/style_recalc.cc
  #${CUR_SRC_DIR}css/style_recalc.h
  ${CUR_SRC_DIR}css/style_recalc_root.cc
  #${CUR_SRC_DIR}css/style_recalc_root.h
  ${CUR_SRC_DIR}css/style_rule.cc
  #${CUR_SRC_DIR}css/style_rule.h
  ${CUR_SRC_DIR}css/style_rule_css_style_declaration.cc
  #${CUR_SRC_DIR}css/style_rule_css_style_declaration.h
  ${CUR_SRC_DIR}css/style_rule_import.cc
  #${CUR_SRC_DIR}css/style_rule_import.h
  ${CUR_SRC_DIR}css/style_rule_keyframe.cc
  #${CUR_SRC_DIR}css/style_rule_keyframe.h
  #${CUR_SRC_DIR}css/style_rule_namespace.h
  ${CUR_SRC_DIR}css/style_sheet.cc
  #${CUR_SRC_DIR}css/style_sheet.h
  ${CUR_SRC_DIR}css/style_sheet_candidate.cc
  #${CUR_SRC_DIR}css/style_sheet_candidate.h
  ${CUR_SRC_DIR}css/style_sheet_collection.cc
  #${CUR_SRC_DIR}css/style_sheet_collection.h
  ${CUR_SRC_DIR}css/style_sheet_contents.cc
  #${CUR_SRC_DIR}css/style_sheet_contents.h
  ${CUR_SRC_DIR}css/style_sheet_list.cc
  #${CUR_SRC_DIR}css/style_sheet_list.h
  ${CUR_SRC_DIR}css/style_traversal_root.cc
  #${CUR_SRC_DIR}css/style_traversal_root.h
  ${CUR_SRC_DIR}css/tree_scope_style_sheet_collection.cc
  #${CUR_SRC_DIR}css/tree_scope_style_sheet_collection.h
  #${CUR_SRC_DIR}css/zoom_adjusted_pixel_value.h
)

list(APPEND BLINK_RENDERER_DOM_SOURCES
  ${CUR_SRC_DIR}dom/abort_controller.cc
  #${CUR_SRC_DIR}dom/abort_controller.h
  ${CUR_SRC_DIR}dom/abort_signal.cc
  #${CUR_SRC_DIR}dom/abort_signal.h
  ${CUR_SRC_DIR}dom/attr.cc
  #${CUR_SRC_DIR}dom/attr.h
  #${CUR_SRC_DIR}dom/attribute.h
  #${CUR_SRC_DIR}dom/attribute_collection.h
  ${CUR_SRC_DIR}dom/beforeunload_event_listener.cc
  #${CUR_SRC_DIR}dom/beforeunload_event_listener.h
  ${CUR_SRC_DIR}dom/cdata_section.cc
  #${CUR_SRC_DIR}dom/cdata_section.h
  ${CUR_SRC_DIR}dom/character_data.cc
  #${CUR_SRC_DIR}dom/character_data.h
  ${CUR_SRC_DIR}dom/child_frame_disconnector.cc
  #${CUR_SRC_DIR}dom/child_frame_disconnector.h
  ${CUR_SRC_DIR}dom/child_list_mutation_scope.cc
  #${CUR_SRC_DIR}dom/child_list_mutation_scope.h
  #${CUR_SRC_DIR}dom/child_node.h
  ${CUR_SRC_DIR}dom/child_node_list.cc
  #${CUR_SRC_DIR}dom/child_node_list.h
  ${CUR_SRC_DIR}dom/class_collection.cc
  #${CUR_SRC_DIR}dom/class_collection.h
  #${CUR_SRC_DIR}dom/collection_index_cache.h
  ${CUR_SRC_DIR}dom/comment.cc
  #${CUR_SRC_DIR}dom/comment.h
  ${CUR_SRC_DIR}dom/container_node.cc
  #${CUR_SRC_DIR}dom/container_node.h
  ${CUR_SRC_DIR}dom/context_features.cc
  #${CUR_SRC_DIR}dom/context_features.h
  ${CUR_SRC_DIR}dom/context_features_client_impl.cc
  #${CUR_SRC_DIR}dom/context_features_client_impl.h
  #${CUR_SRC_DIR}dom/create_element_flags.h
  ${CUR_SRC_DIR}dom/dataset_dom_string_map.cc
  #${CUR_SRC_DIR}dom/dataset_dom_string_map.h
  ${CUR_SRC_DIR}dom/decoded_data_document_parser.cc
  #${CUR_SRC_DIR}dom/decoded_data_document_parser.h
  ${CUR_SRC_DIR}dom/distributed_nodes.cc
  #${CUR_SRC_DIR}dom/distributed_nodes.h
  ${CUR_SRC_DIR}dom/document.cc
  #${CUR_SRC_DIR}dom/document.h
  #${CUR_SRC_DIR}dom/document_and_element_event_handlers.h
  ${CUR_SRC_DIR}dom/document_encoding_data.cc
  #${CUR_SRC_DIR}dom/document_encoding_data.h
  ${CUR_SRC_DIR}dom/document_fragment.cc
  #${CUR_SRC_DIR}dom/document_fragment.h
  ${CUR_SRC_DIR}dom/document_init.cc
  #${CUR_SRC_DIR}dom/document_init.h
  ${CUR_SRC_DIR}dom/document_lifecycle.cc
  #${CUR_SRC_DIR}dom/document_lifecycle.h
  #${CUR_SRC_DIR}dom/document_or_shadow_root.h
  ${CUR_SRC_DIR}dom/document_parser.cc
  #${CUR_SRC_DIR}dom/document_parser.h
  #${CUR_SRC_DIR}dom/document_parser_client.h
  ${CUR_SRC_DIR}dom/document_parser_timing.cc
  #${CUR_SRC_DIR}dom/document_parser_timing.h
  ${CUR_SRC_DIR}dom/document_shutdown_notifier.cc
  #${CUR_SRC_DIR}dom/document_shutdown_notifier.h
  ${CUR_SRC_DIR}dom/document_shutdown_observer.cc
  #${CUR_SRC_DIR}dom/document_shutdown_observer.h
  ${CUR_SRC_DIR}dom/document_statistics_collector.cc
  #${CUR_SRC_DIR}dom/document_statistics_collector.h
  ${CUR_SRC_DIR}dom/document_timing.cc
  #${CUR_SRC_DIR}dom/document_timing.h
  ${CUR_SRC_DIR}dom/document_type.cc
  #${CUR_SRC_DIR}dom/document_type.h
  ${CUR_SRC_DIR}dom/dom_exception.cc
  #${CUR_SRC_DIR}dom/dom_exception.h
  #${CUR_SRC_DIR}dom/dom_high_res_time_stamp.h
  ${CUR_SRC_DIR}dom/dom_implementation.cc
  #${CUR_SRC_DIR}dom/dom_implementation.h
  ${CUR_SRC_DIR}dom/dom_node_ids.cc
  #${CUR_SRC_DIR}dom/dom_node_ids.h
  ${CUR_SRC_DIR}dom/dom_string_list.cc
  #${CUR_SRC_DIR}dom/dom_string_list.h
  ${CUR_SRC_DIR}dom/dom_string_map.cc
  #${CUR_SRC_DIR}dom/dom_string_map.h
  #${CUR_SRC_DIR}dom/dom_time_stamp.h
  ${CUR_SRC_DIR}dom/dom_token_list.cc
  #${CUR_SRC_DIR}dom/dom_token_list.h
  ${CUR_SRC_DIR}dom/element.cc
  #${CUR_SRC_DIR}dom/element.h
  ${CUR_SRC_DIR}dom/element_data.cc
  #${CUR_SRC_DIR}dom/element_data.h
  ${CUR_SRC_DIR}dom/element_data_cache.cc
  #${CUR_SRC_DIR}dom/element_data_cache.h
  ${CUR_SRC_DIR}dom/element_rare_data.cc
  #${CUR_SRC_DIR}dom/element_rare_data.h
  #${CUR_SRC_DIR}dom/element_traversal.h
  ${CUR_SRC_DIR}dom/empty_node_list.cc
  #${CUR_SRC_DIR}dom/empty_node_list.h
  #${CUR_SRC_DIR}dom/events/add_event_listener_options_defaults.h
  ${CUR_SRC_DIR}dom/events/add_event_listener_options_resolved.cc
  #${CUR_SRC_DIR}dom/events/add_event_listener_options_resolved.h
  ${CUR_SRC_DIR}dom/events/custom_event.cc
  #${CUR_SRC_DIR}dom/events/custom_event.h
  ${CUR_SRC_DIR}dom/events/event.cc
  #${CUR_SRC_DIR}dom/events/event.h
  ${CUR_SRC_DIR}dom/events/event_dispatch_forbidden_scope.cc
  #${CUR_SRC_DIR}dom/events/event_dispatch_forbidden_scope.h
  #${CUR_SRC_DIR}dom/events/event_dispatch_result.h
  ${CUR_SRC_DIR}dom/events/event_dispatcher.cc
  #${CUR_SRC_DIR}dom/events/event_dispatcher.h
  #${CUR_SRC_DIR}dom/events/event_listener.h
  ${CUR_SRC_DIR}dom/events/event_listener_map.cc
  #${CUR_SRC_DIR}dom/events/event_listener_map.h
  ${CUR_SRC_DIR}dom/events/event_path.cc
  #${CUR_SRC_DIR}dom/events/event_path.h
  ${CUR_SRC_DIR}dom/events/event_queue.cc
  #${CUR_SRC_DIR}dom/events/event_queue.h
  ${CUR_SRC_DIR}dom/events/event_target.cc
  #${CUR_SRC_DIR}dom/events/event_target.h
  ${CUR_SRC_DIR}dom/events/event_target_impl.cc
  #${CUR_SRC_DIR}dom/events/event_target_impl.h
  #${CUR_SRC_DIR}dom/events/native_event_listener.h
  ${CUR_SRC_DIR}dom/events/node_event_context.cc
  #${CUR_SRC_DIR}dom/events/node_event_context.h
  ${CUR_SRC_DIR}dom/events/registered_event_listener.cc
  #${CUR_SRC_DIR}dom/events/registered_event_listener.h
  ${CUR_SRC_DIR}dom/events/scoped_event_queue.cc
  #${CUR_SRC_DIR}dom/events/scoped_event_queue.h
  #${CUR_SRC_DIR}dom/events/simulated_click_options.h
  ${CUR_SRC_DIR}dom/events/tree_scope_event_context.cc
  #${CUR_SRC_DIR}dom/events/tree_scope_event_context.h
  ${CUR_SRC_DIR}dom/events/window_event_context.cc
  #${CUR_SRC_DIR}dom/events/window_event_context.h
  ${CUR_SRC_DIR}dom/first_letter_pseudo_element.cc
  #${CUR_SRC_DIR}dom/first_letter_pseudo_element.h
  ${CUR_SRC_DIR}dom/flat_tree_node_data.cc
  #${CUR_SRC_DIR}dom/flat_tree_node_data.h
  ${CUR_SRC_DIR}dom/flat_tree_traversal.cc
  #${CUR_SRC_DIR}dom/flat_tree_traversal.h
  #${CUR_SRC_DIR}dom/flat_tree_traversal_forbidden_scope.h
  ${CUR_SRC_DIR}dom/frame_request_callback_collection.cc
  #${CUR_SRC_DIR}dom/frame_request_callback_collection.h
  #${CUR_SRC_DIR}dom/global_event_handlers.h
  ${CUR_SRC_DIR}dom/icon_url.cc
  #${CUR_SRC_DIR}dom/icon_url.h
  ${CUR_SRC_DIR}dom/id_target_observer.cc
  #${CUR_SRC_DIR}dom/id_target_observer.h
  ${CUR_SRC_DIR}dom/id_target_observer_registry.cc
  #${CUR_SRC_DIR}dom/id_target_observer_registry.h
  ${CUR_SRC_DIR}dom/idle_deadline.cc
  #${CUR_SRC_DIR}dom/idle_deadline.h
  #${CUR_SRC_DIR}dom/ignore_opens_during_unload_count_incrementer.h
  ${CUR_SRC_DIR}dom/increment_load_event_delay_count.cc
  #${CUR_SRC_DIR}dom/increment_load_event_delay_count.h
  #${CUR_SRC_DIR}dom/iterator.h
  ${CUR_SRC_DIR}dom/layout_tree_builder.cc
  #${CUR_SRC_DIR}dom/layout_tree_builder.h
  ${CUR_SRC_DIR}dom/layout_tree_builder_traversal.cc
  #${CUR_SRC_DIR}dom/layout_tree_builder_traversal.h
  ${CUR_SRC_DIR}dom/live_node_list.cc
  #${CUR_SRC_DIR}dom/live_node_list.h
  ${CUR_SRC_DIR}dom/live_node_list_base.cc
  #${CUR_SRC_DIR}dom/live_node_list_base.h
  ${CUR_SRC_DIR}dom/live_node_list_registry.cc
  #${CUR_SRC_DIR}dom/live_node_list_registry.h
  ${CUR_SRC_DIR}dom/mutation_observer.cc
  #${CUR_SRC_DIR}dom/mutation_observer.h
  ${CUR_SRC_DIR}dom/mutation_observer_interest_group.cc
  #${CUR_SRC_DIR}dom/mutation_observer_interest_group.h
  ${CUR_SRC_DIR}dom/mutation_observer_registration.cc
  #${CUR_SRC_DIR}dom/mutation_observer_registration.h
  ${CUR_SRC_DIR}dom/mutation_record.cc
  #${CUR_SRC_DIR}dom/mutation_record.h
  ${CUR_SRC_DIR}dom/name_node_list.cc
  #${CUR_SRC_DIR}dom/name_node_list.h
  ${CUR_SRC_DIR}dom/named_node_map.cc
  #${CUR_SRC_DIR}dom/named_node_map.h
  ${CUR_SRC_DIR}dom/names_map.cc
  #${CUR_SRC_DIR}dom/names_map.h
  ${CUR_SRC_DIR}dom/node.cc
  #${CUR_SRC_DIR}dom/node.h
  ${CUR_SRC_DIR}dom/node_child_removal_tracker.cc
  #${CUR_SRC_DIR}dom/node_child_removal_tracker.h
  #${CUR_SRC_DIR}dom/node_computed_style.h
  ${CUR_SRC_DIR}dom/node_iterator.cc
  #${CUR_SRC_DIR}dom/node_iterator.h
  ${CUR_SRC_DIR}dom/node_iterator_base.cc
  #${CUR_SRC_DIR}dom/node_iterator_base.h
  #${CUR_SRC_DIR}dom/node_list.h
  ${CUR_SRC_DIR}dom/node_lists_node_data.cc
  #${CUR_SRC_DIR}dom/node_lists_node_data.h
  ${CUR_SRC_DIR}dom/node_rare_data.cc
  #${CUR_SRC_DIR}dom/node_rare_data.h
  ${CUR_SRC_DIR}dom/node_traversal.cc
  #${CUR_SRC_DIR}dom/node_traversal.h
  #${CUR_SRC_DIR}dom/node_traversal_strategy.h
  #${CUR_SRC_DIR}dom/node_with_index.h
  #${CUR_SRC_DIR}dom/non_document_type_child_node.h
  #${CUR_SRC_DIR}dom/non_element_parent_node.h
  ${CUR_SRC_DIR}dom/nth_index_cache.cc
  #${CUR_SRC_DIR}dom/nth_index_cache.h
  #${CUR_SRC_DIR}dom/parent_node.h
  #${CUR_SRC_DIR}dom/parser_content_policy.h
  ${CUR_SRC_DIR}dom/presentation_attribute_style.cc
  #${CUR_SRC_DIR}dom/presentation_attribute_style.h
  ${CUR_SRC_DIR}dom/processing_instruction.cc
  #${CUR_SRC_DIR}dom/processing_instruction.h
  ${CUR_SRC_DIR}dom/pseudo_element.cc
  #${CUR_SRC_DIR}dom/pseudo_element.h
  #${CUR_SRC_DIR}dom/pseudo_element_data.h
  ${CUR_SRC_DIR}dom/qualified_name.cc
  #${CUR_SRC_DIR}dom/qualified_name.h
  ${CUR_SRC_DIR}dom/range.cc
  #${CUR_SRC_DIR}dom/range.h
  #${CUR_SRC_DIR}dom/range_boundary_point.h
  #${CUR_SRC_DIR}dom/raw_data_document_parser.h
  #${CUR_SRC_DIR}dom/scoped_window_focus_allowed_indicator.h
  ${CUR_SRC_DIR}dom/scriptable_document_parser.cc
  #${CUR_SRC_DIR}dom/scriptable_document_parser.h
  ${CUR_SRC_DIR}dom/scripted_animation_controller.cc
  #${CUR_SRC_DIR}dom/scripted_animation_controller.h
  ${CUR_SRC_DIR}dom/scripted_idle_task_controller.cc
  #${CUR_SRC_DIR}dom/scripted_idle_task_controller.h
  ${CUR_SRC_DIR}dom/scripted_task_queue.cc
  #${CUR_SRC_DIR}dom/scripted_task_queue.h
  ${CUR_SRC_DIR}dom/scripted_task_queue_controller.cc
  #${CUR_SRC_DIR}dom/scripted_task_queue_controller.h
  ${CUR_SRC_DIR}dom/shadow_root.cc
  #${CUR_SRC_DIR}dom/shadow_root.h
  ${CUR_SRC_DIR}dom/shadow_root_v0.cc
  #${CUR_SRC_DIR}dom/shadow_root_v0.h
  ${CUR_SRC_DIR}dom/sink_document.cc
  #${CUR_SRC_DIR}dom/sink_document.h
  ${CUR_SRC_DIR}dom/slot_assignment.cc
  #${CUR_SRC_DIR}dom/slot_assignment.h
  ${CUR_SRC_DIR}dom/slot_assignment_engine.cc
  #${CUR_SRC_DIR}dom/slot_assignment_engine.h
  #${CUR_SRC_DIR}dom/slot_assignment_recalc_forbidden_scope.h
  ${CUR_SRC_DIR}dom/space_split_string.cc
  #${CUR_SRC_DIR}dom/space_split_string.h
  #${CUR_SRC_DIR}dom/static_node_list.h
  ${CUR_SRC_DIR}dom/static_range.cc
  #${CUR_SRC_DIR}dom/static_range.h
  ${CUR_SRC_DIR}dom/synchronous_mutation_notifier.cc
  #${CUR_SRC_DIR}dom/synchronous_mutation_notifier.h
  ${CUR_SRC_DIR}dom/synchronous_mutation_observer.cc
  #${CUR_SRC_DIR}dom/synchronous_mutation_observer.h
  ${CUR_SRC_DIR}dom/tag_collection.cc
  #${CUR_SRC_DIR}dom/tag_collection.h
  #${CUR_SRC_DIR}dom/task_type_traits.h
  #${CUR_SRC_DIR}dom/template_content_document_fragment.h
  ${CUR_SRC_DIR}dom/text.cc
  #${CUR_SRC_DIR}dom/text.h
  ${CUR_SRC_DIR}dom/text_link_colors.cc
  #${CUR_SRC_DIR}dom/text_link_colors.h
  #${CUR_SRC_DIR}dom/throw_on_dynamic_markup_insertion_count_incrementer.h
  #${CUR_SRC_DIR}dom/transform_source.h
  ${CUR_SRC_DIR}dom/transform_source_libxslt.cc
  #${CUR_SRC_DIR}dom/traversal_range.h
  ${CUR_SRC_DIR}dom/tree_ordered_list.cc
  #${CUR_SRC_DIR}dom/tree_ordered_list.h
  ${CUR_SRC_DIR}dom/tree_ordered_map.cc
  #${CUR_SRC_DIR}dom/tree_ordered_map.h
  ${CUR_SRC_DIR}dom/tree_scope.cc
  #${CUR_SRC_DIR}dom/tree_scope.h
  ${CUR_SRC_DIR}dom/tree_scope_adopter.cc
  #${CUR_SRC_DIR}dom/tree_scope_adopter.h
  ${CUR_SRC_DIR}dom/tree_walker.cc
  #${CUR_SRC_DIR}dom/tree_walker.h
  ${CUR_SRC_DIR}dom/user_action_element_set.cc
  #${CUR_SRC_DIR}dom/user_action_element_set.h
  ${CUR_SRC_DIR}dom/user_gesture_indicator.cc
  #${CUR_SRC_DIR}dom/user_gesture_indicator.h
  ${CUR_SRC_DIR}dom/v0_insertion_point.cc
  #${CUR_SRC_DIR}dom/v0_insertion_point.h
  ${CUR_SRC_DIR}dom/visited_link_state.cc
  #${CUR_SRC_DIR}dom/visited_link_state.h
  #${CUR_SRC_DIR}dom/weak_identifier_map.h
  ${CUR_SRC_DIR}dom/whitespace_attacher.cc
  #${CUR_SRC_DIR}dom/whitespace_attacher.h
  ${CUR_SRC_DIR}dom/xml_document.cc
  #${CUR_SRC_DIR}dom/xml_document.h
)

list(APPEND BLINK_RENDERER_EDITING_SOURCES
  ${CUR_SRC_DIR}editing/caret_display_item_client.cc
  #${CUR_SRC_DIR}editing/caret_display_item_client.h
  ${CUR_SRC_DIR}editing/commands/append_node_command.cc
  #${CUR_SRC_DIR}editing/commands/append_node_command.h
  ${CUR_SRC_DIR}editing/commands/apply_block_element_command.cc
  #${CUR_SRC_DIR}editing/commands/apply_block_element_command.h
  ${CUR_SRC_DIR}editing/commands/apply_style_command.cc
  #${CUR_SRC_DIR}editing/commands/apply_style_command.h
  ${CUR_SRC_DIR}editing/commands/break_blockquote_command.cc
  #${CUR_SRC_DIR}editing/commands/break_blockquote_command.h
  ${CUR_SRC_DIR}editing/commands/clipboard_commands.cc
  #${CUR_SRC_DIR}editing/commands/clipboard_commands.h
  ${CUR_SRC_DIR}editing/commands/composite_edit_command.cc
  #${CUR_SRC_DIR}editing/commands/composite_edit_command.h
  ${CUR_SRC_DIR}editing/commands/create_link_command.cc
  #${CUR_SRC_DIR}editing/commands/create_link_command.h
  ${CUR_SRC_DIR}editing/commands/delete_from_text_node_command.cc
  #${CUR_SRC_DIR}editing/commands/delete_from_text_node_command.h
  ${CUR_SRC_DIR}editing/commands/delete_selection_command.cc
  #${CUR_SRC_DIR}editing/commands/delete_selection_command.h
  ${CUR_SRC_DIR}editing/commands/delete_selection_options.cc
  #${CUR_SRC_DIR}editing/commands/delete_selection_options.h
  ${CUR_SRC_DIR}editing/commands/document_exec_command.cc
  ${CUR_SRC_DIR}editing/commands/drag_and_drop_command.cc
  #${CUR_SRC_DIR}editing/commands/drag_and_drop_command.h
  ${CUR_SRC_DIR}editing/commands/edit_command.cc
  #${CUR_SRC_DIR}editing/commands/edit_command.h
  ${CUR_SRC_DIR}editing/commands/editing_commands_utilities.cc
  #${CUR_SRC_DIR}editing/commands/editing_commands_utilities.h
  ${CUR_SRC_DIR}editing/commands/editing_state.cc
  #${CUR_SRC_DIR}editing/commands/editing_state.h
  ${CUR_SRC_DIR}editing/commands/editor_command.cc
  #${CUR_SRC_DIR}editing/commands/editor_command.h
  #${CUR_SRC_DIR}editing/commands/editor_command_names.h
  ${CUR_SRC_DIR}editing/commands/format_block_command.cc
  #${CUR_SRC_DIR}editing/commands/format_block_command.h
  ${CUR_SRC_DIR}editing/commands/indent_outdent_command.cc
  #${CUR_SRC_DIR}editing/commands/indent_outdent_command.h
  ${CUR_SRC_DIR}editing/commands/insert_commands.cc
  #${CUR_SRC_DIR}editing/commands/insert_commands.h
  ${CUR_SRC_DIR}editing/commands/insert_incremental_text_command.cc
  #${CUR_SRC_DIR}editing/commands/insert_incremental_text_command.h
  ${CUR_SRC_DIR}editing/commands/insert_into_text_node_command.cc
  #${CUR_SRC_DIR}editing/commands/insert_into_text_node_command.h
  ${CUR_SRC_DIR}editing/commands/insert_line_break_command.cc
  #${CUR_SRC_DIR}editing/commands/insert_line_break_command.h
  ${CUR_SRC_DIR}editing/commands/insert_list_command.cc
  #${CUR_SRC_DIR}editing/commands/insert_list_command.h
  ${CUR_SRC_DIR}editing/commands/insert_node_before_command.cc
  #${CUR_SRC_DIR}editing/commands/insert_node_before_command.h
  ${CUR_SRC_DIR}editing/commands/insert_paragraph_separator_command.cc
  #${CUR_SRC_DIR}editing/commands/insert_paragraph_separator_command.h
  ${CUR_SRC_DIR}editing/commands/insert_text_command.cc
  #${CUR_SRC_DIR}editing/commands/insert_text_command.h
  ${CUR_SRC_DIR}editing/commands/merge_identical_elements_command.cc
  #${CUR_SRC_DIR}editing/commands/merge_identical_elements_command.h
  ${CUR_SRC_DIR}editing/commands/move_commands.cc
  #${CUR_SRC_DIR}editing/commands/move_commands.h
  ${CUR_SRC_DIR}editing/commands/remove_css_property_command.cc
  #${CUR_SRC_DIR}editing/commands/remove_css_property_command.h
  ${CUR_SRC_DIR}editing/commands/remove_format_command.cc
  #${CUR_SRC_DIR}editing/commands/remove_format_command.h
  ${CUR_SRC_DIR}editing/commands/remove_node_command.cc
  #${CUR_SRC_DIR}editing/commands/remove_node_command.h
  ${CUR_SRC_DIR}editing/commands/remove_node_preserving_children_command.cc
  #${CUR_SRC_DIR}editing/commands/remove_node_preserving_children_command.h
  ${CUR_SRC_DIR}editing/commands/replace_node_with_span_command.cc
  #${CUR_SRC_DIR}editing/commands/replace_node_with_span_command.h
  ${CUR_SRC_DIR}editing/commands/replace_selection_command.cc
  #${CUR_SRC_DIR}editing/commands/replace_selection_command.h
  ${CUR_SRC_DIR}editing/commands/selection_for_undo_step.cc
  #${CUR_SRC_DIR}editing/commands/selection_for_undo_step.h
  ${CUR_SRC_DIR}editing/commands/set_character_data_command.cc
  #${CUR_SRC_DIR}editing/commands/set_character_data_command.h
  ${CUR_SRC_DIR}editing/commands/set_node_attribute_command.cc
  #${CUR_SRC_DIR}editing/commands/set_node_attribute_command.h
  ${CUR_SRC_DIR}editing/commands/simplify_markup_command.cc
  #${CUR_SRC_DIR}editing/commands/simplify_markup_command.h
  #${CUR_SRC_DIR}editing/commands/smart_replace.h
  ${CUR_SRC_DIR}editing/commands/smart_replace_icu.cc
  ${CUR_SRC_DIR}editing/commands/split_element_command.cc
  #${CUR_SRC_DIR}editing/commands/split_element_command.h
  ${CUR_SRC_DIR}editing/commands/split_text_node_command.cc
  #${CUR_SRC_DIR}editing/commands/split_text_node_command.h
  ${CUR_SRC_DIR}editing/commands/split_text_node_containing_element_command.cc
  #${CUR_SRC_DIR}editing/commands/split_text_node_containing_element_command.h
  ${CUR_SRC_DIR}editing/commands/style_commands.cc
  #${CUR_SRC_DIR}editing/commands/style_commands.h
  ${CUR_SRC_DIR}editing/commands/typing_command.cc
  #${CUR_SRC_DIR}editing/commands/typing_command.h
  ${CUR_SRC_DIR}editing/commands/undo_stack.cc
  #${CUR_SRC_DIR}editing/commands/undo_stack.h
  ${CUR_SRC_DIR}editing/commands/undo_step.cc
  #${CUR_SRC_DIR}editing/commands/undo_step.h
  ${CUR_SRC_DIR}editing/commands/unlink_command.cc
  #${CUR_SRC_DIR}editing/commands/unlink_command.h
  ${CUR_SRC_DIR}editing/commands/wrap_contents_in_dummy_span_command.cc
  #${CUR_SRC_DIR}editing/commands/wrap_contents_in_dummy_span_command.h
  ${CUR_SRC_DIR}editing/compute_layer_selection.cc
  #${CUR_SRC_DIR}editing/compute_layer_selection.h
  ${CUR_SRC_DIR}editing/dom_selection.cc
  #${CUR_SRC_DIR}editing/dom_selection.h
  ${CUR_SRC_DIR}editing/drag_caret.cc
  #${CUR_SRC_DIR}editing/drag_caret.h
  ${CUR_SRC_DIR}editing/editing_behavior.cc
  #${CUR_SRC_DIR}editing/editing_behavior.h
  #${CUR_SRC_DIR}editing/editing_behavior_types.h
  #${CUR_SRC_DIR}editing/editing_boundary.h
  ${CUR_SRC_DIR}editing/editing_strategy.cc
  #${CUR_SRC_DIR}editing/editing_strategy.h
  ${CUR_SRC_DIR}editing/editing_style.cc
  #${CUR_SRC_DIR}editing/editing_style.h
  ${CUR_SRC_DIR}editing/editing_style_utilities.cc
  #${CUR_SRC_DIR}editing/editing_style_utilities.h
  #${CUR_SRC_DIR}editing/editing_tri_state.h
  ${CUR_SRC_DIR}editing/editing_utilities.cc
  #${CUR_SRC_DIR}editing/editing_utilities.h
  ${CUR_SRC_DIR}editing/editor.cc
  #${CUR_SRC_DIR}editing/editor.h
  ${CUR_SRC_DIR}editing/editor_key_bindings.cc
  ${CUR_SRC_DIR}editing/element_inner_text.cc
  ${CUR_SRC_DIR}editing/ephemeral_range.cc
  #${CUR_SRC_DIR}editing/ephemeral_range.h
  ${CUR_SRC_DIR}editing/finder/find_buffer.cc
  #${CUR_SRC_DIR}editing/finder/find_buffer.h
  ${CUR_SRC_DIR}editing/finder/find_in_page_coordinates.cc
  #${CUR_SRC_DIR}editing/finder/find_in_page_coordinates.h
  ${CUR_SRC_DIR}editing/finder/find_task_controller.cc
  #${CUR_SRC_DIR}editing/finder/find_task_controller.h
  ${CUR_SRC_DIR}editing/finder/text_finder.cc
  #${CUR_SRC_DIR}editing/finder/text_finder.h
  #${CUR_SRC_DIR}editing/forward.h
  ${CUR_SRC_DIR}editing/frame_caret.cc
  #${CUR_SRC_DIR}editing/frame_caret.h
  ${CUR_SRC_DIR}editing/frame_selection.cc
  #${CUR_SRC_DIR}editing/frame_selection.h
  ${CUR_SRC_DIR}editing/granularity_strategy.cc
  #${CUR_SRC_DIR}editing/granularity_strategy.h
  ${CUR_SRC_DIR}editing/ime/ime_text_span.cc
  #${CUR_SRC_DIR}editing/ime/ime_text_span.h
  ${CUR_SRC_DIR}editing/ime/ime_text_span_vector_builder.cc
  #${CUR_SRC_DIR}editing/ime/ime_text_span_vector_builder.h
  ${CUR_SRC_DIR}editing/ime/input_method_controller.cc
  #${CUR_SRC_DIR}editing/ime/input_method_controller.h
  ${CUR_SRC_DIR}editing/inline_box_position.cc
  #${CUR_SRC_DIR}editing/inline_box_position.h
  ${CUR_SRC_DIR}editing/inline_box_traversal.cc
  #${CUR_SRC_DIR}editing/inline_box_traversal.h
  ${CUR_SRC_DIR}editing/iterators/backwards_character_iterator.cc
  #${CUR_SRC_DIR}editing/iterators/backwards_character_iterator.h
  ${CUR_SRC_DIR}editing/iterators/bit_stack.cc
  #${CUR_SRC_DIR}editing/iterators/bit_stack.h
  ${CUR_SRC_DIR}editing/iterators/character_iterator.cc
  #${CUR_SRC_DIR}editing/iterators/character_iterator.h
  ${CUR_SRC_DIR}editing/iterators/fully_clipped_state_stack.cc
  #${CUR_SRC_DIR}editing/iterators/fully_clipped_state_stack.h
  ${CUR_SRC_DIR}editing/iterators/simplified_backwards_text_iterator.cc
  #${CUR_SRC_DIR}editing/iterators/simplified_backwards_text_iterator.h
  ${CUR_SRC_DIR}editing/iterators/text_iterator.cc
  #${CUR_SRC_DIR}editing/iterators/text_iterator.h
  ${CUR_SRC_DIR}editing/iterators/text_iterator_behavior.cc
  #${CUR_SRC_DIR}editing/iterators/text_iterator_behavior.h
  ${CUR_SRC_DIR}editing/iterators/text_iterator_text_node_handler.cc
  #${CUR_SRC_DIR}editing/iterators/text_iterator_text_node_handler.h
  ${CUR_SRC_DIR}editing/iterators/text_iterator_text_state.cc
  #${CUR_SRC_DIR}editing/iterators/text_iterator_text_state.h
  ${CUR_SRC_DIR}editing/iterators/text_searcher_icu.cc
  #${CUR_SRC_DIR}editing/iterators/text_searcher_icu.h
  #${CUR_SRC_DIR}editing/kill_ring.h
  ${CUR_SRC_DIR}editing/layout_selection.cc
  #${CUR_SRC_DIR}editing/layout_selection.h
  ${CUR_SRC_DIR}editing/local_caret_rect.cc
  #${CUR_SRC_DIR}editing/local_caret_rect.h
  ${CUR_SRC_DIR}editing/markers/active_suggestion_marker.cc
  #${CUR_SRC_DIR}editing/markers/active_suggestion_marker.h
  ${CUR_SRC_DIR}editing/markers/active_suggestion_marker_list_impl.cc
  #${CUR_SRC_DIR}editing/markers/active_suggestion_marker_list_impl.h
  ${CUR_SRC_DIR}editing/markers/composition_marker.cc
  #${CUR_SRC_DIR}editing/markers/composition_marker.h
  ${CUR_SRC_DIR}editing/markers/composition_marker_list_impl.cc
  #${CUR_SRC_DIR}editing/markers/composition_marker_list_impl.h
  ${CUR_SRC_DIR}editing/markers/document_marker.cc
  #${CUR_SRC_DIR}editing/markers/document_marker.h
  ${CUR_SRC_DIR}editing/markers/document_marker_controller.cc
  #${CUR_SRC_DIR}editing/markers/document_marker_controller.h
  ${CUR_SRC_DIR}editing/markers/document_marker_list.cc
  #${CUR_SRC_DIR}editing/markers/document_marker_list.h
  ${CUR_SRC_DIR}editing/markers/grammar_marker.cc
  #${CUR_SRC_DIR}editing/markers/grammar_marker.h
  ${CUR_SRC_DIR}editing/markers/grammar_marker_list_impl.cc
  #${CUR_SRC_DIR}editing/markers/grammar_marker_list_impl.h
  ${CUR_SRC_DIR}editing/markers/sorted_document_marker_list_editor.cc
  #${CUR_SRC_DIR}editing/markers/sorted_document_marker_list_editor.h
  ${CUR_SRC_DIR}editing/markers/spell_check_marker.cc
  #${CUR_SRC_DIR}editing/markers/spell_check_marker.h
  ${CUR_SRC_DIR}editing/markers/spell_check_marker_list_impl.cc
  #${CUR_SRC_DIR}editing/markers/spell_check_marker_list_impl.h
  ${CUR_SRC_DIR}editing/markers/spelling_marker.cc
  #${CUR_SRC_DIR}editing/markers/spelling_marker.h
  ${CUR_SRC_DIR}editing/markers/spelling_marker_list_impl.cc
  #${CUR_SRC_DIR}editing/markers/spelling_marker_list_impl.h
  ${CUR_SRC_DIR}editing/markers/styleable_marker.cc
  #${CUR_SRC_DIR}editing/markers/styleable_marker.h
  ${CUR_SRC_DIR}editing/markers/suggestion_marker.cc
  #${CUR_SRC_DIR}editing/markers/suggestion_marker.h
  ${CUR_SRC_DIR}editing/markers/suggestion_marker_list_impl.cc
  #${CUR_SRC_DIR}editing/markers/suggestion_marker_list_impl.h
  ${CUR_SRC_DIR}editing/markers/suggestion_marker_properties.cc
  #${CUR_SRC_DIR}editing/markers/suggestion_marker_properties.h
  ${CUR_SRC_DIR}editing/markers/suggestion_marker_replacement_scope.cc
  #${CUR_SRC_DIR}editing/markers/suggestion_marker_replacement_scope.h
  ${CUR_SRC_DIR}editing/markers/text_match_marker.cc
  #${CUR_SRC_DIR}editing/markers/text_match_marker.h
  ${CUR_SRC_DIR}editing/markers/text_match_marker_list_impl.cc
  #${CUR_SRC_DIR}editing/markers/text_match_marker_list_impl.h
  ${CUR_SRC_DIR}editing/markers/unsorted_document_marker_list_editor.cc
  #${CUR_SRC_DIR}editing/markers/unsorted_document_marker_list_editor.h
  ${CUR_SRC_DIR}editing/ng_flat_tree_shorthands.cc
  #${CUR_SRC_DIR}editing/ng_flat_tree_shorthands.h
  ${CUR_SRC_DIR}editing/plain_text_range.cc
  #${CUR_SRC_DIR}editing/plain_text_range.h
  ${CUR_SRC_DIR}editing/position.cc
  #${CUR_SRC_DIR}editing/position.h
  ${CUR_SRC_DIR}editing/position_iterator.cc
  #${CUR_SRC_DIR}editing/position_iterator.h
  ${CUR_SRC_DIR}editing/position_with_affinity.cc
  #${CUR_SRC_DIR}editing/position_with_affinity.h
  ${CUR_SRC_DIR}editing/relocatable_position.cc
  #${CUR_SRC_DIR}editing/relocatable_position.h
  ${CUR_SRC_DIR}editing/reveal_selection_scope.cc
  #${CUR_SRC_DIR}editing/reveal_selection_scope.h
  ${CUR_SRC_DIR}editing/selection_adjuster.cc
  #${CUR_SRC_DIR}editing/selection_adjuster.h
  ${CUR_SRC_DIR}editing/selection_controller.cc
  #${CUR_SRC_DIR}editing/selection_controller.h
  ${CUR_SRC_DIR}editing/selection_editor.cc
  #${CUR_SRC_DIR}editing/selection_editor.h
  ${CUR_SRC_DIR}editing/selection_modifier.cc
  #${CUR_SRC_DIR}editing/selection_modifier.h
  ${CUR_SRC_DIR}editing/selection_modifier_line.cc
  #${CUR_SRC_DIR}editing/selection_strategy.h
  ${CUR_SRC_DIR}editing/selection_template.cc
  #${CUR_SRC_DIR}editing/selection_template.h
  #${CUR_SRC_DIR}editing/selection_type.h
  ${CUR_SRC_DIR}editing/serializers/html_interchange.cc
  #${CUR_SRC_DIR}editing/serializers/html_interchange.h
  ${CUR_SRC_DIR}editing/serializers/markup_accumulator.cc
  #${CUR_SRC_DIR}editing/serializers/markup_accumulator.h
  ${CUR_SRC_DIR}editing/serializers/markup_formatter.cc
  #${CUR_SRC_DIR}editing/serializers/markup_formatter.h
  ${CUR_SRC_DIR}editing/serializers/serialization.cc
  #${CUR_SRC_DIR}editing/serializers/serialization.h
  ${CUR_SRC_DIR}editing/serializers/styled_markup_accumulator.cc
  #${CUR_SRC_DIR}editing/serializers/styled_markup_accumulator.h
  ${CUR_SRC_DIR}editing/serializers/styled_markup_serializer.cc
  #${CUR_SRC_DIR}editing/serializers/styled_markup_serializer.h
  ${CUR_SRC_DIR}editing/serializers/text_offset.cc
  #${CUR_SRC_DIR}editing/serializers/text_offset.h
  ${CUR_SRC_DIR}editing/set_selection_options.cc
  #${CUR_SRC_DIR}editing/set_selection_options.h
  ${CUR_SRC_DIR}editing/spellcheck/cold_mode_spell_check_requester.cc
  #${CUR_SRC_DIR}editing/spellcheck/cold_mode_spell_check_requester.h
  ${CUR_SRC_DIR}editing/spellcheck/hot_mode_spell_check_requester.cc
  #${CUR_SRC_DIR}editing/spellcheck/hot_mode_spell_check_requester.h
  ${CUR_SRC_DIR}editing/spellcheck/idle_spell_check_controller.cc
  #${CUR_SRC_DIR}editing/spellcheck/idle_spell_check_controller.h
  ${CUR_SRC_DIR}editing/spellcheck/spell_check_requester.cc
  #${CUR_SRC_DIR}editing/spellcheck/spell_check_requester.h
  ${CUR_SRC_DIR}editing/spellcheck/spell_checker.cc
  #${CUR_SRC_DIR}editing/spellcheck/spell_checker.h
  #${CUR_SRC_DIR}editing/spellcheck/text_checking.h
  ${CUR_SRC_DIR}editing/spellcheck/text_checking_paragraph.cc
  #${CUR_SRC_DIR}editing/spellcheck/text_checking_paragraph.h
  ${CUR_SRC_DIR}editing/state_machines/backspace_state_machine.cc
  #${CUR_SRC_DIR}editing/state_machines/backspace_state_machine.h
  ${CUR_SRC_DIR}editing/state_machines/backward_code_point_state_machine.cc
  #${CUR_SRC_DIR}editing/state_machines/backward_code_point_state_machine.h
  ${CUR_SRC_DIR}editing/state_machines/backward_grapheme_boundary_state_machine.cc
  #${CUR_SRC_DIR}editing/state_machines/backward_grapheme_boundary_state_machine.h
  ${CUR_SRC_DIR}editing/state_machines/forward_code_point_state_machine.cc
  #${CUR_SRC_DIR}editing/state_machines/forward_code_point_state_machine.h
  ${CUR_SRC_DIR}editing/state_machines/forward_grapheme_boundary_state_machine.cc
  #${CUR_SRC_DIR}editing/state_machines/forward_grapheme_boundary_state_machine.h
  ${CUR_SRC_DIR}editing/state_machines/state_machine_util.cc
  #${CUR_SRC_DIR}editing/state_machines/state_machine_util.h
  ${CUR_SRC_DIR}editing/state_machines/text_segmentation_machine_state.cc
  #${CUR_SRC_DIR}editing/state_machines/text_segmentation_machine_state.h
  ${CUR_SRC_DIR}editing/suggestion/text_suggestion_backend_impl.cc
  #${CUR_SRC_DIR}editing/suggestion/text_suggestion_backend_impl.h
  ${CUR_SRC_DIR}editing/suggestion/text_suggestion_controller.cc
  #${CUR_SRC_DIR}editing/suggestion/text_suggestion_controller.h
  #${CUR_SRC_DIR}editing/suggestion/text_suggestion_info.h
  ${CUR_SRC_DIR}editing/text_affinity.cc
  #${CUR_SRC_DIR}editing/text_affinity.h
  #${CUR_SRC_DIR}editing/text_granularity.h
  ${CUR_SRC_DIR}editing/text_offset_mapping.cc
  #${CUR_SRC_DIR}editing/text_offset_mapping.h
  ${CUR_SRC_DIR}editing/text_segments.cc
  #${CUR_SRC_DIR}editing/text_segments.h
  ${CUR_SRC_DIR}editing/visible_position.cc
  #${CUR_SRC_DIR}editing/visible_position.h
  ${CUR_SRC_DIR}editing/visible_selection.cc
  #${CUR_SRC_DIR}editing/visible_selection.h
  ${CUR_SRC_DIR}editing/visible_units.cc
  #${CUR_SRC_DIR}editing/visible_units.h
  ${CUR_SRC_DIR}editing/visible_units_line.cc
  ${CUR_SRC_DIR}editing/visible_units_paragraph.cc
  ${CUR_SRC_DIR}editing/visible_units_sentence.cc
  ${CUR_SRC_DIR}editing/visible_units_word.cc
  ## TODO ## ${CUR_SRC_DIR}editing/web_substring_util.mm", #if (is_mac)
  #${CUR_SRC_DIR}editing/writing_direction.h
  #if (is_mac) {
  #  sources += [
  #    "commands/smart_replace_cf.cc
  #    "kill_ring_mac.mm",
  #  ]
  #} else {
  #  sources += [ "kill_ring_none.cc" ]
  #}
)

# requires
# > renderer/bindings
# > renderer/bindings/core/v8
# > core/core_export.h
# > core/css
# > core/style
# > core/dom
# > core/svg
# > core/events
# > core/execution_context
# > core/frame
# > core/inspector
# > core/probe
# > core/paint
# > renderer/platform
list(APPEND BLINK_RENDERER_CORE_ANIMATION_SOURCES
  # blink_core_sources("animation")
  ${CUR_SRC_DIR}animation/animation.cc
  #${CUR_SRC_DIR}animation/animation.h
  ${CUR_SRC_DIR}animation/animation_clock.cc
  #${CUR_SRC_DIR}animation/animation_clock.h
  ${CUR_SRC_DIR}animation/animation_effect.cc
  #${CUR_SRC_DIR}animation/animation_effect.h
  #${CUR_SRC_DIR}animation/animation_effect_owner.h
  ${CUR_SRC_DIR}animation/animation_input_helpers.cc
  #${CUR_SRC_DIR}animation/animation_input_helpers.h
  ${CUR_SRC_DIR}animation/animation_time_delta.cc
  #${CUR_SRC_DIR}animation/animation_time_delta.h
  #${CUR_SRC_DIR}animation/animation_timeline.h
  ${CUR_SRC_DIR}animation/basic_shape_interpolation_functions.cc
  #${CUR_SRC_DIR}animation/basic_shape_interpolation_functions.h
  ${CUR_SRC_DIR}animation/color_property_functions.cc
  #${CUR_SRC_DIR}animation/color_property_functions.h
  ${CUR_SRC_DIR}animation/compositor_animations.cc
  #${CUR_SRC_DIR}animation/compositor_animations.h
  #${CUR_SRC_DIR}animation/css/compositor_keyframe_double.h
  #${CUR_SRC_DIR}animation/css/compositor_keyframe_filter_operations.h
  ${CUR_SRC_DIR}animation/css/compositor_keyframe_transform.h
  #${CUR_SRC_DIR}animation/css/compositor_keyframe_value.h
  ${CUR_SRC_DIR}animation/css/compositor_keyframe_value_factory.cc
  #${CUR_SRC_DIR}animation/css/compositor_keyframe_value_factory.h
  ${CUR_SRC_DIR}animation/css/css_animation_data.cc
  #${CUR_SRC_DIR}animation/css/css_animation_data.h
  ${CUR_SRC_DIR}animation/css/css_animation_update.cc
  #${CUR_SRC_DIR}animation/css/css_animation_update.h
  ${CUR_SRC_DIR}animation/css/css_animations.cc
  #${CUR_SRC_DIR}animation/css/css_animations.h
  ${CUR_SRC_DIR}animation/css/css_timing_data.cc
  #${CUR_SRC_DIR}animation/css/css_timing_data.h
  ${CUR_SRC_DIR}animation/css/css_transition_data.cc
  #${CUR_SRC_DIR}animation/css/css_transition_data.h
  ${CUR_SRC_DIR}animation/css_angle_interpolation_type.cc
  #${CUR_SRC_DIR}animation/css_angle_interpolation_type.h
  ${CUR_SRC_DIR}animation/css_basic_shape_interpolation_type.cc
  #${CUR_SRC_DIR}animation/css_basic_shape_interpolation_type.h
  ${CUR_SRC_DIR}animation/css_border_image_length_box_interpolation_type.cc
  #${CUR_SRC_DIR}animation/css_border_image_length_box_interpolation_type.h
  ${CUR_SRC_DIR}animation/css_clip_interpolation_type.cc
  #${CUR_SRC_DIR}animation/css_clip_interpolation_type.h
  ${CUR_SRC_DIR}animation/css_color_interpolation_type.cc
  #${CUR_SRC_DIR}animation/css_color_interpolation_type.h
  ${CUR_SRC_DIR}animation/css_custom_list_interpolation_type.cc
  #${CUR_SRC_DIR}animation/css_custom_list_interpolation_type.h
  ${CUR_SRC_DIR}animation/css_default_interpolation_type.cc
  #${CUR_SRC_DIR}animation/css_default_interpolation_type.h
  ${CUR_SRC_DIR}animation/css_filter_list_interpolation_type.cc
  #${CUR_SRC_DIR}animation/css_filter_list_interpolation_type.h
  ${CUR_SRC_DIR}animation/css_font_size_interpolation_type.cc
  #${CUR_SRC_DIR}animation/css_font_size_interpolation_type.h
  ${CUR_SRC_DIR}animation/css_font_variation_settings_interpolation_type.cc
  #${CUR_SRC_DIR}animation/css_font_variation_settings_interpolation_type.h
  ${CUR_SRC_DIR}animation/css_font_weight_interpolation_type.cc
  #${CUR_SRC_DIR}animation/css_font_weight_interpolation_type.h
  ${CUR_SRC_DIR}animation/css_image_interpolation_type.cc
  #${CUR_SRC_DIR}animation/css_image_interpolation_type.h
  ${CUR_SRC_DIR}animation/css_image_list_interpolation_type.cc
  #${CUR_SRC_DIR}animation/css_image_list_interpolation_type.h
  ${CUR_SRC_DIR}animation/css_image_slice_interpolation_type.cc
  #${CUR_SRC_DIR}animation/css_image_slice_interpolation_type.h
  ${CUR_SRC_DIR}animation/css_interpolation_type.cc
  #${CUR_SRC_DIR}animation/css_interpolation_type.h
  ${CUR_SRC_DIR}animation/css_interpolation_types_map.cc
  #${CUR_SRC_DIR}animation/css_interpolation_types_map.h
  ${CUR_SRC_DIR}animation/css_length_interpolation_type.cc
  #${CUR_SRC_DIR}animation/css_length_interpolation_type.h
  ${CUR_SRC_DIR}animation/css_length_list_interpolation_type.cc
  #${CUR_SRC_DIR}animation/css_length_list_interpolation_type.h
  #${CUR_SRC_DIR}animation/css_length_pair_interpolation_type.h
  ${CUR_SRC_DIR}animation/css_number_interpolation_type.cc
  #${CUR_SRC_DIR}animation/css_number_interpolation_type.h
  ${CUR_SRC_DIR}animation/css_offset_rotate_interpolation_type.cc
  #${CUR_SRC_DIR}animation/css_offset_rotate_interpolation_type.h
  ${CUR_SRC_DIR}animation/css_paint_interpolation_type.cc
  #${CUR_SRC_DIR}animation/css_paint_interpolation_type.h
  ${CUR_SRC_DIR}animation/css_path_interpolation_type.cc
  #${CUR_SRC_DIR}animation/css_path_interpolation_type.h
  ${CUR_SRC_DIR}animation/css_position_axis_list_interpolation_type.cc
  #${CUR_SRC_DIR}animation/css_position_axis_list_interpolation_type.h
  #${CUR_SRC_DIR}animation/css_position_interpolation_type.h
  ${CUR_SRC_DIR}animation/css_ray_interpolation_type.cc
  #${CUR_SRC_DIR}animation/css_ray_interpolation_type.h
  ${CUR_SRC_DIR}animation/css_resolution_interpolation_type.cc
  #${CUR_SRC_DIR}animation/css_resolution_interpolation_type.h
  ${CUR_SRC_DIR}animation/css_rotate_interpolation_type.cc
  #${CUR_SRC_DIR}animation/css_rotate_interpolation_type.h
  ${CUR_SRC_DIR}animation/css_scale_interpolation_type.cc
  #${CUR_SRC_DIR}animation/css_scale_interpolation_type.h
  ${CUR_SRC_DIR}animation/css_shadow_list_interpolation_type.cc
  #${CUR_SRC_DIR}animation/css_shadow_list_interpolation_type.h
  ${CUR_SRC_DIR}animation/css_size_list_interpolation_type.cc
  #${CUR_SRC_DIR}animation/css_size_list_interpolation_type.h
  ${CUR_SRC_DIR}animation/css_text_indent_interpolation_type.cc
  #${CUR_SRC_DIR}animation/css_text_indent_interpolation_type.h
  ${CUR_SRC_DIR}animation/css_time_interpolation_type.cc
  #${CUR_SRC_DIR}animation/css_time_interpolation_type.h
  ${CUR_SRC_DIR}animation/css_transform_interpolation_type.cc
  #${CUR_SRC_DIR}animation/css_transform_interpolation_type.h
  #${CUR_SRC_DIR}animation/css_transform_origin_interpolation_type.h
  ${CUR_SRC_DIR}animation/css_translate_interpolation_type.cc
  #${CUR_SRC_DIR}animation/css_translate_interpolation_type.h
  ${CUR_SRC_DIR}animation/css_var_cycle_interpolation_type.cc
  #${CUR_SRC_DIR}animation/css_var_cycle_interpolation_type.h
  ${CUR_SRC_DIR}animation/css_visibility_interpolation_type.cc
  #${CUR_SRC_DIR}animation/css_visibility_interpolation_type.h
  #${CUR_SRC_DIR}animation/document_animation.h
  ${CUR_SRC_DIR}animation/document_animations.cc
  #${CUR_SRC_DIR}animation/document_animations.h
  ${CUR_SRC_DIR}animation/document_timeline.cc
  #${CUR_SRC_DIR}animation/document_timeline.h
  ${CUR_SRC_DIR}animation/effect_input.cc
  #${CUR_SRC_DIR}animation/effect_input.h
  ${CUR_SRC_DIR}animation/effect_model.cc
  #${CUR_SRC_DIR}animation/effect_model.h
  ${CUR_SRC_DIR}animation/effect_stack.cc
  #${CUR_SRC_DIR}animation/effect_stack.h
  ${CUR_SRC_DIR}animation/element_animation.cc
  #${CUR_SRC_DIR}animation/element_animation.h
  ${CUR_SRC_DIR}animation/element_animations.cc
  #${CUR_SRC_DIR}animation/element_animations.h
  ${CUR_SRC_DIR}animation/filter_interpolation_functions.cc
  #${CUR_SRC_DIR}animation/filter_interpolation_functions.h
  #${CUR_SRC_DIR}animation/image_list_property_functions.h
  #${CUR_SRC_DIR}animation/image_slice_property_functions.h
  ${CUR_SRC_DIR}animation/inert_effect.cc
  #${CUR_SRC_DIR}animation/inert_effect.h
  ${CUR_SRC_DIR}animation/interpolable_value.cc
  #${CUR_SRC_DIR}animation/interpolable_value.h
  #${CUR_SRC_DIR}animation/interpolated_svg_path_source.h
  #${CUR_SRC_DIR}animation/interpolation.h
  ${CUR_SRC_DIR}animation/interpolation_effect.cc
  #${CUR_SRC_DIR}animation/interpolation_effect.h
  #${CUR_SRC_DIR}animation/interpolation_environment.h
  #${CUR_SRC_DIR}animation/interpolation_type.h
  #${CUR_SRC_DIR}animation/interpolation_types_map.h
  #${CUR_SRC_DIR}animation/interpolation_value.h
  ${CUR_SRC_DIR}animation/invalidatable_interpolation.cc
  #${CUR_SRC_DIR}animation/invalidatable_interpolation.h
  ${CUR_SRC_DIR}animation/keyframe.cc
  #${CUR_SRC_DIR}animation/keyframe.h
  ${CUR_SRC_DIR}animation/keyframe_effect.cc
  #${CUR_SRC_DIR}animation/keyframe_effect.h
  ${CUR_SRC_DIR}animation/keyframe_effect_model.cc
  #${CUR_SRC_DIR}animation/keyframe_effect_model.h
  ${CUR_SRC_DIR}animation/length_interpolation_functions.cc
  #${CUR_SRC_DIR}animation/length_interpolation_functions.h
  ${CUR_SRC_DIR}animation/length_list_property_functions.cc
  #${CUR_SRC_DIR}animation/length_list_property_functions.h
  ${CUR_SRC_DIR}animation/length_property_functions.cc
  #${CUR_SRC_DIR}animation/length_property_functions.h
  #${CUR_SRC_DIR}animation/length_units_checker.h
  ${CUR_SRC_DIR}animation/list_interpolation_functions.cc
  #${CUR_SRC_DIR}animation/list_interpolation_functions.h
  #${CUR_SRC_DIR}animation/non_interpolable_value.h
  ${CUR_SRC_DIR}animation/number_property_functions.cc
  #${CUR_SRC_DIR}animation/number_property_functions.h
  #${CUR_SRC_DIR}animation/pairwise_interpolation_value.h
  ${CUR_SRC_DIR}animation/path_interpolation_functions.cc
  #${CUR_SRC_DIR}animation/path_interpolation_functions.h
  ${CUR_SRC_DIR}animation/pending_animations.cc
  #${CUR_SRC_DIR}animation/pending_animations.h
  #${CUR_SRC_DIR}animation/primitive_interpolation.h
  ${CUR_SRC_DIR}animation/property_handle.cc
  #${CUR_SRC_DIR}animation/property_handle.h
  ${CUR_SRC_DIR}animation/sampled_effect.cc
  #${CUR_SRC_DIR}animation/sampled_effect.h
  ${CUR_SRC_DIR}animation/scroll_timeline.cc
  #${CUR_SRC_DIR}animation/scroll_timeline.h
  ${CUR_SRC_DIR}animation/scroll_timeline_util.cc
  #${CUR_SRC_DIR}animation/scroll_timeline_util.h
  ${CUR_SRC_DIR}animation/shadow_interpolation_functions.cc
  #${CUR_SRC_DIR}animation/shadow_interpolation_functions.h
  #${CUR_SRC_DIR}animation/side_index.h
  ${CUR_SRC_DIR}animation/size_interpolation_functions.cc
  #${CUR_SRC_DIR}animation/size_interpolation_functions.h
  ${CUR_SRC_DIR}animation/size_list_property_functions.cc
  #${CUR_SRC_DIR}animation/size_list_property_functions.h
  ${CUR_SRC_DIR}animation/string_keyframe.cc
  #${CUR_SRC_DIR}animation/string_keyframe.h
  ${CUR_SRC_DIR}animation/svg_angle_interpolation_type.cc
  #${CUR_SRC_DIR}animation/svg_angle_interpolation_type.h
  ${CUR_SRC_DIR}animation/svg_integer_interpolation_type.cc
  #${CUR_SRC_DIR}animation/svg_integer_interpolation_type.h
  ${CUR_SRC_DIR}animation/svg_integer_optional_integer_interpolation_type.cc
  #${CUR_SRC_DIR}animation/svg_integer_optional_integer_interpolation_type.h
  ${CUR_SRC_DIR}animation/svg_interpolation_type.cc
  #${CUR_SRC_DIR}animation/svg_interpolation_type.h
  ${CUR_SRC_DIR}animation/svg_interpolation_types_map.cc
  #${CUR_SRC_DIR}animation/svg_interpolation_types_map.h
  ${CUR_SRC_DIR}animation/svg_length_interpolation_type.cc
  #${CUR_SRC_DIR}animation/svg_length_interpolation_type.h
  ${CUR_SRC_DIR}animation/svg_length_list_interpolation_type.cc
  #${CUR_SRC_DIR}animation/svg_length_list_interpolation_type.h
  ${CUR_SRC_DIR}animation/svg_number_interpolation_type.cc
  #${CUR_SRC_DIR}animation/svg_number_interpolation_type.h
  ${CUR_SRC_DIR}animation/svg_number_list_interpolation_type.cc
  #${CUR_SRC_DIR}animation/svg_number_list_interpolation_type.h
  ${CUR_SRC_DIR}animation/svg_number_optional_number_interpolation_type.cc
  #${CUR_SRC_DIR}animation/svg_number_optional_number_interpolation_type.h
  ${CUR_SRC_DIR}animation/svg_path_interpolation_type.cc
  #${CUR_SRC_DIR}animation/svg_path_interpolation_type.h
  ${CUR_SRC_DIR}animation/svg_path_seg_interpolation_functions.cc
  #${CUR_SRC_DIR}animation/svg_path_seg_interpolation_functions.h
  ${CUR_SRC_DIR}animation/svg_point_list_interpolation_type.cc
  #${CUR_SRC_DIR}animation/svg_point_list_interpolation_type.h
  ${CUR_SRC_DIR}animation/svg_rect_interpolation_type.cc
  #${CUR_SRC_DIR}animation/svg_rect_interpolation_type.h
  ${CUR_SRC_DIR}animation/svg_transform_list_interpolation_type.cc
  #${CUR_SRC_DIR}animation/svg_transform_list_interpolation_type.h
  ${CUR_SRC_DIR}animation/svg_value_interpolation_type.cc
  #${CUR_SRC_DIR}animation/svg_value_interpolation_type.h
  ${CUR_SRC_DIR}animation/timing.cc
  #${CUR_SRC_DIR}animation/timing.h
  #${CUR_SRC_DIR}animation/timing_calculations.h
  ${CUR_SRC_DIR}animation/timing_input.cc
  #${CUR_SRC_DIR}animation/timing_input.h
  ${CUR_SRC_DIR}animation/transition_interpolation.cc
  #${CUR_SRC_DIR}animation/transition_interpolation.h
  ${CUR_SRC_DIR}animation/transition_keyframe.cc
  #${CUR_SRC_DIR}animation/transition_keyframe.h
  #${CUR_SRC_DIR}animation/typed_interpolation_value.h
  #${CUR_SRC_DIR}animation/underlying_length_checker.h
  ${CUR_SRC_DIR}animation/underlying_value_owner.cc
  #${CUR_SRC_DIR}animation/underlying_value_owner.h
  #${CUR_SRC_DIR}animation/worklet_animation_base.h
  ${CUR_SRC_DIR}animation/worklet_animation_controller.cc
  #${CUR_SRC_DIR}animation/worklet_animation_controller.h
)

list(APPEND BLINK_RENDERER_CORE_PAINT_SOURCES
  # blink_core_sources("paint")
  ${CUR_SRC_DIR}paint/applied_decoration_painter.cc
  #${CUR_SRC_DIR}paint/applied_decoration_painter.h
  # requires third_party/blink/renderer/bindings/core/v8/iterable.h
  ${CUR_SRC_DIR}paint/background_image_geometry.cc
  #${CUR_SRC_DIR}paint/background_image_geometry.h
  ${CUR_SRC_DIR}paint/block_flow_paint_invalidator.cc
  #${CUR_SRC_DIR}paint/block_flow_paint_invalidator.h
  ${CUR_SRC_DIR}paint/block_paint_invalidator.cc
  #${CUR_SRC_DIR}paint/block_paint_invalidator.h
  ${CUR_SRC_DIR}paint/block_painter.cc
  #${CUR_SRC_DIR}paint/block_painter.h
  ${CUR_SRC_DIR}paint/box_border_painter.cc
  #${CUR_SRC_DIR}paint/box_border_painter.h
  ${CUR_SRC_DIR}paint/box_decoration_data.cc
  #${CUR_SRC_DIR}paint/box_decoration_data.h
  ${CUR_SRC_DIR}paint/box_model_object_painter.cc
  #${CUR_SRC_DIR}paint/box_model_object_painter.h
  ${CUR_SRC_DIR}paint/box_paint_invalidator.cc
  #${CUR_SRC_DIR}paint/box_paint_invalidator.h
  ${CUR_SRC_DIR}paint/box_painter.cc
  #${CUR_SRC_DIR}paint/box_painter.h
  ${CUR_SRC_DIR}paint/box_painter_base.cc
  #${CUR_SRC_DIR}paint/box_painter_base.h
  ${CUR_SRC_DIR}paint/box_reflection_utils.cc
  #${CUR_SRC_DIR}paint/box_reflection_utils.h
  ${CUR_SRC_DIR}paint/clip_path_clipper.cc
  #${CUR_SRC_DIR}paint/clip_path_clipper.h
  ${CUR_SRC_DIR}paint/clip_rect.cc
  #${CUR_SRC_DIR}paint/clip_rect.h
  #${CUR_SRC_DIR}paint/clip_rects.h
  #${CUR_SRC_DIR}paint/clip_rects_cache.h
  ${CUR_SRC_DIR}paint/collapsed_border_painter.cc
  #${CUR_SRC_DIR}paint/collapsed_border_painter.h
  ${CUR_SRC_DIR}paint/compositing/composited_layer_mapping.cc
  #${CUR_SRC_DIR}paint/compositing/composited_layer_mapping.h
  ${CUR_SRC_DIR}paint/compositing/compositing_inputs_root.cc
  #${CUR_SRC_DIR}paint/compositing/compositing_inputs_root.h
  ${CUR_SRC_DIR}paint/compositing/compositing_inputs_updater.cc
  #${CUR_SRC_DIR}paint/compositing/compositing_inputs_updater.h
  ${CUR_SRC_DIR}paint/compositing/compositing_layer_assigner.cc
  #${CUR_SRC_DIR}paint/compositing/compositing_layer_assigner.h
  ${CUR_SRC_DIR}paint/compositing/compositing_layer_property_updater.cc
  #${CUR_SRC_DIR}paint/compositing/compositing_layer_property_updater.h
  ${CUR_SRC_DIR}paint/compositing/compositing_reason_finder.cc
  #${CUR_SRC_DIR}paint/compositing/compositing_reason_finder.h
  ${CUR_SRC_DIR}paint/compositing/compositing_requirements_updater.cc
  #${CUR_SRC_DIR}paint/compositing/compositing_requirements_updater.h
  #${CUR_SRC_DIR}paint/compositing/compositing_state.h
  ${CUR_SRC_DIR}paint/compositing/graphics_layer_tree_as_text.cc
  #${CUR_SRC_DIR}paint/compositing/graphics_layer_tree_as_text.h
  ${CUR_SRC_DIR}paint/compositing/graphics_layer_tree_builder.cc
  #${CUR_SRC_DIR}paint/compositing/graphics_layer_tree_builder.h
  ${CUR_SRC_DIR}paint/compositing/graphics_layer_updater.cc
  #${CUR_SRC_DIR}paint/compositing/graphics_layer_updater.h
  ${CUR_SRC_DIR}paint/compositing/paint_layer_compositor.cc
  #${CUR_SRC_DIR}paint/compositing/paint_layer_compositor.h
  ${CUR_SRC_DIR}paint/css_mask_painter.cc
  #${CUR_SRC_DIR}paint/css_mask_painter.h
  #${CUR_SRC_DIR}paint/decoration_info.h
  ${CUR_SRC_DIR}paint/details_marker_painter.cc
  #${CUR_SRC_DIR}paint/details_marker_painter.h
  ${CUR_SRC_DIR}paint/document_marker_painter.cc
  #${CUR_SRC_DIR}paint/document_marker_painter.h
  ${CUR_SRC_DIR}paint/ellipsis_box_painter.cc
  #${CUR_SRC_DIR}paint/ellipsis_box_painter.h
  ${CUR_SRC_DIR}paint/embedded_content_painter.cc
  #${CUR_SRC_DIR}paint/embedded_content_painter.h
  ${CUR_SRC_DIR}paint/embedded_object_painter.cc
  #${CUR_SRC_DIR}paint/embedded_object_painter.h
  ${CUR_SRC_DIR}paint/fallback_theme.cc
  #${CUR_SRC_DIR}paint/fallback_theme.h
  ${CUR_SRC_DIR}paint/fieldset_paint_info.cc
  #${CUR_SRC_DIR}paint/fieldset_paint_info.h
  ${CUR_SRC_DIR}paint/fieldset_painter.cc
  #${CUR_SRC_DIR}paint/fieldset_painter.h
  ${CUR_SRC_DIR}paint/file_upload_control_painter.cc
  #${CUR_SRC_DIR}paint/file_upload_control_painter.h
  ${CUR_SRC_DIR}paint/filter_effect_builder.cc
  #${CUR_SRC_DIR}paint/filter_effect_builder.h
  #${CUR_SRC_DIR}paint/find_properties_needing_update.h
  ${CUR_SRC_DIR}paint/first_meaningful_paint_detector.cc
  #${CUR_SRC_DIR}paint/first_meaningful_paint_detector.h
  ${CUR_SRC_DIR}paint/fragment_data.cc
  #${CUR_SRC_DIR}paint/fragment_data.h
  #${CUR_SRC_DIR}paint/frame_paint_timing.h
  ${CUR_SRC_DIR}paint/frame_painter.cc
  #${CUR_SRC_DIR}paint/frame_painter.h
  ${CUR_SRC_DIR}paint/frame_set_painter.cc
  #${CUR_SRC_DIR}paint/frame_set_painter.h
  ${CUR_SRC_DIR}paint/html_canvas_painter.cc
  #${CUR_SRC_DIR}paint/html_canvas_painter.h
  ${CUR_SRC_DIR}paint/image_element_timing.cc
  #${CUR_SRC_DIR}paint/image_element_timing.h
  ${CUR_SRC_DIR}paint/image_paint_timing_detector.cc
  #${CUR_SRC_DIR}paint/image_paint_timing_detector.h
  ${CUR_SRC_DIR}paint/image_painter.cc
  #${CUR_SRC_DIR}paint/image_painter.h
  ${CUR_SRC_DIR}paint/inline_box_painter_base.cc
  #${CUR_SRC_DIR}paint/inline_box_painter_base.h
  ${CUR_SRC_DIR}paint/inline_flow_box_painter.cc
  #${CUR_SRC_DIR}paint/inline_flow_box_painter.h
  ${CUR_SRC_DIR}paint/inline_painter.cc
  #${CUR_SRC_DIR}paint/inline_painter.h
  ${CUR_SRC_DIR}paint/inline_text_box_painter.cc
  #${CUR_SRC_DIR}paint/inline_text_box_painter.h
  ${CUR_SRC_DIR}paint/line_box_list_painter.cc
  #${CUR_SRC_DIR}paint/line_box_list_painter.h
  ${CUR_SRC_DIR}paint/link_highlight_impl.cc
  #${CUR_SRC_DIR}paint/link_highlight_impl.h
  ${CUR_SRC_DIR}paint/list_item_painter.cc
  #${CUR_SRC_DIR}paint/list_item_painter.h
  ${CUR_SRC_DIR}paint/list_marker_painter.cc
  #${CUR_SRC_DIR}paint/list_marker_painter.h
  ${CUR_SRC_DIR}paint/multi_column_set_painter.cc
  #${CUR_SRC_DIR}paint/multi_column_set_painter.h
  ${CUR_SRC_DIR}paint/ng/ng_box_fragment_painter.cc
  #${CUR_SRC_DIR}paint/ng/ng_box_fragment_painter.h
  ${CUR_SRC_DIR}paint/ng/ng_fieldset_painter.cc
  #${CUR_SRC_DIR}paint/ng/ng_fieldset_painter.h
  ${CUR_SRC_DIR}paint/ng/ng_fragment_painter.cc
  #${CUR_SRC_DIR}paint/ng/ng_fragment_painter.h
  ${CUR_SRC_DIR}paint/ng/ng_inline_box_fragment_painter.cc
  #${CUR_SRC_DIR}paint/ng/ng_inline_box_fragment_painter.h
  ${CUR_SRC_DIR}paint/ng/ng_paint_fragment.cc
  #${CUR_SRC_DIR}paint/ng/ng_paint_fragment.h
  ${CUR_SRC_DIR}paint/ng/ng_paint_fragment_traversal.cc
  #${CUR_SRC_DIR}paint/ng/ng_paint_fragment_traversal.h
  ${CUR_SRC_DIR}paint/ng/ng_text_fragment_painter.cc
  #${CUR_SRC_DIR}paint/ng/ng_text_fragment_painter.h
  ${CUR_SRC_DIR}paint/ng/ng_text_painter.cc
  #${CUR_SRC_DIR}paint/ng/ng_text_painter.h
  ${CUR_SRC_DIR}paint/nine_piece_image_grid.cc
  #${CUR_SRC_DIR}paint/nine_piece_image_grid.h
  ${CUR_SRC_DIR}paint/nine_piece_image_painter.cc
  #${CUR_SRC_DIR}paint/nine_piece_image_painter.h
  ${CUR_SRC_DIR}paint/object_paint_invalidator.cc
  #${CUR_SRC_DIR}paint/object_paint_invalidator.h
  #${CUR_SRC_DIR}paint/object_paint_properties.h
  ${CUR_SRC_DIR}paint/object_painter.cc
  #${CUR_SRC_DIR}paint/object_painter.h
  ${CUR_SRC_DIR}paint/object_painter_base.cc
  #${CUR_SRC_DIR}paint/object_painter_base.h
  #${CUR_SRC_DIR}paint/paint_event.h
  #${CUR_SRC_DIR}paint/paint_info.h
  ${CUR_SRC_DIR}paint/paint_invalidator.cc
  #${CUR_SRC_DIR}paint/paint_invalidator.h
  ${CUR_SRC_DIR}paint/paint_layer.cc
  #${CUR_SRC_DIR}paint/paint_layer.h
  ${CUR_SRC_DIR}paint/paint_layer_clipper.cc
  #${CUR_SRC_DIR}paint/paint_layer_clipper.h
  #${CUR_SRC_DIR}paint/paint_layer_fragment.h
  ${CUR_SRC_DIR}paint/paint_layer_painter.cc
  #${CUR_SRC_DIR}paint/paint_layer_painter.h
  #${CUR_SRC_DIR}paint/paint_layer_painting_info.h
  ${CUR_SRC_DIR}paint/paint_layer_resource_info.cc
  #${CUR_SRC_DIR}paint/paint_layer_resource_info.h
  ${CUR_SRC_DIR}paint/paint_layer_scrollable_area.cc
  #${CUR_SRC_DIR}paint/paint_layer_scrollable_area.h
  ${CUR_SRC_DIR}paint/paint_layer_stacking_node.cc
  #${CUR_SRC_DIR}paint/paint_layer_stacking_node.h
  ${CUR_SRC_DIR}paint/paint_layer_stacking_node_iterator.cc
  #${CUR_SRC_DIR}paint/paint_layer_stacking_node_iterator.h
  ${CUR_SRC_DIR}paint/paint_phase.cc
  #${CUR_SRC_DIR}paint/paint_phase.h
  ${CUR_SRC_DIR}paint/paint_property_tree_builder.cc
  #${CUR_SRC_DIR}paint/paint_property_tree_builder.h
  ${CUR_SRC_DIR}paint/paint_property_tree_printer.cc
  #${CUR_SRC_DIR}paint/paint_property_tree_printer.h
  #${CUR_SRC_DIR}paint/paint_result.h
  ${CUR_SRC_DIR}paint/paint_timing.cc
  #${CUR_SRC_DIR}paint/paint_timing.h
  ${CUR_SRC_DIR}paint/paint_timing_detector.cc
  #${CUR_SRC_DIR}paint/paint_timing_detector.h
  ${CUR_SRC_DIR}paint/pre_paint_tree_walk.cc
  #${CUR_SRC_DIR}paint/pre_paint_tree_walk.h
  ${CUR_SRC_DIR}paint/replaced_painter.cc
  #${CUR_SRC_DIR}paint/replaced_painter.h
  ${CUR_SRC_DIR}paint/root_inline_box_painter.cc
  #${CUR_SRC_DIR}paint/root_inline_box_painter.h
  ${CUR_SRC_DIR}paint/rounded_inner_rect_clipper.cc
  #${CUR_SRC_DIR}paint/rounded_inner_rect_clipper.h
  ${CUR_SRC_DIR}paint/scoped_paint_state.cc
  #${CUR_SRC_DIR}paint/scoped_paint_state.h
  ${CUR_SRC_DIR}paint/scoped_svg_paint_state.cc
  #${CUR_SRC_DIR}paint/scoped_svg_paint_state.h
  ${CUR_SRC_DIR}paint/scrollable_area_painter.cc
  #${CUR_SRC_DIR}paint/scrollable_area_painter.h
  ${CUR_SRC_DIR}paint/scrollbar_painter.cc
  #${CUR_SRC_DIR}paint/scrollbar_painter.h
  ${CUR_SRC_DIR}paint/selection_painting_utils.cc
  #${CUR_SRC_DIR}paint/selection_painting_utils.h
  ${CUR_SRC_DIR}paint/svg_container_painter.cc
  #${CUR_SRC_DIR}paint/svg_container_painter.h
  ${CUR_SRC_DIR}paint/svg_filter_painter.cc
  #${CUR_SRC_DIR}paint/svg_filter_painter.h
  ${CUR_SRC_DIR}paint/svg_foreign_object_painter.cc
  #${CUR_SRC_DIR}paint/svg_foreign_object_painter.h
  ${CUR_SRC_DIR}paint/svg_image_painter.cc
  #${CUR_SRC_DIR}paint/svg_image_painter.h
  ${CUR_SRC_DIR}paint/svg_inline_flow_box_painter.cc
  #${CUR_SRC_DIR}paint/svg_inline_flow_box_painter.h
  ${CUR_SRC_DIR}paint/svg_inline_text_box_painter.cc
  #${CUR_SRC_DIR}paint/svg_inline_text_box_painter.h
  ${CUR_SRC_DIR}paint/svg_mask_painter.cc
  #${CUR_SRC_DIR}paint/svg_mask_painter.h
  ${CUR_SRC_DIR}paint/svg_model_object_painter.cc
  #${CUR_SRC_DIR}paint/svg_model_object_painter.h
  ${CUR_SRC_DIR}paint/svg_object_painter.cc
  #${CUR_SRC_DIR}paint/svg_object_painter.h
  ${CUR_SRC_DIR}paint/svg_root_inline_box_painter.cc
  #${CUR_SRC_DIR}paint/svg_root_inline_box_painter.h
  ${CUR_SRC_DIR}paint/svg_root_painter.cc
  #${CUR_SRC_DIR}paint/svg_root_painter.h
  ${CUR_SRC_DIR}paint/svg_shape_painter.cc
  #${CUR_SRC_DIR}paint/svg_shape_painter.h
  ${CUR_SRC_DIR}paint/svg_text_painter.cc
  #${CUR_SRC_DIR}paint/svg_text_painter.h
  ${CUR_SRC_DIR}paint/table_cell_paint_invalidator.cc
  #${CUR_SRC_DIR}paint/table_cell_paint_invalidator.h
  ${CUR_SRC_DIR}paint/table_cell_painter.cc
  #${CUR_SRC_DIR}paint/table_cell_painter.h
  ${CUR_SRC_DIR}paint/table_paint_invalidator.cc
  #${CUR_SRC_DIR}paint/table_paint_invalidator.h
  ${CUR_SRC_DIR}paint/table_painter.cc
  #${CUR_SRC_DIR}paint/table_painter.h
  ${CUR_SRC_DIR}paint/table_row_painter.cc
  #${CUR_SRC_DIR}paint/table_row_painter.h
  ${CUR_SRC_DIR}paint/table_section_painter.cc
  #${CUR_SRC_DIR}paint/table_section_painter.h
  ${CUR_SRC_DIR}paint/text_control_single_line_painter.cc
  #${CUR_SRC_DIR}paint/text_control_single_line_painter.h
  #${CUR_SRC_DIR}paint/text_paint_style.h
  ${CUR_SRC_DIR}paint/text_paint_timing_detector.cc
  #${CUR_SRC_DIR}paint/text_paint_timing_detector.h
  ${CUR_SRC_DIR}paint/text_painter.cc
  #${CUR_SRC_DIR}paint/text_painter.h
  ${CUR_SRC_DIR}paint/text_painter_base.cc
  #${CUR_SRC_DIR}paint/text_painter_base.h
  ${CUR_SRC_DIR}paint/theme_painter.cc
  #${CUR_SRC_DIR}paint/theme_painter.h
  ${CUR_SRC_DIR}paint/theme_painter_default.cc
  #${CUR_SRC_DIR}paint/theme_painter_default.h
  #${CUR_SRC_DIR}paint/theme_painter_mac.h
  ## TODO ## ${CUR_SRC_DIR}paint/theme_painter_mac.mm",
  ${CUR_SRC_DIR}paint/video_painter.cc
  #${CUR_SRC_DIR}paint/video_painter.h
  ${CUR_SRC_DIR}paint/view_painter.cc
  #${CUR_SRC_DIR}paint/view_painter.h
)

list(APPEND BLINK_RENDERER_CORE_EVENT_SOURCES
  #generate_event_interfaces("core_event_interfaces")
  ${CUR_OUT_DIR}css/font_face_set_load_event_init.cc
  ${CUR_OUT_DIR}css/media_query_list_event_init.cc
  ## TODO ## ${CUR_OUT_DIR}display_lock/before_activate_event_init.cc
  ${CUR_OUT_DIR}dom/events/custom_event_init.cc
  ${CUR_OUT_DIR}dom/events/event_init.cc
  ${CUR_OUT_DIR}events/animation_event_init.cc
  ${CUR_OUT_DIR}events/animation_playback_event_init.cc
  ${CUR_OUT_DIR}events/application_cache_error_event_init.cc
  ## TODO ## ${CUR_OUT_DIR}events/before_unload_event_init.cc
  ${CUR_OUT_DIR}events/clipboard_event_init.cc
  ${CUR_OUT_DIR}events/composition_event_init.cc
  ${CUR_OUT_DIR}events/drag_event_init.cc
  ${CUR_OUT_DIR}events/error_event_init.cc
  ${CUR_OUT_DIR}events/focus_event_init.cc
  ${CUR_OUT_DIR}events/hash_change_event_init.cc
  ${CUR_OUT_DIR}events/input_event_init.cc
  ${CUR_OUT_DIR}events/keyboard_event_init.cc
  ${CUR_OUT_DIR}events/message_event_init.cc
  ${CUR_OUT_DIR}events/mouse_event_init.cc
  ## TODO ## ${CUR_OUT_DIR}events/mutation_event_init.cc
  ${CUR_OUT_DIR}events/overscroll_event_init.cc
  ${CUR_OUT_DIR}events/page_transition_event_init.cc
  ${CUR_OUT_DIR}events/pointer_event_init.cc
  ${CUR_OUT_DIR}events/pop_state_event_init.cc
  ${CUR_OUT_DIR}events/progress_event_init.cc
  ${CUR_OUT_DIR}events/promise_rejection_event_init.cc
  ## TODO ## ${CUR_OUT_DIR}events/resource_progress_event_init.cc
  ${CUR_OUT_DIR}events/security_policy_violation_event_init.cc
  ## TODO ## ${CUR_OUT_DIR}events/text_event_init.cc
  ${CUR_OUT_DIR}events/touch_event_init.cc
  ${CUR_OUT_DIR}events/transition_event_init.cc
  ${CUR_OUT_DIR}events/ui_event_init.cc
  ${CUR_OUT_DIR}events/wheel_event_init.cc
  ${CUR_OUT_DIR}html/forms/form_data_event_init.cc
  ${CUR_OUT_DIR}html/track/track_event_init.cc
  ## TODO ## ${CUR_OUT_DIR}invisible_dom/activate_invisible_event_init.cc
  #${CUR_OUT_DIR}mojo/test/mojo_interface_request_event_init.cc # test
)

list(APPEND BLINK_RENDERER_CORE_GEN_STYLE_SOURCES
  # css_properties("make_core_generated_computed_style_base")
  ${CUR_OUT_DIR}style/computed_style_base.cc
)

list(APPEND BLINK_RENDERER_CORE_GEN_CSS_SOURCES
  # make_core_generated_css_property_instances
  ${CUR_OUT_DIR}css/properties/css_property_instances.cc
)

list(APPEND BLINK_RENDERER_CORE_GEN_LONGHANDS_SOURCES
  # make_core_generated_css_longhand_property_classes
  ${CUR_OUT_DIR}css/properties/longhands/background_attachment.cc
  ${CUR_OUT_DIR}css/properties/longhands/background_blend_mode.cc
  ${CUR_OUT_DIR}css/properties/longhands/background_clip.cc
  ${CUR_OUT_DIR}css/properties/longhands/background_color.cc
  ${CUR_OUT_DIR}css/properties/longhands/background_image.cc
  ${CUR_OUT_DIR}css/properties/longhands/background_origin.cc
  ${CUR_OUT_DIR}css/properties/longhands/background_position_x.cc
  ${CUR_OUT_DIR}css/properties/longhands/background_position_y.cc
  ${CUR_OUT_DIR}css/properties/longhands/background_repeat_x.cc
  ${CUR_OUT_DIR}css/properties/longhands/background_repeat_y.cc
  ${CUR_OUT_DIR}css/properties/longhands/background_size.cc
  ${CUR_OUT_DIR}css/properties/longhands/border_bottom_color.cc
  ${CUR_OUT_DIR}css/properties/longhands/border_left_color.cc
  ${CUR_OUT_DIR}css/properties/longhands/border_right_color.cc
  ${CUR_OUT_DIR}css/properties/longhands/border_top_color.cc
  ${CUR_OUT_DIR}css/properties/longhands/column_rule_color.cc
  ${CUR_OUT_DIR}css/properties/longhands/counter_increment.cc
  ${CUR_OUT_DIR}css/properties/longhands/counter_reset.cc
  ${CUR_OUT_DIR}css/properties/longhands/grid_template_columns.cc
  ${CUR_OUT_DIR}css/properties/longhands/grid_template_rows.cc
  ${CUR_OUT_DIR}css/properties/longhands/mask_source_type.cc
  ${CUR_OUT_DIR}css/properties/longhands/outline_color.cc
  ${CUR_OUT_DIR}css/properties/longhands/text_decoration_color.cc
  ${CUR_OUT_DIR}css/properties/longhands/webkit_mask_clip.cc
  ${CUR_OUT_DIR}css/properties/longhands/webkit_mask_composite.cc
  ${CUR_OUT_DIR}css/properties/longhands/webkit_mask_image.cc
  ${CUR_OUT_DIR}css/properties/longhands/webkit_mask_origin.cc
  ${CUR_OUT_DIR}css/properties/longhands/webkit_mask_position_x.cc
  ${CUR_OUT_DIR}css/properties/longhands/webkit_mask_position_y.cc
  ${CUR_OUT_DIR}css/properties/longhands/webkit_mask_repeat_x.cc
  ${CUR_OUT_DIR}css/properties/longhands/webkit_mask_repeat_y.cc
  ${CUR_OUT_DIR}css/properties/longhands/webkit_mask_size.cc
  ${CUR_OUT_DIR}css/properties/longhands/webkit_text_emphasis_color.cc
  ${CUR_OUT_DIR}css/properties/longhands/webkit_text_fill_color.cc
  ${CUR_OUT_DIR}css/properties/longhands/webkit_text_stroke_color.cc
)

#list(APPEND BLINK_RENDERER_SHORTHANDS_SOURCES
# ${CUR_OUT_DIR}css/properties/shorthands/animation.h
#   "$blink_core_output_dir/css/properties/shorthands/background.h
#   "$blink_core_output_dir/css/properties/shorthands/background_position.h
#   "$blink_core_output_dir/css/properties/shorthands/background_repeat.h
#   "$blink_core_output_dir/css/properties/shorthands/border.h
#   "$blink_core_output_dir/css/properties/shorthands/border_block.h
#   "$blink_core_output_dir/css/properties/shorthands/border_block_color.h
#   "$blink_core_output_dir/css/properties/shorthands/border_block_end.h
#   "$blink_core_output_dir/css/properties/shorthands/border_block_start.h
#   "$blink_core_output_dir/css/properties/shorthands/border_block_style.h
#   "$blink_core_output_dir/css/properties/shorthands/border_block_width.h
#   "$blink_core_output_dir/css/properties/shorthands/border_bottom.h
#   "$blink_core_output_dir/css/properties/shorthands/border_color.h
#   "$blink_core_output_dir/css/properties/shorthands/border_image.h
#   "$blink_core_output_dir/css/properties/shorthands/border_inline.h
#   "$blink_core_output_dir/css/properties/shorthands/border_inline_color.h
#   "$blink_core_output_dir/css/properties/shorthands/border_inline_end.h
#   "$blink_core_output_dir/css/properties/shorthands/border_inline_start.h
#   "$blink_core_output_dir/css/properties/shorthands/border_inline_style.h
#   "$blink_core_output_dir/css/properties/shorthands/border_inline_width.h
#   "$blink_core_output_dir/css/properties/shorthands/border_left.h
#   "$blink_core_output_dir/css/properties/shorthands/border_radius.h
#   "$blink_core_output_dir/css/properties/shorthands/border_right.h
#   "$blink_core_output_dir/css/properties/shorthands/border_spacing.h
#   "$blink_core_output_dir/css/properties/shorthands/border_style.h
#   "$blink_core_output_dir/css/properties/shorthands/border_top.h
#   "$blink_core_output_dir/css/properties/shorthands/border_width.h
#   "$blink_core_output_dir/css/properties/shorthands/column_rule.h
#   "$blink_core_output_dir/css/properties/shorthands/columns.h
#   "$blink_core_output_dir/css/properties/shorthands/epub_text_emphasis.h
#   "$blink_core_output_dir/css/properties/shorthands/flex.h
#   "$blink_core_output_dir/css/properties/shorthands/flex_flow.h
#   "$blink_core_output_dir/css/properties/shorthands/font.h
#   "$blink_core_output_dir/css/properties/shorthands/font_variant.h
#   "$blink_core_output_dir/css/properties/shorthands/gap.h
#   "$blink_core_output_dir/css/properties/shorthands/grid.h
#   "$blink_core_output_dir/css/properties/shorthands/grid_area.h
#   "$blink_core_output_dir/css/properties/shorthands/grid_column.h
#   "$blink_core_output_dir/css/properties/shorthands/grid_column_gap.h
#   "$blink_core_output_dir/css/properties/shorthands/grid_row_gap.h
#   "$blink_core_output_dir/css/properties/shorthands/grid_gap.h
#   "$blink_core_output_dir/css/properties/shorthands/grid_row.h
#   "$blink_core_output_dir/css/properties/shorthands/grid_template.h
#   "$blink_core_output_dir/css/properties/shorthands/inset.h
#   "$blink_core_output_dir/css/properties/shorthands/inset_block.h
#   "$blink_core_output_dir/css/properties/shorthands/inset_inline.h
#   "$blink_core_output_dir/css/properties/shorthands/list_style.h
#   "$blink_core_output_dir/css/properties/shorthands/margin.h
#   "$blink_core_output_dir/css/properties/shorthands/margin_block.h
#   "$blink_core_output_dir/css/properties/shorthands/margin_inline.h
#   "$blink_core_output_dir/css/properties/shorthands/marker.h
#   "$blink_core_output_dir/css/properties/shorthands/offset.h
#   "$blink_core_output_dir/css/properties/shorthands/outline.h
#   "$blink_core_output_dir/css/properties/shorthands/overflow.h
#   "$blink_core_output_dir/css/properties/shorthands/overscroll_behavior.h
#   "$blink_core_output_dir/css/properties/shorthands/padding.h
#   "$blink_core_output_dir/css/properties/shorthands/padding_block.h
#   "$blink_core_output_dir/css/properties/shorthands/padding_inline.h
#   "$blink_core_output_dir/css/properties/shorthands/page_break_after.h
#   "$blink_core_output_dir/css/properties/shorthands/page_break_before.h
#   "$blink_core_output_dir/css/properties/shorthands/page_break_inside.h
#   "$blink_core_output_dir/css/properties/shorthands/place_content.h
#   "$blink_core_output_dir/css/properties/shorthands/place_items.h
#   "$blink_core_output_dir/css/properties/shorthands/place_self.h
#   "$blink_core_output_dir/css/properties/shorthands/scroll_margin.h
#   "$blink_core_output_dir/css/properties/shorthands/scroll_margin_block.h
#   "$blink_core_output_dir/css/properties/shorthands/scroll_margin_inline.h
#   "$blink_core_output_dir/css/properties/shorthands/scroll_padding.h
#   "$blink_core_output_dir/css/properties/shorthands/scroll_padding_block.h
#   "$blink_core_output_dir/css/properties/shorthands/scroll_padding_inline.h
#   "$blink_core_output_dir/css/properties/shorthands/text_decoration.h
#   "$blink_core_output_dir/css/properties/shorthands/transition.h
#   "$blink_core_output_dir/css/properties/shorthands/webkit_animation.h
#   "$blink_core_output_dir/css/properties/shorthands/webkit_border_after.h
#   "$blink_core_output_dir/css/properties/shorthands/webkit_border_before.h
#   "$blink_core_output_dir/css/properties/shorthands/webkit_border_end.h
#   "$blink_core_output_dir/css/properties/shorthands/webkit_border_radius.h
#   "$blink_core_output_dir/css/properties/shorthands/webkit_border_start.h
#   "$blink_core_output_dir/css/properties/shorthands/webkit_column_break_after.h
#   "$blink_core_output_dir/css/properties/shorthands/webkit_column_break_before.h
#   "$blink_core_output_dir/css/properties/shorthands/webkit_column_break_inside.h
#   "$blink_core_output_dir/css/properties/shorthands/webkit_column_rule.h
#   "$blink_core_output_dir/css/properties/shorthands/webkit_columns.h
#   "$blink_core_output_dir/css/properties/shorthands/webkit_flex.h
#   "$blink_core_output_dir/css/properties/shorthands/webkit_flex_flow.h
#   "$blink_core_output_dir/css/properties/shorthands/webkit_margin_collapse.h
#   "$blink_core_output_dir/css/properties/shorthands/webkit_mask.h
#   "$blink_core_output_dir/css/properties/shorthands/webkit_mask_box_image.h
#   "$blink_core_output_dir/css/properties/shorthands/webkit_mask_position.h
#   "$blink_core_output_dir/css/properties/shorthands/webkit_mask_repeat.h
#   "$blink_core_output_dir/css/properties/shorthands/webkit_text_emphasis.h
#   "$blink_core_output_dir/css/properties/shorthands/webkit_text_stroke.h
#   "$blink_core_output_dir/css/properties/shorthands/webkit_transition.h
#)

list(APPEND BLINK_RENDERER_CORE_GEN_PROPERTY_NAMES_SOURCES
  # make_core_generated_css_property_names
  ${CUR_OUT_DIR}css/css_property_names.cc
)

list(APPEND BLINK_RENDERER_CORE_GEN_ATRULE_SOURCES
  # make_core_generated_atrule_names
  ${CUR_OUT_DIR}css/parser/at_rule_descriptors.cc
)

#list(APPEND BLINK_RENDERER_CORE_GEN_MEDIA_FEATURES_SOURCES
#  # make_core_generated_media_features
#  ${CUR_OUT_DIR}css/media_features.h
#)

list(APPEND BLINK_RENDERER_CORE_GEN_STYLE_PROP_SHORT_SOURCES
  # make_core_generated_style_property_shorthand
  ${CUR_OUT_DIR}style_property_shorthand.cc
)

# ${CUR_SRC_DIR}invisible_dom/activate_invisible_event.idl # .idl

## see core_idl_files
#                    "aom/accessible_node.idl",
#                    "aom/accessible_node_list.idl",
#                    "aom/computed_accessible_node.idl",
#                    "animation/animation.idl",
#                    "animation/animation_effect.idl",
#                    "animation/animation_timeline.idl",
#                    "animation/document_timeline.idl",
#                    "animation/keyframe_effect.idl",
#                    "animation/scroll_timeline.idl",
#                    "clipboard/data_transfer.idl",
#                    "clipboard/data_transfer_item_list.idl",
#                    "css/css_condition_rule.idl",
#                    "css/css_font_face_rule.idl",
#                    "css/css_font_feature_values_rule.idl",
#                    "css/css_grouping_rule.idl",
#                    "css/css_import_rule.idl",
#                    "css/css_keyframe_rule.idl",
#                    "css/css_keyframes_rule.idl",
#                    "css/css_media_rule.idl",
#                    "css/css_namespace_rule.idl",
#                    "css/css_page_rule.idl",
#                    "css/css_rule.idl",
#                    "css/css_rule_list.idl",
#                    "css/css_style_declaration.idl",
#                    "css/css_style_rule.idl",
#                    "css/css_style_sheet.idl",
#                    "css/css_supports_rule.idl",
#                    "css/css_viewport_rule.idl",
#                    "css/font_face.idl",
#                    "css/font_face_set.idl",
#                    "css/font_face_set_load_event.idl",
#                    "css/media_list.idl",
#                    "css/media_query_list.idl",
#                    "css/media_query_list_event.idl",
#                    "css/style_media.idl",
#                    "css/style_sheet.idl",
#                    "css/style_sheet_list.idl",
#                    "css/cssom/css_image_value.idl",
#                    "css/cssom/css_keyword_value.idl",
#                    "css/cssom/css_matrix_component.idl",
#                    "css/cssom/css_math_invert.idl",
#                    "css/cssom/css_math_max.idl",
#                    "css/cssom/css_math_min.idl",
#                    "css/cssom/css_math_negate.idl",
#                    "css/cssom/css_math_sum.idl",
#                    "css/cssom/css_math_product.idl",
#                    "css/cssom/css_math_value.idl",
#                    "css/cssom/css_numeric_array.idl",
#                    "css/cssom/css_numeric_value.idl",
#                    "css/cssom/css_perspective.idl",
#                    "css/cssom/css_position_value.idl",
#                    "css/cssom/css_rotate.idl",
#                    "css/cssom/css_scale.idl",
#                    "css/cssom/css_skew.idl",
#                    "css/cssom/css_skew_x.idl",
#                    "css/cssom/css_skew_y.idl",
#                    "css/cssom/css_style_value.idl",
#                    "css/cssom/css_transform_component.idl",
#                    "css/cssom/css_transform_value.idl",
#                    "css/cssom/css_translate.idl",
#                    "css/cssom/css_unit_value.idl",
#                    "css/cssom/css_unparsed_value.idl",
#                    "css/cssom/css_variable_reference_value.idl",
#                    "css/cssom/style_property_map.idl",
#                    "css/cssom/style_property_map_read_only.idl",
#                    "display_lock/before_activate_event.idl",
#                    "display_lock/display_lock_context.idl",
#                    "dom/abort_controller.idl",
#                    "dom/abort_signal.idl",
#                    "dom/attr.idl",
#                    "dom/cdata_section.idl",
#                    "dom/character_data.idl",
#                    "dom/comment.idl",
#                    "dom/dom_exception.idl",
#                    "dom/dom_implementation.idl",
#                    "dom/dom_string_list.idl",
#                    "dom/dom_string_map.idl",
#                    "dom/dom_token_list.idl",
#                    "dom/document_fragment.idl",
#                    "dom/document_type.idl",
#                    "dom/element.idl",
#                    "dom/idle_deadline.idl",
#                    "dom/iterator.idl",
#                    "dom/mutation_observer.idl",
#                    "dom/mutation_record.idl",
#                    "dom/named_node_map.idl",
#                    "dom/node.idl",
#                    "dom/node_filter.idl",
#                    "dom/node_iterator.idl",
#                    "dom/node_list.idl",
#                    "dom/processing_instruction.idl",
#                    "dom/range.idl",
#                    "dom/scripted_task_queue.idl",
#                    "dom/scripted_task_queue_controller.idl",
#                    "dom/static_range.idl",
#                    "dom/text.idl",
#                    "dom/tree_walker.idl",
#                    "dom/xml_document.idl",
#                    "dom/events/custom_event.idl",
#                    "dom/events/event.idl",
#                    "dom/events/event_listener.idl",
#                    "dom/events/event_target.idl",
#                    "trustedtypes/trusted_html.idl",
#                    "trustedtypes/trusted_script.idl",
#                    "trustedtypes/trusted_script_url.idl",
#                    "trustedtypes/trusted_type_policy.idl",
#                    "trustedtypes/trusted_type_policy_factory.idl",
#                    "trustedtypes/trusted_url.idl",
#                    "editing/selection.idl",
#                    "events/animation_event.idl",
#                    "events/animation_playback_event.idl",
#                    "events/application_cache_error_event.idl",
#                    "events/before_unload_event.idl",
#                    "events/clipboard_event.idl",
#                    "events/composition_event.idl",
#                    "events/drag_event.idl",
#                    "events/error_event.idl",
#                    "events/focus_event.idl",
#                    "events/hash_change_event.idl",
#                    "events/input_event.idl",
#                    "events/keyboard_event.idl",
#                    "events/message_event.idl",
#                    "events/mouse_event.idl",
#                    "events/mutation_event.idl",
#                    "events/overscroll_event.idl",
#                    "events/page_transition_event.idl",
#                    "events/pointer_event.idl",
#                    "events/pop_state_event.idl",
#                    "events/portal_activate_event.idl",
#                    "events/progress_event.idl",
#                    "events/promise_rejection_event.idl",
#                    "events/resource_progress_event.idl",
#                    "events/security_policy_violation_event.idl",
#                    "events/text_event.idl",
#                    "events/touch_event.idl",
#                    "events/transition_event.idl",
#                    "events/ui_event.idl",
#                    "events/wheel_event.idl",
#                    "feature_policy/feature_policy.idl",
#                    "fetch/body.idl",
#                    "fetch/headers.idl",
#                    "fetch/request.idl",
#                    "fetch/response.idl",
#                    "fileapi/blob.idl",
#                    "fileapi/file.idl",
#                    "fileapi/file_list.idl",
#                    "fileapi/file_reader.idl",
#                    "fileapi/file_reader_sync.idl",
#                    "frame/bar_prop.idl",
#                    "frame/csp/csp_violation_report_body.idl",
#                    "frame/deprecation_report_body.idl",
#                    "frame/external.idl",
#                    "frame/feature_policy_violation_report_body.idl",
#                    "frame/history.idl",
#                    "frame/intervention_report_body.idl",
#                    "frame/location.idl",
#                    "frame/report.idl",
#                    "frame/report_body.idl",
#                    "frame/reporting_observer.idl",
#                    "frame/scheduling.idl",
#                    "frame/test_report_body.idl", # test
#                    "frame/user_activation.idl",
#                    "frame/visual_viewport.idl",
#                    "geometry/dom_matrix.idl",
#                    "geometry/dom_matrix_read_only.idl",
#                    "geometry/dom_point.idl",
#                    "geometry/dom_point_read_only.idl",
#                    "geometry/dom_quad.idl",
#                    "geometry/dom_rect.idl",
#                    "geometry/dom_rect_list.idl",
#                    "geometry/dom_rect_read_only.idl",
#                    "html/html_all_collection.idl",
#                    "html/html_anchor_element.idl",
#                    "html/html_area_element.idl",
#                    "html/html_br_element.idl",
#                    "html/html_base_element.idl",
#                    "html/html_body_element.idl",
#                    "html/html_collection.idl",
#                    "html/html_content_element.idl",
#                    "html/html_dlist_element.idl",
#                    "html/html_data_element.idl",
#                    "html/html_details_element.idl",
#                    "html/html_dialog_element.idl",
#                    "html/html_directory_element.idl",
#                    "html/html_div_element.idl",
#                    "html/html_document.idl",
#                    "html/html_embed_element.idl",
#                    "html/html_font_element.idl",
#                    "html/html_frame_element.idl",
#                    "html/html_frame_set_element.idl",
#                    "html/html_hr_element.idl",
#                    "html/html_head_element.idl",
#                    "html/html_heading_element.idl",
#                    "html/html_html_element.idl",
#                    "html/html_image_element.idl",
#                    "html/html_li_element.idl",
#                    "html/html_link_element.idl",
#                    "html/html_map_element.idl",
#                    "html/html_marquee_element.idl",
#                    "html/html_menu_element.idl",
#                    "html/html_meta_element.idl",
#                    "html/html_meter_element.idl",
#                    "html/html_mod_element.idl",
#                    "html/html_olist_element.idl",
#                    "html/html_object_element.idl",
#                    "html/html_paragraph_element.idl",
#                    "html/html_param_element.idl",
#                    "html/html_picture_element.idl",
#                    "html/html_pre_element.idl",
#                    "html/html_progress_element.idl",
#                    "html/html_quote_element.idl",
#                    "html/html_script_element.idl",
#                    "html/html_shadow_element.idl",
#                    "html/html_slot_element.idl",
#                    "html/html_source_element.idl",
#                    "html/html_span_element.idl",
#                    "html/html_style_element.idl",
#                    "html/html_table_caption_element.idl",
#                    "html/html_table_cell_element.idl",
#                    "html/html_table_col_element.idl",
#                    "html/html_table_element.idl",
#                    "html/html_table_row_element.idl",
#                    "html/html_table_section_element.idl",
#                    "html/html_template_element.idl",
#                    "html/html_time_element.idl",
#                    "html/html_title_element.idl",
#                    "html/html_ulist_element.idl",
#                    "html/html_unknown_element.idl",
#                    "html/time_ranges.idl",
#                    "html/void_callback.idl",
#                    "html/canvas/image_data.idl",
#                    "html/canvas/text_metrics.idl",
#                    "html/custom/custom_element_registry.idl",
#                    "html/custom/element_internals.idl",
#                    "html/forms/form_data.idl",
#                    "html/forms/form_data_event.idl",
#                    "html/forms/html_button_element.idl",
#                    "html/forms/html_data_list_element.idl",
#                    "html/forms/html_field_set_element.idl",
#                    "html/forms/html_form_controls_collection.idl",
#                    "html/forms/html_form_element.idl",
#                    "html/forms/html_label_element.idl",
#                    "html/forms/html_legend_element.idl",
#                    "html/forms/html_opt_group_element.idl",
#                    "html/forms/html_option_element.idl",
#                    "html/forms/html_options_collection.idl",
#                    "html/forms/html_output_element.idl",
#                    "html/forms/html_select_element.idl",
#                    "html/forms/html_text_area_element.idl",
#                    "html/forms/radio_node_list.idl",
#                    "html/forms/validity_state.idl",
#                    "html/media/html_audio_element.idl",
#                    "html/media/media_error.idl",
#                    "html/portal/html_portal_element.idl",
#                    "html/portal/portal_host.idl",
#                    "html/track/audio_track_list.idl",
#                    "html/track/html_track_element.idl",
#                    "html/track/text_track.idl",
#                    "html/track/text_track_cue.idl",
#                    "html/track/text_track_cue_list.idl",
#                    "html/track/text_track_list.idl",
#                    "html/track/track_event.idl",
#                    "html/track/video_track_list.idl",
#                    "html/track/vtt/vtt_cue.idl",
#                    "html/track/vtt/vtt_region.idl",
#                    "imagebitmap/image_bitmap.idl",
#                    "input/input_device_capabilities.idl",
#                    "input/touch.idl",
#                    "input/touch_list.idl",
#                    "inspector/inspector_overlay_host.idl",
#                    "intersection_observer/intersection_observer.idl",
#                    "intersection_observer/intersection_observer_entry.idl",
#                    "invisible_dom/activate_invisible_event.idl",
#                    "layout/custom/layout_constraints.idl",
#                    "layout/custom/layout_fragment.idl",
#                    "layout/custom/layout_fragment_request.idl",
#                    "layout/custom/layout_child.idl",
#                    "layout/custom/layout_worklet_global_scope.idl",
#                    "loader/appcache/application_cache.idl",
#                    "messaging/message_channel.idl",
#                    "messaging/message_port.idl",
#                    "mojo/mojo.idl",
#                    "mojo/mojo_handle.idl",
#                    "mojo/mojo_watcher.idl",
#                    "mojo/test/mojo_interface_interceptor.idl", # test
#                    "mojo/test/mojo_interface_request_event.idl", # test
#                    "page/page_popup_controller.idl",
#                    "page/scrolling/scroll_state.idl",
#                    "resize_observer/resize_observer.idl",
#                    "resize_observer/resize_observer_entry.idl",
#                    "streams/readable_stream.idl",
#                    "streams/readable_stream_default_controller.idl",
#                    "streams/readable_stream_default_reader.idl",
#                    "streams/transform_stream.idl",
#                    "streams/transform_stream_default_controller.idl",
#                    "streams/writable_stream.idl",
#                    "streams/writable_stream_default_controller.idl",
#                    "streams/writable_stream_default_writer.idl",
#                    "streams/underlying_source_base.idl",
#                    "streams/underlying_sink_base.idl",
#                    "svg/svg_a_element.idl",
#                    "svg/svg_angle.idl",
#                    "svg/svg_animate_element.idl",
#                    "svg/svg_animate_motion_element.idl",
#                    "svg/svg_animate_transform_element.idl",
#                    "svg/svg_animated_angle.idl",
#                    "svg/svg_animated_boolean.idl",
#                    "svg/svg_animated_enumeration.idl",
#                    "svg/svg_animated_integer.idl",
#                    "svg/svg_animated_length.idl",
#                    "svg/svg_animated_length_list.idl",
#                    "svg/svg_animated_number.idl",
#                    "svg/svg_animated_number_list.idl",
#                    "svg/svg_animated_preserve_aspect_ratio.idl",
#                    "svg/svg_animated_rect.idl",
#                    "svg/svg_animated_string.idl",
#                    "svg/svg_animated_transform_list.idl",
#                    "svg/svg_animation_element.idl",
#                    "svg/svg_circle_element.idl",
#                    "svg/svg_clip_path_element.idl",
#                    "svg/svg_component_transfer_function_element.idl",
#                    "svg/svg_defs_element.idl",
#                    "svg/svg_desc_element.idl",
#                    "svg/svg_discard_element.idl",
#                    "svg/svg_element.idl",
#                    "svg/svg_ellipse_element.idl",
#                    "svg/svg_fe_blend_element.idl",
#                    "svg/svg_fe_color_matrix_element.idl",
#                    "svg/svg_fe_component_transfer_element.idl",
#                    "svg/svg_fe_composite_element.idl",
#                    "svg/svg_fe_convolve_matrix_element.idl",
#                    "svg/svg_fe_diffuse_lighting_element.idl",
#                    "svg/svg_fe_displacement_map_element.idl",
#                    "svg/svg_fe_distant_light_element.idl",
#                    "svg/svg_fe_drop_shadow_element.idl",
#                    "svg/svg_fe_flood_element.idl",
#                    "svg/svg_fe_func_a_element.idl",
#                    "svg/svg_fe_func_b_element.idl",
#                    "svg/svg_fe_func_g_element.idl",
#                    "svg/svg_fe_func_r_element.idl",
#                    "svg/svg_fe_gaussian_blur_element.idl",
#                    "svg/svg_fe_image_element.idl",
#                    "svg/svg_fe_merge_element.idl",
#                    "svg/svg_fe_merge_node_element.idl",
#                    "svg/svg_fe_morphology_element.idl",
#                    "svg/svg_fe_offset_element.idl",
#                    "svg/svg_fe_point_light_element.idl",
#                    "svg/svg_fe_specular_lighting_element.idl",
#                    "svg/svg_fe_spot_light_element.idl",
#                    "svg/svg_fe_tile_element.idl",
#                    "svg/svg_fe_turbulence_element.idl",
#                    "svg/svg_filter_element.idl",
#                    "svg/svg_foreign_object_element.idl",
#                    "svg/svg_g_element.idl",
#                    "svg/svg_geometry_element.idl",
#                    "svg/svg_gradient_element.idl",
#                    "svg/svg_graphics_element.idl",
#                    "svg/svg_image_element.idl",
#                    "svg/svg_length.idl",
#                    "svg/svg_length_list.idl",
#                    "svg/svg_line_element.idl",
#                    "svg/svg_linear_gradient_element.idl",
#                    "svg/svg_mpath_element.idl",
#                    "svg/svg_marker_element.idl",
#                    "svg/svg_mask_element.idl",
#                    "svg/svg_matrix.idl",
#                    "svg/svg_metadata_element.idl",
#                    "svg/svg_number.idl",
#                    "svg/svg_number_list.idl",
#                    "svg/svg_path_element.idl",
#                    "svg/svg_pattern_element.idl",
#                    "svg/svg_point.idl",
#                    "svg/svg_point_list.idl",
#                    "svg/svg_polygon_element.idl",
#                    "svg/svg_polyline_element.idl",
#                    "svg/svg_preserve_aspect_ratio.idl",
#                    "svg/svg_radial_gradient_element.idl",
#                    "svg/svg_rect.idl",
#                    "svg/svg_rect_element.idl",
#                    "svg/svg_svg_element.idl",
#                    "svg/svg_script_element.idl",
#                    "svg/svg_set_element.idl",
#                    "svg/svg_stop_element.idl",
#                    "svg/svg_string_list.idl",
#                    "svg/svg_style_element.idl",
#                    "svg/svg_switch_element.idl",
#                    "svg/svg_symbol_element.idl",
#                    "svg/svg_tspan_element.idl",
#                    "svg/svg_text_content_element.idl",
#                    "svg/svg_text_element.idl",
#                    "svg/svg_text_path_element.idl",
#                    "svg/svg_text_positioning_element.idl",
#                    "svg/svg_title_element.idl",
#                    "svg/svg_transform.idl",
#                    "svg/svg_transform_list.idl",
#                    "svg/svg_unit_types.idl",
#                    "svg/svg_use_element.idl",
#                    "svg/svg_view_element.idl",
#                    "timing/memory_info.idl",
#                    "timing/performance.idl",
#                    "timing/performance_element_timing.idl",
#                    "timing/performance_entry.idl",
#                    "timing/performance_event_timing.idl",
#                    "timing/performance_layout_jank.idl",
#                    "timing/performance_long_task_timing.idl",
#                    "timing/performance_mark.idl",
#                    "timing/performance_measure.idl",
#                    "timing/performance_navigation.idl",
#                    "timing/performance_navigation_timing.idl",
#                    "timing/performance_observer.idl",
#                    "timing/performance_observer_entry_list.idl",
#                    "timing/performance_paint_timing.idl",
#                    "timing/performance_resource_timing.idl",
#                    "timing/performance_server_timing.idl",
#                    "timing/performance_timing.idl",
#                    "timing/task_attribution_timing.idl",
#                    "typed_arrays/array_buffer.idl",
#                    "typed_arrays/array_buffer_view.idl",
#                    "typed_arrays/big_int_64_array.idl",
#                    "typed_arrays/big_uint_64_array.idl",
#                    "typed_arrays/data_view.idl",
#                    "typed_arrays/float32_array.idl",
#                    "typed_arrays/float64_array.idl",
#                    "typed_arrays/int16_array.idl",
#                    "typed_arrays/int32_array.idl",
#                    "typed_arrays/int8_array.idl",
#                    "typed_arrays/shared_array_buffer.idl",
#                    "typed_arrays/uint16_array.idl",
#                    "typed_arrays/uint32_array.idl",
#                    "typed_arrays/uint8_array.idl",
#                    "typed_arrays/uint8_clamped_array.idl",
#                    "url/url_search_params.idl",
#                    "workers/experimental/task.idl",
#                    "workers/experimental/task_worklet.idl",
#                    "workers/experimental/task_worklet_global_scope.idl",
#                    "workers/experimental/worker_task_queue.idl",
#                    "workers/shared_worker.idl",
#                    "workers/worker.idl",
#                    "workers/worker_location.idl",
#                    "workers/worklet.idl",
#                    "workers/worklet_global_scope.idl",
#                    "xml/dom_parser.idl",
#                    "xml/xml_serializer.idl",
#                    "xml/xpath_evaluator.idl",
#                    "xml/xpath_expression.idl",
#                    "xml/xpath_ns_resolver.idl",
#                    "xml/xpath_result.idl",
#                    "xml/xslt_processor.idl",
#                    "xmlhttprequest/xml_http_request.idl",
#                    "xmlhttprequest/xml_http_request_event_target.idl",
#                    "xmlhttprequest/xml_http_request_upload.idl",
#
## see core_idl_with_modules_dependency_files
#                    "clipboard/data_transfer_item.idl",
#                    "css/css.idl",
#                    "dom/document.idl",
#                    "dom/shadow_root.idl",
#                    "frame/navigator.idl",
#                    "frame/screen.idl",
#                    "frame/window.idl",
#                    "html/html_element.idl",
#                    "html/html_iframe_element.idl",
#                    "html/canvas/html_canvas_element.idl",
#                    "html/forms/html_input_element.idl",
#                    "html/media/html_media_element.idl",
#                    "html/media/html_video_element.idl",
#                    "html/track/audio_track.idl",
#                    "html/track/video_track.idl",
#                    "inspector/dev_tools_host.idl",
#                    "offscreencanvas/offscreen_canvas.idl",
#                    "url/url.idl",
#                    "workers/dedicated_worker_global_scope.idl",
#                    "workers/shared_worker_global_scope.idl",
#                    "workers/worker_global_scope.idl",
#                    "workers/worker_navigator.idl",
#
## see core_dependency_idl_files
#                    "animation/document_animation.idl",
#                    "animation/element_animation.idl",
#                    "css/font_face_source.idl",
#                    "css/property_registration.idl",
#                    "css/cssom/css_unit_values.idl",
#                    "css/cssom/element_computed_style_map.idl",
#                    "dom/accessibility_role.idl",
#                    "dom/aria_attributes.idl",
#                    "dom/child_node.idl",
#                    "dom/document_and_element_event_handlers.idl",
#                    "dom/document_or_shadow_root.idl",
#                    "dom/global_event_handlers.idl",
#                    "dom/nonced_element.idl",
#                    "dom/non_document_type_child_node.idl",
#                    "dom/non_element_parent_node.idl",
#                    "dom/parent_node.idl",
#                    "events/navigator_events.idl",
#                    "fetch/window_fetch.idl",
#                    "fetch/worker_fetch.idl",
#                    "fileapi/url_file_api.idl",
#                    "frame/navigator_automation_information.idl",
#                    "frame/navigator_concurrent_hardware.idl",
#                    "frame/navigator_cookies.idl",
#                    "frame/navigator_device_memory.idl",
#                    "frame/navigator_id.idl",
#                    "frame/navigator_language.idl",
#                    "frame/navigator_on_line.idl",
#                    "frame/navigator_scheduling.idl",
#                    "frame/navigator_user_activation.idl",
#                    "frame/navigator_user_agent.idl",
#                    "frame/window_event_handlers.idl",
#                    "frame/window_or_worker_global_scope.idl",
#                    "fullscreen/document_fullscreen.idl",
#                    "fullscreen/element_fullscreen.idl",
#                    "html/html_hyperlink_element_utils.idl",
#                    "html/portal/window_portal_host.idl",
#                    "layout/custom/css_layout_worklet.idl",
#                    "svg/svg_document.idl",
#                    "svg/svg_filter_primitive_standard_attributes.idl",
#                    "svg/svg_fit_to_view_box.idl",
#                    "svg/svg_tests.idl", # test
#                    "svg/svg_uri_reference.idl",
#                    "svg/svg_zoom_and_pan.idl",
#                    "timing/window_performance.idl",
#                    "timing/worker_global_scope_performance.idl",
#                    "workers/abstract_worker.idl",
#                    "workers/experimental/window_task_worklet.idl",
#                    "xml/document_xpath_evaluator.idl",
#
## see core_typedefs_enums_only_idl_files
#                    "css/cssom_string.idl",
#                    "dom/common_definitions.idl",
#                    "timing/dom_high_res_time_stamp.idl",
#                    "timing/performance_entry_list.idl",
#
## see core_callback_function_idl_files
#                    "html/event_handler.idl",
#                    "dom/frame_request_callback.idl",
#                    "dom/function_string_callback.idl",
#                    "dom/idle_request_callback.idl",
#                    "dom/void_function.idl",
#
## see core_dictionary_idl_files
#                    "animation/base_keyframe.idl",
#                    "animation/base_property_indexed_keyframe.idl",
#                    "animation/computed_effect_timing.idl",
#                    "animation/document_timeline_options.idl",
#                    "animation/effect_timing.idl",
#                    "animation/keyframe_animation_options.idl",
#                    "animation/keyframe_effect_options.idl",
#                    "animation/optional_effect_timing.idl",
#                    "animation/scroll_timeline_options.idl",
#                    "css/css_style_sheet_init.idl",
#                    "css/font_face_descriptors.idl",
#                    "css/font_face_set_load_event_init.idl",
#                    "css/media_query_list_event_init.idl",
#                    "css/property_descriptor.idl",
#                    "css/cssom/css_matrix_component_options.idl",
#                    "css/cssom/css_numeric_type.idl",
#                    "dom/element_creation_options.idl",
#                    "dom/element_definition_options.idl",
#                    "dom/element_registration_options.idl",
#                    "dom/get_root_node_options.idl",
#                    "dom/idle_request_options.idl",
#                    "dom/mutation_observer_init.idl",
#                    "dom/shadow_root_init.idl",
#                    "dom/events/add_event_listener_options.idl",
#                    "dom/events/custom_event_init.idl",
#                    "dom/events/event_init.idl",
#                    "dom/events/event_listener_options.idl",
#                    "dom/events/event_modifier_init.idl",
#                    "display_lock/display_lock_options.idl",
#                    "events/animation_event_init.idl",
#                    "events/animation_playback_event_init.idl",
#                    "events/application_cache_error_event_init.idl",
#                    "events/clipboard_event_init.idl",
#                    "events/composition_event_init.idl",
#                    "events/drag_event_init.idl",
#                    "events/error_event_init.idl",
#                    "events/focus_event_init.idl",
#                    "events/hash_change_event_init.idl",
#                    "events/input_event_init.idl",
#                    "events/keyboard_event_init.idl",
#                    "events/message_event_init.idl",
#                    "events/mouse_event_init.idl",
#                    "events/overscroll_event_init.idl",
#                    "events/page_transition_event_init.idl",
#                    "events/pointer_event_init.idl",
#                    "events/pop_state_event_init.idl",
#                    "events/portal_activate_event_init.idl",
#                    "events/progress_event_init.idl",
#                    "events/promise_rejection_event_init.idl",
#                    "events/security_policy_violation_event_init.idl",
#                    "events/touch_event_init.idl",
#                    "events/transition_event_init.idl",
#                    "events/ui_event_init.idl",
#                    "events/wheel_event_init.idl",
#                    "fetch/request_init.idl",
#                    "fetch/response_init.idl",
#                    "fileapi/blob_property_bag.idl",
#                    "fileapi/file_property_bag.idl",
#                    "frame/reporting_observer_options.idl",
#                    "frame/scroll_into_view_options.idl",
#                    "frame/scroll_options.idl",
#                    "frame/scroll_to_options.idl",
#                    "frame/user_agent.idl",
#                    "frame/window_post_message_options.idl",
#                    "fullscreen/fullscreen_options.idl",
#                    "geometry/dom_matrix_2d_init.idl",
#                    "geometry/dom_matrix_init.idl",
#                    "geometry/dom_point_init.idl",
#                    "geometry/dom_quad_init.idl",
#                    "geometry/dom_rect_init.idl",
#                    "html/focus_options.idl",
#                    "html/assigned_nodes_options.idl",
#                    "html/canvas/baselines.idl",
#                    "html/canvas/image_data_color_settings.idl",
#                    "html/canvas/image_encode_options.idl",
#                    "html/custom/validity_state_flags.idl",
#                    "html/forms/form_data_event_init.idl",
#                    "html/portal/portal_activate_options.idl",
#                    "html/track/track_event_init.idl",
#                    "imagebitmap/image_bitmap_options.idl",
#                    "input/input_device_capabilities_init.idl",
#                    "input/touch_init.idl",
#                    "intersection_observer/intersection_observer_init.idl",
#                    "layout/custom/custom_layout_constraints_options.idl",
#                    "layout/custom/fragment_result_options.idl",
#                    "messaging/post_message_options.idl",
#                    "mojo/mojo_create_data_pipe_options.idl",
#                    "mojo/mojo_create_data_pipe_result.idl",
#                    "mojo/mojo_create_message_pipe_result.idl",
#                    "mojo/mojo_create_shared_buffer_result.idl",
#                    "mojo/mojo_discard_data_options.idl",
#                    "mojo/mojo_duplicate_buffer_handle_options.idl",
#                    "mojo/mojo_handle_signals.idl",
#                    "mojo/mojo_map_buffer_result.idl",
#                    "mojo/mojo_read_data_options.idl",
#                    "mojo/mojo_read_data_result.idl",
#                    "mojo/mojo_read_message_flags.idl",
#                    "mojo/mojo_read_message_result.idl",
#                    "mojo/mojo_write_data_options.idl",
#                    "mojo/mojo_write_data_result.idl",
#                    "mojo/test/mojo_interface_request_event_init.idl", # test
#                    "page/scrolling/scroll_state_init.idl",
#                    "timing/performance_mark_options.idl",
#                    "timing/performance_measure_options.idl",
#                    "timing/performance_observer_init.idl",
#                    "trustedtypes/trusted_type_policy_options.idl",
#                    "workers/worker_options.idl",
#                    "workers/worklet_options.idl",

add_library(BLINK_RENDERER_CORE STATIC
  #${BLINK_RENDERER_CORE_ACCESSIBILITY_SOURCES}
  #${BLINK_RENDERER_CORE_AOM_SOURCES}
  #${BLINK_RENDERER_CORE_CLIPBOARD_SOURCES}
  ${BLINK_RENDERER_CORE_TYPED_ARRAYS_SOURCES}
  #${BLINK_RENDERER_CORE_ANIMATION_SOURCES}
  #${BLINK_RENDERER_CORE_PAINT_SOURCES}
  #${BLINK_RENDERER_CORE_EVENT_SOURCES}
  #${BLINK_RENDERER_CORE_GEN_STYLE_SOURCES}
  #${BLINK_RENDERER_CORE_GEN_CSS_SOURCES}
  #${BLINK_RENDERER_CORE_GEN_LONGHANDS_SOURCES}
  #${BLINK_RENDERER_CORE_GEN_PROPERTY_NAMES_SOURCES}
  #${BLINK_RENDERER_CORE_GEN_ATRULE_SOURCES}
  #${BLINK_RENDERER_CORE_GEN_STYLE_PROP_SHORT_SOURCES}
  #${BLINK_RENDERER_SCROLL_SOURCES}
  #${BLINK_RENDERER_STREAMS_SOURCES}
  #${BLINK_RENDERER_STYLE_SOURCES}
  #${BLINK_RENDERER_SVG_SOURCES}
  #${BLINK_RENDERER_TESTING_SOURCES} # tests
  #${BLINK_RENDERER_TIMING_SOURCES}
  #${BLINK_RENDERER_ORIGIN_TRIALS_SOURCES}
  #${BLINK_RENDERER_TRUTEDTYPES_SOURCES}
  ${BLINK_RENDERER_URL_SOURCES}
  #${BLINK_RENDERER_WIN_SOURCES}
  #${BLINK_RENDERER_WORKERS_SOURCES}
  #${BLINK_RENDERER_XML_SOURCES}
  #${BLINK_RENDERER_CORE_XMLHTTPREQUEST_SOURCES}
  #${BLINK_RENDERER_CORE_EVENTS_SOURCES}
  #${BLINK_RENDERER_CORE_EXECUTION_CONTEXT_SOURCES}
  #${BLINK_RENDERER_CORE_EXPORTED_SOURCES}
  #${BLINK_RENDERER_CORE_FEATURE_POLICY_SOURCES}
  #${BLINK_RENDERER_CORE_FETCH_SOURCES}
  #${BLINK_RENDERER_CORE_FILEAPI_SOURCES}
  #${BLINK_RENDERER_CORE_FRAME_SOURCES}
  #${BLINK_RENDERER_CORE_FULLSCREEN_SOURCES}
  #${BLINK_RENDERER_CORE_GEOMETRY_SOURCES}
  #${BLINK_RENDERER_CORE_HTML_PARSER_SOURCES}
  #${BLINK_RENDERER_CORE_HTML_SOURCES}
  #${BLINK_RENDERER_CORE_IMAGE_BITMAP_SOURCES}
  #${BLINK_RENDERER_CORE_INPUT_SOURCES}
  #${BLINK_RENDERER_CORE_INSPECTOR_SOURCES}
  #${BLINK_RENDERER_CORE_INTERSECTION_OBSERVER_SOURCES}
  #${BLINK_RENDERER_CORE_INVISIBLE_DOM_SOURCES}
  #${BLINK_RENDERER_CORE_LAYOUT_SOURCES}
  #${BLINK_RENDERER_CORE_LOADER_SOURCES}
  #${BLINK_RENDERER_MESSAGING_SOURCES}
  #${BLINK_RENDERER_MOJO_SOURCES}
  #${BLINK_RENDERER_OFFSCREENCANVAS_SOURCES}
  #${BLINK_RENDERER_PAGE_SOURCES}
  #${BLINK_RENDERER_PROBE_SOURCES}
  #${BLINK_RENDERER_RESIZE_OBSERVER_SOURCES}
  #${BLINK_RENDERER_SCHEDULER_SOURCES}
  #${BLINK_RENDERER_SCRIPT_SOURCES}
)

target_link_libraries(BLINK_RENDERER_CORE PUBLIC
  #public_deps = [
  #  "//services/network/public/cpp:cpp",
  #  "//services/service_manager/public/cpp",
  #  "//skia",
  #  "//third_party/angle:translator",
  #  "//third_party/blink/public/mojom:mojom_broadcastchannel_bindings_blink",
  #  "//third_party/blink/renderer/core/inspector:generated",
  #  "//third_party/blink/renderer/core/probe:generated",
  #  "//third_party/blink/renderer/platform",
  #  "//third_party/iccjpeg",
  #  "//third_party/icu",
  #  "//third_party/libpng",
  #  "//third_party/libwebp",
  #  "//third_party/libxml",
  #  "//third_party/libxslt",
  #  "//third_party/ots",
  #  "//third_party/snappy",
  #  "//third_party/zlib",
  #  "//ui/base/ime/mojo",
  #  "//ui/events:dom_keycode_converter",
  #  "//ui/gfx/geometry",
  #  "//ui/native_theme",
  #  "//url",
  #  "//v8",
  #]
  #deps = [
  #  "//third_party/blink/renderer/bindings/core/v8:bindings_core_v8_generated",
  #
  #  # FIXME: don't depend on bindings_modules http://crbug.com/358074
  #  "//third_party/blink/renderer/bindings/modules/v8:bindings_modules_v8_generated",
  #]
  BLINK_PUBLIC_COMMON
  BLINK_PUBLIC_MOJOM
  #BLINK_RENDERER_NETWORK
  BLINK_RENDERER_PLATFORM
  GURL
  GNET
  GCRYPTO
  GFX_GEOMETRY
  UI_GFX
  # mojo
  # services/service_manager
  # services/ws/public/cpp/gpu
  #${BASE_LIBRARIES}
  base
  SKIA
  #skcms
  ced
  # emoji-segmenter
  # webrtc
  # zlib
  # icu
  CC
  #G_GPU
  ANIMATION_CC
  BASE_CC
  PAINT_CC
  SERVICES_NETWORK_PUBLIC_CPP
  libwebp # requires libpng
  ${libjpeg_LIB}
  ${libjpeg_TURBO_LIB}
  ${libpng_LIB}
  ${iccjpeg_LIB}
  MOJO
  #
  # khronos
  ${khronos_LIB}
  LIB_V8_INTERFACE
  COMPONENTS_SCHEDULING_METRICS
  ${HARFBUZZ_LIBRARIES}
  GMEDIA
  GZLIB_EXT
  SERVICES_SERVICE_MANAGER_PUBLIC_CPP
  GFX_CODEC
)

set_property(TARGET BLINK_RENDERER_CORE PROPERTY CXX_STANDARD 17)

target_include_directories(BLINK_RENDERER_CORE PRIVATE
  ${CMAKE_CURRENT_SOURCE_DIR}
  ${BLINK_RENDERER_CORE_DIR}
  #${BASE_DIR}
  ${CUR_OUT_DIR}
  ${GEN_BLINK_PUBLIC_DIR}
)

target_include_directories(BLINK_RENDERER_CORE PUBLIC
  ${GEN_BLINK_PUBLIC_DIR}
)

target_compile_definitions(BLINK_RENDERER_CORE PRIVATE
  BLINK_CORE_IMPLEMENTATION=1
  #BLINK_ANIMATION_USE_TIME_DELTA=1
  #ENABLE_TOUCHLESS_UASTYLE_THEME=1
)
