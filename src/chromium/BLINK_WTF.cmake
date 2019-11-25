# see https://github.com/chromium/chromium/blob/9db0b5162b8648833c3a6b1af044cebd9d7d3855/third_party/blink/renderer/platform/wtf/BUILD.gn

list(APPEND WTF_SOURCES
  ${BLINK_WTF_DIR}allocator.cc
  #${BLINK_WTF_DIR}allocator.h
  ${BLINK_WTF_DIR}allocator/partition_allocator.cc
  #${BLINK_WTF_DIR}allocator/partition_allocator.h
  ${BLINK_WTF_DIR}allocator/partitions.cc
  #${BLINK_WTF_DIR}allocator/partitions.h
  ${BLINK_WTF_DIR}assertions.cc
  #${BLINK_WTF_DIR}assertions.h
  #${BLINK_WTF_DIR}bloom_filter.h
  #${BLINK_WTF_DIR}casting.h
  #${BLINK_WTF_DIR}conditional_destructor.h
  #${BLINK_WTF_DIR}container_annotations.h
  ${BLINK_WTF_DIR}date_math.cc
  #${BLINK_WTF_DIR}date_math.h
  ${BLINK_WTF_DIR}decimal.cc
  #${BLINK_WTF_DIR}decimal.h
  #${BLINK_WTF_DIR}deque.h
  #${BLINK_WTF_DIR}doubly_linked_list.h
  ${BLINK_WTF_DIR}dtoa/bignum-dtoa.cc
  # #${BLINK_WTF_DIR}dtoa/bignum-dtoa.h
  ${BLINK_WTF_DIR}dtoa/bignum.cc
  # #${BLINK_WTF_DIR}dtoa/bignum.h
  ${BLINK_WTF_DIR}dtoa/cached-powers.cc
  # #${BLINK_WTF_DIR}dtoa/cached-powers.h
  ${BLINK_WTF_DIR}dtoa/diy-fp.cc
  # #${BLINK_WTF_DIR}dtoa/diy-fp.h
  ${BLINK_WTF_DIR}dtoa/double-conversion.cc
  # #${BLINK_WTF_DIR}dtoa/double-conversion.h
  # #${BLINK_WTF_DIR}dtoa/double.h
  ${BLINK_WTF_DIR}dtoa/dtoa.cc
  # #${BLINK_WTF_DIR}dtoa/dtoa.h
  ${BLINK_WTF_DIR}dtoa/fast-dtoa.cc
  # #${BLINK_WTF_DIR}dtoa/fast-dtoa.h
  ${BLINK_WTF_DIR}dtoa/fixed-dtoa.cc
  # #${BLINK_WTF_DIR}dtoa/fixed-dtoa.h
  ${BLINK_WTF_DIR}dtoa/strtod.cc
  # #${BLINK_WTF_DIR}dtoa/strtod.h
  # #${BLINK_WTF_DIR}dtoa/utils.h
  ${BLINK_WTF_DIR}dynamic_annotations.cc
  #${BLINK_WTF_DIR}dynamic_annotations.h
  #${BLINK_WTF_DIR}forward.h
  #${BLINK_WTF_DIR}functional.h
  #${BLINK_WTF_DIR}get_ptr.h
  #${BLINK_WTF_DIR}hash_counted_set.h
  #${BLINK_WTF_DIR}hash_functions.h
  #${BLINK_WTF_DIR}hash_iterators.h
  #${BLINK_WTF_DIR}hash_map.h
  #${BLINK_WTF_DIR}hash_set.h
  ${BLINK_WTF_DIR}hash_table.cc
  #${BLINK_WTF_DIR}hash_table.h
  #${BLINK_WTF_DIR}hash_table_deleted_value_type.h
  #${BLINK_WTF_DIR}hash_traits.h
  #${BLINK_WTF_DIR}leak_annotations.h
  #${BLINK_WTF_DIR}linked_hash_set.h
  #${BLINK_WTF_DIR}list_hash_set.h
  #${BLINK_WTF_DIR}math_extras.h
  #${BLINK_WTF_DIR}pod_arena.h
  #${BLINK_WTF_DIR}pod_free_list_arena.h
  #${BLINK_WTF_DIR}pod_interval.h
  #${BLINK_WTF_DIR}pod_interval_tree.h
  #${BLINK_WTF_DIR}pod_red_black_tree.h
  #${BLINK_WTF_DIR}ref_counted.h
  #${BLINK_WTF_DIR}sanitizers.h
  ${BLINK_WTF_DIR}scoped_logger.cc
  #${BLINK_WTF_DIR}scoped_logger.h
  ${BLINK_WTF_DIR}size_assertions.cc
  #${BLINK_WTF_DIR}size_assertions.h
  ${BLINK_WTF_DIR}stack_util.cc
  #${BLINK_WTF_DIR}stack_util.h
  #${BLINK_WTF_DIR}static_constructors.h
  #${BLINK_WTF_DIR}std_lib_extras.h
  ${BLINK_WTF_DIR}text/ascii_ctype.cc
  # #${BLINK_WTF_DIR}text/ascii_ctype.h
  # #${BLINK_WTF_DIR}text/ascii_fast_path.h
  ${BLINK_WTF_DIR}text/atomic_string.cc
  # #${BLINK_WTF_DIR}text/atomic_string.h
  ${BLINK_WTF_DIR}text/atomic_string_cf.cc
  # #${BLINK_WTF_DIR}text/atomic_string_hash.h
  ${BLINK_WTF_DIR}text/atomic_string_table.cc
  # #${BLINK_WTF_DIR}text/atomic_string_table.h
  ${BLINK_WTF_DIR}text/base64.cc
  # #${BLINK_WTF_DIR}text/base64.h
  # #${BLINK_WTF_DIR}text/character_names.h
  ${BLINK_WTF_DIR}text/cstring.cc
  # #${BLINK_WTF_DIR}text/cstring.h
  # #${BLINK_WTF_DIR}text/integer_to_string_conversion.h
  ${BLINK_WTF_DIR}text/line_ending.cc
  # #${BLINK_WTF_DIR}text/line_ending.h
  # #${BLINK_WTF_DIR}text/number_parsing_options.h
  # #${BLINK_WTF_DIR}text/parsing_utilities.h
  # #${BLINK_WTF_DIR}text/string_buffer.h
  ${BLINK_WTF_DIR}text/string_builder.cc
  # #${BLINK_WTF_DIR}text/string_builder.h
  ${BLINK_WTF_DIR}text/string_concatenate.cc
  # #${BLINK_WTF_DIR}text/string_concatenate.h
  # #${BLINK_WTF_DIR}text/string_hash.h
  # #${BLINK_WTF_DIR}text/string_hasher.h
  ${BLINK_WTF_DIR}text/string_impl.cc
  # #${BLINK_WTF_DIR}text/string_impl.h
  # #${BLINK_WTF_DIR}text/string_impl_mac.mm
  # #${BLINK_WTF_DIR}text/string_mac.mm
  # #${BLINK_WTF_DIR}text/string_operators.h
  ${BLINK_WTF_DIR}text/string_statics.cc
  # #${BLINK_WTF_DIR}text/string_statics.h
  ${BLINK_WTF_DIR}text/string_to_number.cc
  # #${BLINK_WTF_DIR}text/string_to_number.h
  ${BLINK_WTF_DIR}text/string_utf8_adaptor.cc
  # #${BLINK_WTF_DIR}text/string_utf8_adaptor.h
  ${BLINK_WTF_DIR}text/string_view.cc
  # #${BLINK_WTF_DIR}text/string_view.h
  ${BLINK_WTF_DIR}text/text_codec.cc
  # #${BLINK_WTF_DIR}text/text_codec.h
  # #${BLINK_WTF_DIR}text/text_codec_ascii_fast_path.h
  ${BLINK_WTF_DIR}text/text_codec_icu.cc
  # #${BLINK_WTF_DIR}text/text_codec_icu.h
  ${BLINK_WTF_DIR}text/text_codec_latin1.cc
  # #${BLINK_WTF_DIR}text/text_codec_latin1.h
  ${BLINK_WTF_DIR}text/text_codec_replacement.cc
  # #${BLINK_WTF_DIR}text/text_codec_replacement.h
  ${BLINK_WTF_DIR}text/text_codec_user_defined.cc
  # #${BLINK_WTF_DIR}text/text_codec_user_defined.h
  ${BLINK_WTF_DIR}text/text_codec_utf16.cc
  # #${BLINK_WTF_DIR}text/text_codec_utf16.h
  ${BLINK_WTF_DIR}text/text_codec_utf8.cc
  # #${BLINK_WTF_DIR}text/text_codec_utf8.h
  ${BLINK_WTF_DIR}text/text_encoding.cc
  # #${BLINK_WTF_DIR}text/text_encoding.h
  ${BLINK_WTF_DIR}text/text_encoding_registry.cc
  # #${BLINK_WTF_DIR}text/text_encoding_registry.h
  ${BLINK_WTF_DIR}text/text_position.cc
  # #${BLINK_WTF_DIR}text/text_position.h
  ${BLINK_WTF_DIR}text/text_stream.cc
  # #${BLINK_WTF_DIR}text/text_stream.h
  # #${BLINK_WTF_DIR}text/unicode.h
  ${BLINK_WTF_DIR}text/utf8.cc
  # #${BLINK_WTF_DIR}text/utf8.h
  ${BLINK_WTF_DIR}text/wtf_string.cc
  #${BLINK_WTF_DIR}text/wtf_string.h
  # #${BLINK_WTF_DIR}thread_restriction_verifier.h
  # #${BLINK_WTF_DIR}thread_safe_ref_counted.h
  # #${BLINK_WTF_DIR}thread_specific.h
  ${BLINK_WTF_DIR}threading.cc
  # #${BLINK_WTF_DIR}threading.h
  # #${BLINK_WTF_DIR}threading_primitives.h
  ${BLINK_WTF_DIR}time.cc
  #${BLINK_WTF_DIR}time.h
  #${BLINK_WTF_DIR}tree_node.h
  #${BLINK_WTF_DIR}type_traits.h
  ${BLINK_WTF_DIR}typed_arrays/array_buffer.cc
  #${BLINK_WTF_DIR}typed_arrays/array_buffer.h
  ${BLINK_WTF_DIR}typed_arrays/array_buffer_contents.cc
  #${BLINK_WTF_DIR}typed_arrays/array_buffer_contents.h
  ${BLINK_WTF_DIR}typed_arrays/array_buffer_view.cc
  #${BLINK_WTF_DIR}typed_arrays/array_buffer_view.h
  ${BLINK_WTF_DIR}typed_arrays/array_piece.cc
  #${BLINK_WTF_DIR}typed_arrays/array_piece.h
  #${BLINK_WTF_DIR}typed_arrays/bigint64_array.h
  #${BLINK_WTF_DIR}typed_arrays/biguint64_array.h
  #${BLINK_WTF_DIR}typed_arrays/float32_array.h
  #${BLINK_WTF_DIR}typed_arrays/float64_array.h
  #${BLINK_WTF_DIR}typed_arrays/int16_array.h
  #${BLINK_WTF_DIR}typed_arrays/int32_array.h
  #${BLINK_WTF_DIR}typed_arrays/int8_array.h
  #${BLINK_WTF_DIR}typed_arrays/integral_typed_array_base.h
  #${BLINK_WTF_DIR}typed_arrays/typed_array_base.h
  #${BLINK_WTF_DIR}typed_arrays/uint16_array.h
  #${BLINK_WTF_DIR}typed_arrays/uint32_array.h
  #${BLINK_WTF_DIR}typed_arrays/uint8_array.h
  #${BLINK_WTF_DIR}typed_arrays/uint8_clamped_array.h
  #${BLINK_WTF_DIR}vector.h
  #${BLINK_WTF_DIR}vector_traits.h
  ${BLINK_WTF_DIR}wtf.cc
  #${BLINK_WTF_DIR}wtf.h
  #${BLINK_WTF_DIR}wtf_export.h
  # #${BLINK_WTF_DIR}wtf_size_t.h
)

