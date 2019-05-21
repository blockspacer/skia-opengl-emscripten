## --- GPU_COMMAND_BUFFER ---###

set(GPU_COMMAND_BUFFER_COMMON_SOURCES
  ${GPU_COMMAND_BUFFER_DIR}common/activity_flags.cc
  #${GPU_COMMAND_BUFFER_DIR}common/activity_flags.h",
  #${GPU_COMMAND_BUFFER_DIR}common/bitfield_helpers.h",
  ${GPU_COMMAND_BUFFER_DIR}common/buffer.cc
  #${GPU_COMMAND_BUFFER_DIR}common/buffer.h",
  ${GPU_COMMAND_BUFFER_DIR}common/capabilities.cc
  #${GPU_COMMAND_BUFFER_DIR}common/capabilities.h",
  ${GPU_COMMAND_BUFFER_DIR}common/cmd_buffer_common.cc
  #${GPU_COMMAND_BUFFER_DIR}common/cmd_buffer_common.h",
  #${GPU_COMMAND_BUFFER_DIR}common/command_buffer.h",
  #${GPU_COMMAND_BUFFER_DIR}common/command_buffer_id.h",
  #${GPU_COMMAND_BUFFER_DIR}common/common_cmd_format.h",
  #${GPU_COMMAND_BUFFER_DIR}common/constants.h",
  # TODO # ${GPU_COMMAND_BUFFER_DIR}common/context_creation_attribs.cc
   ${GPU_COMMAND_BUFFER_DIR}common/context_creation_attribs.cc
  #${GPU_COMMAND_BUFFER_DIR}common/context_creation_attribs.h",
  ${GPU_COMMAND_BUFFER_DIR}common/context_result.cc
  #${GPU_COMMAND_BUFFER_DIR}common/context_result.h",
  ${GPU_COMMAND_BUFFER_DIR}common/debug_marker_manager.cc
  #${GPU_COMMAND_BUFFER_DIR}common/debug_marker_manager.h",
  ${GPU_COMMAND_BUFFER_DIR}common/discardable_handle.cc
  #${GPU_COMMAND_BUFFER_DIR}common/discardable_handle.h",
  #${GPU_COMMAND_BUFFER_DIR}common/gl2_types.h",
  # TODO # ${GPU_COMMAND_BUFFER_DIR}common/gpu_memory_buffer_support.cc
    ${GPU_COMMAND_BUFFER_DIR}common/gpu_memory_buffer_support.cc
  #${GPU_COMMAND_BUFFER_DIR}common/gpu_memory_buffer_support.h",
  ${GPU_COMMAND_BUFFER_DIR}common/id_allocator.cc
  #${GPU_COMMAND_BUFFER_DIR}common/id_allocator.h",
  ${GPU_COMMAND_BUFFER_DIR}common/mailbox.cc
  #${GPU_COMMAND_BUFFER_DIR}common/mailbox.h",
  ${GPU_COMMAND_BUFFER_DIR}common/mailbox_holder.cc
  #${GPU_COMMAND_BUFFER_DIR}common/mailbox_holder.h",
  ${GPU_COMMAND_BUFFER_DIR}common/presentation_feedback_utils.cc
  #${GPU_COMMAND_BUFFER_DIR}common/presentation_feedback_utils.h",
  ${GPU_COMMAND_BUFFER_DIR}common/scheduling_priority.cc
  #${GPU_COMMAND_BUFFER_DIR}common/scheduling_priority.h",
  ${GPU_COMMAND_BUFFER_DIR}common/shared_image_trace_utils.cc
  #${GPU_COMMAND_BUFFER_DIR}common/shared_image_trace_utils.h",
  #${GPU_COMMAND_BUFFER_DIR}common/shared_image_usage.h",
  ${GPU_COMMAND_BUFFER_DIR}common/swap_buffers_complete_params.cc
  #${GPU_COMMAND_BUFFER_DIR}common/swap_buffers_complete_params.h",
  #${GPU_COMMAND_BUFFER_DIR}common/swap_buffers_flags.h",
  ${GPU_COMMAND_BUFFER_DIR}common/sync_token.cc
  #${GPU_COMMAND_BUFFER_DIR}common/sync_token.h",
  #${GPU_COMMAND_BUFFER_DIR}common/texture_in_use_response.h",
  #${GPU_COMMAND_BUFFER_DIR}common/thread_local.h",
  #${GPU_COMMAND_BUFFER_DIR}common/time.h",
  #
  # source_set("raster_sources")
  #
  ${GPU_COMMAND_BUFFER_DIR}common/raster_cmd_format.cc
  #${GPU_COMMAND_BUFFER_DIR}common/raster_cmd_format.h",
  #${GPU_COMMAND_BUFFER_DIR}common/raster_cmd_format_autogen.h",
  #${GPU_COMMAND_BUFFER_DIR}common/raster_cmd_ids.h",
  #${GPU_COMMAND_BUFFER_DIR}common/raster_cmd_ids_autogen.h",
  ${GPU_COMMAND_BUFFER_DIR}common/skia_utils.cc
  #${GPU_COMMAND_BUFFER_DIR}common/skia_utils.h",
  #
  # component("gles2_utils")
  #
  # TODO # ${GPU_COMMAND_BUFFER_DIR}common/gles2_cmd_utils.cc
    ${GPU_COMMAND_BUFFER_DIR}common/gles2_cmd_utils.cc
  #${GPU_COMMAND_BUFFER_DIR}common/gles2_cmd_utils.h",
  #${GPU_COMMAND_BUFFER_DIR}common/gles2_utils_export.h",

)

add_library(GPU_COMMAND_BUFFER STATIC
  ${GPU_COMMAND_BUFFER_COMMON_SOURCES}
)

target_link_libraries(GPU_COMMAND_BUFFER PUBLIC
  #UI_GL
  GFX_GEOMETRY
  SKIA
  #GPU_GLES2
  #${BASE_LIBRARIES}
  base
)
#message(FATAL_ERROR ${GPU_COMMAND_BUFFER_PARENT_DIR}GLES2/gl2extchromium.h)
set_property(TARGET GPU_COMMAND_BUFFER PROPERTY CXX_STANDARD 17)

target_include_directories(GPU_COMMAND_BUFFER PRIVATE
  #${UI_PARENT_DIR}
  ${GPU_COMMAND_BUFFER_DIR}
  ${GPU_COMMAND_BUFFER_PARENT_DIR}
  #${GPU_COMMAND_BUFFER_DIR}/common
  #${BASE_DIR}
)

target_compile_definitions(GPU_COMMAND_BUFFER PRIVATE
  GLES2_UTILS_IMPLEMENTATION=1
  GPU_IMPLEMENTATION=1
  GPU_GLES2_IMPLEMENTATION=1
  GPU_IMPLEMENTATION=1
  GPU_UTIL_IMPLEMENTATION=1
  RASTER_IMPLEMENTATION=1
  # WEBGPU_IMPLEMENTATION
)
