### --- COMPONENTS_SCHEDULING_METRICS ---###

set(COMPONENTS_SCHEDULING_METRICS_DIR
  components/scheduling_metrics/
)

set(COMPONENTS_SCHEDULING_METRICS_SOURCES
    #"task_duration_metric_reporter.h",
  ${COMPONENTS_SCHEDULING_METRICS_DIR}thread_metrics.cc
    #"thread_metrics.h",
    #"thread_type.h",
  ${COMPONENTS_SCHEDULING_METRICS_DIR}total_duration_metric_reporter.cc
    #"total_duration_metric_reporter.h",
)

#if(TARGET_EMSCRIPTEN)
#  list(APPEND COMPONENTS_SCHEDULING_METRICS_SOURCES # static_library("simd")
#    ${COMPONENTS_SCHEDULING_METRICS_DIR}jsimd_none.c
#  )
#elseif(TARGET_LINUX)
#  #
#  # if (is_linux || is_android || is_fuchsia)
#  #
#  list(APPEND EXTRA_DEFINES
#    ELF
#  )
#  if(CMAKE_CL_64)
#    #
#    # if (current_cpu == "x64")
#    #        "simd/x86_64/jccolor-avx2.asm
#    list(APPEND COMPONENTS_SCHEDULING_METRICS_SOURCES
#      ${COMPONENTS_SCHEDULING_METRICS_DIR}simd/x86_64/jsimd.c # static_library("simd")
#      #
#      ${COMPONENTS_SCHEDULING_METRICS_DIR}simd/x86_64/jccolor-sse2.asm
#      ${COMPONENTS_SCHEDULING_METRICS_DIR}simd/x86_64/jcgray-avx2.asm
#      ${COMPONENTS_SCHEDULING_METRICS_DIR}simd/x86_64/jcgray-sse2.asm
#      ${COMPONENTS_SCHEDULING_METRICS_DIR}simd/x86_64/jchuff-sse2.asm
#      ${COMPONENTS_SCHEDULING_METRICS_DIR}simd/x86_64/jcphuff-sse2.asm
#      ${COMPONENTS_SCHEDULING_METRICS_DIR}simd/x86_64/jcsample-avx2.asm
#      ${COMPONENTS_SCHEDULING_METRICS_DIR}simd/x86_64/jcsample-sse2.asm
#      ${COMPONENTS_SCHEDULING_METRICS_DIR}simd/x86_64/jdcolor-avx2.asm
#      ${COMPONENTS_SCHEDULING_METRICS_DIR}simd/x86_64/jdcolor-sse2.asm
#      ${COMPONENTS_SCHEDULING_METRICS_DIR}simd/x86_64/jdmerge-avx2.asm
#      ${COMPONENTS_SCHEDULING_METRICS_DIR}simd/x86_64/jdmerge-sse2.asm
#      ${COMPONENTS_SCHEDULING_METRICS_DIR}simd/x86_64/jdsample-avx2.asm
#      ${COMPONENTS_SCHEDULING_METRICS_DIR}simd/x86_64/jdsample-sse2.asm
#      ${COMPONENTS_SCHEDULING_METRICS_DIR}simd/x86_64/jfdctflt-sse.asm
#      ${COMPONENTS_SCHEDULING_METRICS_DIR}simd/x86_64/jfdctfst-sse2.asm
#      ${COMPONENTS_SCHEDULING_METRICS_DIR}simd/x86_64/jfdctint-avx2.asm
#      ${COMPONENTS_SCHEDULING_METRICS_DIR}simd/x86_64/jfdctint-sse2.asm
#      ${COMPONENTS_SCHEDULING_METRICS_DIR}simd/x86_64/jidctflt-sse2.asm
#      ${COMPONENTS_SCHEDULING_METRICS_DIR}simd/x86_64/jidctfst-sse2.asm
#      ${COMPONENTS_SCHEDULING_METRICS_DIR}simd/x86_64/jidctint-avx2.asm
#      ${COMPONENTS_SCHEDULING_METRICS_DIR}simd/x86_64/jidctint-sse2.asm
#      ${COMPONENTS_SCHEDULING_METRICS_DIR}simd/x86_64/jidctred-sse2.asm
#      ${COMPONENTS_SCHEDULING_METRICS_DIR}simd/x86_64/jquantf-sse2.asm
#      ${COMPONENTS_SCHEDULING_METRICS_DIR}simd/x86_64/jquanti-avx2.asm
#      ${COMPONENTS_SCHEDULING_METRICS_DIR}simd/x86_64/jquanti-sse2.asm
#      ${COMPONENTS_SCHEDULING_METRICS_DIR}simd/x86_64/jsimdcpu.asm
#    )
#    list(APPEND EXTRA_DEFINES
#      __x86_64__
#      PIC
#      WITH_SIMD=1
#    )
#  else(CMAKE_CL_64)
#    #
#    # if (current_cpu == "x86")
#    #
#    list(APPEND COMPONENTS_SCHEDULING_METRICS_SOURCES
#      ${COMPONENTS_SCHEDULING_METRICS_DIR}simd/i386/jsimd.c # static_library("simd")
#      #
#      ${COMPONENTS_SCHEDULING_METRICS_DIR}simd/i386/jccolor-avx2.asm
#      ${COMPONENTS_SCHEDULING_METRICS_DIR}simd/i386/jccolor-mmx.asm
#      ${COMPONENTS_SCHEDULING_METRICS_DIR}simd/i386/jccolor-sse2.asm
#      ${COMPONENTS_SCHEDULING_METRICS_DIR}simd/i386/jcgray-avx2.asm
#      ${COMPONENTS_SCHEDULING_METRICS_DIR}simd/i386/jcgray-mmx.asm
#      ${COMPONENTS_SCHEDULING_METRICS_DIR}simd/i386/jcgray-sse2.asm
#      ${COMPONENTS_SCHEDULING_METRICS_DIR}simd/i386/jchuff-sse2.asm
#      ${COMPONENTS_SCHEDULING_METRICS_DIR}simd/i386/jcphuff-sse2.asm
#      ${COMPONENTS_SCHEDULING_METRICS_DIR}simd/i386/jcsample-avx2.asm
#      ${COMPONENTS_SCHEDULING_METRICS_DIR}simd/i386/jcsample-mmx.asm
#      ${COMPONENTS_SCHEDULING_METRICS_DIR}simd/i386/jcsample-sse2.asm
#      ${COMPONENTS_SCHEDULING_METRICS_DIR}simd/i386/jdcolor-avx2.asm
#      ${COMPONENTS_SCHEDULING_METRICS_DIR}simd/i386/jdcolor-mmx.asm
#      ${COMPONENTS_SCHEDULING_METRICS_DIR}simd/i386/jdcolor-sse2.asm
#      ${COMPONENTS_SCHEDULING_METRICS_DIR}simd/i386/jdmerge-avx2.asm
#      ${COMPONENTS_SCHEDULING_METRICS_DIR}simd/i386/jdmerge-mmx.asm
#      ${COMPONENTS_SCHEDULING_METRICS_DIR}simd/i386/jdmerge-sse2.asm
#      ${COMPONENTS_SCHEDULING_METRICS_DIR}simd/i386/jdsample-avx2.asm
#      ${COMPONENTS_SCHEDULING_METRICS_DIR}simd/i386/jdsample-mmx.asm
#      ${COMPONENTS_SCHEDULING_METRICS_DIR}simd/i386/jdsample-sse2.asm
#      ${COMPONENTS_SCHEDULING_METRICS_DIR}simd/i386/jfdctflt-3dn.asm
#      ${COMPONENTS_SCHEDULING_METRICS_DIR}simd/i386/jfdctflt-sse.asm
#      ${COMPONENTS_SCHEDULING_METRICS_DIR}simd/i386/jfdctfst-mmx.asm
#      ${COMPONENTS_SCHEDULING_METRICS_DIR}simd/i386/jfdctfst-sse2.asm
#      ${COMPONENTS_SCHEDULING_METRICS_DIR}simd/i386/jfdctint-avx2.asm
#      ${COMPONENTS_SCHEDULING_METRICS_DIR}simd/i386/jfdctint-mmx.asm
#      ${COMPONENTS_SCHEDULING_METRICS_DIR}simd/i386/jfdctint-sse2.asm
#      ${COMPONENTS_SCHEDULING_METRICS_DIR}simd/i386/jidctflt-3dn.asm
#      ${COMPONENTS_SCHEDULING_METRICS_DIR}simd/i386/jidctflt-sse.asm
#      ${COMPONENTS_SCHEDULING_METRICS_DIR}simd/i386/jidctflt-sse2.asm
#      ${COMPONENTS_SCHEDULING_METRICS_DIR}simd/i386/jidctfst-mmx.asm
#      ${COMPONENTS_SCHEDULING_METRICS_DIR}simd/i386/jidctfst-sse2.asm
#      ${COMPONENTS_SCHEDULING_METRICS_DIR}simd/i386/jidctint-avx2.asm
#      ${COMPONENTS_SCHEDULING_METRICS_DIR}simd/i386/jidctint-mmx.asm
#      ${COMPONENTS_SCHEDULING_METRICS_DIR}simd/i386/jidctint-sse2.asm
#      ${COMPONENTS_SCHEDULING_METRICS_DIR}simd/i386/jidctred-mmx.asm
#      ${COMPONENTS_SCHEDULING_METRICS_DIR}simd/i386/jidctred-sse2.asm
#      ${COMPONENTS_SCHEDULING_METRICS_DIR}simd/i386/jquant-3dn.asm
#      ${COMPONENTS_SCHEDULING_METRICS_DIR}simd/i386/jquant-mmx.asm
#      ${COMPONENTS_SCHEDULING_METRICS_DIR}simd/i386/jquant-sse.asm
#      ${COMPONENTS_SCHEDULING_METRICS_DIR}simd/i386/jquantf-sse2.asm
#      ${COMPONENTS_SCHEDULING_METRICS_DIR}simd/i386/jquanti-avx2.asm
#      ${COMPONENTS_SCHEDULING_METRICS_DIR}simd/i386/jquanti-sse2.asm
#      ${COMPONENTS_SCHEDULING_METRICS_DIR}simd/i386/jsimdcpu.asm
#    )
#    list(APPEND EXTRA_DEFINES
#      __x86__
#      PIC
#      WITH_SIMD=1
#    )
#  endif(CMAKE_CL_64)
#else()
#  message(FATAL_ERROR "platform not supported")
#endif()

