cmake_minimum_required(VERSION 2.8)

list(APPEND RENDERER_PUBLIC_DEFINES
  #
  # see https://github.com/blockspacer/cobalt-clone-28052019/blob/master/src/cobalt/renderer/rasterizer/skia/skia/skia_cobalt.gypi#L47
  #
  COBALT_LOCAL_TYPEFACE_CACHE_SIZE_IN_BYTES=16777216 # 16.777216 Megabytes
  #
  # TODO
  # see software_resource_provider.cc
  ENABLE_DYNAMIC_FONT_LOADING=1
)

if(NOT DEFINED CUSTOM_ICU_LIB)
  message(FATAL_ERROR "CUSTOM_ICU_LIB must be defined")
endif(NOT DEFINED CUSTOM_ICU_LIB)

if(TARGET_EMSCRIPTEN)
  list(APPEND RENDERER_PUBLIC_DEFINES
    #
    # NOTE: disabled rasterizer thread (!!!) due to deadlocks on WASM MT
    # (to reproduce bug - move mouse frequently over objects that are animated on hover)
    # NOTE: related to locks in SkScalerContext_FreeType::generateImage
    # see 'TODO' file in commit 0e4faf to reproduce
    # ENABLE_RASTERIZER_THREAD=1
  )
elseif(TARGET_LINUX OR TARGET_WINDOWS)
  list(APPEND RENDERER_PUBLIC_DEFINES
    ENABLE_RASTERIZER_THREAD=1
  )
else()
  message(FATAL_ERROR "platform not supported")
endif()

list(APPEND RENDERER_PRIVATE_DEFINES
  #FORCE_VIDEO_EXTERNAL_MESH=1
  #
  ${COBALT_COMMON_DEFINES}
  # renderer
  #COBALT_MINIMUM_FRAME_TIME_IN_MILLISECONDS=1
  #COBALT_MINIMUM_FRAME_TIME_IN_MILLISECONDS=33
  #ENABLE_MAP_TO_MESH=1
  ${OPENGLES2_DEFINITIONS}
  #
  # backend/egl/
  #
  COBALT_EGL_SWAP_INTERVAL=1
  #
  ${OPENGLES2_DEFINITIONS}
)

# TODO: WASM ST: fix rasterizer performance issues
# NOTE: need value < 50ms for animations
# NOTE: also see layout_refresh_rate
#if (TARGET_EMSCRIPTEN AND NOT ENABLE_WEB_PTHREADS)
#  set(COBALT_MINIMUM_FRAME_TIME_IN_MILLISECONDS 33)
#else()
#  set(COBALT_MINIMUM_FRAME_TIME_IN_MILLISECONDS 33)
#endif()
if (TARGET_EMSCRIPTEN)
  if(RELEASE_BUILD)
    set(COBALT_MINIMUM_FRAME_TIME_IN_MILLISECONDS 33)
  else()
    set(COBALT_MINIMUM_FRAME_TIME_IN_MILLISECONDS 50)
  endif(RELEASE_BUILD)
else()
  set(COBALT_MINIMUM_FRAME_TIME_IN_MILLISECONDS 33)
endif()

message(STATUS "COBALT_MINIMUM_FRAME_TIME_IN_MILLISECONDS=${COBALT_MINIMUM_FRAME_TIME_IN_MILLISECONDS}")

list(APPEND RENDERER_PRIVATE_DEFINES
  COBALT_MINIMUM_FRAME_TIME_IN_MILLISECONDS=${COBALT_MINIMUM_FRAME_TIME_IN_MILLISECONDS}
)

## ===========

