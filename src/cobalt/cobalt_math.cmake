cmake_minimum_required(VERSION 2.8)

# 'dependencies': [
#   '<(DEPTH)/base/base.gyp:base',
# ],
list(APPEND cobalt_math_SOURCES
  ${COBALT_CORE_DIR}math/box_f.cc
  ${COBALT_CORE_DIR}math/box_f.h
  ${COBALT_CORE_DIR}math/clamp.h
  ${COBALT_CORE_DIR}math/cubic_bezier.cc
  ${COBALT_CORE_DIR}math/cubic_bezier.h
  ${COBALT_CORE_DIR}math/insets.cc
  ${COBALT_CORE_DIR}math/insets.h
  ${COBALT_CORE_DIR}math/insets_base.h
  ${COBALT_CORE_DIR}math/insets_f.cc
  ${COBALT_CORE_DIR}math/insets_f.h
  ${COBALT_CORE_DIR}math/linear_interpolator.h
  ${COBALT_CORE_DIR}math/matrix3_f.cc
  ${COBALT_CORE_DIR}math/matrix3_f.h
  ${COBALT_CORE_DIR}math/matrix_interpolation.cc
  ${COBALT_CORE_DIR}math/matrix_interpolation.h
  ${COBALT_CORE_DIR}math/point.cc
  ${COBALT_CORE_DIR}math/point.h
  ${COBALT_CORE_DIR}math/point3_f.cc
  ${COBALT_CORE_DIR}math/point3_f.h
  ${COBALT_CORE_DIR}math/point_base.h
  ${COBALT_CORE_DIR}math/point_conversions.cc
  ${COBALT_CORE_DIR}math/point_conversions.h
  ${COBALT_CORE_DIR}math/point_f.cc
  ${COBALT_CORE_DIR}math/point_f.h
  ${COBALT_CORE_DIR}math/quad_f.cc
  ${COBALT_CORE_DIR}math/quad_f.h
  ${COBALT_CORE_DIR}math/rational.h
  ${COBALT_CORE_DIR}math/rect.cc
  ${COBALT_CORE_DIR}math/rect.h
  ${COBALT_CORE_DIR}math/rect_base.h
  ${COBALT_CORE_DIR}math/rect_base_impl.h
  ${COBALT_CORE_DIR}math/rect_conversions.cc
  ${COBALT_CORE_DIR}math/rect_conversions.h
  ${COBALT_CORE_DIR}math/rect_f.cc
  ${COBALT_CORE_DIR}math/rect_f.h
  ${COBALT_CORE_DIR}math/safe_integer_conversions.h
  ${COBALT_CORE_DIR}math/size.cc
  ${COBALT_CORE_DIR}math/size.h
  ${COBALT_CORE_DIR}math/size_base.h
  ${COBALT_CORE_DIR}math/size_conversions.cc
  ${COBALT_CORE_DIR}math/size_conversions.h
  ${COBALT_CORE_DIR}math/size_f.cc
  ${COBALT_CORE_DIR}math/size_f.h
  ${COBALT_CORE_DIR}math/transform_2d.cc
  ${COBALT_CORE_DIR}math/transform_2d.h
  ${COBALT_CORE_DIR}math/vector2d.cc
  ${COBALT_CORE_DIR}math/vector2d.h
  ${COBALT_CORE_DIR}math/vector2d_conversions.cc
  ${COBALT_CORE_DIR}math/vector2d_conversions.h
  ${COBALT_CORE_DIR}math/vector2d_f.cc
  ${COBALT_CORE_DIR}math/vector2d_f.h
  ${COBALT_CORE_DIR}math/vector3d_f.cc
  ${COBALT_CORE_DIR}math/vector3d_f.h
)

add_library(cobalt_math STATIC
  ${cobalt_math_SOURCES}
)

target_link_libraries(cobalt_math PRIVATE
  cobalt_base
  #cobalt_nanobase
  #cobalt_script
  #v8_stub
  base # TODO
  modp_b64
  #dynamic_annotations
  ${GLIBXML_LIB}
  icu
  #ced
  glm
)

set_property(TARGET cobalt_math PROPERTY CXX_STANDARD 17)

target_include_directories(cobalt_math PRIVATE
  #${UI_PARENT_DIR}
  ${COBALT_CORE_DIR}
  ${COBALT_CORE_PARENT_DIR}
  ${COBALT_COMMON_INCLUDES}
  ${CHROMIUM_DIR} # to third_party/skia/include/core/SkWriteBuffer.h
)

target_compile_definitions(cobalt_math PRIVATE
  # starboard/linux/shared/BUILD.gn
  #STARBOARD_IMPLEMENTATION=1
  #
  #BASE_IMPLEMENTATION=1
  #BASE_I18N_IMPLEMENTATION=1
  #
  #COBALT_ENABLE_VERSION_COMPATIBILITY_VALIDATIONS=1
  #
  ${COBALT_COMMON_DEFINES}
)
