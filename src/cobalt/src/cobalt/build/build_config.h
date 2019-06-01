// Copyright 2017 The Cobalt Authors. All Rights Reserved.
//
// Licensed under the Apache License, Version 2.0 (the "License");
// you may not use this file except in compliance with the License.
// You may obtain a copy of the License at
//
//     http://www.apache.org/licenses/LICENSE-2.0
//
// Unless required by applicable law or agreed to in writing, software
// distributed under the License is distributed on an "AS IS" BASIS,
// WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
// See the License for the specific language governing permissions and
// limitations under the License.

#ifndef COBALT_BUILD_BUILD_CONFIG_H_
#define COBALT_BUILD_BUILD_CONFIG_H_

#if defined(COBALT_MEDIA_BUFFER_INITIAL_CAPACITY) && \
    COBALT_MEDIA_BUFFER_INITIAL_CAPACITY < 0
#error cobalt_media_buffer_initial_capacity has to be greater than or equal to 0
#endif  // defined(COBALT_MEDIA_BUFFER_INITIAL_CAPACITY) &&
        // COBALT_MEDIA_BUFFER_INITIAL_CAPACITY < 0

#if defined(COBALT_MEDIA_BUFFER_ALLOCATION_UNIT) && \
    COBALT_MEDIA_BUFFER_ALLOCATION_UNIT < 0
#error cobalt_media_buffer_allocation_unit has to be greater than or equal to 0
#endif  // defined(COBALT_MEDIA_BUFFER_ALLOCATION_UNIT) &&
        // COBALT_MEDIA_BUFFER_ALLOCATION_UNIT < 0

#if defined(COBALT_MEDIA_BUFFER_ALIGNMENT) && COBALT_MEDIA_BUFFER_ALIGNMENT < 0
#error "cobalt_media_buffer_alignment has to be greater than or equal to 0."
#endif  // defined(COBALT_MEDIA_BUFFER_ALIGNMENT) &&
        // COBALT_MEDIA_BUFFER_ALIGNMENT < 0

#if defined(COBALT_MEDIA_BUFFER_PADDING) && COBALT_MEDIA_BUFFER_PADDING < 0
#error "cobalt_media_buffer_padding has to be greater than or equal to 0."
#endif  // defined(COBALT_MEDIA_BUFFER_PADDING) && COBALT_MEDIA_BUFFER_PADDING <
        // 0

#if defined(COBALT_MEDIA_BUFFER_PROGRESSIVE_BUDGET) && \
    COBALT_MEDIA_BUFFER_PROGRESSIVE_BUDGET < 8 * 1024 * 1024
#error cobalt_media_buffer_progressive_budget has to be greater than or equal \
           to 8 MB.
#endif  // defined(COBALT_MEDIA_BUFFER_PROGRESSIVE_BUDGET) &&
        // COBALT_MEDIA_BUFFER_PROGRESSIVE_BUDGET < 0

#if defined(COBALT_MEDIA_BUFFER_NON_VIDEO_BUDGET) && \
    COBALT_MEDIA_BUFFER_NON_VIDEO_BUDGET <= 0
#error "cobalt_media_buffer_non_video_budget has to be greater than 0."
#endif  // defined(COBALT_MEDIA_BUFFER_NON_VIDEO_BUDGET) &&
        // COBALT_MEDIA_BUFFER_NON_VIDEO_BUDGET < 0

#if defined(COBALT_MEDIA_BUFFER_VIDEO_BUDGET_1080P) && \
    COBALT_MEDIA_BUFFER_VIDEO_BUDGET_1080P <= 0
#error "cobalt_media_buffer_video_budget_1080p has to be greater than 0."
#endif  // defined(COBALT_MEDIA_BUFFER_VIDEO_BUDGET_1080P) &&
        // COBALT_MEDIA_BUFFER_VIDEO_BUDGET_1080P < 0

#if defined(COBALT_MEDIA_BUFFER_VIDEO_BUDGET_4K) &&    \
    defined(COBALT_MEDIA_BUFFER_VIDEO_BUDGET_1080P) && \
    COBALT_MEDIA_BUFFER_VIDEO_BUDGET_4K <              \
        COBALT_MEDIA_BUFFER_VIDEO_BUDGET_1080P
