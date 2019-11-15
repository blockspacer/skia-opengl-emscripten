cmake_minimum_required(VERSION 2.8)

#'includes': [
#  'stub_sources.gypi'
#],
#deps = [
#  "//starboard/common",
#  ":starboard_base_symbolize",
#  "//third_party/dlmalloc",
#  "//third_party/libevent",
#  "//third_party/libvpx",
#]
# see https://github.com/blockspacer/cobalt-clone-28052019/blob/master/src/starboard/linux/shared/BUILD.gn
list(APPEND starboard_platform_SOURCES
  ${COBALT_PORT_DIR}/starboard/shared/iso/character_is_alphanumeric.cc
  ${COBALT_PORT_DIR}/starboard/shared/iso/character_is_digit.cc
  ${COBALT_PORT_DIR}/starboard/shared/iso/character_is_hex_digit.cc
  ${COBALT_PORT_DIR}/starboard/shared/iso/character_is_space.cc
  ${COBALT_PORT_DIR}/starboard/shared/iso/character_is_upper.cc
  ${COBALT_PORT_DIR}/starboard/shared/iso/character_to_lower.cc
  ${COBALT_PORT_DIR}/starboard/shared/iso/character_to_upper.cc
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
  ${COBALT_PORT_DIR}/starboard/shared/stub/system_get_stack.cc
  ${COBALT_PORT_DIR}/starboard/shared/stub/system_symbolize.cc
  ${COBALT_PORT_DIR}/starboard/shared/stub/thread_get_id.cc
  ${COBALT_PORT_DIR}/starboard/shared/stub/thread_get_local_value.cc
  ${COBALT_PORT_DIR}/starboard/shared/stub/thread_get_name.cc
  ${COBALT_PORT_DIR}/starboard/shared/stub/thread_set_name.cc
  ${COBALT_PORT_DIR}/starboard/shared/stub/socket_get_interface_address.cc
  ${COBALT_PORT_DIR}/starboard/shared/nouser/user_get_current.cc
  ${COBALT_PORT_DIR}/starboard/shared/nouser/user_get_property.cc
  ${COBALT_PORT_DIR}/starboard/shared/nouser/user_get_signed_in.cc
  ${COBALT_PORT_DIR}/starboard/shared/nouser/user_internal.cc
  ${COBALT_PORT_DIR}/starboard/shared/signal/crash_signals.h
  ${COBALT_PORT_DIR}/starboard/shared/signal/crash_signals_sigaction.cc
  ${COBALT_PORT_DIR}/starboard/shared/signal/suspend_signals.cc
  ${COBALT_PORT_DIR}/starboard/shared/signal/suspend_signals.h
  ${COBALT_PORT_DIR}/starboard/shared/starboard/application.cc
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
  ${COBALT_PORT_DIR}/starboard/shared/starboard/log_mutex.cc
  ${COBALT_PORT_DIR}/starboard/shared/starboard/log_mutex.h
  ${COBALT_PORT_DIR}/starboard/shared/starboard/log_raw_dump_stack.cc
  ${COBALT_PORT_DIR}/starboard/shared/starboard/log_raw_format.cc
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
  ${COBALT_PORT_DIR}/starboard/shared/stub/media_is_output_protected.cc
  ${COBALT_PORT_DIR}/starboard/shared/stub/media_is_supported.cc
  ${COBALT_PORT_DIR}/starboard/shared/stub/media_is_transfer_characteristics_supported.cc
  ${COBALT_PORT_DIR}/starboard/shared/stub/media_is_video_supported.cc
  ${COBALT_PORT_DIR}/starboard/shared/stub/media_set_audio_write_duration.cc
  ${COBALT_PORT_DIR}/starboard/shared/stub/media_set_output_protection.cc
  ${COBALT_PORT_DIR}/starboard/shared/stub/media_is_buffer_using_memory_pool.cc
  ${COBALT_PORT_DIR}/starboard/shared/starboard/new.cc
  #${COBALT_PORT_DIR}/starboard/shared/stub/audio_sink_type_dispatcher.cc
  ${COBALT_PORT_DIR}/starboard/shared/stub/media_is_audio_supported.cc
  #${COBALT_PORT_DIR}/starboard/shared/stub/alsa_audio_sink_type.cc
    ${COBALT_PORT_DIR}/starboard/shared/stub/system_get_path.cc
)


