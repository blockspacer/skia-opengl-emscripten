# see platform

### --- BLINK_PUBLIC_MOJOM ---###

set(CUR_SRC_DIR ${BLINK_PUBLIC_MOJOM_DIR})

# path to ...gen/third_party/blink/renderer/network/
set(CUR_OUT_DIR ${GEN_COMBINED_DIR}/third_party/blink/public/mojom/)

# see src/chromium/gen/gen_services_network_public/mojo/public/interfaces/bindings/pipe_control_messages.mojom-shared.cc
#set(GEN_BLINK_MOJO_PUBLIC_INTERFACES_BINDINGS_DIR ${GEN_COMBINED_DIR}mojo/public/interfaces/bindings/)

#./src/chromium/gen/gen_blink_public/third_party/blink/public/mojom/ad_tagging/ad_frame.mojom.cc
add_mojo_prefixes_3(${CUR_OUT_DIR}ad_tagging/ad_frame "COLLECTED_MOJO_SOURCES")
add_mojo_prefixes_3(${CUR_OUT_DIR}app_banner/app_banner "COLLECTED_MOJO_SOURCES")
add_mojo_prefixes_3(${CUR_OUT_DIR}appcache/appcache "COLLECTED_MOJO_SOURCES")
add_mojo_prefixes_3(${CUR_OUT_DIR}appcache/appcache_info "COLLECTED_MOJO_SOURCES")
add_mojo_prefixes_3(${CUR_OUT_DIR}array_buffer/array_buffer_contents "COLLECTED_MOJO_SOURCES")
add_mojo_prefixes_3(${CUR_OUT_DIR}associated_interfaces/associated_interfaces "COLLECTED_MOJO_SOURCES")
add_mojo_prefixes_3(${CUR_OUT_DIR}autoplay/autoplay "COLLECTED_MOJO_SOURCES")
## TODO ## requires skia/public/interfaces/bitmap_skbitmap_struct_traits.h
#add_mojo_prefixes_3(${CUR_OUT_DIR}background_fetch/background_fetch "COLLECTED_MOJO_SOURCES")
add_mojo_prefixes_3(${CUR_OUT_DIR}background_sync/background_sync "COLLECTED_MOJO_SOURCES")
add_mojo_prefixes_3(${CUR_OUT_DIR}badging/badging "COLLECTED_MOJO_SOURCES")
add_mojo_prefixes_3(${CUR_OUT_DIR}cache_storage/cache_storage "COLLECTED_MOJO_SOURCES")
add_mojo_prefixes_3(${CUR_OUT_DIR}choosers/color_chooser "COLLECTED_MOJO_SOURCES")
add_mojo_prefixes_3(${CUR_OUT_DIR}choosers/file_chooser "COLLECTED_MOJO_SOURCES")
## TODO ## requires skia/public/interfaces/bitmap_skbitmap_struct_traits.h
#add_mojo_prefixes_3(${CUR_OUT_DIR}clipboard/clipboard "COLLECTED_MOJO_SOURCES")
add_mojo_prefixes_3(${CUR_OUT_DIR}commit_result/commit_result "COLLECTED_MOJO_SOURCES")
add_mojo_prefixes_3(${CUR_OUT_DIR}contacts/contacts_manager "COLLECTED_MOJO_SOURCES")
add_mojo_prefixes_3(${CUR_OUT_DIR}cookie_store/cookie_store "COLLECTED_MOJO_SOURCES")
add_mojo_prefixes_3(${CUR_OUT_DIR}crash/crash_memory_metrics_reporter "COLLECTED_MOJO_SOURCES")
## TODO ## requires components/password_manager/core/common/credential_manager_types.h
#add_mojo_prefixes_3(${CUR_OUT_DIR}credentialmanager/credential_manager "COLLECTED_MOJO_SOURCES")
add_mojo_prefixes_3(${CUR_OUT_DIR}csp/content_security_policy "COLLECTED_MOJO_SOURCES")
add_mojo_prefixes_3(${CUR_OUT_DIR}devtools/console_message "COLLECTED_MOJO_SOURCES")
add_mojo_prefixes_3(${CUR_OUT_DIR}devtools/devtools_agent "COLLECTED_MOJO_SOURCES")
add_mojo_prefixes_3(${CUR_OUT_DIR}devtools/devtools_frontend "COLLECTED_MOJO_SOURCES")
add_mojo_prefixes_3(${CUR_OUT_DIR}dom_storage/session_storage_namespace "COLLECTED_MOJO_SOURCES")
add_mojo_prefixes_3(${CUR_OUT_DIR}dom_storage/storage_area "COLLECTED_MOJO_SOURCES")
add_mojo_prefixes_3(${CUR_OUT_DIR}dom_storage/storage_partition_service "COLLECTED_MOJO_SOURCES")
add_mojo_prefixes_3(${CUR_OUT_DIR}feature_policy/feature_policy "COLLECTED_MOJO_SOURCES")
add_mojo_prefixes_3(${CUR_OUT_DIR}fetch/fetch_api_request "COLLECTED_MOJO_SOURCES")
add_mojo_prefixes_3(${CUR_OUT_DIR}fetch/fetch_api_response "COLLECTED_MOJO_SOURCES")
add_mojo_prefixes_3(${CUR_OUT_DIR}file/file_utilities "COLLECTED_MOJO_SOURCES")
## TODO ## add_mojo_prefixes_3(${CUR_OUT_DIR}filesystem/file_system "COLLECTED_MOJO_SOURCES")
# requires components/password_manager/core/common/credential_manager_types.h
#add_mojo_prefixes_3(${CUR_OUT_DIR}frame/document_interface_broker "COLLECTED_MOJO_SOURCES")
add_mojo_prefixes_3(${CUR_OUT_DIR}frame/find_in_page "COLLECTED_MOJO_SOURCES")
add_mojo_prefixes_3(${CUR_OUT_DIR}frame/frame_host_test_interface "COLLECTED_MOJO_SOURCES")
add_mojo_prefixes_3(${CUR_OUT_DIR}frame/lifecycle "COLLECTED_MOJO_SOURCES")
add_mojo_prefixes_3(${CUR_OUT_DIR}frame/navigation_initiator "COLLECTED_MOJO_SOURCES")
add_mojo_prefixes_3(${CUR_OUT_DIR}geolocation/geolocation_service "COLLECTED_MOJO_SOURCES")
add_mojo_prefixes_3(${CUR_OUT_DIR}hyphenation/hyphenation "COLLECTED_MOJO_SOURCES")
add_mojo_prefixes_3(${CUR_OUT_DIR}idle/idle_manager "COLLECTED_MOJO_SOURCES")
add_mojo_prefixes_3(${CUR_OUT_DIR}insecure_input/insecure_input_service "COLLECTED_MOJO_SOURCES")
add_mojo_prefixes_3(${CUR_OUT_DIR}keyboard_lock/keyboard_lock "COLLECTED_MOJO_SOURCES")
add_mojo_prefixes_3(${CUR_OUT_DIR}leak_detector/leak_detector "COLLECTED_MOJO_SOURCES")
add_mojo_prefixes_3(${CUR_OUT_DIR}loader/code_cache "COLLECTED_MOJO_SOURCES")
add_mojo_prefixes_3(${CUR_OUT_DIR}loader/navigation_predictor "COLLECTED_MOJO_SOURCES")
add_mojo_prefixes_3(${CUR_OUT_DIR}loader/pause_subresource_loading_handle "COLLECTED_MOJO_SOURCES")
add_mojo_prefixes_3(${CUR_OUT_DIR}loader/previews_resource_loading_hints "COLLECTED_MOJO_SOURCES")
add_mojo_prefixes_3(${CUR_OUT_DIR}loader/url_loader_factory_bundle "COLLECTED_MOJO_SOURCES")
add_mojo_prefixes_3(${CUR_OUT_DIR}locks/lock_manager "COLLECTED_MOJO_SOURCES")
add_mojo_prefixes_3(${CUR_OUT_DIR}manifest/display_mode "COLLECTED_MOJO_SOURCES")
add_mojo_prefixes_3(${CUR_OUT_DIR}manifest/manifest "COLLECTED_MOJO_SOURCES")
add_mojo_prefixes_3(${CUR_OUT_DIR}manifest/manifest_manager "COLLECTED_MOJO_SOURCES")
add_mojo_prefixes_3(${CUR_OUT_DIR}manifest/manifest_observer "COLLECTED_MOJO_SOURCES")
## TODO ## add_mojo_prefixes_3(${CUR_OUT_DIR}mediastream/media_devices "COLLECTED_MOJO_SOURCES")
add_mojo_prefixes_3(${CUR_OUT_DIR}mediastream/media_stream "COLLECTED_MOJO_SOURCES")
add_mojo_prefixes_3(${CUR_OUT_DIR}mime/mime_registry "COLLECTED_MOJO_SOURCES")
add_mojo_prefixes_3(${CUR_OUT_DIR}native_file_system/native_file_system_directory_handle "COLLECTED_MOJO_SOURCES")
add_mojo_prefixes_3(${CUR_OUT_DIR}native_file_system/native_file_system_error "COLLECTED_MOJO_SOURCES")
add_mojo_prefixes_3(${CUR_OUT_DIR}native_file_system/native_file_system_file_handle "COLLECTED_MOJO_SOURCES")
add_mojo_prefixes_3(${CUR_OUT_DIR}native_file_system/native_file_system_manager "COLLECTED_MOJO_SOURCES")
add_mojo_prefixes_3(${CUR_OUT_DIR}native_file_system/native_file_system_transfer_token "COLLECTED_MOJO_SOURCES")
add_mojo_prefixes_3(${CUR_OUT_DIR}net/ip_address_space "COLLECTED_MOJO_SOURCES")
## TODO ## requires skia/public/interfaces/bitmap_skbitmap_struct_traits.h
#add_mojo_prefixes_3(${CUR_OUT_DIR}notifications/notification "COLLECTED_MOJO_SOURCES")
## TODO ## requires skia/public/interfaces/bitmap_skbitmap_struct_traits.h
#add_mojo_prefixes_3(${CUR_OUT_DIR}notifications/notification_service "COLLECTED_MOJO_SOURCES")
add_mojo_prefixes_3(${CUR_OUT_DIR}oom_intervention/oom_intervention "COLLECTED_MOJO_SOURCES")
add_mojo_prefixes_3(${CUR_OUT_DIR}page/display_cutout "COLLECTED_MOJO_SOURCES")
add_mojo_prefixes_3(${CUR_OUT_DIR}page/spatial_navigation "COLLECTED_MOJO_SOURCES")
## TODO ## add_mojo_prefixes_3(${CUR_OUT_DIR}payments/payment_app "COLLECTED_MOJO_SOURCES")
add_mojo_prefixes_3(${CUR_OUT_DIR}permissions/permission "COLLECTED_MOJO_SOURCES")
add_mojo_prefixes_3(${CUR_OUT_DIR}permissions/permission_status "COLLECTED_MOJO_SOURCES")
# requires services/viz/public/cpp/compositing/frame_sink_id_struct_traits.h
## TODO ## add_mojo_prefixes_3(${CUR_OUT_DIR}picture_in_picture/picture_in_picture "COLLECTED_MOJO_SOURCES")
add_mojo_prefixes_3(${CUR_OUT_DIR}plugins/plugin_registry "COLLECTED_MOJO_SOURCES")
add_mojo_prefixes_3(${CUR_OUT_DIR}presentation/presentation "COLLECTED_MOJO_SOURCES")
add_mojo_prefixes_3(${CUR_OUT_DIR}push_messaging/push_messaging "COLLECTED_MOJO_SOURCES")
add_mojo_prefixes_3(${CUR_OUT_DIR}push_messaging/push_messaging_status "COLLECTED_MOJO_SOURCES")
add_mojo_prefixes_3(${CUR_OUT_DIR}quota/quota_dispatcher_host "COLLECTED_MOJO_SOURCES")
add_mojo_prefixes_3(${CUR_OUT_DIR}quota/quota_types "COLLECTED_MOJO_SOURCES")
add_mojo_prefixes_3(${CUR_OUT_DIR}referrer "COLLECTED_MOJO_SOURCES")
add_mojo_prefixes_3(${CUR_OUT_DIR}renderer_preference_watcher "COLLECTED_MOJO_SOURCES")
add_mojo_prefixes_3(${CUR_OUT_DIR}renderer_preferences "COLLECTED_MOJO_SOURCES")
add_mojo_prefixes_3(${CUR_OUT_DIR}reporting/reporting "COLLECTED_MOJO_SOURCES")
add_mojo_prefixes_3(${CUR_OUT_DIR}script/script_type "COLLECTED_MOJO_SOURCES")
add_mojo_prefixes_3(${CUR_OUT_DIR}selection_menu/selection_menu_behavior "COLLECTED_MOJO_SOURCES")
# requires third_party/blink/renderer/bindings/core/v8/serialization/serialized_script_value.h
#add_mojo_prefixes_3(${CUR_OUT_DIR}service_worker/controller_service_worker_mode "COLLECTED_MOJO_SOURCES")
add_mojo_prefixes_3(${CUR_OUT_DIR}service_worker/dispatch_fetch_event_params "COLLECTED_MOJO_SOURCES")
add_mojo_prefixes_3(${CUR_OUT_DIR}service_worker/navigation_preload_state "COLLECTED_MOJO_SOURCES")
add_mojo_prefixes_3(${CUR_OUT_DIR}service_worker/service_worker_client "COLLECTED_MOJO_SOURCES")
add_mojo_prefixes_3(${CUR_OUT_DIR}service_worker/service_worker_error_type "COLLECTED_MOJO_SOURCES")
add_mojo_prefixes_3(${CUR_OUT_DIR}service_worker/service_worker_event_status "COLLECTED_MOJO_SOURCES")
add_mojo_prefixes_3(${CUR_OUT_DIR}service_worker/service_worker_fetch_response_callback "COLLECTED_MOJO_SOURCES")
add_mojo_prefixes_3(${CUR_OUT_DIR}service_worker/service_worker_installed_scripts_manager "COLLECTED_MOJO_SOURCES")
add_mojo_prefixes_3(${CUR_OUT_DIR}service_worker/service_worker_provider_type "COLLECTED_MOJO_SOURCES")
add_mojo_prefixes_3(${CUR_OUT_DIR}service_worker/service_worker_state "COLLECTED_MOJO_SOURCES")
add_mojo_prefixes_3(${CUR_OUT_DIR}service_worker/service_worker_stream_handle "COLLECTED_MOJO_SOURCES")
add_mojo_prefixes_3(${CUR_OUT_DIR}site_engagement/site_engagement "COLLECTED_MOJO_SOURCES")
## TODO ## add_mojo_prefixes_3(${CUR_OUT_DIR}sms/sms_manager "COLLECTED_MOJO_SOURCES")
## TODO ## add_mojo_prefixes_3(${CUR_OUT_DIR}speech/speech_recognition_error "COLLECTED_MOJO_SOURCES")
## TODO ## add_mojo_prefixes_3(${CUR_OUT_DIR}speech/speech_recognition_error_code "COLLECTED_MOJO_SOURCES")
## TODO ## add_mojo_prefixes_3(${CUR_OUT_DIR}speech/speech_recognition_grammar "COLLECTED_MOJO_SOURCES")
## TODO ## add_mojo_prefixes_3(${CUR_OUT_DIR}speech/speech_recognition_result "COLLECTED_MOJO_SOURCES")
## TODO ## add_mojo_prefixes_3(${CUR_OUT_DIR}speech/speech_recognizer "COLLECTED_MOJO_SOURCES")
add_mojo_prefixes_3(${CUR_OUT_DIR}ukm/ukm "COLLECTED_MOJO_SOURCES")
add_mojo_prefixes_3(${CUR_OUT_DIR}use_counter/css_property_id "COLLECTED_MOJO_SOURCES")
add_mojo_prefixes_3(${CUR_OUT_DIR}user_agent/user_agent_metadata "COLLECTED_MOJO_SOURCES")
## TODO ## add_mojo_prefixes_3(${CUR_OUT_DIR}v8_cache_options "COLLECTED_MOJO_SOURCES")
add_mojo_prefixes_3(${CUR_OUT_DIR}wake_lock/wake_lock "COLLECTED_MOJO_SOURCES")
add_mojo_prefixes_3(${CUR_OUT_DIR}webaudio/audio_context_manager "COLLECTED_MOJO_SOURCES")
add_mojo_prefixes_3(${CUR_OUT_DIR}webdatabase/web_database "COLLECTED_MOJO_SOURCES")
add_mojo_prefixes_3(${CUR_OUT_DIR}window_features/window_features "COLLECTED_MOJO_SOURCES")
add_mojo_prefixes_3(${CUR_OUT_DIR}worker/shared_worker "COLLECTED_MOJO_SOURCES")
add_mojo_prefixes_3(${CUR_OUT_DIR}worker/shared_worker_client "COLLECTED_MOJO_SOURCES")
add_mojo_prefixes_3(${CUR_OUT_DIR}worker/shared_worker_connector "COLLECTED_MOJO_SOURCES")
add_mojo_prefixes_3(${CUR_OUT_DIR}worker/shared_worker_creation_context_type "COLLECTED_MOJO_SOURCES")
add_mojo_prefixes_3(${CUR_OUT_DIR}worker/shared_worker_host "COLLECTED_MOJO_SOURCES")
add_mojo_prefixes_3(${CUR_OUT_DIR}worker/shared_worker_info "COLLECTED_MOJO_SOURCES")
add_mojo_prefixes_3(${CUR_OUT_DIR}worker/worker_content_settings_proxy "COLLECTED_MOJO_SOURCES")
add_mojo_prefixes_3(${CUR_OUT_DIR}worker/worker_main_script_load_params "COLLECTED_MOJO_SOURCES")

