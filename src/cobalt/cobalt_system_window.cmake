﻿cmake_minimum_required(VERSION 2.8)

# skia_cobalt.gypi
# TODO: uses outdated skia ver!
list(APPEND COBALT_system_window_SOURCES
  ${COBALT_PORT_DIR}/cobalt/system_window/system_window.cc
  #'application_event.h',
  #'keyboard_event.h',
  #'system_window.h',
)


add_library(cobalt_system_window STATIC
  ${COBALT_system_window_SOURCES}
)

if(NOT DEFINED cobalt_starboard_LIB)
  message(FATAL_ERROR "NOT DEFINED: cobalt_starboard_LIB")
endif(NOT DEFINED cobalt_starboard_LIB)

target_link_libraries(cobalt_system_window PUBLIC
  ${cobalt_starboard_LIB}
)

if(NOT DEFINED cobalt_starboard_headers_only_LIB)
  message(FATAL_ERROR "NOT DEFINED: cobalt_starboard_headers_only_LIB")
endif(NOT DEFINED cobalt_starboard_headers_only_LIB)

target_link_libraries(cobalt_system_window PUBLIC
  ${cobalt_starboard_LIB} # TODO
  ${cobalt_starboard_headers_only_LIB}
)

target_link_libraries(cobalt_system_window PRIVATE
  ${base_LIB} # TODO
  ${cobalt_base_LIB}
  #cobalt_dom
  #cobalt_loader
  #cobalt_render_tree
  #cobalt_ui_navigation
  #${CUSTOM_ICU_LIB}
  ## starboard_platform # requires SbWindowCreate -> SbWindowPrivate -> window_create.cc
  #starboard_core
  #starboard_eztime
  ## starboard_common
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
