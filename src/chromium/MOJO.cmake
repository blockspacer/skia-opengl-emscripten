#### --- MOJO ---###

#third_party/blink/public/mojom/feature_policy/feature_policy.mojom.h

set(MOJO_CORE_SOURCES
  #${MOJO_DIR}/core/atomic_flag.h
  #${MOJO_DIR}/core/broker.h",
  ## TODO ##${MOJO_DIR}/core/broker_win.cc
  ${MOJO_DIR}/core/channel.cc
  ## TODO ##${MOJO_DIR}/core/channel_win.cc
  ${MOJO_DIR}/core/configuration.cc
  ${MOJO_DIR}/core/connection_params.cc
  ${MOJO_DIR}/core/core.cc
  ${MOJO_DIR}/core/data_pipe_consumer_dispatcher.cc
  ${MOJO_DIR}/core/data_pipe_control_message.cc
  ${MOJO_DIR}/core/data_pipe_producer_dispatcher.cc
  ${MOJO_DIR}/core/dispatcher.cc
  ${MOJO_DIR}/core/entrypoints.cc
  ${MOJO_DIR}/core/handle_table.cc
  ${MOJO_DIR}/core/invitation_dispatcher.cc
  ${MOJO_DIR}/core/message_pipe_dispatcher.cc
  ${MOJO_DIR}/core/node_channel.cc
  #${MOJO_DIR}/core/node_channel.h",
  ${MOJO_DIR}/core/node_controller.cc
  ${MOJO_DIR}/core/platform_handle_dispatcher.cc
  ${MOJO_DIR}/core/platform_handle_in_transit.cc
  #${MOJO_DIR}/core/platform_handle_in_transit.h",
  ${MOJO_DIR}/core/platform_handle_utils.cc
  ${MOJO_DIR}/core/platform_shared_memory_mapping.cc
  ${MOJO_DIR}/core/request_context.cc
  ${MOJO_DIR}/core/scoped_process_handle.cc
  ${MOJO_DIR}/core/shared_buffer_dispatcher.cc
  ${MOJO_DIR}/core/user_message_impl.cc
  ${MOJO_DIR}/core/watch.cc
  #${MOJO_DIR}/core/watch.h",
  ${MOJO_DIR}/core/watcher_dispatcher.cc
  #${MOJO_DIR}/core/watcher_dispatcher.h",
  ${MOJO_DIR}/core/watcher_set.cc
  #${MOJO_DIR}/core/watcher_set.h",
  # if (is_posix) && !is_nacl || is_nacl_nonsfi
  ## TODO ## ${MOJO_DIR}/core/broker_posix.cc
  ## TODO ## ${MOJO_DIR}/core/channel_posix.cc
  #if (!is_nacl || is_nacl_nonsfi)
  ###${MOJO_DIR}/core/broker_host.cc
  ###${MOJO_DIR}/core/broker_host.h
)

set(MOJO_PUBLIC_CPP_BASE_SOURCES
  ${MOJO_DIR}/public/cpp/base/big_buffer.cc
  #${MOJO_DIR}/public/cpp/base/big_buffer.h
  ${MOJO_DIR}/public/cpp/base/shared_memory_utils.cc
  #${MOJO_DIR}/public/cpp/base/shared_memory_utils.h
  #
  #component("shared_typemap_traits")
  #
  ${MOJO_DIR}/public/cpp/base/big_buffer_mojom_traits.cc
  #${MOJO_DIR}/public/cpp/base/big_buffer_mojom_traits.h",
  ${MOJO_DIR}/public/cpp/base/file_info_mojom_traits.cc
  #${MOJO_DIR}/public/cpp/base/file_info_mojom_traits.h",
  # gens mojo/public/mojom/base/file_path.mojom-shared.h
  ${MOJO_DIR}/public/cpp/base/file_path_mojom_traits.cc
  #${MOJO_DIR}/public/cpp/base/file_path_mojom_traits.h",
  # gens mojo/public/mojom/base/shared_memory.mojom-shared.h
  ${MOJO_DIR}/public/cpp/base/shared_memory_mojom_traits.cc
  #${MOJO_DIR}/public/cpp/base/shared_memory_mojom_traits.h",
  ${MOJO_DIR}/public/cpp/base/time_mojom_traits.cc
  #${MOJO_DIR}/public/cpp/base/time_mojom_traits.h",
  ${MOJO_DIR}/public/cpp/base/token_mojom_traits.cc
  #${MOJO_DIR}/public/cpp/base/token_mojom_traits.h",
  ${MOJO_DIR}/public/cpp/base/unguessable_token_mojom_traits.cc
  #${MOJO_DIR}/public/cpp/base/unguessable_token_mojom_traits.h",
  ${MOJO_DIR}/public/cpp/base/values_mojom_traits.cc
  #${MOJO_DIR}/public/cpp/base/values_mojom_traits.h",
)

#set(MOJO_PUBLIC_CPP_BINDINGS_SOURCES
#  ${MOJO_DIR}/public/cpp/base/big_buffer.cc
#)

add_library(MOJO STATIC
  ${MOJO_CORE_SOURCES}
  ${MOJO_PUBLIC_CPP_BASE_SOURCES}
  #${MOJO_PUBLIC_CPP_BINDINGS_SOURCES}
)

target_link_libraries(MOJO PUBLIC
  #dynamic_annotations
  #${BASE_LIBRARIES}
  #
  # MOJO_CORE
  #
  #"+base",
  #"+crypto",
  #"+build",
  #"+native_client/src/public",
  #"+testing",
  #"+third_party/ashmem",
  ## internal includes.
  #"+mojo",
  GCRYPTO
  #ashmem
  base
  #
  # MOJO_PUBLIC
  #
)

set_property(TARGET MOJO PROPERTY CXX_STANDARD 17)

target_include_directories(MOJO PRIVATE
  ${MOJO_DIR}
  ${MOJO_GEN_ROOT_DIR}
  ${BASE_DIR}
)

target_include_directories(MOJO PUBLIC
  ${GEN_MOJO_PUBLIC_DIR}
)


target_compile_definitions(MOJO PRIVATE
  MOJO_SYSTEM_IMPL_IMPLEMENTATION=1 # if (!invoker.for_shared_library)
  # MOJO_CORE_SHARED_LIBRARY
  #MOJO_CORE_LEGACY_PROTOCOL #is_android
  #
  # MOJO_PUBLIC
  #
  IS_MOJO_BASE_IMPL=1
  IS_MOJO_BASE_SHARED_TRAITS_IMPL=1
  #
  #MOJO_COMMON_IMPLEMENTATION
  #MOJO_ENVIRONMENT_IMPL_IMPLEMENTATION
  #MOJO_MESSAGE_PUMP_IMPLEMENTATION
  #MOJO_SYSTEM_IMPL_IMPLEMENTATION
  #MOJO_SYSTEM_IMPLEMENTATION
  #MOJO_USE_SYSTEM_IMPL
)
