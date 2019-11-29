# cmake utils

#
# TODO: use set_cpd_var with CUSTOM_PREFIX to prevent variable collisions
#
#macro(set_cpd_var NAME VALUE)
#  set(options ${NAME} ${VALUE})
#endmacro(set_cpd_var)

#
# USAGE:
#  run_cmake_platform_detection()
#
macro(run_cmake_platform_detection)
  set(TARGET_PLATFORM_DETECTED FALSE)
  #
  set(PLATFORM_MOBILE FALSE)
  set(PLATFORM_WEB FALSE)
  set(PLATFORM_DESKTOP FALSE)
  #
  set(TARGET_EMSCRIPTEN FALSE)
  set(TARGET_LINUX FALSE)
  set(TARGET_WINDOWS FALSE)
  set(TARGET_MACOS FALSE)
  set(TARGET_IOS FALSE)
  set(TARGET_ANDROID FALSE)
  # TODO set(TARGET_RPI FALSE)
  if(${CMAKE_SYSTEM_NAME} STREQUAL "Emscripten" OR EMSCRIPTEN OR FORCE_AS_EMSCRIPTEN_PLATFORM)
    # TODO set(OS_UNKNOWN TRUE)
    set(TARGET_PLATFORM_DETECTED TRUE)
    set(PLATFORM_WEB TRUE)
    set(TARGET_EMSCRIPTEN TRUE)
  elseif(${CMAKE_SYSTEM_NAME} STREQUAL "Linux" OR FORCE_AS_LINUX_PLATFORM)
    # TODO set(OS_UNKNOWN TRUE)
    set(TARGET_PLATFORM_DETECTED TRUE)
    set(PLATFORM_DESKTOP TRUE)
    set(TARGET_LINUX TRUE)
  elseif(CMAKE_SYSTEM_NAME MATCHES "^k?P?NaCl*$") # PNaCl, NaCl32, NaCl64, etc.
    # TODO set(OS_UNKNOWN TRUE)
    set(TARGET_PLATFORM_DETECTED TRUE)
    set(PLATFORM_WEB TRUE)
    set(TARGET_NACL TRUE)
  elseif(${CMAKE_SYSTEM_NAME} STREQUAL "Windows" OR FORCE_AS_WINDOWS_PLATFORM)
    set(OS_WIN TRUE)
    set(TARGET_PLATFORM_DETECTED TRUE)
    set(PLATFORM_DESKTOP TRUE)
    set(TARGET_WINDOWS TRUE)
  elseif(${CMAKE_SYSTEM_NAME} STREQUAL "Android" OR FORCE_AS_ANDROID_PLATFORM)
    set(OS_ANDROID TRUE)
    set(TARGET_PLATFORM_DETECTED TRUE)
    set(PLATFORM_MOBILE TRUE)
    set(TARGET_ANDROID TRUE)
  elseif(${CMAKE_SYSTEM_NAME} STREQUAL "iOS" OR FORCE_AS_ANDROID_PLATFORM)
    set(OS_IOS TRUE)
    set(TARGET_PLATFORM_DETECTED TRUE)
    set(PLATFORM_MOBILE TRUE)
    set(TARGET_IOS TRUE)
  elseif(CMAKE_SYSTEM_NAME MATCHES "^k?FreeBSD$") # FreeBSD, kFreeBSD, etc.
    set(OS_FREEBSD TRUE)
    set(TARGET_PLATFORM_DETECTED TRUE)
    set(PLATFORM_DESKTOP TRUE)
    set(TARGET_LINUX TRUE)
  elseif(CMAKE_SYSTEM_NAME MATCHES "^OpenBSD$")
    set(OS_OPENBSD TRUE)
    set(TARGET_PLATFORM_DETECTED TRUE)
    set(PLATFORM_DESKTOP TRUE)
    set(TARGET_LINUX TRUE)
  elseif(${CMAKE_SYSTEM_NAME} STREQUAL "MacOS" OR ${CMAKE_SYSTEM_NAME} STREQUAL "Darwin" OR FORCE_AS_ANDROID_PLATFORM)
    set(OS_MAC TRUE)
    set(TARGET_PLATFORM_DETECTED TRUE)
    set(PLATFORM_DESKTOP TRUE)
    set(TARGET_MACOS TRUE)
  else()
    set(TARGET_PLATFORM_DETECTED FALSE)
    set(TARGET_UNKNOWN TRUE)
    message(FATAL_ERROR "(run_cmake_platform_detection) platform=${CMAKE_SYSTEM_NAME} not supported")
  endif()
endmacro(run_cmake_platform_detection)

#
# USAGE:
#  restrict_supported_platforms(LINUX EMSCRIPTEN WINDOWS)
#
# NOTE: requires before usage run_cmake_platform_detection()
#
macro(restrict_supported_platforms)
  set(options TARGETS WINDOWS LINUX EMSCRIPTEN)
  cmake_parse_arguments(ARGUMENTS "${options}" "${oneValueArgs}" "${multiValueArgs}" ${ARGN} )

  if(NOT TARGET_PLATFORM_DETECTED)
    message(FATAL_ERROR "platform=${CMAKE_SYSTEM_NAME} not supported. Maybe you forgot to use run_cmake_platform_detection?")
  endif()

  if(ARGUMENTS_WINDOWS AND TARGET_WINDOWS)
    # skip
  elseif(ARGUMENTS_LINUX AND TARGET_LINUX)
    # skip
  elseif(ARGUMENTS_EMSCRIPTEN AND TARGET_EMSCRIPTEN)
    # skip
  else()
    message(FATAL_ERROR "(restrict_supported_platforms) platform=${CMAKE_SYSTEM_NAME} not supported.")
  endif()
endmacro(restrict_supported_platforms)
