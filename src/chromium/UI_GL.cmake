
# see G_GFX

# TODO #

# buildflag_header("buildflags") {
#   header = "buildflags.h"
#   use_egl_on_mac = use_egl && is_mac
#   flags = [
#     "ENABLE_SWIFTSHADER=$enable_swiftshader",
#     "USE_DAWN=$use_dawn",
#     "USE_EGL_ON_MAC=$use_egl_on_mac",
#     "USE_STATIC_ANGLE=$use_static_angle",
#   ]
# }

### --- UI_GL ---###

set(UI_GL_SOURCES
  ${UI_GL_DIR}android/android_surface_control_compat.cc
  #${UI_GL_DIR}android/android_surface_control_compat.h",
  ${UI_GL_DIR}android/scoped_java_surface.cc
  #${UI_GL_DIR}android/scoped_java_surface.h",
  ${UI_GL_DIR}android/surface_texture.cc
  #${UI_GL_DIR}android/surface_texture.h",
  ${UI_GL_DIR}android/surface_texture_listener.cc
  #${UI_GL_DIR}android/surface_texture_listener.h",
  ${UI_GL_DIR}ca_renderer_layer_params.cc
  #${UI_GL_DIR}ca_renderer_layer_params.h",
  ${UI_GL_DIR}color_space_utils.cc
  #${UI_GL_DIR}color_space_utils.h",
  ${UI_GL_DIR}dc_renderer_layer_params.cc
  #${UI_GL_DIR}dc_renderer_layer_params.h",
  #${UI_GL_DIR}egl_timestamps.h",
  ${UI_GL_DIR}gl_bindings.cc
  #${UI_GL_DIR}gl_bindings.h",
  ${UI_GL_DIR}gl_bindings_autogen_gl.cc
  #${UI_GL_DIR}gl_bindings_autogen_gl.h",
  ${UI_GL_DIR}gl_context.cc
  #${UI_GL_DIR}gl_context.h",
  ${UI_GL_DIR}gl_context_stub.cc
  #${UI_GL_DIR}gl_context_stub.h",
  ${UI_GL_DIR}gl_enums.cc
  #${UI_GL_DIR}gl_enums.h",
  #${UI_GL_DIR}gl_enums_implementation_autogen.h",
  #${UI_GL_DIR}gl_export.h",
  ${UI_GL_DIR}gl_fence.cc
  #${UI_GL_DIR}gl_fence.h",
  ${UI_GL_DIR}gl_fence_arb.cc
  #${UI_GL_DIR}gl_fence_arb.h",
  ${UI_GL_DIR}gl_fence_nv.cc
  #${UI_GL_DIR}gl_fence_nv.h",
  ${UI_GL_DIR}gl_gl_api_implementation.cc
  #${UI_GL_DIR}gl_gl_api_implementation.h",
  ${UI_GL_DIR}gl_helper.cc
  #${UI_GL_DIR}gl_helper.h",
  ${UI_GL_DIR}gl_image.cc
  #${UI_GL_DIR}gl_image.h",
  ${UI_GL_DIR}gl_image_memory.cc
  #${UI_GL_DIR}gl_image_memory.h",
  ${UI_GL_DIR}gl_image_ref_counted_memory.cc
  #${UI_GL_DIR}gl_image_ref_counted_memory.h",
  ${UI_GL_DIR}gl_image_shared_memory.cc
  #${UI_GL_DIR}gl_image_shared_memory.h",
  ${UI_GL_DIR}gl_image_stub.cc
  #${UI_GL_DIR}gl_image_stub.h",
  ${UI_GL_DIR}gl_implementation.cc
  #${UI_GL_DIR}gl_implementation.h",
  ${UI_GL_DIR}gl_share_group.cc
  #${UI_GL_DIR}gl_share_group.h",
  ${UI_GL_DIR}gl_state_restorer.cc
  #${UI_GL_DIR}gl_state_restorer.h",
  ${UI_GL_DIR}gl_stub_api.cc
  #${UI_GL_DIR}gl_stub_api.h",
  #${UI_GL_DIR}gl_stub_api_base.h",
  ${UI_GL_DIR}gl_stub_autogen_gl.cc
  #${UI_GL_DIR}gl_stub_autogen_gl.h",
  ${UI_GL_DIR}gl_surface.cc
  #${UI_GL_DIR}gl_surface.h",
  ${UI_GL_DIR}gl_surface_format.cc
  #${UI_GL_DIR}gl_surface_format.h",
  ${UI_GL_DIR}gl_surface_overlay.cc
  #${UI_GL_DIR}gl_surface_overlay.h",
  ${UI_GL_DIR}gl_surface_presentation_helper.cc
  #${UI_GL_DIR}gl_surface_presentation_helper.h",
  ${UI_GL_DIR}gl_surface_stub.cc
  #${UI_GL_DIR}gl_surface_stub.h",
  ${UI_GL_DIR}gl_switches.cc
  #${UI_GL_DIR}gl_switches.h",
  ${UI_GL_DIR}gl_utils.cc
  #${UI_GL_DIR}gl_utils.h",
  ${UI_GL_DIR}gl_version_info.cc
  #${UI_GL_DIR}gl_version_info.h",
  #${UI_GL_DIR}gl_workarounds.h",
  ${UI_GL_DIR}gpu_switching_manager.cc
  #${UI_GL_DIR}gpu_switching_manager.h",
  ${UI_GL_DIR}gpu_timing.cc
  #${UI_GL_DIR}gpu_timing.h",
  #${UI_GL_DIR}progress_reporter.h",
  ${UI_GL_DIR}scoped_binders.cc
  #${UI_GL_DIR}scoped_binders.h",
  ${UI_GL_DIR}scoped_make_current.cc
  #${UI_GL_DIR}scoped_make_current.h",
  ${UI_GL_DIR}sync_control_vsync_provider.cc
  #${UI_GL_DIR}sync_control_vsync_provider.h",
  ${UI_GL_DIR}trace_util.cc
  #${UI_GL_DIR}trace_util.h",
  #
  ${UI_GL_DIR}angle_platform_impl.cc
  #${UI_GL_DIR}angle_platform_impl.h",
  ${UI_GL_DIR}egl_util.cc
  #${UI_GL_DIR}egl_util.h",
  ${UI_GL_DIR}gl_bindings_autogen_egl.cc
  #${UI_GL_DIR}gl_bindings_autogen_egl.h",
  ${UI_GL_DIR}gl_context_egl.cc
  #${UI_GL_DIR}gl_context_egl.h",
  ${UI_GL_DIR}gl_egl_api_implementation.cc
  #${UI_GL_DIR}gl_egl_api_implementation.h",
  ${UI_GL_DIR}gl_fence_egl.cc
  #${UI_GL_DIR}gl_fence_egl.h",
  ${UI_GL_DIR}gl_image_egl.cc
  #${UI_GL_DIR}gl_image_egl.h",
  ${UI_GL_DIR}gl_surface_egl.cc
  #${UI_GL_DIR}gl_surface_egl.h",
  #
  #  if (is_linux || use_ozone)
  # TODO # gl_image_native_pixmap.cc
  # gl_image_native_pixmap.h",
  #
  #  if (is_mac || use_egl)
  ${UI_GL_DIR}yuv_to_rgb_converter.cc
  # yuv_to_rgb_converter.h",
  #
  #if (use_x11)
  # TODO # gl_surface_egl_x11.cc
  #gl_surface_egl_x11.h",
  # TODO # gl_surface_glx_x11.cc
  #gl_surface_glx_x11.h",
  #
  #  if (use_egl)
  ${UI_GL_DIR}gl_image_io_surface_egl.h
  # TODO # gl_image_io_surface_egl.mm",
  #
)

