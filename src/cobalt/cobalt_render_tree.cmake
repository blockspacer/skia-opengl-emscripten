cmake_minimum_required(VERSION 2.8)

list(APPEND cobalt_render_tree_SOURCES
  ${COBALT_CORE_DIR}render_tree/blur_filter.h
  ${COBALT_CORE_DIR}render_tree/border.cc
  ${COBALT_CORE_DIR}render_tree/border.h
  ${COBALT_CORE_DIR}render_tree/brush.cc
  ${COBALT_CORE_DIR}render_tree/brush.h
  ${COBALT_CORE_DIR}render_tree/brush_visitor.h
  ${COBALT_CORE_DIR}render_tree/child_iterator.h
  ${COBALT_CORE_DIR}render_tree/color_rgba.h
  ${COBALT_CORE_DIR}render_tree/clear_rect_node.cc
  ${COBALT_CORE_DIR}render_tree/clear_rect_node.h
  ${COBALT_CORE_DIR}render_tree/composition_node.cc
  ${COBALT_CORE_DIR}render_tree/composition_node.h
  ${COBALT_CORE_DIR}render_tree/dump_render_tree_to_string.cc
  ${COBALT_CORE_DIR}render_tree/filter_node.cc
  ${COBALT_CORE_DIR}render_tree/filter_node.h
  ${COBALT_CORE_DIR}render_tree/font.h
  ${COBALT_CORE_DIR}render_tree/font_provider.h
  ${COBALT_CORE_DIR}render_tree/glyph.h
  ${COBALT_CORE_DIR}render_tree/glyph_buffer.h
  ${COBALT_CORE_DIR}render_tree/image_node.cc
  ${COBALT_CORE_DIR}render_tree/image_node.h
  ${COBALT_CORE_DIR}render_tree/map_to_mesh_filter.h
  ${COBALT_CORE_DIR}render_tree/matrix_transform_3d_node.cc
  ${COBALT_CORE_DIR}render_tree/matrix_transform_3d_node.h
  ${COBALT_CORE_DIR}render_tree/matrix_transform_node.cc
  ${COBALT_CORE_DIR}render_tree/matrix_transform_node.h
  ${COBALT_CORE_DIR}render_tree/mesh.h
  ${COBALT_CORE_DIR}render_tree/node.h
  ${COBALT_CORE_DIR}render_tree/node.cc
  ${COBALT_CORE_DIR}render_tree/node_visitor.h
  ${COBALT_CORE_DIR}render_tree/opacity_filter.h
  ${COBALT_CORE_DIR}render_tree/punch_through_video_node.cc
  ${COBALT_CORE_DIR}render_tree/skottie_node.cc
  ${COBALT_CORE_DIR}render_tree/custom_node.cc
  ${COBALT_CORE_DIR}render_tree/rect_node.cc
  ${COBALT_CORE_DIR}render_tree/rect_node.h
  ${COBALT_CORE_DIR}render_tree/rect_shadow_node.cc
  ${COBALT_CORE_DIR}render_tree/rect_shadow_node.h
  ${COBALT_CORE_DIR}render_tree/resource_provider.h
  ${COBALT_CORE_DIR}render_tree/resource_provider_stub.h
  ${COBALT_CORE_DIR}render_tree/rounded_corners.h
  ${COBALT_CORE_DIR}render_tree/rounded_corners.cc
  ##${COBALT_CORE_DIR}render_tree/rounded_viewport_filter.h
  ${COBALT_CORE_DIR}render_tree/shadow.h
  ${COBALT_CORE_DIR}render_tree/text_node.cc
  ${COBALT_CORE_DIR}render_tree/text_node.h
  ${COBALT_CORE_DIR}render_tree/typeface.h
  ${COBALT_CORE_DIR}render_tree/viewport_filter.h
)

list(APPEND cobalt_render_tree_animations_SOURCES
  ${COBALT_CORE_DIR}render_tree/animations/animate_node.cc
  ${COBALT_CORE_DIR}render_tree/animations/animate_node.h
)

add_library(cobalt_render_tree STATIC
  ${cobalt_render_tree_SOURCES}
  ${cobalt_render_tree_animations_SOURCES}
)

# 'dependencies': [
#   '<(DEPTH)/cobalt/base/base.gyp:base',
#   '<(DEPTH)/cobalt/math/math.gyp:math',
#   '<(DEPTH)/third_party/ots/ots.gyp:ots',
# ],
target_link_libraries(cobalt_render_tree PRIVATE
  cobalt_base
  cobalt_math
  base # TODO
  ${modp_b64_LIB}
  #dynamic_annotations
  ${SKIA_LIB} # TODO
  ${skottie_LIB} # TODO
)

set_property(TARGET cobalt_render_tree PROPERTY CXX_STANDARD 17)

target_include_directories(cobalt_render_tree PRIVATE
  #${UI_PARENT_DIR}
  ${COBALT_CORE_DIR}
  ${COBALT_CORE_PARENT_DIR}
  ${COBALT_COMMON_INCLUDES}
)

target_compile_definitions(cobalt_render_tree PRIVATE
  # starboard/linux/shared/BUILD.gn
  #STARBOARD_IMPLEMENTATION=1
  #
  #BASE_IMPLEMENTATION=1
  #BASE_I18N_IMPLEMENTATION=1
  #
  #COBALT_ENABLE_VERSION_COMPATIBILITY_VALIDATIONS=1
  #
  # cobalt/loader/loader.gyp
  #
  #ENABLE_ABOUT_SCHEME=1
  #COBALT_ENABLE_XHR_HEADER_FILTERING=1
  #COBALT_ENABLE_XHR_HEADER_FILTERING=1
  #
  ${COBALT_COMMON_DEFINES}
)
