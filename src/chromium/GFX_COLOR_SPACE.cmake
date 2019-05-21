### --- GFX_COLOR_SPACE ---###

set(GFX_COLOR_SPACE_SOURCES
  ${GFX_COLOR_SPACE_DIR}color_space.cc
  #"color_space.h",
  #"color_space_export.h",
  # TODO # "color_space_win.cc
  #"color_space_win.h",
  ${GFX_COLOR_SPACE_DIR}icc_profile.cc
  #"icc_profile.h",
  ${GFX_COLOR_SPACE_DIR}skia_color_space_util.cc
  #"skia_color_space_util.h",
)

add_library(GFX_COLOR_SPACE STATIC
  ${GFX_COLOR_SPACE_SOURCES}
)

target_link_libraries(GFX_COLOR_SPACE PUBLIC
  #${BASE_LIBRARIES}
  base
  SKIA
  #skcms
)

set_property(TARGET GFX_COLOR_SPACE PROPERTY CXX_STANDARD 17)

target_include_directories(GFX_COLOR_SPACE PRIVATE
  ${GFX_COLOR_SPACE_DIR}
  ${BASE_DIR}
)

target_compile_definitions(GFX_COLOR_SPACE PRIVATE
  COLOR_SPACE_IMPLEMENTATION=1
)
