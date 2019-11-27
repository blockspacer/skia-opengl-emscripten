﻿# see https://github.com/chromium/chromium/blob/d9b4f45e42611660d87c402e796ec5015f3a9756/cc/BUILD.gn

### --- CC ---###

if(NOT DEFINED CHROMIUM_DIR)
  message(FATAL_ERROR "NOT DEFINED: CHROMIUM_DIR")
endif(NOT DEFINED CHROMIUM_DIR)

# path to cc/debug/layer_tree_debug_state.h
set(CC_PARENT_DIR
  ${CHROMIUM_DIR}
)

list(APPEND CC_SOURCES
  ${CC_DIR}cc_export.h
  #${CC_DIR}benchmarks/benchmark_instrumentation.cc
  #${CC_DIR}benchmarks/benchmark_instrumentation.h",
  #${CC_DIR}benchmarks/invalidation_benchmark.cc
  #${CC_DIR}benchmarks/invalidation_benchmark.h",
  #${CC_DIR}benchmarks/micro_benchmark.cc
  #${CC_DIR}benchmarks/micro_benchmark.h",
  #${CC_DIR}benchmarks/micro_benchmark_controller.cc
  #${CC_DIR}benchmarks/micro_benchmark_controller.h",
  #${CC_DIR}benchmarks/micro_benchmark_controller_impl.cc
  #${CC_DIR}benchmarks/micro_benchmark_controller_impl.h",
  #${CC_DIR}benchmarks/micro_benchmark_impl.cc
  #${CC_DIR}benchmarks/micro_benchmark_impl.h",
  #${CC_DIR}benchmarks/rasterize_and_record_benchmark.cc
  #${CC_DIR}benchmarks/rasterize_and_record_benchmark.h",
  #${CC_DIR}benchmarks/rasterize_and_record_benchmark_impl.cc
  #${CC_DIR}benchmarks/rasterize_and_record_benchmark_impl.h",
  #${CC_DIR}benchmarks/unittest_only_benchmark.cc
  #${CC_DIR}benchmarks/unittest_only_benchmark.h",
  #${CC_DIR}benchmarks/unittest_only_benchmark_impl.cc
  #${CC_DIR}benchmarks/unittest_only_benchmark_impl.h",
  ${CC_DIR}input/browser_controls_offset_manager.cc
  #${CC_DIR}input/browser_controls_offset_manager.h",
  #${CC_DIR}input/browser_controls_offset_manager_client.h",
  ${CC_DIR}input/input_handler.cc
  #${CC_DIR}input/input_handler.h",
  ${CC_DIR}input/layer_selection_bound.cc
  #${CC_DIR}input/layer_selection_bound.h",
  ${CC_DIR}input/main_thread_scrolling_reason.cc
  #${CC_DIR}input/main_thread_scrolling_reason.h",
  #${CC_DIR}input/overscroll_behavior.h",
  ${CC_DIR}input/page_scale_animation.cc
  #${CC_DIR}input/page_scale_animation.h",
  ${CC_DIR}input/scroll_elasticity_helper.cc
  #${CC_DIR}input/scroll_elasticity_helper.h",
  ${CC_DIR}input/scroll_snap_data.cc
  #${CC_DIR}input/scroll_snap_data.h",
  ${CC_DIR}input/scroll_state.cc
  #${CC_DIR}input/scroll_state.h",
  ${CC_DIR}input/scroll_state_data.cc
  #${CC_DIR}input/scroll_state_data.h",
  ${CC_DIR}input/scrollbar_animation_controller.cc
  #${CC_DIR}input/scrollbar_animation_controller.h",
  ${CC_DIR}input/scrollbar_controller.cc
  #${CC_DIR}input/scrollbar_controller.h",
  ${CC_DIR}input/single_scrollbar_animation_controller_thinning.cc
  #${CC_DIR}input/single_scrollbar_animation_controller_thinning.h",
  ${CC_DIR}input/snap_fling_controller.cc
  #${CC_DIR}input/snap_fling_controller.h",
  ${CC_DIR}input/snap_fling_curve.cc
  #${CC_DIR}input/snap_fling_curve.h",
  ${CC_DIR}input/snap_selection_strategy.cc
  #${CC_DIR}input/snap_selection_strategy.h",
  #${CC_DIR}input/touch_action.h",
  ${CC_DIR}layers/append_quads_data.cc
  #${CC_DIR}layers/append_quads_data.h",
  #${CC_DIR}layers/content_layer_client.h",
  ${CC_DIR}layers/deadline_policy.cc
  #${CC_DIR}layers/deadline_policy.h",
  #${CC_DIR}layers/draw_mode.h",
  ${CC_DIR}layers/draw_properties.cc
  #${CC_DIR}layers/draw_properties.h",
  ${CC_DIR}layers/effect_tree_layer_list_iterator.cc
  #${CC_DIR}layers/effect_tree_layer_list_iterator.h",
  ${CC_DIR}layers/heads_up_display_layer.cc
  #${CC_DIR}layers/heads_up_display_layer.h",
  ${CC_DIR}layers/heads_up_display_layer_impl.cc
  #${CC_DIR}layers/heads_up_display_layer_impl.h",
  ${CC_DIR}layers/layer.cc
  #${CC_DIR}layers/layer.h",
  #${CC_DIR}layers/layer_client.h",
  #${CC_DIR}layers/layer_collections.h",
  ${CC_DIR}layers/layer_impl.cc
  #${CC_DIR}layers/layer_impl.h",
  # TODO #${CC_DIR}layers/layer_impl_test_properties.cc
  #${CC_DIR}layers/layer_impl_test_properties.h",
  ${CC_DIR}layers/layer_list_iterator.cc
  #${CC_DIR}layers/layer_list_iterator.h",
  ${CC_DIR}layers/layer_position_constraint.cc
  #${CC_DIR}layers/layer_position_constraint.h",
  ${CC_DIR}layers/layer_sticky_position_constraint.cc
  #${CC_DIR}layers/layer_sticky_position_constraint.h",
  ${CC_DIR}layers/nine_patch_generator.cc
  #${CC_DIR}layers/nine_patch_generator.h",
  ${CC_DIR}layers/nine_patch_layer.cc
  #${CC_DIR}layers/nine_patch_layer.h",
  ${CC_DIR}layers/nine_patch_layer_impl.cc
  #${CC_DIR}layers/nine_patch_layer_impl.h",
  ${CC_DIR}layers/painted_overlay_scrollbar_layer.cc
  #${CC_DIR}layers/painted_overlay_scrollbar_layer.h",
  ${CC_DIR}layers/painted_overlay_scrollbar_layer_impl.cc
  #${CC_DIR}layers/painted_overlay_scrollbar_layer_impl.h",
  ${CC_DIR}layers/painted_scrollbar_layer.cc
  #${CC_DIR}layers/painted_scrollbar_layer.h",
  ${CC_DIR}layers/painted_scrollbar_layer_impl.cc
  #${CC_DIR}layers/painted_scrollbar_layer_impl.h",
  ${CC_DIR}layers/picture_image_layer.cc
  #${CC_DIR}layers/picture_image_layer.h",
  ${CC_DIR}layers/picture_layer.cc
  #${CC_DIR}layers/picture_layer.h",
  ${CC_DIR}layers/picture_layer_impl.cc
  #${CC_DIR}layers/picture_layer_impl.h",
  ${CC_DIR}layers/recording_source.cc
  #${CC_DIR}layers/recording_source.h",
  ${CC_DIR}layers/render_surface_impl.cc
  #${CC_DIR}layers/render_surface_impl.h",
  ${CC_DIR}layers/scrollbar_layer_impl_base.cc
  #${CC_DIR}layers/scrollbar_layer_impl_base.h",
  #${CC_DIR}layers/scrollbar_layer_interface.h",
  ${CC_DIR}layers/solid_color_layer.cc
  #${CC_DIR}layers/solid_color_layer.h",
  ${CC_DIR}layers/solid_color_layer_impl.cc
  #${CC_DIR}layers/solid_color_layer_impl.h",
  ${CC_DIR}layers/solid_color_scrollbar_layer.cc
  #${CC_DIR}layers/solid_color_scrollbar_layer.h",
  ${CC_DIR}layers/solid_color_scrollbar_layer_impl.cc
  #${CC_DIR}layers/solid_color_scrollbar_layer_impl.h",
  ${CC_DIR}layers/surface_layer.cc
  #${CC_DIR}layers/surface_layer.h",
  ${CC_DIR}layers/surface_layer_impl.cc
  #${CC_DIR}layers/surface_layer_impl.h",
  ${CC_DIR}layers/texture_layer.cc
  #${CC_DIR}layers/texture_layer.h",
  #${CC_DIR}layers/texture_layer_client.h",
  ${CC_DIR}layers/texture_layer_impl.cc
  #${CC_DIR}layers/texture_layer_impl.h",
  ${CC_DIR}layers/touch_action_region.cc
  #${CC_DIR}layers/touch_action_region.h",
  ${CC_DIR}layers/ui_resource_layer.cc
  #${CC_DIR}layers/ui_resource_layer.h",
  ${CC_DIR}layers/ui_resource_layer_impl.cc
  #${CC_DIR}layers/ui_resource_layer_impl.h",
  #${CC_DIR}layers/video_frame_provider.h",
  ${CC_DIR}layers/video_frame_provider_client_impl.cc
  #${CC_DIR}layers/video_frame_provider_client_impl.h",
  ${CC_DIR}layers/video_layer.cc
  #${CC_DIR}layers/video_layer.h",
  ${CC_DIR}layers/video_layer_impl.cc
  #${CC_DIR}layers/video_layer_impl.h",
  ${CC_DIR}layers/viewport.cc
  #${CC_DIR}layers/viewport.h",
  ${CC_DIR}raster/bitmap_raster_buffer_provider.cc
  #${CC_DIR}raster/bitmap_raster_buffer_provider.h",
  ${CC_DIR}raster/gpu_raster_buffer_provider.cc
  #${CC_DIR}raster/gpu_raster_buffer_provider.h",
  ${CC_DIR}raster/one_copy_raster_buffer_provider.cc
  #${CC_DIR}raster/one_copy_raster_buffer_provider.h",
  ${CC_DIR}raster/paint_worklet_image_provider.cc
  #${CC_DIR}raster/paint_worklet_image_provider.h",
  ${CC_DIR}raster/playback_image_provider.cc
  #${CC_DIR}raster/playback_image_provider.h",
  ${CC_DIR}raster/raster_buffer.cc
  #${CC_DIR}raster/raster_buffer.h",
  ${CC_DIR}raster/raster_buffer_provider.cc
  #${CC_DIR}raster/raster_buffer_provider.h",
  ${CC_DIR}raster/raster_source.cc
  #${CC_DIR}raster/raster_source.h",
  ${CC_DIR}raster/scoped_gpu_raster.cc
  #${CC_DIR}raster/scoped_gpu_raster.h",
  #${CC_DIR}raster/scoped_grcontext_access.h",
  ${CC_DIR}raster/single_thread_task_graph_runner.cc
  #${CC_DIR}raster/single_thread_task_graph_runner.h",
  ${CC_DIR}raster/staging_buffer_pool.cc
  #${CC_DIR}raster/staging_buffer_pool.h",
  ${CC_DIR}raster/synchronous_task_graph_runner.cc
  #${CC_DIR}raster/synchronous_task_graph_runner.h",
  ${CC_DIR}raster/task.cc
  #${CC_DIR}raster/task.h",
  #${CC_DIR}raster/task_category.h",
  #${CC_DIR}raster/task_graph_runner.h",
  ${CC_DIR}raster/task_graph_work_queue.cc
  #${CC_DIR}raster/task_graph_work_queue.h",
  ${CC_DIR}raster/tile_task.cc
  #${CC_DIR}raster/tile_task.h",
  ${CC_DIR}raster/zero_copy_raster_buffer_provider.cc
  #${CC_DIR}raster/zero_copy_raster_buffer_provider.h",
  ${CC_DIR}resources/cross_thread_shared_bitmap.cc
  #${CC_DIR}resources/cross_thread_shared_bitmap.h",
  ${CC_DIR}resources/memory_history.cc
  #${CC_DIR}resources/memory_history.h",
  ${CC_DIR}resources/resource_pool.cc
  #${CC_DIR}resources/resource_pool.h",
  ${CC_DIR}resources/scoped_ui_resource.cc
  #${CC_DIR}resources/scoped_ui_resource.h",
  ${CC_DIR}resources/shared_bitmap_id_registrar.cc
  #${CC_DIR}resources/shared_bitmap_id_registrar.h",
  ${CC_DIR}resources/ui_resource_bitmap.cc
  #${CC_DIR}resources/ui_resource_bitmap.h",
  #${CC_DIR}resources/ui_resource_client.h",
  ${CC_DIR}resources/ui_resource_manager.cc
  #${CC_DIR}resources/ui_resource_manager.h",
  ${CC_DIR}resources/ui_resource_request.cc
  #${CC_DIR}resources/ui_resource_request.h",
  ${CC_DIR}scheduler/begin_frame_tracker.cc
  #${CC_DIR}scheduler/begin_frame_tracker.h",
  #${CC_DIR}scheduler/commit_earlyout_reason.h",
  ${CC_DIR}scheduler/compositor_frame_reporter.cc
  #${CC_DIR}scheduler/compositor_frame_reporter.h",
  ${CC_DIR}scheduler/compositor_frame_reporting_controller.cc
  #${CC_DIR}scheduler/compositor_frame_reporting_controller.h",
  ${CC_DIR}scheduler/compositor_timing_history.cc
  #${CC_DIR}scheduler/compositor_timing_history.h",
  #${CC_DIR}scheduler/draw_result.h",
  ${CC_DIR}scheduler/scheduler.cc
  #${CC_DIR}scheduler/scheduler.h",
  ${CC_DIR}scheduler/scheduler_settings.cc
  #${CC_DIR}scheduler/scheduler_settings.h",
  ${CC_DIR}scheduler/scheduler_state_machine.cc
  #${CC_DIR}scheduler/scheduler_state_machine.h",
  #${CC_DIR}scheduler/video_frame_controller.h",
  ${CC_DIR}tiles/checker_image_tracker.cc
  #${CC_DIR}tiles/checker_image_tracker.h",
  ${CC_DIR}tiles/decoded_image_tracker.cc
  #${CC_DIR}tiles/decoded_image_tracker.h",
  ${CC_DIR}tiles/eviction_tile_priority_queue.cc
  #${CC_DIR}tiles/eviction_tile_priority_queue.h",
  ${CC_DIR}tiles/frame_viewer_instrumentation.cc
  #${CC_DIR}tiles/frame_viewer_instrumentation.h",
  ${CC_DIR}tiles/gpu_image_decode_cache.cc
  #${CC_DIR}tiles/gpu_image_decode_cache.h",
  ${CC_DIR}tiles/image_controller.cc
  #${CC_DIR}tiles/image_controller.h",
  ${CC_DIR}tiles/image_decode_cache.cc
  #${CC_DIR}tiles/image_decode_cache.h",
  ${CC_DIR}tiles/image_decode_cache_utils.cc
  #${CC_DIR}tiles/image_decode_cache_utils.h",
  ${CC_DIR}tiles/mipmap_util.cc
  #${CC_DIR}tiles/mipmap_util.h",
  ${CC_DIR}tiles/paint_worklet_image_cache.cc
  #${CC_DIR}tiles/paint_worklet_image_cache.h",
  ${CC_DIR}tiles/picture_layer_tiling.cc
  #${CC_DIR}tiles/picture_layer_tiling.h",
  ${CC_DIR}tiles/picture_layer_tiling_set.cc
  #${CC_DIR}tiles/picture_layer_tiling_set.h",
  ${CC_DIR}tiles/prioritized_tile.cc
  #${CC_DIR}tiles/prioritized_tile.h",
  ${CC_DIR}tiles/raster_tile_priority_queue.cc
  #${CC_DIR}tiles/raster_tile_priority_queue.h",
  ${CC_DIR}tiles/raster_tile_priority_queue_all.cc
  #${CC_DIR}tiles/raster_tile_priority_queue_all.h",
  ${CC_DIR}tiles/raster_tile_priority_queue_required.cc
  #${CC_DIR}tiles/raster_tile_priority_queue_required.h",
  ${CC_DIR}tiles/software_image_decode_cache.cc
  #${CC_DIR}tiles/software_image_decode_cache.h",
  ${CC_DIR}tiles/software_image_decode_cache_utils.cc
  #${CC_DIR}tiles/software_image_decode_cache_utils.h",
  ${CC_DIR}tiles/tile.cc
  #${CC_DIR}tiles/tile.h",
  ${CC_DIR}tiles/tile_draw_info.cc
  #${CC_DIR}tiles/tile_draw_info.h",
  ${CC_DIR}tiles/tile_manager.cc
  #${CC_DIR}tiles/tile_manager.h",
  #${CC_DIR}tiles/tile_manager_settings.h",
  ${CC_DIR}tiles/tile_priority.cc
  #${CC_DIR}tiles/tile_priority.h",
  ${CC_DIR}tiles/tile_task_manager.cc
  #${CC_DIR}tiles/tile_task_manager.h",
  ${CC_DIR}tiles/tiling_set_eviction_queue.cc
  #${CC_DIR}tiles/tiling_set_eviction_queue.h",
  ${CC_DIR}tiles/tiling_set_raster_queue_all.cc
  #${CC_DIR}tiles/tiling_set_raster_queue_all.h",
  ${CC_DIR}tiles/tiling_set_raster_queue_required.cc
  #${CC_DIR}tiles/tiling_set_raster_queue_required.h",
  #${CC_DIR}trees/animation_options.h",
  ${CC_DIR}trees/clip_expander.cc
  #${CC_DIR}trees/clip_expander.h",
  ${CC_DIR}trees/clip_node.cc
  #${CC_DIR}trees/clip_node.h",
  #${CC_DIR}trees/compositor_mode.h",
  ${CC_DIR}trees/damage_tracker.cc
  #${CC_DIR}trees/damage_tracker.h",
  ${CC_DIR}trees/debug_rect_history.cc
  #${CC_DIR}trees/debug_rect_history.h",
  ${CC_DIR}trees/draw_property_utils.cc
  #${CC_DIR}trees/draw_property_utils.h",
  ${CC_DIR}trees/effect_node.cc
  #${CC_DIR}trees/effect_node.h",
  ${CC_DIR}trees/element_id.cc
  #${CC_DIR}trees/element_id.h",
  ${CC_DIR}trees/frame_rate_counter.cc
  #${CC_DIR}trees/frame_rate_counter.h",
  ${CC_DIR}trees/image_animation_controller.cc
  #${CC_DIR}trees/image_animation_controller.h",
  ${CC_DIR}trees/latency_info_swap_promise.cc
  #${CC_DIR}trees/latency_info_swap_promise.h",
  ${CC_DIR}trees/latency_info_swap_promise_monitor.cc
  #${CC_DIR}trees/latency_info_swap_promise_monitor.h",
  ${CC_DIR}trees/layer_tree_frame_sink.cc
  #${CC_DIR}trees/layer_tree_frame_sink.h",
  #${CC_DIR}trees/layer_tree_frame_sink_client.h",
  # TODO #
  ${CC_DIR}trees/layer_tree_host.cc
  #${CC_DIR}trees/layer_tree_host.h",
  #${CC_DIR}trees/layer_tree_host_client.h",
  ${CC_DIR}trees/layer_tree_host_common.cc
  #${CC_DIR}trees/layer_tree_host_common.h",
  # TODO #
  ${CC_DIR}trees/layer_tree_host_impl.cc
  #${CC_DIR}trees/layer_tree_host_impl.h",
  #${CC_DIR}trees/layer_tree_host_single_thread_client.h",
  ${CC_DIR}trees/layer_tree_impl.cc
  #${CC_DIR}trees/layer_tree_impl.h",
  ${CC_DIR}trees/layer_tree_mutator.cc
  #${CC_DIR}trees/layer_tree_mutator.h",
  ${CC_DIR}trees/layer_tree_settings.cc
  #${CC_DIR}trees/layer_tree_settings.h",
  ${CC_DIR}trees/managed_memory_policy.cc
  #${CC_DIR}trees/managed_memory_policy.h",
  #${CC_DIR}trees/mutator_host.h",
  #${CC_DIR}trees/mutator_host_client.h",
  ${CC_DIR}trees/occlusion.cc
  #${CC_DIR}trees/occlusion.h",
  ${CC_DIR}trees/occlusion_tracker.cc
  #${CC_DIR}trees/occlusion_tracker.h",
  ${CC_DIR}trees/property_animation_state.cc
  #${CC_DIR}trees/property_animation_state.h",
  ${CC_DIR}trees/property_tree.cc
  #${CC_DIR}trees/property_tree.h",
  ${CC_DIR}trees/property_tree_builder.cc
  #${CC_DIR}trees/property_tree_builder.h",
  #${CC_DIR}trees/proxy.h",
  ${CC_DIR}trees/proxy_common.cc
  #${CC_DIR}trees/proxy_common.h",
  # requires services/metrics/public/mojom/ukm_interface.mojom-forward.h
  ## TODO ##
  ${CC_DIR}trees/proxy_impl.cc
  #${CC_DIR}trees/proxy_impl.h",
  # requires services/metrics/public/mojom/ukm_interface.mojom-forward.h
  ## TODO ##
  ${CC_DIR}trees/proxy_main.cc
  #${CC_DIR}trees/proxy_main.h",
  ${CC_DIR}trees/render_frame_metadata.cc
  #${CC_DIR}trees/render_frame_metadata.h",
  #${CC_DIR}trees/render_frame_metadata_observer.h",
  #${CC_DIR}trees/scoped_abort_remaining_swap_promises.h",
  ${CC_DIR}trees/scroll_node.cc
  #${CC_DIR}trees/scroll_node.h",
  ${CC_DIR}trees/single_thread_proxy.cc
  #${CC_DIR}trees/single_thread_proxy.h",
  #${CC_DIR}trees/swap_promise.h",
  ${CC_DIR}trees/swap_promise_manager.cc
  #${CC_DIR}trees/swap_promise_manager.h",
  ${CC_DIR}trees/swap_promise_monitor.cc
  #${CC_DIR}trees/swap_promise_monitor.h",
  ${CC_DIR}trees/target_property.cc
  #${CC_DIR}trees/target_property.h",
  ${CC_DIR}trees/task_runner_provider.cc
  #${CC_DIR}trees/task_runner_provider.h",
  ${CC_DIR}trees/transform_node.cc
  #${CC_DIR}trees/transform_node.h",
  ${CC_DIR}trees/tree_synchronizer.cc
  #${CC_DIR}trees/tree_synchronizer.h",
  # requires services/metrics/public/cpp/ukm_builders.h
  ## TODO ## ${CC_DIR}trees/ukm_manager.cc
  #${CC_DIR}trees/ukm_manager.h",
  ${CC_DIR}trees/viewport_layers.cc
  #${CC_DIR}trees/viewport_layers.h",
)


