### --- COMPONENTS_VIZ_CLIENT ---###

set(COMPONENTS_VIZ_CLIENT_SOURCES
  #
  ${COMPONENTS_VIZ_CLIENT_DIR}client_resource_provider.cc
  #${COMPONENTS_VIZ_CLIENT_DIR}client_resource_provider.h",
  ${COMPONENTS_VIZ_CLIENT_DIR}frame_eviction_manager.cc
  #${COMPONENTS_VIZ_CLIENT_DIR}frame_eviction_manager.h",
  ${COMPONENTS_VIZ_CLIENT_DIR}frame_evictor.cc
  #${COMPONENTS_VIZ_CLIENT_DIR}frame_evictor.h",
  #${COMPONENTS_VIZ_CLIENT_DIR}hit_test_data_provider.h",
  ${COMPONENTS_VIZ_CLIENT_DIR}hit_test_data_provider_draw_quad.cc
  #${COMPONENTS_VIZ_CLIENT_DIR}hit_test_data_provider_draw_quad.h",
  ${COMPONENTS_VIZ_CLIENT_DIR}local_surface_id_provider.cc
  #${COMPONENTS_VIZ_CLIENT_DIR}local_surface_id_provider.h",
  ${COMPONENTS_VIZ_CLIENT_DIR}shared_bitmap_reporter.cc
  #${COMPONENTS_VIZ_CLIENT_DIR}shared_bitmap_reporter.h",
)

add_library(COMPONENTS_VIZ_CLIENT STATIC
  ${COMPONENTS_VIZ_CLIENT_SOURCES}
)

target_link_libraries(COMPONENTS_VIZ_CLIENT PUBLIC
  #public_deps = [
  #  "//base",
  #  "//components/viz/common",
  #  "//mojo/public/cpp/system",
  #  "//skia",
  #]
  #deps = [
  #  "//cc/base",
  #  "//gpu/command_buffer/client:gles2_interface",
  #  "//gpu/command_buffer/client:raster_interface",
  #]
  #GPU_COMMAND_BUFFER
  #${BASE_LIBRARIES}
  #UI_GL
  #BASE_CC
  #PAINT_CC
  COMPONENTS_VIZ_COMMON
  BASE_CC
  base
  SKIA
  GPU_COMMAND_BUFFER
  #GFX_ANIMATION
  #GFX_CODEC
  #GFX_COLOR_SPACE
  #GFX_GEOMETRY_SKIA
  #GFX_GEOMETRY
  #GFX_SWITCHES
  #GFX_RANGE
)

set_property(TARGET COMPONENTS_VIZ_CLIENT PROPERTY CXX_STANDARD 17)

target_include_directories(COMPONENTS_VIZ_CLIENT PRIVATE
  ${COMPONENTS_VIZ_PARENT_DIR}
  #${COMPONENTS_VIZ_CLIENT}
  ${BASE_DIR}
)

target_compile_definitions(COMPONENTS_VIZ_CLIENT PRIVATE
  VIZ_CLIENT_IMPLEMENTATION=1
)

#target_compile_options(COMPONENTS_VIZ_CLIENT PRIVATE
#  -Wno-error
#  -Wno-c++11-narrowing
#)
