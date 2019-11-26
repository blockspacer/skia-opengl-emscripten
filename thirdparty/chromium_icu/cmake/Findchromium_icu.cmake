# uses Config.cmake or a -config.cmake file
# see https://gitlab.kitware.com/cmake/community/wikis/doc/tutorials/How-to-create-a-ProjectConfig.cmake-file
find_package(chromium_icu CONFIG REQUIRED)

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
#add_library(chromium_icu::chromium_icu INTERFACE IMPORTED)
#target_link_libraries(chromium_icu::chromium_icu INTERFACE chromium_icu::chromium_icu-static)
## TODO: hack to make INTERFACE ALIAS with same settings as original lib
#clone_imported_target_properties(chromium_icu::chromium_icu chromium_icu::chromium_icu-static)
