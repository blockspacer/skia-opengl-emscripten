### --- GLIBJPEG_TURBO ---###

set(GLIBJPEG_TURBO_DIR
  third_party/libjpeg_turbo/
)

set(GLIBJPEG_TURBO_SOURCES
  ${GLIBJPEG_TURBO_DIR}jcapimin.c
  ${GLIBJPEG_TURBO_DIR}jcapistd.c
  ${GLIBJPEG_TURBO_DIR}jccoefct.c
  ${GLIBJPEG_TURBO_DIR}jccolor.c
  ${GLIBJPEG_TURBO_DIR}jcdctmgr.c
  ${GLIBJPEG_TURBO_DIR}jchuff.c
  ${GLIBJPEG_TURBO_DIR}jchuff.h
  ${GLIBJPEG_TURBO_DIR}jcicc.c
  ${GLIBJPEG_TURBO_DIR}jcinit.c
  ${GLIBJPEG_TURBO_DIR}jcmainct.c
  ${GLIBJPEG_TURBO_DIR}jcmarker.c
  ${GLIBJPEG_TURBO_DIR}jcmaster.c
  ${GLIBJPEG_TURBO_DIR}jcomapi.c
  ${GLIBJPEG_TURBO_DIR}jcparam.c
  ${GLIBJPEG_TURBO_DIR}jcphuff.c
  ${GLIBJPEG_TURBO_DIR}jcprepct.c
  ${GLIBJPEG_TURBO_DIR}jcsample.c
  ${GLIBJPEG_TURBO_DIR}jctrans.c
  ${GLIBJPEG_TURBO_DIR}jdapimin.c
  ${GLIBJPEG_TURBO_DIR}jdapistd.c
  ${GLIBJPEG_TURBO_DIR}jdatadst.c
  ${GLIBJPEG_TURBO_DIR}jdatasrc.c
  ${GLIBJPEG_TURBO_DIR}jdcoefct.c
  ${GLIBJPEG_TURBO_DIR}jdcolor.c
  ${GLIBJPEG_TURBO_DIR}jddctmgr.c
  ${GLIBJPEG_TURBO_DIR}jdhuff.c
  ${GLIBJPEG_TURBO_DIR}jdhuff.h
  ${GLIBJPEG_TURBO_DIR}jdicc.c
  ${GLIBJPEG_TURBO_DIR}jdinput.c
  ${GLIBJPEG_TURBO_DIR}jdmainct.c
  ${GLIBJPEG_TURBO_DIR}jdmarker.c
  ${GLIBJPEG_TURBO_DIR}jdmaster.c
  ${GLIBJPEG_TURBO_DIR}jdmerge.c
  ${GLIBJPEG_TURBO_DIR}jdphuff.c
  ${GLIBJPEG_TURBO_DIR}jdpostct.c
  ${GLIBJPEG_TURBO_DIR}jdsample.c
  ${GLIBJPEG_TURBO_DIR}jdtrans.c
  ${GLIBJPEG_TURBO_DIR}jerror.c
  ${GLIBJPEG_TURBO_DIR}jerror.h
  ${GLIBJPEG_TURBO_DIR}jfdctflt.c
  ${GLIBJPEG_TURBO_DIR}jfdctfst.c
  ${GLIBJPEG_TURBO_DIR}jfdctint.c
  ${GLIBJPEG_TURBO_DIR}jidctflt.c
  ${GLIBJPEG_TURBO_DIR}jidctfst.c
  ${GLIBJPEG_TURBO_DIR}jidctint.c
  ${GLIBJPEG_TURBO_DIR}jidctred.c
  ${GLIBJPEG_TURBO_DIR}jmemmgr.c
  ${GLIBJPEG_TURBO_DIR}jmemnobs.c
  ${GLIBJPEG_TURBO_DIR}jmemsys.h
  ${GLIBJPEG_TURBO_DIR}jpegint.h
  ${GLIBJPEG_TURBO_DIR}jquant1.c
  ${GLIBJPEG_TURBO_DIR}jquant2.c
  ${GLIBJPEG_TURBO_DIR}jutils.c
  ${GLIBJPEG_TURBO_DIR}jversion.h
)

if(EMSCRIPTEN)
  list(APPEND GLIBJPEG_TURBO_SOURCES # static_library("simd")
    ${GLIBJPEG_TURBO_DIR}jsimd_none.c
  )
