cmake_minimum_required(VERSION 3.5)

add_library(BLINK_PUBLIC_COMMON INTERFACE)

target_include_directories(BLINK_PUBLIC_COMMON INTERFACE
  ${CHROMIUM_DIR} # requires "third_party/blink/..."
)
