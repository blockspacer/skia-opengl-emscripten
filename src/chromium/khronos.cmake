add_library(khronos INTERFACE)
target_include_directories(khronos INTERFACE
  ${khronos_DIR}
  ${GPU_GLES2_DIR_PARENT_DIR} # contains gl2chromium.h
)
