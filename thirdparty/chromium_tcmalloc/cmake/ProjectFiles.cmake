include_guard( DIRECTORY )

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
  #${CMAKE_CURRENT_SOURCE_DIR}/build/build_config.h
)
