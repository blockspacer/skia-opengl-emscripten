#### --- MOJO ---###

#third_party/blink/public/mojom/feature_policy/feature_policy.mojom.h

#set(COLLECTED_MOJO_INTERFACES_GEN_SOURCES)

# see src/chromium/gen/gen_services_network_public/mojo/public/interfaces/bindings/pipe_control_messages.mojom-shared.cc
set(GEN_BLINK_MOJO_PUBLIC_INTERFACES_BINDINGS_DIR ${GEN_COMBINED_DIR}mojo/public/interfaces/bindings/)

if(NOT MOJO_BASE_ONLY)
  add_mojo_prefixes_2(
    ${GEN_BLINK_MOJO_PUBLIC_INTERFACES_BINDINGS_DIR}pipe_control_messages
    "COLLECTED_MOJO_INTERFACES_GEN_SOURCES")
  add_mojo_prefixes_2(${GEN_BLINK_MOJO_PUBLIC_INTERFACES_BINDINGS_DIR}native_struct
    "COLLECTED_MOJO_INTERFACES_GEN_SOURCES")
  add_mojo_prefixes_2(${GEN_BLINK_MOJO_PUBLIC_INTERFACES_BINDINGS_DIR}interface_control_messages
    "COLLECTED_MOJO_INTERFACES_GEN_SOURCES")
  #message(FATAL_ERROR "COLLECTED_MOJO_INTERFACES_GEN_SOURCES=${COLLECTED_MOJO_INTERFACES_GEN_SOURCES}")
  #
  list(APPEND MOJO_INTERFACES_GEN_SOURCES
    ${COLLECTED_MOJO_INTERFACES_GEN_SOURCES}
  )
endif(NOT MOJO_BASE_ONLY)

