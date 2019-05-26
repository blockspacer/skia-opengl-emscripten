### --- BLINK_RENDERER_PLATFORM ---###

set(CUR_SRC_DIR ${BLINK_RENDERER_PLATFORM_DIR})

# path to ...gen/third_party/blink/renderer/platform/
set(CUR_OUT_DIR ${GEN_COMBINED_DIR}/third_party/blink/renderer/platform/)

set(ENABLE_BLINK_FONTS OFF)
set(ENABLE_BLINK_INSTRUMENTATION OFF)

list(APPEND BLINK_RENDERER_PLATFORM_GEN_SOURCES
  #
  # see blink_python_runner("runtime_enabled_features")
  # https://chromium.googlesource.com/chromium/src/third_party/+/master/blink/renderer/platform/BUILD.gn#31
  #
  # ...gen/third_party/blink/renderer/platform/runtime_enabled_features.cc
  ${CUR_OUT_DIR}/runtime_enabled_features.cc
  #${CHROMIUM_DIR}/third_party/blink/renderer/platform/runtime_enabled_features.cc
  #blink_python_runner("color_data")
  ${CUR_OUT_DIR}color_data.cc
)

if(${CMAKE_SYSTEM_NAME} STREQUAL "Linux")
  if(ENABLE_BLINK_INSTRUMENTATION)
    list(APPEND BLINK_RENDERER_PLATFORM_GEN_SOURCES
        #action("instrumentation_probes")
        ${CUR_OUT_DIR}platform_probes_impl.cc
    )
  endif(ENABLE_BLINK_INSTRUMENTATION)
  #
  if(ENABLE_BLINK_FONTS)
    list(APPEND BLINK_RENDERER_PLATFORM_GEN_SOURCES
        # make_names("font_family_names")
        ${CUR_OUT_DIR}font_family_names.cc
        #compiled_action("character_data")
        ${CUR_OUT_DIR}character_property_data.cc
    )
  list(APPEND EXTRA_DEFINES
    -DENABLE_BLINK_FONTS=1)
  endif(ENABLE_BLINK_FONTS)
endif()

list(APPEND BLINK_RENDERER_PLATFORM_ANIMATION_SOURCES
  ${BLINK_RENDERER_PLATFORM_DIR}animation/animation_translation_util.cc
  #${BLINK_RENDERER_PLATFORM_DIR}animation/animation_translation_util.h
  #${BLINK_RENDERER_PLATFORM_DIR}animation/animation_utilities.h
  ${BLINK_RENDERER_PLATFORM_DIR}animation/compositor_animation.cc
  #${BLINK_RENDERER_PLATFORM_DIR}animation/compositor_animation.h
  ${BLINK_RENDERER_PLATFORM_DIR}animation/compositor_animation_client.cc
  #${BLINK_RENDERER_PLATFORM_DIR}animation/compositor_animation_client.h
  #${BLINK_RENDERER_PLATFORM_DIR}animation/compositor_animation_curve.h
  #${BLINK_RENDERER_PLATFORM_DIR}animation/compositor_animation_delegate.h
  ${BLINK_RENDERER_PLATFORM_DIR}animation/compositor_animation_timeline.cc
  #${BLINK_RENDERER_PLATFORM_DIR}animation/compositor_animation_timeline.h
  ${BLINK_RENDERER_PLATFORM_DIR}animation/compositor_filter_animation_curve.cc
  #${BLINK_RENDERER_PLATFORM_DIR}animation/compositor_filter_animation_curve.h
  ${BLINK_RENDERER_PLATFORM_DIR}animation/compositor_filter_keyframe.cc
  #${BLINK_RENDERER_PLATFORM_DIR}animation/compositor_filter_keyframe.h
  ${BLINK_RENDERER_PLATFORM_DIR}animation/compositor_float_animation_curve.cc
  #${BLINK_RENDERER_PLATFORM_DIR}animation/compositor_float_animation_curve.h
  ${BLINK_RENDERER_PLATFORM_DIR}animation/compositor_float_keyframe.cc
  #${BLINK_RENDERER_PLATFORM_DIR}animation/compositor_float_keyframe.h
  ${BLINK_RENDERER_PLATFORM_DIR}animation/compositor_keyframe.cc
  #${BLINK_RENDERER_PLATFORM_DIR}animation/compositor_keyframe.h
  ${BLINK_RENDERER_PLATFORM_DIR}animation/compositor_keyframe_model.cc
  #${BLINK_RENDERER_PLATFORM_DIR}animation/compositor_keyframe_model.h
  ${BLINK_RENDERER_PLATFORM_DIR}animation/compositor_scroll_offset_animation_curve.cc
  #${BLINK_RENDERER_PLATFORM_DIR}animation/compositor_scroll_offset_animation_curve.h
  #${BLINK_RENDERER_PLATFORM_DIR}animation/compositor_target_property.h
  ${BLINK_RENDERER_PLATFORM_DIR}animation/compositor_transform_animation_curve.cc
  #${BLINK_RENDERER_PLATFORM_DIR}animation/compositor_transform_animation_curve.h
  ${BLINK_RENDERER_PLATFORM_DIR}animation/compositor_transform_keyframe.cc
  #${BLINK_RENDERER_PLATFORM_DIR}animation/compositor_transform_keyframe.h
  ${BLINK_RENDERER_PLATFORM_DIR}animation/compositor_transform_operations.cc
  #${BLINK_RENDERER_PLATFORM_DIR}animation/compositor_transform_operations.h
  ${BLINK_RENDERER_PLATFORM_DIR}animation/timing_function.cc
  #${BLINK_RENDERER_PLATFORM_DIR}animation/timing_function.h
)

list(APPEND BLINK_RENDERER_PLATFORM_GEOMETRY_SOURCES
  #${BLINK_RENDERER_PLATFORM_DIR}geometry/blend.h
  #${BLINK_RENDERER_PLATFORM_DIR}geometry/calculation_value.h
  ## TODO ##   #
  ## TODO ##   # if (is_mac)
  ## TODO ##   #
  ## TODO ##   ## TODO ## ${BLINK_RENDERER_PLATFORM_DIR}geometry/cg/float_point_cg.cc
  ## TODO ##   ## TODO ## ${BLINK_RENDERER_PLATFORM_DIR}geometry/cg/float_rect_cg.cc
  ## TODO ##   ## TODO ## ${BLINK_RENDERER_PLATFORM_DIR}geometry/cg/float_size_cg.cc
  ## TODO ##   ## TODO ## ${BLINK_RENDERER_PLATFORM_DIR}geometry/cg/int_point_cg.cc
  ## TODO ##   ## TODO ## ${BLINK_RENDERER_PLATFORM_DIR}geometry/cg/int_rect_cg.cc
  ## TODO ##   ## TODO ## ${BLINK_RENDERER_PLATFORM_DIR}geometry/cg/int_size_cg.cc
  ## TODO ##   ## TODO ## ${BLINK_RENDERER_PLATFORM_DIR}geometry/double_point.cc
  #${BLINK_RENDERER_PLATFORM_DIR}geometry/double_point.h
  ${BLINK_RENDERER_PLATFORM_DIR}geometry/double_rect.cc
  #${BLINK_RENDERER_PLATFORM_DIR}geometry/double_rect.h
  ${BLINK_RENDERER_PLATFORM_DIR}geometry/double_size.cc
  #${BLINK_RENDERER_PLATFORM_DIR}geometry/double_size.h
  ${BLINK_RENDERER_PLATFORM_DIR}geometry/float_box.cc
  #${BLINK_RENDERER_PLATFORM_DIR}geometry/float_box.h
  ${BLINK_RENDERER_PLATFORM_DIR}geometry/float_point.cc
  #${BLINK_RENDERER_PLATFORM_DIR}geometry/float_point.h
  ${BLINK_RENDERER_PLATFORM_DIR}geometry/float_point_3d.cc
  #${BLINK_RENDERER_PLATFORM_DIR}geometry/float_point_3d.h
  ${BLINK_RENDERER_PLATFORM_DIR}geometry/float_polygon.cc
  #${BLINK_RENDERER_PLATFORM_DIR}geometry/float_polygon.h
  ${BLINK_RENDERER_PLATFORM_DIR}geometry/float_quad.cc
  #${BLINK_RENDERER_PLATFORM_DIR}geometry/float_quad.h
  ${BLINK_RENDERER_PLATFORM_DIR}geometry/float_rect.cc
  #${BLINK_RENDERER_PLATFORM_DIR}geometry/float_rect.h
  ${BLINK_RENDERER_PLATFORM_DIR}geometry/float_rect_outsets.cc
  #${BLINK_RENDERER_PLATFORM_DIR}geometry/float_rect_outsets.h
  ${BLINK_RENDERER_PLATFORM_DIR}geometry/float_rounded_rect.cc
  #${BLINK_RENDERER_PLATFORM_DIR}geometry/float_rounded_rect.h
  ${BLINK_RENDERER_PLATFORM_DIR}geometry/float_size.cc
  #${BLINK_RENDERER_PLATFORM_DIR}geometry/float_size.h
  #${BLINK_RENDERER_PLATFORM_DIR}geometry/geometry_as_json.h
  ${BLINK_RENDERER_PLATFORM_DIR}geometry/int_point.cc
  #${BLINK_RENDERER_PLATFORM_DIR}geometry/int_point.h
  ${BLINK_RENDERER_PLATFORM_DIR}geometry/int_rect.cc
  #${BLINK_RENDERER_PLATFORM_DIR}geometry/int_rect.h
  #${BLINK_RENDERER_PLATFORM_DIR}geometry/int_rect_outsets.h
  ${BLINK_RENDERER_PLATFORM_DIR}geometry/int_size.cc
  #${BLINK_RENDERER_PLATFORM_DIR}geometry/int_size.h
  ${BLINK_RENDERER_PLATFORM_DIR}geometry/layout_point.cc
  #${BLINK_RENDERER_PLATFORM_DIR}geometry/layout_point.h
  ${BLINK_RENDERER_PLATFORM_DIR}geometry/layout_rect.cc
  #${BLINK_RENDERER_PLATFORM_DIR}geometry/layout_rect.h
  ${BLINK_RENDERER_PLATFORM_DIR}geometry/layout_rect_outsets.cc
  #${BLINK_RENDERER_PLATFORM_DIR}geometry/layout_rect_outsets.h
  ${BLINK_RENDERER_PLATFORM_DIR}geometry/layout_size.cc
  #${BLINK_RENDERER_PLATFORM_DIR}geometry/layout_size.h
  ${BLINK_RENDERER_PLATFORM_DIR}geometry/layout_unit.cc
  #${BLINK_RENDERER_PLATFORM_DIR}geometry/layout_unit.h
  ${BLINK_RENDERER_PLATFORM_DIR}geometry/length.cc
  #${BLINK_RENDERER_PLATFORM_DIR}geometry/length.h
  #${BLINK_RENDERER_PLATFORM_DIR}geometry/length_box.h
  ${BLINK_RENDERER_PLATFORM_DIR}geometry/length_functions.cc
  #${BLINK_RENDERER_PLATFORM_DIR}geometry/length_functions.h
  #${BLINK_RENDERER_PLATFORM_DIR}geometry/length_point.h
  #${BLINK_RENDERER_PLATFORM_DIR}geometry/length_size.h
  ${BLINK_RENDERER_PLATFORM_DIR}geometry/region.cc
  #${BLINK_RENDERER_PLATFORM_DIR}geometry/region.h
)

