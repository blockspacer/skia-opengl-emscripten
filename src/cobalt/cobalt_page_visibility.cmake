﻿cmake_minimum_required(VERSION 2.8)

#'dependencies': [
#  '<(DEPTH)/cobalt/base/base.gyp:base',
#  '<(DEPTH)/cobalt/browser/browser_bindings_gen.gyp:generated_types',
#],
list(APPEND cobalt_page_visibility_SOURCES
  ${COBALT_CORE_DIR}page_visibility/page_visibility_state.cc
  ${COBALT_CORE_DIR}page_visibility/page_visibility_state.h
)

add_library(cobalt_page_visibility STATIC
  ${cobalt_page_visibility_SOURCES}
)

if(NOT DEFINED cobalt_starboard_headers_only_LIB)
  message(FATAL_ERROR "NOT DEFINED: cobalt_starboard_headers_only_LIB")
endif(NOT DEFINED cobalt_starboard_headers_only_LIB)

target_link_libraries(cobalt_page_visibility PUBLIC
  ${cobalt_starboard_LIB} # TODO
  ${cobalt_starboard_headers_only_LIB}
)

target_link_libraries(cobalt_page_visibility PRIVATE
  ${base_LIB} # TODO
  ${cobalt_base_LIB}
  ${modp_b64_LIB}
  #dynamic_annotations
  ${libxml_LIB}
  ${CUSTOM_ICU_LIB}
  #ced
  # NOTE: force glm from conan, otherwise we can break
  # some isolated builds (emscripten) with -system /usr/include
  CONAN_PKG::cobalt_glm
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
  COBALT_IMPLEMENTATION=1
)
