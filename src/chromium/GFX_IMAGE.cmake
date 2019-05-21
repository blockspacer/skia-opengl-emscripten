
# see G_GFX

#### --- GFX_IMAGE ---###
#
#set(GFX_IMAGE_SOURCES
#  ${GFX_IMAGE_DIR}image/image.cc
#  #${GFX_IMAGE_DIR}image/image.h",
#  ${GFX_IMAGE_DIR}image/image_family.cc
#  #${GFX_IMAGE_DIR}image/image_family.h",
#  # TODO # ${GFX_IMAGE_DIR}image/image_ios.mm",
#  # TODO # ${GFX_IMAGE_DIR}image/image_mac.mm",
#  #${GFX_IMAGE_DIR}image/image_platform.h",
#  ${GFX_IMAGE_DIR}image/image_png_rep.cc
#  #${GFX_IMAGE_DIR}image/image_png_rep.h",
#  ${GFX_IMAGE_DIR}image/image_skia.cc
#  #${GFX_IMAGE_DIR}image/image_skia.h",
#  #${GFX_IMAGE_DIR}image/image_skia_rep.h",
#  ${GFX_IMAGE_DIR}image/image_skia_source.cc
#  #${GFX_IMAGE_DIR}image/image_skia_source.h",
#  #${GFX_IMAGE_DIR}image/image_skia_util_ios.h",
#  # TODO # ${GFX_IMAGE_DIR}image/image_skia_util_ios.mm",
#  #${GFX_IMAGE_DIR}image/image_skia_util_mac.h",
#  # TODO # ${GFX_IMAGE_DIR}image/image_skia_util_mac.mm",
#  ${GFX_IMAGE_DIR}image/image_util.cc
#  #${GFX_IMAGE_DIR}image/image_util.h",
#  # TODO # ${GFX_IMAGE_DIR}image/image_util_ios.mm",
#  # TODO # ${GFX_IMAGE_DIR}image/image_util_mac.mm",
#  #
#  # !is_ios
#  #
#)
#
#add_library(GFX_IMAGE STATIC
#  ${GFX_IMAGE_SOURCES}
#)
#
#target_link_libraries(GFX_IMAGE PUBLIC
#  #dynamic_annotations
#  #${BASE_LIBRARIES}
#  base
#)
#
#set_property(TARGET GFX_IMAGE PROPERTY CXX_STANDARD 17)
#
#target_include_directories(GFX_IMAGE PRIVATE
#  ${GFX_IMAGE_DIR}
#  ${BASE_DIR}
#)
#
#target_compile_definitions(GFX_IMAGE PRIVATE
#  GEOMETRY_IMPLEMENTATION=1
#)