list(APPEND MOJO_BASE_GEN_SOURCES
  ${GEN_COMBINED_DIR}/mojo/public/mojom/base/application_state.mojom.cc
  ${GEN_COMBINED_DIR}/mojo/public/mojom/base/application_state.mojom-blink.cc
  ${GEN_COMBINED_DIR}/mojo/public/mojom/base/application_state.mojom-shared.cc
  ${GEN_COMBINED_DIR}/mojo/public/mojom/base/big_buffer.mojom.cc
  ${GEN_COMBINED_DIR}/mojo/public/mojom/base/big_buffer.mojom-blink.cc
  ${GEN_COMBINED_DIR}/mojo/public/mojom/base/big_buffer.mojom-shared.cc
  ${GEN_COMBINED_DIR}/mojo/public/mojom/base/big_string.mojom.cc
  ${GEN_COMBINED_DIR}/mojo/public/mojom/base/big_string.mojom-blink.cc
  ${GEN_COMBINED_DIR}/mojo/public/mojom/base/big_string.mojom-shared.cc
  ${GEN_COMBINED_DIR}/mojo/public/mojom/base/file.mojom.cc
  ${GEN_COMBINED_DIR}/mojo/public/mojom/base/file.mojom-blink.cc
  ${GEN_COMBINED_DIR}/mojo/public/mojom/base/file.mojom-shared.cc
  ${GEN_COMBINED_DIR}/mojo/public/mojom/base/file_error.mojom.cc
  ${GEN_COMBINED_DIR}/mojo/public/mojom/base/file_error.mojom-blink.cc
  ${GEN_COMBINED_DIR}/mojo/public/mojom/base/file_error.mojom-shared.cc
  ${GEN_COMBINED_DIR}/mojo/public/mojom/base/file_info.mojom.cc
  ${GEN_COMBINED_DIR}/mojo/public/mojom/base/file_info.mojom-blink.cc
  ${GEN_COMBINED_DIR}/mojo/public/mojom/base/file_info.mojom-shared.cc
  ${GEN_COMBINED_DIR}/mojo/public/mojom/base/file_path.mojom.cc
  ${GEN_COMBINED_DIR}/mojo/public/mojom/base/file_path.mojom-blink.cc
  ${GEN_COMBINED_DIR}/mojo/public/mojom/base/file_path.mojom-shared.cc
  ${GEN_COMBINED_DIR}/mojo/public/mojom/base/memory_allocator_dump_cross_process_uid.mojom.cc
  ${GEN_COMBINED_DIR}/mojo/public/mojom/base/memory_allocator_dump_cross_process_uid.mojom-blink.cc
  ${GEN_COMBINED_DIR}/mojo/public/mojom/base/memory_allocator_dump_cross_process_uid.mojom-shared.cc
  ${GEN_COMBINED_DIR}/mojo/public/mojom/base/memory_pressure_level.mojom.cc
  ${GEN_COMBINED_DIR}/mojo/public/mojom/base/memory_pressure_level.mojom-blink.cc
  ${GEN_COMBINED_DIR}/mojo/public/mojom/base/memory_pressure_level.mojom-shared.cc
  ${GEN_COMBINED_DIR}/mojo/public/mojom/base/process_id.mojom.cc
  ${GEN_COMBINED_DIR}/mojo/public/mojom/base/process_id.mojom-blink.cc
  ${GEN_COMBINED_DIR}/mojo/public/mojom/base/process_id.mojom-shared.cc
  ${GEN_COMBINED_DIR}/mojo/public/mojom/base/ref_counted_memory.mojom.cc
  ${GEN_COMBINED_DIR}/mojo/public/mojom/base/ref_counted_memory.mojom-blink.cc
  ${GEN_COMBINED_DIR}/mojo/public/mojom/base/ref_counted_memory.mojom-shared.cc
  ${GEN_COMBINED_DIR}/mojo/public/mojom/base/shared_memory.mojom.cc
  ${GEN_COMBINED_DIR}/mojo/public/mojom/base/shared_memory.mojom-blink.cc
  ${GEN_COMBINED_DIR}/mojo/public/mojom/base/shared_memory.mojom-shared.cc
  ${GEN_COMBINED_DIR}/mojo/public/mojom/base/string16.mojom.cc
  ${GEN_COMBINED_DIR}/mojo/public/mojom/base/string16.mojom-blink.cc
  ${GEN_COMBINED_DIR}/mojo/public/mojom/base/string16.mojom-shared.cc
  ${GEN_COMBINED_DIR}/mojo/public/mojom/base/text_direction.mojom.cc
  ${GEN_COMBINED_DIR}/mojo/public/mojom/base/text_direction.mojom-blink.cc
  ${GEN_COMBINED_DIR}/mojo/public/mojom/base/text_direction.mojom-shared.cc
  ${GEN_COMBINED_DIR}/mojo/public/mojom/base/thread_priority.mojom.cc
  ${GEN_COMBINED_DIR}/mojo/public/mojom/base/thread_priority.mojom-blink.cc
  ${GEN_COMBINED_DIR}/mojo/public/mojom/base/thread_priority.mojom-shared.cc
  ${GEN_COMBINED_DIR}/mojo/public/mojom/base/time.mojom.cc
  ${GEN_COMBINED_DIR}/mojo/public/mojom/base/time.mojom-blink.cc
  ${GEN_COMBINED_DIR}/mojo/public/mojom/base/time.mojom-shared.cc
  ${GEN_COMBINED_DIR}/mojo/public/mojom/base/text_direction.mojom.cc
  ${GEN_COMBINED_DIR}/mojo/public/mojom/base/text_direction.mojom-blink.cc
  ${GEN_COMBINED_DIR}/mojo/public/mojom/base/text_direction.mojom-shared.cc
  ${GEN_COMBINED_DIR}/mojo/public/mojom/base/token.mojom.cc
  ${GEN_COMBINED_DIR}/mojo/public/mojom/base/token.mojom-blink.cc
  ${GEN_COMBINED_DIR}/mojo/public/mojom/base/token.mojom-shared.cc
  ${GEN_COMBINED_DIR}/mojo/public/mojom/base/unguessable_token.mojom.cc
  ${GEN_COMBINED_DIR}/mojo/public/mojom/base/unguessable_token.mojom-blink.cc
  ${GEN_COMBINED_DIR}/mojo/public/mojom/base/unguessable_token.mojom-shared.cc
  ${GEN_COMBINED_DIR}/mojo/public/mojom/base/values.mojom.cc
  ${GEN_COMBINED_DIR}/mojo/public/mojom/base/values.mojom-blink.cc
  ${GEN_COMBINED_DIR}/mojo/public/mojom/base/values.mojom-shared.cc
  #
  #logfont_win # if (is_win)
  #
  #file_path_is_string16 #if (is_win)
  # TODO # ${GEN_COMBINED_DIR}/mojo/public/mojom/base/file_path_is_string.mojom.cc #if (!is_win)
  #
  ${GEN_COMBINED_DIR}/mojo/public/mojom/base/read_only_buffer.mojom.cc
)

