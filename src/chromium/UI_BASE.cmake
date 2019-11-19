#buildflag_header("buildflags") {
#  header = "buildflags.h"
#  flags = [
#    "ENABLE_HIDPI=$enable_hidpi",
#    "ENABLE_MESSAGE_CENTER=$enable_message_center",
#    "ENABLE_MUS=$enable_mus",
#    "USE_ATK=$use_atk",
#    "USE_XKBCOMMON=$use_xkbcommon",
#    "HAS_NATIVE_ACCESSIBILITY=$has_native_accessibility",
#  ]
#}

### --- UI_BASE ---###

if(TARGET_EMSCRIPTEN OR TARGET_LINUX)
  list(APPEND UI_BASE_SOURCES
    ${UI_BASE_DIR}accelerators/menu_label_accelerator_util_linux.cc
    #${UI_BASE_DIR}accelerators/menu_label_accelerator_util_linux.h
    ${UI_BASE_DIR}resource/resource_bundle_auralinux.cc
    # TODO # ${UI_BASE_DIR}resource/resource_bundle_ios.mm",
    # TODO # ${UI_BASE_DIR}resource/resource_bundle_mac.mm",
    # TODO # ${UI_BASE_DIR}resource/resource_bundle_win.cc
    # TODO # ${UI_BASE_DIR}resource/resource_bundle_win.h
    # TODO # ${UI_BASE_DIR}resource/resource_data_dll_win.cc
    # TODO # ${UI_BASE_DIR}resource/resource_data_dll_win.h

    # TODO
    # pointer_device_linux
  )
elseif(TARGET_WINDOWS)
  list(APPEND UI_BASE_SOURCES
    ${UI_BASE_DIR}resource/resource_bundle_win.cc
  )
else()
  message(FATAL_ERROR "platform not supported")
endif()

