# see https://github.com/chromium/chromium/blob/87f2e0fdc7004e428e4e6216e79bf6938fe0e23f/ui/gfx/range/BUILD.gn

# TODO
#if (is_ios) {
#  set_sources_assignment_filter([])
#  sources += [ "range_mac.mm" ]
#  set_sources_assignment_filter(sources_assignment_filter)
#}
if(TARGET_WINDOWS)
  # skip
elseif(TARGET_LINUX OR TARGET_EMSCRIPTEN)
  # skip
else()
  message(FATAL_ERROR "platform not supported")
endif()

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

target_link_libraries(GFX_RANGE PRIVATE
  #${BASE_LIBRARIES}
  base
  #${OPENGLES2_LIBRARIES}
  ${FOUND_OPENGL_LIBRARIES}
)

set_property(TARGET GFX_RANGE PROPERTY CXX_STANDARD 17)

target_include_directories(GFX_RANGE PRIVATE
  ${GFX_RANGE_DIR}
  ${BASE_DIR}
  ${OPENGL_INCLUDE_DIR}
)

target_compile_definitions(GFX_RANGE PRIVATE
  GFX_RANGE_IMPLEMENTATION=1
)