#if(ENABLE_GIPC)
  list(APPEND MOJO_PUBLIC_CPP_BASE_SOURCES
    # see process_id.typemap
    #${MOJO_DIR}/public/cpp/base/file_error_mojom_traits.h # header only
    ${MOJO_DIR}/public/cpp/base/file_info_mojom_traits.cc
    ${MOJO_DIR}/public/cpp/base/file_path_mojom_traits.cc
    ${MOJO_DIR}/public/cpp/base/file_mojom_traits.cc
    ${MOJO_DIR}/public/cpp/base/read_only_buffer_mojom_traits.cc
    ${MOJO_DIR}/public/cpp/base/memory_allocator_dump_cross_process_uid_mojom_traits.cc
    ${MOJO_DIR}/public/cpp/base/memory_pressure_level_mojom_traits.cc
    ${MOJO_DIR}/public/cpp/base/process_id_mojom_traits.cc
    ${MOJO_DIR}/public/cpp/base/ref_counted_memory_mojom_traits.cc
    ${MOJO_DIR}/public/cpp/base/shared_memory_mojom_traits.cc
    ${MOJO_DIR}/public/cpp/base/string16_mojom_traits.cc
    #${MOJO_DIR}/public/cpp/base/logfont_win_mojom_traits.cc # windows
    ${MOJO_DIR}/public/cpp/base/text_direction_mojom_traits.cc
    ${MOJO_DIR}/public/cpp/base/thread_priority_mojom_traits.cc
    ${MOJO_DIR}/public/cpp/base/time_mojom_traits.cc
    ${MOJO_DIR}/public/cpp/base/token_mojom_traits.cc
    ${MOJO_DIR}/public/cpp/base/unguessable_token_mojom_traits.cc
    ${MOJO_DIR}/public/cpp/base/values_mojom_traits.cc
    #${MOJO_DIR}/public/cpp/base/application_state_mojom_traits.cc # android
    ${MOJO_DIR}/public/cpp/base/big_buffer_mojom_traits.cc
    ${MOJO_DIR}/public/cpp/base/big_string_mojom_traits.cc
    #
    #component("shared_typemap_traits")
    #
    ${MOJO_DIR}/public/cpp/base/big_buffer_mojom_traits.cc
    #${MOJO_DIR}/public/cpp/base/big_buffer_mojom_traits.h
    ${MOJO_DIR}/public/cpp/base/file_info_mojom_traits.cc
    #${MOJO_DIR}/public/cpp/base/file_info_mojom_traits.h
    # gens mojo/public/mojom/base/file_path.mojom-shared.h
    ${MOJO_DIR}/public/cpp/base/file_path_mojom_traits.cc
    #${MOJO_DIR}/public/cpp/base/file_path_mojom_traits.h
    # gens mojo/public/mojom/base/shared_memory.mojom-shared.h
    ${MOJO_DIR}/public/cpp/base/shared_memory_mojom_traits.cc
    #${MOJO_DIR}/public/cpp/base/shared_memory_mojom_traits.h
    ${MOJO_DIR}/public/cpp/base/time_mojom_traits.cc
    #${MOJO_DIR}/public/cpp/base/time_mojom_traits.h
    ${MOJO_DIR}/public/cpp/base/token_mojom_traits.cc
    #${MOJO_DIR}/public/cpp/base/token_mojom_traits.h
    ${MOJO_DIR}/public/cpp/base/unguessable_token_mojom_traits.cc
    #${MOJO_DIR}/public/cpp/base/unguessable_token_mojom_traits.h
    ${MOJO_DIR}/public/cpp/base/values_mojom_traits.cc
    #${MOJO_DIR}/public/cpp/base/values_mojom_traits.h
  )
#endif(ENABLE_GIPC)

