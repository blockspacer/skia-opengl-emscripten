# see https://github.com/chromium/chromium/blob/87f2e0fdc7004e428e4e6216e79bf6938fe0e23f/ui/gfx/BUILD.gn#L42

### --- GFX_GEOMETRY_SKIA ---###

set(GFX_GEOMETRY_SKIA_SOURCES
  #geometry_skia_export.h",
  ${GFX_GEOMETRY_SKIA_DIR}rrect_f.cc
  #rrect_f.h",
  ${GFX_GEOMETRY_SKIA_DIR}skia_util.cc
  #skia_util.h",
  ${GFX_GEOMETRY_SKIA_DIR}transform.cc
  #transform.h",
  ${GFX_GEOMETRY_SKIA_DIR}transform_util.cc
  #transform_util.h",
)

add_library(GFX_GEOMETRY_SKIA STATIC
  ${GFX_GEOMETRY_SKIA_SOURCES}
)

target_link_libraries(GFX_GEOMETRY_SKIA PUBLIC
  #${BASE_LIBRARIES}
  SKIA
  GFX_GEOMETRY
  base
  #${OPENGLES2_LIBRARIES}
  ${FOUND_OPENGL_LIBRARIES}
)

set_property(TARGET GFX_GEOMETRY_SKIA PROPERTY CXX_STANDARD 17)

target_include_directories(GFX_GEOMETRY_SKIA PRIVATE
  ${GFX_GEOMETRY_SKIA_DIR}
  ${BASE_DIR}
  ${OPENGL_INCLUDE_DIR}
)

target_compile_definitions(GFX_GEOMETRY_SKIA PRIVATE
  GEOMETRY_SKIA_IMPLEMENTATION=1
)
