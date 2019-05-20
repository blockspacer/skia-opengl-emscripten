set(modp_b64_FULL_DIR
  third_party/modp_b64/
)

set(modp_b64_INCLUDE_DIRS
  ${modp_b64_FULL_DIR}
)

# see https://github.com/chromium/chromium/tree/master/third_party/modp_b64
set(modp_b64_SOURCES
  ${modp_b64_FULL_DIR}/modp_b64.cc
  ${modp_b64_FULL_DIR}/modp_b64.h
  #${modp_b64_FULL_DIR}/modp_b64_data.h
)
