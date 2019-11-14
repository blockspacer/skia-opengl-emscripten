# see platform

# sed -e '/.h/ s/^#*/#/' -i GMEDIA.cmake

### --- GMEDIA ---###

set(CUR_SRC_DIR ${GMEDIA_DIR})

# path to ...gen/third_party/blink/renderer/network/
#set(CUR_OUT_DIR ${GEN_COMBINED_DIR}/third_party/blink/common/)

list(APPEND GMEDIA_SOURCES
#  # component("shared_memory_support")
## TODO ##   ${CUR_SRC_DIR}base/audio_bus.cc
## TODO ## #  #${CUR_SRC_DIR}base/audio_bus.h
## TODO ##   ${CUR_SRC_DIR}base/audio_latency.cc
## TODO ## #  #${CUR_SRC_DIR}base/audio_latency.h
## TODO ##   ${CUR_SRC_DIR}base/audio_parameters.cc
## TODO ## #  #${CUR_SRC_DIR}base/audio_parameters.h
## TODO ##   ${CUR_SRC_DIR}base/audio_point.cc
#  #${CUR_SRC_DIR}base/audio_point.h
#  #${CUR_SRC_DIR}base/audio_sample_types.h
  ${CUR_SRC_DIR}base/channel_layout.cc
#  #${CUR_SRC_DIR}base/channel_layout.h
#  #${CUR_SRC_DIR}base/limits.h
#  #${CUR_SRC_DIR}base/media_shmem_export.h
  ${CUR_SRC_DIR}base/sample_format.cc
#  #${CUR_SRC_DIR}base/sample_format.h
  ${CUR_SRC_DIR}base/vector_math.cc
  #${CUR_SRC_DIR}base/vector_math.h
#  #${CUR_SRC_DIR}base/vector_math_testing.h
)