list(APPEND UI_BASE_SOURCES
  ${UI_BASE_DIR}accelerators/media_keys_listener.cc
  #${UI_BASE_DIR}accelerators/media_keys_listener.h
  ${UI_BASE_DIR}accelerators/media_keys_util.cc
  #${UI_BASE_DIR}accelerators/media_keys_util.h
  ${UI_BASE_DIR}accelerators/menu_label_accelerator_util.cc
  #${UI_BASE_DIR}accelerators/menu_label_accelerator_util.h
  #${UI_BASE_DIR}accelerators/platform_accelerator_cocoa.h
  # TODO # ${UI_BASE_DIR}accelerators/platform_accelerator_cocoa.mm",
  ${UI_BASE_DIR}class_property.cc
  #${UI_BASE_DIR}class_property.h
  #${UI_BASE_DIR}cocoa/accessibility_focus_overrider.h
  # TODO # ${UI_BASE_DIR}cocoa/accessibility_focus_overrider.mm",
  #${UI_BASE_DIR}cocoa/animation_utils.h
  #${UI_BASE_DIR}cocoa/appkit_utils.h
  # TODO # ${UI_BASE_DIR}cocoa/appkit_utils.mm",
  #${UI_BASE_DIR}cocoa/base_view.h
  # TODO # ${UI_BASE_DIR}cocoa/base_view.mm",
  #${UI_BASE_DIR}cocoa/cocoa_base_utils.h
  # TODO # ${UI_BASE_DIR}cocoa/cocoa_base_utils.mm",
  #${UI_BASE_DIR}cocoa/command_dispatcher.h
  # TODO # ${UI_BASE_DIR}cocoa/command_dispatcher.mm",
  #${UI_BASE_DIR}cocoa/constrained_window/constrained_window_animation.h
  # TODO # ${UI_BASE_DIR}cocoa/constrained_window/constrained_window_animation.mm",
  #${UI_BASE_DIR}cocoa/controls/button_utils.h
  # TODO # ${UI_BASE_DIR}cocoa/controls/button_utils.mm",
  #${UI_BASE_DIR}cocoa/controls/textfield_utils.h
  # TODO # ${UI_BASE_DIR}cocoa/controls/textfield_utils.mm",
  #${UI_BASE_DIR}cocoa/defaults_utils.h
  # TODO # ${UI_BASE_DIR}cocoa/defaults_utils.mm",
  #${UI_BASE_DIR}cocoa/find_pasteboard.h
  # TODO # ${UI_BASE_DIR}cocoa/find_pasteboard.mm",
  #${UI_BASE_DIR}cocoa/flipped_view.h
  # TODO # ${UI_BASE_DIR}cocoa/flipped_view.mm",
  #${UI_BASE_DIR}cocoa/focus_tracker.h
  # TODO # ${UI_BASE_DIR}cocoa/focus_tracker.mm",
  #${UI_BASE_DIR}cocoa/focus_window_set.h
  # TODO # ${UI_BASE_DIR}cocoa/focus_window_set.mm",
  #${UI_BASE_DIR}cocoa/menu_controller.h
  # TODO # ${UI_BASE_DIR}cocoa/menu_controller.mm",
  #${UI_BASE_DIR}cocoa/nib_loading.h
  # TODO # ${UI_BASE_DIR}cocoa/nib_loading.mm",
  #${UI_BASE_DIR}cocoa/ns_view_ids.h
  # TODO # ${UI_BASE_DIR}cocoa/ns_view_ids.mm",
  #${UI_BASE_DIR}cocoa/quartz_util.h
  # TODO # ${UI_BASE_DIR}cocoa/quartz_util.mm",
  #${UI_BASE_DIR}cocoa/remote_accessibility_api.h
  # TODO # ${UI_BASE_DIR}cocoa/remote_accessibility_api.mm",
  #${UI_BASE_DIR}cocoa/remote_layer_api.h
  # TODO # ${UI_BASE_DIR}cocoa/remote_layer_api.mm",
  #${UI_BASE_DIR}cocoa/remote_views_window.h
  # TODO # ${UI_BASE_DIR}cocoa/remote_views_window.mm",
  #${UI_BASE_DIR}cocoa/secure_password_input.h
  # TODO # ${UI_BASE_DIR}cocoa/secure_password_input.mm",
  # TODO # ${UI_BASE_DIR}cocoa/text_services_context_menu.cc
  #${UI_BASE_DIR}cocoa/text_services_context_menu.h
  #${UI_BASE_DIR}cocoa/tool_tip_base_view.h
  # TODO # ${UI_BASE_DIR}cocoa/tool_tip_base_view.mm",
  #${UI_BASE_DIR}cocoa/touch_bar_forward_declarations.h
  # TODO # ${UI_BASE_DIR}cocoa/touch_bar_forward_declarations.mm",
  #${UI_BASE_DIR}cocoa/touch_bar_util.h
  # TODO # ${UI_BASE_DIR}cocoa/touch_bar_util.mm",
  #${UI_BASE_DIR}cocoa/tracking_area.h
  # TODO # ${UI_BASE_DIR}cocoa/tracking_area.mm",
  #${UI_BASE_DIR}cocoa/underlay_opengl_hosting_window.h
  # TODO # ${UI_BASE_DIR}cocoa/underlay_opengl_hosting_window.mm",
  #${UI_BASE_DIR}cocoa/user_interface_item_command_handler.h
  #${UI_BASE_DIR}cocoa/views_hostable.h
  #${UI_BASE_DIR}cocoa/weak_ptr_nsobject.h
  # TODO # ${UI_BASE_DIR}cocoa/weak_ptr_nsobject.mm",
  #${UI_BASE_DIR}cocoa/window_size_constants.h
  # TODO # ${UI_BASE_DIR}cocoa/window_size_constants.mm",
  ${UI_BASE_DIR}cursor/cursor.cc
  #${UI_BASE_DIR}cursor/cursor.h
  # TODO # ${UI_BASE_DIR}cursor/cursor_android.cc
  #${UI_BASE_DIR}cursor/cursor_loader.h
  #${UI_BASE_DIR}cursor/cursor_type.h
  # TODO # ${UI_BASE_DIR}cursor/cursor_win.cc
  #${UI_BASE_DIR}default_style.h
  #${UI_BASE_DIR}device_form_factor.h
  # TODO # ${UI_BASE_DIR}device_form_factor_android.cc
  # TODO # ${UI_BASE_DIR}device_form_factor_desktop.cc
  # TODO # ${UI_BASE_DIR}device_form_factor_ios.mm",
  #${UI_BASE_DIR}dragdrop/download_file_interface.h
  #${UI_BASE_DIR}dragdrop/drag_drop_types.h
  # TODO # ${UI_BASE_DIR}dragdrop/drag_drop_types_mac.mm",
  # TODO # ${UI_BASE_DIR}dragdrop/drag_drop_types_win.cc
  # TODO # ${UI_BASE_DIR}dragdrop/drag_source_win.cc
  #${UI_BASE_DIR}dragdrop/drag_source_win.h
  # TODO # # TODO # # TODO # ${UI_BASE_DIR}dragdrop/drop_target_event.cc
  #${UI_BASE_DIR}dragdrop/drop_target_event.h
  # TODO # ${UI_BASE_DIR}dragdrop/drop_target_win.cc
  #${UI_BASE_DIR}dragdrop/drop_target_win.h
  # TODO # ${UI_BASE_DIR}dragdrop/os_exchange_data.cc
  #${UI_BASE_DIR}dragdrop/os_exchange_data.h
  #${UI_BASE_DIR}dragdrop/os_exchange_data_provider_builder_mac.h
  # TODO # ${UI_BASE_DIR}dragdrop/os_exchange_data_provider_builder_mac.mm",
  # TODO # ${UI_BASE_DIR}dragdrop/os_exchange_data_provider_factory.cc
  #${UI_BASE_DIR}dragdrop/os_exchange_data_provider_factory.h
  #${UI_BASE_DIR}dragdrop/os_exchange_data_provider_mac.h
  # TODO # ${UI_BASE_DIR}dragdrop/os_exchange_data_provider_mac.mm",
  #${UI_BASE_DIR}dragdrop/os_exchange_data_provider_win.cc
  # TODO # ${UI_BASE_DIR}dragdrop/os_exchange_data_provider_win.h
  ${UI_BASE_DIR}hit_test.cc
  #${UI_BASE_DIR}hit_test.h
  # TODO # ${UI_BASE_DIR}l10n/formatter.cc
  #${UI_BASE_DIR}l10n/formatter.h
  ${UI_BASE_DIR}l10n/l10n_font_util.cc
  #${UI_BASE_DIR}l10n/l10n_font_util.h
  ${UI_BASE_DIR}l10n/l10n_util.cc
  #${UI_BASE_DIR}l10n/l10n_util.h
  # TODO # ${UI_BASE_DIR}l10n/l10n_util_android.cc
  #${UI_BASE_DIR}l10n/l10n_util_android.h
  #${UI_BASE_DIR}l10n/l10n_util_collator.h
  #${UI_BASE_DIR}l10n/l10n_util_mac.h
  # TODO # ${UI_BASE_DIR}l10n/l10n_util_mac.mm",
  # TODO # ${UI_BASE_DIR}l10n/l10n_util_win.cc
  #${UI_BASE_DIR}l10n/l10n_util_win.h
  # requires 'ui/strings/grit/ui_strings.h'
  ${UI_BASE_DIR}l10n/time_format.cc
  #${UI_BASE_DIR}l10n/time_format.h
  ${UI_BASE_DIR}layout.cc
  #${UI_BASE_DIR}layout.h
  ${UI_BASE_DIR}material_design/material_design_controller.cc
  #${UI_BASE_DIR}material_design/material_design_controller.h
  #${UI_BASE_DIR}material_design/material_design_controller_observer.h
  ${UI_BASE_DIR}models/button_menu_item_model.cc
  #${UI_BASE_DIR}models/button_menu_item_model.h
  ${UI_BASE_DIR}models/combobox_model.cc
  #${UI_BASE_DIR}models/combobox_model.h
  #${UI_BASE_DIR}models/combobox_model_observer.h
  #${UI_BASE_DIR}models/list_model.h
  #${UI_BASE_DIR}models/list_model_observer.h
  ${UI_BASE_DIR}models/list_selection_model.cc
  #${UI_BASE_DIR}models/list_selection_model.h
  ${UI_BASE_DIR}models/menu_model.cc
  #${UI_BASE_DIR}models/menu_model.h
  #${UI_BASE_DIR}models/menu_model_delegate.h
  #${UI_BASE_DIR}models/menu_separator_types.h
  ${UI_BASE_DIR}models/simple_combobox_model.cc
  #${UI_BASE_DIR}models/simple_combobox_model.h
  ${UI_BASE_DIR}models/simple_menu_model.cc
  #${UI_BASE_DIR}models/simple_menu_model.h
  ${UI_BASE_DIR}models/table_model.cc
  #${UI_BASE_DIR}models/table_model.h
  #${UI_BASE_DIR}models/table_model_observer.h
  ${UI_BASE_DIR}models/tree_model.cc
  #${UI_BASE_DIR}models/tree_model.h
  #${UI_BASE_DIR}models/tree_node_iterator.h
  #${UI_BASE_DIR}models/tree_node_model.h
  ${UI_BASE_DIR}nine_image_painter_factory.cc
  #${UI_BASE_DIR}nine_image_painter_factory.h
  ${UI_BASE_DIR}page_transition_types.cc
  #${UI_BASE_DIR}page_transition_types.h
  ${UI_BASE_DIR}platform_window_defaults.cc
  #${UI_BASE_DIR}platform_window_defaults.h
  #${UI_BASE_DIR}property_data.h
  ${UI_BASE_DIR}resource/resource_bundle.cc
  #${UI_BASE_DIR}resource/resource_bundle.h
  # TODO # ${UI_BASE_DIR}resource/resource_bundle_android.cc
  # TODO # ${UI_BASE_DIR}resource/resource_bundle_android.h
  # TODO # ${UI_BASE_DIR}resource/resource_bundle_ios.mm",
  # TODO # ${UI_BASE_DIR}resource/resource_bundle_mac.mm",
  # TODO # ${UI_BASE_DIR}resource/resource_bundle_win.cc
  # TODO # ${UI_BASE_DIR}resource/resource_bundle_win.h
  # TODO # ${UI_BASE_DIR}resource/resource_data_dll_win.cc
  # TODO # ${UI_BASE_DIR}resource/resource_data_dll_win.h
  #${UI_BASE_DIR}resource/whitelist.h
  ${UI_BASE_DIR}template_expressions.cc
  #${UI_BASE_DIR}template_expressions.h
  ${UI_BASE_DIR}theme_provider.cc
  #${UI_BASE_DIR}theme_provider.h
  #${UI_BASE_DIR}ui_base_export.h
  ${UI_BASE_DIR}ui_base_exports.cc
  ${UI_BASE_DIR}ui_base_paths.cc
  #${UI_BASE_DIR}ui_base_paths.h
  ${UI_BASE_DIR}ui_base_switches.cc
  #${UI_BASE_DIR}ui_base_switches.h
  ${UI_BASE_DIR}ui_base_switches_util.cc
  #${UI_BASE_DIR}ui_base_switches_util.h
  ${UI_BASE_DIR}ui_base_types.cc
  #${UI_BASE_DIR}ui_base_types.h
  ${UI_BASE_DIR}user_activity/user_activity_detector.cc
  #${UI_BASE_DIR}user_activity/user_activity_detector.h
  #${UI_BASE_DIR}user_activity/user_activity_observer.h
  #
  # view_prop.h is only for windows and aura builds
  ${UI_BASE_DIR}view_prop.cc
  #${UI_BASE_DIR}view_prop.h
  #
  ${UI_BASE_DIR}webui/i18n_source_stream.cc
  #${UI_BASE_DIR}webui/i18n_source_stream.h
  # TODO # ${UI_BASE_DIR}webui/jstemplate_builder.cc
  #${UI_BASE_DIR}webui/jstemplate_builder.h
  # TODO # ${UI_BASE_DIR}webui/web_ui_util.cc
  # TODO # #${UI_BASE_DIR}webui/web_ui_util.h
  #
  # TODO # # TODO # ${UI_BASE_DIR}win/accessibility_ids_win.h
  # TODO # ${UI_BASE_DIR}win/accessibility_misc_utils.cc
  # TODO # #${UI_BASE_DIR}win/accessibility_misc_utils.h
  # TODO # #${UI_BASE_DIR}win/atl_module.h
  # TODO # ${UI_BASE_DIR}win/foreground_helper.cc
  # TODO # #${UI_BASE_DIR}win/foreground_helper.h
  # TODO # ${UI_BASE_DIR}win/hidden_window.cc
  # TODO # #${UI_BASE_DIR}win/hidden_window.h
  # TODO # # TODO # ${UI_BASE_DIR}win/hwnd_metrics.cc
  # TODO # #${UI_BASE_DIR}win/hwnd_metrics.h
  # TODO # # TODO # ${UI_BASE_DIR}win/hwnd_subclass.cc
  # TODO # #${UI_BASE_DIR}win/hwnd_subclass.h
  # TODO # ${UI_BASE_DIR}win/internal_constants.cc
  # TODO # #${UI_BASE_DIR}win/internal_constants.h
  # TODO # ${UI_BASE_DIR}win/lock_state.cc
  # TODO # #${UI_BASE_DIR}win/lock_state.h
  # TODO # # TODO # ${UI_BASE_DIR}win/message_box_win.cc
  # TODO # #${UI_BASE_DIR}win/message_box_win.h
  # TODO # ${UI_BASE_DIR}win/mouse_wheel_util.cc
  # TODO # #${UI_BASE_DIR}win/mouse_wheel_util.h
  # TODO # ${UI_BASE_DIR}win/scoped_ole_initializer.cc
  # TODO # #${UI_BASE_DIR}win/scoped_ole_initializer.h
  # TODO # ${UI_BASE_DIR}win/session_change_observer.cc
  # TODO # #${UI_BASE_DIR}win/session_change_observer.h
  # TODO # ${UI_BASE_DIR}win/shell.cc
  # TODO # #${UI_BASE_DIR}win/shell.h
  # TODO # ${UI_BASE_DIR}win/touch_input.cc
  # TODO # #${UI_BASE_DIR}win/touch_input.h
  # TODO # ${UI_BASE_DIR}win/window_event_target.cc
  #${UI_BASE_DIR}win/window_event_target.h
  ${UI_BASE_DIR}window_open_disposition.cc
  #${UI_BASE_DIR}window_open_disposition.h
  #
  #if (is_posix) {
  #  sources += [ "l10n/l10n_util_posix.cc" ]
  #}
  #
  #if (is_mac) {
  #  sources += [ "emoji/emoji_panel_helper_mac.mm" ]
  #} else if (is_win) {
  #  sources += [ "emoji/emoji_panel_helper_win.cc" ]
  #} else if (is_chromeos) {
  #  sources += [ "emoji/emoji_panel_helper_chromeos.cc" ]
  #} else {
  #  # Empty implementation for all other platforms.
  #  sources += [ "emoji/emoji_panel_helper.cc" ]
  #}
  #
  #if (is_mac) {
  #  sources += [
  #    "accelerators/media_keys_listener_mac.mm",
  #    "accelerators/remote_command_media_keys_listener_mac.h
  #    "accelerators/remote_command_media_keys_listener_mac.mm",
  #  ]
  #} else if (is_win) {
  #  sources += [
  #    "accelerators/global_media_keys_listener_win.cc
  #    "accelerators/global_media_keys_listener_win.h
  #    "accelerators/media_keys_listener_win.cc
  #    "accelerators/system_media_controls_media_keys_listener.cc
  #    "accelerators/system_media_controls_media_keys_listener.h
  #  ]
  #} else if (use_mpris) {
  #  sources += [
  #    "accelerators/media_keys_listener_linux.cc
  #    "accelerators/mpris_media_keys_listener.cc
  #    "accelerators/mpris_media_keys_listener.h
  #  ]
  #} else {
  #  sources += [ "accelerators/media_keys_listener_stub.cc" ]
  #}
  #
  #if (is_win) {
  #  sources += [ "pointer/pointer_device_win.cc" ]
  #} else if (is_android) {
  #  sources += [ "pointer/pointer_device_android.cc" ]
  #} else if (is_ios) {
  #  sources += [ "pointer/pointer_device_ios.cc" ]
  #} else if (is_linux) {
  #  sources += [ "pointer/pointer_device_linux.cc" ]
  #} else {
  #  # Empty implementation for all other cases.
  #  sources += [ "pointer/pointer_device.cc" ]
  #  sources -= [ "pointer/pointer_device_util.cc" ]
  #}
  #
  # component("features")
  ${UI_BASE_DIR}ui_base_features.cc
  #${UI_BASE_DIR}ui_base_features.h
  #
  # if (!is_ios)
  #
  ${UI_BASE_DIR}accelerators/accelerator.cc
  ${UI_BASE_DIR}accelerators/accelerator.h
  ${UI_BASE_DIR}accelerators/accelerator_history.cc
  ${UI_BASE_DIR}accelerators/accelerator_history.h
  ${UI_BASE_DIR}accelerators/accelerator_manager.cc
  ${UI_BASE_DIR}accelerators/accelerator_manager.h
  ${UI_BASE_DIR}base_window.cc
  ${UI_BASE_DIR}base_window.h
  # TODO # ${UI_BASE_DIR}cocoa/bubble_closer.h
  #${UI_BASE_DIR}cocoa/bubble_closer.mm",
  ${UI_BASE_DIR}cursor/cursor_util.cc
  ${UI_BASE_DIR}cursor/cursor_util.h
  ${UI_BASE_DIR}default_theme_provider.cc
  ${UI_BASE_DIR}default_theme_provider.h
  # TODO # ${UI_BASE_DIR}dragdrop/cocoa_dnd_util.h
  #${UI_BASE_DIR}dragdrop/cocoa_dnd_util.mm",
  # TODO # # TODO # # TODO # ${UI_BASE_DIR}dragdrop/file_info.cc
  # TODO # ${UI_BASE_DIR}dragdrop/file_info.h
  # TODO # ${UI_BASE_DIR}emoji/emoji_panel_helper.h
  ${UI_BASE_DIR}pointer/pointer_device.h
  ${UI_BASE_DIR}pointer/pointer_device_util.cc
  ${UI_BASE_DIR}pointer/touch_editing_controller.cc
  ${UI_BASE_DIR}pointer/touch_editing_controller.h
  ${UI_BASE_DIR}text/bytes_formatting.cc
  ${UI_BASE_DIR}text/bytes_formatting.h
  #
  # component("ui_data_pack")
  #
  ${UI_BASE_DIR}resource/data_pack.cc
  ${UI_BASE_DIR}resource/data_pack.h
  ${UI_BASE_DIR}resource/data_pack_export.h
  ${UI_BASE_DIR}resource/resource_handle.h
  ${UI_BASE_DIR}resource/scale_factor.cc
  ${UI_BASE_DIR}resource/scale_factor.h
)

