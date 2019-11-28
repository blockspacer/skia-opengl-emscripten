cmake_minimum_required(VERSION 2.8)

# cobalt/layout/layout.gyp
list(APPEND cobalt_layout_SOURCES
  ${COBALT_CORE_DIR}layout/anonymous_block_box.cc
  ${COBALT_CORE_DIR}layout/anonymous_block_box.h
  ${COBALT_CORE_DIR}layout/base_direction.h
  ${COBALT_CORE_DIR}layout/benchmark_stat_names.cc
  ${COBALT_CORE_DIR}layout/benchmark_stat_names.h
  ${COBALT_CORE_DIR}layout/block_container_box.cc
  ${COBALT_CORE_DIR}layout/block_container_box.h
  ${COBALT_CORE_DIR}layout/block_formatting_block_container_box.cc
  ${COBALT_CORE_DIR}layout/block_formatting_block_container_box.h
  ${COBALT_CORE_DIR}layout/block_formatting_context.cc
  ${COBALT_CORE_DIR}layout/block_formatting_context.h
  ${COBALT_CORE_DIR}layout/block_level_replaced_box.cc
  ${COBALT_CORE_DIR}layout/block_level_replaced_box.h
  ${COBALT_CORE_DIR}layout/block_level_skottie_box.cc
  ${COBALT_CORE_DIR}layout/block_level_skottie_box.h
  ${COBALT_CORE_DIR}layout/box.cc
  ${COBALT_CORE_DIR}layout/box.h
  ${COBALT_CORE_DIR}layout/box_generator.cc
  ${COBALT_CORE_DIR}layout/box_generator.h
  ${COBALT_CORE_DIR}layout/container_box.cc
  ${COBALT_CORE_DIR}layout/container_box.h
  ${COBALT_CORE_DIR}layout/letterboxed_image.cc
  ${COBALT_CORE_DIR}layout/letterboxed_image.h
  ${COBALT_CORE_DIR}layout/formatting_context.h
  ${COBALT_CORE_DIR}layout/initial_containing_block.cc
  ${COBALT_CORE_DIR}layout/initial_containing_block.h
  ${COBALT_CORE_DIR}layout/inline_container_box.cc
  ${COBALT_CORE_DIR}layout/inline_container_box.h
  ${COBALT_CORE_DIR}layout/inline_formatting_context.cc
  ${COBALT_CORE_DIR}layout/inline_formatting_context.h
  ${COBALT_CORE_DIR}layout/inline_level_replaced_box.cc
  ${COBALT_CORE_DIR}layout/inline_level_replaced_box.h
  ${COBALT_CORE_DIR}layout/inline_level_skottie_box.cc
  ${COBALT_CORE_DIR}layout/inline_level_skottie_box.h
  ${COBALT_CORE_DIR}layout/insets_layout_unit.cc
  ${COBALT_CORE_DIR}layout/insets_layout_unit.h
  ${COBALT_CORE_DIR}layout/intersection_observer_root.h
  ${COBALT_CORE_DIR}layout/intersection_observer_target.cc
  ${COBALT_CORE_DIR}layout/intersection_observer_target.h
  ${COBALT_CORE_DIR}layout/flex_container_box.cc
  ${COBALT_CORE_DIR}layout/flex_container_box.h
  ${COBALT_CORE_DIR}layout/flex_formatting_context.cc
  ${COBALT_CORE_DIR}layout/flex_formatting_context.h
  ${COBALT_CORE_DIR}layout/flex_item.cc
  ${COBALT_CORE_DIR}layout/flex_item.h
  ${COBALT_CORE_DIR}layout/flex_line.cc
  ${COBALT_CORE_DIR}layout/flex_line.h
  ${COBALT_CORE_DIR}layout/box_intersection_observer_module.cc
  ${COBALT_CORE_DIR}layout/box_intersection_observer_module.h
  ${COBALT_CORE_DIR}layout/layout.cc
  ${COBALT_CORE_DIR}layout/layout.h
  ${COBALT_CORE_DIR}layout/layout_unit.h
  ${COBALT_CORE_DIR}layout/layout_boxes.cc
  ${COBALT_CORE_DIR}layout/layout_boxes.h
  ${COBALT_CORE_DIR}layout/layout_manager.cc
  ${COBALT_CORE_DIR}layout/layout_manager.h
  ${COBALT_CORE_DIR}layout/layout_stat_tracker.cc
  ${COBALT_CORE_DIR}layout/layout_stat_tracker.h
  ${COBALT_CORE_DIR}layout/line_box.cc
  ${COBALT_CORE_DIR}layout/line_box.h
  ${COBALT_CORE_DIR}layout/line_wrapping.cc
  ${COBALT_CORE_DIR}layout/line_wrapping.h
  ${COBALT_CORE_DIR}layout/paragraph.cc
  ${COBALT_CORE_DIR}layout/paragraph.h
  ${COBALT_CORE_DIR}layout/point_layout_unit.cc
  ${COBALT_CORE_DIR}layout/point_layout_unit.h
  ${COBALT_CORE_DIR}layout/replaced_box.cc
  ${COBALT_CORE_DIR}layout/replaced_box.h
  ${COBALT_CORE_DIR}layout/skottie_box.cc
  ${COBALT_CORE_DIR}layout/skottie_box.h
  ${COBALT_CORE_DIR}layout/rect_layout_unit.cc
  ${COBALT_CORE_DIR}layout/rect_layout_unit.h
  ${COBALT_CORE_DIR}layout/render_tree_animations.h
  ${COBALT_CORE_DIR}layout/size_layout_unit.cc
  ${COBALT_CORE_DIR}layout/size_layout_unit.h
  ${COBALT_CORE_DIR}layout/text_box.cc
  ${COBALT_CORE_DIR}layout/text_box.h
  ${COBALT_CORE_DIR}layout/topmost_event_target.cc
  ##${COBALT_CORE_DIR}layout/topmost_event_targer.h
  ${COBALT_CORE_DIR}layout/used_style.cc
  ${COBALT_CORE_DIR}layout/used_style.h
  ${COBALT_CORE_DIR}layout/vector2d_layout_unit.cc
  ${COBALT_CORE_DIR}layout/vector2d_layout_unit.h
  ${COBALT_CORE_DIR}layout/white_space_processing.cc
  ${COBALT_CORE_DIR}layout/white_space_processing.h
)

