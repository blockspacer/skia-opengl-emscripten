include_guard( DIRECTORY )

set(ENABLE_GLEW FALSE)
if(MSVC) # TODO
  set(COMMON_FLAGS "${COMMON_FLAGS} -DGLEW_NO_GLU=1")
  set(GLEW_STATIC TRUE)
  if(GLEW_STATIC)
    set(COMMON_FLAGS "${COMMON_FLAGS} -DGLEW_STATIC=1")
  endif(GLEW_STATIC)
endif()

macro(find_glew)
  if(TARGET_EMSCRIPTEN)
    # skip
  elseif(TARGET_LINUX OR TARGET_WINDOWS)
    set(ENABLE_GLEW TRUE)
    if(GLEW_STATIC)
      # override GLEW_LIB_SEARCH_NAMES to force `glew32s`, `s` suffix for static
      list(APPEND GLEW_LIB_SEARCH_NAMES glew32s)
    endif(GLEW_STATIC)
    find_package(GLEW REQUIRED) # First try to find using the find_package method (works with vcpkg)
  else()
    message(FATAL_ERROR "platform not supported")
  endif()

  message(STATUS "GLEW_INCLUDE_PATH=${GLEW_INCLUDE_PATH}")
  message(STATUS "GLEW_LIBRARY=${GLEW_LIBRARY}")
endmacro(find_glew)
