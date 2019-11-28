include_guard( DIRECTORY )

list(APPEND STARBOARD_SOURCES
  ${COBALT_PORT_DIR}/starboard/common/byte_swap.h
  ${COBALT_PORT_DIR}/starboard/common/common.cc
  ${COBALT_PORT_DIR}/starboard/common/condition_variable.cc
  ${COBALT_PORT_DIR}/starboard/common/condition_variable.h
  ${COBALT_PORT_DIR}/starboard/common/flat_map.h
  ${COBALT_PORT_DIR}/starboard/common/locked_ptr.h
  ${COBALT_PORT_DIR}/starboard/common/log.cc
  ${COBALT_PORT_DIR}/starboard/common/log.h
  ${COBALT_PORT_DIR}/starboard/common/memory.cc
  ${COBALT_PORT_DIR}/starboard/common/move.h
  ${COBALT_PORT_DIR}/starboard/common/murmurhash2.cc
  ${COBALT_PORT_DIR}/starboard/common/murmurhash2.h
  ${COBALT_PORT_DIR}/starboard/common/mutex.cc
  ${COBALT_PORT_DIR}/starboard/common/mutex.h
  ${COBALT_PORT_DIR}/starboard/common/new.cc
  ${COBALT_PORT_DIR}/starboard/common/optional.cc
  ${COBALT_PORT_DIR}/starboard/common/optional.h
  ${COBALT_PORT_DIR}/starboard/common/queue.h
  ${COBALT_PORT_DIR}/starboard/common/recursive_mutex.cc
  ${COBALT_PORT_DIR}/starboard/common/recursive_mutex.h
  ${COBALT_PORT_DIR}/starboard/common/ref_counted.cc
  ${COBALT_PORT_DIR}/starboard/common/ref_counted.h
  ${COBALT_PORT_DIR}/starboard/common/reset_and_return.h
  ${COBALT_PORT_DIR}/starboard/common/rwlock.cc
  ${COBALT_PORT_DIR}/starboard/common/rwlock.h
  ${COBALT_PORT_DIR}/starboard/common/scoped_ptr.h
  ${COBALT_PORT_DIR}/starboard/common/semaphore.cc
  ${COBALT_PORT_DIR}/starboard/common/semaphore.h
  ${COBALT_PORT_DIR}/starboard/common/socket.cc
  ${COBALT_PORT_DIR}/starboard/common/socket.h
  ${COBALT_PORT_DIR}/starboard/common/spin_lock.cc
  ${COBALT_PORT_DIR}/starboard/common/spin_lock.h
  ${COBALT_PORT_DIR}/starboard/common/state_machine.cc
  ${COBALT_PORT_DIR}/starboard/common/state_machine.h
  ${COBALT_PORT_DIR}/starboard/common/storage.cc
  ${COBALT_PORT_DIR}/starboard/common/storage.h
  ${COBALT_PORT_DIR}/starboard/common/string.h
  ${COBALT_PORT_DIR}/starboard/common/thread_collision_warner.cc
  ${COBALT_PORT_DIR}/starboard/common/thread_collision_warner.h
  ${COBALT_PORT_DIR}/starboard/common/thread.cc
  # TODO: get rid of dependence on Cobalt
  #if (!enable_custom_media_session_client) {
  #  sources += [ "//starboard/shared/media_session/stub_playback_state.cc" ]
  #}
)
