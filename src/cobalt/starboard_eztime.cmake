cmake_minimum_required(VERSION 2.8)

#'dependencies': [
#  '<(DEPTH)/starboard/starboard_headers_only.gyp:starboard_headers_only',
#  '<(DEPTH)/starboard/client_porting/icu_init/icu_init.gyp:icu_init',
#  '<(DEPTH)/third_party/icu/icu.gyp:icui18n',
#  '<(DEPTH)/third_party/icu/icu.gyp:icuuc',
#],
set(starboard_eztime_SOURCES
  ${COBALT_PORT_DIR}/starboard/client_porting/eztime/eztime.cc
  ${COBALT_PORT_DIR}/starboard/client_porting/eztime/eztime.h
)

add_library(starboard_eztime STATIC
  ${starboard_eztime_SOURCES}
)

target_link_libraries(starboard_eztime PUBLIC
  #base # TODO
  #cobalt_base
  #starboard_common
  starboard_icu_init
  #starboard_core
  #modp_b64
)

set_property(TARGET starboard_eztime PROPERTY CXX_STANDARD 17)

target_include_directories(starboard_eztime PRIVATE
  #${UI_PARENT_DIR}
  ${COBALT_CORE_DIR}
  ${COBALT_CORE_PARENT_DIR}
  ${COBALT_COMMON_INCLUDES}
  ${CHROMIUM_DIR} # to third_party/skia/include/core/SkWriteBuffer.h
)

target_compile_definitions(starboard_eztime PRIVATE
  # starboard/linux/shared/BUILD.gn
  STARBOARD_IMPLEMENTATION=1
  #
  #BASE_IMPLEMENTATION=1
  #BASE_I18N_IMPLEMENTATION=1
  #
  ${COBALT_COMMON_DEFINES}
)

target_compile_definitions(starboard_eztime PUBLIC
  ${STARBOARD_EXTRA_PUBLIC_FLAGS}
)
