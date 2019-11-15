# see https://github.com/chromium/chromium/blob/87f2e0fdc7004e428e4e6216e79bf6938fe0e23f/ui/gfx/BUILD.gn#L401

### --- GFX_COLOR_SPACE ---###

if(TARGET_WINDOWS)
  list(APPEND GFX_COLOR_SPACE_SOURCES
    ${GFX_COLOR_SPACE_DIR}color_space_export.h
    ${GFX_COLOR_SPACE_DIR}color_space_win.cc
  )
elseif(TARGET_LINUX OR TARGET_EMSCRIPTEN)
  # skip
else()
  message(FATAL_ERROR "platform not supported")
endif()

list(APPEND GFX_COLOR_SPACE_SOURCES
  ${GFX_COLOR_SPACE_DIR}color_space.cc
  #"color_space.h",
  #"color_space_export.h",
  #"color_space_win.h",
  ${GFX_COLOR_SPACE_DIR}icc_profile.cc
  #"icc_profile.h",
  ${GFX_COLOR_SPACE_DIR}skia_color_space_util.cc
  #"skia_color_space_util.h",
)

add_library(GFX_COLOR_SPACE STATIC
  ${GFX_COLOR_SPACE_SOURCES}
)

target_link_libraries(GFX_COLOR_SPACE PRIVATE
  #${BASE_LIBRARIES}
  base
  SKIA
  #skcms
  #${OPENGLES2_LIBRARIES}
  ${FOUND_OPENGL_LIBRARIES}
)

set_property(TARGET GFX_COLOR_SPACE PROPERTY CXX_STANDARD 17)

target_include_directories(GFX_COLOR_SPACE PRIVATE
  ${GFX_COLOR_SPACE_DIR}
  ${BASE_DIR}
  ${OPENGL_INCLUDE_DIR}
)

target_compile_definitions(GFX_COLOR_SPACE PRIVATE
  COLOR_SPACE_IMPLEMENTATION=1
)
