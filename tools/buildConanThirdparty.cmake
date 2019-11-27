#
# portable build script based on "cmake -P"
#
# example:
# cmake -DEXTRA_OPTS="conan/stable;--profile;emscripten" -P tools/buildConanThirdparty.cmake
#
cmake_minimum_required(VERSION 3.5)

# --- includes ---
# WHY CMAKE_CURRENT_LIST_DIR? see https://stackoverflow.com/a/12854575/10904212
set(CURRENT_SCRIPT_DIR ${CMAKE_CURRENT_LIST_DIR})
include(${CURRENT_SCRIPT_DIR}/coloredOut.cmake)

set(EXTRA_OPTS "" CACHE STRING "conan arguments")
if(EXTRA_OPTS STREQUAL "")
  message( FATAL_ERROR "provide EXTRA_OPTS, see comments in .cmake file")
endif()

macro(conan_create_target TARGET_PATH)
  execute_process(
    COMMAND
      ${COLORED_OUTPUT_ENABLER}
        ${CMAKE_COMMAND} "-E" "time" "conan" "create" "." ${EXTRA_OPTS}
    WORKING_DIRECTORY ${TARGET_PATH}
    TIMEOUT 7200 # sec
    RESULT_VARIABLE retcode
    ERROR_VARIABLE _ERROR_VARIABLE
  )
  if(NOT "${retcode}" STREQUAL "0")
    message( FATAL_ERROR "Bad exit status ${retcode} ${_ERROR_VARIABLE}")
  endif()
endmacro(conan_create_target)

# --- conan ---
conan_create_target(${CURRENT_SCRIPT_DIR}/../thirdparty/chromium_icu)
conan_create_target(${CURRENT_SCRIPT_DIR}/../thirdparty/chromium_libevent)
