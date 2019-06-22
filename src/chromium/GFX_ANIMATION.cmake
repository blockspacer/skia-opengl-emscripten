### --- GFX_ANIMATION ---###

set(GFX_ANIMATION_SOURCES
  ${GFX_ANIMATION_DIR}animation.cc
  #${GFX_ANIMATION_DIR}animation.h",
  # TODO # ${GFX_ANIMATION_DIR}animation_android.cc
  ${GFX_ANIMATION_DIR}animation_container.cc
  #${GFX_ANIMATION_DIR}animation_container.h",
  #${GFX_ANIMATION_DIR}animation_container_element.h",
  #${GFX_ANIMATION_DIR}animation_container_observer.h",
  #${GFX_ANIMATION_DIR}animation_delegate.h",
  #${GFX_ANIMATION_DIR}animation_export.h",
  #${GFX_ANIMATION_DIR}animation_mac.mm",
  ${GFX_ANIMATION_DIR}animation_runner.cc
  #${GFX_ANIMATION_DIR}animation_runner.h",
  # TODO # ${GFX_ANIMATION_DIR}animation_win.cc
  ${GFX_ANIMATION_DIR}linear_animation.cc
  #${GFX_ANIMATION_DIR}linear_animation.h",
  ${GFX_ANIMATION_DIR}multi_animation.cc
  #${GFX_ANIMATION_DIR}multi_animation.h",
  ${GFX_ANIMATION_DIR}slide_animation.cc
  #${GFX_ANIMATION_DIR}slide_animation.h",
  ${GFX_ANIMATION_DIR}throb_animation.cc
  #${GFX_ANIMATION_DIR}throb_animation.h",
  ${GFX_ANIMATION_DIR}tween.cc
  #${GFX_ANIMATION_DIR}tween.h",
)

add_library(GFX_ANIMATION STATIC
  ${GFX_ANIMATION_SOURCES}
)

target_link_libraries(GFX_ANIMATION PUBLIC
  #dynamic_annotations
  #${BASE_LIBRARIES}
  base
  SKIA
  GFX_GEOMETRY
  GFX_GEOMETRY_SKIA
  #${OPENGLES2_LIBRARIES}
)

set_property(TARGET GFX_ANIMATION PROPERTY CXX_STANDARD 17)

target_include_directories(GFX_ANIMATION PRIVATE
  ${GFX_ANIMATION_DIR}
  ${BASE_DIR}
)

target_compile_definitions(GFX_ANIMATION PRIVATE
  ANIMATION_IMPLEMENTATION=1
)
