### --- tcmalloc ---###

#function(find_static_library LIB_NAME OUT)
#    if (WIN32 OR MSVC)
#        set(CMAKE_FIND_LIBRARY_SUFFIXES ".lib")
#    elseif (UNIX)
#        set(CMAKE_FIND_LIBRARY_SUFFIXES ".a")
#    endif()
#
#    find_library(
#        FOUND_${LIB_NAME}_STATIC
#        ${LIB_NAME}
#        )
#
#    if (FOUND_${LIB_NAME}_STATIC)
#        get_filename_component(ABS_FILE ${FOUND_${LIB_NAME}_STATIC} ABSOLUTE)
#    else()
#        message(SEND_ERROR "Unable to find library ${LIB_NAME}")
#    endif()
#
#    set(${OUT} ${ABS_FILE} PARENT_SCOPE)
#endfunction()

#if(TARGET_EMSCRIPTEN)
#else()
#  # You should install Google Perftools.
#  # Example: sudo apt-get install libgoogle-perftools-dev # or libevent2-devel
#  find_static_library(tcmalloc TCMALLOC_LIB)
#
#  target_link_libraries(base PUBLIC
#    ${TCMALLOC_LIB}
#  )
#endif(TARGET_EMSCRIPTEN)

if(TARGET_EMSCRIPTEN)
else()
  # see https://github.com/chromium/chromium/blob/master/base/allocator/BUILD.gn#L77
  set(TCMALLOC_DIR "tcmalloc_wrapper/third_party/tcmalloc/chromium/")
  list(APPEND TCMALLOC_SOURCES
    # Generated for our configuration from tcmalloc's build
    # and checked in.
    #${TCMALLOC_DIR}src/config.h
    #${TCMALLOC_DIR}src/config_android.h
    #${TCMALLOC_DIR}src/config_linux.h
    #${TCMALLOC_DIR}src/config_win.h
    #
    # tcmalloc native and forked files.
    ${TCMALLOC_DIR}src/base/abort.cc
    ${TCMALLOC_DIR}src/base/abort.h
    # arm_
    #${TCMALLOC_DIR}src/base/arm_instruction_set_select.h
    # atomicops
    #${TCMALLOC_DIR}src/base/atomicops-internals-arm-generic.h
    #${TCMALLOC_DIR}src/base/atomicops-internals-arm-v6plus.h
    #${TCMALLOC_DIR}src/base/atomicops-internals-linuxppc.h
    #${TCMALLOC_DIR}src/base/atomicops-internals-macosx.h
    #${TCMALLOC_DIR}src/base/atomicops-internals-windows.h
    ${TCMALLOC_DIR}src/base/atomicops-internals-x86.cc
    ${TCMALLOC_DIR}src/base/atomicops-internals-x86.h
    ${TCMALLOC_DIR}src/base/atomicops.h
    ${TCMALLOC_DIR}src/base/commandlineflags.h
    #${TCMALLOC_DIR}src/base/cycleclock.h
    #
    # We don't list dynamic_annotations.c since its copy is already
    # present in the dynamic_annotations target.
    ${TCMALLOC_DIR}src/base/elf_mem_image.cc
    ${TCMALLOC_DIR}src/base/elf_mem_image.h
    ${TCMALLOC_DIR}src/base/linuxthreads.cc
    ${TCMALLOC_DIR}src/base/linuxthreads.h
    ${TCMALLOC_DIR}src/base/logging.cc
    ${TCMALLOC_DIR}src/base/logging.h
    ${TCMALLOC_DIR}src/base/low_level_alloc.cc
    ${TCMALLOC_DIR}src/base/low_level_alloc.h
    ${TCMALLOC_DIR}src/base/spinlock.cc
    ${TCMALLOC_DIR}src/base/spinlock.h
    ${TCMALLOC_DIR}src/base/spinlock_internal.cc
    ${TCMALLOC_DIR}src/base/spinlock_internal.h
    #${TCMALLOC_DIR}src/base/synchronization_profiling.h
    ${TCMALLOC_DIR}src/base/sysinfo.cc
    ${TCMALLOC_DIR}src/base/sysinfo.h
    ${TCMALLOC_DIR}src/base/vdso_support.cc
    ${TCMALLOC_DIR}src/base/vdso_support.h
    ${TCMALLOC_DIR}src/central_freelist.cc
    ${TCMALLOC_DIR}src/central_freelist.h
    ${TCMALLOC_DIR}src/common.cc
    ${TCMALLOC_DIR}src/common.h
    #
    # #included by debugallocation_shim.cc
    #${TCMALLOC_DIR}src/debugallocation.cc
    ${TCMALLOC_DIR}src/free_list.cc
    ${TCMALLOC_DIR}src/free_list.h
    ${TCMALLOC_DIR}src/gperftools/heap-profiler.h
    ${TCMALLOC_DIR}src/gperftools/malloc_extension.h
    ${TCMALLOC_DIR}src/gperftools/malloc_hook.h
    ${TCMALLOC_DIR}src/gperftools/stacktrace.h
    ${TCMALLOC_DIR}src/internal_logging.cc
    ${TCMALLOC_DIR}src/internal_logging.h
    ${TCMALLOC_DIR}src/linked_list.h
    ${TCMALLOC_DIR}src/malloc_extension.cc
    ${TCMALLOC_DIR}src/malloc_hook-inl.h
    ${TCMALLOC_DIR}src/malloc_hook.cc
    ${TCMALLOC_DIR}src/maybe_threads.cc
    ${TCMALLOC_DIR}src/maybe_threads.h
    ${TCMALLOC_DIR}src/page_heap.cc
    ${TCMALLOC_DIR}src/page_heap.h
    ${TCMALLOC_DIR}src/raw_printer.cc
    ${TCMALLOC_DIR}src/raw_printer.h
    ${TCMALLOC_DIR}src/sampler.cc
    ${TCMALLOC_DIR}src/sampler.h
    ${TCMALLOC_DIR}src/span.cc
    ${TCMALLOC_DIR}src/span.h
    ${TCMALLOC_DIR}src/stack_trace_table.cc
    ${TCMALLOC_DIR}src/stack_trace_table.h
    ${TCMALLOC_DIR}src/stacktrace.cc
    ${TCMALLOC_DIR}src/static_vars.cc
    ${TCMALLOC_DIR}src/static_vars.h
    ${TCMALLOC_DIR}src/symbolize.cc
    ${TCMALLOC_DIR}src/symbolize.h
    ${TCMALLOC_DIR}src/system-alloc.cc
    ${TCMALLOC_DIR}src/system-alloc.h
    #
    # #included by debugallocation_shim.cc
    ${TCMALLOC_DIR}src/tcmalloc.cc
    ${TCMALLOC_DIR}src/tcmalloc.h
    #
    ${TCMALLOC_DIR}src/thread_cache.cc
    ${TCMALLOC_DIR}src/thread_cache.h
    #${TCMALLOC_DIR}src/windows/port.cc
    #${TCMALLOC_DIR}src/windows/port.h
    #"debugallocation_shim.cc
    #
    # These are both #included by allocator_shim for maximal linking.
    ###"generic_allocators.cc
    ###"win_allocator.cc
    #
    # if (use_new_tcmalloc)
    ${TCMALLOC_DIR}src/emergency_malloc_for_stacktrace.cc
    ${TCMALLOC_DIR}src/fake_stacktrace_scope.cc
    #
    # if (is_linux || is_android)
    ${TCMALLOC_DIR}src/system-alloc.h
    #${TCMALLOC_DIR}src/windows/port.cc
    #${TCMALLOC_DIR}src/windows/port.h
    #
    ### build ###
    build/build_config.h
  )

  # https://github.com/chromium/chromium/blob/master/base/allocator/BUILD.gn#L204
  list(APPEND TCMALLOC_PRIVATE_DEFINES NO_HEAP_CHECK=1)
  # https://github.com/chromium/chromium/blob/master/base/allocator/BUILD.gn#L247
  list(APPEND TCMALLOC_PRIVATE_DEFINES ENABLE_PROFILING=0)
  # https://github.com/chromium/chromium/blob/master/base/allocator/BUILD.gn#L30
  list(APPEND TCMALLOC_PRIVATE_DEFINES TCMALLOC_USE_DOUBLYLINKED_FREELIST=1)
  list(APPEND TCMALLOC_PRIVATE_DEFINES TCMALLOC_DISABLE_HUGE_ALLOCATIONS=1)
  # TCMALLOC_FOR_DEBUGALLOCATION # if (enable_debugallocation)
  # TCMALLOC_DONT_REPLACE_SYSTEM_ALLOC # if (use_allocator_shim)
  # TCMALLOC_SMALL_BUT_SLOW # if (use_tcmalloc_small_but_slow)

  # https://github.com/chromium/chromium/blob/master/base/allocator/BUILD.gn#L204
  list(APPEND TCMALLOC_PUBLIC_INCLUDE_DIRS
    #base/allocator
    #${TCMALLOC_DIR}
    tcmalloc_wrapper/
  )

  add_library(tcmalloc STATIC
    ${TCMALLOC_SOURCES}
  )

  set_property(TARGET tcmalloc PROPERTY CXX_STANDARD 17)

  target_include_directories(tcmalloc PRIVATE
    #${CHROMIUM_DIR}
    ${TCMALLOC_DIR}
    ${TCMALLOC_DIR}src/
    ${TCMALLOC_DIR}src/base/
  )

  target_include_directories(tcmalloc PUBLIC
    ${TCMALLOC_PUBLIC_INCLUDE_DIRS}
  )

  target_compile_definitions(tcmalloc PRIVATE
    ${TCMALLOC_PRIVATE_DEFINES}
  )

  target_link_libraries(tcmalloc PUBLIC
    dynamic_annotations
  )

#  target_compile_options(tcmalloc PRIVATE
#    # if (is_linux || is_android)
#    # Don't let linker rip this symbol out, otherwise the heap&cpu
#    # profilers will not initialize properly on startup.
#    -Wl,-uIsHeapProfilerRunning,-uProfilerStart
#    # Do the same for heap leak checker.
#    -Wl,-u_Z21InitialMallocHook_NewPKvj,-u_Z22InitialMallocHook_MMapPKvS0_jiiix,-u_Z22InitialMallocHook_SbrkPKvi
#    -Wl,-u_Z21InitialMallocHook_NewPKvm,-u_Z22InitialMallocHook_MMapPKvS0_miiil,-u_Z22InitialMallocHook_SbrkPKvl
#    -Wl,-u_ZN15HeapLeakChecker12IgnoreObjectEPKv,-u_ZN15HeapLeakChecker14UnIgnoreObjectEPKv
#  )
endif(TARGET_EMSCRIPTEN)
