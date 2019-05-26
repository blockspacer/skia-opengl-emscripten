### --- LIB_V8_INTERFACE ---###

# INTERFACE LIB

# TODO https://github.com/chromium/chromium/blob/master/third_party/blink/renderer/platform/BUILD.gn
#set(LIB_V8_INTERFACE_SOURCES
#  ${LIB_V8_INTERFACE_DIR}associated_interfaces/associated_interface_provider.h
#  ${LIB_V8_INTERFACE_DIR}associated_interfaces/associated_interface_registry.h
#  ${LIB_V8_INTERFACE_DIR}blob/blob_utils.h
#  ${LIB_V8_INTERFACE_DIR}cache_storage/cache_storage_utils.h
#  ${LIB_V8_INTERFACE_DIR}client_hints/client_hints.h
#  ${LIB_V8_INTERFACE_DIR}common_export.h
#  ${LIB_V8_INTERFACE_DIR}css/preferred_color_scheme.h
#  ${LIB_V8_INTERFACE_DIR}device_memory/approximated_device_memory.h
#  ${LIB_V8_INTERFACE_DIR}dom_storage/session_storage_namespace_id.h
#  ${LIB_V8_INTERFACE_DIR}experiments/memory_ablation_experiment.h
#  ${LIB_V8_INTERFACE_DIR}feature_policy/feature_policy.h
#  ${LIB_V8_INTERFACE_DIR}feature_policy/policy_value.h
#  ${LIB_V8_INTERFACE_DIR}features.h
#  ${LIB_V8_INTERFACE_DIR}fetch/fetch_api_request_headers_map.h
#  ${LIB_V8_INTERFACE_DIR}fetch/fetch_api_request_headers_mojom_traits.h
#  ${LIB_V8_INTERFACE_DIR}frame/frame_owner_element_type.h
#  ${LIB_V8_INTERFACE_DIR}frame/frame_policy.h
#  ${LIB_V8_INTERFACE_DIR}frame/from_ad_state.h
#  ${LIB_V8_INTERFACE_DIR}frame/occlusion_state.h
#  ${LIB_V8_INTERFACE_DIR}frame/sandbox_flags.h
#  ${LIB_V8_INTERFACE_DIR}frame/user_activation_state.h
#  ${LIB_V8_INTERFACE_DIR}frame/user_activation_update_source.h
#  ${LIB_V8_INTERFACE_DIR}frame/user_activation_update_type.h
#  ${LIB_V8_INTERFACE_DIR}indexeddb/indexed_db_default_mojom_traits.h
#  ${LIB_V8_INTERFACE_DIR}indexeddb/indexeddb_key.h
#  ${LIB_V8_INTERFACE_DIR}indexeddb/indexeddb_key_path.h
#  ${LIB_V8_INTERFACE_DIR}indexeddb/indexeddb_key_range.h
#  ${LIB_V8_INTERFACE_DIR}indexeddb/indexeddb_metadata.h
#  ${LIB_V8_INTERFACE_DIR}indexeddb/web_idb_types.h
#  ${LIB_V8_INTERFACE_DIR}loader/url_loader_factory_bundle.h
#  ${LIB_V8_INTERFACE_DIR}loader/url_loader_factory_bundle_mojom_traits.h
#  ${LIB_V8_INTERFACE_DIR}logging/logging_utils.h
#  ${LIB_V8_INTERFACE_DIR}manifest/manifest.h
#  ${LIB_V8_INTERFACE_DIR}manifest/manifest_icon_selector.h
#  ${LIB_V8_INTERFACE_DIR}manifest/manifest_util.h
#  ${LIB_V8_INTERFACE_DIR}manifest/web_display_mode.h
#  ${LIB_V8_INTERFACE_DIR}media/video_capture.h
#  ${LIB_V8_INTERFACE_DIR}mediastream/media_devices.h
#  ${LIB_V8_INTERFACE_DIR}mediastream/media_devices_mojom_traits.h
#  ${LIB_V8_INTERFACE_DIR}mediastream/media_stream_controls.h
#  ${LIB_V8_INTERFACE_DIR}mediastream/media_stream_mojom_traits.h
#  ${LIB_V8_INTERFACE_DIR}mediastream/media_stream_request.h
#  ${LIB_V8_INTERFACE_DIR}messaging/cloneable_message.h
#  ${LIB_V8_INTERFACE_DIR}messaging/cloneable_message_struct_traits.h
#  ${LIB_V8_INTERFACE_DIR}messaging/message_port_channel.h
#  ${LIB_V8_INTERFACE_DIR}messaging/string_message_codec.h
#  ${LIB_V8_INTERFACE_DIR}messaging/transferable_message.h
#  ${LIB_V8_INTERFACE_DIR}messaging/transferable_message_struct_traits.h
#  ${LIB_V8_INTERFACE_DIR}mime_util/mime_util.h
#  ${LIB_V8_INTERFACE_DIR}notifications/notification_constants.h
#  ${LIB_V8_INTERFACE_DIR}notifications/notification_resources.h
#  ${LIB_V8_INTERFACE_DIR}notifications/notification_struct_traits.h
#  ${LIB_V8_INTERFACE_DIR}notifications/platform_notification_data.h
#  ${LIB_V8_INTERFACE_DIR}oom_intervention/oom_intervention_types.h
#  ${LIB_V8_INTERFACE_DIR}origin_policy/origin_policy.h
#  ${LIB_V8_INTERFACE_DIR}origin_trials/origin_trial_policy.h
#  ${LIB_V8_INTERFACE_DIR}origin_trials/trial_token.h
#  ${LIB_V8_INTERFACE_DIR}origin_trials/trial_token_validator.h
#  ${LIB_V8_INTERFACE_DIR}page/launching_process_state.h
#  ${LIB_V8_INTERFACE_DIR}prerender/prerender_rel_type.h
#  ${LIB_V8_INTERFACE_DIR}privacy_preferences.h
#  ${LIB_V8_INTERFACE_DIR}push_messaging/web_push_subscription_options.h
#  ${LIB_V8_INTERFACE_DIR}scheduler/web_scheduler_tracked_feature.h
#  ${LIB_V8_INTERFACE_DIR}screen_orientation/web_screen_orientation_lock_type.h
#  ${LIB_V8_INTERFACE_DIR}screen_orientation/web_screen_orientation_type.h
#  ${LIB_V8_INTERFACE_DIR}service_worker/service_worker_status_code.h
#  ${LIB_V8_INTERFACE_DIR}service_worker/service_worker_type_converters.h
#  ${LIB_V8_INTERFACE_DIR}service_worker/service_worker_types.h
#  ${LIB_V8_INTERFACE_DIR}service_worker/service_worker_utils.h
#  ${LIB_V8_INTERFACE_DIR}user_agent/user_agent_metadata.h
#  ${LIB_V8_INTERFACE_DIR}web_package/signed_exchange_consts.h
#)