list(APPEND BLINK_RENDERER_PLATFORM_GRAPHICS_SOURCES
  ${BLINK_RENDERER_PLATFORM_DIR}graphics/accelerated_static_bitmap_image.cc
  #${BLINK_RENDERER_PLATFORM_DIR}graphics/accelerated_static_bitmap_image.h
  #${BLINK_RENDERER_PLATFORM_DIR}graphics/animation_worklet_mutator.h
  #${BLINK_RENDERER_PLATFORM_DIR}graphics/animation_worklet_mutator_dispatcher.h
  ${BLINK_RENDERER_PLATFORM_DIR}graphics/animation_worklet_mutator_dispatcher_impl.cc
  #${BLINK_RENDERER_PLATFORM_DIR}graphics/animation_worklet_mutator_dispatcher_impl.h
  #${BLINK_RENDERER_PLATFORM_DIR}graphics/animation_worklet_mutators_state.h
  #${BLINK_RENDERER_PLATFORM_DIR}graphics/apply_viewport_changes.h
  ${BLINK_RENDERER_PLATFORM_DIR}graphics/begin_frame_provider.cc
  #${BLINK_RENDERER_PLATFORM_DIR}graphics/begin_frame_provider.h
  ${BLINK_RENDERER_PLATFORM_DIR}graphics/bitmap_image.cc
  #${BLINK_RENDERER_PLATFORM_DIR}graphics/bitmap_image.h
  ${BLINK_RENDERER_PLATFORM_DIR}graphics/bitmap_image_metrics.cc
  #${BLINK_RENDERER_PLATFORM_DIR}graphics/bitmap_image_metrics.h
  ${BLINK_RENDERER_PLATFORM_DIR}graphics/box_reflection.cc
  #${BLINK_RENDERER_PLATFORM_DIR}graphics/box_reflection.h
  ${BLINK_RENDERER_PLATFORM_DIR}graphics/canvas_2d_layer_bridge.cc
  #${BLINK_RENDERER_PLATFORM_DIR}graphics/canvas_2d_layer_bridge.h
  ${BLINK_RENDERER_PLATFORM_DIR}graphics/canvas_color_params.cc
  #${BLINK_RENDERER_PLATFORM_DIR}graphics/canvas_color_params.h
  #${BLINK_RENDERER_PLATFORM_DIR}graphics/canvas_heuristic_parameters.h
  ${BLINK_RENDERER_PLATFORM_DIR}graphics/canvas_resource.cc
  #${BLINK_RENDERER_PLATFORM_DIR}graphics/canvas_resource.h
  ${BLINK_RENDERER_PLATFORM_DIR}graphics/canvas_resource_dispatcher.cc
  #${BLINK_RENDERER_PLATFORM_DIR}graphics/canvas_resource_dispatcher.h
  ${BLINK_RENDERER_PLATFORM_DIR}graphics/canvas_resource_host.cc
  #${BLINK_RENDERER_PLATFORM_DIR}graphics/canvas_resource_host.h
  ${BLINK_RENDERER_PLATFORM_DIR}graphics/canvas_resource_provider.cc
  #${BLINK_RENDERER_PLATFORM_DIR}graphics/canvas_resource_provider.h
  ${BLINK_RENDERER_PLATFORM_DIR}graphics/color.cc
  #${BLINK_RENDERER_PLATFORM_DIR}graphics/color.h
  ${BLINK_RENDERER_PLATFORM_DIR}graphics/color_behavior.cc
  #${BLINK_RENDERER_PLATFORM_DIR}graphics/color_behavior.h
  #${BLINK_RENDERER_PLATFORM_DIR}graphics/color_blend.h
  #${BLINK_RENDERER_PLATFORM_DIR}graphics/color_scheme.h
  ${BLINK_RENDERER_PLATFORM_DIR}graphics/color_space_gamut.cc
  #${BLINK_RENDERER_PLATFORM_DIR}graphics/color_space_gamut.h
  ${BLINK_RENDERER_PLATFORM_DIR}graphics/color_space_profile_data.cc
  #${BLINK_RENDERER_PLATFORM_DIR}graphics/color_space_profile_data.h
  ${BLINK_RENDERER_PLATFORM_DIR}graphics/compositing/chunk_to_layer_mapper.cc
  #${BLINK_RENDERER_PLATFORM_DIR}graphics/compositing/chunk_to_layer_mapper.h
  ${BLINK_RENDERER_PLATFORM_DIR}graphics/compositing/content_layer_client_impl.cc
  #${BLINK_RENDERER_PLATFORM_DIR}graphics/compositing/content_layer_client_impl.h
  ${BLINK_RENDERER_PLATFORM_DIR}graphics/compositing/paint_artifact_compositor.cc
  #${BLINK_RENDERER_PLATFORM_DIR}graphics/compositing/paint_artifact_compositor.h
  ${BLINK_RENDERER_PLATFORM_DIR}graphics/compositing/paint_chunks_to_cc_layer.cc
  #${BLINK_RENDERER_PLATFORM_DIR}graphics/compositing/paint_chunks_to_cc_layer.h
  ${BLINK_RENDERER_PLATFORM_DIR}graphics/compositing/property_tree_manager.cc
  #${BLINK_RENDERER_PLATFORM_DIR}graphics/compositing/property_tree_manager.h
  ${BLINK_RENDERER_PLATFORM_DIR}graphics/compositing_reasons.cc
  #${BLINK_RENDERER_PLATFORM_DIR}graphics/compositing_reasons.h
  ${BLINK_RENDERER_PLATFORM_DIR}graphics/compositor_element_id.cc
  #${BLINK_RENDERER_PLATFORM_DIR}graphics/compositor_element_id.h
  ${BLINK_RENDERER_PLATFORM_DIR}graphics/compositor_filter_operations.cc
  #${BLINK_RENDERER_PLATFORM_DIR}graphics/compositor_filter_operations.h
  ${BLINK_RENDERER_PLATFORM_DIR}graphics/compositor_mutator_client.cc
  #${BLINK_RENDERER_PLATFORM_DIR}graphics/compositor_mutator_client.h
  ${BLINK_RENDERER_PLATFORM_DIR}graphics/contiguous_container.cc
  #${BLINK_RENDERER_PLATFORM_DIR}graphics/contiguous_container.h
  #${BLINK_RENDERER_PLATFORM_DIR}graphics/cpu/arm/webgl_image_conversion_neon.h
  #${BLINK_RENDERER_PLATFORM_DIR}graphics/cpu/mips/webgl_image_conversion_msa.h
  #${BLINK_RENDERER_PLATFORM_DIR}graphics/cpu/x86/webgl_image_conversion_sse.h
  ${BLINK_RENDERER_PLATFORM_DIR}graphics/crossfade_generated_image.cc
  #${BLINK_RENDERER_PLATFORM_DIR}graphics/crossfade_generated_image.h
  ${BLINK_RENDERER_PLATFORM_DIR}graphics/dark_mode_bitmap_image_classifier.cc
  #${BLINK_RENDERER_PLATFORM_DIR}graphics/dark_mode_bitmap_image_classifier.h
  ${BLINK_RENDERER_PLATFORM_DIR}graphics/dark_mode_color_classifier.cc
  #${BLINK_RENDERER_PLATFORM_DIR}graphics/dark_mode_color_classifier.h
  ${BLINK_RENDERER_PLATFORM_DIR}graphics/dark_mode_filter.cc
  #${BLINK_RENDERER_PLATFORM_DIR}graphics/dark_mode_filter.h
  #${BLINK_RENDERER_PLATFORM_DIR}graphics/dark_mode_settings.h
  ${BLINK_RENDERER_PLATFORM_DIR}graphics/darkmode/darkmode_classifier.cc
  #${BLINK_RENDERER_PLATFORM_DIR}graphics/darkmode/darkmode_classifier.h
  #${BLINK_RENDERER_PLATFORM_DIR}graphics/dash_array.h
  ${BLINK_RENDERER_PLATFORM_DIR}graphics/decoding_image_generator.cc
  #${BLINK_RENDERER_PLATFORM_DIR}graphics/decoding_image_generator.h
  ${BLINK_RENDERER_PLATFORM_DIR}graphics/deferred_image_decoder.cc
  #${BLINK_RENDERER_PLATFORM_DIR}graphics/deferred_image_decoder.h
  #${BLINK_RENDERER_PLATFORM_DIR}graphics/dom_node_id.h
  ${BLINK_RENDERER_PLATFORM_DIR}graphics/draw_looper_builder.cc
  #${BLINK_RENDERER_PLATFORM_DIR}graphics/draw_looper_builder.h
  ${BLINK_RENDERER_PLATFORM_DIR}graphics/filters/distant_light_source.cc
  #${BLINK_RENDERER_PLATFORM_DIR}graphics/filters/distant_light_source.h
  ${BLINK_RENDERER_PLATFORM_DIR}graphics/filters/fe_blend.cc
  #${BLINK_RENDERER_PLATFORM_DIR}graphics/filters/fe_blend.h
  ${BLINK_RENDERER_PLATFORM_DIR}graphics/filters/fe_box_reflect.cc
  #${BLINK_RENDERER_PLATFORM_DIR}graphics/filters/fe_box_reflect.h
  ${BLINK_RENDERER_PLATFORM_DIR}graphics/filters/fe_color_matrix.cc
  #${BLINK_RENDERER_PLATFORM_DIR}graphics/filters/fe_color_matrix.h
  ${BLINK_RENDERER_PLATFORM_DIR}graphics/filters/fe_component_transfer.cc
  #${BLINK_RENDERER_PLATFORM_DIR}graphics/filters/fe_component_transfer.h
  ${BLINK_RENDERER_PLATFORM_DIR}graphics/filters/fe_composite.cc
  #${BLINK_RENDERER_PLATFORM_DIR}graphics/filters/fe_composite.h
  ${BLINK_RENDERER_PLATFORM_DIR}graphics/filters/fe_convolve_matrix.cc
  #${BLINK_RENDERER_PLATFORM_DIR}graphics/filters/fe_convolve_matrix.h
  ${BLINK_RENDERER_PLATFORM_DIR}graphics/filters/fe_diffuse_lighting.cc
  #${BLINK_RENDERER_PLATFORM_DIR}graphics/filters/fe_diffuse_lighting.h
  ${BLINK_RENDERER_PLATFORM_DIR}graphics/filters/fe_displacement_map.cc
  #${BLINK_RENDERER_PLATFORM_DIR}graphics/filters/fe_displacement_map.h
  ${BLINK_RENDERER_PLATFORM_DIR}graphics/filters/fe_drop_shadow.cc
  #${BLINK_RENDERER_PLATFORM_DIR}graphics/filters/fe_drop_shadow.h
  ${BLINK_RENDERER_PLATFORM_DIR}graphics/filters/fe_flood.cc
  #${BLINK_RENDERER_PLATFORM_DIR}graphics/filters/fe_flood.h
  ${BLINK_RENDERER_PLATFORM_DIR}graphics/filters/fe_gaussian_blur.cc
  #${BLINK_RENDERER_PLATFORM_DIR}graphics/filters/fe_gaussian_blur.h
  ${BLINK_RENDERER_PLATFORM_DIR}graphics/filters/fe_lighting.cc
  #${BLINK_RENDERER_PLATFORM_DIR}graphics/filters/fe_lighting.h
  ${BLINK_RENDERER_PLATFORM_DIR}graphics/filters/fe_merge.cc
  #${BLINK_RENDERER_PLATFORM_DIR}graphics/filters/fe_merge.h
  ${BLINK_RENDERER_PLATFORM_DIR}graphics/filters/fe_morphology.cc
  #${BLINK_RENDERER_PLATFORM_DIR}graphics/filters/fe_morphology.h
  ${BLINK_RENDERER_PLATFORM_DIR}graphics/filters/fe_offset.cc
  #${BLINK_RENDERER_PLATFORM_DIR}graphics/filters/fe_offset.h
  ${BLINK_RENDERER_PLATFORM_DIR}graphics/filters/fe_specular_lighting.cc
  #${BLINK_RENDERER_PLATFORM_DIR}graphics/filters/fe_specular_lighting.h
  ${BLINK_RENDERER_PLATFORM_DIR}graphics/filters/fe_tile.cc
  #${BLINK_RENDERER_PLATFORM_DIR}graphics/filters/fe_tile.h
  ${BLINK_RENDERER_PLATFORM_DIR}graphics/filters/fe_turbulence.cc
  #${BLINK_RENDERER_PLATFORM_DIR}graphics/filters/fe_turbulence.h
  ${BLINK_RENDERER_PLATFORM_DIR}graphics/filters/filter.cc
  #${BLINK_RENDERER_PLATFORM_DIR}graphics/filters/filter.h
  ${BLINK_RENDERER_PLATFORM_DIR}graphics/filters/filter_effect.cc
  #${BLINK_RENDERER_PLATFORM_DIR}graphics/filters/filter_effect.h
  ${BLINK_RENDERER_PLATFORM_DIR}graphics/filters/light_source.cc
  #${BLINK_RENDERER_PLATFORM_DIR}graphics/filters/light_source.h
  ${BLINK_RENDERER_PLATFORM_DIR}graphics/filters/paint_filter_builder.cc
  #${BLINK_RENDERER_PLATFORM_DIR}graphics/filters/paint_filter_builder.h
  ${BLINK_RENDERER_PLATFORM_DIR}graphics/filters/paint_filter_effect.cc
  #${BLINK_RENDERER_PLATFORM_DIR}graphics/filters/paint_filter_effect.h
  ${BLINK_RENDERER_PLATFORM_DIR}graphics/filters/point_light_source.cc
  #${BLINK_RENDERER_PLATFORM_DIR}graphics/filters/point_light_source.h
  ${BLINK_RENDERER_PLATFORM_DIR}graphics/filters/source_alpha.cc
  #${BLINK_RENDERER_PLATFORM_DIR}graphics/filters/source_alpha.h
  ${BLINK_RENDERER_PLATFORM_DIR}graphics/filters/source_graphic.cc
  #${BLINK_RENDERER_PLATFORM_DIR}graphics/filters/source_graphic.h
  ${BLINK_RENDERER_PLATFORM_DIR}graphics/filters/spot_light_source.cc
  #${BLINK_RENDERER_PLATFORM_DIR}graphics/filters/spot_light_source.h
  ${BLINK_RENDERER_PLATFORM_DIR}graphics/generated_image.cc
  #${BLINK_RENDERER_PLATFORM_DIR}graphics/generated_image.h
  # NOTE: dawn_* requires dawn/dawn.h
  ## TODO ## ${BLINK_RENDERER_PLATFORM_DIR}graphics/gpu/dawn_control_client_holder.cc
  #${BLINK_RENDERER_PLATFORM_DIR}graphics/gpu/dawn_control_client_holder.h
  ${BLINK_RENDERER_PLATFORM_DIR}graphics/gpu/drawing_buffer.cc
  #${BLINK_RENDERER_PLATFORM_DIR}graphics/gpu/drawing_buffer.h
  ${BLINK_RENDERER_PLATFORM_DIR}graphics/gpu/extensions_3d_util.cc
  #${BLINK_RENDERER_PLATFORM_DIR}graphics/gpu/extensions_3d_util.h
  ${BLINK_RENDERER_PLATFORM_DIR}graphics/gpu/graphics_context_3d_utils.cc
  #${BLINK_RENDERER_PLATFORM_DIR}graphics/gpu/graphics_context_3d_utils.h
  ${BLINK_RENDERER_PLATFORM_DIR}graphics/gpu/image_layer_bridge.cc
  #${BLINK_RENDERER_PLATFORM_DIR}graphics/gpu/image_layer_bridge.h
  ${BLINK_RENDERER_PLATFORM_DIR}graphics/gpu/shared_context_rate_limiter.cc
  #${BLINK_RENDERER_PLATFORM_DIR}graphics/gpu/shared_context_rate_limiter.h
  ${BLINK_RENDERER_PLATFORM_DIR}graphics/gpu/shared_gpu_context.cc
  #${BLINK_RENDERER_PLATFORM_DIR}graphics/gpu/shared_gpu_context.h
  ${BLINK_RENDERER_PLATFORM_DIR}graphics/gpu/webgl_image_conversion.cc
  #${BLINK_RENDERER_PLATFORM_DIR}graphics/gpu/webgl_image_conversion.h
  # webgpu_* requires dawn/dawn.h
  ## TODO ## ${BLINK_RENDERER_PLATFORM_DIR}graphics/gpu/webgpu_swap_buffer_provider.cc
  #${BLINK_RENDERER_PLATFORM_DIR}graphics/gpu/webgpu_swap_buffer_provider.h
  # requies device/gamepad/public/cpp/gamepad.h
  ## TODO ## ${BLINK_RENDERER_PLATFORM_DIR}graphics/gpu/xr_frame_transport.cc
  #${BLINK_RENDERER_PLATFORM_DIR}graphics/gpu/xr_frame_transport.h
  ${BLINK_RENDERER_PLATFORM_DIR}graphics/gpu/xr_webgl_drawing_buffer.cc
  #${BLINK_RENDERER_PLATFORM_DIR}graphics/gpu/xr_webgl_drawing_buffer.h
  ${BLINK_RENDERER_PLATFORM_DIR}graphics/gpu_memory_buffer_image_copy.cc
  #${BLINK_RENDERER_PLATFORM_DIR}graphics/gpu_memory_buffer_image_copy.h
  ${BLINK_RENDERER_PLATFORM_DIR}graphics/gradient.cc
  #${BLINK_RENDERER_PLATFORM_DIR}graphics/gradient.h
  ${BLINK_RENDERER_PLATFORM_DIR}graphics/gradient_generated_image.cc
  #${BLINK_RENDERER_PLATFORM_DIR}graphics/gradient_generated_image.h
  ${BLINK_RENDERER_PLATFORM_DIR}graphics/graphics_context.cc
  #${BLINK_RENDERER_PLATFORM_DIR}graphics/graphics_context.h
  ${BLINK_RENDERER_PLATFORM_DIR}graphics/graphics_context_state.cc
  #${BLINK_RENDERER_PLATFORM_DIR}graphics/graphics_context_state.h
  #${BLINK_RENDERER_PLATFORM_DIR}graphics/graphics_context_state_saver.h
  ${BLINK_RENDERER_PLATFORM_DIR}graphics/graphics_layer.cc
  #${BLINK_RENDERER_PLATFORM_DIR}graphics/graphics_layer.h
  #${BLINK_RENDERER_PLATFORM_DIR}graphics/graphics_layer_client.h
  ${BLINK_RENDERER_PLATFORM_DIR}graphics/graphics_types.cc
  #${BLINK_RENDERER_PLATFORM_DIR}graphics/graphics_types.h
  #${BLINK_RENDERER_PLATFORM_DIR}graphics/graphics_types_3d.h
  ${BLINK_RENDERER_PLATFORM_DIR}graphics/hit_test_rect.cc
  #${BLINK_RENDERER_PLATFORM_DIR}graphics/hit_test_rect.h
  ${BLINK_RENDERER_PLATFORM_DIR}graphics/image.cc
  #${BLINK_RENDERER_PLATFORM_DIR}graphics/image.h
  #${BLINK_RENDERER_PLATFORM_DIR}graphics/image_animation_policy.h
  ${BLINK_RENDERER_PLATFORM_DIR}graphics/image_data_buffer.cc
  #${BLINK_RENDERER_PLATFORM_DIR}graphics/image_data_buffer.h
  ${BLINK_RENDERER_PLATFORM_DIR}graphics/image_decoder_wrapper.cc
  #${BLINK_RENDERER_PLATFORM_DIR}graphics/image_decoder_wrapper.h
  ${BLINK_RENDERER_PLATFORM_DIR}graphics/image_decoding_store.cc
  #${BLINK_RENDERER_PLATFORM_DIR}graphics/image_decoding_store.h
  ${BLINK_RENDERER_PLATFORM_DIR}graphics/image_frame_generator.cc
  #${BLINK_RENDERER_PLATFORM_DIR}graphics/image_frame_generator.h
  ${BLINK_RENDERER_PLATFORM_DIR}graphics/image_observer.cc
  #${BLINK_RENDERER_PLATFORM_DIR}graphics/image_observer.h
  ${BLINK_RENDERER_PLATFORM_DIR}graphics/image_orientation.cc
  #${BLINK_RENDERER_PLATFORM_DIR}graphics/image_orientation.h
  ${BLINK_RENDERER_PLATFORM_DIR}graphics/image_pattern.cc
  #${BLINK_RENDERER_PLATFORM_DIR}graphics/image_pattern.h
  ${BLINK_RENDERER_PLATFORM_DIR}graphics/intercepting_canvas.cc
  #${BLINK_RENDERER_PLATFORM_DIR}graphics/intercepting_canvas.h
  ${BLINK_RENDERER_PLATFORM_DIR}graphics/interpolation_space.cc
  #${BLINK_RENDERER_PLATFORM_DIR}graphics/interpolation_space.h
  #${BLINK_RENDERER_PLATFORM_DIR}graphics/lab_color_space.h
  #${BLINK_RENDERER_PLATFORM_DIR}graphics/link_highlight.h
  ${BLINK_RENDERER_PLATFORM_DIR}graphics/logging_canvas.cc
  #${BLINK_RENDERER_PLATFORM_DIR}graphics/logging_canvas.h
  ${BLINK_RENDERER_PLATFORM_DIR}graphics/mailbox_texture_holder.cc
  #${BLINK_RENDERER_PLATFORM_DIR}graphics/mailbox_texture_holder.h
  ${BLINK_RENDERER_PLATFORM_DIR}graphics/main_thread_mutator_client.cc
  #${BLINK_RENDERER_PLATFORM_DIR}graphics/main_thread_mutator_client.h
  #${BLINK_RENDERER_PLATFORM_DIR}graphics/mutator_client.h
  ${BLINK_RENDERER_PLATFORM_DIR}graphics/offscreen_canvas_placeholder.cc
  #${BLINK_RENDERER_PLATFORM_DIR}graphics/offscreen_canvas_placeholder.h
  ${BLINK_RENDERER_PLATFORM_DIR}graphics/paint/clip_paint_property_node.cc
  #${BLINK_RENDERER_PLATFORM_DIR}graphics/paint/clip_paint_property_node.h
  ${BLINK_RENDERER_PLATFORM_DIR}graphics/paint/cull_rect.cc
  #${BLINK_RENDERER_PLATFORM_DIR}graphics/paint/cull_rect.h
  ${BLINK_RENDERER_PLATFORM_DIR}graphics/paint/display_item.cc
  #${BLINK_RENDERER_PLATFORM_DIR}graphics/paint/display_item.h
  #${BLINK_RENDERER_PLATFORM_DIR}graphics/paint/display_item_cache_skipper.h
  ${BLINK_RENDERER_PLATFORM_DIR}graphics/paint/display_item_client.cc
  #${BLINK_RENDERER_PLATFORM_DIR}graphics/paint/display_item_client.h
  ${BLINK_RENDERER_PLATFORM_DIR}graphics/paint/display_item_list.cc
  #${BLINK_RENDERER_PLATFORM_DIR}graphics/paint/display_item_list.h
  ${BLINK_RENDERER_PLATFORM_DIR}graphics/paint/display_item_raster_invalidator.cc
  #${BLINK_RENDERER_PLATFORM_DIR}graphics/paint/display_item_raster_invalidator.h
  ${BLINK_RENDERER_PLATFORM_DIR}graphics/paint/drawing_display_item.cc
  #${BLINK_RENDERER_PLATFORM_DIR}graphics/paint/drawing_display_item.h
  ${BLINK_RENDERER_PLATFORM_DIR}graphics/paint/drawing_recorder.cc
  #${BLINK_RENDERER_PLATFORM_DIR}graphics/paint/drawing_recorder.h
  ${BLINK_RENDERER_PLATFORM_DIR}graphics/paint/effect_paint_property_node.cc
  #${BLINK_RENDERER_PLATFORM_DIR}graphics/paint/effect_paint_property_node.h
  #${BLINK_RENDERER_PLATFORM_DIR}graphics/paint/float_clip_rect.h
  ${BLINK_RENDERER_PLATFORM_DIR}graphics/paint/foreign_layer_display_item.cc
  #${BLINK_RENDERER_PLATFORM_DIR}graphics/paint/foreign_layer_display_item.h
  ${BLINK_RENDERER_PLATFORM_DIR}graphics/paint/geometry_mapper.cc
  #${BLINK_RENDERER_PLATFORM_DIR}graphics/paint/geometry_mapper.h
  ${BLINK_RENDERER_PLATFORM_DIR}graphics/paint/geometry_mapper_clip_cache.cc
  #${BLINK_RENDERER_PLATFORM_DIR}graphics/paint/geometry_mapper_clip_cache.h
  ${BLINK_RENDERER_PLATFORM_DIR}graphics/paint/geometry_mapper_transform_cache.cc
  #${BLINK_RENDERER_PLATFORM_DIR}graphics/paint/geometry_mapper_transform_cache.h
  ${BLINK_RENDERER_PLATFORM_DIR}graphics/paint/hit_test_data.cc
  #${BLINK_RENDERER_PLATFORM_DIR}graphics/paint/hit_test_data.h
  ${BLINK_RENDERER_PLATFORM_DIR}graphics/paint/hit_test_display_item.cc
  #${BLINK_RENDERER_PLATFORM_DIR}graphics/paint/hit_test_display_item.h
  ${BLINK_RENDERER_PLATFORM_DIR}graphics/paint/paint_artifact.cc
  #${BLINK_RENDERER_PLATFORM_DIR}graphics/paint/paint_artifact.h
  #${BLINK_RENDERER_PLATFORM_DIR}graphics/paint/paint_canvas.h
  ${BLINK_RENDERER_PLATFORM_DIR}graphics/paint/paint_chunk.cc
  #${BLINK_RENDERER_PLATFORM_DIR}graphics/paint/paint_chunk.h
  #${BLINK_RENDERER_PLATFORM_DIR}graphics/paint/paint_chunk_subset.h
  ${BLINK_RENDERER_PLATFORM_DIR}graphics/paint/paint_chunker.cc
  #${BLINK_RENDERER_PLATFORM_DIR}graphics/paint/paint_chunker.h
  ${BLINK_RENDERER_PLATFORM_DIR}graphics/paint/paint_controller.cc
  #${BLINK_RENDERER_PLATFORM_DIR}graphics/paint/paint_controller.h
  ${BLINK_RENDERER_PLATFORM_DIR}graphics/paint/paint_controller_debug_data.cc
  #${BLINK_RENDERER_PLATFORM_DIR}graphics/paint/paint_filter.h
  #${BLINK_RENDERER_PLATFORM_DIR}graphics/paint/paint_flags.h
  ${BLINK_RENDERER_PLATFORM_DIR}graphics/paint/paint_property_node.cc
  #${BLINK_RENDERER_PLATFORM_DIR}graphics/paint/paint_property_node.h
  #${BLINK_RENDERER_PLATFORM_DIR}graphics/paint/paint_record.h
  ${BLINK_RENDERER_PLATFORM_DIR}graphics/paint/paint_record_builder.cc
  #${BLINK_RENDERER_PLATFORM_DIR}graphics/paint/paint_record_builder.h
  #${BLINK_RENDERER_PLATFORM_DIR}graphics/paint/paint_recorder.h
  #${BLINK_RENDERER_PLATFORM_DIR}graphics/paint/paint_shader.h
  ${BLINK_RENDERER_PLATFORM_DIR}graphics/paint/property_tree_state.cc
  #${BLINK_RENDERER_PLATFORM_DIR}graphics/paint/property_tree_state.h
  ${BLINK_RENDERER_PLATFORM_DIR}graphics/paint/raster_invalidation_tracking.cc
  #${BLINK_RENDERER_PLATFORM_DIR}graphics/paint/raster_invalidation_tracking.h
  ${BLINK_RENDERER_PLATFORM_DIR}graphics/paint/raster_invalidator.cc
  #${BLINK_RENDERER_PLATFORM_DIR}graphics/paint/raster_invalidator.h
  #${BLINK_RENDERER_PLATFORM_DIR}graphics/paint/ref_counted_property_tree_state.h
  #${BLINK_RENDERER_PLATFORM_DIR}graphics/paint/scoped_display_item_fragment.h
  #${BLINK_RENDERER_PLATFORM_DIR}graphics/paint/scoped_paint_chunk_properties.h
  ${BLINK_RENDERER_PLATFORM_DIR}graphics/paint/scroll_hit_test_display_item.cc
  #${BLINK_RENDERER_PLATFORM_DIR}graphics/paint/scroll_hit_test_display_item.h
  ${BLINK_RENDERER_PLATFORM_DIR}graphics/paint/scroll_paint_property_node.cc
  #${BLINK_RENDERER_PLATFORM_DIR}graphics/paint/scroll_paint_property_node.h
  #${BLINK_RENDERER_PLATFORM_DIR}graphics/paint/subsequence_recorder.h
  ${BLINK_RENDERER_PLATFORM_DIR}graphics/paint/transform_paint_property_node.cc
  #${BLINK_RENDERER_PLATFORM_DIR}graphics/paint/transform_paint_property_node.h
  ${BLINK_RENDERER_PLATFORM_DIR}graphics/paint_generated_image.cc
  #${BLINK_RENDERER_PLATFORM_DIR}graphics/paint_generated_image.h
  ${BLINK_RENDERER_PLATFORM_DIR}graphics/paint_invalidation_reason.cc
  #${BLINK_RENDERER_PLATFORM_DIR}graphics/paint_invalidation_reason.h
  ${BLINK_RENDERER_PLATFORM_DIR}graphics/paint_record_pattern.cc
  #${BLINK_RENDERER_PLATFORM_DIR}graphics/paint_record_pattern.h
  ${BLINK_RENDERER_PLATFORM_DIR}graphics/paint_worklet_paint_dispatcher.cc
  #${BLINK_RENDERER_PLATFORM_DIR}graphics/paint_worklet_paint_dispatcher.h
  #${BLINK_RENDERER_PLATFORM_DIR}graphics/paint_worklet_painter.h
  ${BLINK_RENDERER_PLATFORM_DIR}graphics/path.cc
  #${BLINK_RENDERER_PLATFORM_DIR}graphics/path.h
  ${BLINK_RENDERER_PLATFORM_DIR}graphics/path_traversal_state.cc
  #${BLINK_RENDERER_PLATFORM_DIR}graphics/path_traversal_state.h
  ${BLINK_RENDERER_PLATFORM_DIR}graphics/pattern.cc
  #${BLINK_RENDERER_PLATFORM_DIR}graphics/pattern.h
  ${BLINK_RENDERER_PLATFORM_DIR}graphics/picture_snapshot.cc
  #${BLINK_RENDERER_PLATFORM_DIR}graphics/picture_snapshot.h
  ${BLINK_RENDERER_PLATFORM_DIR}graphics/placeholder_image.cc
  #${BLINK_RENDERER_PLATFORM_DIR}graphics/placeholder_image.h
  ${BLINK_RENDERER_PLATFORM_DIR}graphics/platform_paint_worklet_layer_painter.cc
  #${BLINK_RENDERER_PLATFORM_DIR}graphics/platform_paint_worklet_layer_painter.h
  ${BLINK_RENDERER_PLATFORM_DIR}graphics/profiling_canvas.cc
  #${BLINK_RENDERER_PLATFORM_DIR}graphics/profiling_canvas.h
  ${BLINK_RENDERER_PLATFORM_DIR}graphics/replaying_canvas.cc
  #${BLINK_RENDERER_PLATFORM_DIR}graphics/replaying_canvas.h
  #${BLINK_RENDERER_PLATFORM_DIR}graphics/scoped_interpolation_quality.h
  #${BLINK_RENDERER_PLATFORM_DIR}graphics/scroll_types.h
  ${BLINK_RENDERER_PLATFORM_DIR}graphics/skia/image_pixel_locker.cc
  #${BLINK_RENDERER_PLATFORM_DIR}graphics/skia/image_pixel_locker.h
  #${BLINK_RENDERER_PLATFORM_DIR}graphics/skia/sk_size_hash.h
  ${BLINK_RENDERER_PLATFORM_DIR}graphics/skia/skia_utils.cc
  #${BLINK_RENDERER_PLATFORM_DIR}graphics/skia/skia_utils.h
  ${BLINK_RENDERER_PLATFORM_DIR}graphics/skia_texture_holder.cc
  #${BLINK_RENDERER_PLATFORM_DIR}graphics/skia_texture_holder.h
  ${BLINK_RENDERER_PLATFORM_DIR}graphics/squashing_disallowed_reasons.cc
  #${BLINK_RENDERER_PLATFORM_DIR}graphics/squashing_disallowed_reasons.h
  ${BLINK_RENDERER_PLATFORM_DIR}graphics/static_bitmap_image.cc
  #${BLINK_RENDERER_PLATFORM_DIR}graphics/static_bitmap_image.h
  ${BLINK_RENDERER_PLATFORM_DIR}graphics/stroke_data.cc
  #${BLINK_RENDERER_PLATFORM_DIR}graphics/stroke_data.h
  ${BLINK_RENDERER_PLATFORM_DIR}graphics/subtree_paint_property_update_reason.cc
  #${BLINK_RENDERER_PLATFORM_DIR}graphics/subtree_paint_property_update_reason.h
  ${BLINK_RENDERER_PLATFORM_DIR}graphics/surface_layer_bridge.cc
  #${BLINK_RENDERER_PLATFORM_DIR}graphics/surface_layer_bridge.h
  #${BLINK_RENDERER_PLATFORM_DIR}graphics/texture_holder.h
  #${BLINK_RENDERER_PLATFORM_DIR}graphics/touch_action.h
  ${BLINK_RENDERER_PLATFORM_DIR}graphics/unaccelerated_static_bitmap_image.cc
  #${BLINK_RENDERER_PLATFORM_DIR}graphics/unaccelerated_static_bitmap_image.h
  ${BLINK_RENDERER_PLATFORM_DIR}graphics/video_frame_resource_provider.cc
  #${BLINK_RENDERER_PLATFORM_DIR}graphics/video_frame_resource_provider.h
  # requires services/ws/public/cpp/gpu/context_provider_command_buffer.h
  ## TODO ## ${BLINK_RENDERER_PLATFORM_DIR}graphics/video_frame_submitter.cc
  #${BLINK_RENDERER_PLATFORM_DIR}graphics/video_frame_submitter.h
  ${BLINK_RENDERER_PLATFORM_DIR}graphics/web_graphics_context_3d_provider_wrapper.cc
  #${BLINK_RENDERER_PLATFORM_DIR}graphics/web_graphics_context_3d_provider_wrapper.h
)