if(TARGET_WINDOWS)
  list(APPEND UI_BASE_SOURCES
    #
    # TODO # ${UI_BASE_DIR}win/accessibility_ids_win.h
    ${UI_BASE_DIR}win/accessibility_misc_utils.cc
    #${UI_BASE_DIR}win/accessibility_misc_utils.h
    #${UI_BASE_DIR}win/atl_module.h
    ${UI_BASE_DIR}win/foreground_helper.cc
    #${UI_BASE_DIR}win/foreground_helper.h
    ${UI_BASE_DIR}win/hidden_window.cc
    #${UI_BASE_DIR}win/hidden_window.h
    # TODO #
    ${UI_BASE_DIR}win/hwnd_metrics.cc
    #${UI_BASE_DIR}win/hwnd_metrics.h
    # TODO #
    ${UI_BASE_DIR}win/hwnd_subclass.cc
    #${UI_BASE_DIR}win/hwnd_subclass.h
    ${UI_BASE_DIR}win/internal_constants.cc
    #${UI_BASE_DIR}win/internal_constants.h
    ${UI_BASE_DIR}win/lock_state.cc
    #${UI_BASE_DIR}win/lock_state.h
    # TODO #
    ${UI_BASE_DIR}win/message_box_win.cc
    #${UI_BASE_DIR}win/message_box_win.h
    ${UI_BASE_DIR}win/mouse_wheel_util.cc
    #${UI_BASE_DIR}win/mouse_wheel_util.h
    ${UI_BASE_DIR}win/scoped_ole_initializer.cc
    #${UI_BASE_DIR}win/scoped_ole_initializer.h
    ${UI_BASE_DIR}win/session_change_observer.cc
    #${UI_BASE_DIR}win/session_change_observer.h
    ${UI_BASE_DIR}win/shell.cc
    #${UI_BASE_DIR}win/shell.h
    ${UI_BASE_DIR}win/touch_input.cc
    #${UI_BASE_DIR}win/touch_input.h
    ${UI_BASE_DIR}win/window_event_target.cc
    #${UI_BASE_DIR}win/window_event_target.h
    # TODO #
    ${UI_BASE_DIR}l10n/l10n_util_win.cc
    #
    # TODO # ${UI_BASE_DIR}dragdrop/os_exchange_data_provider_win.cc
    # TODO # ${UI_BASE_DIR}dragdrop/drop_target_win.cc
    # TODO # ${UI_BASE_DIR}dragdrop/drag_drop_types_win.cc
    # TODO #
    ${UI_BASE_DIR}cursor/cursor_win.cc
    # TODO # ${UI_BASE_DIR}dragdrop/drag_source_win.cc
    ${UI_BASE_DIR}pointer/pointer_device_win.cc
    # TODO # ${UI_BASE_DIR}accelerators/global_media_keys_listener_win.cc
    # TODO # ${UI_BASE_DIR}accelerators/global_media_keys_listener_win.h
    # TODO # ${UI_BASE_DIR}accelerators/media_keys_listener_win.cc
    # TODO # ${UI_BASE_DIR}emoji/emoji_panel_helper_win.cc
  )
