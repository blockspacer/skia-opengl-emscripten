### --- libjpeg ---###

set(libjpeg_DIR
  "third_party/libjpeg/"
)

set(libjpeg_SOURCES
  ${libjpeg_DIR}jcapimin.c
  ${libjpeg_DIR}jcapistd.c
  ${libjpeg_DIR}jccoefct.c
  ${libjpeg_DIR}jccolor.c
  ${libjpeg_DIR}jcdctmgr.c
  ${libjpeg_DIR}jchuff.c
  #${libjpeg_DIR}jchuff.h",
  ${libjpeg_DIR}jcinit.c
  ${libjpeg_DIR}jcmainct.c
  ${libjpeg_DIR}jcmarker.c
  ${libjpeg_DIR}jcmaster.c
  ${libjpeg_DIR}jcomapi.c
  #${libjpeg_DIR}jconfig.h",
  ${libjpeg_DIR}jcparam.c
  ${libjpeg_DIR}jcphuff.c
  ${libjpeg_DIR}jcprepct.c
  ${libjpeg_DIR}jcsample.c
  ${libjpeg_DIR}jdapimin.c
  ${libjpeg_DIR}jdapistd.c
  ${libjpeg_DIR}jdatadst.c
  ${libjpeg_DIR}jdatasrc.c
  ${libjpeg_DIR}jdcoefct.c
  ${libjpeg_DIR}jdcolor.c
  #${libjpeg_DIR}jdct.h",
  ${libjpeg_DIR}jddctmgr.c
  ${libjpeg_DIR}jdhuff.c
  #${libjpeg_DIR}jdhuff.h",
  ${libjpeg_DIR}jdinput.c
  ${libjpeg_DIR}jdmainct.c
  ${libjpeg_DIR}jdmarker.c
  ${libjpeg_DIR}jdmaster.c
  ${libjpeg_DIR}jdmerge.c
  ${libjpeg_DIR}jdphuff.c
  ${libjpeg_DIR}jdpostct.c
  ${libjpeg_DIR}jdsample.c
  ${libjpeg_DIR}jerror.c
  #${libjpeg_DIR}jerror.h",
  ${libjpeg_DIR}jfdctflt.c
  ${libjpeg_DIR}jfdctfst.c
  ${libjpeg_DIR}jfdctint.c
  ${libjpeg_DIR}jidctflt.c
  ${libjpeg_DIR}jidctfst.c
  ${libjpeg_DIR}jidctint.c
  #${libjpeg_DIR}jinclude.h",
  ${libjpeg_DIR}jmemmgr.c
  ${libjpeg_DIR}jmemnobs.c
  #${libjpeg_DIR}jmemsys.h",
  #${libjpeg_DIR}jmorecfg.h",
  #${libjpeg_DIR}jpegint.h",
  #${libjpeg_DIR}jpeglib.h",
  ${libjpeg_DIR}jquant1.c
  ${libjpeg_DIR}jquant2.c
  ${libjpeg_DIR}jutils.c
  #${libjpeg_DIR}jversion.h",
)

add_library(libjpeg STATIC
  ${libjpeg_SOURCES}
)

#if(${CMAKE_SYSTEM_NAME} STREQUAL "Linux")
#  find_package(ZLIB)
#endif()

target_link_libraries(libjpeg PUBLIC
  #${BASE_LIBRARIES}
  #base
  #${ZLIB_LIBRARIES}
  zlib
  libxml
  freetype
  # sudo apt-get install libjpeg-dev
)

set_property(TARGET libjpeg PROPERTY CXX_STANDARD 17)

target_include_directories(libjpeg PRIVATE
  ${libjpeg_DIR}
  #${libjpeg_DIR}/include
  #${libjpeg_DIR}/src
  #${libjpeg_DIR}/src/src
  #${BASE_DIR}
)

#deps = [
#  "//build/config/freetype",
#  "//third_party/libxml",
#  "//third_party/zlib",
#]

target_compile_definitions(libjpeg PRIVATE
  NO_GETENV=1  # getenv() is not thread-safe.
)
