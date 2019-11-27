include_guard( DIRECTORY )

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
