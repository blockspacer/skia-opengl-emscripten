### --- DEBUG_CC ---###

# TODO https://github.com/chromium/chromium/blob/master/third_party/blink/renderer/platform/BUILD.gn
set(DEBUG_CC_SOURCES
  ${DEBUG_CC_DIR}debug_colors.cc
  #${DEBUG_CC_DIR}debug_colors.h",
  #${DEBUG_CC_DIR}debug_export.h",
  ${DEBUG_CC_DIR}layer_tree_debug_state.cc
  #${DEBUG_CC_DIR}layer_tree_debug_state.h",
  ${DEBUG_CC_DIR}picture_debug_util.cc
  #${DEBUG_CC_DIR}picture_debug_util.h",
  ${DEBUG_CC_DIR}rendering_stats.cc
  #${DEBUG_CC_DIR}rendering_stats.h",
  ${DEBUG_CC_DIR}rendering_stats_instrumentation.cc
  #${DEBUG_CC_DIR}rendering_stats_instrumentation.h",
)

add_library(DEBUG_CC STATIC
  ${DEBUG_CC_SOURCES}
)

target_link_libraries(DEBUG_CC PUBLIC
  #GURL
  #GNET
  #${BASE_LIBRARIES}
  base
  SKIA
  GFX_ANIMATION
  GFX_CODEC
  GFX_COLOR_SPACE
  GFX_GEOMETRY_SKIA
  GFX_GEOMETRY
  GFX_SWITCHES
  GFX_RANGE
)

set_property(TARGET DEBUG_CC PROPERTY CXX_STANDARD 17)

target_include_directories(DEBUG_CC PRIVATE
  ${DEBUG_CC_DIR}
  ${BASE_DIR}
)

target_compile_definitions(DEBUG_CC PRIVATE
  CC_DEBUG_IMPLEMENTATION=1
)