add_library(cobalt_layout STATIC
  ${cobalt_layout_SOURCES}
)

if(NOT DEFINED cobalt_starboard_headers_only_LIB)
  message(FATAL_ERROR "NOT DEFINED: cobalt_starboard_headers_only_LIB")
endif(NOT DEFINED cobalt_starboard_headers_only_LIB)

target_link_libraries(cobalt_layout PUBLIC
  ${cobalt_starboard_LIB} # TODO
  ${cobalt_starboard_headers_only_LIB}
)

#'dependencies': [
#  '<(DEPTH)/cobalt/base/base.gyp:base',
#  '<(DEPTH)/cobalt/dom/dom.gyp:dom',
#  '<(DEPTH)/cobalt/loader/loader.gyp:loader',
#  '<(DEPTH)/cobalt/render_tree/render_tree.gyp:animations',
#  '<(DEPTH)/cobalt/render_tree/render_tree.gyp:render_tree',
#  '<(DEPTH)/cobalt/ui_navigation/ui_navigation.gyp:ui_navigation',
#  '<(DEPTH)/third_party/icu/icu.gyp:icuuc',
#],
## Exporting dom so that layout_test gets the transitive include paths to
## include generated headers.
#'export_dependent_settings': [
#  '<(DEPTH)/cobalt/dom/dom.gyp:dom',
#],
#'conditions': [
#  ['cobalt_enable_lib == 1', {
#    'defines' : ['FORCE_VIDEO_EXTERNAL_MESH'],
#  }],
#],
target_link_libraries(cobalt_layout PRIVATE
  ${base_LIB} # TODO
  ${cobalt_base_LIB}
  cobalt_dom
  cobalt_loader
  cobalt_render_tree
  cobalt_ui_navigation
  ${CUSTOM_ICU_LIB}
  ${SKIA_LIB} # TODO
  ${skottie_LIB} # TODO
)

set_property(TARGET cobalt_layout PROPERTY CXX_STANDARD 17)

target_include_directories(cobalt_layout PRIVATE
  #${UI_PARENT_DIR}
  ${COBALT_CORE_DIR}
  ${COBALT_CORE_PARENT_DIR}
  ${COBALT_COMMON_INCLUDES}
)

target_compile_definitions(cobalt_layout PRIVATE
  #FORCE_VIDEO_EXTERNAL_MESH=1 # if cobalt_enable_lib == 1
  #
  ${COBALT_COMMON_DEFINES}
)
