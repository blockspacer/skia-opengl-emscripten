### --- GFX_GEOMETRY ---###

set(GFX_GEOMETRY_SOURCES
  #${GFX_GEOMETRY_DIR}../gfx_export.h
  #${GFX_GEOMETRY_DIR}angle_conversions.h
  ${GFX_GEOMETRY_DIR}axis_transform2d.cc
  #${GFX_GEOMETRY_DIR}axis_transform2d.h
  ${GFX_GEOMETRY_DIR}box_f.cc
  #${GFX_GEOMETRY_DIR}box_f.h
  ${GFX_GEOMETRY_DIR}cubic_bezier.cc
  #${GFX_GEOMETRY_DIR}cubic_bezier.h
  ${GFX_GEOMETRY_DIR}dip_util.cc
  #${GFX_GEOMETRY_DIR}dip_util.h
  #${GFX_GEOMETRY_DIR}geometry_export.h
  ${GFX_GEOMETRY_DIR}insets.cc
  #${GFX_GEOMETRY_DIR}insets.h
  ${GFX_GEOMETRY_DIR}insets_f.cc
  #${GFX_GEOMETRY_DIR}insets_f.h
  ${GFX_GEOMETRY_DIR}matrix3_f.cc
  #${GFX_GEOMETRY_DIR}matrix3_f.h
  ${GFX_GEOMETRY_DIR}point.cc
  #${GFX_GEOMETRY_DIR}point.h
  ${GFX_GEOMETRY_DIR}point3_f.cc
  #${GFX_GEOMETRY_DIR}point3_f.h
  ${GFX_GEOMETRY_DIR}point_conversions.cc
  #${GFX_GEOMETRY_DIR}point_conversions.h
  ${GFX_GEOMETRY_DIR}point_f.cc
  #${GFX_GEOMETRY_DIR}point_f.h
  ${GFX_GEOMETRY_DIR}quad_f.cc
  #${GFX_GEOMETRY_DIR}quad_f.h
  ${GFX_GEOMETRY_DIR}quaternion.cc
  #${GFX_GEOMETRY_DIR}quaternion.h
  ${GFX_GEOMETRY_DIR}rect.cc
  #${GFX_GEOMETRY_DIR}rect.h
  ${GFX_GEOMETRY_DIR}rect_conversions.cc
  #${GFX_GEOMETRY_DIR}rect_conversions.h
  ${GFX_GEOMETRY_DIR}rect_f.cc
  #${GFX_GEOMETRY_DIR}rect_f.h
  #${GFX_GEOMETRY_DIR}safe_integer_conversions.h
  ${GFX_GEOMETRY_DIR}scroll_offset.cc
  #${GFX_GEOMETRY_DIR}scroll_offset.h
  ${GFX_GEOMETRY_DIR}size.cc
  #${GFX_GEOMETRY_DIR}size.h
  ${GFX_GEOMETRY_DIR}size_conversions.cc
  #${GFX_GEOMETRY_DIR}size_conversions.h
  ${GFX_GEOMETRY_DIR}size_f.cc
  #${GFX_GEOMETRY_DIR}size_f.h
  ${GFX_GEOMETRY_DIR}vector2d.cc
  #${GFX_GEOMETRY_DIR}vector2d.h
  ${GFX_GEOMETRY_DIR}vector2d_conversions.cc
  #${GFX_GEOMETRY_DIR}vector2d_conversions.h
  ${GFX_GEOMETRY_DIR}vector2d_f.cc
  #${GFX_GEOMETRY_DIR}vector2d_f.h
  ${GFX_GEOMETRY_DIR}vector3d_f.cc
  #${GFX_GEOMETRY_DIR}vector3d_f.h
)

add_library(GFX_GEOMETRY STATIC
  ${GFX_GEOMETRY_SOURCES}
)

target_link_libraries(GFX_GEOMETRY PRIVATE
  #dynamic_annotations
  #${BASE_LIBRARIES}
  base
  #${OPENGLES2_LIBRARIES}
  ${FOUND_OPENGL_LIBRARIES}
)

set_property(TARGET GFX_GEOMETRY PROPERTY CXX_STANDARD 17)

target_include_directories(GFX_GEOMETRY PRIVATE
  ${GFX_GEOMETRY_DIR}
  ${BASE_DIR}
  ${OPENGL_INCLUDE_DIR}
)

target_compile_definitions(GFX_GEOMETRY PRIVATE
  GEOMETRY_IMPLEMENTATION=1
)
