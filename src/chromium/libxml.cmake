### --- libxml ---###

set(libxml_DIR
  "third_party/libxml/"
)

set(libxml_SOURCES
  ${libxml_DIR}chromium/libxml_utils.cc
  #${libxml_DIR}chromium/libxml_utils.h
  #${libxml_DIR}linux/config.h
  #${libxml_DIR}linux/include/libxml/xmlversion.h
  #${libxml_DIR}mac/config.h
  #${libxml_DIR}mac/include/libxml/xmlversion.h
  #${libxml_DIR}
  #### ${libxml_DIR}src/DOCBparser.c
  ${libxml_DIR}src/HTMLparser.c
  ${libxml_DIR}src/HTMLtree.c
  #${libxml_DIR}
  #### ${libxml_DIR}src/SAX.c
  ${libxml_DIR}src/SAX2.c
  ${libxml_DIR}src/buf.c
  #${libxml_DIR}src/buf.h
  #${libxml_DIR}
  #### ${libxml_DIR}src/c14n.c
  #### ${libxml_DIR}src/catalog.c
  ${libxml_DIR}src/chvalid.c
  #${libxml_DIR}
  #### ${libxml_DIR}src/debugXML.c
  ${libxml_DIR}src/dict.c
  #${libxml_DIR}src/elfgcchack.h
  #${libxml_DIR}src/enc.h
  ${libxml_DIR}src/encoding.c
  ${libxml_DIR}src/entities.c
  ${libxml_DIR}src/error.c
  ${libxml_DIR}src/globals.c
  ${libxml_DIR}src/hash.c
  #${libxml_DIR}src/include/libxml/DOCBparser.h
  #${libxml_DIR}src/include/libxml/HTMLparser.h
  #${libxml_DIR}src/include/libxml/HTMLtree.h
  #${libxml_DIR}src/include/libxml/SAX.h
  #${libxml_DIR}src/include/libxml/SAX2.h
  #${libxml_DIR}src/include/libxml/c14n.h
  #${libxml_DIR}src/include/libxml/catalog.h
  #${libxml_DIR}src/include/libxml/chvalid.h
  #${libxml_DIR}src/include/libxml/debugXML.h
  #${libxml_DIR}src/include/libxml/dict.h
  #${libxml_DIR}src/include/libxml/encoding.h
  #${libxml_DIR}src/include/libxml/entities.h
  #${libxml_DIR}src/include/libxml/globals.h
  #${libxml_DIR}src/include/libxml/hash.h
  #${libxml_DIR}src/include/libxml/list.h
  #${libxml_DIR}src/include/libxml/nanoftp.h
  #${libxml_DIR}src/include/libxml/nanohttp.h
  #${libxml_DIR}src/include/libxml/parser.h
  #${libxml_DIR}src/include/libxml/parserInternals.h
  #${libxml_DIR}src/include/libxml/pattern.h
  #${libxml_DIR}src/include/libxml/relaxng.h
  #${libxml_DIR}src/include/libxml/schemasInternals.h
  #${libxml_DIR}src/include/libxml/schematron.h
  #${libxml_DIR}src/include/libxml/threads.h
  #${libxml_DIR}src/include/libxml/tree.h
  #${libxml_DIR}src/include/libxml/uri.h
  #${libxml_DIR}src/include/libxml/valid.h
  #${libxml_DIR}src/include/libxml/xinclude.h
  #${libxml_DIR}src/include/libxml/xlink.h
  #${libxml_DIR}src/include/libxml/xmlIO.h
  #${libxml_DIR}src/include/libxml/xmlautomata.h
  #${libxml_DIR}src/include/libxml/xmlerror.h
  #${libxml_DIR}src/include/libxml/xmlexports.h
  #${libxml_DIR}src/include/libxml/xmlmemory.h
  #${libxml_DIR}src/include/libxml/xmlmodule.h
  #${libxml_DIR}src/include/libxml/xmlreader.h
  #${libxml_DIR}src/include/libxml/xmlregexp.h
  #${libxml_DIR}src/include/libxml/xmlsave.h
  #${libxml_DIR}src/include/libxml/xmlschemas.h
  #${libxml_DIR}src/include/libxml/xmlschemastypes.h
  #${libxml_DIR}src/include/libxml/xmlstring.h
  #${libxml_DIR}src/include/libxml/xmlunicode.h
  #${libxml_DIR}src/include/libxml/xmlwriter.h
  #${libxml_DIR}src/include/libxml/xpath.h
  #${libxml_DIR}src/include/libxml/xpathInternals.h
  #${libxml_DIR}src/include/libxml/xpointer.h
  #${libxml_DIR}src/include/win32config.h
  #${libxml_DIR}src/include/wsockcompat.h
  #${libxml_DIR}
  #### ${libxml_DIR}src/legacy.c
  #${libxml_DIR}src/libxml.h
  ${libxml_DIR}src/list.c
  ${libxml_DIR}src/parser.c
  ${libxml_DIR}src/parserInternals.c
  ${libxml_DIR}src/pattern.c
  #${libxml_DIR}
  #### ${libxml_DIR}src/relaxng.c
  #${libxml_DIR}src/save.h
  #${libxml_DIR}
  #### ${libxml_DIR}src/schematron.c
  ${libxml_DIR}src/threads.c
  #${libxml_DIR}src/timsort.h
  ${libxml_DIR}src/tree.c
  #${libxml_DIR}src/triodef.h
  #${libxml_DIR}src/trionan.h
  ${libxml_DIR}
  #### ${libxml_DIR}src/trio.c
  #${libxml_DIR}src/trio.h
  #${libxml_DIR}src/triodef.h
  #### ${libxml_DIR} Note: xpath.c #includes trionan.c
  #### ${libxml_DIR}src/trionan.c
  #${libxml_DIR}src/triop.h
  #### ${libxml_DIR}src/triostr.c
  #${libxml_DIR}src/triostr.h
  ${libxml_DIR}src/uri.c
  ${libxml_DIR}src/valid.c
  #${libxml_DIR}
  #### ${libxml_DIR}src/xinclude.c
  #### ${libxml_DIR}src/xlink.c
  ${libxml_DIR}src/xmlIO.c
  ${libxml_DIR}src/xmlmemory.c
  #${libxml_DIR}
  #### ${libxml_DIR}src/xmlmodule.c
  ${libxml_DIR}src/xmlreader.c
  #${libxml_DIR}
  #### ${libxml_DIR}src/xmlregexp.c
  ${libxml_DIR}src/xmlsave.c
  #${libxml_DIR}
  #### ${libxml_DIR}src/xmlschemas.c
  #### ${libxml_DIR}src/xmlschemastypes.c
  ${libxml_DIR}src/xmlstring.c
  ${libxml_DIR}src/xmlunicode.c
  ${libxml_DIR}src/xmlwriter.c
  ${libxml_DIR}src/xpath.c
  #${libxml_DIR}
  #### ${libxml_DIR}src/xpointer.c
  #### ${libxml_DIR}src/xzlib.c
  #${libxml_DIR}src/xzlib.h
  #${libxml_DIR}win32/config.h
  #${libxml_DIR}win32/include/libxml/xmlversion.h
)

