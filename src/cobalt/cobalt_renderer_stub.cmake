cmake_minimum_required(VERSION 2.8)

#'dependencies': [
#  '<(DEPTH)/cobalt/base/base.gyp:base',
#  '<(DEPTH)/cobalt/content/fonts/fonts.gyp:copy_font_data',
#  '<(DEPTH)/cobalt/debug/debug.gyp:console_command_manager',
#  '<(DEPTH)/cobalt/math/math.gyp:math',
#  '<(DEPTH)/cobalt/render_tree/render_tree.gyp:animations',
#  '<(DEPTH)/cobalt/render_tree/render_tree.gyp:render_tree',
#  '<(DEPTH)/cobalt/renderer/backend/backend.gyp:renderer_backend',
#  '<(DEPTH)/cobalt/renderer/rasterizer/rasterizer.gyp:rasterizer',
#  '<(DEPTH)/cobalt/system_window/system_window.gyp:system_window',
#  '<(DEPTH)/nb/nb.gyp:nb',
#],
#
# backend
#
#'dependencies': [
#  '<(DEPTH)/cobalt/base/base.gyp:base',
#  '<(DEPTH)/cobalt/math/math.gyp:math',
#  '<(DEPTH)/cobalt/renderer/backend/starboard/platform_backend.gyp:renderer_platform_backend',
#],
#
# rasterizer
#
#['gl_type != "none"', {
#  'dependencies': [
#    '<(DEPTH)/cobalt/renderer/rasterizer/skia/rasterizer.gyp:hardware_rasterizer',
#    '<(DEPTH)/cobalt/renderer/rasterizer/egl/rasterizer.gyp:software_rasterizer',
#    '<(DEPTH)/cobalt/renderer/rasterizer/egl/rasterizer.gyp:hardware_rasterizer',
#  ],
#}],
#['OS=="starboard"', {
#  'dependencies': [
#    '<(DEPTH)/cobalt/renderer/rasterizer/blitter/rasterizer.gyp:hardware_rasterizer',
#    '<(DEPTH)/cobalt/renderer/rasterizer/blitter/rasterizer.gyp:software_rasterizer',
#  ],
#}],

# skia_cobalt.gypi
# TODO: uses outdated skia ver!
set(COBALT_renderer_stub_SOURCES
  ${COBALT_PORT_DIR}/renderer_stub/get_default_rasterizer_for_platform.cc
  ${COBALT_PORT_DIR}/renderer_stub/renderer_module_default_options.cc
  ${COBALT_PORT_DIR}/renderer_stub/pipeline.cc
  ${COBALT_PORT_DIR}/renderer_stub/renderer_module.cc
  ${COBALT_PORT_DIR}/renderer_stub/smoothed_value.cc
  ${COBALT_PORT_DIR}/renderer_stub/submission_queue.cc
  ${COBALT_PORT_DIR}/renderer_stub/rasterizer/stub/rasterizer.cc
  ${COBALT_PORT_DIR}/renderer_stub/backend/render_target.cc
  ${COBALT_PORT_DIR}/renderer_stub/backend/starboard/default_graphics_system_stub.cc
)


add_library(cobalt_renderer_stub STATIC
  ${COBALT_renderer_stub_SOURCES}
)

target_link_libraries(cobalt_renderer_stub PUBLIC
  base # TODO
  cobalt_base
  cobalt_dom
  cobalt_loader
  cobalt_layout
  cobalt_render_tree
  cobalt_ui_navigation
  cobalt_system_window
  icu
  starboard_platform
  #starboard_core
  starboard_eztime
  starboard_common
  modp_b64
  dynamic_annotations
  GLIBXML
  icu
  ced
  glm
  SKIA
  ${HARFBUZZ_LIBRARIES}
)

set_property(TARGET cobalt_renderer_stub PROPERTY CXX_STANDARD 17)

target_include_directories(cobalt_renderer_stub PRIVATE
  #${UI_PARENT_DIR}
  ${COBALT_CORE_DIR}
  ${COBALT_CORE_PARENT_DIR}
  ${COBALT_COMMON_INCLUDES}
  #${COBALT_PORT_DIR}/renderer_stub
)

target_compile_definitions(cobalt_renderer_stub PRIVATE
  #FORCE_VIDEO_EXTERNAL_MESH=1
  #
  ${COBALT_COMMON_DEFINES}
  # renderer
  COBALT_MINIMUM_FRAME_TIME_IN_MILLISECONDS=10
  #ENABLE_MAP_TO_MESH=1
)
