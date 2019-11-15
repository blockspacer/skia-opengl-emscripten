cmake_minimum_required(VERSION 2.8)


# skia_cobalt.gypi
# TODO: uses outdated skia ver!
set(COBALT_skia_cobalt_SOURCES
  ${COBALT_CORE_DIR}/renderer/rasterizer/skia/skia/config/SkUserConfig.h
  ${COBALT_CORE_DIR}/renderer/rasterizer/skia/skia/src/effects/SkNV122RGBShader.cc
  ${COBALT_CORE_DIR}/renderer/rasterizer/skia/skia/src/effects/SkNV122RGBShader.h
  ${COBALT_CORE_DIR}/renderer/rasterizer/skia/skia/src/effects/SkYUV2RGBShader.cc
  ${COBALT_CORE_DIR}/renderer/rasterizer/skia/skia/src/effects/SkYUV2RGBShader.h
  ${COBALT_CORE_DIR}/renderer/rasterizer/skia/skia/src/google_logging.cc
  ${COBALT_CORE_DIR}/renderer/rasterizer/skia/skia/src/ports/SkFontConfigParser_cobalt.cc
  ${COBALT_CORE_DIR}/renderer/rasterizer/skia/skia/src/ports/SkFontConfigParser_cobalt.h
  ${COBALT_CORE_DIR}/renderer/rasterizer/skia/skia/src/ports/SkFontMgr_cobalt.cc
  ${COBALT_CORE_DIR}/renderer/rasterizer/skia/skia/src/ports/SkFontMgr_cobalt.h
  ${COBALT_CORE_DIR}/renderer/rasterizer/skia/skia/src/ports/SkFontMgr_cobalt_factory.cc
  ${COBALT_CORE_DIR}/renderer/rasterizer/skia/skia/src/ports/SkFontStyleSet_cobalt.cc
  ${COBALT_CORE_DIR}/renderer/rasterizer/skia/skia/src/ports/SkFontStyleSet_cobalt.h
  ${COBALT_CORE_DIR}/renderer/rasterizer/skia/skia/src/ports/SkFontUtil_cobalt.cc
  ${COBALT_CORE_DIR}/renderer/rasterizer/skia/skia/src/ports/SkFontUtil_cobalt.h
  ## TODO ## ${COBALT_CORE_DIR}/renderer/rasterizer/skia/skia/src/ports/SkFreeType_cobalt.cc
  ## TODO ## ${COBALT_CORE_DIR}/renderer/rasterizer/skia/skia/src/ports/SkFreeType_cobalt.h
  ## TODO ## ${COBALT_CORE_DIR}/renderer/rasterizer/skia/skia/src/ports/SkOSFile_cobalt.cc
  ## TODO ## ${COBALT_CORE_DIR}/renderer/rasterizer/skia/skia/src/ports/SkOSFile_cobalt.h
  ${COBALT_CORE_DIR}/renderer/rasterizer/skia/skia/src/ports/SkStream_cobalt.cc
  ${COBALT_CORE_DIR}/renderer/rasterizer/skia/skia/src/ports/SkStream_cobalt.h
  ${COBALT_CORE_DIR}/renderer/rasterizer/skia/skia/src/ports/SkTypeface_cobalt.cc
  ${COBALT_CORE_DIR}/renderer/rasterizer/skia/skia/src/ports/SkTypeface_cobalt.h
  ${COBALT_CORE_DIR}/renderer/rasterizer/skia/skia/src/ports/SkTLS_cobalt.cc
  ${COBALT_CORE_DIR}/renderer/rasterizer/skia/skia/src/ports/SkTime_cobalt.cc
)

add_library(cobalt_renderer STATIC
  ${COBALT_skia_cobalt_SOURCES}
)

target_link_libraries(cobalt_renderer PRIVATE
  base # TODO
  cobalt_base
  cobalt_dom
  cobalt_loader
  cobalt_layout
  cobalt_render_tree
  cobalt_ui_navigation
  cobalt_system_window
  icu
  starboard_platform
  #starboard_core
  starboard_eztime
  starboard_common
  modp_b64
  dynamic_annotations
  ${GLIBXML_LIB}
  icu
  ced
  glm
  ${SKIA_LIB}
  ${HARFBUZZ_LIBRARIES}
  # khronos
  ${khronos_LIB} # on _WIN32
)

set_property(TARGET cobalt_renderer PROPERTY CXX_STANDARD 17)

target_include_directories(cobalt_renderer PRIVATE
  #${UI_PARENT_DIR}
  ${COBALT_CORE_DIR}
  ${COBALT_CORE_PARENT_DIR}
  ${COBALT_COMMON_INCLUDES}
)

target_compile_definitions(cobalt_renderer PRIVATE
  #FORCE_VIDEO_EXTERNAL_MESH=1
  #
  ${COBALT_COMMON_DEFINES}
  # renderer
  # see https://cobalt.googlesource.com/cobalt/+/RELEASE_9/src/cobalt/doc/performance_tuning.md#framerate-throttling
  # 33ms = 30 FPS
  COBALT_MINIMUM_FRAME_TIME_IN_MILLISECONDS=33
  #COBALT_MINIMUM_FRAME_TIME_IN_MILLISECONDS=1000
  #ENABLE_MAP_TO_MESH=1
)