list(APPEND MOJO_PUBLIC_CPP_BASE_SOURCES
  #
  ${MOJO_DIR}/public/cpp/base/big_buffer.cc
  #${MOJO_DIR}/public/cpp/base/big_buffer.h
  ${MOJO_DIR}/public/cpp/base/shared_memory_utils.cc
  #${MOJO_DIR}/public/cpp/base/shared_memory_utils.h
)

#message(FATAL_ERROR  ${GEN_COMBINED_DIR}/mojo/public/mojom/base/read_only_buffer.mojom.cc)

list(APPEND MOJO_CORE_SOURCES
  #${MOJO_DIR}/core/atomic_flag.h
  #${MOJO_DIR}/core/broker.h
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
  #${MOJO_DIR}/core/node_channel.h
  ${MOJO_DIR}/core/node_controller.cc
  ${MOJO_DIR}/core/platform_handle_dispatcher.cc
  ${MOJO_DIR}/core/platform_handle_in_transit.cc
  #${MOJO_DIR}/core/platform_handle_in_transit.h
  ${MOJO_DIR}/core/platform_handle_utils.cc
  ${MOJO_DIR}/core/platform_shared_memory_mapping.cc
  ${MOJO_DIR}/core/request_context.cc
  ${MOJO_DIR}/core/scoped_process_handle.cc
  ${MOJO_DIR}/core/shared_buffer_dispatcher.cc
  ${MOJO_DIR}/core/user_message_impl.cc
  ${MOJO_DIR}/core/watch.cc
  #${MOJO_DIR}/core/watch.h
  ${MOJO_DIR}/core/watcher_dispatcher.cc
  #${MOJO_DIR}/core/watcher_dispatcher.h
  ${MOJO_DIR}/core/watcher_set.cc
  #${MOJO_DIR}/core/watcher_set.h
  # if (is_posix) && !is_nacl || is_nacl_nonsfi
  ## TODO ## ${MOJO_DIR}/core/broker_posix.cc
  ## TODO ## ${MOJO_DIR}/core/channel_posix.cc
  #if (!is_nacl || is_nacl_nonsfi)
  ###${MOJO_DIR}/core/broker_host.cc
  ###${MOJO_DIR}/core/broker_host.h
)

