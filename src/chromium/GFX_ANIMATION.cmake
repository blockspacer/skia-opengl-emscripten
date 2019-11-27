# see https://github.com/chromium/chromium/blob/06c9513ba20f85908b376865d0777633a29740ea/ui/gfx/animation/BUILD.gn

if(TARGET_WINDOWS)
  # skip
elseif(TARGET_LINUX OR TARGET_EMSCRIPTEN)
  # skip
else()
  message(FATAL_ERROR "platform not supported")
endif()

### --- GFX_ANIMATION ---###

if(TARGET_WINDOWS)
  list(APPEND GFX_ANIMATION_SOURCES
    ${GFX_ANIMATION_DIR}animation_win.cc
  )
endif(TARGET_WINDOWS)

list(APPEND GFX_ANIMATION_SOURCES
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

target_link_libraries(GFX_ANIMATION PRIVATE
  #${BASE_LIBRARIES}
  base
  SKIA
  GFX_GEOMETRY
  GFX_GEOMETRY_SKIA
  #${OPENGLES2_LIBRARIES}
  ${FOUND_OPENGL_LIBRARIES}
)

set_property(TARGET GFX_ANIMATION PROPERTY CXX_STANDARD 17)

target_include_directories(GFX_ANIMATION PRIVATE
  ${GFX_ANIMATION_DIR}
  ${BASE_DIR}
  ${OPENGL_INCLUDE_DIR}
)

target_compile_definitions(GFX_ANIMATION PRIVATE
  ANIMATION_IMPLEMENTATION=1
)
