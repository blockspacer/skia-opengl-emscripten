### --- BLINK_CORE ---###

# TODO https://github.com/chromium/chromium/blob/master/third_party/blink/renderer/platform/BUILD.gn
set(BLINK_CORE_SOURCES
  ${BLINK_CORE_DIR}
)

add_library(BLINK_CORE STATIC
  ${BLINK_CORE_SOURCES}
)

target_link_libraries(BLINK_CORE PUBLIC
  GURL
  GNET
  GCRYPTO
  GFX_GEOMETRY
  G_GFX
  # mojo
  # services/service_manager
  # services/ws/public/cpp/gpu
  #${BASE_LIBRARIES}
  base
  SKIA
  skcms
  ced
  # emoji-segmenter
  # webrtc
  # zlib
  # icu
  CC
  G_GPU
)

set_property(TARGET BLINK_CORE PROPERTY CXX_STANDARD 17)

target_include_directories(BLINK_CORE PRIVATE
  ${BLINK_CORE_DIR}
  #${BASE_DIR}
)

target_compile_definitions(BLINK_CORE PRIVATE
  BLINK_CORE_IMPLEMENTATION=1
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
