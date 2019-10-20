# see BLINK_RENDERER_PLATFORM.cmake

#### --- BLINK_RENDERER_NETWORK ---###
#
#set(CUR_SRC_DIR ${BLINK_RENDERER_NETWORK_DIR})
#
## path to ...gen/third_party/blink/renderer/network/
#set(CUR_OUT_DIR ${GEN_BLINK_PUBLIC_DIR}/third_party/blink/renderer/platform/network/)
#
#list(APPEND BLINK_RENDERER_NETWORK_GEN_SOURCES
#  ${CUR_OUT_DIR}/http_names.cc
#)
#
#list(APPEND BLINK_RENDERER_NETWORK_SOURCES
#   ${CUR_SRC_DIR}content_security_policy_parsers.cc
#   #${CUR_SRC_DIR}content_security_policy_parsers.h
#   ${CUR_SRC_DIR}content_security_policy_response_headers.cc
#   #${CUR_SRC_DIR}content_security_policy_response_headers.h
#   ${CUR_SRC_DIR}encoded_form_data.cc
#   #${CUR_SRC_DIR}encoded_form_data.h
#   ${CUR_SRC_DIR}encoded_form_data_mojom_traits.cc
#   #${CUR_SRC_DIR}encoded_form_data_mojom_traits.h
#   ${CUR_SRC_DIR}form_data_encoder.cc
#   #${CUR_SRC_DIR}form_data_encoder.h
#   ${CUR_SRC_DIR}header_field_tokenizer.cc
#   #${CUR_SRC_DIR}header_field_tokenizer.h
#   ${CUR_SRC_DIR}http_header_map.cc
#   #${CUR_SRC_DIR}http_header_map.h
#   ${CUR_SRC_DIR}http_parsers.cc
#   #${CUR_SRC_DIR}http_parsers.h
#   ${CUR_SRC_DIR}http_request_headers_mojom_traits.cc
#   #${CUR_SRC_DIR}http_request_headers_mojom_traits.h
#   ${CUR_SRC_DIR}mime/content_type.cc
#   #${CUR_SRC_DIR}mime/content_type.h
#   ${CUR_SRC_DIR}mime/mime_type_from_url.cc
#   #${CUR_SRC_DIR}mime/mime_type_from_url.h
#   ${CUR_SRC_DIR}mime/mime_type_registry.cc
#   #${CUR_SRC_DIR}mime/mime_type_registry.h
#   #${CUR_SRC_DIR}network_log.h
#   ${CUR_SRC_DIR}network_state_notifier.cc
#   #${CUR_SRC_DIR}network_state_notifier.h
#   ${CUR_SRC_DIR}network_utils.cc
#   #${CUR_SRC_DIR}network_utils.h
#   ${CUR_SRC_DIR}parsed_content_disposition.cc
#   #${CUR_SRC_DIR}parsed_content_disposition.h
#   ${CUR_SRC_DIR}parsed_content_header_field_parameters.cc
#   #${CUR_SRC_DIR}parsed_content_header_field_parameters.h
#   ${CUR_SRC_DIR}parsed_content_type.cc
#   #${CUR_SRC_DIR}parsed_content_type.h
#   ${CUR_SRC_DIR}server_timing_header.cc
#   #${CUR_SRC_DIR}server_timing_header.h
#   #${CUR_SRC_DIR}wrapped_data_pipe_getter.h
#)
#
#add_library(BLINK_RENDERER_NETWORK STATIC
#  ${BLINK_RENDERER_NETWORK_SOURCES}
#  ${BLINK_RENDERER_NETWORK_GEN_SOURCES}
#)
#
#target_link_libraries(BLINK_RENDERER_NETWORK PUBLIC
#  base
#  GNET
#  #media
#)
#
#set_property(TARGET BLINK_RENDERER_NETWORK PROPERTY CXX_STANDARD 17)
#
#target_include_directories(BLINK_RENDERER_NETWORK PRIVATE
#  ${CMAKE_CURRENT_SOURCE_DIR}
#  ${BLINK_RENDERER_NETWORK_DIR}
#  #${BASE_DIR}
#  ${CUR_OUT_DIR}
#  ${GEN_BLINK_PUBLIC_DIR}
#)
#
#target_include_directories(BLINK_RENDERER_NETWORK PUBLIC
#  ${GEN_BLINK_PUBLIC_DIR}
#)
#
##target_compile_definitions(BLINK_RENDERER_NETWORK PRIVATE
##  BLINK_CORE_IMPLEMENTATION=1
##  #BLINK_ANIMATION_USE_TIME_DELTA=1
##  #ENABLE_TOUCHLESS_UASTYLE_THEME=1
##)
