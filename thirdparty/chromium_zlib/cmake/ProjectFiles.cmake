include_guard( DIRECTORY )

# if (current_cpu == "x86" || current_cpu == "x64")
if(TARGET_LINUX) # TODO
  #list(APPEND zlib_SOURCES
  #  ${GZLIB_DIR}intel/filter_sse2_intrinsics.c
  #  ${GZLIB_DIR}intel/intel_init.c
  #)
  #set(PNG_INTEL_SSE_OPT_DEFINE PNG_INTEL_SSE_OPT=1)
  #find_package(ZLIB)
endif()

if(TARGET_LINUX OR TARGET_WINDOWS)
  list(APPEND zlib_SOURCES
    # TODO: https://github.com/chromium/chromium/blob/18f14dd8fb096b0b895832a7dbaec02383bdc343/third_party/zlib/BUILD.gn
    ${zlib_DIR}simd_stub.c
  )
elseif(TARGET_EMSCRIPTEN)
  # skip
else()
  message(FATAL_ERROR "unknown platform")
endif()

list(APPEND zlib_SOURCES
  ${zlib_DIR}adler32.c
  #${zlib_DIR}chromeconf.h
  ${zlib_DIR}compress.c
  ${zlib_DIR}crc32.c
  #${zlib_DIR}crc32.h
  ${zlib_DIR}deflate.c
  #${zlib_DIR}deflate.h
  ${zlib_DIR}gzclose.c
  #${zlib_DIR}gzguts.h
  ${zlib_DIR}gzlib.c
  ${zlib_DIR}gzread.c
  ${zlib_DIR}gzwrite.c
  ${zlib_DIR}infback.c
  ${zlib_DIR}inffast.c
  #${zlib_DIR}inffast.h
  #${zlib_DIR}inffixed.h
  #${zlib_DIR}inflate.h
  ${zlib_DIR}inftrees.c
  #${zlib_DIR}inftrees.h
  ${zlib_DIR}trees.c
  #${zlib_DIR}trees.h
  #${zlib_DIR}uncompr.c
  ${zlib_DIR}x86.h
  #${zlib_DIR}zconf.h
  #${zlib_DIR}zlib.h
  ${zlib_DIR}zutil.c
  #${zlib_DIR}zutil.h
)