if (EMSCRIPTEN OR TARGET_LINUX)
  list(APPEND WTF_SOURCES
    ${BLINK_WTF_DIR}threading_pthreads.cc
  )
elseif (TARGET_WINDOWS)
  list(APPEND WTF_SOURCES
    ${BLINK_WTF_DIR}threading_win.cc
  )
else()
  message(FATAL_ERROR "TODO: port WTF")
endif()

if (EMSCRIPTEN)
  #find_package(ICU REQUIRED COMPONENTS I18N UC REQUIRED)
  add_library(${WTF_LIBRARY_NAME} STATIC
    ${WTF_SOURCES}
  )# ${BASE_SOURCES})
  #target_link_libraries(${WTF_LIBRARY_NAME} PUBLIC
  #  ${ICU_UC_LIBRARIES}
  #  ${ICU_I18N_LIBRARIES}
  #)
else(EMSCRIPTEN)
  #find_package(ICU) # REQUIRED)
  add_library(${WTF_LIBRARY_NAME} STATIC
    ${WTF_SOURCES}
  )# ${BASE_SOURCES})
endif (EMSCRIPTEN)

set_property(TARGET ${WTF_LIBRARY_NAME} PROPERTY CXX_STANDARD 17)

#include_directories(
#  ${CHROMIUM_DIR}
#  ${CHROMIUM_DIR}/wtf
#  ${CHROMIUM_DIR}/global_headers
#)
#message(FATAL_ERROR ${CHROMIUM_DIR}/global_headers)