# 'dependencies': [
#   '<(DEPTH)/base/base.gyp:base',
#   '<(DEPTH)/cobalt/renderer/rasterizer/skia/common.gyp:common',
#   '<(DEPTH)/cobalt/renderer/rasterizer/skia/skia/skia.gyp:skia',
#   '<(DEPTH)/third_party/harfbuzz-ng/harfbuzz.gyp:harfbuzz-ng',
#   '<(DEPTH)/third_party/icu/icu.gyp:icuuc',
#   '<(DEPTH)/third_party/ots/ots.gyp:ots',
# ],
# 'dependencies': [
#   '<(DEPTH)/base/base.gyp:base',
#   '<(DEPTH)/starboard/egl_and_gles/egl_and_gles.gyp:egl_and_gles',
#   '<(DEPTH)/cobalt/renderer/rasterizer/skia/common.gyp:common',
#   '<(DEPTH)/cobalt/renderer/rasterizer/skia/skia/skia.gyp:skia',
#   '<(DEPTH)/third_party/harfbuzz-ng/harfbuzz.gyp:harfbuzz-ng',
#   '<(DEPTH)/third_party/icu/icu.gyp:icuuc',
#   '<(DEPTH)/third_party/ots/ots.gyp:ots',
#   '<(DEPTH)/cobalt/renderer/rasterizer/common/common.gyp:common',
# ],
if(ENABLE_SKIA)
  if(ENABLE_FONTCONFIG)
    list(APPEND COBALT_renderer_stub_skia_SOURCES
      ${COBALT_PORT_DIR}/renderer_stub/rasterizer/skia/skia/src/ports/SkFontConfigParser_cobalt.cc
    )
  endif(ENABLE_FONTCONFIG)
  #
  list(APPEND COBALT_renderer_stub_skia_SOURCES
    #
    # skia
    #
    ${COBALT_PORT_DIR}/renderer_stub/rasterizer/skia/render_tree_node_visitor.cc
    ${COBALT_PORT_DIR}/renderer_stub/rasterizer/skia/software_rasterizer.cc
    ${COBALT_PORT_DIR}/renderer_stub/rasterizer/skia/software_rasterizer.h
    ${COBALT_PORT_DIR}/renderer_stub/rasterizer/skia/software_resource_provider.cc
    ${COBALT_PORT_DIR}/renderer_stub/rasterizer/skia/software_resource_provider.h
    #${COBALT_PORT_DIR}/renderer_stub/rasterizer/skia/hardware_image.cc
    ${COBALT_PORT_DIR}/renderer_stub/rasterizer/skia/cobalt_skia_type_conversions.cc
    ${COBALT_PORT_DIR}/renderer_stub/rasterizer/skia/cobalt_skia_type_conversions.h
    #${COBALT_PORT_DIR}/renderer_stub/rasterizer/skia/gl_format_conversions.cc
    ${COBALT_PORT_DIR}/renderer_stub/rasterizer/skia/image.cc
    ${COBALT_PORT_DIR}/renderer_stub/rasterizer/skia/software_image.cc
    ${COBALT_PORT_DIR}/renderer_stub/rasterizer/skia/software_mesh.h
    ${COBALT_PORT_DIR}/renderer_stub/rasterizer/skia/font.cc
    ${COBALT_PORT_DIR}/renderer_stub/rasterizer/skia/typeface.cc
    ${COBALT_PORT_DIR}/renderer_stub/rasterizer/skia/skia/src/ports/SkTypeface_cobalt.cc
    ${COBALT_PORT_DIR}/renderer_stub/rasterizer/skia/skia/src/ports/SkStream_cobalt.cc
    ${COBALT_PORT_DIR}/renderer_stub/rasterizer/skia/skia/src/ports/SkOSFile_cobalt.cc
    #
    ${COBALT_PORT_DIR}/renderer_stub/rasterizer/skia/skia/src/ports/SkFontMgr_cobalt.cc
    ${COBALT_PORT_DIR}/renderer_stub/rasterizer/skia/skia/src/ports/SkFontStyleSet_cobalt.cc
    ${COBALT_PORT_DIR}/renderer_stub/rasterizer/skia/skia/src/ports/SkFontUtil_cobalt.cc
    ${COBALT_PORT_DIR}/renderer_stub/rasterizer/skia/skia/src/ports/SkFreeType_cobalt.cc
    #
    ${COBALT_PORT_DIR}/renderer_stub/rasterizer/skia/glyph_buffer.cc
    #
    ${COBALT_PORT_DIR}/renderer_stub/rasterizer/skia/text_shaper.cc
    ${COBALT_PORT_DIR}/renderer_stub/rasterizer/skia/harfbuzz_font.cc
    #
    # common
    #
    ${COBALT_PORT_DIR}/renderer_stub/rasterizer/common/find_node.cc
    ${COBALT_PORT_DIR}/renderer_stub/rasterizer/common/offscreen_render_coordinate_mapping.cc
    ${COBALT_PORT_DIR}/renderer_stub/rasterizer/common/scratch_surface_cache.cc
    ${COBALT_PORT_DIR}/renderer_stub/rasterizer/common/streaming_best_fit_line.cc
    ${COBALT_PORT_DIR}/renderer_stub/rasterizer/common/utils.cc
  )
