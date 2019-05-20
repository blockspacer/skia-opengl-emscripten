list(APPEND WTF_SOURCES
  ${WTF_DIR}allocator.cc
  #${WTF_DIR}allocator.h
  ${WTF_DIR}allocator/partition_allocator.cc
  #${WTF_DIR}allocator/partition_allocator.h
  ${WTF_DIR}allocator/partitions.cc
  #${WTF_DIR}allocator/partitions.h
  ${WTF_DIR}assertions.cc
  #${WTF_DIR}assertions.h
  #${WTF_DIR}bloom_filter.h
  #${WTF_DIR}casting.h
  #${WTF_DIR}conditional_destructor.h
  #${WTF_DIR}container_annotations.h
  ${WTF_DIR}date_math.cc
  #${WTF_DIR}date_math.h
  ${WTF_DIR}decimal.cc
  #${WTF_DIR}decimal.h
  #${WTF_DIR}deque.h
  #${WTF_DIR}doubly_linked_list.h
  ${WTF_DIR}dtoa/bignum-dtoa.cc
  # #${WTF_DIR}dtoa/bignum-dtoa.h
  ${WTF_DIR}dtoa/bignum.cc
  # #${WTF_DIR}dtoa/bignum.h
  ${WTF_DIR}dtoa/cached-powers.cc
  # #${WTF_DIR}dtoa/cached-powers.h
  ${WTF_DIR}dtoa/diy-fp.cc
  # #${WTF_DIR}dtoa/diy-fp.h
  ${WTF_DIR}dtoa/double-conversion.cc
  # #${WTF_DIR}dtoa/double-conversion.h
  # #${WTF_DIR}dtoa/double.h
  ${WTF_DIR}dtoa/dtoa.cc
  # #${WTF_DIR}dtoa/dtoa.h
  ${WTF_DIR}dtoa/fast-dtoa.cc
  # #${WTF_DIR}dtoa/fast-dtoa.h
  ${WTF_DIR}dtoa/fixed-dtoa.cc
  # #${WTF_DIR}dtoa/fixed-dtoa.h
  ${WTF_DIR}dtoa/strtod.cc
  # #${WTF_DIR}dtoa/strtod.h
  # #${WTF_DIR}dtoa/utils.h
  ${WTF_DIR}dynamic_annotations.cc
  #${WTF_DIR}dynamic_annotations.h
  #${WTF_DIR}forward.h
  #${WTF_DIR}functional.h
  #${WTF_DIR}get_ptr.h
  #${WTF_DIR}hash_counted_set.h
  #${WTF_DIR}hash_functions.h
  #${WTF_DIR}hash_iterators.h
  #${WTF_DIR}hash_map.h
  #${WTF_DIR}hash_set.h
  ${WTF_DIR}hash_table.cc
  #${WTF_DIR}hash_table.h
  #${WTF_DIR}hash_table_deleted_value_type.h
  #${WTF_DIR}hash_traits.h
  #${WTF_DIR}leak_annotations.h
  #${WTF_DIR}linked_hash_set.h
  #${WTF_DIR}list_hash_set.h
  #${WTF_DIR}math_extras.h
  #${WTF_DIR}pod_arena.h
  #${WTF_DIR}pod_free_list_arena.h
  #${WTF_DIR}pod_interval.h
  #${WTF_DIR}pod_interval_tree.h
  #${WTF_DIR}pod_red_black_tree.h
  #${WTF_DIR}ref_counted.h
  #${WTF_DIR}sanitizers.h
  ${WTF_DIR}scoped_logger.cc
  #${WTF_DIR}scoped_logger.h
  ${WTF_DIR}size_assertions.cc
  #${WTF_DIR}size_assertions.h
  ${WTF_DIR}stack_util.cc
  #${WTF_DIR}stack_util.h
  #${WTF_DIR}static_constructors.h
  #${WTF_DIR}std_lib_extras.h
  ${WTF_DIR}text/ascii_ctype.cc
  # #${WTF_DIR}text/ascii_ctype.h
  # #${WTF_DIR}text/ascii_fast_path.h
  ${WTF_DIR}text/atomic_string.cc
  # #${WTF_DIR}text/atomic_string.h
  ${WTF_DIR}text/atomic_string_cf.cc
  # #${WTF_DIR}text/atomic_string_hash.h
  ${WTF_DIR}text/atomic_string_table.cc
  # #${WTF_DIR}text/atomic_string_table.h
  ${WTF_DIR}text/base64.cc
  # #${WTF_DIR}text/base64.h
  # #${WTF_DIR}text/character_names.h
  ${WTF_DIR}text/cstring.cc
  # #${WTF_DIR}text/cstring.h
  # #${WTF_DIR}text/integer_to_string_conversion.h
  ${WTF_DIR}text/line_ending.cc
  # #${WTF_DIR}text/line_ending.h
  # #${WTF_DIR}text/number_parsing_options.h
  # #${WTF_DIR}text/parsing_utilities.h
  # #${WTF_DIR}text/string_buffer.h
  ${WTF_DIR}text/string_builder.cc
  # #${WTF_DIR}text/string_builder.h
  ${WTF_DIR}text/string_concatenate.cc
  # #${WTF_DIR}text/string_concatenate.h
  # #${WTF_DIR}text/string_hash.h
  # #${WTF_DIR}text/string_hasher.h
  ${WTF_DIR}text/string_impl.cc
  # #${WTF_DIR}text/string_impl.h
  # #${WTF_DIR}text/string_impl_mac.mm
  # #${WTF_DIR}text/string_mac.mm
  # #${WTF_DIR}text/string_operators.h
  ${WTF_DIR}text/string_statics.cc
  # #${WTF_DIR}text/string_statics.h
  ${WTF_DIR}text/string_to_number.cc
  # #${WTF_DIR}text/string_to_number.h
  ${WTF_DIR}text/string_utf8_adaptor.cc
  # #${WTF_DIR}text/string_utf8_adaptor.h
  ${WTF_DIR}text/string_view.cc
  # #${WTF_DIR}text/string_view.h
  ${WTF_DIR}text/text_codec.cc
  # #${WTF_DIR}text/text_codec.h
  # #${WTF_DIR}text/text_codec_ascii_fast_path.h
  ${WTF_DIR}text/text_codec_icu.cc
  # #${WTF_DIR}text/text_codec_icu.h
  ${WTF_DIR}text/text_codec_latin1.cc
  # #${WTF_DIR}text/text_codec_latin1.h
  ${WTF_DIR}text/text_codec_replacement.cc
  # #${WTF_DIR}text/text_codec_replacement.h
  ${WTF_DIR}text/text_codec_user_defined.cc
  # #${WTF_DIR}text/text_codec_user_defined.h
  ${WTF_DIR}text/text_codec_utf16.cc
  # #${WTF_DIR}text/text_codec_utf16.h
  ${WTF_DIR}text/text_codec_utf8.cc
  # #${WTF_DIR}text/text_codec_utf8.h
  ${WTF_DIR}text/text_encoding.cc
  # #${WTF_DIR}text/text_encoding.h
  ${WTF_DIR}text/text_encoding_registry.cc
  # #${WTF_DIR}text/text_encoding_registry.h
  ${WTF_DIR}text/text_position.cc
  # #${WTF_DIR}text/text_position.h
  ${WTF_DIR}text/text_stream.cc
  # #${WTF_DIR}text/text_stream.h
  # #${WTF_DIR}text/unicode.h
  ${WTF_DIR}text/utf8.cc
  # #${WTF_DIR}text/utf8.h
  ${WTF_DIR}text/wtf_string.cc
  #${WTF_DIR}text/wtf_string.h
  # #${WTF_DIR}thread_restriction_verifier.h
  # #${WTF_DIR}thread_safe_ref_counted.h
  # #${WTF_DIR}thread_specific.h
  ${WTF_DIR}threading.cc
  # #${WTF_DIR}threading.h
  # #${WTF_DIR}threading_primitives.h
  ${WTF_DIR}threading_pthreads.cc
  # ${WTF_DIR}threading_win.cc
  ${WTF_DIR}time.cc
  #${WTF_DIR}time.h
  #${WTF_DIR}tree_node.h
  #${WTF_DIR}type_traits.h
  ${WTF_DIR}typed_arrays/array_buffer.cc
  #${WTF_DIR}typed_arrays/array_buffer.h
  ${WTF_DIR}typed_arrays/array_buffer_contents.cc
  #${WTF_DIR}typed_arrays/array_buffer_contents.h
  ${WTF_DIR}typed_arrays/array_buffer_view.cc
  #${WTF_DIR}typed_arrays/array_buffer_view.h
  ${WTF_DIR}typed_arrays/array_piece.cc
  #${WTF_DIR}typed_arrays/array_piece.h
  #${WTF_DIR}typed_arrays/bigint64_array.h
  #${WTF_DIR}typed_arrays/biguint64_array.h
  #${WTF_DIR}typed_arrays/float32_array.h
  #${WTF_DIR}typed_arrays/float64_array.h
  #${WTF_DIR}typed_arrays/int16_array.h
  #${WTF_DIR}typed_arrays/int32_array.h
  #${WTF_DIR}typed_arrays/int8_array.h
  #${WTF_DIR}typed_arrays/integral_typed_array_base.h
  #${WTF_DIR}typed_arrays/typed_array_base.h
  #${WTF_DIR}typed_arrays/uint16_array.h
  #${WTF_DIR}typed_arrays/uint32_array.h
  #${WTF_DIR}typed_arrays/uint8_array.h
  #${WTF_DIR}typed_arrays/uint8_clamped_array.h
  #${WTF_DIR}vector.h
  #${WTF_DIR}vector_traits.h
  ${WTF_DIR}wtf.cc
  #${WTF_DIR}wtf.h
  #${WTF_DIR}wtf_export.h
  # #${WTF_DIR}wtf_size_t.h
)

