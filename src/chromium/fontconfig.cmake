# see https://github.com/chromium/chromium/blob/5603ac3ddfc5c8f9357aeef99e6086e64cbe0daa/third_party/fontconfig/BUILD.gn

### --- fontconfig ---###

set(fontconfig_DIR
  third_party/fontconfig/
)

set(fontconfig_SOURCES
  #${fontconfig_DIR}src/src/fcarch.h
  ${fontconfig_DIR}src/src/fcatomic.c
  ${fontconfig_DIR}src/src/fccache.c
  ${fontconfig_DIR}src/src/fccfg.c
  ${fontconfig_DIR}src/src/fccharset.c
  ${fontconfig_DIR}src/src/fccompat.c
  ${fontconfig_DIR}src/src/fcdbg.c
  ${fontconfig_DIR}src/src/fcdefault.c
  ${fontconfig_DIR}src/src/fcdir.c
  ${fontconfig_DIR}src/src/fcformat.c
  ${fontconfig_DIR}src/src/fcfreetype.c
  ${fontconfig_DIR}src/src/fcfs.c
  ${fontconfig_DIR}src/src/fchash.c
  ${fontconfig_DIR}src/src/fcinit.c
  ${fontconfig_DIR}src/src/fclang.c
  ${fontconfig_DIR}src/src/fclist.c
  ${fontconfig_DIR}src/src/fcmatch.c
  ${fontconfig_DIR}src/src/fcmatrix.c
  ${fontconfig_DIR}src/src/fcname.c
  ${fontconfig_DIR}src/src/fcobjs.c
  ${fontconfig_DIR}src/src/fcpat.c
  ${fontconfig_DIR}src/src/fcptrlist.c
  ${fontconfig_DIR}src/src/fcrange.c
  ${fontconfig_DIR}src/src/fcserialize.c
  ${fontconfig_DIR}src/src/fcstat.c
  ${fontconfig_DIR}src/src/fcstr.c
  ${fontconfig_DIR}src/src/fcweight.c
  ${fontconfig_DIR}src/src/fcxml.c
  ${fontconfig_DIR}src/src/ftglue.c
  #${fontconfig_DIR}src/src/ftglue.h",
)

add_library(fontconfig STATIC
  ${fontconfig_SOURCES}
)

find_package(Freetype REQUIRED)

if(TARGET_LINUX OR TARGET_EMSCRIPTEN)
  # sudo apt-get install uuid-dev uuid-dev uuid-runtime
  # LibUUID::LibUUID
  # LibUUID_FOUND, LibUUID_INCLUDE_DIRS, LibUUID_LIBRARIES
  # https://gitlab.kitware.com/cmake/cmake/blob/master/Source/Modules/FindLibUUID.cmake
  find_package(LibUUID REQUIRED)
  message(STATUS "LibUUID_INCLUDE_DIRS=${LibUUID_INCLUDE_DIRS}")
  message(STATUS "LibUUID_LIBRARIES=${LibUUID_LIBRARIES}")
elseif(TARGET_WINDOWS)
  # TODO
else()
  message(FATAL_ERROR "platform not supported")
endif()

target_link_libraries(fontconfig PUBLIC
  base
  ${GLIBXML_LIB}
  #GZLIB
  ${libZLIB_LIB}
  #freetype
  ${FREETYPE_LIBRARIES}
  ${LibUUID_LIBRARIES}
  ${HARFBUZZ_LIBRARIES}
)

set_property(TARGET fontconfig PROPERTY CXX_STANDARD 17)

target_include_directories(fontconfig PRIVATE
  ${fontconfig_DIR}
  ${fontconfig_DIR}/include
  ${fontconfig_DIR}/include/src # requires fcstdint.h
  ${fontconfig_DIR}/src
  ${fontconfig_DIR}/src/src
  #${BASE_DIR}
  ${FREETYPE_INCLUDE_DIRS}
  ${LibUUID_INCLUDE_DIRS}
  ${HARFBUZZ_INCLUDE_DIRS}
)

#deps = [
#  "//build/config/freetype",
#  "//third_party/libxml",
#  "//third_party/zlib",
#]

target_compile_definitions(fontconfig PRIVATE
  HAVE_CONFIG_H=1
  "FC_CACHEDIR=\"/var/cache/fontconfig\""
  "FC_TEMPLATEDIR=\"/usr/share/fontconfig/conf.avail\""
  "FONTCONFIG_PATH=\"/etc/fonts\""
  #
  # if (!is_component_build)
  "FC_ATTRIBUTE_VISIBILITY_HIDDEN=__attribute((visibility(\"hidden\")))"
  "FC_ATTRIBUTE_VISIBILITY_EXPORT=__attribute((visibility(\"hidden\")))"
)

if(MSVC) 
  # TODO
else()
  target_compile_options(fontconfig PRIVATE
    -Wno-non-literal-null-conversion
    -Wno-pointer-bool-conversion
  )
endif()
