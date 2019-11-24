include_guard( DIRECTORY )

configure_file(${BUILDFLAGS_GENERATORS_PATH}/buildflags/cfi_buildflags.h.inc
  ${BASE_SOURCES_PATH}cfi_buildflags.h COPYONLY)

if(TARGET_WINDOWS)
  configure_file(${BUILDFLAGS_GENERATORS_PATH}/buildflags/base_win_buildflags.h.inc
    ${BASE_SOURCES_PATH}win/base_win_buildflags.h COPYONLY)
endif(TARGET_WINDOWS)

# https://github.com/chromium/chromium/blob/master/base/BUILD.gn#L1980
configure_file(${BUILDFLAGS_GENERATORS_PATH}/buildflags/debugging_buildflags.h.inc
  ${BASE_SOURCES_PATH}/debug/debugging_buildflags.h COPYONLY)

# https://github.com/chromium/chromium/blob/master/base/BUILD.gn#L2017
# https://github.com/geanix/courgette/blob/master/gen/base/synchronization/synchronization_buildflags.h
configure_file(${BUILDFLAGS_GENERATORS_PATH}/buildflags/synchronization_buildflags.h.inc
  ${BASE_SOURCES_PATH}synchronization/synchronization_buildflags.h COPYONLY)

configure_file(${BUILDFLAGS_GENERATORS_PATH}/buildflags/protected_memory_buildflags.h.inc
  ${BASE_SOURCES_PATH}memory/protected_memory_buildflags.h COPYONLY)

configure_file(${BUILDFLAGS_GENERATORS_PATH}/buildflags/partition_alloc_buildflags.h.inc
  ${BASE_SOURCES_PATH}partition_alloc_buildflags.h COPYONLY)

# https://github.com/chromium/chromium/blob/master/base/BUILD.gn#L2044
configure_file(${BUILDFLAGS_GENERATORS_PATH}/buildflags/clang_coverage_buildflags.h.inc
  ${BASE_SOURCES_PATH}clang_coverage_buildflags.h COPYONLY)
