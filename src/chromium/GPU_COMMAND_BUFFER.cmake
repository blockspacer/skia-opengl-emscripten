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
  # source_set("gles2_sources")
  #
  ${GPU_COMMAND_BUFFER_DIR}common/gles2_cmd_format.cc
  ${GPU_COMMAND_BUFFER_DIR}common/gles2_cmd_format.h
  ${GPU_COMMAND_BUFFER_DIR}common/gles2_cmd_format_autogen.h
  ${GPU_COMMAND_BUFFER_DIR}common/gles2_cmd_ids.h
  ${GPU_COMMAND_BUFFER_DIR}common/gles2_cmd_ids_autogen.h
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

### GPU_COMMAND_BUFFER_CLIENT ###

set(GPU_COMMAND_BUFFER_CLIENT_SOURCES
  ${GPU_COMMAND_BUFFER_DIR}client_discardable_manager.cc
  ${GPU_COMMAND_BUFFER_DIR}client_discardable_manager.h
  ${GPU_COMMAND_BUFFER_DIR}client_discardable_texture_manager.cc
  ${GPU_COMMAND_BUFFER_DIR}client_discardable_texture_manager.h
  ${GPU_COMMAND_BUFFER_DIR}cmd_buffer_helper.cc
  ${GPU_COMMAND_BUFFER_DIR}cmd_buffer_helper.h
  ${GPU_COMMAND_BUFFER_DIR}fenced_allocator.cc
  ${GPU_COMMAND_BUFFER_DIR}fenced_allocator.h
  ${GPU_COMMAND_BUFFER_DIR}gpu_control.h
  ${GPU_COMMAND_BUFFER_DIR}gpu_memory_buffer_manager.cc
  ${GPU_COMMAND_BUFFER_DIR}gpu_memory_buffer_manager.h
  ${GPU_COMMAND_BUFFER_DIR}image_decode_accelerator_interface.h
  ${GPU_COMMAND_BUFFER_DIR}mapped_memory.cc
  ${GPU_COMMAND_BUFFER_DIR}mapped_memory.h
  ${GPU_COMMAND_BUFFER_DIR}ring_buffer.cc
  ${GPU_COMMAND_BUFFER_DIR}ring_buffer.h
  ${GPU_COMMAND_BUFFER_DIR}shared_image_interface.h
  ${GPU_COMMAND_BUFFER_DIR}transfer_buffer.cc
  ${GPU_COMMAND_BUFFER_DIR}transfer_buffer.h
  ${GPU_COMMAND_BUFFER_DIR}transfer_buffer_cmd_copy_helpers.h
)

set(GPU_COMMAND_BUFFER_CLIENT_SOURCES
  # gles2_c_lib_source_files
  #
  ${GPU_COMMAND_BUFFER_DIR}/client/gles2_c_lib.cc
  ${GPU_COMMAND_BUFFER_DIR}/client/gles2_c_lib_autogen.h
  ${GPU_COMMAND_BUFFER_DIR}/client/gles2_c_lib_export.h
  ${GPU_COMMAND_BUFFER_DIR}/client/gles2_lib.cc
  ${GPU_COMMAND_BUFFER_DIR}/client/gles2_lib.h
  #
)

#configs += [ "//gpu:gpu_implementation" ]
#
#all_dependent_configs = [ "//third_party/khronos:khronos_headers" ]
#
#public_deps = [
#  "//base",
#  "//components/viz/common:resource_format",
#]
#deps = [
#  "//gpu/command_buffer/common:common_sources",
#  "//gpu/ipc/common:surface_handle_type",
#  "//ui/gfx:memory_buffer",
#  "//ui/gfx/geometry",
#]

### GPU_COMMAND_BUFFER_ES2 ###

