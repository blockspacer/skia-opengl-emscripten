### --- fontconfig ---###

set(fontconfig_DIR
  third_party/fontconfig
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

target_link_libraries(fontconfig PUBLIC
  #${BASE_LIBRARIES}
  base
)

set_property(TARGET fontconfig PROPERTY CXX_STANDARD 17)

target_include_directories(fontconfig PRIVATE
  ${fontconfig_DIR}
  ${fontconfig_DIR}/include
  ${fontconfig_DIR}/src
  ${fontconfig_DIR}/src/src
  #${BASE_DIR}
)

#deps = [
#  "//build/config/freetype",
#  "//third_party/libxml",
#  "//third_party/zlib",
#]

target_compile_definitions(fontconfig PRIVATE
  HAVE_CONFIG_H=1
  FC_CACHEDIR=\"/var/cache/fontconfig\"
  FC_TEMPLATEDIR=\"/usr/share/fontconfig/conf.avail\"
  FONTCONFIG_PATH=\"/etc/fonts\"
  #
  # if (!is_component_build)
  FC_ATTRIBUTE_VISIBILITY_HIDDEN=__attribute((visibility(\"hidden\")))
  FC_ATTRIBUTE_VISIBILITY_EXPORT=__attribute((visibility(\"hidden\")))
)
