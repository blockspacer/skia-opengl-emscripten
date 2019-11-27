### --- UI_DISPLAY ---###

# see DISPLAY_UTIL_IMPLEMENTATION=1
list(APPEND UI_DISPLAY_UTIL_SOURCES
  ${UI_DISPLAY_DIR}/util/display_util.cc
  ${UI_DISPLAY_DIR}/util/display_util.h
  ${UI_DISPLAY_DIR}/util/display_util_export.h
  ${UI_DISPLAY_DIR}/util/edid_parser.cc
  ${UI_DISPLAY_DIR}/util/edid_parser.h
  #
  #if (use_x11 || ozone_platform_x11) {
  #  sources += [
  #    "x11/edid_parser_x11.cc
  #    "x11/edid_parser_x11.h
  #  ]
  #  configs += [
  #    "//build/config/linux:x11",
  #    "//build/config/linux:xrandr",
  #  ]
  #  deps += [ "//ui/gfx/x" ]
  #}
  #if (is_chromeos) {
  #  deps += [ "//ui/display/types" ]
  #} else if (is_mac) {
  #  libs = [ "IOSurface.framework" ]
  #}
)

# see FAKE_DISPLAY_IMPLEMENTATION=1
list(APPEND UI_DISPLAY_FAKE_SOURCES
  ${UI_DISPLAY_DIR}/fake/fake_display_delegate.cc
  ${UI_DISPLAY_DIR}/fake/fake_display_delegate.h
  ${UI_DISPLAY_DIR}/fake/fake_display_export.h
  ${UI_DISPLAY_DIR}/fake/fake_display_snapshot.cc
  ${UI_DISPLAY_DIR}/fake/fake_display_snapshot.h
)

list(APPEND UI_DISPLAY_TYPES_SOURCES
  ${UI_DISPLAY_DIR}/types/display_constants.h
  ${UI_DISPLAY_DIR}/types/display_mode.cc
  ${UI_DISPLAY_DIR}/types/display_mode.h
  ${UI_DISPLAY_DIR}/types/display_snapshot.cc
  ${UI_DISPLAY_DIR}/types/display_snapshot.h
  ${UI_DISPLAY_DIR}/types/display_types_export.h
  ${UI_DISPLAY_DIR}/types/fake_display_controller.h
  ${UI_DISPLAY_DIR}/types/gamma_ramp_rgb_entry.h
  ${UI_DISPLAY_DIR}/types/native_display_delegate.cc
  ${UI_DISPLAY_DIR}/types/native_display_delegate.h
  ${UI_DISPLAY_DIR}/types/native_display_observer.h
)

list(APPEND UI_DISPLAY_SOURCES
  ${UI_DISPLAY_DIR}display.cc
  ${UI_DISPLAY_DIR}display.h
  ${UI_DISPLAY_DIR}display_change_notifier.cc
  ${UI_DISPLAY_DIR}display_change_notifier.h
  ${UI_DISPLAY_DIR}display_export.h
  ${UI_DISPLAY_DIR}display_features.cc
  ${UI_DISPLAY_DIR}display_features.h
  ${UI_DISPLAY_DIR}display_finder.cc
  ${UI_DISPLAY_DIR}display_finder.h
  ${UI_DISPLAY_DIR}display_layout.cc
  ${UI_DISPLAY_DIR}display_layout.h
  ${UI_DISPLAY_DIR}display_layout_builder.cc
  ${UI_DISPLAY_DIR}display_layout_builder.h
  ${UI_DISPLAY_DIR}display_list.cc
  ${UI_DISPLAY_DIR}display_list.h
  ${UI_DISPLAY_DIR}display_observer.cc
  ${UI_DISPLAY_DIR}display_observer.h
  ${UI_DISPLAY_DIR}display_switches.cc
  ${UI_DISPLAY_DIR}display_switches.h
  ## TODO ## ${UI_DISPLAY_DIR}ios/screen_ios.mm",
  ## TODO ## ${UI_DISPLAY_DIR}mac/screen_mac.mm",
  ${UI_DISPLAY_DIR}screen.cc
  ${UI_DISPLAY_DIR}screen.h
  ## TODO ## ${UI_DISPLAY_DIR}screen_android.cc
  ## TODO ## ${UI_DISPLAY_DIR}screen_aura.cc
  ${UI_DISPLAY_DIR}screen_base.cc
  ${UI_DISPLAY_DIR}screen_base.h
  ${UI_DISPLAY_DIR}unified_desktop_utils.cc
  ${UI_DISPLAY_DIR}unified_desktop_utils.h
  ## TODO ## ${UI_DISPLAY_DIR}win/color_profile_reader.cc
  ## TODO ## ${UI_DISPLAY_DIR}win/color_profile_reader.h
  ## TODO ## ${UI_DISPLAY_DIR}win/display_info.cc
  ## TODO ## ${UI_DISPLAY_DIR}win/display_info.h
  ## TODO ## ${UI_DISPLAY_DIR}win/dpi.cc
  ## TODO ## ${UI_DISPLAY_DIR}win/dpi.h
  ## TODO ## ${UI_DISPLAY_DIR}win/scaling_util.cc
  ## TODO ## ${UI_DISPLAY_DIR}win/scaling_util.h
  ## TODO ## ${UI_DISPLAY_DIR}win/screen_win.cc
  ## TODO ## ${UI_DISPLAY_DIR}win/screen_win.h
  ## TODO ##  ${UI_DISPLAY_DIR}win/screen_win_display.cc
  ## TODO ## ${UI_DISPLAY_DIR}win/screen_win_display.h
  ## TODO ## ${UI_DISPLAY_DIR}win/uwp_text_scale_factor.cc
  ## TODO ## ${UI_DISPLAY_DIR}win/uwp_text_scale_factor.h
  #
  #if (!use_aura) {
  ${UI_DISPLAY_DIR}screen_aura.cc
  #}
)

