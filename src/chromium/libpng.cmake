### --- libpng ---###

set(libpng_DIR
  "third_party/libpng/"
)

set(libpng_SOURCES
  ${libpng_DIR}png.c
  #${libpng_DIR}png.h",
  #${libpng_DIR}pngconf.h",
  #${libpng_DIR}pngdebug.h",
  ${libpng_DIR}pngerror.c
  ${libpng_DIR}pngget.c
  #${libpng_DIR}pnginfo.h",
  #${libpng_DIR}pnglibconf.h",
  ${libpng_DIR}pngmem.c
  ${libpng_DIR}pngpread.c
  #${libpng_DIR}pngprefix.h",
  #${libpng_DIR}pngpriv.h",
  ${libpng_DIR}pngread.c
  ${libpng_DIR}pngrio.c
  ${libpng_DIR}pngrtran.c
  ${libpng_DIR}pngrutil.c
  ${libpng_DIR}pngset.c
  #${libpng_DIR}pngstruct.h",
  ${libpng_DIR}pngtrans.c
  ${libpng_DIR}pngwio.c
  ${libpng_DIR}pngwrite.c
  ${libpng_DIR}pngwtran.c
  ${libpng_DIR}pngwutil.c
)

# if (current_cpu == "x86" || current_cpu == "x64")
if(${CMAKE_SYSTEM_NAME} STREQUAL "Linux")
  list(APPEND libpng_SOURCES
    ${libpng_DIR}intel/filter_sse2_intrinsics.c
    ${libpng_DIR}intel/intel_init.c
  )
  set(PNG_INTEL_SSE_OPT_DEFINE PNG_INTEL_SSE_OPT=1)
  #find_package(ZLIB)
endif()

add_library(libpng STATIC
  ${libpng_SOURCES}
)

target_link_libraries(libpng PUBLIC
  #${BASE_LIBRARIES}
  #base
  #${ZLIB_LIBRARIES}
  zlib
)

set_property(TARGET libpng PROPERTY CXX_STANDARD 17)

target_include_directories(libpng PRIVATE
  ${libpng_DIR}
  #${libpng_DIR}/include
  #${libpng_DIR}/src
  #${libpng_DIR}/src/src
  #${BASE_DIR}
)

#"//third_party/zlib",

target_compile_definitions(libpng PRIVATE
  PNG_SET_OPTION_SUPPORTED=1
  #"PNG_USE_DLL",
  #"PNG_NO_MODULEDEF",
  ${PNG_INTEL_SSE_OPT_DEFINE}
)
