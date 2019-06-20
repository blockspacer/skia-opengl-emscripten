cmake_minimum_required(VERSION 2.8)

set(xdg_mime_SOURCES
  ${COBALT_PORT_DIR}base/third_party/xdg_mime/xdgmime.c
  ${COBALT_PORT_DIR}base/third_party/xdg_mime/xdgmime.h
  ${COBALT_PORT_DIR}base/third_party/xdg_mime/xdgmimealias.c
  ${COBALT_PORT_DIR}base/third_party/xdg_mime/xdgmimealias.h
  ${COBALT_PORT_DIR}base/third_party/xdg_mime/xdgmimecache.c
  ${COBALT_PORT_DIR}base/third_party/xdg_mime/xdgmimecache.h
  ${COBALT_PORT_DIR}base/third_party/xdg_mime/xdgmimeglob.c
  ${COBALT_PORT_DIR}base/third_party/xdg_mime/xdgmimeglob.h
  ${COBALT_PORT_DIR}base/third_party/xdg_mime/xdgmimeicon.c
  ${COBALT_PORT_DIR}base/third_party/xdg_mime/xdgmimeicon.h
  ${COBALT_PORT_DIR}base/third_party/xdg_mime/xdgmimeint.c
  ${COBALT_PORT_DIR}base/third_party/xdg_mime/xdgmimeint.h
  ${COBALT_PORT_DIR}base/third_party/xdg_mime/xdgmimemagic.c
  ${COBALT_PORT_DIR}base/third_party/xdg_mime/xdgmimemagic.h
  ${COBALT_PORT_DIR}base/third_party/xdg_mime/xdgmimeparent.c
  ${COBALT_PORT_DIR}base/third_party/xdg_mime/xdgmimeparent.h
)

add_library(xdg_mime STATIC
  ${xdg_mime_SOURCES}
)

#target_link_libraries(xdg_mime PUBLIC
  #base # TODO
#)

set_property(TARGET xdg_mime PROPERTY CXX_STANDARD 17)

target_include_directories(xdg_mime PRIVATE
  #${UI_PARENT_DIR}
  ${COBALT_CORE_DIR}
  ${COBALT_CORE_PARENT_DIR}
  ${COBALT_COMMON_INCLUDES}
  ${CHROMIUM_DIR} # to third_party/skia/include/core/SkWriteBuffer.h
  ${COBALT_GEN_DOM_PARSER_PARENT_DIR}
)

target_compile_definitions(xdg_mime PRIVATE
  #
  ${COBALT_COMMON_DEFINES}
)
