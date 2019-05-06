cmake_minimum_required(VERSION 2.8)
project(WTF)
set(WTF_LIBRARY_NAME wtf)

list(APPEND CMAKE_MODULE_PATH ${CMAKE_CURRENT_SOURCE_DIR}/cmake)

set(WTF_DIR ${CMAKE_CURRENT_SOURCE_DIR})
set(3RDPARTY_DIR "${CMAKE_CURRENT_SOURCE_DIR}/")

list(APPEND WTF_SOURCES
    wtf/ASCIICType.cpp
    wtf/Assertions.cpp
    wtf/AutomaticThread.cpp
    wtf/BitVector.cpp
    wtf/ClockType.cpp
    wtf/CompilationThread.cpp
    wtf/ConcurrentPtrHashSet.cpp
    wtf/CountingLock.cpp
    wtf/CPUTime.cpp
    wtf/CrossThreadCopier.cpp
    wtf/CrossThreadTaskHandler.cpp
    wtf/CryptographicallyRandomNumber.cpp
    wtf/CryptographicUtilities.cpp
    wtf/CurrentTime.cpp
    wtf/DataLog.cpp
    wtf/DateMath.cpp
    wtf/dtoa.cpp
    wtf/dtoa/bignum-dtoa.cc
    wtf/dtoa/bignum.cc
    wtf/dtoa/cached-powers.cc
    wtf/dtoa/diy-fp.cc
    wtf/dtoa/double-conversion.cc
    wtf/dtoa/fast-dtoa.cc
    wtf/dtoa/fixed-dtoa.cc
    wtf/dtoa/strtod.cc
    wtf/FastBitVector.cpp
    wtf/FastMalloc.cpp
    wtf/FilePrintStream.cpp
    wtf/FileSystem.cpp
    wtf/FunctionDispatcher.cpp
    wtf/generic/MainThreadGeneric.cpp
    wtf/generic/MemoryFootprintGeneric.cpp
    wtf/generic/MemoryPressureHandlerGeneric.cpp
    wtf/generic/RunLoopGeneric.cpp
    wtf/generic/WorkQueueGeneric.cpp
    wtf/Gigacage.cpp
    wtf/GlobalVersion.cpp
    wtf/GregorianDateTime.cpp
    wtf/HashTable.cpp
    wtf/HexNumber.cpp
    wtf/JSONValues.cpp
    wtf/JSValueMalloc.cpp
    wtf/Language.cpp
    wtf/Lock.cpp
    wtf/LockedPrintStream.cpp
    wtf/Logger.cpp
    wtf/MainThread.cpp
    wtf/MD5.cpp
    wtf/MediaTime.cpp
    wtf/MemoryPressureHandler.cpp
    wtf/MetaAllocator.cpp
    wtf/MonotonicTime.cpp
    wtf/ObjectIdentifier.cpp
    wtf/OSRandomSource.cpp
    wtf/PageBlock.cpp
    wtf/ParallelHelperPool.cpp
    wtf/ParallelJobsGeneric.cpp
    wtf/ParkingLot.cpp
    wtf/persistence/PersistentCoders.cpp
    wtf/persistence/PersistentDecoder.cpp
    wtf/persistence/PersistentEncoder.cpp
    wtf/posix/FileSystemPOSIX.cpp
    wtf/posix/OSAllocatorPOSIX.cpp
    wtf/posix/ThreadingPOSIX.cpp
    wtf/PrintStream.cpp
    wtf/ProcessPrivilege.cpp
    wtf/RandomNumber.cpp
    wtf/ReadWriteLock.cpp
    wtf/RefCountedLeakCounter.cpp
    wtf/RunLoop.cpp
    wtf/Seconds.cpp
    wtf/SHA1.cpp
    wtf/SixCharacterHash.cpp
    wtf/SizeLimits.cpp
    wtf/StackBounds.cpp
    wtf/StackPointer.cpp
    wtf/StackStats.cpp
    wtf/StackTrace.cpp
    wtf/StringPrintStream.cpp
    wtf/text/ASCIILiteral.cpp
    wtf/text/AtomicString.cpp
    wtf/text/AtomicStringImpl.cpp
    wtf/text/AtomicStringTable.cpp
    wtf/text/Base64.cpp
    wtf/text/CString.cpp
    wtf/text/ExternalStringImpl.cpp
    wtf/text/icu/UTextProvider.cpp
    wtf/text/icu/UTextProviderLatin1.cpp
    wtf/text/icu/UTextProviderUTF16.cpp
    wtf/text/LineEnding.cpp
    wtf/text/StringBuilder.cpp
    wtf/text/StringBuilderJSON.cpp
    wtf/text/StringImpl.cpp
    wtf/text/StringView.cpp
    wtf/text/SymbolImpl.cpp
    wtf/text/SymbolRegistry.cpp
    wtf/text/TextBreakIterator.cpp
    wtf/text/TextStream.cpp
    wtf/text/WTFString.cpp
    wtf/ThreadGroup.cpp
    wtf/Threading.cpp
    wtf/threads/BinarySemaphore.cpp
    wtf/TimeWithDynamicClockType.cpp
    wtf/TimingScope.cpp
    wtf/unicode/CollatorDefault.cpp
    wtf/unicode/icu/CollatorICU.cpp
    wtf/unicode/UTF8Conversion.cpp
    wtf/unix/LanguageUnix.cpp
    wtf/URL.cpp
    wtf/URLHelpers.cpp
    wtf/URLParser.cpp
    wtf/UUID.cpp
    wtf/WallTime.cpp
    wtf/WordLock.cpp
    wtf/WorkerPool.cpp
    wtf/WorkQueue.cpp
    wtf/WTFAssertions.cpp
    # wtf/unix/CPUTimeUnix.cpp
  )

