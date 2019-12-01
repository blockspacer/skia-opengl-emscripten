include_guard( DIRECTORY )

#message(STATUS "CMAKE_SYSTEM_NAME = ${CMAKE_SYSTEM_NAME}")

if (CMAKE_CURRENT_SOURCE_DIR STREQUAL CMAKE_CURRENT_BINARY_DIR)
  message(FATAL_ERROR "You must set your binary directory different from your source")
endif()

message(STATUS "RELEASE_BUILD = ${RELEASE_BUILD}")

# clang-cl on Windows, see http://clang.llvm.org/docs/UsersManual.html#clang-cl
set(IS_CLANG_CL FALSE CACHE BOOL "clang-cl on WINDOWS, see http://clang.llvm.org/docs/UsersManual.html#clang-cl")
message(STATUS "IS_CLANG_CL=${IS_CLANG_CL}")
if(IS_CLANG_CL AND NOT TARGET_WINDOWS)
  message(FATAL_ERROR "IS_CLANG_CL requires TARGET_WINDOWS")
endif(IS_CLANG_CL AND NOT TARGET_WINDOWS)

set(ENABLE_NATIVE_HTML FALSE CACHE BOOL "ENABLE_NATIVE_HTML")
if(RELEASE_BUILD AND NOT EMSCRIPTEN AND ENABLE_NATIVE_HTML)
  message(FATAL_ERROR "need emscripten for ENABLE_NATIVE_HTML")
endif()

if(TARGET_EMSCRIPTEN)
  message(STATUS "DETECTED EMSCRIPTEN")
  if ("${EMSCRIPTEN_VERSION}" VERSION_GREATER 1.38.20)
    message(STATUS "Emscripten version is ${EMSCRIPTEN_VERSION}")
  else()
    message(FATAL_ERROR "EMSCRIPTEN_VERSION is not present, or is older than 1.38.20: '${EMSCRIPTEN_VERSION}'")
  endif()
  #
  if ("${EMSCRIPTEN_VERSION}" VERSION_GREATER 1.38.22)
    set(EMCC_SUPPORTS_ENVIRONMENT TRUE)
  else()
    set(EMCC_SUPPORTS_ENVIRONMENT FALSE)
  endif()
endif(TARGET_EMSCRIPTEN)

if(NOT RELEASE_BUILD)
  #
  # Debugging CFLAGS. Turn optimizations off; turn debugging symbols on.
  # see https://github.com/mmatyas/supermariowar/blob/master/CMakeLists.txt#L165
  # see http://www.brendangregg.com/blog/2016-08-09/gdb-example-ncurses.html
  #add_definitions(-DDEBUG=1 -D_DEBUG=1)
  #add_definitions(-D_DEBUG=1)

  # see cobalt/src/cobalt/layout/layout_unit.h
  set(COMMON_FLAGS "${COMMON_FLAGS} -D_DEBUG=1") #
  # see https://github.com/blockspacer/cobalt-clone-28052019/blob/master/src/cobalt/renderer/pipeline.cc#L119
  #set(COMMON_FLAGS "${COMMON_FLAGS} -DENABLE_DEBUGGER=1")
endif(NOT RELEASE_BUILD)

set(OPTIMIZE_LEVEL "" CACHE STRING "for example, -O0")
if(OPTIMIZE_LEVEL)
  message(STATUS "OPTIMIZE_LEVEL=${OPTIMIZE_LEVEL}")
else(OPTIMIZE_LEVEL)
  message(STATUS "OPTIMIZE_LEVEL will be detected based on BUILD_TYPE/RELEASE_BUILD")
endif(OPTIMIZE_LEVEL)

set(DEBUG_LEVEL "" CACHE STRING "for example, -g4")
if(DEBUG_LEVEL)
  message(STATUS "DEBUG_LEVEL=${DEBUG_LEVEL}")
else(DEBUG_LEVEL)
  message(STATUS "DEBUG_LEVEL will be detected based on BUILD_TYPE/RELEASE_BUILD")
endif(DEBUG_LEVEL)

if(IS_CLANG_CL)
  if(NOT MSVC)
    message(FATAL_ERROR "IS_CLANG_CL requires MSVC")
  endif(NOT MSVC)
endif(IS_CLANG_CL)
