include_guard( DIRECTORY )

list(APPEND STARBOARD_SOURCES
  ${STARBOARD_DIR}/client_porting/icu_init/icu_init.cc
  ${STARBOARD_DIR}/client_porting/icu_init/icu_init.h
)

list(APPEND STARBOARD_SOURCES
  ${STARBOARD_DIR}/client_porting/eztime/eztime.cc
  ${STARBOARD_DIR}/client_porting/eztime/eztime.h
)

# requires EzTimeValueGetNow = starboard_eztime
 # requires SbThreadGetId = starboard_stub
list(APPEND STARBOARD_SOURCES
 ${STARBOARD_DIR}/common/byte_swap.h
 ${STARBOARD_DIR}/common/common.cc
 ${STARBOARD_DIR}/common/condition_variable.cc
 ${STARBOARD_DIR}/common/condition_variable.h
 ${STARBOARD_DIR}/common/flat_map.h
 ${STARBOARD_DIR}/common/locked_ptr.h
 ${STARBOARD_DIR}/common/log.cc
 ${STARBOARD_DIR}/common/log.h
 ${STARBOARD_DIR}/common/memory.cc
 ${STARBOARD_DIR}/common/move.h
 ${STARBOARD_DIR}/common/murmurhash2.cc
 ${STARBOARD_DIR}/common/murmurhash2.h
 ${STARBOARD_DIR}/common/mutex.cc
 ${STARBOARD_DIR}/common/mutex.h
 ${STARBOARD_DIR}/common/new.cc
 ${STARBOARD_DIR}/common/optional.cc
 ${STARBOARD_DIR}/common/optional.h
 ${STARBOARD_DIR}/common/queue.h
 ${STARBOARD_DIR}/common/recursive_mutex.cc
 ${STARBOARD_DIR}/common/recursive_mutex.h
 ${STARBOARD_DIR}/common/ref_counted.cc
 ${STARBOARD_DIR}/common/ref_counted.h
 ${STARBOARD_DIR}/common/reset_and_return.h
 ${STARBOARD_DIR}/common/rwlock.cc
 ${STARBOARD_DIR}/common/rwlock.h
 ${STARBOARD_DIR}/common/scoped_ptr.h
 ${STARBOARD_DIR}/common/semaphore.cc
 ${STARBOARD_DIR}/common/semaphore.h
 ${STARBOARD_DIR}/common/socket.cc
 ${STARBOARD_DIR}/common/socket.h
 ${STARBOARD_DIR}/common/spin_lock.cc
 ${STARBOARD_DIR}/common/spin_lock.h
 ${STARBOARD_DIR}/common/state_machine.cc
 ${STARBOARD_DIR}/common/state_machine.h
 ${STARBOARD_DIR}/common/storage.cc
 ${STARBOARD_DIR}/common/storage.h
 ${STARBOARD_DIR}/common/string.h
 ${STARBOARD_DIR}/common/thread_collision_warner.cc
 ${STARBOARD_DIR}/common/thread_collision_warner.h
 ${STARBOARD_DIR}/common/thread.cc
  # TODO: get rid of dependence on Cobalt
  #if (!enable_custom_media_session_client) {
  #  sources += [ "//starboard/shared/media_session/stub_playback_state.cc" ]
  #}
)

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
list(APPEND STARBOARD_SOURCES
  ${STARBOARD_DIR}/shared/iso/character_is_alphanumeric.cc
  ${STARBOARD_DIR}/shared/iso/character_is_digit.cc
  ${STARBOARD_DIR}/shared/iso/character_is_hex_digit.cc
  ${STARBOARD_DIR}/shared/iso/character_is_space.cc
  ${STARBOARD_DIR}/shared/iso/character_is_upper.cc
  ${STARBOARD_DIR}/shared/iso/character_to_lower.cc
  ${STARBOARD_DIR}/shared/iso/character_to_upper.cc
  ${STARBOARD_DIR}/shared/iso/double_absolute.cc
  ${STARBOARD_DIR}/shared/iso/double_exponent.cc
  ${STARBOARD_DIR}/shared/iso/double_floor.cc
  ${STARBOARD_DIR}/shared/iso/double_is_finite.cc
  ${STARBOARD_DIR}/shared/iso/double_is_nan.cc
  ${STARBOARD_DIR}/shared/iso/memory_compare.cc
  ${STARBOARD_DIR}/shared/iso/memory_copy.cc
  ${STARBOARD_DIR}/shared/iso/memory_find_byte.cc
  ${STARBOARD_DIR}/shared/iso/memory_move.cc
  ${STARBOARD_DIR}/shared/iso/memory_set.cc
  ${STARBOARD_DIR}/shared/iso/string_compare.cc
  ${STARBOARD_DIR}/shared/iso/string_compare_all.cc
  ${STARBOARD_DIR}/shared/iso/string_find_character.cc
  ${STARBOARD_DIR}/shared/iso/string_find_last_character.cc
  ${STARBOARD_DIR}/shared/iso/string_find_string.cc
  ${STARBOARD_DIR}/shared/iso/string_get_length.cc
  ${STARBOARD_DIR}/shared/iso/string_get_length_wide.cc
  ${STARBOARD_DIR}/shared/iso/string_parse_double.cc
  ${STARBOARD_DIR}/shared/iso/string_parse_signed_integer.cc
  ${STARBOARD_DIR}/shared/iso/string_parse_uint64.cc
  ${STARBOARD_DIR}/shared/iso/string_parse_unsigned_integer.cc
  ${STARBOARD_DIR}/shared/iso/string_scan.cc
  ${STARBOARD_DIR}/shared/iso/system_binary_search.cc
  ${STARBOARD_DIR}/shared/iso/system_sort.cc
  ${STARBOARD_DIR}/shared/stub/system_get_stack.cc
  ${STARBOARD_DIR}/shared/stub/system_symbolize.cc
  ${STARBOARD_DIR}/shared/stub/thread_get_id.cc
  ${STARBOARD_DIR}/shared/stub/thread_get_local_value.cc
  ${STARBOARD_DIR}/shared/stub/thread_get_name.cc
  ${STARBOARD_DIR}/shared/stub/thread_set_name.cc
  ${STARBOARD_DIR}/shared/stub/socket_get_interface_address.cc
  ${STARBOARD_DIR}/shared/nouser/user_get_current.cc
  ${STARBOARD_DIR}/shared/nouser/user_get_property.cc
  ${STARBOARD_DIR}/shared/nouser/user_get_signed_in.cc
  ${STARBOARD_DIR}/shared/nouser/user_internal.cc
  ${STARBOARD_DIR}/shared/signal/crash_signals.h
  ${STARBOARD_DIR}/shared/signal/crash_signals_sigaction.cc
  ${STARBOARD_DIR}/shared/signal/suspend_signals.cc
  ${STARBOARD_DIR}/shared/signal/suspend_signals.h
  ${STARBOARD_DIR}/shared/starboard/application.cc
  ${STARBOARD_DIR}/shared/starboard/command_line.cc
  ${STARBOARD_DIR}/shared/starboard/command_line.h
  ${STARBOARD_DIR}/shared/starboard/directory_can_open.cc
  ${STARBOARD_DIR}/shared/starboard/event_cancel.cc
  ${STARBOARD_DIR}/shared/starboard/event_schedule.cc
  ${STARBOARD_DIR}/shared/starboard/file_mode_string_to_flags.cc
  ${STARBOARD_DIR}/shared/starboard/file_storage/storage_close_record.cc
  ${STARBOARD_DIR}/shared/starboard/file_storage/storage_delete_record.cc
  ${STARBOARD_DIR}/shared/starboard/file_storage/storage_get_record_size.cc
  ${STARBOARD_DIR}/shared/starboard/file_storage/storage_open_record.cc
  ${STARBOARD_DIR}/shared/starboard/file_storage/storage_read_record.cc
  ${STARBOARD_DIR}/shared/starboard/log_message.cc
  ${STARBOARD_DIR}/shared/starboard/log_mutex.cc
  ${STARBOARD_DIR}/shared/starboard/log_mutex.h
  ${STARBOARD_DIR}/shared/starboard/log_raw_dump_stack.cc
  ${STARBOARD_DIR}/shared/starboard/log_raw_format.cc
  ${STARBOARD_DIR}/shared/stub/media_can_play_mime_and_key_system.cc
  ${STARBOARD_DIR}/shared/stub/media_get_audio_buffer_budget.cc
  ${STARBOARD_DIR}/shared/stub/media_get_audio_configuration.cc
  ${STARBOARD_DIR}/shared/stub/media_get_audio_output_count.cc
  ${STARBOARD_DIR}/shared/stub/media_get_buffer_alignment.cc
  ${STARBOARD_DIR}/shared/stub/media_get_buffer_allocation_unit.cc
  ${STARBOARD_DIR}/shared/stub/media_get_buffer_garbage_collection_duration_threshold.cc
  ${STARBOARD_DIR}/shared/stub/media_get_buffer_padding.cc
  ${STARBOARD_DIR}/shared/stub/media_get_buffer_storage_type.cc
  ${STARBOARD_DIR}/shared/stub/media_get_initial_buffer_capacity.cc
  ${STARBOARD_DIR}/shared/stub/media_get_max_buffer_capacity.cc
  ${STARBOARD_DIR}/shared/stub/media_get_progressive_buffer_budget.cc
  ${STARBOARD_DIR}/shared/stub/media_get_video_buffer_budget.cc
  ${STARBOARD_DIR}/shared/stub/media_is_audio_supported.cc
  ${STARBOARD_DIR}/shared/stub/media_is_buffer_pool_allocate_on_demand.cc
  ${STARBOARD_DIR}/shared/stub/media_is_output_protected.cc
  ${STARBOARD_DIR}/shared/stub/media_is_supported.cc
  ${STARBOARD_DIR}/shared/stub/media_is_transfer_characteristics_supported.cc
  ${STARBOARD_DIR}/shared/stub/media_is_video_supported.cc
  ${STARBOARD_DIR}/shared/stub/media_set_audio_write_duration.cc
  ${STARBOARD_DIR}/shared/stub/media_set_output_protection.cc
  ${STARBOARD_DIR}/shared/stub/media_is_buffer_using_memory_pool.cc
  ${STARBOARD_DIR}/shared/starboard/new.cc
  #${STARBOARD_DIR}/shared/stub/audio_sink_type_dispatcher.cc
  ${STARBOARD_DIR}/shared/stub/media_is_audio_supported.cc
  #${STARBOARD_DIR}/shared/stub/alsa_audio_sink_type.cc
    ${STARBOARD_DIR}/shared/stub/system_get_path.cc
)


