# uses Config.cmake or a -config.cmake file
# see https://gitlab.kitware.com/cmake/community/wikis/doc/tutorials/How-to-create-a-ProjectConfig.cmake-file
# BELOW MUST BE EQUAL TO find_package(chromium_libevent CONFIG REQUIRED)
# NOTE: find_package(CONFIG) not supported with EMSCRIPTEN, so use include()
include(${CMAKE_CURRENT_LIST_DIR}/cmake/chromium_libevent-config.cmake)

# # see https://github.com/bincrafters/community/issues/807#issuecomment-503514600
# if(EMSCRIPTEN)
#     set(CMAKE_FIND_ROOT_PATH_MODE_LIBRARY BOTH)
#     set(CMAKE_FIND_ROOT_PATH_MODE_INCLUDE BOTH)
#     set(CMAKE_FIND_ROOT_PATH_MODE_PACKAGE BOTH)
# endif(EMSCRIPTEN)
#
# # uses Config.cmake or a -config.cmake file
# # see https://gitlab.kitware.com/cmake/community/wikis/doc/tutorials/How-to-create-a-ProjectConfig.cmake-file
# # NOTE: CMAKE_FIND_ROOT_PATH_BOTH for EMSCRIPTEN, see https://cmake.org/cmake/help/latest/command/find_package.html
# find_package(chromium_libevent CONFIG REQUIRED CMAKE_FIND_ROOT_PATH_BOTH)
#
# # see https://github.com/bincrafters/community/issues/807#issuecomment-503514600
# if(EMSCRIPTEN)
#     set(CMAKE_FIND_ROOT_PATH_MODE_LIBRARY ONLY)
#     set(CMAKE_FIND_ROOT_PATH_MODE_INCLUDE ONLY)
#     set(CMAKE_FIND_ROOT_PATH_MODE_PACKAGE ONLY)
# endif(EMSCRIPTEN)

#function(clone_imported_target_properties dst src)
#  get_property(_INTERFACE_LINK_LIBRARIES TARGET ${src} PROPERTY INTERFACE_LINK_LIBRARIES )
#  get_property(_INTERFACE_INCLUDE_DIRECTORIES TARGET ${src} PROPERTY INTERFACE_INCLUDE_DIRECTORIES )
#  get_property(_INTERFACE_COMPILE_DEFINITIONS TARGET ${src} PROPERTY INTERFACE_COMPILE_DEFINITIONS )
#  get_property(_INTERFACE_COMPILE_OPTIONS TARGET ${src} PROPERTY INTERFACE_COMPILE_OPTIONS )
#  #
#  set_property(TARGET ${dst} PROPERTY INTERFACE_LINK_LIBRARIES ${_INTERFACE_LINK_LIBRARIES})
#  set_property(TARGET ${dst} PROPERTY INTERFACE_INCLUDE_DIRECTORIES ${_INTERFACE_INCLUDE_DIRECTORIES})
#  set_property(TARGET ${dst} PROPERTY INTERFACE_COMPILE_DEFINITIONS ${_INTERFACE_COMPILE_DEFINITIONS})
#  set_property(TARGET ${dst} PROPERTY INTERFACE_COMPILE_OPTIONS ${_INTERFACE_COMPILE_OPTIONS})
#endfunction()

# ALIAS
#add_library(chromium_libevent::chromium_libevent INTERFACE IMPORTED)
#target_link_libraries(chromium_libevent::chromium_libevent INTERFACE chromium_libevent::chromium_libevent-static)
## TODO: hack to make INTERFACE ALIAS with same settings as original lib
#clone_imported_target_properties(chromium_libevent::chromium_libevent chromium_libevent::chromium_libevent-static)