add_library(COMPONENTS_SCHEDULING_METRICS STATIC
  ${COMPONENTS_SCHEDULING_METRICS_SOURCES}
)

#if(TARGET_LINUX)
#  find_package(ZLIB)
#endif()

#if (EMSCRIPTEN)
#  target_link_libraries(COMPONENTS_SCHEDULING_METRICS PUBLIC
#    #${BASE_LIBRARIES}
#    #base
#    #${ZLIB_LIBRARIES}
#    #GZLIB
#    GLIBXML
#    #freetype
#    # todo sudo apt-get install libjpeg-dev
#  )
#else()
#  target_link_libraries(COMPONENTS_SCHEDULING_METRICS PUBLIC
#    GZLIB
#    GLIBXML
#  )
#endif()

target_link_libraries(COMPONENTS_SCHEDULING_METRICS PUBLIC
  base
)

set_property(TARGET COMPONENTS_SCHEDULING_METRICS PROPERTY CXX_STANDARD 17)

target_include_directories(COMPONENTS_SCHEDULING_METRICS PRIVATE
  ${COMPONENTS_SCHEDULING_METRICS_DIR}
  #${COMPONENTS_SCHEDULING_METRICS_DIR}/include
  #${COMPONENTS_SCHEDULING_METRICS_DIR}/src
  #${COMPONENTS_SCHEDULING_METRICS_DIR}/src/src
  #${BASE_DIR}
)

target_compile_definitions(COMPONENTS_SCHEDULING_METRICS PRIVATE
  IS_SCHEDULING_METRICS_IMPL=1  # getenv() is not thread-safe.
  #${EXTRA_DEFINES}
  #WITH_SIMD
  #NO_GETENV
)
