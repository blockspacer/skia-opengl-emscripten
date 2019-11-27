### --- GZLIB_EXT ---###

if(NOT ENABLE_BLINK_PLATFORM)
  message(FATAL_ERROR "disable GZLIB_EXT")
endif(NOT ENABLE_BLINK_PLATFORM)

# see chromium/src/third_party/zlib/google/

set(GZLIB_EXT_DIR ${CHROMIUM_DIR}third_party/zlib/google/)

list(APPEND GZLIB_EXT_SOURCES
  ${GZLIB_EXT_DIR}zip.cc
  #${GZLIB_EXT_DIR}zip.h
  ${GZLIB_EXT_DIR}zip_internal.cc
  #${GZLIB_EXT_DIR}zip_internal.h
  ${GZLIB_EXT_DIR}zip_reader.cc
  #${GZLIB_EXT_DIR}zip_reader.h
  ${GZLIB_EXT_DIR}zip_writer.cc
  #${GZLIB_EXT_DIR}zip_writer.h
  #
  ${GZLIB_EXT_DIR}compression_utils.cc
  #${GZLIB_EXT_DIR}compression_utils.h
)

# if (current_cpu == "x86" || current_cpu == "x64")
if(TARGET_LINUX) # TODO
  #list(APPEND zlib_SOURCES
  #  ${GZLIB_EXT_DIR}intel/filter_sse2_intrinsics.c
  #  ${GZLIB_EXT_DIR}intel/intel_init.c
  #)
  #set(PNG_INTEL_SSE_OPT_DEFINE PNG_INTEL_SSE_OPT=1)
  #find_package(ZLIB)
endif()

add_library(GZLIB_EXT STATIC
  ${GZLIB_EXT_SOURCES}
)

#message(FATAL_ERROR ${libZLIB_LIB})

target_link_libraries(GZLIB_EXT PRIVATE
  ${base_LIB}
  #${ZLIB_LIBRARIES}
  ${libZLIB_LIB}
)

set_property(TARGET GZLIB_EXT PROPERTY CXX_STANDARD 17)

target_include_directories(GZLIB_EXT PRIVATE
  ${GZLIB_EXT_DIR}
  #${GZLIB_EXT_DIR}/include
  #${GZLIB_EXT_DIR}/src
  #${GZLIB_EXT_DIR}/src/src
  #${BASE_DIR}
)

#"//third_party/zlib",

#target_compile_definitions(GZLIB_EXT PRIVATE
  #ZLIB_IMPLEMENTATION=1
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
  #USE_FILE32API=1 # if (is_mac || is_ios || is_android || is_nacl)
#)
