include_guard( DIRECTORY )

# NOTE: preserve directory structure
install(
  DIRECTORY
    ${CMAKE_SOURCE_DIR}/base/
  DESTINATION
    ${CMAKE_INSTALL_INCLUDEDIR}/base
  FILES_MATCHING
    PATTERN "*")

install(
  TARGETS
    ${STATIC_LIB_NAME}
    ${PROJECT_NAME}_pcf
  EXPORT
    #${PROJECT_NAME})
    #${PROJECT_NAME}-targets)
    ${PROJECT_NAME}-config)
    #${PROJECT_NAME}_pcf-config)
install(
  EXPORT
    #${PROJECT_NAME}_pcf-config
    ${PROJECT_NAME}-config
    #${PROJECT_NAME}-targets
    #${PROJECT_NAME}
  NAMESPACE
    ${PROJECT_NAME}::
  DESTINATION
    cmake)
    #".")

set_target_properties(${STATIC_LIB_NAME}
  PROPERTIES
    EXPORT_NAME ${STATIC_LIB_NAME})

set_target_properties(${PROJECT_NAME}_pcf
  PROPERTIES
    EXPORT_NAME ${PROJECT_NAME}_pcf)

#install(EXPORT ${PROJECT_NAME}_pcf-config DESTINATION ".")

# see Package Configuration File (PCF) https://jfreeman.dev/blog/2019/05/22/trying-conan-with-modern-cmake:-dependencies/
export(
  #EXPORT
  #  ${PROJECT_NAME}
  #  #${PROJECT_NAME}-targets
  TARGETS
    ${STATIC_LIB_NAME}
    ${PROJECT_NAME}_pcf
  NAMESPACE
    ${PROJECT_NAME}::
  FILE
    ${PROJECT_NAME}-config.cmake)
    #${PROJECT_NAME}_pcf-config.cmake)

# Register package in user's package registry
export(PACKAGE ${PROJECT_NAME})
#export(PACKAGE ${PROJECT_NAME}_pcf)

install(
  TARGETS
    ${STATIC_LIB_NAME}
    ${PROJECT_NAME}_pcf
  INCLUDES DESTINATION
    ${CMAKE_INSTALL_INCLUDEDIR}
  PUBLIC_HEADER DESTINATION
    ${CMAKE_INSTALL_INCLUDEDIR}
  RUNTIME DESTINATION
    ${CMAKE_INSTALL_BINDIR}
  LIBRARY DESTINATION
    ${CMAKE_INSTALL_LIBDIR}
  ARCHIVE DESTINATION
    ${CMAKE_INSTALL_LIBDIR})

include(CMakePackageConfigHelpers)
write_basic_package_version_file(
  "${CMAKE_CURRENT_BINARY_DIR}/${PROJECT_NAME}ConfigVersion.cmake"
  VERSION
    ${PROJECT_VERSION}
  COMPATIBILITY
    AnyNewerVersion
)
install(
  FILES
    "${CMAKE_CURRENT_BINARY_DIR}/${PROJECT_NAME}ConfigVersion.cmake"
  #DESTINATION
  #  cmake
  DESTINATION
    "."
  COMPONENT
    Devel
)

## Exporting from the build tree
# configure_file(${CMAKE_CURRENT_SOURCE_DIR}/cmake/Find${PROJECT_NAME}.cmake
#   ${CMAKE_CURRENT_BINARY_DIR}/Find${PROJECT_NAME}.cmake
#   COPYONLY)
# install(FILES
#     ${CMAKE_CURRENT_SOURCE_DIR}/cmake/Find${PROJECT_NAME}.cmake
#     #DESTINATION cmake
#     DESTINATION "."
# )
