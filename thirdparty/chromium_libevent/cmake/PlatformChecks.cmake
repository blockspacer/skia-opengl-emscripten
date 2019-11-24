﻿include_guard( DIRECTORY )

# TODO: code repeat
set(TARGET_EMSCRIPTEN FALSE)
set(TARGET_LINUX FALSE)
set(TARGET_WINDOWS FALSE)
if(EMSCRIPTEN)
  set(TARGET_EMSCRIPTEN TRUE)
elseif(${CMAKE_SYSTEM_NAME} STREQUAL "Linux")
  set(TARGET_LINUX TRUE)
elseif(${CMAKE_SYSTEM_NAME} STREQUAL "Windows")
# TODO OR ${CMAKE_SYSTEM_NAME} STREQUAL "Generic")
  set(TARGET_WINDOWS TRUE)
else()
  set(TARGET_UNKNOWN TRUE)
  message(FATAL_ERROR "platform=${CMAKE_SYSTEM_NAME} not supported")
endif()

if (TARGET_EMSCRIPTEN)
  # skip
elseif(TARGET_LINUX)
  # skip
else()
  message(FATAL_ERROR "platform not supported")
endif()