#set(WTF_INCLUDE_DIRECTORIES
#    "${BMALLOC_DIR}"
#    "${CMAKE_BINARY_DIR}"
#    "${DERIVED_SOURCES_DIR}"
#    "${THIRDPARTY_DIR}"
#)

#list(APPEND WTF_PRIVATE_INCLUDE_DIRECTORIES
  #${BLINK_WTF_DIR}
  #${BLINK_WTF_DIR}dtoa
  #${BLINK_WTF_DIR}persistence
  #${BLINK_WTF_DIR}text
  #${BLINK_WTF_DIR}text/icu
  #${BLINK_WTF_DIR}threads
  #${BLINK_WTF_DIR}unicode
  #${BLINK_WTF_DIR}icu
#)

#message(FATAL_ERROR ${CMAKE_CXX_FLAGS})

target_include_directories(${WTF_LIBRARY_NAME} PUBLIC
  ${CHROMIUM_DIR}
  # folder containing wtf subdirectory
  #${BLINK_WTF_DIR}/..
  #${CHROMIUM_DIR}/global_headers
)

#target_include_directories(${WTF_LIBRARY_NAME} SYSTEM PRIVATE
#  ${CHROMIUM_DIR}
#  ${CHROMIUM_DIR}/wtf
#  ${CHROMIUM_DIR}/global_headers
#)