if(EMSCRIPTEN)
  # TODO
elseif(${CMAKE_SYSTEM_NAME} STREQUAL "Linux")
  list(APPEND WTF_SOURCES
    # TODO
    # ${WTF_DIR}wtf.cc
  )
else()
  message(FATAL_ERROR "TODO: port WTF")
endif()

if (EMSCRIPTEN)
  list(APPEND WTF_SOURCES
    # port
    # TODO
  )
endif()

#list(APPEND WTF_HEADERS
#  wtf/Alignment.h
#  wtf/AlwaysInline.h
#  wtf/ASCIICType.h
#  wtf/Assertions.h
#  wtf/Atomics.h
#  wtf/AVLTree.h
#  wtf/Bitmap.h
#  wtf/BlockStack.h
#  wtf/BloomFilter.h
#  wtf/BumpPointerAllocator.h
#  wtf/ByteArray.h
#  wtf/Compiler.h
#  wtf/Complex.h
#  wtf/CrossThreadRefCounted.h
#  wtf/CryptographicallyRandomNumber.h
#  wtf/CurrentTime.h
#  wtf/DateMath.h
#  wtf/DecimalNumber.h
#  wtf/Decoder.h
#  wtf/Deque.h
#  wtf/DisallowCType.h
#  wtf/DoublyLinkedList.h
#  wtf/dtoa.h
#  wtf/DynamicAnnotations.h
#  wtf/Encoder.h
#  wtf/ExportMacros.h
#  wtf/FastAllocBase.h
#  wtf/FastMalloc.h
#  wtf/FixedArray.h
#  wtf/Forward.h
#  wtf/GetPtr.h
#  wtf/HashCountedSet.h
#  wtf/HashFunctions.h
#  wtf/HashIterators.h
#  wtf/HashMap.h
#  wtf/HashSet.h
#  wtf/HashTable.h
#  wtf/HashTraits.h
#  wtf/HexNumber.h
#  wtf/ListHashSet.h
#  wtf/ListRefPtr.h
#  wtf/Locker.h
#  wtf/MainThread.h
#  wtf/MallocZoneSupport.h
#  wtf/MathExtras.h
#  wtf/MD5.h
#  wtf/MessageQueue.h
#  wtf/Noncopyable.h
#  wtf/NonCopyingSort.h
#  wtf/NotFound.h
#  wtf/NullPtr.h
#  wtf/OSAllocator.h
#  wtf/OSRandomSource.h
#  wtf/OwnArrayPtr.h
#  wtf/OwnFastMallocPtr.h
#  wtf/OwnPtr.h
#  wtf/OwnPtrCommon.h
#  wtf/PageAllocation.h
#  wtf/PageAllocationAligned.h
#  wtf/PageAllocatorSymbian.h
#  wtf/PageBlock.h
#  wtf/PageReservation.h
#  wtf/ParallelJobs.h
#  wtf/ParallelJobsGeneric.h
#  wtf/ParallelJobsLibdispatch.h
#  wtf/ParallelJobsOpenMP.h
#  wtf/PassOwnArrayPtr.h
#  wtf/PassOwnPtr.h
#  wtf/PassRefPtr.h
#  wtf/PassTraits.h
#  wtf/Platform.h
#  wtf/PossiblyNull.h
#  wtf/RandomNumber.h
#  wtf/RandomNumberSeed.h
#  wtf/RefCounted.h
#  wtf/RefCountedLeakCounter.h
#  wtf/RefPtr.h
#  wtf/RefPtrHashMap.h
#  wtf/RetainPtr.h
#  wtf/SegmentedVector.h
#  wtf/SentinelLinkedList.h
#  wtf/SHA1.h
#  wtf/SinglyLinkedList.h
#  wtf/StackBounds.h
#  wtf/StaticConstructors.h
#  wtf/StdLibExtras.h
#  wtf/StringExtras.h
#  wtf/StringHasher.h
#  wtf/TCPackedCache.h
#  wtf/TCPageMap.h
#  wtf/TCSpinLock.h
#  wtf/TCSystemAlloc.h
#  wtf/ThreadFunctionInvocation.h
#  wtf/ThreadIdentifierDataPthreads.h
#  wtf/Threading.h
#  wtf/ThreadingPrimitives.h
#  wtf/ThreadRestrictionVerifier.h
#  wtf/ThreadSafeRefCounted.h
#  wtf/ThreadSpecific.h
#  wtf/TypeTraits.h
#  wtf/UnusedParam.h
#  wtf/ValueCheck.h
#  wtf/Vector.h
#  wtf/VectorTraits.h
#  wtf/VMTags.h
#  wtf/WTFThreadData.h
#  )
#
#list(APPEND WTF_TEXT_HEADERS
#  wtf/text/AtomicString.h
#  wtf/text/AtomicStringHash.h
#  wtf/text/AtomicStringImpl.h
#  wtf/text/CString.h
#  wtf/text/StringBuffer.h
#  wtf/text/StringHash.h
#  wtf/text/StringImpl.h
#  wtf/text/StringImplBase.h
#  wtf/text/WTFString.h
#  )
#
#list(APPEND WTF_UNICODE_HEADERS
#  wtf/unicode/CharacterNames.h
#  wtf/unicode/Collator.h
#  wtf/unicode/Unicode.h
#  wtf/unicode/UTF8.h
#  )
#
#list(APPEND WTF_UNICODE_ICU_HEADERS
#  wtf/unicode/icu/UnicodeIcu.h
#  )

