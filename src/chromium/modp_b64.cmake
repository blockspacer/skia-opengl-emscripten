set(modp_b64_FULL_DIR third_party/modp_b64/)

set(modp_b64_INCLUDE_DIRS ${modp_b64_FULL_DIR})

# see https://github.com/chromium/chromium/tree/master/third_party/modp_b64
list(APPEND modp_b64_SOURCES
  ${modp_b64_FULL_DIR}/modp_b64.cc
  ${modp_b64_FULL_DIR}/modp_b64.h
  #${modp_b64_FULL_DIR}/modp_b64_data.h
)

add_library(modp_b64 STATIC
  ${modp_b64_SOURCES}
)

set_property(TARGET modp_b64 PROPERTY CXX_STANDARD 17)

target_include_directories(modp_b64 PUBLIC
  ${modp_b64_FULL_DIR}
  ${CHROMIUM_DIR} # must include build/build_config.h
)

target_compile_definitions(modp_b64 PUBLIC
  #${LIBEVENT_DEFINES}
  #${WTF_EMCC_DEFINITIONS}
  #${WTF_COMMON_DEFINITIONS}
)
