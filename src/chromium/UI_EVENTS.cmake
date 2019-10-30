### --- UI_EVENTS ---###

list(APPEND UI_EVENTS_SOURCES
  #
  # jumbo_static_library("dom_keycode_converter")
  #
  #public = [
  #  "keycodes/dom/dom_code.h",
  #  "keycodes/dom/dom_codes.h",
  #  "keycodes/dom/dom_key.h",
  #  "keycodes/dom/keycode_converter.h",
  #]
  #sources = [
  #  "keycodes/dom/dom_key_data.inc",
  #  "keycodes/dom/keycode_converter.cc
  #  "keycodes/dom/keycode_converter_data.inc",
  #]
  #static_library("dom_keyboard_layout") {
  #  public = [
  #    "keycodes/dom/dom_keyboard_layout.h",
  #    "keycodes/dom/dom_keyboard_layout_manager.h",
  #    "keycodes/dom/dom_keyboard_layout_map.h",
  #  ]
  #
  #  sources = [
  #    "keycodes/dom/dom_keyboard_layout.cc
  #    "keycodes/dom/dom_keyboard_layout_manager.cc
  #    "keycodes/dom/dom_keyboard_layout_map_base.cc
  #    "keycodes/dom/dom_keyboard_layout_map_base.h",
  #  ]
  #
  #  # Make sure we don't compile two versions of dom_keyboard_layout_map*
  #  if (is_mac) {
  #    sources += [ "keycodes/dom/dom_keyboard_layout_map_mac.mm" ]
  #  } else if (is_win) {
  #    sources += [ "keycodes/dom/dom_keyboard_layout_map_win.cc" ]
  #  } else {
  #    sources += [ "keycodes/dom/dom_keyboard_layout_map_ozone.cc" ]
  #  }
  #
  #  deps = [
  #    ":dom_keycode_converter",
  #    ":events_base",
  #    "//base",
  #    "//ui/events/ozone:events_ozone_layout",
  #  ]
  #
  #  if (!is_ios) {
  #    deps += [ "//ipc:param_traits" ]
  #  }
  #
  #  # Expose the internals of this target to other packages in this BUILD file
  #  # so the unit tests can access the private header files.
  #  # Note: Only 'events_unittests' needs access in this file, however it uses a
  #  # template which generates different target names on different platforms.
  #  friend = [ ":*" ]
  #}
  #
  # event_constants
  #
  #event_constants.h
  #
  # platform_event
  #
  #platform_event.h
  #
  # jumbo_component("events_base")
  #
  ${UI_EVENTS_DIR}base_event_utils.cc
  #${UI_EVENTS_DIR}base_event_utils.h",
  ${UI_EVENTS_DIR}event_switches.cc
  #${UI_EVENTS_DIR}event_switches.h",
  #${UI_EVENTS_DIR}events_base_export.h",
  ${UI_EVENTS_DIR}fraction_of_time_without_user_input_recorder.cc
  #${UI_EVENTS_DIR}fraction_of_time_without_user_input_recorder.h",
  #${UI_EVENTS_DIR}gesture_curve.h",
  ${UI_EVENTS_DIR}gesture_event_details.cc
  #${UI_EVENTS_DIR}gesture_event_details.h",
  ${UI_EVENTS_DIR}gestures/fixed_velocity_curve.cc
  #${UI_EVENTS_DIR}gestures/fixed_velocity_curve.h",
  ${UI_EVENTS_DIR}gestures/fling_curve.cc
  #${UI_EVENTS_DIR}gestures/fling_curve.h",
  #${UI_EVENTS_DIR}keycodes/dom_us_layout_data.h",
  ${UI_EVENTS_DIR}keycodes/keyboard_code_conversion.cc
  #${UI_EVENTS_DIR}keycodes/keyboard_code_conversion.h",
  ## TODO ## ${UI_EVENTS_DIR}keycodes/keyboard_code_conversion_android.cc
  ## TODO ## #${UI_EVENTS_DIR}keycodes/keyboard_code_conversion_android.h",
  ## TODO ## #${UI_EVENTS_DIR}keycodes/keyboard_code_conversion_mac.h",
  ## TODO ## ${UI_EVENTS_DIR}keycodes/keyboard_code_conversion_mac.mm",
  ## TODO ## #${UI_EVENTS_DIR}keycodes/keyboard_codes.h",
  ${UI_EVENTS_DIR}mobile_scroller.cc
  #${UI_EVENTS_DIR}mobile_scroller.h",
  #
  # jumbo_component("events")
  #
  ## TODO ## ${UI_EVENTS_DIR}cocoa/cocoa_event_utils.mm",
  ## TODO ## ${UI_EVENTS_DIR}cocoa/events_mac.mm",
  ${UI_EVENTS_DIR}event.cc
  ${UI_EVENTS_DIR}event_dispatcher.cc
  ${UI_EVENTS_DIR}event_handler.cc
  ${UI_EVENTS_DIR}event_modifiers.cc
  ${UI_EVENTS_DIR}event_processor.cc
  ${UI_EVENTS_DIR}event_rewriter.cc
  #${UI_EVENTS_DIR}event_rewriter_continuation.h",
  ${UI_EVENTS_DIR}event_source.cc
  ${UI_EVENTS_DIR}event_target.cc
  ${UI_EVENTS_DIR}event_utils.cc
  ${UI_EVENTS_DIR}events_exports.cc
  ${UI_EVENTS_DIR}gestures/gesture_recognizer.cc
  ## TODO ## ${UI_EVENTS_DIR}gestures/gesture_recognizer_impl_mac.cc
  ${UI_EVENTS_DIR}gestures/gesture_types.cc
  ${UI_EVENTS_DIR}keyboard_hook_base.cc
  #${UI_EVENTS_DIR}keyboard_hook_base.h",
  ## TODO ## ${UI_EVENTS_DIR}mac/keyboard_hook_mac.mm",
  ${UI_EVENTS_DIR}null_event_targeter.cc
  ${UI_EVENTS_DIR}scoped_target_handler.cc
  ${UI_EVENTS_DIR}system_input_injector.cc
  #
  #if (use_x11) {
  #
  #  sources += [
  #    "x/events_x.cc
  #    "x/keyboard_hook_x11.cc
  #  ]
  #  configs += [ "//build/config/linux:x11" ]
  #  deps += [
  #    "//ui/events/devices",
  #    "//ui/events/devices/x11",
  #    "//ui/events/x",
  #    "//ui/gfx/x",
  #  ]
  #}
  #if (use_ozone) {
  #  sources += [ "events_default.cc" ]
  #}
  #
  #if (is_win && use_ozone) {
  #  sources -= [ "win/events_win.cc" ]
  #}
  #
  #if (use_ozone) {
  #  public += [ "ozone/events_ozone.h" ]
  #  sources += [
  #    "ozone/events_ozone.cc",
  #    "ozone/keyboard_hook_ozone.cc",
  #  ]
  #  deps += [ "//ui/events/ozone:events_ozone_layout" ]
  #}
  #
  #if (use_aura) {
  #  public += [
  #    "gestures/gesture_provider_aura.h",
  #    "gestures/gesture_recognizer_impl.h",
  #    "gestures/motion_event_aura.h",
  #  ]
  #  sources += [
  #    "gestures/gesture_provider_aura.cc",
  #    "gestures/gesture_recognizer_impl.cc",
  #    "gestures/motion_event_aura.cc",
  #  ]
  #}
  #
  #jumbo_component("gesture_detection") {
  #
  #sources = [
  #  "gesture_detection/bitset_32.h",
  #  "gesture_detection/filtered_gesture_provider.cc
  #  "gesture_detection/filtered_gesture_provider.h",
  #  "gesture_detection/gesture_configuration.cc
  #  "gesture_detection/gesture_configuration.h",
  #  "gesture_detection/gesture_detection_export.h",
  #  "gesture_detection/gesture_detector.cc
  #  "gesture_detection/gesture_detector.h",
  #  "gesture_detection/gesture_event_data.cc
  #  "gesture_detection/gesture_event_data.h",
  #  "gesture_detection/gesture_event_data_packet.cc
  #  "gesture_detection/gesture_event_data_packet.h",
  #  "gesture_detection/gesture_listeners.cc
  #  "gesture_detection/gesture_listeners.h",
  #  "gesture_detection/gesture_provider.cc
  #  "gesture_detection/gesture_provider.h",
  #  "gesture_detection/gesture_provider_config_helper.cc
  #  "gesture_detection/gesture_provider_config_helper.h",
  #  "gesture_detection/gesture_touch_uma_histogram.cc
  #  "gesture_detection/gesture_touch_uma_histogram.h",
  #  "gesture_detection/motion_event.cc
  #  "gesture_detection/motion_event.h",
  #  "gesture_detection/motion_event_buffer.cc
  #  "gesture_detection/motion_event_buffer.h",
  #  "gesture_detection/motion_event_generic.cc
  #  "gesture_detection/motion_event_generic.h",
  #  "gesture_detection/scale_gesture_detector.cc
  #  "gesture_detection/scale_gesture_detector.h",
  #  "gesture_detection/scale_gesture_listeners.cc
  #  "gesture_detection/scale_gesture_listeners.h",
  #  "gesture_detection/snap_scroll_controller.cc
  #  "gesture_detection/snap_scroll_controller.h",
  #  "gesture_detection/touch_disposition_gesture_filter.cc
  #  "gesture_detection/touch_disposition_gesture_filter.h",
  #  "gesture_detection/velocity_tracker.cc
  #  "gesture_detection/velocity_tracker.h",
  #  "gesture_detection/velocity_tracker_state.cc
  #  "gesture_detection/velocity_tracker_state.h",
  #]
  #if (is_android) {
  #  sources += [ "gesture_detection/gesture_configuration_android.cc" ]
  #} else if (is_chromecast) {
  #  sources += [ "gesture_detection/gesture_configuration_cast.cc" ]
  #} else if (use_aura) {
  #  sources += [ "gesture_detection/gesture_configuration_aura.cc" ]
  #} else {
  #  sources += [ "gesture_detection/gesture_configuration_default.cc" ]
  #}
)

