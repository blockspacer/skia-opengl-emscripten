cmake_minimum_required(VERSION 2.8)

# 'targets': [
#   {
#     'target_name': 'overlay_info',
#     'type': 'static_library',
#     'sources': [
#       'overlay_info_registry.cc',
#       'overlay_info_registry.h',
#       'qr_code_overlay.cc',
#       'qr_code_overlay.h',
#     ],
#     'dependencies': [
#       '<(DEPTH)/cobalt/base/base.gyp:base',
#       '<(DEPTH)/cobalt/math/math.gyp:math',
#       '<(DEPTH)/cobalt/render_tree/render_tree.gyp:render_tree',
#       '<(DEPTH)/third_party/QR-Code-generator/qr_code_generator.gyp:qr_code_generator',
#     ],
#   },
list(APPEND cobalt_overlay_info_SOURCES
  ${COBALT_CORE_DIR}overlay_info/overlay_info_registry.cc
  ${COBALT_CORE_DIR}overlay_info/overlay_info_registry.h
  ## TODO ## ${COBALT_CORE_DIR}overlay_info/qr_code_overlay.cc
  ## TODO ## ${COBALT_CORE_DIR}overlay_info/qr_code_overlay.h
)

add_library(cobalt_overlay_info STATIC
  ${cobalt_overlay_info_SOURCES}
)

target_link_libraries(cobalt_overlay_info PRIVATE
  ${base_LIB} # TODO
  cobalt_base
  cobalt_nanobase
  #cobalt_dom
  cobalt_math
  cobalt_render_tree
)

set_property(TARGET cobalt_overlay_info PROPERTY CXX_STANDARD 17)

target_include_directories(cobalt_overlay_info PRIVATE
  #${UI_PARENT_DIR}
  ${COBALT_CORE_DIR}
  ${COBALT_CORE_PARENT_DIR}
  ${COBALT_COMMON_INCLUDES}
  ${CHROMIUM_DIR} # to third_party/skia/include/core/SkWriteBuffer.h
)

target_compile_definitions(cobalt_overlay_info PRIVATE
  #'conditions': [
  #  ['enable_map_to_mesh == 1', {
  #    'defines' : ['ENABLE_MAP_TO_MESH'],
  #  }],
  #],
  #
  # starboard/linux/shared/BUILD.gn
  #STARBOARD_IMPLEMENTATION=1
  #
  #BASE_IMPLEMENTATION=1
  #BASE_I18N_IMPLEMENTATION=1
  #
  #COBALT_ENABLE_VERSION_COMPATIBILITY_VALIDATIONS=1
  #
  ${COBALT_COMMON_DEFINES}
)
