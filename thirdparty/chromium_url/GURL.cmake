## --- GURL ---###

if(NOT DEFINED CHROMIUM_DIR)
  message(FATAL_ERROR "NOT DEFINED: CHROMIUM_DIR")
endif(NOT DEFINED CHROMIUM_DIR)

# path to url/gurl.h
set(GURL_PARENT_DIR
  ${CHROMIUM_DIR}
)

# TODO https://github.com/chromium/chromium/blob/master/third_party/blink/renderer/platform/BUILD.gn
list(APPEND GURL_SOURCES
  ${GURL_DIR}gurl.cc
  #${GURL_DIR}gurl.h",
  ${GURL_DIR}origin.cc
  #${GURL_DIR}origin.h",
  ${GURL_DIR}scheme_host_port.cc
  #${GURL_DIR}scheme_host_port.h",
  ${GURL_DIR}third_party/mozilla/url_parse.cc
  #${GURL_DIR}third_party/mozilla/url_parse.h",
  ${GURL_DIR}url_canon.cc
  #${GURL_DIR}url_canon.h",
  ${GURL_DIR}url_canon_etc.cc
  ${GURL_DIR}url_canon_filesystemurl.cc
  ${GURL_DIR}url_canon_fileurl.cc
  ${GURL_DIR}url_canon_host.cc
  ${GURL_DIR}url_canon_internal.cc
  #${GURL_DIR}url_canon_internal.h",
  #${GURL_DIR}url_canon_internal_file.h",
  ${GURL_DIR}url_canon_ip.cc
  #${GURL_DIR}url_canon_ip.h",
  ${GURL_DIR}url_canon_mailtourl.cc
  ${GURL_DIR}url_canon_path.cc
  ${GURL_DIR}url_canon_pathurl.cc
  ${GURL_DIR}url_canon_query.cc
  ${GURL_DIR}url_canon_relative.cc
  ${GURL_DIR}url_canon_stdstring.cc
  #${GURL_DIR}url_canon_stdstring.h",
  ${GURL_DIR}url_canon_stdurl.cc
  ${GURL_DIR}url_constants.cc
  #${GURL_DIR}url_constants.h",
  #${GURL_DIR}url_file.h",
  ${GURL_DIR}url_parse_file.cc
  #${GURL_DIR}url_parse_internal.h",
  ${GURL_DIR}url_util.cc
  #${GURL_DIR}url_util.h",
  #${GURL_DIR}url_util_internal.h",
  #
  # icu, use_platform_icu_alternatives
  #
  ${GURL_DIR}url_canon_icu.cc
  #${GURL_DIR}url_canon_icu.h",
  ${GURL_DIR}url_idna_icu.cc
  #
)

add_library(GURL STATIC
  ${GURL_SOURCES}
)

if(NOT DEFINED base_LIB)
  message(FATAL_ERROR "NOT DEFINED: base_LIB")
endif(NOT DEFINED base_LIB)

target_link_libraries(GURL PRIVATE #PUBLIC
  ${base_LIB} # TODO: header only
)

target_link_libraries(GURL PRIVATE
  ${STARBOARD_PLATFORM_LIB}
  #starboard_core
  ${STARBOARD_EZTIME_LIB}
  ${STARBOARD_COMMON_LIB}
  ${modp_b64_LIB}
  #${BASE_LIBRARIES}
  ${CUSTOM_ICU_LIB}
  ${HARFBUZZ_LIBRARIES}
)

set_property(TARGET GURL PROPERTY CXX_STANDARD 17)

target_include_directories(GURL PRIVATE
  ${GURL_PARENT_DIR}
  #${GURL_DIR}
  # TODO
  #${COBALT_COMMON_INCLUDES}
)
#
#target_include_directories(GURL PUBLIC
#  ${COBALT_COMMON_INCLUDES}
#)

#target_compile_definitions(GURL PUBLIC
#  ${COBALT_COMMON_DEFINES}
#)

target_compile_definitions(GURL PRIVATE
  IS_URL_IMPL=1
  # TODO
  #${COBALT_COMMON_DEFINES}
)
