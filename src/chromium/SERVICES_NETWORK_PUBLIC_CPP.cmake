### --- SERVICES_NETWORK_PUBLIC_CPP ---###

list(APPEND SERVICES_NETWORK_PUBLIC_CPP_SOURCES
  ${SERVICES_NETWORK_PUBLIC_CPP_DIR}constants.h
  ${SERVICES_NETWORK_PUBLIC_CPP_DIR}cors/cors.cc
  #${SERVICES_NETWORK_PUBLIC_CPP_DIR}cors/cors.h",
  ${SERVICES_NETWORK_PUBLIC_CPP_DIR}cors/origin_access_entry.cc
  #${SERVICES_NETWORK_PUBLIC_CPP_DIR}cors/origin_access_entry.h",
  ${SERVICES_NETWORK_PUBLIC_CPP_DIR}cors/origin_access_list.cc
  #${SERVICES_NETWORK_PUBLIC_CPP_DIR}cors/origin_access_list.h",
  ${SERVICES_NETWORK_PUBLIC_CPP_DIR}cors/preflight_cache.cc
  #${SERVICES_NETWORK_PUBLIC_CPP_DIR}cors/preflight_cache.h",
  ${SERVICES_NETWORK_PUBLIC_CPP_DIR}cors/preflight_result.cc
  #${SERVICES_NETWORK_PUBLIC_CPP_DIR}cors/preflight_result.h",
  ${SERVICES_NETWORK_PUBLIC_CPP_DIR}cross_thread_shared_url_loader_factory_info.cc
  #${SERVICES_NETWORK_PUBLIC_CPP_DIR}cross_thread_shared_url_loader_factory_info.h",
  ${SERVICES_NETWORK_PUBLIC_CPP_DIR}features.cc
  #${SERVICES_NETWORK_PUBLIC_CPP_DIR}features.h",
  ${SERVICES_NETWORK_PUBLIC_CPP_DIR}is_potentially_trustworthy.cc
  #${SERVICES_NETWORK_PUBLIC_CPP_DIR}is_potentially_trustworthy.h",
  ${SERVICES_NETWORK_PUBLIC_CPP_DIR}net_adapters.cc
  #${SERVICES_NETWORK_PUBLIC_CPP_DIR}net_adapters.h",
  ## TODO ## ${SERVICES_NETWORK_PUBLIC_CPP_DIR}network_connection_tracker.cc
  #${SERVICES_NETWORK_PUBLIC_CPP_DIR}network_connection_tracker.h",
  ## TODO ## ${SERVICES_NETWORK_PUBLIC_CPP_DIR}network_quality_tracker.cc
  #${SERVICES_NETWORK_PUBLIC_CPP_DIR}network_quality_tracker.h",
  ${SERVICES_NETWORK_PUBLIC_CPP_DIR}network_switches.cc
  #${SERVICES_NETWORK_PUBLIC_CPP_DIR}network_switches.h",
  ${SERVICES_NETWORK_PUBLIC_CPP_DIR}resolve_host_client_base.cc
  #${SERVICES_NETWORK_PUBLIC_CPP_DIR}resolve_host_client_base.h",
  ${SERVICES_NETWORK_PUBLIC_CPP_DIR}shared_url_loader_factory.cc
  #${SERVICES_NETWORK_PUBLIC_CPP_DIR}shared_url_loader_factory.h",
  ${SERVICES_NETWORK_PUBLIC_CPP_DIR}simple_url_loader.cc
  #${SERVICES_NETWORK_PUBLIC_CPP_DIR}simple_url_loader.h",
  #${SERVICES_NETWORK_PUBLIC_CPP_DIR}simple_url_loader_stream_consumer.h",
  ${SERVICES_NETWORK_PUBLIC_CPP_DIR}weak_wrapper_shared_url_loader_factory.cc
  #${SERVICES_NETWORK_PUBLIC_CPP_DIR}weak_wrapper_shared_url_loader_factory.h",
  ${SERVICES_NETWORK_PUBLIC_CPP_DIR}wrapper_shared_url_loader_factory.cc
  #${SERVICES_NETWORK_PUBLIC_CPP_DIR}wrapper_shared_url_loader_factory.h",
  #
  # if (!is_ios)
  #
  ## TODO ## ${SERVICES_NETWORK_PUBLIC_CPP_DIR}server/http_connection.cc
  #${SERVICES_NETWORK_PUBLIC_CPP_DIR}server/http_connection.h",
  ## TODO ## ${SERVICES_NETWORK_PUBLIC_CPP_DIR}server/http_server.cc
  #${SERVICES_NETWORK_PUBLIC_CPP_DIR}server/http_server.h",
  ${SERVICES_NETWORK_PUBLIC_CPP_DIR}server/http_server_request_info.cc
  #${SERVICES_NETWORK_PUBLIC_CPP_DIR}server/http_server_request_info.h",
  ${SERVICES_NETWORK_PUBLIC_CPP_DIR}server/http_server_response_info.cc
  #${SERVICES_NETWORK_PUBLIC_CPP_DIR}server/http_server_response_info.h",
  ## TODO ## ${SERVICES_NETWORK_PUBLIC_CPP_DIR}server/web_socket.cc
  #${SERVICES_NETWORK_PUBLIC_CPP_DIR}server/web_socket.h",
  ## TODO ## ${SERVICES_NETWORK_PUBLIC_CPP_DIR}server/web_socket_encoder.cc
  #${SERVICES_NETWORK_PUBLIC_CPP_DIR}server/web_socket_encoder.h",
  #
  #
  # network_cpp_base
  #
  ${SERVICES_NETWORK_PUBLIC_CPP_DIR}cors/cors_error_status.cc
  #${SERVICES_NETWORK_PUBLIC_CPP_DIR}cors/cors_error_status.h",
  ${SERVICES_NETWORK_PUBLIC_CPP_DIR}cors/preflight_timing_info.cc
  #${SERVICES_NETWORK_PUBLIC_CPP_DIR}cors/preflight_timing_info.h",
  ${SERVICES_NETWORK_PUBLIC_CPP_DIR}data_element.cc
  #${SERVICES_NETWORK_PUBLIC_CPP_DIR}data_element.h",
  ${SERVICES_NETWORK_PUBLIC_CPP_DIR}http_raw_request_response_info.cc
  #${SERVICES_NETWORK_PUBLIC_CPP_DIR}http_raw_request_response_info.h",
  ${SERVICES_NETWORK_PUBLIC_CPP_DIR}http_request_headers_mojom_traits.cc
  #${SERVICES_NETWORK_PUBLIC_CPP_DIR}http_request_headers_mojom_traits.h",
  #${SERVICES_NETWORK_PUBLIC_CPP_DIR}mutable_network_traffic_annotation_tag_mojom_traits.h",
  #${SERVICES_NETWORK_PUBLIC_CPP_DIR}mutable_partial_network_traffic_annotation_tag_mojom_traits.h",
  ${SERVICES_NETWORK_PUBLIC_CPP_DIR}net_ipc_param_traits.cc
  #${SERVICES_NETWORK_PUBLIC_CPP_DIR}net_ipc_param_traits.h",
  ${SERVICES_NETWORK_PUBLIC_CPP_DIR}network_ipc_param_traits.cc
  #${SERVICES_NETWORK_PUBLIC_CPP_DIR}network_ipc_param_traits.h",
  ## TODO ## ${SERVICES_NETWORK_PUBLIC_CPP_DIR}p2p_param_traits.cc
  #${SERVICES_NETWORK_PUBLIC_CPP_DIR}p2p_param_traits.h",
  #${SERVICES_NETWORK_PUBLIC_CPP_DIR}p2p_socket_type.h",
  ${SERVICES_NETWORK_PUBLIC_CPP_DIR}proxy_config_mojom_traits.cc
  #${SERVICES_NETWORK_PUBLIC_CPP_DIR}proxy_config_mojom_traits.h",
  ${SERVICES_NETWORK_PUBLIC_CPP_DIR}proxy_config_with_annotation_mojom_traits.cc
  #${SERVICES_NETWORK_PUBLIC_CPP_DIR}proxy_config_with_annotation_mojom_traits.h",
  ${SERVICES_NETWORK_PUBLIC_CPP_DIR}resource_request.cc
  #${SERVICES_NETWORK_PUBLIC_CPP_DIR}resource_request.h",
  ${SERVICES_NETWORK_PUBLIC_CPP_DIR}resource_request_body.cc
  #${SERVICES_NETWORK_PUBLIC_CPP_DIR}resource_request_body.h",
  ${SERVICES_NETWORK_PUBLIC_CPP_DIR}resource_response.cc
  #${SERVICES_NETWORK_PUBLIC_CPP_DIR}resource_response.h",
  ${SERVICES_NETWORK_PUBLIC_CPP_DIR}resource_response_info.cc
  #${SERVICES_NETWORK_PUBLIC_CPP_DIR}resource_response_info.h",
  ${SERVICES_NETWORK_PUBLIC_CPP_DIR}url_loader_completion_status.cc
  #${SERVICES_NETWORK_PUBLIC_CPP_DIR}url_loader_completion_status.h",
  ${SERVICES_NETWORK_PUBLIC_CPP_DIR}url_request_mojom_traits.cc
  #${SERVICES_NETWORK_PUBLIC_CPP_DIR}url_request_mojom_traits.h",
)