else()
  list(APPEND COBALT_renderer_stub_skia_SOURCES
    #
    # skia stub
    #
    ${COBALT_PORT_DIR}/renderer_stub/rasterizer/skia/software_rasterizer.cc
    ${COBALT_PORT_DIR}/renderer_stub/rasterizer/skia/software_rasterizer.h
    ${COBALT_PORT_DIR}/renderer_stub/rasterizer/skia/software_resource_provider.cc
    ${COBALT_PORT_DIR}/renderer_stub/rasterizer/skia/software_resource_provider.h
  )
endif(ENABLE_SKIA)

  add_library(cobalt_renderer_stub_skia STATIC
    ${COBALT_renderer_stub_skia_SOURCES}
  )
  set(cobalt_renderer_stub_skia_LIB cobalt_renderer_stub_skia)

  #message(WARNING OPENGL_EGL_INCLUDE_DIRS=
  #  ${OPENGL_EGL_INCLUDE_DIRS})
  #message(FATAL_ERROR FOUND_OPENGL_LIBRARIES=
  #  ${FOUND_OPENGL_LIBRARIES}
  #  ${OPENGLES2_LIBRARIES})

  if(TARGET_LINUX)
    list(APPEND EXTRA_cobalt_renderer_stub_skia_LIBS
      ${FOUND_OPENGL_LIBRARIES}
      #OpenGL::EGL
    )
  endif(TARGET_LINUX)

  if(NOT DEFINED cobalt_starboard_LIB)
    message(FATAL_ERROR "NOT DEFINED: cobalt_starboard_LIB")
  endif(NOT DEFINED cobalt_starboard_LIB)

  target_link_libraries(cobalt_renderer_stub_skia PUBLIC
    ${cobalt_starboard_LIB}
  )

  if(NOT DEFINED cobalt_starboard_headers_only_LIB)
    message(FATAL_ERROR "NOT DEFINED: cobalt_starboard_headers_only_LIB")
  endif(NOT DEFINED cobalt_starboard_headers_only_LIB)

  target_link_libraries(cobalt_renderer_stub_skia PUBLIC
    ${cobalt_starboard_LIB} # TODO
    ${cobalt_starboard_headers_only_LIB}
  )

  target_link_libraries(cobalt_renderer_stub_skia PRIVATE
    ${base_LIB} # TODO
    ${cobalt_base_LIB}
    cobalt_math
    cobalt_dom
    cobalt_loader
    cobalt_layout
    cobalt_render_tree
    cobalt_ui_navigation
    cobalt_system_window
    ${COBALT_GLIMP_LIB}
    ## starboard_platform
    #starboard_core
    ## starboard_eztime
    ## starboard_common
    ${modp_b64_LIB}
    #dynamic_annotations
    ${libxml_LIB}
    ${CUSTOM_ICU_LIB}
    #ced
    # NOTE: force glm from conan, otherwise we can break
    # some isolated builds (emscripten) with -system /usr/include
    CONAN_PKG::cobalt_glm
    ${SKIA_LIB}
    ${HARFBUZZ_LIBRARIES}
    ${EXTRA_cobalt_renderer_stub_skia_LIBS}
    #${OPENGLES2_LIBRARIES}
    ${FOUND_OPENGL_LIBRARIES}
    ${FREETYPE_LIBRARIES}
  )

  set_property(TARGET cobalt_renderer_stub_skia PROPERTY CXX_STANDARD 17)

  target_include_directories(cobalt_renderer_stub_skia PRIVATE
    #${UI_PARENT_DIR}
    ${COBALT_CORE_DIR}
    ${COBALT_CORE_PARENT_DIR}
    ${COBALT_COMMON_INCLUDES}
    #${COBALT_PORT_DIR}/renderer_stub
    ${OPENGLES2_INCLUDE_DIRS}
    ${OPENGL_EGL_INCLUDE_DIRS}
    ${FOUND_OPENGL_INCLUDE_DIR}
    ${FREETYPE_INCLUDE_DIRS}
  )

  target_compile_definitions(cobalt_renderer_stub_skia PUBLIC
    ${RENDERER_PUBLIC_DEFINES}
  )

  target_compile_definitions(cobalt_renderer_stub_skia PRIVATE
    ${RENDERER_PRIVATE_DEFINES}
  )

## ===========

