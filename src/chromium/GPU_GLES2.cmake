### --- GPU_GLES2 ---###

set(GPU_GLES2_SOURCES
  ${GPU_GLES2_DIR}constants.cc
  #${GPU_GLES2_DIR}constants.h",
  ${GPU_GLES2_DIR}display/overlay_strategy.cc
  #${GPU_GLES2_DIR}display/overlay_strategy.h",
  ${GPU_GLES2_DIR}display/renderer_settings.cc
  #${GPU_GLES2_DIR}display/renderer_settings.h",
  #${GPU_GLES2_DIR}display/update_vsync_parameters_callback.h",
  ${GPU_GLES2_DIR}features.cc
  #${GPU_GLES2_DIR}features.h",
  ${GPU_GLES2_DIR}frame_sinks/begin_frame_args.cc
  #${GPU_GLES2_DIR}frame_sinks/begin_frame_args.h",
  ${GPU_GLES2_DIR}frame_sinks/begin_frame_source.cc
  #${GPU_GLES2_DIR}frame_sinks/begin_frame_source.h",
  ${GPU_GLES2_DIR}frame_sinks/copy_output_request.cc
  #${GPU_GLES2_DIR}frame_sinks/copy_output_request.h",
  ${GPU_GLES2_DIR}frame_sinks/copy_output_result.cc
  #${GPU_GLES2_DIR}frame_sinks/copy_output_result.h",
  ${GPU_GLES2_DIR}frame_sinks/copy_output_util.cc
  #${GPU_GLES2_DIR}frame_sinks/copy_output_util.h",
  ${GPU_GLES2_DIR}frame_sinks/delay_based_time_source.cc
  #${GPU_GLES2_DIR}frame_sinks/delay_based_time_source.h",
  ${GPU_GLES2_DIR}gl_helper.cc
  #${GPU_GLES2_DIR}gl_helper.h",
  ${GPU_GLES2_DIR}gl_helper_scaling.cc
  #${GPU_GLES2_DIR}gl_helper_scaling.h",
  ${GPU_GLES2_DIR}gl_i420_converter.cc
  #${GPU_GLES2_DIR}gl_i420_converter.h",
  ${GPU_GLES2_DIR}gl_scaler.cc
  #${GPU_GLES2_DIR}gl_scaler.h",
  ${GPU_GLES2_DIR}gpu/context_cache_controller.cc
  #${GPU_GLES2_DIR}gpu/context_cache_controller.h",
  #${GPU_GLES2_DIR}gpu/context_lost_observer.h",
  ${GPU_GLES2_DIR}gpu/context_lost_reason.cc
  #${GPU_GLES2_DIR}gpu/context_lost_reason.h",
  ${GPU_GLES2_DIR}gpu/context_provider.cc
  #${GPU_GLES2_DIR}gpu/context_provider.h",
  #${GPU_GLES2_DIR}gpu/gpu_vsync_callback.h",
  ${GPU_GLES2_DIR}gpu/raster_context_provider.cc
  #${GPU_GLES2_DIR}gpu/raster_context_provider.h",
  #${GPU_GLES2_DIR}hit_test/aggregated_hit_test_region.h",
  ${GPU_GLES2_DIR}hit_test/hit_test_data_builder.cc
  #${GPU_GLES2_DIR}hit_test/hit_test_data_builder.h",
  ${GPU_GLES2_DIR}hit_test/hit_test_region_list.cc
  #${GPU_GLES2_DIR}hit_test/hit_test_region_list.h",
  ${GPU_GLES2_DIR}pausable_elapsed_timer.cc
  #${GPU_GLES2_DIR}pausable_elapsed_timer.h",
  #${GPU_GLES2_DIR}presentation_feedback_map.h",
  ${GPU_GLES2_DIR}quads/compositor_frame.cc
  #${GPU_GLES2_DIR}quads/compositor_frame.h",
  ${GPU_GLES2_DIR}quads/compositor_frame_metadata.cc
  #${GPU_GLES2_DIR}quads/compositor_frame_metadata.h",
  ${GPU_GLES2_DIR}quads/content_draw_quad_base.cc
  #${GPU_GLES2_DIR}quads/content_draw_quad_base.h",
  ${GPU_GLES2_DIR}quads/debug_border_draw_quad.cc
  #${GPU_GLES2_DIR}quads/debug_border_draw_quad.h",
  ${GPU_GLES2_DIR}quads/draw_quad.cc
  #${GPU_GLES2_DIR}quads/draw_quad.h",
  ${GPU_GLES2_DIR}quads/frame_deadline.cc
  #${GPU_GLES2_DIR}quads/frame_deadline.h",
  ${GPU_GLES2_DIR}quads/largest_draw_quad.cc
  #${GPU_GLES2_DIR}quads/largest_draw_quad.h",
  ${GPU_GLES2_DIR}quads/picture_draw_quad.cc
  #${GPU_GLES2_DIR}quads/picture_draw_quad.h",
  ${GPU_GLES2_DIR}quads/render_pass.cc
  #${GPU_GLES2_DIR}quads/render_pass.h",
  ${GPU_GLES2_DIR}quads/render_pass_draw_quad.cc
  #${GPU_GLES2_DIR}quads/render_pass_draw_quad.h",
  #${GPU_GLES2_DIR}quads/selection.h",
  ${GPU_GLES2_DIR}quads/shared_quad_state.cc
  #${GPU_GLES2_DIR}quads/shared_quad_state.h",
  ${GPU_GLES2_DIR}quads/solid_color_draw_quad.cc
  #${GPU_GLES2_DIR}quads/solid_color_draw_quad.h",
  ${GPU_GLES2_DIR}quads/stream_video_draw_quad.cc
  #${GPU_GLES2_DIR}quads/stream_video_draw_quad.h",
  ${GPU_GLES2_DIR}quads/surface_draw_quad.cc
  #${GPU_GLES2_DIR}quads/surface_draw_quad.h",
  ${GPU_GLES2_DIR}quads/texture_draw_quad.cc
  #${GPU_GLES2_DIR}quads/texture_draw_quad.h",
  ${GPU_GLES2_DIR}quads/tile_draw_quad.cc
  #${GPU_GLES2_DIR}quads/tile_draw_quad.h",
  ${GPU_GLES2_DIR}quads/video_hole_draw_quad.cc
  #${GPU_GLES2_DIR}quads/video_hole_draw_quad.h",
  ${GPU_GLES2_DIR}quads/yuv_video_draw_quad.cc
  #${GPU_GLES2_DIR}quads/yuv_video_draw_quad.h",
  ${GPU_GLES2_DIR}resources/bitmap_allocation.cc
  #${GPU_GLES2_DIR}resources/bitmap_allocation.h",
  #${GPU_GLES2_DIR}resources/platform_color.h",
  #${GPU_GLES2_DIR}resources/release_callback.h",
  #${GPU_GLES2_DIR}resources/resource_id.h",
  ${GPU_GLES2_DIR}resources/resource_settings.cc
  #${GPU_GLES2_DIR}resources/resource_settings.h",
  #${GPU_GLES2_DIR}resources/return_callback.h",
  #${GPU_GLES2_DIR}resources/returned_resource.h",
  ${GPU_GLES2_DIR}resources/shared_bitmap.cc
  #${GPU_GLES2_DIR}resources/shared_bitmap.h",
  ${GPU_GLES2_DIR}resources/single_release_callback.cc
  #${GPU_GLES2_DIR}resources/single_release_callback.h",
  ${GPU_GLES2_DIR}resources/transferable_resource.cc
  #${GPU_GLES2_DIR}resources/transferable_resource.h",
  ${GPU_GLES2_DIR}skia_helper.cc
  #${GPU_GLES2_DIR}skia_helper.h",
  ${GPU_GLES2_DIR}surfaces/child_local_surface_id_allocator.cc
  #${GPU_GLES2_DIR}surfaces/child_local_surface_id_allocator.h",
  ${GPU_GLES2_DIR}surfaces/frame_sink_id.cc
  #${GPU_GLES2_DIR}surfaces/frame_sink_id.h",
  ${GPU_GLES2_DIR}surfaces/frame_sink_id_allocator.cc
  #${GPU_GLES2_DIR}surfaces/frame_sink_id_allocator.h",
  ${GPU_GLES2_DIR}surfaces/local_surface_id.cc
  #${GPU_GLES2_DIR}surfaces/local_surface_id.h",
  ${GPU_GLES2_DIR}surfaces/local_surface_id_allocation.cc
  #${GPU_GLES2_DIR}surfaces/local_surface_id_allocation.h",
  ${GPU_GLES2_DIR}surfaces/parent_local_surface_id_allocator.cc
  #${GPU_GLES2_DIR}surfaces/parent_local_surface_id_allocator.h",
  ${GPU_GLES2_DIR}surfaces/scoped_surface_id_allocator.cc
  #${GPU_GLES2_DIR}surfaces/scoped_surface_id_allocator.h",
  ${GPU_GLES2_DIR}surfaces/surface_id.cc
  #${GPU_GLES2_DIR}surfaces/surface_id.h",
  ${GPU_GLES2_DIR}surfaces/surface_info.cc
  #${GPU_GLES2_DIR}surfaces/surface_info.h",
  ${GPU_GLES2_DIR}surfaces/surface_range.cc
  #${GPU_GLES2_DIR}surfaces/surface_range.h",
  ${GPU_GLES2_DIR}switches.cc
  #${GPU_GLES2_DIR}switches.h",
  ${GPU_GLES2_DIR}traced_value.cc
  #${GPU_GLES2_DIR}traced_value.h",
  #${GPU_GLES2_DIR}viz_common_export.h",
  ${GPU_GLES2_DIR}viz_utils.cc
  #${GPU_GLES2_DIR}viz_utils.h",
)

add_library(GPU_GLES2 STATIC
  ${GPU_GLES2_SOURCES}
)

target_link_libraries(GPU_GLES2 PUBLIC
  GPU_COMMAND_BUFFER
  #${BASE_LIBRARIES}
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
)

set_property(TARGET GPU_GLES2 PROPERTY CXX_STANDARD 17)

target_include_directories(GPU_GLES2 PRIVATE
  ${GPU_GLES2_DIR}
  ${BASE_DIR}
)

target_compile_definitions(GPU_GLES2 PRIVATE
  #VIZ_RESOURCE_FORMAT_IMPLEMENTATION=1
  #VIZ_METAL_CONTEXT_PROVIDER_IMPLEMENTATION=1
  #VIZ_VULKAN_CONTEXT_PROVIDER_IMPLEMENTATION=1
  #VK_USE_PLATFORM_ANDROID_KHR=1
  VIZ_COMMON_IMPLEMENTATION=1
)