list(APPEND GMEDIA_BASE_SOURCES
## TODO ##   ${CUR_SRC_DIR}base/android_overlay_config.cc
## TODO ## #  ${CUR_SRC_DIR}base/android_overlay_config.h
## TODO ## #  ${CUR_SRC_DIR}base/android_overlay_mojo_factory.h
## TODO ##   ${CUR_SRC_DIR}base/audio_block_fifo.cc
## TODO ## #  ${CUR_SRC_DIR}base/audio_block_fifo.h
## TODO ##   ${CUR_SRC_DIR}base/audio_buffer.cc
## TODO ## #  ${CUR_SRC_DIR}base/audio_buffer.h
## TODO ##   ${CUR_SRC_DIR}base/audio_buffer_converter.cc
## TODO ## #  ${CUR_SRC_DIR}base/audio_buffer_converter.h
## TODO ##   ${CUR_SRC_DIR}base/audio_buffer_queue.cc
## TODO ## #  ${CUR_SRC_DIR}base/audio_buffer_queue.h
## TODO ## #  ${CUR_SRC_DIR}base/audio_capturer_source.h
${CUR_SRC_DIR}base/audio_codecs.cc
## TODO ## #  ${CUR_SRC_DIR}base/audio_codecs.h
## TODO ##   ${CUR_SRC_DIR}base/audio_converter.cc
## TODO ## #  ${CUR_SRC_DIR}base/audio_converter.h
## TODO ##   ${CUR_SRC_DIR}base/audio_decoder.cc
## TODO ## #  ${CUR_SRC_DIR}base/audio_decoder.h
  ${CUR_SRC_DIR}base/audio_decoder_config.cc
  #${CUR_SRC_DIR}base/audio_decoder_config.h
## TODO ## #  ${CUR_SRC_DIR}base/audio_discard_helper.cc
## TODO ## #  ${CUR_SRC_DIR}base/audio_discard_helper.h
## TODO ##   ${CUR_SRC_DIR}base/audio_fifo.cc
## TODO ## #  ${CUR_SRC_DIR}base/audio_fifo.h
## TODO ## #  ${CUR_SRC_DIR}base/audio_hash.cc
## TODO ## #  ${CUR_SRC_DIR}base/audio_hash.h
## TODO ##   ${CUR_SRC_DIR}base/audio_processing.cc
## TODO ## #  ${CUR_SRC_DIR}base/audio_processing.h
## TODO ##   ${CUR_SRC_DIR}base/audio_pull_fifo.cc
## TODO ## #  ${CUR_SRC_DIR}base/audio_pull_fifo.h
## TODO ## #  ${CUR_SRC_DIR}base/audio_push_fifo.cc
## TODO ## #  ${CUR_SRC_DIR}base/audio_push_fifo.h
## TODO ##   ${CUR_SRC_DIR}base/audio_renderer.cc
## TODO ## #  ${CUR_SRC_DIR}base/audio_renderer.h
## TODO ##   ${CUR_SRC_DIR}base/audio_renderer_mixer.cc
## TODO ## #  ${CUR_SRC_DIR}base/audio_renderer_mixer.h
## TODO ##   ${CUR_SRC_DIR}base/audio_renderer_mixer_input.cc
## TODO ## #  ${CUR_SRC_DIR}base/audio_renderer_mixer_input.h
## TODO ## #  ${CUR_SRC_DIR}base/audio_renderer_mixer_pool.h
## TODO ## #  ${CUR_SRC_DIR}base/audio_renderer_sink.h
## TODO ## #  ${CUR_SRC_DIR}base/audio_shifter.cc
## TODO ## #  ${CUR_SRC_DIR}base/audio_shifter.h
## TODO ## #  ${CUR_SRC_DIR}base/audio_timestamp_helper.cc
## TODO ## #  ${CUR_SRC_DIR}base/audio_timestamp_helper.h
#  ${CUR_SRC_DIR}base/bind_to_current_loop.h
  ${CUR_SRC_DIR}base/bit_reader.cc
#  ${CUR_SRC_DIR}base/bit_reader.h
  ${CUR_SRC_DIR}base/bit_reader_core.cc
#  ${CUR_SRC_DIR}base/bit_reader_core.h
  ${CUR_SRC_DIR}base/bitstream_buffer.cc
#  ${CUR_SRC_DIR}base/bitstream_buffer.h
#  ${CUR_SRC_DIR}base/buffering_state.h
  ${CUR_SRC_DIR}base/byte_queue.cc
#  ${CUR_SRC_DIR}base/byte_queue.h
#  ${CUR_SRC_DIR}base/callback_holder.h
#  ${CUR_SRC_DIR}base/callback_registry.h
  ${CUR_SRC_DIR}base/cdm_callback_promise.cc
#  ${CUR_SRC_DIR}base/cdm_callback_promise.h
#  ${CUR_SRC_DIR}base/cdm_config.h
  ${CUR_SRC_DIR}base/cdm_context.cc
#  ${CUR_SRC_DIR}base/cdm_context.h
  ${CUR_SRC_DIR}base/cdm_factory.cc
#  ${CUR_SRC_DIR}base/cdm_factory.h
  ${CUR_SRC_DIR}base/cdm_initialized_promise.cc
#  ${CUR_SRC_DIR}base/cdm_initialized_promise.h
  ${CUR_SRC_DIR}base/cdm_key_information.cc
#  ${CUR_SRC_DIR}base/cdm_key_information.h
  ${CUR_SRC_DIR}base/cdm_promise.cc
#  ${CUR_SRC_DIR}base/cdm_promise.h
  ${CUR_SRC_DIR}base/cdm_promise_adapter.cc
#  ${CUR_SRC_DIR}base/cdm_promise_adapter.h
  ${CUR_SRC_DIR}base/cdm_session_tracker.cc
#  ${CUR_SRC_DIR}base/cdm_session_tracker.h
#  ${CUR_SRC_DIR}base/channel_mixer.cc
#  ${CUR_SRC_DIR}base/channel_mixer.h
#  ${CUR_SRC_DIR}base/channel_mixing_matrix.cc
#  ${CUR_SRC_DIR}base/channel_mixing_matrix.h
  ${CUR_SRC_DIR}base/container_names.cc
#  ${CUR_SRC_DIR}base/container_names.h
  ${CUR_SRC_DIR}base/content_decryption_module.cc
#  ${CUR_SRC_DIR}base/content_decryption_module.h
  ${CUR_SRC_DIR}base/data_buffer.cc
#  ${CUR_SRC_DIR}base/data_buffer.h
  ${CUR_SRC_DIR}base/data_source.cc
#  ${CUR_SRC_DIR}base/data_source.h
  ${CUR_SRC_DIR}base/decode_status.cc
#  ${CUR_SRC_DIR}base/decode_status.h
  ${CUR_SRC_DIR}base/decoder_buffer.cc
#  ${CUR_SRC_DIR}base/decoder_buffer.h
  ${CUR_SRC_DIR}base/decoder_buffer_queue.cc
#  ${CUR_SRC_DIR}base/decoder_buffer_queue.h
  ${CUR_SRC_DIR}base/decoder_factory.cc
#  ${CUR_SRC_DIR}base/decoder_factory.h
  ${CUR_SRC_DIR}base/decrypt_config.cc
#  ${CUR_SRC_DIR}base/decrypt_config.h
  ${CUR_SRC_DIR}base/decryptor.cc
#  ${CUR_SRC_DIR}base/decryptor.h
  ${CUR_SRC_DIR}base/demuxer.cc
#  ${CUR_SRC_DIR}base/demuxer.h
#  ${CUR_SRC_DIR}base/demuxer_memory_limit.h
  ${CUR_SRC_DIR}base/demuxer_stream.cc
#  ${CUR_SRC_DIR}base/demuxer_stream.h
  ${CUR_SRC_DIR}base/djb2.cc
#  ${CUR_SRC_DIR}base/djb2.h
#  ${CUR_SRC_DIR}base/eme_constants.h
  ${CUR_SRC_DIR}base/encryption_pattern.cc
#  ${CUR_SRC_DIR}base/encryption_pattern.h
  ${CUR_SRC_DIR}base/encryption_scheme.cc
#  ${CUR_SRC_DIR}base/encryption_scheme.h
  ${CUR_SRC_DIR}base/fake_audio_worker.cc
#  ${CUR_SRC_DIR}base/fake_audio_worker.h
  ${CUR_SRC_DIR}base/fallback_video_decoder.cc
#  ${CUR_SRC_DIR}base/fallback_video_decoder.h
#  ${CUR_SRC_DIR}base/feedback_signal_accumulator.h
#  ${CUR_SRC_DIR}base/flinging_controller.h
  ${CUR_SRC_DIR}base/hdr_metadata.cc
#  ${CUR_SRC_DIR}base/hdr_metadata.h
  ${CUR_SRC_DIR}base/key_system_names.cc
#  ${CUR_SRC_DIR}base/key_system_names.h
  ${CUR_SRC_DIR}base/key_system_properties.cc
#  ${CUR_SRC_DIR}base/key_system_properties.h
  ## TODO ## requires widevine
  ## TODO ## ${CUR_SRC_DIR}base/key_systems.cc
#  ## TODO ## ${CUR_SRC_DIR}base/key_systems.h
  ${CUR_SRC_DIR}base/localized_strings.cc
#  ${CUR_SRC_DIR}base/localized_strings.h
#  ${CUR_SRC_DIR}base/logging_override_if_enabled.h
  ${CUR_SRC_DIR}base/loopback_audio_converter.cc
#  ${CUR_SRC_DIR}base/loopback_audio_converter.h
  ${CUR_SRC_DIR}base/media.cc
#  ${CUR_SRC_DIR}base/media.h
  ${CUR_SRC_DIR}base/media_client.cc
#  ${CUR_SRC_DIR}base/media_client.h
  ${CUR_SRC_DIR}base/media_content_type.cc
#  ${CUR_SRC_DIR}base/media_content_type.h
#  ${CUR_SRC_DIR}base/media_controller.h
#  ${CUR_SRC_DIR}base/media_export.h
  ${CUR_SRC_DIR}base/media_log.cc
#  ${CUR_SRC_DIR}base/media_log.h
#  ${CUR_SRC_DIR}base/media_log_event.h
  ${CUR_SRC_DIR}base/media_observer.cc
#  ${CUR_SRC_DIR}base/media_observer.h
  ${CUR_SRC_DIR}base/media_permission.cc
#  ${CUR_SRC_DIR}base/media_permission.h
  ${CUR_SRC_DIR}base/media_resource.cc
#  ${CUR_SRC_DIR}base/media_resource.h
  ${CUR_SRC_DIR}base/media_status.cc
#  ${CUR_SRC_DIR}base/media_status.h
#  ${CUR_SRC_DIR}base/media_status_observer.h
  ## TODO ## requires widevine
  ${CUR_SRC_DIR}base/media_switches.cc
#  ## TODO ## ${CUR_SRC_DIR}base/media_switches.h
  ${CUR_SRC_DIR}base/media_track.cc
#  ${CUR_SRC_DIR}base/media_track.h
  ${CUR_SRC_DIR}base/media_tracks.cc
#  ${CUR_SRC_DIR}base/media_tracks.h
  ${CUR_SRC_DIR}base/media_types.cc
#  ${CUR_SRC_DIR}base/media_types.h
  ${CUR_SRC_DIR}base/media_url_demuxer.cc
#  ${CUR_SRC_DIR}base/media_url_demuxer.h
#  ${CUR_SRC_DIR}base/media_url_params.h
  ${CUR_SRC_DIR}base/media_util.cc
#  ${CUR_SRC_DIR}base/media_util.h
  ${CUR_SRC_DIR}base/mime_util.cc
#  ${CUR_SRC_DIR}base/mime_util.h
  ${CUR_SRC_DIR}base/mime_util_internal.cc
#  ${CUR_SRC_DIR}base/mime_util_internal.h
  ${CUR_SRC_DIR}base/moving_average.cc
#  ${CUR_SRC_DIR}base/moving_average.h
#  ${CUR_SRC_DIR}base/multi_channel_resampler.cc
#  ${CUR_SRC_DIR}base/multi_channel_resampler.h
  ${CUR_SRC_DIR}base/null_video_sink.cc
#  ${CUR_SRC_DIR}base/null_video_sink.h
  ${CUR_SRC_DIR}base/output_device_info.cc
#  ${CUR_SRC_DIR}base/output_device_info.h
  ${CUR_SRC_DIR}base/overlay_info.cc
#  ${CUR_SRC_DIR}base/overlay_info.h
#  ${CUR_SRC_DIR}base/pipeline.h
# requires media::AudioDecoderConfig::AudioDecoderConfig
  ${CUR_SRC_DIR}base/pipeline_impl.cc
#  ${CUR_SRC_DIR}base/pipeline_impl.h
# requires media::AudioDecoderConfig::AudioDecoderConfig
  ${CUR_SRC_DIR}base/pipeline_metadata.cc
#  ${CUR_SRC_DIR}base/pipeline_metadata.h
  ${CUR_SRC_DIR}base/pipeline_status.cc
#  ${CUR_SRC_DIR}base/pipeline_status.h
  ${CUR_SRC_DIR}base/player_tracker.cc
#  ${CUR_SRC_DIR}base/player_tracker.h
#  ${CUR_SRC_DIR}base/provision_fetcher.h
  ${CUR_SRC_DIR}base/ranges.cc
#  ${CUR_SRC_DIR}base/ranges.h
#  ${CUR_SRC_DIR}base/reentrancy_checker.cc
#  ${CUR_SRC_DIR}base/reentrancy_checker.h
  ${CUR_SRC_DIR}base/renderer.cc
#  ${CUR_SRC_DIR}base/renderer.h
#  ${CUR_SRC_DIR}base/renderer_client.h
  ${CUR_SRC_DIR}base/renderer_factory.cc
#  ${CUR_SRC_DIR}base/renderer_factory.h
  ${CUR_SRC_DIR}base/renderer_factory_selector.cc
#  ${CUR_SRC_DIR}base/renderer_factory_selector.h
#  ${CUR_SRC_DIR}base/routing_token_callback.h
  ${CUR_SRC_DIR}base/sample_rates.cc
#  ${CUR_SRC_DIR}base/sample_rates.h
  ${CUR_SRC_DIR}base/scoped_async_trace.cc
#  ${CUR_SRC_DIR}base/scoped_async_trace.h
  ${CUR_SRC_DIR}base/seekable_buffer.cc
#  ${CUR_SRC_DIR}base/seekable_buffer.h
  ${CUR_SRC_DIR}base/serial_runner.cc
#  ${CUR_SRC_DIR}base/serial_runner.h
  ${CUR_SRC_DIR}base/silent_sink_suspender.cc
#  ${CUR_SRC_DIR}base/silent_sink_suspender.h
  ${CUR_SRC_DIR}base/simple_sync_token_client.cc
#  ${CUR_SRC_DIR}base/simple_sync_token_client.h
  ${CUR_SRC_DIR}base/sinc_resampler.cc
#  ${CUR_SRC_DIR}base/sinc_resampler.h
  ${CUR_SRC_DIR}base/stream_parser.cc
#  ${CUR_SRC_DIR}base/stream_parser.h
  ${CUR_SRC_DIR}base/stream_parser_buffer.cc
#  ${CUR_SRC_DIR}base/stream_parser_buffer.h
  ${CUR_SRC_DIR}base/subsample_entry.cc
#  ${CUR_SRC_DIR}base/subsample_entry.h
  ${CUR_SRC_DIR}base/supported_types.cc
#  ${CUR_SRC_DIR}base/supported_types.h
  ${CUR_SRC_DIR}base/text_cue.cc
#  ${CUR_SRC_DIR}base/text_cue.h
  ${CUR_SRC_DIR}base/text_ranges.cc
#  ${CUR_SRC_DIR}base/text_ranges.h
  ${CUR_SRC_DIR}base/text_renderer.cc
#  ${CUR_SRC_DIR}base/text_renderer.h
#  ${CUR_SRC_DIR}base/text_track.h
  ${CUR_SRC_DIR}base/text_track_config.cc
#  ${CUR_SRC_DIR}base/text_track_config.h
  ${CUR_SRC_DIR}base/time_delta_interpolator.cc
#  ${CUR_SRC_DIR}base/time_delta_interpolator.h
#  ${CUR_SRC_DIR}base/time_source.h
#  ${CUR_SRC_DIR}base/timestamp_constants.h
#  ${CUR_SRC_DIR}base/unaligned_shared_memory.cc
#  ${CUR_SRC_DIR}base/unaligned_shared_memory.h
  ${CUR_SRC_DIR}base/user_input_monitor.cc
#  ${CUR_SRC_DIR}base/user_input_monitor.h
  ${CUR_SRC_DIR}base/video_bitrate_allocation.cc
#  ${CUR_SRC_DIR}base/video_bitrate_allocation.h
  ${CUR_SRC_DIR}base/video_codecs.cc
#  ${CUR_SRC_DIR}base/video_codecs.h
  ${CUR_SRC_DIR}base/video_color_space.cc
#  ${CUR_SRC_DIR}base/video_color_space.h
  ${CUR_SRC_DIR}base/video_decoder.cc
#  ${CUR_SRC_DIR}base/video_decoder.h
  ${CUR_SRC_DIR}base/video_decoder_config.cc
#  ${CUR_SRC_DIR}base/video_decoder_config.h
  ${CUR_SRC_DIR}base/video_frame.cc
#  ${CUR_SRC_DIR}base/video_frame.h
  ${CUR_SRC_DIR}base/video_frame_layout.cc
#  ${CUR_SRC_DIR}base/video_frame_layout.h
  ${CUR_SRC_DIR}base/video_frame_metadata.cc
#  ${CUR_SRC_DIR}base/video_frame_metadata.h
  ${CUR_SRC_DIR}base/video_frame_pool.cc
#  ${CUR_SRC_DIR}base/video_frame_pool.h
  ${CUR_SRC_DIR}base/video_renderer.cc
#  ${CUR_SRC_DIR}base/video_renderer.h
#  ${CUR_SRC_DIR}base/video_thumbnail_decoder.cc
#  ${CUR_SRC_DIR}base/video_thumbnail_decoder.h
  ${CUR_SRC_DIR}base/video_transformation.cc
#  ${CUR_SRC_DIR}base/video_transformation.h
  ${CUR_SRC_DIR}base/video_types.cc
#  ${CUR_SRC_DIR}base/video_types.h
  ${CUR_SRC_DIR}base/video_util.cc
#  ${CUR_SRC_DIR}base/video_util.h
#  ${CUR_SRC_DIR}base/waiting.h
  ${CUR_SRC_DIR}base/wall_clock_time_source.cc
#  ${CUR_SRC_DIR}base/wall_clock_time_source.h
#  ${CUR_SRC_DIR}base/watch_time_keys.cc
#  ${CUR_SRC_DIR}base/watch_time_keys.h
#  ${CUR_SRC_DIR}base/webvtt_util.h
  ${CUR_SRC_DIR}base/scopedfd_helper.cc # if (is_linux)
  ${CUR_SRC_DIR}base/keyboard_event_counter.cc # if (is_linux)
)

