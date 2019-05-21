### --- PAINT_CC ---###

# TODO https://github.com/chromium/chromium/blob/master/third_party/blink/renderer/platform/BUILD.gn
set(PAINT_CC_SOURCES
  ${PAINT_CC_DIR}decode_stashing_image_provider.cc
  #${PAINT_CC_DIR}decode_stashing_image_provider.h",
  ${PAINT_CC_DIR}decoded_draw_image.cc
  #${PAINT_CC_DIR}decoded_draw_image.h",
  ${PAINT_CC_DIR}discardable_image_map.cc
  #${PAINT_CC_DIR}discardable_image_map.h",
  ${PAINT_CC_DIR}display_item_list.cc
  #${PAINT_CC_DIR}display_item_list.h",
  ${PAINT_CC_DIR}draw_image.cc
  #${PAINT_CC_DIR}draw_image.h",
  ${PAINT_CC_DIR}filter_operation.cc
  #${PAINT_CC_DIR}filter_operation.h",
  ${PAINT_CC_DIR}filter_operations.cc
  #${PAINT_CC_DIR}filter_operations.h",
  #${PAINT_CC_DIR}image_analysis_state.h",
  #${PAINT_CC_DIR}image_animation_count.h",
  #${PAINT_CC_DIR}image_id.h",
  ${PAINT_CC_DIR}image_provider.cc
  #${PAINT_CC_DIR}image_provider.h",
  ${PAINT_CC_DIR}image_transfer_cache_entry.cc
  #${PAINT_CC_DIR}image_transfer_cache_entry.h",
  ${PAINT_CC_DIR}node_holder.cc
  #${PAINT_CC_DIR}node_holder.h",
  ${PAINT_CC_DIR}paint_cache.cc
  #${PAINT_CC_DIR}paint_cache.h",
  #${PAINT_CC_DIR}paint_canvas.h",
  #${PAINT_CC_DIR}paint_export.h",
  ${PAINT_CC_DIR}paint_filter.cc
  #${PAINT_CC_DIR}paint_filter.h",
  ${PAINT_CC_DIR}paint_flags.cc
  #${PAINT_CC_DIR}paint_flags.h",
  ${PAINT_CC_DIR}paint_image.cc
  #${PAINT_CC_DIR}paint_image.h",
  ${PAINT_CC_DIR}paint_image_builder.cc
  #${PAINT_CC_DIR}paint_image_builder.h",
  ${PAINT_CC_DIR}paint_image_generator.cc
  #${PAINT_CC_DIR}paint_image_generator.h",
  ${PAINT_CC_DIR}paint_op_buffer.cc
  #${PAINT_CC_DIR}paint_op_buffer.h",
  ${PAINT_CC_DIR}paint_op_buffer_serializer.cc
  #${PAINT_CC_DIR}paint_op_buffer_serializer.h",
  ${PAINT_CC_DIR}paint_op_reader.cc
  #${PAINT_CC_DIR}paint_op_reader.h",
  ${PAINT_CC_DIR}paint_op_writer.cc
  #${PAINT_CC_DIR}paint_op_writer.h",
  ${PAINT_CC_DIR}paint_record.cc
  #${PAINT_CC_DIR}paint_record.h",
  ${PAINT_CC_DIR}paint_recorder.cc
  #${PAINT_CC_DIR}paint_recorder.h",
  ${PAINT_CC_DIR}paint_shader.cc
  #${PAINT_CC_DIR}paint_shader.h",
  #${PAINT_CC_DIR}paint_worklet_input.h",
  #${PAINT_CC_DIR}paint_worklet_layer_painter.h",
  ${PAINT_CC_DIR}raw_memory_transfer_cache_entry.cc
  #${PAINT_CC_DIR}raw_memory_transfer_cache_entry.h",
  ${PAINT_CC_DIR}record_paint_canvas.cc
  #${PAINT_CC_DIR}record_paint_canvas.h",
  ${PAINT_CC_DIR}render_surface_filters.cc
  #${PAINT_CC_DIR}render_surface_filters.h",
  ${PAINT_CC_DIR}scoped_raster_flags.cc
  #${PAINT_CC_DIR}scoped_raster_flags.h",
  ${PAINT_CC_DIR}shader_transfer_cache_entry.cc
  #${PAINT_CC_DIR}shader_transfer_cache_entry.h",
  ${PAINT_CC_DIR}skia_paint_canvas.cc
  #${PAINT_CC_DIR}skia_paint_canvas.h",
  ${PAINT_CC_DIR}skia_paint_image_generator.cc
  #${PAINT_CC_DIR}skia_paint_image_generator.h",
  ${PAINT_CC_DIR}skottie_wrapper.cc
  #${PAINT_CC_DIR}skottie_wrapper.h",
  ${PAINT_CC_DIR}solid_color_analyzer.cc
  #${PAINT_CC_DIR}solid_color_analyzer.h",
  #${PAINT_CC_DIR}text_holder.h",
  #${PAINT_CC_DIR}transfer_cache_deserialize_helper.h",
  ${PAINT_CC_DIR}transfer_cache_entry.cc
  #${PAINT_CC_DIR}transfer_cache_entry.h",
  ${PAINT_CC_DIR}transfer_cache_serialize_helper.cc
  #${PAINT_CC_DIR}transfer_cache_serialize_helper.h",
)

add_library(PAINT_CC STATIC
  ${PAINT_CC_SOURCES}
)

target_link_libraries(PAINT_CC PUBLIC
  #GURL
  #GNET
  #${BASE_LIBRARIES}
  BASE_CC
  DEBUG_CC
  SKIA_EXT
  GFX_ANIMATION
  GFX_CODEC
  GFX_COLOR_SPACE
  GFX_GEOMETRY_SKIA
  GFX_GEOMETRY
  GFX_SWITCHES
  GFX_RANGE
  SKIA
  base
)

set_property(TARGET PAINT_CC PROPERTY CXX_STANDARD 17)

target_include_directories(PAINT_CC PRIVATE
  ${PAINT_CC_DIR}
  ${BASE_DIR}
)

target_compile_definitions(PAINT_CC PRIVATE
  CC_PAINT_IMPLEMENTATION=1
)
