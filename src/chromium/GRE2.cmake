## --- GRE2 ---###

set(GRE2_SOURCES
 ${GRE2_DIR}src/re2/bitmap256.h
 ${GRE2_DIR}src/re2/bitstate.cc
 ${GRE2_DIR}src/re2/compile.cc
 ${GRE2_DIR}src/re2/dfa.cc
 ${GRE2_DIR}src/re2/filtered_re2.cc
 ${GRE2_DIR}src/re2/filtered_re2.h
 ${GRE2_DIR}src/re2/mimics_pcre.cc
 ${GRE2_DIR}src/re2/nfa.cc
 ${GRE2_DIR}src/re2/onepass.cc
 ${GRE2_DIR}src/re2/parse.cc
 ${GRE2_DIR}src/re2/perl_groups.cc
 ${GRE2_DIR}src/re2/prefilter.cc
 ${GRE2_DIR}src/re2/prefilter.h
 ${GRE2_DIR}src/re2/prefilter_tree.cc
 ${GRE2_DIR}src/re2/prefilter_tree.h
 ${GRE2_DIR}src/re2/prog.cc
 ${GRE2_DIR}src/re2/prog.h
 ${GRE2_DIR}src/re2/re2.cc
 ${GRE2_DIR}src/re2/re2.h
 ${GRE2_DIR}src/re2/regexp.cc
 ${GRE2_DIR}src/re2/regexp.h
 ${GRE2_DIR}src/re2/set.cc
 ${GRE2_DIR}src/re2/set.h
 ${GRE2_DIR}src/re2/simplify.cc
 ${GRE2_DIR}src/re2/stringpiece.cc
 ${GRE2_DIR}src/re2/stringpiece.h
 ${GRE2_DIR}src/re2/tostring.cc
 ${GRE2_DIR}src/re2/unicode_casefold.cc
 ${GRE2_DIR}src/re2/unicode_casefold.h
 ${GRE2_DIR}src/re2/unicode_groups.cc
 ${GRE2_DIR}src/re2/unicode_groups.h
 ${GRE2_DIR}src/re2/walker-inl.h
 ${GRE2_DIR}src/util/flags.h
 ${GRE2_DIR}src/util/logging.h
 ${GRE2_DIR}src/util/mix.h
 ${GRE2_DIR}src/util/mutex.h
 ${GRE2_DIR}src/util/rune.cc
 ${GRE2_DIR}src/util/sparse_array.h
 ${GRE2_DIR}src/util/sparse_set.h
 ${GRE2_DIR}src/util/strutil.cc
 ${GRE2_DIR}src/util/strutil.h
 ${GRE2_DIR}src/util/utf.h
 ${GRE2_DIR}src/util/util.h
)

add_library(GRE2 STATIC
  ${GRE2_SOURCES}
)

target_link_libraries(GRE2 PRIVATE
  base
  #GCRYPTO
  #GURL
  # sql
  # protobuf
  # libnss or boringssl
  # libnspr
  # open-vcdiff
  #dynamic_annotations
)

set_property(TARGET GRE2 PROPERTY CXX_STANDARD 17)

# TODO
# target_include_directories(GRE2 PUBLIC
#   ${GRE2_DIR}
#   ${GRE2_DIR}/src
#   #${GRE2_DIR}/util
#   #${BASE_DIR}
# )

target_include_directories(GRE2 PRIVATE
  ${GRE2_DIR}
  ${GRE2_DIR}/src
  #${GRE2_DIR}/util
  #${BASE_DIR}
)

target_compile_definitions(GRE2 PRIVATE
  #NET_DISABLE_BROTLI=1
  #NET_IMPLEMENTATION=1
  #IS_NET_EXTRAS_IMPL
  #DLOPEN_KERBEROS
  #ENABLE_BUILT_IN_DNS
)