if(TARGET_LINUX)
  list(APPEND STARBOARD_SOURCES
    #
    # ${STARBOARD_DIR}/shared/stub/image_decode.cc
    # ${STARBOARD_DIR}/shared/stub/image_is_decode_supported.cc
    # ${STARBOARD_DIR}/shared/stub/media_is_supported.cc
    # ## TODO ## ${STARBOARD_DIR}/shared/stub/microphone_close.cc
    # ## TODO ## ${STARBOARD_DIR}/shared/stub/microphone_create.cc
    # ## TODO ## ${STARBOARD_DIR}/shared/stub/microphone_destroy.cc
    # ## TODO ## ${STARBOARD_DIR}/shared/stub/microphone_get_available.cc
    # ## TODO ## ${STARBOARD_DIR}/shared/stub/microphone_is_sample_rate_supported.cc
    # ## TODO ## ${STARBOARD_DIR}/shared/stub/microphone_open.cc
    # ## TODO ## ${STARBOARD_DIR}/shared/stub/microphone_read.cc
    # ${STARBOARD_DIR}/shared/stub/system_get_total_gpu_memory.cc
    # ${STARBOARD_DIR}/shared/stub/system_get_used_gpu_memory.cc
    # ${STARBOARD_DIR}/shared/stub/system_hide_splash_screen.cc
    # ${STARBOARD_DIR}/shared/stub/system_raise_platform_error.cc
    ## TODO ## ${STARBOARD_DIR}/linux/shared/media_is_video_supported.cc
    ## TODO ## ${STARBOARD_DIR}/linux/shared/player_components_impl.cc
    ## TODO ## ${STARBOARD_DIR}/linux/shared/system_get_path.cc
    ## TODO ## ${STARBOARD_DIR}/shared/alsa/alsa_audio_sink_type.cc
    ## TODO ## ${STARBOARD_DIR}/shared/alsa/alsa_audio_sink_type.h
    ## TODO ## ${STARBOARD_DIR}/shared/alsa/alsa_util.cc
    ## TODO ## ${STARBOARD_DIR}/shared/alsa/alsa_util.h
    ## TODO ## ${STARBOARD_DIR}/shared/dlmalloc/memory_map.cc
    ## TODO ## ${STARBOARD_DIR}/shared/dlmalloc/memory_unmap.cc
    ## TODO ## ${STARBOARD_DIR}/shared/ffmpeg/ffmpeg_audio_decoder.cc
    ## TODO ## ${STARBOARD_DIR}/shared/ffmpeg/ffmpeg_audio_decoder.h
    ## TODO ## ${STARBOARD_DIR}/shared/ffmpeg/ffmpeg_common.cc
    ## TODO ## ${STARBOARD_DIR}/shared/ffmpeg/ffmpeg_common.h
    ## TODO ## ${STARBOARD_DIR}/shared/ffmpeg/ffmpeg_video_decoder.cc
    ## TODO ## ${STARBOARD_DIR}/shared/ffmpeg/ffmpeg_video_decoder.h
    ## TODO ## ${STARBOARD_DIR}/shared/gcc/atomic_gcc_public.h
    ## TODO ## ${STARBOARD_DIR}/shared/iso/directory_close.cc
    ## TODO ## ${STARBOARD_DIR}/shared/iso/directory_get_next.cc
    ## TODO ## ${STARBOARD_DIR}/shared/iso/directory_open.cc
    ## TODO ## ${STARBOARD_DIR}/shared/libaom/aom_video_decoder.cc
    ## TODO ## ${STARBOARD_DIR}/shared/libaom/aom_video_decoder.h
    ## TODO ## ${STARBOARD_DIR}/shared/libevent/socket_waiter_add.cc
    ## TODO ## ${STARBOARD_DIR}/shared/libevent/socket_waiter_create.cc
    ## TODO ## ${STARBOARD_DIR}/shared/libevent/socket_waiter_destroy.cc
    ## TODO ## ${STARBOARD_DIR}/shared/libevent/socket_waiter_internal.cc
    ## TODO ## ${STARBOARD_DIR}/shared/libevent/socket_waiter_remove.cc
    ## TODO ## ${STARBOARD_DIR}/shared/libevent/socket_waiter_wait.cc
    ## TODO ## ${STARBOARD_DIR}/shared/libevent/socket_waiter_wait_timed.cc
    ## TODO ## ${STARBOARD_DIR}/shared/libevent/socket_waiter_wake_up.cc
    ## TODO ## ${STARBOARD_DIR}/shared/libvpx/vpx_video_decoder.cc
    ## TODO ## ${STARBOARD_DIR}/shared/libvpx/vpx_video_decoder.h
    ## TODO ## ${STARBOARD_DIR}/shared/linux/audio_sink_type_dispatcher.cc
    ## TODO ## ${STARBOARD_DIR}/shared/linux/socket_get_interface_address.cc
    ## TODO ## ${STARBOARD_DIR}/shared/linux/system_symbolize.cc
    ## TODO ## ${STARBOARD_DIR}/shared/linux/thread_get_id.cc
    ## TODO ## ${STARBOARD_DIR}/shared/linux/thread_get_name.cc
    ## TODO ## ${STARBOARD_DIR}/shared/linux/thread_set_name.cc
    #
    ## TODO ## ${STARBOARD_DIR}/shared/posix/socket_accept.cc
    ## TODO ## ${STARBOARD_DIR}/shared/posix/socket_bind.cc
    ## TODO ## ${STARBOARD_DIR}/shared/posix/socket_clear_last_error.cc
    ## TODO ## ${STARBOARD_DIR}/shared/posix/socket_connect.cc
    ## TODO ## ${STARBOARD_DIR}/shared/posix/socket_create.cc
    ## TODO ## ${STARBOARD_DIR}/shared/posix/socket_destroy.cc
    ## TODO ## ${STARBOARD_DIR}/shared/posix/socket_free_resolution.cc
    ## TODO ## ${STARBOARD_DIR}/shared/posix/socket_get_last_error.cc
    ## TODO ## ${STARBOARD_DIR}/shared/posix/socket_get_local_address.cc
    ## TODO ## ${STARBOARD_DIR}/shared/posix/socket_internal.cc
    ## TODO ## ${STARBOARD_DIR}/shared/posix/socket_is_connected.cc
    ## TODO ## ${STARBOARD_DIR}/shared/posix/socket_is_connected_and_idle.cc
    ## TODO ## ${STARBOARD_DIR}/shared/posix/socket_join_multicast_group.cc
    ## TODO ## ${STARBOARD_DIR}/shared/posix/socket_listen.cc
    ## TODO ## ${STARBOARD_DIR}/shared/posix/socket_receive_from.cc
    ## TODO ## ${STARBOARD_DIR}/shared/posix/socket_resolve.cc
    ## TODO ## ${STARBOARD_DIR}/shared/posix/socket_send_to.cc
    ## TODO ## ${STARBOARD_DIR}/shared/posix/socket_set_broadcast.cc
    ## TODO ## ${STARBOARD_DIR}/shared/posix/socket_set_receive_buffer_size.cc
    ## TODO ## ${STARBOARD_DIR}/shared/posix/socket_set_reuse_address.cc
    ## TODO ## ${STARBOARD_DIR}/shared/posix/socket_set_send_buffer_size.cc
    ## TODO ## ${STARBOARD_DIR}/shared/posix/socket_set_tcp_keep_alive.cc
    ## TODO ## ${STARBOARD_DIR}/shared/posix/socket_set_tcp_no_delay.cc
    ## TODO ## ${STARBOARD_DIR}/shared/posix/socket_set_tcp_window_scaling.cc
    ## TODO ## ${STARBOARD_DIR}/shared/pulse/pulse_audio_sink_type.cc
    ## TODO ## ${STARBOARD_DIR}/shared/pulse/pulse_audio_sink_type.h
    ## TODO ## ${STARBOARD_DIR}/shared/pulse/pulse_dynamic_load_dispatcher.cc
    ## TODO ## ${STARBOARD_DIR}/shared/pulse/pulse_dynamic_load_dispatcher.h
    ## TODO ## ${STARBOARD_DIR}/shared/starboard/audio_sink/audio_sink_create.cc
    ## TODO ## ${STARBOARD_DIR}/shared/starboard/audio_sink/audio_sink_destroy.cc
    ## TODO ## ${STARBOARD_DIR}/shared/starboard/audio_sink/audio_sink_get_max_channels_5_1.cc
    ## TODO ## ${STARBOARD_DIR}/shared/starboard/audio_sink/audio_sink_get_nearest_supported_sample_frequency.cc
    ## TODO ## ${STARBOARD_DIR}/shared/starboard/audio_sink/audio_sink_internal.cc
    ## TODO ## ${STARBOARD_DIR}/shared/starboard/audio_sink/audio_sink_internal.h
    ## TODO ## ${STARBOARD_DIR}/shared/starboard/audio_sink/audio_sink_is_audio_frame_storage_type_supported_interleaved_only.cc
    ## TODO ## ${STARBOARD_DIR}/shared/starboard/audio_sink/audio_sink_is_audio_sample_type_supported_float32_only.cc
    ## TODO ## ${STARBOARD_DIR}/shared/starboard/audio_sink/audio_sink_is_valid.cc
    ## TODO ## ${STARBOARD_DIR}/shared/starboard/audio_sink/stub_audio_sink_type.cc
    ## TODO ## ${STARBOARD_DIR}/shared/starboard/audio_sink/stub_audio_sink_type.h
    ## TODO ## ${STARBOARD_DIR}/shared/starboard/media/codec_util.cc
    ## TODO ## ${STARBOARD_DIR}/shared/starboard/media/codec_util.h
    ## TODO ## ${STARBOARD_DIR}/shared/starboard/media/media_can_play_mime_and_key_system.cc
    ## TODO ## ${STARBOARD_DIR}/shared/starboard/media/media_get_audio_configuration_stereo_only.cc
    ## TODO ## ${STARBOARD_DIR}/shared/starboard/media/media_get_audio_output_count_stereo_only.cc
    ## TODO ## ${STARBOARD_DIR}/shared/starboard/media/media_is_audio_supported_aac_and_opus.cc
    ## TODO ## ${STARBOARD_DIR}/shared/starboard/media/media_is_output_protected.cc
    ## TODO ## ${STARBOARD_DIR}/shared/starboard/media/media_is_transfer_characteristics_supported.cc
    ## TODO ## ${STARBOARD_DIR}/shared/starboard/media/media_set_output_protection.cc
    ## TODO ## ${STARBOARD_DIR}/shared/starboard/media/media_util.cc
    ## TODO ## ${STARBOARD_DIR}/shared/starboard/media/media_util.h
    ## TODO ## ${STARBOARD_DIR}/shared/starboard/media/mime_type.cc
    ## TODO ## ${STARBOARD_DIR}/shared/starboard/media/mime_type.h
    ## TODO ## ${STARBOARD_DIR}/shared/starboard/media/media_is_buffer_using_memory_pool.cc
    ${STARBOARD_DIR}/shared/starboard/player/decoded_audio_internal.cc
    ${STARBOARD_DIR}/shared/starboard/player/decoded_audio_internal.h
    ${STARBOARD_DIR}/shared/starboard/player/filter/audio_decoder_internal.h
    ${STARBOARD_DIR}/shared/starboard/player/filter/audio_frame_tracker.cc
    ${STARBOARD_DIR}/shared/starboard/player/filter/audio_frame_tracker.h
    ${STARBOARD_DIR}/shared/starboard/player/filter/audio_renderer_internal.cc
    ${STARBOARD_DIR}/shared/starboard/player/filter/audio_renderer_internal.h
    ${STARBOARD_DIR}/shared/starboard/player/filter/audio_renderer_sink.h
    ${STARBOARD_DIR}/shared/starboard/player/filter/audio_renderer_sink_impl.cc
    ${STARBOARD_DIR}/shared/starboard/player/filter/audio_renderer_sink_impl.h
    ${STARBOARD_DIR}/shared/starboard/player/filter/audio_resampler_impl.cc
    ${STARBOARD_DIR}/shared/starboard/player/filter/audio_time_stretcher.cc
    ${STARBOARD_DIR}/shared/starboard/player/filter/audio_time_stretcher.h
    ${STARBOARD_DIR}/shared/starboard/player/filter/cpu_video_frame.cc
    ${STARBOARD_DIR}/shared/starboard/player/filter/cpu_video_frame.h
    ${STARBOARD_DIR}/shared/starboard/player/filter/decoded_audio_queue.cc
    ${STARBOARD_DIR}/shared/starboard/player/filter/decoded_audio_queue.h
    ${STARBOARD_DIR}/shared/starboard/player/filter/filter_based_player_worker_handler.cc
    ${STARBOARD_DIR}/shared/starboard/player/filter/filter_based_player_worker_handler.h
    ${STARBOARD_DIR}/shared/starboard/player/filter/media_time_provider.h
    ${STARBOARD_DIR}/shared/starboard/player/filter/media_time_provider_impl.cc
    ${STARBOARD_DIR}/shared/starboard/player/filter/media_time_provider_impl.h
    ${STARBOARD_DIR}/shared/starboard/player/filter/player_components.h
    ${STARBOARD_DIR}/shared/starboard/player/filter/punchout_video_renderer_sink.cc
    ${STARBOARD_DIR}/shared/starboard/player/filter/punchout_video_renderer_sink.h
    ${STARBOARD_DIR}/shared/starboard/player/filter/video_decoder_internal.h
    ${STARBOARD_DIR}/shared/starboard/player/filter/video_frame_internal.h
    ${STARBOARD_DIR}/shared/starboard/player/filter/video_renderer_internal.cc
    ${STARBOARD_DIR}/shared/starboard/player/filter/video_renderer_internal.h
    ${STARBOARD_DIR}/shared/starboard/player/filter/wsola_internal.cc
    ${STARBOARD_DIR}/shared/starboard/player/filter/wsola_internal.h
    ${STARBOARD_DIR}/shared/starboard/player/input_buffer_internal.cc
    ${STARBOARD_DIR}/shared/starboard/player/input_buffer_internal.h
    ${STARBOARD_DIR}/shared/starboard/player/job_queue.cc
    ${STARBOARD_DIR}/shared/starboard/player/job_queue.h
    ${STARBOARD_DIR}/shared/starboard/player/job_thread.cc
    ${STARBOARD_DIR}/shared/starboard/player/job_thread.h
    ${STARBOARD_DIR}/shared/starboard/player/player_create.cc
    ${STARBOARD_DIR}/shared/starboard/player/player_destroy.cc
    ${STARBOARD_DIR}/shared/starboard/player/player_get_current_frame.cc
    ${STARBOARD_DIR}/shared/starboard/player/player_get_info.cc
    ${STARBOARD_DIR}/shared/starboard/player/player_get_info2.cc
    ${STARBOARD_DIR}/shared/starboard/player/player_internal.cc
    ${STARBOARD_DIR}/shared/starboard/player/player_internal.h
    ${STARBOARD_DIR}/shared/starboard/player/player_output_mode_supported.cc
    ${STARBOARD_DIR}/shared/starboard/player/player_output_mode_supported.cc
    ${STARBOARD_DIR}/shared/starboard/player/player_seek.cc
    ${STARBOARD_DIR}/shared/starboard/player/player_seek2.cc
    ${STARBOARD_DIR}/shared/starboard/player/player_set_bounds.cc
    ${STARBOARD_DIR}/shared/starboard/player/player_set_playback_rate.cc
    ${STARBOARD_DIR}/shared/starboard/player/player_set_volume.cc
    ${STARBOARD_DIR}/shared/starboard/player/player_worker.cc
    ${STARBOARD_DIR}/shared/starboard/player/player_worker.h
    ${STARBOARD_DIR}/shared/starboard/player/player_write_end_of_stream.cc
    ${STARBOARD_DIR}/shared/starboard/player/player_write_sample.cc
    ${STARBOARD_DIR}/shared/starboard/player/player_write_sample2.cc
    ${STARBOARD_DIR}/shared/starboard/player/player_get_maximum_number_of_samples_per_write.cc
  )