if (EMSCRIPTEN)
  list(APPEND WTF_SOURCES
    # port
    wtf/JSC.js/CPUTime.cpp
    wtf/JSC.js/FileSystem.cpp
    wtf/JSC.js/NumberOfCores.cpp
    wtf/JSC.js/RAMSize.cpp
    wtf/JSC.js/RandomDeviceGeneric.cpp
    wtf/JSC.js/TextBreakIteratorInternalICU.cpp
    wtf/JSC.js/ThreadMessage.cpp)
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

if (APPLE)
  #list(APPEND WTF_SOURCES wtf/mac/MainThreadMac.mm)
endif ()

option(SINGLE_THREADED "Enable single threaded mode" OFF)

if (SINGLE_THREADED OR EMSCRIPTEN)
  set(ENABLE_SINGLE_THREADED 1)
  #list(APPEND WTF_SOURCES wtf/ThreadingNone.cpp)
else ()
  find_package(Threads REQUIRED)
  #list(APPEND WTF_SOURCES
  #  wtf/ThreadingPthreads.cpp
  #  wtf/ThreadIdentifierDataPthreads.cpp
  #  )
  list(APPEND WTF_LIBRARIES ${CMAKE_THREAD_LIBS_INIT})
  set(HAVE_PTHREADS 1)
endif ()

set(ICU_FULL_DIR
  icu/
)

