include_guard( DIRECTORY )

list(APPEND LIBEVENT_SOURCES
  ${LIBEVENT_DIR}buffer.c
  ${LIBEVENT_DIR}evbuffer.c
  ${LIBEVENT_DIR}evdns.c
  ${LIBEVENT_DIR}evdns.h
  ${LIBEVENT_DIR}event-config.h
  ${LIBEVENT_DIR}event-internal.h
  ${LIBEVENT_DIR}event.c
  ${LIBEVENT_DIR}event.h
  ${LIBEVENT_DIR}event_tagging.c
  ${LIBEVENT_DIR}evhttp.h
  ${LIBEVENT_DIR}evrpc-internal.h
  ${LIBEVENT_DIR}evrpc.c
  ${LIBEVENT_DIR}evrpc.h
  ${LIBEVENT_DIR}evsignal.h
  ${LIBEVENT_DIR}evutil.c
  ${LIBEVENT_DIR}evutil.h
  ${LIBEVENT_DIR}http-internal.h
  ${LIBEVENT_DIR}http.c
  ${LIBEVENT_DIR}log.c
  ${LIBEVENT_DIR}log.h
  ${LIBEVENT_DIR}min_heap.h
  ${LIBEVENT_DIR}poll.c
  ${LIBEVENT_DIR}select.c
  ${LIBEVENT_DIR}signal.c
  ${LIBEVENT_DIR}strlcpy-internal.h
  ${LIBEVENT_DIR}strlcpy.c
)

if(TARGET_EMSCRIPTEN)
  list(APPEND LIBEVENT_SOURCES
    ${LIBEVENT_DIR}emscripten/config.h
    ${LIBEVENT_DIR}emscripten/event-config.h
  )
elseif(TARGET_LINUX)
  list(APPEND LIBEVENT_SOURCES
    ${LIBEVENT_DIR}linux/config.h
    ${LIBEVENT_DIR}linux/event-config.h
  )
else()
  message(FATAL_ERROR "platform not supported")
endif()