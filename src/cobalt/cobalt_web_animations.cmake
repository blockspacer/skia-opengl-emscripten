cmake_minimum_required(VERSION 2.8)

#'dependencies': [
#  '<(DEPTH)/cobalt/base/base.gyp:base',
#  '<(DEPTH)/cobalt/cssom/cssom.gyp:cssom',
#],
set(cobalt_web_animations_SOURCES
  ${COBALT_CORE_DIR}web_animations/animatable.h
  ${COBALT_CORE_DIR}web_animations/animation.cc
  ${COBALT_CORE_DIR}web_animations/animation.h
  ${COBALT_CORE_DIR}web_animations/animation_effect_read_only.h
  ${COBALT_CORE_DIR}web_animations/animation_effect_timing_read_only.cc
  ${COBALT_CORE_DIR}web_animations/animation_effect_timing_read_only.h
  ${COBALT_CORE_DIR}web_animations/animation_set.cc
  ${COBALT_CORE_DIR}web_animations/animation_set.h
  ${COBALT_CORE_DIR}web_animations/animation_timeline.cc
  ${COBALT_CORE_DIR}web_animations/animation_timeline.h
  ${COBALT_CORE_DIR}web_animations/baked_animation_set.cc
  ${COBALT_CORE_DIR}web_animations/baked_animation_set.h
  ${COBALT_CORE_DIR}web_animations/keyframe.h
  ${COBALT_CORE_DIR}web_animations/keyframe_effect_read_only.cc
  ${COBALT_CORE_DIR}web_animations/keyframe_effect_read_only.h
  ${COBALT_CORE_DIR}web_animations/timed_task_queue.cc
  ${COBALT_CORE_DIR}web_animations/timed_task_queue.h
)

add_library(cobalt_web_animations STATIC
  ${cobalt_web_animations_SOURCES}
)

target_link_libraries(cobalt_web_animations PUBLIC
  #base # TODO
  cobalt_base
  cobalt_cssom
  #cobalt_nanobase
  #cobalt_script
  #v8_stub
  #modp_b64
)

set_property(TARGET cobalt_web_animations PROPERTY CXX_STANDARD 17)

target_include_directories(cobalt_web_animations PRIVATE
  #${UI_PARENT_DIR}
  ${COBALT_CORE_DIR}
  ${COBALT_CORE_PARENT_DIR}
  ${COBALT_COMMON_INCLUDES}
  ${CHROMIUM_DIR} # to third_party/skia/include/core/SkWriteBuffer.h
)

target_compile_definitions(cobalt_web_animations PRIVATE
  #STARBOARD_IMPLEMENTATION=1
  #
  #BASE_IMPLEMENTATION=1
  #BASE_I18N_IMPLEMENTATION=1
  #
  #COBALT_ENABLE_VERSION_COMPATIBILITY_VALIDATIONS=1
  #
  ${COBALT_COMMON_DEFINES}
)