#error cobalt_media_buffer_video_budget_4k has to be greater than or equal to \
           cobalt_media_buffer_video_budget_1080p.
#endif  // defined(COBALT_MEDIA_BUFFER_VIDEO_BUDGET_4K) &&
        // defined(COBALT_MEDIA_BUFFER_VIDEO_BUDGET_1080P) &&
        // COBALT_MEDIA_BUFFER_VIDEO_BUDGET_4K <
        // COBALT_MEDIA_BUFFER_VIDEO_BUDGET_1080P

#if COBALT_MEDIA_BUFFER_MAX_CAPACITY_1080P != 0
#if COBALT_MEDIA_BUFFER_MAX_CAPACITY_1080P <  \
    (COBALT_MEDIA_BUFFER_VIDEO_BUDGET_1080P + \
     COBALT_MEDIA_BUFFER_NON_VIDEO_BUDGET)
#error cobalt_media_buffer_max_capacity_1080p has to be greater than the sum \
           of cobalt_media_buffer_video_budget_1080p + \
           cobalt_media_buffer_non_video_budget
#endif  // COBALT_MEDIA_BUFFER_MAX_CAPACITY_1080P <
        // (COBALT_MEDIA_BUFFER_VIDEO_BUDGET_1080P +
        // COBALT_MEDIA_BUFFER_NON_VIDEO_BUDGET)
#if COBALT_MEDIA_BUFFER_MAX_CAPACITY_1080P < \
    COBALT_MEDIA_BUFFER_INITIAL_CAPACITY
#error cobalt_media_buffer_max_capacity_1080p has to be greater than \
           cobalt_media_buffer_initial_capacity
#endif  // COBALT_MEDIA_BUFFER_MAX_CAPACITY_1080P <
        // COBALT_MEDIA_BUFFER_INITIAL_CAPACITY
#endif  // COBALT_MEDIA_BUFFER_MAX_CAPACITY_1080P != 0

#if COBALT_MEDIA_BUFFER_MAX_CAPACITY_4K != 0
#if COBALT_MEDIA_BUFFER_MAX_CAPACITY_4K <  \
    (COBALT_MEDIA_BUFFER_VIDEO_BUDGET_4K + \
     COBALT_MEDIA_BUFFER_NON_VIDEO_BUDGET)
#error cobalt_media_buffer_max_capacity_4k has to be greater than the sum of \
           cobalt_media_buffer_video_budget_4k + \
           cobalt_media_buffer_non_video_budget
#endif  // COBALT_MEDIA_BUFFER_MAX_CAPACITY_4K <
        // (COBALT_MEDIA_BUFFER_VIDEO_BUDGET_4K +
        // COBALT_MEDIA_BUFFER_NON_VIDEO_BUDGET)
#if COBALT_MEDIA_BUFFER_MAX_CAPACITY_4K < COBALT_MEDIA_BUFFER_INITIAL_CAPACITY
#error cobalt_media_buffer_max_capacity_4k has to be greater than \
           cobalt_media_buffer_initial_capacity
#endif  // COBALT_MEDIA_BUFFER_MAX_CAPACITY_4K <
        // COBALT_MEDIA_BUFFER_INITIAL_CAPACITY
#endif  // COBALT_MEDIA_BUFFER_MAX_CAPACITY_4K != 0

/// ================================== ///


// TODO
#ifndef SK_CRASH
#define SK_CRASH() \
  printf("called SK_CRASH");
#endif

// TODO: remove custom debug messages than wasm port will be finalized
#if defined(PORT_OWN_DLOG)
#define P_LOG(...) \
  printf("This message is in %s on line %d\n",  __FILE__, __LINE__); \
  printf((__VA_ARGS__));
#else
#define P_LOG(...) \
  (void)(0);
#endif

// TODO: move wasm helpers to separate file
// (also than can use OS_EMSCRIPTEN)
#if defined(__EMSCRIPTEN__)

