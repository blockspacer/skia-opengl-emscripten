﻿cmake_minimum_required(VERSION 2.8)

# https://github.com/blockspacer/cobalt-clone-28052019/blob/master/src/starboard/stub/stub_sources.gypi
list(APPEND starboard_stub_SOURCES
  ${COBALT_PORT_DIR}/starboard/shared/starboard/application.cc
  ${COBALT_PORT_DIR}/starboard/shared/starboard/command_line.cc
  ${COBALT_PORT_DIR}/starboard/shared/starboard/command_line.h
  ${COBALT_PORT_DIR}/starboard/shared/starboard/event_cancel.cc
  ${COBALT_PORT_DIR}/starboard/shared/starboard/event_schedule.cc
  ${COBALT_PORT_DIR}/starboard/shared/starboard/file_mode_string_to_flags.cc
  ${COBALT_PORT_DIR}/starboard/shared/starboard/log_message.cc
  ${COBALT_PORT_DIR}/starboard/shared/starboard/player/filter/stub_player_components_impl.cc
  ${COBALT_PORT_DIR}/starboard/shared/starboard/queue_application.cc
  #
  ${COBALT_PORT_DIR}/starboard/shared/stub/accessibility_get_caption_settings.cc
  ${COBALT_PORT_DIR}/starboard/shared/stub/accessibility_get_display_settings.cc
  ${COBALT_PORT_DIR}/starboard/shared/stub/accessibility_get_text_to_speech_settings.cc
  ${COBALT_PORT_DIR}/starboard/shared/stub/accessibility_set_captions_enabled.cc
  ${COBALT_PORT_DIR}/starboard/shared/stub/atomic_public.h
  ${COBALT_PORT_DIR}/starboard/shared/stub/audio_sink_create.cc
  ${COBALT_PORT_DIR}/starboard/shared/stub/audio_sink_destroy.cc
  ${COBALT_PORT_DIR}/starboard/shared/stub/audio_sink_get_max_channels.cc
  ${COBALT_PORT_DIR}/starboard/shared/stub/audio_sink_get_nearest_supported_sample_frequency.cc
  ${COBALT_PORT_DIR}/starboard/shared/stub/audio_sink_is_audio_frame_storage_type_supported.cc
  ${COBALT_PORT_DIR}/starboard/shared/stub/audio_sink_is_audio_sample_type_supported.cc
  ${COBALT_PORT_DIR}/starboard/shared/stub/audio_sink_is_valid.cc
  ${COBALT_PORT_DIR}/starboard/shared/stub/byte_swap.cc
  ${COBALT_PORT_DIR}/starboard/shared/stub/character_is_alphanumeric.cc
  ${COBALT_PORT_DIR}/starboard/shared/stub/character_is_digit.cc
  ${COBALT_PORT_DIR}/starboard/shared/stub/character_is_hex_digit.cc
  ${COBALT_PORT_DIR}/starboard/shared/stub/character_is_space.cc
  ${COBALT_PORT_DIR}/starboard/shared/stub/character_is_upper.cc
  ${COBALT_PORT_DIR}/starboard/shared/stub/character_to_lower.cc
  ${COBALT_PORT_DIR}/starboard/shared/stub/character_to_upper.cc
  ${COBALT_PORT_DIR}/starboard/shared/stub/condition_variable_broadcast.cc
  ${COBALT_PORT_DIR}/starboard/shared/stub/condition_variable_create.cc
  ${COBALT_PORT_DIR}/starboard/shared/stub/condition_variable_destroy.cc
  ${COBALT_PORT_DIR}/starboard/shared/stub/condition_variable_signal.cc
  ${COBALT_PORT_DIR}/starboard/shared/stub/condition_variable_wait.cc
  ${COBALT_PORT_DIR}/starboard/shared/stub/condition_variable_wait_timed.cc
  ${COBALT_PORT_DIR}/starboard/shared/stub/cryptography_create_transformer.cc
  ${COBALT_PORT_DIR}/starboard/shared/stub/cryptography_destroy_transformer.cc
  ${COBALT_PORT_DIR}/starboard/shared/stub/cryptography_get_tag.cc
  ${COBALT_PORT_DIR}/starboard/shared/stub/cryptography_set_authenticated_data.cc
  ${COBALT_PORT_DIR}/starboard/shared/stub/cryptography_set_initialization_vector.cc
  ${COBALT_PORT_DIR}/starboard/shared/stub/cryptography_transform.cc
  ${COBALT_PORT_DIR}/starboard/shared/stub/directory_can_open.cc
  ${COBALT_PORT_DIR}/starboard/shared/stub/directory_close.cc
  ${COBALT_PORT_DIR}/starboard/shared/stub/directory_create.cc
  ${COBALT_PORT_DIR}/starboard/shared/stub/directory_get_next.cc
  ${COBALT_PORT_DIR}/starboard/shared/stub/directory_open.cc
  ${COBALT_PORT_DIR}/starboard/shared/stub/double_absolute.cc
  ${COBALT_PORT_DIR}/starboard/shared/stub/double_exponent.cc
  ${COBALT_PORT_DIR}/starboard/shared/stub/double_floor.cc
  ${COBALT_PORT_DIR}/starboard/shared/stub/double_is_finite.cc
  ${COBALT_PORT_DIR}/starboard/shared/stub/double_is_nan.cc
  ${COBALT_PORT_DIR}/starboard/shared/stub/drm_close_session.cc
  ${COBALT_PORT_DIR}/starboard/shared/stub/drm_create_system.cc
  ${COBALT_PORT_DIR}/starboard/shared/stub/drm_destroy_system.cc
  ${COBALT_PORT_DIR}/starboard/shared/stub/drm_generate_session_update_request.cc
  ${COBALT_PORT_DIR}/starboard/shared/stub/drm_is_server_certificate_updatable.cc
  #${COBALT_PORT_DIR}/starboard/shared/stub/drm_system_internal.h
  # < DOES NOT EXIST, USE >
  ${COBALT_PORT_DIR}/starboard/shared/starboard/drm/drm_system_internal.h
  ${COBALT_PORT_DIR}/starboard/shared/stub/drm_update_server_certificate.cc
  ${COBALT_PORT_DIR}/starboard/shared/stub/drm_update_session.cc
  ${COBALT_PORT_DIR}/starboard/shared/stub/file_can_open.cc
  ${COBALT_PORT_DIR}/starboard/shared/stub/file_close.cc
  ${COBALT_PORT_DIR}/starboard/shared/stub/file_delete.cc
  ${COBALT_PORT_DIR}/starboard/shared/stub/file_exists.cc
  ${COBALT_PORT_DIR}/starboard/shared/stub/file_flush.cc
  ${COBALT_PORT_DIR}/starboard/shared/stub/file_get_info.cc
  ${COBALT_PORT_DIR}/starboard/shared/stub/file_get_path_info.cc
  ${COBALT_PORT_DIR}/starboard/shared/stub/file_open.cc
  ${COBALT_PORT_DIR}/starboard/shared/stub/file_read.cc
  ${COBALT_PORT_DIR}/starboard/shared/stub/file_seek.cc
  ${COBALT_PORT_DIR}/starboard/shared/stub/file_truncate.cc
  ${COBALT_PORT_DIR}/starboard/shared/stub/file_write.cc
  ${COBALT_PORT_DIR}/starboard/shared/stub/log.cc
  ${COBALT_PORT_DIR}/starboard/shared/stub/log_flush.cc
  ${COBALT_PORT_DIR}/starboard/shared/stub/log_format.cc
  ${COBALT_PORT_DIR}/starboard/shared/stub/log_is_tty.cc
  ${COBALT_PORT_DIR}/starboard/shared/stub/log_raw.cc
  ${COBALT_PORT_DIR}/starboard/shared/stub/log_raw_dump_stack.cc
  ${COBALT_PORT_DIR}/starboard/shared/stub/log_raw_format.cc
  ${COBALT_PORT_DIR}/starboard/shared/stub/media_can_play_mime_and_key_system.cc
  ${COBALT_PORT_DIR}/starboard/shared/stub/media_get_audio_buffer_budget.cc
  ${COBALT_PORT_DIR}/starboard/shared/stub/media_get_audio_configuration.cc
  ${COBALT_PORT_DIR}/starboard/shared/stub/media_get_audio_output_count.cc
  ${COBALT_PORT_DIR}/starboard/shared/stub/media_get_buffer_alignment.cc
  ${COBALT_PORT_DIR}/starboard/shared/stub/media_get_buffer_allocation_unit.cc
  ${COBALT_PORT_DIR}/starboard/shared/stub/media_get_buffer_garbage_collection_duration_threshold.cc
  ${COBALT_PORT_DIR}/starboard/shared/stub/media_get_buffer_padding.cc
  ${COBALT_PORT_DIR}/starboard/shared/stub/media_get_buffer_storage_type.cc
  ${COBALT_PORT_DIR}/starboard/shared/stub/media_get_initial_buffer_capacity.cc
  ${COBALT_PORT_DIR}/starboard/shared/stub/media_get_max_buffer_capacity.cc
  ${COBALT_PORT_DIR}/starboard/shared/stub/media_get_progressive_buffer_budget.cc
  ${COBALT_PORT_DIR}/starboard/shared/stub/media_get_video_buffer_budget.cc
  ${COBALT_PORT_DIR}/starboard/shared/stub/media_is_audio_supported.cc
  ${COBALT_PORT_DIR}/starboard/shared/stub/media_is_buffer_pool_allocate_on_demand.cc
  ${COBALT_PORT_DIR}/starboard/shared/stub/media_is_buffer_using_memory_pool.cc
  ${COBALT_PORT_DIR}/starboard/shared/stub/media_is_output_protected.cc
  ${COBALT_PORT_DIR}/starboard/shared/stub/media_is_supported.cc
  ${COBALT_PORT_DIR}/starboard/shared/stub/media_is_transfer_characteristics_supported.cc
  ${COBALT_PORT_DIR}/starboard/shared/stub/media_is_video_supported.cc
  ${COBALT_PORT_DIR}/starboard/shared/stub/media_set_audio_write_duration.cc
  ${COBALT_PORT_DIR}/starboard/shared/stub/media_set_output_protection.cc
  ${COBALT_PORT_DIR}/starboard/shared/stub/memory_allocate_aligned_unchecked.cc
  ${COBALT_PORT_DIR}/starboard/shared/stub/memory_allocate_unchecked.cc
  ${COBALT_PORT_DIR}/starboard/shared/stub/memory_compare.cc
  ${COBALT_PORT_DIR}/starboard/shared/stub/memory_copy.cc
  ${COBALT_PORT_DIR}/starboard/shared/stub/memory_find_byte.cc
  ${COBALT_PORT_DIR}/starboard/shared/stub/memory_flush.cc
  ${COBALT_PORT_DIR}/starboard/shared/stub/memory_free.cc
  ${COBALT_PORT_DIR}/starboard/shared/stub/memory_free_aligned.cc
  ${COBALT_PORT_DIR}/starboard/shared/stub/memory_get_stack_bounds.cc
  ${COBALT_PORT_DIR}/starboard/shared/stub/memory_map.cc
  ${COBALT_PORT_DIR}/starboard/shared/stub/memory_move.cc
  ${COBALT_PORT_DIR}/starboard/shared/stub/memory_protect.cc
  ${COBALT_PORT_DIR}/starboard/shared/stub/memory_reallocate_unchecked.cc
  ${COBALT_PORT_DIR}/starboard/shared/stub/memory_set.cc
  ${COBALT_PORT_DIR}/starboard/shared/stub/memory_unmap.cc
  ${COBALT_PORT_DIR}/starboard/shared/stub/microphone_close.cc
  ${COBALT_PORT_DIR}/starboard/shared/stub/microphone_create.cc
  ${COBALT_PORT_DIR}/starboard/shared/stub/microphone_destroy.cc
  ${COBALT_PORT_DIR}/starboard/shared/stub/microphone_get_available.cc
  ${COBALT_PORT_DIR}/starboard/shared/stub/microphone_is_sample_rate_supported.cc
  ${COBALT_PORT_DIR}/starboard/shared/stub/microphone_open.cc
  ${COBALT_PORT_DIR}/starboard/shared/stub/microphone_read.cc
  ${COBALT_PORT_DIR}/starboard/shared/stub/mutex_acquire.cc
  ${COBALT_PORT_DIR}/starboard/shared/stub/mutex_acquire_try.cc
  ${COBALT_PORT_DIR}/starboard/shared/stub/mutex_create.cc
  ${COBALT_PORT_DIR}/starboard/shared/stub/mutex_destroy.cc
  ${COBALT_PORT_DIR}/starboard/shared/stub/mutex_release.cc
  ${COBALT_PORT_DIR}/starboard/shared/stub/once.cc
  ${COBALT_PORT_DIR}/starboard/shared/stub/player_create.cc
  ${COBALT_PORT_DIR}/starboard/shared/stub/player_destroy.cc
  ${COBALT_PORT_DIR}/starboard/shared/stub/player_get_current_frame.cc
  ${COBALT_PORT_DIR}/starboard/shared/stub/player_get_info.cc
  ${COBALT_PORT_DIR}/starboard/shared/stub/player_get_info2.cc
  ${COBALT_PORT_DIR}/starboard/shared/stub/player_get_maximum_number_of_samples_per_write.cc
  ${COBALT_PORT_DIR}/starboard/shared/stub/player_output_mode_supported.cc
  ${COBALT_PORT_DIR}/starboard/shared/stub/player_seek.cc
  ${COBALT_PORT_DIR}/starboard/shared/stub/player_seek2.cc
  ${COBALT_PORT_DIR}/starboard/shared/stub/player_set_bounds.cc
  ${COBALT_PORT_DIR}/starboard/shared/stub/player_set_playback_rate.cc
  ${COBALT_PORT_DIR}/starboard/shared/stub/player_set_volume.cc
  ${COBALT_PORT_DIR}/starboard/shared/stub/player_write_end_of_stream.cc
  ${COBALT_PORT_DIR}/starboard/shared/stub/player_write_sample.cc
  ${COBALT_PORT_DIR}/starboard/shared/stub/player_write_sample2.cc
  ${COBALT_PORT_DIR}/starboard/shared/stub/socket_accept.cc
  ${COBALT_PORT_DIR}/starboard/shared/stub/socket_bind.cc
  ${COBALT_PORT_DIR}/starboard/shared/stub/socket_clear_last_error.cc
  ${COBALT_PORT_DIR}/starboard/shared/stub/socket_connect.cc
  ${COBALT_PORT_DIR}/starboard/shared/stub/socket_create.cc
  ${COBALT_PORT_DIR}/starboard/shared/stub/socket_destroy.cc
  ${COBALT_PORT_DIR}/starboard/shared/stub/socket_free_resolution.cc
  ${COBALT_PORT_DIR}/starboard/shared/stub/socket_get_interface_address.cc
  ${COBALT_PORT_DIR}/starboard/shared/stub/socket_get_last_error.cc
  ${COBALT_PORT_DIR}/starboard/shared/stub/socket_get_local_address.cc
  ${COBALT_PORT_DIR}/starboard/shared/stub/socket_is_connected.cc
  ${COBALT_PORT_DIR}/starboard/shared/stub/socket_is_connected_and_idle.cc
  ${COBALT_PORT_DIR}/starboard/shared/stub/socket_join_multicast_group.cc
  ${COBALT_PORT_DIR}/starboard/shared/stub/socket_listen.cc
  ${COBALT_PORT_DIR}/starboard/shared/stub/socket_receive_from.cc
  ${COBALT_PORT_DIR}/starboard/shared/stub/socket_resolve.cc
  ${COBALT_PORT_DIR}/starboard/shared/stub/socket_send_to.cc
  ${COBALT_PORT_DIR}/starboard/shared/stub/socket_set_broadcast.cc
  ${COBALT_PORT_DIR}/starboard/shared/stub/socket_set_receive_buffer_size.cc
  ${COBALT_PORT_DIR}/starboard/shared/stub/socket_set_reuse_address.cc
  ${COBALT_PORT_DIR}/starboard/shared/stub/socket_set_send_buffer_size.cc
  ${COBALT_PORT_DIR}/starboard/shared/stub/socket_set_tcp_keep_alive.cc
  ${COBALT_PORT_DIR}/starboard/shared/stub/socket_set_tcp_no_delay.cc
  ${COBALT_PORT_DIR}/starboard/shared/stub/socket_set_tcp_window_scaling.cc
  ${COBALT_PORT_DIR}/starboard/shared/stub/socket_waiter_add.cc
  ${COBALT_PORT_DIR}/starboard/shared/stub/socket_waiter_create.cc
  ${COBALT_PORT_DIR}/starboard/shared/stub/socket_waiter_destroy.cc
  ${COBALT_PORT_DIR}/starboard/shared/stub/socket_waiter_remove.cc
  ${COBALT_PORT_DIR}/starboard/shared/stub/socket_waiter_wait.cc
  ${COBALT_PORT_DIR}/starboard/shared/stub/socket_waiter_wait_timed.cc
  ${COBALT_PORT_DIR}/starboard/shared/stub/socket_waiter_wake_up.cc
  ## TODO ## ${COBALT_PORT_DIR}/starboard/shared/stub/speech_recognizer_cancel.cc
  ## TODO ## ${COBALT_PORT_DIR}/starboard/shared/stub/speech_recognizer_create.cc
  ## TODO ## ${COBALT_PORT_DIR}/starboard/shared/stub/speech_recognizer_destroy.cc
  ## TODO ## ${COBALT_PORT_DIR}/starboard/shared/stub/speech_recognizer_start.cc
  ## TODO ## ${COBALT_PORT_DIR}/starboard/shared/stub/speech_recognizer_stop.cc
  ## TODO ## ${COBALT_PORT_DIR}/starboard/shared/stub/speech_synthesis_cancel.cc
  ## TODO ## ${COBALT_PORT_DIR}/starboard/shared/stub/speech_synthesis_speak.cc
  ${COBALT_PORT_DIR}/starboard/shared/stub/storage_close_record.cc
  ${COBALT_PORT_DIR}/starboard/shared/stub/storage_delete_record.cc
  ${COBALT_PORT_DIR}/starboard/shared/stub/storage_get_record_size.cc
  ${COBALT_PORT_DIR}/starboard/shared/stub/storage_open_record.cc
  ${COBALT_PORT_DIR}/starboard/shared/stub/storage_read_record.cc
  ${COBALT_PORT_DIR}/starboard/shared/stub/storage_write_record.cc
  ${COBALT_PORT_DIR}/starboard/shared/stub/string_compare.cc
  ${COBALT_PORT_DIR}/starboard/shared/stub/string_compare_all.cc
  ${COBALT_PORT_DIR}/starboard/shared/stub/string_compare_no_case.cc
  ${COBALT_PORT_DIR}/starboard/shared/stub/string_compare_no_case_n.cc
  ${COBALT_PORT_DIR}/starboard/shared/stub/string_compare_wide.cc
  ${COBALT_PORT_DIR}/starboard/shared/stub/string_concat.cc
  ${COBALT_PORT_DIR}/starboard/shared/stub/string_concat_wide.cc
  ${COBALT_PORT_DIR}/starboard/shared/stub/string_copy.cc
  ${COBALT_PORT_DIR}/starboard/shared/stub/string_copy_wide.cc
  ${COBALT_PORT_DIR}/starboard/shared/stub/string_duplicate.cc
  ${COBALT_PORT_DIR}/starboard/shared/stub/string_find_character.cc
  ${COBALT_PORT_DIR}/starboard/shared/stub/string_find_last_character.cc
  ${COBALT_PORT_DIR}/starboard/shared/stub/string_find_string.cc
  ${COBALT_PORT_DIR}/starboard/shared/stub/string_format.cc
  ${COBALT_PORT_DIR}/starboard/shared/stub/string_format_wide.cc
  ${COBALT_PORT_DIR}/starboard/shared/stub/string_get_length.cc
  ${COBALT_PORT_DIR}/starboard/shared/stub/string_get_length_wide.cc
  ${COBALT_PORT_DIR}/starboard/shared/stub/string_parse_double.cc
  ${COBALT_PORT_DIR}/starboard/shared/stub/string_parse_signed_integer.cc
  ${COBALT_PORT_DIR}/starboard/shared/stub/string_parse_uint64.cc
  ${COBALT_PORT_DIR}/starboard/shared/stub/string_parse_unsigned_integer.cc
  ${COBALT_PORT_DIR}/starboard/shared/stub/string_scan.cc
  ${COBALT_PORT_DIR}/starboard/shared/stub/system_binary_search.cc
  ${COBALT_PORT_DIR}/starboard/shared/stub/system_break_into_debugger.cc
  ${COBALT_PORT_DIR}/starboard/shared/stub/system_clear_last_error.cc
  ${COBALT_PORT_DIR}/starboard/shared/stub/system_get_connection_type.cc
  ${COBALT_PORT_DIR}/starboard/shared/stub/system_get_device_type.cc
  ${COBALT_PORT_DIR}/starboard/shared/stub/system_get_error_string.cc
  ${COBALT_PORT_DIR}/starboard/shared/stub/system_get_extensions.cc
  ${COBALT_PORT_DIR}/starboard/shared/stub/system_get_last_error.cc
  ${COBALT_PORT_DIR}/starboard/shared/stub/system_get_locale_id.cc
  ${COBALT_PORT_DIR}/starboard/shared/stub/system_get_number_of_processors.cc
  ${COBALT_PORT_DIR}/starboard/shared/stub/system_get_path.cc
  ${COBALT_PORT_DIR}/starboard/shared/stub/system_get_property.cc
  ${COBALT_PORT_DIR}/starboard/shared/stub/system_get_random_data.cc
  ${COBALT_PORT_DIR}/starboard/shared/stub/system_get_random_uint64.cc
  ${COBALT_PORT_DIR}/starboard/shared/stub/system_get_stack.cc
  ${COBALT_PORT_DIR}/starboard/shared/stub/system_get_total_cpu_memory.cc
  ${COBALT_PORT_DIR}/starboard/shared/stub/system_get_total_gpu_memory.cc
  ${COBALT_PORT_DIR}/starboard/shared/stub/system_get_used_cpu_memory.cc
  ${COBALT_PORT_DIR}/starboard/shared/stub/system_get_used_gpu_memory.cc
  ${COBALT_PORT_DIR}/starboard/shared/stub/system_has_capability.cc
  ${COBALT_PORT_DIR}/starboard/shared/stub/system_hide_splash_screen.cc
  ${COBALT_PORT_DIR}/starboard/shared/stub/system_is_debugger_attached.cc
  ${COBALT_PORT_DIR}/starboard/shared/stub/system_raise_platform_error.cc
  ${COBALT_PORT_DIR}/starboard/shared/stub/system_request_pause.cc
  ${COBALT_PORT_DIR}/starboard/shared/stub/system_request_stop.cc
  ${COBALT_PORT_DIR}/starboard/shared/stub/system_request_suspend.cc
  ${COBALT_PORT_DIR}/starboard/shared/stub/system_request_unpause.cc
  ${COBALT_PORT_DIR}/starboard/shared/stub/system_sort.cc
  ${COBALT_PORT_DIR}/starboard/shared/stub/system_supports_resume.cc
  ${COBALT_PORT_DIR}/starboard/shared/stub/system_symbolize.cc
  ${COBALT_PORT_DIR}/starboard/shared/stub/thread_context_get_pointer.cc
  ${COBALT_PORT_DIR}/starboard/shared/stub/thread_create.cc
  ${COBALT_PORT_DIR}/starboard/shared/stub/thread_create_local_key.cc
  ${COBALT_PORT_DIR}/starboard/shared/stub/thread_destroy_local_key.cc
  ${COBALT_PORT_DIR}/starboard/shared/stub/thread_detach.cc
  ${COBALT_PORT_DIR}/starboard/shared/stub/thread_get_current.cc
  ${COBALT_PORT_DIR}/starboard/shared/stub/thread_get_id.cc
  ${COBALT_PORT_DIR}/starboard/shared/stub/thread_get_local_value.cc
  ${COBALT_PORT_DIR}/starboard/shared/stub/thread_get_name.cc
  ${COBALT_PORT_DIR}/starboard/shared/stub/thread_is_equal.cc
  ${COBALT_PORT_DIR}/starboard/shared/stub/thread_join.cc
  ${COBALT_PORT_DIR}/starboard/shared/stub/thread_sampler_create.cc
  ${COBALT_PORT_DIR}/starboard/shared/stub/thread_sampler_destroy.cc
  ${COBALT_PORT_DIR}/starboard/shared/stub/thread_sampler_freeze.cc
  ${COBALT_PORT_DIR}/starboard/shared/stub/thread_sampler_is_supported.cc
  ${COBALT_PORT_DIR}/starboard/shared/stub/thread_sampler_thaw.cc
  ${COBALT_PORT_DIR}/starboard/shared/stub/thread_set_local_value.cc
  ${COBALT_PORT_DIR}/starboard/shared/stub/thread_set_name.cc
  ${COBALT_PORT_DIR}/starboard/shared/stub/thread_sleep.cc
  ${COBALT_PORT_DIR}/starboard/shared/stub/thread_types_public.h
  ${COBALT_PORT_DIR}/starboard/shared/stub/thread_yield.cc
  ${COBALT_PORT_DIR}/starboard/shared/stub/time_get_monotonic_now.cc
  ${COBALT_PORT_DIR}/starboard/shared/stub/time_get_monotonic_thread_now.cc
  ${COBALT_PORT_DIR}/starboard/shared/stub/time_get_now.cc
  ${COBALT_PORT_DIR}/starboard/shared/stub/time_zone_get_current.cc
  ${COBALT_PORT_DIR}/starboard/shared/stub/time_zone_get_dst_name.cc
  ${COBALT_PORT_DIR}/starboard/shared/stub/time_zone_get_name.cc
  ${COBALT_PORT_DIR}/starboard/shared/stub/ui_nav_get_interface.cc
  ${COBALT_PORT_DIR}/starboard/shared/stub/user_get_current.cc
  ${COBALT_PORT_DIR}/starboard/shared/stub/user_get_property.cc
  ${COBALT_PORT_DIR}/starboard/shared/stub/user_get_signed_in.cc
  ${COBALT_PORT_DIR}/starboard/shared/stub/window_create.cc
  ${COBALT_PORT_DIR}/starboard/shared/stub/window_destroy.cc
  ${COBALT_PORT_DIR}/starboard/shared/stub/window_get_diagonal_size_in_inches.cc
  ${COBALT_PORT_DIR}/starboard/shared/stub/window_get_platform_handle.cc
  ${COBALT_PORT_DIR}/starboard/shared/stub/window_get_size.cc
  ${COBALT_PORT_DIR}/starboard/shared/stub/window_on_screen_keyboard_suggestions_supported.cc
  ${COBALT_PORT_DIR}/starboard/shared/stub/window_set_default_options.cc
  ${COBALT_PORT_DIR}/starboard/shared/stub/window_update_on_screen_keyboard_suggestions.cc
)