if (APPLE)
  #list(APPEND WTF_SOURCES wtf/mac/MainThreadMac.mm)
endif ()

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
#  ${CMAKE_CURRENT_SOURCE_DIR}
#  ${CMAKE_CURRENT_SOURCE_DIR}/wtf
#  ${CMAKE_CURRENT_SOURCE_DIR}/global_headers
#)
#message(FATAL_ERROR ${CMAKE_CURRENT_SOURCE_DIR}/global_headers)

#set(WTF_INCLUDE_DIRECTORIES
#    "${BMALLOC_DIR}"
#    "${CMAKE_BINARY_DIR}"
#    "${DERIVED_SOURCES_DIR}"
#    "${THIRDPARTY_DIR}"
#)

set(WTF_PRIVATE_INCLUDE_DIRECTORIES
  #${WTF_DIR}
  #${WTF_DIR}dtoa
  #${WTF_DIR}persistence
  #${WTF_DIR}text
  #${WTF_DIR}text/icu
  #${WTF_DIR}threads
  #${WTF_DIR}unicode
  #${WTF_DIR}icu
)

#message(FATAL_ERROR ${CMAKE_CXX_FLAGS})

target_include_directories(${WTF_LIBRARY_NAME} PUBLIC
  ${CMAKE_CURRENT_SOURCE_DIR}
  # folder containing wtf subdirectory
  #${WTF_DIR}/..
  #${CMAKE_CURRENT_SOURCE_DIR}/global_headers
)

