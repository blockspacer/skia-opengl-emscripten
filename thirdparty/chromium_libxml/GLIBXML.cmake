### --- GLIBXML ---###

list(APPEND GLIBXML_SOURCES
  ${GLIBXML_DIR}chromium/libxml_utils.cc
  ${GLIBXML_DIR}chromium/libxml_utils.h
  ${GLIBXML_DIR}linux/config.h
  ${GLIBXML_DIR}linux/include/libxml/xmlversion.h
  ${GLIBXML_DIR}mac/config.h
  ${GLIBXML_DIR}mac/include/libxml/xmlversion.h
  #
  #### ${GLIBXML_DIR}src/DOCBparser.c
  ${GLIBXML_DIR}src/HTMLparser.c
  ${GLIBXML_DIR}src/HTMLtree.c
  #
  #### ${GLIBXML_DIR}src/SAX.c
  ${GLIBXML_DIR}src/SAX2.c
  ${GLIBXML_DIR}src/buf.c
  ${GLIBXML_DIR}src/buf.h
  #
  #### ${GLIBXML_DIR}src/c14n.c
  #### ${GLIBXML_DIR}src/catalog.c
  ${GLIBXML_DIR}src/chvalid.c
  #
  #### ${GLIBXML_DIR}src/debugXML.c
  ${GLIBXML_DIR}src/dict.c
  ${GLIBXML_DIR}src/elfgcchack.h
  ${GLIBXML_DIR}src/enc.h
  ${GLIBXML_DIR}src/encoding.c
  ${GLIBXML_DIR}src/entities.c
  ${GLIBXML_DIR}src/error.c
  ${GLIBXML_DIR}src/globals.c
  ${GLIBXML_DIR}src/hash.c
  ${GLIBXML_DIR}src/include/libxml/DOCBparser.h
  ${GLIBXML_DIR}src/include/libxml/HTMLparser.h
  ${GLIBXML_DIR}src/include/libxml/HTMLtree.h
  ${GLIBXML_DIR}src/include/libxml/SAX.h
  ${GLIBXML_DIR}src/include/libxml/SAX2.h
  ${GLIBXML_DIR}src/include/libxml/c14n.h
  ${GLIBXML_DIR}src/include/libxml/catalog.h
  ${GLIBXML_DIR}src/include/libxml/chvalid.h
  ${GLIBXML_DIR}src/include/libxml/debugXML.h
  ${GLIBXML_DIR}src/include/libxml/dict.h
  ${GLIBXML_DIR}src/include/libxml/encoding.h
  ${GLIBXML_DIR}src/include/libxml/entities.h
  ${GLIBXML_DIR}src/include/libxml/globals.h
  ${GLIBXML_DIR}src/include/libxml/hash.h
  ${GLIBXML_DIR}src/include/libxml/list.h
  ${GLIBXML_DIR}src/include/libxml/nanoftp.h
  ${GLIBXML_DIR}src/include/libxml/nanohttp.h
  ${GLIBXML_DIR}src/include/libxml/parser.h
  ${GLIBXML_DIR}src/include/libxml/parserInternals.h
  ${GLIBXML_DIR}src/include/libxml/pattern.h
  ${GLIBXML_DIR}src/include/libxml/relaxng.h
  ${GLIBXML_DIR}src/include/libxml/schemasInternals.h
  ${GLIBXML_DIR}src/include/libxml/schematron.h
  ${GLIBXML_DIR}src/include/libxml/threads.h
  ${GLIBXML_DIR}src/include/libxml/tree.h
  ${GLIBXML_DIR}src/include/libxml/uri.h
  ${GLIBXML_DIR}src/include/libxml/valid.h
  ${GLIBXML_DIR}src/include/libxml/xinclude.h
  ${GLIBXML_DIR}src/include/libxml/xlink.h
  ${GLIBXML_DIR}src/include/libxml/xmlIO.h
  ${GLIBXML_DIR}src/include/libxml/xmlautomata.h
  ${GLIBXML_DIR}src/include/libxml/xmlerror.h
  ${GLIBXML_DIR}src/include/libxml/xmlexports.h
  ${GLIBXML_DIR}src/include/libxml/xmlmemory.h
  ${GLIBXML_DIR}src/include/libxml/xmlmodule.h
  ${GLIBXML_DIR}src/include/libxml/xmlreader.h
  ${GLIBXML_DIR}src/include/libxml/xmlregexp.h
  ${GLIBXML_DIR}src/include/libxml/xmlsave.h
  ${GLIBXML_DIR}src/include/libxml/xmlschemas.h
  ${GLIBXML_DIR}src/include/libxml/xmlschemastypes.h
  ${GLIBXML_DIR}src/include/libxml/xmlstring.h
  ${GLIBXML_DIR}src/include/libxml/xmlunicode.h
  ${GLIBXML_DIR}src/include/libxml/xmlwriter.h
  ${GLIBXML_DIR}src/include/libxml/xpath.h
  ${GLIBXML_DIR}src/include/libxml/xpathInternals.h
  ${GLIBXML_DIR}src/include/libxml/xpointer.h
  ## TODO ## ${GLIBXML_DIR}src/include/win32config.h
  ${GLIBXML_DIR}src/include/wsockcompat.h
  #
  #### ${GLIBXML_DIR}src/legacy.c
  ${GLIBXML_DIR}src/libxml.h
  ${GLIBXML_DIR}src/list.c
  ${GLIBXML_DIR}src/parser.c
  ${GLIBXML_DIR}src/parserInternals.c
  ${GLIBXML_DIR}src/pattern.c
  #
  #### ${GLIBXML_DIR}src/relaxng.c
  ${GLIBXML_DIR}src/save.h
  #
  #### ${GLIBXML_DIR}src/schematron.c
  ${GLIBXML_DIR}src/threads.c
  #${GLIBXML_DIR}src/timsort.h
  ${GLIBXML_DIR}src/tree.c
  ${GLIBXML_DIR}src/triodef.h
  ${GLIBXML_DIR}src/trionan.h
  #
  #### ${GLIBXML_DIR}src/trio.c
  #### ${GLIBXML_DIR}src/trio.h
  #### ${GLIBXML_DIR}src/triodef.h
  #### ${GLIBXML_DIR} Note: xpath.c #includes trionan.c
  #### ${GLIBXML_DIR}src/trionan.c
  #### ${GLIBXML_DIR}src/triop.h
  #### ${GLIBXML_DIR}src/triostr.c
  #### ${GLIBXML_DIR}src/triostr.h
  ${GLIBXML_DIR}src/uri.c
  ${GLIBXML_DIR}src/valid.c
  #
  #### ${GLIBXML_DIR}src/xinclude.c
  #### ${GLIBXML_DIR}src/xlink.c
  ${GLIBXML_DIR}src/xmlIO.c
  ${GLIBXML_DIR}src/xmlmemory.c
  #
  #### ${GLIBXML_DIR}src/xmlmodule.c
  ${GLIBXML_DIR}src/xmlreader.c
  #
  #### ${GLIBXML_DIR}src/xmlregexp.c
  ${GLIBXML_DIR}src/xmlsave.c
  #
  #### ${GLIBXML_DIR}src/xmlschemas.c
  #### ${GLIBXML_DIR}src/xmlschemastypes.c
  ${GLIBXML_DIR}src/xmlstring.c
  ${GLIBXML_DIR}src/xmlunicode.c
  ${GLIBXML_DIR}src/xmlwriter.c
  ${GLIBXML_DIR}src/xpath.c
  #
  #### ${GLIBXML_DIR}src/xpointer.c
  #### ${GLIBXML_DIR}src/xzlib.c
  ${GLIBXML_DIR}src/xzlib.h
  ## TODO ## ${GLIBXML_DIR}win32/config.h
  ## TODO ## ${GLIBXML_DIR}win32/include/libxml/xmlversion.h
)