list(APPEND BLINK_RENDERER_PLATFORM_EXPORTED_SOURCES
  ${BLINK_RENDERER_PLATFORM_DIR}exported/file_path_conversion.cc
  ${BLINK_RENDERER_PLATFORM_DIR}exported/interface_registry.cc
  # requires third_party/webrtc/api/media_stream_interface.h
  ${BLINK_RENDERER_PLATFORM_DIR}exported/platform.cc
  ${BLINK_RENDERER_PLATFORM_DIR}exported/service_registry.cc
  ${BLINK_RENDERER_PLATFORM_DIR}exported/url_conversion.cc
  ${BLINK_RENDERER_PLATFORM_DIR}exported/web_audio_bus.cc
  ${BLINK_RENDERER_PLATFORM_DIR}exported/web_audio_device.cc
  ${BLINK_RENDERER_PLATFORM_DIR}exported/web_blob_info.cc
  ${BLINK_RENDERER_PLATFORM_DIR}exported/web_cache.cc
  ${BLINK_RENDERER_PLATFORM_DIR}exported/web_canonical_cookie.cc
  ${BLINK_RENDERER_PLATFORM_DIR}exported/web_coalesced_input_event.cc
  ${BLINK_RENDERER_PLATFORM_DIR}exported/web_content_decryption_module.cc
  ${BLINK_RENDERER_PLATFORM_DIR}exported/web_content_decryption_module_access.cc
  ${BLINK_RENDERER_PLATFORM_DIR}exported/web_content_decryption_module_result.cc
  ${BLINK_RENDERER_PLATFORM_DIR}exported/web_content_decryption_module_session.cc
  ${BLINK_RENDERER_PLATFORM_DIR}exported/web_crypto_algorithm.cc
  ${BLINK_RENDERER_PLATFORM_DIR}exported/web_crypto_key.cc
  ${BLINK_RENDERER_PLATFORM_DIR}exported/web_crypto_key_algorithm.cc
  ${BLINK_RENDERER_PLATFORM_DIR}exported/web_crypto_result.cc
  ${BLINK_RENDERER_PLATFORM_DIR}exported/web_cursor_info.cc
  ${BLINK_RENDERER_PLATFORM_DIR}exported/web_data.cc
  ${BLINK_RENDERER_PLATFORM_DIR}exported/web_encrypted_media_client.cc
  ${BLINK_RENDERER_PLATFORM_DIR}exported/web_encrypted_media_key_information.cc
  ${BLINK_RENDERER_PLATFORM_DIR}exported/web_encrypted_media_request.cc
  ${BLINK_RENDERER_PLATFORM_DIR}exported/web_font.cc
  ${BLINK_RENDERER_PLATFORM_DIR}exported/web_font_description.cc
  ${BLINK_RENDERER_PLATFORM_DIR}exported/web_http_body.cc
  ${BLINK_RENDERER_PLATFORM_DIR}exported/web_http_header_map.cc
  ${BLINK_RENDERER_PLATFORM_DIR}exported/web_http_load_info.cc
  ${BLINK_RENDERER_PLATFORM_DIR}exported/web_image.cc
  ${BLINK_RENDERER_PLATFORM_DIR}exported/web_image_generator.cc
  ${BLINK_RENDERER_PLATFORM_DIR}exported/web_input_event.cc
  ## TODO ##
  ${BLINK_RENDERER_PLATFORM_DIR}exported/web_memory_pressure_listener.cc
  ${BLINK_RENDERER_PLATFORM_DIR}exported/web_mixed_content.cc
  ${BLINK_RENDERER_PLATFORM_DIR}exported/web_network_state_notifier.cc
  ${BLINK_RENDERER_PLATFORM_DIR}exported/web_prerender.cc
  ${BLINK_RENDERER_PLATFORM_DIR}exported/web_prerendering_support.cc
  ${BLINK_RENDERER_PLATFORM_DIR}exported/web_resource_timing_info.cc
  ## TODO ## ${BLINK_RENDERER_PLATFORM_DIR}exported/web_rtc_answer_options.cc
  ## TODO ## ${BLINK_RENDERER_PLATFORM_DIR}exported/web_rtc_ice_candidate.cc
  ## TODO ## ${BLINK_RENDERER_PLATFORM_DIR}exported/web_rtc_offer_options.cc
  ## TODO ## ${BLINK_RENDERER_PLATFORM_DIR}exported/web_rtc_peer_connection_handler_client.cc
  ## TODO ## ${BLINK_RENDERER_PLATFORM_DIR}exported/web_rtc_rtp_receiver.cc
  ## TODO ## ${BLINK_RENDERER_PLATFORM_DIR}exported/web_rtc_rtp_sender.cc
  ## TODO ## ${BLINK_RENDERER_PLATFORM_DIR}exported/web_rtc_rtp_source.cc
  ## TODO ## ${BLINK_RENDERER_PLATFORM_DIR}exported/web_rtc_rtp_transceiver.cc
  ## TODO ## ${BLINK_RENDERER_PLATFORM_DIR}exported/web_rtc_session_description.cc
  ## TODO ## ${BLINK_RENDERER_PLATFORM_DIR}exported/web_rtc_session_description_request.cc
  ## TODO ## ${BLINK_RENDERER_PLATFORM_DIR}exported/web_rtc_stats.cc
  ## TODO ## ${BLINK_RENDERER_PLATFORM_DIR}exported/web_rtc_stats_request.cc
  ## TODO ## ${BLINK_RENDERER_PLATFORM_DIR}exported/web_rtc_stats_response.cc
  ## TODO ## ${BLINK_RENDERER_PLATFORM_DIR}exported/web_rtc_void_request.cc
  ${BLINK_RENDERER_PLATFORM_DIR}exported/web_runtime_features.cc
  ${BLINK_RENDERER_PLATFORM_DIR}exported/web_security_origin.cc
  ${BLINK_RENDERER_PLATFORM_DIR}exported/web_service_worker_request.cc
  ${BLINK_RENDERER_PLATFORM_DIR}exported/web_service_worker_response.cc
  ${BLINK_RENDERER_PLATFORM_DIR}exported/web_service_worker_stream_handle.cc
  ${BLINK_RENDERER_PLATFORM_DIR}exported/web_speech_synthesis_utterance.cc
  ${BLINK_RENDERER_PLATFORM_DIR}exported/web_speech_synthesis_voice.cc
  ${BLINK_RENDERER_PLATFORM_DIR}exported/web_speech_synthesizer_client_impl.cc
  #${BLINK_RENDERER_PLATFORM_DIR}exported/web_speech_synthesizer_client_impl.h
  ${BLINK_RENDERER_PLATFORM_DIR}exported/web_string.cc
  ${BLINK_RENDERER_PLATFORM_DIR}exported/web_surface_layer_bridge.cc
  ${BLINK_RENDERER_PLATFORM_DIR}exported/web_text_run.cc
  ${BLINK_RENDERER_PLATFORM_DIR}exported/web_thread_safe_data.cc
  ${BLINK_RENDERER_PLATFORM_DIR}exported/web_url.cc
  ${BLINK_RENDERER_PLATFORM_DIR}exported/web_url_error.cc
  ${BLINK_RENDERER_PLATFORM_DIR}exported/web_url_load_timing.cc
  ${BLINK_RENDERER_PLATFORM_DIR}exported/web_url_loader_client.cc
  ${BLINK_RENDERER_PLATFORM_DIR}exported/web_url_loader_test_delegate.cc
  ${BLINK_RENDERER_PLATFORM_DIR}exported/web_url_request.cc
  ${BLINK_RENDERER_PLATFORM_DIR}exported/web_url_response.cc
  ${BLINK_RENDERER_PLATFORM_DIR}exported/web_video_frame_submitter.cc
  #${BLINK_RENDERER_PLATFORM_DIR}exported/wrapped_resource_request.h
  #${BLINK_RENDERER_PLATFORM_DIR}exported/wrapped_resource_response.h
)

if(${CMAKE_SYSTEM_NAME} STREQUAL "Linux")
  list(APPEND BLINK_RENDERER_PLATFORM_EXPORTED_SOURCES
    #${BLINK_RENDERER_PLATFORM_DIR}exported/mediastream/media_stream_audio_processor_options.cc
    #${BLINK_RENDERER_PLATFORM_DIR}exported/mediastream/media_stream_audio_source.cc
    #${BLINK_RENDERER_PLATFORM_DIR}exported/mediastream/media_stream_audio_track.cc
    #${BLINK_RENDERER_PLATFORM_DIR}exported/mediastream/web_platform_media_stream_source.cc
    #${BLINK_RENDERER_PLATFORM_DIR}exported/mediastream/web_platform_media_stream_track.cc
    #${BLINK_RENDERER_PLATFORM_DIR}exported/mediastream/webrtc_uma_histograms.cc
    # requires modules/notifications
    ${BLINK_RENDERER_PLATFORM_DIR}exported/notification_data_conversions.cc
    # requires services/service_manager/public/cpp/connector.h
    ## TODO ## web_vector.h:99:42: error: member reference base type 'const unsigned long' is not a structure
    ${BLINK_RENDERER_PLATFORM_DIR}exported/web_drag_data.cc
    ${BLINK_RENDERER_PLATFORM_DIR}exported/web_media_constraints.cc
    ${BLINK_RENDERER_PLATFORM_DIR}exported/web_media_player_client.cc
    ${BLINK_RENDERER_PLATFORM_DIR}exported/web_media_player_encrypted_media_client.cc
    ${BLINK_RENDERER_PLATFORM_DIR}exported/web_media_player_source.cc
    ${BLINK_RENDERER_PLATFORM_DIR}exported/web_media_recorder_handler.cc
    ${BLINK_RENDERER_PLATFORM_DIR}exported/web_media_stream.cc
    ${BLINK_RENDERER_PLATFORM_DIR}exported/web_media_stream_audio_sink.cc
    ${BLINK_RENDERER_PLATFORM_DIR}exported/web_media_stream_source.cc
    ${BLINK_RENDERER_PLATFORM_DIR}exported/web_media_stream_track.cc
  )
endif()

# see https://github.com/chromium/chromium/blob/master/third_party/blink/renderer/platform/BUILD.gn
list(APPEND BLINK_RENDERER_PLATFORM_SCHEDULER_SOURCES
  ${CUR_SRC_DIR}scheduler/common/thread.cc
   #
   # blink_platform_sources("scheduler")
   # see components/scheduling_metrics
   #deps = [
   # "//base",
   # "//cc",
   # "//components/scheduling_metrics",
   # "//device/base/synchronization",
   # "//services/metrics/public/cpp:ukm_builders",
   # "//services/metrics/public/mojom",
   # "//third_party/blink/renderer/platform:make_platform_generated",
   # "//third_party/blink/renderer/platform/wtf",
   # "//v8",
   # ]
   ${CUR_SRC_DIR}scheduler/common/cancelable_closure_holder.cc
   #${CUR_SRC_DIR}scheduler/common/cancelable_closure_holder.h
   ${CUR_SRC_DIR}scheduler/common/cooperative_scheduling_manager.cc
   ## TODO ## ${CUR_SRC_DIR}scheduler/common/dummy_schedulers.cc
   # requires v8::MicrotaskQueue::New
   #${CUR_SRC_DIR}scheduler/common/event_loop.cc
   ${CUR_SRC_DIR}scheduler/common/features.cc
   #${CUR_SRC_DIR}scheduler/common/features.h
   ${CUR_SRC_DIR}scheduler/common/frame_or_worker_scheduler.cc
   ${CUR_SRC_DIR}scheduler/common/idle_helper.cc
   #${CUR_SRC_DIR}scheduler/common/idle_helper.h
   ## TODO ##error: no type named 'State' in 'base::sequence_manager::TaskQueue::TaskTiming'
   ## TODO ##${CUR_SRC_DIR}scheduler/common/metrics_helper.cc
   #${CUR_SRC_DIR}scheduler/common/metrics_helper.h
   ${CUR_SRC_DIR}scheduler/common/pollable_thread_safe_flag.cc
   #${CUR_SRC_DIR}scheduler/common/pollable_thread_safe_flag.h
   ${CUR_SRC_DIR}scheduler/common/post_cancellable_task.cc
   ${CUR_SRC_DIR}scheduler/common/process_state.cc
   #${CUR_SRC_DIR}scheduler/common/process_state.h
   ${CUR_SRC_DIR}scheduler/common/scheduler_helper.cc
   #${CUR_SRC_DIR}scheduler/common/scheduler_helper.h
   ${CUR_SRC_DIR}scheduler/common/scheduling_lifecycle_state.cc
   ${CUR_SRC_DIR}scheduler/common/scheduling_policy.cc
   ${CUR_SRC_DIR}scheduler/common/simple_thread_scheduler.cc
   #${CUR_SRC_DIR}scheduler/common/simple_thread_scheduler.h
   ${CUR_SRC_DIR}scheduler/common/single_thread_idle_task_runner.cc
   #${CUR_SRC_DIR}scheduler/common/single_thread_idle_task_runner.h
   ${CUR_SRC_DIR}scheduler/common/thread_cpu_throttler.cc
   ${CUR_SRC_DIR}scheduler/common/thread_load_tracker.cc
   #${CUR_SRC_DIR}scheduler/common/thread_load_tracker.h
   ${CUR_SRC_DIR}scheduler/common/thread_scheduler.cc
   #${CUR_SRC_DIR}scheduler/common/thread_scheduler_impl.h
   ${CUR_SRC_DIR}scheduler/common/throttling/budget_pool.cc
   #${CUR_SRC_DIR}scheduler/common/throttling/budget_pool.h
   ${CUR_SRC_DIR}scheduler/common/throttling/cpu_time_budget_pool.cc
   #${CUR_SRC_DIR}scheduler/common/throttling/cpu_time_budget_pool.h
   # requires services/service_manager
   ## TODO ##
   ${CUR_SRC_DIR}scheduler/common/throttling/task_queue_throttler.cc
   #${CUR_SRC_DIR}scheduler/common/throttling/task_queue_throttler.h
   ${CUR_SRC_DIR}scheduler/common/throttling/throttled_time_domain.cc
   #${CUR_SRC_DIR}scheduler/common/throttling/throttled_time_domain.h
   ${CUR_SRC_DIR}scheduler/common/throttling/wake_up_budget_pool.cc
   #${CUR_SRC_DIR}scheduler/common/throttling/wake_up_budget_pool.h
   ${CUR_SRC_DIR}scheduler/common/tracing_helper.cc
   #${CUR_SRC_DIR}scheduler/common/tracing_helper.h
   ${CUR_SRC_DIR}scheduler/common/ukm_task_sampler.cc
   #${CUR_SRC_DIR}scheduler/common/ukm_task_sampler.h
   ${CUR_SRC_DIR}scheduler/common/unprioritized_resource_loading_task_runner_handle.cc
   #${CUR_SRC_DIR}scheduler/common/unprioritized_resource_loading_task_runner_handle.h
   ${CUR_SRC_DIR}scheduler/common/web_resource_loading_task_runner_handle.cc
   ${CUR_SRC_DIR}scheduler/common/web_thread_scheduler.cc
   ${CUR_SRC_DIR}scheduler/common/worker_pool.cc
   ${CUR_SRC_DIR}scheduler/main_thread/auto_advancing_virtual_time_domain.cc
   #${CUR_SRC_DIR}scheduler/main_thread/auto_advancing_virtual_time_domain.h
   ${CUR_SRC_DIR}scheduler/main_thread/deadline_task_runner.cc
   #${CUR_SRC_DIR}scheduler/main_thread/deadline_task_runner.h
   ${CUR_SRC_DIR}scheduler/main_thread/frame_origin_type.cc
   #${CUR_SRC_DIR}scheduler/main_thread/frame_origin_type.h
   # requires services/service_manager
   ${CUR_SRC_DIR}scheduler/main_thread/frame_scheduler_impl.cc
   #${CUR_SRC_DIR}scheduler/main_thread/frame_scheduler_impl.h
   ${CUR_SRC_DIR}scheduler/main_thread/frame_status.cc
   ## TODO ##
   ${CUR_SRC_DIR}scheduler/main_thread/frame_task_queue_controller.cc
   #${CUR_SRC_DIR}scheduler/main_thread/frame_task_queue_controller.h
   ${CUR_SRC_DIR}scheduler/main_thread/idle_time_estimator.cc
   #${CUR_SRC_DIR}scheduler/main_thread/idle_time_estimator.h
   ${CUR_SRC_DIR}scheduler/main_thread/main_thread.cc
   #${CUR_SRC_DIR}scheduler/main_thread/main_thread.h
)


