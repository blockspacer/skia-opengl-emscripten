cmake_minimum_required(VERSION 2.8)
project(WTF)
set(WTF_LIBRARY_NAME wtf)

list(APPEND CMAKE_MODULE_PATH ${CMAKE_CURRENT_SOURCE_DIR}/cmake)

set(WTF_PARENT_DIR ${CMAKE_CURRENT_SOURCE_DIR}/third_party/blink/renderer/platform/)
set(WTF_DIR ${WTF_PARENT_DIR}wtf/)

set(BASE_PARENT_DIR ${CMAKE_CURRENT_SOURCE_DIR}/)
set(BASE_DIR ${BASE_PARENT_DIR}base/)

set(GFX_GEOMETRY_PARENT_DIR ${CMAKE_CURRENT_SOURCE_DIR}/ui/gfx/)
set(GFX_GEOMETRY_DIR ${GFX_GEOMETRY_PARENT_DIR}geometry/)

set(CC_PARENT_DIR ${CMAKE_CURRENT_SOURCE_DIR}/)
set(CC_DIR ${CC_PARENT_DIR}cc/)

set(BLINK_PLATFORM_PARENT_DIR ${CMAKE_CURRENT_SOURCE_DIR}/third_party/)
set(BLINK_PLATFORM_DIR ${BLINK_PLATFORM_PARENT_DIR}blink/renderer/platform/)

set(BORINGSSL_PARENT_DIR ${CMAKE_CURRENT_SOURCE_DIR}/third_party/)
set(BORINGSSL_DIR ${BORINGSSL_PARENT_DIR}boringssl/)

set(GCRYPTO_PARENT_DIR ${CMAKE_CURRENT_SOURCE_DIR}/)
set(GCRYPTO_DIR ${GCRYPTO_PARENT_DIR}crypto/)

set(GNET_PARENT_DIR ${CMAKE_CURRENT_SOURCE_DIR}/)
set(GNET_DIR ${GNET_PARENT_DIR}net/)

set(GURL_PARENT_DIR ${CMAKE_CURRENT_SOURCE_DIR}/)
set(GURL_DIR ${GURL_PARENT_DIR}url/)

set(GIPC_PARENT_DIR ${CMAKE_CURRENT_SOURCE_DIR}/)
set(GIPC_DIR ${GIPC_PARENT_DIR}ipc/)

set(GPU_COMMAND_BUFFER_DIR_PARENT_DIR ${CMAKE_CURRENT_SOURCE_DIR}/gpu/)
set(GPU_COMMAND_BUFFER_DIR ${GPU_COMMAND_BUFFER_DIR_PARENT_DIR}command_buffer/)

set(3RDPARTY_DIR ${CMAKE_CURRENT_SOURCE_DIR}/)

# Location of build tools dir (required for generating "generated_build_date.h "features.h" and "debugging_flags.h")
SET(BUILD_TOOLS_DIR "${CMAKE_CURRENT_SOURCE_DIR}/build")
#message(FATAL_ERROR ${BUILD_TOOLS_DIR})

include(configure_buildflags.cmake)

option(SINGLE_THREADED "Enable single threaded mode" OFF)

include(modp_b64.cmake) # TODO: link with modp_b64

#configure_file(cmakeconfig.h.cmake ${CMAKE_CURRENT_SOURCE_DIR}/cmakeconfig.h)
add_definitions(-DBUILDING_WTF)
add_definitions(-DSTATICALLY_LINKED_WITH_WTF)

set(WTF_COMMON_DEFINITIONS
  # see in src/chromium/build/build_config.h
  # USE_TCMALLOC=0
  # set in src/chromium/allocator_buildflags.h.inc
  # USE_NEW_TCMALLOC=1
)

if(EMSCRIPTEN)
  list(APPEND WTF_COMMON_DEFINITIONS
    # see src/chromium/build/build_config.h
    NO_TCMALLOC=1
  )

  set(WTF_EMCC_DEFINITIONS
    # see build/build_config.h
    #OS_ASMJS=1
    # see build/build_config.h
    __asmjs__
    # see build/build_config.h
    #OS_POSIX=1
    # DYNAMIC_ANNOTATIONS useful when implementing condition variables such as CondVar,
    # using conditional critical sections (Await/LockWhen) and when constructing
    # user-defined synchronization mechanisms.
    DYNAMIC_ANNOTATIONS_ENABLED=0
    WTF_USE_DYNAMIC_ANNOTATIONS=0
    # see src/chromium/build/build_config.h
    # NO_TCMALLOC=1
    DISABLE_NACL
    # POSIX_AVOID_MMAP #BUILDFLAG
    #USE_EXPERIMENTAL_ALLOCATOR_SHIM=0
  )
else()
  list(APPEND WTF_COMMON_DEFINITIONS
    # see in src/chromium/build/build_config.h
    # USE_TCMALLOC=1
    # see in src/chromium/allocator_buildflags.h.inc
    # USE_NEW_TCMALLOC=1
  )

  set(WTF_EMCC_DEFINITIONS "")
endif ()

# BORINGSSL
include(BORINGSSL.cmake)

# icu
include(icu.cmake)

if (NOT EMSCRIPTEN)
  # libevent
  include(libevent.cmake)

  # tcmalloc
  include(tcmalloc.cmake)
endif (NOT EMSCRIPTEN)

# dynamic_annotations
include(dynamic_annotations.cmake)

# GURL: URL parsing.
# Depends on : icu (libicuuc), base.
include(GURL.cmake)

# GCRYPTO: Cryptographic helper library.
# Depends on : base, libnss or BoringSSL
#
# TODO: use nss, not BoringSSL
# as in https://github.com/Tarnyko/chromium-lite/blob/master/README
#
include(GCRYPTO.cmake)

# base: General-purpose toolkit
# Depends on : libevent, libicui18n
#
# NOTE: remove fork of libicui
# as in https://github.com/Tarnyko/chromium-lite/blob/master/README#L76
#
include(base.cmake)

# GNET: Net helper library.
# Depends on : base, url, crypto, sql,
# protobuf, libnss, libnspr, open-vcdiff
# NOTE: uses protobuf-compiler
# NOTE: "third_party/nss". https://github.com/Tarnyko/chromium-lite/blob/master/README#L136
include(GNET.cmake)

# GIPC:  Mojo IPC and bindings library.
# Depends on : base, url, crypto, gin, net
include(MOJO.cmake)

# GIPC:  IPC helper library.
# Depends on : base, mojo
include(GIPC.cmake)

# GFX_GEOMETRY
include(GFX_GEOMETRY.cmake)

# GPU_COMMAND_BUFFER: GPU command helper library.
# Depends on : base
include(GPU_COMMAND_BUFFER.cmake)

# CC
#include(CC.cmake)

# BLINK_PLATFORM
#include(BLINK_PLATFORM.cmake)

# WTF
include(WTF.cmake)

#install(FILES ${WTF_HEADERS} DESTINATION include/wtf)
#install(FILES ${WTF_TEXT_HEADERS} DESTINATION include/wtf/text)
#install(FILES ${WTF_UNICODE_HEADERS} DESTINATION include/wtf/unicode)
#install(FILES ${WTF_UNICODE_ICU_HEADERS} DESTINATION include/wtf/unicode/icu)
#install(TARGETS ${WTF_LIBRARY_NAME} DESTINATION lib)
