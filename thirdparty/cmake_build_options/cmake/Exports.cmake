include_guard( DIRECTORY )

# NOTE: preserve directory structure
install(
  DIRECTORY
    ${CMAKE_SOURCE_DIR}/cmake/
  DESTINATION
    ${CMAKE_INSTALL_INCLUDEDIR}
  FILES_MATCHING
    PATTERN "*")

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
  DESTINATION
    "."
  COMPONENT
    Devel
)

configure_file(${CMAKE_CURRENT_SOURCE_DIR}/cmake/Find${PROJECT_NAME}.cmake
 ${CMAKE_CURRENT_BINARY_DIR}/Find${PROJECT_NAME}.cmake
 COPYONLY)
install(FILES
   ${CMAKE_CURRENT_SOURCE_DIR}/cmake/Find${PROJECT_NAME}.cmake
   DESTINATION "."
)