if(${CMAKE_SYSTEM_NAME} STREQUAL "Linux")
  list(APPEND BLINK_RENDERER_PLATFORM_SCHEDULER_SOURCES
    ## TODO ## error: no member named 'state' in 'base::sequence_manager::TaskQueue::TaskTiming'
    ## TODO ## ${CUR_SRC_DIR}scheduler/main_thread/main_thread_metrics_helper.cc
    #${CUR_SRC_DIR}scheduler/main_thread/main_thread_metrics_helper.h
    ${CUR_SRC_DIR}scheduler/main_thread/main_thread_scheduler_helper.cc
    ## TODO ## #${CUR_SRC_DIR}scheduler/main_thread/main_thread_scheduler_helper.h
    ${CUR_SRC_DIR}scheduler/main_thread/main_thread_scheduler_impl.cc
    ## TODO ## #${CUR_SRC_DIR}scheduler/main_thread/main_thread_scheduler_impl.h
    ## TODO ## ## TODO ##
    ${CUR_SRC_DIR}scheduler/main_thread/main_thread_task_queue.cc
    #${CUR_SRC_DIR}scheduler/main_thread/main_thread_task_queue.h
    ${CUR_SRC_DIR}scheduler/main_thread/memory_purge_manager.cc
    #${CUR_SRC_DIR}scheduler/main_thread/memory_purge_manager.h
    ${CUR_SRC_DIR}scheduler/main_thread/page_scheduler_impl.cc
    #${CUR_SRC_DIR}scheduler/main_thread/page_scheduler_impl.h
    ${CUR_SRC_DIR}scheduler/main_thread/page_visibility_state.cc
    #${CUR_SRC_DIR}scheduler/main_thread/page_visibility_state.h
    ${CUR_SRC_DIR}scheduler/main_thread/pending_user_input.cc
    #${CUR_SRC_DIR}scheduler/main_thread/pending_user_input.h
    ${CUR_SRC_DIR}scheduler/main_thread/prioritize_compositing_after_input_experiment.cc
    ## TODO ## #${CUR_SRC_DIR}scheduler/main_thread/prioritize_compositing_after_input_experiment.h
    ${CUR_SRC_DIR}scheduler/main_thread/queueing_time_estimator.cc
    ## TODO ## #${CUR_SRC_DIR}scheduler/main_thread/queueing_time_estimator.h
    ${CUR_SRC_DIR}scheduler/main_thread/render_widget_signals.cc
    ## TODO ## #${CUR_SRC_DIR}scheduler/main_thread/render_widget_signals.h
    ${CUR_SRC_DIR}scheduler/main_thread/resource_loading_task_runner_handle_impl.cc
    ## TODO ## #${CUR_SRC_DIR}scheduler/main_thread/resource_loading_task_runner_handle_impl.h
    ${CUR_SRC_DIR}scheduler/main_thread/task_type_names.cc
    ## TODO ## #${CUR_SRC_DIR}scheduler/main_thread/task_type_names.h
    ## TODO ## #${CUR_SRC_DIR}scheduler/main_thread/use_case.h
    ${CUR_SRC_DIR}scheduler/main_thread/user_model.cc
    ## TODO ## #${CUR_SRC_DIR}scheduler/main_thread/user_model.h
    ## TODO ##
    ${CUR_SRC_DIR}scheduler/main_thread/web_render_widget_scheduling_state.cc
    ${CUR_SRC_DIR}scheduler/main_thread/web_scoped_virtual_time_pauser.cc
    #
    #${CUR_SRC_DIR}scheduler/public/aggregated_metric_reporter.h
    #${CUR_SRC_DIR}scheduler/public/cooperative_scheduling_manager.h
    #${CUR_SRC_DIR}scheduler/public/dummy_schedulers.h
    #${CUR_SRC_DIR}scheduler/public/event_loop.h
    #${CUR_SRC_DIR}scheduler/public/frame_or_worker_scheduler.h
    #${CUR_SRC_DIR}scheduler/public/frame_scheduler.h
    #${CUR_SRC_DIR}scheduler/public/frame_status.h
    #${CUR_SRC_DIR}scheduler/public/page_lifecycle_state.h
    #${CUR_SRC_DIR}scheduler/public/page_scheduler.h
    #${CUR_SRC_DIR}scheduler/public/pending_user_input_type.h
    #${CUR_SRC_DIR}scheduler/public/post_cancellable_task.h
    #${CUR_SRC_DIR}scheduler/public/post_cross_thread_task.h
    #${CUR_SRC_DIR}scheduler/public/rail_mode_observer.h
    #${CUR_SRC_DIR}scheduler/public/scheduling_lifecycle_state.h
    #${CUR_SRC_DIR}scheduler/public/scheduling_policy.h
    #${CUR_SRC_DIR}scheduler/public/thread.h
    #${CUR_SRC_DIR}scheduler/public/thread_cpu_throttler.h
    #${CUR_SRC_DIR}scheduler/public/thread_scheduler.h
    #${CUR_SRC_DIR}scheduler/public/worker_pool.h
    #${CUR_SRC_DIR}scheduler/public/worker_scheduler.h
    #
    ## TODO ##error: no type named 'State' in 'base::sequence_manager::TaskQueue::TaskTiming'
    #${CUR_SRC_DIR}scheduler/worker/compositor_metrics_helper.cc
    #${CUR_SRC_DIR}scheduler/worker/compositor_metrics_helper.h
    ${CUR_SRC_DIR}scheduler/worker/compositor_thread.cc
    #${CUR_SRC_DIR}scheduler/worker/compositor_thread.h
    ${CUR_SRC_DIR}scheduler/worker/compositor_thread_scheduler.cc
    #${CUR_SRC_DIR}scheduler/worker/compositor_thread_scheduler.h
    ${CUR_SRC_DIR}scheduler/worker/non_main_thread_scheduler_helper.cc
    #${CUR_SRC_DIR}scheduler/worker/non_main_thread_scheduler_helper.h
    ${CUR_SRC_DIR}scheduler/worker/non_main_thread_scheduler_impl.cc
    #${CUR_SRC_DIR}scheduler/worker/non_main_thread_scheduler_impl.h
    ## TODO ##
    ${CUR_SRC_DIR}scheduler/worker/non_main_thread_task_queue.cc
    #${CUR_SRC_DIR}scheduler/worker/non_main_thread_task_queue.h
    # ## TODO ##error: no type named 'State' in 'base::sequence_manager::TaskQueue::TaskTiming'
    ## TODO ## ${CUR_SRC_DIR}scheduler/worker/worker_metrics_helper.cc
    #${CUR_SRC_DIR}scheduler/worker/worker_metrics_helper.h
    ${CUR_SRC_DIR}scheduler/worker/worker_scheduler.cc
    # requires services/service_manager & loader/fetch/resource_load_scheduler.cc
    ${CUR_SRC_DIR}scheduler/worker/worker_scheduler_proxy.cc
    #${CUR_SRC_DIR}scheduler/worker/worker_scheduler_proxy.h
    ${CUR_SRC_DIR}scheduler/worker/worker_thread.cc
    #${CUR_SRC_DIR}scheduler/worker/worker_thread.h
    ## TODO ##
    ${CUR_SRC_DIR}scheduler/worker/worker_thread_scheduler.cc
    #${CUR_SRC_DIR}scheduler/worker/worker_thread_scheduler.h
  )
endif() # CMAKE_SYSTEM_NAME

list(APPEND BLINK_RENDERER_PLATFORM_NETWORK_SOURCES
  # blink_platform_sources("network")
  # deps = [ "//media", ]
  # TODO: gen/gen_blink_public/third_party/blink/renderer/platform/network/http_names.cc
  # see make_names("http_names")
  ${GEN_COMBINED_DIR}/third_party/blink/renderer/platform/network/http_names.cc
  #
  ${CUR_SRC_DIR}network/content_security_policy_parsers.cc
  #${CUR_SRC_DIR}network/content_security_policy_parsers.h
  ${CUR_SRC_DIR}network/content_security_policy_response_headers.cc
  #${CUR_SRC_DIR}network/content_security_policy_response_headers.h
  ${CUR_SRC_DIR}network/encoded_form_data.cc
  #${CUR_SRC_DIR}network/encoded_form_data.h
  ${CUR_SRC_DIR}network/encoded_form_data_mojom_traits.cc
  #${CUR_SRC_DIR}network/encoded_form_data_mojom_traits.h
  ${CUR_SRC_DIR}network/form_data_encoder.cc
  #${CUR_SRC_DIR}network/form_data_encoder.h
  ${CUR_SRC_DIR}network/header_field_tokenizer.cc
  #${CUR_SRC_DIR}network/header_field_tokenizer.h
  ${CUR_SRC_DIR}network/http_header_map.cc
  #${CUR_SRC_DIR}network/http_header_map.h
  ${CUR_SRC_DIR}network/http_parsers.cc
  #${CUR_SRC_DIR}network/http_parsers.h
  ${CUR_SRC_DIR}network/http_request_headers_mojom_traits.cc
  #${CUR_SRC_DIR}network/http_request_headers_mojom_traits.h
  ${CUR_SRC_DIR}network/mime/content_type.cc
  #${CUR_SRC_DIR}network/mime/content_type.h
  ${CUR_SRC_DIR}network/mime/mime_type_from_url.cc
  #${CUR_SRC_DIR}network/mime/mime_type_from_url.h
  ${CUR_SRC_DIR}network/mime/mime_type_registry.cc
  #${CUR_SRC_DIR}network/mime/mime_type_registry.h
  #${CUR_SRC_DIR}network/network_log.h
  ${CUR_SRC_DIR}network/network_state_notifier.cc
  #${CUR_SRC_DIR}network/network_state_notifier.h
  ${CUR_SRC_DIR}network/network_utils.cc
  #${CUR_SRC_DIR}network/network_utils.h
  ${CUR_SRC_DIR}network/parsed_content_disposition.cc
  #${CUR_SRC_DIR}network/parsed_content_disposition.h
  ${CUR_SRC_DIR}network/parsed_content_header_field_parameters.cc
  #${CUR_SRC_DIR}network/parsed_content_header_field_parameters.h
  ${CUR_SRC_DIR}network/parsed_content_type.cc
  #${CUR_SRC_DIR}network/parsed_content_type.h
  ${CUR_SRC_DIR}network/server_timing_header.cc
  #${CUR_SRC_DIR}network/server_timing_header.h
  #${CUR_SRC_DIR}network/wrapped_data_pipe_getter.h
)

list(APPEND BLINK_RENDERER_HEAP_SOURCES
  # blink_platform_sources("heap")
  # uses v8
  #
  # third_party/blink/renderer/platform/heap/heap_buildflags.h
  # BLINK_HEAP_VERIFICATION
  ${CUR_SRC_DIR}heap/address_cache.cc
  #${CUR_SRC_DIR}heap/address_cache.h
  #${CUR_SRC_DIR}heap/atomic_entry_flag.h
  ${CUR_SRC_DIR}heap/blink_gc.cc
  #${CUR_SRC_DIR}heap/blink_gc.h
  ${CUR_SRC_DIR}heap/blink_gc_memory_dump_provider.cc
  #${CUR_SRC_DIR}heap/blink_gc_memory_dump_provider.h
  #${CUR_SRC_DIR}heap/finalizer_traits.h
  #${CUR_SRC_DIR}heap/garbage_collected.h
  ${CUR_SRC_DIR}heap/gc_info.cc
  #${CUR_SRC_DIR}heap/gc_info.h
  #${CUR_SRC_DIR}heap/gc_task_runner.h
  #${CUR_SRC_DIR}heap/handle.h
  ${CUR_SRC_DIR}heap/heap.cc
  #${CUR_SRC_DIR}heap/heap.h
  ${CUR_SRC_DIR}heap/heap_allocator.cc
  #${CUR_SRC_DIR}heap/heap_allocator.h
  ${CUR_SRC_DIR}heap/heap_compact.cc
  #${CUR_SRC_DIR}heap/heap_compact.h
  #${CUR_SRC_DIR}heap/heap_linked_stack.h
  ${CUR_SRC_DIR}heap/heap_page.cc
  #${CUR_SRC_DIR}heap/heap_page.h
  ${CUR_SRC_DIR}heap/heap_stats_collector.cc
  #${CUR_SRC_DIR}heap/heap_stats_collector.h
  #${CUR_SRC_DIR}heap/heap_traits.h
  #${CUR_SRC_DIR}heap/marking_verifier.h
  ${CUR_SRC_DIR}heap/marking_visitor.cc
  #${CUR_SRC_DIR}heap/marking_visitor.h
  #${CUR_SRC_DIR}heap/member.h
  #${CUR_SRC_DIR}heap/name_traits.h
  ${CUR_SRC_DIR}heap/page_memory.cc
  #${CUR_SRC_DIR}heap/page_memory.h
  ${CUR_SRC_DIR}heap/page_pool.cc
  #${CUR_SRC_DIR}heap/page_pool.h
  #${CUR_SRC_DIR}heap/persistent.h
  ${CUR_SRC_DIR}heap/persistent_node.cc
  #${CUR_SRC_DIR}heap/persistent_node.h
  ${CUR_SRC_DIR}heap/process_heap.cc
  #${CUR_SRC_DIR}heap/process_heap.h
  #${CUR_SRC_DIR}heap/self_keep_alive.h
  ${CUR_SRC_DIR}heap/thread_state.cc
  #${CUR_SRC_DIR}heap/thread_state.h
  #${CUR_SRC_DIR}heap/thread_state_scopes.h
  #${CUR_SRC_DIR}heap/threading_traits.h
  #${CUR_SRC_DIR}heap/trace_traits.h
  ${CUR_SRC_DIR}heap/unified_heap_controller.cc
  #${CUR_SRC_DIR}heap/unified_heap_controller.h
  ${CUR_SRC_DIR}heap/unified_heap_marking_visitor.cc
  #${CUR_SRC_DIR}heap/unified_heap_marking_visitor.h
  #${CUR_SRC_DIR}heap/visitor.h
  #${CUR_SRC_DIR}heap/worklist.h
)

list(APPEND BLINK_RENDERER_PLATFORM_BLOB_SOURCES
  # blink_platform_sources("blob")
  # see third_party/blink/public/mojom/blob/blob.mojom-blink.h
  #
  ${CUR_SRC_DIR}blob/blob_bytes_provider.cc
  #${CUR_SRC_DIR}blob/blob_bytes_provider.h
  ${CUR_SRC_DIR}blob/blob_data.cc
  #${CUR_SRC_DIR}blob/blob_data.h
  ${CUR_SRC_DIR}blob/blob_registry.cc
  #${CUR_SRC_DIR}blob/blob_registry.h
  ${CUR_SRC_DIR}blob/blob_url.cc
  #${CUR_SRC_DIR}blob/blob_url.h
  ${CUR_SRC_DIR}blob/serialized_blob_struct_traits.cc
  #${CUR_SRC_DIR}blob/serialized_blob_struct_traits.h
  #
)

list(APPEND BLINK_RENDERER_PLATFORM_TRANSFORMS_SOURCES
  ${BLINK_RENDERER_PLATFORM_DIR}transforms/affine_transform.cc
  #${BLINK_RENDERER_PLATFORM_DIR}transforms/affine_transform.h
  #${BLINK_RENDERER_PLATFORM_DIR}transforms/identity_transform_operation.h
  ${BLINK_RENDERER_PLATFORM_DIR}transforms/interpolated_transform_operation.cc
  #${BLINK_RENDERER_PLATFORM_DIR}transforms/interpolated_transform_operation.h
  ${BLINK_RENDERER_PLATFORM_DIR}transforms/matrix_3d_transform_operation.cc
  #${BLINK_RENDERER_PLATFORM_DIR}transforms/matrix_3d_transform_operation.h
  ${BLINK_RENDERER_PLATFORM_DIR}transforms/matrix_transform_operation.cc
  #${BLINK_RENDERER_PLATFORM_DIR}transforms/matrix_transform_operation.h
  ${BLINK_RENDERER_PLATFORM_DIR}transforms/perspective_transform_operation.cc
  #${BLINK_RENDERER_PLATFORM_DIR}transforms/perspective_transform_operation.h
  ${BLINK_RENDERER_PLATFORM_DIR}transforms/rotate_transform_operation.cc
  #${BLINK_RENDERER_PLATFORM_DIR}transforms/rotate_transform_operation.h
  ${BLINK_RENDERER_PLATFORM_DIR}transforms/rotation.cc
  #${BLINK_RENDERER_PLATFORM_DIR}transforms/rotation.h
  ${BLINK_RENDERER_PLATFORM_DIR}transforms/scale_transform_operation.cc
  #${BLINK_RENDERER_PLATFORM_DIR}transforms/scale_transform_operation.h
  ${BLINK_RENDERER_PLATFORM_DIR}transforms/skew_transform_operation.cc
  #${BLINK_RENDERER_PLATFORM_DIR}transforms/skew_transform_operation.h
  ${BLINK_RENDERER_PLATFORM_DIR}transforms/transform_operations.cc
  #${BLINK_RENDERER_PLATFORM_DIR}transforms/transform_operations.h
  ${BLINK_RENDERER_PLATFORM_DIR}transforms/transformation_matrix.cc
  #${BLINK_RENDERER_PLATFORM_DIR}transforms/transformation_matrix.h
  ${BLINK_RENDERER_PLATFORM_DIR}transforms/translate_transform_operation.cc
  #${BLINK_RENDERER_PLATFORM_DIR}transforms/translate_transform_operation.h
)

list(APPEND BLINK_RENDERER_PLATFORM_JSON_SOURCES
  ${BLINK_RENDERER_PLATFORM_DIR}json/json_parser.cc
  #${BLINK_RENDERER_PLATFORM_DIR}json/json_parser.h
  ${BLINK_RENDERER_PLATFORM_DIR}json/json_values.cc
  #${BLINK_RENDERER_PLATFORM_DIR}json/json_values.h
)

list(APPEND BLINK_RENDERER_PLATFORM_MHTML_SOURCES
  ${BLINK_RENDERER_PLATFORM_DIR}mhtml/archive_resource.cc
  #${BLINK_RENDERER_PLATFORM_DIR}mhtml/archive_resource.h
  ${BLINK_RENDERER_PLATFORM_DIR}mhtml/mhtml_archive.cc
  #${BLINK_RENDERER_PLATFORM_DIR}mhtml/mhtml_archive.h
  ${BLINK_RENDERER_PLATFORM_DIR}mhtml/mhtml_parser.cc
  #${BLINK_RENDERER_PLATFORM_DIR}mhtml/mhtml_parser.h
  #${BLINK_RENDERER_PLATFORM_DIR}mhtml/serialized_resource.h
  ${BLINK_RENDERER_PLATFORM_DIR}mhtml/shared_buffer_chunk_reader.cc
  #${BLINK_RENDERER_PLATFORM_DIR}mhtml/shared_buffer_chunk_reader.h
)

list(APPEND BLINK_RENDERER_PLATFORM_MOJO_SOURCES
  #${BLINK_RENDERER_PLATFORM_DIR}mojo/big_string_mojom_traits.h
  ${BLINK_RENDERER_PLATFORM_DIR}mojo/bluetooth_struct_traits.cc
  #${BLINK_RENDERER_PLATFORM_DIR}mojo/bluetooth_struct_traits.h
  ${BLINK_RENDERER_PLATFORM_DIR}mojo/canonical_cookie_mojom_traits.cc
  #${BLINK_RENDERER_PLATFORM_DIR}mojo/canonical_cookie_mojom_traits.h
  #${BLINK_RENDERER_PLATFORM_DIR}mojo/fetch_api_request_headers_mojom_traits.h
  ${BLINK_RENDERER_PLATFORM_DIR}mojo/interface_invalidator.cc
  #${BLINK_RENDERER_PLATFORM_DIR}mojo/interface_invalidator.h
  #${BLINK_RENDERER_PLATFORM_DIR}mojo/mojo_helper.h
  #${BLINK_RENDERER_PLATFORM_DIR}mojo/revocable_binding.h
  #${BLINK_RENDERER_PLATFORM_DIR}mojo/revocable_interface_ptr.h
  #${BLINK_RENDERER_PLATFORM_DIR}mojo/revocable_strong_binding.h
  ${BLINK_RENDERER_PLATFORM_DIR}mojo/string16_mojom_traits.cc
  #${BLINK_RENDERER_PLATFORM_DIR}mojo/string16_mojom_traits.h
)

