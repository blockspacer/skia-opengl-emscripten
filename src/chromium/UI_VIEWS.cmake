### --- UI_VIEWS ---###

set(UI_VIEWS_NO_AX TRUE)

if(UI_VIEWS_NO_AX)
  list(APPEND UI_VIEWS_PUBLIC_DEFS
    UI_VIEWS_NO_AX=1 # accessibility
  )
endif(UI_VIEWS_NO_AX)

if(NOT UI_VIEWS_NO_AX)
  list(APPEND UI_VIEWS_SOURCES
    #
    # accessibility
    #
    ${UI_VIEWS_DIR}accessibility/ax_event_manager.cc
    ${UI_VIEWS_DIR}accessibility/ax_event_observer.cc
    ${UI_VIEWS_DIR}accessibility/ax_virtual_view.cc
    ${UI_VIEWS_DIR}accessibility/view_accessibility.cc
    ${UI_VIEWS_DIR}accessibility/view_accessibility_utils.cc
    ${UI_VIEWS_DIR}accessible_pane_view.cc
  )
endif(NOT UI_VIEWS_NO_AX)

list(APPEND UI_VIEWS_SOURCES
  #
  # animation
  #
  ${UI_VIEWS_DIR}animation/animation_delegate_views.cc
  ${UI_VIEWS_DIR}animation/bounds_animator.cc
  ${UI_VIEWS_DIR}animation/compositor_animation_runner.cc
  ${UI_VIEWS_DIR}animation/flood_fill_ink_drop_ripple.cc
  ${UI_VIEWS_DIR}animation/ink_drop.cc
  ${UI_VIEWS_DIR}animation/ink_drop_animation_ended_reason.cc
  ${UI_VIEWS_DIR}animation/ink_drop_event_handler.cc
  ${UI_VIEWS_DIR}animation/ink_drop_highlight.cc
  ${UI_VIEWS_DIR}animation/ink_drop_host_view.cc
  ${UI_VIEWS_DIR}animation/ink_drop_impl.cc
  ${UI_VIEWS_DIR}animation/ink_drop_mask.cc
  ${UI_VIEWS_DIR}animation/ink_drop_painted_layer_delegates.cc
  ${UI_VIEWS_DIR}animation/ink_drop_ripple.cc
  ${UI_VIEWS_DIR}animation/ink_drop_state.cc
  ${UI_VIEWS_DIR}animation/ink_drop_stub.cc
  ${UI_VIEWS_DIR}animation/ink_drop_util.cc
  ${UI_VIEWS_DIR}animation/installable_ink_drop.cc
  ${UI_VIEWS_DIR}animation/scroll_animator.cc
  ${UI_VIEWS_DIR}animation/square_ink_drop_ripple.cc
  ${UI_VIEWS_DIR}background.cc
  ${UI_VIEWS_DIR}border.cc
  ${UI_VIEWS_DIR}bubble/bubble_border.cc
  ${UI_VIEWS_DIR}bubble/bubble_dialog_delegate_view.cc
  ${UI_VIEWS_DIR}bubble/bubble_frame_view.cc
  ${UI_VIEWS_DIR}bubble/footnote_container_view.cc
  ${UI_VIEWS_DIR}bubble/info_bubble.cc
  ${UI_VIEWS_DIR}bubble/tooltip_icon.cc
  ${UI_VIEWS_DIR}button_drag_utils.cc
  ${UI_VIEWS_DIR}color_chooser/color_chooser_view.cc
  ${UI_VIEWS_DIR}context_menu_controller.cc
  ${UI_VIEWS_DIR}controls/animated_image_view.cc
  ${UI_VIEWS_DIR}controls/button/button.cc
  ${UI_VIEWS_DIR}controls/button/button_controller.cc
  ${UI_VIEWS_DIR}controls/button/checkbox.cc
  ${UI_VIEWS_DIR}controls/button/image_button.cc
  ${UI_VIEWS_DIR}controls/button/image_button_factory.cc
  ${UI_VIEWS_DIR}controls/button/label_button.cc
  ${UI_VIEWS_DIR}controls/button/label_button_border.cc
  ${UI_VIEWS_DIR}controls/button/md_text_button.cc
  ${UI_VIEWS_DIR}controls/button/menu_button.cc
  ${UI_VIEWS_DIR}controls/button/menu_button_controller.cc
  ${UI_VIEWS_DIR}controls/button/radio_button.cc
  ${UI_VIEWS_DIR}controls/button/toggle_button.cc
  ${UI_VIEWS_DIR}controls/combobox/combobox.cc
  ${UI_VIEWS_DIR}controls/combobox/combobox_util.cc
  ${UI_VIEWS_DIR}controls/editable_combobox/editable_combobox.cc
  ${UI_VIEWS_DIR}controls/focus_ring.cc
  ${UI_VIEWS_DIR}controls/focusable_border.cc
  ${UI_VIEWS_DIR}controls/image_view.cc
  ${UI_VIEWS_DIR}controls/image_view_base.cc
  ${UI_VIEWS_DIR}controls/label.cc
  ${UI_VIEWS_DIR}controls/link.cc
  #${UI_VIEWS_DIR}controls/menu/menu_closure_animation_mac.mm",
  #${UI_VIEWS_DIR}controls/menu/menu_cocoa_watcher_mac.mm",
  ${UI_VIEWS_DIR}controls/menu/menu_config.cc
  ${UI_VIEWS_DIR}controls/menu/menu_config_chromeos.cc
  ${UI_VIEWS_DIR}controls/menu/menu_config_linux.cc
  #${UI_VIEWS_DIR}controls/menu/menu_config_mac.mm",
  #${UI_VIEWS_DIR}controls/menu/menu_config_win.cc
  ${UI_VIEWS_DIR}controls/menu/menu_controller.cc
  ${UI_VIEWS_DIR}controls/menu/menu_delegate.cc
  ${UI_VIEWS_DIR}controls/menu/menu_host.cc
  ${UI_VIEWS_DIR}controls/menu/menu_host_root_view.cc
  ${UI_VIEWS_DIR}controls/menu/menu_image_util.cc
  ${UI_VIEWS_DIR}controls/menu/menu_item_view.cc
  ${UI_VIEWS_DIR}controls/menu/menu_model_adapter.cc
  ${UI_VIEWS_DIR}controls/menu/menu_runner.cc
  ${UI_VIEWS_DIR}controls/menu/menu_runner_impl.cc
  ${UI_VIEWS_DIR}controls/menu/menu_runner_impl_adapter.cc
  #${UI_VIEWS_DIR}controls/menu/menu_runner_impl_cocoa.mm",
  ${UI_VIEWS_DIR}controls/menu/menu_scroll_view_container.cc
  ${UI_VIEWS_DIR}controls/menu/menu_separator.cc
  #${UI_VIEWS_DIR}controls/menu/native_menu_win.cc
  ${UI_VIEWS_DIR}controls/menu/submenu_view.cc
  ${UI_VIEWS_DIR}controls/message_box_view.cc
  ${UI_VIEWS_DIR}controls/native/native_view_host.cc
  #${UI_VIEWS_DIR}controls/native/native_view_host_mac.mm",
  ${UI_VIEWS_DIR}controls/prefix_selector.cc
  ${UI_VIEWS_DIR}controls/progress_bar.cc
  ${UI_VIEWS_DIR}controls/resize_area.cc
  ${UI_VIEWS_DIR}controls/scroll_view.cc
  ${UI_VIEWS_DIR}controls/scrollbar/base_scroll_bar_button.cc
  ${UI_VIEWS_DIR}controls/scrollbar/base_scroll_bar_thumb.cc
  #${UI_VIEWS_DIR}controls/scrollbar/cocoa_scroll_bar.mm",
  ${UI_VIEWS_DIR}controls/scrollbar/overlay_scroll_bar.cc
  ${UI_VIEWS_DIR}controls/scrollbar/scroll_bar.cc
  ${UI_VIEWS_DIR}controls/scrollbar/scroll_bar_views.cc
  ${UI_VIEWS_DIR}controls/separator.cc
  ${UI_VIEWS_DIR}controls/slider.cc
  ${UI_VIEWS_DIR}controls/styled_label.cc
  ${UI_VIEWS_DIR}controls/tabbed_pane/tabbed_pane.cc
  ${UI_VIEWS_DIR}controls/table/table_header.cc
  ${UI_VIEWS_DIR}controls/table/table_utils.cc
  ${UI_VIEWS_DIR}controls/table/table_view.cc
  ${UI_VIEWS_DIR}controls/textfield/textfield.cc
  ${UI_VIEWS_DIR}controls/textfield/textfield_controller.cc
  ${UI_VIEWS_DIR}controls/textfield/textfield_model.cc
  ${UI_VIEWS_DIR}controls/throbber.cc
  ${UI_VIEWS_DIR}controls/tree/tree_view.cc
  ${UI_VIEWS_DIR}controls/tree/tree_view_controller.cc
  ${UI_VIEWS_DIR}controls/tree/tree_view_drawing_provider.cc
  ${UI_VIEWS_DIR}controls/views_text_services_context_menu.cc
  ${UI_VIEWS_DIR}controls/views_text_services_context_menu_base.cc
  ${UI_VIEWS_DIR}controls/views_text_services_context_menu_base.h
  #${UI_VIEWS_DIR}controls/views_text_services_context_menu_mac.mm",
  ${UI_VIEWS_DIR}debug_utils.cc
  ${UI_VIEWS_DIR}drag_utils.cc
  #${UI_VIEWS_DIR}drag_utils_mac.mm",
  #${UI_VIEWS_DIR}event_monitor_mac.mm",
  ${UI_VIEWS_DIR}event_utils.cc
  ${UI_VIEWS_DIR}focus/external_focus_tracker.cc
  ${UI_VIEWS_DIR}focus/focus_manager.cc
  ${UI_VIEWS_DIR}focus/focus_manager_factory.cc
  ${UI_VIEWS_DIR}focus/focus_search.cc
  ${UI_VIEWS_DIR}focus/widget_focus_manager.cc
  ${UI_VIEWS_DIR}layout/box_layout.cc
  ${UI_VIEWS_DIR}layout/fill_layout.cc
  ${UI_VIEWS_DIR}layout/flex_layout.cc
  ${UI_VIEWS_DIR}layout/flex_layout_types.cc
  ${UI_VIEWS_DIR}layout/flex_layout_types_internal.cc
  ${UI_VIEWS_DIR}layout/grid_layout.cc
  ${UI_VIEWS_DIR}layout/layout_manager.cc
  ${UI_VIEWS_DIR}layout/layout_provider.cc
  #
  # linux_ui
  #
  ${UI_VIEWS_DIR}linux_ui/linux_ui.cc
  ${UI_VIEWS_DIR}linux_ui/status_icon_linux.cc
  ${UI_VIEWS_DIR}linux_ui/window_button_order_provider.cc
  #
  #
  #
  ${UI_VIEWS_DIR}masked_targeter_delegate.cc
  ${UI_VIEWS_DIR}metadata/metadata_cache.cc
  ${UI_VIEWS_DIR}metadata/metadata_types.cc
  ${UI_VIEWS_DIR}metadata/type_conversion.cc
  ${UI_VIEWS_DIR}metrics.cc
  #${UI_VIEWS_DIR}metrics_mac.cc
  ${UI_VIEWS_DIR}mouse_watcher.cc
  ${UI_VIEWS_DIR}mouse_watcher_view_host.cc
  #${UI_VIEWS_DIR}native_cursor_mac.mm",
  ${UI_VIEWS_DIR}paint_info.cc
  ${UI_VIEWS_DIR}painter.cc
  ${UI_VIEWS_DIR}rect_based_targeting_utils.cc
  ${UI_VIEWS_DIR}repeat_controller.cc
  ${UI_VIEWS_DIR}round_rect_painter.cc
  ${UI_VIEWS_DIR}selection_controller.cc
  ${UI_VIEWS_DIR}style/platform_style.cc
  #${UI_VIEWS_DIR}style/platform_style_mac.mm",
  ${UI_VIEWS_DIR}style/typography.cc
  ${UI_VIEWS_DIR}style/typography_provider.cc
  ${UI_VIEWS_DIR}view.cc
  ${UI_VIEWS_DIR}view_class_properties.cc
  ${UI_VIEWS_DIR}view_constants.cc
  ${UI_VIEWS_DIR}view_model.cc
  ${UI_VIEWS_DIR}view_model_utils.cc
  ${UI_VIEWS_DIR}view_targeter.cc
  ${UI_VIEWS_DIR}view_targeter_delegate.cc
  ${UI_VIEWS_DIR}view_tracker.cc
  ${UI_VIEWS_DIR}views_delegate.cc
  ${UI_VIEWS_DIR}views_features.cc
  ${UI_VIEWS_DIR}views_switches.cc
  #${UI_VIEWS_DIR}views_touch_selection_controller_factory_mac.cc
  #
  # widget
  #
  ${UI_VIEWS_DIR}widget/drop_helper.cc
  #${UI_VIEWS_DIR}widget/native_widget_mac.mm",
  ${UI_VIEWS_DIR}widget/native_widget_private.cc
  ${UI_VIEWS_DIR}widget/root_view.cc
  ${UI_VIEWS_DIR}widget/root_view_targeter.cc
  ${UI_VIEWS_DIR}widget/tooltip_manager.cc
  ${UI_VIEWS_DIR}widget/widget.cc
  ${UI_VIEWS_DIR}widget/widget_aura_utils.cc
  ${UI_VIEWS_DIR}widget/widget_delegate.cc
  ${UI_VIEWS_DIR}widget/widget_deletion_observer.cc
  ${UI_VIEWS_DIR}widget/widget_utils.cc
  #${UI_VIEWS_DIR}widget/widget_utils_mac.mm",
  #
  # window
  #
  ${UI_VIEWS_DIR}window/caption_button_layout_constants.cc
  ${UI_VIEWS_DIR}window/client_view.cc
  ${UI_VIEWS_DIR}window/custom_frame_view.cc
  ${UI_VIEWS_DIR}window/dialog_client_view.cc
  ${UI_VIEWS_DIR}window/dialog_delegate.cc
  ${UI_VIEWS_DIR}window/frame_background.cc
  ${UI_VIEWS_DIR}window/frame_caption_button.cc
  ${UI_VIEWS_DIR}window/hit_test_utils.cc
  ${UI_VIEWS_DIR}window/native_frame_view.cc
  ${UI_VIEWS_DIR}window/non_client_view.cc
  ${UI_VIEWS_DIR}window/window_button_order_provider.cc
  ${UI_VIEWS_DIR}window/window_resize_utils.cc
  ${UI_VIEWS_DIR}window/window_shape.cc
 # #
 # # cocoa
 # #
 # #cocoa/bridge_factory_host.cc",
 # #cocoa/bridged_native_widget_host_impl.mm",
 # #cocoa/drag_drop_client_mac.h",
 # #cocoa/drag_drop_client_mac.mm",
 # #cocoa/text_input_host.h",
 # #cocoa/text_input_host.mm",
 # #cocoa/tooltip_manager_mac.h",
 # #cocoa/tooltip_manager_mac.mm",
 # #controls/button/label_button_label.cc",
 # #controls/button/label_button_label.h",
 # #controls/menu/menu_pre_target_handler.h",
  #
  # HEADERS
  #
  #${UI_VIEWS_DIR}accessibility/ax_event_manager.h
  #${UI_VIEWS_DIR}accessibility/ax_event_observer.h
  #${UI_VIEWS_DIR}accessibility/ax_virtual_view.h
  #${UI_VIEWS_DIR}accessibility/view_accessibility.h
  #${UI_VIEWS_DIR}accessibility/view_accessibility_utils.h
  #${UI_VIEWS_DIR}accessible_pane_view.h
  #${UI_VIEWS_DIR}animation/animation_delegate_views.h
  #${UI_VIEWS_DIR}animation/bounds_animator.h
  #${UI_VIEWS_DIR}animation/bounds_animator_observer.h
  #${UI_VIEWS_DIR}animation/compositor_animation_runner.h
  #${UI_VIEWS_DIR}animation/flood_fill_ink_drop_ripple.h
  #${UI_VIEWS_DIR}animation/ink_drop.h
  #${UI_VIEWS_DIR}animation/ink_drop_animation_ended_reason.h
  #${UI_VIEWS_DIR}animation/ink_drop_event_handler.h
  #${UI_VIEWS_DIR}animation/ink_drop_highlight.h
  #${UI_VIEWS_DIR}animation/ink_drop_highlight_observer.h
  #${UI_VIEWS_DIR}animation/ink_drop_host_view.h
  #${UI_VIEWS_DIR}animation/ink_drop_impl.h
  #${UI_VIEWS_DIR}animation/ink_drop_mask.h
  #${UI_VIEWS_DIR}animation/ink_drop_observer.h
  #${UI_VIEWS_DIR}animation/ink_drop_painted_layer_delegates.h
  #${UI_VIEWS_DIR}animation/ink_drop_ripple.h
  #${UI_VIEWS_DIR}animation/ink_drop_ripple_observer.h
  #${UI_VIEWS_DIR}animation/ink_drop_state.h
  #${UI_VIEWS_DIR}animation/ink_drop_stub.h
  #${UI_VIEWS_DIR}animation/ink_drop_util.h
  #${UI_VIEWS_DIR}animation/installable_ink_drop.h
  #${UI_VIEWS_DIR}animation/scroll_animator.h
  #${UI_VIEWS_DIR}animation/square_ink_drop_ripple.h
  #${UI_VIEWS_DIR}background.h
  #${UI_VIEWS_DIR}border.h
  #${UI_VIEWS_DIR}bubble/bubble_border.h
  #${UI_VIEWS_DIR}bubble/bubble_dialog_delegate_view.h
  #${UI_VIEWS_DIR}bubble/bubble_frame_view.h
  #${UI_VIEWS_DIR}bubble/info_bubble.h
  #${UI_VIEWS_DIR}bubble/tooltip_icon.h
  #${UI_VIEWS_DIR}button_drag_utils.h
  #${UI_VIEWS_DIR}cocoa/bridge_factory_host.h
  #${UI_VIEWS_DIR}cocoa/bridged_native_widget_host_impl.h
  #${UI_VIEWS_DIR}color_chooser/color_chooser_listener.h
  #${UI_VIEWS_DIR}color_chooser/color_chooser_view.h
  #${UI_VIEWS_DIR}context_menu_controller.h
  #${UI_VIEWS_DIR}controls/animated_image_view.h
  #${UI_VIEWS_DIR}controls/button/button.h
  #${UI_VIEWS_DIR}controls/button/button_controller.h
  #${UI_VIEWS_DIR}controls/button/button_controller_delegate.h
  #${UI_VIEWS_DIR}controls/button/button_observer.h
  #${UI_VIEWS_DIR}controls/button/checkbox.h
  #${UI_VIEWS_DIR}controls/button/image_button.h
  #${UI_VIEWS_DIR}controls/button/image_button_factory.h
  #${UI_VIEWS_DIR}controls/button/label_button.h
  #${UI_VIEWS_DIR}controls/button/label_button_border.h
  #${UI_VIEWS_DIR}controls/button/md_text_button.h
  #${UI_VIEWS_DIR}controls/button/menu_button.h
  #${UI_VIEWS_DIR}controls/button/menu_button_controller.h
  #${UI_VIEWS_DIR}controls/button/menu_button_listener.h
  #${UI_VIEWS_DIR}controls/button/radio_button.h
  #${UI_VIEWS_DIR}controls/button/toggle_button.h
  #${UI_VIEWS_DIR}controls/combobox/combobox.h
  #${UI_VIEWS_DIR}controls/combobox/combobox_listener.h
  #${UI_VIEWS_DIR}controls/combobox/combobox_util.h
  #${UI_VIEWS_DIR}controls/editable_combobox/editable_combobox.h
  #${UI_VIEWS_DIR}controls/editable_combobox/editable_combobox_listener.h
  #${UI_VIEWS_DIR}controls/focus_ring.h
  #${UI_VIEWS_DIR}controls/focusable_border.h
  #${UI_VIEWS_DIR}controls/image_view.h
  #${UI_VIEWS_DIR}controls/image_view_base.h
  #${UI_VIEWS_DIR}controls/label.h
  #${UI_VIEWS_DIR}controls/link.h
  #${UI_VIEWS_DIR}controls/link_listener.h
  #${UI_VIEWS_DIR}controls/menu/menu_closure_animation_mac.h
  #${UI_VIEWS_DIR}controls/menu/menu_cocoa_watcher_mac.h
  #${UI_VIEWS_DIR}controls/menu/menu_config.h
  #${UI_VIEWS_DIR}controls/menu/menu_controller.h
  #${UI_VIEWS_DIR}controls/menu/menu_controller_delegate.h
  #${UI_VIEWS_DIR}controls/menu/menu_delegate.h
  #${UI_VIEWS_DIR}controls/menu/menu_host.h
  #${UI_VIEWS_DIR}controls/menu/menu_host_root_view.h
  #${UI_VIEWS_DIR}controls/menu/menu_image_util.h
  #${UI_VIEWS_DIR}controls/menu/menu_insertion_delegate_win.h
  #${UI_VIEWS_DIR}controls/menu/menu_item_view.h
  #${UI_VIEWS_DIR}controls/menu/menu_model_adapter.h
  #${UI_VIEWS_DIR}controls/menu/menu_runner.h
  #${UI_VIEWS_DIR}controls/menu/menu_runner_handler.h
  #${UI_VIEWS_DIR}controls/menu/menu_runner_impl.h
  #${UI_VIEWS_DIR}controls/menu/menu_runner_impl_adapter.h
  #${UI_VIEWS_DIR}controls/menu/menu_runner_impl_cocoa.h
  #${UI_VIEWS_DIR}controls/menu/menu_runner_impl_interface.h
  #${UI_VIEWS_DIR}controls/menu/menu_scroll_view_container.h
  #${UI_VIEWS_DIR}controls/menu/menu_separator.h
  #${UI_VIEWS_DIR}controls/menu/menu_types.h
  #${UI_VIEWS_DIR}controls/menu/native_menu_win.h
  #${UI_VIEWS_DIR}controls/menu/submenu_view.h
  #${UI_VIEWS_DIR}controls/message_box_view.h
  #${UI_VIEWS_DIR}controls/native/native_view_host.h
  #${UI_VIEWS_DIR}controls/native/native_view_host_mac.h
  #${UI_VIEWS_DIR}controls/native/native_view_host_wrapper.h
  #${UI_VIEWS_DIR}controls/prefix_delegate.h
  #${UI_VIEWS_DIR}controls/prefix_selector.h
  #${UI_VIEWS_DIR}controls/progress_bar.h
  #${UI_VIEWS_DIR}controls/resize_area.h
  #${UI_VIEWS_DIR}controls/resize_area_delegate.h
  #${UI_VIEWS_DIR}controls/scroll_view.h
  #${UI_VIEWS_DIR}controls/scrollbar/base_scroll_bar_button.h
  #${UI_VIEWS_DIR}controls/scrollbar/base_scroll_bar_thumb.h
  #${UI_VIEWS_DIR}controls/scrollbar/cocoa_scroll_bar.h
  #${UI_VIEWS_DIR}controls/scrollbar/overlay_scroll_bar.h
  #${UI_VIEWS_DIR}controls/scrollbar/scroll_bar.h
  #${UI_VIEWS_DIR}controls/scrollbar/scroll_bar_views.h
  #${UI_VIEWS_DIR}controls/separator.h
  #${UI_VIEWS_DIR}controls/slider.h
  #${UI_VIEWS_DIR}controls/styled_label.h
  #${UI_VIEWS_DIR}controls/styled_label_listener.h
  #${UI_VIEWS_DIR}controls/tabbed_pane/tabbed_pane.h
  #${UI_VIEWS_DIR}controls/tabbed_pane/tabbed_pane_listener.h
  #${UI_VIEWS_DIR}controls/table/table_grouper.h
  #${UI_VIEWS_DIR}controls/table/table_header.h
  #${UI_VIEWS_DIR}controls/table/table_utils.h
  #${UI_VIEWS_DIR}controls/table/table_view.h
  #${UI_VIEWS_DIR}controls/table/table_view_observer.h
  #${UI_VIEWS_DIR}controls/textfield/textfield.h
  #${UI_VIEWS_DIR}controls/textfield/textfield_controller.h
  #${UI_VIEWS_DIR}controls/textfield/textfield_model.h
  #${UI_VIEWS_DIR}controls/throbber.h
  #${UI_VIEWS_DIR}controls/tree/tree_view.h
  #${UI_VIEWS_DIR}controls/tree/tree_view_controller.h
  #${UI_VIEWS_DIR}controls/tree/tree_view_drawing_provider.h
  #${UI_VIEWS_DIR}controls/views_text_services_context_menu.h
  #${UI_VIEWS_DIR}debug_utils.h
  #${UI_VIEWS_DIR}drag_controller.h
  #${UI_VIEWS_DIR}drag_utils.h
  #${UI_VIEWS_DIR}event_monitor.h
  #${UI_VIEWS_DIR}event_monitor_mac.h
  #${UI_VIEWS_DIR}event_utils.h
  #${UI_VIEWS_DIR}focus/external_focus_tracker.h
  #${UI_VIEWS_DIR}focus/focus_manager.h
  #${UI_VIEWS_DIR}focus/focus_manager_delegate.h
  #${UI_VIEWS_DIR}focus/focus_manager_factory.h
  #${UI_VIEWS_DIR}focus/focus_search.h
  #${UI_VIEWS_DIR}focus/widget_focus_manager.h
  #${UI_VIEWS_DIR}layout/box_layout.h
  #${UI_VIEWS_DIR}layout/fill_layout.h
  #${UI_VIEWS_DIR}layout/flex_layout.h
  #${UI_VIEWS_DIR}layout/flex_layout_types.h
  #${UI_VIEWS_DIR}layout/grid_layout.h
  #${UI_VIEWS_DIR}layout/layout_manager.h
  #${UI_VIEWS_DIR}layout/layout_provider.h
  #${UI_VIEWS_DIR}linux_ui/device_scale_factor_observer.h
  #${UI_VIEWS_DIR}linux_ui/linux_ui.h
  #${UI_VIEWS_DIR}linux_ui/status_icon_linux.h
  #${UI_VIEWS_DIR}linux_ui/window_button_order_observer.h
  #${UI_VIEWS_DIR}masked_targeter_delegate.h
  #${UI_VIEWS_DIR}metadata/metadata_cache.h
  #${UI_VIEWS_DIR}metadata/metadata_header_macros.h
  #${UI_VIEWS_DIR}metadata/metadata_impl_macros.h
  #${UI_VIEWS_DIR}metadata/metadata_macros_internal.h
  #${UI_VIEWS_DIR}metadata/metadata_types.h
  #${UI_VIEWS_DIR}metadata/property_metadata.h
  #${UI_VIEWS_DIR}metadata/type_conversion.h
  #${UI_VIEWS_DIR}metrics.h
  #${UI_VIEWS_DIR}mouse_constants.h
  #${UI_VIEWS_DIR}mouse_watcher.h
  #${UI_VIEWS_DIR}mouse_watcher_view_host.h
  #${UI_VIEWS_DIR}native_cursor.h
  #${UI_VIEWS_DIR}native_theme_delegate.h
  #${UI_VIEWS_DIR}paint_info.h
  #${UI_VIEWS_DIR}painter.h
  #${UI_VIEWS_DIR}rect_based_targeting_utils.h
  #${UI_VIEWS_DIR}repeat_controller.h
  #${UI_VIEWS_DIR}round_rect_painter.h
  #${UI_VIEWS_DIR}selection_controller.h
  #${UI_VIEWS_DIR}selection_controller_delegate.h
  #${UI_VIEWS_DIR}style/platform_style.h
  #${UI_VIEWS_DIR}style/typography.h
  #${UI_VIEWS_DIR}style/typography_provider.h
  #${UI_VIEWS_DIR}view.h
  #${UI_VIEWS_DIR}view_class_properties.h
  #${UI_VIEWS_DIR}view_constants.h
  #${UI_VIEWS_DIR}view_model.h
  #${UI_VIEWS_DIR}view_model_utils.h
  ${UI_VIEWS_DIR}view_observer.h
  #${UI_VIEWS_DIR}view_targeter.h
  #${UI_VIEWS_DIR}view_targeter_delegate.h
  #${UI_VIEWS_DIR}view_tracker.h
  #${UI_VIEWS_DIR}views_delegate.h
  #${UI_VIEWS_DIR}views_export.h
  #${UI_VIEWS_DIR}views_features.h
  #${UI_VIEWS_DIR}views_switches.h
  #${UI_VIEWS_DIR}views_touch_selection_controller_factory.h
  #${UI_VIEWS_DIR}widget/drop_helper.h
  #${UI_VIEWS_DIR}widget/native_widget.h
  #${UI_VIEWS_DIR}widget/native_widget_delegate.h
  #${UI_VIEWS_DIR}widget/native_widget_mac.h
  #${UI_VIEWS_DIR}widget/native_widget_private.h
  #${UI_VIEWS_DIR}widget/root_view.h
  #${UI_VIEWS_DIR}widget/root_view_targeter.h
  #${UI_VIEWS_DIR}widget/tooltip_manager.h
  #${UI_VIEWS_DIR}widget/widget.h
  #${UI_VIEWS_DIR}widget/widget_aura_utils.h
  #${UI_VIEWS_DIR}widget/widget_delegate.h
  #${UI_VIEWS_DIR}widget/widget_deletion_observer.h
  #${UI_VIEWS_DIR}widget/widget_observer.h
  #${UI_VIEWS_DIR}widget/widget_removals_observer.h
  #${UI_VIEWS_DIR}widget/widget_utils.h
  #${UI_VIEWS_DIR}widget/widget_utils_mac.h
  #${UI_VIEWS_DIR}window/caption_button_layout_constants.h
  #${UI_VIEWS_DIR}window/caption_button_types.h
  #${UI_VIEWS_DIR}window/client_view.h
  #${UI_VIEWS_DIR}window/custom_frame_view.h
  #${UI_VIEWS_DIR}window/dialog_client_view.h
  #${UI_VIEWS_DIR}window/dialog_delegate.h
  #${UI_VIEWS_DIR}window/dialog_observer.h
  #${UI_VIEWS_DIR}window/frame_background.h
  #${UI_VIEWS_DIR}window/frame_buttons.h
  #${UI_VIEWS_DIR}window/frame_caption_button.h
  #${UI_VIEWS_DIR}window/hit_test_utils.h
  #${UI_VIEWS_DIR}window/native_frame_view.h
  #${UI_VIEWS_DIR}window/non_client_view.h
  #${UI_VIEWS_DIR}window/window_button_order_provider.h
  #${UI_VIEWS_DIR}window/window_resize_utils.h
  #${UI_VIEWS_DIR}window/window_resources.h
  #${UI_VIEWS_DIR}window/window_shape.h
  #${UI_VIEWS_DIR}word_lookup_client.h
)