endif()

if(TARGET_LINUX OR TARGET_EMSCRIPTEN)
  list(APPEND STARBOARD_SOURCES
    ${STARBOARD_DIR}/shared/pthread/condition_variable_broadcast.cc
    ${STARBOARD_DIR}/shared/pthread/condition_variable_create.cc
    ${STARBOARD_DIR}/shared/pthread/condition_variable_destroy.cc
    ${STARBOARD_DIR}/shared/pthread/condition_variable_signal.cc
    ${STARBOARD_DIR}/shared/pthread/condition_variable_wait.cc
    ${STARBOARD_DIR}/shared/pthread/condition_variable_wait_timed.cc
    ${STARBOARD_DIR}/shared/pthread/mutex_acquire.cc
    ${STARBOARD_DIR}/shared/pthread/mutex_acquire_try.cc
    ${STARBOARD_DIR}/shared/pthread/mutex_create.cc
    ${STARBOARD_DIR}/shared/pthread/mutex_destroy.cc
    ${STARBOARD_DIR}/shared/pthread/mutex_release.cc
    ${STARBOARD_DIR}/shared/pthread/thread_context_get_pointer.cc
    ${STARBOARD_DIR}/shared/pthread/thread_context_internal.h
    ${STARBOARD_DIR}/shared/pthread/once.cc
    ${STARBOARD_DIR}/shared/pthread/thread_create.cc
    ${STARBOARD_DIR}/shared/pthread/thread_create_local_key.cc
    ${STARBOARD_DIR}/shared/pthread/thread_create_priority.h
    ${STARBOARD_DIR}/shared/pthread/thread_destroy_local_key.cc
    ${STARBOARD_DIR}/shared/pthread/thread_detach.cc
    ${STARBOARD_DIR}/shared/pthread/thread_get_current.cc
    ${STARBOARD_DIR}/shared/pthread/thread_get_local_value.cc
    ${STARBOARD_DIR}/shared/pthread/thread_is_equal.cc
    ${STARBOARD_DIR}/shared/pthread/thread_join.cc
    ${STARBOARD_DIR}/shared/pthread/thread_sampler_create.cc
    ${STARBOARD_DIR}/shared/pthread/thread_sampler_destroy.cc
    ${STARBOARD_DIR}/shared/pthread/thread_sampler_freeze.cc
    ${STARBOARD_DIR}/shared/pthread/thread_sampler_internal.cc
    ${STARBOARD_DIR}/shared/pthread/thread_sampler_internal.h
    ${STARBOARD_DIR}/shared/pthread/thread_sampler_is_supported.cc
    #${STARBOARD_DIR}/shared/pthread/thread_sampler_is_supported.h
    ${STARBOARD_DIR}/shared/pthread/thread_sampler_thaw.cc
    ${STARBOARD_DIR}/shared/pthread/thread_set_local_value.cc
    ${STARBOARD_DIR}/shared/pthread/thread_yield.cc
    #
    ${STARBOARD_DIR}/linux/shared/atomic_public.h
    ${STARBOARD_DIR}/linux/shared/configuration_public.h
    ## TODO ## requires RefCounted from starboard_common
    ${STARBOARD_DIR}/linux/shared/decode_target_get_info.cc
    ${STARBOARD_DIR}/linux/shared/audio_sink_type_dispatcher.cc
    ## TODO ## requires RefCounted from starboard_common
    ${STARBOARD_DIR}/linux/shared/decode_target_internal.cc
    ## TODO ## requires RefCounted from starboard_common
    ${STARBOARD_DIR}/linux/shared/decode_target_internal.h
    ## TODO ## requires RefCounted from starboard_common
    ${STARBOARD_DIR}/linux/shared/decode_target_release.cc
    ${STARBOARD_DIR}/linux/shared/system_get_connection_type.cc
    ${STARBOARD_DIR}/linux/shared/system_get_device_type.cc
    ${STARBOARD_DIR}/linux/shared/system_has_capability.cc
    ${STARBOARD_DIR}/shared/linux/byte_swap.cc
    ${STARBOARD_DIR}/shared/linux/get_home_directory.cc
    ${STARBOARD_DIR}/shared/linux/memory_get_stack_bounds.cc
    ${STARBOARD_DIR}/shared/linux/page_internal.cc
    ${STARBOARD_DIR}/shared/linux/system_get_random_data.cc
    ${STARBOARD_DIR}/shared/linux/system_get_total_cpu_memory.cc
    ${STARBOARD_DIR}/shared/linux/system_is_debugger_attached.cc
    ${STARBOARD_DIR}/shared/linux/system_get_used_cpu_memory.cc
    #
    ${STARBOARD_DIR}/shared/posix/memory_allocate_aligned_unchecked.cc
    ${STARBOARD_DIR}/shared/posix/memory_free_aligned.cc
    #
    ${STARBOARD_DIR}/shared/posix/directory_create.cc
    ${STARBOARD_DIR}/shared/posix/file_can_open.cc
    ${STARBOARD_DIR}/shared/posix/file_close.cc
    ${STARBOARD_DIR}/shared/posix/file_delete.cc
    ${STARBOARD_DIR}/shared/posix/file_exists.cc
    ${STARBOARD_DIR}/shared/posix/file_flush.cc
    ${STARBOARD_DIR}/shared/posix/file_get_info.cc
    ${STARBOARD_DIR}/shared/posix/file_get_path_info.cc
    ${STARBOARD_DIR}/shared/posix/file_open.cc
    ${STARBOARD_DIR}/shared/posix/file_read.cc
    ${STARBOARD_DIR}/shared/posix/file_seek.cc
    ${STARBOARD_DIR}/shared/posix/file_truncate.cc
    ${STARBOARD_DIR}/shared/posix/file_write.cc
    ${STARBOARD_DIR}/shared/posix/log.cc
    ${STARBOARD_DIR}/shared/posix/log_flush.cc
    ${STARBOARD_DIR}/shared/posix/log_format.cc
    ${STARBOARD_DIR}/shared/posix/log_is_tty.cc
    ${STARBOARD_DIR}/shared/posix/log_raw.cc
    ${STARBOARD_DIR}/shared/posix/memory_flush.cc
    ${STARBOARD_DIR}/shared/posix/set_non_blocking_internal.cc
    ${STARBOARD_DIR}/shared/posix/storage_write_record.cc
    ${STARBOARD_DIR}/shared/posix/string_compare_no_case.cc
    ${STARBOARD_DIR}/shared/posix/string_compare_no_case_n.cc
    ${STARBOARD_DIR}/shared/posix/string_compare_wide.cc
    ${STARBOARD_DIR}/shared/posix/string_format.cc
    ${STARBOARD_DIR}/shared/posix/string_format_wide.cc
    ${STARBOARD_DIR}/shared/posix/system_break_into_debugger.cc
    ${STARBOARD_DIR}/shared/posix/system_clear_last_error.cc
    ${STARBOARD_DIR}/shared/posix/system_get_error_string.cc
    ${STARBOARD_DIR}/shared/posix/system_get_last_error.cc
    ${STARBOARD_DIR}/shared/posix/system_get_locale_id.cc
    ${STARBOARD_DIR}/shared/posix/system_get_number_of_processors.cc
    ${STARBOARD_DIR}/shared/posix/thread_sleep.cc
    ${STARBOARD_DIR}/shared/posix/time_get_monotonic_now.cc
    ${STARBOARD_DIR}/shared/posix/time_get_monotonic_thread_now.cc
    ${STARBOARD_DIR}/shared/posix/time_get_now.cc
    ${STARBOARD_DIR}/shared/posix/time_zone_get_current.cc
    # deprecated with SB_API_VERSION 6
    #${STARBOARD_DIR}/shared/posix/time_zone_get_dst_name.cc
    #${STARBOARD_DIR}/shared/posix/time_zone_get_name.cc
    #
  )