list(APPEND BLINK_RENDERER_PLATFORM_ROOT_SOURCES
    ${BLINK_RENDERER_PLATFORM_DIR}web_gesture_event.cc
    ${BLINK_RENDERER_PLATFORM_DIR}web_icon_sizes_parser.cc
    ${BLINK_RENDERER_PLATFORM_DIR}web_mouse_event.cc
    ${BLINK_RENDERER_PLATFORM_DIR}web_mouse_wheel_event.cc
    ${BLINK_RENDERER_PLATFORM_DIR}web_pointer_event.cc
    ## TODO ##${BLINK_RENDERER_PLATFORM_DIR}web_test_support.cc
    #${BLINK_RENDERER_PLATFORM_DIR}web_test_support.h
    ${BLINK_RENDERER_PLATFORM_DIR}web_text_input_info.cc
    ${BLINK_RENDERER_PLATFORM_DIR}web_thread_supporting_gc.cc
    #${BLINK_RENDERER_PLATFORM_DIR}web_thread_supporting_gc.h
    ${BLINK_RENDERER_PLATFORM_DIR}web_thread_type.cc
    ${BLINK_RENDERER_PLATFORM_DIR}web_touch_event.cc
  #
  #${BLINK_RENDERER_PLATFORM_DIR}content_decryption_module_result.h
  #${BLINK_RENDERER_PLATFORM_DIR}cpu/mips/common_macros_msa.h
  ${BLINK_RENDERER_PLATFORM_DIR}cross_thread_copier.cc
  #${BLINK_RENDERER_PLATFORM_DIR}cross_thread_copier.h
  #${BLINK_RENDERER_PLATFORM_DIR}cross_thread_functional.h
  ${BLINK_RENDERER_PLATFORM_DIR}crypto.cc
  #${BLINK_RENDERER_PLATFORM_DIR}crypto.h
  #${BLINK_RENDERER_PLATFORM_DIR}crypto_result.h
  ${BLINK_RENDERER_PLATFORM_DIR}cursor.cc
  #${BLINK_RENDERER_PLATFORM_DIR}cursor.h
  ${BLINK_RENDERER_PLATFORM_DIR}data_resource_helper.cc
  #${BLINK_RENDERER_PLATFORM_DIR}data_resource_helper.h
  ${BLINK_RENDERER_PLATFORM_DIR}date_components.cc
  #${BLINK_RENDERER_PLATFORM_DIR}date_components.h
  ${BLINK_RENDERER_PLATFORM_DIR}file_metadata.cc
  #${BLINK_RENDERER_PLATFORM_DIR}file_metadata.h
  ${BLINK_RENDERER_PLATFORM_DIR}histogram.cc
  #${BLINK_RENDERER_PLATFORM_DIR}histogram.h
  ${BLINK_RENDERER_PLATFORM_DIR}instance_counters.cc
  #${BLINK_RENDERER_PLATFORM_DIR}instance_counters.h
  ${BLINK_RENDERER_PLATFORM_DIR}instance_counters_memory_dump_provider.cc
  #${BLINK_RENDERER_PLATFORM_DIR}instance_counters_memory_dump_provider.h
  #${BLINK_RENDERER_PLATFORM_DIR}keyboard_codes.h
  ${BLINK_RENDERER_PLATFORM_DIR}language.cc
  #${BLINK_RENDERER_PLATFORM_DIR}language.h
  #${BLINK_RENDERER_PLATFORM_DIR}lifecycle_notifier.h
  #${BLINK_RENDERER_PLATFORM_DIR}lifecycle_observer.h
  ${BLINK_RENDERER_PLATFORM_DIR}link_hash.cc
  #${BLINK_RENDERER_PLATFORM_DIR}link_hash.h
  ${BLINK_RENDERER_PLATFORM_DIR}prerender.cc
  #${BLINK_RENDERER_PLATFORM_DIR}prerender.h
  #${BLINK_RENDERER_PLATFORM_DIR}prerender_client.h
  #${BLINK_RENDERER_PLATFORM_DIR}resolution_units.h
  ${BLINK_RENDERER_PLATFORM_DIR}shared_buffer.cc
  #${BLINK_RENDERER_PLATFORM_DIR}shared_buffer.h
  ${BLINK_RENDERER_PLATFORM_DIR}supplementable.cc
  #${BLINK_RENDERER_PLATFORM_DIR}supplementable.h
  ${BLINK_RENDERER_PLATFORM_DIR}timer.cc
  #${BLINK_RENDERER_PLATFORM_DIR}timer.h
  ${BLINK_RENDERER_PLATFORM_DIR}uuid.cc
  #${BLINK_RENDERER_PLATFORM_DIR}uuid.h
  ## TODO ##
  ${BLINK_RENDERER_PLATFORM_DIR}memory_pressure_listener.cc
  #${BLINK_RENDERER_PLATFORM_DIR}memory_pressure_listener.h
  ${BLINK_RENDERER_PLATFORM_DIR}partition_alloc_memory_dump_provider.cc
  #${BLINK_RENDERER_PLATFORM_DIR}partition_alloc_memory_dump_provider.h
)

list(APPEND BLINK_RENDERER_PLATFORM_WEBORIGIN_SOURCES
  ${BLINK_RENDERER_PLATFORM_DIR}weborigin/known_ports.cc
  #${BLINK_RENDERER_PLATFORM_DIR}weborigin/known_ports.h
  ${BLINK_RENDERER_PLATFORM_DIR}weborigin/kurl.cc
  #${BLINK_RENDERER_PLATFORM_DIR}weborigin/kurl.h
  #${BLINK_RENDERER_PLATFORM_DIR}weborigin/kurl_hash.h
  ${BLINK_RENDERER_PLATFORM_DIR}weborigin/origin_access_entry.cc
  #${BLINK_RENDERER_PLATFORM_DIR}weborigin/origin_access_entry.h
  #${BLINK_RENDERER_PLATFORM_DIR}weborigin/referrer.h
  ${BLINK_RENDERER_PLATFORM_DIR}weborigin/scheme_registry.cc
  #${BLINK_RENDERER_PLATFORM_DIR}weborigin/scheme_registry.h
  ${BLINK_RENDERER_PLATFORM_DIR}weborigin/security_origin.cc
  #${BLINK_RENDERER_PLATFORM_DIR}weborigin/security_origin.h
  #${BLINK_RENDERER_PLATFORM_DIR}weborigin/security_origin_hash.h
  ${BLINK_RENDERER_PLATFORM_DIR}weborigin/security_policy.cc
  #${BLINK_RENDERER_PLATFORM_DIR}weborigin/security_policy.h
  #${BLINK_RENDERER_PLATFORM_DIR}weborigin/security_violation_reporting_policy.h
  #${BLINK_RENDERER_PLATFORM_DIR}weborigin/url_security_origin_map.h
)

list(APPEND BLINK_RENDERER_PLATFORM_LOADER_SOURCES
   #
   # platform/loader/
   # this directory will be removed once CORS support is moved to
   # //services/network
   # # see third_party/blink/renderer/platform/network/http_names.h
   #
   ## TODO ## ${CUR_SRC_DIR}loader/allowed_by_nosniff.cc
   ## TODO ## #${CUR_SRC_DIR}loader/allowed_by_nosniff.h
   ## TODO ## ${CUR_SRC_DIR}loader/cors/cors.cc
   ## TODO ## #${CUR_SRC_DIR}loader/cors/cors.h
   ## TODO ## ${CUR_SRC_DIR}loader/cors/cors_error_string.cc
   ## TODO ## #${CUR_SRC_DIR}loader/cors/cors_error_string.h
   ## TODO ## ${CUR_SRC_DIR}loader/fetch/buffering_bytes_consumer.cc
   ## TODO ## #${CUR_SRC_DIR}loader/fetch/buffering_bytes_consumer.h
   ## TODO ## ${CUR_SRC_DIR}loader/fetch/bytes_consumer.cc
   ## TODO ## #${CUR_SRC_DIR}loader/fetch/bytes_consumer.h
   ## TODO ## ${CUR_SRC_DIR}loader/fetch/cached_metadata.cc
   ## TODO ## #${CUR_SRC_DIR}loader/fetch/cached_metadata.h
   ## TODO ## ${CUR_SRC_DIR}loader/fetch/cached_metadata_handler.cc
   ## TODO ## #${CUR_SRC_DIR}loader/fetch/cached_metadata_handler.h
   ## TODO ## ${CUR_SRC_DIR}loader/fetch/client_hints_preferences.cc
   ## TODO ## #${CUR_SRC_DIR}loader/fetch/client_hints_preferences.h
   ## TODO ## #${CUR_SRC_DIR}loader/fetch/console_logger.h
   ## TODO ## #${CUR_SRC_DIR}loader/fetch/cross_origin_attribute_value.h
   ## TODO ## ${CUR_SRC_DIR}loader/fetch/data_pipe_bytes_consumer.cc
   ## TODO ## #${CUR_SRC_DIR}loader/fetch/data_pipe_bytes_consumer.h
   ## TODO ## #${CUR_SRC_DIR}loader/fetch/fetch_client_settings_object.h
   ## TODO ## ${CUR_SRC_DIR}loader/fetch/fetch_client_settings_object_snapshot.cc
   ## TODO ## #${CUR_SRC_DIR}loader/fetch/fetch_client_settings_object_snapshot.h
   ## TODO ## ${CUR_SRC_DIR}loader/fetch/fetch_context.cc
   ## TODO ## #${CUR_SRC_DIR}loader/fetch/fetch_context.h
   ## TODO ## #${CUR_SRC_DIR}loader/fetch/fetch_initiator_info.h
   ## TODO ## ${CUR_SRC_DIR}loader/fetch/fetch_parameters.cc
   ## TODO ## #${CUR_SRC_DIR}loader/fetch/fetch_parameters.h
   ## TODO ## ${CUR_SRC_DIR}loader/fetch/fetch_utils.cc
   ## TODO ## #${CUR_SRC_DIR}loader/fetch/fetch_utils.h
   ## TODO ## ${CUR_SRC_DIR}loader/fetch/https_state.cc
   ## TODO ## #${CUR_SRC_DIR}loader/fetch/https_state.h
   ## TODO ## ${CUR_SRC_DIR}loader/fetch/integrity_metadata.cc
   ## TODO ## #${CUR_SRC_DIR}loader/fetch/integrity_metadata.h
   ## TODO ## ${CUR_SRC_DIR}loader/fetch/memory_cache.cc
   ## TODO ## #${CUR_SRC_DIR}loader/fetch/memory_cache.h
   ## TODO ## ${CUR_SRC_DIR}loader/fetch/null_resource_fetcher_properties.cc
   ## TODO ## #${CUR_SRC_DIR}loader/fetch/null_resource_fetcher_properties.h
   ## TODO ## #${CUR_SRC_DIR}loader/fetch/preload_key.h
   ## TODO ## ${CUR_SRC_DIR}loader/fetch/raw_resource.cc
   ## TODO ## #${CUR_SRC_DIR}loader/fetch/raw_resource.h
   ## TODO ## ${CUR_SRC_DIR}loader/fetch/resource.cc
   ## TODO ## #${CUR_SRC_DIR}loader/fetch/resource.h
   ## TODO ## ${CUR_SRC_DIR}loader/fetch/resource_client.cc
   ## TODO ## #${CUR_SRC_DIR}loader/fetch/resource_client.h
   ## TODO ## #${CUR_SRC_DIR}loader/fetch/resource_client_walker.h
   ## TODO ## ${CUR_SRC_DIR}loader/fetch/resource_error.cc
   ## TODO ## #${CUR_SRC_DIR}loader/fetch/resource_error.h
   ## TODO ## ${CUR_SRC_DIR}loader/fetch/resource_fetcher.cc
   ## TODO ## #${CUR_SRC_DIR}loader/fetch/resource_fetcher.h
   ## TODO ## #${CUR_SRC_DIR}loader/fetch/resource_fetcher_properties.h
   ## TODO ## #${CUR_SRC_DIR}loader/fetch/resource_finish_observer.h
   ## TODO ## #${CUR_SRC_DIR}loader/fetch/resource_load_info.h
   ## TODO ## #${CUR_SRC_DIR}loader/fetch/resource_load_observer.h
   ## TODO ## #${CUR_SRC_DIR}loader/fetch/resource_load_priority.h
   ## TODO ## ${CUR_SRC_DIR}loader/fetch/resource_load_scheduler.cc
   ## TODO ## #${CUR_SRC_DIR}loader/fetch/resource_load_scheduler.h
   ## TODO ## ${CUR_SRC_DIR}loader/fetch/resource_load_timing.cc
   ## TODO ## #${CUR_SRC_DIR}loader/fetch/resource_load_timing.h
   ## TODO ## ${CUR_SRC_DIR}loader/fetch/resource_loader.cc
   ## TODO ## #${CUR_SRC_DIR}loader/fetch/resource_loader.h
   ## TODO ## #${CUR_SRC_DIR}loader/fetch/resource_loader_options.h
   ## TODO ## #${CUR_SRC_DIR}loader/fetch/resource_loading_log.h
   ## TODO ## #${CUR_SRC_DIR}loader/fetch/resource_priority.h
   ## TODO ## ${CUR_SRC_DIR}loader/fetch/resource_request.cc
   ## TODO ## #${CUR_SRC_DIR}loader/fetch/resource_request.h
   ## TODO ## ${CUR_SRC_DIR}loader/fetch/resource_response.cc
   ## TODO ## #${CUR_SRC_DIR}loader/fetch/resource_response.h
   ## TODO ## #${CUR_SRC_DIR}loader/fetch/resource_status.h
   ## TODO ## ${CUR_SRC_DIR}loader/fetch/resource_timing_info.cc
   ## TODO ## #${CUR_SRC_DIR}loader/fetch/resource_timing_info.h
   ## TODO ## ${CUR_SRC_DIR}loader/fetch/response_body_loader.cc
   ## TODO ## #${CUR_SRC_DIR}loader/fetch/response_body_loader.h
   ## TODO ## #${CUR_SRC_DIR}loader/fetch/response_body_loader_client.h
   ## TODO ## ${CUR_SRC_DIR}loader/fetch/script_cached_metadata_handler.cc
   ## TODO ## #${CUR_SRC_DIR}loader/fetch/script_cached_metadata_handler.h
   ## TODO ## ${CUR_SRC_DIR}loader/fetch/script_fetch_options.cc
   ## TODO ## #${CUR_SRC_DIR}loader/fetch/script_fetch_options.h
   ## TODO ## ${CUR_SRC_DIR}loader/fetch/shared_buffer_bytes_consumer.cc
   ## TODO ## #${CUR_SRC_DIR}loader/fetch/shared_buffer_bytes_consumer.h
   ## TODO ## ${CUR_SRC_DIR}loader/fetch/source_keyed_cached_metadata_handler.cc
   ## TODO ## #${CUR_SRC_DIR}loader/fetch/source_keyed_cached_metadata_handler.h
   ## TODO ## ${CUR_SRC_DIR}loader/fetch/stale_revalidation_resource_client.cc
   ## TODO ## #${CUR_SRC_DIR}loader/fetch/stale_revalidation_resource_client.h
   ## TODO ## ${CUR_SRC_DIR}loader/fetch/text_resource_decoder_options.cc
   ## TODO ## #${CUR_SRC_DIR}loader/fetch/text_resource_decoder_options.h
   ## TODO ## ${CUR_SRC_DIR}loader/fetch/unique_identifier.cc
   ## TODO ## #${CUR_SRC_DIR}loader/fetch/unique_identifier.h
   ## TODO ## #${CUR_SRC_DIR}loader/fetch/worker_resource_timing_notifier.h
   ## TODO ## ${CUR_SRC_DIR}loader/ftp_directory_listing.cc
   ## TODO ## #${CUR_SRC_DIR}loader/ftp_directory_listing.h
   ## TODO ## ${CUR_SRC_DIR}loader/link_header.cc
   ## TODO ## #${CUR_SRC_DIR}loader/link_header.h
   ## TODO ## #${CUR_SRC_DIR}loader/mixed_content_autoupgrade_status.h
   ## TODO ## ${CUR_SRC_DIR}loader/static_data_navigation_body_loader.cc
   ## TODO ## #${CUR_SRC_DIR}loader/static_data_navigation_body_loader.h
   ## TODO ## ${CUR_SRC_DIR}loader/subresource_integrity.cc
   ## TODO ## #${CUR_SRC_DIR}loader/subresource_integrity.h
   #
)

list(APPEND BLINK_RENDERER_PLATFORM_IMAGE_SOURCES
  ${BLINK_RENDERER_PLATFORM_DIR}image-decoders/bmp/bmp_image_decoder.cc
  #${BLINK_RENDERER_PLATFORM_DIR}image-decoders/bmp/bmp_image_decoder.h
  ${BLINK_RENDERER_PLATFORM_DIR}image-decoders/bmp/bmp_image_reader.cc
  #${BLINK_RENDERER_PLATFORM_DIR}image-decoders/bmp/bmp_image_reader.h
  ${BLINK_RENDERER_PLATFORM_DIR}image-decoders/fast_shared_buffer_reader.cc
  #${BLINK_RENDERER_PLATFORM_DIR}image-decoders/fast_shared_buffer_reader.h
  ${BLINK_RENDERER_PLATFORM_DIR}image-decoders/gif/gif_image_decoder.cc
  #${BLINK_RENDERER_PLATFORM_DIR}image-decoders/gif/gif_image_decoder.h
  ${BLINK_RENDERER_PLATFORM_DIR}image-decoders/ico/ico_image_decoder.cc
  #${BLINK_RENDERER_PLATFORM_DIR}image-decoders/ico/ico_image_decoder.h
  #${BLINK_RENDERER_PLATFORM_DIR}image-decoders/image_animation.h
  ${BLINK_RENDERER_PLATFORM_DIR}image-decoders/image_decoder.cc
  #${BLINK_RENDERER_PLATFORM_DIR}image-decoders/image_decoder.h
  ${BLINK_RENDERER_PLATFORM_DIR}image-decoders/image_frame.cc
  #${BLINK_RENDERER_PLATFORM_DIR}image-decoders/image_frame.h
  ${BLINK_RENDERER_PLATFORM_DIR}image-decoders/jpeg/jpeg_image_decoder.cc
  #${BLINK_RENDERER_PLATFORM_DIR}image-decoders/jpeg/jpeg_image_decoder.h
  ${BLINK_RENDERER_PLATFORM_DIR}image-decoders/png/png_image_decoder.cc
  #${BLINK_RENDERER_PLATFORM_DIR}image-decoders/png/png_image_decoder.h
  ${BLINK_RENDERER_PLATFORM_DIR}image-decoders/png/png_image_reader.cc
  #${BLINK_RENDERER_PLATFORM_DIR}image-decoders/png/png_image_reader.h
  ${BLINK_RENDERER_PLATFORM_DIR}image-decoders/segment_reader.cc
  #${BLINK_RENDERER_PLATFORM_DIR}image-decoders/segment_reader.h
  ${BLINK_RENDERER_PLATFORM_DIR}image-decoders/segment_stream.cc
  #${BLINK_RENDERER_PLATFORM_DIR}image-decoders/segment_stream.h
  ${BLINK_RENDERER_PLATFORM_DIR}image-decoders/webp/webp_image_decoder.cc
  #${BLINK_RENDERER_PLATFORM_DIR}image-decoders/webp/webp_image_decoder.h
  ${BLINK_RENDERER_PLATFORM_DIR}image-encoders/image_encoder.cc
  #${BLINK_RENDERER_PLATFORM_DIR}image-encoders/image_encoder.h
  ${BLINK_RENDERER_PLATFORM_DIR}image-encoders/image_encoder_utils.cc
  #${BLINK_RENDERER_PLATFORM_DIR}image-encoders/image_encoder_utils.h
)