endif(TARGET_WINDOWS)

if(TARGET_WINDOWS)
  list(APPEND UI_BASE_EXTRA_DEFINES
    IS_UI_BASE_IME_WIN_IMPL=1
  )
  #
  list(APPEND UI_BASE_EXTRA_LIBS
    imm32.lib
  )
  #
  list(APPEND UI_BASE_IME_SOURCES
    ${UI_BASE_DIR}ime/win/imm32_manager.cc
    ${UI_BASE_DIR}ime/win/imm32_manager.h
    ${UI_BASE_DIR}ime/win/input_method_win_base.cc
    ${UI_BASE_DIR}ime/win/input_method_win_base.h
    ${UI_BASE_DIR}ime/win/input_method_win_imm32.cc
    ${UI_BASE_DIR}ime/win/input_method_win_imm32.h
    ${UI_BASE_DIR}ime/win/input_method_win_tsf.cc
    ${UI_BASE_DIR}ime/win/input_method_win_tsf.h
    ${UI_BASE_DIR}ime/win/on_screen_keyboard_display_manager_input_pane.cc
    ${UI_BASE_DIR}ime/win/on_screen_keyboard_display_manager_input_pane.h
    ${UI_BASE_DIR}ime/win/on_screen_keyboard_display_manager_tab_tip.cc
    ${UI_BASE_DIR}ime/win/on_screen_keyboard_display_manager_tab_tip.h
    ${UI_BASE_DIR}ime/win/tsf_bridge.cc
    ${UI_BASE_DIR}ime/win/tsf_bridge.h
    ${UI_BASE_DIR}ime/win/tsf_event_router.cc
    ${UI_BASE_DIR}ime/win/tsf_event_router.h
    ${UI_BASE_DIR}ime/win/tsf_input_scope.cc
    ${UI_BASE_DIR}ime/win/tsf_input_scope.h
    ${UI_BASE_DIR}ime/win/tsf_text_store.cc
    ${UI_BASE_DIR}ime/win/tsf_text_store.h
  )
