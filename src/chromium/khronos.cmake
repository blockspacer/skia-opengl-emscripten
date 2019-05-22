add_library(khronos INTERFACE)
target_include_directories(khronos INTERFACE
  ${khronos_DIR}
  ${GPU_GLES2_DIR}
  ${GPU_GLES2_DIR_PARENT_DIR} # contains "GLES2/gl2chromium.h"
  #${CC_PARENT_DIR}/gpu # requires "GLES2/gl2chromium.h"
)
