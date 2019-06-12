cmake_minimum_required(VERSION 2.8)

# skia_cobalt.gypi
# TODO: uses outdated skia ver!
set(COBALT_system_window_SOURCES
  ${COBALT_PORT_DIR}/cobalt/system_window/system_window.cc
  #'application_event.h',
  #'keyboard_event.h',
  #'system_window.h',
)


add_library(cobalt_system_window STATIC
  ${COBALT_system_window_SOURCES}
)

target_link_libraries(cobalt_system_window PUBLIC
  base # TODO
  cobalt_base
  #cobalt_dom
  #cobalt_loader
  #cobalt_render_tree
  #cobalt_ui_navigation
  #icu
  starboard_platform # requires SbWindowCreate -> SbWindowPrivate -> window_create.cc
  #starboard_core
  #starboard_eztime
  starboard_common
  #modp_b64
  #dynamic_annotations
  #GLIBXML
  #icu
  #ced
  #glm
  #SKIA
  #${HARFBUZZ_LIBRARIES}
)

set_property(TARGET cobalt_system_window PROPERTY CXX_STANDARD 17)

target_include_directories(cobalt_system_window PRIVATE
  #${UI_PARENT_DIR}
  ${COBALT_CORE_DIR}
  ${COBALT_CORE_PARENT_DIR}
  ${COBALT_COMMON_INCLUDES}
  ${COBALT_PORT_DIR}/system_window
)

target_compile_definitions(cobalt_system_window PRIVATE
  #FORCE_VIDEO_EXTERNAL_MESH=1
  #
  ${COBALT_COMMON_DEFINES}
)