#'dependencies': [
#  '<(DEPTH)/base/base.gyp:base',
#  '<(DEPTH)/starboard/egl_and_gles/egl_and_gles.gyp:egl_and_gles',
#  '<(DEPTH)/cobalt/renderer/rasterizer/skia/common.gyp:common',
#  '<(DEPTH)/cobalt/renderer/rasterizer/skia/skia/skia.gyp:skia',
#  '<(DEPTH)/third_party/harfbuzz-ng/harfbuzz.gyp:harfbuzz-ng',
#  '<(DEPTH)/third_party/icu/icu.gyp:icuuc',
#  '<(DEPTH)/third_party/ots/ots.gyp:ots',
#  '<(DEPTH)/cobalt/renderer/rasterizer/common/common.gyp:common',
#],
#
# 'target_name': 'software_rasterizer',
#
list(APPEND COBALT_renderer_stub_skgl_SOURCES
  ${COBALT_PORT_DIR}/renderer_stub/rasterizer/skgl/software_rasterizer.cc
  ${COBALT_PORT_DIR}/renderer_stub/rasterizer/skgl/render_tree_node_visitor.cc
  #${COBALT_PORT_DIR}/renderer_stub/rasterizer/skgl/textured_mesh_renderer.cc
  ${COBALT_PORT_DIR}/renderer_stub/rasterizer/skgl/graphics_state.cc
  ${COBALT_PORT_DIR}/renderer_stub/rasterizer/skgl/draw_object.cc
)

add_library(cobalt_renderer_stub_skgl STATIC
  ${COBALT_renderer_stub_skgl_SOURCES}
)

#message(WARNING OPENGL_EGL_INCLUDE_DIRS=
#  ${OPENGL_EGL_INCLUDE_DIRS})
#message(FATAL_ERROR FOUND_OPENGL_LIBRARIES=
#  ${FOUND_OPENGL_LIBRARIES}
#  ${OPENGLES2_LIBRARIES})

if(TARGET_LINUX OR TARGET_WINDOWS)
  list(APPEND EXTRA_cobalt_renderer_stub_skgl_LIBS
    ${FOUND_OPENGL_LIBRARIES}
    #OpenGL::EGL
  )
elseif(TARGET_EMSCRIPTEN)
  # skip
else()
  message(FATAL_ERROR "platform not supported")
endif()

if(NOT DEFINED cobalt_starboard_LIB)
  message(FATAL_ERROR "NOT DEFINED: cobalt_starboard_LIB")
endif(NOT DEFINED cobalt_starboard_LIB)

target_link_libraries(cobalt_renderer_stub_skgl PUBLIC
  ${cobalt_starboard_LIB} # TODO
  ${cobalt_starboard_LIB}
)

if(NOT DEFINED cobalt_starboard_headers_only_LIB)
  message(FATAL_ERROR "NOT DEFINED: cobalt_starboard_headers_only_LIB")
endif(NOT DEFINED cobalt_starboard_headers_only_LIB)

target_link_libraries(cobalt_renderer_stub_skgl PUBLIC
  ${cobalt_starboard_headers_only_LIB}
)

target_link_libraries(cobalt_renderer_stub_skgl PRIVATE
  ${cobalt_renderer_stub_skia_LIB}
  #
  ${base_LIB} # TODO
  ${cobalt_base_LIB}
  cobalt_math
  cobalt_dom
  cobalt_loader
  cobalt_layout
  cobalt_render_tree
  cobalt_ui_navigation
  cobalt_system_window
  ${COBALT_GLIMP_LIB}
  ## starboard_platform
  #starboard_core
  ## starboard_eztime
  ## starboard_common
  ${modp_b64_LIB}
  #dynamic_annotations
  ${libxml_LIB}
  ${CUSTOM_ICU_LIB}
  #ced
  # NOTE: force glm from conan, otherwise we can break
  # some isolated builds (emscripten) with -system /usr/include
  CONAN_PKG::cobalt_glm
  ${SKIA_LIB}
  ${HARFBUZZ_LIBRARIES}
  ${EXTRA_cobalt_renderer_stub_skgl_LIBS}
  #${OPENGLES2_LIBRARIES}
  ${FOUND_OPENGL_LIBRARIES}
  ${FREETYPE_LIBRARIES}
  # khronos
  ${khronos_LIB} # on _WIN32
)

set_property(TARGET cobalt_renderer_stub_skgl PROPERTY CXX_STANDARD 17)