set(ICU_SOURCES
  ${ICU_FULL_DIR}cmemory.c
  ${ICU_FULL_DIR}cstring.c
  ${ICU_FULL_DIR}cwchar.c
  ${ICU_FULL_DIR}decContext.c
  ${ICU_FULL_DIR}decNumber.c
  ${ICU_FULL_DIR}icudataver.c
  ${ICU_FULL_DIR}locmap.c
  ${ICU_FULL_DIR}propsvec.c
  ${ICU_FULL_DIR}uarrsort.c
  ${ICU_FULL_DIR}ubidi.c
  ${ICU_FULL_DIR}ubidiln.c
  ${ICU_FULL_DIR}ubidiwrt.c
  ${ICU_FULL_DIR}ubidi_props.c
  ${ICU_FULL_DIR}ucat.c
  ${ICU_FULL_DIR}uchar.c
  ${ICU_FULL_DIR}ucmndata.c
  ${ICU_FULL_DIR}ucnv.c
  ${ICU_FULL_DIR}ucnvdisp.c
  ${ICU_FULL_DIR}ucnvhz.c
  ${ICU_FULL_DIR}ucnvisci.c
  ${ICU_FULL_DIR}ucnvlat1.c
  ${ICU_FULL_DIR}ucnvscsu.c
  ${ICU_FULL_DIR}ucnv_cb.c
  ${ICU_FULL_DIR}ucnv_cnv.c
  ${ICU_FULL_DIR}ucnv_ct.c
  ${ICU_FULL_DIR}ucnv_err.c
  ${ICU_FULL_DIR}ucnv_lmb.c
  ${ICU_FULL_DIR}ucnv_set.c
  ${ICU_FULL_DIR}ucnv_u16.c
  ${ICU_FULL_DIR}ucnv_u32.c
  ${ICU_FULL_DIR}ucnv_u7.c
  ${ICU_FULL_DIR}ucnv_u8.c
  ${ICU_FULL_DIR}udatamem.c
  ${ICU_FULL_DIR}udataswp.c
  ${ICU_FULL_DIR}uenum.c
  ${ICU_FULL_DIR}uhash.c
  ${ICU_FULL_DIR}uinvchar.c
  ${ICU_FULL_DIR}ulist.c
  ${ICU_FULL_DIR}ulocdata.c
  ${ICU_FULL_DIR}uloc_tag.c
  ${ICU_FULL_DIR}umapfile.c
  ${ICU_FULL_DIR}umath.c
  ${ICU_FULL_DIR}uresdata.c
  ${ICU_FULL_DIR}ures_cnv.c
  ${ICU_FULL_DIR}uscript.c
  ${ICU_FULL_DIR}usc_impl.c
  ${ICU_FULL_DIR}ustrfmt.c
  ${ICU_FULL_DIR}utf_impl.c
  ${ICU_FULL_DIR}utmscale.c
  ${ICU_FULL_DIR}utrace.c
  ${ICU_FULL_DIR}utypes.c
  ${ICU_FULL_DIR}wintz.c
  ${ICU_FULL_DIR}stubdata.c
  ${ICU_FULL_DIR}affixpatternparser.cpp
  ${ICU_FULL_DIR}alphaindex.cpp
  ${ICU_FULL_DIR}anytrans.cpp
  ${ICU_FULL_DIR}appendable.cpp
  ${ICU_FULL_DIR}astro.cpp
  ${ICU_FULL_DIR}basictz.cpp
  ${ICU_FULL_DIR}bmpset.cpp
  ${ICU_FULL_DIR}bocsu.cpp
  ${ICU_FULL_DIR}brkeng.cpp
  ${ICU_FULL_DIR}brkiter.cpp
  ${ICU_FULL_DIR}brktrans.cpp
  ${ICU_FULL_DIR}buddhcal.cpp
  ${ICU_FULL_DIR}bytestream.cpp
  ${ICU_FULL_DIR}bytestrie.cpp
  ${ICU_FULL_DIR}bytestriebuilder.cpp
  ${ICU_FULL_DIR}bytestrieiterator.cpp
  ${ICU_FULL_DIR}calendar.cpp
  ${ICU_FULL_DIR}caniter.cpp
  ${ICU_FULL_DIR}casetrn.cpp
  ${ICU_FULL_DIR}cecal.cpp
  ${ICU_FULL_DIR}chariter.cpp
  ${ICU_FULL_DIR}charstr.cpp
  ${ICU_FULL_DIR}chnsecal.cpp
  ${ICU_FULL_DIR}choicfmt.cpp
  ${ICU_FULL_DIR}coleitr.cpp
  ${ICU_FULL_DIR}coll.cpp
  ${ICU_FULL_DIR}collation.cpp
  ${ICU_FULL_DIR}collationbuilder.cpp
  ${ICU_FULL_DIR}collationcompare.cpp
  ${ICU_FULL_DIR}collationdata.cpp
  ${ICU_FULL_DIR}collationdatabuilder.cpp
  ${ICU_FULL_DIR}collationdatareader.cpp
  ${ICU_FULL_DIR}collationdatawriter.cpp
  ${ICU_FULL_DIR}collationfastlatin.cpp
  ${ICU_FULL_DIR}collationfastlatinbuilder.cpp
  ${ICU_FULL_DIR}collationfcd.cpp
  ${ICU_FULL_DIR}collationiterator.cpp
  ${ICU_FULL_DIR}collationkeys.cpp
  ${ICU_FULL_DIR}collationroot.cpp
  ${ICU_FULL_DIR}collationrootelements.cpp
  ${ICU_FULL_DIR}collationruleparser.cpp
  ${ICU_FULL_DIR}collationsets.cpp
  ${ICU_FULL_DIR}collationsettings.cpp
  ${ICU_FULL_DIR}collationtailoring.cpp
  ${ICU_FULL_DIR}collationweights.cpp
  ${ICU_FULL_DIR}compactdecimalformat.cpp
  ${ICU_FULL_DIR}coptccal.cpp
  ${ICU_FULL_DIR}cpdtrans.cpp
  ${ICU_FULL_DIR}csdetect.cpp
  ${ICU_FULL_DIR}csmatch.cpp
  ${ICU_FULL_DIR}csr2022.cpp
  ${ICU_FULL_DIR}csrecog.cpp
  ${ICU_FULL_DIR}csrmbcs.cpp
  ${ICU_FULL_DIR}csrsbcs.cpp
  ${ICU_FULL_DIR}csrucode.cpp
  ${ICU_FULL_DIR}csrutf8.cpp
  ${ICU_FULL_DIR}curramt.cpp
  ${ICU_FULL_DIR}currfmt.cpp
  ${ICU_FULL_DIR}currpinf.cpp
  ${ICU_FULL_DIR}currunit.cpp
  ${ICU_FULL_DIR}dangical.cpp
  ${ICU_FULL_DIR}datefmt.cpp
  ${ICU_FULL_DIR}dcfmtsym.cpp
  ${ICU_FULL_DIR}decfmtst.cpp
  ${ICU_FULL_DIR}decimalformatpattern.cpp
  ${ICU_FULL_DIR}decimfmt.cpp
  ${ICU_FULL_DIR}decimfmtimpl.cpp
  ${ICU_FULL_DIR}dictbe.cpp
  ${ICU_FULL_DIR}dictionarydata.cpp
  ${ICU_FULL_DIR}digitaffix.cpp
  ${ICU_FULL_DIR}digitaffixesandpadding.cpp
  ${ICU_FULL_DIR}digitformatter.cpp
  ${ICU_FULL_DIR}digitgrouping.cpp
  ${ICU_FULL_DIR}digitinterval.cpp
  ${ICU_FULL_DIR}digitlst.cpp
  ${ICU_FULL_DIR}dtfmtsym.cpp
  ${ICU_FULL_DIR}dtintrv.cpp
  ${ICU_FULL_DIR}dtitvfmt.cpp
  ${ICU_FULL_DIR}dtitvinf.cpp
  ${ICU_FULL_DIR}dtptngen.cpp
  ${ICU_FULL_DIR}dtrule.cpp
  ${ICU_FULL_DIR}errorcode.cpp
  ${ICU_FULL_DIR}esctrn.cpp
  ${ICU_FULL_DIR}ethpccal.cpp
  ${ICU_FULL_DIR}filteredbrk.cpp
  ${ICU_FULL_DIR}filterednormalizer2.cpp
  ${ICU_FULL_DIR}fmtable.cpp
  ${ICU_FULL_DIR}fmtable_cnv.cpp
  ${ICU_FULL_DIR}format.cpp
  ${ICU_FULL_DIR}fphdlimp.cpp
  ${ICU_FULL_DIR}fpositer.cpp
  ${ICU_FULL_DIR}funcrepl.cpp
  ${ICU_FULL_DIR}gender.cpp
  ${ICU_FULL_DIR}gregocal.cpp
  ${ICU_FULL_DIR}gregoimp.cpp
  ${ICU_FULL_DIR}hebrwcal.cpp
  ${ICU_FULL_DIR}icuplug.cpp
  ${ICU_FULL_DIR}identifier_info.cpp
  ${ICU_FULL_DIR}indiancal.cpp
  ${ICU_FULL_DIR}inputext.cpp
  ${ICU_FULL_DIR}islamcal.cpp
  ${ICU_FULL_DIR}japancal.cpp
  ${ICU_FULL_DIR}listformatter.cpp
  ${ICU_FULL_DIR}loadednormalizer2impl.cpp
  ${ICU_FULL_DIR}locavailable.cpp
  ${ICU_FULL_DIR}locbased.cpp
  ${ICU_FULL_DIR}locdispnames.cpp
  ${ICU_FULL_DIR}locdspnm.cpp
  ${ICU_FULL_DIR}locid.cpp
  ${ICU_FULL_DIR}loclikely.cpp
  ${ICU_FULL_DIR}locresdata.cpp
  ${ICU_FULL_DIR}locutil.cpp
  ${ICU_FULL_DIR}measfmt.cpp
  ${ICU_FULL_DIR}measunit.cpp
  ${ICU_FULL_DIR}measure.cpp
  ${ICU_FULL_DIR}messagepattern.cpp
  ${ICU_FULL_DIR}msgfmt.cpp
  ${ICU_FULL_DIR}name2uni.cpp
  ${ICU_FULL_DIR}nfrs.cpp
  ${ICU_FULL_DIR}nfrule.cpp
  ${ICU_FULL_DIR}nfsubs.cpp
  ${ICU_FULL_DIR}normalizer2.cpp
  ${ICU_FULL_DIR}normalizer2impl.cpp
  ${ICU_FULL_DIR}normlzr.cpp
  ${ICU_FULL_DIR}nortrans.cpp
  ${ICU_FULL_DIR}nultrans.cpp
  ${ICU_FULL_DIR}numfmt.cpp
  ${ICU_FULL_DIR}numsys.cpp
  ${ICU_FULL_DIR}olsontz.cpp
  ${ICU_FULL_DIR}parsepos.cpp
  ${ICU_FULL_DIR}patternprops.cpp
  ${ICU_FULL_DIR}persncal.cpp
  ${ICU_FULL_DIR}pluralaffix.cpp
  ${ICU_FULL_DIR}pluralmap.cpp
  ${ICU_FULL_DIR}plurfmt.cpp
  ${ICU_FULL_DIR}plurrule.cpp
  ${ICU_FULL_DIR}precision.cpp
  ${ICU_FULL_DIR}propname.cpp
  ${ICU_FULL_DIR}punycode.cpp
  ${ICU_FULL_DIR}putil.cpp
  ${ICU_FULL_DIR}quant.cpp
  ${ICU_FULL_DIR}quantityformatter.cpp
  ${ICU_FULL_DIR}rbbi.cpp
  ${ICU_FULL_DIR}rbbidata.cpp
  ${ICU_FULL_DIR}rbbinode.cpp
  ${ICU_FULL_DIR}rbbirb.cpp
  ${ICU_FULL_DIR}rbbiscan.cpp
  ${ICU_FULL_DIR}rbbisetb.cpp
  ${ICU_FULL_DIR}rbbistbl.cpp
  ${ICU_FULL_DIR}rbbitblb.cpp
  ${ICU_FULL_DIR}rbnf.cpp
  ${ICU_FULL_DIR}rbt.cpp
  ${ICU_FULL_DIR}rbtz.cpp
  ${ICU_FULL_DIR}rbt_data.cpp
  ${ICU_FULL_DIR}rbt_pars.cpp
  ${ICU_FULL_DIR}rbt_rule.cpp
  ${ICU_FULL_DIR}rbt_set.cpp
  ${ICU_FULL_DIR}regexcmp.cpp
  ${ICU_FULL_DIR}regeximp.cpp
  ${ICU_FULL_DIR}regexst.cpp
  ${ICU_FULL_DIR}regextxt.cpp
  ${ICU_FULL_DIR}region.cpp
  ${ICU_FULL_DIR}reldatefmt.cpp
  ${ICU_FULL_DIR}reldtfmt.cpp
  ${ICU_FULL_DIR}rematch.cpp
  ${ICU_FULL_DIR}remtrans.cpp
  ${ICU_FULL_DIR}repattrn.cpp
  ${ICU_FULL_DIR}resbund.cpp
  ${ICU_FULL_DIR}resbund_cnv.cpp
  ${ICU_FULL_DIR}rulebasedcollator.cpp
  ${ICU_FULL_DIR}ruleiter.cpp
  ${ICU_FULL_DIR}schriter.cpp
  ${ICU_FULL_DIR}scientificnumberformatter.cpp
  ${ICU_FULL_DIR}scriptset.cpp
  ${ICU_FULL_DIR}search.cpp
  ${ICU_FULL_DIR}selfmt.cpp
  ${ICU_FULL_DIR}serv.cpp
  ${ICU_FULL_DIR}servlk.cpp
  ${ICU_FULL_DIR}servlkf.cpp
  ${ICU_FULL_DIR}servls.cpp
  ${ICU_FULL_DIR}servnotf.cpp
  ${ICU_FULL_DIR}servrbf.cpp
  ${ICU_FULL_DIR}servslkf.cpp
  ${ICU_FULL_DIR}sharedbreakiterator.cpp
  ${ICU_FULL_DIR}sharedobject.cpp
  ${ICU_FULL_DIR}simplepatternformatter.cpp
  ${ICU_FULL_DIR}simpletz.cpp
  ${ICU_FULL_DIR}smallintformatter.cpp
  ${ICU_FULL_DIR}smpdtfmt.cpp
  ${ICU_FULL_DIR}smpdtfst.cpp
  ${ICU_FULL_DIR}sortkey.cpp
  ${ICU_FULL_DIR}stringpiece.cpp
  ${ICU_FULL_DIR}stringtriebuilder.cpp
  ${ICU_FULL_DIR}strmatch.cpp
  ${ICU_FULL_DIR}strrepl.cpp
  ${ICU_FULL_DIR}stsearch.cpp
  ${ICU_FULL_DIR}taiwncal.cpp
  ${ICU_FULL_DIR}timezone.cpp
  ${ICU_FULL_DIR}titletrn.cpp
  ${ICU_FULL_DIR}tmunit.cpp
  ${ICU_FULL_DIR}tmutamt.cpp
  ${ICU_FULL_DIR}tmutfmt.cpp
  ${ICU_FULL_DIR}tolowtrn.cpp
  ${ICU_FULL_DIR}toupptrn.cpp
  ${ICU_FULL_DIR}translit.cpp
  ${ICU_FULL_DIR}transreg.cpp
  ${ICU_FULL_DIR}tridpars.cpp
  ${ICU_FULL_DIR}tzfmt.cpp
  ${ICU_FULL_DIR}tzgnames.cpp
  ${ICU_FULL_DIR}tznames.cpp
  ${ICU_FULL_DIR}tznames_impl.cpp
  ${ICU_FULL_DIR}tzrule.cpp
  ${ICU_FULL_DIR}tztrans.cpp
  ${ICU_FULL_DIR}ubrk.cpp
  ${ICU_FULL_DIR}ucal.cpp
  ${ICU_FULL_DIR}ucase.cpp
  ${ICU_FULL_DIR}ucasemap.cpp
  ${ICU_FULL_DIR}ucasemap_titlecase_brkiter.cpp
  ${ICU_FULL_DIR}ucharstrie.cpp
  ${ICU_FULL_DIR}ucharstriebuilder.cpp
  ${ICU_FULL_DIR}ucharstrieiterator.cpp
  ${ICU_FULL_DIR}uchriter.cpp
  ${ICU_FULL_DIR}ucln_cmn.cpp
  ${ICU_FULL_DIR}ucln_in.cpp
  ${ICU_FULL_DIR}ucnv2022.cpp
  ${ICU_FULL_DIR}ucnvbocu.cpp
  ${ICU_FULL_DIR}ucnvmbcs.cpp
  ${ICU_FULL_DIR}ucnvsel.cpp
  ${ICU_FULL_DIR}ucnv_bld.cpp
  ${ICU_FULL_DIR}ucnv_ext.cpp
  ${ICU_FULL_DIR}ucnv_io.cpp
  ${ICU_FULL_DIR}ucol.cpp
  ${ICU_FULL_DIR}ucoleitr.cpp
  ${ICU_FULL_DIR}ucol_res.cpp
  ${ICU_FULL_DIR}ucol_sit.cpp
  ${ICU_FULL_DIR}ucol_swp.cpp
  ${ICU_FULL_DIR}ucsdet.cpp
  ${ICU_FULL_DIR}ucurr.cpp
  ${ICU_FULL_DIR}udat.cpp
  ${ICU_FULL_DIR}udata.cpp
  ${ICU_FULL_DIR}udateintervalformat.cpp
  ${ICU_FULL_DIR}udatpg.cpp
  ${ICU_FULL_DIR}ufieldpositer.cpp
  ${ICU_FULL_DIR}uhash_us.cpp
  ${ICU_FULL_DIR}uidna.cpp
  ${ICU_FULL_DIR}uinit.cpp
  ${ICU_FULL_DIR}uiter.cpp
  ${ICU_FULL_DIR}uitercollationiterator.cpp
  ${ICU_FULL_DIR}ulistformatter.cpp
  ${ICU_FULL_DIR}uloc.cpp
  ${ICU_FULL_DIR}uloc_keytype.cpp
  ${ICU_FULL_DIR}umsg.cpp
  ${ICU_FULL_DIR}umutex.cpp
  ${ICU_FULL_DIR}unames.cpp
  ${ICU_FULL_DIR}unesctrn.cpp
  ${ICU_FULL_DIR}uni2name.cpp
  ${ICU_FULL_DIR}unifiedcache.cpp
  ${ICU_FULL_DIR}unifilt.cpp
  ${ICU_FULL_DIR}unifunct.cpp
  ${ICU_FULL_DIR}uniset.cpp
  ${ICU_FULL_DIR}unisetspan.cpp
  ${ICU_FULL_DIR}uniset_closure.cpp
  ${ICU_FULL_DIR}uniset_props.cpp
  ${ICU_FULL_DIR}unistr.cpp
  ${ICU_FULL_DIR}unistr_case.cpp
  ${ICU_FULL_DIR}unistr_case_locale.cpp
  ${ICU_FULL_DIR}unistr_cnv.cpp
  ${ICU_FULL_DIR}unistr_props.cpp
  ${ICU_FULL_DIR}unistr_titlecase_brkiter.cpp
  ${ICU_FULL_DIR}unorm.cpp
  ${ICU_FULL_DIR}unormcmp.cpp
  ${ICU_FULL_DIR}unum.cpp
  ${ICU_FULL_DIR}unumsys.cpp
  ${ICU_FULL_DIR}uobject.cpp
  ${ICU_FULL_DIR}upluralrules.cpp
  ${ICU_FULL_DIR}uprops.cpp
  ${ICU_FULL_DIR}uregex.cpp
  ${ICU_FULL_DIR}uregexc.cpp
  ${ICU_FULL_DIR}uregion.cpp
  ${ICU_FULL_DIR}uresbund.cpp
  ${ICU_FULL_DIR}uscript_props.cpp
  ${ICU_FULL_DIR}usearch.cpp
  ${ICU_FULL_DIR}uset.cpp
  ${ICU_FULL_DIR}usetiter.cpp
  ${ICU_FULL_DIR}uset_props.cpp
  ${ICU_FULL_DIR}ushape.cpp
  ${ICU_FULL_DIR}uspoof.cpp
  ${ICU_FULL_DIR}uspoof_build.cpp
  ${ICU_FULL_DIR}uspoof_conf.cpp
  ${ICU_FULL_DIR}uspoof_impl.cpp
  ${ICU_FULL_DIR}uspoof_wsconf.cpp
  ${ICU_FULL_DIR}usprep.cpp
  ${ICU_FULL_DIR}ustack.cpp
  ${ICU_FULL_DIR}ustrcase.cpp
  ${ICU_FULL_DIR}ustrcase_locale.cpp
  ${ICU_FULL_DIR}ustrenum.cpp
  ${ICU_FULL_DIR}ustring.cpp
  ${ICU_FULL_DIR}ustrtrns.cpp
  ${ICU_FULL_DIR}ustr_cnv.cpp
  ${ICU_FULL_DIR}ustr_titlecase_brkiter.cpp
  ${ICU_FULL_DIR}ustr_wcs.cpp
  ${ICU_FULL_DIR}utext.cpp
  ${ICU_FULL_DIR}utf16collationiterator.cpp
  ${ICU_FULL_DIR}utf8collationiterator.cpp
  ${ICU_FULL_DIR}util.cpp
  ${ICU_FULL_DIR}util_props.cpp
  ${ICU_FULL_DIR}utrans.cpp
  ${ICU_FULL_DIR}utrie.cpp
  ${ICU_FULL_DIR}utrie2.cpp
  ${ICU_FULL_DIR}utrie2_builder.cpp
  ${ICU_FULL_DIR}uts46.cpp
  ${ICU_FULL_DIR}uvector.cpp
  ${ICU_FULL_DIR}uvectr32.cpp
  ${ICU_FULL_DIR}uvectr64.cpp
  ${ICU_FULL_DIR}valueformatter.cpp
  ${ICU_FULL_DIR}visibledigits.cpp
  ${ICU_FULL_DIR}vtzone.cpp
  ${ICU_FULL_DIR}vzone.cpp
  ${ICU_FULL_DIR}windtfmt.cpp
  ${ICU_FULL_DIR}winnmfmt.cpp
  ${ICU_FULL_DIR}wintzimpl.cpp
  ${ICU_FULL_DIR}zonemeta.cpp
  ${ICU_FULL_DIR}zrule.cpp
  ${ICU_FULL_DIR}ztrans.cpp
)