if(TARGET_WINDOWS)
  list(APPEND UI_EVENTS_SOURCES 
    ${UI_EVENTS_DIR}win/events_win.cc
    ${UI_EVENTS_DIR}win/events_win_utils.cc
    #
    ${UI_EVENTS_DIR}win/keyboard_hook_win_base.cc
    #${UI_EVENTS_DIR}win/keyboard_hook_win_base.h",
    ${UI_EVENTS_DIR}win/media_keyboard_hook_win.cc
    ${UI_EVENTS_DIR}win/modifier_keyboard_hook_win.cc
    ${UI_EVENTS_DIR}win/system_event_state_lookup.cc
    #  sources -= [ "win/events_win.cc" ]
    ## TODO ## 
    ${UI_EVENTS_DIR}keycodes/platform_key_map_win.cc
    ## TODO ## #
    ${UI_EVENTS_DIR}keycodes/platform_key_map_win.h
    ## TODO ## $
    ${UI_EVENTS_DIR}keycodes/keyboard_code_conversion_win.cc
    ## TODO ## #
    ${UI_EVENTS_DIR}keycodes/keyboard_code_conversion_win.h
    ${UI_EVENTS_DIR}keycodes/dom/dom_keyboard_layout_map_win.cc
  )
endif()

if(TARGET_WINDOWS OR TARGET_LINUX)
  #if (is_win || is_mac || use_x11 || use_ozone) {
  #  sources -= [ "events_stub.cc" ]
  #}