elseif(TARGET_WINDOWS)
  list(APPEND STARBOARD_SOURCES
    ${STARBOARD_DIR}/shared/win_thread/condition_variable_broadcast.cc
    ${STARBOARD_DIR}/shared/win_thread/condition_variable_create.cc
    ${STARBOARD_DIR}/shared/win_thread/condition_variable_destroy.cc
    ${STARBOARD_DIR}/shared/win_thread/condition_variable_signal.cc
    ${STARBOARD_DIR}/shared/win_thread/condition_variable_wait.cc
    ${STARBOARD_DIR}/shared/win_thread/condition_variable_wait_timed.cc
    ${STARBOARD_DIR}/shared/win_thread/mutex_acquire.cc
    ${STARBOARD_DIR}/shared/win_thread/mutex_acquire_try.cc
    ${STARBOARD_DIR}/shared/win_thread/mutex_create.cc
    ${STARBOARD_DIR}/shared/win_thread/mutex_destroy.cc
    ${STARBOARD_DIR}/shared/win_thread/mutex_release.cc
    # # ${STARBOARD_DIR}/shared/win_thread/thread_context_get_pointer.cc
    # # ${STARBOARD_DIR}/shared/win_thread/thread_context_internal.h
    ${STARBOARD_DIR}/shared/win_thread/once.cc
    ${STARBOARD_DIR}/shared/win_thread/thread_create.cc
    ${STARBOARD_DIR}/shared/win_thread/thread_create_local_key.cc
    ${STARBOARD_DIR}/shared/win_thread/thread_create_priority.h
    ${STARBOARD_DIR}/shared/win_thread/thread_destroy_local_key.cc
    ${STARBOARD_DIR}/shared/win_thread/thread_detach.cc
    ${STARBOARD_DIR}/shared/win_thread/thread_get_current.cc
    ${STARBOARD_DIR}/shared/win_thread/thread_get_local_value.cc
    ${STARBOARD_DIR}/shared/win_thread/thread_is_equal.cc
    ${STARBOARD_DIR}/shared/win_thread/thread_join.cc
    # # ${STARBOARD_DIR}/shared/win_thread/thread_sampler_create.cc
    # # ${STARBOARD_DIR}/shared/win_thread/thread_sampler_destroy.cc
    # # ${STARBOARD_DIR}/shared/win_thread/thread_sampler_freeze.cc
    # # ${STARBOARD_DIR}/shared/win_thread/thread_sampler_internal.cc
    # # ${STARBOARD_DIR}/shared/win_thread/thread_sampler_internal.h
    ${STARBOARD_DIR}/shared/win_thread/thread_sampler_is_supported.cc
    # # #${STARBOARD_DIR}/shared/win_thread/thread_sampler_is_supported.h
    # # ${STARBOARD_DIR}/shared/win_thread/thread_sampler_thaw.cc
    ${STARBOARD_DIR}/shared/win_thread/thread_set_local_value.cc
    ${STARBOARD_DIR}/shared/win_thread/thread_yield.cc
    #
    ${STARBOARD_DIR}/win/shared/atomic_public.h
    ${STARBOARD_DIR}/win/shared/configuration_public.h
    ## TODO ## requires RefCounted from starboard_common
    # # ${STARBOARD_DIR}/win/shared/decode_target_get_info.cc
    ${STARBOARD_DIR}/win/shared/audio_sink_type_dispatcher.cc
    # # ## TODO ## requires RefCounted from starboard_common
    ${STARBOARD_DIR}/win/shared/decode_target_internal.cc
    # # ## TODO ## requires RefCounted from starboard_common
    ${STARBOARD_DIR}/win/shared/decode_target_internal.h
    # # ## TODO ## requires RefCounted from starboard_common
    ${STARBOARD_DIR}/win/shared/decode_target_release.cc
    ${STARBOARD_DIR}/win/shared/system_get_connection_type.cc
    ${STARBOARD_DIR}/win/shared/system_get_device_type.cc
    ${STARBOARD_DIR}/win/shared/system_has_capability.cc
    ${STARBOARD_DIR}/shared/windows/byte_swap.cc
    ${STARBOARD_DIR}/shared/windows/get_home_directory.cc
    ${STARBOARD_DIR}/shared/windows/memory_get_stack_bounds.cc
    ${STARBOARD_DIR}/shared/windows/page_internal.cc
    ${STARBOARD_DIR}/shared/windows/system_get_random_data.cc
    ${STARBOARD_DIR}/shared/windows/system_get_total_cpu_memory.cc
    ${STARBOARD_DIR}/shared/windows/system_is_debugger_attached.cc
    ${STARBOARD_DIR}/shared/windows/system_get_used_cpu_memory.cc
    # # #
    ${STARBOARD_DIR}/shared/win/memory_allocate_aligned_unchecked.cc
    ${STARBOARD_DIR}/shared/win/memory_free_aligned.cc
    #
    ${STARBOARD_DIR}/shared/win/directory_create.cc
    ${STARBOARD_DIR}/shared/win/file_can_open.cc
    ${STARBOARD_DIR}/shared/win/file_close.cc
    ${STARBOARD_DIR}/shared/win/file_delete.cc
    ${STARBOARD_DIR}/shared/win/file_exists.cc
    ${STARBOARD_DIR}/shared/win/file_flush.cc
    ${STARBOARD_DIR}/shared/win/file_get_info.cc
    ${STARBOARD_DIR}/shared/win/file_get_path_info.cc
    ${STARBOARD_DIR}/shared/win/file_open.cc
    ${STARBOARD_DIR}/shared/win/file_read.cc
    ${STARBOARD_DIR}/shared/win/file_seek.cc
    ${STARBOARD_DIR}/shared/win/file_truncate.cc
    ${STARBOARD_DIR}/shared/win/file_write.cc
    ${STARBOARD_DIR}/shared/win/log.cc
    ${STARBOARD_DIR}/shared/win/log_flush.cc
    ${STARBOARD_DIR}/shared/win/log_format.cc
    ${STARBOARD_DIR}/shared/win/log_is_tty.cc
    ${STARBOARD_DIR}/shared/win/log_raw.cc
    ${STARBOARD_DIR}/shared/win/memory_flush.cc
    ${STARBOARD_DIR}/shared/win/set_non_blocking_internal.cc
    ${STARBOARD_DIR}/shared/win/storage_write_record.cc
    ${STARBOARD_DIR}/shared/win/string_compare_no_case.cc
    ${STARBOARD_DIR}/shared/win/string_compare_no_case_n.cc
    ${STARBOARD_DIR}/shared/win/string_compare_wide.cc
    ${STARBOARD_DIR}/shared/win/string_format.cc
    ${STARBOARD_DIR}/shared/win/string_format_wide.cc
    ${STARBOARD_DIR}/shared/win/system_break_into_debugger.cc
    ${STARBOARD_DIR}/shared/win/system_clear_last_error.cc
    ${STARBOARD_DIR}/shared/win/system_get_error_string.cc
    ${STARBOARD_DIR}/shared/win/system_get_last_error.cc
    ${STARBOARD_DIR}/shared/win/system_get_locale_id.cc
    ${STARBOARD_DIR}/shared/win/system_get_number_of_processors.cc
    ${STARBOARD_DIR}/shared/win/thread_sleep.cc
    ${STARBOARD_DIR}/shared/win/time_get_monotonic_now.cc
    ${STARBOARD_DIR}/shared/win/time_get_monotonic_thread_now.cc
    ${STARBOARD_DIR}/shared/win/time_get_now.cc
    ${STARBOARD_DIR}/shared/win/time_zone_get_current.cc
    # deprecated with SB_API_VERSION 6
    #${STARBOARD_DIR}/shared/posix/time_zone_get_dst_name.cc
    #${STARBOARD_DIR}/shared/posix/time_zone_get_name.cc
    #
    #

    #${STARBOARD_DIR}/shared/posix/time_zone_get_dst_name.cc
    #${STARBOARD_DIR}/shared/posix/time_zone_get_name.cc
    #

    # ${STARBOARD_DIR}/shared/stub/image_decode.cc
    # ${STARBOARD_DIR}/shared/stub/image_is_decode_supported.cc
    # ${STARBOARD_DIR}/shared/stub/media_is_supported.cc
    # ## TODO ## ${STARBOARD_DIR}/shared/stub/microphone_close.cc
    # ## TODO ## ${STARBOARD_DIR}/shared/stub/microphone_create.cc
    # ## TODO ## ${STARBOARD_DIR}/shared/stub/microphone_destroy.cc
    # ## TODO ## ${STARBOARD_DIR}/shared/stub/microphone_get_available.cc
    # ## TODO ## ${STARBOARD_DIR}/shared/stub/microphone_is_sample_rate_supported.cc
    # ## TODO ## ${STARBOARD_DIR}/shared/stub/microphone_open.cc
    # ## TODO ## ${STARBOARD_DIR}/shared/stub/microphone_read.cc
    # ${STARBOARD_DIR}/shared/stub/system_get_total_gpu_memory.cc
    # ${STARBOARD_DIR}/shared/stub/system_get_used_gpu_memory.cc
    # ${STARBOARD_DIR}/shared/stub/system_hide_splash_screen.cc
    # ${STARBOARD_DIR}/shared/stub/system_raise_platform_error.cc
    ## TODO ## ${STARBOARD_DIR}/linux/shared/media_is_video_supported.cc
    ## TODO ## ${STARBOARD_DIR}/linux/shared/player_components_impl.cc
    ## TODO ## ${STARBOARD_DIR}/linux/shared/system_get_path.cc
    ## TODO ## ${STARBOARD_DIR}/shared/alsa/alsa_audio_sink_type.cc
    ## TODO ## ${STARBOARD_DIR}/shared/alsa/alsa_audio_sink_type.h
    ## TODO ## ${STARBOARD_DIR}/shared/alsa/alsa_util.cc
    ## TODO ## ${STARBOARD_DIR}/shared/alsa/alsa_util.h
    ## TODO ## ${STARBOARD_DIR}/shared/dlmalloc/memory_map.cc
    ## TODO ## ${STARBOARD_DIR}/shared/dlmalloc/memory_unmap.cc
    ## TODO ## ${STARBOARD_DIR}/shared/ffmpeg/ffmpeg_audio_decoder.cc
    ## TODO ## ${STARBOARD_DIR}/shared/ffmpeg/ffmpeg_audio_decoder.h
    ## TODO ## ${STARBOARD_DIR}/shared/ffmpeg/ffmpeg_common.cc
    ## TODO ## ${STARBOARD_DIR}/shared/ffmpeg/ffmpeg_common.h
    ## TODO ## ${STARBOARD_DIR}/shared/ffmpeg/ffmpeg_video_decoder.cc
    ## TODO ## ${STARBOARD_DIR}/shared/ffmpeg/ffmpeg_video_decoder.h
    ## TODO ## ${STARBOARD_DIR}/shared/gcc/atomic_gcc_public.h
    ## TODO ## ${STARBOARD_DIR}/shared/iso/directory_close.cc
    ## TODO ## ${STARBOARD_DIR}/shared/iso/directory_get_next.cc
    ## TODO ## ${STARBOARD_DIR}/shared/iso/directory_open.cc
    ## TODO ## ${STARBOARD_DIR}/shared/libaom/aom_video_decoder.cc
    ## TODO ## ${STARBOARD_DIR}/shared/libaom/aom_video_decoder.h
    ## TODO ## ${STARBOARD_DIR}/shared/libevent/socket_waiter_add.cc
    ## TODO ## ${STARBOARD_DIR}/shared/libevent/socket_waiter_create.cc
    ## TODO ## ${STARBOARD_DIR}/shared/libevent/socket_waiter_destroy.cc
    ## TODO ## ${STARBOARD_DIR}/shared/libevent/socket_waiter_internal.cc
    ## TODO ## ${STARBOARD_DIR}/shared/libevent/socket_waiter_remove.cc
    ## TODO ## ${STARBOARD_DIR}/shared/libevent/socket_waiter_wait.cc
    ## TODO ## ${STARBOARD_DIR}/shared/libevent/socket_waiter_wait_timed.cc
    ## TODO ## ${STARBOARD_DIR}/shared/libevent/socket_waiter_wake_up.cc
    ## TODO ## ${STARBOARD_DIR}/shared/libvpx/vpx_video_decoder.cc
    ## TODO ## ${STARBOARD_DIR}/shared/libvpx/vpx_video_decoder.h
    ## TODO ## ${STARBOARD_DIR}/shared/linux/audio_sink_type_dispatcher.cc
    ## TODO ## ${STARBOARD_DIR}/shared/linux/socket_get_interface_address.cc
    ## TODO ## ${STARBOARD_DIR}/shared/linux/system_symbolize.cc
    ## TODO ## ${STARBOARD_DIR}/shared/linux/thread_get_id.cc
    ## TODO ## ${STARBOARD_DIR}/shared/linux/thread_get_name.cc
    ## TODO ## ${STARBOARD_DIR}/shared/linux/thread_set_name.cc
    #
    ## TODO ## ${STARBOARD_DIR}/shared/posix/socket_accept.cc
    ## TODO ## ${STARBOARD_DIR}/shared/posix/socket_bind.cc
    ## TODO ## ${STARBOARD_DIR}/shared/posix/socket_clear_last_error.cc
    ## TODO ## ${STARBOARD_DIR}/shared/posix/socket_connect.cc
    ## TODO ## ${STARBOARD_DIR}/shared/posix/socket_create.cc
    ## TODO ## ${STARBOARD_DIR}/shared/posix/socket_destroy.cc
    ## TODO ## ${STARBOARD_DIR}/shared/posix/socket_free_resolution.cc
    ## TODO ## ${STARBOARD_DIR}/shared/posix/socket_get_last_error.cc
    ## TODO ## ${STARBOARD_DIR}/shared/posix/socket_get_local_address.cc
    ## TODO ## ${STARBOARD_DIR}/shared/posix/socket_internal.cc
    ## TODO ## ${STARBOARD_DIR}/shared/posix/socket_is_connected.cc
    ## TODO ## ${STARBOARD_DIR}/shared/posix/socket_is_connected_and_idle.cc
    ## TODO ## ${STARBOARD_DIR}/shared/posix/socket_join_multicast_group.cc
    ## TODO ## ${STARBOARD_DIR}/shared/posix/socket_listen.cc
    ## TODO ## ${STARBOARD_DIR}/shared/posix/socket_receive_from.cc
    ## TODO ## ${STARBOARD_DIR}/shared/posix/socket_resolve.cc
    ## TODO ## ${STARBOARD_DIR}/shared/posix/socket_send_to.cc
    ## TODO ## ${STARBOARD_DIR}/shared/posix/socket_set_broadcast.cc
    ## TODO ## ${STARBOARD_DIR}/shared/posix/socket_set_receive_buffer_size.cc
    ## TODO ## ${STARBOARD_DIR}/shared/posix/socket_set_reuse_address.cc
    ## TODO ## ${STARBOARD_DIR}/shared/posix/socket_set_send_buffer_size.cc
    ## TODO ## ${STARBOARD_DIR}/shared/posix/socket_set_tcp_keep_alive.cc
    ## TODO ## ${STARBOARD_DIR}/shared/posix/socket_set_tcp_no_delay.cc
    ## TODO ## ${STARBOARD_DIR}/shared/posix/socket_set_tcp_window_scaling.cc
    ## TODO ## ${STARBOARD_DIR}/shared/pulse/pulse_audio_sink_type.cc
    ## TODO ## ${STARBOARD_DIR}/shared/pulse/pulse_audio_sink_type.h
    ## TODO ## ${STARBOARD_DIR}/shared/pulse/pulse_dynamic_load_dispatcher.cc
    ## TODO ## ${STARBOARD_DIR}/shared/pulse/pulse_dynamic_load_dispatcher.h
    ## TODO ## ${STARBOARD_DIR}/shared/starboard/audio_sink/audio_sink_create.cc
    ## TODO ## ${STARBOARD_DIR}/shared/starboard/audio_sink/audio_sink_destroy.cc
    ## TODO ## ${STARBOARD_DIR}/shared/starboard/audio_sink/audio_sink_get_max_channels_5_1.cc
    ## TODO ## ${STARBOARD_DIR}/shared/starboard/audio_sink/audio_sink_get_nearest_supported_sample_frequency.cc
    ## TODO ## ${STARBOARD_DIR}/shared/starboard/audio_sink/audio_sink_internal.cc
    ## TODO ## ${STARBOARD_DIR}/shared/starboard/audio_sink/audio_sink_internal.h
    ## TODO ## ${STARBOARD_DIR}/shared/starboard/audio_sink/audio_sink_is_audio_frame_storage_type_supported_interleaved_only.cc
    ## TODO ## ${STARBOARD_DIR}/shared/starboard/audio_sink/audio_sink_is_audio_sample_type_supported_float32_only.cc
    ## TODO ## ${STARBOARD_DIR}/shared/starboard/audio_sink/audio_sink_is_valid.cc
    ## TODO ## ${STARBOARD_DIR}/shared/starboard/audio_sink/stub_audio_sink_type.cc
    ## TODO ## ${STARBOARD_DIR}/shared/starboard/audio_sink/stub_audio_sink_type.h
    ## TODO ## ${STARBOARD_DIR}/shared/starboard/media/codec_util.cc
    ## TODO ## ${STARBOARD_DIR}/shared/starboard/media/codec_util.h
    ## TODO ## ${STARBOARD_DIR}/shared/starboard/media/media_can_play_mime_and_key_system.cc
    ## TODO ## ${STARBOARD_DIR}/shared/starboard/media/media_get_audio_configuration_stereo_only.cc
    ## TODO ## ${STARBOARD_DIR}/shared/starboard/media/media_get_audio_output_count_stereo_only.cc
    ## TODO ## ${STARBOARD_DIR}/shared/starboard/media/media_is_audio_supported_aac_and_opus.cc
    ## TODO ## ${STARBOARD_DIR}/shared/starboard/media/media_is_output_protected.cc
    ## TODO ## ${STARBOARD_DIR}/shared/starboard/media/media_is_transfer_characteristics_supported.cc
    ## TODO ## ${STARBOARD_DIR}/shared/starboard/media/media_set_output_protection.cc
    ## TODO ## ${STARBOARD_DIR}/shared/starboard/media/media_util.cc
    ## TODO ## ${STARBOARD_DIR}/shared/starboard/media/media_util.h
    ## TODO ## ${STARBOARD_DIR}/shared/starboard/media/mime_type.cc
    ## TODO ## ${STARBOARD_DIR}/shared/starboard/media/mime_type.h
    ## TODO ## ${STARBOARD_DIR}/shared/starboard/media/media_is_buffer_using_memory_pool.cc
    ${STARBOARD_DIR}/shared/starboard/player/decoded_audio_internal.cc
    ${STARBOARD_DIR}/shared/starboard/player/decoded_audio_internal.h
    ${STARBOARD_DIR}/shared/starboard/player/filter/audio_decoder_internal.h
    ${STARBOARD_DIR}/shared/starboard/player/filter/audio_frame_tracker.cc
    ${STARBOARD_DIR}/shared/starboard/player/filter/audio_frame_tracker.h
    ${STARBOARD_DIR}/shared/starboard/player/filter/audio_renderer_internal.cc
    ${STARBOARD_DIR}/shared/starboard/player/filter/audio_renderer_internal.h
    ${STARBOARD_DIR}/shared/starboard/player/filter/audio_renderer_sink.h
    ${STARBOARD_DIR}/shared/starboard/player/filter/audio_renderer_sink_impl.cc
    ${STARBOARD_DIR}/shared/starboard/player/filter/audio_renderer_sink_impl.h
    ${STARBOARD_DIR}/shared/starboard/player/filter/audio_resampler_impl.cc
    ${STARBOARD_DIR}/shared/starboard/player/filter/audio_time_stretcher.cc
    ${STARBOARD_DIR}/shared/starboard/player/filter/audio_time_stretcher.h
    ${STARBOARD_DIR}/shared/starboard/player/filter/cpu_video_frame.cc
    ${STARBOARD_DIR}/shared/starboard/player/filter/cpu_video_frame.h
    ${STARBOARD_DIR}/shared/starboard/player/filter/decoded_audio_queue.cc
    ${STARBOARD_DIR}/shared/starboard/player/filter/decoded_audio_queue.h
    ${STARBOARD_DIR}/shared/starboard/player/filter/filter_based_player_worker_handler.cc
    ${STARBOARD_DIR}/shared/starboard/player/filter/filter_based_player_worker_handler.h
    ${STARBOARD_DIR}/shared/starboard/player/filter/media_time_provider.h
    ${STARBOARD_DIR}/shared/starboard/player/filter/media_time_provider_impl.cc
    ${STARBOARD_DIR}/shared/starboard/player/filter/media_time_provider_impl.h
    ${STARBOARD_DIR}/shared/starboard/player/filter/player_components.h
    ${STARBOARD_DIR}/shared/starboard/player/filter/punchout_video_renderer_sink.cc
    ${STARBOARD_DIR}/shared/starboard/player/filter/punchout_video_renderer_sink.h
    ${STARBOARD_DIR}/shared/starboard/player/filter/video_decoder_internal.h
    ${STARBOARD_DIR}/shared/starboard/player/filter/video_frame_internal.h
    ${STARBOARD_DIR}/shared/starboard/player/filter/video_renderer_internal.cc
    ${STARBOARD_DIR}/shared/starboard/player/filter/video_renderer_internal.h
    ${STARBOARD_DIR}/shared/starboard/player/filter/wsola_internal.cc
    ${STARBOARD_DIR}/shared/starboard/player/filter/wsola_internal.h
    ${STARBOARD_DIR}/shared/starboard/player/input_buffer_internal.cc
    ${STARBOARD_DIR}/shared/starboard/player/input_buffer_internal.h
    ${STARBOARD_DIR}/shared/starboard/player/job_queue.cc
    ${STARBOARD_DIR}/shared/starboard/player/job_queue.h
    ${STARBOARD_DIR}/shared/starboard/player/job_thread.cc
    ${STARBOARD_DIR}/shared/starboard/player/job_thread.h
    ${STARBOARD_DIR}/shared/starboard/player/player_create.cc
    ${STARBOARD_DIR}/shared/starboard/player/player_destroy.cc
    ${STARBOARD_DIR}/shared/starboard/player/player_get_current_frame.cc
    ${STARBOARD_DIR}/shared/starboard/player/player_get_info.cc
    ${STARBOARD_DIR}/shared/starboard/player/player_get_info2.cc
    ${STARBOARD_DIR}/shared/starboard/player/player_internal.cc
    ${STARBOARD_DIR}/shared/starboard/player/player_internal.h
    ${STARBOARD_DIR}/shared/starboard/player/player_output_mode_supported.cc
    ${STARBOARD_DIR}/shared/starboard/player/player_output_mode_supported.cc
    ${STARBOARD_DIR}/shared/starboard/player/player_seek.cc
    ${STARBOARD_DIR}/shared/starboard/player/player_seek2.cc
    ${STARBOARD_DIR}/shared/starboard/player/player_set_bounds.cc
    ${STARBOARD_DIR}/shared/starboard/player/player_set_playback_rate.cc
    ${STARBOARD_DIR}/shared/starboard/player/player_set_volume.cc
    ${STARBOARD_DIR}/shared/starboard/player/player_worker.cc
    ${STARBOARD_DIR}/shared/starboard/player/player_worker.h
    ${STARBOARD_DIR}/shared/starboard/player/player_write_end_of_stream.cc
    ${STARBOARD_DIR}/shared/starboard/player/player_write_sample.cc
    ${STARBOARD_DIR}/shared/starboard/player/player_write_sample2.cc
    ${STARBOARD_DIR}/shared/starboard/player/player_get_maximum_number_of_samples_per_write.cc
  )
