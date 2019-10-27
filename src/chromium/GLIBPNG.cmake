### --- GLIBPNG ---###

set(GLIBPNG_DIR
  ${CHROMIUM_DIR}third_party/libpng/
)

set(GLIBPNG_SOURCES
  ${GLIBPNG_DIR}png.c
  ${GLIBPNG_DIR}png.h
  ${GLIBPNG_DIR}pngconf.h
  ${GLIBPNG_DIR}pngdebug.h
  ${GLIBPNG_DIR}pngerror.c
  ${GLIBPNG_DIR}pngget.c
  ${GLIBPNG_DIR}pnginfo.h
  ${GLIBPNG_DIR}pnglibconf.h
  ${GLIBPNG_DIR}pngmem.c
  ${GLIBPNG_DIR}pngpread.c
  ${GLIBPNG_DIR}pngprefix.h
  ${GLIBPNG_DIR}pngpriv.h
  ${GLIBPNG_DIR}pngread.c
  ${GLIBPNG_DIR}pngrio.c
  ${GLIBPNG_DIR}pngrtran.c
  ${GLIBPNG_DIR}pngrutil.c
  ${GLIBPNG_DIR}pngset.c
  ${GLIBPNG_DIR}pngstruct.h
  ${GLIBPNG_DIR}pngtrans.c
  ${GLIBPNG_DIR}pngwio.c
  ${GLIBPNG_DIR}pngwrite.c
  ${GLIBPNG_DIR}pngwtran.c
  ${GLIBPNG_DIR}pngwutil.c
)

if(TARGET_EMSCRIPTEN)
  # skip
elseif(TARGET_LINUX OR TARGET_WINDOWS)
  if(CMAKE_CL_64) # if (current_cpu == "x86" || current_cpu == "x64")
  #
  else(CMAKE_CL_64)
    list(APPEND GLIBPNG_SOURCES
      ${GLIBPNG_DIR}intel/filter_sse2_intrinsics.c
      ${GLIBPNG_DIR}intel/intel_init.c
    )
    list(APPEND EXTRA_DEFINES PNG_INTEL_SSE_OPT=1)
  endif(CMAKE_CL_64)
  #find_package(ZLIB)
else()
  message(FATAL_ERROR "platform not supported")
endif()

#if (current_cpu == "x86" || current_cpu == "x64") {
#  sources += [
#    "intel/filter_sse2_intrinsics.c",
#    "intel/intel_init.c",
#  ]
#  defines += [ "PNG_INTEL_SSE_OPT=1" ]
#} else if ((current_cpu == "arm" || current_cpu == "arm64") && arm_use_neon) {
#  sources += [
#    "arm/arm_init.c",
#    "arm/filter_neon_intrinsics.c",
#    "arm/palette_neon_intrinsics.c",
#  ]
#  defines += [
#    "PNG_ARM_NEON_OPT=2",
#    "PNG_ARM_NEON_IMPLEMENTATION=1",
#  ]
#} else if (current_cpu == "mips64el" && mips_use_msa) {
#  sources += [
#    "mips/filter_msa_intrinsics.c",
#    "mips/mips_init.c",
#  ]
#}

add_library(GLIBPNG STATIC
  ${GLIBPNG_SOURCES}
)

target_link_libraries(GLIBPNG PUBLIC
  #base
  #${ZLIB_LIBRARIES}
  ${libZLIB_LIB}
  #GLIBXML
)

set_property(TARGET GLIBPNG PROPERTY CXX_STANDARD 17)

target_include_directories(GLIBPNG PRIVATE
  ${GLIBPNG_DIR}
  #${GLIBPNG_DIR}/include
  #${GLIBPNG_DIR}/src
  #${GLIBPNG_DIR}/src/src
  #${BASE_DIR}
)

#"//third_party/zlib",

target_compile_definitions(GLIBPNG PUBLIC
  # TODO https://stackoverflow.com/a/44265528/10904212
  #   chromium/third_party/libpng/pnglibconf.h:80:9:
  #warning: 'PNG_SETJMP_SUPPORTED' macro redefined [-Wmacro-redefined]
  #PNG_SETJMP_SUPPORTED=1
)

target_compile_definitions(GLIBPNG PRIVATE
  PNG_SET_OPTION_SUPPORTED=1
  #"PNG_USE_DLL",
  #PNG_NO_MODULEDEF=1
  #PNG_BUILD_DLL
  ${EXTRA_DEFINES}
)

if(NOT MSVC OR IS_CLANG_CL)
  target_compile_options(GLIBPNG PRIVATE
    -Wno-tautological-constant-out-of-range-compare
  )
else()
  # TODO
endif()
