# see https://github.com/chromium/chromium/blob/87f2e0fdc7004e428e4e6216e79bf6938fe0e23f/ui/gfx/BUILD.gn#L602

### --- GFX_SWITCHES ---###

list(APPEND GFX_SWITCHES_SOURCES
  ${GFX_SWITCHES_DIR}switches.cc
  #"switches.h",
  #"switches_export.h",
)

add_library(GFX_SWITCHES STATIC
  ${GFX_SWITCHES_SOURCES}
)

target_link_libraries(GFX_SWITCHES PRIVATE
  #${BASE_LIBRARIES}
  base
  #${OPENGLES2_LIBRARIES}
  ${FOUND_OPENGL_LIBRARIES}
)

set_property(TARGET GFX_SWITCHES PROPERTY CXX_STANDARD 17)

target_include_directories(GFX_SWITCHES PRIVATE
  ${GFX_SWITCHES_DIR}
  ${BASE_DIR}
  ${OPENGL_INCLUDE_DIR}
)

target_compile_definitions(GFX_SWITCHES PRIVATE
  GFX_SWITCHES_IMPLEMENTATION=1
)
