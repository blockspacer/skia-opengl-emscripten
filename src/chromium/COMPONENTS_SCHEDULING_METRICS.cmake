﻿### --- COMPONENTS_SCHEDULING_METRICS ---###

set(COMPONENTS_SCHEDULING_METRICS_DIR
  components/scheduling_metrics/
)

set(COMPONENTS_SCHEDULING_METRICS_SOURCES
    #"task_duration_metric_reporter.h",
  ${COMPONENTS_SCHEDULING_METRICS_DIR}thread_metrics.cc
    #"thread_metrics.h",
    #"thread_type.h",
  ${COMPONENTS_SCHEDULING_METRICS_DIR}total_duration_metric_reporter.cc
    #"total_duration_metric_reporter.h",
)

add_library(COMPONENTS_SCHEDULING_METRICS STATIC
  ${COMPONENTS_SCHEDULING_METRICS_SOURCES}
)

target_link_libraries(COMPONENTS_SCHEDULING_METRICS PRIVATE
  base
)

set_property(TARGET COMPONENTS_SCHEDULING_METRICS PROPERTY CXX_STANDARD 17)

target_include_directories(COMPONENTS_SCHEDULING_METRICS PRIVATE
  ${COMPONENTS_SCHEDULING_METRICS_DIR}
  #${COMPONENTS_SCHEDULING_METRICS_DIR}/include
  #${COMPONENTS_SCHEDULING_METRICS_DIR}/src
  #${COMPONENTS_SCHEDULING_METRICS_DIR}/src/src
  #${BASE_DIR}
)

target_compile_definitions(COMPONENTS_SCHEDULING_METRICS PRIVATE
  IS_SCHEDULING_METRICS_IMPL=1  # getenv() is not thread-safe.
  #${EXTRA_DEFINES}
  #WITH_SIMD
  #NO_GETENV
)
