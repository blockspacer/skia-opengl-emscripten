cmake_minimum_required(VERSION 2.8)

# cobalt/css_parser/css_parser.gyp
#
## Scanner exposes UChar32 in a header.
#'direct_dependent_settings': {
#  'include_dirs': [
#    '<(DEPTH)/third_party/icu/source/common',
#  ],
#},
#'dependencies': [
#  '<(DEPTH)/cobalt/base/base.gyp:base',
#  '<(DEPTH)/cobalt/cssom/cssom.gyp:cssom',
#  '<(DEPTH)/nb/nb.gyp:nb',
#  '<(DEPTH)/third_party/icu/icu.gyp:icuuc',
#  'css_grammar',
#],
list(APPEND cobalt_css_parser_SOURCES
  ${COBALT_CORE_DIR}css_parser/animation_shorthand_property_parse_structures.cc
  ${COBALT_CORE_DIR}css_parser/animation_shorthand_property_parse_structures.h
  ${COBALT_CORE_DIR}css_parser/background_shorthand_property_parse_structures.cc
  ${COBALT_CORE_DIR}css_parser/background_shorthand_property_parse_structures.h
  ${COBALT_CORE_DIR}css_parser/border_shorthand_property_parse_structures.cc
  ${COBALT_CORE_DIR}css_parser/border_shorthand_property_parse_structures.h
  ${COBALT_CORE_DIR}css_parser/flex_shorthand_property_parse_structures.cc
  ${COBALT_CORE_DIR}css_parser/flex_shorthand_property_parse_structures.h
  ${COBALT_CORE_DIR}css_parser/font_shorthand_property_parse_structures.cc
  ${COBALT_CORE_DIR}css_parser/font_shorthand_property_parse_structures.h
  ${COBALT_CORE_DIR}css_parser/margin_or_padding_shorthand.cc
  ${COBALT_CORE_DIR}css_parser/margin_or_padding_shorthand.h
  ${COBALT_CORE_DIR}css_parser/parser.cc
  ${COBALT_CORE_DIR}css_parser/parser.h
  ${COBALT_CORE_DIR}css_parser/position_parse_structures.cc
  ${COBALT_CORE_DIR}css_parser/position_parse_structures.h
  ${COBALT_CORE_DIR}css_parser/property_declaration.h
  ${COBALT_CORE_DIR}css_parser/ref_counted_util.h
  ${COBALT_CORE_DIR}css_parser/scanner.cc
  ${COBALT_CORE_DIR}css_parser/scanner.h
  ${COBALT_CORE_DIR}css_parser/shadow_property_parse_structures.cc
  ${COBALT_CORE_DIR}css_parser/shadow_property_parse_structures.h
  ${COBALT_CORE_DIR}css_parser/string_pool.h
  ${COBALT_CORE_DIR}css_parser/text_decoration_shorthand_property_parse_structures.cc
  ${COBALT_CORE_DIR}css_parser/text_decoration_shorthand_property_parse_structures.h
  ${COBALT_CORE_DIR}css_parser/transition_shorthand_property_parse_structures.cc
  ${COBALT_CORE_DIR}css_parser/transition_shorthand_property_parse_structures.h
  ${COBALT_CORE_DIR}css_parser/trivial_string_piece.h
  ${COBALT_CORE_DIR}css_parser/trivial_type_pairs.h
)

add_library(cobalt_css_parser STATIC
  ${cobalt_css_parser_SOURCES}
)

if(NOT DEFINED cobalt_starboard_headers_only_LIB)
  message(FATAL_ERROR "NOT DEFINED: cobalt_starboard_headers_only_LIB")
endif(NOT DEFINED cobalt_starboard_headers_only_LIB)

target_link_libraries(cobalt_css_parser PUBLIC
  ${cobalt_starboard_LIB} # TODO
  ${cobalt_starboard_headers_only_LIB}
)

target_link_libraries(cobalt_css_parser PRIVATE
  ${base_LIB} # TODO
  ${cobalt_base_LIB}
  cobalt_cssom
  ${cobalt_nanobase_LIB}
  ${CUSTOM_ICU_LIB}
)

set_property(TARGET cobalt_css_parser PROPERTY CXX_STANDARD 17)

target_include_directories(cobalt_css_parser PRIVATE
  #${UI_PARENT_DIR}
  ${COBALT_CORE_DIR}
  ${COBALT_CORE_PARENT_DIR}
  ${COBALT_COMMON_INCLUDES}
  #${CHROMIUM_DIR} # to third_party/skia/include/core/SkWriteBuffer.h
  ${COBALT_GEN_CSS_PARSER_PARENT_DIR}
)

target_compile_definitions(cobalt_css_parser PRIVATE
  ${COBALT_COMMON_DEFINES}
)
