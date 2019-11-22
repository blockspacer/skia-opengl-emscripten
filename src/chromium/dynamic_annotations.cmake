### --- dynamic_annotations ---###

add_library(dynamic_annotations STATIC
  ${BASE_DIR}/third_party/dynamic_annotations/dynamic_annotations.c
)

target_include_directories(dynamic_annotations PRIVATE
  #${CHROMIUM_DIR}
  ${BASE_PARENT_DIR} # path to base/third_party/dynamic_annotations/dynamic_annotations.h
  ${BASE_DIR}/third_party
  ${BASE_DIR}/third_party/dynamic_annotations
  ${BASE_DIR}/third_party/valgrind
  ${BASE_DIR}
)

set_property(TARGET dynamic_annotations PROPERTY CXX_STANDARD 17)
