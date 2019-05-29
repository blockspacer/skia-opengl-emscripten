cmake_minimum_required(VERSION 2.8)

add_subdirectory(${CMAKE_CURRENT_SOURCE_DIR}/third_party/glm)

# se https://github.com/blockspacer/cobalt-clone-28052019/blob/master/src/starboard/linux/shared/BUILD.gn
set(starboard_platform_SOURCES
  ${COBALT_PORT_DIR}/starboard/linux/shared/atomic_public.h
  ${COBALT_PORT_DIR}/starboard/linux/shared/configuration_public.h
  ## TODO ## ${COBALT_PORT_DIR}/starboard/linux/shared/decode_target_get_info.cc
  ## TODO ## ${COBALT_PORT_DIR}/starboard/linux/shared/decode_target_internal.cc
  ## TODO ## ${COBALT_PORT_DIR}/starboard/linux/shared/decode_target_internal.h
  ## TODO ## ${COBALT_PORT_DIR}/starboard/linux/shared/decode_target_release.cc
  ## TODO ## ${COBALT_PORT_DIR}/starboard/linux/shared/media_is_video_supported.cc
  ## TODO ## ${COBALT_PORT_DIR}/starboard/linux/shared/player_components_impl.cc
  ${COBALT_PORT_DIR}/starboard/linux/shared/system_get_connection_type.cc
  ${COBALT_PORT_DIR}/starboard/linux/shared/system_get_device_type.cc
  ## TODO ## ${COBALT_PORT_DIR}/starboard/linux/shared/system_get_path.cc
  ${COBALT_PORT_DIR}/starboard/linux/shared/system_has_capability.cc
  ## TODO ## ${COBALT_PORT_DIR}/starboard/shared/alsa/alsa_audio_sink_type.cc
  ## TODO ## ${COBALT_PORT_DIR}/starboard/shared/alsa/alsa_audio_sink_type.h
  ## TODO ## ${COBALT_PORT_DIR}/starboard/shared/alsa/alsa_util.cc
  ## TODO ## ${COBALT_PORT_DIR}/starboard/shared/alsa/alsa_util.h
  ## TODO ## ${COBALT_PORT_DIR}/starboard/shared/dlmalloc/memory_map.cc
  ## TODO ## ${COBALT_PORT_DIR}/starboard/shared/dlmalloc/memory_unmap.cc
  ## TODO ## ${COBALT_PORT_DIR}/starboard/shared/ffmpeg/ffmpeg_audio_decoder.cc
  ## TODO ## ${COBALT_PORT_DIR}/starboard/shared/ffmpeg/ffmpeg_audio_decoder.h
  ## TODO ## ${COBALT_PORT_DIR}/starboard/shared/ffmpeg/ffmpeg_common.cc
  ## TODO ## ${COBALT_PORT_DIR}/starboard/shared/ffmpeg/ffmpeg_common.h
  ## TODO ## ${COBALT_PORT_DIR}/starboard/shared/ffmpeg/ffmpeg_video_decoder.cc
  ## TODO ## ${COBALT_PORT_DIR}/starboard/shared/ffmpeg/ffmpeg_video_decoder.h
  ## TODO ## ${COBALT_PORT_DIR}/starboard/shared/gcc/atomic_gcc_public.h
  ${COBALT_PORT_DIR}/starboard/shared/iso/character_is_alphanumeric.cc
  ${COBALT_PORT_DIR}/starboard/shared/iso/character_is_digit.cc
  ${COBALT_PORT_DIR}/starboard/shared/iso/character_is_hex_digit.cc
  ${COBALT_PORT_DIR}/starboard/shared/iso/character_is_space.cc
  ${COBALT_PORT_DIR}/starboard/shared/iso/character_is_upper.cc
  ${COBALT_PORT_DIR}/starboard/shared/iso/character_to_lower.cc
  ${COBALT_PORT_DIR}/starboard/shared/iso/character_to_upper.cc
  ## TODO ## ${COBALT_PORT_DIR}/starboard/shared/iso/directory_close.cc
  ## TODO ## ${COBALT_PORT_DIR}/starboard/shared/iso/directory_get_next.cc
  ## TODO ## ${COBALT_PORT_DIR}/starboard/shared/iso/directory_open.cc
  ${COBALT_PORT_DIR}/starboard/shared/iso/double_absolute.cc
  ${COBALT_PORT_DIR}/starboard/shared/iso/double_exponent.cc
  ${COBALT_PORT_DIR}/starboard/shared/iso/double_floor.cc
  ${COBALT_PORT_DIR}/starboard/shared/iso/double_is_finite.cc
  ${COBALT_PORT_DIR}/starboard/shared/iso/double_is_nan.cc
  ${COBALT_PORT_DIR}/starboard/shared/iso/memory_compare.cc
  ${COBALT_PORT_DIR}/starboard/shared/iso/memory_copy.cc
  ${COBALT_PORT_DIR}/starboard/shared/iso/memory_find_byte.cc
  ${COBALT_PORT_DIR}/starboard/shared/iso/memory_move.cc
  ${COBALT_PORT_DIR}/starboard/shared/iso/memory_set.cc
  ${COBALT_PORT_DIR}/starboard/shared/iso/string_compare.cc
  ${COBALT_PORT_DIR}/starboard/shared/iso/string_compare_all.cc
  ${COBALT_PORT_DIR}/starboard/shared/iso/string_find_character.cc
  ${COBALT_PORT_DIR}/starboard/shared/iso/string_find_last_character.cc
  ${COBALT_PORT_DIR}/starboard/shared/iso/string_find_string.cc
  ${COBALT_PORT_DIR}/starboard/shared/iso/string_get_length.cc
  ${COBALT_PORT_DIR}/starboard/shared/iso/string_get_length_wide.cc
  ${COBALT_PORT_DIR}/starboard/shared/iso/string_parse_double.cc
  ${COBALT_PORT_DIR}/starboard/shared/iso/string_parse_signed_integer.cc
  ${COBALT_PORT_DIR}/starboard/shared/iso/string_parse_uint64.cc
  ${COBALT_PORT_DIR}/starboard/shared/iso/string_parse_unsigned_integer.cc
  ${COBALT_PORT_DIR}/starboard/shared/iso/string_scan.cc
  ${COBALT_PORT_DIR}/starboard/shared/iso/system_binary_search.cc
  ${COBALT_PORT_DIR}/starboard/shared/iso/system_sort.cc
  ## TODO ## ${COBALT_PORT_DIR}/starboard/shared/libaom/aom_video_decoder.cc
  ## TODO ## ${COBALT_PORT_DIR}/starboard/shared/libaom/aom_video_decoder.h
  ## TODO ## ${COBALT_PORT_DIR}/starboard/shared/libevent/socket_waiter_add.cc
  ## TODO ## ${COBALT_PORT_DIR}/starboard/shared/libevent/socket_waiter_create.cc
  ## TODO ## ${COBALT_PORT_DIR}/starboard/shared/libevent/socket_waiter_destroy.cc
  ## TODO ## ${COBALT_PORT_DIR}/starboard/shared/libevent/socket_waiter_internal.cc
  ## TODO ## ${COBALT_PORT_DIR}/starboard/shared/libevent/socket_waiter_remove.cc
  ## TODO ## ${COBALT_PORT_DIR}/starboard/shared/libevent/socket_waiter_wait.cc
  ## TODO ## ${COBALT_PORT_DIR}/starboard/shared/libevent/socket_waiter_wait_timed.cc
  ## TODO ## ${COBALT_PORT_DIR}/starboard/shared/libevent/socket_waiter_wake_up.cc
  ## TODO ## ${COBALT_PORT_DIR}/starboard/shared/libvpx/vpx_video_decoder.cc
  ## TODO ## ${COBALT_PORT_DIR}/starboard/shared/libvpx/vpx_video_decoder.h
  ## TODO ## ${COBALT_PORT_DIR}/starboard/shared/linux/audio_sink_type_dispatcher.cc
  ${COBALT_PORT_DIR}/starboard/shared/linux/byte_swap.cc
  ${COBALT_PORT_DIR}/starboard/shared/linux/get_home_directory.cc
  ${COBALT_PORT_DIR}/starboard/shared/linux/memory_get_stack_bounds.cc
  ${COBALT_PORT_DIR}/starboard/shared/linux/page_internal.cc
  ## TODO ## ${COBALT_PORT_DIR}/starboard/shared/linux/socket_get_interface_address.cc
  ${COBALT_PORT_DIR}/starboard/shared/linux/system_get_random_data.cc
  ## TODO ## ${COBALT_PORT_DIR}/starboard/shared/linux/system_get_stack.cc
  ${COBALT_PORT_DIR}/starboard/shared/linux/system_get_total_cpu_memory.cc
  ${COBALT_PORT_DIR}/starboard/shared/linux/system_is_debugger_attached.cc
  ${COBALT_PORT_DIR}/starboard/shared/linux/system_symbolize.cc
  ## TODO ## ${COBALT_PORT_DIR}/starboard/shared/linux/thread_get_id.cc
  ## TODO ## ${COBALT_PORT_DIR}/starboard/shared/linux/thread_get_name.cc
  ## TODO ## ${COBALT_PORT_DIR}/starboard/shared/linux/thread_set_name.cc
  ${COBALT_PORT_DIR}/starboard/shared/nouser/user_get_current.cc
  ${COBALT_PORT_DIR}/starboard/shared/nouser/user_get_property.cc
  ${COBALT_PORT_DIR}/starboard/shared/nouser/user_get_signed_in.cc
  ${COBALT_PORT_DIR}/starboard/shared/nouser/user_internal.cc
  ${COBALT_PORT_DIR}/starboard/shared/posix/directory_create.cc
  ## TODO ## ${COBALT_PORT_DIR}/starboard/shared/posix/file_can_open.cc
  ## TODO ## ${COBALT_PORT_DIR}/starboard/shared/posix/file_close.cc
  ## TODO ## ${COBALT_PORT_DIR}/starboard/shared/posix/file_delete.cc
  ## TODO ## ${COBALT_PORT_DIR}/starboard/shared/posix/file_exists.cc
  ## TODO ## ${COBALT_PORT_DIR}/starboard/shared/posix/file_flush.cc
  ## TODO ## ${COBALT_PORT_DIR}/starboard/shared/posix/file_get_info.cc
  ## TODO ## ${COBALT_PORT_DIR}/starboard/shared/posix/file_get_path_info.cc
  ## TODO ## ${COBALT_PORT_DIR}/starboard/shared/posix/file_open.cc
  ## TODO ## ${COBALT_PORT_DIR}/starboard/shared/posix/file_read.cc
  ## TODO ## ${COBALT_PORT_DIR}/starboard/shared/posix/file_seek.cc
  ## TODO ## ${COBALT_PORT_DIR}/starboard/shared/posix/file_truncate.cc
  ## TODO ## ${COBALT_PORT_DIR}/starboard/shared/posix/file_write.cc
  ## TODO ## ${COBALT_PORT_DIR}/starboard/shared/posix/log.cc
  ## TODO ## ${COBALT_PORT_DIR}/starboard/shared/posix/log_flush.cc
  ## TODO ## ${COBALT_PORT_DIR}/starboard/shared/posix/log_format.cc
  ## TODO ## ${COBALT_PORT_DIR}/starboard/shared/posix/log_is_tty.cc
  ## TODO ## ${COBALT_PORT_DIR}/starboard/shared/posix/log_raw.cc
  ${COBALT_PORT_DIR}/starboard/shared/posix/memory_flush.cc
  ${COBALT_PORT_DIR}/starboard/shared/posix/set_non_blocking_internal.cc
  ## TODO ## ${COBALT_PORT_DIR}/starboard/shared/posix/socket_accept.cc
  ## TODO ## ${COBALT_PORT_DIR}/starboard/shared/posix/socket_bind.cc
  ## TODO ## ${COBALT_PORT_DIR}/starboard/shared/posix/socket_clear_last_error.cc
  ## TODO ## ${COBALT_PORT_DIR}/starboard/shared/posix/socket_connect.cc
  ## TODO ## ${COBALT_PORT_DIR}/starboard/shared/posix/socket_create.cc
  ## TODO ## ${COBALT_PORT_DIR}/starboard/shared/posix/socket_destroy.cc
  ## TODO ## ${COBALT_PORT_DIR}/starboard/shared/posix/socket_free_resolution.cc
  ## TODO ## ${COBALT_PORT_DIR}/starboard/shared/posix/socket_get_last_error.cc
  ## TODO ## ${COBALT_PORT_DIR}/starboard/shared/posix/socket_get_local_address.cc
  ## TODO ## ${COBALT_PORT_DIR}/starboard/shared/posix/socket_internal.cc
  ## TODO ## ${COBALT_PORT_DIR}/starboard/shared/posix/socket_is_connected.cc
  ## TODO ## ${COBALT_PORT_DIR}/starboard/shared/posix/socket_is_connected_and_idle.cc
  ## TODO ## ${COBALT_PORT_DIR}/starboard/shared/posix/socket_join_multicast_group.cc
  ## TODO ## ${COBALT_PORT_DIR}/starboard/shared/posix/socket_listen.cc
  ## TODO ## ${COBALT_PORT_DIR}/starboard/shared/posix/socket_receive_from.cc
  ## TODO ## ${COBALT_PORT_DIR}/starboard/shared/posix/socket_resolve.cc
  ## TODO ## ${COBALT_PORT_DIR}/starboard/shared/posix/socket_send_to.cc
  ## TODO ## ${COBALT_PORT_DIR}/starboard/shared/posix/socket_set_broadcast.cc
  ## TODO ## ${COBALT_PORT_DIR}/starboard/shared/posix/socket_set_receive_buffer_size.cc
  ## TODO ## ${COBALT_PORT_DIR}/starboard/shared/posix/socket_set_reuse_address.cc
  ## TODO ## ${COBALT_PORT_DIR}/starboard/shared/posix/socket_set_send_buffer_size.cc
  ## TODO ## ${COBALT_PORT_DIR}/starboard/shared/posix/socket_set_tcp_keep_alive.cc
  ## TODO ## ${COBALT_PORT_DIR}/starboard/shared/posix/socket_set_tcp_no_delay.cc
  ## TODO ## ${COBALT_PORT_DIR}/starboard/shared/posix/socket_set_tcp_window_scaling.cc
  ${COBALT_PORT_DIR}/starboard/shared/posix/storage_write_record.cc
  ${COBALT_PORT_DIR}/starboard/shared/posix/string_compare_no_case.cc
  ${COBALT_PORT_DIR}/starboard/shared/posix/string_compare_no_case_n.cc
  ${COBALT_PORT_DIR}/starboard/shared/posix/string_compare_wide.cc
  ${COBALT_PORT_DIR}/starboard/shared/posix/string_format.cc
  ${COBALT_PORT_DIR}/starboard/shared/posix/string_format_wide.cc
  ${COBALT_PORT_DIR}/starboard/shared/posix/system_break_into_debugger.cc
  ${COBALT_PORT_DIR}/starboard/shared/posix/system_clear_last_error.cc
  ${COBALT_PORT_DIR}/starboard/shared/posix/system_get_error_string.cc
  ${COBALT_PORT_DIR}/starboard/shared/posix/system_get_last_error.cc
  ${COBALT_PORT_DIR}/starboard/shared/posix/system_get_locale_id.cc
  ${COBALT_PORT_DIR}/starboard/shared/posix/system_get_number_of_processors.cc
  ${COBALT_PORT_DIR}/starboard/shared/posix/thread_sleep.cc
  ${COBALT_PORT_DIR}/starboard/shared/posix/time_get_monotonic_now.cc
  ${COBALT_PORT_DIR}/starboard/shared/posix/time_get_monotonic_thread_now.cc
  ${COBALT_PORT_DIR}/starboard/shared/posix/time_get_now.cc
  ${COBALT_PORT_DIR}/starboard/shared/posix/time_zone_get_current.cc
  ${COBALT_PORT_DIR}/starboard/shared/posix/time_zone_get_dst_name.cc
  ${COBALT_PORT_DIR}/starboard/shared/posix/time_zone_get_name.cc
  ${COBALT_PORT_DIR}/starboard/shared/pthread/condition_variable_broadcast.cc
  ${COBALT_PORT_DIR}/starboard/shared/pthread/condition_variable_create.cc
  ${COBALT_PORT_DIR}/starboard/shared/pthread/condition_variable_destroy.cc
  ${COBALT_PORT_DIR}/starboard/shared/pthread/condition_variable_signal.cc
  ${COBALT_PORT_DIR}/starboard/shared/pthread/condition_variable_wait.cc
  ${COBALT_PORT_DIR}/starboard/shared/pthread/condition_variable_wait_timed.cc
  ${COBALT_PORT_DIR}/starboard/shared/pthread/mutex_acquire.cc
  ${COBALT_PORT_DIR}/starboard/shared/pthread/mutex_acquire_try.cc
  ${COBALT_PORT_DIR}/starboard/shared/pthread/mutex_create.cc
  ${COBALT_PORT_DIR}/starboard/shared/pthread/mutex_destroy.cc
  ${COBALT_PORT_DIR}/starboard/shared/pthread/mutex_release.cc
  ${COBALT_PORT_DIR}/starboard/shared/pthread/once.cc
  ${COBALT_PORT_DIR}/starboard/shared/pthread/thread_create.cc
  ${COBALT_PORT_DIR}/starboard/shared/pthread/thread_create_local_key.cc
  ${COBALT_PORT_DIR}/starboard/shared/pthread/thread_create_priority.h
  ${COBALT_PORT_DIR}/starboard/shared/pthread/thread_destroy_local_key.cc
  ${COBALT_PORT_DIR}/starboard/shared/pthread/thread_detach.cc
  ${COBALT_PORT_DIR}/starboard/shared/pthread/thread_get_current.cc
  ${COBALT_PORT_DIR}/starboard/shared/pthread/thread_get_local_value.cc
  ${COBALT_PORT_DIR}/starboard/shared/pthread/thread_is_equal.cc
  ${COBALT_PORT_DIR}/starboard/shared/pthread/thread_join.cc
  ${COBALT_PORT_DIR}/starboard/shared/pthread/thread_set_local_value.cc
  ${COBALT_PORT_DIR}/starboard/shared/pthread/thread_yield.cc
  ## TODO ## ${COBALT_PORT_DIR}/starboard/shared/pulse/pulse_audio_sink_type.cc
  ## TODO ## ${COBALT_PORT_DIR}/starboard/shared/pulse/pulse_audio_sink_type.h
  ## TODO ## ${COBALT_PORT_DIR}/starboard/shared/pulse/pulse_dynamic_load_dispatcher.cc
  ## TODO ## ${COBALT_PORT_DIR}/starboard/shared/pulse/pulse_dynamic_load_dispatcher.h
  ${COBALT_PORT_DIR}/starboard/shared/signal/crash_signals.h
  ${COBALT_PORT_DIR}/starboard/shared/signal/crash_signals_sigaction.cc
  ${COBALT_PORT_DIR}/starboard/shared/signal/suspend_signals.cc
  ${COBALT_PORT_DIR}/starboard/shared/signal/suspend_signals.h
  ${COBALT_PORT_DIR}/starboard/shared/starboard/application.cc
  ## TODO ## ${COBALT_PORT_DIR}/starboard/shared/starboard/audio_sink/audio_sink_create.cc
  ## TODO ## ${COBALT_PORT_DIR}/starboard/shared/starboard/audio_sink/audio_sink_destroy.cc
  ## TODO ## ${COBALT_PORT_DIR}/starboard/shared/starboard/audio_sink/audio_sink_get_max_channels_5_1.cc
  ## TODO ## ${COBALT_PORT_DIR}/starboard/shared/starboard/audio_sink/audio_sink_get_nearest_supported_sample_frequency.cc
  ## TODO ## ${COBALT_PORT_DIR}/starboard/shared/starboard/audio_sink/audio_sink_internal.cc
  ## TODO ## ${COBALT_PORT_DIR}/starboard/shared/starboard/audio_sink/audio_sink_internal.h
  ## TODO ## ${COBALT_PORT_DIR}/starboard/shared/starboard/audio_sink/audio_sink_is_audio_frame_storage_type_supported_interleaved_only.cc
  ## TODO ## ${COBALT_PORT_DIR}/starboard/shared/starboard/audio_sink/audio_sink_is_audio_sample_type_supported_float32_only.cc
  ## TODO ## ${COBALT_PORT_DIR}/starboard/shared/starboard/audio_sink/audio_sink_is_valid.cc
  ## TODO ## ${COBALT_PORT_DIR}/starboard/shared/starboard/audio_sink/stub_audio_sink_type.cc
  ## TODO ## ${COBALT_PORT_DIR}/starboard/shared/starboard/audio_sink/stub_audio_sink_type.h
  ${COBALT_PORT_DIR}/starboard/shared/starboard/command_line.cc
  ${COBALT_PORT_DIR}/starboard/shared/starboard/command_line.h
  ${COBALT_PORT_DIR}/starboard/shared/starboard/directory_can_open.cc
  ${COBALT_PORT_DIR}/starboard/shared/starboard/event_cancel.cc
  ${COBALT_PORT_DIR}/starboard/shared/starboard/event_schedule.cc
  ${COBALT_PORT_DIR}/starboard/shared/starboard/file_mode_string_to_flags.cc
  ${COBALT_PORT_DIR}/starboard/shared/starboard/file_storage/storage_close_record.cc
  ${COBALT_PORT_DIR}/starboard/shared/starboard/file_storage/storage_delete_record.cc
  ${COBALT_PORT_DIR}/starboard/shared/starboard/file_storage/storage_get_record_size.cc
  ${COBALT_PORT_DIR}/starboard/shared/starboard/file_storage/storage_open_record.cc
  ${COBALT_PORT_DIR}/starboard/shared/starboard/file_storage/storage_read_record.cc
  ${COBALT_PORT_DIR}/starboard/shared/starboard/log_message.cc
  ${COBALT_PORT_DIR}/starboard/shared/starboard/log_raw_dump_stack.cc
  ${COBALT_PORT_DIR}/starboard/shared/starboard/log_raw_format.cc
  ## TODO ## ${COBALT_PORT_DIR}/starboard/shared/starboard/media/codec_util.cc
  ## TODO ## ${COBALT_PORT_DIR}/starboard/shared/starboard/media/codec_util.h
  ## TODO ## ${COBALT_PORT_DIR}/starboard/shared/starboard/media/media_can_play_mime_and_key_system.cc
  ## TODO ## ${COBALT_PORT_DIR}/starboard/shared/starboard/media/media_get_audio_configuration_stereo_only.cc
  ## TODO ## ${COBALT_PORT_DIR}/starboard/shared/starboard/media/media_get_audio_output_count_stereo_only.cc
  ## TODO ## ${COBALT_PORT_DIR}/starboard/shared/starboard/media/media_is_audio_supported_aac_and_opus.cc
  ## TODO ## ${COBALT_PORT_DIR}/starboard/shared/starboard/media/media_is_output_protected.cc
  ## TODO ## ${COBALT_PORT_DIR}/starboard/shared/starboard/media/media_is_transfer_characteristics_supported.cc
  ## TODO ## ${COBALT_PORT_DIR}/starboard/shared/starboard/media/media_set_output_protection.cc
  ## TODO ## ${COBALT_PORT_DIR}/starboard/shared/starboard/media/media_util.cc
  ## TODO ## ${COBALT_PORT_DIR}/starboard/shared/starboard/media/media_util.h
  ## TODO ## ${COBALT_PORT_DIR}/starboard/shared/starboard/media/mime_type.cc
  ## TODO ## ${COBALT_PORT_DIR}/starboard/shared/starboard/media/mime_type.h
  ${COBALT_PORT_DIR}/starboard/shared/starboard/new.cc
  ## TODO ## ${COBALT_PORT_DIR}/starboard/shared/starboard/player/decoded_audio_internal.cc
  ## TODO ## ${COBALT_PORT_DIR}/starboard/shared/starboard/player/decoded_audio_internal.h
  ## TODO ## ${COBALT_PORT_DIR}/starboard/shared/starboard/player/filter/audio_decoder_internal.h
  ## TODO ## ${COBALT_PORT_DIR}/starboard/shared/starboard/player/filter/audio_frame_tracker.cc
  ## TODO ## ${COBALT_PORT_DIR}/starboard/shared/starboard/player/filter/audio_frame_tracker.h
  ## TODO ## ${COBALT_PORT_DIR}/starboard/shared/starboard/player/filter/audio_renderer_internal.cc
  ## TODO ## ${COBALT_PORT_DIR}/starboard/shared/starboard/player/filter/audio_renderer_internal.h
  ## TODO ## ${COBALT_PORT_DIR}/starboard/shared/starboard/player/filter/audio_renderer_sink.h
  ## TODO ## ${COBALT_PORT_DIR}/starboard/shared/starboard/player/filter/audio_renderer_sink_impl.cc
  ## TODO ## ${COBALT_PORT_DIR}/starboard/shared/starboard/player/filter/audio_renderer_sink_impl.h
  ## TODO ## ${COBALT_PORT_DIR}/starboard/shared/starboard/player/filter/audio_resampler_impl.cc
  ## TODO ## ${COBALT_PORT_DIR}/starboard/shared/starboard/player/filter/audio_time_stretcher.cc
  ## TODO ## ${COBALT_PORT_DIR}/starboard/shared/starboard/player/filter/audio_time_stretcher.h
  ## TODO ## ${COBALT_PORT_DIR}/starboard/shared/starboard/player/filter/cpu_video_frame.cc
  ## TODO ## ${COBALT_PORT_DIR}/starboard/shared/starboard/player/filter/cpu_video_frame.h
  ## TODO ## ${COBALT_PORT_DIR}/starboard/shared/starboard/player/filter/decoded_audio_queue.cc
  ## TODO ## ${COBALT_PORT_DIR}/starboard/shared/starboard/player/filter/decoded_audio_queue.h
  ## TODO ## ${COBALT_PORT_DIR}/starboard/shared/starboard/player/filter/filter_based_player_worker_handler.cc
  ## TODO ## ${COBALT_PORT_DIR}/starboard/shared/starboard/player/filter/filter_based_player_worker_handler.h
  ## TODO ## ${COBALT_PORT_DIR}/starboard/shared/starboard/player/filter/media_time_provider.h
  ## TODO ## ${COBALT_PORT_DIR}/starboard/shared/starboard/player/filter/media_time_provider_impl.cc
  ## TODO ## ${COBALT_PORT_DIR}/starboard/shared/starboard/player/filter/media_time_provider_impl.h
  ## TODO ## ${COBALT_PORT_DIR}/starboard/shared/starboard/player/filter/player_components.h
  ## TODO ## ${COBALT_PORT_DIR}/starboard/shared/starboard/player/filter/punchout_video_renderer_sink.cc
  ## TODO ## ${COBALT_PORT_DIR}/starboard/shared/starboard/player/filter/punchout_video_renderer_sink.h
  ## TODO ## ${COBALT_PORT_DIR}/starboard/shared/starboard/player/filter/video_decoder_internal.h
  ## TODO ## ${COBALT_PORT_DIR}/starboard/shared/starboard/player/filter/video_frame_internal.h
  ## TODO ## ${COBALT_PORT_DIR}/starboard/shared/starboard/player/filter/video_renderer_internal.cc
  ## TODO ## ${COBALT_PORT_DIR}/starboard/shared/starboard/player/filter/video_renderer_internal.h
  ## TODO ## ${COBALT_PORT_DIR}/starboard/shared/starboard/player/filter/wsola_internal.cc
  ## TODO ## ${COBALT_PORT_DIR}/starboard/shared/starboard/player/filter/wsola_internal.h
  ## TODO ## ${COBALT_PORT_DIR}/starboard/shared/starboard/player/input_buffer_internal.cc
  ## TODO ## ${COBALT_PORT_DIR}/starboard/shared/starboard/player/input_buffer_internal.h
  ## TODO ## ${COBALT_PORT_DIR}/starboard/shared/starboard/player/job_queue.cc
  ## TODO ## ${COBALT_PORT_DIR}/starboard/shared/starboard/player/job_queue.h
  ## TODO ## ${COBALT_PORT_DIR}/starboard/shared/starboard/player/player_create.cc
  ## TODO ## ${COBALT_PORT_DIR}/starboard/shared/starboard/player/player_destroy.cc
  ## TODO ## ${COBALT_PORT_DIR}/starboard/shared/starboard/player/player_get_current_frame.cc
  ## TODO ## ${COBALT_PORT_DIR}/starboard/shared/starboard/player/player_get_info.cc
  ## TODO ## ${COBALT_PORT_DIR}/starboard/shared/starboard/player/player_internal.cc
  ## TODO ## ${COBALT_PORT_DIR}/starboard/shared/starboard/player/player_internal.h
  ## TODO ## ${COBALT_PORT_DIR}/starboard/shared/starboard/player/player_output_mode_supported.cc
  ## TODO ## ${COBALT_PORT_DIR}/starboard/shared/starboard/player/player_seek.cc
  ## TODO ## ${COBALT_PORT_DIR}/starboard/shared/starboard/player/player_set_bounds.cc
  ## TODO ## ${COBALT_PORT_DIR}/starboard/shared/starboard/player/player_set_playback_rate.cc
  ## TODO ## ${COBALT_PORT_DIR}/starboard/shared/starboard/player/player_set_volume.cc
  ## TODO ## ${COBALT_PORT_DIR}/starboard/shared/starboard/player/player_worker.cc
  ## TODO ## ${COBALT_PORT_DIR}/starboard/shared/starboard/player/player_worker.h
  ## TODO ## ${COBALT_PORT_DIR}/starboard/shared/starboard/player/player_write_end_of_stream.cc
  ## TODO ## ${COBALT_PORT_DIR}/starboard/shared/starboard/player/player_write_sample.cc
  ${COBALT_PORT_DIR}/starboard/shared/starboard/queue_application.cc
  ${COBALT_PORT_DIR}/starboard/shared/starboard/string_concat.cc
  ${COBALT_PORT_DIR}/starboard/shared/starboard/string_concat_wide.cc
  ${COBALT_PORT_DIR}/starboard/shared/starboard/string_copy.cc
  ${COBALT_PORT_DIR}/starboard/shared/starboard/string_copy_wide.cc
  ${COBALT_PORT_DIR}/starboard/shared/starboard/string_duplicate.cc
  ${COBALT_PORT_DIR}/starboard/shared/starboard/system_get_random_uint64.cc
  ${COBALT_PORT_DIR}/starboard/shared/starboard/system_request_pause.cc
  ${COBALT_PORT_DIR}/starboard/shared/starboard/system_request_stop.cc
  ${COBALT_PORT_DIR}/starboard/shared/starboard/system_request_suspend.cc
  ${COBALT_PORT_DIR}/starboard/shared/starboard/system_request_unpause.cc
  ${COBALT_PORT_DIR}/starboard/shared/starboard/system_supports_resume.cc
  ${COBALT_PORT_DIR}/starboard/shared/starboard/window_set_default_options.cc
  ${COBALT_PORT_DIR}/starboard/shared/stub/accessibility_get_display_settings.cc
  ${COBALT_PORT_DIR}/starboard/shared/stub/accessibility_get_text_to_speech_settings.cc
  ${COBALT_PORT_DIR}/starboard/shared/stub/cryptography_create_transformer.cc
  ${COBALT_PORT_DIR}/starboard/shared/stub/cryptography_destroy_transformer.cc
  ${COBALT_PORT_DIR}/starboard/shared/stub/cryptography_get_tag.cc
  ${COBALT_PORT_DIR}/starboard/shared/stub/cryptography_set_authenticated_data.cc
  ${COBALT_PORT_DIR}/starboard/shared/stub/cryptography_set_initialization_vector.cc
  ${COBALT_PORT_DIR}/starboard/shared/stub/cryptography_transform.cc
  ## TODO ## ${COBALT_PORT_DIR}/starboard/shared/stub/drm_close_session.cc
  ## TODO ## ${COBALT_PORT_DIR}/starboard/shared/stub/drm_create_system.cc
  ## TODO ## ${COBALT_PORT_DIR}/starboard/shared/stub/drm_destroy_system.cc
  ## TODO ## ${COBALT_PORT_DIR}/starboard/shared/stub/drm_generate_session_update_request.cc
  ## TODO ## ${COBALT_PORT_DIR}/starboard/shared/stub/drm_is_server_certificate_updatable.cc
  ## TODO ## ${COBALT_PORT_DIR}/starboard/shared/stub/drm_system_internal.h
  ## TODO ## ${COBALT_PORT_DIR}/starboard/shared/stub/drm_update_server_certificate.cc
  ## TODO ## ${COBALT_PORT_DIR}/starboard/shared/stub/drm_update_session.cc
  ${COBALT_PORT_DIR}/starboard/shared/stub/image_decode.cc
  ${COBALT_PORT_DIR}/starboard/shared/stub/image_is_decode_supported.cc
  ${COBALT_PORT_DIR}/starboard/shared/stub/media_is_supported.cc
  ## TODO ## ${COBALT_PORT_DIR}/starboard/shared/stub/microphone_close.cc
  ## TODO ## ${COBALT_PORT_DIR}/starboard/shared/stub/microphone_create.cc
  ## TODO ## ${COBALT_PORT_DIR}/starboard/shared/stub/microphone_destroy.cc
  ## TODO ## ${COBALT_PORT_DIR}/starboard/shared/stub/microphone_get_available.cc
  ## TODO ## ${COBALT_PORT_DIR}/starboard/shared/stub/microphone_is_sample_rate_supported.cc
  ## TODO ## ${COBALT_PORT_DIR}/starboard/shared/stub/microphone_open.cc
  ## TODO ## ${COBALT_PORT_DIR}/starboard/shared/stub/microphone_read.cc
  ${COBALT_PORT_DIR}/starboard/shared/stub/system_get_total_gpu_memory.cc
  ${COBALT_PORT_DIR}/starboard/shared/stub/system_get_used_gpu_memory.cc
  ${COBALT_PORT_DIR}/starboard/shared/stub/system_hide_splash_screen.cc
  ${COBALT_PORT_DIR}/starboard/shared/stub/system_raise_platform_error.cc
)

