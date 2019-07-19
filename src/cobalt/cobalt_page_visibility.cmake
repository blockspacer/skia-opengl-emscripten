cmake_minimum_required(VERSION 2.8)

#'dependencies': [
#  '<(DEPTH)/cobalt/base/base.gyp:base',
#  '<(DEPTH)/cobalt/browser/browser_bindings_gen.gyp:generated_types',
#],
set(cobalt_page_visibility_SOURCES
  ${COBALT_CORE_DIR}page_visibility/page_visibility_state.cc
  ${COBALT_CORE_DIR}page_visibility/page_visibility_state.h
)

add_library(cobalt_page_visibility STATIC
  ${cobalt_page_visibility_SOURCES}
)

target_link_libraries(cobalt_page_visibility PUBLIC
  base # TODO
  cobalt_base
  #cobalt_browser ## TODO ##
  #cobalt_nanobase
  #cobalt_script
  #v8_stub
  base # TODO
  modp_b64
  dynamic_annotations
  ${GLIBXML_LIB}
  icu
  ced
  glm
)

set_property(TARGET cobalt_page_visibility PROPERTY CXX_STANDARD 17)

target_include_directories(cobalt_page_visibility PRIVATE
  #${UI_PARENT_DIR}
  ${COBALT_CORE_DIR}
  ${COBALT_CORE_PARENT_DIR}
  ${COBALT_COMMON_INCLUDES}
  ${CHROMIUM_DIR} # to third_party/skia/include/core/SkWriteBuffer.h
)

target_compile_definitions(cobalt_page_visibility PRIVATE
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