# if (current_cpu == "x86" || current_cpu == "x64")
if(${CMAKE_SYSTEM_NAME} STREQUAL "Linux")
  #list(APPEND libxml_SOURCES
  #  ${libxml_DIR}intel/filter_sse2_intrinsics.c
  #  ${libxml_DIR}intel/intel_init.c
  #)
  set(libxml_OS_DIR ${libxml_DIR}/linux)
  #find_package(ZLIB)
endif()

add_library(libxml STATIC
  ${libxml_SOURCES}
)

target_link_libraries(libxml PUBLIC
  #${BASE_LIBRARIES}
  #base
  #${ZLIB_LIBRARIES}
  zlib
  icu # icuuc
)

set_property(TARGET libxml PROPERTY CXX_STANDARD 17)

target_include_directories(libxml PRIVATE
  ${libxml_DIR}
  ${libxml_DIR}/include
  ${libxml_DIR}/src
  ${libxml_OS_DIR}
  #${libxml_DIR}/src/src
  #${BASE_DIR}
)

#"//third_party/zlib",

target_compile_definitions(libxml PRIVATE
  # Define LIBXML_STATIC as nothing to match how libxml.h (an internal header)
  # defines LIBXML_STATIC, otherwise we get the macro redefined warning from
  # GCC. ("defines" does "-DFOO" which defines the macro FOO as 1.)
  LIBXML_STATIC=
)