list(APPEND CC_STUB_SOURCES
  ${CC_DIR}layers/layer_impl_test_properties.cc
  ${CC_DIR}layers/layer_impl_test_properties.h
)

add_library(CC STATIC
  ${CC_SOURCES}
  ${CC_STUB_SOURCES}
)

#message(FATAL_ERROR ${BASE_LIBRARIES})

target_link_libraries(CC PRIVATE
  BASE_CC
  DEBUG_CC
  PAINT_CC
  #ANIMATION_CC
  #${BASE_LIBRARIES}
  #GPU_COMMAND_BUFFER
  SKIA_EXT
  GFX_ANIMATION
  GFX_CODEC
  GFX_COLOR_SPACE
  GFX_GEOMETRY_SKIA
  GFX_GEOMETRY
  GFX_SWITCHES
  GFX_RANGE
  SKIA
  ${base_LIB}
  GURL
  #
  ${COMPONENTS_VIZ_CLIENT_LIB}
  # khronos
  ${khronos_LIB}
)

set_property(TARGET CC PROPERTY CXX_STANDARD 17)

target_include_directories(CC PRIVATE
  #${CC_PARENT_DIR}/gpu # requires "GLES2/gl2chromium.h"
  #${CC_DIR}
  ${BASE_DIR}
  ${SERVICES_METRICS_PUBLIC_CPP_DIR}
  ${CC_PARENT_DIR} # requires "cc/resources/ui_resource_client.h"
  #
)

target_compile_definitions(CC PRIVATE
  CC_IMPLEMENTATION=1
)

target_compile_options(CC PRIVATE
  -Wno-format
)