if(TARGET_LINUX)
  list(APPEND starboard_platform_SOURCES
    #
    # ${COBALT_PORT_DIR}/starboard/shared/stub/image_decode.cc
    # ${COBALT_PORT_DIR}/starboard/shared/stub/image_is_decode_supported.cc
    # ${COBALT_PORT_DIR}/starboard/shared/stub/media_is_supported.cc
    # ## TODO ## ${COBALT_PORT_DIR}/starboard/shared/stub/microphone_close.cc
    # ## TODO ## ${COBALT_PORT_DIR}/starboard/shared/stub/microphone_create.cc
    # ## TODO ## ${COBALT_PORT_DIR}/starboard/shared/stub/microphone_destroy.cc
    # ## TODO ## ${COBALT_PORT_DIR}/starboard/shared/stub/microphone_get_available.cc
    # ## TODO ## ${COBALT_PORT_DIR}/starboard/shared/stub/microphone_is_sample_rate_supported.cc
    # ## TODO ## ${COBALT_PORT_DIR}/starboard/shared/stub/microphone_open.cc
    # ## TODO ## ${COBALT_PORT_DIR}/starboard/shared/stub/microphone_read.cc
    # ${COBALT_PORT_DIR}/starboard/shared/stub/system_get_total_gpu_memory.cc
    # ${COBALT_PORT_DIR}/starboard/shared/stub/system_get_used_gpu_memory.cc
    # ${COBALT_PORT_DIR}/starboard/shared/stub/system_hide_splash_screen.cc
    # ${COBALT_PORT_DIR}/starboard/shared/stub/system_raise_platform_error.cc
    ## TODO ## ${COBALT_PORT_DIR}/starboard/linux/shared/media_is_video_supported.cc
    ## TODO ## ${COBALT_PORT_DIR}/starboard/linux/shared/player_components_impl.cc
    ## TODO ## ${COBALT_PORT_DIR}/starboard/linux/shared/system_get_path.cc
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
    ## TODO ## ${COBALT_PORT_DIR}/starboard/shared/iso/directory_close.cc
    ## TODO ## ${COBALT_PORT_DIR}/starboard/shared/iso/directory_get_next.cc
    ## TODO ## ${COBALT_PORT_DIR}/starboard/shared/iso/directory_open.cc
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
    ## TODO ## ${COBALT_PORT_DIR}/starboard/shared/linux/socket_get_interface_address.cc
    ## TODO ## ${COBALT_PORT_DIR}/starboard/shared/linux/system_symbolize.cc
    ## TODO ## ${COBALT_PORT_DIR}/starboard/shared/linux/thread_get_id.cc
    ## TODO ## ${COBALT_PORT_DIR}/starboard/shared/linux/thread_get_name.cc
    ## TODO ## ${COBALT_PORT_DIR}/starboard/shared/linux/thread_set_name.cc
    #
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
    ## TODO ## ${COBALT_PORT_DIR}/starboard/shared/pulse/pulse_audio_sink_type.cc
    ## TODO ## ${COBALT_PORT_DIR}/starboard/shared/pulse/pulse_audio_sink_type.h
    ## TODO ## ${COBALT_PORT_DIR}/starboard/shared/pulse/pulse_dynamic_load_dispatcher.cc
    ## TODO ## ${COBALT_PORT_DIR}/starboard/shared/pulse/pulse_dynamic_load_dispatcher.h
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
    ## TODO ## ${COBALT_PORT_DIR}/starboard/shared/starboard/media/media_is_buffer_using_memory_pool.cc
    ${COBALT_PORT_DIR}/starboard/shared/starboard/player/decoded_audio_internal.cc
    ${COBALT_PORT_DIR}/starboard/shared/starboard/player/decoded_audio_internal.h
    ${COBALT_PORT_DIR}/starboard/shared/starboard/player/filter/audio_decoder_internal.h
    ${COBALT_PORT_DIR}/starboard/shared/starboard/player/filter/audio_frame_tracker.cc
    ${COBALT_PORT_DIR}/starboard/shared/starboard/player/filter/audio_frame_tracker.h
    ${COBALT_PORT_DIR}/starboard/shared/starboard/player/filter/audio_renderer_internal.cc
    ${COBALT_PORT_DIR}/starboard/shared/starboard/player/filter/audio_renderer_internal.h
    ${COBALT_PORT_DIR}/starboard/shared/starboard/player/filter/audio_renderer_sink.h
    ${COBALT_PORT_DIR}/starboard/shared/starboard/player/filter/audio_renderer_sink_impl.cc
    ${COBALT_PORT_DIR}/starboard/shared/starboard/player/filter/audio_renderer_sink_impl.h
    ${COBALT_PORT_DIR}/starboard/shared/starboard/player/filter/audio_resampler_impl.cc
    ${COBALT_PORT_DIR}/starboard/shared/starboard/player/filter/audio_time_stretcher.cc
    ${COBALT_PORT_DIR}/starboard/shared/starboard/player/filter/audio_time_stretcher.h
    ${COBALT_PORT_DIR}/starboard/shared/starboard/player/filter/cpu_video_frame.cc
    ${COBALT_PORT_DIR}/starboard/shared/starboard/player/filter/cpu_video_frame.h
    ${COBALT_PORT_DIR}/starboard/shared/starboard/player/filter/decoded_audio_queue.cc
    ${COBALT_PORT_DIR}/starboard/shared/starboard/player/filter/decoded_audio_queue.h
    ${COBALT_PORT_DIR}/starboard/shared/starboard/player/filter/filter_based_player_worker_handler.cc
    ${COBALT_PORT_DIR}/starboard/shared/starboard/player/filter/filter_based_player_worker_handler.h
    ${COBALT_PORT_DIR}/starboard/shared/starboard/player/filter/media_time_provider.h
    ${COBALT_PORT_DIR}/starboard/shared/starboard/player/filter/media_time_provider_impl.cc
    ${COBALT_PORT_DIR}/starboard/shared/starboard/player/filter/media_time_provider_impl.h
    ${COBALT_PORT_DIR}/starboard/shared/starboard/player/filter/player_components.h
    ${COBALT_PORT_DIR}/starboard/shared/starboard/player/filter/punchout_video_renderer_sink.cc
    ${COBALT_PORT_DIR}/starboard/shared/starboard/player/filter/punchout_video_renderer_sink.h
    ${COBALT_PORT_DIR}/starboard/shared/starboard/player/filter/video_decoder_internal.h
    ${COBALT_PORT_DIR}/starboard/shared/starboard/player/filter/video_frame_internal.h
    ${COBALT_PORT_DIR}/starboard/shared/starboard/player/filter/video_renderer_internal.cc
    ${COBALT_PORT_DIR}/starboard/shared/starboard/player/filter/video_renderer_internal.h
    ${COBALT_PORT_DIR}/starboard/shared/starboard/player/filter/wsola_internal.cc
    ${COBALT_PORT_DIR}/starboard/shared/starboard/player/filter/wsola_internal.h
    ${COBALT_PORT_DIR}/starboard/shared/starboard/player/input_buffer_internal.cc
    ${COBALT_PORT_DIR}/starboard/shared/starboard/player/input_buffer_internal.h
    ${COBALT_PORT_DIR}/starboard/shared/starboard/player/job_queue.cc
    ${COBALT_PORT_DIR}/starboard/shared/starboard/player/job_queue.h
    ${COBALT_PORT_DIR}/starboard/shared/starboard/player/job_thread.cc
    ${COBALT_PORT_DIR}/starboard/shared/starboard/player/job_thread.h
    ${COBALT_PORT_DIR}/starboard/shared/starboard/player/player_create.cc
    ${COBALT_PORT_DIR}/starboard/shared/starboard/player/player_destroy.cc
    ${COBALT_PORT_DIR}/starboard/shared/starboard/player/player_get_current_frame.cc
    ${COBALT_PORT_DIR}/starboard/shared/starboard/player/player_get_info.cc
    ${COBALT_PORT_DIR}/starboard/shared/starboard/player/player_get_info2.cc
    ${COBALT_PORT_DIR}/starboard/shared/starboard/player/player_internal.cc
    ${COBALT_PORT_DIR}/starboard/shared/starboard/player/player_internal.h
    ${COBALT_PORT_DIR}/starboard/shared/starboard/player/player_output_mode_supported.cc
    ${COBALT_PORT_DIR}/starboard/shared/starboard/player/player_output_mode_supported.cc
    ${COBALT_PORT_DIR}/starboard/shared/starboard/player/player_seek.cc
    ${COBALT_PORT_DIR}/starboard/shared/starboard/player/player_seek2.cc
    ${COBALT_PORT_DIR}/starboard/shared/starboard/player/player_set_bounds.cc
    ${COBALT_PORT_DIR}/starboard/shared/starboard/player/player_set_playback_rate.cc
    ${COBALT_PORT_DIR}/starboard/shared/starboard/player/player_set_volume.cc
    ${COBALT_PORT_DIR}/starboard/shared/starboard/player/player_worker.cc
    ${COBALT_PORT_DIR}/starboard/shared/starboard/player/player_worker.h
    ${COBALT_PORT_DIR}/starboard/shared/starboard/player/player_write_end_of_stream.cc
    ${COBALT_PORT_DIR}/starboard/shared/starboard/player/player_write_sample.cc
    ${COBALT_PORT_DIR}/starboard/shared/starboard/player/player_write_sample2.cc
    ${COBALT_PORT_DIR}/starboard/shared/starboard/player/player_get_maximum_number_of_samples_per_write.cc
  )
