### --- GLIBJPEG ---###

set(GLIBJPEG_DIR
  third_party/libjpeg/
)

set(GLIBJPEG_SOURCES
  ${GLIBJPEG_DIR}jcapimin.c
  ${GLIBJPEG_DIR}jcapistd.c
  ${GLIBJPEG_DIR}jccoefct.c
  ${GLIBJPEG_DIR}jccolor.c
  ${GLIBJPEG_DIR}jcdctmgr.c
  ${GLIBJPEG_DIR}jchuff.c
  #${GLIBJPEG_DIR}jchuff.h",
  ${GLIBJPEG_DIR}jcinit.c
  ${GLIBJPEG_DIR}jcmainct.c
  ${GLIBJPEG_DIR}jcmarker.c
  ${GLIBJPEG_DIR}jcmaster.c
  ${GLIBJPEG_DIR}jcomapi.c
  #${GLIBJPEG_DIR}jconfig.h",
  ${GLIBJPEG_DIR}jcparam.c
  ${GLIBJPEG_DIR}jcphuff.c
  ${GLIBJPEG_DIR}jcprepct.c
  ${GLIBJPEG_DIR}jcsample.c
  ${GLIBJPEG_DIR}jdapimin.c
  ${GLIBJPEG_DIR}jdapistd.c
  ${GLIBJPEG_DIR}jdatadst.c
  ${GLIBJPEG_DIR}jdatasrc.c
  ${GLIBJPEG_DIR}jdcoefct.c
  ${GLIBJPEG_DIR}jdcolor.c
  #${GLIBJPEG_DIR}jdct.h",
  ${GLIBJPEG_DIR}jddctmgr.c
  ${GLIBJPEG_DIR}jdhuff.c
  #${GLIBJPEG_DIR}jdhuff.h",
  ${GLIBJPEG_DIR}jdinput.c
  ${GLIBJPEG_DIR}jdmainct.c
  ${GLIBJPEG_DIR}jdmarker.c
  ${GLIBJPEG_DIR}jdmaster.c
  ${GLIBJPEG_DIR}jdmerge.c
  ${GLIBJPEG_DIR}jdphuff.c
  ${GLIBJPEG_DIR}jdpostct.c
  ${GLIBJPEG_DIR}jdsample.c
  ${GLIBJPEG_DIR}jerror.c
  #${GLIBJPEG_DIR}jerror.h",
  ${GLIBJPEG_DIR}jfdctflt.c
  ${GLIBJPEG_DIR}jfdctfst.c
  ${GLIBJPEG_DIR}jfdctint.c
  ${GLIBJPEG_DIR}jidctflt.c
  ${GLIBJPEG_DIR}jidctfst.c
  ${GLIBJPEG_DIR}jidctint.c
  #${GLIBJPEG_DIR}jinclude.h",
  ${GLIBJPEG_DIR}jmemmgr.c
  ${GLIBJPEG_DIR}jmemnobs.c
  #${GLIBJPEG_DIR}jmemsys.h",
  #${GLIBJPEG_DIR}jmorecfg.h",
  #${GLIBJPEG_DIR}jpegint.h",
  #${GLIBJPEG_DIR}jpeglib.h",
  ${GLIBJPEG_DIR}jquant1.c
  ${GLIBJPEG_DIR}jquant2.c
  ${GLIBJPEG_DIR}jutils.c
  #${GLIBJPEG_DIR}jversion.h",
)

add_library(GLIBJPEG STATIC
  ${GLIBJPEG_SOURCES}
)

#if(${CMAKE_SYSTEM_NAME} STREQUAL "Linux")
#  find_package(ZLIB)
#endif()

target_link_libraries(GLIBJPEG PUBLIC
  #${BASE_LIBRARIES}
  #base
  #${ZLIB_LIBRARIES}
  GZLIB
  GLIBXML
  #freetype
  # todo sudo apt-get install libjpeg-dev
)

set_property(TARGET GLIBJPEG PROPERTY CXX_STANDARD 17)

target_include_directories(GLIBJPEG PRIVATE
  ${GLIBJPEG_DIR}
  #${GLIBJPEG_DIR}/include
  #${GLIBJPEG_DIR}/src
  #${GLIBJPEG_DIR}/src/src
  #${BASE_DIR}
)

target_compile_definitions(GLIBJPEG PRIVATE
  NO_GETENV=1  # getenv() is not thread-safe.
)