set(COBALT_port_base_SOURCES
  ${COBALT_PORT_DIR}base/memory/aligned_memory.cc
)

# cobalt/system_window/system_window.gyp
# cobalt/storage/store_upgrade/upgrade_tool.gyp
# cobalt/storage/store_upgrade/upgrade.gyp
# cobalt/storage/store/store.gyp
# cobalt/storage/storage_constants.gyp
# cobalt/storage/storage.gyp

# cobalt/content/fonts/fonts.gyp

# cobalt/debug/remote/devtools/inspector_protocol/inspector_protocol.gyp
# cobalt/debug/remote/devtools/devtools.gyp
# cobalt/debug/debug.gyp
# cobalt/renderer/rasterizer/common/common.gyp
# cobalt/renderer/rasterizer/lib/lib.gyp
# cobalt/renderer/rasterizer/blitter/rasterizer.gyp

# cobalt/renderer/rasterizer/skia/skia/skia_library_opts.gyp
# cobalt/renderer/rasterizer/skia/skia/skia.gyp
# skia_cobalt.gypi
# TODO: uses outdated skia ver!
set(COBALT_skia_cobalt_SOURCES
  ${COBALT_CORE_DIR}/renderer/rasterizer/skia/skia/config/SkUserConfig.h
  ${COBALT_CORE_DIR}/renderer/rasterizer/skia/skia/src/effects/SkNV122RGBShader.cc
  ${COBALT_CORE_DIR}/renderer/rasterizer/skia/skia/src/effects/SkNV122RGBShader.h
  ${COBALT_CORE_DIR}/renderer/rasterizer/skia/skia/src/effects/SkYUV2RGBShader.cc
  ${COBALT_CORE_DIR}/renderer/rasterizer/skia/skia/src/effects/SkYUV2RGBShader.h
  ${COBALT_CORE_DIR}/renderer/rasterizer/skia/skia/src/google_logging.cc
  ${COBALT_CORE_DIR}/renderer/rasterizer/skia/skia/src/ports/SkFontConfigParser_cobalt.cc
  ${COBALT_CORE_DIR}/renderer/rasterizer/skia/skia/src/ports/SkFontConfigParser_cobalt.h
  ${COBALT_CORE_DIR}/renderer/rasterizer/skia/skia/src/ports/SkFontMgr_cobalt.cc
  ${COBALT_CORE_DIR}/renderer/rasterizer/skia/skia/src/ports/SkFontMgr_cobalt.h
  ${COBALT_CORE_DIR}/renderer/rasterizer/skia/skia/src/ports/SkFontMgr_cobalt_factory.cc
  ${COBALT_CORE_DIR}/renderer/rasterizer/skia/skia/src/ports/SkFontStyleSet_cobalt.cc
  ${COBALT_CORE_DIR}/renderer/rasterizer/skia/skia/src/ports/SkFontStyleSet_cobalt.h
  ${COBALT_CORE_DIR}/renderer/rasterizer/skia/skia/src/ports/SkFontUtil_cobalt.cc
  ${COBALT_CORE_DIR}/renderer/rasterizer/skia/skia/src/ports/SkFontUtil_cobalt.h
  ## TODO ## ${COBALT_CORE_DIR}/renderer/rasterizer/skia/skia/src/ports/SkFreeType_cobalt.cc
  ## TODO ## ${COBALT_CORE_DIR}/renderer/rasterizer/skia/skia/src/ports/SkFreeType_cobalt.h
  ## TODO ## ${COBALT_CORE_DIR}/renderer/rasterizer/skia/skia/src/ports/SkOSFile_cobalt.cc
  ## TODO ## ${COBALT_CORE_DIR}/renderer/rasterizer/skia/skia/src/ports/SkOSFile_cobalt.h
  ${COBALT_CORE_DIR}/renderer/rasterizer/skia/skia/src/ports/SkStream_cobalt.cc
  ${COBALT_CORE_DIR}/renderer/rasterizer/skia/skia/src/ports/SkStream_cobalt.h
  ${COBALT_CORE_DIR}/renderer/rasterizer/skia/skia/src/ports/SkTypeface_cobalt.cc
  ${COBALT_CORE_DIR}/renderer/rasterizer/skia/skia/src/ports/SkTypeface_cobalt.h
  ${COBALT_CORE_DIR}/renderer/rasterizer/skia/skia/src/ports/SkTLS_cobalt.cc
  ${COBALT_CORE_DIR}/renderer/rasterizer/skia/skia/src/ports/SkTime_cobalt.cc
)