if(NOT MOJO_BASE_ONLY)
  list(APPEND MOJO_PUBLIC_C_SYSTEM_SOURCES
    ${MOJO_DIR}/public/c/system/thunks.cc
  )

  list(APPEND MOJO_PUBLIC_CPP_SYSTEM_SOURCES
    ${MOJO_DIR}/public/cpp/system/buffer.cc
    #${MOJO_DIR}/public/cpp/system/buffer.h
    #${MOJO_DIR}/public/cpp/system/core.h
    ${MOJO_DIR}/public/cpp/system/data_pipe.cc
    #${MOJO_DIR}/public/cpp/system/data_pipe.h
    ${MOJO_DIR}/public/cpp/system/data_pipe_drainer.cc
    #${MOJO_DIR}/public/cpp/system/data_pipe_drainer.h
    ${MOJO_DIR}/public/cpp/system/data_pipe_utils.cc
    #${MOJO_DIR}/public/cpp/system/data_pipe_utils.h
    ${MOJO_DIR}/public/cpp/system/file_data_pipe_producer.cc
    #${MOJO_DIR}/public/cpp/system/file_data_pipe_producer.h
    #${MOJO_DIR}/public/cpp/system/functions.h
    #${MOJO_DIR}/public/cpp/system/handle.h
    ${MOJO_DIR}/public/cpp/system/handle_signal_tracker.cc
    #${MOJO_DIR}/public/cpp/system/handle_signal_tracker.h
    #${MOJO_DIR}/public/cpp/system/handle_signals_state.h
    ${MOJO_DIR}/public/cpp/system/invitation.cc
    #${MOJO_DIR}/public/cpp/system/invitation.h
    ${MOJO_DIR}/public/cpp/system/isolated_connection.cc
    #${MOJO_DIR}/public/cpp/system/isolated_connection.h
    #${MOJO_DIR}/public/cpp/system/message.h
    ${MOJO_DIR}/public/cpp/system/message_pipe.cc
    #${MOJO_DIR}/public/cpp/system/message_pipe.h
    ${MOJO_DIR}/public/cpp/system/platform_handle.cc
    #${MOJO_DIR}/public/cpp/system/platform_handle.h
    ${MOJO_DIR}/public/cpp/system/scope_to_message_pipe.cc
    #${MOJO_DIR}/public/cpp/system/scope_to_message_pipe.h
    ${MOJO_DIR}/public/cpp/system/simple_watcher.cc
    #${MOJO_DIR}/public/cpp/system/simple_watcher.h
    ${MOJO_DIR}/public/cpp/system/string_data_pipe_producer.cc
    #${MOJO_DIR}/public/cpp/system/string_data_pipe_producer.h
    #${MOJO_DIR}/public/cpp/system/system_export.h
    ${MOJO_DIR}/public/cpp/system/trap.cc
    #${MOJO_DIR}/public/cpp/system/trap.h
    ${MOJO_DIR}/public/cpp/system/wait.cc
    #${MOJO_DIR}/public/cpp/system/wait.h
    ${MOJO_DIR}/public/cpp/system/wait_set.cc
    #${MOJO_DIR}/public/cpp/system/wait_set.h
  )

  list(APPEND MOJO_PUBLIC_CPP_PLATFORM_SOURCES
    ${MOJO_DIR}/public/cpp/platform/features.h
    ${MOJO_DIR}/public/cpp/platform/platform_channel.h
    ${MOJO_DIR}/public/cpp/platform/platform_channel_endpoint.h
    ${MOJO_DIR}/public/cpp/platform/platform_channel_server_endpoint.h
    ${MOJO_DIR}/public/cpp/platform/platform_handle.h
    #
    ${MOJO_DIR}/public/cpp/platform/features.cc
    ## TODO ## ${MOJO_DIR}/public/cpp/platform/named_platform_channel_win.cc
    ${MOJO_DIR}/public/cpp/platform/platform_channel.cc
    ${MOJO_DIR}/public/cpp/platform/platform_channel_endpoint.cc
    ${MOJO_DIR}/public/cpp/platform/platform_channel_server_endpoint.cc
    ${MOJO_DIR}/public/cpp/platform/platform_handle.cc
    #
    #if (is_posix && (!is_nacl || is_nacl_nonsfi)) {
    #  public += [ "socket_utils_posix.h" ]
    #  sources += [ "socket_utils_posix.cc" ]
    #}
    #
    #if (is_posix && !is_nacl) {
    #  sources += [ "named_platform_channel_posix.cc" ]
    #}
    #
    #if (is_mac) {
    #  sources += [ "named_platform_channel_mac.cc" ]
    #}
    #
    #if (is_fuchsia) {
    #  public_deps += [
    #    "//third_party/fuchsia-sdk/sdk:fdio",
    #    "//third_party/fuchsia-sdk/sdk:zx",
    #  ]
    #}
    #
    #if (!is_fuchsia) {
    #  sources += [ "named_platform_channel.cc" ]
    #  public += [ "named_platform_channel.h" ]
    #}
  )

  list(APPEND MOJO_PUBLIC_CPP_BINDINGS_SOURCES
    # component("bindings_base")
    #${MOJO_DIR}/public/cpp/bindings/array_data_view.h
    #${MOJO_DIR}/public/cpp/bindings/array_traits.h
    #${MOJO_DIR}/public/cpp/bindings/array_traits_span.h
    #${MOJO_DIR}/public/cpp/bindings/array_traits_stl.h
    #${MOJO_DIR}/public/cpp/bindings/associated_group.h
    #${MOJO_DIR}/public/cpp/bindings/associated_group_controller.h
    #${MOJO_DIR}/public/cpp/bindings/clone_traits.h
    #${MOJO_DIR}/public/cpp/bindings/disconnect_reason.h
    #${MOJO_DIR}/public/cpp/bindings/enum_traits.h
    #${MOJO_DIR}/public/cpp/bindings/equals_traits.h
    ${MOJO_DIR}/public/cpp/bindings/features.cc
    #${MOJO_DIR}/public/cpp/bindings/features.h
    #${MOJO_DIR}/public/cpp/bindings/interface_data_view.h
    #${MOJO_DIR}/public/cpp/bindings/interface_id.h
    ${MOJO_DIR}/public/cpp/bindings/lib/array_internal.cc
    #${MOJO_DIR}/public/cpp/bindings/lib/array_internal.h
    #${MOJO_DIR}/public/cpp/bindings/lib/array_serialization.h
    ${MOJO_DIR}/public/cpp/bindings/lib/associated_group.cc
    ${MOJO_DIR}/public/cpp/bindings/lib/associated_group_controller.cc
    #${MOJO_DIR}/public/cpp/bindings/lib/bindings_internal.h
    ${MOJO_DIR}/public/cpp/bindings/lib/buffer.cc
    #${MOJO_DIR}/public/cpp/bindings/lib/buffer.h
    ${MOJO_DIR}/public/cpp/bindings/lib/fixed_buffer.cc
    #${MOJO_DIR}/public/cpp/bindings/lib/fixed_buffer.h
    #${MOJO_DIR}/public/cpp/bindings/lib/handle_serialization.h
    #${MOJO_DIR}/public/cpp/bindings/lib/hash_util.h
    #${MOJO_DIR}/public/cpp/bindings/lib/map_data_internal.h
    #${MOJO_DIR}/public/cpp/bindings/lib/map_serialization.h
    #${MOJO_DIR}/public/cpp/bindings/lib/may_auto_lock.h
    ${MOJO_DIR}/public/cpp/bindings/lib/message.cc
    ${MOJO_DIR}/public/cpp/bindings/lib/message_header_validator.cc
    ${MOJO_DIR}/public/cpp/bindings/lib/message_internal.cc
    #${MOJO_DIR}/public/cpp/bindings/lib/message_internal.h
    ${MOJO_DIR}/public/cpp/bindings/lib/scoped_interface_endpoint_handle.cc
    #${MOJO_DIR}/public/cpp/bindings/lib/serialization.h
    ${MOJO_DIR}/public/cpp/bindings/lib/serialization_context.cc
    #${MOJO_DIR}/public/cpp/bindings/lib/serialization_context.h
    #${MOJO_DIR}/public/cpp/bindings/lib/serialization_forward.h
    #${MOJO_DIR}/public/cpp/bindings/lib/serialization_util.h
    #${MOJO_DIR}/public/cpp/bindings/lib/string_serialization.h
    #${MOJO_DIR}/public/cpp/bindings/lib/template_util.h
    #${MOJO_DIR}/public/cpp/bindings/lib/tracing_helper.h
    ${MOJO_DIR}/public/cpp/bindings/lib/unserialized_message_context.cc
    #${MOJO_DIR}/public/cpp/bindings/lib/unserialized_message_context.h
    #${MOJO_DIR}/public/cpp/bindings/lib/validate_params.h
    ${MOJO_DIR}/public/cpp/bindings/lib/validation_context.cc
    #${MOJO_DIR}/public/cpp/bindings/lib/validation_context.h
    ${MOJO_DIR}/public/cpp/bindings/lib/validation_errors.cc
    #${MOJO_DIR}/public/cpp/bindings/lib/validation_errors.h
    ${MOJO_DIR}/public/cpp/bindings/lib/validation_util.cc
    #${MOJO_DIR}/public/cpp/bindings/lib/validation_util.h
    #${MOJO_DIR}/public/cpp/bindings/map.h
    #${MOJO_DIR}/public/cpp/bindings/map_data_view.h
    #${MOJO_DIR}/public/cpp/bindings/map_traits.h
    #${MOJO_DIR}/public/cpp/bindings/map_traits_flat_map.h
    #${MOJO_DIR}/public/cpp/bindings/map_traits_stl.h
    #${MOJO_DIR}/public/cpp/bindings/message.h
    #${MOJO_DIR}/public/cpp/bindings/message_header_validator.h
    #${MOJO_DIR}/public/cpp/bindings/scoped_interface_endpoint_handle.h
    #${MOJO_DIR}/public/cpp/bindings/string_data_view.h
    #${MOJO_DIR}/public/cpp/bindings/string_traits.h
    #${MOJO_DIR}/public/cpp/bindings/string_traits_stl.h
    #${MOJO_DIR}/public/cpp/bindings/string_traits_string_piece.h
    #${MOJO_DIR}/public/cpp/bindings/struct_ptr.h
    #${MOJO_DIR}/public/cpp/bindings/struct_traits.h
    #${MOJO_DIR}/public/cpp/bindings/type_converter.h
    #${MOJO_DIR}/public/cpp/bindings/union_traits.h
    #component("bindings")
    #${MOJO_DIR}/public/cpp/bindings/associated_binding.h
    #${MOJO_DIR}/public/cpp/bindings/associated_binding_set.h
    #${MOJO_DIR}/public/cpp/bindings/associated_interface_ptr.h
    #${MOJO_DIR}/public/cpp/bindings/associated_interface_ptr_info.h
    #${MOJO_DIR}/public/cpp/bindings/associated_interface_request.h
    #${MOJO_DIR}/public/cpp/bindings/associated_receiver.h
    #${MOJO_DIR}/public/cpp/bindings/associated_receiver_set.h
    #${MOJO_DIR}/public/cpp/bindings/associated_remote.h
    #${MOJO_DIR}/public/cpp/bindings/binding.h
    #${MOJO_DIR}/public/cpp/bindings/binding_set.h
    #${MOJO_DIR}/public/cpp/bindings/callback_helpers.h
    #${MOJO_DIR}/public/cpp/bindings/connection_error_callback.h
    #${MOJO_DIR}/public/cpp/bindings/connector.h
    #${MOJO_DIR}/public/cpp/bindings/filter_chain.h
    #${MOJO_DIR}/public/cpp/bindings/interface_endpoint_client.h
    #${MOJO_DIR}/public/cpp/bindings/interface_endpoint_controller.h
    #${MOJO_DIR}/public/cpp/bindings/interface_ptr.h
    #${MOJO_DIR}/public/cpp/bindings/interface_ptr_info.h
    #${MOJO_DIR}/public/cpp/bindings/interface_ptr_set.h
    #${MOJO_DIR}/public/cpp/bindings/interface_request.h
    ${MOJO_DIR}/public/cpp/bindings/lib/associated_binding.cc
    ${MOJO_DIR}/public/cpp/bindings/lib/associated_interface_ptr.cc
    ${MOJO_DIR}/public/cpp/bindings/lib/associated_interface_ptr_state.cc
    #${MOJO_DIR}/public/cpp/bindings/lib/associated_interface_ptr_state.h
    ${MOJO_DIR}/public/cpp/bindings/lib/binding_state.cc
    #${MOJO_DIR}/public/cpp/bindings/lib/binding_state.h
    ${MOJO_DIR}/public/cpp/bindings/lib/connector.cc
    ${MOJO_DIR}/public/cpp/bindings/lib/control_message_handler.cc
    #${MOJO_DIR}/public/cpp/bindings/lib/control_message_handler.h
    ${MOJO_DIR}/public/cpp/bindings/lib/control_message_proxy.cc
    #${MOJO_DIR}/public/cpp/bindings/lib/control_message_proxy.h
    ${MOJO_DIR}/public/cpp/bindings/lib/filter_chain.cc
    ${MOJO_DIR}/public/cpp/bindings/lib/interface_endpoint_client.cc
    ${MOJO_DIR}/public/cpp/bindings/lib/interface_ptr_state.cc
    #${MOJO_DIR}/public/cpp/bindings/lib/interface_ptr_state.h
    #${MOJO_DIR}/public/cpp/bindings/lib/interface_serialization.h
    ${MOJO_DIR}/public/cpp/bindings/lib/multiplex_router.cc
    #${MOJO_DIR}/public/cpp/bindings/lib/multiplex_router.h
    #${MOJO_DIR}/public/cpp/bindings/lib/native_enum_data.h
    #${MOJO_DIR}/public/cpp/bindings/lib/native_enum_serialization.h
    ${MOJO_DIR}/public/cpp/bindings/lib/native_struct_serialization.cc
    #${MOJO_DIR}/public/cpp/bindings/lib/native_struct_serialization.h
    ${MOJO_DIR}/public/cpp/bindings/lib/pipe_control_message_handler.cc
    ${MOJO_DIR}/public/cpp/bindings/lib/pipe_control_message_proxy.cc
    ${MOJO_DIR}/public/cpp/bindings/lib/sequence_local_sync_event_watcher.cc
    ${MOJO_DIR}/public/cpp/bindings/lib/sync_call_restrictions.cc
    ${MOJO_DIR}/public/cpp/bindings/lib/sync_event_watcher.cc
    ${MOJO_DIR}/public/cpp/bindings/lib/sync_handle_registry.cc
    ${MOJO_DIR}/public/cpp/bindings/lib/sync_handle_watcher.cc
    ${MOJO_DIR}/public/cpp/bindings/lib/task_runner_helper.cc
    #${MOJO_DIR}/public/cpp/bindings/lib/task_runner_helper.h
    #${MOJO_DIR}/public/cpp/bindings/native_enum.h
    #${MOJO_DIR}/public/cpp/bindings/pending_associated_receiver.h
    #${MOJO_DIR}/public/cpp/bindings/pending_associated_remote.h
    #${MOJO_DIR}/public/cpp/bindings/pending_receiver.h
    #${MOJO_DIR}/public/cpp/bindings/pending_remote.h
    #${MOJO_DIR}/public/cpp/bindings/pipe_control_message_handler.h
    #${MOJO_DIR}/public/cpp/bindings/pipe_control_message_handler_delegate.h
    #${MOJO_DIR}/public/cpp/bindings/pipe_control_message_proxy.h
    #${MOJO_DIR}/public/cpp/bindings/raw_ptr_impl_ref_traits.h
    #${MOJO_DIR}/public/cpp/bindings/receiver.h
    #${MOJO_DIR}/public/cpp/bindings/receiver_set.h
    #${MOJO_DIR}/public/cpp/bindings/remote.h
    #${MOJO_DIR}/public/cpp/bindings/sequence_local_sync_event_watcher.h
    #${MOJO_DIR}/public/cpp/bindings/shared_associated_remote.h
    #${MOJO_DIR}/public/cpp/bindings/shared_remote.h
    #${MOJO_DIR}/public/cpp/bindings/strong_associated_binding.h
    #${MOJO_DIR}/public/cpp/bindings/strong_binding.h
    #${MOJO_DIR}/public/cpp/bindings/strong_binding_set.h
    #${MOJO_DIR}/public/cpp/bindings/sync_call_restrictions.h
    #${MOJO_DIR}/public/cpp/bindings/sync_event_watcher.h
    #${MOJO_DIR}/public/cpp/bindings/sync_handle_registry.h
    #${MOJO_DIR}/public/cpp/bindings/sync_handle_watcher.h
    #${MOJO_DIR}/public/cpp/bindings/thread_safe_interface_ptr.h
    #${MOJO_DIR}/public/cpp/bindings/unique_ptr_impl_ref_traits.h
    #${MOJO_DIR}/public/cpp/bindings/unique_receiver_set.h
    # source_set("wtf_support")
    ${MOJO_DIR}/public/cpp/bindings/lib/string_traits_wtf.cc
  )
