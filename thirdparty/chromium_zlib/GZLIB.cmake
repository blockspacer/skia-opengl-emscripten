### --- GZLIB ---###

set(GZLIB_DIR third_party/zlib/)

list(APPEND GZLIB_SOURCES
  ${GZLIB_DIR}adler32.c
  #${GZLIB_DIR}chromeconf.h
  ${GZLIB_DIR}compress.c
  ${GZLIB_DIR}crc32.c
  #${GZLIB_DIR}crc32.h
  ${GZLIB_DIR}deflate.c
  #${GZLIB_DIR}deflate.h
  ${GZLIB_DIR}gzclose.c
  #${GZLIB_DIR}gzguts.h
  ${GZLIB_DIR}gzlib.c
  ${GZLIB_DIR}gzread.c
  ${GZLIB_DIR}gzwrite.c
  ${GZLIB_DIR}infback.c
  ${GZLIB_DIR}inffast.c
  #${GZLIB_DIR}inffast.h
  #${GZLIB_DIR}inffixed.h
  #${GZLIB_DIR}inflate.h
  ${GZLIB_DIR}inftrees.c
  #${GZLIB_DIR}inftrees.h
  ${GZLIB_DIR}trees.c
  #${GZLIB_DIR}trees.h
  #${GZLIB_DIR}uncompr.c
  ${GZLIB_DIR}x86.h
  #${GZLIB_DIR}zconf.h
  #${GZLIB_DIR}zlib.h
  ${GZLIB_DIR}zutil.c
  #${GZLIB_DIR}zutil.h
)

# if (current_cpu == "x86" || current_cpu == "x64")
if(TARGET_LINUX) # TODO
  #list(APPEND zlib_SOURCES
  #  ${GZLIB_DIR}intel/filter_sse2_intrinsics.c
  #  ${GZLIB_DIR}intel/intel_init.c
  #)
  #set(PNG_INTEL_SSE_OPT_DEFINE PNG_INTEL_SSE_OPT=1)
  #find_package(ZLIB)
endif()

add_library(GZLIB STATIC
  ${GZLIB_SOURCES}
)

#target_link_libraries(GZLIB PRIVATE
  #${base_LIB}
  #${ZLIB_LIBRARIES}
  #zlib
#)

set_property(TARGET GZLIB PROPERTY CXX_STANDARD 17)

target_include_directories(GZLIB PRIVATE
  ${GZLIB_DIR}
  #${GZLIB_DIR}/include
  #${GZLIB_DIR}/src
  #${GZLIB_DIR}/src/src
  #${BASE_DIR}
)

#"//third_party/zlib",

target_compile_definitions(GZLIB PRIVATE
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

  # TODO
  USE_FILE32API=1 # if (is_mac || is_ios || is_android || is_nacl)
)
