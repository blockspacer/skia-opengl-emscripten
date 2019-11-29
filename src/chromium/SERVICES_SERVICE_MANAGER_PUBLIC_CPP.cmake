### --- SERVICES_SERVICE_MANAGER_PUBLIC_CPP ---###

set(GEN_BLINK_SERVICES_SM_PUBLIC_MOJOM_DIR ${GEN_COMBINED_DIR}services/service_manager/public/mojom/)

# ls src/chromium/gen/gen_blink_public/services/service_manager/public/mojom/ | grep *.cc
list(APPEND SERVICES_SERVICE_MANAGER_GEN_SOURCES
  #${SERVICES_SERVICE_MANAGER_PUBLIC_DIR}mojom.cc
  ${GEN_BLINK_SERVICES_SM_PUBLIC_MOJOM_DIR}connector.mojom.cc
  ${GEN_BLINK_SERVICES_SM_PUBLIC_MOJOM_DIR}connector.mojom-shared.cc
  ${GEN_BLINK_SERVICES_SM_PUBLIC_MOJOM_DIR}connector.mojom-blink.cc
  #
  ${GEN_BLINK_SERVICES_SM_PUBLIC_MOJOM_DIR}interface_provider.mojom.cc
  ${GEN_BLINK_SERVICES_SM_PUBLIC_MOJOM_DIR}interface_provider.mojom-shared.cc
  ${GEN_BLINK_SERVICES_SM_PUBLIC_MOJOM_DIR}interface_provider.mojom-blink.cc
  #
  ${GEN_BLINK_SERVICES_SM_PUBLIC_MOJOM_DIR}interface_provider_spec.mojom.cc
  ${GEN_BLINK_SERVICES_SM_PUBLIC_MOJOM_DIR}interface_provider_spec.mojom-shared.cc
  ${GEN_BLINK_SERVICES_SM_PUBLIC_MOJOM_DIR}interface_provider_spec.mojom-blink.cc
  #
  ${GEN_BLINK_SERVICES_SM_PUBLIC_MOJOM_DIR}service.mojom.cc
  ${GEN_BLINK_SERVICES_SM_PUBLIC_MOJOM_DIR}service.mojom-shared.cc
  ${GEN_BLINK_SERVICES_SM_PUBLIC_MOJOM_DIR}service.mojom-blink.cc
  #
  ${GEN_BLINK_SERVICES_SM_PUBLIC_MOJOM_DIR}service_control.mojom.cc
  ${GEN_BLINK_SERVICES_SM_PUBLIC_MOJOM_DIR}service_control.mojom-shared.cc
  ${GEN_BLINK_SERVICES_SM_PUBLIC_MOJOM_DIR}service_control.mojom-blink.cc
  #
  ${GEN_BLINK_SERVICES_SM_PUBLIC_MOJOM_DIR}service_filter.mojom.cc
  ${GEN_BLINK_SERVICES_SM_PUBLIC_MOJOM_DIR}service_filter.mojom-shared.cc
  ${GEN_BLINK_SERVICES_SM_PUBLIC_MOJOM_DIR}service_filter.mojom-blink.cc
  #
  ${GEN_BLINK_SERVICES_SM_PUBLIC_MOJOM_DIR}service_manager.mojom.cc
  ${GEN_BLINK_SERVICES_SM_PUBLIC_MOJOM_DIR}service_manager.mojom-shared.cc
  ${GEN_BLINK_SERVICES_SM_PUBLIC_MOJOM_DIR}service_manager.mojom-blink.cc
  #
  ${GEN_BLINK_SERVICES_SM_PUBLIC_MOJOM_DIR}constants.mojom.cc
  ${GEN_BLINK_SERVICES_SM_PUBLIC_MOJOM_DIR}constants.mojom-shared.cc
  ${GEN_BLINK_SERVICES_SM_PUBLIC_MOJOM_DIR}constants.mojom-blink.cc
)