list(APPEND GMEDIA_FILTERS_SOURCES
  ${CUR_SRC_DIR}filters/audio_clock.cc
#  ${CUR_SRC_DIR}filters/audio_clock.h
#  ${CUR_SRC_DIR}filters/audio_renderer_algorithm.cc
#  ${CUR_SRC_DIR}filters/audio_renderer_algorithm.h
  ${CUR_SRC_DIR}filters/audio_timestamp_validator.cc
#  ${CUR_SRC_DIR}filters/audio_timestamp_validator.h
#  ${CUR_SRC_DIR}filters/chunk_demuxer.cc
#  ${CUR_SRC_DIR}filters/chunk_demuxer.h
  ${CUR_SRC_DIR}filters/decoder_selector.cc
#  ${CUR_SRC_DIR}filters/decoder_selector.h
  ${CUR_SRC_DIR}filters/decoder_stream.cc
#  ${CUR_SRC_DIR}filters/decoder_stream.h
  ${CUR_SRC_DIR}filters/decoder_stream_traits.cc
#  ${CUR_SRC_DIR}filters/decoder_stream_traits.h
  ${CUR_SRC_DIR}filters/decrypting_audio_decoder.cc
#  ${CUR_SRC_DIR}filters/decrypting_audio_decoder.h
  ${CUR_SRC_DIR}filters/decrypting_demuxer_stream.cc
#  ${CUR_SRC_DIR}filters/decrypting_demuxer_stream.h
  ${CUR_SRC_DIR}filters/decrypting_media_resource.cc
#  ${CUR_SRC_DIR}filters/decrypting_media_resource.h
  ${CUR_SRC_DIR}filters/decrypting_video_decoder.cc
#  ${CUR_SRC_DIR}filters/decrypting_video_decoder.h
  ${CUR_SRC_DIR}filters/file_data_source.cc
#  ${CUR_SRC_DIR}filters/file_data_source.h
  ${CUR_SRC_DIR}filters/frame_buffer_pool.cc
#  ${CUR_SRC_DIR}filters/frame_buffer_pool.h
  ${CUR_SRC_DIR}filters/frame_processor.cc
#  ${CUR_SRC_DIR}filters/frame_processor.h
  ${CUR_SRC_DIR}filters/gpu_video_decoder.cc
#  ${CUR_SRC_DIR}filters/gpu_video_decoder.h
  ${CUR_SRC_DIR}filters/memory_data_source.cc
#  ${CUR_SRC_DIR}filters/memory_data_source.h
  ${CUR_SRC_DIR}filters/offloading_video_decoder.cc
#  ${CUR_SRC_DIR}filters/offloading_video_decoder.h
  ${CUR_SRC_DIR}filters/pipeline_controller.cc
#  ${CUR_SRC_DIR}filters/pipeline_controller.h
#  ${CUR_SRC_DIR}filters/source_buffer_parse_warnings.h
  ${CUR_SRC_DIR}filters/source_buffer_range.cc
#  ${CUR_SRC_DIR}filters/source_buffer_range.h
  ${CUR_SRC_DIR}filters/source_buffer_state.cc
#  ${CUR_SRC_DIR}filters/source_buffer_state.h
  ${CUR_SRC_DIR}filters/source_buffer_stream.cc
#  ${CUR_SRC_DIR}filters/source_buffer_stream.h
# requires media::MPEG1AudioStreamParser::MPEG1AudioStreamParser
  ${CUR_SRC_DIR}filters/stream_parser_factory.cc
#  ${CUR_SRC_DIR}filters/stream_parser_factory.h
  ${CUR_SRC_DIR}filters/video_cadence_estimator.cc
#  ${CUR_SRC_DIR}filters/video_cadence_estimator.h
#  ${CUR_SRC_DIR}filters/video_renderer_algorithm.cc
#  ${CUR_SRC_DIR}filters/video_renderer_algorithm.h
  ${CUR_SRC_DIR}filters/vp8_bool_decoder.cc
#  ${CUR_SRC_DIR}filters/vp8_bool_decoder.h
  ${CUR_SRC_DIR}filters/vp8_parser.cc
#  ${CUR_SRC_DIR}filters/vp8_parser.h
  ${CUR_SRC_DIR}filters/vp9_bool_decoder.cc
#  ${CUR_SRC_DIR}filters/vp9_bool_decoder.h
#  ${CUR_SRC_DIR}filters/vp9_compressed_header_parser.cc
#  ${CUR_SRC_DIR}filters/vp9_compressed_header_parser.h
  ${CUR_SRC_DIR}filters/vp9_parser.cc
#  ${CUR_SRC_DIR}filters/vp9_parser.h
  ${CUR_SRC_DIR}filters/vp9_raw_bits_reader.cc
#  ${CUR_SRC_DIR}filters/vp9_raw_bits_reader.h
#  ${CUR_SRC_DIR}filters/vp9_uncompressed_header_parser.cc
#  ${CUR_SRC_DIR}filters/vp9_uncompressed_header_parser.h
  ${CUR_SRC_DIR}filters/wsola_internals.cc
#  ${CUR_SRC_DIR}filters/wsola_internals.h
  ${CUR_SRC_DIR}filters/jpeg_parser.cc
#  ${CUR_SRC_DIR}filters/jpeg_parser.h
)

