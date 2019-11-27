# uses Config.cmake or a -config.cmake file
# see https://gitlab.kitware.com/cmake/community/wikis/doc/tutorials/How-to-create-a-ProjectConfig.cmake-file
# BELOW MUST BE EQUAL TO find_package(chromium_icu CONFIG REQUIRED)
# NOTE: find_package(CONFIG) not supported with EMSCRIPTEN, so use include()
include(${CMAKE_CURRENT_LIST_DIR}/cmake/chromium_build_util-config.cmake)