target_include_directories(cobalt_renderer_stub_skgl PRIVATE
  #${UI_PARENT_DIR}
  ${COBALT_CORE_DIR}
  ${COBALT_CORE_PARENT_DIR}
  ${COBALT_COMMON_INCLUDES}
  #${COBALT_PORT_DIR}/renderer_stub
  ${OPENGLES2_INCLUDE_DIRS}
  ${OPENGL_EGL_INCLUDE_DIRS}
  ${FREETYPE_INCLUDE_DIRS}
  ${FOUND_OPENGL_INCLUDE_DIR}
)

target_compile_definitions(cobalt_renderer_stub_skgl PUBLIC
  ${RENDERER_PUBLIC_DEFINES}
)

target_compile_definitions(cobalt_renderer_stub_skgl PRIVATE
  ${RENDERER_PRIVATE_DEFINES}
)

## ===========

#'dependencies': [
#  '<(DEPTH)/cobalt/base/base.gyp:base',
#  '<(DEPTH)/cobalt/content/fonts/fonts.gyp:copy_font_data',
#  '<(DEPTH)/cobalt/debug/debug.gyp:console_command_manager',
#  '<(DEPTH)/cobalt/math/math.gyp:math',
#  '<(DEPTH)/cobalt/render_tree/render_tree.gyp:animations',
#  '<(DEPTH)/cobalt/render_tree/render_tree.gyp:render_tree',
#  '<(DEPTH)/cobalt/renderer/backend/backend.gyp:renderer_backend',
#  '<(DEPTH)/cobalt/renderer/rasterizer/rasterizer.gyp:rasterizer',
#  '<(DEPTH)/cobalt/system_window/system_window.gyp:system_window',
#  '<(DEPTH)/nb/nb.gyp:nb',
#],
#
# backend
#
#'dependencies': [
#  '<(DEPTH)/cobalt/base/base.gyp:base',
#  '<(DEPTH)/cobalt/math/math.gyp:math',
#  '<(DEPTH)/cobalt/renderer/backend/starboard/platform_backend.gyp:renderer_platform_backend',
#],
#
# rasterizer
#
#['gl_type != "none"', {
#  'dependencies': [
#    '<(DEPTH)/cobalt/renderer/rasterizer/skia/rasterizer.gyp:hardware_rasterizer',
#    '<(DEPTH)/cobalt/renderer/rasterizer/egl/rasterizer.gyp:software_rasterizer',
#    '<(DEPTH)/cobalt/renderer/rasterizer/egl/rasterizer.gyp:hardware_rasterizer',
#  ],
#}],
#['OS=="starboard"', {
#  'dependencies': [
#    '<(DEPTH)/cobalt/renderer/rasterizer/blitter/rasterizer.gyp:hardware_rasterizer',
#    '<(DEPTH)/cobalt/renderer/rasterizer/blitter/rasterizer.gyp:software_rasterizer',
#  ],
#}],
# skia_cobalt.gypi
# TODO: uses outdated skia ver!
list(APPEND COBALT_renderer_stub_SOURCES
  ${COBALT_PORT_DIR}/renderer_stub/get_default_rasterizer_for_platform.cc
  ${COBALT_PORT_DIR}/renderer_stub/renderer_module_default_options.cc
  ${COBALT_PORT_DIR}/renderer_stub/pipeline.cc
  ${COBALT_PORT_DIR}/renderer_stub/renderer_module.cc
  ${COBALT_PORT_DIR}/renderer_stub/smoothed_value.cc
  ${COBALT_PORT_DIR}/renderer_stub/submission_queue.cc
  #
)

if(ENABLE_COBALT_GLIMP)
  list(APPEND COBALT_renderer_stub_SOURCES
    ${COBALT_PORT_DIR}/renderer_stub/backend/egl/display.cc
    ${COBALT_PORT_DIR}/renderer_stub/backend/egl/framebuffer.cc
    ${COBALT_PORT_DIR}/renderer_stub/backend/egl/graphics_context.cc
    ${COBALT_PORT_DIR}/renderer_stub/backend/egl/graphics_system.cc
    ${COBALT_PORT_DIR}/renderer_stub/backend/egl/pbuffer_render_target.cc
    ${COBALT_PORT_DIR}/renderer_stub/backend/egl/resource_context.cc
    ${COBALT_PORT_DIR}/renderer_stub/backend/egl/texture.cc
    ${COBALT_PORT_DIR}/renderer_stub/backend/egl/texture_data.cc
    ${COBALT_PORT_DIR}/renderer_stub/backend/egl/texture_data_cpu.cc
    ${COBALT_PORT_DIR}/renderer_stub/backend/egl/texture_data_pbo.cc
    ${COBALT_PORT_DIR}/renderer_stub/backend/egl/utils.cc
    #
    ${COBALT_PORT_DIR}/renderer_stub/backend/starboard/default_graphics_system_egl.cc
  )
