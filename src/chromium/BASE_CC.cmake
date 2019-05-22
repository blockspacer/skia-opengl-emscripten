## --- BASE_CC ---###

set(BASE_CC_COMMON_SOURCES
  #${BASE_CC_DIR}base_export.h",
  #${BASE_CC_DIR}completion_event.h",
  #${BASE_CC_DIR}container_util.h",
  ${BASE_CC_DIR}delayed_unique_notifier.cc
  #${BASE_CC_DIR}delayed_unique_notifier.h",
  ${BASE_CC_DIR}devtools_instrumentation.cc
  #${BASE_CC_DIR}devtools_instrumentation.h",
  ${BASE_CC_DIR}histograms.cc
  #${BASE_CC_DIR}histograms.h",
  ${BASE_CC_DIR}index_rect.cc
  #${BASE_CC_DIR}index_rect.h",
  ${BASE_CC_DIR}invalidation_region.cc
  #${BASE_CC_DIR}invalidation_region.h",
  #${BASE_CC_DIR}list_container.h",
  ${BASE_CC_DIR}list_container_helper.cc
  #${BASE_CC_DIR}list_container_helper.h",
  ${BASE_CC_DIR}math_util.cc
  #${BASE_CC_DIR}math_util.h",
  ${BASE_CC_DIR}region.cc
  #${BASE_CC_DIR}region.h",
  ${BASE_CC_DIR}reverse_spiral_iterator.cc
  #${BASE_CC_DIR}reverse_spiral_iterator.h",
  ${BASE_CC_DIR}rolling_time_delta_history.cc
  #${BASE_CC_DIR}rolling_time_delta_history.h",
  #${BASE_CC_DIR}rtree.h",
  ${BASE_CC_DIR}simple_enclosed_region.cc
  #${BASE_CC_DIR}simple_enclosed_region.h",
  ${BASE_CC_DIR}spiral_iterator.cc
  #${BASE_CC_DIR}spiral_iterator.h",
  ${BASE_CC_DIR}switches.cc
  #${BASE_CC_DIR}switches.h",
  #${BASE_CC_DIR}synced_property.h",
  ${BASE_CC_DIR}tiling_data.cc
  #${BASE_CC_DIR}tiling_data.h",
  #${BASE_CC_DIR}time_util.h",
  ${BASE_CC_DIR}unique_notifier.cc
  #${BASE_CC_DIR}unique_notifier.h",
)

add_library(BASE_CC STATIC
  ${BASE_CC_COMMON_SOURCES}
)

target_link_libraries(BASE_CC PUBLIC
  #GFX_GEOMETRY
  #${BASE_LIBRARIES}
  base
  SKIA
  dynamic_annotations
  UI_GFX
)

set_property(TARGET BASE_CC PROPERTY CXX_STANDARD 17)

target_include_directories(BASE_CC PRIVATE
  #${UI_PARENT_DIR}
  ${BASE_CC_DIR}
  #${BASE_CC_DIR}/common
  #${BASE_DIR}
)

target_compile_definitions(BASE_CC PRIVATE
  CC_BASE_IMPLEMENTATION=1
)