list(APPEND BLINK_RENDERER_PLATFORM_MAC_SOURCES
  #${BLINK_RENDERER_PLATFORM_DIR}mac/block_exceptions.h
  ## TODO ##   # TODO #${BLINK_RENDERER_PLATFORM_DIR}mac/block_exceptions.mm",
  ## TODO ##   #${BLINK_RENDERER_PLATFORM_DIR}mac/color_mac.h
  ## TODO ##   # TODO #${BLINK_RENDERER_PLATFORM_DIR}mac/color_mac.mm",
  ## TODO ##   #${BLINK_RENDERER_PLATFORM_DIR}mac/graphics_context_canvas.h
  ## TODO ##   # TODO #${BLINK_RENDERER_PLATFORM_DIR}mac/graphics_context_canvas.mm",
  ## TODO ##   #${BLINK_RENDERER_PLATFORM_DIR}mac/local_current_graphics_context.h
  ## TODO ##   # TODO #${BLINK_RENDERER_PLATFORM_DIR}mac/local_current_graphics_context.mm",
  ## TODO ##   #${BLINK_RENDERER_PLATFORM_DIR}mac/web_core_ns_cell_extras.h
  ## TODO ##   # TODO #${BLINK_RENDERER_PLATFORM_DIR}mac/web_core_ns_cell_extras.mm",
)

list(APPEND BLINK_RENDERER_PLATFORM_MEDIASTREAM_SOURCES
  ## TODO ##   ## TODO ## ${BLINK_RENDERER_PLATFORM_DIR}mediastream/media_stream_center.cc
  ## TODO ##   ## TODO ## #${BLINK_RENDERER_PLATFORM_DIR}mediastream/media_stream_center.h
  ## TODO ##   ## TODO ## ${BLINK_RENDERER_PLATFORM_DIR}mediastream/media_stream_component.cc
  ## TODO ##   ## TODO ## #${BLINK_RENDERER_PLATFORM_DIR}mediastream/media_stream_component.h
  ## TODO ##   ## TODO ## ${BLINK_RENDERER_PLATFORM_DIR}mediastream/media_stream_descriptor.cc
  ## TODO ##   ## TODO ## #${BLINK_RENDERER_PLATFORM_DIR}mediastream/media_stream_descriptor.h
  ## TODO ##   ## TODO ## ${BLINK_RENDERER_PLATFORM_DIR}mediastream/media_stream_source.cc
  ## TODO ##   ## TODO ## #${BLINK_RENDERER_PLATFORM_DIR}mediastream/media_stream_source.h
  ## TODO ##   ## TODO ## ${BLINK_RENDERER_PLATFORM_DIR}mediastream/media_stream_web_audio_source.cc
  ## TODO ##   ## TODO ## #${BLINK_RENDERER_PLATFORM_DIR}mediastream/media_stream_web_audio_source.h
)

list(APPEND BLINK_RENDERER_PLATFORM_P2P_SOURCES
  ## TODO ##   ## TODO ## #${BLINK_RENDERER_PLATFORM_DIR}peerconnection/rtc_answer_options_platform.h
  ## TODO ##   ## TODO ## #${BLINK_RENDERER_PLATFORM_DIR}peerconnection/rtc_offer_options_platform.h
  ## TODO ##   ## TODO ## #${BLINK_RENDERER_PLATFORM_DIR}peerconnection/rtc_session_description_request.h
  ## TODO ##   ## TODO ## #${BLINK_RENDERER_PLATFORM_DIR}peerconnection/rtc_stats_request.h
  ## TODO ##   ## TODO ## #${BLINK_RENDERER_PLATFORM_DIR}peerconnection/rtc_stats_response_base.h
  ## TODO ##   ## TODO ## #${BLINK_RENDERER_PLATFORM_DIR}peerconnection/rtc_void_request.h
)

list(APPEND BLINK_RENDERER_PLATFORM_PROBE_SOURCES
  ${BLINK_RENDERER_PLATFORM_DIR}probe/platform_probes.cc
  #${BLINK_RENDERER_PLATFORM_DIR}probe/platform_probes.h
  ${BLINK_RENDERER_PLATFORM_DIR}probe/platform_trace_events_agent.cc
  #${BLINK_RENDERER_PLATFORM_DIR}probe/platform_trace_events_agent.h
)

list(APPEND BLINK_RENDERER_PLATFORM_SPEECH_SOURCES
  ## TODO ##   ## TODO ## ${BLINK_RENDERER_PLATFORM_DIR}speech/platform_speech_synthesis_utterance.cc
  ## TODO ##   ## TODO ## #${BLINK_RENDERER_PLATFORM_DIR}speech/platform_speech_synthesis_utterance.h
  ## TODO ##   ## TODO ## ${BLINK_RENDERER_PLATFORM_DIR}speech/platform_speech_synthesis_voice.cc
  ## TODO ##   ## TODO ## #${BLINK_RENDERER_PLATFORM_DIR}speech/platform_speech_synthesis_voice.h
  ## TODO ##   ## TODO ## ${BLINK_RENDERER_PLATFORM_DIR}speech/platform_speech_synthesizer.cc
  ## TODO ##   ## TODO ## #${BLINK_RENDERER_PLATFORM_DIR}speech/platform_speech_synthesizer.h
  #
  ## TODO ##   #
  ## TODO ##   #${BLINK_RENDERER_PLATFORM_DIR}windows_keyboard_codes.h
  ## TODO ##   #
  ## TODO ##   #   "geometry/cg/float_point_cg.cc
  ## TODO ##   #   "geometry/cg/float_rect_cg.cc
  ## TODO ##   #   "geometry/cg/float_size_cg.cc
  ## TODO ##   #   "geometry/cg/int_point_cg.cc
  ## TODO ##   #   "geometry/cg/int_rect_cg.cc
  ## TODO ##   #   "geometry/cg/int_size_cg.cc
)

