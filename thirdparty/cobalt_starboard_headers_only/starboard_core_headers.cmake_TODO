cmake_minimum_required(VERSION 2.8)

# see https://github.com/blockspacer/cobalt-clone-28052019/blob/master/src/starboard/BUILD.gn
#deps = [
#  "//starboard/common",
#]
list(APPEND starboard_core_SOURCES
  ${COBALT_PORT_DIR}/starboard/atomic.h
  ${COBALT_PORT_DIR}/starboard/audio_sink.h
  ${COBALT_PORT_DIR}/starboard/blitter.h
  ${COBALT_PORT_DIR}/starboard/byte_swap.h
  ${COBALT_PORT_DIR}/starboard/character.h
  ${COBALT_PORT_DIR}/starboard/condition_variable.h
  ${COBALT_PORT_DIR}/starboard/configuration.h
  ${COBALT_PORT_DIR}/starboard/decode_target.h
  ${COBALT_PORT_DIR}/starboard/directory.h
  ${COBALT_PORT_DIR}/starboard/double.h
  ${COBALT_PORT_DIR}/starboard/drm.h
  ${COBALT_PORT_DIR}/starboard/event.h
  ${COBALT_PORT_DIR}/starboard/export.h
  ${COBALT_PORT_DIR}/starboard/file.h
  ${COBALT_PORT_DIR}/starboard/input.h
  ${COBALT_PORT_DIR}/starboard/key.h
  ${COBALT_PORT_DIR}/starboard/log.h
  ${COBALT_PORT_DIR}/starboard/media.h
  ${COBALT_PORT_DIR}/starboard/memory.h
  ${COBALT_PORT_DIR}/starboard/microphone.h
  ${COBALT_PORT_DIR}/starboard/mutex.h
  ${COBALT_PORT_DIR}/starboard/once.h
  ${COBALT_PORT_DIR}/starboard/player.h
  ${COBALT_PORT_DIR}/starboard/queue.h
  ${COBALT_PORT_DIR}/starboard/socket.h
  ${COBALT_PORT_DIR}/starboard/socket_waiter.h
  ${COBALT_PORT_DIR}/starboard/spin_lock.h
  ${COBALT_PORT_DIR}/starboard/storage.h
  ${COBALT_PORT_DIR}/starboard/string.h
  ${COBALT_PORT_DIR}/starboard/system.h
  ${COBALT_PORT_DIR}/starboard/thread.h
  ${COBALT_PORT_DIR}/starboard/thread_types.h
  ${COBALT_PORT_DIR}/starboard/time.h
  ${COBALT_PORT_DIR}/starboard/time_zone.h
  ${COBALT_PORT_DIR}/starboard/types.h
  ${COBALT_PORT_DIR}/starboard/user.h
  ${COBALT_PORT_DIR}/starboard/window.h
  #${COBALT_PORT_DIR}/starboard///starboard/shared/media_session/playback_state.h
)

add_library(starboard_core STATIC
  ${starboard_core_SOURCES}
)

target_link_libraries(starboard_core PUBLIC
  ${base_LIB}
)

set_property(TARGET starboard_core PROPERTY CXX_STANDARD 17)

target_include_directories(starboard_core PRIVATE
  #${UI_PARENT_DIR}
  ${COBALT_CORE_DIR}
  ${COBALT_CORE_PARENT_DIR}
  ${COBALT_COMMON_INCLUDES}
  ${CHROMIUM_DIR} # to third_party/skia/include/core/SkWriteBuffer.h
)

target_compile_definitions(starboard_core PRIVATE
  # starboard/linux/shared/BUILD.gn
  STARBOARD_IMPLEMENTATION=1
  #
  #BASE_IMPLEMENTATION=1
  #BASE_I18N_IMPLEMENTATION=1
  #
  ${COBALT_COMMON_DEFINES}
)

target_compile_definitions(starboard_core PUBLIC
  ${STARBOARD_EXTRA_PUBLIC_FLAGS}
)