endif(TARGET_WINDOWS)

list(APPEND UI_BASE_IME_SOURCES
  # jumbo_component("ime")
  ${UI_BASE_DIR}ime/constants.cc
  ${UI_BASE_DIR}ime/constants.h
  ${UI_BASE_DIR}ime/ime_bridge.cc
  ${UI_BASE_DIR}ime/ime_bridge.h
  ${UI_BASE_DIR}ime/ime_candidate_window_handler_interface.h
  ${UI_BASE_DIR}ime/ime_engine_handler_interface.h
  ${UI_BASE_DIR}ime/ime_input_context_handler_interface.h
  ${UI_BASE_DIR}ime/input_method.h
  ${UI_BASE_DIR}ime/input_method_base.cc
  ${UI_BASE_DIR}ime/input_method_base.h
  ${UI_BASE_DIR}ime/input_method_delegate.cc
  ${UI_BASE_DIR}ime/input_method_delegate.h
  ${UI_BASE_DIR}ime/input_method_keyboard_controller.h
  ${UI_BASE_DIR}ime/input_method_keyboard_controller_observer.h
  ${UI_BASE_DIR}ime/input_method_keyboard_controller_stub.cc
  ${UI_BASE_DIR}ime/input_method_keyboard_controller_stub.h
  ${UI_BASE_DIR}ime/input_method_minimal.cc
  ${UI_BASE_DIR}ime/input_method_minimal.h
  ${UI_BASE_DIR}ime/input_method_observer.h
  ${UI_BASE_DIR}ime/mock_ime_input_context_handler.cc
  ${UI_BASE_DIR}ime/mock_ime_input_context_handler.h
  ${UI_BASE_DIR}ime/mock_input_method.cc
  ${UI_BASE_DIR}ime/mock_input_method.h
  ${UI_BASE_DIR}ime/text_edit_commands.h
  ${UI_BASE_DIR}ime/text_input_client.cc
  ${UI_BASE_DIR}ime/text_input_client.h
  # source_set("text_input_types")
  ${UI_BASE_DIR}ime/text_input_flags.h
  ${UI_BASE_DIR}ime/text_input_mode.h
  ${UI_BASE_DIR}ime/text_input_type.h
  # jumbo_component("ime_types")
  ${UI_BASE_DIR}ime/candidate_window.cc
  ${UI_BASE_DIR}ime/candidate_window.h
  ${UI_BASE_DIR}ime/composition_text.cc
  ${UI_BASE_DIR}ime/composition_text.h
  ${UI_BASE_DIR}ime/ime_text_span.cc
  ${UI_BASE_DIR}ime/ime_text_span.h
  ${UI_BASE_DIR}ime/infolist_entry.cc
  ${UI_BASE_DIR}ime/infolist_entry.h
  #if (is_chromeos || use_ozone) {
  #  sources += [
  #    "character_composer.cc
  #    "character_composer.h
  #  ]
  # jumbo_component("init")
  ${UI_BASE_DIR}ime/init/input_method_factory.cc
  ${UI_BASE_DIR}ime/init/input_method_factory.h
  ${UI_BASE_DIR}ime/init/input_method_initializer.cc
  ${UI_BASE_DIR}ime/init/input_method_initializer.h
)

