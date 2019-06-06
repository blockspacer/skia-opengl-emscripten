cmake_minimum_required(VERSION 2.8)

# 'dependencies': [
#   '<(DEPTH)/cobalt/script/script.gyp:script',
# ],
set(COBALT_dom_exception_SOURCES
  ${COBALT_CORE_DIR}dom/dom_exception.cc
  #${COBALT_CORE_DIR}dom/dom_exception.h
)

add_library(cobalt_dom_exception STATIC
  ${COBALT_dom_exception_SOURCES}
)

target_link_libraries(cobalt_dom_exception PUBLIC
  #cobalt_base
  #cobalt_nanobase
  cobalt_script
  v8_stub
  #base # TODO
  #modp_b64
)

set_property(TARGET cobalt_dom_exception PROPERTY CXX_STANDARD 17)

target_include_directories(cobalt_dom_exception PRIVATE
  #${UI_PARENT_DIR}
  ${COBALT_CORE_DIR}
  ${COBALT_CORE_PARENT_DIR}
  ${COBALT_COMMON_INCLUDES}
  ${CHROMIUM_DIR} # to third_party/skia/include/core/SkWriteBuffer.h
)

target_compile_definitions(cobalt_dom_exception PRIVATE
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