# mojom("mojom_core")
# requires third_party/blink/renderer/bindings/core/v8/serialization/serialized_script_value.h
## TODO ## add_mojo_prefixes_3(${CUR_OUT_DIR}messaging/cloneable_message "COLLECTED_MOJO_SOURCES")
## TODO ## requires skia/public/interfaces/bitmap_skbitmap_struct_traits.h
#add_mojo_prefixes_3(${CUR_OUT_DIR}messaging/transferable_message "COLLECTED_MOJO_SOURCES")
add_mojo_prefixes_3(${CUR_OUT_DIR}messaging/user_activation_snapshot "COLLECTED_MOJO_SOURCES")
## TODO ## requires skia/public/interfaces/bitmap_skbitmap_struct_traits.h
#add_mojo_prefixes_3(${CUR_OUT_DIR}portal/portal "COLLECTED_MOJO_SOURCES")
# requires third_party/blink/renderer/bindings/core/v8/serialization/serialized_script_value.h
#add_mojo_prefixes_3(${CUR_OUT_DIR}service_worker/controller_service_worker "COLLECTED_MOJO_SOURCES")
#add_mojo_prefixes_3(${CUR_OUT_DIR}service_worker/embedded_worker "COLLECTED_MOJO_SOURCES")
## TODO ## requires skia/public/interfaces/bitmap_skbitmap_struct_traits.h
#add_mojo_prefixes_3(${CUR_OUT_DIR}service_worker/service_worker "COLLECTED_MOJO_SOURCES")
#add_mojo_prefixes_3(${CUR_OUT_DIR}service_worker/service_worker_container "COLLECTED_MOJO_SOURCES")
#add_mojo_prefixes_3(${CUR_OUT_DIR}service_worker/service_worker_object "COLLECTED_MOJO_SOURCES")
#add_mojo_prefixes_3(${CUR_OUT_DIR}service_worker/service_worker_provider "COLLECTED_MOJO_SOURCES")
#add_mojo_prefixes_3(${CUR_OUT_DIR}service_worker/service_worker_registration "COLLECTED_MOJO_SOURCES")
## TODO ## requires third_party/blink/renderer/bindings/core/v8/serialization/serialized_script_value.h
#add_mojo_prefixes_3(${CUR_OUT_DIR}worker/dedicated_worker_host_factory "COLLECTED_MOJO_SOURCES")
## TODO ## requires third_party/blink/renderer/bindings/core/v8/serialization/serialized_script_value.h
#add_mojo_prefixes_3(${CUR_OUT_DIR}worker/shared_worker_factory "COLLECTED_MOJO_SOURCES")

