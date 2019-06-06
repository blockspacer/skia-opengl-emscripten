### --- iccjpeg ---###

set(iccjpeg_DIR
  ${CHROMIUM_DIR}/third_party/iccjpeg/)

set(iccjpeg_SOURCES
  ${iccjpeg_DIR}iccjpeg.c
  ${iccjpeg_DIR}iccjpeg.h
)

add_library(iccjpeg STATIC
  ${iccjpeg_SOURCES}
)

target_link_libraries(iccjpeg PUBLIC
  #${libjpeg_LIB}
  ${libjpeg_TURBO_LIB}
)

set_property(TARGET iccjpeg PROPERTY CXX_STANDARD 17)

target_include_directories(iccjpeg PUBLIC
  ${iccjpeg_DIR}
)

#target_include_directories(iccjpeg PUBLIC
#  ${iccjpeg_DIR}src
#  ${iccjpeg_DIR}src/include
#)

#target_compile_options(iccjpeg PRIVATE
#  -Wno-implicit-function-declaration)

#target_compile_definitions(iccjpeg PRIVATE
#  # IS_IPC_IMPL=1
#  # IPC_IMPLEMENTATION
#  # IPC_MOJO_IMPLEMENTATION
#  # IPC_MESSAGE_SUPPORT_IMPL # TODO
#)
