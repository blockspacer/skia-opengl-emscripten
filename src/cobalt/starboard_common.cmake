cmake_minimum_required(VERSION 2.8)

# requires EzTimeValueGetNow = starboard_eztime
 # requires SbThreadGetId = starboard_stub
set(starboard_common_SOURCES
  ${COBALT_PORT_DIR}/starboard/common/byte_swap.h
  ${COBALT_PORT_DIR}/starboard/common/common.cc
  ${COBALT_PORT_DIR}/starboard/common/condition_variable.h
  ${COBALT_PORT_DIR}/starboard/common/flat_map.h
  ${COBALT_PORT_DIR}/starboard/common/log.h
  ${COBALT_PORT_DIR}/starboard/common/log_message.cc
  ${COBALT_PORT_DIR}/starboard/common/memory.cc
  ${COBALT_PORT_DIR}/starboard/common/move.h
  ${COBALT_PORT_DIR}/starboard/common/murmurhash2.h
  ${COBALT_PORT_DIR}/starboard/common/new.cc
  ${COBALT_PORT_DIR}/starboard/common/optional.cc
  ${COBALT_PORT_DIR}/starboard/common/queue.h
  ${COBALT_PORT_DIR}/starboard/common/recursive_mutex.h
  ${COBALT_PORT_DIR}/starboard/common/ref_counted.cc
  ${COBALT_PORT_DIR}/starboard/common/ref_counted.h
  ${COBALT_PORT_DIR}/starboard/common/reset_and_return.h
  ${COBALT_PORT_DIR}/starboard/common/rwlock.h
  ${COBALT_PORT_DIR}/starboard/common/scoped_ptr.h
  ${COBALT_PORT_DIR}/starboard/common/semaphore.h
  ${COBALT_PORT_DIR}/starboard/common/socket.h
  ${COBALT_PORT_DIR}/starboard/common/spin_lock.h
  ${COBALT_PORT_DIR}/starboard/common/state_machine.cc
  ${COBALT_PORT_DIR}/starboard/common/state_machine.h
  ${COBALT_PORT_DIR}/starboard/common/string.h
  ${COBALT_PORT_DIR}/starboard/common/thread_collision_warner.cc
  ${COBALT_PORT_DIR}/starboard/common/thread_collision_warner.h
  ${COBALT_PORT_DIR}/starboard/common/thread.cc
  ${COBALT_PORT_DIR}/starboard/common/thread.h
  # TODO: get rid of dependence on Cobalt
  #if (!enable_custom_media_session_client) {
  #  sources += [ "//starboard/shared/media_session/stub_playback_state.cc" ]
  #}
)

add_library(starboard_common STATIC
  ${starboard_common_SOURCES}
)

target_link_libraries(starboard_common PUBLIC
  base # TODO
  starboard_eztime
  starboard_stub
  #starboard
  modp_b64
  #GFX_GEOMETRY
  #${BASE_LIBRARIES}
  #base
  #SKIA
  dynamic_annotations
  #UI_GFX
  ##BLINK_RENDERER_CORE
  #BLINK_PUBLIC_COMMON
  #BLINK_PUBLIC_MOJOM
  ##BLINK_RENDERER_NETWORK
  #BLINK_RENDERER_PLATFORM
  #GURL
  #GNET
  #GCRYPTO
  #GFX_GEOMETRY
  #UI_GFX
  ## mojo
  ## services/service_manager
  ## services/ws/public/cpp/gpu
  ##${BASE_LIBRARIES}
  #base
  #GLIBXML
  #SKIA
  ##skcms
  #ced
  ## emoji-segmenter
  ## webrtc
  ## zlib
  icu
  ced
  glm
  #CC
  ##G_GPU
  #ANIMATION_CC
  #BASE_CC
  #PAINT_CC
  #SERVICES_NETWORK_PUBLIC_CPP
  #libwebp # requires libpng
  #${libjpeg_LIB}
  #${libjpeg_TURBO_LIB}
  #${libpng_LIB}
  #${iccjpeg_LIB}
  #MOJO
  ##
  ## khronos
  #${khronos_LIB}
  #LIB_V8_INTERFACE
  #COMPONENTS_SCHEDULING_METRICS
  #${HARFBUZZ_LIBRARIES}
  #GMEDIA
  #GZLIB_EXT
  #SERVICES_SERVICE_MANAGER_PUBLIC_CPP
  #GFX_CODEC
)

set_property(TARGET starboard_common PROPERTY CXX_STANDARD 17)

target_include_directories(starboard_common PRIVATE
  #${UI_PARENT_DIR}
  ${COBALT_CORE_DIR}
  ${COBALT_CORE_PARENT_DIR}
  ${COBALT_COMMON_INCLUDES}
  ${CHROMIUM_DIR} # to third_party/skia/include/core/SkWriteBuffer.h
)

target_compile_definitions(starboard_common PRIVATE
  # starboard/linux/shared/BUILD.gn
  STARBOARD_IMPLEMENTATION=1
  #
  #BASE_IMPLEMENTATION=1
  #BASE_I18N_IMPLEMENTATION=1
  #
  ${COBALT_COMMON_DEFINES}
)