else()
  message(FATAL_ERROR "unknown platform")
endif()

list(APPEND STARBOARD_SOURCES
  ${STARBOARD_DIR}/shared/starboard/queue_application.cc
  ${STARBOARD_DIR}/shared/starboard/string_concat.cc
  ${STARBOARD_DIR}/shared/starboard/string_concat_wide.cc
  ${STARBOARD_DIR}/shared/starboard/string_copy.cc
  ${STARBOARD_DIR}/shared/starboard/string_copy_wide.cc
  ${STARBOARD_DIR}/shared/starboard/string_duplicate.cc
  ${STARBOARD_DIR}/shared/starboard/system_get_random_uint64.cc
  ${STARBOARD_DIR}/shared/starboard/system_request_pause.cc
  ${STARBOARD_DIR}/shared/starboard/system_request_stop.cc
  ${STARBOARD_DIR}/shared/starboard/system_request_suspend.cc
  ${STARBOARD_DIR}/shared/starboard/system_request_unpause.cc
  ${STARBOARD_DIR}/shared/starboard/system_supports_resume.cc
  ${STARBOARD_DIR}/shared/starboard/system_supports_resume.cc
  ${STARBOARD_DIR}/shared/starboard/window_set_default_options.cc
  # TODO
  ${STARBOARD_DIR}/shared/stub/accessibility_get_display_settings.cc
  ${STARBOARD_DIR}/shared/stub/accessibility_get_text_to_speech_settings.cc
  ${STARBOARD_DIR}/shared/stub/cpu_features_get.cc
  ${STARBOARD_DIR}/shared/stub/cryptography_create_transformer.cc
  ${STARBOARD_DIR}/shared/stub/cryptography_destroy_transformer.cc
  ${STARBOARD_DIR}/shared/stub/cryptography_get_tag.cc
  ${STARBOARD_DIR}/shared/stub/cryptography_set_authenticated_data.cc
  ${STARBOARD_DIR}/shared/stub/cryptography_set_initialization_vector.cc
  ${STARBOARD_DIR}/shared/stub/cryptography_transform.cc
  ${STARBOARD_DIR}/shared/stub/system_get_extensions.cc
  ${STARBOARD_DIR}/shared/stub/image_decode.cc
  ${STARBOARD_DIR}/shared/stub/image_is_decode_supported.cc
  ${STARBOARD_DIR}/shared/stub/media_set_audio_write_duration.cc
  ${STARBOARD_DIR}/shared/stub/microphone_close.cc
  ${STARBOARD_DIR}/shared/stub/microphone_create.cc
  ${STARBOARD_DIR}/shared/stub/microphone_destroy.cc
  ${STARBOARD_DIR}/shared/stub/microphone_get_available.cc
  ${STARBOARD_DIR}/shared/stub/microphone_is_sample_rate_supported.cc
  ${STARBOARD_DIR}/shared/stub/microphone_open.cc
  ${STARBOARD_DIR}/shared/stub/microphone_read.cc
  ${STARBOARD_DIR}/shared/stub/system_get_total_gpu_memory.cc
  ${STARBOARD_DIR}/shared/stub/system_get_used_gpu_memory.cc
  ${STARBOARD_DIR}/shared/stub/system_hide_splash_screen.cc
  ${STARBOARD_DIR}/shared/stub/system_raise_platform_error.cc
  ${STARBOARD_DIR}/shared/stub/system_sign_with_certification_secret_key.cc
  ${STARBOARD_DIR}/shared/stub/ui_nav_get_interface.cc
  ${STARBOARD_DIR}/shared/stub/window_get_diagonal_size_in_inches.cc
  #
  ${STARBOARD_DIR}/shared/stub/window_create.cc
  ${STARBOARD_DIR}/shared/stub/window_destroy.cc
  ${STARBOARD_DIR}/shared/stub/window_get_platform_handle.cc
  ${STARBOARD_DIR}/shared/stub/window_get_size.cc
  ${STARBOARD_DIR}/shared/stub/window_on_screen_keyboard_suggestions_supported.cc
  ${STARBOARD_DIR}/shared/stub/window_update_on_screen_keyboard_suggestions.cc
  # TODO
  # ## TODO ##
  #
  ${STARBOARD_DIR}/shared/stub/drm_close_session.cc
  # ## TODO ##
  #
  ${STARBOARD_DIR}/shared/stub/drm_create_system.cc
  # ## TODO ##
  #
  ${STARBOARD_DIR}/shared/stub/drm_destroy_system.cc
  # ## TODO ##
  #
  ${STARBOARD_DIR}/shared/stub/drm_generate_session_update_request.cc
  # ## TODO ##
  #
  ${STARBOARD_DIR}/shared/stub/drm_is_server_certificate_updatable.cc
  # ## TODO ##
  # #
  # ${STARBOARD_DIR}/shared/stub/drm_system_internal.h
  # ## TODO ##
  #
  ${STARBOARD_DIR}/shared/stub/drm_update_server_certificate.cc
  # ## TODO ##
  #
  ${STARBOARD_DIR}/shared/stub/drm_update_session.cc
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
  ${STARBOARD_DIR}/shared/iso/memory_allocate_unchecked.cc
  ${STARBOARD_DIR}/shared/iso/memory_free.cc
  ${STARBOARD_DIR}/shared/iso/memory_reallocate_unchecked.cc
  # TODO
)