elseif(TARGET_EMSCRIPTEN)
  list(APPEND UI_EVENTS_SOURCES 
    ${UI_EVENTS_DIR}events_stub.cc
  )
else()
  message(FATAL_ERROR "platform not supported")
endif()

add_library(UI_EVENTS STATIC
  ${UI_EVENTS_SOURCES}
)

target_link_libraries(UI_EVENTS PUBLIC
  dynamic_annotations
  base
  GFX_GEOMETRY
  #
  # public_deps = [
  #   ":event_constants",
  #   ":platform_event",
  #   "//base",
  #   "//ui/events/platform",
  #   "//ui/gfx/geometry",
  # ]
  #
  # public_deps = [
  # ":events_base",
  # "//ui/display",
  # "//ui/latency",
  # ]
  #
  #dynamic_annotations
  #${BASE_LIBRARIES}
  # khronos
  #${khronos_LIB}
  ## linux libsync
  #${libsync_LIB}
  SKIA
  ##"+ui/events",
  ##"+ui/base/x",
  UI_GFX
  ##
  #base
  ##mesa_headers
  ##  "//ui/events/platform",
  #UI_GFX
  ##  "//ui/gfx/geometry",
  #GFX_GEOMETRY
  #egl
  #GLESv2
)

set_property(TARGET UI_EVENTS PROPERTY CXX_STANDARD 17)

target_include_directories(UI_EVENTS PRIVATE
  ${UI_EVENTS_DIR}
  ${BASE_DIR}
)

target_compile_definitions(UI_EVENTS PRIVATE
  EVENTS_BASE_IMPLEMENTATION=1
  EVENTS_IMPLEMENTATION=1
  #GESTURE_DETECTION_IMPLEMENTATION=1
)

target_compile_definitions(UI_EVENTS PUBLIC
  UI_EVENTS_PORT=1
)
