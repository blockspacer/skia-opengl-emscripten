### --- ANIMATION_CC ---###

# see https://github.com/chromium/chromium/blob/2ca8c5037021c9d2ecc00b787d58a31ed8fc8bcb/cc/animation/BUILD.gn

list(APPEND ANIMATION_CC_SOURCES
  ${ANIMATION_CC_DIR}animation.cc
  #${ANIMATION_CC_DIR}animation.h",
  ${ANIMATION_CC_DIR}animation_curve.cc
  #${ANIMATION_CC_DIR}animation_curve.h",
  #${ANIMATION_CC_DIR}animation_delegate.h",
  ${ANIMATION_CC_DIR}animation_events.cc
  #${ANIMATION_CC_DIR}animation_events.h",
  #${ANIMATION_CC_DIR}animation_export.h",
  ${ANIMATION_CC_DIR}animation_host.cc
  #${ANIMATION_CC_DIR}animation_host.h",
  ${ANIMATION_CC_DIR}animation_id_provider.cc
  #${ANIMATION_CC_DIR}animation_id_provider.h",
  #${ANIMATION_CC_DIR}animation_target.h",
  ${ANIMATION_CC_DIR}animation_timeline.cc
  #${ANIMATION_CC_DIR}animation_timeline.h",
  ${ANIMATION_CC_DIR}element_animations.cc
  #${ANIMATION_CC_DIR}element_animations.h",
  ${ANIMATION_CC_DIR}keyframe_effect.cc
  #${ANIMATION_CC_DIR}keyframe_effect.h",
  ${ANIMATION_CC_DIR}keyframe_model.cc
  #${ANIMATION_CC_DIR}keyframe_model.h",
  ${ANIMATION_CC_DIR}keyframed_animation_curve.cc
  #${ANIMATION_CC_DIR}keyframed_animation_curve.h",
  ${ANIMATION_CC_DIR}scroll_offset_animation_curve.cc
  #${ANIMATION_CC_DIR}scroll_offset_animation_curve.h",
  ${ANIMATION_CC_DIR}scroll_offset_animations.cc
  #${ANIMATION_CC_DIR}scroll_offset_animations.h",
  ${ANIMATION_CC_DIR}scroll_offset_animations_impl.cc
  #${ANIMATION_CC_DIR}scroll_offset_animations_impl.h",
  ${ANIMATION_CC_DIR}scroll_timeline.cc
  #${ANIMATION_CC_DIR}scroll_timeline.h",
  ${ANIMATION_CC_DIR}single_keyframe_effect_animation.cc
  #${ANIMATION_CC_DIR}single_keyframe_effect_animation.h",
  ${ANIMATION_CC_DIR}timing_function.cc
  #${ANIMATION_CC_DIR}timing_function.h",
  ${ANIMATION_CC_DIR}transform_operation.cc
  #${ANIMATION_CC_DIR}transform_operation.h",
  ${ANIMATION_CC_DIR}transform_operations.cc
  #${ANIMATION_CC_DIR}transform_operations.h",
  ${ANIMATION_CC_DIR}worklet_animation.cc
  #${ANIMATION_CC_DIR}worklet_animation.h",
)

add_library(ANIMATION_CC STATIC
  ${ANIMATION_CC_SOURCES}
)

target_link_libraries(ANIMATION_CC PRIVATE
  PAINT_CC
  ${CC_LIB}
  GFX_ANIMATION
  GFX_CODEC
  GFX_COLOR_SPACE
  GFX_GEOMETRY_SKIA
  GFX_GEOMETRY
  GFX_SWITCHES
  GFX_RANGE
  #${BASE_LIBRARIES}
  ${base_LIB}
  #${OPENGLES2_LIBRARIES}
  ${FOUND_OPENGL_LIBRARIES}
)

set_property(TARGET ANIMATION_CC PROPERTY CXX_STANDARD 17)

target_include_directories(ANIMATION_CC PRIVATE
  ${ANIMATION_CC_DIR}
  ${BASE_DIR}
  ${OPENGL_INCLUDE_DIR}
)

target_compile_definitions(ANIMATION_CC PRIVATE
  CC_ANIMATION_IMPLEMENTATION=1
)