set(ICU_INCLUDE_DIR
  ${CMAKE_CURRENT_SOURCE_DIR}/icu
  ${CMAKE_CURRENT_SOURCE_DIR}/icu/unicode
)

#configure_file(cmakeconfig.h.cmake ${CMAKE_CURRENT_SOURCE_DIR}/cmakeconfig.h)
add_definitions(-DBUILDING_WTF)
add_definitions(-DSTATICALLY_LINKED_WITH_WTF)

if (EMSCRIPTEN)
  #find_package(ICU REQUIRED COMPONENTS I18N UC REQUIRED)
  add_library(${WTF_LIBRARY_NAME} ${ICU_SOURCES} ${WTF_SOURCES})
  #target_link_libraries(${WTF_LIBRARY_NAME}
  #  ${ICU_UC_LIBRARIES}
  #  ${ICU_I18N_LIBRARIES}
  #)
else ()
  #find_package(ICU) # REQUIRED)
  add_library(${WTF_LIBRARY_NAME} ${ICU_SOURCES} ${WTF_SOURCES})
endif ()

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
  ${WTF_DIR}
  ${WTF_DIR}/wtf
  ${WTF_DIR}/wtf/dtoa
  ${WTF_DIR}/wtf/persistence
  ${WTF_DIR}/wtf/text
  ${WTF_DIR}/wtf/text/icu
  ${WTF_DIR}/wtf/threads
  ${WTF_DIR}/wtf/unicode
  ${WTF_DIR}/wtf/icu
)

