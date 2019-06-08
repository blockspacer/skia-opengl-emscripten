cmake_minimum_required(VERSION 2.8)

set(v8_stub_SOURCES
  ${COBALT_PORT_DIR}v8_stub/v8c_array_buffer.cc
  ${COBALT_PORT_DIR}v8_stub/v8c_engine.cc
  ${COBALT_PORT_DIR}v8_stub/v8c_global_environment.cc
  ${COBALT_PORT_DIR}v8_stub/v8c_source_code.cc
  ${COBALT_PORT_DIR}v8_stub/v8c.cc
)

add_library(v8_stub STATIC
  ${v8_stub_SOURCES}
)

target_link_libraries(v8_stub PUBLIC
  base # TODO
  cobalt_base
  cobalt_nanobase
  cobalt_script
  #modp_b64
)

set_property(TARGET v8_stub PROPERTY CXX_STANDARD 17)

target_include_directories(v8_stub PRIVATE
  #${UI_PARENT_DIR}
  ${COBALT_CORE_DIR}
  ${COBALT_CORE_PARENT_DIR}
  ${COBALT_COMMON_INCLUDES}
  ${CHROMIUM_DIR} # to third_party/skia/include/core/SkWriteBuffer.h
)

target_compile_definitions(v8_stub PRIVATE
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