add_library(UI_GL STATIC
  ${UI_GL_SOURCES}
)

target_link_libraries(UI_GL PUBLIC
  #dynamic_annotations
  #${BASE_LIBRARIES}
  base
  G_GFX
  GFX_GEOMETRY
  #  ":gl",
  #  ":gl_unittest_utils",
  #  ":run_all_unittests",
  #  ":test_support",
  #  "//base",
  #  "//testing/gmock",
  #  "//testing/gtest",
  #  "//ui/gfx",
  #  "//ui/gfx:test_support",
  #  "//ui/gfx/geometry",
  #  "//ui/gl/init",
  #  "//ui/platform_window",
  #  "//ui/platform_window:platform_impls",
  #
  #  //ui/gfx/x
)

set_property(TARGET UI_GL PROPERTY CXX_STANDARD 17)

target_include_directories(UI_GL PRIVATE
  ${UI_GL_DIR}
  ${BASE_DIR}
)

target_compile_definitions(UI_GL PRIVATE
  # use_glx
  #   "GL_GLEXT_PROTOTYPES",
  #   "USE_GLX",
  #
  # use_egl
  USE_EGL=1
  #
  GL_IMPLEMENTATION=1
  #
  #GPU_ENABLE_SERVICE_LOGGING
  #
)
