### --- GFX_RANGE ---###

set(GFX_RANGE_SOURCES
  #${GFX_RANGE_DIR}gfx_range_export.h",
  ${GFX_RANGE_DIR}range.cc
  #${GFX_RANGE_DIR}range.h",
  ${GFX_RANGE_DIR}range_f.cc
  #${GFX_RANGE_DIR}range_f.h",
  # TODO # ${GFX_RANGE_DIR}range_mac.mm",
  # TODO # ${GFX_RANGE_DIR}range_win.cc
)

add_library(GFX_RANGE STATIC
  ${GFX_RANGE_SOURCES}
)

target_link_libraries(GFX_RANGE PUBLIC
  #${BASE_LIBRARIES}
  base
)

set_property(TARGET GFX_RANGE PROPERTY CXX_STANDARD 17)

target_include_directories(GFX_RANGE PRIVATE
  ${GFX_RANGE_DIR}
  ${BASE_DIR}
)

target_compile_definitions(GFX_RANGE PRIVATE
  GFX_RANGE_IMPLEMENTATION=1
)