elseif(${CMAKE_SYSTEM_NAME} STREQUAL "Linux")
  #
  # if (is_linux || is_android || is_fuchsia)
  #
  list(APPEND EXTRA_DEFINES
    ELF
  )
  if(CMAKE_CL_64)
    #
    # if (current_cpu == "x64")
    #        "simd/x86_64/jccolor-avx2.asm
    list(APPEND GLIBJPEG_TURBO_SOURCES
      ${GLIBJPEG_TURBO_DIR}simd/x86_64/jsimd.c # static_library("simd")
      #
      ${GLIBJPEG_TURBO_DIR}simd/x86_64/jccolor-sse2.asm
      ${GLIBJPEG_TURBO_DIR}simd/x86_64/jcgray-avx2.asm
      ${GLIBJPEG_TURBO_DIR}simd/x86_64/jcgray-sse2.asm
      ${GLIBJPEG_TURBO_DIR}simd/x86_64/jchuff-sse2.asm
      ${GLIBJPEG_TURBO_DIR}simd/x86_64/jcphuff-sse2.asm
      ${GLIBJPEG_TURBO_DIR}simd/x86_64/jcsample-avx2.asm
      ${GLIBJPEG_TURBO_DIR}simd/x86_64/jcsample-sse2.asm
      ${GLIBJPEG_TURBO_DIR}simd/x86_64/jdcolor-avx2.asm
      ${GLIBJPEG_TURBO_DIR}simd/x86_64/jdcolor-sse2.asm
      ${GLIBJPEG_TURBO_DIR}simd/x86_64/jdmerge-avx2.asm
      ${GLIBJPEG_TURBO_DIR}simd/x86_64/jdmerge-sse2.asm
      ${GLIBJPEG_TURBO_DIR}simd/x86_64/jdsample-avx2.asm
      ${GLIBJPEG_TURBO_DIR}simd/x86_64/jdsample-sse2.asm
      ${GLIBJPEG_TURBO_DIR}simd/x86_64/jfdctflt-sse.asm
      ${GLIBJPEG_TURBO_DIR}simd/x86_64/jfdctfst-sse2.asm
      ${GLIBJPEG_TURBO_DIR}simd/x86_64/jfdctint-avx2.asm
      ${GLIBJPEG_TURBO_DIR}simd/x86_64/jfdctint-sse2.asm
      ${GLIBJPEG_TURBO_DIR}simd/x86_64/jidctflt-sse2.asm
      ${GLIBJPEG_TURBO_DIR}simd/x86_64/jidctfst-sse2.asm
      ${GLIBJPEG_TURBO_DIR}simd/x86_64/jidctint-avx2.asm
      ${GLIBJPEG_TURBO_DIR}simd/x86_64/jidctint-sse2.asm
      ${GLIBJPEG_TURBO_DIR}simd/x86_64/jidctred-sse2.asm
      ${GLIBJPEG_TURBO_DIR}simd/x86_64/jquantf-sse2.asm
      ${GLIBJPEG_TURBO_DIR}simd/x86_64/jquanti-avx2.asm
      ${GLIBJPEG_TURBO_DIR}simd/x86_64/jquanti-sse2.asm
      ${GLIBJPEG_TURBO_DIR}simd/x86_64/jsimdcpu.asm
    )
    list(APPEND EXTRA_DEFINES
      __x86_64__
      PIC
      WITH_SIMD=1
    )
  else(CMAKE_CL_64)
    #
    # if (current_cpu == "x86")
    #
    list(APPEND GLIBJPEG_TURBO_SOURCES
      ${GLIBJPEG_TURBO_DIR}simd/i386/jsimd.c # static_library("simd")
      #
      ${GLIBJPEG_TURBO_DIR}simd/i386/jccolor-avx2.asm
      ${GLIBJPEG_TURBO_DIR}simd/i386/jccolor-mmx.asm
      ${GLIBJPEG_TURBO_DIR}simd/i386/jccolor-sse2.asm
      ${GLIBJPEG_TURBO_DIR}simd/i386/jcgray-avx2.asm
      ${GLIBJPEG_TURBO_DIR}simd/i386/jcgray-mmx.asm
      ${GLIBJPEG_TURBO_DIR}simd/i386/jcgray-sse2.asm
      ${GLIBJPEG_TURBO_DIR}simd/i386/jchuff-sse2.asm
      ${GLIBJPEG_TURBO_DIR}simd/i386/jcphuff-sse2.asm
      ${GLIBJPEG_TURBO_DIR}simd/i386/jcsample-avx2.asm
      ${GLIBJPEG_TURBO_DIR}simd/i386/jcsample-mmx.asm
      ${GLIBJPEG_TURBO_DIR}simd/i386/jcsample-sse2.asm
      ${GLIBJPEG_TURBO_DIR}simd/i386/jdcolor-avx2.asm
      ${GLIBJPEG_TURBO_DIR}simd/i386/jdcolor-mmx.asm
      ${GLIBJPEG_TURBO_DIR}simd/i386/jdcolor-sse2.asm
      ${GLIBJPEG_TURBO_DIR}simd/i386/jdmerge-avx2.asm
      ${GLIBJPEG_TURBO_DIR}simd/i386/jdmerge-mmx.asm
      ${GLIBJPEG_TURBO_DIR}simd/i386/jdmerge-sse2.asm
      ${GLIBJPEG_TURBO_DIR}simd/i386/jdsample-avx2.asm
      ${GLIBJPEG_TURBO_DIR}simd/i386/jdsample-mmx.asm
      ${GLIBJPEG_TURBO_DIR}simd/i386/jdsample-sse2.asm
      ${GLIBJPEG_TURBO_DIR}simd/i386/jfdctflt-3dn.asm
      ${GLIBJPEG_TURBO_DIR}simd/i386/jfdctflt-sse.asm
      ${GLIBJPEG_TURBO_DIR}simd/i386/jfdctfst-mmx.asm
      ${GLIBJPEG_TURBO_DIR}simd/i386/jfdctfst-sse2.asm
      ${GLIBJPEG_TURBO_DIR}simd/i386/jfdctint-avx2.asm
      ${GLIBJPEG_TURBO_DIR}simd/i386/jfdctint-mmx.asm
      ${GLIBJPEG_TURBO_DIR}simd/i386/jfdctint-sse2.asm
      ${GLIBJPEG_TURBO_DIR}simd/i386/jidctflt-3dn.asm
      ${GLIBJPEG_TURBO_DIR}simd/i386/jidctflt-sse.asm
      ${GLIBJPEG_TURBO_DIR}simd/i386/jidctflt-sse2.asm
      ${GLIBJPEG_TURBO_DIR}simd/i386/jidctfst-mmx.asm
      ${GLIBJPEG_TURBO_DIR}simd/i386/jidctfst-sse2.asm
      ${GLIBJPEG_TURBO_DIR}simd/i386/jidctint-avx2.asm
      ${GLIBJPEG_TURBO_DIR}simd/i386/jidctint-mmx.asm
      ${GLIBJPEG_TURBO_DIR}simd/i386/jidctint-sse2.asm
      ${GLIBJPEG_TURBO_DIR}simd/i386/jidctred-mmx.asm
      ${GLIBJPEG_TURBO_DIR}simd/i386/jidctred-sse2.asm
      ${GLIBJPEG_TURBO_DIR}simd/i386/jquant-3dn.asm
      ${GLIBJPEG_TURBO_DIR}simd/i386/jquant-mmx.asm
      ${GLIBJPEG_TURBO_DIR}simd/i386/jquant-sse.asm
      ${GLIBJPEG_TURBO_DIR}simd/i386/jquantf-sse2.asm
      ${GLIBJPEG_TURBO_DIR}simd/i386/jquanti-avx2.asm
      ${GLIBJPEG_TURBO_DIR}simd/i386/jquanti-sse2.asm
      ${GLIBJPEG_TURBO_DIR}simd/i386/jsimdcpu.asm
    )
    list(APPEND EXTRA_DEFINES
      __x86__
      PIC
      WITH_SIMD=1
    )
  endif(CMAKE_CL_64)