#set(GPU_COMMAND_BUFFER_ES2_SOURCES
#  ${GPU_COMMAND_BUFFER_ES2_DIR}gles2_conform_support/egl/config.cc
#  ${GPU_COMMAND_BUFFER_ES2_DIR}gles2_conform_support/egl/config.h
#  ${GPU_COMMAND_BUFFER_ES2_DIR}gles2_conform_support/egl/context.cc
#  ${GPU_COMMAND_BUFFER_ES2_DIR}gles2_conform_support/egl/context.h
#  ${GPU_COMMAND_BUFFER_ES2_DIR}gles2_conform_support/egl/display.cc
#  ${GPU_COMMAND_BUFFER_ES2_DIR}gles2_conform_support/egl/display.h
#  ${GPU_COMMAND_BUFFER_ES2_DIR}gles2_conform_support/egl/egl.cc
#  ${GPU_COMMAND_BUFFER_ES2_DIR}gles2_conform_support/egl/surface.cc
#  ${GPU_COMMAND_BUFFER_ES2_DIR}gles2_conform_support/egl/surface.h
#  ${GPU_COMMAND_BUFFER_ES2_DIR}gles2_conform_support/egl/test_support.cc
#  ${GPU_COMMAND_BUFFER_ES2_DIR}gles2_conform_support/egl/test_support.h
#  ${GPU_COMMAND_BUFFER_ES2_DIR}gles2_conform_support/egl/thread_state.cc
#  ${GPU_COMMAND_BUFFER_ES2_DIR}gles2_conform_support/egl/thread_state.h
#
# gles2_cmd_helper_sources
#
#  ${GPU_COMMAND_BUFFER_ES2_DIR}gles2_cmd_helper.cc
#  #  "gles2_cmd_helper.h",
#  # "gles2_cmd_helper_autogen.h",
#
# gles2_implementation_source_files
#
#  "buffer_tracker.cc",
#  "buffer_tracker.h",
#  "client_context_state.cc",
#  "client_context_state.h",
#  "client_context_state_autogen.h",
#  "client_context_state_impl_autogen.h",
#  "client_transfer_cache.cc",
#  "client_transfer_cache.h",
#  "gles2_impl_export.h",
#  "gles2_implementation.cc",
#  "gles2_implementation.h",
#  "gles2_implementation_autogen.h",
#  "gles2_implementation_impl_autogen.h",
#  "gles2_trace_implementation.cc",
#  "gles2_trace_implementation.h",
#  "gles2_trace_implementation_autogen.h",
#  "gles2_trace_implementation_impl_autogen.h",
#  "gpu_switches.cc",
#  "gpu_switches.h",
#  "implementation_base.cc",
#  "implementation_base.h",
#  "logging.cc",
#  "logging.h",
#  "program_info_manager.cc",
#  "program_info_manager.h",
#  "query_tracker.cc",
#  "query_tracker.h",
#  "readback_buffer_shadow_tracker.cc",
#  "readback_buffer_shadow_tracker.h",
#  "share_group.cc",
#  "share_group.h",
#  "vertex_array_object_manager.cc",
#  "vertex_array_object_manager.h",
#
# gles2_interface
#
# "gles2_interface.h",
#
# "raster_interface"
#
# "raster_interface.h",
# "raster_interface_autogen.h",
#
# "gles2_implementation"
#  defines = [ "GLES2_IMPL_IMPLEMENTATION" ]
#  if (enable_gpu_client_logging) {
#    defines += [ "GPU_ENABLE_CLIENT_LOGGING" ]
#  }
#  all_dependent_configs = [ "//third_party/khronos:khronos_headers" ]
#
#  deps = [
#    ":client",
#    ":gles2_cmd_helper",
#    ":gles2_interface",
#    "//base",
#    "//gpu/command_buffer/common",
#    "//gpu/command_buffer/common:gles2",
#    "//gpu/command_buffer/common:gles2_utils",
#    "//ui/gfx/geometry",
#  ]
#
#  if (!is_nacl) {
#    deps += [
#      "//components/viz/common:resource_format",
#      "//ui/gfx:color_space",
#      "//ui/gfx/ipc/color",
#    ]
#  }
#}
#
# source_set("raster_sources")
#
# client_font_manager.cc",
# client_font_manager.h",
# raster_cmd_helper.cc",
# raster_cmd_helper.h",
# raster_cmd_helper_autogen.h",
# raster_implementation.cc",
# raster_implementation.h",
# raster_implementation_autogen.h",
# raster_implementation_gles.cc",
# raster_implementation_gles.h",
# raster_implementation_impl_autogen.h",
#)
#
#configs += [ "//gpu:raster_implementation" ]
#deps = [
#  ":client",
#  ":gles2_implementation",
#  ":gles2_interface",
#  ":raster_interface",
#  "//base",
#  "//cc/paint",
#  "//components/viz/common:resource_format_utils",
#  "//gpu/command_buffer/common",
#  "//gpu/command_buffer/common:gles2",
#  "//gpu/command_buffer/common:gles2_utils",
#  "//gpu/command_buffer/common:raster",
#  "//ui/gfx:color_space",
#  "//ui/gfx/geometry",
#  "//ui/gfx/ipc/color",
#]
#
# "gles2_implementation_no_check"
# defines = [
#   "GLES2_IMPL_IMPLEMENTATION",
#   "GLES2_CONFORMANCE_TESTS=1",
# ]
# if (enable_gpu_client_logging) {
#   defines += [ "GPU_ENABLE_CLIENT_LOGGING" ]
# }
#
# deps = [
#   ":client",
#   ":gles2_cmd_helper",
#   ":gles2_interface",
#   "//base",
#   "//gpu/command_buffer/common",
#   "//gpu/command_buffer/common:gles2",
#   "//gpu/command_buffer/common:gles2_utils",
#   "//ui/gfx",
#   "//ui/gfx/geometry",
# ]
#
# if (!is_nacl) {
#   deps += [
#     "//cc/paint",
#     "//ui/gfx:color_space",
#     "//ui/gfx/ipc/color",
#   ]
# }
#
#component("gles2_c_lib") {
#  sources = gles2_c_lib_source_files
#  defines = [ "GLES2_C_LIB_IMPLEMENTATION" ]
#
#  deps = [
#    ":gles2_interface",
#    "//base",
#    "//base/third_party/dynamic_annotations",
#    "//gpu/command_buffer/common",
#  ]
#}
#
# Same as gles2_c_lib except with no parameter checking. Required for
# OpenGL ES 2.0 conformance tests.
#jumbo_component("gles2_c_lib_nocheck") {
#  sources = gles2_c_lib_source_files
#
#  defines = [
#    "GLES2_C_LIB_IMPLEMENTATION",
#    "GLES2_CONFORMANCE_TESTS=1",
#  ]
#  deps = [
#    ":gles2_interface",
#    "//base",
#    "//base/third_party/dynamic_annotations",
#    "//gpu/command_buffer/common",
#  ]
#}
#
#  deps = [
#    ":gpu",
#    "//base",
#    "//gpu/command_buffer/client:gles2_c_lib",
#    "//gpu/command_buffer/client:gles2_cmd_helper",
#    "//gpu/command_buffer/client:gles2_implementation",
#    "//gpu/command_buffer/service:gles2",
#    "//ui/gl",
#    "//ui/gl/init",
#  ]
#  defines = [
#    "COMMAND_BUFFER_GLES_LIB_SUPPORT_ONLY",
#    "EGLAPIENTRY=",
#  ]
#  if (is_android) {
#    configs -= [ "//build/config/android:hide_all_but_jni_onload" ]
#  }
#  if (current_os == "win") {
#    defines += [ "EGLAPI=__declspec(dllexport)" ]
#  } else {
#    defines += [ "EGLAPI=__attribute__((visibility(\"default\")))" ]
#  }

