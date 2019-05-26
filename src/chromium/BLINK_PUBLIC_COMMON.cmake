### --- BLINK_PUBLIC_COMMON ---###

# INTERFACE LIB

# TODO https://github.com/chromium/chromium/blob/master/third_party/blink/renderer/platform/BUILD.gn
#set(BLINK_PUBLIC_COMMON_SOURCES
#  ${BLINK_PUBLIC_COMMON_DIR}associated_interfaces/associated_interface_provider.h
#  ${BLINK_PUBLIC_COMMON_DIR}associated_interfaces/associated_interface_registry.h
#  ${BLINK_PUBLIC_COMMON_DIR}blob/blob_utils.h
#  ${BLINK_PUBLIC_COMMON_DIR}cache_storage/cache_storage_utils.h
#  ${BLINK_PUBLIC_COMMON_DIR}client_hints/client_hints.h
#  ${BLINK_PUBLIC_COMMON_DIR}common_export.h
#  ${BLINK_PUBLIC_COMMON_DIR}css/preferred_color_scheme.h
#  ${BLINK_PUBLIC_COMMON_DIR}device_memory/approximated_device_memory.h
#  ${BLINK_PUBLIC_COMMON_DIR}dom_storage/session_storage_namespace_id.h
#  ${BLINK_PUBLIC_COMMON_DIR}experiments/memory_ablation_experiment.h
#  ${BLINK_PUBLIC_COMMON_DIR}feature_policy/feature_policy.h
#  ${BLINK_PUBLIC_COMMON_DIR}feature_policy/policy_value.h
#  ${BLINK_PUBLIC_COMMON_DIR}features.h
#  ${BLINK_PUBLIC_COMMON_DIR}fetch/fetch_api_request_headers_map.h
#  ${BLINK_PUBLIC_COMMON_DIR}fetch/fetch_api_request_headers_mojom_traits.h
#  ${BLINK_PUBLIC_COMMON_DIR}frame/frame_owner_element_type.h
#  ${BLINK_PUBLIC_COMMON_DIR}frame/frame_policy.h
#  ${BLINK_PUBLIC_COMMON_DIR}frame/from_ad_state.h
#  ${BLINK_PUBLIC_COMMON_DIR}frame/occlusion_state.h
#  ${BLINK_PUBLIC_COMMON_DIR}frame/sandbox_flags.h
#  ${BLINK_PUBLIC_COMMON_DIR}frame/user_activation_state.h
#  ${BLINK_PUBLIC_COMMON_DIR}frame/user_activation_update_source.h
#  ${BLINK_PUBLIC_COMMON_DIR}frame/user_activation_update_type.h
#  ${BLINK_PUBLIC_COMMON_DIR}indexeddb/indexed_db_default_mojom_traits.h
#  ${BLINK_PUBLIC_COMMON_DIR}indexeddb/indexeddb_key.h
#  ${BLINK_PUBLIC_COMMON_DIR}indexeddb/indexeddb_key_path.h
#  ${BLINK_PUBLIC_COMMON_DIR}indexeddb/indexeddb_key_range.h
#  ${BLINK_PUBLIC_COMMON_DIR}indexeddb/indexeddb_metadata.h
#  ${BLINK_PUBLIC_COMMON_DIR}indexeddb/web_idb_types.h
#  ${BLINK_PUBLIC_COMMON_DIR}loader/url_loader_factory_bundle.h
#  ${BLINK_PUBLIC_COMMON_DIR}loader/url_loader_factory_bundle_mojom_traits.h
#  ${BLINK_PUBLIC_COMMON_DIR}logging/logging_utils.h
#  ${BLINK_PUBLIC_COMMON_DIR}manifest/manifest.h
#  ${BLINK_PUBLIC_COMMON_DIR}manifest/manifest_icon_selector.h
#  ${BLINK_PUBLIC_COMMON_DIR}manifest/manifest_util.h
#  ${BLINK_PUBLIC_COMMON_DIR}manifest/web_display_mode.h
#  ${BLINK_PUBLIC_COMMON_DIR}media/video_capture.h
#  ${BLINK_PUBLIC_COMMON_DIR}mediastream/media_devices.h
#  ${BLINK_PUBLIC_COMMON_DIR}mediastream/media_devices_mojom_traits.h
#  ${BLINK_PUBLIC_COMMON_DIR}mediastream/media_stream_controls.h
#  ${BLINK_PUBLIC_COMMON_DIR}mediastream/media_stream_mojom_traits.h
#  ${BLINK_PUBLIC_COMMON_DIR}mediastream/media_stream_request.h
#  ${BLINK_PUBLIC_COMMON_DIR}messaging/cloneable_message.h
#  ${BLINK_PUBLIC_COMMON_DIR}messaging/cloneable_message_struct_traits.h
#  ${BLINK_PUBLIC_COMMON_DIR}messaging/message_port_channel.h
#  ${BLINK_PUBLIC_COMMON_DIR}messaging/string_message_codec.h
#  ${BLINK_PUBLIC_COMMON_DIR}messaging/transferable_message.h
#  ${BLINK_PUBLIC_COMMON_DIR}messaging/transferable_message_struct_traits.h
#  ${BLINK_PUBLIC_COMMON_DIR}mime_util/mime_util.h
#  ${BLINK_PUBLIC_COMMON_DIR}notifications/notification_constants.h
#  ${BLINK_PUBLIC_COMMON_DIR}notifications/notification_resources.h
#  ${BLINK_PUBLIC_COMMON_DIR}notifications/notification_struct_traits.h
#  ${BLINK_PUBLIC_COMMON_DIR}notifications/platform_notification_data.h
#  ${BLINK_PUBLIC_COMMON_DIR}oom_intervention/oom_intervention_types.h
#  ${BLINK_PUBLIC_COMMON_DIR}origin_policy/origin_policy.h
#  ${BLINK_PUBLIC_COMMON_DIR}origin_trials/origin_trial_policy.h
#  ${BLINK_PUBLIC_COMMON_DIR}origin_trials/trial_token.h
#  ${BLINK_PUBLIC_COMMON_DIR}origin_trials/trial_token_validator.h
#  ${BLINK_PUBLIC_COMMON_DIR}page/launching_process_state.h
#  ${BLINK_PUBLIC_COMMON_DIR}prerender/prerender_rel_type.h
#  ${BLINK_PUBLIC_COMMON_DIR}privacy_preferences.h
#  ${BLINK_PUBLIC_COMMON_DIR}push_messaging/web_push_subscription_options.h
#  ${BLINK_PUBLIC_COMMON_DIR}scheduler/web_scheduler_tracked_feature.h
#  ${BLINK_PUBLIC_COMMON_DIR}screen_orientation/web_screen_orientation_lock_type.h
#  ${BLINK_PUBLIC_COMMON_DIR}screen_orientation/web_screen_orientation_type.h
#  ${BLINK_PUBLIC_COMMON_DIR}service_worker/service_worker_status_code.h
#  ${BLINK_PUBLIC_COMMON_DIR}service_worker/service_worker_type_converters.h
#  ${BLINK_PUBLIC_COMMON_DIR}service_worker/service_worker_types.h
#  ${BLINK_PUBLIC_COMMON_DIR}service_worker/service_worker_utils.h
#  ${BLINK_PUBLIC_COMMON_DIR}user_agent/user_agent_metadata.h
#  ${BLINK_PUBLIC_COMMON_DIR}web_package/signed_exchange_consts.h
#)

add_library(BLINK_PUBLIC_COMMON INTERFACE)


#target_link_libraries(BLINK_PUBLIC_COMMON PUBLIC
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

#set_property(TARGET BLINK_PUBLIC_COMMON PROPERTY CXX_STANDARD 17)

target_include_directories(BLINK_PUBLIC_COMMON INTERFACE
  ${CHROMIUM_DIR} # requires "third_party/blink/..."
  #${BLINK_PUBLIC_COMMON_DIR}
  #${BASE_DIR}
)

#target_compile_definitions(BLINK_PUBLIC_COMMON PRIVATE
#  #BLINK_PUBLIC_COMMON_IMPLEMENTATION=1
#  #BLINK_IMPLEMENTATION=1
#  #INSIDE_BLINK=1
#  #USE_FUNCTION_CITYHASH
#  #USING_V8_SHARED
#)

# no_size_t_to_int_warning
