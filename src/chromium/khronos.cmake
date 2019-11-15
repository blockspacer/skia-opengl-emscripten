if(TARGET_LINUX OR TARGET_WINDOWS)
  # nothing
else()
  message(FATAL_ERROR "platform not supported")
endif()

message(STATUS "khronos_DIR=${khronos_DIR}")

if(TARGET_WINDOWS)
  list(APPEND EXTRA_khronos_INC_DIRS
    "${khronos_DIR}noninclude/GL"
    "${khronos_DIR}noninclude"
  )
  if(NOT EXISTS "${khronos_DIR}noninclude/GL/glext.h")
    message(FATAL_ERROR "can't find ${khronos_DIR}noninclude/GL/glext.h")
  endif()
endif(TARGET_WINDOWS)

add_library(khronos INTERFACE)
target_include_directories(khronos INTERFACE
  ${EXTRA_khronos_INC_DIRS}
  ${khronos_DIR}
  ${GPU_GLES2_DIR}
  ${GPU_GLES2_DIR_PARENT_DIR} # contains "GLES2/gl2chromium.h"
  #${CC_PARENT_DIR}/gpu # requires "GLES2/gl2chromium.h"
)
