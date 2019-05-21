### --- GFX_CODEC ---###

set(GFX_CODEC_SOURCES
  #${GFX_CODEC_DIR}codec_export.h
  # TODO # ${GFX_CODEC_DIR}jpeg_codec.cc
 # TODO #${GFX_CODEC_DIR}jpeg_codec.cc
 # TODO #${GFX_CODEC_DIR}jpeg_codec.h
  # TODO # ${GFX_CODEC_DIR}png_codec.cc
  ${GFX_CODEC_DIR}png_codec.cc
  ${GFX_CODEC_DIR}png_codec.h
  ${GFX_CODEC_DIR}vector_wstream.cc
  ${GFX_CODEC_DIR}vector_wstream.h
  # is_ios
  # "jpeg_codec.cc",
  # "jpeg_codec.h",
  ${GFX_CODEC_DIR}jpeg_codec.h
)

add_library(GFX_CODEC STATIC
  ${GFX_CODEC_SOURCES}
)

if(${CMAKE_SYSTEM_NAME} STREQUAL "Linux")
  set(libjpeg_LIB libjpeg)
  set(libpng_LIB libpng)
endif()

target_link_libraries(GFX_CODEC PRIVATE
  ${libjpeg_LIB}
  ${libpng_LIB}
  dynamic_annotations
  ${BASE_LIBRARIES}
  GFX_GEOMETRY_SKIA
  GFX_GEOMETRY
  #libjpeg
  SKIA
  #
  skottie
  sksg
  skshaper
  particles
  pathkit
  wuffs
  jpeg
  #libpng
  #zlib
  base
  #
  # "//base",
  # "//skia",
  # "//third_party/libpng",
  # "//ui/gfx:geometry_skia",
  # "//ui/gfx:gfx_export",
  # "//ui/gfx/geometry",
)

set_property(TARGET GFX_CODEC PROPERTY CXX_STANDARD 17)

target_include_directories(GFX_CODEC PRIVATE
  ${GFX_CODEC_DIR}
  ${BASE_DIR}
)

target_compile_definitions(GFX_CODEC PRIVATE
  CODEC_IMPLEMENTATION=1
)