if(${CMAKE_SYSTEM_NAME} STREQUAL "Linux")
  list(APPEND BLINK_RENDERER_PLATFORM_INSTRUMENTATION_SOURCES
    #
    #blink_platform_sources("instrumentation")
    # see services/resource_coordinator/public/mojom/coordination_unit.mojom-blink.h
    # requires services/resource_coordinator/public/mojom/
    ## TODO ## ${BLINK_RENDERER_PLATFORM_DIR}instrumentation/resource_coordinator/document_resource_coordinator.cc
    ## TODO ## #${BLINK_RENDERER_PLATFORM_DIR}instrumentation/resource_coordinator/document_resource_coordinator.h
    ## TODO ## ${BLINK_RENDERER_PLATFORM_DIR}instrumentation/resource_coordinator/renderer_resource_coordinator.cc
    ## TODO ## #${BLINK_RENDERER_PLATFORM_DIR}instrumentation/resource_coordinator/renderer_resource_coordinator.h
    ${BLINK_RENDERER_PLATFORM_DIR}instrumentation/tracing/memory_cache_dump_provider.cc
    #${BLINK_RENDERER_PLATFORM_DIR}instrumentation/tracing/memory_cache_dump_provider.h
    ${BLINK_RENDERER_PLATFORM_DIR}instrumentation/tracing/trace_event.cc
    #${BLINK_RENDERER_PLATFORM_DIR}instrumentation/tracing/trace_event.h
    ${BLINK_RENDERER_PLATFORM_DIR}instrumentation/tracing/traced_value.cc
    #${BLINK_RENDERER_PLATFORM_DIR}instrumentation/tracing/traced_value.h
    ${BLINK_RENDERER_PLATFORM_DIR}instrumentation/tracing/web_memory_allocator_dump.cc
    #${BLINK_RENDERER_PLATFORM_DIR}instrumentation/tracing/web_memory_allocator_dump.h
    ${BLINK_RENDERER_PLATFORM_DIR}instrumentation/tracing/web_process_memory_dump.cc
    #${BLINK_RENDERER_PLATFORM_DIR}instrumentation/tracing/web_process_memory_dump.h
  )

  list(APPEND BLINK_RENDERER_PLATFORM_AUDIO_SOURCES
    ## TODO ##   ## TODO ## #${BLINK_RENDERER_PLATFORM_DIR}audio/audio_array.h
    ## TODO ##   ## TODO ## ${BLINK_RENDERER_PLATFORM_DIR}audio/audio_bus.cc
    ## TODO ##   ## TODO ## #${BLINK_RENDERER_PLATFORM_DIR}audio/audio_bus.h
    ## TODO ##   ## TODO ## ${BLINK_RENDERER_PLATFORM_DIR}audio/audio_channel.cc
    ## TODO ##   ## TODO ## #${BLINK_RENDERER_PLATFORM_DIR}audio/audio_channel.h
    ## TODO ##   ## TODO ## ${BLINK_RENDERER_PLATFORM_DIR}audio/audio_delay_dsp_kernel.cc
    ## TODO ##   ## TODO ## #${BLINK_RENDERER_PLATFORM_DIR}audio/audio_delay_dsp_kernel.h
    ## TODO ##   ## TODO ## ${BLINK_RENDERER_PLATFORM_DIR}audio/audio_destination.cc
    ## TODO ##   ## TODO ## #${BLINK_RENDERER_PLATFORM_DIR}audio/audio_destination.h
    ## TODO ##   ## TODO ## #${BLINK_RENDERER_PLATFORM_DIR}audio/audio_destination_consumer.h
    ## TODO ##   ## TODO ## ${BLINK_RENDERER_PLATFORM_DIR}audio/audio_dsp_kernel.cc
    ## TODO ##   ## TODO ## #${BLINK_RENDERER_PLATFORM_DIR}audio/audio_dsp_kernel.h
    ## TODO ##   ## TODO ## ${BLINK_RENDERER_PLATFORM_DIR}audio/audio_dsp_kernel_processor.cc
    ## TODO ##   ## TODO ## #${BLINK_RENDERER_PLATFORM_DIR}audio/audio_dsp_kernel_processor.h
    ## TODO ##   ## TODO ## #${BLINK_RENDERER_PLATFORM_DIR}audio/audio_file_reader.h
    ## TODO ##   ## TODO ## #${BLINK_RENDERER_PLATFORM_DIR}audio/audio_io_callback.h
    ## TODO ##   ## TODO ## ${BLINK_RENDERER_PLATFORM_DIR}audio/audio_processor.cc
    ## TODO ##   ## TODO ## #${BLINK_RENDERER_PLATFORM_DIR}audio/audio_processor.h
    ## TODO ##   ## TODO ## ${BLINK_RENDERER_PLATFORM_DIR}audio/audio_resampler.cc
    ## TODO ##   ## TODO ## #${BLINK_RENDERER_PLATFORM_DIR}audio/audio_resampler.h
    ## TODO ##   ## TODO ## ${BLINK_RENDERER_PLATFORM_DIR}audio/audio_resampler_kernel.cc
    ## TODO ##   ## TODO ## #${BLINK_RENDERER_PLATFORM_DIR}audio/audio_resampler_kernel.h
    ## TODO ##   ## TODO ## #${BLINK_RENDERER_PLATFORM_DIR}audio/audio_source_provider.h
    ## TODO ##   ## TODO ## #${BLINK_RENDERER_PLATFORM_DIR}audio/audio_source_provider_client.h
    ## TODO ##   ## TODO ## ${BLINK_RENDERER_PLATFORM_DIR}audio/audio_utilities.cc
    ## TODO ##   ## TODO ## #${BLINK_RENDERER_PLATFORM_DIR}audio/audio_utilities.h
    ## TODO ##   ## TODO ## ${BLINK_RENDERER_PLATFORM_DIR}audio/biquad.cc
    ## TODO ##   ## TODO ## #${BLINK_RENDERER_PLATFORM_DIR}audio/biquad.h
    ## TODO ##   ## TODO ## ${BLINK_RENDERER_PLATFORM_DIR}audio/cone_effect.cc
    ## TODO ##   ## TODO ## #${BLINK_RENDERER_PLATFORM_DIR}audio/cone_effect.h
    ## TODO ##   ## TODO ## #${BLINK_RENDERER_PLATFORM_DIR}audio/cpu/arm/vector_math_neon.h
    ## TODO ##   ## TODO ## #${BLINK_RENDERER_PLATFORM_DIR}audio/cpu/mips/vector_math_msa.h
    ## TODO ##   ## TODO ## ${BLINK_RENDERER_PLATFORM_DIR}audio/cpu/x86/vector_math_avx.cc
    ## TODO ##   ## TODO ## #${BLINK_RENDERER_PLATFORM_DIR}audio/cpu/x86/vector_math_avx.h
    ## TODO ##   ## TODO ## #${BLINK_RENDERER_PLATFORM_DIR}audio/cpu/x86/vector_math_impl.h
    ## TODO ##   ## TODO ## ${BLINK_RENDERER_PLATFORM_DIR}audio/cpu/x86/vector_math_sse.cc
    ## TODO ##   ## TODO ## #${BLINK_RENDERER_PLATFORM_DIR}audio/cpu/x86/vector_math_sse.h
    ## TODO ##   ## TODO ## #${BLINK_RENDERER_PLATFORM_DIR}audio/cpu/x86/vector_math_x86.h
    ## TODO ##   ## TODO ## #${BLINK_RENDERER_PLATFORM_DIR}audio/denormal_disabler.h
    ## TODO ##   ## TODO ## ${BLINK_RENDERER_PLATFORM_DIR}audio/direct_convolver.cc
    ## TODO ##   ## TODO ## #${BLINK_RENDERER_PLATFORM_DIR}audio/direct_convolver.h
    ## TODO ##   ## TODO ## ${BLINK_RENDERER_PLATFORM_DIR}audio/distance_effect.cc
    ## TODO ##   ## TODO ## #${BLINK_RENDERER_PLATFORM_DIR}audio/distance_effect.h
    ## TODO ##   ## TODO ## ${BLINK_RENDERER_PLATFORM_DIR}audio/down_sampler.cc
    ## TODO ##   ## TODO ## #${BLINK_RENDERER_PLATFORM_DIR}audio/down_sampler.h
    ## TODO ##   ## TODO ## ${BLINK_RENDERER_PLATFORM_DIR}audio/dynamics_compressor.cc
    ## TODO ##   ## TODO ## #${BLINK_RENDERER_PLATFORM_DIR}audio/dynamics_compressor.h
    ## TODO ##   ## TODO ## ${BLINK_RENDERER_PLATFORM_DIR}audio/dynamics_compressor_kernel.cc
    ## TODO ##   ## TODO ## #${BLINK_RENDERER_PLATFORM_DIR}audio/dynamics_compressor_kernel.h
    ## TODO ##   ## TODO ## ${BLINK_RENDERER_PLATFORM_DIR}audio/equal_power_panner.cc
    ## TODO ##   ## TODO ## #${BLINK_RENDERER_PLATFORM_DIR}audio/equal_power_panner.h
    ## TODO ##   ## TODO ## ${BLINK_RENDERER_PLATFORM_DIR}audio/ffmpeg/fft_frame_ffmpeg.cc
    ## TODO ##   ## TODO ## ${BLINK_RENDERER_PLATFORM_DIR}audio/fft_convolver.cc
    ## TODO ##   ## TODO ## #${BLINK_RENDERER_PLATFORM_DIR}audio/fft_convolver.h
    ## TODO ##   ## TODO ## ${BLINK_RENDERER_PLATFORM_DIR}audio/fft_frame.cc
    ## TODO ##   ## TODO ## #${BLINK_RENDERER_PLATFORM_DIR}audio/fft_frame.h
    ## TODO ##   ## TODO ## ${BLINK_RENDERER_PLATFORM_DIR}audio/fft_frame_stub.cc
    ## TODO ##   ## TODO ## #${BLINK_RENDERER_PLATFORM_DIR}audio/hrtf_database.cc
    ## TODO ##   ## TODO ## #${BLINK_RENDERER_PLATFORM_DIR}audio/hrtf_database.h
    ## TODO ##   ## TODO ## ${BLINK_RENDERER_PLATFORM_DIR}audio/hrtf_database_loader.cc
    ## TODO ##   ## TODO ## #${BLINK_RENDERER_PLATFORM_DIR}audio/hrtf_database_loader.h
    ## TODO ##   ## TODO ## ${BLINK_RENDERER_PLATFORM_DIR}audio/hrtf_elevation.cc
    ## TODO ##   ## TODO ## #${BLINK_RENDERER_PLATFORM_DIR}audio/hrtf_elevation.h
    ## TODO ##   ## TODO ## ${BLINK_RENDERER_PLATFORM_DIR}audio/hrtf_kernel.cc
    ## TODO ##   ## TODO ## #${BLINK_RENDERER_PLATFORM_DIR}audio/hrtf_kernel.h
    ## TODO ##   ## TODO ## ${BLINK_RENDERER_PLATFORM_DIR}audio/hrtf_panner.cc
    ## TODO ##   ## TODO ## #${BLINK_RENDERER_PLATFORM_DIR}audio/hrtf_panner.h
    ## TODO ##   ## TODO ## ${BLINK_RENDERER_PLATFORM_DIR}audio/iir_filter.cc
    ## TODO ##   ## TODO ## #${BLINK_RENDERER_PLATFORM_DIR}audio/iir_filter.h
    ## TODO ##   ## TODO ## ${BLINK_RENDERER_PLATFORM_DIR}audio/mac/fft_frame_mac.cc
    ## TODO ##   ## TODO ## #${BLINK_RENDERER_PLATFORM_DIR}audio/mac/vector_math_mac.h
    ## TODO ##   ## TODO ## ${BLINK_RENDERER_PLATFORM_DIR}audio/media_multi_channel_resampler.cc
    ## TODO ##   ## TODO ## #${BLINK_RENDERER_PLATFORM_DIR}audio/media_multi_channel_resampler.h
    ## TODO ##   ## TODO ## ${BLINK_RENDERER_PLATFORM_DIR}audio/multi_channel_resampler.cc
    ## TODO ##   ## TODO ## #${BLINK_RENDERER_PLATFORM_DIR}audio/multi_channel_resampler.h
    ## TODO ##   ## TODO ## ${BLINK_RENDERER_PLATFORM_DIR}audio/panner.cc
    ## TODO ##   ## TODO ## #${BLINK_RENDERER_PLATFORM_DIR}audio/panner.h
    ## TODO ##   ## TODO ## ${BLINK_RENDERER_PLATFORM_DIR}audio/pffft/fft_frame_pffft.cc
    ## TODO ##   ## TODO ## ${BLINK_RENDERER_PLATFORM_DIR}audio/push_pull_fifo.cc
    ## TODO ##   ## TODO ## #${BLINK_RENDERER_PLATFORM_DIR}audio/push_pull_fifo.h
    ## TODO ##   ## TODO ## ${BLINK_RENDERER_PLATFORM_DIR}audio/reverb.cc
    ## TODO ##   ## TODO ## #${BLINK_RENDERER_PLATFORM_DIR}audio/reverb.h
    ## TODO ##   ## TODO ## ${BLINK_RENDERER_PLATFORM_DIR}audio/reverb_accumulation_buffer.cc
    ## TODO ##   ## TODO ## #${BLINK_RENDERER_PLATFORM_DIR}audio/reverb_accumulation_buffer.h
    ## TODO ##   ## TODO ## ${BLINK_RENDERER_PLATFORM_DIR}audio/reverb_convolver.cc
    ## TODO ##   ## TODO ## #${BLINK_RENDERER_PLATFORM_DIR}audio/reverb_convolver.h
    ## TODO ##   ## TODO ## ${BLINK_RENDERER_PLATFORM_DIR}audio/reverb_convolver_stage.cc
    ## TODO ##   ## TODO ## #${BLINK_RENDERER_PLATFORM_DIR}audio/reverb_convolver_stage.h
    ## TODO ##   ## TODO ## ${BLINK_RENDERER_PLATFORM_DIR}audio/reverb_input_buffer.cc
    ## TODO ##   ## TODO ## #${BLINK_RENDERER_PLATFORM_DIR}audio/reverb_input_buffer.h
    ## TODO ##   ## TODO ## ${BLINK_RENDERER_PLATFORM_DIR}audio/simple_fft_convolver.cc
    ## TODO ##   ## TODO ## #${BLINK_RENDERER_PLATFORM_DIR}audio/simple_fft_convolver.h
    ## TODO ##   ## TODO ## ${BLINK_RENDERER_PLATFORM_DIR}audio/sinc_resampler.cc
    ## TODO ##   ## TODO ## #${BLINK_RENDERER_PLATFORM_DIR}audio/sinc_resampler.h
    ## TODO ##   ## TODO ## ${BLINK_RENDERER_PLATFORM_DIR}audio/stereo_panner.cc
    ## TODO ##   ## TODO ## #${BLINK_RENDERER_PLATFORM_DIR}audio/stereo_panner.h
    ## TODO ##   ## TODO ## ${BLINK_RENDERER_PLATFORM_DIR}audio/up_sampler.cc
    ## TODO ##   ## TODO ## #${BLINK_RENDERER_PLATFORM_DIR}audio/up_sampler.h
    ## TODO ##   ## TODO ## ${BLINK_RENDERER_PLATFORM_DIR}audio/vector_math.cc
    ## TODO ##   ## TODO ## #${BLINK_RENDERER_PLATFORM_DIR}audio/vector_math.h
    ## TODO ##   ## TODO ## #${BLINK_RENDERER_PLATFORM_DIR}audio/vector_math_scalar.h
  )

  list(APPEND BLINK_RENDERER_PLATFORM_BINDINGS_SOURCES
    ${BLINK_RENDERER_PLATFORM_DIR}bindings/wrapper_type_info.cc
    #bindings/wrapper_type_info.h
    ## TODO ## ${BLINK_RENDERER_PLATFORM_DIR}bindings/active_script_wrappable_base.cc
    #${BLINK_RENDERER_PLATFORM_DIR}bindings/active_script_wrappable_base.h
    ${BLINK_RENDERER_PLATFORM_DIR}bindings/binding_security_for_platform.cc
    #${BLINK_RENDERER_PLATFORM_DIR}bindings/binding_security_for_platform.h
    ${BLINK_RENDERER_PLATFORM_DIR}bindings/callback_function_base.cc
    #${BLINK_RENDERER_PLATFORM_DIR}bindings/callback_function_base.h
    ${BLINK_RENDERER_PLATFORM_DIR}bindings/callback_interface_base.cc
    #${BLINK_RENDERER_PLATFORM_DIR}bindings/callback_interface_base.h
    ${BLINK_RENDERER_PLATFORM_DIR}bindings/callback_method_retriever.cc
    #${BLINK_RENDERER_PLATFORM_DIR}bindings/callback_method_retriever.h
    #${BLINK_RENDERER_PLATFORM_DIR}bindings/custom_wrappable.h
    #${BLINK_RENDERER_PLATFORM_DIR}bindings/dom_data_store.h
    ${BLINK_RENDERER_PLATFORM_DIR}bindings/dom_wrapper_world.cc
    #${BLINK_RENDERER_PLATFORM_DIR}bindings/dom_wrapper_world.h
    #${BLINK_RENDERER_PLATFORM_DIR}bindings/exception_code.h
    ${BLINK_RENDERER_PLATFORM_DIR}bindings/exception_messages.cc
    #${BLINK_RENDERER_PLATFORM_DIR}bindings/exception_messages.h
    ${BLINK_RENDERER_PLATFORM_DIR}bindings/exception_state.cc
    #${BLINK_RENDERER_PLATFORM_DIR}bindings/exception_state.h
    ${BLINK_RENDERER_PLATFORM_DIR}bindings/microtask.cc
    #${BLINK_RENDERER_PLATFORM_DIR}bindings/microtask.h
    #${BLINK_RENDERER_PLATFORM_DIR}bindings/name_client.h
    # uses v8::Isolate::GetCurrentContext
    ## TODO ## ${BLINK_RENDERER_PLATFORM_DIR}bindings/origin_trial_features.cc
    #${BLINK_RENDERER_PLATFORM_DIR}bindings/origin_trial_features.h
    ## TODO ## requires third_party/zlib/google/
    ${BLINK_RENDERER_PLATFORM_DIR}bindings/parkable_string.cc
    #${BLINK_RENDERER_PLATFORM_DIR}bindings/parkable_string.h
    ## TODO ##
    ${BLINK_RENDERER_PLATFORM_DIR}bindings/parkable_string_manager.cc
    #${BLINK_RENDERER_PLATFORM_DIR}bindings/parkable_string_manager.h
    ${BLINK_RENDERER_PLATFORM_DIR}bindings/runtime_call_stats.cc
    #${BLINK_RENDERER_PLATFORM_DIR}bindings/runtime_call_stats.h
    #${BLINK_RENDERER_PLATFORM_DIR}bindings/scoped_persistent.h
    ${BLINK_RENDERER_PLATFORM_DIR}bindings/script_forbidden_scope.cc
    #${BLINK_RENDERER_PLATFORM_DIR}bindings/script_forbidden_scope.h
    #${BLINK_RENDERER_PLATFORM_DIR}bindings/script_promise_properties.h
    ${BLINK_RENDERER_PLATFORM_DIR}bindings/script_state.cc
    #${BLINK_RENDERER_PLATFORM_DIR}bindings/script_state.h
    ${BLINK_RENDERER_PLATFORM_DIR}bindings/script_wrappable.cc
    #${BLINK_RENDERER_PLATFORM_DIR}bindings/script_wrappable.h
    #${BLINK_RENDERER_PLATFORM_DIR}bindings/shared_persistent.h
    ${BLINK_RENDERER_PLATFORM_DIR}bindings/string_resource.cc
    #${BLINK_RENDERER_PLATFORM_DIR}bindings/string_resource.h
    #${BLINK_RENDERER_PLATFORM_DIR}bindings/to_v8.h
    #${BLINK_RENDERER_PLATFORM_DIR}bindings/trace_wrapper_member.h
    ${BLINK_RENDERER_PLATFORM_DIR}bindings/v0_custom_element_binding.cc
    #${BLINK_RENDERER_PLATFORM_DIR}bindings/v0_custom_element_binding.h
    ## TODO ## #${BLINK_RENDERER_PLATFORM_DIR}bindings/trace_wrapper_v8_reference.h
    ## TODO ## ${BLINK_RENDERER_PLATFORM_DIR}bindings/trace_wrapper_v8_string.cc
    ## TODO ## #${BLINK_RENDERER_PLATFORM_DIR}bindings/trace_wrapper_v8_string.h
    ## TODO ## ${BLINK_RENDERER_PLATFORM_DIR}bindings/v8_binding.cc
    ## TODO ## #${BLINK_RENDERER_PLATFORM_DIR}bindings/v8_binding.h
    ## TODO ## #${BLINK_RENDERER_PLATFORM_DIR}bindings/v8_binding_macros.h
    ## TODO ## #${BLINK_RENDERER_PLATFORM_DIR}bindings/v8_cross_origin_setter_info.h
    ## TODO ## ${BLINK_RENDERER_PLATFORM_DIR}bindings/v8_dom_activity_logger.cc
    ## TODO ## #${BLINK_RENDERER_PLATFORM_DIR}bindings/v8_dom_activity_logger.h
    ## TODO ## ${BLINK_RENDERER_PLATFORM_DIR}bindings/v8_dom_wrapper.cc
    ## TODO ## #${BLINK_RENDERER_PLATFORM_DIR}bindings/v8_dom_wrapper.h
    ## TODO ## #${BLINK_RENDERER_PLATFORM_DIR}bindings/v8_global_value_map.h
    ## TODO ## ${BLINK_RENDERER_PLATFORM_DIR}bindings/v8_object_constructor.cc
    ## TODO ## #${BLINK_RENDERER_PLATFORM_DIR}bindings/v8_object_constructor.h
    ## TODO ## ${BLINK_RENDERER_PLATFORM_DIR}bindings/v8_per_context_data.cc
    ## TODO ## #${BLINK_RENDERER_PLATFORM_DIR}bindings/v8_per_context_data.h
    ## TODO ## ${BLINK_RENDERER_PLATFORM_DIR}bindings/v8_per_isolate_data.cc
    ## TODO ## #${BLINK_RENDERER_PLATFORM_DIR}bindings/v8_per_isolate_data.h
    ## TODO ## ${BLINK_RENDERER_PLATFORM_DIR}bindings/v8_private_property.cc
    ## TODO ## #${BLINK_RENDERER_PLATFORM_DIR}bindings/v8_private_property.h
    ## TODO ## ${BLINK_RENDERER_PLATFORM_DIR}bindings/v8_throw_exception.cc
    ## TODO ## #${BLINK_RENDERER_PLATFORM_DIR}bindings/v8_throw_exception.h
    ## TODO ## ${BLINK_RENDERER_PLATFORM_DIR}bindings/v8_value_cache.cc
    ## TODO ## #${BLINK_RENDERER_PLATFORM_DIR}bindings/v8_value_cache.h
    ## TODO ## ${BLINK_RENDERER_PLATFORM_DIR}bindings/v8_value_or_script_wrappable_adapter.cc
    ## TODO ## #${BLINK_RENDERER_PLATFORM_DIR}bindings/v8_value_or_script_wrappable_adapter.h
  )

  list(APPEND BLINK_RENDERER_PLATFORM_FONTS_SOURCES
      #${BLINK_RENDERER_PLATFORM_DIR}fonts/alternate_font_family.h
  #  ## TODO ##${BLINK_RENDERER_PLATFORM_DIR}fonts/android/font_cache_android.cc
  #  ## TODO ##${BLINK_RENDERER_PLATFORM_DIR}fonts/android/font_unique_name_lookup_android.cc
  #  ## TODO ##${BLINK_RENDERER_PLATFORM_DIR}fonts/android/font_unique_name_lookup_android.h
    ${BLINK_RENDERER_PLATFORM_DIR}fonts/bitmap_glyphs_block_list.cc
    #${BLINK_RENDERER_PLATFORM_DIR}fonts/bitmap_glyphs_block_list.h
    #${BLINK_RENDERER_PLATFORM_DIR}fonts/canvas_rotation_in_vertical.h
    #${BLINK_RENDERER_PLATFORM_DIR}fonts/character_range.h
    #${BLINK_RENDERER_PLATFORM_DIR}fonts/custom_font_data.h
    #${BLINK_RENDERER_PLATFORM_DIR}fonts/fallback_list_composite_key.h
    ${BLINK_RENDERER_PLATFORM_DIR}fonts/font.cc
    #${BLINK_RENDERER_PLATFORM_DIR}fonts/font.h
    #${BLINK_RENDERER_PLATFORM_DIR}fonts/font_baseline.h
    ${BLINK_RENDERER_PLATFORM_DIR}fonts/font_cache.cc
    #${BLINK_RENDERER_PLATFORM_DIR}fonts/font_cache.h
    #${BLINK_RENDERER_PLATFORM_DIR}fonts/font_cache_client.h
    #${BLINK_RENDERER_PLATFORM_DIR}fonts/font_cache_key.h
    ${BLINK_RENDERER_PLATFORM_DIR}fonts/font_cache_memory_dump_provider.cc
    #${BLINK_RENDERER_PLATFORM_DIR}fonts/font_cache_memory_dump_provider.h
    ${BLINK_RENDERER_PLATFORM_DIR}fonts/font_custom_platform_data.cc
    #${BLINK_RENDERER_PLATFORM_DIR}fonts/font_custom_platform_data.h
    ${BLINK_RENDERER_PLATFORM_DIR}fonts/font_data.cc
    #${BLINK_RENDERER_PLATFORM_DIR}fonts/font_data.h
    ${BLINK_RENDERER_PLATFORM_DIR}fonts/font_data_cache.cc
    #${BLINK_RENDERER_PLATFORM_DIR}fonts/font_data_cache.h
    ${BLINK_RENDERER_PLATFORM_DIR}fonts/font_data_for_range_set.cc
    #${BLINK_RENDERER_PLATFORM_DIR}fonts/font_data_for_range_set.h
    ${BLINK_RENDERER_PLATFORM_DIR}fonts/font_description.cc
    #${BLINK_RENDERER_PLATFORM_DIR}fonts/font_description.h
    #${BLINK_RENDERER_PLATFORM_DIR}fonts/font_face_creation_params.h
    ${BLINK_RENDERER_PLATFORM_DIR}fonts/font_fallback_iterator.cc
    #${BLINK_RENDERER_PLATFORM_DIR}fonts/font_fallback_iterator.h
    ${BLINK_RENDERER_PLATFORM_DIR}fonts/font_fallback_list.cc
    #${BLINK_RENDERER_PLATFORM_DIR}fonts/font_fallback_list.h
    ${BLINK_RENDERER_PLATFORM_DIR}fonts/font_fallback_priority.cc
    #${BLINK_RENDERER_PLATFORM_DIR}fonts/font_fallback_priority.h
    ${BLINK_RENDERER_PLATFORM_DIR}fonts/font_family.cc
    #${BLINK_RENDERER_PLATFORM_DIR}fonts/font_family.h
    ${BLINK_RENDERER_PLATFORM_DIR}fonts/font_global_context.cc
    #${BLINK_RENDERER_PLATFORM_DIR}fonts/font_global_context.h
    ${BLINK_RENDERER_PLATFORM_DIR}fonts/font_metrics.cc
    #${BLINK_RENDERER_PLATFORM_DIR}fonts/font_metrics.h
    ${BLINK_RENDERER_PLATFORM_DIR}fonts/font_orientation.cc
    #${BLINK_RENDERER_PLATFORM_DIR}fonts/font_orientation.h
    ${BLINK_RENDERER_PLATFORM_DIR}fonts/font_platform_data.cc
    #${BLINK_RENDERER_PLATFORM_DIR}fonts/font_platform_data.h
    ${BLINK_RENDERER_PLATFORM_DIR}fonts/font_selection_algorithm.cc
    #${BLINK_RENDERER_PLATFORM_DIR}fonts/font_selection_algorithm.h
    ${BLINK_RENDERER_PLATFORM_DIR}fonts/font_selection_types.cc
    #${BLINK_RENDERER_PLATFORM_DIR}fonts/font_selection_types.h
    ${BLINK_RENDERER_PLATFORM_DIR}fonts/font_selector.cc
    #${BLINK_RENDERER_PLATFORM_DIR}fonts/font_selector.h
    #${BLINK_RENDERER_PLATFORM_DIR}fonts/font_selector_client.h
    ${BLINK_RENDERER_PLATFORM_DIR}fonts/font_smoothing_mode.cc
    #${BLINK_RENDERER_PLATFORM_DIR}fonts/font_smoothing_mode.h
    ${BLINK_RENDERER_PLATFORM_DIR}fonts/font_unique_name_lookup.cc
    #${BLINK_RENDERER_PLATFORM_DIR}fonts/font_unique_name_lookup.h
    ${BLINK_RENDERER_PLATFORM_DIR}fonts/font_variant_east_asian.cc
    #${BLINK_RENDERER_PLATFORM_DIR}fonts/font_variant_east_asian.h
    ${BLINK_RENDERER_PLATFORM_DIR}fonts/font_variant_numeric.cc
    #${BLINK_RENDERER_PLATFORM_DIR}fonts/font_variant_numeric.h
    #${BLINK_RENDERER_PLATFORM_DIR}fonts/font_vertical_position_type.h
    ${BLINK_RENDERER_PLATFORM_DIR}fonts/font_width_variant.cc
    #${BLINK_RENDERER_PLATFORM_DIR}fonts/font_width_variant.h
    ${BLINK_RENDERER_PLATFORM_DIR}fonts/generic_font_family_settings.cc
    #${BLINK_RENDERER_PLATFORM_DIR}fonts/generic_font_family_settings.h
    #${BLINK_RENDERER_PLATFORM_DIR}fonts/glyph_metrics_map.h
    ${BLINK_RENDERER_PLATFORM_DIR}fonts/linux/font_cache_linux.cc
    ${BLINK_RENDERER_PLATFORM_DIR}fonts/linux/font_unique_name_lookup_linux.cc
    #${BLINK_RENDERER_PLATFORM_DIR}fonts/linux/font_unique_name_lookup_linux.h
    # TODO #${BLINK_RENDERER_PLATFORM_DIR}fonts/mac/core_text_font_format_support.cc
    #${BLINK_RENDERER_PLATFORM_DIR}fonts/mac/core_text_font_format_support.h
    # TODO #${BLINK_RENDERER_PLATFORM_DIR}fonts/mac/font_cache_mac.mm",
    #${BLINK_RENDERER_PLATFORM_DIR}fonts/mac/font_matcher_mac.h
    # TODO # ${BLINK_RENDERER_PLATFORM_DIR}fonts/mac/font_matcher_mac.mm",
    #${BLINK_RENDERER_PLATFORM_DIR}fonts/mac/font_platform_data_mac.h
    # TODO #${BLINK_RENDERER_PLATFORM_DIR}fonts/mac/font_platform_data_mac.mm",
    #${BLINK_RENDERER_PLATFORM_DIR}fonts/ng_text_fragment_paint_info.h
    # TODO #${BLINK_RENDERER_PLATFORM_DIR}fonts/opentype/font_format_check.cc
    # TODO ##${BLINK_RENDERER_PLATFORM_DIR}fonts/opentype/font_format_check.h
    # TODO #${BLINK_RENDERER_PLATFORM_DIR}fonts/opentype/font_settings.cc
    # TODO ##${BLINK_RENDERER_PLATFORM_DIR}fonts/opentype/font_settings.h
    # TODO #${BLINK_RENDERER_PLATFORM_DIR}fonts/opentype/open_type_caps_support.cc
    # TODO ##${BLINK_RENDERER_PLATFORM_DIR}fonts/opentype/open_type_caps_support.h
    # TODO #${BLINK_RENDERER_PLATFORM_DIR}fonts/opentype/open_type_caps_support_mpl.cc
    # TODO ##${BLINK_RENDERER_PLATFORM_DIR}fonts/opentype/open_type_types.h
    # TODO #${BLINK_RENDERER_PLATFORM_DIR}fonts/opentype/open_type_vertical_data.cc
    # TODO ##${BLINK_RENDERER_PLATFORM_DIR}fonts/opentype/open_type_vertical_data.h
    ${BLINK_RENDERER_PLATFORM_DIR}fonts/orientation_iterator.cc
    #${BLINK_RENDERER_PLATFORM_DIR}fonts/orientation_iterator.h
    ${BLINK_RENDERER_PLATFORM_DIR}fonts/script_run_iterator.cc
    #${BLINK_RENDERER_PLATFORM_DIR}fonts/script_run_iterator.h
    ${BLINK_RENDERER_PLATFORM_DIR}fonts/segmented_font_data.cc
    #${BLINK_RENDERER_PLATFORM_DIR}fonts/segmented_font_data.h
    ${BLINK_RENDERER_PLATFORM_DIR}fonts/shaping/caching_word_shape_iterator.cc
    #${BLINK_RENDERER_PLATFORM_DIR}fonts/shaping/caching_word_shape_iterator.h
    ${BLINK_RENDERER_PLATFORM_DIR}fonts/shaping/caching_word_shaper.cc
    #${BLINK_RENDERER_PLATFORM_DIR}fonts/shaping/caching_word_shaper.h
    ${BLINK_RENDERER_PLATFORM_DIR}fonts/shaping/case_mapping_harfbuzz_buffer_filler.cc
    #${BLINK_RENDERER_PLATFORM_DIR}fonts/shaping/case_mapping_harfbuzz_buffer_filler.h
    #${BLINK_RENDERER_PLATFORM_DIR}fonts/shaping/glyph_bounds_accumulator.h
    ${BLINK_RENDERER_PLATFORM_DIR}fonts/shaping/harfbuzz_face.cc
    #${BLINK_RENDERER_PLATFORM_DIR}fonts/shaping/harfbuzz_face.h
    ${BLINK_RENDERER_PLATFORM_DIR}fonts/shaping/harfbuzz_font_cache.cc
    #${BLINK_RENDERER_PLATFORM_DIR}fonts/shaping/harfbuzz_font_cache.h
    #${BLINK_RENDERER_PLATFORM_DIR}fonts/shaping/harfbuzz_font_data.h
    ${BLINK_RENDERER_PLATFORM_DIR}fonts/shaping/harfbuzz_shaper.cc
    #${BLINK_RENDERER_PLATFORM_DIR}fonts/shaping/harfbuzz_shaper.h
    ${BLINK_RENDERER_PLATFORM_DIR}fonts/shaping/run_segmenter.cc
    #${BLINK_RENDERER_PLATFORM_DIR}fonts/shaping/run_segmenter.h
    ${BLINK_RENDERER_PLATFORM_DIR}fonts/shaping/shape_cache.cc
    #${BLINK_RENDERER_PLATFORM_DIR}fonts/shaping/shape_cache.h
    ${BLINK_RENDERER_PLATFORM_DIR}fonts/shaping/shape_result.cc
    #${BLINK_RENDERER_PLATFORM_DIR}fonts/shaping/shape_result.h
    ${BLINK_RENDERER_PLATFORM_DIR}fonts/shaping/shape_result_bloberizer.cc
    #${BLINK_RENDERER_PLATFORM_DIR}fonts/shaping/shape_result_bloberizer.h
    ${BLINK_RENDERER_PLATFORM_DIR}fonts/shaping/shape_result_buffer.cc
    #${BLINK_RENDERER_PLATFORM_DIR}fonts/shaping/shape_result_buffer.h
    #${BLINK_RENDERER_PLATFORM_DIR}fonts/shaping/shape_result_inline_headers.h
    ${BLINK_RENDERER_PLATFORM_DIR}fonts/shaping/shape_result_spacing.cc
    #${BLINK_RENDERER_PLATFORM_DIR}fonts/shaping/shape_result_spacing.h
    ${BLINK_RENDERER_PLATFORM_DIR}fonts/shaping/shape_result_test_info.cc
    #${BLINK_RENDERER_PLATFORM_DIR}fonts/shaping/shape_result_test_info.h
    ${BLINK_RENDERER_PLATFORM_DIR}fonts/shaping/shape_result_view.cc
    #${BLINK_RENDERER_PLATFORM_DIR}fonts/shaping/shape_result_view.h
    ${BLINK_RENDERER_PLATFORM_DIR}fonts/shaping/shaping_line_breaker.cc
    #${BLINK_RENDERER_PLATFORM_DIR}fonts/shaping/shaping_line_breaker.h
    ${BLINK_RENDERER_PLATFORM_DIR}fonts/simple_font_data.cc
    #${BLINK_RENDERER_PLATFORM_DIR}fonts/simple_font_data.h
    ${BLINK_RENDERER_PLATFORM_DIR}fonts/skia/font_cache_skia.cc
    ${BLINK_RENDERER_PLATFORM_DIR}fonts/skia/skia_text_metrics.cc
    #${BLINK_RENDERER_PLATFORM_DIR}fonts/skia/skia_text_metrics.h
    ${BLINK_RENDERER_PLATFORM_DIR}fonts/skia/sktypeface_factory.cc
    #${BLINK_RENDERER_PLATFORM_DIR}fonts/skia/sktypeface_factory.h
    ${BLINK_RENDERER_PLATFORM_DIR}fonts/small_caps_iterator.cc
    #${BLINK_RENDERER_PLATFORM_DIR}fonts/small_caps_iterator.h
    ${BLINK_RENDERER_PLATFORM_DIR}fonts/string_truncator.cc
    #${BLINK_RENDERER_PLATFORM_DIR}fonts/string_truncator.h
    # requires "third_party/emoji-segmenter/src/emoji_presentation_scanner.c"
    ${BLINK_RENDERER_PLATFORM_DIR}fonts/symbols_iterator.cc
    #${BLINK_RENDERER_PLATFORM_DIR}fonts/symbols_iterator.h
    ${BLINK_RENDERER_PLATFORM_DIR}fonts/text_rendering_mode.cc
    #${BLINK_RENDERER_PLATFORM_DIR}fonts/text_rendering_mode.h
    #${BLINK_RENDERER_PLATFORM_DIR}fonts/text_run_paint_info.h
    ${BLINK_RENDERER_PLATFORM_DIR}fonts/typesetting_features.cc
    #${BLINK_RENDERER_PLATFORM_DIR}fonts/typesetting_features.h
    ${BLINK_RENDERER_PLATFORM_DIR}fonts/unicode_range_set.cc
    #${BLINK_RENDERER_PLATFORM_DIR}fonts/unicode_range_set.h
    ${BLINK_RENDERER_PLATFORM_DIR}fonts/utf16_ragel_iterator.cc
    #${BLINK_RENDERER_PLATFORM_DIR}fonts/utf16_ragel_iterator.h
    ${BLINK_RENDERER_PLATFORM_DIR}fonts/utf16_text_iterator.cc
    #${BLINK_RENDERER_PLATFORM_DIR}fonts/utf16_text_iterator.h
    ${BLINK_RENDERER_PLATFORM_DIR}fonts/vdmx_parser.cc
    #${BLINK_RENDERER_PLATFORM_DIR}fonts/vdmx_parser.h
    ## TODO ## ${BLINK_RENDERER_PLATFORM_DIR}fonts/web_font_decoder.cc
    #${BLINK_RENDERER_PLATFORM_DIR}fonts/web_font_decoder.h
    ## TODO ## ${BLINK_RENDERER_PLATFORM_DIR}fonts/web_font_render_style.cc
    ## TODO ## ${BLINK_RENDERER_PLATFORM_DIR}fonts/web_font_typeface_factory.cc
    #${BLINK_RENDERER_PLATFORM_DIR}fonts/web_font_typeface_factory.h
    ## TODO ## ${BLINK_RENDERER_PLATFORM_DIR}fonts/win/dwrite_font_format_support.cc
    ## TODO ## #${BLINK_RENDERER_PLATFORM_DIR}fonts/win/dwrite_font_format_support.h
    ## TODO ## ${BLINK_RENDERER_PLATFORM_DIR}fonts/win/font_cache_skia_win.cc
    ## TODO ## ${BLINK_RENDERER_PLATFORM_DIR}fonts/win/font_fallback_win.cc
    ## TODO ## #${BLINK_RENDERER_PLATFORM_DIR}fonts/win/font_fallback_win.h
    ## TODO ## ${BLINK_RENDERER_PLATFORM_DIR}fonts/win/font_platform_data_win.cc
    ## TODO ## ${BLINK_RENDERER_PLATFORM_DIR}fonts/win/font_unique_name_lookup_win.cc
    ## TODO ## #${BLINK_RENDERER_PLATFORM_DIR}fonts/win/font_unique_name_lookup_win.h
  )

  list(APPEND BLINK_RENDERER_PLATFORM_TEXT_SOURCES
    #${BLINK_RENDERER_PLATFORM_DIR}text/bidi_character_run.h
    ${BLINK_RENDERER_PLATFORM_DIR}text/bidi_context.cc
    #${BLINK_RENDERER_PLATFORM_DIR}text/bidi_context.h
    #${BLINK_RENDERER_PLATFORM_DIR}text/bidi_resolver.h
    #${BLINK_RENDERER_PLATFORM_DIR}text/bidi_run_list.h
    ${BLINK_RENDERER_PLATFORM_DIR}text/bidi_text_run.cc
    #${BLINK_RENDERER_PLATFORM_DIR}text/bidi_text_run.h
    ${BLINK_RENDERER_PLATFORM_DIR}text/capitalize.cc
    #${BLINK_RENDERER_PLATFORM_DIR}text/capitalize.h
    ${BLINK_RENDERER_PLATFORM_DIR}text/character.cc
    #${BLINK_RENDERER_PLATFORM_DIR}text/character.h
    ${BLINK_RENDERER_PLATFORM_DIR}text/character_emoji.cc
    #${BLINK_RENDERER_PLATFORM_DIR}text/character_property.h
    #${BLINK_RENDERER_PLATFORM_DIR}text/character_property_data.h
    ${BLINK_RENDERER_PLATFORM_DIR}text/date_time_format.cc
    #${BLINK_RENDERER_PLATFORM_DIR}text/date_time_format.h
    #${BLINK_RENDERER_PLATFORM_DIR}text/decode_escape_sequences.h
    ${BLINK_RENDERER_PLATFORM_DIR}text/hyphenation.cc
    #${BLINK_RENDERER_PLATFORM_DIR}text/hyphenation.h
    ${BLINK_RENDERER_PLATFORM_DIR}text/icu_error.cc
    #${BLINK_RENDERER_PLATFORM_DIR}text/icu_error.h
    ${BLINK_RENDERER_PLATFORM_DIR}text/layout_locale.cc
    #${BLINK_RENDERER_PLATFORM_DIR}text/layout_locale.h
    ${BLINK_RENDERER_PLATFORM_DIR}text/linux/hyphenation_linux.cc
    ${BLINK_RENDERER_PLATFORM_DIR}text/locale_icu.cc
    #${BLINK_RENDERER_PLATFORM_DIR}text/locale_icu.h
    #${BLINK_RENDERER_PLATFORM_DIR}text/locale_mac.h
    # TODO #${BLINK_RENDERER_PLATFORM_DIR}text/locale_mac.mm",
    ${BLINK_RENDERER_PLATFORM_DIR}text/locale_to_script_mapping.cc
    #${BLINK_RENDERER_PLATFORM_DIR}text/locale_to_script_mapping.h
    ## TODO ##${BLINK_RENDERER_PLATFORM_DIR}text/locale_win.cc
    #${BLINK_RENDERER_PLATFORM_DIR}text/locale_win.h
    ## TODO ##${BLINK_RENDERER_PLATFORM_DIR}text/mac/hyphenation_mac.cc
    ${BLINK_RENDERER_PLATFORM_DIR}text/platform_locale.cc
    #${BLINK_RENDERER_PLATFORM_DIR}text/platform_locale.h
    ${BLINK_RENDERER_PLATFORM_DIR}text/segmented_string.cc
    #${BLINK_RENDERER_PLATFORM_DIR}text/segmented_string.h
    #${BLINK_RENDERER_PLATFORM_DIR}text/suffix_tree.h
    ${BLINK_RENDERER_PLATFORM_DIR}text/text_boundaries.cc
    #${BLINK_RENDERER_PLATFORM_DIR}text/text_boundaries.h
    ${BLINK_RENDERER_PLATFORM_DIR}text/text_break_iterator.cc
    #${BLINK_RENDERER_PLATFORM_DIR}text/text_break_iterator.h
    ${BLINK_RENDERER_PLATFORM_DIR}text/text_break_iterator_icu.cc
    ${BLINK_RENDERER_PLATFORM_DIR}text/text_break_iterator_internal_icu.cc
    #${BLINK_RENDERER_PLATFORM_DIR}text/text_break_iterator_internal_icu.h
    ${BLINK_RENDERER_PLATFORM_DIR}text/text_direction.cc
    #${BLINK_RENDERER_PLATFORM_DIR}text/text_direction.h
    ${BLINK_RENDERER_PLATFORM_DIR}text/text_encoding_detector.cc
    #${BLINK_RENDERER_PLATFORM_DIR}text/text_encoding_detector.h
    #${BLINK_RENDERER_PLATFORM_DIR}text/text_justify.h
    ${BLINK_RENDERER_PLATFORM_DIR}text/text_run.cc
    #${BLINK_RENDERER_PLATFORM_DIR}text/text_run.h
    #${BLINK_RENDERER_PLATFORM_DIR}text/text_run_iterator.h
    #${BLINK_RENDERER_PLATFORM_DIR}text/truncation.h
    #${BLINK_RENDERER_PLATFORM_DIR}text/unicode_bidi.h
    ${BLINK_RENDERER_PLATFORM_DIR}text/unicode_range.cc
    #${BLINK_RENDERER_PLATFORM_DIR}text/unicode_range.h
    ${BLINK_RENDERER_PLATFORM_DIR}text/unicode_utilities.cc
    #${BLINK_RENDERER_PLATFORM_DIR}text/unicode_utilities.h
    ${BLINK_RENDERER_PLATFORM_DIR}text/web_entities.cc
    #${BLINK_RENDERER_PLATFORM_DIR}text/web_entities.h
    ## TODO ##${BLINK_RENDERER_PLATFORM_DIR}text/win/hyphenation_win.cc
    #${BLINK_RENDERER_PLATFORM_DIR}text/writing_mode.h
    #${BLINK_RENDERER_PLATFORM_DIR}text/writing_mode_utils.h
  )