#message(FATAL_ERROR ${CMAKE_CXX_FLAGS})

target_include_directories(${WTF_LIBRARY_NAME} PUBLIC
  ${CMAKE_CURRENT_SOURCE_DIR}
  ${WTF_DIR}
  ${WTF_PRIVATE_INCLUDE_DIRECTORIES}
  ${WTF_DIR}/global_headers
  ${ICU_INCLUDE_DIR}
)

#target_include_directories(${WTF_LIBRARY_NAME} SYSTEM PRIVATE
#  ${CMAKE_CURRENT_SOURCE_DIR}
#  ${CMAKE_CURRENT_SOURCE_DIR}/wtf
#  ${CMAKE_CURRENT_SOURCE_DIR}/global_headers
#)

target_link_libraries(${WTF_LIBRARY_NAME} ${WTF_LIBRARIES})

# http://userguide.icu-project.org/howtouseicu#TOC-C-With-Your-Own-Build-System
set(ICU_PUBLIC_DEFINES
    "U_ENABLE_DYLOAD=0"
    "U_STATIC_IMPLEMENTATION"
    "ICU_UTIL_DATA_IMPL=ICU_UTIL_DATA_STATIC"
)

set(ICU_PRIVATE_DEFINES
    "HAVE_DLOPEN=0"
    "UCONFIG_ONLY_HTML_CONVERSION=1"
    "U_CHARSET_IS_UTF8=1"
    # custom
    "HAVE_DLFCN_H=0"
)