/// \note rquires "emscripten/emscripten.h"
/// \note The stack trace is not available at least on IE10 and Safari 6.
/// \note build with -s DEMANGLE_SUPPORT=1 and -O1
/// \note stackTrace() tries to demangle C++ function names
/// \see https://emscripten.org/docs/porting/Debugging.html#manual-print-debugging
/// \see emscripten_get_callstack, stackTrace, emscripten_run_script_string, EM_ASM
/// \see https://github.com/lolengine/lol/blob/master/src/base/assert.cpp#L32
/// \see http://webassemblycode.com/using-browsers-debug-webassembly/
#define HTML5_STACKTRACE() \
  printf("This message is in %s:%d:%s\n",  __FILE__, __LINE__, __func__); \
  printf("Callstack:\n%s", emscripten_run_script_string("stackTrace();")); \
  abort();

#define HTML5_STACKTRACE_IF(x) \
  if ((x)) { \
    HTML5_STACKTRACE(); \
  }

#define HTML5_STACKTRACE_WRAP() \
  []() { \
    HTML5_STACKTRACE(); \
    return ""; \
  }()

// wraps std::function into async call (emscripten only)
// see https://github.com/chadaustin/Web-Benchmarks/blob/master/embind_calls/bench.cpp#L90
#define DECLARE_HTML5_YIELD_HELPER() \
static void emscripten_yield_call(std::function<void()> f, const int ms = 500) { \
    P_LOG("emscripten_yield_call waitable\n"); \
    auto p = new std::function<void()>(f); \
    emscripten_async_call([](void* p) { \
        P_LOG("emscripten_async_call waitable\n"); \
        auto q = reinterpret_cast<std::function<void()>*>(p); \
        (*q)(); \
        delete q; \
    }, p, ms); \
}

#define HTML5_YIELD_HELPER_1(x) \
  emscripten_yield_call((x));

#define HTML5_YIELD_HELPER_2(x, y) \
  emscripten_yield_call((x), (y));

// see https://github.com/h-s-c/libKD/blob/master/source/kd_threads.c#L861
// see https://emscripten.org/docs/api_reference/emscripten.h.html?highlight=emscripten_sleep#c.emscripten_sleep
// emscripten_sleep - Sleep for ms milliseconds. blocks all other operations while it runs
// emscripten_sleep_with_yield - If you do want things to happen while sleeping
#ifdef HAS_ASYNC
#define HTML5_ASYNC_SLEEP(x) \
  printf("This message is in %s:%d:%s\n",  __FILE__, __LINE__, __func__); \
  printf("called emscripten_sleep_with_yield(%lld)\n", (x)); \
  emscripten_sleep_with_yield((x)); \
  printf("finished emscripten_sleep_with_yield(%lld)\n", (x));
#else
#define HTML5_ASYNC_SLEEP(x) \
  printf("This message is in %s on line %d\n",  __FILE__, __LINE__); \
  printf("called emscripten_sleep_with_yield(%lld)\n", (x)); \
  printf("emscripten_sleep_with_yield requires emterpreter or https://emscripten.org/docs/porting/asyncify.html"); \
  HTML5_STACKTRACE(); \
  printf("finished emscripten_sleep_with_yield(%lld)\n", (x));
#endif

#endif

//#if defined(STARBOARD)
//#define OS_STARBOARD 1