# mojom("mojom_mhtml_load_result")
## TODO ## add_mojo_prefixes_3(${CUR_OUT_DIR}loader/mhtml_load_result "COLLECTED_MOJO_SOURCES")

add_library(BLINK_PUBLIC_MOJOM STATIC
  ${COLLECTED_MOJO_SOURCES}
)

target_link_libraries(BLINK_PUBLIC_MOJOM PUBLIC
  #public_deps = [
  #  ":android_mojo_bindings",
  #  ":authenticator_test_mojo_bindings",
  #  ":mojom_mhtml_load_result",
  #  ":web_client_hints_types_mojo_bindings",
  #  ":web_feature_mojo_bindings",
  #  "//components/payments/mojom",
  #  "//components/services/filesystem/public/interfaces",
  #  "//mojo/public/mojom/base",
  #  "//services/device/public/mojom",
  #  "//services/network/public/mojom",
  #  "//services/service_manager/public/mojom",
  #  "//services/viz/public/interfaces",
  #  "//skia/public/interfaces",
  #  "//third_party/blink/public/mojom/usb",
  #  "//ui/gfx/geometry/mojo",
  #  "//ui/gfx/mojo",
  #  "//url/mojom:url_mojom_gurl",
  #  "//url/mojom:url_mojom_origin",
  #]
  base
  GFX_GEOMETRY
  UI_GFX
  GNET
  SKIA
  MOJO
  SERVICES_NETWORK_PUBLIC_CPP
  icu
  UI_GFX
  #media
)

set_property(TARGET BLINK_PUBLIC_MOJOM PROPERTY CXX_STANDARD 17)

target_include_directories(BLINK_PUBLIC_MOJOM PRIVATE
  ${CHROMIUM_DIR}
  ${BLINK_PUBLIC_MOJOM_DIR}
  #${BASE_DIR}
  ${CUR_OUT_DIR}
  ${GEN_COMBINED_DIR}
)

#target_include_directories(BLINK_PUBLIC_MOJOM PUBLIC
#  ${GEN_COMBINED_DIR}
#)

target_compile_definitions(BLINK_PUBLIC_MOJOM PRIVATE
  BLINK_COMMON_IMPLEMENTATION=1
  BLINK_PLATFORM_IMPLEMENTATION=1
  BLINK_CORE_IMPLEMENTATION=1
  #BLINK_PUBLIC_MOJOM_IMPLEMENTATION=1
  #BLINK_ANIMATION_USE_TIME_DELTA=1
  #ENABLE_TOUCHLESS_UASTYLE_THEME=1
)
