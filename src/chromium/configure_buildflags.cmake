find_package(Git)

# https://cmake.org/cmake/help/latest/module/FindPythonInterp.html
find_package( PythonInterp 2.7 REQUIRED )
#find_package( PythonLibs 2.7 REQUIRED )
message("Found python ${PYTHON_EXECUTABLE}")

execute_process(
  COMMAND ${GIT_EXECUTABLE} log -n1 --format="%at"
  WORKING_DIRECTORY ${CMAKE_CURRENT_SOURCE_DIR}
  OUTPUT_VARIABLE _build_timestamp
  #ERROR_QUIET
  OUTPUT_STRIP_TRAILING_WHITESPACE
  ERROR_VARIABLE _ERROR_VARIABLE
  RESULT_VARIABLE retcode
)
if(NOT "${retcode}" STREQUAL "0")
  message( FATAL_ERROR "Bad exit status ${_ERROR_VARIABLE}")
endif()

execute_process(
  COMMAND ${PYTHON_EXECUTABLE}
    ${CMAKE_CURRENT_SOURCE_DIR}/third_party/blink/renderer/build/scripts/make_runtime_features.py
    ${CMAKE_CURRENT_SOURCE_DIR}/third_party/blink/renderer/platform/runtime_enabled_features.json5
    --output_dir ${CMAKE_CURRENT_SOURCE_DIR}/third_party/blink/renderer/platform
  WORKING_DIRECTORY ${CMAKE_CURRENT_SOURCE_DIR}/third_party/blink/renderer/platform
  OUTPUT_VARIABLE _OUTPUT_VARIABLE
  #ERROR_QUIET
  OUTPUT_STRIP_TRAILING_WHITESPACE
  RESULT_VARIABLE retcode
  ERROR_VARIABLE _ERROR_VARIABLE
)
if(NOT "${retcode}" STREQUAL "0")
  message( WARNING "Bad exit status ${retcode} ${_ERROR_VARIABLE}")
endif()

string(REPLACE "\"" "" _build_timestamp ${_build_timestamp})
#message(FATAL_ERROR ${_build_timestamp})

# PRE-GENERATION GENERATED_BUILD_DATE.H (NEEDED BY "build_time.cc")
execute_process(
  COMMAND sh -c "python ${BUILD_TOOLS_DIR}/write_build_date_header.py generated_build_date.h ${_build_timestamp}"
  WORKING_DIRECTORY ${BASE_DIR})

# https://github.com/chromium/chromium/blob/master/base/allocator/BUILD.gn#L291
# https://github.com/ruslanch/quic-cmake/blob/master/base/CMakeLists.txt#L35
configure_file(${CMAKE_CURRENT_SOURCE_DIR}/allocator_buildflags.h.inc
  ${BASE_DIR}allocator/buildflags.h COPYONLY)

configure_file(${CMAKE_CURRENT_SOURCE_DIR}/cfi_buildflags.h.inc
  ${BASE_DIR}/base/cfi_buildflags.h COPYONLY)

# https://github.com/chromium/chromium/blob/master/base/BUILD.gn#L1980
configure_file(${CMAKE_CURRENT_SOURCE_DIR}/debugging_buildflags.h.inc
  ${BASE_DIR}/debug/debugging_buildflags.h COPYONLY)

# https://github.com/chromium/chromium/blob/master/base/BUILD.gn#L2017
# https://github.com/geanix/courgette/blob/master/gen/base/synchronization/synchronization_buildflags.h
configure_file(${CMAKE_CURRENT_SOURCE_DIR}/synchronization_buildflags.h.inc
  ${BASE_DIR}/base/synchronization/synchronization_buildflags.h COPYONLY)

configure_file(${CMAKE_CURRENT_SOURCE_DIR}/protected_memory_buildflags.h.inc
  ${BASE_DIR}/base/memory/protected_memory_buildflags.h COPYONLY)

configure_file(${CMAKE_CURRENT_SOURCE_DIR}/partition_alloc_buildflags.h.inc
  ${BASE_DIR}/base/partition_alloc_buildflags.h COPYONLY)

# https://github.com/chromium/chromium/blob/master/base/BUILD.gn#L2044
configure_file(${CMAKE_CURRENT_SOURCE_DIR}/clang_coverage_buildflags.h.inc
  ${BASE_DIR}/base/clang_coverage_buildflags.h COPYONLY)

# https://github.com/stormcenter/QuicDemo/blob/master/app/src/main/jni/third_party/chromium/include/net/net_buildflags.h
configure_file(${CMAKE_CURRENT_SOURCE_DIR}/gpu_vulkan_buildflags.h.inc
  ${CMAKE_CURRENT_SOURCE_DIR}/gpu/vulkan/buildflags.h COPYONLY)

configure_file(${CMAKE_CURRENT_SOURCE_DIR}/gnet_buildflags.h.inc
  ${CMAKE_CURRENT_SOURCE_DIR}/net/net_buildflags.h COPYONLY)

configure_file(${CMAKE_CURRENT_SOURCE_DIR}/device_vr_buildflags.h.inc
  ${CMAKE_CURRENT_SOURCE_DIR}/device/vr/buildflags/buildflags.h COPYONLY)

configure_file(${CMAKE_CURRENT_SOURCE_DIR}/ui_gl_buildflags.h.inc
  ${CMAKE_CURRENT_SOURCE_DIR}/ui/gl/buildflags.h COPYONLY)

## uses BUILDFLAG_INTERNAL_IPC_MESSAGE_LOG_ENABLED from ipc_buildflags.h
#configure_file(${CMAKE_CURRENT_SOURCE_DIR}/gipc_buildflags.h.inc
#  ${GIPC_DIR}/ipc_buildflags.h COPYONLY)
#