// A set of macros to use for platform detection.
#if defined(__native_client__)
// __native_client__ must be first, so that other OS_ defines are not set.
#define OS_NACL 1
// OS_NACL comes in two sandboxing technology flavors, SFI or Non-SFI.
// PNaCl toolchain defines __native_client_nonsfi__ macro in Non-SFI build
// mode, while it does not in SFI build mode.
#if defined(__native_client_nonsfi__)
#define OS_NACL_NONSFI
#else
#define OS_NACL_SFI
#endif
#elif defined(ANDROID)
#define OS_ANDROID 1
#elif defined(__APPLE__)
// only include TargetConditions after testing ANDROID as some android builds
// on mac don't have this header available and it's not needed unless the target
// is really mac/ios.
#include <TargetConditionals.h>
#define OS_MACOSX 1
#if defined(TARGET_OS_IPHONE) && TARGET_OS_IPHONE
#define OS_IOS 1
#endif  // defined(TARGET_OS_IPHONE) && TARGET_OS_IPHONE
#elif defined(__linux__)
#define OS_LINUX 1
// include a system header to pull in features.h for glibc/uclibc macros.
#include <unistd.h>
#if defined(__GLIBC__) && !defined(__UCLIBC__)
// we really are using glibc, not uClibc pretending to be glibc
#define LIBC_GLIBC 1
#endif
#elif defined(_WIN32)
#define OS_WIN 1
#elif defined(__Fuchsia__)
#define OS_FUCHSIA 1
#elif defined(__FreeBSD__)
#define OS_FREEBSD 1
#elif defined(__NetBSD__)
#define OS_NETBSD 1
#elif defined(__OpenBSD__)
#define OS_OPENBSD 1
#elif defined(__sun)
#define OS_SOLARIS 1
#elif defined(__QNXNTO__)
#define OS_QNX 1
#elif defined(EMSCRIPTEN) || defined(__EMSCRIPTEN__)
#define OS_EMSCRIPTEN 1
// https://github.com/kwonoj/docker-pdfium-wasm/blob/master/patches/build_config.h.patch
//
// see https://github.com/google/xrtl/blob/master/xrtl/tools/target_platform/target_platform.h#L63
#if defined(__wasm32__)
#define ARCH_CPU_ARCH_WASM_32 1
#elif defined(__wasm64__)
#define ARCH_CPU_ARCH_WASM_64 1
#elif defined(__asmjs__)
#define ARCH_CPU_ARCH_ASMJS 1
#endif  // wasm/asmjs
//
#define OS_ASMJS 1
#elif defined(_AIX)
#define OS_AIX 1
#elif defined(__asmjs__)
#define OS_ASMJS
#else
#error Please add support for your platform in build/build_config.h
#endif
// NOTE: Adding a new port? Please follow
// https://chromium.googlesource.com/chromium/src/+/master/docs/new_port_policy.md

// For access to standard BSD features, use OS_BSD instead of a
// more specific macro.
#if defined(OS_FREEBSD) || defined(OS_NETBSD) || defined(OS_OPENBSD)
#define OS_BSD 1
#endif

// For access to standard POSIXish features, use OS_POSIX instead of a
// more specific macro.
#if defined(OS_AIX) || defined(OS_ANDROID) || defined(OS_ASMJS) ||    \
    defined(OS_FREEBSD) || defined(OS_LINUX) || defined(OS_MACOSX) || \
    defined(OS_NACL) || defined(OS_NETBSD) || defined(OS_OPENBSD) ||  \
    defined(OS_QNX) || defined(OS_SOLARIS) || defined(OS_EMSCRIPTEN)
#define OS_POSIX 1
#endif

// Use tcmalloc
#if (defined(OS_WIN) || defined(OS_LINUX) || defined(OS_ANDROID)) && \
    !defined(NO_TCMALLOC)
#define USE_TCMALLOC 1
#endif

// Compiler detection.
#if defined(__GNUC__)
#define COMPILER_GCC 1
#elif defined(_MSC_VER)
#define COMPILER_MSVC 1
#else
#error Please add support for your compiler in build/build_config.h
#endif

