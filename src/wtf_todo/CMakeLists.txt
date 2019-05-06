cmake_minimum_required(VERSION 2.8)
project(WTF)
set(WTF_LIBRARY_NAME wtf)

list(APPEND CMAKE_MODULE_PATH ${CMAKE_SOURCE_DIR}/cmake)

set(WTF_DIR "${CMAKE_SOURCE_DIR}/wtf")
set(3RDPARTY_DIR "${CMAKE_SOURCE_DIR}/")
list(APPEND WTF_INCLUDE_DIRS
  ${CMAKE_SOURCE_DIR}
  ${WTF_DIR}/text
  ${WTF_DIR}/unicode
  ${WTF_DIR}/icu
  )

list(APPEND WTF_SOURCES
  wtf/Assertions.cpp
  wtf/ByteArray.cpp
  wtf/CryptographicallyRandomNumber.cpp
  wtf/CurrentTime.cpp
  wtf/DateMath.cpp
  wtf/dtoa.cpp
  wtf/DecimalNumber.cpp
  wtf/DynamicAnnotations.cpp
  wtf/FastMalloc.cpp
  wtf/HashTable.cpp
  wtf/MD5.cpp
  wtf/MainThread.cpp
  wtf/NullPtr.cpp
  wtf/OSRandomSource.cpp
  wtf/PageAllocationAligned.cpp
  wtf/PageBlock.cpp
  wtf/ParallelJobsGeneric.cpp
  wtf/RandomNumber.cpp
  wtf/RefCountedLeakCounter.cpp
  wtf/SHA1.cpp
  wtf/StackBounds.cpp
  wtf/TCSystemAlloc.cpp
  wtf/Threading.cpp
  wtf/TypeTraits.cpp
  wtf/WTFThreadData.cpp
  wtf/text/AtomicString.cpp
  wtf/text/CString.cpp
  wtf/text/StringBuilder.cpp
  wtf/text/StringImpl.cpp
  wtf/text/StringStatics.cpp
  wtf/text/WTFString.cpp
  wtf/unicode/UTF8.cpp
  )

list(APPEND WTF_HEADERS
  wtf/Alignment.h
  wtf/AlwaysInline.h
  wtf/ASCIICType.h
  wtf/Assertions.h
  wtf/Atomics.h
  wtf/AVLTree.h
  wtf/Bitmap.h
  wtf/BlockStack.h
  wtf/BloomFilter.h
  wtf/BumpPointerAllocator.h
  wtf/ByteArray.h
  wtf/Compiler.h
  wtf/Complex.h
  wtf/CrossThreadRefCounted.h
  wtf/CryptographicallyRandomNumber.h
  wtf/CurrentTime.h
  wtf/DateMath.h
  wtf/DecimalNumber.h
  wtf/Decoder.h
  wtf/Deque.h
  wtf/DisallowCType.h
  wtf/DoublyLinkedList.h
  wtf/dtoa.h
  wtf/DynamicAnnotations.h
  wtf/Encoder.h
  wtf/ExportMacros.h
  wtf/FastAllocBase.h
  wtf/FastMalloc.h
  wtf/FixedArray.h
  wtf/Forward.h
  wtf/GetPtr.h
  wtf/HashCountedSet.h
  wtf/HashFunctions.h
  wtf/HashIterators.h
  wtf/HashMap.h
  wtf/HashSet.h
  wtf/HashTable.h
  wtf/HashTraits.h
  wtf/HexNumber.h
  wtf/ListHashSet.h
  wtf/ListRefPtr.h
  wtf/Locker.h
  wtf/MainThread.h
  wtf/MallocZoneSupport.h
  wtf/MathExtras.h
  wtf/MD5.h
  wtf/MessageQueue.h
  wtf/Noncopyable.h
  wtf/NonCopyingSort.h
  wtf/NotFound.h
  wtf/NullPtr.h
  wtf/OSAllocator.h
  wtf/OSRandomSource.h
  wtf/OwnArrayPtr.h
  wtf/OwnFastMallocPtr.h
  wtf/OwnPtr.h
  wtf/OwnPtrCommon.h
  wtf/PageAllocation.h
  wtf/PageAllocationAligned.h
  wtf/PageAllocatorSymbian.h
  wtf/PageBlock.h
  wtf/PageReservation.h
  wtf/ParallelJobs.h
  wtf/ParallelJobsGeneric.h
  wtf/ParallelJobsLibdispatch.h
  wtf/ParallelJobsOpenMP.h
  wtf/PassOwnArrayPtr.h
  wtf/PassOwnPtr.h
  wtf/PassRefPtr.h
  wtf/PassTraits.h
  wtf/Platform.h
  wtf/PossiblyNull.h
  wtf/RandomNumber.h
  wtf/RandomNumberSeed.h
  wtf/RefCounted.h
  wtf/RefCountedLeakCounter.h
  wtf/RefPtr.h
  wtf/RefPtrHashMap.h
  wtf/RetainPtr.h
  wtf/SegmentedVector.h
  wtf/SentinelLinkedList.h
  wtf/SHA1.h
  wtf/SinglyLinkedList.h
  wtf/StackBounds.h
  wtf/StaticConstructors.h
  wtf/StdLibExtras.h
  wtf/StringExtras.h
  wtf/StringHasher.h
  wtf/TCPackedCache.h
  wtf/TCPageMap.h
  wtf/TCSpinLock.h
  wtf/TCSystemAlloc.h
  wtf/ThreadFunctionInvocation.h
  wtf/ThreadIdentifierDataPthreads.h
  wtf/Threading.h
  wtf/ThreadingPrimitives.h
  wtf/ThreadRestrictionVerifier.h
  wtf/ThreadSafeRefCounted.h
  wtf/ThreadSpecific.h
  wtf/TypeTraits.h
  wtf/UnusedParam.h
  wtf/ValueCheck.h
  wtf/Vector.h
  wtf/VectorTraits.h
  wtf/VMTags.h
  wtf/WTFThreadData.h
  )