add_library(GMEDIA STATIC
  ${GMEDIA_SOURCES}
  ${GMEDIA_BASE_SOURCES}
  ${GMEDIA_FILTERS_SOURCES}
  #${GMEDIA_GEN_SOURCES}
)

target_link_libraries(GMEDIA PRIVATE
  #deps = [
  #  "//base",
  #  "//base:i18n",
#  #  "//base/third_party/dynamic_annotations",
  #  "//cc/paint",
  #  "//crypto:platform",
  #  "//gpu/command_buffer/client:gles2_interface",
  #  "//gpu/command_buffer/common",
#  #  "//third_party/libyuv",
  #  "//ui/events:events_base",
  #  "//ui/gfx",
  #  "//ui/gfx/geometry",
  #  "//ui/gl:gl",
  #  "//url",
  #]
  #
#  #public_configs = [ "//third_party/libwebm:libwebm_config" ]
  #public_deps = media_subcomponent_deps
  #public_deps += [
  #  ":media_buildflags",
#  #  ":shared_memory_support",
  #  "//ui/gfx:color_space",
  #]
  dynamic_annotations
  CC
  PAINT_CC
  ${GCRYPTO_LIB}
  base
  ${GNET_LIBS}
  UI_EVENTS
  ${MOJO_LIB}
  ${SERVICES_NETWORK_PUBLIC_CPP_LIB}
  ${CUSTOM_ICU_LIB}
  ${HARFBUZZ_LIBRARIES}
  GFX_GEOMETRY
  UI_GFX
  UI_GL
  libyuv
  GPU_COMMAND_BUFFER
  #
  # media base
  #public_deps = [
  #  ":video_facing",
  #  "//media:media_buildflags",
#  #  "//media:shared_memory_support",
  #  "//ui/gfx:color_space",
  #]
  #deps = [
  #  "//base/allocator:buildflags",
  #  "//gpu/command_buffer/common",
  #  "//skia",
#  #  "//third_party/libyuv",
#  #  "//third_party/widevine/cdm:headers",
  #  "//ui/base/mpris/buildflags",
  #  "//ui/display:display",
  #  "//ui/events:events_base",
  #  "//url:url",
  #]
  SKIA
)

set_property(TARGET GMEDIA PROPERTY CXX_STANDARD 17)

target_include_directories(GMEDIA PRIVATE
  ${CHROMIUM_DIR}
  ${GMEDIA_DIR}
  #${BASE_DIR}
  ${CUR_OUT_DIR}
  ${GEN_COMBINED_DIR}
)

#target_include_directories(GMEDIA PUBLIC
#  ${GEN_COMBINED_DIR}
#)

target_compile_definitions(GMEDIA PRIVATE
  IS_MEDIA_IMPL=1
  MEDIA_SHMEM_IMPLEMENTATION=1
  DISABLE_USER_INPUT_MONITOR=1
  IS_JPEG_PARSER_IMPL=1
#  #LIBVPX_NO_HIGH_BIT_DEPTH=1 # if (is_chromecast)
  #USE_NEON
  #USE_PULSEAUDIO
  #DLOPEN_PULSEAUDIO
  #USE_CRAS
)
