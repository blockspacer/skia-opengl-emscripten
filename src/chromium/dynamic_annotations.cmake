### --- dynamic_annotations ---###

add_library(dynamic_annotations STATIC
  ${CHROMIUM_DIR}/base/third_party/dynamic_annotations/dynamic_annotations.c
)

target_include_directories(dynamic_annotations PRIVATE
  ${CHROMIUM_DIR}
  ${CHROMIUM_DIR}/base/third_party
  ${CHROMIUM_DIR}/base/third_party/dynamic_annotations
  ${CHROMIUM_DIR}/base/third_party/valgrind
  ${BASE_DIR}
)

set_property(TARGET dynamic_annotations PROPERTY CXX_STANDARD 17)