endif()

if(TARGET_LINUX OR TARGET_EMSCRIPTEN)
  list(APPEND starboard_platform_SOURCES
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
    ${COBALT_PORT_DIR}/starboard/shared/pthread/thread_context_get_pointer.cc
    ${COBALT_PORT_DIR}/starboard/shared/pthread/thread_context_internal.h
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
    ${COBALT_PORT_DIR}/starboard/shared/pthread/thread_sampler_create.cc
    ${COBALT_PORT_DIR}/starboard/shared/pthread/thread_sampler_destroy.cc
    ${COBALT_PORT_DIR}/starboard/shared/pthread/thread_sampler_freeze.cc
    ${COBALT_PORT_DIR}/starboard/shared/pthread/thread_sampler_internal.cc
    ${COBALT_PORT_DIR}/starboard/shared/pthread/thread_sampler_internal.h
    ${COBALT_PORT_DIR}/starboard/shared/pthread/thread_sampler_is_supported.cc
    #${COBALT_PORT_DIR}/starboard/shared/pthread/thread_sampler_is_supported.h
    ${COBALT_PORT_DIR}/starboard/shared/pthread/thread_sampler_thaw.cc
    ${COBALT_PORT_DIR}/starboard/shared/pthread/thread_set_local_value.cc
    ${COBALT_PORT_DIR}/starboard/shared/pthread/thread_yield.cc
    #
    ${COBALT_PORT_DIR}/starboard/linux/shared/atomic_public.h
    ${COBALT_PORT_DIR}/starboard/linux/shared/configuration_public.h
    ## TODO ## requires RefCounted from starboard_common
    ${COBALT_PORT_DIR}/starboard/linux/shared/decode_target_get_info.cc
    ${COBALT_PORT_DIR}/starboard/linux/shared/audio_sink_type_dispatcher.cc
    ## TODO ## requires RefCounted from starboard_common
    ${COBALT_PORT_DIR}/starboard/linux/shared/decode_target_internal.cc
    ## TODO ## requires RefCounted from starboard_common
    ${COBALT_PORT_DIR}/starboard/linux/shared/decode_target_internal.h
    ## TODO ## requires RefCounted from starboard_common
    ${COBALT_PORT_DIR}/starboard/linux/shared/decode_target_release.cc
    ${COBALT_PORT_DIR}/starboard/linux/shared/system_get_connection_type.cc
    ${COBALT_PORT_DIR}/starboard/linux/shared/system_get_device_type.cc
    ${COBALT_PORT_DIR}/starboard/linux/shared/system_has_capability.cc
    ${COBALT_PORT_DIR}/starboard/shared/linux/byte_swap.cc
    ${COBALT_PORT_DIR}/starboard/shared/linux/get_home_directory.cc
    ${COBALT_PORT_DIR}/starboard/shared/linux/memory_get_stack_bounds.cc
    ${COBALT_PORT_DIR}/starboard/shared/linux/page_internal.cc
    ${COBALT_PORT_DIR}/starboard/shared/linux/system_get_random_data.cc
    ${COBALT_PORT_DIR}/starboard/shared/linux/system_get_total_cpu_memory.cc
    ${COBALT_PORT_DIR}/starboard/shared/linux/system_is_debugger_attached.cc
    ${COBALT_PORT_DIR}/starboard/shared/linux/system_get_used_cpu_memory.cc
    #
    ${COBALT_PORT_DIR}/starboard/shared/posix/memory_allocate_aligned_unchecked.cc
    ${COBALT_PORT_DIR}/starboard/shared/posix/memory_free_aligned.cc
    #
    ${COBALT_PORT_DIR}/starboard/shared/posix/directory_create.cc
    ${COBALT_PORT_DIR}/starboard/shared/posix/file_can_open.cc
    ${COBALT_PORT_DIR}/starboard/shared/posix/file_close.cc
    ${COBALT_PORT_DIR}/starboard/shared/posix/file_delete.cc
    ${COBALT_PORT_DIR}/starboard/shared/posix/file_exists.cc
    ${COBALT_PORT_DIR}/starboard/shared/posix/file_flush.cc
    ${COBALT_PORT_DIR}/starboard/shared/posix/file_get_info.cc
    ${COBALT_PORT_DIR}/starboard/shared/posix/file_get_path_info.cc
    ${COBALT_PORT_DIR}/starboard/shared/posix/file_open.cc
    ${COBALT_PORT_DIR}/starboard/shared/posix/file_read.cc
    ${COBALT_PORT_DIR}/starboard/shared/posix/file_seek.cc
    ${COBALT_PORT_DIR}/starboard/shared/posix/file_truncate.cc
    ${COBALT_PORT_DIR}/starboard/shared/posix/file_write.cc
    ${COBALT_PORT_DIR}/starboard/shared/posix/log.cc
    ${COBALT_PORT_DIR}/starboard/shared/posix/log_flush.cc
    ${COBALT_PORT_DIR}/starboard/shared/posix/log_format.cc
    ${COBALT_PORT_DIR}/starboard/shared/posix/log_is_tty.cc
    ${COBALT_PORT_DIR}/starboard/shared/posix/log_raw.cc
    ${COBALT_PORT_DIR}/starboard/shared/posix/memory_flush.cc
    ${COBALT_PORT_DIR}/starboard/shared/posix/set_non_blocking_internal.cc
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
    # deprecated with SB_API_VERSION 6
    #${COBALT_PORT_DIR}/starboard/shared/posix/time_zone_get_dst_name.cc
    #${COBALT_PORT_DIR}/starboard/shared/posix/time_zone_get_name.cc
    #
  )