# cobalt/renderer/rasterizer/skia/common.gyp
#'dependencies': [
#  '<(DEPTH)/base/base.gyp:base',
#  '<(DEPTH)/cobalt/renderer/rasterizer/skia/skia/skia.gyp:skia',
#  '<(DEPTH)/third_party/harfbuzz-ng/harfbuzz.gyp:harfbuzz-ng',
#  '<(DEPTH)/third_party/icu/icu.gyp:icuuc',
#  '<(DEPTH)/third_party/ots/ots.gyp:ots',
#],
set(COBALT_skia_common_SOURCES
  ${COBALT_CORE_DIR}/renderer/rasterizer/skia/cobalt_skia_type_conversions.cc
  ${COBALT_CORE_DIR}/renderer/rasterizer/skia/cobalt_skia_type_conversions.h
  ${COBALT_CORE_DIR}/renderer/rasterizer/skia/font.cc
  ${COBALT_CORE_DIR}/renderer/rasterizer/skia/font.h
  ${COBALT_CORE_DIR}/renderer/rasterizer/skia/glyph_buffer.cc
  ${COBALT_CORE_DIR}/renderer/rasterizer/skia/glyph_buffer.h
  ${COBALT_CORE_DIR}/renderer/rasterizer/skia/harfbuzz_font.cc
  ${COBALT_CORE_DIR}/renderer/rasterizer/skia/harfbuzz_font.h
  ${COBALT_CORE_DIR}/renderer/rasterizer/skia/image.cc
  ${COBALT_CORE_DIR}/renderer/rasterizer/skia/image.h
  ${COBALT_CORE_DIR}/renderer/rasterizer/skia/render_tree_node_visitor.cc
  ${COBALT_CORE_DIR}/renderer/rasterizer/skia/render_tree_node_visitor.h
  ${COBALT_CORE_DIR}/renderer/rasterizer/skia/scratch_surface_cache.cc
  ${COBALT_CORE_DIR}/renderer/rasterizer/skia/scratch_surface_cache.h
  ${COBALT_CORE_DIR}/renderer/rasterizer/skia/text_shaper.cc
  ${COBALT_CORE_DIR}/renderer/rasterizer/skia/text_shaper.h
  ${COBALT_CORE_DIR}/renderer/rasterizer/skia/typeface.cc
  ${COBALT_CORE_DIR}/renderer/rasterizer/skia/typeface.h
)

# cobalt/renderer/rasterizer/skia/software_rasterizer.gyp
# cobalt/renderer/rasterizer/skia/rasterizer.gyp


# cobalt/renderer/rasterizer/rasterizer.gyp
# cobalt/renderer/rasterizer/egl/shaders/shaders.gyp
# cobalt/renderer/rasterizer/egl/rasterizer.gyp
# cobalt/renderer/rasterizer/stub/rasterizer.gyp
# cobalt/renderer/test/png_utils/png_utils.gyp
# cobalt/renderer/test/jpeg_utils/jpeg_utils.gyp
# cobalt/renderer/test/scenes/scenes.gyp
# cobalt/renderer/backend/backend.gyp
# cobalt/renderer/backend/starboard/platform_backend.gyp
# cobalt/renderer/renderer.gyp
# cobalt/renderer/default_options_starboard.gyp
# cobalt/renderer/sandbox/sandbox.gyp
# cobalt/webdriver/webdriver_test.gyp
# cobalt/webdriver/webdriver.gyp
# cobalt/page_visibility/page_visibility.gyp
# cobalt/network/network.gyp
# cobalt/sso/sso.gyp
# cobalt/speech/speech.gyp
# cobalt/speech/sandbox/sandbox.gyp
# cobalt/build/all.gyp
# cobalt/build/cobalt_build_id.gyp
# cobalt/layout/layout.gyp
# cobalt/test/test.gyp
# cobalt/base/base.gyp
# cobalt/trace_event/trace_event.gyp
# cobalt/script/v8c/v8c.gyp
# cobalt/script/script.gyp
# cobalt/script/mozjs-45/mozjs-45.gyp
# cobalt/script/engine.gyp
# cobalt/h5vcc/h5vcc.gyp
# cobalt/input/input.gyp
# cobalt/ui_navigation/ui_navigation.gyp
# cobalt/math/math.gyp
# cobalt/csp/csp.gyp
# cobalt/overlay_info/overlay_info.gyp
# cobalt/media/media.gyp
# cobalt/media/sandbox/sandbox.gyp
# cobalt/media_session/media_session.gyp
# cobalt/media_session/media_session_test.gyp
# cobalt/render_tree/render_tree.gyp
# cobalt/dom_parser/dom_parser_test.gyp
# cobalt/browser/browser_bindings.gyp
# cobalt/browser/null_webapi_extension.gyp
# cobalt/browser/browser.gyp
# cobalt/browser/cobalt.gyp
# cobalt/browser/browser_bindings_gen.gyp
# cobalt/websocket/websocket.gyp
# cobalt/demos/demos.gyp
# cobalt/accessibility/accessibility_test.gyp
# cobalt/accessibility/accessibility.gyp
# cobalt/media_stream/media_stream_test.gyp
# cobalt/media_stream/media_stream.gyp
# cobalt/bindings/testing/testing.gyp
# cobalt/audio/audio_test.gyp
# cobalt/audio/audio.gyp
# cobalt/fetch/fetch.gyp
# cobalt/cssom/cssom.gyp
# cobalt/cssom/cssom_test.gyp
# cobalt/samples/simple_example/simple_example.gyp
# cobalt/media_capture/media_capture_test.gyp
# cobalt/media_capture/media_capture.gyp
# cobalt/web_animations/web_animations.gyp
# cobalt/network_bridge/network_bridge.gyp
# cobalt/dom/dom_test.gyp
# cobalt/dom/dom_exception.gyp
# cobalt/dom/dom.gyp
# cobalt/dom/testing/dom_testing.gyp
# cobalt/account/account.gyp
# cobalt/xhr/xhr.gyp
# cobalt/css_parser/css_parser.gyp
# cobalt/loader/loader.gyp
# cobalt/loader/image/sandbox/sandbox.gyp
# cobalt/loader/origin.gyp