# if (current_cpu == "x86" || current_cpu == "x64")
if(TARGET_EMSCRIPTEN)
  # nothing to do
  list(APPEND GLIBXML_OS_PRIVATE_DIRS
    ${CHROMIUM_DIR}/web_ports/libxml_wrapper/emscripten # requires "config.h"
  )
  list(APPEND GLIBXML_OS_PUBLIC_DIRS
    ${CHROMIUM_DIR}/web_ports/libxml_wrapper/emscripten/include # requires "libxml/xmlversion.h"
  )
elseif(TARGET_LINUX)
  if(CMAKE_CL_64)
    #
  else(CMAKE_CL_64)
    #list(APPEND GLIBXML_SOURCES
    #  ${GLIBXML_DIR}intel/filter_sse2_intrinsics.c
    #  ${GLIBXML_DIR}intel/intel_init.c
    #)
  endif(CMAKE_CL_64)
  list(APPEND GLIBXML_OS_PRIVATE_DIRS
    ${GLIBXML_DIR}/linux # requires "config.h"
    #${GLIBXML_DIR}/src
    # ${GLIBXML_DIR}/src/include # requires "libxml/parser.h"
    #${GLIBXML_DIR}/src/include/libxml
  )
  list(APPEND GLIBXML_OS_PUBLIC_DIRS
    ${GLIBXML_DIR}/linux/include # requires "libxml/xmlversion.h"
  )
  #find_package(ZLIB)