elseif(TARGET_WINDOWS)
  list(APPEND starboard_platform_SOURCES
    ${COBALT_PORT_DIR}/starboard/shared/win_thread/condition_variable_broadcast.cc
    ${COBALT_PORT_DIR}/starboard/shared/win_thread/condition_variable_create.cc
    ${COBALT_PORT_DIR}/starboard/shared/win_thread/condition_variable_destroy.cc
    ${COBALT_PORT_DIR}/starboard/shared/win_thread/condition_variable_signal.cc
    ${COBALT_PORT_DIR}/starboard/shared/win_thread/condition_variable_wait.cc
    ${COBALT_PORT_DIR}/starboard/shared/win_thread/condition_variable_wait_timed.cc
    ${COBALT_PORT_DIR}/starboard/shared/win_thread/mutex_acquire.cc
    ${COBALT_PORT_DIR}/starboard/shared/win_thread/mutex_acquire_try.cc
    ${COBALT_PORT_DIR}/starboard/shared/win_thread/mutex_create.cc
    ${COBALT_PORT_DIR}/starboard/shared/win_thread/mutex_destroy.cc
    ${COBALT_PORT_DIR}/starboard/shared/win_thread/mutex_release.cc
    # # ${COBALT_PORT_DIR}/starboard/shared/win_thread/thread_context_get_pointer.cc
    # # ${COBALT_PORT_DIR}/starboard/shared/win_thread/thread_context_internal.h
    ${COBALT_PORT_DIR}/starboard/shared/win_thread/once.cc
    ${COBALT_PORT_DIR}/starboard/shared/win_thread/thread_create.cc
    ${COBALT_PORT_DIR}/starboard/shared/win_thread/thread_create_local_key.cc
    ${COBALT_PORT_DIR}/starboard/shared/win_thread/thread_create_priority.h
    ${COBALT_PORT_DIR}/starboard/shared/win_thread/thread_destroy_local_key.cc
    ${COBALT_PORT_DIR}/starboard/shared/win_thread/thread_detach.cc
    ${COBALT_PORT_DIR}/starboard/shared/win_thread/thread_get_current.cc
    ${COBALT_PORT_DIR}/starboard/shared/win_thread/thread_get_local_value.cc
    ${COBALT_PORT_DIR}/starboard/shared/win_thread/thread_is_equal.cc
    ${COBALT_PORT_DIR}/starboard/shared/win_thread/thread_join.cc
    # # ${COBALT_PORT_DIR}/starboard/shared/win_thread/thread_sampler_create.cc
    # # ${COBALT_PORT_DIR}/starboard/shared/win_thread/thread_sampler_destroy.cc
    # # ${COBALT_PORT_DIR}/starboard/shared/win_thread/thread_sampler_freeze.cc
    # # ${COBALT_PORT_DIR}/starboard/shared/win_thread/thread_sampler_internal.cc
    # # ${COBALT_PORT_DIR}/starboard/shared/win_thread/thread_sampler_internal.h
    ${COBALT_PORT_DIR}/starboard/shared/win_thread/thread_sampler_is_supported.cc
    # # #${COBALT_PORT_DIR}/starboard/shared/win_thread/thread_sampler_is_supported.h
    # # ${COBALT_PORT_DIR}/starboard/shared/win_thread/thread_sampler_thaw.cc
    ${COBALT_PORT_DIR}/starboard/shared/win_thread/thread_set_local_value.cc
    ${COBALT_PORT_DIR}/starboard/shared/win_thread/thread_yield.cc
    #
    ${COBALT_PORT_DIR}/starboard/win/shared/atomic_public.h
    ${COBALT_PORT_DIR}/starboard/win/shared/configuration_public.h
    ## TODO ## requires RefCounted from starboard_common
    # # ${COBALT_PORT_DIR}/starboard/win/shared/decode_target_get_info.cc
    ${COBALT_PORT_DIR}/starboard/win/shared/audio_sink_type_dispatcher.cc
    # # ## TODO ## requires RefCounted from starboard_common
    ${COBALT_PORT_DIR}/starboard/win/shared/decode_target_internal.cc
    # # ## TODO ## requires RefCounted from starboard_common
    ${COBALT_PORT_DIR}/starboard/win/shared/decode_target_internal.h
    # # ## TODO ## requires RefCounted from starboard_common
    ${COBALT_PORT_DIR}/starboard/win/shared/decode_target_release.cc
    ${COBALT_PORT_DIR}/starboard/win/shared/system_get_connection_type.cc
    ${COBALT_PORT_DIR}/starboard/win/shared/system_get_device_type.cc
    ${COBALT_PORT_DIR}/starboard/win/shared/system_has_capability.cc
    ${COBALT_PORT_DIR}/starboard/shared/windows/byte_swap.cc
    ${COBALT_PORT_DIR}/starboard/shared/windows/get_home_directory.cc
    ${COBALT_PORT_DIR}/starboard/shared/windows/memory_get_stack_bounds.cc
    ${COBALT_PORT_DIR}/starboard/shared/windows/page_internal.cc
    ${COBALT_PORT_DIR}/starboard/shared/windows/system_get_random_data.cc
    ${COBALT_PORT_DIR}/starboard/shared/windows/system_get_total_cpu_memory.cc
    ${COBALT_PORT_DIR}/starboard/shared/windows/system_is_debugger_attached.cc
    ${COBALT_PORT_DIR}/starboard/shared/windows/system_get_used_cpu_memory.cc
    # # #
    ${COBALT_PORT_DIR}/starboard/shared/win/memory_allocate_aligned_unchecked.cc
    ${COBALT_PORT_DIR}/starboard/shared/win/memory_free_aligned.cc
    #
    ${COBALT_PORT_DIR}/starboard/shared/win/directory_create.cc
    ${COBALT_PORT_DIR}/starboard/shared/win/file_can_open.cc
    ${COBALT_PORT_DIR}/starboard/shared/win/file_close.cc
    ${COBALT_PORT_DIR}/starboard/shared/win/file_delete.cc
    ${COBALT_PORT_DIR}/starboard/shared/win/file_exists.cc
    ${COBALT_PORT_DIR}/starboard/shared/win/file_flush.cc
    ${COBALT_PORT_DIR}/starboard/shared/win/file_get_info.cc
    ${COBALT_PORT_DIR}/starboard/shared/win/file_get_path_info.cc
    ${COBALT_PORT_DIR}/starboard/shared/win/file_open.cc
    ${COBALT_PORT_DIR}/starboard/shared/win/file_read.cc
    ${COBALT_PORT_DIR}/starboard/shared/win/file_seek.cc
    ${COBALT_PORT_DIR}/starboard/shared/win/file_truncate.cc
    ${COBALT_PORT_DIR}/starboard/shared/win/file_write.cc
    ${COBALT_PORT_DIR}/starboard/shared/win/log.cc
    ${COBALT_PORT_DIR}/starboard/shared/win/log_flush.cc
    ${COBALT_PORT_DIR}/starboard/shared/win/log_format.cc
    ${COBALT_PORT_DIR}/starboard/shared/win/log_is_tty.cc
    ${COBALT_PORT_DIR}/starboard/shared/win/log_raw.cc
    ${COBALT_PORT_DIR}/starboard/shared/win/memory_flush.cc
    ${COBALT_PORT_DIR}/starboard/shared/win/set_non_blocking_internal.cc
    ${COBALT_PORT_DIR}/starboard/shared/win/storage_write_record.cc
    ${COBALT_PORT_DIR}/starboard/shared/win/string_compare_no_case.cc
    ${COBALT_PORT_DIR}/starboard/shared/win/string_compare_no_case_n.cc
    ${COBALT_PORT_DIR}/starboard/shared/win/string_compare_wide.cc
    ${COBALT_PORT_DIR}/starboard/shared/win/string_format.cc
    ${COBALT_PORT_DIR}/starboard/shared/win/string_format_wide.cc
    ${COBALT_PORT_DIR}/starboard/shared/win/system_break_into_debugger.cc
    ${COBALT_PORT_DIR}/starboard/shared/win/system_clear_last_error.cc
    ${COBALT_PORT_DIR}/starboard/shared/win/system_get_error_string.cc
    ${COBALT_PORT_DIR}/starboard/shared/win/system_get_last_error.cc
    ${COBALT_PORT_DIR}/starboard/shared/win/system_get_locale_id.cc
    ${COBALT_PORT_DIR}/starboard/shared/win/system_get_number_of_processors.cc
    ${COBALT_PORT_DIR}/starboard/shared/win/thread_sleep.cc
    ${COBALT_PORT_DIR}/starboard/shared/win/time_get_monotonic_now.cc
    ${COBALT_PORT_DIR}/starboard/shared/win/time_get_monotonic_thread_now.cc
    ${COBALT_PORT_DIR}/starboard/shared/win/time_get_now.cc
    ${COBALT_PORT_DIR}/starboard/shared/win/time_zone_get_current.cc
    # deprecated with SB_API_VERSION 6
    #${COBALT_PORT_DIR}/starboard/shared/posix/time_zone_get_dst_name.cc
    #${COBALT_PORT_DIR}/starboard/shared/posix/time_zone_get_name.cc
    #
    #

    #${COBALT_PORT_DIR}/starboard/shared/posix/time_zone_get_dst_name.cc
    #${COBALT_PORT_DIR}/starboard/shared/posix/time_zone_get_name.cc
    #

    # ${COBALT_PORT_DIR}/starboard/shared/stub/image_decode.cc
    # ${COBALT_PORT_DIR}/starboard/shared/stub/image_is_decode_supported.cc
    # ${COBALT_PORT_DIR}/starboard/shared/stub/media_is_supported.cc
    # ## TODO ## ${COBALT_PORT_DIR}/starboard/shared/stub/microphone_close.cc
    # ## TODO ## ${COBALT_PORT_DIR}/starboard/shared/stub/microphone_create.cc
    # ## TODO ## ${COBALT_PORT_DIR}/starboard/shared/stub/microphone_destroy.cc
    # ## TODO ## ${COBALT_PORT_DIR}/starboard/shared/stub/microphone_get_available.cc
    # ## TODO ## ${COBALT_PORT_DIR}/starboard/shared/stub/microphone_is_sample_rate_supported.cc
    # ## TODO ## ${COBALT_PORT_DIR}/starboard/shared/stub/microphone_open.cc
    # ## TODO ## ${COBALT_PORT_DIR}/starboard/shared/stub/microphone_read.cc
    # ${COBALT_PORT_DIR}/starboard/shared/stub/system_get_total_gpu_memory.cc
    # ${COBALT_PORT_DIR}/starboard/shared/stub/system_get_used_gpu_memory.cc
    # ${COBALT_PORT_DIR}/starboard/shared/stub/system_hide_splash_screen.cc
    # ${COBALT_PORT_DIR}/starboard/shared/stub/system_raise_platform_error.cc
    ## TODO ## ${COBALT_PORT_DIR}/starboard/linux/shared/media_is_video_supported.cc
    ## TODO ## ${COBALT_PORT_DIR}/starboard/linux/shared/player_components_impl.cc
    ## TODO ## ${COBALT_PORT_DIR}/starboard/linux/shared/system_get_path.cc
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
    ## TODO ## ${COBALT_PORT_DIR}/starboard/shared/iso/directory_close.cc
    ## TODO ## ${COBALT_PORT_DIR}/starboard/shared/iso/directory_get_next.cc
    ## TODO ## ${COBALT_PORT_DIR}/starboard/shared/iso/directory_open.cc
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
    ## TODO ## ${COBALT_PORT_DIR}/starboard/shared/linux/socket_get_interface_address.cc
    ## TODO ## ${COBALT_PORT_DIR}/starboard/shared/linux/system_symbolize.cc
    ## TODO ## ${COBALT_PORT_DIR}/starboard/shared/linux/thread_get_id.cc
    ## TODO ## ${COBALT_PORT_DIR}/starboard/shared/linux/thread_get_name.cc
    ## TODO ## ${COBALT_PORT_DIR}/starboard/shared/linux/thread_set_name.cc
    #
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
    ## TODO ## ${COBALT_PORT_DIR}/starboard/shared/pulse/pulse_audio_sink_type.cc
    ## TODO ## ${COBALT_PORT_DIR}/starboard/shared/pulse/pulse_audio_sink_type.h
    ## TODO ## ${COBALT_PORT_DIR}/starboard/shared/pulse/pulse_dynamic_load_dispatcher.cc
    ## TODO ## ${COBALT_PORT_DIR}/starboard/shared/pulse/pulse_dynamic_load_dispatcher.h
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
    ## TODO ## ${COBALT_PORT_DIR}/starboard/shared/starboard/media/media_is_buffer_using_memory_pool.cc
    ${COBALT_PORT_DIR}/starboard/shared/starboard/player/decoded_audio_internal.cc
    ${COBALT_PORT_DIR}/starboard/shared/starboard/player/decoded_audio_internal.h
    ${COBALT_PORT_DIR}/starboard/shared/starboard/player/filter/audio_decoder_internal.h
    ${COBALT_PORT_DIR}/starboard/shared/starboard/player/filter/audio_frame_tracker.cc
    ${COBALT_PORT_DIR}/starboard/shared/starboard/player/filter/audio_frame_tracker.h
    ${COBALT_PORT_DIR}/starboard/shared/starboard/player/filter/audio_renderer_internal.cc
    ${COBALT_PORT_DIR}/starboard/shared/starboard/player/filter/audio_renderer_internal.h
    ${COBALT_PORT_DIR}/starboard/shared/starboard/player/filter/audio_renderer_sink.h
    ${COBALT_PORT_DIR}/starboard/shared/starboard/player/filter/audio_renderer_sink_impl.cc
    ${COBALT_PORT_DIR}/starboard/shared/starboard/player/filter/audio_renderer_sink_impl.h
    ${COBALT_PORT_DIR}/starboard/shared/starboard/player/filter/audio_resampler_impl.cc
    ${COBALT_PORT_DIR}/starboard/shared/starboard/player/filter/audio_time_stretcher.cc
    ${COBALT_PORT_DIR}/starboard/shared/starboard/player/filter/audio_time_stretcher.h
    ${COBALT_PORT_DIR}/starboard/shared/starboard/player/filter/cpu_video_frame.cc
    ${COBALT_PORT_DIR}/starboard/shared/starboard/player/filter/cpu_video_frame.h
    ${COBALT_PORT_DIR}/starboard/shared/starboard/player/filter/decoded_audio_queue.cc
    ${COBALT_PORT_DIR}/starboard/shared/starboard/player/filter/decoded_audio_queue.h
    ${COBALT_PORT_DIR}/starboard/shared/starboard/player/filter/filter_based_player_worker_handler.cc
    ${COBALT_PORT_DIR}/starboard/shared/starboard/player/filter/filter_based_player_worker_handler.h
    ${COBALT_PORT_DIR}/starboard/shared/starboard/player/filter/media_time_provider.h
    ${COBALT_PORT_DIR}/starboard/shared/starboard/player/filter/media_time_provider_impl.cc
    ${COBALT_PORT_DIR}/starboard/shared/starboard/player/filter/media_time_provider_impl.h
    ${COBALT_PORT_DIR}/starboard/shared/starboard/player/filter/player_components.h
    ${COBALT_PORT_DIR}/starboard/shared/starboard/player/filter/punchout_video_renderer_sink.cc
    ${COBALT_PORT_DIR}/starboard/shared/starboard/player/filter/punchout_video_renderer_sink.h
    ${COBALT_PORT_DIR}/starboard/shared/starboard/player/filter/video_decoder_internal.h
    ${COBALT_PORT_DIR}/starboard/shared/starboard/player/filter/video_frame_internal.h
    ${COBALT_PORT_DIR}/starboard/shared/starboard/player/filter/video_renderer_internal.cc
    ${COBALT_PORT_DIR}/starboard/shared/starboard/player/filter/video_renderer_internal.h
    ${COBALT_PORT_DIR}/starboard/shared/starboard/player/filter/wsola_internal.cc
    ${COBALT_PORT_DIR}/starboard/shared/starboard/player/filter/wsola_internal.h
    ${COBALT_PORT_DIR}/starboard/shared/starboard/player/input_buffer_internal.cc
    ${COBALT_PORT_DIR}/starboard/shared/starboard/player/input_buffer_internal.h
    ${COBALT_PORT_DIR}/starboard/shared/starboard/player/job_queue.cc
    ${COBALT_PORT_DIR}/starboard/shared/starboard/player/job_queue.h
    ${COBALT_PORT_DIR}/starboard/shared/starboard/player/job_thread.cc
    ${COBALT_PORT_DIR}/starboard/shared/starboard/player/job_thread.h
    ${COBALT_PORT_DIR}/starboard/shared/starboard/player/player_create.cc
    ${COBALT_PORT_DIR}/starboard/shared/starboard/player/player_destroy.cc
    ${COBALT_PORT_DIR}/starboard/shared/starboard/player/player_get_current_frame.cc
    ${COBALT_PORT_DIR}/starboard/shared/starboard/player/player_get_info.cc
    ${COBALT_PORT_DIR}/starboard/shared/starboard/player/player_get_info2.cc
    ${COBALT_PORT_DIR}/starboard/shared/starboard/player/player_internal.cc
    ${COBALT_PORT_DIR}/starboard/shared/starboard/player/player_internal.h
    ${COBALT_PORT_DIR}/starboard/shared/starboard/player/player_output_mode_supported.cc
    ${COBALT_PORT_DIR}/starboard/shared/starboard/player/player_output_mode_supported.cc
    ${COBALT_PORT_DIR}/starboard/shared/starboard/player/player_seek.cc
    ${COBALT_PORT_DIR}/starboard/shared/starboard/player/player_seek2.cc
    ${COBALT_PORT_DIR}/starboard/shared/starboard/player/player_set_bounds.cc
    ${COBALT_PORT_DIR}/starboard/shared/starboard/player/player_set_playback_rate.cc
    ${COBALT_PORT_DIR}/starboard/shared/starboard/player/player_set_volume.cc
    ${COBALT_PORT_DIR}/starboard/shared/starboard/player/player_worker.cc
    ${COBALT_PORT_DIR}/starboard/shared/starboard/player/player_worker.h
    ${COBALT_PORT_DIR}/starboard/shared/starboard/player/player_write_end_of_stream.cc
    ${COBALT_PORT_DIR}/starboard/shared/starboard/player/player_write_sample.cc
    ${COBALT_PORT_DIR}/starboard/shared/starboard/player/player_write_sample2.cc
    ${COBALT_PORT_DIR}/starboard/shared/starboard/player/player_get_maximum_number_of_samples_per_write.cc
  )
