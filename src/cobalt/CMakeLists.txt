cmake_minimum_required(VERSION 2.8)

project(COBALT)

#add_subdirectory(${CMAKE_CURRENT_SOURCE_DIR}/third_party/glm)

#include(starboard_core_headers.cmake) # just headers

#include(starboard_stub.cmake)

#include(xdg_mime.cmake)

#include(xdg_user_dirs.cmake)

#include(starboard_icu_init.cmake)

#include(starboard_eztime.cmake) # requires starboard_icu_init

# requires EzTimeValueGetNow = starboard_eztime
 # requires SbThreadGetId = starboard_stub
#include(starboard_common.cmake)

#include(starboard_platform.cmake) # requires starboard_stub

#include(cobalt_base.cmake)

if(ENABLE_COBALT_CSP)
  include(cobalt_csp.cmake)
endif(ENABLE_COBALT_CSP)

include(cobalt_script.cmake)

include(v8_stub.cmake)

include(cobalt_system_window.cmake)

include(cobalt_dom_exception.cmake)

include(cobalt_ui_navigation.cmake)

include(cobalt_math.cmake)

#if(ENABLE_GNET)
include(cobalt_loader.cmake)
#endif()

if(ENABLE_COBALT_MEDIA)
  include(cobalt_media.cmake)
endif(ENABLE_COBALT_MEDIA)

include(cobalt_page_visibility.cmake)

include(cobalt_cssom.cmake)

include(cobalt_web_animations.cmake)

include(cobalt_dom.cmake)

include(cobalt_layout.cmake)

if(ENABLE_GLIBXML AND ENABLE_COBALT_DOM_PARSER)
  include(cobalt_dom_parser.cmake)
endif(ENABLE_GLIBXML AND ENABLE_COBALT_DOM_PARSER)

include(cobalt_css_parser.cmake)

if(ENABLE_COBALT_GLIMP)
  include(cobalt_glimp.cmake)
endif(ENABLE_COBALT_GLIMP)

if(ENABLE_COBALT_RENDER_TREE)
  include(cobalt_render_tree.cmake)
endif(ENABLE_COBALT_RENDER_TREE)

if(ENABLE_COBALT_RENDERER)
  include(${COBALT_RENDERER_LIB_FILE_NAME}.cmake)
endif(ENABLE_COBALT_RENDERER)

include(cobalt_overlay_info.cmake)

include(cobalt_input.cmake)

include(COBALT.cmake)
