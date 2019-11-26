# see https://github.com/chromium/chromium/blob/b081b266c9a041b3ddc5302b2458aa40564403b6/third_party/blink/common/BUILD.gn
# see https://github.com/chromium/chromium/blob/517881759ed5c403f1911de3ebb00142aa3cf781/third_party/blink/public/common/BUILD.gn

### --- BLINK_COMMON ---###

set(CUR_SRC_DIR ${BLINK_COMMON_DIR})

# path to ...gen/third_party/blink/renderer/network/
set(CUR_OUT_DIR ${GEN_COMBINED_DIR}/third_party/blink/common/)

list(APPEND BLINK_COMMON_GEN_SOURCES
  ## TODO
  ${CUR_SRC_DIR}/associated_interfaces/associated_interface_provider.cc
  ${CUR_SRC_DIR}/associated_interfaces/associated_interface_registry.cc
  ${CUR_SRC_DIR}/blob/blob_utils.cc
  ${CUR_SRC_DIR}/cache_storage/cache_storage_utils.cc
  ${CUR_SRC_DIR}/client_hints/client_hints.cc
  ${CUR_SRC_DIR}/device_memory/approximated_device_memory.cc
  ${CUR_SRC_DIR}/dom_storage/session_storage_namespace_id.cc
  ${CUR_SRC_DIR}/experiments/memory_ablation_experiment.cc
  ## TODO
  ${CUR_SRC_DIR}/feature_policy/feature_policy.cc
  ${CUR_SRC_DIR}/feature_policy/policy_value.cc
  ${CUR_SRC_DIR}/features.cc
  ## TODO
  ${CUR_SRC_DIR}/frame/frame_policy.cc
  ${CUR_SRC_DIR}/frame/from_ad_state.cc
  ${CUR_SRC_DIR}/frame/user_activation_state.cc
  # TODO
  #${CUR_SRC_DIR}/indexeddb/indexed_db_default_mojom_traits.cc
  #${CUR_SRC_DIR}/indexeddb/indexeddb_key.cc
  #${CUR_SRC_DIR}/indexeddb/indexeddb_key_path.cc
  #${CUR_SRC_DIR}/indexeddb/indexeddb_key_range.cc
  #${CUR_SRC_DIR}/indexeddb/indexeddb_metadata.cc
)

if(ENABLE_GNET)
  list(APPEND BLINK_COMMON_GEN_SOURCES
    ${CUR_SRC_DIR}/loader/url_loader_factory_bundle.cc
    ${CUR_SRC_DIR}/loader/url_loader_factory_bundle_mojom_traits.cc
  )
endif(ENABLE_GNET)

list(APPEND BLINK_COMMON_GEN_SOURCES
  ## TODO
  ${CUR_SRC_DIR}/logging/logging_utils.cc
  ${CUR_SRC_DIR}/manifest/manifest.cc
  ${CUR_SRC_DIR}/manifest/manifest_icon_selector.cc
  ${CUR_SRC_DIR}/manifest/manifest_util.cc
  ## TODO
  ${CUR_SRC_DIR}/mediastream/media_devices.cc
  ${CUR_SRC_DIR}/mediastream/media_devices_mojom_traits.cc
  ${CUR_SRC_DIR}/mediastream/media_stream_controls.cc
  # requires media/base/ipc/media_param_traits.h
  ## TODO ## ${CUR_SRC_DIR}/mediastream/media_stream_mojom_traits.cc
)

if(ENABLE_GNET)
  list(APPEND BLINK_COMMON_GEN_SOURCES
    ${CUR_SRC_DIR}/messaging/cloneable_message.cc
    ${CUR_SRC_DIR}/messaging/cloneable_message_struct_traits.cc
    ${CUR_SRC_DIR}/messaging/message_port_channel.cc
    ${CUR_SRC_DIR}/messaging/string_message_codec.cc
    ${CUR_SRC_DIR}/messaging/transferable_message.cc
    ${CUR_SRC_DIR}/origin_trials/trial_token.cc
    ${CUR_SRC_DIR}/origin_trials/trial_token_validator.cc
    ## TODO ## ${CUR_SRC_DIR}/messaging/transferable_message_struct_traits.cc
    ${CUR_SRC_DIR}/mime_util/mime_util.cc
  )
endif(ENABLE_GNET)

list(APPEND BLINK_COMMON_GEN_SOURCES
  ## TODO ##
  ## TODO
  ${CUR_SRC_DIR}/mediastream/media_stream_request.cc
  # requires skia/public/interfaces/bitmap_skbitmap_struct_traits.h
  ## TODO
  ${CUR_SRC_DIR}/notifications/notification_resources.cc
  # requires skia/public/interfaces/bitmap_skbitmap_struct_traits.h
  ## TODO ##
  ${CUR_SRC_DIR}/notifications/notification_struct_traits.cc
  ## TODO
  ${CUR_SRC_DIR}/notifications/platform_notification_data.cc
  ${CUR_SRC_DIR}/origin_policy/origin_policy.cc
  ${CUR_SRC_DIR}/origin_policy/origin_policy_parser.cc
  #$CUR_SRC_DIRR}/origin_policy/origin_policy_parser.h
  ${CUR_SRC_DIR}/privacy_preferences.cc
  ## TODO
  ${CUR_SRC_DIR}/service_worker/service_worker_status_code.cc
  ${CUR_SRC_DIR}/service_worker/service_worker_type_converters.cc
  ${CUR_SRC_DIR}/service_worker/service_worker_utils.cc
  ${CUR_SRC_DIR}/web_package/signed_exchange_consts.cc
)

#list(APPEND BLINK_COMMON_SOURCES
#   ${CUR_SRC_DIR}content_security_policy_parsers.cc
#)

add_library(BLINK_COMMON STATIC
  ${BLINK_COMMON_SOURCES}
  ${BLINK_COMMON_GEN_SOURCES}
)

if(NOT DEFINED CUSTOM_ICU_LIB)
  message(FATAL_ERROR "CUSTOM_ICU_LIB must be defined")
endif(NOT DEFINED CUSTOM_ICU_LIB)

target_link_libraries(BLINK_COMMON PRIVATE
  base
  ${GNET_LIBS}
  ${MOJO_LIB}
  ${SERVICES_NETWORK_PUBLIC_CPP_LIB}
  ${CUSTOM_ICU_LIB}
  ${HARFBUZZ_LIBRARIES}
  UI_GFX
  #media
)

set_property(TARGET BLINK_COMMON PROPERTY CXX_STANDARD 17)

target_include_directories(BLINK_COMMON PRIVATE
  ${CHROMIUM_DIR}
  ${BLINK_COMMON_DIR}
  #${BASE_DIR}
  ${CUR_OUT_DIR}
  ${GEN_COMBINED_DIR}
)

#target_include_directories(BLINK_COMMON PUBLIC
#  ${GEN_COMBINED_DIR}
#)

target_compile_definitions(BLINK_COMMON PRIVATE
  BLINK_COMMON_IMPLEMENTATION=1
  #BLINK_ANIMATION_USE_TIME_DELTA=1
  #ENABLE_TOUCHLESS_UASTYLE_THEME=1
)