add_library(UI_VIEWS STATIC
  ${UI_VIEWS_SOURCES}
)

target_link_libraries(UI_VIEWS PUBLIC
  #"+cc/paint",
  PAINT_CC
  #"+components/crash/core/common/crash_key.h
  #"+components/vector_icons",
  #"+mojo/public/cpp/bindings",
  #"+services/ws/public/mojom",
  #"+skia/ext",
  SKIA_EXT
  #"+third_party/iaccessible2",
  #"+third_party/skia",
  SKIA
  #"+ui/accessibility",
  #"+ui/aura",
  #"+ui/base",
  UI_BASE
  #"+ui/compositor",
  #"+ui/display",
  #"+ui/events",
  UI_EVENTS
  #"+ui/gfx",
  UI_GFX
  #"+ui/gl/test/gl_surface_test_support.h  # To initialize GL for tests.
  #"+ui/native_theme",
  #"+ui/ozone/public",
  #"+ui/platform_window",
  #"+ui/resources/grit/ui_resources.h
  #"+ui/strings/grit/ui_strings.h
  #"+ui/touch_selection",
  #"+ui/views_bridge_mac",
  #"+ui/wm/core",
  #"+ui/wm/public",
  #":buildflags",
  #"//base:i18n",
  base
  #"//base/third_party/dynamic_annotations",
  #"//cc/paint",
  PAINT_CC
  #"//mojo/public/cpp/bindings",
  #"//services/ws/public/mojom",
  #"//skia",
  #"//third_party/icu",
  ${CUSTOM_ICU_LIB}
  #"//ui/accessibility",
  #"//ui/base/clipboard",
  #"//ui/display",
  UI_DISPLAY
  #"//ui/native_theme",
  UI_NATIVE_THEME
  #"//ui/native_theme:native_theme_browser",
  #"//ui/resources",
  #"//ui/strings",
  #"//ui/views/resources",
  #"//url",
  GURL
  #":views_vector_icons",
  #"//base",
  #"//components/vector_icons",
  #"//ui/accessibility:ax_enums_mojo",
  #"//ui/base",
  UI_BASE
  #"//ui/base/clipboard",
  #"//ui/base/ime/init",
  #"//ui/compositor",
  UI_COMPOSITOR
  #"//ui/display",
  #"//ui/events",
  #"//ui/events:events_base",
  #"//ui/events/platform",
  #"//ui/gfx",
  UI_GFX
  #"//ui/gfx/animation",
  #"//ui/gfx/geometry",
  #"//ui/views/resources",
  dynamic_annotations
  BASE_CC
  PAINT_CC
  SKIA_EXT
  GFX_ANIMATION
  GFX_CODEC
  GFX_COLOR_SPACE
  GFX_GEOMETRY_SKIA
  GFX_GEOMETRY
  GFX_SWITCHES
  GFX_RANGE
  #if (use_x11) {
  #  deps += [ "//ui/display/util" ]
  #}
)

set_property(TARGET UI_VIEWS PROPERTY CXX_STANDARD 17)

target_include_directories(UI_VIEWS PRIVATE
  ${UI_VIEWS_DIR}
  ${BASE_DIR}
)

target_compile_definitions(UI_VIEWS PRIVATE
  TOOLKIT_VIEWS=1
  VIEWS_IMPLEMENTATION=1
  # ENABLE_NATIVE_WINDOW_NAV_BUTTONS # from buildflags
)

target_compile_definitions(UI_VIEWS PUBLIC
  UI_VIEWS_PORT=1
  ${UI_VIEWS_PUBLIC_DEFS}
)