list(APPEND WTF_TEXT_HEADERS
  wtf/text/AtomicString.h
  wtf/text/AtomicStringHash.h
  wtf/text/AtomicStringImpl.h
  wtf/text/CString.h
  wtf/text/StringBuffer.h
  wtf/text/StringHash.h
  wtf/text/StringImpl.h
  wtf/text/StringImplBase.h
  wtf/text/WTFString.h
  )

list(APPEND WTF_UNICODE_HEADERS
  wtf/unicode/CharacterNames.h
  wtf/unicode/Collator.h
  wtf/unicode/Unicode.h
  wtf/unicode/UTF8.h
  )

list(APPEND WTF_UNICODE_ICU_HEADERS
  wtf/unicode/icu/UnicodeIcu.h
  )

if (UNIX)
  list(APPEND WTF_SOURCES wtf/OSAllocatorPosix.cpp)
elseif (WIN32)
  list(APPEND WTF_SOURCES
    wtf/NullPtr.cpp
    wtf/OSAllocatorWin.cpp
    wtf/TCSystemAlloc.cpp
    wtf/ThreadingWin.cpp
    wtf/ThreadSpecificWin.cpp
    wtf/unicode/CollatorDefault.cpp
    wtf/unicode/wince/UnicodeWinCE.cpp
    wtf/win/MainThreadWin.cpp
    wtf/win/OwnPtrWin.cpp
    )

  list(APPEND WTF_HEADERS unicode/wince/UnicodeWinCE.h)
  list(APPEND WTF_LIBRARIES mmtimer)
endif ()

if (APPLE)
  list(APPEND WTF_SOURCES wtf/mac/MainThreadMac.mm)
endif ()

option(SINGLE_THREADED "Enable single threaded mode" OFF)

if (SINGLE_THREADED OR EMSCRIPTEN)
  set(ENABLE_SINGLE_THREADED 1)
  list(APPEND WTF_SOURCES wtf/ThreadingNone.cpp)
else ()
  find_package(Threads REQUIRED)
  list(APPEND WTF_SOURCES
    wtf/ThreadingPthreads.cpp
    wtf/ThreadIdentifierDataPthreads.cpp 
    )
  list(APPEND WTF_LIBRARIES ${CMAKE_THREAD_LIBS_INIT})
  set(HAVE_PTHREADS 1)
endif ()

configure_file(cmakeconfig.h.cmake ${CMAKE_SOURCE_DIR}/cmakeconfig.h)
add_definitions(-DBUILDING_WTF)

if (EMSCRIPTEN)
  #find_package(ICU REQUIRED COMPONENTS I18N UC REQUIRED)
  add_library(${WTF_LIBRARY_NAME} ${WTF_SOURCES})
  #target_link_libraries(${WTF_LIBRARY_NAME}
  #  ${ICU_UC_LIBRARIES}
  #  ${ICU_I18N_LIBRARIES}
  #)
  target_include_directories(${WTF_LIBRARY_NAME} PRIVATE
    ${CMAKE_CURRENT_SOURCE_DIR}
    ${CMAKE_CURRENT_SOURCE_DIR}/wtf
  )
else ()
  find_package(ICU) # REQUIRED)
  add_library(${WTF_LIBRARY_NAME} ${ICU_SOURCES} ${WTF_SOURCES})
endif ()

include_directories(${WTF_LIBRARY_NAME} ${WTF_INCLUDE_DIRS})
target_link_libraries(${WTF_LIBRARY_NAME} ${WTF_LIBRARIES})

install(FILES ${WTF_HEADERS} DESTINATION include/wtf)
install(FILES ${WTF_TEXT_HEADERS} DESTINATION include/wtf/text)
install(FILES ${WTF_UNICODE_HEADERS} DESTINATION include/wtf/unicode)
install(FILES ${WTF_UNICODE_ICU_HEADERS} DESTINATION include/wtf/unicode/icu)
install(TARGETS ${WTF_LIBRARY_NAME} DESTINATION lib)
