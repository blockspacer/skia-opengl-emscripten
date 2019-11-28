cmake_minimum_required(VERSION 2.8)

#'dependencies': [
#  '<(DEPTH)/starboard/starboard_headers_only.gyp:starboard_headers_only',
#],
list(APPEND COBALT_nb_SOURCES
  ${COBALT_PORT_DIR}nb/allocator.h
  ${COBALT_PORT_DIR}nb/analytics/memory_tracker.cc
  ${COBALT_PORT_DIR}nb/analytics/memory_tracker.h
  ${COBALT_PORT_DIR}nb/analytics/memory_tracker_impl.cc
  ${COBALT_PORT_DIR}nb/analytics/memory_tracker_impl.h
  ${COBALT_PORT_DIR}nb/analytics/memory_tracker_helpers.cc
  ${COBALT_PORT_DIR}nb/analytics/memory_tracker_helpers.h
  #${COBALT_PORT_DIR}nb/atomic.h
  ${COBALT_PORT_DIR}nb/bit_cast.h
  ${COBALT_PORT_DIR}nb/bidirectional_fit_reuse_allocator.h
  ${COBALT_PORT_DIR}nb/bidirectional_fit_reuse_allocator.cc
  ${COBALT_PORT_DIR}nb/concurrent_map.h
  ${COBALT_PORT_DIR}nb/concurrent_ptr.h
  ${COBALT_PORT_DIR}nb/first_fit_reuse_allocator.h
  ${COBALT_PORT_DIR}nb/first_fit_reuse_allocator.cc
  ${COBALT_PORT_DIR}nb/fixed_no_free_allocator.cc
  ${COBALT_PORT_DIR}nb/fixed_no_free_allocator.h
  ${COBALT_PORT_DIR}nb/hash.cc
  ${COBALT_PORT_DIR}nb/hash.h
  ${COBALT_PORT_DIR}nb/memory_pool.h
  ${COBALT_PORT_DIR}nb/memory_scope.cc
  ${COBALT_PORT_DIR}nb/memory_scope.h
  ${COBALT_PORT_DIR}nb/move.h
  ${COBALT_PORT_DIR}nb/multipart_allocator.cc
  ${COBALT_PORT_DIR}nb/multipart_allocator.h
  ${COBALT_PORT_DIR}nb/pointer_arithmetic.h
  ${COBALT_PORT_DIR}nb/rect.h
  ${COBALT_PORT_DIR}nb/ref_counted.cc
  ${COBALT_PORT_DIR}nb/ref_counted.h
  ${COBALT_PORT_DIR}nb/reuse_allocator_base.cc
  ${COBALT_PORT_DIR}nb/reuse_allocator_base.h
  ${COBALT_PORT_DIR}nb/rewindable_vector.h
  ${COBALT_PORT_DIR}nb/starboard_memory_allocator.h
  ${COBALT_PORT_DIR}nb/scoped_ptr.h
  ${COBALT_PORT_DIR}nb/simple_thread.cc
  ${COBALT_PORT_DIR}nb/simple_thread.h
  ${COBALT_PORT_DIR}nb/simple_profiler.cc
  ${COBALT_PORT_DIR}nb/simple_profiler.h
  ${COBALT_PORT_DIR}nb/std_allocator.h
  ${COBALT_PORT_DIR}nb/string_interner.cc
  ${COBALT_PORT_DIR}nb/string_interner.h
  ${COBALT_PORT_DIR}nb/thread_collision_warner.cc
  ${COBALT_PORT_DIR}nb/thread_collision_warner.h
  ${COBALT_PORT_DIR}nb/thread_local_object.h
  ${COBALT_PORT_DIR}nb/thread_local_boolean.h
  ${COBALT_PORT_DIR}nb/thread_local_pointer.h
)

add_library(cobalt_nanobase STATIC
  ${COBALT_nb_SOURCES}
)

set_property(TARGET cobalt_nanobase PROPERTY CXX_STANDARD 17)

if(NOT DEFINED cobalt_starboard_headers_only_LIB)
  message(FATAL_ERROR "NOT DEFINED: cobalt_starboard_headers_only_LIB")
endif(NOT DEFINED cobalt_starboard_headers_only_LIB)

target_link_libraries(cobalt_nanobase PUBLIC
  ${cobalt_starboard_LIB} # TODO
  ${cobalt_starboard_headers_only_LIB}
)

if(NOT DEFINED base_LIB)
  message(FATAL_ERROR "NOT DEFINED: base_LIB")
endif(NOT DEFINED base_LIB)

target_link_libraries(cobalt_nanobase PRIVATE
  ${base_LIB} # TODO: recursion
)

target_include_directories(cobalt_nanobase PRIVATE
  #${UI_PARENT_DIR}
  ${COBALT_CORE_DIR}
  ${COBALT_CORE_PARENT_DIR}
  ${COBALT_COMMON_INCLUDES}
  ${CHROMIUM_DIR} # to third_party/skia/include/core/SkWriteBuffer.h
)

target_compile_definitions(cobalt_nanobase PRIVATE
  # starboard/linux/shared/BUILD.gn
  #STARBOARD_IMPLEMENTATION=1
  #
  #BASE_IMPLEMENTATION=1
  #BASE_I18N_IMPLEMENTATION=1
  #
  ${COBALT_COMMON_DEFINES}
)