endif(NOT MOJO_BASE_ONLY)

add_library(MOJO STATIC
  ${MOJO_CORE_SOURCES}
  ${MOJO_PUBLIC_CPP_BASE_SOURCES}
  ${MOJO_PUBLIC_CPP_BINDINGS_SOURCES}
  ${MOJO_INTERFACES_GEN_SOURCES}
  ${MOJO_BASE_GEN_SOURCES}
  ${MOJO_PUBLIC_C_SYSTEM_SOURCES}
  ${MOJO_PUBLIC_CPP_PLATFORM_SOURCES}
  ${MOJO_PUBLIC_CPP_SYSTEM_SOURCES}
)

target_link_libraries(MOJO PRIVATE
  ${WTF_LIBRARY_NAME}
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
  ${GCRYPTO_LIB}
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
  ${GEN_COMBINED_DIR}
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
  IS_MOJO_CPP_BINDINGS_BASE_IMPL=1
  IS_MOJO_CPP_BINDINGS_IMPL=1
  MOJO_SYSTEM_IMPLEMENTATION=1
  MOJO_CPP_SYSTEM_IMPLEMENTATION=1
  IS_MOJO_CPP_PLATFORM_IMPL=1
  #
  #MOJO_COMMON_IMPLEMENTATION
  #MOJO_ENVIRONMENT_IMPL_IMPLEMENTATION
  #MOJO_MESSAGE_PUMP_IMPLEMENTATION
  #MOJO_SYSTEM_IMPL_IMPLEMENTATION
  #MOJO_SYSTEM_IMPLEMENTATION
  #MOJO_USE_SYSTEM_IMPL
)
