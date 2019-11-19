# see https://github.com/chromium/chromium/blob/2b8620be75bb04be49192306fa8292ea8da615f8/components/viz/common/BUILD.gn

### --- COMPONENTS_VIZ_COMMON ---###

list(APPEND COMPONENTS_VIZ_COMMON_SOURCES
  #
  ${COMPONENTS_VIZ_COMMON_DIR}resources/resource_format_utils.cc
  #${COMPONENTS_VIZ_COMMON_DIR}resources/resource_format_utils.h
  #${COMPONENTS_VIZ_COMMON_DIR}resources/resource_sizes.h
  #${COMPONENTS_VIZ_COMMON_DIR}viz_resource_format_export.h
  #
  ${COMPONENTS_VIZ_COMMON_DIR}constants.cc
  #${COMPONENTS_VIZ_COMMON_DIR}constants.h",
  ${COMPONENTS_VIZ_COMMON_DIR}display/overlay_strategy.cc
  #${COMPONENTS_VIZ_COMMON_DIR}display/overlay_strategy.h",
  ${COMPONENTS_VIZ_COMMON_DIR}display/renderer_settings.cc
  #${COMPONENTS_VIZ_COMMON_DIR}display/renderer_settings.h",
  #${COMPONENTS_VIZ_COMMON_DIR}display/update_vsync_parameters_callback.h",
  ${COMPONENTS_VIZ_COMMON_DIR}features.cc
  #${COMPONENTS_VIZ_COMMON_DIR}features.h",
  ${COMPONENTS_VIZ_COMMON_DIR}frame_sinks/begin_frame_args.cc
  #${COMPONENTS_VIZ_COMMON_DIR}frame_sinks/begin_frame_args.h",
  ${COMPONENTS_VIZ_COMMON_DIR}frame_sinks/begin_frame_source.cc
  #${COMPONENTS_VIZ_COMMON_DIR}frame_sinks/begin_frame_source.h",
  ${COMPONENTS_VIZ_COMMON_DIR}frame_sinks/copy_output_request.cc
  #${COMPONENTS_VIZ_COMMON_DIR}frame_sinks/copy_output_request.h",
  ${COMPONENTS_VIZ_COMMON_DIR}frame_sinks/copy_output_result.cc
  #${COMPONENTS_VIZ_COMMON_DIR}frame_sinks/copy_output_result.h",
  ${COMPONENTS_VIZ_COMMON_DIR}frame_sinks/copy_output_util.cc
  #${COMPONENTS_VIZ_COMMON_DIR}frame_sinks/copy_output_util.h",
  ${COMPONENTS_VIZ_COMMON_DIR}frame_sinks/delay_based_time_source.cc
  #${COMPONENTS_VIZ_COMMON_DIR}frame_sinks/delay_based_time_source.h",
  ${COMPONENTS_VIZ_COMMON_DIR}gl_helper.cc
  #${COMPONENTS_VIZ_COMMON_DIR}gl_helper.h",
  ${COMPONENTS_VIZ_COMMON_DIR}gl_helper_scaling.cc
  #${COMPONENTS_VIZ_COMMON_DIR}gl_helper_scaling.h",
  ${COMPONENTS_VIZ_COMMON_DIR}gl_i420_converter.cc
  #${COMPONENTS_VIZ_COMMON_DIR}gl_i420_converter.h",
  ${COMPONENTS_VIZ_COMMON_DIR}gl_scaler.cc
  #${COMPONENTS_VIZ_COMMON_DIR}gl_scaler.h",
  ${COMPONENTS_VIZ_COMMON_DIR}gpu/context_cache_controller.cc
  #${COMPONENTS_VIZ_COMMON_DIR}gpu/context_cache_controller.h",
  #${COMPONENTS_VIZ_COMMON_DIR}gpu/context_lost_observer.h",
  ${COMPONENTS_VIZ_COMMON_DIR}gpu/context_lost_reason.cc
  #${COMPONENTS_VIZ_COMMON_DIR}gpu/context_lost_reason.h",
  ${COMPONENTS_VIZ_COMMON_DIR}gpu/context_provider.cc
  #${COMPONENTS_VIZ_COMMON_DIR}gpu/context_provider.h",
  #${COMPONENTS_VIZ_COMMON_DIR}gpu/gpu_vsync_callback.h",
  ${COMPONENTS_VIZ_COMMON_DIR}gpu/raster_context_provider.cc
  #${COMPONENTS_VIZ_COMMON_DIR}gpu/raster_context_provider.h",
  #${COMPONENTS_VIZ_COMMON_DIR}hit_test/aggregated_hit_test_region.h",
  ${COMPONENTS_VIZ_COMMON_DIR}hit_test/hit_test_data_builder.cc
  #${COMPONENTS_VIZ_COMMON_DIR}hit_test/hit_test_data_builder.h",
  ${COMPONENTS_VIZ_COMMON_DIR}hit_test/hit_test_region_list.cc
  #${COMPONENTS_VIZ_COMMON_DIR}hit_test/hit_test_region_list.h",
  ${COMPONENTS_VIZ_COMMON_DIR}pausable_elapsed_timer.cc
  #${COMPONENTS_VIZ_COMMON_DIR}pausable_elapsed_timer.h",
  #${COMPONENTS_VIZ_COMMON_DIR}presentation_feedback_map.h",
  ${COMPONENTS_VIZ_COMMON_DIR}quads/compositor_frame.cc
  #${COMPONENTS_VIZ_COMMON_DIR}quads/compositor_frame.h",
  ${COMPONENTS_VIZ_COMMON_DIR}quads/compositor_frame_metadata.cc
  #${COMPONENTS_VIZ_COMMON_DIR}quads/compositor_frame_metadata.h",
  ${COMPONENTS_VIZ_COMMON_DIR}quads/content_draw_quad_base.cc
  #${COMPONENTS_VIZ_COMMON_DIR}quads/content_draw_quad_base.h",
  ${COMPONENTS_VIZ_COMMON_DIR}quads/debug_border_draw_quad.cc
  #${COMPONENTS_VIZ_COMMON_DIR}quads/debug_border_draw_quad.h",
  ${COMPONENTS_VIZ_COMMON_DIR}quads/draw_quad.cc
  #${COMPONENTS_VIZ_COMMON_DIR}quads/draw_quad.h",
  ${COMPONENTS_VIZ_COMMON_DIR}quads/frame_deadline.cc
  #${COMPONENTS_VIZ_COMMON_DIR}quads/frame_deadline.h",
  ${COMPONENTS_VIZ_COMMON_DIR}quads/largest_draw_quad.cc
  #${COMPONENTS_VIZ_COMMON_DIR}quads/largest_draw_quad.h",
  ${COMPONENTS_VIZ_COMMON_DIR}quads/picture_draw_quad.cc
  #${COMPONENTS_VIZ_COMMON_DIR}quads/picture_draw_quad.h",
  ${COMPONENTS_VIZ_COMMON_DIR}quads/render_pass.cc
  #${COMPONENTS_VIZ_COMMON_DIR}quads/render_pass.h",
  ${COMPONENTS_VIZ_COMMON_DIR}quads/render_pass_draw_quad.cc
  #${COMPONENTS_VIZ_COMMON_DIR}quads/render_pass_draw_quad.h",
  #${COMPONENTS_VIZ_COMMON_DIR}quads/selection.h",
  ${COMPONENTS_VIZ_COMMON_DIR}quads/shared_quad_state.cc
  #${COMPONENTS_VIZ_COMMON_DIR}quads/shared_quad_state.h",
  ${COMPONENTS_VIZ_COMMON_DIR}quads/solid_color_draw_quad.cc
  #${COMPONENTS_VIZ_COMMON_DIR}quads/solid_color_draw_quad.h",
  ${COMPONENTS_VIZ_COMMON_DIR}quads/stream_video_draw_quad.cc
  #${COMPONENTS_VIZ_COMMON_DIR}quads/stream_video_draw_quad.h",
  ${COMPONENTS_VIZ_COMMON_DIR}quads/surface_draw_quad.cc
  #${COMPONENTS_VIZ_COMMON_DIR}quads/surface_draw_quad.h",
  ${COMPONENTS_VIZ_COMMON_DIR}quads/texture_draw_quad.cc
  #${COMPONENTS_VIZ_COMMON_DIR}quads/texture_draw_quad.h",
  ${COMPONENTS_VIZ_COMMON_DIR}quads/tile_draw_quad.cc
  #${COMPONENTS_VIZ_COMMON_DIR}quads/tile_draw_quad.h",
  ${COMPONENTS_VIZ_COMMON_DIR}quads/video_hole_draw_quad.cc
  #${COMPONENTS_VIZ_COMMON_DIR}quads/video_hole_draw_quad.h",
  ${COMPONENTS_VIZ_COMMON_DIR}quads/yuv_video_draw_quad.cc
  #${COMPONENTS_VIZ_COMMON_DIR}quads/yuv_video_draw_quad.h",
  ${COMPONENTS_VIZ_COMMON_DIR}resources/bitmap_allocation.cc
  #${COMPONENTS_VIZ_COMMON_DIR}resources/bitmap_allocation.h",
  #${COMPONENTS_VIZ_COMMON_DIR}resources/platform_color.h",
  #${COMPONENTS_VIZ_COMMON_DIR}resources/release_callback.h",
  #${COMPONENTS_VIZ_COMMON_DIR}resources/resource_id.h",
  ${COMPONENTS_VIZ_COMMON_DIR}resources/resource_settings.cc
  #${COMPONENTS_VIZ_COMMON_DIR}resources/resource_settings.h",
  #${COMPONENTS_VIZ_COMMON_DIR}resources/return_callback.h",
  #${COMPONENTS_VIZ_COMMON_DIR}resources/returned_resource.h",
  ${COMPONENTS_VIZ_COMMON_DIR}resources/shared_bitmap.cc
  #${COMPONENTS_VIZ_COMMON_DIR}resources/shared_bitmap.h",
  ${COMPONENTS_VIZ_COMMON_DIR}resources/single_release_callback.cc
  #${COMPONENTS_VIZ_COMMON_DIR}resources/single_release_callback.h",
  ${COMPONENTS_VIZ_COMMON_DIR}resources/transferable_resource.cc
  #${COMPONENTS_VIZ_COMMON_DIR}resources/transferable_resource.h",
  ${COMPONENTS_VIZ_COMMON_DIR}skia_helper.cc
  #${COMPONENTS_VIZ_COMMON_DIR}skia_helper.h",
  ${COMPONENTS_VIZ_COMMON_DIR}surfaces/child_local_surface_id_allocator.cc
  #${COMPONENTS_VIZ_COMMON_DIR}surfaces/child_local_surface_id_allocator.h",
  ${COMPONENTS_VIZ_COMMON_DIR}surfaces/frame_sink_id.cc
  #${COMPONENTS_VIZ_COMMON_DIR}surfaces/frame_sink_id.h",
  ${COMPONENTS_VIZ_COMMON_DIR}surfaces/frame_sink_id_allocator.cc
  #${COMPONENTS_VIZ_COMMON_DIR}surfaces/frame_sink_id_allocator.h",
  ${COMPONENTS_VIZ_COMMON_DIR}surfaces/local_surface_id.cc
  #${COMPONENTS_VIZ_COMMON_DIR}surfaces/local_surface_id.h",
  ${COMPONENTS_VIZ_COMMON_DIR}surfaces/local_surface_id_allocation.cc
  #${COMPONENTS_VIZ_COMMON_DIR}surfaces/local_surface_id_allocation.h",
  ${COMPONENTS_VIZ_COMMON_DIR}surfaces/parent_local_surface_id_allocator.cc
  #${COMPONENTS_VIZ_COMMON_DIR}surfaces/parent_local_surface_id_allocator.h",
  ${COMPONENTS_VIZ_COMMON_DIR}surfaces/scoped_surface_id_allocator.cc
  #${COMPONENTS_VIZ_COMMON_DIR}surfaces/scoped_surface_id_allocator.h",
  ${COMPONENTS_VIZ_COMMON_DIR}surfaces/surface_id.cc
  #${COMPONENTS_VIZ_COMMON_DIR}surfaces/surface_id.h",
  ${COMPONENTS_VIZ_COMMON_DIR}surfaces/surface_info.cc
  #${COMPONENTS_VIZ_COMMON_DIR}surfaces/surface_info.h",
  ${COMPONENTS_VIZ_COMMON_DIR}surfaces/surface_range.cc
  #${COMPONENTS_VIZ_COMMON_DIR}surfaces/surface_range.h",
  ${COMPONENTS_VIZ_COMMON_DIR}switches.cc
  #${COMPONENTS_VIZ_COMMON_DIR}switches.h",
  ${COMPONENTS_VIZ_COMMON_DIR}traced_value.cc
  #${COMPONENTS_VIZ_COMMON_DIR}traced_value.h",
  #${COMPONENTS_VIZ_COMMON_DIR}viz_common_export.h",
  ${COMPONENTS_VIZ_COMMON_DIR}viz_utils.cc
  #${COMPONENTS_VIZ_COMMON_DIR}viz_utils.h",
)