if (WIN32)
    list(APPEND ICU_PUBLIC_DEFINES
        "UCHAR_TYPE=wchar_t"
    )
else ()
    list(APPEND ICU_PUBLIC_DEFINES
        "UCHAR_TYPE=uint16_t"
    )
endif ()

target_compile_definitions(${WTF_LIBRARY_NAME} PUBLIC
  ${ICU_PUBLIC_DEFINES}
  U_STATIC_IMPLEMENTATION
  U_COMMON_IMPLEMENTATION
  U_I18N_IMPLEMENTATION
  U_ENABLE_DYLOAD=0
  LIB_ICU_I18N_STATIC
  ICU_UTIL_DATA_IMPL=ICU_UTIL_DATA_STATIC
  U_CHARSET_IS_UTF8=1
  U_NO_DEFAULT_INCLUDE_UTF_HEADERS=0
  #U_ATTRIBUTE_DEPRECATED
  #U_NO_DEFAULT_INCLUDE_UTF_HEADERS
)

target_compile_definitions(${WTF_LIBRARY_NAME} PRIVATE
  ${ICU_PRIVATE_DEFINES}
)

#if(EMSCRIPTEN)
#  # Tell ICU that we are a 32 bit platform, otherwise,
#  # double-conversion-utils.h doesn't know how to operate.
#  set(ICU_DEFINES "${ICU_DEFINES} -D__i386__=1")
#endif()

#install(FILES ${WTF_HEADERS} DESTINATION include/wtf)
#install(FILES ${WTF_TEXT_HEADERS} DESTINATION include/wtf/text)
#install(FILES ${WTF_UNICODE_HEADERS} DESTINATION include/wtf/unicode)
#install(FILES ${WTF_UNICODE_ICU_HEADERS} DESTINATION include/wtf/unicode/icu)
#install(TARGETS ${WTF_LIBRARY_NAME} DESTINATION lib)
