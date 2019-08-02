### --- UI_COMPOSITOR ---###

set(UI_COMPOSITOR_SOURCES
  ${UI_COMPOSITOR_DIR}callback_layer_animation_observer.cc
  ${UI_COMPOSITOR_DIR}callback_layer_animation_observer.h
  ${UI_COMPOSITOR_DIR}canvas_painter.cc
  ${UI_COMPOSITOR_DIR}canvas_painter.h
  ${UI_COMPOSITOR_DIR}clip_recorder.cc
  ${UI_COMPOSITOR_DIR}clip_recorder.h
  ${UI_COMPOSITOR_DIR}closure_animation_observer.cc
  ${UI_COMPOSITOR_DIR}closure_animation_observer.h
  ${UI_COMPOSITOR_DIR}compositor.cc
  ${UI_COMPOSITOR_DIR}compositor.h
  ${UI_COMPOSITOR_DIR}compositor_animation_observer.h
  ${UI_COMPOSITOR_DIR}compositor_export.h
  ${UI_COMPOSITOR_DIR}compositor_lock.cc
  ${UI_COMPOSITOR_DIR}compositor_lock.h
  ${UI_COMPOSITOR_DIR}compositor_observer.h
  ${UI_COMPOSITOR_DIR}compositor_switches.cc
  ${UI_COMPOSITOR_DIR}compositor_switches.h
  ${UI_COMPOSITOR_DIR}debug_utils.cc
  ${UI_COMPOSITOR_DIR}debug_utils.h
  ${UI_COMPOSITOR_DIR}dip_util.cc
  ${UI_COMPOSITOR_DIR}dip_util.h
  ${UI_COMPOSITOR_DIR}external_begin_frame_client.h
  ${UI_COMPOSITOR_DIR}float_animation_curve_adapter.cc
  ${UI_COMPOSITOR_DIR}float_animation_curve_adapter.h
  ${UI_COMPOSITOR_DIR}layer.cc
  ${UI_COMPOSITOR_DIR}layer.h
  ${UI_COMPOSITOR_DIR}layer_animation_delegate.h
  ${UI_COMPOSITOR_DIR}layer_animation_element.cc
  ${UI_COMPOSITOR_DIR}layer_animation_element.h
  ${UI_COMPOSITOR_DIR}layer_animation_observer.cc
  ${UI_COMPOSITOR_DIR}layer_animation_observer.h
  ${UI_COMPOSITOR_DIR}layer_animation_sequence.cc
  ${UI_COMPOSITOR_DIR}layer_animation_sequence.h
  ${UI_COMPOSITOR_DIR}layer_animator.cc
  ${UI_COMPOSITOR_DIR}layer_animator.h
  ${UI_COMPOSITOR_DIR}layer_animator_collection.cc
  ${UI_COMPOSITOR_DIR}layer_animator_collection.h
  ${UI_COMPOSITOR_DIR}layer_delegate.cc
  ${UI_COMPOSITOR_DIR}layer_delegate.h
  ${UI_COMPOSITOR_DIR}layer_observer.h
  ${UI_COMPOSITOR_DIR}layer_owner.cc
  ${UI_COMPOSITOR_DIR}layer_owner.h
  ${UI_COMPOSITOR_DIR}layer_threaded_animation_delegate.h
  ${UI_COMPOSITOR_DIR}layer_tree_owner.cc
  ${UI_COMPOSITOR_DIR}layer_tree_owner.h
  ${UI_COMPOSITOR_DIR}layer_type.h
  ${UI_COMPOSITOR_DIR}overscroll/scroll_input_handler.cc
  ${UI_COMPOSITOR_DIR}overscroll/scroll_input_handler.h
  ${UI_COMPOSITOR_DIR}paint_cache.cc
  ${UI_COMPOSITOR_DIR}paint_cache.h
  ${UI_COMPOSITOR_DIR}paint_context.cc
  ${UI_COMPOSITOR_DIR}paint_context.h
  ${UI_COMPOSITOR_DIR}paint_recorder.cc
  ${UI_COMPOSITOR_DIR}paint_recorder.h
  ${UI_COMPOSITOR_DIR}property_change_reason.h
  ${UI_COMPOSITOR_DIR}recyclable_compositor_mac.cc
  ${UI_COMPOSITOR_DIR}recyclable_compositor_mac.h
  ${UI_COMPOSITOR_DIR}reflector.cc
  ${UI_COMPOSITOR_DIR}reflector.h
  ${UI_COMPOSITOR_DIR}scoped_animation_duration_scale_mode.cc
  ${UI_COMPOSITOR_DIR}scoped_animation_duration_scale_mode.h
  ${UI_COMPOSITOR_DIR}scoped_layer_animation_settings.cc
  ${UI_COMPOSITOR_DIR}scoped_layer_animation_settings.h
  ${UI_COMPOSITOR_DIR}transform_animation_curve_adapter.cc
  ${UI_COMPOSITOR_DIR}transform_animation_curve_adapter.h
  ${UI_COMPOSITOR_DIR}transform_recorder.cc
  ${UI_COMPOSITOR_DIR}transform_recorder.h
)

add_library(UI_COMPOSITOR STATIC
  ${UI_COMPOSITOR_SOURCES}
)

target_link_libraries(UI_COMPOSITOR PUBLIC
  #"//cc",
  BASE_CC
  CC
  #"//base",
  base
  #"//base/third_party/dynamic_annotations",
  dynamic_annotations
  #"//cc/animation",
  ANIMATION_CC
  #"//cc/paint",
  PAINT_CC
  #"//components/viz/host",
  #"//components/viz/service",
  COMPONENTS_VIZ_CLIENT
  COMPONENTS_VIZ_COMMON
  #"//gpu/command_buffer/common",
  GPU_COMMAND_BUFFER
  #"//skia",
  SKIA
  SKIA_EXT
  #"//ui/base",
  UI_BASE
  #"//ui/display",
  #"//ui/events",
  UI_EVENTS
  #"//ui/gfx",
  UI_GFX
  #"//ui/gfx/animation",
  GFX_ANIMATION
  #"//ui/gfx/geometry",
  GFX_GEOMETRY
  GFX_GEOMETRY_SKIA
  #"//ui/gl",
  UI_GL
  #if (is_mac) {
  #  deps += [ "//ui/accelerated_widget_mac" ]
  #}
  #
  #if (is_win && use_aura) {
  #  # TODO(sky): before we make this real need to remove
  #  # IDR_BITMAP_BRUSH_IMAGE.
  #  deps += [ "//ui/resources" ]
  #}
)

set_property(TARGET UI_COMPOSITOR PROPERTY CXX_STANDARD 17)

target_include_directories(UI_COMPOSITOR PRIVATE
  ${UI_COMPOSITOR_DIR}
  ${BASE_DIR}
)

target_compile_definitions(UI_COMPOSITOR PRIVATE
  COMPOSITOR_IMPLEMENTATION=1
)

target_compile_definitions(UI_COMPOSITOR PUBLIC
  COMPOSITOR_PORTED=1
)
