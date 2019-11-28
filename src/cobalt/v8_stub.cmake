cmake_minimum_required(VERSION 2.8)

list(APPEND v8_stub_SOURCES
  ${COBALT_PORT_DIR}v8_stub/v8c_array_buffer.cc
  ${COBALT_PORT_DIR}v8_stub/v8c_engine.cc
  ${COBALT_PORT_DIR}v8_stub/v8c_global_environment.cc
  ${COBALT_PORT_DIR}v8_stub/v8c_source_code.cc
  #${COBALT_PORT_DIR}v8_stub/v8c_script_value_factory.cc
  ${COBALT_PORT_DIR}v8_stub/v8c.cc
)

add_library(v8_stub STATIC
  ${v8_stub_SOURCES}
)

if(NOT DEFINED cobalt_starboard_headers_only_LIB)
  message(FATAL_ERROR "NOT DEFINED: cobalt_starboard_headers_only_LIB")
endif(NOT DEFINED cobalt_starboard_headers_only_LIB)

target_link_libraries(v8_stub PUBLIC
  ${cobalt_starboard_LIB} # TODO
  ${cobalt_starboard_headers_only_LIB}
)

target_link_libraries(v8_stub PRIVATE
  ${base_LIB} # TODO
  ${cobalt_base_LIB}
  ${cobalt_nanobase_LIB}
  cobalt_script
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
  COBALT_IMPLEMENTATION=1
)
