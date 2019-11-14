cmake_minimum_required(VERSION 2.8)

set(xdg_mime_SOURCES
  ${COMMON_THIRDPARTY_DIR}port/base/third_party/xdg_mime/xdgmime.c
  ${COMMON_THIRDPARTY_DIR}port/base/third_party/xdg_mime/xdgmime.h
  ${COMMON_THIRDPARTY_DIR}port/base/third_party/xdg_mime/xdgmimealias.c
  ${COMMON_THIRDPARTY_DIR}port/base/third_party/xdg_mime/xdgmimealias.h
  ${COMMON_THIRDPARTY_DIR}port/base/third_party/xdg_mime/xdgmimecache.c
  ${COMMON_THIRDPARTY_DIR}port/base/third_party/xdg_mime/xdgmimecache.h
  ${COMMON_THIRDPARTY_DIR}port/base/third_party/xdg_mime/xdgmimeglob.c
  ${COMMON_THIRDPARTY_DIR}port/base/third_party/xdg_mime/xdgmimeglob.h
  ${COMMON_THIRDPARTY_DIR}port/base/third_party/xdg_mime/xdgmimeicon.c
  ${COMMON_THIRDPARTY_DIR}port/base/third_party/xdg_mime/xdgmimeicon.h
  ${COMMON_THIRDPARTY_DIR}port/base/third_party/xdg_mime/xdgmimeint.c
  ${COMMON_THIRDPARTY_DIR}port/base/third_party/xdg_mime/xdgmimeint.h
  ${COMMON_THIRDPARTY_DIR}port/base/third_party/xdg_mime/xdgmimemagic.c
  ${COMMON_THIRDPARTY_DIR}port/base/third_party/xdg_mime/xdgmimemagic.h
  ${COMMON_THIRDPARTY_DIR}port/base/third_party/xdg_mime/xdgmimeparent.c
  ${COMMON_THIRDPARTY_DIR}port/base/third_party/xdg_mime/xdgmimeparent.h
)

add_library(xdg_mime STATIC
  ${xdg_mime_SOURCES}
)

set_property(TARGET xdg_mime PROPERTY CXX_STANDARD 17)

target_include_directories(xdg_mime PUBLIC
  ${COMMON_THIRDPARTY_DIR}port
)

target_include_directories(xdg_mime PRIVATE
  ${COMMON_THIRDPARTY_DIR}port/base/third_party/xdg_mime/
  #${UI_PARENT_DIR}
  #${COBALT_CORE_DIR}
  #${COBALT_CORE_PARENT_DIR}
  #${COBALT_COMMON_INCLUDES}
  #${CHROMIUM_DIR} # to third_party/skia/include/core/SkWriteBuffer.h
  #${COBALT_GEN_DOM_PARSER_PARENT_DIR}
)

#target_compile_definitions(xdg_mime PRIVATE
#  #
#  ${COBALT_COMMON_DEFINES}
#)
