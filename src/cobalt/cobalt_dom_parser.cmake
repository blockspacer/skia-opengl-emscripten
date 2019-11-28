cmake_minimum_required(VERSION 2.8)

# cobalt/dom_parser/dom_parser.gyp
#
#'dependencies': [
#  '<(DEPTH)/cobalt/base/base.gyp:base',
#  '<(DEPTH)/cobalt/dom/dom.gyp:dom',
#  '<(DEPTH)/cobalt/loader/loader.gyp:loader',
#  '<(DEPTH)/net/net.gyp:net',
#  '<(DEPTH)/third_party/libxml/libxml.gyp:libxml',
#],
list(APPEND cobalt_dom_parser_SOURCES
  ${COBALT_CORE_DIR}dom_parser/html_decoder.cc
  ${COBALT_CORE_DIR}dom_parser/html_decoder.h
  ${COBALT_CORE_DIR}dom_parser/libxml_html_parser_wrapper.cc
  ${COBALT_CORE_DIR}dom_parser/libxml_html_parser_wrapper.h
  ${COBALT_CORE_DIR}dom_parser/libxml_parser_wrapper.cc
  ${COBALT_CORE_DIR}dom_parser/libxml_parser_wrapper.h
  ${COBALT_CORE_DIR}dom_parser/libxml_xml_parser_wrapper.cc
  ${COBALT_CORE_DIR}dom_parser/libxml_xml_parser_wrapper.h
  ${COBALT_CORE_DIR}dom_parser/parser.cc
  ${COBALT_CORE_DIR}dom_parser/parser.h
  ${COBALT_CORE_DIR}dom_parser/xml_decoder.cc
  ${COBALT_CORE_DIR}dom_parser/xml_decoder.h
)

add_library(cobalt_dom_parser STATIC
  ${cobalt_dom_parser_SOURCES}
)

if(NOT DEFINED cobalt_starboard_headers_only_LIB)
  message(FATAL_ERROR "NOT DEFINED: cobalt_starboard_headers_only_LIB")
endif(NOT DEFINED cobalt_starboard_headers_only_LIB)

target_link_libraries(cobalt_dom_parser PUBLIC
  ${cobalt_starboard_LIB} # TODO
  ${cobalt_starboard_headers_only_LIB}
)

target_link_libraries(cobalt_dom_parser PRIVATE
  ${base_LIB} # TODO
  ${cobalt_base_LIB}
  cobalt_dom
  cobalt_loader
  ${GNET_LIBS}
  ${GLIBXML_LIB}
)

set_property(TARGET cobalt_dom_parser PROPERTY CXX_STANDARD 17)

target_include_directories(cobalt_dom_parser PRIVATE
  #${UI_PARENT_DIR}
  ${COBALT_CORE_DIR}
  ${COBALT_CORE_PARENT_DIR}
  ${COBALT_COMMON_INCLUDES}
  ${CHROMIUM_DIR} # to third_party/skia/include/core/SkWriteBuffer.h
  ${COBALT_GEN_DOM_PARSER_PARENT_DIR}
)

target_compile_definitions(cobalt_dom_parser PRIVATE
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
  COBALT_IMPLEMENTATION=1
)
