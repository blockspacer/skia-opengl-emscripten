### --- UI_VIEWS ---###

set(UI_VIEWS_NO_AX TRUE)

if(UI_VIEWS_NO_AX)
  list(APPEND UI_VIEWS_PUBLIC_DEFS
    UI_VIEWS_NO_AX=1 # accessibility
  )
endif(UI_VIEWS_NO_AX)

if(NOT UI_VIEWS_NO_AX)
  list(APPEND UI_VIEWS_AX_SOURCES
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
  #
  ${UI_VIEWS_DIR}controls/button/label_button_label.cc
  ${UI_VIEWS_DIR}controls/button/label_button_label.h
  ${UI_VIEWS_DIR}controls/menu/menu_pre_target_handler.h
  #
  # HEADERS
  #
  #${UI_VIEWS_DIR}accessibility/ax_event_manager.h
  #${UI_VIEWS_DIR}accessibility/ax_event_observer.h
  #${UI_VIEWS_DIR}accessibility/ax_virtual_view.h
  #${UI_VIEWS_DIR}accessibility/view_accessibility.h
  #${UI_VIEWS_DIR}accessibility/view_accessibility_utils.h
  #${UI_VIEWS_DIR}accessible_pane_view.h
  #
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

list(APPEND UI_VIEWS_STUB_SOURCES
  ${UI_VIEWS_DIR}controls/menu/stub/menu_pre_target_handler_stub.cc
  ${UI_VIEWS_DIR}controls/menu/stub/menu_pre_target_handler_stub.h
)

list(APPEND UI_VIEWS_AURA_STUB_SOURCES
  ${UI_VIEWS_DIR}metrics_aura.cc
  ${UI_VIEWS_DIR}widget/stub/native_widget_stub.cc
  ${UI_VIEWS_DIR}stub/views_touch_selection_controller_factory_stub.cc
  # if (use_aura) {
  #   public += [
  #     "accessibility/accessibility_alert_window.h",
  #     "accessibility/ax_aura_obj_cache.h",
  #     "accessibility/ax_aura_obj_wrapper.h",
  #     "accessibility/ax_root_obj_wrapper.h",
  #     "accessibility/ax_tree_source_views.h",
  #     "accessibility/ax_view_obj_wrapper.h",
  #     "accessibility/ax_virtual_view_wrapper.h",
  #     "accessibility/ax_widget_obj_wrapper.h",
  #     "accessibility/ax_window_obj_wrapper.h",
  #     "controls/native/native_view_host_aura.h",
  #     "corewm/cursor_height_provider_win.h",
  #     "corewm/tooltip.h",
  #     "corewm/tooltip_aura.h",
  #     "corewm/tooltip_controller.h",
  #     "corewm/tooltip_win.h",
  #     "event_monitor_aura.h",
  #     "touchui/touch_selection_controller_impl.h",
  #     "touchui/touch_selection_menu_runner_views.h",
  #     "touchui/touch_selection_menu_views.h",
  #     "view_constants_aura.h",
  #     "widget/desktop_aura/desktop_capture_client.h",
  #     "widget/desktop_aura/desktop_drop_target_win.h",
  #     "widget/desktop_aura/desktop_event_client.h",
  #     "widget/desktop_aura/desktop_focus_rules.h",
  #     "widget/desktop_aura/desktop_native_cursor_manager.h",
  #     "widget/desktop_aura/desktop_native_widget_aura.h",
  #     "widget/desktop_aura/desktop_screen.h",
  #     "widget/desktop_aura/desktop_screen_position_client.h",
  #     "widget/desktop_aura/desktop_window_tree_host.h",
  #     "widget/focus_manager_event_handler.h",
  #     "widget/native_widget_aura.h",
  #     "widget/tooltip_manager_aura.h",
  #     "widget/window_reorderer.h",
  #   ]
  #
  #   sources += [
  #     "accessibility/accessibility_alert_window.cc",
  #     "accessibility/ax_aura_obj_cache.cc",
  #     "accessibility/ax_aura_obj_wrapper.cc",
  #     "accessibility/ax_root_obj_wrapper.cc",
  #     "accessibility/ax_tree_source_views.cc",
  #     "accessibility/ax_view_obj_wrapper.cc",
  #     "accessibility/ax_virtual_view_wrapper.cc",
  #     "accessibility/ax_widget_obj_wrapper.cc",
  #     "accessibility/ax_window_obj_wrapper.cc",
  #     "controls/menu/menu_pre_target_handler_aura.cc",
  #     "controls/menu/menu_pre_target_handler_aura.h",
  #     "controls/native/native_view_host_aura.cc",
  #     "corewm/cursor_height_provider_win.cc",
  #     "corewm/tooltip_aura.cc",
  #     "corewm/tooltip_controller.cc",
  #     "corewm/tooltip_win.cc",
  #     "drag_utils_aura.cc",
  #     "event_monitor_aura.cc",
  #     "metrics_aura.cc",
  #     "native_cursor_aura.cc",
  #     "touchui/touch_selection_controller_impl.cc",
  #     "touchui/touch_selection_menu_runner_views.cc",
  #     "touchui/touch_selection_menu_views.cc",
  #     "view_constants_aura.cc",
  #     "views_touch_selection_controller_factory_aura.cc",
  #     "widget/desktop_aura/desktop_capture_client.cc",
  #     "widget/desktop_aura/desktop_drop_target_win.cc",
  #     "widget/desktop_aura/desktop_event_client.cc",
  #     "widget/desktop_aura/desktop_focus_rules.cc",
  #     "widget/desktop_aura/desktop_native_cursor_manager.cc",
  #     "widget/desktop_aura/desktop_native_widget_aura.cc",
  #     "widget/desktop_aura/desktop_screen.cc",
  #     "widget/desktop_aura/desktop_screen_position_client.cc",
  #     "widget/desktop_aura/desktop_window_tree_host.cc",
  #     "widget/focus_manager_event_handler.cc",
  #     "widget/native_widget_aura.cc",
  #     "widget/tooltip_manager_aura.cc",
  #     "widget/window_reorderer.cc",
  #   ]
  #   deps += [
  #     "//services/ws/public/mojom",
  #     "//ui/aura",
  #     "//ui/events",
  #     "//ui/platform_window",
  #     "//ui/platform_window/platform_window_handler",
  #     "//ui/touch_selection",
  #     "//ui/wm",
  #     "//ui/wm/public",
  #   ]
  #   if (!is_chromeos) {
  #     if (use_x11) {
  #       public += [
  #         "widget/desktop_aura/desktop_drag_drop_client_aurax11.h",
  #         "widget/desktop_aura/desktop_screen_x11.h",
  #         "widget/desktop_aura/desktop_window_tree_host_observer_x11.h",
  #         "widget/desktop_aura/desktop_window_tree_host_x11.h",
  #         "widget/desktop_aura/x11_desktop_handler.h",
  #         "widget/desktop_aura/x11_desktop_handler_observer.h",
  #         "widget/desktop_aura/x11_desktop_window_move_client.h",
  #         "widget/desktop_aura/x11_move_loop.h",
  #         "widget/desktop_aura/x11_move_loop_delegate.h",
  #         "widget/desktop_aura/x11_topmost_window_finder.h",
  #         "widget/desktop_aura/x11_whole_screen_move_loop.h",
  #         "widget/desktop_aura/x11_window_event_filter.h",
  #       ]
  #       sources += [
  #         "widget/desktop_aura/desktop_drag_drop_client_aurax11.cc",
  #         "widget/desktop_aura/desktop_screen_x11.cc",
  #         "widget/desktop_aura/desktop_window_tree_host_x11.cc",
  #         "widget/desktop_aura/x11_desktop_handler.cc",
  #         "widget/desktop_aura/x11_desktop_window_move_client.cc",
  #         "widget/desktop_aura/x11_topmost_window_finder.cc",
  #         "widget/desktop_aura/x11_whole_screen_move_loop.cc",
  #         "widget/desktop_aura/x11_window_event_filter.cc",
  #       ]
  #       if (use_atk) {
  #         sources += [
  #           "accessibility/view_ax_platform_node_delegate_auralinux.cc",
  #           "accessibility/view_ax_platform_node_delegate_auralinux.h",
  #         ]
  #         configs += [ "//build/config/linux/atk" ]
  #       }
  #     } else if (is_win) {
  #       public += [ "widget/desktop_aura/desktop_window_tree_host_win.h" ]
  #       sources += [
  #         "widget/desktop_aura/desktop_drag_drop_client_win.cc",
  #         "widget/desktop_aura/desktop_drag_drop_client_win.h",
  #         "widget/desktop_aura/desktop_screen_win.cc",
  #         "widget/desktop_aura/desktop_screen_win.h",
  #         "widget/desktop_aura/desktop_window_tree_host_win.cc",
  #       ]
  #       deps += [ "//ui/events:dom_keyboard_layout" ]
  #     } else if (use_ozone) {
  #       sources += [
  #         "widget/desktop_aura/desktop_drag_drop_client_ozone.cc",
  #         "widget/desktop_aura/desktop_drag_drop_client_ozone.h",
  #         "widget/desktop_aura/desktop_screen_ozone.cc",
  #         "widget/desktop_aura/desktop_screen_ozone.h",
  #       ]
  #     }
  #     if (is_linux) {
  #       sources += [
  #         "style/platform_style_linux.cc",
  #         "widget/desktop_aura/window_event_filter.cc",
  #         "widget/desktop_aura/window_event_filter.h",
  #       ]
  #     }
  #     if ((is_linux && !use_x11) || is_fuchsia) {
  #       public += [ "widget/desktop_aura/desktop_window_tree_host_platform.h" ]
  #       sources +=
  #           [ "widget/desktop_aura/desktop_window_tree_host_platform.cc" ]
  #     }
  #   }
  # }
  #
  # if (is_mac) {
  #   sources -= [ "controls/views_text_services_context_menu.cc" ]
  #   sources += [
  #     "controls/menu/menu_pre_target_handler_mac.h",
  #     "controls/menu/menu_pre_target_handler_mac.mm",
  #   ]
  #   deps += [
  #     "//components/crash/core/common",
  #     "//components/remote_cocoa/app_shim",
  #     "//ui/accelerated_widget_mac",
  #     "//ui/events:dom_keycode_converter",
  #   ]
  #   public_deps += [ "//components/remote_cocoa/common:mojo" ]
  #   libs = [
  #     "AppKit.framework",
  #     "CoreGraphics.framework",
  #     "Foundation.framework",
  #     "IOSurface.framework",
  #     "QuartzCore.framework",
  #   ]
  # }
  #
  # if (has_native_accessibility) {
  #   sources += [
  #     "accessibility/view_ax_platform_node_delegate.cc",
  #     "accessibility/view_ax_platform_node_delegate.h",
  #     "accessibility/view_ax_platform_node_delegate_mac.h",
  #     "accessibility/view_ax_platform_node_delegate_mac.mm",
  #     "accessibility/view_ax_platform_node_delegate_win.cc",
  #     "accessibility/view_ax_platform_node_delegate_win.h",
  #   ]
  # }
  #
  # if (is_fuchsia) {
  #   sources += [ "controls/menu/menu_config_fuchsia.cc" ]
  # }
  #
)
add_library(UI_VIEWS STATIC
  ${UI_VIEWS_SOURCES}
  ${UI_VIEWS_AX_SOURCES}
  ${UI_VIEWS_STUB_SOURCES}
  ${UI_VIEWS_AURA_STUB_SOURCES}
)

target_link_libraries(UI_VIEWS PRIVATE
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
  dynamic_annotations
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
  #UI_GFX
  #"//ui/gfx/animation",
  #"//ui/gfx/geometry",
  #"//ui/views/resources",
  BASE_CC
  #GFX_ANIMATION
  #GFX_CODEC
  #GFX_COLOR_SPACE
  #GFX_GEOMETRY_SKIA
  #GFX_GEOMETRY
  #GFX_SWITCHES
  #GFX_RANGE
  #if (use_x11) {
  #  deps += [ "//ui/display/util" ]
  #}
  ${MOJO_LIB}
  ${BLINK_PUBLIC_MOJOM_LIB}
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
