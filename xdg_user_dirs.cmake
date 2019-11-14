cmake_minimum_required(VERSION 2.8)

set(xdg_user_dirs_SOURCES
  ${COMMON_THIRDPARTY_DIR}port/base/third_party/xdg_user_dirs/xdg_user_dir_lookup.cc
  ${COMMON_THIRDPARTY_DIR}port/base/third_party/xdg_user_dirs/xdg_user_dir_lookup.h
)

add_library(xdg_user_dirs STATIC
  ${xdg_user_dirs_SOURCES}
)

set_property(TARGET xdg_user_dirs PROPERTY CXX_STANDARD 17)

target_include_directories(xdg_user_dirs PUBLIC
  # to base/third_party/xdg_user_dirs/xdg_user_dir_lookup.h
  ${COMMON_THIRDPARTY_DIR}port
)

target_include_directories(xdg_user_dirs PRIVATE
  ${COMMON_THIRDPARTY_DIR}port/base/third_party/xdg_user_dirs/
  #${UI_PARENT_DIR}
  #${COBALT_CORE_DIR}
  #${COBALT_CORE_PARENT_DIR}
  #${COBALT_COMMON_INCLUDES}
  #${CHROMIUM_DIR} # to third_party/skia/include/core/SkWriteBuffer.h
  #${COBALT_GEN_DOM_PARSER_PARENT_DIR}
)

#target_compile_definitions(xdg_user_dirs PRIVATE
#  #
#  ${COBALT_COMMON_DEFINES}
#)