# if (current_cpu == "x86" || current_cpu == "x64")
if(TARGET_EMSCRIPTEN)
  ## nothing to do
  #list(APPEND SERVICES_NETWORK_PUBLIC_CPP_OS_PRIVATE_DIRS
  #  ${CHROMIUM_DIR}/web_ports/libxml_wrapper/emscripten # requires "config.h"
  #)
  #list(APPEND SERVICES_NETWORK_PUBLIC_CPP_OS_PUBLIC_DIRS
  #  ${CHROMIUM_DIR}/web_ports/libxml_wrapper/emscripten/include # requires "libxml/xmlversion.h"
  #)
elseif(TARGET_LINUX)
  #if(CMAKE_CL_64)
  #  #
  #else(CMAKE_CL_64)
  #  #list(APPEND SERVICES_NETWORK_PUBLIC_CPP_SOURCES
  #  #  ${SERVICES_NETWORK_PUBLIC_CPP_DIR}intel/filter_sse2_intrinsics.c
  #  #  ${SERVICES_NETWORK_PUBLIC_CPP_DIR}intel/intel_init.c
  #  #)
  #endif(CMAKE_CL_64)
  #list(APPEND SERVICES_NETWORK_PUBLIC_CPP_OS_PRIVATE_DIRS
  #  ${SERVICES_NETWORK_PUBLIC_CPP_DIR}/linux # requires "config.h"
  #  #${SERVICES_NETWORK_PUBLIC_CPP_DIR}/src
  #  # ${SERVICES_NETWORK_PUBLIC_CPP_DIR}/src/include # requires "libxml/parser.h"
  #  #${SERVICES_NETWORK_PUBLIC_CPP_DIR}/src/include/libxml
  #)
  #list(APPEND SERVICES_NETWORK_PUBLIC_CPP_OS_PUBLIC_DIRS
  #  ${SERVICES_NETWORK_PUBLIC_CPP_DIR}/linux/include # requires "libxml/xmlversion.h"
  #)
  ##find_package(ZLIB)