else()
  message(FATAL_ERROR "unknown platform")
endif()

list(APPEND starboard_platform_SOURCES
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
  ${COBALT_PORT_DIR}/starboard/shared/starboard/system_supports_resume.cc
  ${COBALT_PORT_DIR}/starboard/shared/starboard/window_set_default_options.cc
  # TODO
  ${COBALT_PORT_DIR}/starboard/shared/stub/accessibility_get_display_settings.cc
  ${COBALT_PORT_DIR}/starboard/shared/stub/accessibility_get_text_to_speech_settings.cc
  ${COBALT_PORT_DIR}/starboard/shared/stub/cpu_features_get.cc
  ${COBALT_PORT_DIR}/starboard/shared/stub/cryptography_create_transformer.cc
  ${COBALT_PORT_DIR}/starboard/shared/stub/cryptography_destroy_transformer.cc
  ${COBALT_PORT_DIR}/starboard/shared/stub/cryptography_get_tag.cc
  ${COBALT_PORT_DIR}/starboard/shared/stub/cryptography_set_authenticated_data.cc
  ${COBALT_PORT_DIR}/starboard/shared/stub/cryptography_set_initialization_vector.cc
  ${COBALT_PORT_DIR}/starboard/shared/stub/cryptography_transform.cc
  ${COBALT_PORT_DIR}/starboard/shared/stub/system_get_extensions.cc
  ${COBALT_PORT_DIR}/starboard/shared/stub/image_decode.cc
  ${COBALT_PORT_DIR}/starboard/shared/stub/image_is_decode_supported.cc
  ${COBALT_PORT_DIR}/starboard/shared/stub/media_set_audio_write_duration.cc
  ${COBALT_PORT_DIR}/starboard/shared/stub/microphone_close.cc
  ${COBALT_PORT_DIR}/starboard/shared/stub/microphone_create.cc
  ${COBALT_PORT_DIR}/starboard/shared/stub/microphone_destroy.cc
  ${COBALT_PORT_DIR}/starboard/shared/stub/microphone_get_available.cc
  ${COBALT_PORT_DIR}/starboard/shared/stub/microphone_is_sample_rate_supported.cc
  ${COBALT_PORT_DIR}/starboard/shared/stub/microphone_open.cc
  ${COBALT_PORT_DIR}/starboard/shared/stub/microphone_read.cc
  ${COBALT_PORT_DIR}/starboard/shared/stub/system_get_total_gpu_memory.cc
  ${COBALT_PORT_DIR}/starboard/shared/stub/system_get_used_gpu_memory.cc
  ${COBALT_PORT_DIR}/starboard/shared/stub/system_hide_splash_screen.cc
  ${COBALT_PORT_DIR}/starboard/shared/stub/system_raise_platform_error.cc
  ${COBALT_PORT_DIR}/starboard/shared/stub/system_sign_with_certification_secret_key.cc
  ${COBALT_PORT_DIR}/starboard/shared/stub/ui_nav_get_interface.cc
  ${COBALT_PORT_DIR}/starboard/shared/stub/window_get_diagonal_size_in_inches.cc
  #
  ${COBALT_PORT_DIR}/starboard/shared/stub/window_create.cc
  ${COBALT_PORT_DIR}/starboard/shared/stub/window_destroy.cc
  ${COBALT_PORT_DIR}/starboard/shared/stub/window_get_platform_handle.cc
  ${COBALT_PORT_DIR}/starboard/shared/stub/window_get_size.cc
  ${COBALT_PORT_DIR}/starboard/shared/stub/window_on_screen_keyboard_suggestions_supported.cc
  ${COBALT_PORT_DIR}/starboard/shared/stub/window_update_on_screen_keyboard_suggestions.cc
  # TODO
  # ## TODO ##
  #
  ${COBALT_PORT_DIR}/starboard/shared/stub/drm_close_session.cc
  # ## TODO ##
  #
  ${COBALT_PORT_DIR}/starboard/shared/stub/drm_create_system.cc
  # ## TODO ##
  #
  ${COBALT_PORT_DIR}/starboard/shared/stub/drm_destroy_system.cc
  # ## TODO ##
  #
  ${COBALT_PORT_DIR}/starboard/shared/stub/drm_generate_session_update_request.cc
  # ## TODO ##
  #
  ${COBALT_PORT_DIR}/starboard/shared/stub/drm_is_server_certificate_updatable.cc
  # ## TODO ##
  # #
  # ${COBALT_PORT_DIR}/starboard/shared/stub/drm_system_internal.h
  # ## TODO ##
  #
  ${COBALT_PORT_DIR}/starboard/shared/stub/drm_update_server_certificate.cc
  # ## TODO ##
  #
  ${COBALT_PORT_DIR}/starboard/shared/stub/drm_update_session.cc
  #if (use_dlmalloc_allocator) {
  #  sources += [
  #    "//starboard/shared/dlmalloc/memory_allocate_aligned_unchecked.cc",
  #    "//starboard/shared/dlmalloc/memory_allocate_unchecked.cc",
  #    "//starboard/shared/dlmalloc/memory_free.cc",
  #    "//starboard/shared/dlmalloc/memory_free_aligned.cc",
  #    "//starboard/shared/dlmalloc/memory_reallocate_unchecked.cc",
  #    "//starboard/shared/dlmalloc/system_get_used_cpu_memory.cc",
  #  ]
  #} else {
  #  sources += [
  #    "//starboard/shared/iso/memory_allocate_unchecked.cc",
  #    "//starboard/shared/iso/memory_free.cc",
  #    "//starboard/shared/iso/memory_reallocate_unchecked.cc",
  #    "//starboard/shared/linux/system_get_used_cpu_memory.cc",
  #    "//starboard/shared/posix/memory_allocate_aligned_unchecked.cc",
  #    "//starboard/shared/posix/memory_free_aligned.cc",
  #  ]
  #}
  ${COBALT_PORT_DIR}/starboard/shared/iso/memory_allocate_unchecked.cc
  ${COBALT_PORT_DIR}/starboard/shared/iso/memory_free.cc
  ${COBALT_PORT_DIR}/starboard/shared/iso/memory_reallocate_unchecked.cc
  # TODO
)

add_library(starboard_platform STATIC
  ${starboard_platform_SOURCES}
)

set_property(TARGET starboard_platform PROPERTY CXX_STANDARD 17)

target_link_libraries(starboard_platform PRIVATE
  starboard_common
)

target_include_directories(starboard_platform PRIVATE
  #${UI_PARENT_DIR}
  ${COBALT_CORE_DIR}
  ${COBALT_CORE_PARENT_DIR}
  ${COBALT_COMMON_INCLUDES}
  ${CHROMIUM_DIR} # to third_party/skia/include/core/SkWriteBuffer.h
)

target_compile_definitions(starboard_platform PRIVATE
  STARBOARD_IMPLEMENTATION=1
  #
  #BASE_IMPLEMENTATION=1
  #BASE_I18N_IMPLEMENTATION=1
  #
  ${COBALT_COMMON_DEFINES}
)

target_compile_definitions(starboard_platform PUBLIC
  ${STARBOARD_EXTRA_PUBLIC_FLAGS}
)