elseif(TARGET_WINDOWS) # TODO
  if(CMAKE_CL_64)
    #
  else(CMAKE_CL_64)
    #list(APPEND GLIBXML_SOURCES
    #  ${GLIBXML_DIR}intel/filter_sse2_intrinsics.c
    #  ${GLIBXML_DIR}intel/intel_init.c
    #)
  endif(CMAKE_CL_64)
  list(APPEND GLIBXML_OS_PRIVATE_DIRS
    ${GLIBXML_DIR}/win32 # requires "config.h"
    #${GLIBXML_DIR}/src
    # ${GLIBXML_DIR}/src/include # requires "libxml/parser.h"
    #${GLIBXML_DIR}/src/include/libxml
  )
  list(APPEND GLIBXML_OS_PUBLIC_DIRS
    ${GLIBXML_DIR}/win32/include # requires "libxml/xmlversion.h"
  )
  #find_package(ZLIB)
else()
  message(FATAL_ERROR "platform not supported")
endif()

add_library(GLIBXML STATIC
  ${GLIBXML_SOURCES}
)

if(NOT DEFINED CUSTOM_ICU_LIB)
  message(FATAL_ERROR "CUSTOM_ICU_LIB must be defined")
endif(NOT DEFINED CUSTOM_ICU_LIB)

if(NOT USE_SYSTEM_ZLIB)
  if(NOT DEFINED zlib_LIB)
    message(FATAL_ERROR "zlib_LIB must be defined")
  endif(NOT DEFINED zlib_LIB)
endif(NOT USE_SYSTEM_ZLIB)

if(EMSCRIPTEN)
  target_link_libraries(GLIBXML PUBLIC
    ${CUSTOM_ICU_LIB} # icuuc
  )
else()
  target_link_libraries(GLIBXML PUBLIC
    #${base_LIB}
    #${ZLIB_LIBRARIES}
    #zlib
    ${zlib_LIB}
    ${CUSTOM_ICU_LIB} # icuuc
  )
endif()

set_property(TARGET GLIBXML PROPERTY CXX_STANDARD 17)

if(NOT DEFINED ENABLE_COBALT)
  message(FATAL_ERROR "NOT DEFINED: ENABLE_COBALT")
endif(NOT DEFINED ENABLE_COBALT)
if(ENABLE_COBALT)
  if(NOT DEFINED cobalt_starboard_headers_only_LIB)
    message(FATAL_ERROR "NOT DEFINED: cobalt_starboard_headers_only_LIB")
  endif(NOT DEFINED cobalt_starboard_headers_only_LIB)

  # see defined(COBALT) in htmlEmitImpliedRootLevelParagraph
  target_link_libraries(GLIBXML PUBLIC
    ${cobalt_starboard_headers_only_LIB}
  )
endif(ENABLE_COBALT)

target_include_directories(GLIBXML PRIVATE
  ${GLIBXML_PARENT_DIR}
  ${GLIBXML_DIR}
  #${GLIBXML_DIR}/src
  ${GLIBXML_OS_PRIVATE_DIRS} # linux/android/...
  #${GLIBXML_DIR}/src/src
  #${BASE_DIR}
)

target_include_directories(GLIBXML PUBLIC
  ${GLIBXML_DIR}/src/include # requires "libxml/xmlreader.h"
  ${GLIBXML_OS_PUBLIC_DIRS} # linux/android/...
)

target_compile_definitions(GLIBXML PRIVATE
  # Define GLIBXML_STATIC as nothing to match how GLIBXML.h (an internal header)
  # defines GLIBXML_STATIC, otherwise we get the macro redefined warning from
  # GCC. ("defines" does "-DFOO" which defines the macro FOO as 1.)
  GLIBXML_STATIC=""
  # TODO
  ${COBALT_COMMON_DEFINES}
)
