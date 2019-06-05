### --- GFX_CODEC ---###

set(GFX_CODEC_SOURCES
  #${GFX_CODEC_DIR}codec_export.h
  # TODO # ${GFX_CODEC_DIR}jpeg_codec.cc
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

#if (NOT EMSCRIPTEN)
#  find_package(PNG REQUIRED) # PNG::PNG
#  set(libpng_LIB PNG::PNG)
#  #set(libpng_LIB GLIBPNG)
#endif()

if(USE_LIBJPEG)
  list(APPEND GFX_CODEC_SOURCES
    ${GFX_CODEC_DIR}jpeg_codec.cc
    ${GFX_CODEC_DIR}jpeg_codec.h
  )
  #
  if(EMSCRIPTEN)
    set(libjpeg_LIB GLIBJPEG)
    set(libjpeg_TURBO_LIB GLIBJPEG_TURBO)
  elseif(${CMAKE_SYSTEM_NAME} STREQUAL "Linux")
    set(libjpeg_LIB GLIBJPEG)
    set(libjpeg_TURBO_LIB GLIBJPEG_TURBO)
  else()
    message(FATAL_ERROR "platform not supported")
  endif()
endif()

add_library(GFX_CODEC STATIC
  ${GFX_CODEC_SOURCES}
)

target_link_libraries(GFX_CODEC PRIVATE
  ${libjpeg_LIB}
  ${libjpeg_TURBO_LIB}
  ${libpng_LIB}
  dynamic_annotations
  ${BASE_LIBRARIES}
  GFX_GEOMETRY_SKIA
  GFX_GEOMETRY
  #libjpeg
  ${SKIA_LIBS}
  #SKIA
  #
  #skottie
  #sksg
  #skshaper
  #particles
  #pathkit
  #${WUFFS_LIB_NAME}
  #jpeg
  #libpng
  #zlib
  ${libZLIB_LIB}
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
  USE_LIBJPEG_TURBO=1
  #USE_SYSTEM_LIBJPEG
)
