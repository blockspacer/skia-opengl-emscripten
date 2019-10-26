### --- libevent ---###

if (TARGET_EMSCRIPTEN)
  # skip
elseif(TARGET_LINUX)
  # skip
else()
  message(FATAL_ERROR "platform not supported")
endif()

# libevent
# see https://github.com/cliqz-oss/ceba.js/blob/master/patches/tor/0002-emscripten-main-loop.patch#L7
# see https://github.com/cliqz-oss/ceba.js/blob/master/build.sh#L15

# see https://github.com/libevent/libevent
# defines https://github.com/libevent/libevent/blob/master/event-config.h.cmake
# see HAVE_CONFIG_H https://github.com/chromium/chromium/blob/master/base/third_party/libevent/BUILD.gn#L37
set(LIBEVENT_DIR
  ${BASE_DIR}third_party/libevent/
)

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

set(LIBEVENT_INCLUDE_DIRS
  #../..
  #..
  ${BASE_DIR}third_party/libevent
  ${LIBEVENT_DIR}emscripten
  ${LIBEVENT_DIR}compat
)

if(MSVC) 
  # TODO
else()
  set(HAVE_CONFIG_H "HAVE_CONFIG_H=1")
endif()

message(FATAL_ERROR "HAVE_CONFIG_H=${HAVE_CONFIG_H}")

set(LIBEVENT_DEFINES
  ${HAVE_CONFIG_H}
)

if(TARGET_EMSCRIPTEN)
  list(APPEND LIBEVENT_INCLUDE_DIRS
    ${LIBEVENT_DIR}emscripten
  )
  list(APPEND LIBEVENT_SOURCES
  ${LIBEVENT_DIR}emscripten/config.h
  ${LIBEVENT_DIR}emscripten/event-config.h
  )
elseif(TARGET_LINUX)
  list(APPEND LIBEVENT_INCLUDE_DIRS
    ${LIBEVENT_DIR}linux
  )
  list(APPEND LIBEVENT_SOURCES
  ${LIBEVENT_DIR}linux/config.h
  ${LIBEVENT_DIR}linux/event-config.h
  )
else()
  message(FATAL_ERROR "TODO: port libevent")
endif()

add_library(libevent STATIC
  ${LIBEVENT_SOURCES}
)

set_property(TARGET libevent PROPERTY CXX_STANDARD 17)

target_include_directories(libevent PUBLIC
  ${LIBEVENT_INCLUDE_DIRS}
)

target_include_directories(libevent PRIVATE
  ${CHROMIUM_DIR}
)

target_compile_definitions(libevent PUBLIC
  ${LIBEVENT_DEFINES}
  ${WTF_EMCC_DEFINITIONS}
  ${WTF_COMMON_DEFINITIONS}
)