list(APPEND WTF_LIBRARIES
  ${CUSTOM_ICU_LIB}
  ${HARFBUZZ_LIBRARIES}
  base
)

message(STATUS "HARFBUZZ_LIBRARIES=${HARFBUZZ_LIBRARIES}")

if(TARGET_EMSCRIPTEN OR TARGET_WINDOWS)
  # skip
elseif(TARGET_LINUX)
  if(NOT DEFINED libevent_LIB)
    message(FATAL_ERROR "NOT DEFINED libevent_LIB")
  endif(NOT DEFINED libevent_LIB)
  list(APPEND WTF_LIBRARIES
    ${libevent_LIB}
  )
else()
  message(FATAL_ERROR "platform not supported")
endif()

#if(TARGET_EMSCRIPTEN)
#else()
#  list(APPEND WTF_LIBRARIES
#    tcmalloc
#  )
#endif(TARGET_EMSCRIPTEN)

target_include_directories(${WTF_LIBRARY_NAME} PRIVATE
  #${LIBEVENT_INCLUDE_DIRS}
  ${modp_b64_INCLUDE_DIRS}
  ${WTF_PRIVATE_INCLUDE_DIRECTORIES}
  #${BLINK_WTF_DIR}
  ${OWN_ICU_INCLUDE_DIRS}
  ${ICU_INCLUDE_DIRS}
)

