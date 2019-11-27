### --- UI_NATIVE_THEME ---###

list(APPEND UI_NATIVE_THEME_SOURCES
  ${UI_NATIVE_THEME_DIR}caption_style.cc
  ${UI_NATIVE_THEME_DIR}caption_style.h
  ## TODO ##${UI_NATIVE_THEME_DIR}caption_style_mac.mm",
  ## TODO ##${UI_NATIVE_THEME_DIR}caption_style_win.cc
  ${UI_NATIVE_THEME_DIR}common_theme.cc
  ${UI_NATIVE_THEME_DIR}common_theme.h
  ${UI_NATIVE_THEME_DIR}dark_mode_observer.cc
  ${UI_NATIVE_THEME_DIR}dark_mode_observer.h
  ${UI_NATIVE_THEME_DIR}native_theme.cc
  ${UI_NATIVE_THEME_DIR}native_theme.h
  ## TODO ##${UI_NATIVE_THEME_DIR}native_theme_android.cc
  ## TODO ##${UI_NATIVE_THEME_DIR}native_theme_android.h
  ${UI_NATIVE_THEME_DIR}native_theme_base.cc
  ${UI_NATIVE_THEME_DIR}native_theme_base.h
  ${UI_NATIVE_THEME_DIR}native_theme_export.h
  ${UI_NATIVE_THEME_DIR}native_theme_features.cc
  ${UI_NATIVE_THEME_DIR}native_theme_features.h
  ## TODO ##${UI_NATIVE_THEME_DIR}native_theme_mac.h
  ## TODO ## ${UI_NATIVE_THEME_DIR}native_theme_mac.mm",
  ${UI_NATIVE_THEME_DIR}native_theme_observer.cc
  ${UI_NATIVE_THEME_DIR}native_theme_observer.h
  #
  #if (use_aura || toolkit_views) {
  #  sources += [
  ${UI_NATIVE_THEME_DIR}native_theme_aura.cc
  ${UI_NATIVE_THEME_DIR}native_theme_aura.h
  ${UI_NATIVE_THEME_DIR}native_theme_dark_aura.cc
  ${UI_NATIVE_THEME_DIR}native_theme_dark_aura.h
  ${UI_NATIVE_THEME_DIR}overlay_scrollbar_constants_aura.h
  #  ]
  #}
)

add_library(UI_NATIVE_THEME STATIC
  ${UI_NATIVE_THEME_SOURCES}
)

target_link_libraries(UI_NATIVE_THEME PRIVATE
  #"//skia",
  SKIA
  #"//base",
  base
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
)

set_property(TARGET UI_NATIVE_THEME PROPERTY CXX_STANDARD 17)

target_include_directories(UI_NATIVE_THEME PRIVATE
  ${UI_NATIVE_THEME_DIR}
  ${BASE_DIR}
)

target_compile_definitions(UI_NATIVE_THEME PRIVATE
  NATIVE_THEME_IMPLEMENTATION=1
)

target_compile_definitions(UI_NATIVE_THEME PUBLIC
  UI_NATIVE_THEME_PORTED=1
)
