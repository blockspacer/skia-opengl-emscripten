cmake_minimum_required(VERSION 2.8)

#'dependencies': [
# '<(DEPTH)/starboard/starboard_headers_only.gyp:starboard_headers_only',
# '<(DEPTH)/third_party/icu/icu.gyp:icui18n',
# '<(DEPTH)/third_party/icu/icu.gyp:icuuc',
#],
list(APPEND starboard_icu_init_SOURCES
  ${COBALT_PORT_DIR}/starboard/client_porting/icu_init/icu_init.cc
  ${COBALT_PORT_DIR}/starboard/client_porting/icu_init/icu_init.h
)

add_library(starboard_icu_init STATIC
  ${starboard_icu_init_SOURCES}
)

target_link_libraries(starboard_icu_init PRIVATE
  base # for "base/base_export.h"
  icu
  #ced
  glm
)

set_property(TARGET starboard_icu_init PROPERTY CXX_STANDARD 17)

target_include_directories(starboard_icu_init PRIVATE
  #${UI_PARENT_DIR}
  ${COBALT_CORE_DIR}
  ${COBALT_CORE_PARENT_DIR}
  ${COBALT_COMMON_INCLUDES}
  ${CHROMIUM_DIR} # to third_party/skia/include/core/SkWriteBuffer.h
)

target_compile_definitions(starboard_icu_init PRIVATE
  # starboard/linux/shared/BUILD.gn
  STARBOARD_IMPLEMENTATION=1
  #
  #BASE_IMPLEMENTATION=1
  #BASE_I18N_IMPLEMENTATION=1
  #
  ${COBALT_COMMON_DEFINES}
)

target_compile_definitions(starboard_icu_init PUBLIC
  ${STARBOARD_EXTRA_PUBLIC_FLAGS}
)

