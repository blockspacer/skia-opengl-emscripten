### --- libyuv ---###

set(libyuv_DIR ${CHROMIUM_DIR}third_party/libyuv/)

list(APPEND libyuv_SOURCES
  ${libyuv_DIR}source/compare.cc
  ${libyuv_DIR}source/compare_common.cc
  ${libyuv_DIR}source/compare_gcc.cc
  ${libyuv_DIR}source/compare_win.cc
  ${libyuv_DIR}source/convert.cc
  ${libyuv_DIR}source/convert_argb.cc
  ${libyuv_DIR}source/convert_from.cc
  ${libyuv_DIR}source/convert_from_argb.cc
  ${libyuv_DIR}source/convert_jpeg.cc
  ${libyuv_DIR}source/convert_to_argb.cc
  ${libyuv_DIR}source/convert_to_i420.cc
  ${libyuv_DIR}source/cpu_id.cc
  ${libyuv_DIR}source/mjpeg_decoder.cc
  ${libyuv_DIR}source/mjpeg_validate.cc
  ${libyuv_DIR}source/planar_functions.cc
  ${libyuv_DIR}source/rotate.cc
  ${libyuv_DIR}source/rotate_any.cc
  ${libyuv_DIR}source/rotate_argb.cc
  ${libyuv_DIR}source/rotate_common.cc
  ${libyuv_DIR}source/rotate_gcc.cc
  ${libyuv_DIR}source/rotate_win.cc
  ${libyuv_DIR}source/row_any.cc
  ${libyuv_DIR}source/row_common.cc
  ${libyuv_DIR}source/row_gcc.cc
  ${libyuv_DIR}source/row_win.cc
  ${libyuv_DIR}source/scale.cc
  ${libyuv_DIR}source/scale_any.cc
  ${libyuv_DIR}source/scale_argb.cc
  ${libyuv_DIR}source/scale_common.cc
  ${libyuv_DIR}source/scale_gcc.cc
  ${libyuv_DIR}source/scale_win.cc
  ${libyuv_DIR}source/video_common.cc
  # executable
  #util/compare.cc
  # executable
  #util/yuvconvert.cc
  # executable
  #util/psnr.cc",
  #util/psnr_main.cc",
  #util/ssim.cc",
  # executable
  #util/cpuid.c
)

add_library(libyuv STATIC
  ${libyuv_SOURCES}
)

#if(SUPPORTS_JPEG)
  #list(APPEND libyuv_SOURCES
  # #
  #)
  #
  #if(TARGET_EMSCRIPTEN)
  #  set(libjpeg_LIB GLIBJPEG)
  #  set(libjpeg_TURBO_LIB GLIBJPEG_TURBO)
  #elseif(TARGET_LINUX)
  #  set(libjpeg_LIB GLIBJPEG)
  #  set(libjpeg_TURBO_LIB GLIBJPEG_TURBO)
  #else()
  #  message(FATAL_ERROR "platform not supported")
  #endif()
#endif(SUPPORTS_JPEG)

target_link_libraries(libyuv PRIVATE
  #${libjpeg_LIB}
  ${libjpeg_TURBO_LIB}
  ${libZLIB_LIB}
  #JPEG
  #
  #base
  #GLIBXML
  #GZLIB
  ##freetype
  #${FREETYPE_LIBRARIES}
  #${LibUUID_LIBRARIES}
)

set_property(TARGET libyuv PROPERTY CXX_STANDARD 17)

target_include_directories(libyuv PRIVATE
  ${libyuv_DIR}
  #${libyuv_DIR}/include/src # requires fcstdint.h
  #${libyuv_DIR}/src
  #${libyuv_DIR}/src/src
  ##${BASE_DIR}
  #${FREETYPE_INCLUDE_DIRS}
  #${LibUUID_INCLUDE_DIRS}
)

target_include_directories(libyuv PUBLIC
  ${libyuv_DIR}/include
)

target_compile_definitions(libyuv PRIVATE
  HAVE_JPEG=1 # libyuv_disable_jpeg
  #LIBYUV_DISABLE_X86
  LIBYUV_DISABLE_NEON=1
  #LIBYUV_USING_SHARED_LIBRARY
)
