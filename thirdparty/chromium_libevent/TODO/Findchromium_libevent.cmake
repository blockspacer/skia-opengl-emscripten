find_package(chromium_libevent CONFIG REQUIRED)

# #find_package(PkgConfig)
# #pkg_check_modules(PC_chromium_libevent-static QUIET chromium_libevent-static)
# #
# #message(STATUS "Running Findchromium_libevent-static.cmake...")
# #
# #find_path(CHROMIUM_LIBEVENT_INCLUDE_DIR
# #  NAMES
# #    base
# #  PATHS
# #    ".")
# #
# find_library(CHROMIUM_LIBEVENT_LIBRARY
#   NAMES
#     chromium_libevent-static
#   PATHS
#     lib)
# find_library(CHROMIUM_LIBEVENT_LIBRARY_DEBUG
#   NAMES
#     chromium_libevent-static-d
#   PATHS
#     lib)
# #
# #include(FindPackageHandleStandardArgs)
# #
# #find_package_handle_standard_args(CHROMIUM_LIBEVENT REQUIRED_VARS
# #  CHROMIUM_LIBEVENT_LIBRARY
# #  CHROMIUM_LIBEVENT_INCLUDE_DIR)
# #
# #set(chromium_libevent-static_VERSION ${PC_chromium_libevent-static_VERSION})
# #
# ## An advanced variable will not be displayed in any of the cmake GUIs
# ## unless the show advanced option is on.
# #mark_as_advanced(
# #  chromium_libevent-static_FOUND
# #  CHROMIUM_LIBEVENT_INCLUDE_DIR
# #  chromium_libevent-static_VERSION)
# #
# #include(FindPackageHandleStandardArgs)
# #find_package_handle_standard_args(chromium_libevent-static
# #  REQUIRED_VARS CHROMIUM_LIBEVENT_INCLUDE_DIR
# #  VERSION_VAR chromium_libevent-static_VERSION
# #)
# #
# #if(chromium_libevent-static_FOUND)
# #  #Set include dirs to parent, to enable includes like #include <lib_name/some_header.h>
# #  get_filename_component(CHROMIUM_LIBEVENT_INCLUDE_DIRS ${CHROMIUM_LIBEVENT_INCLUDE_DIR} DIRECTORY)
# #endif()
#
# find_package(chromium_libevent CONFIG REQUIRED)
# #if(NOT chromium_libevent_pcf_FOUND)
# #  message(FATAL_ERROR "NOT chromium_libevent_pcf_FOUND")
# #endif(NOT chromium_libevent_pcf_FOUND)
#
#   #
#   get_target_property(chromium_libevent_pcf_INTERFACE_INCLUDE_DIRECTORIES
#     chromium_libevent::chromium_libevent_pcf INTERFACE_INCLUDE_DIRECTORIES)
#   get_target_property(chromium_libevent_pcf_INTERFACE_COMPILE_DEFINITIONS
#     chromium_libevent::chromium_libevent_pcf INTERFACE_COMPILE_DEFINITIONS)
#   #if(NOT DEFINED chromium_libevent_pcf_INTERFACE_INCLUDE_DIRECTORIES)
#   #  message(FATAL_ERROR "NOT DEFINED: chromium_libevent_pcf_INTERFACE_INCLUDE_DIRECTORIES")
#   #endif(NOT DEFINED chromium_libevent_pcf_INTERFACE_INCLUDE_DIRECTORIES)
#   #
#
# message(STATUS "Findchromium_libevent-static.cmake chromium_libevent_pcf_INTERFACE_COMPILE_DEFINITIONS=${chromium_libevent_pcf_INTERFACE_COMPILE_DEFINITIONS}")
# message(STATUS "Findchromium_libevent-static.cmake chromium_libevent_pcf_INTERFACE_INCLUDE_DIRECTORIES=${chromium_libevent_pcf_INTERFACE_INCLUDE_DIRECTORIES}")
#
# function(clone_imported_target_properties dst src)
#   get_property(_INTERFACE_LINK_LIBRARIES TARGET ${src} PROPERTY INTERFACE_LINK_LIBRARIES )
#   get_property(_INTERFACE_INCLUDE_DIRECTORIES TARGET ${src} PROPERTY INTERFACE_INCLUDE_DIRECTORIES )
#   get_property(_INTERFACE_COMPILE_DEFINITIONS TARGET ${src} PROPERTY INTERFACE_COMPILE_DEFINITIONS )
#   get_property(_INTERFACE_COMPILE_OPTIONS TARGET ${src} PROPERTY INTERFACE_COMPILE_OPTIONS )
#   #
#   set_property(TARGET ${dst} PROPERTY INTERFACE_LINK_LIBRARIES ${_INTERFACE_LINK_LIBRARIES})
#   set_property(TARGET ${dst} PROPERTY INTERFACE_INCLUDE_DIRECTORIES ${_INTERFACE_INCLUDE_DIRECTORIES})
#   set_property(TARGET ${dst} PROPERTY INTERFACE_COMPILE_DEFINITIONS ${_INTERFACE_COMPILE_DEFINITIONS})
#   set_property(TARGET ${dst} PROPERTY INTERFACE_COMPILE_OPTIONS ${_INTERFACE_COMPILE_OPTIONS})
# endfunction()
#
# if(#chromium_libevent_pcf_FOUND AND
#    NOT TARGET chromium_libevent::chromium_libevent-static)
#   #add_library(chromium_libevent::chromium_libevent-static INTERFACE IMPORTED)
#   #add_library(chromium_libevent-static STATIC IMPORTED GLOBAL)
#   add_library(chromium_libevent-static INTERFACE IMPORTED GLOBAL)
#   #
#   clone_imported_target_properties(chromium_libevent-static
#     chromium_libevent::chromium_libevent_pcf)
#   #
#   add_library(chromium_libevent::chromium_libevent-static ALIAS chromium_libevent-static)
#   #
#   #target_link_libraries(chromium_libevent::chromium_libevent-static INTERFACE
#   #  chromium_libevent::chromium_libevent_pcf)
#   #
#   if(CHROMIUM_LIBEVENT_LIBRARY_FOUND)
#     set_property(TARGET chromium_libevent-static
#       PROPERTY
#         INTERFACE_LINK_LIBRARIES ${CHROMIUM_LIBEVENT_LIBRARY}
#         IMPORTED_LOCATION ${CHROMIUM_LIBEVENT_LIBRARY})
#         #IMPORTED_LOCATION_RELEASE ${CHROMIUM_LIBEVENT_LIBRARY})
#   endif()
#   #message(FATAL_ERROR "CHROMIUM_LIBEVENT_LIBRARY=${CHROMIUM_LIBEVENT_LIBRARY}")
#   #
#   if(CHROMIUM_LIBEVENT_LIBRARY_DEBUG_FOUND)
#     set_property(TARGET chromium_libevent-static
#       PROPERTY
#         INTERFACE_LINK_LIBRARIES ${CHROMIUM_LIBEVENT_LIBRARY_DEBUG}
#         IMPORTED_LOCATION ${CHROMIUM_LIBEVENT_LIBRARY_DEBUG})
#         #IMPORTED_LOCATION_DEBUG ${CHROMIUM_LIBEVENT_LIBRARY_DEBUG})
#   endif()
#
# #get_target_property(chromium_libevent_pcf_INTERFACE_INCLUDE_DIRECTORIES
# #  chromium_libevent::chromium_libevent-static INTERFACE_INCLUDE_DIRECTORIES)
# #get_target_property(chromium_libevent_pcf_INTERFACE_COMPILE_DEFINITIONS
# #  chromium_libevent::chromium_libevent-static INTERFACE_COMPILE_DEFINITIONS)
# #message(STATUS "chromium_libevent_pcf_INTERFACE_COMPILE_DEFINITIONS=${chromium_libevent_pcf_INTERFACE_COMPILE_DEFINITIONS}")
# #message(FATAL_ERROR "chromium_libevent_pcf_INTERFACE_INCLUDE_DIRECTORIES=${chromium_libevent_pcf_INTERFACE_INCLUDE_DIRECTORIES}")
#
#   #
#   #target_link_libraries(chromium_libevent::chromium_libevent-static PUBLIC
#   #  chromium_libevent::chromium_libevent_pcf)
#   #target_link_libraries(chromium_libevent::chromium_libevent-static INTERFACE
#   #  chromium_libevent::chromium_libevent_pcf)
#   #set_target_properties(chromium_libevent::chromium_libevent-static PROPERTIES
#   #    INTERFACE_INCLUDE_DIRECTORIES "${CHROMIUM_LIBEVENT_INCLUDE_DIRS}"
#   #)
#   #message(FATAL_ERROR "chromium_libevent_pcf_FOUND AND NOT TARGET chromium_libevent::chromium_libevent-static")
# endif()