endif() # ${CMAKE_SYSTEM_NAME}

add_library(BLINK_RENDERER_PLATFORM STATIC
  ${BLINK_RENDERER_PLATFORM_GEN_SOURCES}
  ${BLINK_RENDERER_PLATFORM_ROOT_SOURCES}
  ${BLINK_RENDERER_PLATFORM_WEBORIGIN_SOURCES}
  ${BLINK_RENDERER_HEAP_SOURCES}
  ${BLINK_RENDERER_PLATFORM_BLOB_SOURCES}
  ${BLINK_RENDERER_PLATFORM_TRANSFORMS_SOURCES}
  ${BLINK_RENDERER_PLATFORM_JSON_SOURCES}
  ${BLINK_RENDERER_PLATFORM_MHTML_SOURCES}
  ${BLINK_RENDERER_PLATFORM_MOJO_SOURCES}
  ${BLINK_RENDERER_PLATFORM_GEOMETRY_SOURCES}
  ${BLINK_RENDERER_PLATFORM_EXPORTED_SOURCES}
  ${BLINK_RENDERER_PLATFORM_GRAPHICS_SOURCES}
  ${BLINK_RENDERER_PLATFORM_ANIMATION_SOURCES}
  ${BLINK_RENDERER_PLATFORM_INSTRUMENTATION_SOURCES}
  ${BLINK_RENDERER_PLATFORM_AUDIO_SOURCES}
  ${BLINK_RENDERER_PLATFORM_BINDINGS_SOURCES}
  ${BLINK_RENDERER_PLATFORM_TEXT_SOURCES}
  #${BLINK_RENDERER_PLATFORM_FONTS_SOURCES}
  ${BLINK_RENDERER_PLATFORM_SCHEDULER_SOURCES}
  ${BLINK_RENDERER_PLATFORM_NETWORK_SOURCES}
  #${BLINK_RENDERER_PLATFORM_MEDIASTREAM_SOURCES}
  #${BLINK_RENDERER_PLATFORM_MAC_SOURCES}
  ${BLINK_RENDERER_PLATFORM_IMAGE_SOURCES}
  #${BLINK_RENDERER_PLATFORM_LOADER_SOURCES}
  #${BLINK_RENDERER_PLATFORM_P2P_SOURCES}
  #${BLINK_RENDERER_PLATFORM_PROBE_SOURCES}
  #${BLINK_RENDERER_PLATFORM_SPEECH_SOURCES}
)

if(USE_LIBJPEG)
  if(EMSCRIPTEN)
    set(libjpeg_LIB GLIBJPEG)
    set(libjpeg_TURBO_LIB GLIBJPEG_TURBO)
    set(iccjpeg_LIB iccjpeg)
  elseif(${CMAKE_SYSTEM_NAME} STREQUAL "Linux")
    set(libjpeg_LIB GLIBJPEG)
    set(libjpeg_TURBO_LIB GLIBJPEG_TURBO)
    set(iccjpeg_LIB iccjpeg)
  else()
    message(FATAL_ERROR "platform not supported")
  endif()
endif()

#if (NOT EMSCRIPTEN)
#  find_package(PNG REQUIRED) # PNG::PNG
#  set(libpng_LIB PNG::PNG)
#  #set(libpng_LIB GLIBPNG)
#endif()

#message(FATAL_ERROR ${libpng_LIB})

target_link_libraries(BLINK_RENDERER_PLATFORM PRIVATE
  #public_deps = [
  #  ":blink_platform_public_deps",
  #  "//third_party/blink/renderer/platform/blob",
  #  "//third_party/blink/renderer/platform/heap",
  #  "//third_party/blink/renderer/platform/instrumentation",
  #  "//third_party/blink/renderer/platform/loader",
  #  "//third_party/blink/renderer/platform/network",
  #  "//third_party/blink/renderer/platform/scheduler",
  #]
  #deps = [
  #  ":platform_export",
  #  "//base/allocator:buildflags",
  #  "//components/viz/client",
  #  "//components/viz/common",
  #  "//crypto",
  #  "//device/vr/public/mojom:mojom_blink",
  #  "//gin",
  #  "//media",
  #  "//mojo/public/cpp/base",
  #  "//mojo/public/cpp/bindings",
  #  "//mojo/public/cpp/bindings:wtf_support",
  #  "//services/service_manager/public/cpp",
  #  "//services/ws/public/cpp/gpu",
  #  "//skia:skcms",
  #  "//third_party:freetype_harfbuzz",
  #  "//third_party/blink/public/common",
  #  "//third_party/blink/public/mojom:embedded_frame_sink_mojo_bindings_blink",
  #  "//third_party/ced",
  #  "//third_party/emoji-segmenter",
  #  "//third_party/icu",
  #  "//third_party/webrtc/p2p:rtc_p2p",
  #  "//third_party/webrtc_overrides:init_webrtc",
  #  "//third_party/zlib/google:compression_utils",
  #  "//ui/base:base",
  #  "//ui/gfx",
  #  "//ui/gfx/geometry",
  #]
  #${libpng_LIB}
  #GLIBPNG
  BLINK_PUBLIC_COMMON
  GURL
  GNET
  GCRYPTO
  COMPONENTS_VIZ_CLIENT
  COMPONENTS_VIZ_COMMON
  # services/service_manager
  # services/ws/public/cpp/gpu
  #${BASE_LIBRARIES}
  #BLINK_WTF
  ${WTF_LIBRARY_NAME}
  # media
  # "//services/ws/public/cpp/gpu",
  SKIA
  #skcms
  # "//third_party:freetype_harfbuzz",
  #  "//third_party/blink/public/common",
  BLINK_COMMON
  BLINK_PUBLIC_MOJOM # see blink/public/mojom/mime/mime_registry.mojom
  MOJO
  ced
  # emoji-segmenter
  icu
  ${libZLIB_LIB}
  # webrtc
  base
  CC
  #G_GPU
  UI_GFX
  GFX_GEOMETRY
  #public_deps = [
  #  ":bindings_buildflags",
  #  ":make_platform_generated",
  #  "//base",
  #  "//cc",
  #  "//cc/animation",
  #  "//cc/paint",
  #  "//gpu/command_buffer/client:client",
  #  "//gpu/command_buffer/client:gles2_interface",
  #  "//gpu/command_buffer/common:common",
  #  "//net",
  #  "//services/device/public/mojom:generic_sensor_blink",
  #  "//services/device/public/mojom:mojom_blink",
  #  "//services/network/public/cpp:cpp",
  #  "//services/network/public/mojom",
  #  "//services/network/public/mojom:mojom_blink",
  #  "//services/resource_coordinator/public/cpp:resource_coordinator_cpp_features",
  #  "//services/resource_coordinator/public/mojom:mojom_blink",
  #  "//services/service_manager/public/mojom:mojom_blink",
  #  "//skia",
  #  "//third_party:jpeg",
  #  "//third_party/blink/public:blink_headers",
  #  "//third_party/blink/public/common",
  #  "//third_party/blink/public/mojom:mojom_platform_blink",
  #  "//third_party/blink/public/mojom:web_bluetooth_mojo_bindings_blink",
  #  "//third_party/blink/renderer/platform/heap:blink_heap_buildflags",
  #  "//third_party/blink/renderer/platform/network:make_generated",
  #  "//third_party/blink/renderer/platform/wtf",
  #  "//third_party/boringssl",
  #  "//third_party/iccjpeg",
  #  "//third_party/libpng",
  #  "//third_party/libwebp",
  #  "//third_party/ots",
  #  "//url",
  #  "//v8",
  #]
  ANIMATION_CC
  BASE_CC
  PAINT_CC
  CC
  SERVICES_NETWORK_PUBLIC_CPP
  SERVICES_SERVICE_MANAGER_PUBLIC_CPP
  libwebp # requires libpng
  ${libjpeg_LIB}
  ${libjpeg_TURBO_LIB}
  ${libpng_LIB}
  ${iccjpeg_LIB}
  #
  # khronos
  ${khronos_LIB}
  LIB_V8_INTERFACE
  COMPONENTS_SCHEDULING_METRICS
  ${HARFBUZZ_LIBRARIES}
  GMEDIA
  GZLIB_EXT
)

set_property(TARGET BLINK_RENDERER_PLATFORM PROPERTY CXX_STANDARD 17)

#message(FATAL_ERROR "HARFBUZZ_INCLUDE_DIRS=${HARFBUZZ_INCLUDE_DIRS}")

target_include_directories(BLINK_RENDERER_PLATFORM PRIVATE
  ${HARFBUZZ_INCLUDE_DIRS}
  ${CHROMIUM_DIR} # requires "third_party/blink/public/platform/web_common.h"
  ${BLINK_RENDERER_PLATFORM_DIR}
  #${BASE_DIR}
  ${CUR_OUT_DIR} # see blink_python_runner("runtime_enabled_features")
)

target_include_directories(BLINK_RENDERER_PLATFORM PUBLIC
  ${GEN_COMBINED_DIR}
)

target_compile_definitions(BLINK_RENDERER_PLATFORM PRIVATE
  BLINK_RENDERER_PLATFORM_IMPLEMENTATION=1
  BLINK_IMPLEMENTATION=1
  INSIDE_BLINK=1
  ${EXTRA_DEFINES}
  #
  #TODO
  #ENABLE_FONTS=1
  #
  #USE_FUNCTION_CITYHASH
  #USING_V8_SHARED
)

target_compile_options(BLINK_RENDERER_PLATFORM PUBLIC # NOTE: PUBLIC
  -Wno-implicit-function-declaration
  -Wno-c++11-narrowing
  -Wno-macro-redefined
)
