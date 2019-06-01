cmake_minimum_required(VERSION 2.8)

project(COBALT)

add_subdirectory(${CMAKE_CURRENT_SOURCE_DIR}/third_party/glm)

#include(starboard_core_headers.cmake) # just headers

#include(starboard_stub.cmake)

include(starboard_icu_init.cmake)

include(starboard_eztime.cmake) # requires starboard_icu_init

# requires EzTimeValueGetNow = starboard_eztime
 # requires SbThreadGetId = starboard_stub
include(starboard_common.cmake)

include(starboard_platform.cmake) # requires starboard_stub

include(cobalt_nanobase.cmake)

include(cobalt_base.cmake)

include(cobalt_csp.cmake)

include(cobalt_script.cmake)

include(cobalt_dom_exception.cmake)

include(cobalt_ui_navigation.cmake)

include(cobalt_math.cmake)

include(cobalt_loader.cmake)

include(cobalt_media.cmake)

include(cobalt_page_visibility.cmake)

include(cobalt_cssom.cmake)

include(cobalt_web_animations.cmake)

include(cobalt_dom.cmake)

include(COBALT.cmake)