#target_include_directories(${WTF_LIBRARY_NAME} SYSTEM PRIVATE
#  ${CMAKE_CURRENT_SOURCE_DIR}
#  ${CMAKE_CURRENT_SOURCE_DIR}/wtf
#  ${CMAKE_CURRENT_SOURCE_DIR}/global_headers
#)

set(WTF_LIBRARIES
  libevent
  base
)

if(EMSCRIPTEN)
  set(ICU_LIBRARIES icu)
  list(APPEND WTF_LIBRARIES
    ${ICU_LIBRARIES}
  )
elseif(${CMAKE_SYSTEM_NAME} STREQUAL "Linux")
  #Components can include any of: data, i18n, io, le, lx, test, tu and uc.
  # Note that on Windows data is named dt and i18n is named in;
  # any of the names may be used, and the appropriate platform-specific library name will be automatically selected.
  #find_package(ICU REQUIRED COMPONENTS i18n uc data REQUIRED)
  #MESSAGE("ICU_INCLUDE_DIRS: " ${ICU_INCLUDE_DIRS})
  #MESSAGE("ICU_LIBRARY_DIRS: " ${ICU_LIBRARY_DIRS})
  #MESSAGE("ICU_LIBRARIES: " ${ICU_LIBRARIES})
  ##
  #list(APPEND WTF_LIBRARIES
  #  ${ICU_LIBRARIES}
  #)
