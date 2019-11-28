cmake_minimum_required(VERSION 2.8)

#  'dependencies': [
#    '<(DEPTH)/cobalt/base/base.gyp:base',
#    '<(DEPTH)/cobalt/dom/dom.gyp:dom',
#    '<(DEPTH)/cobalt/speech/speech.gyp:speech',
#    '<(DEPTH)/cobalt/system_window/system_window.gyp:system_window',
#  ],
#  'conditions': [
#    ['enable_vr==1', {
#      'sources': [
#        'private/camera_3d_vr.cc',
#        'private/camera_3d_vr.h',
#      ],
#    }, { # enable_vr!=1
#      'sources': [
#        'camera_3d_input_poller.cc',
#        'camera_3d_input_poller.h',
#      ],
#    }],
#  ],
#},
list(APPEND cobalt_input_SOURCES
  ${COBALT_CORE_DIR}input/camera_3d.h
  ${COBALT_CORE_DIR}input/create_default_camera_3d.h
  ${COBALT_CORE_DIR}input/input_device_manager.h
  ${COBALT_CORE_DIR}input/input_device_manager_desktop.cc
  ${COBALT_CORE_DIR}input/input_device_manager_desktop.h
  ## TODO ## ${COBALT_CORE_DIR}input/input_device_manager_fuzzer.cc
  ${COBALT_CORE_DIR}input/input_device_manager_fuzzer.h
  ${COBALT_CORE_DIR}input/input_device_manager_starboard.cc
  ${COBALT_CORE_DIR}input/input_poller.h
  ${COBALT_CORE_DIR}input/input_poller_impl.cc
  ${COBALT_CORE_DIR}input/input_poller_impl.h
  ${COBALT_CORE_DIR}input/key_event_handler.cc
  ${COBALT_CORE_DIR}input/key_event_handler.h
  ${COBALT_CORE_DIR}input/key_repeat_filter.cc
  ${COBALT_CORE_DIR}input/key_repeat_filter.h
  ${COBALT_CORE_DIR}input/keypress_generator_filter.cc
  ${COBALT_CORE_DIR}input/keypress_generator_filter.h
  # enable_vr!=1
  ${COBALT_CORE_DIR}input/camera_3d_input_poller.cc
  ${COBALT_CORE_DIR}input/camera_3d_input_poller.h
)

if(TARGET_WINDOWS)
  # TODO: input_device_manager_win.cc
endif(TARGET_WINDOWS)

add_library(cobalt_input STATIC
  ${cobalt_input_SOURCES}
)

if(NOT DEFINED cobalt_starboard_headers_only_LIB)
  message(FATAL_ERROR "NOT DEFINED: cobalt_starboard_headers_only_LIB")
endif(NOT DEFINED cobalt_starboard_headers_only_LIB)

target_link_libraries(cobalt_input PUBLIC
  ${cobalt_starboard_LIB} # TODO
  ${cobalt_starboard_headers_only_LIB}
)

target_link_libraries(cobalt_input PRIVATE
  ${base_LIB} # TODO
  cobalt_base
  cobalt_nanobase
  cobalt_dom
  cobalt_overlay_info
  #${COBALT_CSP_LIB_NAME}
  #${COBALT_LOADER_LIB_NAME}
  #${COBALT_MEDIA_LIB}
  cobalt_system_window
)

set_property(TARGET cobalt_input PROPERTY CXX_STANDARD 17)

target_include_directories(cobalt_input PRIVATE
  #${UI_PARENT_DIR}
  ${COBALT_CORE_DIR}
  ${COBALT_CORE_PARENT_DIR}
  ${COBALT_COMMON_INCLUDES}
  ${CHROMIUM_DIR} # to third_party/skia/include/core/SkWriteBuffer.h
)

target_compile_definitions(cobalt_input PRIVATE
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
  # see input_device_manager_desktop.cc
  #ENABLE_OVERLAY_INFO=1
  #
  ${COBALT_COMMON_DEFINES}
)
