include_guard( DIRECTORY )

list(APPEND url_SOURCES
  ${url_DIR}gurl.cc
  #${url_DIR}gurl.h",
  ${url_DIR}origin.cc
  #${url_DIR}origin.h",
  ${url_DIR}scheme_host_port.cc
  #${url_DIR}scheme_host_port.h",
  ${url_DIR}third_party/mozilla/url_parse.cc
  #${url_DIR}third_party/mozilla/url_parse.h",
  ${url_DIR}url_canon.cc
  #${url_DIR}url_canon.h",
  ${url_DIR}url_canon_etc.cc
  ${url_DIR}url_canon_filesystemurl.cc
  ${url_DIR}url_canon_fileurl.cc
  ${url_DIR}url_canon_host.cc
  ${url_DIR}url_canon_internal.cc
  #${url_DIR}url_canon_internal.h",
  #${url_DIR}url_canon_internal_file.h",
  ${url_DIR}url_canon_ip.cc
  #${url_DIR}url_canon_ip.h",
  ${url_DIR}url_canon_mailtourl.cc
  ${url_DIR}url_canon_path.cc
  ${url_DIR}url_canon_pathurl.cc
  ${url_DIR}url_canon_query.cc
  ${url_DIR}url_canon_relative.cc
  ${url_DIR}url_canon_stdstring.cc
  #${url_DIR}url_canon_stdstring.h",
  ${url_DIR}url_canon_stdurl.cc
  ${url_DIR}url_constants.cc
  #${url_DIR}url_constants.h",
  #${url_DIR}url_file.h",
  ${url_DIR}url_parse_file.cc
  #${url_DIR}url_parse_internal.h",
  ${url_DIR}url_util.cc
  #${url_DIR}url_util.h",
  #${url_DIR}url_util_internal.h",
  #
  # icu, use_platform_icu_alternatives
  #
  ${url_DIR}url_canon_icu.cc
  #${url_DIR}url_canon_icu.h",
  ${url_DIR}url_idna_icu.cc
)