else(ENABLE_COBALT_GLIMP)
  list(APPEND COBALT_renderer_stub_SOURCES
    ${COBALT_PORT_DIR}/renderer_stub/backend/starboard/default_graphics_system_stub.cc
  )
endif(ENABLE_COBALT_GLIMP)

list(APPEND COBALT_renderer_stub_SOURCES
  ${COBALT_PORT_DIR}/renderer_stub/rasterizer/stub/rasterizer.cc
  #
  ${COBALT_PORT_DIR}/renderer_stub/backend/render_target.cc
)


add_library(cobalt_renderer_stub STATIC
  ${COBALT_renderer_stub_SOURCES}
)

#message(WARNING OPENGL_EGL_INCLUDE_DIRS=
#  ${OPENGL_EGL_INCLUDE_DIRS})
#message(FATAL_ERROR FOUND_OPENGL_LIBRARIES=
#  ${FOUND_OPENGL_LIBRARIES}
#  ${OPENGLES2_LIBRARIES})

if(TARGET_LINUX OR TARGET_WINDOWS)
  list(APPEND EXTRA_cobalt_renderer_stub_LIBS
    ${FOUND_OPENGL_LIBRARIES}
    #OpenGL::EGL
  )
elseif(TARGET_EMSCRIPTEN)
  # skip
else()
  message(FATAL_ERROR "platform not supported")
endif()

if(NOT DEFINED cobalt_starboard_LIB)
  message(FATAL_ERROR "NOT DEFINED: cobalt_starboard_LIB")
endif(NOT DEFINED cobalt_starboard_LIB)

target_link_libraries(cobalt_renderer_stub PUBLIC
  ${cobalt_starboard_LIB}
)

if(NOT DEFINED cobalt_starboard_headers_only_LIB)
  message(FATAL_ERROR "NOT DEFINED: cobalt_starboard_headers_only_LIB")
endif(NOT DEFINED cobalt_starboard_headers_only_LIB)

target_link_libraries(cobalt_renderer_stub PUBLIC
  ${cobalt_starboard_headers_only_LIB}
)

target_link_libraries(cobalt_renderer_stub PRIVATE
  cobalt_renderer_stub_skgl
  ${cobalt_renderer_stub_skia_LIB}
  #
  ${base_LIB} # TODO
  ${cobalt_base_LIB}
  cobalt_math
  cobalt_dom
  cobalt_loader
  cobalt_layout
  cobalt_render_tree
  cobalt_ui_navigation
  cobalt_system_window
  ${COBALT_GLIMP_LIB}
  ## starboard_platform
  #starboard_core
  ## starboard_eztime
  ## starboard_common
  ${modp_b64_LIB}
  #dynamic_annotations
  ${libxml_LIB}
  ${CUSTOM_ICU_LIB}
  #ced
  # NOTE: force glm from conan, otherwise we can break
  # some isolated builds (emscripten) with -system /usr/include
  CONAN_PKG::cobalt_glm
  ${SKIA_LIB}
  ${HARFBUZZ_LIBRARIES}
  ${EXTRA_cobalt_renderer_stub_LIBS}
  #${OPENGLES2_LIBRARIES}
  ${FOUND_OPENGL_LIBRARIES}
  ${FREETYPE_LIBRARIES}
)

set_property(TARGET cobalt_renderer_stub PROPERTY CXX_STANDARD 17)

target_include_directories(cobalt_renderer_stub PRIVATE
  #${UI_PARENT_DIR}
  ${COBALT_CORE_DIR}
  ${COBALT_CORE_PARENT_DIR}
  ${COBALT_COMMON_INCLUDES}
  #${COBALT_PORT_DIR}/renderer_stub
  ${OPENGLES2_INCLUDE_DIRS}
  ${OPENGL_EGL_INCLUDE_DIRS}
  ${FREETYPE_INCLUDE_DIRS}
  ${FOUND_OPENGL_INCLUDE_DIR}
)

target_compile_definitions(cobalt_renderer_stub PUBLIC
  ${RENDERER_PUBLIC_DEFINES}
)

target_compile_definitions(cobalt_renderer_stub PRIVATE
  ${RENDERER_PRIVATE_DEFINES}
)