add_dependencies(${WTF_LIBRARY_NAME}
  ${WTF_LIBRARIES}
)

#if (UNIX)
  #list(APPEND WTF_SOURCES wtf/OSAllocatorPosix.cpp)
#elseif (WIN32)
  #list(APPEND WTF_SOURCES
  #  wtf/NullPtr.cpp
  #  wtf/OSAllocatorWin.cpp
  #  wtf/TCSystemAlloc.cpp
  #  wtf/ThreadingWin.cpp
  #  wtf/ThreadSpecificWin.cpp
  #  wtf/unicode/CollatorDefault.cpp
  #  wtf/unicode/wince/UnicodeWinCE.cpp
  #  wtf/win/MainThreadWin.cpp
  #  wtf/win/OwnPtrWin.cpp
  #  )
  #
  #list(APPEND WTF_HEADERS unicode/wince/UnicodeWinCE.h)
  #list(APPEND WTF_LIBRARIES mmtimer)
#endif ()

if (SINGLE_THREADED OR EMSCRIPTEN OR TARGET_WINDOWS)
  set(ENABLE_SINGLE_THREADED 1)
  #list(APPEND WTF_SOURCES wtf/ThreadingNone.cpp)
elseif(TARGET_LINUX)
  find_package(Threads REQUIRED)
  #list(APPEND WTF_SOURCES
  #  wtf/ThreadingPthreads.cpp
  #  wtf/ThreadIdentifierDataPthreads.cpp
  #  )
  list(APPEND WTF_LIBRARIES ${CMAKE_THREAD_LIBS_INIT})
  set(HAVE_PTHREADS 1)
else()
  message(FATAL_ERROR "platform not supported")
endif ()

target_link_libraries(${WTF_LIBRARY_NAME} PUBLIC
  ${WTF_LIBRARIES}
)

target_compile_definitions(${WTF_LIBRARY_NAME} PUBLIC
  # TODO
)

message(STATUS "EXTRA_ICU_DEFINITIONS=${EXTRA_ICU_DEFINITIONS}")

target_compile_definitions(${WTF_LIBRARY_NAME} PRIVATE
  WTF_IMPLEMENTATION=1
  OFFICIAL_BUILD=1
  # https://cs.chromium.org/chromium/src/build/build_config.h?g=0&l=86
  COMPONENT_BUILD=1
  # https://github.com/cool-easy/libchromiumbase/blob/master/build/config/linux/BUILD.gn#L88
  # USE_GLIB=1
  __STDC_FORMAT_MACROS
  ${WTF_EMCC_DEFINITIONS}
  ${WTF_COMMON_DEFINITIONS}
  ${EXTRA_ICU_DEFINITIONS}

  #SYSTEM_NATIVE_UTF8
  #COM_INIT_CHECK_HOOK_DISABLED
  #USE_SYMBOLIZE
  #BASE_I18N_IMPLEMENTATION
  #MALLOC_WRAPPER_LIB=\"${shlib_prefix}malloc_wrapper${shlib_extension}\"
  #MEMORY_TOOL_REPLACES_ALLOCATOR=1
)

if(NOT MSVC OR IS_CLANG_CL)
  target_compile_options(${WTF_LIBRARY_NAME} PRIVATE
    # always return on non-void functions to prevent UB
    -Wreturn-type
    #-Wno-error
    -Wall
    -Wextra
    #-pedantic-errors
    -Wno-nested-anon-types
    -Wno-expansion-to-defined
    -Wno-gnu-zero-variadic-macro-arguments
    -Wno-unused-parameter
    -Wno-unused-variable
    -Wno-unused-lambda-capture
  )
else()
  target_compile_options(${WTF_LIBRARY_NAME} PRIVATE
    /W0
  )
endif()