### GPU_CONFIG ###
set(GPU_CONFIG_SOURCES
  ${GPU_CONFIG_DIR}dx_diag_node.cc
  ${GPU_CONFIG_DIR}dx_diag_node.h
  ${GPU_CONFIG_DIR}gpu_blacklist.cc
  ${GPU_CONFIG_DIR}gpu_blacklist.h
  ${GPU_CONFIG_DIR}gpu_control_list.cc
  ${GPU_CONFIG_DIR}gpu_control_list.h
  ${GPU_CONFIG_DIR}gpu_crash_keys.cc
  ${GPU_CONFIG_DIR}gpu_crash_keys.h
  ${GPU_CONFIG_DIR}gpu_domain_guilt.h
  ${GPU_CONFIG_DIR}gpu_driver_bug_list.cc
  ${GPU_CONFIG_DIR}gpu_driver_bug_list.h
  ${GPU_CONFIG_DIR}gpu_driver_bug_workaround_type.hlib
  ${GPU_CONFIG_DIR}gpu_driver_bug_workarounds.cc
  ${GPU_CONFIG_DIR}gpu_driver_bug_workarounds.h
  ## TODO ## ${GPU_CONFIG_DIR}gpu_dx_diagnostics_win.cc
  ${GPU_CONFIG_DIR}gpu_feature_info.cc
  ${GPU_CONFIG_DIR}gpu_feature_info.h
  ${GPU_CONFIG_DIR}gpu_feature_type.h
  ${GPU_CONFIG_DIR}gpu_finch_features.cc
  ${GPU_CONFIG_DIR}gpu_finch_features.h
  ${GPU_CONFIG_DIR}gpu_info.cc
  ${GPU_CONFIG_DIR}gpu_info.h
  ${GPU_CONFIG_DIR}gpu_info_collector.cc
  ${GPU_CONFIG_DIR}gpu_info_collector.h
  ## TODO ## ${GPU_CONFIG_DIR}gpu_info_collector_android.cc
  ## TODO ## ${GPU_CONFIG_DIR}gpu_info_collector_linux.cc
  ## TODO ## ${GPU_CONFIG_DIR}gpu_info_collector_mac.mm
  ## TODO ## ${GPU_CONFIG_DIR}gpu_info_collector_win.cc
  ${GPU_CONFIG_DIR}gpu_mode.h
  ${GPU_CONFIG_DIR}gpu_preferences.cc
  ${GPU_CONFIG_DIR}gpu_preferences.h
  ${GPU_CONFIG_DIR}gpu_switches.cc
  ${GPU_CONFIG_DIR}gpu_switches.h
  ${GPU_CONFIG_DIR}gpu_switching.cc
  ${GPU_CONFIG_DIR}gpu_switching.h
  ${GPU_CONFIG_DIR}gpu_test_config.cc
  ${GPU_CONFIG_DIR}gpu_test_config.h
  ${GPU_CONFIG_DIR}gpu_test_expectations_parser.cc
  ${GPU_CONFIG_DIR}gpu_test_expectations_parser.h
  ${GPU_CONFIG_DIR}gpu_util.cc
  ${GPU_CONFIG_DIR}gpu_util.h
)
#deps = [
#  ":process_json",
#  "//base",
#  "//gpu/ipc/common:gpu_preferences_interface",
#  "//media:media_buildflags",
#  "//third_party/re2",
#  "//ui/gl",
#  "//ui/gl:buildflags",
#  "//ui/gl/init",
#]
#
#public_deps = [
#  "//components/crash/core/common:crash_key",
#]
#
#include_rules = [
#  "+components/crash/core/common/crash_key.h",
#  "+media/media_buildflags.h",
#  "+third_party/skia",
#  "+third_party/vulkan/include/vulkan/vulkan.h",
#]

add_library(GPU_COMMAND_BUFFER STATIC
  ${GPU_COMMAND_BUFFER_COMMON_SOURCES}
  ${GPU_COMMAND_BUFFER_CLIENT_SOURCES}
  ${GPU_COMMAND_BUFFER_CLIENT_SOURCES}
)

target_link_libraries(GPU_COMMAND_BUFFER PUBLIC
  #UI_GL
  GFX_GEOMETRY
  UI_GFX
  SKIA
  #GPU_GLES2 # same as ${GPU_COMMAND_BUFFER_DIR}
  #${BASE_LIBRARIES}
  base
  ${khronos_LIB}
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
  GPU_UTIL_IMPLEMENTATION=1
  RASTER_IMPLEMENTATION=1
  #GL_GLEXT_PROTOTYPES=1
  # WEBGPU_IMPLEMENTATION
)