// Processor architecture detection.  For more info on what's defined, see:
//   http://msdn.microsoft.com/en-us/library/b0084kay.aspx
//   http://www.agner.org/optimize/calling_conventions.pdf
//   or with gcc, run: "echo | gcc -E -dM -"
#if defined(_M_X64) || defined(__x86_64__)
#define ARCH_CPU_X86_FAMILY 1
#define ARCH_CPU_X86_64 1
#define ARCH_CPU_64_BITS 1
#define ARCH_CPU_LITTLE_ENDIAN 1
#elif defined(EMSCRIPTEN) || defined(__EMSCRIPTEN__) || defined(OS_EMSCRIPTEN)
// https://github.com/TunSafe/TunSafe/blob/master/build_config.h#L107
#define ARCH_CPU_JS 1
//#define ARCH_CPU_X86_FAMILY 1
//#define ARCH_CPU_X86 1
#define ARCH_CPU_32_BITS 1
#define ARCH_CPU_LITTLE_ENDIAN 1
#elif defined(_M_IX86) || defined(__i386__)
#define ARCH_CPU_X86_FAMILY 1
#define ARCH_CPU_X86 1
#define ARCH_CPU_32_BITS 1
#define ARCH_CPU_LITTLE_ENDIAN 1
#elif defined(__s390x__)
#define ARCH_CPU_S390_FAMILY 1
#define ARCH_CPU_S390X 1
#define ARCH_CPU_64_BITS 1
#define ARCH_CPU_BIG_ENDIAN 1
#elif defined(__s390__)
#define ARCH_CPU_S390_FAMILY 1
#define ARCH_CPU_S390 1
#define ARCH_CPU_31_BITS 1
#define ARCH_CPU_BIG_ENDIAN 1
#elif (defined(__PPC64__) || defined(__PPC__)) && defined(__BIG_ENDIAN__)
#define ARCH_CPU_PPC64_FAMILY 1
#define ARCH_CPU_PPC64 1
#define ARCH_CPU_64_BITS 1
#define ARCH_CPU_BIG_ENDIAN 1
#elif defined(__PPC64__)
#define ARCH_CPU_PPC64_FAMILY 1
#define ARCH_CPU_PPC64 1
#define ARCH_CPU_64_BITS 1
#define ARCH_CPU_LITTLE_ENDIAN 1
#elif defined(__ARMEL__)
#define ARCH_CPU_ARM_FAMILY 1
#define ARCH_CPU_ARMEL 1
#define ARCH_CPU_32_BITS 1
#define ARCH_CPU_LITTLE_ENDIAN 1
#elif defined(__aarch64__) || defined(_M_ARM64)
#define ARCH_CPU_ARM_FAMILY 1
#define ARCH_CPU_ARM64 1
#define ARCH_CPU_64_BITS 1
#define ARCH_CPU_LITTLE_ENDIAN 1
#elif defined(__pnacl__) || defined(__asmjs__)
#define ARCH_CPU_32_BITS 1
#define ARCH_CPU_LITTLE_ENDIAN 1
#elif defined(__MIPSEL__)
#if defined(__LP64__)
#define ARCH_CPU_MIPS_FAMILY 1
#define ARCH_CPU_MIPS64EL 1
#define ARCH_CPU_64_BITS 1
#define ARCH_CPU_LITTLE_ENDIAN 1
#else
#define ARCH_CPU_MIPS_FAMILY 1
#define ARCH_CPU_MIPSEL 1
#define ARCH_CPU_32_BITS 1
#define ARCH_CPU_LITTLE_ENDIAN 1
#endif
#elif defined(__MIPSEB__)
#if defined(__LP64__)
#define ARCH_CPU_MIPS_FAMILY 1
#define ARCH_CPU_MIPS64 1
#define ARCH_CPU_64_BITS 1
#define ARCH_CPU_BIG_ENDIAN 1
#else
#define ARCH_CPU_MIPS_FAMILY 1
#define ARCH_CPU_MIPS 1
#define ARCH_CPU_32_BITS 1
#define ARCH_CPU_BIG_ENDIAN 1
#endif
#else
#error Please add support for your architecture in build/build_config.h
#endif

// Type detection for wchar_t.
#if defined(OS_WIN)
#define WCHAR_T_IS_UTF16
#elif defined(OS_FUCHSIA)
#define WCHAR_T_IS_UTF32
#elif defined(OS_POSIX) && defined(COMPILER_GCC) && defined(__WCHAR_MAX__) && \
    (__WCHAR_MAX__ == 0x7fffffff || __WCHAR_MAX__ == 0xffffffff)
#define WCHAR_T_IS_UTF32
#elif defined(OS_POSIX) && defined(COMPILER_GCC) && defined(__WCHAR_MAX__) && \
    (__WCHAR_MAX__ == 0x7fff || __WCHAR_MAX__ == 0xffff)
// On Posix, we'll detect short wchar_t, but projects aren't guaranteed to
// compile in this mode (in particular, Chrome doesn't). This is intended for
// other projects using base who manage their own dependencies and make sure
// short wchar works for them.
#define WCHAR_T_IS_UTF16
#else
#error Please add support for your compiler in build/build_config.h
#endif

#if defined(OS_ANDROID)
// The compiler thinks std::string::const_iterator and "const char*" are
// equivalent types.
#define STD_STRING_ITERATOR_IS_CHAR_POINTER
// The compiler thinks base::string16::const_iterator and "char16*" are
// equivalent types.
#define BASE_STRING16_ITERATOR_IS_CHAR16_POINTER
#endif

#endif  // COBALT_BUILD_BUILD_CONFIG_H_