add_library(LIB_V8_INTERFACE INTERFACE)

#target_link_libraries(LIB_V8_INTERFACE PUBLIC
#
#  #public_deps = [
#  #  "//services/network/public/cpp:cpp",
#  #  "//skia",
#  #  "//third_party/blink/public/mojom:mojom_modules_headers",
#  #]
#  SKIA
#  SERVICES_NETWORK_PUBLIC_CPP
#  MOJO
#  #deps = [
#  #  "//base",
#  #  "//mojo/public/cpp/bindings",
#  #  "//mojo/public/cpp/system",
#  #  "//mojo/public/mojom/base",
#  #  "//net",
#  #]
#  GNET
#  ## iOS doesn't use and must not depend on //media
#  #if (!is_ios) {
#  #  deps += [
#  #    "//media",
#  #    "//media/capture:capture_base",
#  #    "//media/capture:capture_lib",
#  #  ]
#  #}
#)

#set_property(TARGET LIB_V8_INTERFACE PROPERTY CXX_STANDARD 17)

target_include_directories(LIB_V8_INTERFACE INTERFACE
  ${CHROMIUM_DIR} # requires "v8/include/v8.h"
  #${LIB_V8_INTERFACE_DIR}
  #${BASE_DIR}
)

#target_compile_definitions(LIB_V8_INTERFACE PRIVATE
#  #LIB_V8_INTERFACE_IMPLEMENTATION=1
#  #BLINK_IMPLEMENTATION=1
#  #INSIDE_BLINK=1
#  #USE_FUNCTION_CITYHASH
#  #USING_V8_SHARED
#)

# no_size_t_to_int_warning
