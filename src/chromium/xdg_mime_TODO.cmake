#### --- xdg_mime ---###

# TODO https://github.com/chromium/chromium/blob/master/third_party/blink/renderer/platform/BUILD.gn
list(APPEND xdg_mime_SOURCES
  ${xdg_mime_DIR}xdgmime.c
  ${xdg_mime_DIR}xdgmime.h
  ${xdg_mime_DIR}xdgmimealias.c
  ${xdg_mime_DIR}xdgmimealias.h
  ${xdg_mime_DIR}xdgmimecache.c
  ${xdg_mime_DIR}xdgmimecache.h
  ${xdg_mime_DIR}xdgmimeglob.c
  ${xdg_mime_DIR}xdgmimeglob.h
  ${xdg_mime_DIR}xdgmimeicon.c
  ${xdg_mime_DIR}xdgmimeicon.h
  ${xdg_mime_DIR}xdgmimeint.c
  ${xdg_mime_DIR}xdgmimeint.h
  ${xdg_mime_DIR}xdgmimemagic.c
  ${xdg_mime_DIR}xdgmimemagic.h
  ${xdg_mime_DIR}xdgmimeparent.c
  ${xdg_mime_DIR}xdgmimeparent.h
)

add_library(xdg_mime STATIC
  ${xdg_mime_SOURCES}
)

set_property(TARGET xdg_mime PROPERTY CXX_STANDARD 17)

target_include_directories(xdg_mime PRIVATE
  ${xdg_mime_DIR}
  ${xdg_mime_PARENT_DIR}
)

target_include_directories(xdg_mime PUBLIC
  ${xdg_mime_DIR}
)

#target_compile_definitions(xdg_mime PRIVATE
#  CRYPTO_IMPLEMENTATION=1
#  #USE_SYSTEM_LIBJPEG=1
#  USE_LIBJPEG_TURBO=1
#)