if(TARGET_WINDOWS)
  list(APPEND UI_DISPLAY_SOURCES
    ${UI_DISPLAY_DIR}win/color_profile_reader.cc
    ${UI_DISPLAY_DIR}win/color_profile_reader.h
    ${UI_DISPLAY_DIR}win/display_info.cc
    ${UI_DISPLAY_DIR}win/display_info.h
    ${UI_DISPLAY_DIR}win/dpi.cc
    ${UI_DISPLAY_DIR}win/dpi.h
    ${UI_DISPLAY_DIR}win/scaling_util.cc
    ${UI_DISPLAY_DIR}win/scaling_util.h
    ${UI_DISPLAY_DIR}win/screen_win.cc
    ${UI_DISPLAY_DIR}win/screen_win.h
    ${UI_DISPLAY_DIR}win/screen_win_display.cc
    ${UI_DISPLAY_DIR}win/screen_win_display.h
    ${UI_DISPLAY_DIR}win/uwp_text_scale_factor.cc
    ${UI_DISPLAY_DIR}win/uwp_text_scale_factor.h
  )
endif(TARGET_WINDOWS)

add_library(UI_DISPLAY STATIC
  ${UI_DISPLAY_TYPES_SOURCES}
  ${UI_DISPLAY_UTIL_SOURCES}
  ${UI_DISPLAY_SOURCES}
  ${UI_DISPLAY_FAKE_SOURCES}
)

target_link_libraries(UI_DISPLAY PRIVATE
  #"//skia",
  SKIA
  #"//base",
  ${base_LIB}
  #"//base/third_party/dynamic_annotations",
  #${dynamic_annotations_LIB}
  #"//cc/paint",
  PAINT_CC
  #"//ui/base",
  UI_BASE
  #"//ui/display",
  #"//ui/gfx",
  UI_GFX
  #"//ui/gfx/geometry",
  GFX_GEOMETRY
  GFX_GEOMETRY_SKIA
  #"//ui/resources",
  GFX_COLOR_SPACE
  #
  # deps for fake display
  #
  ${GRE2_LIB}
)

set_property(TARGET UI_DISPLAY PROPERTY CXX_STANDARD 17)

target_include_directories(UI_DISPLAY PRIVATE
  ${UI_DISPLAY_DIR}
  ${BASE_DIR}
  #${GRE2_PARENT_DIR}
  #${GRE2_DIR}
  #${GRE2_DIR}/src
)

target_compile_definitions(UI_DISPLAY PRIVATE
  DISPLAY_IMPLEMENTATION=1
  DISPLAY_TYPES_IMPLEMENTATION=1
  FAKE_DISPLAY_IMPLEMENTATION=1
  DISPLAY_UTIL_IMPLEMENTATION=1
  ${DISABLE_GRE2_DEFINE}
)

target_compile_definitions(UI_DISPLAY PUBLIC
  UI_DISPLAY_PORTED=1
)
