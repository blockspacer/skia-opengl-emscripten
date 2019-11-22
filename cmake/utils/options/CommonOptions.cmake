include_guard( DIRECTORY )

set(CMAKE_EXPORT_COMPILE_COMMANDS ON)

message(STATUS "CMAKE_BUILD_TYPE = ${CMAKE_BUILD_TYPE}")
IF( NOT CMAKE_BUILD_TYPE )
   SET( CMAKE_BUILD_TYPE Debug ... FORCE )
ENDIF()

set(COMMON_THIRDPARTY_DIR ${CMAKE_CURRENT_SOURCE_DIR}/thirdparty/)

set(ENABLE_CMAKE_COMPILE_WARNINGS TRUE CACHE BOOL "ENABLE_CMAKE_COMPILE_WARNINGS")

if (TARGET_EMSCRIPTEN AND NOT ENABLE_NATIVE_HTML)
  list(APPEND CXTPL_EXTRA_ARGS "-extra-arg=-DPLATFORM_NAME=\"WEBGL\"")
  list(APPEND CXTPL_EXTRA_ARGS "-extra-arg=-DPLATFORM_TYPE=PlatformType::WEBGL")
elseif (TARGET_EMSCRIPTEN AND ENABLE_NATIVE_HTML)
  list(APPEND CXTPL_EXTRA_ARGS "-extra-arg=-DPLATFORM_NAME=\"HTML5\"")
  list(APPEND CXTPL_EXTRA_ARGS "-extra-arg=-DPLATFORM_TYPE=PlatformType::HTML5")
elseif(TARGET_LINUX)
  list(APPEND CXTPL_EXTRA_ARGS "-extra-arg=-DPLATFORM_NAME=\"LINUX\"")
  list(APPEND CXTPL_EXTRA_ARGS "-extra-arg=-DPLATFORM_TYPE=PlatformType::LINUX")
elseif(TARGET_WINDOWS)
  list(APPEND CXTPL_EXTRA_ARGS "-extra-arg=-DPLATFORM_NAME=\"WIN\"")
  list(APPEND CXTPL_EXTRA_ARGS "-extra-arg=-DPLATFORM_TYPE=PlatformType::WIN")
else()
  message(FATAL_ERROR "platform not supported")
endif()

if(TARGET_EMSCRIPTEN)
  set(USE_OPENGL_LIB FALSE) # no system OPENGL for wasm
elseif(TARGET_WINDOWS OR TARGET_LINUX)
  set(USE_OPENGL_LIB TRUE)
else()
  message(FATAL_ERROR "platform not supported")
endif()
if(TARGET_EMSCRIPTEN)
  set(USE_OPENGLES2_LIB FALSE) # no system OPENGLES for wasm
  set(USE_OPENGL_LIB FALSE)
elseif(TARGET_LINUX OR TARGET_WINDOWS)
  set(USE_OPENGLES2_LIB FALSE) # TODO
  set(USE_OPENGL_LIB TRUE)
else()
  message(FATAL_ERROR "platform not supported")
endif()

# TODO: GL_GLEXT_PROTOTYPES

if(NOT USE_OPENGL_LIB)
  # make OpenGL optional
  set(FOUND_OPENGL_LIBRARIES "")
  set(FOUND_OPENGL_INCLUDE_DIR "")
endif()

# Mandatory dependencies
find_program(PYTHON_FOUND python)
if(NOT PYTHON_FOUND)
  message(FATAL_ERROR "\"python\" is required, please install it !")
else()
  message(STATUS "\"python\" found...")
endif(NOT PYTHON_FOUND)