## --- COBALT_BASE ---###
set(COBALT_base_SOURCES
  ##${COBALT_CORE_DIR}/base/accessibility_changed_event.h
  #${COBALT_CORE_DIR}/base/address_sanitizer.h
  ${COBALT_PORT_DIR}/cobalt/base/camera_transform.h
  ${COBALT_PORT_DIR}/cobalt/base/circular_buffer_shell.cc
  ${COBALT_PORT_DIR}/cobalt/base/circular_buffer_shell.h
  ${COBALT_PORT_DIR}/cobalt/base/clock.h
  ${COBALT_PORT_DIR}/cobalt/base/cobalt_paths.h
  ${COBALT_PORT_DIR}/cobalt/base/compiler.h
  ${COBALT_PORT_DIR}/cobalt/base/c_val.cc
  ${COBALT_PORT_DIR}/cobalt/base/c_val.h
  ${COBALT_PORT_DIR}/cobalt/base/c_val_collection_entry_stats.h
  ${COBALT_PORT_DIR}/cobalt/base/c_val_collection_timer_stats.h
  ${COBALT_PORT_DIR}/cobalt/base/c_val_time_interval_entry_stats.h
  ${COBALT_PORT_DIR}/cobalt/base/c_val_time_interval_timer_stats.h
  ${COBALT_PORT_DIR}/cobalt/base/deep_link_event.h
  ##${COBALT_CORE_DIR}/base/do_main.h
  ##${COBALT_CORE_DIR}/base/do_main_starboard.h
  ${COBALT_PORT_DIR}/cobalt/base/event.h
  ${COBALT_PORT_DIR}/cobalt/base/event_dispatcher.cc
  ${COBALT_PORT_DIR}/cobalt/base/event_dispatcher.h
  ${COBALT_PORT_DIR}/cobalt/base/get_application_key.cc
  ${COBALT_PORT_DIR}/cobalt/base/get_application_key.h
  ${COBALT_PORT_DIR}/cobalt/base/init_cobalt.cc
  ${COBALT_PORT_DIR}/cobalt/base/init_cobalt.h
  ${COBALT_PORT_DIR}/cobalt/base/language.cc
  ${COBALT_PORT_DIR}/cobalt/base/language.h
  ${COBALT_PORT_DIR}/cobalt/base/localized_strings.cc
  ${COBALT_PORT_DIR}/cobalt/base/localized_strings.h
  ${COBALT_PORT_DIR}/cobalt/base/log_message_handler.cc
  ${COBALT_PORT_DIR}/cobalt/base/log_message_handler.h
  ##${COBALT_CORE_DIR}/base/math.h
  ${COBALT_PORT_DIR}/cobalt/base/message_queue.h
  ${COBALT_PORT_DIR}/cobalt/base/on_screen_keyboard_hidden_event.h
  ${COBALT_PORT_DIR}/cobalt/base/on_screen_keyboard_shown_event.h
  ${COBALT_PORT_DIR}/cobalt/base/path_provider.cc
  ${COBALT_PORT_DIR}/cobalt/base/path_provider.h
  ${COBALT_PORT_DIR}/cobalt/base/poller.h
  ${COBALT_PORT_DIR}/cobalt/base/polymorphic_downcast.h
  ${COBALT_PORT_DIR}/cobalt/base/polymorphic_equatable.h
  ${COBALT_PORT_DIR}/cobalt/base/ref_counted_lock.h
  ${COBALT_PORT_DIR}/cobalt/base/source_location.h
  ${COBALT_PORT_DIR}/cobalt/base/startup_timer.cc
  ${COBALT_PORT_DIR}/cobalt/base/startup_timer.h
  ${COBALT_PORT_DIR}/cobalt/base/stop_watch.cc
  ${COBALT_PORT_DIR}/cobalt/base/stop_watch.h
  #
  ## ${COBALT_PORT_DIR}/cobalt/base/token.cc
  ## ${COBALT_PORT_DIR}/cobalt/base/token.h
  ${COBALT_PORT_DIR}/cobalt/base/cobalt_token.cc
  ${COBALT_PORT_DIR}/cobalt/base/cobalt_token.h
  #
  ${COBALT_PORT_DIR}/cobalt/base/tokens.cc
  ${COBALT_PORT_DIR}/cobalt/base/tokens.h
  ${COBALT_PORT_DIR}/cobalt/base/type_id.h
  ${COBALT_PORT_DIR}/cobalt/base/window_size_changed_event.h
  ${COBALT_PORT_DIR}/cobalt/base/unicode/character.cc
  ${COBALT_PORT_DIR}/cobalt/base/unicode/character.h
  ${COBALT_PORT_DIR}/cobalt/base/unicode/character_values.h
  ${COBALT_PORT_DIR}/cobalt/base/unused.h
  ${COBALT_PORT_DIR}/cobalt/base/user_log.cc
  ${COBALT_PORT_DIR}/cobalt/base/user_log.h
  ${COBALT_PORT_DIR}/cobalt/base/version_compatibility.cc
  ${COBALT_PORT_DIR}/cobalt/base/version_compatibility.h
)

add_library(COBALT_BASE STATIC
  ${COBALT_base_SOURCES}
)

