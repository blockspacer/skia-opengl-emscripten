# see https://github.com/chromium/chromium/blob/4273996759e4c956d7f5303cd289ffc034f30ab5/components/content_settings/core/common/BUILD.gn

### --- COMPONENTS_CONTENT_SETTINGS_CORE_COMMON ---###

# TODO https://github.com/chromium/chromium/blob/master/third_party/blink/renderer/platform/BUILD.gn
set(COMPONENTS_CONTENT_SETTINGS_CORE_COMMON_SOURCES
  ${COMPONENTS_CONTENT_SETTINGS_CORE_COMMON_DIR}content_settings.cc
  #${COMPONENTS_CONTENT_SETTINGS_CORE_COMMON_DIR}content_settings.h",
  ${COMPONENTS_CONTENT_SETTINGS_CORE_COMMON_DIR}content_settings_pattern.cc
  #${COMPONENTS_CONTENT_SETTINGS_CORE_COMMON_DIR}content_settings_pattern.h",
  ${COMPONENTS_CONTENT_SETTINGS_CORE_COMMON_DIR}content_settings_pattern_parser.cc
  #${COMPONENTS_CONTENT_SETTINGS_CORE_COMMON_DIR}content_settings_pattern_parser.h",
  #${COMPONENTS_CONTENT_SETTINGS_CORE_COMMON_DIR}content_settings_types.h",
  #${COMPONENTS_CONTENT_SETTINGS_CORE_COMMON_DIR}content_settings_utils.cc
  #${COMPONENTS_CONTENT_SETTINGS_CORE_COMMON_DIR}content_settings_utils.h",
  ${COMPONENTS_CONTENT_SETTINGS_CORE_COMMON_DIR}cookie_settings_base.cc
  #${COMPONENTS_CONTENT_SETTINGS_CORE_COMMON_DIR}cookie_settings_base.h",
  ${COMPONENTS_CONTENT_SETTINGS_CORE_COMMON_DIR}pref_names.cc
  #${COMPONENTS_CONTENT_SETTINGS_CORE_COMMON_DIR}pref_names.h",
)

add_library(COMPONENTS_CONTENT_SETTINGS_CORE_COMMON STATIC
  ${COMPONENTS_CONTENT_SETTINGS_CORE_COMMON_SOURCES}
)

target_link_libraries(COMPONENTS_CONTENT_SETTINGS_CORE_COMMON PUBLIC
  #deps = [
  #  "//base",
  #  "//mojo/public/cpp/base",
  #  "//mojo/public/cpp/bindings:struct_traits",
  #  "//net",
  #  "//url",
  #]
  base
  MOJO
  ${GNET_LIBS}
  GURL
  #BLINK_PUBLIC_COMMON
  #GURL
  #GNET
  #GCRYPTO
  #GFX_GEOMETRY
  #UI_GFX
  ## mojo
  ## services/service_manager
  ## services/ws/public/cpp/gpu
  ##${BASE_LIBRARIES}
  #base
  #SKIA
  #skcms
  #ced
  ## emoji-segmenter
  ## webrtc
  ## zlib
  ## icu
  #CC
  #G_GPU
)

set_property(TARGET COMPONENTS_CONTENT_SETTINGS_CORE_COMMON PROPERTY CXX_STANDARD 17)

target_include_directories(COMPONENTS_CONTENT_SETTINGS_CORE_COMMON PRIVATE
  ${COMPONENTS_CONTENT_SETTINGS_CORE_COMMON_DIR}
  #${BASE_DIR}
)

target_include_directories(COMPONENTS_CONTENT_SETTINGS_CORE_COMMON PUBLIC
  ${GEN_COMBINED_DIR}
  ${GEN_COMPONENTS_CONTENT_SETTINGS_CORE_COMMON_DIR}
)

target_compile_definitions(COMPONENTS_CONTENT_SETTINGS_CORE_COMMON PRIVATE
  #COMPONENTS_CONTENT_SETTINGS_CORE_COMMON_IMPLEMENTATION=1
  # USING_V8_SHARED
  #
  # if (blink_animation_use_time_delta)
  #BLINK_ANIMATION_USE_TIME_DELTA
  #
  #
  # if (is_android && notouch_build)
  #
  #ENABLE_TOUCHLESS_UASTYLE_THEME
)
