### --- libsync ---###
# libsync used by ui/gfx

set(libsync_SOURCES
  #${libsync_DIR}src/include/sync/sync.h",
  #${libsync_DIR}src/sw_sync.h",
  ${libsync_DIR}src/sync.c
  ${libsync_DIR}strlcpy.c
)

add_library(libsync STATIC
  ${libsync_SOURCES}
)

#target_link_libraries(libsync PUBLIC
#  #dynamic_annotations
#  #base
#)

set_property(TARGET libsync PROPERTY CXX_STANDARD 17)

target_include_directories(libsync PRIVATE
  ${libsync_DIR}
)

target_include_directories(libsync PUBLIC
  ${libsync_DIR}src
  ${libsync_DIR}src/include
)

if(NOT MSVC OR IS_CLANG_CL)
  target_compile_options(libsync PRIVATE
    -Wno-implicit-function-declaration)
else()
  # TODO
endif()

#target_compile_definitions(libsync PRIVATE
#  # IS_IPC_IMPL=1
#  # IPC_IMPLEMENTATION
#  # IPC_MOJO_IMPLEMENTATION
#  # IPC_MESSAGE_SUPPORT_IMPL # TODO
#)