target_link_libraries(COBALT_BASE PUBLIC
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
  base
  GLIBXML
  #SKIA
  ##skcms
  #ced
  ## emoji-segmenter
  ## webrtc
  ## zlib
  icu
  ced
  glm
  #CC
  ##G_GPU
  #ANIMATION_CC
  #BASE_CC
  #PAINT_CC
  #SERVICES_NETWORK_PUBLIC_CPP
  #libwebp # requires libpng
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

set_property(TARGET COBALT_BASE PROPERTY CXX_STANDARD 17)

target_include_directories(COBALT_BASE PRIVATE
  #${UI_PARENT_DIR}
  ${COBALT_CORE_DIR}
  ${COBALT_CORE_PARENT_DIR}
  ${COBALT_COMMON_INCLUDES}
  ${CHROMIUM_DIR} # to third_party/skia/include/core/SkWriteBuffer.h
)

target_compile_definitions(COBALT_BASE PRIVATE
  BASE_IMPLEMENTATION=1
  BASE_I18N_IMPLEMENTATION=1
  #
  ${COBALT_COMMON_DEFINES}
)


set(COBALT_third_party_super_fast_hash_SOURCES
  # embedded src!
  #${COBALT_PORT_DIR}third_party/super_fast_hash/super_fast_hash.cc
)

## --- COBALT_CORE ---###

set(COBALT_ui_navigation_SOURCES
  ${COBALT_CORE_DIR}ui_navigation/interface.cc
  ${COBALT_CORE_DIR}ui_navigation/interface.h
  ${COBALT_CORE_DIR}ui_navigation/nav_item.cc
  ${COBALT_CORE_DIR}ui_navigation/nav_item.h
)

set(COBALT_nb_SOURCES
  ${COBALT_PORT_DIR}nb/allocator.h
  ${COBALT_PORT_DIR}nb/analytics/memory_tracker.cc
  ${COBALT_PORT_DIR}nb/analytics/memory_tracker.h
  ${COBALT_PORT_DIR}nb/analytics/memory_tracker_impl.cc
  ${COBALT_PORT_DIR}nb/analytics/memory_tracker_impl.h
  ${COBALT_PORT_DIR}nb/analytics/memory_tracker_helpers.cc
  ${COBALT_PORT_DIR}nb/analytics/memory_tracker_helpers.h
  #${COBALT_PORT_DIR}nb/atomic.h
  ${COBALT_PORT_DIR}nb/bit_cast.h
  ${COBALT_PORT_DIR}nb/bidirectional_fit_reuse_allocator.h
  ${COBALT_PORT_DIR}nb/bidirectional_fit_reuse_allocator.cc
  ${COBALT_PORT_DIR}nb/concurrent_map.h
  ${COBALT_PORT_DIR}nb/concurrent_ptr.h
  ${COBALT_PORT_DIR}nb/first_fit_reuse_allocator.h
  ${COBALT_PORT_DIR}nb/first_fit_reuse_allocator.cc
  ${COBALT_PORT_DIR}nb/fixed_no_free_allocator.cc
  ${COBALT_PORT_DIR}nb/fixed_no_free_allocator.h
  ${COBALT_PORT_DIR}nb/hash.cc
  ${COBALT_PORT_DIR}nb/hash.h
  ${COBALT_PORT_DIR}nb/memory_pool.h
  ${COBALT_PORT_DIR}nb/memory_scope.cc
  ${COBALT_PORT_DIR}nb/memory_scope.h
  ${COBALT_PORT_DIR}nb/move.h
  ${COBALT_PORT_DIR}nb/multipart_allocator.cc
  ${COBALT_PORT_DIR}nb/multipart_allocator.h
  ${COBALT_PORT_DIR}nb/pointer_arithmetic.h
  ${COBALT_PORT_DIR}nb/rect.h
  ${COBALT_PORT_DIR}nb/ref_counted.cc
  ${COBALT_PORT_DIR}nb/ref_counted.h
  ${COBALT_PORT_DIR}nb/reuse_allocator_base.cc
  ${COBALT_PORT_DIR}nb/reuse_allocator_base.h
  ${COBALT_PORT_DIR}nb/rewindable_vector.h
  ${COBALT_PORT_DIR}nb/starboard_memory_allocator.h
  ${COBALT_PORT_DIR}nb/scoped_ptr.h
  ${COBALT_PORT_DIR}nb/simple_thread.cc
  ${COBALT_PORT_DIR}nb/simple_thread.h
  ${COBALT_PORT_DIR}nb/simple_profiler.cc
  ${COBALT_PORT_DIR}nb/simple_profiler.h
  ${COBALT_PORT_DIR}nb/std_allocator.h
  ${COBALT_PORT_DIR}nb/string_interner.cc
  ${COBALT_PORT_DIR}nb/string_interner.h
  ${COBALT_PORT_DIR}nb/thread_collision_warner.cc
  ${COBALT_PORT_DIR}nb/thread_collision_warner.h
  ${COBALT_PORT_DIR}nb/thread_local_object.h
  ${COBALT_PORT_DIR}nb/thread_local_boolean.h
  ${COBALT_PORT_DIR}nb/thread_local_pointer.h
)

# Interfaces for interacting with a JavaScript engine and exposing objects
# to bindings to JavaScript.
# 'dependencies': [
#   '<(DEPTH)/cobalt/base/base.gyp:base',
#   '<(DEPTH)/nb/nb.gyp:nb',
# ]
# {
#   'target_name': 'standalone_javascript_runner',
#   'type': 'static_library',
#   'sources': [
#     'standalone_javascript_runner.cc
#     'standalone_javascript_runner.h
#   ],
# },
set(COBALT_script_gyp_SOURCES
  ${COBALT_CORE_DIR}script/array_buffer.h
  ${COBALT_CORE_DIR}script/array_buffer_view.h
  ${COBALT_CORE_DIR}script/call_frame.h
  ${COBALT_CORE_DIR}script/callback_function.h
  ${COBALT_CORE_DIR}script/callback_interface_traits.h
  ${COBALT_CORE_DIR}script/data_view.h
  ${COBALT_CORE_DIR}script/environment_settings.h
  ${COBALT_CORE_DIR}script/error_report.h
  ${COBALT_CORE_DIR}script/exception_message.cc
  ${COBALT_CORE_DIR}script/exception_message.h
  ${COBALT_CORE_DIR}script/execution_state.cc
  ${COBALT_CORE_DIR}script/execution_state.h
  ${COBALT_CORE_DIR}script/fake_global_environment.h
  ${COBALT_CORE_DIR}script/fake_script_runner.h
  ${COBALT_CORE_DIR}script/global_environment.h
  ##${COBALT_CORE_DIR}script/global_object_proxy.h
  ${COBALT_CORE_DIR}script/javascript_engine.h
  ${COBALT_CORE_DIR}script/logging_exception_state.h
  ${COBALT_CORE_DIR}script/promise.h
  ${COBALT_CORE_DIR}script/property_enumerator.h
  ${COBALT_CORE_DIR}script/scope.h
  ## TODO ##
  ${COBALT_CORE_DIR}script/script_debugger.h
  ${COBALT_CORE_DIR}script/script_exception.h
  ## TODO ##
  ${COBALT_CORE_DIR}script/script_runner.cc
  ${COBALT_CORE_DIR}script/script_runner.h
  ${COBALT_CORE_DIR}script/script_value.h
  ${COBALT_CORE_DIR}script/script_value_factory.h
  ${COBALT_CORE_DIR}script/script_value_factory_instantiations.h
  ${COBALT_CORE_DIR}script/sequence.h
  ${COBALT_CORE_DIR}script/source_code.h
  ${COBALT_CORE_DIR}script/source_provider.h
  ${COBALT_CORE_DIR}script/stack_frame.cc
  ${COBALT_CORE_DIR}script/stack_frame.h
  ${COBALT_CORE_DIR}script/tracer.h
  ${COBALT_CORE_DIR}script/typed_arrays.h
  ${COBALT_CORE_DIR}script/union_type.h
  ${COBALT_CORE_DIR}script/union_type_internal.h
  ${COBALT_CORE_DIR}script/util/stack_trace_helpers.h
  ${COBALT_CORE_DIR}script/value_handle.h
  ${COBALT_CORE_DIR}script/wrappable.h
)

# 'dependencies': [
#   '<(DEPTH)/cobalt/script/script.gyp:script',
# ],
set(COBALT_dom_exception_SOURCES
  ${COBALT_CORE_DIR}dom/dom_exception.cc
  #${COBALT_CORE_DIR}dom/dom_exception.h
)

set(COBALT_math_SOURCES
  ${COBALT_CORE_DIR}math/box_f.cc
  ${COBALT_CORE_DIR}math/box_f.h
  ${COBALT_CORE_DIR}math/clamp.h
  ${COBALT_CORE_DIR}math/cubic_bezier.cc
  ${COBALT_CORE_DIR}math/cubic_bezier.h
  ${COBALT_CORE_DIR}math/insets.cc
  ${COBALT_CORE_DIR}math/insets.h
  ${COBALT_CORE_DIR}math/insets_base.h
  ${COBALT_CORE_DIR}math/insets_f.cc
  ${COBALT_CORE_DIR}math/insets_f.h
  ${COBALT_CORE_DIR}math/linear_interpolator.h
  ${COBALT_CORE_DIR}math/matrix3_f.cc
  ${COBALT_CORE_DIR}math/matrix3_f.h
  ${COBALT_CORE_DIR}math/matrix_interpolation.cc
  ${COBALT_CORE_DIR}math/matrix_interpolation.h
  ${COBALT_CORE_DIR}math/point.cc
  ${COBALT_CORE_DIR}math/point.h
  ${COBALT_CORE_DIR}math/point3_f.cc
  ${COBALT_CORE_DIR}math/point3_f.h
  ${COBALT_CORE_DIR}math/point_base.h
  ${COBALT_CORE_DIR}math/point_conversions.cc
  ${COBALT_CORE_DIR}math/point_conversions.h
  ${COBALT_CORE_DIR}math/point_f.cc
  ${COBALT_CORE_DIR}math/point_f.h
  ${COBALT_CORE_DIR}math/quad_f.cc
  ${COBALT_CORE_DIR}math/quad_f.h
  ${COBALT_CORE_DIR}math/rational.h
  ${COBALT_CORE_DIR}math/rect.cc
  ${COBALT_CORE_DIR}math/rect.h
  ${COBALT_CORE_DIR}math/rect_base.h
  ${COBALT_CORE_DIR}math/rect_base_impl.h
  ${COBALT_CORE_DIR}math/rect_conversions.cc
  ${COBALT_CORE_DIR}math/rect_conversions.h
  ${COBALT_CORE_DIR}math/rect_f.cc
  ${COBALT_CORE_DIR}math/rect_f.h
  ${COBALT_CORE_DIR}math/safe_integer_conversions.h
  ${COBALT_CORE_DIR}math/size.cc
  ${COBALT_CORE_DIR}math/size.h
  ${COBALT_CORE_DIR}math/size_base.h
  ${COBALT_CORE_DIR}math/size_conversions.cc
  ${COBALT_CORE_DIR}math/size_conversions.h
  ${COBALT_CORE_DIR}math/size_f.cc
  ${COBALT_CORE_DIR}math/size_f.h
  ${COBALT_CORE_DIR}math/transform_2d.cc
  ${COBALT_CORE_DIR}math/transform_2d.h
  ${COBALT_CORE_DIR}math/vector2d.cc
  ${COBALT_CORE_DIR}math/vector2d.h
  ${COBALT_CORE_DIR}math/vector2d_conversions.cc
  ${COBALT_CORE_DIR}math/vector2d_conversions.h
  ${COBALT_CORE_DIR}math/vector2d_f.cc
  ${COBALT_CORE_DIR}math/vector2d_f.h
  ${COBALT_CORE_DIR}math/vector3d_f.cc
  ${COBALT_CORE_DIR}math/vector3d_f.h
)

#'defines': [
#  'MEDIA_IMPLEMENTATION',
#],
#'dependencies': [
#  '<(DEPTH)/base/base.gyp:base',
#  '<(DEPTH)/net/net.gyp:net',
#  '<(DEPTH)/url/url.gyp:url',
#  '<(DEPTH)/nb/nb.gyp:nb',
#  '<(DEPTH)/starboard/starboard.gyp:starboard',
#],
set(COBALT_media_SOURCES
  ${COBALT_CORE_DIR}media/decoder_buffer_allocator.cc
  ${COBALT_CORE_DIR}media/decoder_buffer_allocator.h
  ## TODO ## ${COBALT_CORE_DIR}media/fetcher_buffered_data_source.cc
  ## TODO ## ${COBALT_CORE_DIR}media/fetcher_buffered_data_source.h
  ${COBALT_CORE_DIR}media/media_module.cc
  ${COBALT_CORE_DIR}media/media_module.h
  ## TODO ## ${COBALT_CORE_DIR}media/media_module_starboard.cc
  ${COBALT_CORE_DIR}media/base/audio_codecs.cc
  ${COBALT_CORE_DIR}media/base/audio_codecs.h
  ${COBALT_CORE_DIR}media/base/audio_decoder_config.cc
  ${COBALT_CORE_DIR}media/base/audio_decoder_config.h
  ${COBALT_CORE_DIR}media/base/audio_timestamp_helper.cc
  ${COBALT_CORE_DIR}media/base/audio_timestamp_helper.h
  ## TODO ## ${COBALT_CORE_DIR}media/base/bit_reader.cc
  ## TODO ## ${COBALT_CORE_DIR}media/base/bit_reader.h
  ## TODO ## ${COBALT_CORE_DIR}media/base/bit_reader_core.cc
  ## TODO ## ${COBALT_CORE_DIR}media/base/bit_reader_core.h
  ${COBALT_CORE_DIR}media/base/byte_queue.cc
  ${COBALT_CORE_DIR}media/base/byte_queue.h
  ${COBALT_CORE_DIR}media/base/channel_layout.cc
  ${COBALT_CORE_DIR}media/base/channel_layout.h
  ${COBALT_CORE_DIR}media/base/color_space.cc
  ${COBALT_CORE_DIR}media/base/color_space.h
  ${COBALT_CORE_DIR}media/base/data_source.cc
  ${COBALT_CORE_DIR}media/base/data_source.h
  ${COBALT_CORE_DIR}media/base/decoder_buffer.cc
  ${COBALT_CORE_DIR}media/base/decoder_buffer.h
  ${COBALT_CORE_DIR}media/base/decoder_buffer_cache.cc
  ${COBALT_CORE_DIR}media/base/decoder_buffer_cache.h
  ${COBALT_CORE_DIR}media/base/decrypt_config.cc
  ${COBALT_CORE_DIR}media/base/decrypt_config.h
  ${COBALT_CORE_DIR}media/base/demuxer.cc
  ${COBALT_CORE_DIR}media/base/demuxer.h
  ${COBALT_CORE_DIR}media/base/demuxer_stream.cc
  ${COBALT_CORE_DIR}media/base/demuxer_stream.h
  ${COBALT_CORE_DIR}media/base/demuxer_stream_provider.cc
  ${COBALT_CORE_DIR}media/base/demuxer_stream_provider.h
  ## TODO ## ${COBALT_CORE_DIR}media/base/drm_system.cc
  ## TODO ## ${COBALT_CORE_DIR}media/base/drm_system.h
  ${COBALT_CORE_DIR}media/base/encryption_scheme.cc
  ${COBALT_CORE_DIR}media/base/encryption_scheme.h
  ${COBALT_CORE_DIR}media/base/hdr_metadata.cc
  ${COBALT_CORE_DIR}media/base/hdr_metadata.h
  ${COBALT_CORE_DIR}media/base/interleaved_sinc_resampler.cc
  ${COBALT_CORE_DIR}media/base/interleaved_sinc_resampler.h
  ${COBALT_CORE_DIR}media/base/media_log.cc
  ${COBALT_CORE_DIR}media/base/media_log.h
  ${COBALT_CORE_DIR}media/base/media_track.cc
  ${COBALT_CORE_DIR}media/base/media_track.h
  ${COBALT_CORE_DIR}media/base/media_tracks.cc
  ${COBALT_CORE_DIR}media/base/media_tracks.h
  ${COBALT_CORE_DIR}media/base/media_util.cc
  ${COBALT_CORE_DIR}media/base/media_util.h
  ${COBALT_CORE_DIR}media/base/mime_util.cc
  ${COBALT_CORE_DIR}media/base/mime_util.h
  ${COBALT_CORE_DIR}media/base/mime_util_internal.cc
  ${COBALT_CORE_DIR}media/base/mime_util_internal.h
  ${COBALT_CORE_DIR}media/base/ranges.cc
  ${COBALT_CORE_DIR}media/base/ranges.h
  ${COBALT_CORE_DIR}media/base/sample_format.cc
  ${COBALT_CORE_DIR}media/base/sample_format.h
  ## TODO ## ${COBALT_CORE_DIR}media/base/sbplayer_pipeline.cc
  ## TODO ## ${COBALT_CORE_DIR}media/base/sbplayer_set_bounds_helper.cc
  ## TODO ## ${COBALT_CORE_DIR}media/base/sbplayer_set_bounds_helper.h
  ${COBALT_CORE_DIR}media/base/shell_audio_bus.cc
  ${COBALT_CORE_DIR}media/base/shell_audio_bus.h
  ${COBALT_CORE_DIR}media/base/shell_data_source_reader.cc
  ${COBALT_CORE_DIR}media/base/shell_data_source_reader.h
  ${COBALT_CORE_DIR}media/base/shell_media_platform.cc
  ${COBALT_CORE_DIR}media/base/shell_media_platform.h
  ${COBALT_CORE_DIR}media/base/starboard_player.cc
  ${COBALT_CORE_DIR}media/base/starboard_player.h
  ${COBALT_CORE_DIR}media/base/starboard_utils.cc
  ${COBALT_CORE_DIR}media/base/starboard_utils.h
  ${COBALT_CORE_DIR}media/base/stream_parser.cc
  ${COBALT_CORE_DIR}media/base/stream_parser.h
  ${COBALT_CORE_DIR}media/base/stream_parser_buffer.cc
  ${COBALT_CORE_DIR}media/base/stream_parser_buffer.h
  ${COBALT_CORE_DIR}media/base/text_track_config.cc
  ${COBALT_CORE_DIR}media/base/text_track_config.h
  ## TODO ## ${COBALT_CORE_DIR}media/base/video_codecs.cc
  ## TODO ## ${COBALT_CORE_DIR}media/base/video_codecs.h
  ## TODO ## ${COBALT_CORE_DIR}media/base/video_decoder_config.cc
  ## TODO ## ${COBALT_CORE_DIR}media/base/video_decoder_config.h
  ## TODO ## ${COBALT_CORE_DIR}media/base/video_frame_provider.h
  ## TODO ## ${COBALT_CORE_DIR}media/base/video_util.cc
  ## TODO ## ${COBALT_CORE_DIR}media/base/video_util.h
  ## TODO ## ${COBALT_CORE_DIR}media/filters/chunk_demuxer.cc
  ## TODO ## ${COBALT_CORE_DIR}media/filters/chunk_demuxer.h
  ## TODO ## ${COBALT_CORE_DIR}media/filters/frame_processor.cc
  ## TODO ## ${COBALT_CORE_DIR}media/filters/frame_processor.h
  ## TODO ## ${COBALT_CORE_DIR}media/filters/h264_bit_reader.cc
  ## TODO ## ${COBALT_CORE_DIR}media/filters/h264_bit_reader.h
  ## TODO ## ${COBALT_CORE_DIR}media/filters/h264_bitstream_buffer.cc
  ## TODO ## ${COBALT_CORE_DIR}media/filters/h264_bitstream_buffer.h
  ## TODO ## ${COBALT_CORE_DIR}media/filters/h264_parser.cc
  ## TODO ## ${COBALT_CORE_DIR}media/filters/h264_parser.h
  ## TODO ## ${COBALT_CORE_DIR}media/filters/h264_to_annex_b_bitstream_converter.cc
  ## TODO ## ${COBALT_CORE_DIR}media/filters/h264_to_annex_b_bitstream_converter.h
  ## TODO ## ${COBALT_CORE_DIR}media/filters/h265_parser.cc
  ## TODO ## ${COBALT_CORE_DIR}media/filters/h265_parser.h
  ## TODO ## ${COBALT_CORE_DIR}media/filters/shell_au.cc
  ## TODO ## ${COBALT_CORE_DIR}media/filters/shell_au.h
  ## TODO ## ${COBALT_CORE_DIR}media/filters/shell_avc_parser.cc
  ## TODO ## ${COBALT_CORE_DIR}media/filters/shell_avc_parser.h
  ## TODO ## ${COBALT_CORE_DIR}media/filters/shell_demuxer.cc
  ## TODO ## ${COBALT_CORE_DIR}media/filters/shell_demuxer.h
  ## TODO ## ${COBALT_CORE_DIR}media/filters/shell_mp4_map.cc
  ## TODO ## ${COBALT_CORE_DIR}media/filters/shell_mp4_map.h
  ## TODO ## ${COBALT_CORE_DIR}media/filters/shell_mp4_parser.cc
  ## TODO ## ${COBALT_CORE_DIR}media/filters/shell_mp4_parser.h
  ## TODO ## ${COBALT_CORE_DIR}media/filters/shell_parser.cc
  ## TODO ## ${COBALT_CORE_DIR}media/filters/shell_parser.h
  ## TODO ## ${COBALT_CORE_DIR}media/filters/shell_rbsp_stream.cc
  ## TODO ## ${COBALT_CORE_DIR}media/filters/shell_rbsp_stream.h
  ## TODO ## ${COBALT_CORE_DIR}media/filters/source_buffer_range.cc
  ## TODO ## ${COBALT_CORE_DIR}media/filters/source_buffer_range.h
  ## TODO ## ${COBALT_CORE_DIR}media/filters/source_buffer_state.cc
  ## TODO ## ${COBALT_CORE_DIR}media/filters/source_buffer_state.h
  ## TODO ## ${COBALT_CORE_DIR}media/filters/source_buffer_stream.cc
  ## TODO ## ${COBALT_CORE_DIR}media/filters/source_buffer_stream.h
  ## TODO ## ${COBALT_CORE_DIR}media/filters/stream_parser_factory.cc
  ## TODO ## ${COBALT_CORE_DIR}media/filters/stream_parser_factory.h
  ## TODO ## ${COBALT_CORE_DIR}media/formats/common/offset_byte_queue.cc
  ## TODO ## ${COBALT_CORE_DIR}media/formats/common/offset_byte_queue.h
  ## TODO ## ${COBALT_CORE_DIR}media/formats/mp4/aac.cc
  ## TODO ## ${COBALT_CORE_DIR}media/formats/mp4/aac.h
  ## TODO ## ${COBALT_CORE_DIR}media/formats/mp4/avc.cc
  ## TODO ## ${COBALT_CORE_DIR}media/formats/mp4/avc.h
  ## TODO ## ${COBALT_CORE_DIR}media/formats/mp4/bitstream_converter.cc
  ## TODO ## ${COBALT_CORE_DIR}media/formats/mp4/bitstream_converter.h
  ## TODO ## ${COBALT_CORE_DIR}media/formats/mp4/box_definitions.cc
  ## TODO ## ${COBALT_CORE_DIR}media/formats/mp4/box_definitions.h
  ## TODO ## ${COBALT_CORE_DIR}media/formats/mp4/box_reader.cc
  ## TODO ## ${COBALT_CORE_DIR}media/formats/mp4/box_reader.h
  ## TODO ## ${COBALT_CORE_DIR}media/formats/mp4/es_descriptor.cc
  ## TODO ## ${COBALT_CORE_DIR}media/formats/mp4/es_descriptor.h
  ## TODO ## ${COBALT_CORE_DIR}media/formats/mp4/fourccs.h
  ## TODO ## ${COBALT_CORE_DIR}media/formats/mp4/hevc.cc
  ## TODO ## ${COBALT_CORE_DIR}media/formats/mp4/hevc.h
  ## TODO ## ${COBALT_CORE_DIR}media/formats/mp4/mp4_stream_parser.cc
  ## TODO ## ${COBALT_CORE_DIR}media/formats/mp4/mp4_stream_parser.h
  ## TODO ## ${COBALT_CORE_DIR}media/formats/mp4/rcheck.h
  ## TODO ## ${COBALT_CORE_DIR}media/formats/mp4/sample_to_group_iterator.cc
  ## TODO ## ${COBALT_CORE_DIR}media/formats/mp4/sample_to_group_iterator.h
  ## TODO ## ${COBALT_CORE_DIR}media/formats/mp4/track_run_iterator.cc
  ## TODO ## ${COBALT_CORE_DIR}media/formats/mp4/track_run_iterator.h
  ## TODO ## ${COBALT_CORE_DIR}media/formats/mpeg/adts_constants.cc
  ## TODO ## ${COBALT_CORE_DIR}media/formats/mpeg/adts_constants.h
  ## TODO ## ${COBALT_CORE_DIR}media/formats/mpeg/adts_stream_parser.cc
  ## TODO ## ${COBALT_CORE_DIR}media/formats/mpeg/adts_stream_parser.h
  ## TODO ## ${COBALT_CORE_DIR}media/formats/mpeg/mpeg1_audio_stream_parser.cc
  ## TODO ## ${COBALT_CORE_DIR}media/formats/mpeg/mpeg1_audio_stream_parser.h
  ## TODO ## ${COBALT_CORE_DIR}media/formats/mpeg/mpeg_audio_stream_parser_base.cc
  ## TODO ## ${COBALT_CORE_DIR}media/formats/mpeg/mpeg_audio_stream_parser_base.h
  ## TODO ## ${COBALT_CORE_DIR}media/formats/webm/cluster_builder.cc
  ## TODO ## ${COBALT_CORE_DIR}media/formats/webm/cluster_builder.h
  ## TODO ## ${COBALT_CORE_DIR}media/formats/webm/opus_packet_builder.cc
  ## TODO ## ${COBALT_CORE_DIR}media/formats/webm/opus_packet_builder.h
  ## TODO ## ${COBALT_CORE_DIR}media/formats/webm/tracks_builder.cc
  ## TODO ## ${COBALT_CORE_DIR}media/formats/webm/tracks_builder.h
  ## TODO ## ${COBALT_CORE_DIR}media/formats/webm/webm_audio_client.cc
  ## TODO ## ${COBALT_CORE_DIR}media/formats/webm/webm_audio_client.h
  ## TODO ## ${COBALT_CORE_DIR}media/formats/webm/webm_cluster_parser.cc
  ## TODO ## ${COBALT_CORE_DIR}media/formats/webm/webm_cluster_parser.h
  ## TODO ## ${COBALT_CORE_DIR}media/formats/webm/webm_colour_parser.cc
  ## TODO ## ${COBALT_CORE_DIR}media/formats/webm/webm_colour_parser.h
  ## TODO ## ${COBALT_CORE_DIR}media/formats/webm/webm_constants.cc
  ## TODO ## ${COBALT_CORE_DIR}media/formats/webm/webm_constants.h
  ## TODO ## ${COBALT_CORE_DIR}media/formats/webm/webm_content_encodings.cc
  ## TODO ## ${COBALT_CORE_DIR}media/formats/webm/webm_content_encodings.h
  ## TODO ## ${COBALT_CORE_DIR}media/formats/webm/webm_content_encodings_client.cc
  ## TODO ## ${COBALT_CORE_DIR}media/formats/webm/webm_content_encodings_client.h
  ## TODO ## ${COBALT_CORE_DIR}media/formats/webm/webm_crypto_helpers.cc
  ## TODO ## ${COBALT_CORE_DIR}media/formats/webm/webm_crypto_helpers.h
  ## TODO ## ${COBALT_CORE_DIR}media/formats/webm/webm_info_parser.cc
  ## TODO ## ${COBALT_CORE_DIR}media/formats/webm/webm_info_parser.h
  ## TODO ## ${COBALT_CORE_DIR}media/formats/webm/webm_parser.cc
  ## TODO ## ${COBALT_CORE_DIR}media/formats/webm/webm_parser.h
  ## TODO ## ${COBALT_CORE_DIR}media/formats/webm/webm_stream_parser.cc
  ## TODO ## ${COBALT_CORE_DIR}media/formats/webm/webm_stream_parser.h
  ## TODO ## ${COBALT_CORE_DIR}media/formats/webm/webm_tracks_parser.cc
  ## TODO ## ${COBALT_CORE_DIR}media/formats/webm/webm_tracks_parser.h
  ## TODO ## ${COBALT_CORE_DIR}media/formats/webm/webm_video_client.cc
  ## TODO ## ${COBALT_CORE_DIR}media/formats/webm/webm_video_client.h
  ## TODO ## ${COBALT_CORE_DIR}media/formats/webm/webm_webvtt_parser.cc
  ## TODO ## ${COBALT_CORE_DIR}media/formats/webm/webm_webvtt_parser.h
  ## TODO ## ${COBALT_CORE_DIR}media/player/buffered_data_source.h
  ## TODO ## ${COBALT_CORE_DIR}media/player/web_media_player_impl.cc
  ## TODO ## ${COBALT_CORE_DIR}media/player/web_media_player_impl.h
  ## TODO ## ${COBALT_CORE_DIR}media/player/web_media_player_proxy.cc
  ## TODO ## ${COBALT_CORE_DIR}media/player/web_media_player_proxy.h
)

# cobalt/dom_parser/dom_parser.gyp
set(COBALT_dom_parser_SOURCES
  ${COBALT_CORE_DIR}dom_parser/html_decoder.cc
  ${COBALT_CORE_DIR}dom_parser/html_decoder.h
  ${COBALT_CORE_DIR}dom_parser/libxml_html_parser_wrapper.cc
  ${COBALT_CORE_DIR}dom_parser/libxml_html_parser_wrapper.h
  ${COBALT_CORE_DIR}dom_parser/libxml_parser_wrapper.cc
  ${COBALT_CORE_DIR}dom_parser/libxml_parser_wrapper.h
  ${COBALT_CORE_DIR}dom_parser/libxml_xml_parser_wrapper.cc
  ${COBALT_CORE_DIR}dom_parser/libxml_xml_parser_wrapper.h
  ${COBALT_CORE_DIR}dom_parser/parser.cc
  ${COBALT_CORE_DIR}dom_parser/parser.h
  ${COBALT_CORE_DIR}dom_parser/xml_decoder.cc
  ${COBALT_CORE_DIR}dom_parser/xml_decoder.h
)

#set(COBALT_browser_bindings_gen_gyp_SOURCES
#)

#'export_dependent_settings': [
#  # Additionally, ensure that the include directories for generated
#  # headers are put on the include directories for targets that depend
#  # on this one.
#  '<(DEPTH)/cobalt/browser/browser_bindings_gen.gyp:generated_types',
#],
#'dependencies': [
#  '<(DEPTH)/cobalt/base/base.gyp:base',
#  '<(DEPTH)/cobalt/network/network.gyp:network',
#  '<(DEPTH)/cobalt/browser/browser_bindings_gen.gyp:generated_types',
#  '<(DEPTH)/cobalt/dom/dom_exception.gyp:dom_exception',
#  '<(DEPTH)/cobalt/math/math.gyp:math',
#  '<(DEPTH)/cobalt/ui_navigation/ui_navigation.gyp:ui_navigation',
#  '<(DEPTH)/url/url.gyp:url',
#  'embed_resources_as_header_files',
#],
set(COBALT_CSSOM_SOURCES
  ${COBALT_CORE_DIR}cssom/absolute_url_value.cc
  ${COBALT_CORE_DIR}cssom/absolute_url_value.h
  ${COBALT_CORE_DIR}cssom/active_pseudo_class.cc
  ${COBALT_CORE_DIR}cssom/active_pseudo_class.h
  ${COBALT_CORE_DIR}cssom/after_pseudo_element.cc
  ${COBALT_CORE_DIR}cssom/after_pseudo_element.h
  ${COBALT_CORE_DIR}cssom/animation.h
  ${COBALT_CORE_DIR}cssom/animation_set.cc
  ${COBALT_CORE_DIR}cssom/animation_set.h
  ${COBALT_CORE_DIR}cssom/attribute_selector.cc
  ${COBALT_CORE_DIR}cssom/attribute_selector.h
  ${COBALT_CORE_DIR}cssom/before_pseudo_element.cc
  ${COBALT_CORE_DIR}cssom/before_pseudo_element.h
  ${COBALT_CORE_DIR}cssom/calc_value.cc
  ${COBALT_CORE_DIR}cssom/calc_value.h
  ${COBALT_CORE_DIR}cssom/cascade_precedence.h
  ${COBALT_CORE_DIR}cssom/cascaded_style.cc
  ${COBALT_CORE_DIR}cssom/cascaded_style.h
  ${COBALT_CORE_DIR}cssom/character_classification.h
  ${COBALT_CORE_DIR}cssom/child_combinator.cc
  ${COBALT_CORE_DIR}cssom/child_combinator.h
  ${COBALT_CORE_DIR}cssom/class_selector.cc
  ${COBALT_CORE_DIR}cssom/class_selector.h
  ${COBALT_CORE_DIR}cssom/cobalt_ui_nav_focus_transform_function.cc
  ${COBALT_CORE_DIR}cssom/cobalt_ui_nav_focus_transform_function.h
  ${COBALT_CORE_DIR}cssom/cobalt_ui_nav_spotlight_transform_function.cc
  ${COBALT_CORE_DIR}cssom/cobalt_ui_nav_spotlight_transform_function.h
  ${COBALT_CORE_DIR}cssom/color_stop.cc
  ${COBALT_CORE_DIR}cssom/color_stop.h
  ${COBALT_CORE_DIR}cssom/combinator.cc
  ${COBALT_CORE_DIR}cssom/combinator.h
  ${COBALT_CORE_DIR}cssom/combinator_visitor.h
  ${COBALT_CORE_DIR}cssom/complex_selector.cc
  ${COBALT_CORE_DIR}cssom/complex_selector.h
  ${COBALT_CORE_DIR}cssom/compound_selector.cc
  ${COBALT_CORE_DIR}cssom/compound_selector.h
  ${COBALT_CORE_DIR}cssom/computed_style.cc
  ${COBALT_CORE_DIR}cssom/computed_style.h
  ${COBALT_CORE_DIR}cssom/css.cc
  ${COBALT_CORE_DIR}cssom/css.h
  ${COBALT_CORE_DIR}cssom/css_computed_style_data.cc
  ${COBALT_CORE_DIR}cssom/css_computed_style_data.h
  ${COBALT_CORE_DIR}cssom/css_computed_style_declaration.cc
  ${COBALT_CORE_DIR}cssom/css_computed_style_declaration.h
  ${COBALT_CORE_DIR}cssom/css_condition_rule.cc
  ${COBALT_CORE_DIR}cssom/css_condition_rule.h
  ${COBALT_CORE_DIR}cssom/css_declaration_data.h
  ${COBALT_CORE_DIR}cssom/css_declaration_util.cc
  ${COBALT_CORE_DIR}cssom/css_declaration_util.h
  ${COBALT_CORE_DIR}cssom/css_declared_style_data.cc
  ${COBALT_CORE_DIR}cssom/css_declared_style_data.h
  ${COBALT_CORE_DIR}cssom/css_declared_style_declaration.cc
  ${COBALT_CORE_DIR}cssom/css_declared_style_declaration.h
  ${COBALT_CORE_DIR}cssom/css_font_face_declaration_data.cc
  ${COBALT_CORE_DIR}cssom/css_font_face_declaration_data.h
  ${COBALT_CORE_DIR}cssom/css_font_face_rule.cc
  ${COBALT_CORE_DIR}cssom/css_font_face_rule.h
  ${COBALT_CORE_DIR}cssom/css_grouping_rule.cc
  ${COBALT_CORE_DIR}cssom/css_grouping_rule.h
  ${COBALT_CORE_DIR}cssom/css_keyframe_rule.cc
  ${COBALT_CORE_DIR}cssom/css_keyframe_rule.h
  ${COBALT_CORE_DIR}cssom/css_keyframes_rule.cc
  ${COBALT_CORE_DIR}cssom/css_keyframes_rule.h
  ${COBALT_CORE_DIR}cssom/css_media_rule.cc
  ${COBALT_CORE_DIR}cssom/css_media_rule.h
  ${COBALT_CORE_DIR}cssom/css_parser.h
  ${COBALT_CORE_DIR}cssom/css_rule.cc
  ${COBALT_CORE_DIR}cssom/css_rule.h
  ${COBALT_CORE_DIR}cssom/css_rule_list.cc
  ${COBALT_CORE_DIR}cssom/css_rule_list.h
  ${COBALT_CORE_DIR}cssom/css_rule_style_declaration.cc
  ${COBALT_CORE_DIR}cssom/css_rule_style_declaration.h
  ${COBALT_CORE_DIR}cssom/css_rule_visitor.h
  ${COBALT_CORE_DIR}cssom/css_style_declaration.cc
  ${COBALT_CORE_DIR}cssom/css_style_declaration.h
  ${COBALT_CORE_DIR}cssom/css_style_rule.cc
  ${COBALT_CORE_DIR}cssom/css_style_rule.h
  ${COBALT_CORE_DIR}cssom/css_style_sheet.cc
  ${COBALT_CORE_DIR}cssom/css_style_sheet.h
  ${COBALT_CORE_DIR}cssom/css_transition.cc
  ${COBALT_CORE_DIR}cssom/css_transition.h
  ${COBALT_CORE_DIR}cssom/css_transition_set.cc
  ${COBALT_CORE_DIR}cssom/css_transition_set.h
  ${COBALT_CORE_DIR}cssom/descendant_combinator.cc
  ${COBALT_CORE_DIR}cssom/descendant_combinator.h
  ${COBALT_CORE_DIR}cssom/empty_pseudo_class.cc
  ${COBALT_CORE_DIR}cssom/empty_pseudo_class.h
  ${COBALT_CORE_DIR}cssom/filter_function.h
  ${COBALT_CORE_DIR}cssom/filter_function_list_value.cc
  ${COBALT_CORE_DIR}cssom/filter_function_list_value.h
  ${COBALT_CORE_DIR}cssom/focus_pseudo_class.cc
  ${COBALT_CORE_DIR}cssom/focus_pseudo_class.h
  ${COBALT_CORE_DIR}cssom/following_sibling_combinator.cc
  ${COBALT_CORE_DIR}cssom/following_sibling_combinator.h
  ${COBALT_CORE_DIR}cssom/font_style_value.cc
  ${COBALT_CORE_DIR}cssom/font_style_value.h
  ${COBALT_CORE_DIR}cssom/font_weight_value.cc
  ${COBALT_CORE_DIR}cssom/font_weight_value.h
  ${COBALT_CORE_DIR}cssom/hover_pseudo_class.cc
  ${COBALT_CORE_DIR}cssom/hover_pseudo_class.h
  ${COBALT_CORE_DIR}cssom/id_selector.cc
  ${COBALT_CORE_DIR}cssom/id_selector.h
  ${COBALT_CORE_DIR}cssom/integer_value.cc
  ${COBALT_CORE_DIR}cssom/integer_value.h
  ${COBALT_CORE_DIR}cssom/interpolate_property_value.cc
  ${COBALT_CORE_DIR}cssom/interpolate_property_value.h
  ${COBALT_CORE_DIR}cssom/interpolated_transform_property_value.cc
  ${COBALT_CORE_DIR}cssom/interpolated_transform_property_value.h
  ${COBALT_CORE_DIR}cssom/keyword_names.cc
  ${COBALT_CORE_DIR}cssom/keyword_names.h
  ${COBALT_CORE_DIR}cssom/keyword_value.cc
  ${COBALT_CORE_DIR}cssom/keyword_value.h
  ${COBALT_CORE_DIR}cssom/length_value.cc
  ${COBALT_CORE_DIR}cssom/length_value.h
  ${COBALT_CORE_DIR}cssom/linear_gradient_value.cc
  ${COBALT_CORE_DIR}cssom/linear_gradient_value.h
  ${COBALT_CORE_DIR}cssom/list_value.h
  ${COBALT_CORE_DIR}cssom/local_src_value.cc
  ${COBALT_CORE_DIR}cssom/local_src_value.h
  ${COBALT_CORE_DIR}cssom/map_to_mesh_function.cc
  ${COBALT_CORE_DIR}cssom/map_to_mesh_function.h
  ${COBALT_CORE_DIR}cssom/matrix_function.cc
  ${COBALT_CORE_DIR}cssom/matrix_function.h
  ${COBALT_CORE_DIR}cssom/media_feature.cc
  ${COBALT_CORE_DIR}cssom/media_feature.h
  ${COBALT_CORE_DIR}cssom/media_feature_keyword_value.cc
  ${COBALT_CORE_DIR}cssom/media_feature_keyword_value.h
  ${COBALT_CORE_DIR}cssom/media_feature_keyword_value_names.cc
  ${COBALT_CORE_DIR}cssom/media_feature_keyword_value_names.h
  ${COBALT_CORE_DIR}cssom/media_feature_names.cc
  ${COBALT_CORE_DIR}cssom/media_feature_names.h
  ${COBALT_CORE_DIR}cssom/media_list.cc
  ${COBALT_CORE_DIR}cssom/media_list.h
  ${COBALT_CORE_DIR}cssom/media_query.cc
  ${COBALT_CORE_DIR}cssom/media_query.h
  ${COBALT_CORE_DIR}cssom/media_type_names.cc
  ${COBALT_CORE_DIR}cssom/media_type_names.h
  ${COBALT_CORE_DIR}cssom/mutation_observer.h
  ${COBALT_CORE_DIR}cssom/next_sibling_combinator.cc
  ${COBALT_CORE_DIR}cssom/next_sibling_combinator.h
  ${COBALT_CORE_DIR}cssom/not_pseudo_class.cc
  ${COBALT_CORE_DIR}cssom/not_pseudo_class.h
  ${COBALT_CORE_DIR}cssom/number_value.cc
  ${COBALT_CORE_DIR}cssom/number_value.h
  ${COBALT_CORE_DIR}cssom/percentage_value.cc
  ${COBALT_CORE_DIR}cssom/percentage_value.h
  ${COBALT_CORE_DIR}cssom/property_definitions.cc
  ${COBALT_CORE_DIR}cssom/property_definitions.h
  ${COBALT_CORE_DIR}cssom/property_key_list_value.cc
  ${COBALT_CORE_DIR}cssom/property_key_list_value.h
  ${COBALT_CORE_DIR}cssom/property_list_value.h
  ${COBALT_CORE_DIR}cssom/property_value.h
  ${COBALT_CORE_DIR}cssom/property_value_visitor.cc
  ${COBALT_CORE_DIR}cssom/property_value_visitor.h
  ${COBALT_CORE_DIR}cssom/pseudo_class.h
  ${COBALT_CORE_DIR}cssom/pseudo_class_names.cc
  ${COBALT_CORE_DIR}cssom/pseudo_class_names.h
  ${COBALT_CORE_DIR}cssom/pseudo_element.h
  ${COBALT_CORE_DIR}cssom/pseudo_element_names.cc
  ${COBALT_CORE_DIR}cssom/pseudo_element_names.h
  ${COBALT_CORE_DIR}cssom/radial_gradient_value.cc
  ${COBALT_CORE_DIR}cssom/radial_gradient_value.h
  ${COBALT_CORE_DIR}cssom/ratio_value.cc
  ${COBALT_CORE_DIR}cssom/ratio_value.h
  ${COBALT_CORE_DIR}cssom/resolution_value.cc
  ${COBALT_CORE_DIR}cssom/resolution_value.h
  ${COBALT_CORE_DIR}cssom/rgba_color_value.cc
  ${COBALT_CORE_DIR}cssom/rgba_color_value.h
  ${COBALT_CORE_DIR}cssom/rotate_function.cc
  ${COBALT_CORE_DIR}cssom/rotate_function.h
  ${COBALT_CORE_DIR}cssom/scale_function.cc
  ${COBALT_CORE_DIR}cssom/scale_function.h
  ${COBALT_CORE_DIR}cssom/scoped_list_value.h
  ${COBALT_CORE_DIR}cssom/scoped_ref_list_value.h
  ${COBALT_CORE_DIR}cssom/selector.h
  ${COBALT_CORE_DIR}cssom/selector_tree.cc
  ${COBALT_CORE_DIR}cssom/selector_tree.h
  ${COBALT_CORE_DIR}cssom/selector_visitor.h
  ${COBALT_CORE_DIR}cssom/shadow_value.cc
  ${COBALT_CORE_DIR}cssom/shadow_value.h
  ${COBALT_CORE_DIR}cssom/simple_selector.h
  ${COBALT_CORE_DIR}cssom/specificity.cc
  ${COBALT_CORE_DIR}cssom/specificity.h
  ${COBALT_CORE_DIR}cssom/serializer.cc
  ${COBALT_CORE_DIR}cssom/serializer.h
  ${COBALT_CORE_DIR}cssom/string_value.cc
  ${COBALT_CORE_DIR}cssom/string_value.h
  ${COBALT_CORE_DIR}cssom/style_sheet.cc
  ${COBALT_CORE_DIR}cssom/style_sheet.h
  ${COBALT_CORE_DIR}cssom/style_sheet_list.cc
  ${COBALT_CORE_DIR}cssom/style_sheet_list.h
  ${COBALT_CORE_DIR}cssom/testing/mock_css_parser.h
  ${COBALT_CORE_DIR}cssom/time_list_value.cc
  ${COBALT_CORE_DIR}cssom/time_list_value.h
  ${COBALT_CORE_DIR}cssom/timing_function.cc
  ${COBALT_CORE_DIR}cssom/timing_function.h
  ${COBALT_CORE_DIR}cssom/timing_function_list_value.cc
  ${COBALT_CORE_DIR}cssom/timing_function_list_value.h
  ${COBALT_CORE_DIR}cssom/transform_function.h
  ${COBALT_CORE_DIR}cssom/transform_function_list_value.cc
  ${COBALT_CORE_DIR}cssom/transform_function_list_value.h
  ${COBALT_CORE_DIR}cssom/transform_function_visitor.h
  ${COBALT_CORE_DIR}cssom/transform_property_value.h
  ${COBALT_CORE_DIR}cssom/translate_function.cc
  ${COBALT_CORE_DIR}cssom/translate_function.h
  ${COBALT_CORE_DIR}cssom/type_selector.cc
  ${COBALT_CORE_DIR}cssom/type_selector.h
  ${COBALT_CORE_DIR}cssom/unicode_range_value.cc
  ${COBALT_CORE_DIR}cssom/unicode_range_value.h
  ${COBALT_CORE_DIR}cssom/universal_selector.cc
  ${COBALT_CORE_DIR}cssom/universal_selector.h
  ${COBALT_CORE_DIR}cssom/user_agent_style_sheet.cc
  ${COBALT_CORE_DIR}cssom/user_agent_style_sheet.h
  ${COBALT_CORE_DIR}cssom/url_src_value.cc
  ${COBALT_CORE_DIR}cssom/url_src_value.h
  ${COBALT_CORE_DIR}cssom/url_value.cc
  ${COBALT_CORE_DIR}cssom/url_value.h
  ${COBALT_CORE_DIR}cssom/viewport_size.h
)

#'dependencies': [
#  '<(DEPTH)/cobalt/base/base.gyp:base',
#  '<(DEPTH)/cobalt/cssom/cssom.gyp:cssom',
#],
set(COBALT_WEB_ANIMATIONS_SOURCES
  ${COBALT_CORE_DIR}web_animations/animatable.h
  ${COBALT_CORE_DIR}web_animations/animation.cc
  ${COBALT_CORE_DIR}web_animations/animation.h
  ${COBALT_CORE_DIR}web_animations/animation_effect_read_only.h
  ${COBALT_CORE_DIR}web_animations/animation_effect_timing_read_only.cc
  ${COBALT_CORE_DIR}web_animations/animation_effect_timing_read_only.h
  ${COBALT_CORE_DIR}web_animations/animation_set.cc
  ${COBALT_CORE_DIR}web_animations/animation_set.h
  ${COBALT_CORE_DIR}web_animations/animation_timeline.cc
  ${COBALT_CORE_DIR}web_animations/animation_timeline.h
  ${COBALT_CORE_DIR}web_animations/baked_animation_set.cc
  ${COBALT_CORE_DIR}web_animations/baked_animation_set.h
  ${COBALT_CORE_DIR}web_animations/keyframe.h
  ${COBALT_CORE_DIR}web_animations/keyframe_effect_read_only.cc
  ${COBALT_CORE_DIR}web_animations/keyframe_effect_read_only.h
  ${COBALT_CORE_DIR}web_animations/timed_task_queue.cc
  ${COBALT_CORE_DIR}web_animations/timed_task_queue.h
)

# '<(DEPTH)/cobalt/browser/browser_bindings_gen.gyp:generated_types',
#'dependencies': [
#  '<(DEPTH)/cobalt/base/base.gyp:base',
#  '<(DEPTH)/cobalt/browser/browser_bindings_gen.gyp:generated_types',
#  '<(DEPTH)/cobalt/csp/csp.gyp:csp',
#  '<(DEPTH)/cobalt/cssom/cssom.gyp:cssom',
#  '<(DEPTH)/cobalt/dom/dom_exception.gyp:dom_exception',
#  '<(DEPTH)/cobalt/loader/loader.gyp:loader',
#  '<(DEPTH)/cobalt/media/media.gyp:media',
#  '<(DEPTH)/cobalt/media_capture/media_capture.gyp:media_capture',
#  '<(DEPTH)/cobalt/media_session/media_session.gyp:media_session',
#  # Interface layer to avoid directly depending on network.
#  '<(DEPTH)/cobalt/network_bridge/network_bridge.gyp:network_bridge',
#  '<(DEPTH)/cobalt/page_visibility/page_visibility.gyp:page_visibility',
#  '<(DEPTH)/cobalt/script/script.gyp:script',
#  '<(DEPTH)/cobalt/speech/speech.gyp:speech',
#  '<(DEPTH)/cobalt/storage/storage.gyp:storage',
#  '<(DEPTH)/cobalt/system_window/system_window.gyp:system_window',
#  '<(DEPTH)/cobalt/ui_navigation/ui_navigation.gyp:ui_navigation',
#  '<(DEPTH)/cobalt/web_animations/web_animations.gyp:web_animations',
#  '<(DEPTH)/nb/nb.gyp:nb',
#  '<(DEPTH)/net/net.gyp:net',
#  '<(DEPTH)/url/url.gyp:url',
#],
#'conditions': [
#  ['enable_map_to_mesh == 1', {
#    'defines' : ['ENABLE_MAP_TO_MESH'],
#  }],
#],
set(COBALT_CORE_DOM_SOURCES
  ${COBALT_CORE_DIR}dom/animation_event.h
  ${COBALT_CORE_DIR}dom/animation_frame_request_callback_list.cc
  ${COBALT_CORE_DIR}dom/animation_frame_request_callback_list.h
  ${COBALT_CORE_DIR}dom/attr.cc
  ${COBALT_CORE_DIR}dom/attr.h
  ${COBALT_CORE_DIR}dom/audio_track.h
  ${COBALT_CORE_DIR}dom/audio_track_list.h
  ${COBALT_CORE_DIR}dom/base64.cc
  ${COBALT_CORE_DIR}dom/base64.h
  ${COBALT_CORE_DIR}dom/benchmark_stat_names.cc
  ${COBALT_CORE_DIR}dom/benchmark_stat_names.h
  ${COBALT_CORE_DIR}dom/blob.cc
  ${COBALT_CORE_DIR}dom/blob.h
  ##${COBALT_CORE_DIR}dom/blob_property_bag.h
  ${COBALT_CORE_DIR}dom/buffer_source.cc
  ${COBALT_CORE_DIR}dom/buffer_source.h
  ${COBALT_CORE_DIR}dom/c_val_key_list.cc
  ${COBALT_CORE_DIR}dom/c_val_key_list.h
  ${COBALT_CORE_DIR}dom/c_val_view.cc
  ${COBALT_CORE_DIR}dom/c_val_view.h
  ${COBALT_CORE_DIR}dom/camera_3d.cc
  ${COBALT_CORE_DIR}dom/camera_3d.h
  ${COBALT_CORE_DIR}dom/captions/system_caption_settings.cc
  ${COBALT_CORE_DIR}dom/captions/system_caption_settings.h
  ${COBALT_CORE_DIR}dom/cdata_section.cc
  ${COBALT_CORE_DIR}dom/cdata_section.h
  ${COBALT_CORE_DIR}dom/character_data.cc
  ${COBALT_CORE_DIR}dom/character_data.h
  ${COBALT_CORE_DIR}dom/comment.cc
  ${COBALT_CORE_DIR}dom/comment.h
  ${COBALT_CORE_DIR}dom/console.cc
  ${COBALT_CORE_DIR}dom/console.h
  ${COBALT_CORE_DIR}dom/crypto.cc
  ${COBALT_CORE_DIR}dom/crypto.h
  ${COBALT_CORE_DIR}dom/csp_delegate.cc
  ${COBALT_CORE_DIR}dom/csp_delegate.h
  ##${COBALT_CORE_DIR}dom/csp_delegate_enum.h
  ${COBALT_GEN_DIR}bindings/browser/source/cobalt/dom/blob_property_bag.h
  #
  ${COBALT_CORE_DIR}dom/csp_delegate_factory.cc
  ${COBALT_CORE_DIR}dom/csp_delegate_factory.h
  ${COBALT_CORE_DIR}dom/csp_violation_reporter.cc
  ${COBALT_CORE_DIR}dom/csp_violation_reporter.h
  ${COBALT_CORE_DIR}dom/css_animations_adapter.cc
  ${COBALT_CORE_DIR}dom/css_animations_adapter.h
  ${COBALT_CORE_DIR}dom/css_transitions_adapter.cc
  ${COBALT_CORE_DIR}dom/css_transitions_adapter.h
  ${COBALT_CORE_DIR}dom/custom_event.h
  ${COBALT_CORE_DIR}dom/device_orientation_event.cc
  ${COBALT_CORE_DIR}dom/device_orientation_event.h
  #${COBALT_CORE_DIR}dom/device_orientation_event_init.h
  ${COBALT_GEN_DIR}bindings/browser/source/cobalt/dom/device_orientation_event_init.h
  #
  ${COBALT_CORE_DIR}dom/document.cc
  ${COBALT_CORE_DIR}dom/document.h
  ${COBALT_CORE_DIR}dom/document_timeline.cc
  ${COBALT_CORE_DIR}dom/document_timeline.h
  ${COBALT_CORE_DIR}dom/document_type.cc
  ${COBALT_CORE_DIR}dom/document_type.h
  ${COBALT_CORE_DIR}dom/dom_animatable.cc
  ${COBALT_CORE_DIR}dom/dom_animatable.h
  ${COBALT_CORE_DIR}dom/dom_implementation.cc
  ${COBALT_CORE_DIR}dom/dom_implementation.h
  ${COBALT_CORE_DIR}dom/dom_parser.cc
  ${COBALT_CORE_DIR}dom/dom_parser.h
  ${COBALT_CORE_DIR}dom/dom_rect.h
  ${COBALT_CORE_DIR}dom/dom_rect_list.cc
  ${COBALT_CORE_DIR}dom/dom_rect_list.h
  ${COBALT_CORE_DIR}dom/dom_rect_read_only.h
  ${COBALT_CORE_DIR}dom/dom_settings.cc
  ${COBALT_CORE_DIR}dom/dom_settings.h
  ${COBALT_CORE_DIR}dom/dom_stat_tracker.cc
  ${COBALT_CORE_DIR}dom/dom_stat_tracker.h
  ${COBALT_CORE_DIR}dom/dom_string_map.cc
  ${COBALT_CORE_DIR}dom/dom_string_map.h
  ${COBALT_CORE_DIR}dom/dom_token_list.cc
  ${COBALT_CORE_DIR}dom/dom_token_list.h
  ${COBALT_CORE_DIR}dom/element.cc
  ${COBALT_CORE_DIR}dom/element.h
  ${COBALT_CORE_DIR}dom/eme/media_encrypted_event.cc
  ${COBALT_CORE_DIR}dom/eme/media_encrypted_event.h
  ${COBALT_CORE_DIR}dom/eme/media_key_message_event.cc
  ${COBALT_CORE_DIR}dom/eme/media_key_message_event.h
  ${COBALT_CORE_DIR}dom/eme/media_key_session.cc
  ${COBALT_CORE_DIR}dom/eme/media_key_session.h
  ${COBALT_CORE_DIR}dom/eme/media_key_status_map.cc
  ${COBALT_CORE_DIR}dom/eme/media_key_status_map.h
  ${COBALT_CORE_DIR}dom/eme/media_key_system_access.cc
  ${COBALT_CORE_DIR}dom/eme/media_key_system_access.h
  ${COBALT_CORE_DIR}dom/eme/media_keys.cc
  ${COBALT_CORE_DIR}dom/eme/media_keys.h
  ${COBALT_CORE_DIR}dom/error_event.h
  ${COBALT_CORE_DIR}dom/event.cc
  ${COBALT_CORE_DIR}dom/event.h
  #${COBALT_CORE_DIR}dom/event_init.h
  ${COBALT_GEN_DIR}bindings/browser/source/cobalt/dom/event_init.h
  #
  ${COBALT_CORE_DIR}dom/event_listener.h
  ${COBALT_CORE_DIR}dom/event_queue.cc
  ${COBALT_CORE_DIR}dom/event_queue.h
  ${COBALT_CORE_DIR}dom/event_target.cc
  ${COBALT_CORE_DIR}dom/event_target.h
  ${COBALT_CORE_DIR}dom/focus_event.cc
  ${COBALT_CORE_DIR}dom/focus_event.h
  #${COBALT_CORE_DIR}dom/focus_event_init.h
  ${COBALT_GEN_DIR}bindings/browser/source/cobalt/dom/focus_event_init.h
  #
  ${COBALT_CORE_DIR}dom/font_cache.cc
  ${COBALT_CORE_DIR}dom/font_cache.h
  ${COBALT_CORE_DIR}dom/font_face.cc
  ${COBALT_CORE_DIR}dom/font_face.h
  ${COBALT_CORE_DIR}dom/font_face_updater.cc
  ${COBALT_CORE_DIR}dom/font_face_updater.h
  ${COBALT_CORE_DIR}dom/font_list.cc
  ${COBALT_CORE_DIR}dom/font_list.h
  ${COBALT_CORE_DIR}dom/generic_event_handler_reference.cc
  ${COBALT_CORE_DIR}dom/generic_event_handler_reference.h
  ${COBALT_CORE_DIR}dom/global_stats.cc
  ${COBALT_CORE_DIR}dom/global_stats.h
  ${COBALT_CORE_DIR}dom/history.cc
  ${COBALT_CORE_DIR}dom/history.h
  ${COBALT_CORE_DIR}dom/html_anchor_element.cc
  ${COBALT_CORE_DIR}dom/html_anchor_element.h
  ${COBALT_CORE_DIR}dom/html_body_element.cc
  ${COBALT_CORE_DIR}dom/html_body_element.h
  ${COBALT_CORE_DIR}dom/html_br_element.cc
  ${COBALT_CORE_DIR}dom/html_br_element.h
  ${COBALT_CORE_DIR}dom/html_collection.cc
  ${COBALT_CORE_DIR}dom/html_collection.h
  ${COBALT_CORE_DIR}dom/html_div_element.cc
  ${COBALT_CORE_DIR}dom/html_div_element.h
  ${COBALT_CORE_DIR}dom/html_element.cc
  ${COBALT_CORE_DIR}dom/html_element.h
  ${COBALT_CORE_DIR}dom/html_element_context.cc
  ${COBALT_CORE_DIR}dom/html_element_context.h
  ${COBALT_CORE_DIR}dom/html_element_factory.cc
  ${COBALT_CORE_DIR}dom/html_element_factory.h
  ${COBALT_CORE_DIR}dom/html_head_element.cc
  ${COBALT_CORE_DIR}dom/html_head_element.h
  ${COBALT_CORE_DIR}dom/html_heading_element.cc
  ${COBALT_CORE_DIR}dom/html_heading_element.h
  ${COBALT_CORE_DIR}dom/html_html_element.cc
  ${COBALT_CORE_DIR}dom/html_html_element.h
  ${COBALT_CORE_DIR}dom/html_image_element.cc
  ${COBALT_CORE_DIR}dom/html_image_element.h
  ${COBALT_CORE_DIR}dom/html_link_element.cc
  ${COBALT_CORE_DIR}dom/html_link_element.h
  ${COBALT_CORE_DIR}dom/html_media_element.cc
  ${COBALT_CORE_DIR}dom/html_media_element.h
  ${COBALT_CORE_DIR}dom/html_meta_element.cc
  ${COBALT_CORE_DIR}dom/html_meta_element.h
  ${COBALT_CORE_DIR}dom/html_paragraph_element.cc
  ${COBALT_CORE_DIR}dom/html_paragraph_element.h
  ${COBALT_CORE_DIR}dom/html_script_element.cc
  ${COBALT_CORE_DIR}dom/html_script_element.h
  ${COBALT_CORE_DIR}dom/html_span_element.cc
  ${COBALT_CORE_DIR}dom/html_span_element.h
  ${COBALT_CORE_DIR}dom/html_style_element.cc
  ${COBALT_CORE_DIR}dom/html_style_element.h
  ${COBALT_CORE_DIR}dom/html_title_element.cc
  ${COBALT_CORE_DIR}dom/html_title_element.h
  ${COBALT_CORE_DIR}dom/html_unknown_element.h
  ${COBALT_CORE_DIR}dom/html_video_element.cc
  ${COBALT_CORE_DIR}dom/html_video_element.h
  ${COBALT_CORE_DIR}dom/initial_computed_style.cc
  ${COBALT_CORE_DIR}dom/initial_computed_style.h
  ${COBALT_CORE_DIR}dom/input_event.cc
  ${COBALT_CORE_DIR}dom/input_event.h
  #${COBALT_CORE_DIR}dom/input_event_init.h
  ${COBALT_GEN_DIR}bindings/browser/source/cobalt/dom/input_event_init.h
  #
  ${COBALT_CORE_DIR}dom/keyboard_event.cc
  ${COBALT_CORE_DIR}dom/keyboard_event.h
  #${COBALT_CORE_DIR}dom/keyboard_event_init.h
  ${COBALT_GEN_DIR}bindings/browser/source/cobalt/dom/keyboard_event_init.h
  #
  ${COBALT_CORE_DIR}dom/keycode.h
  ${COBALT_CORE_DIR}dom/keyframes_map_updater.cc
  ${COBALT_CORE_DIR}dom/keyframes_map_updater.h
  ${COBALT_CORE_DIR}dom/layout_boxes.h
  ${COBALT_CORE_DIR}dom/local_storage_database.cc
  ${COBALT_CORE_DIR}dom/local_storage_database.h
  ${COBALT_CORE_DIR}dom/location.cc
  ${COBALT_CORE_DIR}dom/location.h
  ${COBALT_CORE_DIR}dom/media_query_list.cc
  ${COBALT_CORE_DIR}dom/media_query_list.h
  ${COBALT_CORE_DIR}dom/media_source.cc
  ${COBALT_CORE_DIR}dom/media_source.h
  ${COBALT_CORE_DIR}dom/memory_info.cc
  ${COBALT_CORE_DIR}dom/memory_info.h
  ${COBALT_CORE_DIR}dom/message_event.cc
  ${COBALT_CORE_DIR}dom/message_event.h
  ${COBALT_CORE_DIR}dom/mime_type_array.cc
  ${COBALT_CORE_DIR}dom/mime_type_array.h
  ${COBALT_CORE_DIR}dom/mouse_event.cc
  ${COBALT_CORE_DIR}dom/mouse_event.h
  #${COBALT_CORE_DIR}dom/mouse_event_init.h
  ${COBALT_GEN_DIR}bindings/browser/source/cobalt/dom/mouse_event_init.h
  #
  ${COBALT_CORE_DIR}dom/mutation_observer.cc
  ${COBALT_CORE_DIR}dom/mutation_observer.h
  #${COBALT_CORE_DIR}dom/mutation_observer_init.h
  ${COBALT_GEN_DIR}bindings/browser/source/cobalt/dom/mutation_observer_init.h
  #
  ${COBALT_CORE_DIR}dom/mutation_observer_task_manager.cc
  ${COBALT_CORE_DIR}dom/mutation_observer_task_manager.h
  ${COBALT_CORE_DIR}dom/mutation_record.cc
  ${COBALT_CORE_DIR}dom/mutation_record.h
  ${COBALT_CORE_DIR}dom/mutation_reporter.cc
  ${COBALT_CORE_DIR}dom/mutation_reporter.h
  ${COBALT_CORE_DIR}dom/named_node_map.cc
  ${COBALT_CORE_DIR}dom/named_node_map.h
  ## TODO ## ${COBALT_CORE_DIR}dom/navigator.cc
  ## TODO ## ${COBALT_CORE_DIR}dom/navigator.h
  ${COBALT_CORE_DIR}dom/node.cc
  ${COBALT_CORE_DIR}dom/node.h
  ${COBALT_CORE_DIR}dom/node_children_iterator.h
  #${COBALT_CORE_DIR}dom/node_collection.h
  #${COBALT_GEN_DIR}bindings/browser/source/cobalt/dom/node_collection.h
  #
  ${COBALT_CORE_DIR}dom/node_descendants_iterator.h
  ${COBALT_CORE_DIR}dom/node_list.cc
  ${COBALT_CORE_DIR}dom/node_list.h
  ${COBALT_CORE_DIR}dom/node_list_live.cc
  ${COBALT_CORE_DIR}dom/node_list_live.h
  ${COBALT_CORE_DIR}dom/on_error_event_listener.cc
  ${COBALT_CORE_DIR}dom/on_error_event_listener.h
  ${COBALT_CORE_DIR}dom/on_screen_keyboard.cc
  ${COBALT_CORE_DIR}dom/on_screen_keyboard.h
  ${COBALT_CORE_DIR}dom/on_screen_keyboard_bridge.h
  ${COBALT_CORE_DIR}dom/performance.cc
  ${COBALT_CORE_DIR}dom/performance.h
  ${COBALT_CORE_DIR}dom/performance_timing.cc
  ${COBALT_CORE_DIR}dom/performance_timing.h
  ${COBALT_CORE_DIR}dom/plugin_array.cc
  ${COBALT_CORE_DIR}dom/plugin_array.h
  ${COBALT_CORE_DIR}dom/pointer_event.cc
  ${COBALT_CORE_DIR}dom/pointer_event.h
  #${COBALT_CORE_DIR}dom/pointer_event_init.h
  ${COBALT_GEN_DIR}bindings/browser/source/cobalt/dom/pointer_event_init.h
  #
  ${COBALT_CORE_DIR}dom/pointer_state.cc
  ${COBALT_CORE_DIR}dom/pointer_state.h
  ${COBALT_CORE_DIR}dom/progress_event.cc
  ${COBALT_CORE_DIR}dom/progress_event.h
  ${COBALT_CORE_DIR}dom/pseudo_element.cc
  ${COBALT_CORE_DIR}dom/pseudo_element.h
  ${COBALT_CORE_DIR}dom/registered_observer.h
  ${COBALT_CORE_DIR}dom/registered_observer_list.cc
  ${COBALT_CORE_DIR}dom/registered_observer_list.h
  ${COBALT_CORE_DIR}dom/rule_matching.cc
  ${COBALT_CORE_DIR}dom/rule_matching.h
  ${COBALT_CORE_DIR}dom/screen.h
  ${COBALT_CORE_DIR}dom/screenshot.cc
  ${COBALT_CORE_DIR}dom/screenshot.h
  ${COBALT_CORE_DIR}dom/screenshot_manager.cc
  ${COBALT_CORE_DIR}dom/screenshot_manager.h
  ${COBALT_CORE_DIR}dom/security_policy_violation_event.cc
  ${COBALT_CORE_DIR}dom/security_policy_violation_event.h
  ${COBALT_CORE_DIR}dom/serializer.cc
  ${COBALT_CORE_DIR}dom/serializer.h
  ${COBALT_CORE_DIR}dom/source_buffer.cc
  ${COBALT_CORE_DIR}dom/source_buffer.h
  ${COBALT_CORE_DIR}dom/source_buffer_list.cc
  ${COBALT_CORE_DIR}dom/source_buffer_list.h
  ${COBALT_CORE_DIR}dom/storage.cc
  ${COBALT_CORE_DIR}dom/storage.h
  ${COBALT_CORE_DIR}dom/storage_area.cc
  ${COBALT_CORE_DIR}dom/storage_area.h
  ${COBALT_CORE_DIR}dom/storage_event.cc
  ${COBALT_CORE_DIR}dom/storage_event.h
  ${COBALT_CORE_DIR}dom/test_runner.cc
  ${COBALT_CORE_DIR}dom/test_runner.h
  ${COBALT_CORE_DIR}dom/text.cc
  ${COBALT_CORE_DIR}dom/text.h
  ${COBALT_CORE_DIR}dom/time_ranges.cc
  ${COBALT_CORE_DIR}dom/time_ranges.h
  ${COBALT_CORE_DIR}dom/track_base.h
  ${COBALT_CORE_DIR}dom/track_default.h
  ${COBALT_CORE_DIR}dom/track_default_list.h
  ${COBALT_CORE_DIR}dom/track_event.h
  ${COBALT_CORE_DIR}dom/transition_event.h
  ${COBALT_CORE_DIR}dom/ui_event.cc
  ${COBALT_CORE_DIR}dom/ui_event.h
  #${COBALT_CORE_DIR}dom/ui_event_init.h
  ${COBALT_GEN_DIR}bindings/browser/source/cobalt/dom/ui_event_init.h
  #
  ${COBALT_CORE_DIR}dom/ui_event_with_key_state.cc
  ${COBALT_CORE_DIR}dom/ui_event_with_key_state.h
  ${COBALT_CORE_DIR}dom/url.cc
  ${COBALT_CORE_DIR}dom/url.h
  ${COBALT_CORE_DIR}dom/url_registry.h
  ${COBALT_CORE_DIR}dom/url_utils.cc
  ${COBALT_CORE_DIR}dom/url_utils.h
  ${COBALT_CORE_DIR}dom/video_track.h
  ${COBALT_CORE_DIR}dom/video_track_list.h
  ${COBALT_CORE_DIR}dom/wheel_event.cc
  ${COBALT_CORE_DIR}dom/wheel_event.h
  #${COBALT_CORE_DIR}dom/wheel_event_init.h
  ${COBALT_GEN_DIR}bindings/browser/source/cobalt/dom/wheel_event_init.h
  #
  ${COBALT_CORE_DIR}dom/window.cc
  ${COBALT_CORE_DIR}dom/window.h
  ${COBALT_CORE_DIR}dom/window_timers.cc
  ${COBALT_CORE_DIR}dom/window_timers.h
  ${COBALT_CORE_DIR}dom/xml_document.h
  ${COBALT_CORE_DIR}dom/xml_serializer.cc
  ${COBALT_CORE_DIR}dom/xml_serializer.h
)

add_library(COBALT_CORE STATIC
  ${COBALT_port_base_SOURCES}
  ${COBALT_ui_navigation_SOURCES}
  ${starboard_platform_SOURCES}
  ${COBALT_third_party_super_fast_hash_SOURCES}
  ${COBALT_nb_SOURCES}
  ${COBALT_script_gyp_SOURCES}
  ${COBALT_dom_exception_SOURCES}
  ${COBALT_dom_parser_SOURCES}
  ${COBALT_WEB_ANIMATIONS_SOURCES}
  ${COBALT_math_SOURCES}
  ${COBALT_media_SOURCES}
  ${COBALT_CSSOM_SOURCES}
  ${COBALT_CORE_DOM_SOURCES}
  #${COBALT_skia_cobalt_SOURCES}
  #${COBALT_skia_common_SOURCES}
)

target_link_libraries(COBALT_CORE PUBLIC
  COBALT_BASE
  #GFX_GEOMETRY
  #${BASE_LIBRARIES}
  base
  SKIA
  dynamic_annotations
  UI_GFX
  #BLINK_RENDERER_CORE
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

set_property(TARGET COBALT_CORE PROPERTY CXX_STANDARD 17)

target_include_directories(COBALT_CORE PRIVATE
  ${GNET_PARENT_DIR} # to ./net
  #${UI_PARENT_DIR}
  ${COBALT_CORE_DIR}
  #${COBALT_CORE_DIR}/common
  #${BASE_DIR}
  ${CHROMIUM_DIR} # to third_party/skia/include/core/SkWriteBuffer.h
)

target_include_directories(COBALT_CORE PUBLIC
  ${COBALT_CORE_PARENT_DIR} # to ./cobalt
  ${COBALT_COMMON_INCLUDES}
)

target_compile_definitions(COBALT_CORE PRIVATE
  #BASE_IMPLEMENTATION=1
  #BASE_I18N_IMPLEMENTATION=1
  #
  ${COBALT_COMMON_DEFINES}
  # media
  MEDIA_IMPLEMENTATION=1
  # renderer
  COBALT_MINIMUM_FRAME_TIME_IN_MILLISECONDS=10
  #ENABLE_MAP_TO_MESH=1
  # net
  NET_IMPLEMENTATION=1
  #ENABLE_BUILT_IN_DNS=1
  # To be removed in the future when want to enable HTTP cache.
  HTTP_CACHE_DISABLED_FOR_STARBOARD=1
  # To be removed in the future when we want to enable QUIC.
  QUIC_DISABLED_FOR_STARBOARD=1
  # TODO[johnx]: find out how we can verify local cert issuer and
  # re-enable this test. Consider adding a binary cert for local issuer
  # for debug builds.
  STARBOARD_NO_LOCAL_ISSUER=1
  HTTP_CACHE_DISABLED_FOR_STARBOARD=1
  ENABLE_BUILT_IN_DNS=1
  QUIC_DISABLED_FOR_STARBOARD=1
  STARBOARD_NO_LOCAL_ISSUER=1
  # starboard/linux/shared/BUILD.gn
  STARBOARD_IMPLEMENTATION=1
)

target_compile_options(COBALT_CORE PRIVATE
  -Wno-error
  -Wno-macro-redefined
  -Wno-implicit-function-declaration
  -Wno-c++11-narrowing
  -Wno-macro-redefined
  #-Wno-undef
  #-Wno-unknown-pragmas
  #-Wno-nonportable-include-path
  #-Wno-unknown-argument
  # Warn for implicit type conversions that may change a value.
  #-Wconversion
  -Wno-c++11-compat
  # This complains about "override", which we use heavily.
  -Wno-c++11-extensions
  # Warns on switches on enums that cover all enum values but
  # also contain a default: branch. Chrome is full of that.
  -Wno-covered-switch-default
  # protobuf uses hash_map.
  -Wno-deprecated
  # Don't warn about the "struct foo f = {0};" initialization pattern.
  -Wno-missing-field-initializers
  # Do not warn for implicit sign conversions.
  -Wno-sign-conversion
  -Wno-unnamed-type-template-args
  # Triggered by the COMPILE_ASSERT macro.
  -Wno-unused-local-typedef
  # Do not warn if a function or variable cannot be implicitly
  # instantiated.
  -Wno-undefined-var-template
  # Do not warn about an implicit exception spec mismatch.
  -Wno-implicit-exception-spec-mismatch
  #
  -Wno-inconsistent-missing-override
)
