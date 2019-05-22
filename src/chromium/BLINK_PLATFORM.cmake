### --- BLINK_PLATFORM ---###

# TODO https://github.com/chromium/chromium/blob/master/third_party/blink/renderer/platform/BUILD.gn
set(BLINK_PLATFORM_SOURCES
  ${BLINK_PLATFORM_DIR}animation/animation_translation_util.cc
  #${BLINK_PLATFORM_DIR}animation/animation_translation_util.h",
  #${BLINK_PLATFORM_DIR}animation/animation_utilities.h",
  ${BLINK_PLATFORM_DIR}animation/compositor_animation.cc
  #${BLINK_PLATFORM_DIR}animation/compositor_animation.h",
  ${BLINK_PLATFORM_DIR}animation/compositor_animation_client.cc
  #${BLINK_PLATFORM_DIR}animation/compositor_animation_client.h",
  #${BLINK_PLATFORM_DIR}animation/compositor_animation_curve.h",
  #${BLINK_PLATFORM_DIR}animation/compositor_animation_delegate.h",
  ${BLINK_PLATFORM_DIR}animation/compositor_animation_timeline.cc
  #${BLINK_PLATFORM_DIR}animation/compositor_animation_timeline.h",
  ${BLINK_PLATFORM_DIR}animation/compositor_filter_animation_curve.cc
  #${BLINK_PLATFORM_DIR}animation/compositor_filter_animation_curve.h",
  ${BLINK_PLATFORM_DIR}animation/compositor_filter_keyframe.cc
  #${BLINK_PLATFORM_DIR}animation/compositor_filter_keyframe.h",
  ${BLINK_PLATFORM_DIR}animation/compositor_float_animation_curve.cc
  #${BLINK_PLATFORM_DIR}animation/compositor_float_animation_curve.h",
  ${BLINK_PLATFORM_DIR}animation/compositor_float_keyframe.cc
  #${BLINK_PLATFORM_DIR}animation/compositor_float_keyframe.h",
  ${BLINK_PLATFORM_DIR}animation/compositor_keyframe.cc
  #${BLINK_PLATFORM_DIR}animation/compositor_keyframe.h",
  ${BLINK_PLATFORM_DIR}animation/compositor_keyframe_model.cc
  #${BLINK_PLATFORM_DIR}animation/compositor_keyframe_model.h",
  ${BLINK_PLATFORM_DIR}animation/compositor_scroll_offset_animation_curve.cc
  #${BLINK_PLATFORM_DIR}animation/compositor_scroll_offset_animation_curve.h",
  #${BLINK_PLATFORM_DIR}animation/compositor_target_property.h",
  ${BLINK_PLATFORM_DIR}animation/compositor_transform_animation_curve.cc
  #${BLINK_PLATFORM_DIR}animation/compositor_transform_animation_curve.h",
  ${BLINK_PLATFORM_DIR}animation/compositor_transform_keyframe.cc
  #${BLINK_PLATFORM_DIR}animation/compositor_transform_keyframe.h",
  ${BLINK_PLATFORM_DIR}animation/compositor_transform_operations.cc
  #${BLINK_PLATFORM_DIR}animation/compositor_transform_operations.h",
  ${BLINK_PLATFORM_DIR}animation/timing_function.cc
  #${BLINK_PLATFORM_DIR}animation/timing_function.h",
  ## TODO ## #${BLINK_PLATFORM_DIR}audio/audio_array.h",
  ## TODO ## ${BLINK_PLATFORM_DIR}audio/audio_bus.cc
  ## TODO ## #${BLINK_PLATFORM_DIR}audio/audio_bus.h",
  ## TODO ## ${BLINK_PLATFORM_DIR}audio/audio_channel.cc
  ## TODO ## #${BLINK_PLATFORM_DIR}audio/audio_channel.h",
  ## TODO ## ${BLINK_PLATFORM_DIR}audio/audio_delay_dsp_kernel.cc
  ## TODO ## #${BLINK_PLATFORM_DIR}audio/audio_delay_dsp_kernel.h",
  ## TODO ## ${BLINK_PLATFORM_DIR}audio/audio_destination.cc
  ## TODO ## #${BLINK_PLATFORM_DIR}audio/audio_destination.h",
  ## TODO ## #${BLINK_PLATFORM_DIR}audio/audio_destination_consumer.h",
  ## TODO ## ${BLINK_PLATFORM_DIR}audio/audio_dsp_kernel.cc
  ## TODO ## #${BLINK_PLATFORM_DIR}audio/audio_dsp_kernel.h",
  ## TODO ## ${BLINK_PLATFORM_DIR}audio/audio_dsp_kernel_processor.cc
  ## TODO ## #${BLINK_PLATFORM_DIR}audio/audio_dsp_kernel_processor.h",
  ## TODO ## #${BLINK_PLATFORM_DIR}audio/audio_file_reader.h",
  ## TODO ## #${BLINK_PLATFORM_DIR}audio/audio_io_callback.h",
  ## TODO ## ${BLINK_PLATFORM_DIR}audio/audio_processor.cc
  ## TODO ## #${BLINK_PLATFORM_DIR}audio/audio_processor.h",
  ## TODO ## ${BLINK_PLATFORM_DIR}audio/audio_resampler.cc
  ## TODO ## #${BLINK_PLATFORM_DIR}audio/audio_resampler.h",
  ## TODO ## ${BLINK_PLATFORM_DIR}audio/audio_resampler_kernel.cc
  ## TODO ## #${BLINK_PLATFORM_DIR}audio/audio_resampler_kernel.h",
  ## TODO ## #${BLINK_PLATFORM_DIR}audio/audio_source_provider.h",
  ## TODO ## #${BLINK_PLATFORM_DIR}audio/audio_source_provider_client.h",
  ## TODO ## ${BLINK_PLATFORM_DIR}audio/audio_utilities.cc
  ## TODO ## #${BLINK_PLATFORM_DIR}audio/audio_utilities.h",
  ## TODO ## ${BLINK_PLATFORM_DIR}audio/biquad.cc
  ## TODO ## #${BLINK_PLATFORM_DIR}audio/biquad.h",
  ## TODO ## ${BLINK_PLATFORM_DIR}audio/cone_effect.cc
  ## TODO ## #${BLINK_PLATFORM_DIR}audio/cone_effect.h",
  ## TODO ## #${BLINK_PLATFORM_DIR}audio/cpu/arm/vector_math_neon.h",
  ## TODO ## #${BLINK_PLATFORM_DIR}audio/cpu/mips/vector_math_msa.h",
  ## TODO ## ${BLINK_PLATFORM_DIR}audio/cpu/x86/vector_math_avx.cc
  ## TODO ## #${BLINK_PLATFORM_DIR}audio/cpu/x86/vector_math_avx.h",
  ## TODO ## #${BLINK_PLATFORM_DIR}audio/cpu/x86/vector_math_impl.h",
  ## TODO ## ${BLINK_PLATFORM_DIR}audio/cpu/x86/vector_math_sse.cc
  ## TODO ## #${BLINK_PLATFORM_DIR}audio/cpu/x86/vector_math_sse.h",
  ## TODO ## #${BLINK_PLATFORM_DIR}audio/cpu/x86/vector_math_x86.h",
  ## TODO ## #${BLINK_PLATFORM_DIR}audio/denormal_disabler.h",
  ## TODO ## ${BLINK_PLATFORM_DIR}audio/direct_convolver.cc
  ## TODO ## #${BLINK_PLATFORM_DIR}audio/direct_convolver.h",
  ## TODO ## ${BLINK_PLATFORM_DIR}audio/distance_effect.cc
  ## TODO ## #${BLINK_PLATFORM_DIR}audio/distance_effect.h",
  ## TODO ## ${BLINK_PLATFORM_DIR}audio/down_sampler.cc
  ## TODO ## #${BLINK_PLATFORM_DIR}audio/down_sampler.h",
  ## TODO ## ${BLINK_PLATFORM_DIR}audio/dynamics_compressor.cc
  ## TODO ## #${BLINK_PLATFORM_DIR}audio/dynamics_compressor.h",
  ## TODO ## ${BLINK_PLATFORM_DIR}audio/dynamics_compressor_kernel.cc
  ## TODO ## #${BLINK_PLATFORM_DIR}audio/dynamics_compressor_kernel.h",
  ## TODO ## ${BLINK_PLATFORM_DIR}audio/equal_power_panner.cc
  ## TODO ## #${BLINK_PLATFORM_DIR}audio/equal_power_panner.h",
  ## TODO ## ${BLINK_PLATFORM_DIR}audio/ffmpeg/fft_frame_ffmpeg.cc
  ## TODO ## ${BLINK_PLATFORM_DIR}audio/fft_convolver.cc
  ## TODO ## #${BLINK_PLATFORM_DIR}audio/fft_convolver.h",
  ## TODO ## ${BLINK_PLATFORM_DIR}audio/fft_frame.cc
  ## TODO ## #${BLINK_PLATFORM_DIR}audio/fft_frame.h",
  ## TODO ## ${BLINK_PLATFORM_DIR}audio/fft_frame_stub.cc
  ## TODO ## #${BLINK_PLATFORM_DIR}audio/hrtf_database.cc
  ## TODO ## #${BLINK_PLATFORM_DIR}audio/hrtf_database.h",
  ## TODO ## ${BLINK_PLATFORM_DIR}audio/hrtf_database_loader.cc
  ## TODO ## #${BLINK_PLATFORM_DIR}audio/hrtf_database_loader.h",
  ## TODO ## ${BLINK_PLATFORM_DIR}audio/hrtf_elevation.cc
  ## TODO ## #${BLINK_PLATFORM_DIR}audio/hrtf_elevation.h",
  ## TODO ## ${BLINK_PLATFORM_DIR}audio/hrtf_kernel.cc
  ## TODO ## #${BLINK_PLATFORM_DIR}audio/hrtf_kernel.h",
  ## TODO ## ${BLINK_PLATFORM_DIR}audio/hrtf_panner.cc
  ## TODO ## #${BLINK_PLATFORM_DIR}audio/hrtf_panner.h",
  ## TODO ## ${BLINK_PLATFORM_DIR}audio/iir_filter.cc
  ## TODO ## #${BLINK_PLATFORM_DIR}audio/iir_filter.h",
  ## TODO ## ${BLINK_PLATFORM_DIR}audio/mac/fft_frame_mac.cc
  ## TODO ## #${BLINK_PLATFORM_DIR}audio/mac/vector_math_mac.h",
  ## TODO ## ${BLINK_PLATFORM_DIR}audio/media_multi_channel_resampler.cc
  ## TODO ## #${BLINK_PLATFORM_DIR}audio/media_multi_channel_resampler.h",
  ## TODO ## ${BLINK_PLATFORM_DIR}audio/multi_channel_resampler.cc
  ## TODO ## #${BLINK_PLATFORM_DIR}audio/multi_channel_resampler.h",
  ## TODO ## ${BLINK_PLATFORM_DIR}audio/panner.cc
  ## TODO ## #${BLINK_PLATFORM_DIR}audio/panner.h",
  ## TODO ## ${BLINK_PLATFORM_DIR}audio/pffft/fft_frame_pffft.cc
  ## TODO ## ${BLINK_PLATFORM_DIR}audio/push_pull_fifo.cc
  ## TODO ## #${BLINK_PLATFORM_DIR}audio/push_pull_fifo.h",
  ## TODO ## ${BLINK_PLATFORM_DIR}audio/reverb.cc
  ## TODO ## #${BLINK_PLATFORM_DIR}audio/reverb.h",
  ## TODO ## ${BLINK_PLATFORM_DIR}audio/reverb_accumulation_buffer.cc
  ## TODO ## #${BLINK_PLATFORM_DIR}audio/reverb_accumulation_buffer.h",
  ## TODO ## ${BLINK_PLATFORM_DIR}audio/reverb_convolver.cc
  ## TODO ## #${BLINK_PLATFORM_DIR}audio/reverb_convolver.h",
  ## TODO ## ${BLINK_PLATFORM_DIR}audio/reverb_convolver_stage.cc
  ## TODO ## #${BLINK_PLATFORM_DIR}audio/reverb_convolver_stage.h",
  ## TODO ## ${BLINK_PLATFORM_DIR}audio/reverb_input_buffer.cc
  ## TODO ## #${BLINK_PLATFORM_DIR}audio/reverb_input_buffer.h",
  ## TODO ## ${BLINK_PLATFORM_DIR}audio/simple_fft_convolver.cc
  ## TODO ## #${BLINK_PLATFORM_DIR}audio/simple_fft_convolver.h",
  ## TODO ## ${BLINK_PLATFORM_DIR}audio/sinc_resampler.cc
  ## TODO ## #${BLINK_PLATFORM_DIR}audio/sinc_resampler.h",
  ## TODO ## ${BLINK_PLATFORM_DIR}audio/stereo_panner.cc
  ## TODO ## #${BLINK_PLATFORM_DIR}audio/stereo_panner.h",
  ## TODO ## ${BLINK_PLATFORM_DIR}audio/up_sampler.cc
  ## TODO ## #${BLINK_PLATFORM_DIR}audio/up_sampler.h",
  ## TODO ## ${BLINK_PLATFORM_DIR}audio/vector_math.cc
  ## TODO ## #${BLINK_PLATFORM_DIR}audio/vector_math.h",
  ## TODO ## #${BLINK_PLATFORM_DIR}audio/vector_math_scalar.h",
  #
  ## TODO ## ${BLINK_PLATFORM_DIR}bindings/active_script_wrappable_base.cc
  ## TODO ## #${BLINK_PLATFORM_DIR}bindings/active_script_wrappable_base.h",
  ## TODO ## ${BLINK_PLATFORM_DIR}bindings/binding_security_for_platform.cc
  ## TODO ## #${BLINK_PLATFORM_DIR}bindings/binding_security_for_platform.h",
  ## TODO ## ${BLINK_PLATFORM_DIR}bindings/callback_function_base.cc
  ## TODO ## #${BLINK_PLATFORM_DIR}bindings/callback_function_base.h",
  ## TODO ## ${BLINK_PLATFORM_DIR}bindings/callback_interface_base.cc
  ## TODO ## #${BLINK_PLATFORM_DIR}bindings/callback_interface_base.h",
  ## TODO ## ${BLINK_PLATFORM_DIR}bindings/callback_method_retriever.cc
  ## TODO ## #${BLINK_PLATFORM_DIR}bindings/callback_method_retriever.h",
  ## TODO ## #${BLINK_PLATFORM_DIR}bindings/custom_wrappable.h",
  ## TODO ## #${BLINK_PLATFORM_DIR}bindings/dom_data_store.h",
  ## TODO ## ${BLINK_PLATFORM_DIR}bindings/dom_wrapper_world.cc
  ## TODO ## #${BLINK_PLATFORM_DIR}bindings/dom_wrapper_world.h",
  ## TODO ## #${BLINK_PLATFORM_DIR}bindings/exception_code.h",
  ## TODO ## ${BLINK_PLATFORM_DIR}bindings/exception_messages.cc
  ## TODO ## #${BLINK_PLATFORM_DIR}bindings/exception_messages.h",
  ## TODO ## ${BLINK_PLATFORM_DIR}bindings/exception_state.cc
  ## TODO ## #${BLINK_PLATFORM_DIR}bindings/exception_state.h",
  ## TODO ## ${BLINK_PLATFORM_DIR}bindings/microtask.cc
  ## TODO ## #${BLINK_PLATFORM_DIR}bindings/microtask.h",
  ## TODO ## #${BLINK_PLATFORM_DIR}bindings/name_client.h",
  ## TODO ## ${BLINK_PLATFORM_DIR}bindings/origin_trial_features.cc
  ## TODO ## #${BLINK_PLATFORM_DIR}bindings/origin_trial_features.h",
  ## TODO ## ${BLINK_PLATFORM_DIR}bindings/parkable_string.cc
  ## TODO ## #${BLINK_PLATFORM_DIR}bindings/parkable_string.h",
  ## TODO ## ${BLINK_PLATFORM_DIR}bindings/parkable_string_manager.cc
  ## TODO ## #${BLINK_PLATFORM_DIR}bindings/parkable_string_manager.h",
  ## TODO ## ${BLINK_PLATFORM_DIR}bindings/runtime_call_stats.cc
  ## TODO ## #${BLINK_PLATFORM_DIR}bindings/runtime_call_stats.h",
  ## TODO ## #${BLINK_PLATFORM_DIR}bindings/scoped_persistent.h",
  ## TODO ## ${BLINK_PLATFORM_DIR}bindings/script_forbidden_scope.cc
  ## TODO ## #${BLINK_PLATFORM_DIR}bindings/script_forbidden_scope.h",
  ## TODO ## #${BLINK_PLATFORM_DIR}bindings/script_promise_properties.h",
  ## TODO ## ${BLINK_PLATFORM_DIR}bindings/script_state.cc
  ## TODO ## #${BLINK_PLATFORM_DIR}bindings/script_state.h",
  ## TODO ## ${BLINK_PLATFORM_DIR}bindings/script_wrappable.cc
  ## TODO ## #${BLINK_PLATFORM_DIR}bindings/script_wrappable.h",
  ## TODO ## #${BLINK_PLATFORM_DIR}bindings/shared_persistent.h",
  ## TODO ## ${BLINK_PLATFORM_DIR}bindings/string_resource.cc
  ## TODO ## #${BLINK_PLATFORM_DIR}bindings/string_resource.h",
  ## TODO ## #${BLINK_PLATFORM_DIR}bindings/to_v8.h",
  ## TODO ## #${BLINK_PLATFORM_DIR}bindings/trace_wrapper_member.h",
  ## TODO ## #${BLINK_PLATFORM_DIR}bindings/trace_wrapper_v8_reference.h",
  ## TODO ## ${BLINK_PLATFORM_DIR}bindings/trace_wrapper_v8_string.cc
  ## TODO ## #${BLINK_PLATFORM_DIR}bindings/trace_wrapper_v8_string.h",
  ## TODO ## ${BLINK_PLATFORM_DIR}bindings/v0_custom_element_binding.cc
  ## TODO ## #${BLINK_PLATFORM_DIR}bindings/v0_custom_element_binding.h",
  ## TODO ## ${BLINK_PLATFORM_DIR}bindings/v8_binding.cc
  ## TODO ## #${BLINK_PLATFORM_DIR}bindings/v8_binding.h",
  ## TODO ## #${BLINK_PLATFORM_DIR}bindings/v8_binding_macros.h",
  ## TODO ## #${BLINK_PLATFORM_DIR}bindings/v8_cross_origin_setter_info.h",
  ## TODO ## ${BLINK_PLATFORM_DIR}bindings/v8_dom_activity_logger.cc
  ## TODO ## #${BLINK_PLATFORM_DIR}bindings/v8_dom_activity_logger.h",
  ## TODO ## ${BLINK_PLATFORM_DIR}bindings/v8_dom_wrapper.cc
  ## TODO ## #${BLINK_PLATFORM_DIR}bindings/v8_dom_wrapper.h",
  ## TODO ## #${BLINK_PLATFORM_DIR}bindings/v8_global_value_map.h",
  ## TODO ## ${BLINK_PLATFORM_DIR}bindings/v8_object_constructor.cc
  ## TODO ## #${BLINK_PLATFORM_DIR}bindings/v8_object_constructor.h",
  ## TODO ## ${BLINK_PLATFORM_DIR}bindings/v8_per_context_data.cc
  ## TODO ## #${BLINK_PLATFORM_DIR}bindings/v8_per_context_data.h",
  ## TODO ## ${BLINK_PLATFORM_DIR}bindings/v8_per_isolate_data.cc
  ## TODO ## #${BLINK_PLATFORM_DIR}bindings/v8_per_isolate_data.h",
  ## TODO ## ${BLINK_PLATFORM_DIR}bindings/v8_private_property.cc
  ## TODO ## #${BLINK_PLATFORM_DIR}bindings/v8_private_property.h",
  ## TODO ## ${BLINK_PLATFORM_DIR}bindings/v8_throw_exception.cc
  ## TODO ## #${BLINK_PLATFORM_DIR}bindings/v8_throw_exception.h",
  ## TODO ## ${BLINK_PLATFORM_DIR}bindings/v8_value_cache.cc
  ## TODO ## #${BLINK_PLATFORM_DIR}bindings/v8_value_cache.h",
  ## TODO ## ${BLINK_PLATFORM_DIR}bindings/v8_value_or_script_wrappable_adapter.cc
  ## TODO ## #${BLINK_PLATFORM_DIR}bindings/v8_value_or_script_wrappable_adapter.h",
  ## TODO ## ${BLINK_PLATFORM_DIR}bindings/wrapper_type_info.cc
  #${BLINK_PLATFORM_DIR}bindings/wrapper_type_info.h",
  #${BLINK_PLATFORM_DIR}content_decryption_module_result.h",
  #${BLINK_PLATFORM_DIR}cpu/mips/common_macros_msa.h",
  ${BLINK_PLATFORM_DIR}cross_thread_copier.cc
  #${BLINK_PLATFORM_DIR}cross_thread_copier.h",
  #${BLINK_PLATFORM_DIR}cross_thread_functional.h",
  ${BLINK_PLATFORM_DIR}crypto.cc
  #${BLINK_PLATFORM_DIR}crypto.h",
  #${BLINK_PLATFORM_DIR}crypto_result.h",
  ${BLINK_PLATFORM_DIR}cursor.cc
  #${BLINK_PLATFORM_DIR}cursor.h",
  ${BLINK_PLATFORM_DIR}data_resource_helper.cc
  #${BLINK_PLATFORM_DIR}data_resource_helper.h",
  ${BLINK_PLATFORM_DIR}date_components.cc
  #${BLINK_PLATFORM_DIR}date_components.h",
  ## TODO ## ${BLINK_PLATFORM_DIR}exported/file_path_conversion.cc
  ## TODO ## ${BLINK_PLATFORM_DIR}exported/interface_registry.cc
  ## TODO ## ${BLINK_PLATFORM_DIR}exported/mediastream/media_stream_audio_processor_options.cc
  ## TODO ## ${BLINK_PLATFORM_DIR}exported/mediastream/media_stream_audio_source.cc
  ## TODO ## ${BLINK_PLATFORM_DIR}exported/mediastream/media_stream_audio_track.cc
  ## TODO ## ${BLINK_PLATFORM_DIR}exported/mediastream/web_platform_media_stream_source.cc
  ## TODO ## ${BLINK_PLATFORM_DIR}exported/mediastream/web_platform_media_stream_track.cc
  ## TODO ## ${BLINK_PLATFORM_DIR}exported/mediastream/webrtc_uma_histograms.cc
  ## TODO ## ${BLINK_PLATFORM_DIR}exported/notification_data_conversions.cc
  ## TODO ## ${BLINK_PLATFORM_DIR}exported/platform.cc
  ## TODO ## ${BLINK_PLATFORM_DIR}exported/service_registry.cc
  ## TODO ## ${BLINK_PLATFORM_DIR}exported/url_conversion.cc
  ## TODO ## ${BLINK_PLATFORM_DIR}exported/web_audio_bus.cc
  ## TODO ## ${BLINK_PLATFORM_DIR}exported/web_audio_device.cc
  ## TODO ## ${BLINK_PLATFORM_DIR}exported/web_blob_info.cc
  ## TODO ## ${BLINK_PLATFORM_DIR}exported/web_cache.cc
  ## TODO ## ${BLINK_PLATFORM_DIR}exported/web_canonical_cookie.cc
  ## TODO ## ${BLINK_PLATFORM_DIR}exported/web_coalesced_input_event.cc
  ## TODO ## ${BLINK_PLATFORM_DIR}exported/web_content_decryption_module.cc
  ## TODO ## ${BLINK_PLATFORM_DIR}exported/web_content_decryption_module_access.cc
  ## TODO ## ${BLINK_PLATFORM_DIR}exported/web_content_decryption_module_result.cc
  ## TODO ## ${BLINK_PLATFORM_DIR}exported/web_content_decryption_module_session.cc
  ## TODO ## ${BLINK_PLATFORM_DIR}exported/web_crypto_algorithm.cc
  ## TODO ## ${BLINK_PLATFORM_DIR}exported/web_crypto_key.cc
  ## TODO ## ${BLINK_PLATFORM_DIR}exported/web_crypto_key_algorithm.cc
  ## TODO ## ${BLINK_PLATFORM_DIR}exported/web_crypto_result.cc
  ## TODO ## ${BLINK_PLATFORM_DIR}exported/web_cursor_info.cc
  ## TODO ## ${BLINK_PLATFORM_DIR}exported/web_data.cc
  ## TODO ## ${BLINK_PLATFORM_DIR}exported/web_drag_data.cc
  ## TODO ## ${BLINK_PLATFORM_DIR}exported/web_encrypted_media_client.cc
  ## TODO ## ${BLINK_PLATFORM_DIR}exported/web_encrypted_media_key_information.cc
  ## TODO ## ${BLINK_PLATFORM_DIR}exported/web_encrypted_media_request.cc
  ## TODO ## ${BLINK_PLATFORM_DIR}exported/web_font.cc
  ## TODO ## ${BLINK_PLATFORM_DIR}exported/web_font_description.cc
  ## TODO ## ${BLINK_PLATFORM_DIR}exported/web_http_body.cc
  ## TODO ## ${BLINK_PLATFORM_DIR}exported/web_http_header_map.cc
  ## TODO ## ${BLINK_PLATFORM_DIR}exported/web_http_load_info.cc
  ## TODO ## ${BLINK_PLATFORM_DIR}exported/web_image.cc
  ## TODO ## ${BLINK_PLATFORM_DIR}exported/web_image_generator.cc
  ## TODO ## ${BLINK_PLATFORM_DIR}exported/web_input_event.cc
  ## TODO ## ${BLINK_PLATFORM_DIR}exported/web_media_constraints.cc
  ## TODO ## ${BLINK_PLATFORM_DIR}exported/web_media_player_client.cc
  ## TODO ## ${BLINK_PLATFORM_DIR}exported/web_media_player_encrypted_media_client.cc
  ## TODO ## ${BLINK_PLATFORM_DIR}exported/web_media_player_source.cc
  ## TODO ## ${BLINK_PLATFORM_DIR}exported/web_media_recorder_handler.cc
  ## TODO ## ${BLINK_PLATFORM_DIR}exported/web_media_stream.cc
  ## TODO ## ${BLINK_PLATFORM_DIR}exported/web_media_stream_audio_sink.cc
  ## TODO ## ${BLINK_PLATFORM_DIR}exported/web_media_stream_source.cc
  ## TODO ## ${BLINK_PLATFORM_DIR}exported/web_media_stream_track.cc
  ## TODO ## ${BLINK_PLATFORM_DIR}exported/web_memory_pressure_listener.cc
  ## TODO ## ${BLINK_PLATFORM_DIR}exported/web_mixed_content.cc
  ## TODO ## ${BLINK_PLATFORM_DIR}exported/web_network_state_notifier.cc
  ## TODO ## ${BLINK_PLATFORM_DIR}exported/web_prerender.cc
  ## TODO ## ${BLINK_PLATFORM_DIR}exported/web_prerendering_support.cc
  ## TODO ## ${BLINK_PLATFORM_DIR}exported/web_resource_timing_info.cc
  ## TODO ## ${BLINK_PLATFORM_DIR}exported/web_rtc_answer_options.cc
  ## TODO ## ${BLINK_PLATFORM_DIR}exported/web_rtc_ice_candidate.cc
  ## TODO ## ${BLINK_PLATFORM_DIR}exported/web_rtc_offer_options.cc
  ## TODO ## ${BLINK_PLATFORM_DIR}exported/web_rtc_peer_connection_handler_client.cc
  ## TODO ## ${BLINK_PLATFORM_DIR}exported/web_rtc_rtp_receiver.cc
  ## TODO ## ${BLINK_PLATFORM_DIR}exported/web_rtc_rtp_sender.cc
  ## TODO ## ${BLINK_PLATFORM_DIR}exported/web_rtc_rtp_source.cc
  ## TODO ## ${BLINK_PLATFORM_DIR}exported/web_rtc_rtp_transceiver.cc
  ## TODO ## ${BLINK_PLATFORM_DIR}exported/web_rtc_session_description.cc
  ## TODO ## ${BLINK_PLATFORM_DIR}exported/web_rtc_session_description_request.cc
  ## TODO ## ${BLINK_PLATFORM_DIR}exported/web_rtc_stats.cc
  ## TODO ## ${BLINK_PLATFORM_DIR}exported/web_rtc_stats_request.cc
  ## TODO ## ${BLINK_PLATFORM_DIR}exported/web_rtc_stats_response.cc
  ## TODO ## ${BLINK_PLATFORM_DIR}exported/web_rtc_void_request.cc
  ## TODO ## ${BLINK_PLATFORM_DIR}exported/web_runtime_features.cc
  ## TODO ## ${BLINK_PLATFORM_DIR}exported/web_security_origin.cc
  ## TODO ## ${BLINK_PLATFORM_DIR}exported/web_service_worker_request.cc
  ## TODO ## ${BLINK_PLATFORM_DIR}exported/web_service_worker_response.cc
  ## TODO ## ${BLINK_PLATFORM_DIR}exported/web_service_worker_stream_handle.cc
  ## TODO ## ${BLINK_PLATFORM_DIR}exported/web_speech_synthesis_utterance.cc
  ## TODO ## ${BLINK_PLATFORM_DIR}exported/web_speech_synthesis_voice.cc
  ## TODO ## ${BLINK_PLATFORM_DIR}exported/web_speech_synthesizer_client_impl.cc
  ## TODO ## #${BLINK_PLATFORM_DIR}exported/web_speech_synthesizer_client_impl.h",
  ## TODO ## ${BLINK_PLATFORM_DIR}exported/web_string.cc
  ## TODO ## ${BLINK_PLATFORM_DIR}exported/web_surface_layer_bridge.cc
  ## TODO ## ${BLINK_PLATFORM_DIR}exported/web_text_run.cc
  ## TODO ## ${BLINK_PLATFORM_DIR}exported/web_thread_safe_data.cc
  ## TODO ## ${BLINK_PLATFORM_DIR}exported/web_url.cc
  ## TODO ## ${BLINK_PLATFORM_DIR}exported/web_url_error.cc
  ## TODO ## ${BLINK_PLATFORM_DIR}exported/web_url_load_timing.cc
  ## TODO ## ${BLINK_PLATFORM_DIR}exported/web_url_loader_client.cc
  ## TODO ## ${BLINK_PLATFORM_DIR}exported/web_url_loader_test_delegate.cc
  ## TODO ## ${BLINK_PLATFORM_DIR}exported/web_url_request.cc
  ## TODO ## ${BLINK_PLATFORM_DIR}exported/web_url_response.cc
  ## TODO ## ${BLINK_PLATFORM_DIR}exported/web_video_frame_submitter.cc
  #${BLINK_PLATFORM_DIR}exported/wrapped_resource_request.h",
  #${BLINK_PLATFORM_DIR}exported/wrapped_resource_response.h",
  ## TODO ## ${BLINK_PLATFORM_DIR}file_metadata.cc
  #${BLINK_PLATFORM_DIR}file_metadata.h",
  #${BLINK_PLATFORM_DIR}fonts/alternate_font_family.h",
  ## TODO ## ${BLINK_PLATFORM_DIR}fonts/android/font_cache_android.cc
  ## TODO ## ${BLINK_PLATFORM_DIR}fonts/android/font_unique_name_lookup_android.cc
  ## TODO ## #${BLINK_PLATFORM_DIR}fonts/android/font_unique_name_lookup_android.h",
  ## TODO ## ${BLINK_PLATFORM_DIR}fonts/bitmap_glyphs_block_list.cc
  ## TODO ## #${BLINK_PLATFORM_DIR}fonts/bitmap_glyphs_block_list.h",
  ## TODO ## #${BLINK_PLATFORM_DIR}fonts/canvas_rotation_in_vertical.h",
  ## TODO ## #${BLINK_PLATFORM_DIR}fonts/character_range.h",
  ## TODO ## #${BLINK_PLATFORM_DIR}fonts/custom_font_data.h",
  ## TODO ## #${BLINK_PLATFORM_DIR}fonts/fallback_list_composite_key.h",
  ## TODO ## ${BLINK_PLATFORM_DIR}fonts/font.cc
  ## TODO ## #${BLINK_PLATFORM_DIR}fonts/font.h",
  ## TODO ## #${BLINK_PLATFORM_DIR}fonts/font_baseline.h",
  ## TODO ## ${BLINK_PLATFORM_DIR}fonts/font_cache.cc
  ## TODO ## #${BLINK_PLATFORM_DIR}fonts/font_cache.h",
  ## TODO ## #${BLINK_PLATFORM_DIR}fonts/font_cache_client.h",
  ## TODO ## #${BLINK_PLATFORM_DIR}fonts/font_cache_key.h",
  ## TODO ## ${BLINK_PLATFORM_DIR}fonts/font_cache_memory_dump_provider.cc
  ## TODO ## #${BLINK_PLATFORM_DIR}fonts/font_cache_memory_dump_provider.h",
  ## TODO ## ${BLINK_PLATFORM_DIR}fonts/font_custom_platform_data.cc
  ## TODO ## #${BLINK_PLATFORM_DIR}fonts/font_custom_platform_data.h",
  ## TODO ## ${BLINK_PLATFORM_DIR}fonts/font_data.cc
  ## TODO ## #${BLINK_PLATFORM_DIR}fonts/font_data.h",
  ## TODO ## ${BLINK_PLATFORM_DIR}fonts/font_data_cache.cc
  ## TODO ## #${BLINK_PLATFORM_DIR}fonts/font_data_cache.h",
  ## TODO ## ${BLINK_PLATFORM_DIR}fonts/font_data_for_range_set.cc
  ## TODO ## #${BLINK_PLATFORM_DIR}fonts/font_data_for_range_set.h",
  ## TODO ## ${BLINK_PLATFORM_DIR}fonts/font_description.cc
  ## TODO ## #${BLINK_PLATFORM_DIR}fonts/font_description.h",
  ## TODO ## #${BLINK_PLATFORM_DIR}fonts/font_face_creation_params.h",
  ## TODO ## ${BLINK_PLATFORM_DIR}fonts/font_fallback_iterator.cc
  ## TODO ## #${BLINK_PLATFORM_DIR}fonts/font_fallback_iterator.h",
  ## TODO ## ${BLINK_PLATFORM_DIR}fonts/font_fallback_list.cc
  ## TODO ## #${BLINK_PLATFORM_DIR}fonts/font_fallback_list.h",
  ## TODO ## ${BLINK_PLATFORM_DIR}fonts/font_fallback_priority.cc
  ## TODO ## #${BLINK_PLATFORM_DIR}fonts/font_fallback_priority.h",
  ## TODO ## ${BLINK_PLATFORM_DIR}fonts/font_family.cc
  ## TODO ## #${BLINK_PLATFORM_DIR}fonts/font_family.h",
  ## TODO ## ${BLINK_PLATFORM_DIR}fonts/font_global_context.cc
  ## TODO ## #${BLINK_PLATFORM_DIR}fonts/font_global_context.h",
  ## TODO ## ${BLINK_PLATFORM_DIR}fonts/font_metrics.cc
  ## TODO ## #${BLINK_PLATFORM_DIR}fonts/font_metrics.h",
  ## TODO ## ${BLINK_PLATFORM_DIR}fonts/font_orientation.cc
  ## TODO ## #${BLINK_PLATFORM_DIR}fonts/font_orientation.h",
  ## TODO ## ${BLINK_PLATFORM_DIR}fonts/font_platform_data.cc
  ## TODO ## #${BLINK_PLATFORM_DIR}fonts/font_platform_data.h",
  ## TODO ## ${BLINK_PLATFORM_DIR}fonts/font_selection_algorithm.cc
  ## TODO ## #${BLINK_PLATFORM_DIR}fonts/font_selection_algorithm.h",
  ## TODO ## ${BLINK_PLATFORM_DIR}fonts/font_selection_types.cc
  ## TODO ## #${BLINK_PLATFORM_DIR}fonts/font_selection_types.h",
  ## TODO ## ${BLINK_PLATFORM_DIR}fonts/font_selector.cc
  ## TODO ## #${BLINK_PLATFORM_DIR}fonts/font_selector.h",
  ## TODO ## #${BLINK_PLATFORM_DIR}fonts/font_selector_client.h",
  ## TODO ## ${BLINK_PLATFORM_DIR}fonts/font_smoothing_mode.cc
  ## TODO ## #${BLINK_PLATFORM_DIR}fonts/font_smoothing_mode.h",
  ## TODO ## ${BLINK_PLATFORM_DIR}fonts/font_unique_name_lookup.cc
  ## TODO ## #${BLINK_PLATFORM_DIR}fonts/font_unique_name_lookup.h",
  ## TODO ## ${BLINK_PLATFORM_DIR}fonts/font_variant_east_asian.cc
  ## TODO ## #${BLINK_PLATFORM_DIR}fonts/font_variant_east_asian.h",
  ## TODO ## ${BLINK_PLATFORM_DIR}fonts/font_variant_numeric.cc
  ## TODO ## #${BLINK_PLATFORM_DIR}fonts/font_variant_numeric.h",
  ## TODO ## #${BLINK_PLATFORM_DIR}fonts/font_vertical_position_type.h",
  ## TODO ## ${BLINK_PLATFORM_DIR}fonts/font_width_variant.cc
  ## TODO ## #${BLINK_PLATFORM_DIR}fonts/font_width_variant.h",
  ## TODO ## ${BLINK_PLATFORM_DIR}fonts/generic_font_family_settings.cc
  ## TODO ## #${BLINK_PLATFORM_DIR}fonts/generic_font_family_settings.h",
  ## TODO ## #${BLINK_PLATFORM_DIR}fonts/glyph_metrics_map.h",
  ## TODO ## ${BLINK_PLATFORM_DIR}fonts/linux/font_cache_linux.cc
  ## TODO ## ${BLINK_PLATFORM_DIR}fonts/linux/font_unique_name_lookup_linux.cc
  ## TODO ## #${BLINK_PLATFORM_DIR}fonts/linux/font_unique_name_lookup_linux.h",
  ## TODO ## ${BLINK_PLATFORM_DIR}fonts/mac/core_text_font_format_support.cc
  ## TODO ## #${BLINK_PLATFORM_DIR}fonts/mac/core_text_font_format_support.h",
  ## TODO ## # TODO #${BLINK_PLATFORM_DIR}fonts/mac/font_cache_mac.mm",
  ## TODO ## #${BLINK_PLATFORM_DIR}fonts/mac/font_matcher_mac.h",
  ## TODO ## # TODO # ${BLINK_PLATFORM_DIR}fonts/mac/font_matcher_mac.mm",
  ## TODO ## #${BLINK_PLATFORM_DIR}fonts/mac/font_platform_data_mac.h",
  ## TODO ## # TODO #${BLINK_PLATFORM_DIR}fonts/mac/font_platform_data_mac.mm",
  ## TODO ## #${BLINK_PLATFORM_DIR}fonts/ng_text_fragment_paint_info.h",
  ## TODO ## ${BLINK_PLATFORM_DIR}fonts/opentype/font_format_check.cc
  ## TODO ## #${BLINK_PLATFORM_DIR}fonts/opentype/font_format_check.h",
  ## TODO ## ${BLINK_PLATFORM_DIR}fonts/opentype/font_settings.cc
  ## TODO ## #${BLINK_PLATFORM_DIR}fonts/opentype/font_settings.h",
  ## TODO ## ${BLINK_PLATFORM_DIR}fonts/opentype/open_type_caps_support.cc
  ## TODO ## #${BLINK_PLATFORM_DIR}fonts/opentype/open_type_caps_support.h",
  ## TODO ## ${BLINK_PLATFORM_DIR}fonts/opentype/open_type_caps_support_mpl.cc
  ## TODO ## #${BLINK_PLATFORM_DIR}fonts/opentype/open_type_types.h",
  ## TODO ## ${BLINK_PLATFORM_DIR}fonts/opentype/open_type_vertical_data.cc
  ## TODO ## #${BLINK_PLATFORM_DIR}fonts/opentype/open_type_vertical_data.h",
  ## TODO ## ${BLINK_PLATFORM_DIR}fonts/orientation_iterator.cc
  ## TODO ## #${BLINK_PLATFORM_DIR}fonts/orientation_iterator.h",
  ## TODO ## ${BLINK_PLATFORM_DIR}fonts/script_run_iterator.cc
  ## TODO ## #${BLINK_PLATFORM_DIR}fonts/script_run_iterator.h",
  ## TODO ## ${BLINK_PLATFORM_DIR}fonts/segmented_font_data.cc
  ## TODO ## #${BLINK_PLATFORM_DIR}fonts/segmented_font_data.h",
  ## TODO ## ${BLINK_PLATFORM_DIR}fonts/shaping/caching_word_shape_iterator.cc
  ## TODO ## #${BLINK_PLATFORM_DIR}fonts/shaping/caching_word_shape_iterator.h",
  ## TODO ## ${BLINK_PLATFORM_DIR}fonts/shaping/caching_word_shaper.cc
  ## TODO ## #${BLINK_PLATFORM_DIR}fonts/shaping/caching_word_shaper.h",
  ## TODO ## ${BLINK_PLATFORM_DIR}fonts/shaping/case_mapping_harfbuzz_buffer_filler.cc
  ## TODO ## #${BLINK_PLATFORM_DIR}fonts/shaping/case_mapping_harfbuzz_buffer_filler.h",
  ## TODO ## #${BLINK_PLATFORM_DIR}fonts/shaping/glyph_bounds_accumulator.h",
  ## TODO ## ${BLINK_PLATFORM_DIR}fonts/shaping/harfbuzz_face.cc
  ## TODO ## #${BLINK_PLATFORM_DIR}fonts/shaping/harfbuzz_face.h",
  ## TODO ## ${BLINK_PLATFORM_DIR}fonts/shaping/harfbuzz_font_cache.cc
  ## TODO ## #${BLINK_PLATFORM_DIR}fonts/shaping/harfbuzz_font_cache.h",
  ## TODO ## #${BLINK_PLATFORM_DIR}fonts/shaping/harfbuzz_font_data.h",
  ## TODO ## ${BLINK_PLATFORM_DIR}fonts/shaping/harfbuzz_shaper.cc
  ## TODO ## #${BLINK_PLATFORM_DIR}fonts/shaping/harfbuzz_shaper.h",
  ## TODO ## ${BLINK_PLATFORM_DIR}fonts/shaping/run_segmenter.cc
  ## TODO ## #${BLINK_PLATFORM_DIR}fonts/shaping/run_segmenter.h",
  ## TODO ## ${BLINK_PLATFORM_DIR}fonts/shaping/shape_cache.cc
  ## TODO ## #${BLINK_PLATFORM_DIR}fonts/shaping/shape_cache.h",
  ## TODO ## ${BLINK_PLATFORM_DIR}fonts/shaping/shape_result.cc
  ## TODO ## #${BLINK_PLATFORM_DIR}fonts/shaping/shape_result.h",
  ## TODO ## ${BLINK_PLATFORM_DIR}fonts/shaping/shape_result_bloberizer.cc
  ## TODO ## #${BLINK_PLATFORM_DIR}fonts/shaping/shape_result_bloberizer.h",
  ## TODO ## ${BLINK_PLATFORM_DIR}fonts/shaping/shape_result_buffer.cc
  ## TODO ## #${BLINK_PLATFORM_DIR}fonts/shaping/shape_result_buffer.h",
  ## TODO ## #${BLINK_PLATFORM_DIR}fonts/shaping/shape_result_inline_headers.h",
  ## TODO ## ${BLINK_PLATFORM_DIR}fonts/shaping/shape_result_spacing.cc
  ## TODO ## #${BLINK_PLATFORM_DIR}fonts/shaping/shape_result_spacing.h",
  ## TODO ## ${BLINK_PLATFORM_DIR}fonts/shaping/shape_result_test_info.cc
  ## TODO ## #${BLINK_PLATFORM_DIR}fonts/shaping/shape_result_test_info.h",
  ## TODO ## ${BLINK_PLATFORM_DIR}fonts/shaping/shape_result_view.cc
  ## TODO ## #${BLINK_PLATFORM_DIR}fonts/shaping/shape_result_view.h",
  ## TODO ## ${BLINK_PLATFORM_DIR}fonts/shaping/shaping_line_breaker.cc
  ## TODO ## #${BLINK_PLATFORM_DIR}fonts/shaping/shaping_line_breaker.h",
  ## TODO ## ${BLINK_PLATFORM_DIR}fonts/simple_font_data.cc
  ## TODO ## #${BLINK_PLATFORM_DIR}fonts/simple_font_data.h",
  ## TODO ## ${BLINK_PLATFORM_DIR}fonts/skia/font_cache_skia.cc
  ## TODO ## ${BLINK_PLATFORM_DIR}fonts/skia/skia_text_metrics.cc
  ## TODO ## #${BLINK_PLATFORM_DIR}fonts/skia/skia_text_metrics.h",
  ## TODO ## ${BLINK_PLATFORM_DIR}fonts/skia/sktypeface_factory.cc
  ## TODO ## #${BLINK_PLATFORM_DIR}fonts/skia/sktypeface_factory.h",
  ## TODO ## ${BLINK_PLATFORM_DIR}fonts/small_caps_iterator.cc
  ## TODO ## #${BLINK_PLATFORM_DIR}fonts/small_caps_iterator.h",
  ## TODO ## ${BLINK_PLATFORM_DIR}fonts/string_truncator.cc
  ## TODO ## #${BLINK_PLATFORM_DIR}fonts/string_truncator.h",
  ## TODO ## ${BLINK_PLATFORM_DIR}fonts/symbols_iterator.cc
  ## TODO ## #${BLINK_PLATFORM_DIR}fonts/symbols_iterator.h",
  ## TODO ## ${BLINK_PLATFORM_DIR}fonts/text_rendering_mode.cc
  ## TODO ## #${BLINK_PLATFORM_DIR}fonts/text_rendering_mode.h",
  ## TODO ## #${BLINK_PLATFORM_DIR}fonts/text_run_paint_info.h",
  ## TODO ## ${BLINK_PLATFORM_DIR}fonts/typesetting_features.cc
  ## TODO ## #${BLINK_PLATFORM_DIR}fonts/typesetting_features.h",
  ## TODO ## ${BLINK_PLATFORM_DIR}fonts/unicode_range_set.cc
  ## TODO ## #${BLINK_PLATFORM_DIR}fonts/unicode_range_set.h",
  ## TODO ## ${BLINK_PLATFORM_DIR}fonts/utf16_ragel_iterator.cc
  ## TODO ## #${BLINK_PLATFORM_DIR}fonts/utf16_ragel_iterator.h",
  ## TODO ## ${BLINK_PLATFORM_DIR}fonts/utf16_text_iterator.cc
  ## TODO ## #${BLINK_PLATFORM_DIR}fonts/utf16_text_iterator.h",
  ## TODO ## ${BLINK_PLATFORM_DIR}fonts/vdmx_parser.cc
  ## TODO ## #${BLINK_PLATFORM_DIR}fonts/vdmx_parser.h",
  ## TODO ## ${BLINK_PLATFORM_DIR}fonts/web_font_decoder.cc
  ## TODO ## #${BLINK_PLATFORM_DIR}fonts/web_font_decoder.h",
  ## TODO ## ${BLINK_PLATFORM_DIR}fonts/web_font_render_style.cc
  ## TODO ## ${BLINK_PLATFORM_DIR}fonts/web_font_typeface_factory.cc
  ## TODO ## #${BLINK_PLATFORM_DIR}fonts/web_font_typeface_factory.h",
  ## TODO ## ${BLINK_PLATFORM_DIR}fonts/win/dwrite_font_format_support.cc
  ## TODO ## #${BLINK_PLATFORM_DIR}fonts/win/dwrite_font_format_support.h",
  ## TODO ## ${BLINK_PLATFORM_DIR}fonts/win/font_cache_skia_win.cc
  ## TODO ## ${BLINK_PLATFORM_DIR}fonts/win/font_fallback_win.cc
  ## TODO ## #${BLINK_PLATFORM_DIR}fonts/win/font_fallback_win.h",
  ## TODO ## ${BLINK_PLATFORM_DIR}fonts/win/font_platform_data_win.cc
  ## TODO ## ${BLINK_PLATFORM_DIR}fonts/win/font_unique_name_lookup_win.cc
  #${BLINK_PLATFORM_DIR}fonts/win/font_unique_name_lookup_win.h",
  #${BLINK_PLATFORM_DIR}geometry/blend.h",
  #${BLINK_PLATFORM_DIR}geometry/calculation_value.h",
  #
  # if (is_mac)
  #
  ## TODO ## ${BLINK_PLATFORM_DIR}geometry/cg/float_point_cg.cc
  ## TODO ## ${BLINK_PLATFORM_DIR}geometry/cg/float_rect_cg.cc
  ## TODO ## ${BLINK_PLATFORM_DIR}geometry/cg/float_size_cg.cc
  ## TODO ## ${BLINK_PLATFORM_DIR}geometry/cg/int_point_cg.cc
  ## TODO ## ${BLINK_PLATFORM_DIR}geometry/cg/int_rect_cg.cc
  ## TODO ## ${BLINK_PLATFORM_DIR}geometry/cg/int_size_cg.cc
  ## TODO ## ${BLINK_PLATFORM_DIR}geometry/double_point.cc
  #${BLINK_PLATFORM_DIR}geometry/double_point.h",
  ${BLINK_PLATFORM_DIR}geometry/double_rect.cc
  #${BLINK_PLATFORM_DIR}geometry/double_rect.h",
  ${BLINK_PLATFORM_DIR}geometry/double_size.cc
  #${BLINK_PLATFORM_DIR}geometry/double_size.h",
  ${BLINK_PLATFORM_DIR}geometry/float_box.cc
  #${BLINK_PLATFORM_DIR}geometry/float_box.h",
  ${BLINK_PLATFORM_DIR}geometry/float_point.cc
  #${BLINK_PLATFORM_DIR}geometry/float_point.h",
  ${BLINK_PLATFORM_DIR}geometry/float_point_3d.cc
  #${BLINK_PLATFORM_DIR}geometry/float_point_3d.h",
  ${BLINK_PLATFORM_DIR}geometry/float_polygon.cc
  #${BLINK_PLATFORM_DIR}geometry/float_polygon.h",
  ${BLINK_PLATFORM_DIR}geometry/float_quad.cc
  #${BLINK_PLATFORM_DIR}geometry/float_quad.h",
  ${BLINK_PLATFORM_DIR}geometry/float_rect.cc
  #${BLINK_PLATFORM_DIR}geometry/float_rect.h",
  ${BLINK_PLATFORM_DIR}geometry/float_rect_outsets.cc
  #${BLINK_PLATFORM_DIR}geometry/float_rect_outsets.h",
  ${BLINK_PLATFORM_DIR}geometry/float_rounded_rect.cc
  #${BLINK_PLATFORM_DIR}geometry/float_rounded_rect.h",
  ${BLINK_PLATFORM_DIR}geometry/float_size.cc
  #${BLINK_PLATFORM_DIR}geometry/float_size.h",
  #${BLINK_PLATFORM_DIR}geometry/geometry_as_json.h",
  ${BLINK_PLATFORM_DIR}geometry/int_point.cc
  #${BLINK_PLATFORM_DIR}geometry/int_point.h",
  ${BLINK_PLATFORM_DIR}geometry/int_rect.cc
  #${BLINK_PLATFORM_DIR}geometry/int_rect.h",
  #${BLINK_PLATFORM_DIR}geometry/int_rect_outsets.h",
  ${BLINK_PLATFORM_DIR}geometry/int_size.cc
  #${BLINK_PLATFORM_DIR}geometry/int_size.h",
  ${BLINK_PLATFORM_DIR}geometry/layout_point.cc
  #${BLINK_PLATFORM_DIR}geometry/layout_point.h",
  ${BLINK_PLATFORM_DIR}geometry/layout_rect.cc
  #${BLINK_PLATFORM_DIR}geometry/layout_rect.h",
  ${BLINK_PLATFORM_DIR}geometry/layout_rect_outsets.cc
  #${BLINK_PLATFORM_DIR}geometry/layout_rect_outsets.h",
  ${BLINK_PLATFORM_DIR}geometry/layout_size.cc
  #${BLINK_PLATFORM_DIR}geometry/layout_size.h",
  ${BLINK_PLATFORM_DIR}geometry/layout_unit.cc
  #${BLINK_PLATFORM_DIR}geometry/layout_unit.h",
  ${BLINK_PLATFORM_DIR}geometry/length.cc
  #${BLINK_PLATFORM_DIR}geometry/length.h",
  #${BLINK_PLATFORM_DIR}geometry/length_box.h",
  ${BLINK_PLATFORM_DIR}geometry/length_functions.cc
  #${BLINK_PLATFORM_DIR}geometry/length_functions.h",
  #${BLINK_PLATFORM_DIR}geometry/length_point.h",
  #${BLINK_PLATFORM_DIR}geometry/length_size.h",
  ${BLINK_PLATFORM_DIR}geometry/region.cc
  #${BLINK_PLATFORM_DIR}geometry/region.h",
  ${BLINK_PLATFORM_DIR}graphics/accelerated_static_bitmap_image.cc
  #${BLINK_PLATFORM_DIR}graphics/accelerated_static_bitmap_image.h",
  #${BLINK_PLATFORM_DIR}graphics/animation_worklet_mutator.h",
  #${BLINK_PLATFORM_DIR}graphics/animation_worklet_mutator_dispatcher.h",
  ${BLINK_PLATFORM_DIR}graphics/animation_worklet_mutator_dispatcher_impl.cc
  #${BLINK_PLATFORM_DIR}graphics/animation_worklet_mutator_dispatcher_impl.h",
  #${BLINK_PLATFORM_DIR}graphics/animation_worklet_mutators_state.h",
  #${BLINK_PLATFORM_DIR}graphics/apply_viewport_changes.h",
  ${BLINK_PLATFORM_DIR}graphics/begin_frame_provider.cc
  #${BLINK_PLATFORM_DIR}graphics/begin_frame_provider.h",
  ${BLINK_PLATFORM_DIR}graphics/bitmap_image.cc
  #${BLINK_PLATFORM_DIR}graphics/bitmap_image.h",
  ${BLINK_PLATFORM_DIR}graphics/bitmap_image_metrics.cc
  #${BLINK_PLATFORM_DIR}graphics/bitmap_image_metrics.h",
  ${BLINK_PLATFORM_DIR}graphics/box_reflection.cc
  #${BLINK_PLATFORM_DIR}graphics/box_reflection.h",
  ${BLINK_PLATFORM_DIR}graphics/canvas_2d_layer_bridge.cc
  #${BLINK_PLATFORM_DIR}graphics/canvas_2d_layer_bridge.h",
  ${BLINK_PLATFORM_DIR}graphics/canvas_color_params.cc
  #${BLINK_PLATFORM_DIR}graphics/canvas_color_params.h",
  #${BLINK_PLATFORM_DIR}graphics/canvas_heuristic_parameters.h",
  ${BLINK_PLATFORM_DIR}graphics/canvas_resource.cc
  #${BLINK_PLATFORM_DIR}graphics/canvas_resource.h",
  ${BLINK_PLATFORM_DIR}graphics/canvas_resource_dispatcher.cc
  #${BLINK_PLATFORM_DIR}graphics/canvas_resource_dispatcher.h",
  ${BLINK_PLATFORM_DIR}graphics/canvas_resource_host.cc
  #${BLINK_PLATFORM_DIR}graphics/canvas_resource_host.h",
  ${BLINK_PLATFORM_DIR}graphics/canvas_resource_provider.cc
  #${BLINK_PLATFORM_DIR}graphics/canvas_resource_provider.h",
  ${BLINK_PLATFORM_DIR}graphics/color.cc
  #${BLINK_PLATFORM_DIR}graphics/color.h",
  ${BLINK_PLATFORM_DIR}graphics/color_behavior.cc
  #${BLINK_PLATFORM_DIR}graphics/color_behavior.h",
  #${BLINK_PLATFORM_DIR}graphics/color_blend.h",
  #${BLINK_PLATFORM_DIR}graphics/color_scheme.h",
  ${BLINK_PLATFORM_DIR}graphics/color_space_gamut.cc
  #${BLINK_PLATFORM_DIR}graphics/color_space_gamut.h",
  ${BLINK_PLATFORM_DIR}graphics/color_space_profile_data.cc
  #${BLINK_PLATFORM_DIR}graphics/color_space_profile_data.h",
  ${BLINK_PLATFORM_DIR}graphics/compositing/chunk_to_layer_mapper.cc
  #${BLINK_PLATFORM_DIR}graphics/compositing/chunk_to_layer_mapper.h",
  ${BLINK_PLATFORM_DIR}graphics/compositing/content_layer_client_impl.cc
  #${BLINK_PLATFORM_DIR}graphics/compositing/content_layer_client_impl.h",
  ${BLINK_PLATFORM_DIR}graphics/compositing/paint_artifact_compositor.cc
  #${BLINK_PLATFORM_DIR}graphics/compositing/paint_artifact_compositor.h",
  ${BLINK_PLATFORM_DIR}graphics/compositing/paint_chunks_to_cc_layer.cc
  #${BLINK_PLATFORM_DIR}graphics/compositing/paint_chunks_to_cc_layer.h",
  ${BLINK_PLATFORM_DIR}graphics/compositing/property_tree_manager.cc
  #${BLINK_PLATFORM_DIR}graphics/compositing/property_tree_manager.h",
  ${BLINK_PLATFORM_DIR}graphics/compositing_reasons.cc
  #${BLINK_PLATFORM_DIR}graphics/compositing_reasons.h",
  ${BLINK_PLATFORM_DIR}graphics/compositor_element_id.cc
  #${BLINK_PLATFORM_DIR}graphics/compositor_element_id.h",
  ${BLINK_PLATFORM_DIR}graphics/compositor_filter_operations.cc
  #${BLINK_PLATFORM_DIR}graphics/compositor_filter_operations.h",
  ${BLINK_PLATFORM_DIR}graphics/compositor_mutator_client.cc
  #${BLINK_PLATFORM_DIR}graphics/compositor_mutator_client.h",
  ${BLINK_PLATFORM_DIR}graphics/contiguous_container.cc
  #${BLINK_PLATFORM_DIR}graphics/contiguous_container.h",
  #${BLINK_PLATFORM_DIR}graphics/cpu/arm/webgl_image_conversion_neon.h",
  #${BLINK_PLATFORM_DIR}graphics/cpu/mips/webgl_image_conversion_msa.h",
  #${BLINK_PLATFORM_DIR}graphics/cpu/x86/webgl_image_conversion_sse.h",
  ${BLINK_PLATFORM_DIR}graphics/crossfade_generated_image.cc
  #${BLINK_PLATFORM_DIR}graphics/crossfade_generated_image.h",
  ${BLINK_PLATFORM_DIR}graphics/dark_mode_bitmap_image_classifier.cc
  #${BLINK_PLATFORM_DIR}graphics/dark_mode_bitmap_image_classifier.h",
  ${BLINK_PLATFORM_DIR}graphics/dark_mode_color_classifier.cc
  #${BLINK_PLATFORM_DIR}graphics/dark_mode_color_classifier.h",
  ${BLINK_PLATFORM_DIR}graphics/dark_mode_filter.cc
  #${BLINK_PLATFORM_DIR}graphics/dark_mode_filter.h",
  #${BLINK_PLATFORM_DIR}graphics/dark_mode_settings.h",
  ${BLINK_PLATFORM_DIR}graphics/darkmode/darkmode_classifier.cc
  #${BLINK_PLATFORM_DIR}graphics/darkmode/darkmode_classifier.h",
  #${BLINK_PLATFORM_DIR}graphics/dash_array.h",
  ${BLINK_PLATFORM_DIR}graphics/decoding_image_generator.cc
  #${BLINK_PLATFORM_DIR}graphics/decoding_image_generator.h",
  ${BLINK_PLATFORM_DIR}graphics/deferred_image_decoder.cc
  #${BLINK_PLATFORM_DIR}graphics/deferred_image_decoder.h",
  #${BLINK_PLATFORM_DIR}graphics/dom_node_id.h",
  ${BLINK_PLATFORM_DIR}graphics/draw_looper_builder.cc
  #${BLINK_PLATFORM_DIR}graphics/draw_looper_builder.h",
  ${BLINK_PLATFORM_DIR}graphics/filters/distant_light_source.cc
  #${BLINK_PLATFORM_DIR}graphics/filters/distant_light_source.h",
  ${BLINK_PLATFORM_DIR}graphics/filters/fe_blend.cc
  #${BLINK_PLATFORM_DIR}graphics/filters/fe_blend.h",
  ${BLINK_PLATFORM_DIR}graphics/filters/fe_box_reflect.cc
  #${BLINK_PLATFORM_DIR}graphics/filters/fe_box_reflect.h",
  ${BLINK_PLATFORM_DIR}graphics/filters/fe_color_matrix.cc
  #${BLINK_PLATFORM_DIR}graphics/filters/fe_color_matrix.h",
  ${BLINK_PLATFORM_DIR}graphics/filters/fe_component_transfer.cc
  #${BLINK_PLATFORM_DIR}graphics/filters/fe_component_transfer.h",
  ${BLINK_PLATFORM_DIR}graphics/filters/fe_composite.cc
  #${BLINK_PLATFORM_DIR}graphics/filters/fe_composite.h",
  ${BLINK_PLATFORM_DIR}graphics/filters/fe_convolve_matrix.cc
  #${BLINK_PLATFORM_DIR}graphics/filters/fe_convolve_matrix.h",
  ${BLINK_PLATFORM_DIR}graphics/filters/fe_diffuse_lighting.cc
  #${BLINK_PLATFORM_DIR}graphics/filters/fe_diffuse_lighting.h",
  ${BLINK_PLATFORM_DIR}graphics/filters/fe_displacement_map.cc
  #${BLINK_PLATFORM_DIR}graphics/filters/fe_displacement_map.h",
  ${BLINK_PLATFORM_DIR}graphics/filters/fe_drop_shadow.cc
  #${BLINK_PLATFORM_DIR}graphics/filters/fe_drop_shadow.h",
  ${BLINK_PLATFORM_DIR}graphics/filters/fe_flood.cc
  #${BLINK_PLATFORM_DIR}graphics/filters/fe_flood.h",
  ${BLINK_PLATFORM_DIR}graphics/filters/fe_gaussian_blur.cc
  #${BLINK_PLATFORM_DIR}graphics/filters/fe_gaussian_blur.h",
  ${BLINK_PLATFORM_DIR}graphics/filters/fe_lighting.cc
  #${BLINK_PLATFORM_DIR}graphics/filters/fe_lighting.h",
  ${BLINK_PLATFORM_DIR}graphics/filters/fe_merge.cc
  #${BLINK_PLATFORM_DIR}graphics/filters/fe_merge.h",
  ${BLINK_PLATFORM_DIR}graphics/filters/fe_morphology.cc
  #${BLINK_PLATFORM_DIR}graphics/filters/fe_morphology.h",
  ${BLINK_PLATFORM_DIR}graphics/filters/fe_offset.cc
  #${BLINK_PLATFORM_DIR}graphics/filters/fe_offset.h",
  ${BLINK_PLATFORM_DIR}graphics/filters/fe_specular_lighting.cc
  #${BLINK_PLATFORM_DIR}graphics/filters/fe_specular_lighting.h",
  ${BLINK_PLATFORM_DIR}graphics/filters/fe_tile.cc
  #${BLINK_PLATFORM_DIR}graphics/filters/fe_tile.h",
  ${BLINK_PLATFORM_DIR}graphics/filters/fe_turbulence.cc
  #${BLINK_PLATFORM_DIR}graphics/filters/fe_turbulence.h",
  ${BLINK_PLATFORM_DIR}graphics/filters/filter.cc
  #${BLINK_PLATFORM_DIR}graphics/filters/filter.h",
  ${BLINK_PLATFORM_DIR}graphics/filters/filter_effect.cc
  #${BLINK_PLATFORM_DIR}graphics/filters/filter_effect.h",
  ${BLINK_PLATFORM_DIR}graphics/filters/light_source.cc
  #${BLINK_PLATFORM_DIR}graphics/filters/light_source.h",
  ${BLINK_PLATFORM_DIR}graphics/filters/paint_filter_builder.cc
  #${BLINK_PLATFORM_DIR}graphics/filters/paint_filter_builder.h",
  ${BLINK_PLATFORM_DIR}graphics/filters/paint_filter_effect.cc
  #${BLINK_PLATFORM_DIR}graphics/filters/paint_filter_effect.h",
  ${BLINK_PLATFORM_DIR}graphics/filters/point_light_source.cc
  #${BLINK_PLATFORM_DIR}graphics/filters/point_light_source.h",
  ${BLINK_PLATFORM_DIR}graphics/filters/source_alpha.cc
  #${BLINK_PLATFORM_DIR}graphics/filters/source_alpha.h",
  ${BLINK_PLATFORM_DIR}graphics/filters/source_graphic.cc
  #${BLINK_PLATFORM_DIR}graphics/filters/source_graphic.h",
  ${BLINK_PLATFORM_DIR}graphics/filters/spot_light_source.cc
  #${BLINK_PLATFORM_DIR}graphics/filters/spot_light_source.h",
  ${BLINK_PLATFORM_DIR}graphics/generated_image.cc
  #${BLINK_PLATFORM_DIR}graphics/generated_image.h",
  ${BLINK_PLATFORM_DIR}graphics/gpu/dawn_control_client_holder.cc
  #${BLINK_PLATFORM_DIR}graphics/gpu/dawn_control_client_holder.h",
  ${BLINK_PLATFORM_DIR}graphics/gpu/drawing_buffer.cc
  #${BLINK_PLATFORM_DIR}graphics/gpu/drawing_buffer.h",
  ${BLINK_PLATFORM_DIR}graphics/gpu/extensions_3d_util.cc
  #${BLINK_PLATFORM_DIR}graphics/gpu/extensions_3d_util.h",
  ${BLINK_PLATFORM_DIR}graphics/gpu/graphics_context_3d_utils.cc
  #${BLINK_PLATFORM_DIR}graphics/gpu/graphics_context_3d_utils.h",
  ${BLINK_PLATFORM_DIR}graphics/gpu/image_layer_bridge.cc
  #${BLINK_PLATFORM_DIR}graphics/gpu/image_layer_bridge.h",
  ${BLINK_PLATFORM_DIR}graphics/gpu/shared_context_rate_limiter.cc
  #${BLINK_PLATFORM_DIR}graphics/gpu/shared_context_rate_limiter.h",
  ${BLINK_PLATFORM_DIR}graphics/gpu/shared_gpu_context.cc
  #${BLINK_PLATFORM_DIR}graphics/gpu/shared_gpu_context.h",
  ${BLINK_PLATFORM_DIR}graphics/gpu/webgl_image_conversion.cc
  #${BLINK_PLATFORM_DIR}graphics/gpu/webgl_image_conversion.h",
  ${BLINK_PLATFORM_DIR}graphics/gpu/webgpu_swap_buffer_provider.cc
  #${BLINK_PLATFORM_DIR}graphics/gpu/webgpu_swap_buffer_provider.h",
  ${BLINK_PLATFORM_DIR}graphics/gpu/xr_frame_transport.cc
  #${BLINK_PLATFORM_DIR}graphics/gpu/xr_frame_transport.h",
  ${BLINK_PLATFORM_DIR}graphics/gpu/xr_webgl_drawing_buffer.cc
  #${BLINK_PLATFORM_DIR}graphics/gpu/xr_webgl_drawing_buffer.h",
  ${BLINK_PLATFORM_DIR}graphics/gpu_memory_buffer_image_copy.cc
  #${BLINK_PLATFORM_DIR}graphics/gpu_memory_buffer_image_copy.h",
  ${BLINK_PLATFORM_DIR}graphics/gradient.cc
  #${BLINK_PLATFORM_DIR}graphics/gradient.h",
  ${BLINK_PLATFORM_DIR}graphics/gradient_generated_image.cc
  #${BLINK_PLATFORM_DIR}graphics/gradient_generated_image.h",
  ${BLINK_PLATFORM_DIR}graphics/graphics_context.cc
  #${BLINK_PLATFORM_DIR}graphics/graphics_context.h",
  ${BLINK_PLATFORM_DIR}graphics/graphics_context_state.cc
  #${BLINK_PLATFORM_DIR}graphics/graphics_context_state.h",
  #${BLINK_PLATFORM_DIR}graphics/graphics_context_state_saver.h",
  ${BLINK_PLATFORM_DIR}graphics/graphics_layer.cc
  #${BLINK_PLATFORM_DIR}graphics/graphics_layer.h",
  #${BLINK_PLATFORM_DIR}graphics/graphics_layer_client.h",
  ${BLINK_PLATFORM_DIR}graphics/graphics_types.cc
  #${BLINK_PLATFORM_DIR}graphics/graphics_types.h",
  #${BLINK_PLATFORM_DIR}graphics/graphics_types_3d.h",
  ${BLINK_PLATFORM_DIR}graphics/hit_test_rect.cc
  #${BLINK_PLATFORM_DIR}graphics/hit_test_rect.h",
  ${BLINK_PLATFORM_DIR}graphics/image.cc
  #${BLINK_PLATFORM_DIR}graphics/image.h",
  #${BLINK_PLATFORM_DIR}graphics/image_animation_policy.h",
  ${BLINK_PLATFORM_DIR}graphics/image_data_buffer.cc
  #${BLINK_PLATFORM_DIR}graphics/image_data_buffer.h",
  ${BLINK_PLATFORM_DIR}graphics/image_decoder_wrapper.cc
  #${BLINK_PLATFORM_DIR}graphics/image_decoder_wrapper.h",
  ${BLINK_PLATFORM_DIR}graphics/image_decoding_store.cc
  #${BLINK_PLATFORM_DIR}graphics/image_decoding_store.h",
  ${BLINK_PLATFORM_DIR}graphics/image_frame_generator.cc
  #${BLINK_PLATFORM_DIR}graphics/image_frame_generator.h",
  ${BLINK_PLATFORM_DIR}graphics/image_observer.cc
  #${BLINK_PLATFORM_DIR}graphics/image_observer.h",
  ${BLINK_PLATFORM_DIR}graphics/image_orientation.cc
  #${BLINK_PLATFORM_DIR}graphics/image_orientation.h",
  ${BLINK_PLATFORM_DIR}graphics/image_pattern.cc
  #${BLINK_PLATFORM_DIR}graphics/image_pattern.h",
  ${BLINK_PLATFORM_DIR}graphics/intercepting_canvas.cc
  #${BLINK_PLATFORM_DIR}graphics/intercepting_canvas.h",
  ${BLINK_PLATFORM_DIR}graphics/interpolation_space.cc
  #${BLINK_PLATFORM_DIR}graphics/interpolation_space.h",
  #${BLINK_PLATFORM_DIR}graphics/lab_color_space.h",
  #${BLINK_PLATFORM_DIR}graphics/link_highlight.h",
  ${BLINK_PLATFORM_DIR}graphics/logging_canvas.cc
  #${BLINK_PLATFORM_DIR}graphics/logging_canvas.h",
  ${BLINK_PLATFORM_DIR}graphics/mailbox_texture_holder.cc
  #${BLINK_PLATFORM_DIR}graphics/mailbox_texture_holder.h",
  ${BLINK_PLATFORM_DIR}graphics/main_thread_mutator_client.cc
  #${BLINK_PLATFORM_DIR}graphics/main_thread_mutator_client.h",
  #${BLINK_PLATFORM_DIR}graphics/mutator_client.h",
  ${BLINK_PLATFORM_DIR}graphics/offscreen_canvas_placeholder.cc
  #${BLINK_PLATFORM_DIR}graphics/offscreen_canvas_placeholder.h",
  ${BLINK_PLATFORM_DIR}graphics/paint/clip_paint_property_node.cc
  #${BLINK_PLATFORM_DIR}graphics/paint/clip_paint_property_node.h",
  ${BLINK_PLATFORM_DIR}graphics/paint/cull_rect.cc
  #${BLINK_PLATFORM_DIR}graphics/paint/cull_rect.h",
  ${BLINK_PLATFORM_DIR}graphics/paint/display_item.cc
  #${BLINK_PLATFORM_DIR}graphics/paint/display_item.h",
  #${BLINK_PLATFORM_DIR}graphics/paint/display_item_cache_skipper.h",
  ${BLINK_PLATFORM_DIR}graphics/paint/display_item_client.cc
  #${BLINK_PLATFORM_DIR}graphics/paint/display_item_client.h",
  ${BLINK_PLATFORM_DIR}graphics/paint/display_item_list.cc
  #${BLINK_PLATFORM_DIR}graphics/paint/display_item_list.h",
  ${BLINK_PLATFORM_DIR}graphics/paint/display_item_raster_invalidator.cc
  #${BLINK_PLATFORM_DIR}graphics/paint/display_item_raster_invalidator.h",
  ${BLINK_PLATFORM_DIR}graphics/paint/drawing_display_item.cc
  #${BLINK_PLATFORM_DIR}graphics/paint/drawing_display_item.h",
  ${BLINK_PLATFORM_DIR}graphics/paint/drawing_recorder.cc
  #${BLINK_PLATFORM_DIR}graphics/paint/drawing_recorder.h",
  ${BLINK_PLATFORM_DIR}graphics/paint/effect_paint_property_node.cc
  #${BLINK_PLATFORM_DIR}graphics/paint/effect_paint_property_node.h",
  #${BLINK_PLATFORM_DIR}graphics/paint/float_clip_rect.h",
  ${BLINK_PLATFORM_DIR}graphics/paint/foreign_layer_display_item.cc
  #${BLINK_PLATFORM_DIR}graphics/paint/foreign_layer_display_item.h",
  ${BLINK_PLATFORM_DIR}graphics/paint/geometry_mapper.cc
  #${BLINK_PLATFORM_DIR}graphics/paint/geometry_mapper.h",
  ${BLINK_PLATFORM_DIR}graphics/paint/geometry_mapper_clip_cache.cc
  #${BLINK_PLATFORM_DIR}graphics/paint/geometry_mapper_clip_cache.h",
  ${BLINK_PLATFORM_DIR}graphics/paint/geometry_mapper_transform_cache.cc
  #${BLINK_PLATFORM_DIR}graphics/paint/geometry_mapper_transform_cache.h",
  ${BLINK_PLATFORM_DIR}graphics/paint/hit_test_data.cc
  #${BLINK_PLATFORM_DIR}graphics/paint/hit_test_data.h",
  ${BLINK_PLATFORM_DIR}graphics/paint/hit_test_display_item.cc
  #${BLINK_PLATFORM_DIR}graphics/paint/hit_test_display_item.h",
  ${BLINK_PLATFORM_DIR}graphics/paint/paint_artifact.cc
  #${BLINK_PLATFORM_DIR}graphics/paint/paint_artifact.h",
  #${BLINK_PLATFORM_DIR}graphics/paint/paint_canvas.h",
  ${BLINK_PLATFORM_DIR}graphics/paint/paint_chunk.cc
  #${BLINK_PLATFORM_DIR}graphics/paint/paint_chunk.h",
  #${BLINK_PLATFORM_DIR}graphics/paint/paint_chunk_subset.h",
  ${BLINK_PLATFORM_DIR}graphics/paint/paint_chunker.cc
  #${BLINK_PLATFORM_DIR}graphics/paint/paint_chunker.h",
  ${BLINK_PLATFORM_DIR}graphics/paint/paint_controller.cc
  #${BLINK_PLATFORM_DIR}graphics/paint/paint_controller.h",
  ${BLINK_PLATFORM_DIR}graphics/paint/paint_controller_debug_data.cc
  #${BLINK_PLATFORM_DIR}graphics/paint/paint_filter.h",
  #${BLINK_PLATFORM_DIR}graphics/paint/paint_flags.h",
  ${BLINK_PLATFORM_DIR}graphics/paint/paint_property_node.cc
  #${BLINK_PLATFORM_DIR}graphics/paint/paint_property_node.h",
  #${BLINK_PLATFORM_DIR}graphics/paint/paint_record.h",
  ${BLINK_PLATFORM_DIR}graphics/paint/paint_record_builder.cc
  #${BLINK_PLATFORM_DIR}graphics/paint/paint_record_builder.h",
  #${BLINK_PLATFORM_DIR}graphics/paint/paint_recorder.h",
  #${BLINK_PLATFORM_DIR}graphics/paint/paint_shader.h",
  ${BLINK_PLATFORM_DIR}graphics/paint/property_tree_state.cc
  #${BLINK_PLATFORM_DIR}graphics/paint/property_tree_state.h",
  ${BLINK_PLATFORM_DIR}graphics/paint/raster_invalidation_tracking.cc
  #${BLINK_PLATFORM_DIR}graphics/paint/raster_invalidation_tracking.h",
  ${BLINK_PLATFORM_DIR}graphics/paint/raster_invalidator.cc
  #${BLINK_PLATFORM_DIR}graphics/paint/raster_invalidator.h",
  #${BLINK_PLATFORM_DIR}graphics/paint/ref_counted_property_tree_state.h",
  #${BLINK_PLATFORM_DIR}graphics/paint/scoped_display_item_fragment.h",
  #${BLINK_PLATFORM_DIR}graphics/paint/scoped_paint_chunk_properties.h",
  ${BLINK_PLATFORM_DIR}graphics/paint/scroll_hit_test_display_item.cc
  #${BLINK_PLATFORM_DIR}graphics/paint/scroll_hit_test_display_item.h",
  ${BLINK_PLATFORM_DIR}graphics/paint/scroll_paint_property_node.cc
  #${BLINK_PLATFORM_DIR}graphics/paint/scroll_paint_property_node.h",
  #${BLINK_PLATFORM_DIR}graphics/paint/subsequence_recorder.h",
  ${BLINK_PLATFORM_DIR}graphics/paint/transform_paint_property_node.cc
  #${BLINK_PLATFORM_DIR}graphics/paint/transform_paint_property_node.h",
  ${BLINK_PLATFORM_DIR}graphics/paint_generated_image.cc
  #${BLINK_PLATFORM_DIR}graphics/paint_generated_image.h",
  ${BLINK_PLATFORM_DIR}graphics/paint_invalidation_reason.cc
  #${BLINK_PLATFORM_DIR}graphics/paint_invalidation_reason.h",
  ${BLINK_PLATFORM_DIR}graphics/paint_record_pattern.cc
  #${BLINK_PLATFORM_DIR}graphics/paint_record_pattern.h",
  ${BLINK_PLATFORM_DIR}graphics/paint_worklet_paint_dispatcher.cc
  #${BLINK_PLATFORM_DIR}graphics/paint_worklet_paint_dispatcher.h",
  #${BLINK_PLATFORM_DIR}graphics/paint_worklet_painter.h",
  ${BLINK_PLATFORM_DIR}graphics/path.cc
  #${BLINK_PLATFORM_DIR}graphics/path.h",
  ${BLINK_PLATFORM_DIR}graphics/path_traversal_state.cc
  #${BLINK_PLATFORM_DIR}graphics/path_traversal_state.h",
  ${BLINK_PLATFORM_DIR}graphics/pattern.cc
  #${BLINK_PLATFORM_DIR}graphics/pattern.h",
  ${BLINK_PLATFORM_DIR}graphics/picture_snapshot.cc
  #${BLINK_PLATFORM_DIR}graphics/picture_snapshot.h",
  ${BLINK_PLATFORM_DIR}graphics/placeholder_image.cc
  #${BLINK_PLATFORM_DIR}graphics/placeholder_image.h",
  ${BLINK_PLATFORM_DIR}graphics/platform_paint_worklet_layer_painter.cc
  #${BLINK_PLATFORM_DIR}graphics/platform_paint_worklet_layer_painter.h",
  ${BLINK_PLATFORM_DIR}graphics/profiling_canvas.cc
  #${BLINK_PLATFORM_DIR}graphics/profiling_canvas.h",
  ${BLINK_PLATFORM_DIR}graphics/replaying_canvas.cc
  #${BLINK_PLATFORM_DIR}graphics/replaying_canvas.h",
  #${BLINK_PLATFORM_DIR}graphics/scoped_interpolation_quality.h",
  #${BLINK_PLATFORM_DIR}graphics/scroll_types.h",
  ${BLINK_PLATFORM_DIR}graphics/skia/image_pixel_locker.cc
  #${BLINK_PLATFORM_DIR}graphics/skia/image_pixel_locker.h",
  #${BLINK_PLATFORM_DIR}graphics/skia/sk_size_hash.h",
  ${BLINK_PLATFORM_DIR}graphics/skia/skia_utils.cc
  #${BLINK_PLATFORM_DIR}graphics/skia/skia_utils.h",
  ${BLINK_PLATFORM_DIR}graphics/skia_texture_holder.cc
  #${BLINK_PLATFORM_DIR}graphics/skia_texture_holder.h",
  ${BLINK_PLATFORM_DIR}graphics/squashing_disallowed_reasons.cc
  #${BLINK_PLATFORM_DIR}graphics/squashing_disallowed_reasons.h",
  ${BLINK_PLATFORM_DIR}graphics/static_bitmap_image.cc
  #${BLINK_PLATFORM_DIR}graphics/static_bitmap_image.h",
  ${BLINK_PLATFORM_DIR}graphics/stroke_data.cc
  #${BLINK_PLATFORM_DIR}graphics/stroke_data.h",
  ${BLINK_PLATFORM_DIR}graphics/subtree_paint_property_update_reason.cc
  #${BLINK_PLATFORM_DIR}graphics/subtree_paint_property_update_reason.h",
  ${BLINK_PLATFORM_DIR}graphics/surface_layer_bridge.cc
  #${BLINK_PLATFORM_DIR}graphics/surface_layer_bridge.h",
  #${BLINK_PLATFORM_DIR}graphics/texture_holder.h",
  #${BLINK_PLATFORM_DIR}graphics/touch_action.h",
  ${BLINK_PLATFORM_DIR}graphics/unaccelerated_static_bitmap_image.cc
  #${BLINK_PLATFORM_DIR}graphics/unaccelerated_static_bitmap_image.h",
  ${BLINK_PLATFORM_DIR}graphics/video_frame_resource_provider.cc
  #${BLINK_PLATFORM_DIR}graphics/video_frame_resource_provider.h",
  ${BLINK_PLATFORM_DIR}graphics/video_frame_submitter.cc
  #${BLINK_PLATFORM_DIR}graphics/video_frame_submitter.h",
  ${BLINK_PLATFORM_DIR}graphics/web_graphics_context_3d_provider_wrapper.cc
  #${BLINK_PLATFORM_DIR}graphics/web_graphics_context_3d_provider_wrapper.h",
  ${BLINK_PLATFORM_DIR}histogram.cc
  #${BLINK_PLATFORM_DIR}histogram.h",
  ${BLINK_PLATFORM_DIR}image-decoders/bmp/bmp_image_decoder.cc
  #${BLINK_PLATFORM_DIR}image-decoders/bmp/bmp_image_decoder.h",
  ${BLINK_PLATFORM_DIR}image-decoders/bmp/bmp_image_reader.cc
  #${BLINK_PLATFORM_DIR}image-decoders/bmp/bmp_image_reader.h",
  ${BLINK_PLATFORM_DIR}image-decoders/fast_shared_buffer_reader.cc
  #${BLINK_PLATFORM_DIR}image-decoders/fast_shared_buffer_reader.h",
  ${BLINK_PLATFORM_DIR}image-decoders/gif/gif_image_decoder.cc
  #${BLINK_PLATFORM_DIR}image-decoders/gif/gif_image_decoder.h",
  ${BLINK_PLATFORM_DIR}image-decoders/ico/ico_image_decoder.cc
  #${BLINK_PLATFORM_DIR}image-decoders/ico/ico_image_decoder.h",
  #${BLINK_PLATFORM_DIR}image-decoders/image_animation.h",
  ${BLINK_PLATFORM_DIR}image-decoders/image_decoder.cc
  #${BLINK_PLATFORM_DIR}image-decoders/image_decoder.h",
  ${BLINK_PLATFORM_DIR}image-decoders/image_frame.cc
  #${BLINK_PLATFORM_DIR}image-decoders/image_frame.h",
  ${BLINK_PLATFORM_DIR}image-decoders/jpeg/jpeg_image_decoder.cc
  #${BLINK_PLATFORM_DIR}image-decoders/jpeg/jpeg_image_decoder.h",
  ${BLINK_PLATFORM_DIR}image-decoders/png/png_image_decoder.cc
  #${BLINK_PLATFORM_DIR}image-decoders/png/png_image_decoder.h",
  ${BLINK_PLATFORM_DIR}image-decoders/png/png_image_reader.cc
  #${BLINK_PLATFORM_DIR}image-decoders/png/png_image_reader.h",
  ${BLINK_PLATFORM_DIR}image-decoders/segment_reader.cc
  #${BLINK_PLATFORM_DIR}image-decoders/segment_reader.h",
  ${BLINK_PLATFORM_DIR}image-decoders/segment_stream.cc
  #${BLINK_PLATFORM_DIR}image-decoders/segment_stream.h",
  ${BLINK_PLATFORM_DIR}image-decoders/webp/webp_image_decoder.cc
  #${BLINK_PLATFORM_DIR}image-decoders/webp/webp_image_decoder.h",
  ${BLINK_PLATFORM_DIR}image-encoders/image_encoder.cc
  #${BLINK_PLATFORM_DIR}image-encoders/image_encoder.h",
  ${BLINK_PLATFORM_DIR}image-encoders/image_encoder_utils.cc
  #${BLINK_PLATFORM_DIR}image-encoders/image_encoder_utils.h",
  ${BLINK_PLATFORM_DIR}instance_counters.cc
  #${BLINK_PLATFORM_DIR}instance_counters.h",
  ${BLINK_PLATFORM_DIR}instance_counters_memory_dump_provider.cc
  #${BLINK_PLATFORM_DIR}instance_counters_memory_dump_provider.h",
  ${BLINK_PLATFORM_DIR}json/json_parser.cc
  #${BLINK_PLATFORM_DIR}json/json_parser.h",
  ${BLINK_PLATFORM_DIR}json/json_values.cc
  #${BLINK_PLATFORM_DIR}json/json_values.h",
  #${BLINK_PLATFORM_DIR}keyboard_codes.h",
  ${BLINK_PLATFORM_DIR}language.cc
  #${BLINK_PLATFORM_DIR}language.h",
  #${BLINK_PLATFORM_DIR}lifecycle_notifier.h",
  #${BLINK_PLATFORM_DIR}lifecycle_observer.h",
  ${BLINK_PLATFORM_DIR}link_hash.cc
  #${BLINK_PLATFORM_DIR}link_hash.h",
  #${BLINK_PLATFORM_DIR}mac/block_exceptions.h",
  # TODO #${BLINK_PLATFORM_DIR}mac/block_exceptions.mm",
  #${BLINK_PLATFORM_DIR}mac/color_mac.h",
  # TODO #${BLINK_PLATFORM_DIR}mac/color_mac.mm",
  #${BLINK_PLATFORM_DIR}mac/graphics_context_canvas.h",
  # TODO #${BLINK_PLATFORM_DIR}mac/graphics_context_canvas.mm",
  #${BLINK_PLATFORM_DIR}mac/local_current_graphics_context.h",
  # TODO #${BLINK_PLATFORM_DIR}mac/local_current_graphics_context.mm",
  #${BLINK_PLATFORM_DIR}mac/web_core_ns_cell_extras.h",
  # TODO #${BLINK_PLATFORM_DIR}mac/web_core_ns_cell_extras.mm",
  ## TODO ## ${BLINK_PLATFORM_DIR}mediastream/media_stream_center.cc
  ## TODO ## #${BLINK_PLATFORM_DIR}mediastream/media_stream_center.h",
  ## TODO ## ${BLINK_PLATFORM_DIR}mediastream/media_stream_component.cc
  ## TODO ## #${BLINK_PLATFORM_DIR}mediastream/media_stream_component.h",
  ## TODO ## ${BLINK_PLATFORM_DIR}mediastream/media_stream_descriptor.cc
  ## TODO ## #${BLINK_PLATFORM_DIR}mediastream/media_stream_descriptor.h",
  ## TODO ## ${BLINK_PLATFORM_DIR}mediastream/media_stream_source.cc
  ## TODO ## #${BLINK_PLATFORM_DIR}mediastream/media_stream_source.h",
  ## TODO ## ${BLINK_PLATFORM_DIR}mediastream/media_stream_web_audio_source.cc
  ## TODO ## #${BLINK_PLATFORM_DIR}mediastream/media_stream_web_audio_source.h",
  ## TODO ## ${BLINK_PLATFORM_DIR}memory_pressure_listener.cc
  #${BLINK_PLATFORM_DIR}memory_pressure_listener.h",
  ${BLINK_PLATFORM_DIR}mhtml/archive_resource.cc
  #${BLINK_PLATFORM_DIR}mhtml/archive_resource.h",
  ${BLINK_PLATFORM_DIR}mhtml/mhtml_archive.cc
  #${BLINK_PLATFORM_DIR}mhtml/mhtml_archive.h",
  ${BLINK_PLATFORM_DIR}mhtml/mhtml_parser.cc
  #${BLINK_PLATFORM_DIR}mhtml/mhtml_parser.h",
  #${BLINK_PLATFORM_DIR}mhtml/serialized_resource.h",
  ${BLINK_PLATFORM_DIR}mhtml/shared_buffer_chunk_reader.cc
  #${BLINK_PLATFORM_DIR}mhtml/shared_buffer_chunk_reader.h",
  ## TODO ## #${BLINK_PLATFORM_DIR}mojo/big_string_mojom_traits.h",
  ## TODO ## ${BLINK_PLATFORM_DIR}mojo/bluetooth_struct_traits.cc
  ## TODO ## #${BLINK_PLATFORM_DIR}mojo/bluetooth_struct_traits.h",
  ## TODO ## ${BLINK_PLATFORM_DIR}mojo/canonical_cookie_mojom_traits.cc
  ## TODO ## #${BLINK_PLATFORM_DIR}mojo/canonical_cookie_mojom_traits.h",
  ## TODO ## #${BLINK_PLATFORM_DIR}mojo/fetch_api_request_headers_mojom_traits.h",
  ## TODO ## ${BLINK_PLATFORM_DIR}mojo/interface_invalidator.cc
  ## TODO ## #${BLINK_PLATFORM_DIR}mojo/interface_invalidator.h",
  ## TODO ## #${BLINK_PLATFORM_DIR}mojo/mojo_helper.h",
  ## TODO ## #${BLINK_PLATFORM_DIR}mojo/revocable_binding.h",
  ## TODO ## #${BLINK_PLATFORM_DIR}mojo/revocable_interface_ptr.h",
  ## TODO ## #${BLINK_PLATFORM_DIR}mojo/revocable_strong_binding.h",
  ## TODO ## ${BLINK_PLATFORM_DIR}mojo/string16_mojom_traits.cc
  ## TODO ## #${BLINK_PLATFORM_DIR}mojo/string16_mojom_traits.h",
  ## TODO ## ${BLINK_PLATFORM_DIR}partition_alloc_memory_dump_provider.cc
  ## TODO ## #${BLINK_PLATFORM_DIR}partition_alloc_memory_dump_provider.h",
  ## TODO ## #${BLINK_PLATFORM_DIR}peerconnection/rtc_answer_options_platform.h",
  ## TODO ## #${BLINK_PLATFORM_DIR}peerconnection/rtc_offer_options_platform.h",
  ## TODO ## #${BLINK_PLATFORM_DIR}peerconnection/rtc_session_description_request.h",
  ## TODO ## #${BLINK_PLATFORM_DIR}peerconnection/rtc_stats_request.h",
  ## TODO ## #${BLINK_PLATFORM_DIR}peerconnection/rtc_stats_response_base.h",
  ## TODO ## #${BLINK_PLATFORM_DIR}peerconnection/rtc_void_request.h",
  ${BLINK_PLATFORM_DIR}prerender.cc
  #${BLINK_PLATFORM_DIR}prerender.h",
  #${BLINK_PLATFORM_DIR}prerender_client.h",
  ## TODO ## ${BLINK_PLATFORM_DIR}probe/platform_probes.cc
  ## TODO ## #${BLINK_PLATFORM_DIR}probe/platform_probes.h",
  ## TODO ## ${BLINK_PLATFORM_DIR}probe/platform_trace_events_agent.cc
  ## TODO ## #${BLINK_PLATFORM_DIR}probe/platform_trace_events_agent.h",
  #${BLINK_PLATFORM_DIR}resolution_units.h",
  ${BLINK_PLATFORM_DIR}shared_buffer.cc
  #${BLINK_PLATFORM_DIR}shared_buffer.h",
  ## TODO ## ${BLINK_PLATFORM_DIR}speech/platform_speech_synthesis_utterance.cc
  ## TODO ## #${BLINK_PLATFORM_DIR}speech/platform_speech_synthesis_utterance.h",
  ## TODO ## ${BLINK_PLATFORM_DIR}speech/platform_speech_synthesis_voice.cc
  ## TODO ## #${BLINK_PLATFORM_DIR}speech/platform_speech_synthesis_voice.h",
  ## TODO ## ${BLINK_PLATFORM_DIR}speech/platform_speech_synthesizer.cc
  ## TODO ## #${BLINK_PLATFORM_DIR}speech/platform_speech_synthesizer.h",
  ${BLINK_PLATFORM_DIR}supplementable.cc
  #${BLINK_PLATFORM_DIR}supplementable.h",
  #${BLINK_PLATFORM_DIR}text/bidi_character_run.h",
  ${BLINK_PLATFORM_DIR}text/bidi_context.cc
  #${BLINK_PLATFORM_DIR}text/bidi_context.h",
  #${BLINK_PLATFORM_DIR}text/bidi_resolver.h",
  #${BLINK_PLATFORM_DIR}text/bidi_run_list.h",
  ${BLINK_PLATFORM_DIR}text/bidi_text_run.cc
  #${BLINK_PLATFORM_DIR}text/bidi_text_run.h",
  ${BLINK_PLATFORM_DIR}text/capitalize.cc
  #${BLINK_PLATFORM_DIR}text/capitalize.h",
  ${BLINK_PLATFORM_DIR}text/character.cc
  #${BLINK_PLATFORM_DIR}text/character.h",
  ${BLINK_PLATFORM_DIR}text/character_emoji.cc
  #${BLINK_PLATFORM_DIR}text/character_property.h",
  #${BLINK_PLATFORM_DIR}text/character_property_data.h",
  ${BLINK_PLATFORM_DIR}text/date_time_format.cc
  #${BLINK_PLATFORM_DIR}text/date_time_format.h",
  #${BLINK_PLATFORM_DIR}text/decode_escape_sequences.h",
  ${BLINK_PLATFORM_DIR}text/hyphenation.cc
  #${BLINK_PLATFORM_DIR}text/hyphenation.h",
  ${BLINK_PLATFORM_DIR}text/icu_error.cc
  #${BLINK_PLATFORM_DIR}text/icu_error.h",
  ${BLINK_PLATFORM_DIR}text/layout_locale.cc
  #${BLINK_PLATFORM_DIR}text/layout_locale.h",
  ${BLINK_PLATFORM_DIR}text/linux/hyphenation_linux.cc
  ${BLINK_PLATFORM_DIR}text/locale_icu.cc
  #${BLINK_PLATFORM_DIR}text/locale_icu.h",
  #${BLINK_PLATFORM_DIR}text/locale_mac.h",
  # TODO #${BLINK_PLATFORM_DIR}text/locale_mac.mm",
  ${BLINK_PLATFORM_DIR}text/locale_to_script_mapping.cc
  #${BLINK_PLATFORM_DIR}text/locale_to_script_mapping.h",
  ${BLINK_PLATFORM_DIR}text/locale_win.cc
  #${BLINK_PLATFORM_DIR}text/locale_win.h",
  ${BLINK_PLATFORM_DIR}text/mac/hyphenation_mac.cc
  ${BLINK_PLATFORM_DIR}text/platform_locale.cc
  #${BLINK_PLATFORM_DIR}text/platform_locale.h",
  ${BLINK_PLATFORM_DIR}text/segmented_string.cc
  #${BLINK_PLATFORM_DIR}text/segmented_string.h",
  #${BLINK_PLATFORM_DIR}text/suffix_tree.h",
  ${BLINK_PLATFORM_DIR}text/text_boundaries.cc
  #${BLINK_PLATFORM_DIR}text/text_boundaries.h",
  ${BLINK_PLATFORM_DIR}text/text_break_iterator.cc
  #${BLINK_PLATFORM_DIR}text/text_break_iterator.h",
  ${BLINK_PLATFORM_DIR}text/text_break_iterator_icu.cc
  ${BLINK_PLATFORM_DIR}text/text_break_iterator_internal_icu.cc
  #${BLINK_PLATFORM_DIR}text/text_break_iterator_internal_icu.h",
  ${BLINK_PLATFORM_DIR}text/text_direction.cc
  #${BLINK_PLATFORM_DIR}text/text_direction.h",
  ${BLINK_PLATFORM_DIR}text/text_encoding_detector.cc
  #${BLINK_PLATFORM_DIR}text/text_encoding_detector.h",
  #${BLINK_PLATFORM_DIR}text/text_justify.h",
  ${BLINK_PLATFORM_DIR}text/text_run.cc
  #${BLINK_PLATFORM_DIR}text/text_run.h",
  #${BLINK_PLATFORM_DIR}text/text_run_iterator.h",
  #${BLINK_PLATFORM_DIR}text/truncation.h",
  #${BLINK_PLATFORM_DIR}text/unicode_bidi.h",
  ${BLINK_PLATFORM_DIR}text/unicode_range.cc
  #${BLINK_PLATFORM_DIR}text/unicode_range.h",
  ${BLINK_PLATFORM_DIR}text/unicode_utilities.cc
  #${BLINK_PLATFORM_DIR}text/unicode_utilities.h",
  ${BLINK_PLATFORM_DIR}text/web_entities.cc
  #${BLINK_PLATFORM_DIR}text/web_entities.h",
  ${BLINK_PLATFORM_DIR}text/win/hyphenation_win.cc
  #${BLINK_PLATFORM_DIR}text/writing_mode.h",
  #${BLINK_PLATFORM_DIR}text/writing_mode_utils.h",
  ${BLINK_PLATFORM_DIR}timer.cc
  #${BLINK_PLATFORM_DIR}timer.h",
  ${BLINK_PLATFORM_DIR}transforms/affine_transform.cc
  #${BLINK_PLATFORM_DIR}transforms/affine_transform.h",
  #${BLINK_PLATFORM_DIR}transforms/identity_transform_operation.h",
  ${BLINK_PLATFORM_DIR}transforms/interpolated_transform_operation.cc
  #${BLINK_PLATFORM_DIR}transforms/interpolated_transform_operation.h",
  ${BLINK_PLATFORM_DIR}transforms/matrix_3d_transform_operation.cc
  #${BLINK_PLATFORM_DIR}transforms/matrix_3d_transform_operation.h",
  ${BLINK_PLATFORM_DIR}transforms/matrix_transform_operation.cc
  #${BLINK_PLATFORM_DIR}transforms/matrix_transform_operation.h",
  ${BLINK_PLATFORM_DIR}transforms/perspective_transform_operation.cc
  #${BLINK_PLATFORM_DIR}transforms/perspective_transform_operation.h",
  ${BLINK_PLATFORM_DIR}transforms/rotate_transform_operation.cc
  #${BLINK_PLATFORM_DIR}transforms/rotate_transform_operation.h",
  ${BLINK_PLATFORM_DIR}transforms/rotation.cc
  #${BLINK_PLATFORM_DIR}transforms/rotation.h",
  ${BLINK_PLATFORM_DIR}transforms/scale_transform_operation.cc
  #${BLINK_PLATFORM_DIR}transforms/scale_transform_operation.h",
  ${BLINK_PLATFORM_DIR}transforms/skew_transform_operation.cc
  #${BLINK_PLATFORM_DIR}transforms/skew_transform_operation.h",
  ${BLINK_PLATFORM_DIR}transforms/transform_operations.cc
  #${BLINK_PLATFORM_DIR}transforms/transform_operations.h",
  ${BLINK_PLATFORM_DIR}transforms/transformation_matrix.cc
  #${BLINK_PLATFORM_DIR}transforms/transformation_matrix.h",
  ${BLINK_PLATFORM_DIR}transforms/translate_transform_operation.cc
  #${BLINK_PLATFORM_DIR}transforms/translate_transform_operation.h",
  ${BLINK_PLATFORM_DIR}uuid.cc
  #${BLINK_PLATFORM_DIR}uuid.h",
  ${BLINK_PLATFORM_DIR}web_gesture_event.cc
  ${BLINK_PLATFORM_DIR}web_icon_sizes_parser.cc
  ${BLINK_PLATFORM_DIR}web_mouse_event.cc
  ${BLINK_PLATFORM_DIR}web_mouse_wheel_event.cc
  ${BLINK_PLATFORM_DIR}web_pointer_event.cc
  ${BLINK_PLATFORM_DIR}web_test_support.cc
  #${BLINK_PLATFORM_DIR}web_test_support.h",
  ${BLINK_PLATFORM_DIR}web_text_input_info.cc
  ${BLINK_PLATFORM_DIR}web_thread_supporting_gc.cc
  #${BLINK_PLATFORM_DIR}web_thread_supporting_gc.h",
  ${BLINK_PLATFORM_DIR}web_thread_type.cc
  ${BLINK_PLATFORM_DIR}web_touch_event.cc
  ${BLINK_PLATFORM_DIR}weborigin/known_ports.cc
  #${BLINK_PLATFORM_DIR}weborigin/known_ports.h",
  ${BLINK_PLATFORM_DIR}weborigin/kurl.cc
  #${BLINK_PLATFORM_DIR}weborigin/kurl.h",
  #${BLINK_PLATFORM_DIR}weborigin/kurl_hash.h",
  ${BLINK_PLATFORM_DIR}weborigin/origin_access_entry.cc
  #${BLINK_PLATFORM_DIR}weborigin/origin_access_entry.h",
  #${BLINK_PLATFORM_DIR}weborigin/referrer.h",
  ${BLINK_PLATFORM_DIR}weborigin/scheme_registry.cc
  #${BLINK_PLATFORM_DIR}weborigin/scheme_registry.h",
  ${BLINK_PLATFORM_DIR}weborigin/security_origin.cc
  #${BLINK_PLATFORM_DIR}weborigin/security_origin.h",
  #${BLINK_PLATFORM_DIR}weborigin/security_origin_hash.h",
  ${BLINK_PLATFORM_DIR}weborigin/security_policy.cc
  #${BLINK_PLATFORM_DIR}weborigin/security_policy.h",
  #${BLINK_PLATFORM_DIR}weborigin/security_violation_reporting_policy.h",
  #${BLINK_PLATFORM_DIR}weborigin/url_security_origin_map.h",
  #
  ${BLINK_PLATFORM_DIR}weborigin/known_ports.cc
  #${BLINK_PLATFORM_DIR}weborigin/known_ports.h
  ${BLINK_PLATFORM_DIR}weborigin/kurl.cc
  #${BLINK_PLATFORM_DIR}weborigin/kurl.h
  #${BLINK_PLATFORM_DIR}weborigin/kurl_hash.h
  ${BLINK_PLATFORM_DIR}weborigin/origin_access_entry.cc
  #${BLINK_PLATFORM_DIR}weborigin/origin_access_entry.h
  #${BLINK_PLATFORM_DIR}weborigin/referrer.h
  ${BLINK_PLATFORM_DIR}weborigin/scheme_registry.cc
  #${BLINK_PLATFORM_DIR}weborigin/scheme_registry.h
  ${BLINK_PLATFORM_DIR}weborigin/security_origin.cc
  #${BLINK_PLATFORM_DIR}weborigin/security_origin.h
  #${BLINK_PLATFORM_DIR}weborigin/security_origin_hash.h
  ${BLINK_PLATFORM_DIR}weborigin/security_policy.cc
  #${BLINK_PLATFORM_DIR}weborigin/security_policy.h
  #${BLINK_PLATFORM_DIR}weborigin/security_violation_reporting_policy.h
  #${BLINK_PLATFORM_DIR}weborigin/url_security_origin_map.h
  #
  #${BLINK_PLATFORM_DIR}windows_keyboard_codes.h",
  #
  #   "geometry/cg/float_point_cg.cc",
  #   "geometry/cg/float_rect_cg.cc",
  #   "geometry/cg/float_size_cg.cc",
  #   "geometry/cg/int_point_cg.cc",
  #   "geometry/cg/int_rect_cg.cc",
  #   "geometry/cg/int_size_cg.cc",
)

add_library(BLINK_PLATFORM STATIC
  ${BLINK_PLATFORM_SOURCES}
)

target_link_libraries(BLINK_PLATFORM PUBLIC
  GURL
  GNET
  GCRYPTO
  GFX_GEOMETRY
  G_GFX
  # mojo
  # services/service_manager
  # services/ws/public/cpp/gpu
  #${BASE_LIBRARIES}
  base
  BLINK_WTF
  SKIA
  skcms
  ced
  # emoji-segmenter
  # webrtc
  # zlib
  # icu
  CC
  G_GPU
)

set_property(TARGET BLINK_PLATFORM PROPERTY CXX_STANDARD 17)

target_include_directories(BLINK_PLATFORM PRIVATE
  ${CMAKE_CURRENT_SOURCE_DIR} # requires "third_party/blink/public/platform/web_common.h"
  ${BLINK_PLATFORM_DIR}
  #${BASE_DIR}
)

target_compile_definitions(BLINK_PLATFORM PRIVATE
  BLINK_PLATFORM_IMPLEMENTATION=1
  BLINK_IMPLEMENTATION=1
  INSIDE_BLINK=1
  #USE_FUNCTION_CITYHASH
  #USING_V8_SHARED
)