endif()

add_library(GLIBJPEG_TURBO STATIC
  ${GLIBJPEG_TURBO_SOURCES}
)

#if(${CMAKE_SYSTEM_NAME} STREQUAL "Linux")
#  find_package(ZLIB)
#endif()

if (EMSCRIPTEN)
  target_link_libraries(GLIBJPEG_TURBO PUBLIC
    #${BASE_LIBRARIES}
    #base
    #${ZLIB_LIBRARIES}
    #GZLIB
    GLIBXML
    #freetype
    # todo sudo apt-get install libjpeg-dev
  )
else()
  target_link_libraries(GLIBJPEG_TURBO PUBLIC
    GZLIB
    GLIBXML
  )
endif()

set_property(TARGET GLIBJPEG_TURBO PROPERTY CXX_STANDARD 17)

target_include_directories(GLIBJPEG_TURBO PRIVATE
  ${GLIBJPEG_TURBO_DIR}
  #${GLIBJPEG_TURBO_DIR}/include
  #${GLIBJPEG_TURBO_DIR}/src
  #${GLIBJPEG_TURBO_DIR}/src/src
  #${BASE_DIR}
)

target_compile_definitions(GLIBJPEG_TURBO PRIVATE
  NO_GETENV=1  # getenv() is not thread-safe.
  ${EXTRA_DEFINES}
  #WITH_SIMD
  #NO_GETENV
)
