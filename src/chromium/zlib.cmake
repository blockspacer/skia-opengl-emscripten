### --- zlib ---###

set(zlib_DIR
  "third_party/zlib/"
)

set(zlib_SOURCES
  ${zlib_DIR}adler32.c
  #${zlib_DIR}chromeconf.h",
  ${zlib_DIR}compress.c
  ${zlib_DIR}crc32.c
  #${zlib_DIR}crc32.h",
  #${zlib_DIR}deflate.c
  #${zlib_DIR}deflate.h
  ${zlib_DIR}gzclose.c
  #${zlib_DIR}gzguts.h",
  ${zlib_DIR}gzlib.c
  ${zlib_DIR}gzread.c
  ${zlib_DIR}gzwrite.c
  ${zlib_DIR}infback.c
  ${zlib_DIR}inffast.c
  #${zlib_DIR}inffast.h",
  #${zlib_DIR}inffixed.h",
  #${zlib_DIR}inflate.h",
  ${zlib_DIR}inftrees.c
  #${zlib_DIR}inftrees.h",
  ${zlib_DIR}trees.c
  #${zlib_DIR}trees.h",
  #${zlib_DIR}uncompr.c
  ${zlib_DIR}x86.h",
  #${zlib_DIR}zconf.h",
  #${zlib_DIR}zlib.h",
  ${zlib_DIR}zutil.c
  #${zlib_DIR}zutil.h",
)

# if (current_cpu == "x86" || current_cpu == "x64")
if(${CMAKE_SYSTEM_NAME} STREQUAL "Linux")
  #list(APPEND zlib_SOURCES
  #  ${zlib_DIR}intel/filter_sse2_intrinsics.c
  #  ${zlib_DIR}intel/intel_init.c
  #)
  #set(PNG_INTEL_SSE_OPT_DEFINE PNG_INTEL_SSE_OPT=1)
  #find_package(ZLIB)
endif()

add_library(zlib STATIC
  ${zlib_SOURCES}
)

target_link_libraries(zlib PUBLIC
  #${BASE_LIBRARIES}
  #base
  #${ZLIB_LIBRARIES}
  #zlib
)

set_property(TARGET zlib PROPERTY CXX_STANDARD 17)

target_include_directories(zlib PRIVATE
  ${zlib_DIR}
  #${zlib_DIR}/include
  #${zlib_DIR}/src
  #${zlib_DIR}/src/src
  #${BASE_DIR}
)

#"//third_party/zlib",

target_compile_definitions(zlib PRIVATE
  ZLIB_IMPLEMENTATION=1
  #"ADLER32_SIMD_SSSE3",
  #"ADLER32_SIMD_NEON",
  #-mssse3 # if (use_x86_x64_optimizations)
  #CRC32_ARMV8_CRC32
  #ARMV8_OS_ANDROID
  #ARMV8_OS_LINUX
  #ARMV8_OS_FUCHSIA
  #ARMV8_OS_WINDOWS
  #INFLATE_CHUNK_SIMD_SSE2
  #INFLATE_CHUNK_READ_64LE
  #INFLATE_CHUNK_SIMD_NEON
  #CRC32_SIMD_SSE42_PCLMUL
  USE_FILE32API=1 # if (is_mac || is_ios || is_android || is_nacl)
)