else()
  message(FATAL_ERROR "icu platform not supported")
endif()

#if(EMSCRIPTEN)
#else()
#  list(APPEND WTF_LIBRARIES
#    tcmalloc
#  )
#endif(EMSCRIPTEN)

target_include_directories(${WTF_LIBRARY_NAME} PRIVATE
  #${LIBEVENT_INCLUDE_DIRS}
  ${modp_b64_INCLUDE_DIRS}
  ${WTF_PRIVATE_INCLUDE_DIRECTORIES}
  #${WTF_DIR}
  ${OWN_ICU_INCLUDE_DIRS}
  ${ICU_INCLUDE_DIRS}
)

add_dependencies(${WTF_LIBRARY_NAME}
  ${WTF_LIBRARIES}
)

if (UNIX)
  #list(APPEND WTF_SOURCES wtf/OSAllocatorPosix.cpp)
elseif (WIN32)
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
endif ()

if (SINGLE_THREADED OR EMSCRIPTEN)
  set(ENABLE_SINGLE_THREADED 1)
  #list(APPEND WTF_SOURCES wtf/ThreadingNone.cpp)
else()
  find_package(Threads REQUIRED)
  #list(APPEND WTF_SOURCES
  #  wtf/ThreadingPthreads.cpp
  #  wtf/ThreadIdentifierDataPthreads.cpp
  #  )
  list(APPEND WTF_LIBRARIES ${CMAKE_THREAD_LIBS_INIT})
  set(HAVE_PTHREADS 1)
endif ()

target_link_libraries(${WTF_LIBRARY_NAME} PUBLIC
  ${WTF_LIBRARIES}
)

target_compile_definitions(${WTF_LIBRARY_NAME} PUBLIC
  # TODO
)

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

target_compile_options(${WTF_LIBRARY_NAME} PRIVATE
  -Wno-error
)
