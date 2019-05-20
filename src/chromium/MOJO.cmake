#### --- MOJO ---###
#
## TODO https://github.com/chromium/chromium/blob/master/third_party/blink/renderer/platform/BUILD.gn
#set(GIPC_SOURCES
#  # These are the param_traits sources needed by all platforms,
#  # including ios. The rest are added in a conditional block below.
#  ${GIPC_DIR}ipc_message_utils.cc
#  #${GIPC_DIR}ipc_message_utils.h",
#  # ${GIPC_DIR}ipc_mojo_param_traits.cc # TODO
#  #${GIPC_DIR}ipc_mojo_param_traits.h",
#  #${GIPC_DIR}param_traits_log_macros.h",
#  #${GIPC_DIR}param_traits_macros.h",
#  #${GIPC_DIR}param_traits_read_macros.h",
#  #${GIPC_DIR}param_traits_write_macros.h",
#  #${GIPC_DIR}struct_constructor_macros.h",
#  #
#  # !is_ios
#  #
#  # #${GIPC_DIR}ipc_channel.h",
#  # ${GIPC_DIR}ipc_channel_common.cc
#  # ${GIPC_DIR}ipc_channel_factory.cc
#  # #${GIPC_DIR}ipc_channel_factory.h",
#  # #${GIPC_DIR}ipc_channel_handle.h",
#  # # ${GIPC_DIR}ipc_channel_mojo.cc # TODO
#  # #${GIPC_DIR}ipc_channel_mojo.h",
#  # ${GIPC_DIR}ipc_channel_proxy.cc
#  # #${GIPC_DIR}ipc_channel_proxy.h",
#  # ${GIPC_DIR}ipc_channel_reader.cc
#  # #${GIPC_DIR}ipc_channel_reader.h",
#  # #${GIPC_DIR}ipc_listener.h",
#  # ${GIPC_DIR}ipc_logging.cc
#  # #${GIPC_DIR}ipc_logging.h",
#  # #${GIPC_DIR}ipc_message_macros.h",
#  # ${GIPC_DIR}ipc_message_pipe_reader.cc
#  # #${GIPC_DIR}ipc_message_pipe_reader.h",
#  # #${GIPC_DIR}ipc_message_start.h",
#  # #${GIPC_DIR}ipc_message_templates.h",
#  # #${GIPC_DIR}ipc_message_templates_impl.h",
#  # # ${GIPC_DIR}ipc_mojo_bootstrap.cc # TODO
#  # #${GIPC_DIR}ipc_mojo_bootstrap.h",
#  # #${GIPC_DIR}ipc_sender.h",
#  # ${GIPC_DIR}ipc_sync_channel.cc
#  # #${GIPC_DIR}ipc_sync_channel.h",
#  # ${GIPC_DIR}ipc_sync_message_filter.cc
#  # #${GIPC_DIR}ipc_sync_message_filter.h",
#  # ${GIPC_DIR}message_filter.cc
#  # #${GIPC_DIR}message_filter.h",
#  # ${GIPC_DIR}message_filter_router.cc
#  # #${GIPC_DIR}message_filter_router.h",
#  # ${GIPC_DIR}message_router.cc
#  # #${GIPC_DIR}message_router.h",
#  #
#  # ! is_nacl && !is_nacl_nonsfi
#  #
#  # ${GIPC_DIR}ipc_channel.cc
#  #
#  # !is_nacl_nonsfi
#  #
#  # ipc_message_protobuf_utils.h
#)
#
#add_library(GIPC STATIC
#  ${GIPC_SOURCES}
#)
#
#target_link_libraries(GIPC PUBLIC
#  dynamic_annotations
#  ${BASE_LIBRARIES}
#)
#
#set_property(TARGET GIPC PROPERTY CXX_STANDARD 17)
#
#target_include_directories(GIPC PRIVATE
#  ${GIPC_DIR}
#  ${BASE_DIR}
#)
#
#target_compile_definitions(GIPC PRIVATE
#  IS_IPC_IMPL=1
#  # IPC_IMPLEMENTATION
#  # IPC_MOJO_IMPLEMENTATION
#  # IPC_MESSAGE_SUPPORT_IMPL # TODO
#)
