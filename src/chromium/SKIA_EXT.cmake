## --- SKIA_EXT ---###

set(SKIA_EXT_COMMON_SOURCES
  # Chrome sources.
  #${SKIA_EXT_DIR}config/SkUserConfig.h",
  #${SKIA_EXT_DIR}config/sk_ref_cnt_ext_debug.h",
  #${SKIA_EXT_DIR}config/sk_ref_cnt_ext_release.h
  ${SKIA_EXT_DIR}ext/SkDiscardableMemory_chrome.cc
  #${SKIA_EXT_DIR}ext/SkDiscardableMemory_chrome.h",
  ${SKIA_EXT_DIR}ext/SkMemory_new_handler.cpp # .cpp???
  ${SKIA_EXT_DIR}ext/benchmarking_canvas.cc
  #${SKIA_EXT_DIR}ext/benchmarking_canvas.h",
  # TODO #
  ${SKIA_EXT_DIR}ext/convolver.cc
  ${SKIA_EXT_DIR}ext/convolver.cc
  #${SKIA_EXT_DIR}ext/convolver.h",
  ${SKIA_EXT_DIR}ext/event_tracer_impl.cc
  #${SKIA_EXT_DIR}ext/event_tracer_impl.h",
  ${SKIA_EXT_DIR}ext/google_logging.cc
  ${SKIA_EXT_DIR}ext/image_operations.cc
  #${SKIA_EXT_DIR}ext/image_operations.h",
  ${SKIA_EXT_DIR}ext/opacity_filter_canvas.cc
  #${SKIA_EXT_DIR}ext/opacity_filter_canvas.h",
  ${SKIA_EXT_DIR}ext/recursive_gaussian_convolution.cc
  #${SKIA_EXT_DIR}ext/recursive_gaussian_convolution.h",
)

if(EMSCRIPTEN)
  # TODO #
else()
  list(APPEND SKIA_EXT_COMMON_SOURCES
    ${SKIA_EXT_DIR}ext/skia_histogram.cc
  )
endif()

list(APPEND SKIA_EXT_COMMON_SOURCES
  #${SKIA_EXT_DIR}ext/skia_histogram.h",
  ${SKIA_EXT_DIR}ext/skia_memory_dump_provider.cc
  #${SKIA_EXT_DIR}ext/skia_memory_dump_provider.h",
  ${SKIA_EXT_DIR}ext/skia_trace_memory_dump_impl.cc
  #${SKIA_EXT_DIR}ext/skia_trace_memory_dump_impl.h",
  ${SKIA_EXT_DIR}ext/skia_utils_base.cc
  #${SKIA_EXT_DIR}ext/skia_utils_base.h",
  #${SKIA_EXT_DIR}ext/skia_utils_ios.h",
  # TODO # ${SKIA_EXT_DIR}ext/skia_utils_ios.mm",
  # TODO # ${SKIA_EXT_DIR}ext/skia_utils_mac.h",
  #${SKIA_EXT_DIR}ext/skia_utils_mac.mm",
  # TODO # ${SKIA_EXT_DIR}ext/skia_utils_win.cc
  #${SKIA_EXT_DIR}ext/skia_utils_win.h",
  #
  # !is_mac && !is_ios
  #
  ${SKIA_EXT_DIR}ext/fontmgr_default.cc
  #${SKIA_EXT_DIR}ext/fontmgr_default.h",
  # TODO # ${SKIA_EXT_DIR}ext/fontmgr_default_android.cc
)

if(${CMAKE_SYSTEM_NAME} STREQUAL "Linux")
  list(APPEND SKIA_EXT_COMMON_SOURCES
    ${SKIA_EXT_DIR}ext/fontmgr_default_linux.cc
  )
endif()

list(APPEND SKIA_EXT_COMMON_SOURCES
  # TODO # ${SKIA_EXT_DIR}ext/fontmgr_default_win.cc
  #
  # !is_ios
  #
  ${SKIA_EXT_DIR}ext/platform_canvas.cc
  #${SKIA_EXT_DIR}ext/platform_canvas.h",
)

#
# !is_ios && (current_cpu == "x86" || current_cpu == "x64")
#
if(EMSCRIPTEN)
elseif(${CMAKE_SYSTEM_NAME} STREQUAL "Linux")
  list(APPEND SKIA_EXT_COMMON_SOURCES
    ${SKIA_EXT_DIR}ext/convolver_SSE2.cc
    ${SKIA_EXT_DIR}ext/convolver_SSE2.h
  )
else()
  message(FATAL_ERROR "platform not supported")
endif()

add_library(SKIA_EXT STATIC
  ${SKIA_EXT_COMMON_SOURCES}
)

target_link_libraries(SKIA_EXT PUBLIC
  SKIA
  skottie
  sksg
  skshaper
  #particles
  #pathkit
  wuffs
  jpeg
  #${BASE_LIBRARIES}
  base
)

set_property(TARGET SKIA_EXT PROPERTY CXX_STANDARD 17)

target_include_directories(SKIA_EXT PUBLIC
  #${SKIA_HEADERS}
  #${SKIA_EXT_DIR}
  #${SKIA_EXT_PARENT_DIR}
  #${SKIA_PARENT_DIR}
  #${SKIA_DIR}
  #${SKIA_DIR}/include
  #${SKIA_DIR}/include/c
  #${SKIA_DIR}/include/core
  #${SKIA_DIR}/third_party
  #${SKIA_DIR}/third_party/skcms
  ${SKIA_EXT_PARENT_DIR}
  ${SKIA_EXT_DIR}
  ${SKIA_EXT_DIR}/common
  ${SKIA_INCLUDES}
  ${BASE_DIR}
)

target_compile_definitions(SKIA_EXT PRIVATE
  SKIA_IMPLEMENTATION=1
  #NET_DISABLE_BROTLI=1
)