list(APPEND SERVICES_SERVICE_MANAGER_PUBLIC_CPP_SOURCES
  #
  # component("cpp")
  #
  #${SERVICES_SERVICE_MANAGER_PUBLIC_CPP_DIR}binder_map.h
  #${SERVICES_SERVICE_MANAGER_PUBLIC_CPP_DIR}binder_map_internal.h
  #${SERVICES_SERVICE_MANAGER_PUBLIC_CPP_DIR}binder_registry.h
  #${SERVICES_SERVICE_MANAGER_PUBLIC_CPP_DIR}connect.h
  ${SERVICES_SERVICE_MANAGER_PUBLIC_CPP_DIR}connector.cc
  #${SERVICES_SERVICE_MANAGER_PUBLIC_CPP_DIR}connector.h
  ${SERVICES_SERVICE_MANAGER_PUBLIC_CPP_DIR}constants.cc
  #${SERVICES_SERVICE_MANAGER_PUBLIC_CPP_DIR}constants.h
  #${SERVICES_SERVICE_MANAGER_PUBLIC_CPP_DIR}export.h
  #${SERVICES_SERVICE_MANAGER_PUBLIC_CPP_DIR}interface_binder.h
  ${SERVICES_SERVICE_MANAGER_PUBLIC_CPP_DIR}interface_provider.cc
  #${SERVICES_SERVICE_MANAGER_PUBLIC_CPP_DIR}interface_provider.h
  #${SERVICES_SERVICE_MANAGER_PUBLIC_CPP_DIR}local_interface_provider.h
  ${SERVICES_SERVICE_MANAGER_PUBLIC_CPP_DIR}manifest.cc
  #${SERVICES_SERVICE_MANAGER_PUBLIC_CPP_DIR}manifest.h
  ${SERVICES_SERVICE_MANAGER_PUBLIC_CPP_DIR}manifest_builder.cc
  #${SERVICES_SERVICE_MANAGER_PUBLIC_CPP_DIR}manifest_builder.h
  ${SERVICES_SERVICE_MANAGER_PUBLIC_CPP_DIR}service.cc
  #${SERVICES_SERVICE_MANAGER_PUBLIC_CPP_DIR}service.h
  ${SERVICES_SERVICE_MANAGER_PUBLIC_CPP_DIR}service_binding.cc
  #${SERVICES_SERVICE_MANAGER_PUBLIC_CPP_DIR}service_binding.h
  #${SERVICES_SERVICE_MANAGER_PUBLIC_CPP_DIR}service_context_ref.h
  ${SERVICES_SERVICE_MANAGER_PUBLIC_CPP_DIR}service_keepalive.cc
  #${SERVICES_SERVICE_MANAGER_PUBLIC_CPP_DIR}service_keepalive.h
  #
  # component("cpp_types")
  #
  ${SERVICES_SERVICE_MANAGER_PUBLIC_CPP_DIR}bind_source_info.cc
  #${SERVICES_SERVICE_MANAGER_PUBLIC_CPP_DIR}bind_source_info.h
  ${SERVICES_SERVICE_MANAGER_PUBLIC_CPP_DIR}identity.cc
  #${SERVICES_SERVICE_MANAGER_PUBLIC_CPP_DIR}identity.h
  ${SERVICES_SERVICE_MANAGER_PUBLIC_CPP_DIR}interface_provider_spec.cc
  #${SERVICES_SERVICE_MANAGER_PUBLIC_CPP_DIR}interface_provider_spec.h
  ${SERVICES_SERVICE_MANAGER_PUBLIC_CPP_DIR}service_filter.cc
  #${SERVICES_SERVICE_MANAGER_PUBLIC_CPP_DIR}service_filter.h
  #${SERVICES_SERVICE_MANAGER_PUBLIC_CPP_DIR}types_export.h
  #
  # component("mojom_traits")
  #
  ${SERVICES_SERVICE_MANAGER_PUBLIC_CPP_DIR}identity_mojom_traits.cc
  #${SERVICES_SERVICE_MANAGER_PUBLIC_CPP_DIR}identity_mojom_traits.h
  ${SERVICES_SERVICE_MANAGER_PUBLIC_CPP_DIR}service_filter_mojom_traits.cc
  #${SERVICES_SERVICE_MANAGER_PUBLIC_CPP_DIR}service_filter_mojom_traits.h
)