#list(APPEND UI_BASE_STUB_SOURCES
#  ${UI_BASE_DIR}ime/text_input_client.cc
#  #
#  ${UI_BASE_DIR}ime/dummy_input_method.cc
#  ${UI_BASE_DIR}ime/dummy_input_method.h
#  ${UI_BASE_DIR}ime/dummy_text_input_client.cc
#  ${UI_BASE_DIR}ime/dummy_text_input_client.h
#  # TODO: https://github.com/blockspacer/skia-opengl-emscripten/blob/master/src/chromium/ui/base/ime/BUILD.gn
#)

add_library(UI_BASE STATIC
  ${UI_BASE_SOURCES}
  ${UI_BASE_IME_SOURCES}
  #${UI_BASE_STUB_SOURCES}
)

target_link_libraries(UI_BASE PRIVATE
  base # TODO
  #public_deps = [
  #  ":buildflags",
  #  ":features",
  #  ":ui_data_pack",
  #  "//base",
  #  "//skia",
  #  "//ui/gfx",
  #  "//ui/gfx/geometry",
  #]
  #deps = [
  #  "//base:base_static",
  #  "//base:i18n",
  #  "//base/third_party/dynamic_annotations",
  #  "//net",
  #  "//third_party/icu",
  #  "//third_party/zlib:zlib",
  #  "//ui/base/clipboard:clipboard_types",
  #  "//ui/display",
  #  "//ui/events",
  #  "//ui/events/devices",
  #  "//ui/resources",
  #  "//ui/strings",
  #  "//url",
  #]
  #
  #dynamic_annotations
  base
  SKIA
  UI_GFX
  GFX_GEOMETRY
  ${GNET_LIBS}
  ${CUSTOM_ICU_LIB}
  ${HARFBUZZ_LIBRARIES}
  #
  #dynamic_annotations
  #base
  #GFX_GEOMETRY
  #
  #dynamic_annotations
  #${BASE_LIBRARIES}
  ## linux libsync
  #${libsync_LIB}
  #SKIA
  ##"+ui/events",
  ##"+ui/base/x",
  #UI_GFX
  ##
  #base
  ##mesa_headers
  ##  "//ui/events/platform",
  #UI_GFX
  ##  "//ui/gfx/geometry",
  #GFX_GEOMETRY
  #egl
  #GLESv2
  GFX_RANGE
  #"//base:i18n",
  #"//ui/base/ime/mojo",
  #"//ui/events:dom_keycode_converter",
  #"//ui/gfx:native_widget_types",
  # khronos
  ${khronos_LIB} # TODO
  ${UI_BASE_EXTRA_LIBS}
)

set_property(TARGET UI_BASE PROPERTY CXX_STANDARD 17)

target_include_directories(UI_BASE PRIVATE
  ${UI_BASE_DIR}
  ${BASE_DIR}
  ${GEN_COMBINED_DIR} # requires 'ui/strings/grit/ui_strings.h'
)

target_compile_definitions(UI_BASE PRIVATE
  ${UI_BASE_EXTRA_DEFINES}
  UI_BASE_IMPLEMENTATION=1
  IS_UI_BASE_FEATURES_IMPL=1
  UI_DATA_PACK_IMPLEMENTATION=1
  IS_UI_BASE_IME_TYPES_IMPL=1
  IS_UI_BASE_IME_IMPL=1
  IS_UI_BASE_IME_INIT_IMPL=1
  # custom
  UI_BASE_PORT=1
)
