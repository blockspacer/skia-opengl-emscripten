#
# compact_enc_det
# https://github.com/google/compact_enc_det
#

#add_subdirectory(${CHROMIUM_DIR}/third_party/ced/src)
set(ced_PATH ${CHROMIUM_DIR}/third_party/ced/src/)
if (WIN32)
  if (NOT EXISTS "${ced_PATH}compact_enc_det/compact_enc_det.h")
    message(FATAL_ERROR "\nCould not find ced source code.")
  endif()
endif()

option(CED_BUILD_SHARED_LIBS "Build shared libraries" OFF)

if("${CMAKE_CXX_COMPILER_ID}" STREQUAL "GNU")
  set(CED_CMAKE_CXX_FLAGS "${CED_CMAKE_CXX_FLAGS} -std=c++11 -Wno-narrowing")
elseif("${CMAKE_CXX_COMPILER_ID}" STREQUAL "Clang")
  set(CED_CMAKE_CXX_FLAGS "${CED_CMAKE_CXX_FLAGS} -std=c++11 -Wno-c++11-narrowing")
elseif("${CMAKE_CXX_COMPILER_ID}" STREQUAL "MSVC")
  if (NOT BUILD_SHARED_LIBS)
    foreach(flag_var
            CED_CMAKE_CXX_FLAGS CED_CMAKE_CXX_FLAGS_DEBUG CED_CMAKE_CXX_FLAGS_RELEASE
            CED_CMAKE_CXX_FLAGS_MINSIZEREL CED_CMAKE_CXX_FLAGS_RELWITHDEBINFO)
      if(${flag_var} MATCHES "/MD")
        string(REGEX REPLACE "/MD" "/MT" ${flag_var} "${${flag_var}}")
      endif(${flag_var} MATCHES "/MD")
    endforeach(flag_var)
  endif()
else()
  set(CED_CMAKE_CXX_FLAGS "${CED_CMAKE_CXX_FLAGS} -std=c++11 -Wno-c++11-narrowing")
endif()

list(APPEND CED_LIBRARY_SOURCES
    ${ced_PATH}compact_enc_det/compact_enc_det.cc
    ${ced_PATH}compact_enc_det/compact_enc_det_hint_code.cc
    ${ced_PATH}util/encodings/encodings.cc
    ${ced_PATH}util/languages/languages.cc
    )

add_library(ced STATIC ${CED_LIBRARY_SOURCES})

# https://stackoverflow.com/a/28294859/10904212
message(STATUS "CED_CMAKE_CXX_FLAGS=${CED_CMAKE_CXX_FLAGS}")
if(CED_CMAKE_CXX_FLAGS)
  string(REPLACE " " ";" CED_REPLACED_FLAGS ${CED_CMAKE_CXX_FLAGS})
  target_compile_options(ced PRIVATE
    ${CED_REPLACED_FLAGS}
  )
endif(CED_CMAKE_CXX_FLAGS)

set(EXTRA_TARGET_LINK_LIBRARIES)

if(WIN32)
  target_compile_definitions(ced PRIVATE
    UNICODE
    _UNICODE
    STRICT
    NOMINMAX)
  set(CED_THREADING threadwin)
elseif(TARGET_EMSCRIPTEN OR TARGET_LINUX)
  set(CED_THREADING thread)
  list(APPEND EXTRA_TARGET_LINK_LIBRARIES -pthread)
else()
  message(FATAL_ERROR "platform not supported")
endif()

#set(CED_CMAKE_ARCHIVE_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib)
#set(CED_CMAKE_LIBRARY_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib)
#set(CED_CMAKE_RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin)

set_property(TARGET ced PROPERTY CXX_STANDARD 11)

target_include_directories(ced PRIVATE
  ${CHROMIUM_DIR})

target_include_directories(ced PUBLIC
  ${CHROMIUM_DIR}/third_party/ced/src
)