# if (current_cpu == "x86" || current_cpu == "x64")
#if(TARGET_EMSCRIPTEN)
#  ## nothing to do
#  #list(APPEND SERVICES_SERVICE_MANAGER_PUBLIC_CPP_OS_PRIVATE_DIRS
#  #  ${CHROMIUM_DIR}/web_ports/libxml_wrapper/emscripten # requires "config.h"
#  #)
#  #list(APPEND SERVICES_SERVICE_MANAGER_PUBLIC_CPP_OS_PUBLIC_DIRS
#  #  ${CHROMIUM_DIR}/web_ports/libxml_wrapper/emscripten/include # requires "libxml/xmlversion.h"
#  #)
#elseif(TARGET_LINUX)
#  #if(CMAKE_CL_64)
#  #  #
#  #else(CMAKE_CL_64)
#  #  #list(APPEND SERVICES_SERVICE_MANAGER_PUBLIC_CPP_SOURCES
#  #  #  ${SERVICES_SERVICE_MANAGER_PUBLIC_CPP_DIR}intel/filter_sse2_intrinsics.c
#  #  #  ${SERVICES_SERVICE_MANAGER_PUBLIC_CPP_DIR}intel/intel_init.c
#  #  #)
#  #endif(CMAKE_CL_64)
#  #list(APPEND SERVICES_SERVICE_MANAGER_PUBLIC_CPP_OS_PRIVATE_DIRS
#  #  ${SERVICES_SERVICE_MANAGER_PUBLIC_CPP_DIR}/linux # requires "config.h"
#  #  #${SERVICES_SERVICE_MANAGER_PUBLIC_CPP_DIR}/src
#  #  # ${SERVICES_SERVICE_MANAGER_PUBLIC_CPP_DIR}/src/include # requires "libxml/parser.h"
#  #  #${SERVICES_SERVICE_MANAGER_PUBLIC_CPP_DIR}/src/include/libxml
#  #)
#  #list(APPEND SERVICES_SERVICE_MANAGER_PUBLIC_CPP_OS_PUBLIC_DIRS
#  #  ${SERVICES_SERVICE_MANAGER_PUBLIC_CPP_DIR}/linux/include # requires "libxml/xmlversion.h"
#  #)
#  ##find_package(ZLIB)
#else()
#  message(FATAL_ERROR "platform not supported")
#endif()

add_library(SERVICES_SERVICE_MANAGER_PUBLIC_CPP STATIC
  ${SERVICES_SERVICE_MANAGER_PUBLIC_CPP_SOURCES}
  ${SERVICES_SERVICE_MANAGER_GEN_SOURCES}
)


target_link_libraries(SERVICES_SERVICE_MANAGER_PUBLIC_CPP PRIVATE
  #public_deps = [
  #  ":cpp_types",
  #  "//base",
  #  "//mojo/public/cpp/bindings",
  #  "//mojo/public/cpp/system",
  #  "//services/service_manager/public/mojom",
  #  "//services/service_manager/public/mojom:constants",
  #  "//url",
  #]
  #
  #deps = [
  #  "//services/tracing/public/cpp:traced_process",
  #]
  #deps = [
  #  "//services/service_manager/public/mojom:constants",
  #]
  #public_deps = [
  #  ":cpp_types",
  #  "//mojo/public/cpp/base:shared_typemap_traits",
  #  "//services/service_manager/public/mojom:mojom_shared",
  #]
  ${base_LIB}
  ${MOJO_LIB}
)

set_property(TARGET SERVICES_SERVICE_MANAGER_PUBLIC_CPP PROPERTY CXX_STANDARD 17)

target_include_directories(SERVICES_SERVICE_MANAGER_PUBLIC_CPP PRIVATE
  ${SERVICES_SERVICE_MANAGER_PUBLIC_CPP_PARENT_DIR}
  ${SERVICES_SERVICE_MANAGER_PUBLIC_CPP_DIR}
  # requires services/service_manager/public/mojom/connector.mojom.h
  #${GEN_COMBINED_DIR}
  ${GEN_COMBINED_DIR}
  #${SERVICES_SERVICE_MANAGER_PUBLIC_CPP_DIR}/src
  #${SERVICES_SERVICE_MANAGER_PUBLIC_CPP_OS_PRIVATE_DIRS} # linux/android/...
  #${SERVICES_SERVICE_MANAGER_PUBLIC_CPP_DIR}/src/src
  #${BASE_DIR}
)

target_include_directories(SERVICES_SERVICE_MANAGER_PUBLIC_CPP PUBLIC
  ${CHROMIUM_DIR} # requires services/service_manager/public/cpp/connector.h
  #${SERVICES_SERVICE_MANAGER_PUBLIC_CPP_DIR}/src/include # requires "libxml/xmlreader.h"
  #${SERVICES_SERVICE_MANAGER_PUBLIC_CPP_OS_PUBLIC_DIRS} # linux/android/...
  #${GEN_SERVICES_SERVICE_MANAGER_PUBLIC_DIR}
  #${SERVICES_SERVICE_MANAGER_PUBLIC_CPP_PARENT_DIR}
)

target_compile_definitions(SERVICES_SERVICE_MANAGER_PUBLIC_CPP PRIVATE
  #IS_NETWORK_CPP_IMPL=1
  #IS_NETWORK_CPP_BASE_IMPL=1
  #IS_CHROMECAST
  IS_SERVICE_MANAGER_CPP_IMPL=1
  SERVICE_MANAGER_PUBLIC_CPP_IMPL=1
  IS_SERVICE_MANAGER_CPP_TYPES_IMPL=1
  SERVICE_MANAGER_PUBLIC_CPP_TYPES_IMPL=1
  IS_SERVICE_MANAGER_MOJOM_TRAITS_IMPL=1
)
