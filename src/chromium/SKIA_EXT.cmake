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

if(TARGET_EMSCRIPTEN)
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
  #
  # !is_mac && !is_ios
  #
  ${SKIA_EXT_DIR}ext/fontmgr_default.cc
  #${SKIA_EXT_DIR}ext/fontmgr_default.h",
  # TODO # ${SKIA_EXT_DIR}ext/fontmgr_default_android.cc
)

#if(TARGET_LINUX)
if(ENABLE_HARFBUZZ)
  if(TARGET_EMSCRIPTEN OR TARGET_LINUX)
    list(APPEND SKIA_EXT_COMMON_SOURCES
      ${SKIA_EXT_DIR}ext/fontmgr_default_linux.cc
    )
    #
    list(APPEND SKIA_EXT_EXTRA_DEFINES
      SK_GAMMA_EXPONENT=1.2
      SK_GAMMA_CONTRAST=0.2
    )
  elseif(TARGET_WINDOWS)
    list(APPEND SKIA_EXT_COMMON_SOURCES
      ${SKIA_EXT_DIR}ext/skia_utils_win.cc
      ${SKIA_EXT_DIR}ext/skia_utils_win.h
      # SKIA_EXT.lib(fontmgr_default.cc.obj) : error LNK2005: "private: static class sk_sp<class SkFontMgr> __cdecl SkFontMgr::Factory(void)" (?Factory@SkFontMgr@@CA?AV?$sk_sp@VSkFontMgr@@@@XZ) already defined in skia.lib(fontmgr_win.SkFontMgr_win_dw_factory.obj)
      # TODO # ${SKIA_EXT_DIR}ext/fontmgr_default_win.cc
      ${SKIA_EXT_DIR}ext/fontmgr_default_linux.cc # NOTE: from linux on win!!!
      # Select the right BitmapPlatformDevice.
      ${SKIA_EXT_DIR}ext/raster_handle_allocator_win.cc
    )
    #
    list(APPEND SKIA_EXT_EXTRA_DEFINES
      # https://github.com/blockspacer/skia-opengl-emscripten/blob/cdb838723fe53c53abf008e9f2e8fc93089ae3f6/patches/skia_to_copy/BUILD.gn_nocopy#L155
      SK_DEFAULT_FONT_CACHE_COUNT_LIMIT=256
      SK_GAMMA_SRGB=1
      SK_GAMMA_CONTRAST=0.5
      #
      # TODO # SK_CPU_SSE_LEVEL=31
    )
  else()
    message(FATAL_ERROR "platform not supported")
  endif()
endif(ENABLE_HARFBUZZ)

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
if(TARGET_EMSCRIPTEN)
  # skip
elseif(TARGET_LINUX OR TARGET_WINDOWS)
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
  ${SKIA_LIBS}
  SKIA
  #${skottie_LIB}
  #${sksg_LIB}
  #skshaper
  #particles
  #pathkit
  #${WUFFS_LIB_NAME}
  #jpeg
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
  ${SKIA_EXT_EXTRA_DEFINES}
  SKIA_IMPLEMENTATION=1
  #NET_DISABLE_BROTLI=1
)