else()
  message(FATAL_ERROR "platform not supported")
endif()

add_library(SERVICES_NETWORK_PUBLIC_CPP STATIC
  ${SERVICES_NETWORK_PUBLIC_CPP_SOURCES}
)

if (EMSCRIPTEN)
  target_link_libraries(SERVICES_NETWORK_PUBLIC_CPP PRIVATE
    ${GNET_LIBS}
    GURL
    #icu # icuuc
  )
else()
  target_link_libraries(SERVICES_NETWORK_PUBLIC_CPP PRIVATE
    ${GNET_LIBS}
    GURL
    ${MOJO_LIB}
    #${BASE_LIBRARIES}
    #base
    #${ZLIB_LIBRARIES}
    #zlib
    #GZLIB
    #icu # icuuc
    COMPONENTS_CONTENT_SETTINGS_CORE_COMMON
  )
endif()

set_property(TARGET SERVICES_NETWORK_PUBLIC_CPP PROPERTY CXX_STANDARD 17)

target_include_directories(SERVICES_NETWORK_PUBLIC_CPP PRIVATE
  ${SERVICES_NETWORK_PUBLIC_CPP_PARENT_DIR}
  ${CHROMIUM_DIR} # for services/network/public/mojom/chunked_data_pipe_getter.mojom-forward.h
  #${SERVICES_NETWORK_PUBLIC_CPP_DIR}
  #${SERVICES_NETWORK_PUBLIC_CPP_DIR}/src
  #${SERVICES_NETWORK_PUBLIC_CPP_OS_PRIVATE_DIRS} # linux/android/...
  #${SERVICES_NETWORK_PUBLIC_CPP_DIR}/src/src
  #${BASE_DIR}
)

target_include_directories(SERVICES_NETWORK_PUBLIC_CPP PUBLIC
  #${SERVICES_NETWORK_PUBLIC_CPP_DIR}/src/include # requires "libxml/xmlreader.h"
  #${SERVICES_NETWORK_PUBLIC_CPP_OS_PUBLIC_DIRS} # linux/android/...
  ${GEN_COMBINED_DIR}
)

target_compile_definitions(SERVICES_NETWORK_PUBLIC_CPP PRIVATE
  IS_NETWORK_CPP_IMPL=1
  IS_NETWORK_CPP_BASE_IMPL=1
  #IS_CHROMECAST
)
