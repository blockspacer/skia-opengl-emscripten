cmake_minimum_required(VERSION 2.8)
project(COBALT)

set(COBALT_CORE_DIR src/cobalt)

## --- COBALT_CORE ---###

set(COBALT_CORE_COMMON_SOURCES
  #${COBALT_CORE_DIR}base_export.h",
  #${COBALT_CORE_DIR}completion_event.h",
  #${COBALT_CORE_DIR}container_util.h",
  ${COBALT_CORE_DIR}delayed_unique_notifier.cc
  #${COBALT_CORE_DIR}delayed_unique_notifier.h",
  ${COBALT_CORE_DIR}devtools_instrumentation.cc
  #${COBALT_CORE_DIR}devtools_instrumentation.h",
  ${COBALT_CORE_DIR}histograms.cc
  #${COBALT_CORE_DIR}histograms.h",
  ${COBALT_CORE_DIR}index_rect.cc
  #${COBALT_CORE_DIR}index_rect.h",
  ${COBALT_CORE_DIR}invalidation_region.cc
  #${COBALT_CORE_DIR}invalidation_region.h",
  #${COBALT_CORE_DIR}list_container.h",
  ${COBALT_CORE_DIR}list_container_helper.cc
  #${COBALT_CORE_DIR}list_container_helper.h",
  ${COBALT_CORE_DIR}math_util.cc
  #${COBALT_CORE_DIR}math_util.h",
  ${COBALT_CORE_DIR}region.cc
  #${COBALT_CORE_DIR}region.h",
  ${COBALT_CORE_DIR}reverse_spiral_iterator.cc
  #${COBALT_CORE_DIR}reverse_spiral_iterator.h",
  ${COBALT_CORE_DIR}rolling_time_delta_history.cc
  #${COBALT_CORE_DIR}rolling_time_delta_history.h",
  #${COBALT_CORE_DIR}rtree.h",
  ${COBALT_CORE_DIR}simple_enclosed_region.cc
  #${COBALT_CORE_DIR}simple_enclosed_region.h",
  ${COBALT_CORE_DIR}spiral_iterator.cc
  #${COBALT_CORE_DIR}spiral_iterator.h",
  ${COBALT_CORE_DIR}switches.cc
  #${COBALT_CORE_DIR}switches.h",
  #${COBALT_CORE_DIR}synced_property.h",
  ${COBALT_CORE_DIR}tiling_data.cc
  #${COBALT_CORE_DIR}tiling_data.h",
  #${COBALT_CORE_DIR}time_util.h",
  ${COBALT_CORE_DIR}unique_notifier.cc
  #${COBALT_CORE_DIR}unique_notifier.h",
)

add_library(COBALT_CORE STATIC
  ${COBALT_CORE_COMMON_SOURCES}
)

target_link_libraries(COBALT_CORE PUBLIC
  #GFX_GEOMETRY
  #${BASE_LIBRARIES}
  base
  SKIA
  dynamic_annotations
  UI_GFX
)

set_property(TARGET COBALT_CORE PROPERTY CXX_STANDARD 17)

target_include_directories(COBALT_CORE PRIVATE
  #${UI_PARENT_DIR}
  ${COBALT_CORE_DIR}
  #${COBALT_CORE_DIR}/common
  #${BASE_DIR}
)

target_compile_definitions(COBALT_CORE PRIVATE
  #CC_BASE_IMPLEMENTATION=1
)