add_library(COMPONENTS_VIZ_COMMON STATIC
  ${COMPONENTS_VIZ_COMMON_SOURCES}
)

target_link_libraries(COMPONENTS_VIZ_COMMON PRIVATE
  #deps = [
  #  "//base",
  #
  #  # TODO(staraz): cc/base was added because SharedQuadState includes
  #  # cc::MathUtil. Remove it once cc/base/math_util* are moved to viz.
  #  "//cc/base",
  #  "//cc/paint",
  #  "//gpu/command_buffer/client:gles2_implementation",
  #  "//gpu/command_buffer/client:gles2_interface",
  #  "//gpu/command_buffer/client:raster",
  #  "//gpu/command_buffer/client:raster_interface",
  #  "//gpu/vulkan:buildflags",
  #  "//mojo/public/cpp/base",
  #  "//mojo/public/cpp/system",
  #  "//third_party/libyuv",
  #  "//ui/gfx",
  #  "//ui/gfx:color_space",
  #  "//ui/gfx:geometry_skia",
  #  "//ui/gfx/geometry",
  #  "//ui/gl",
  #  "//ui/latency",
  #]
  #public_deps = [
  #  ":resource_format_utils",
  #  "//gpu/command_buffer/client",
  #  "//gpu/command_buffer/common",
  #  "//mojo/public/cpp/bindings",
  #  "//skia",
  #]
  GPU_COMMAND_BUFFER
  #${BASE_LIBRARIES}
  UI_GL
  BASE_CC
  PAINT_CC
  base
  SKIA
  GFX_ANIMATION
  GFX_CODEC
  GFX_COLOR_SPACE
  GFX_GEOMETRY_SKIA
  GFX_GEOMETRY
  GFX_SWITCHES
  GFX_RANGE
  libyuv
  #UI_GFX
  #${OPENGLES2_LIBRARIES}
  ${FOUND_OPENGL_LIBRARIES}
  ${MOJO_LIB}
  ${BLINK_PUBLIC_MOJOM_LIB}
  # khronos
  ${khronos_LIB}
)

set_property(TARGET COMPONENTS_VIZ_COMMON PROPERTY CXX_STANDARD 17)

target_include_directories(COMPONENTS_VIZ_COMMON PRIVATE
  ${COMPONENTS_VIZ_PARENT_DIR}
  #${COMPONENTS_VIZ_COMMON_DIR}
  ${BASE_DIR}
  ${OPENGL_INCLUDE_DIR}
)

target_compile_definitions(COMPONENTS_VIZ_COMMON PRIVATE
  VIZ_RESOURCE_FORMAT_IMPLEMENTATION=1
  #VIZ_METAL_CONTEXT_PROVIDER_IMPLEMENTATION=1
  #VIZ_VULKAN_CONTEXT_PROVIDER_IMPLEMENTATION=1
  #VK_USE_PLATFORM_ANDROID_KHR=1
  VIZ_COMMON_IMPLEMENTATION=1
)

target_compile_definitions(COMPONENTS_VIZ_COMMON PUBLIC
  VIZ_COMMON_PORT=1
)

target_compile_options(COMPONENTS_VIZ_COMMON PRIVATE
  -Wno-error
  -Wno-c++11-narrowing
)