add_library(starboard_stub STATIC
  ${starboard_stub_SOURCES}
)

target_link_libraries(starboard_stub PRIVATE
  #base # TODO
  #cobalt_base
  starboard_core # just headers
  ${modp_b64_LIB}
  #GFX_GEOMETRY
  #${BASE_LIBRARIES}
  #base
  #SKIA
  #dynamic_annotations
  #UI_GFX
  ##BLINK_RENDERER_CORE
  #BLINK_PUBLIC_COMMON
  #BLINK_PUBLIC_MOJOM
  ##BLINK_RENDERER_NETWORK
  #BLINK_RENDERER_PLATFORM
  #GURL
  #GNET
  #GCRYPTO
  #GFX_GEOMETRY
  #UI_GFX
  ## mojo
  ## services/service_manager
  ## services/ws/public/cpp/gpu
  ##${BASE_LIBRARIES}
  #base
  ${GLIBXML_LIB}
  #SKIA
  ##skcms
  #ced
  ## emoji-segmenter
  ## webrtc
  ## zlib
  icu
  #ced
  glm
  #CC
  ##G_GPU
  #ANIMATION_CC
  #BASE_CC
  #PAINT_CC
  #SERVICES_NETWORK_PUBLIC_CPP
  #${WEBP_LIB} # requires libpng
  #${libjpeg_LIB}
  #${libjpeg_TURBO_LIB}
  #${libpng_LIB}
  #${iccjpeg_LIB}
  #MOJO
  ##
  ## khronos
  #${khronos_LIB}
  #LIB_V8_INTERFACE
  #COMPONENTS_SCHEDULING_METRICS
  #${HARFBUZZ_LIBRARIES}
  #GMEDIA
  #GZLIB_EXT
  #SERVICES_SERVICE_MANAGER_PUBLIC_CPP
  #GFX_CODEC
)

set_property(TARGET starboard_stub PROPERTY CXX_STANDARD 17)

target_include_directories(starboard_stub PRIVATE
  #${UI_PARENT_DIR}
  ${COBALT_CORE_DIR}
  ${COBALT_CORE_PARENT_DIR}
  ${COBALT_COMMON_INCLUDES}
  ${CHROMIUM_DIR} # to third_party/skia/include/core/SkWriteBuffer.h
)

target_compile_definitions(starboard_stub PRIVATE
  # starboard/linux/shared/BUILD.gn
  STARBOARD_IMPLEMENTATION=1
  #
  #BASE_IMPLEMENTATION=1
  #BASE_I18N_IMPLEMENTATION=1
  #
  ${COBALT_COMMON_DEFINES}
)

target_compile_definitions(starboard_stub PUBLIC
  ${STARBOARD_EXTRA_PUBLIC_FLAGS}
)
