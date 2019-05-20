### --- GNET ---###

## TODO https://github.com/chromium/chromium/blob/master/third_party/blink/renderer/platform/BUILD.gn
#set(GNET_SOURCES
#  ${GNET_DIR}weborigin/known_ports.cc
#)
#
#add_library(GNET STATIC
#  ${GNET_SOURCES}
#)
#
#target_link_libraries(GNET PUBLIC
#  GCRYPTO
#  dynamic_annotations
#  ${BASE_LIBRARIES}
#)
#
#set_property(TARGET GNET PROPERTY CXX_STANDARD 17)
#
#target_include_directories(GNET PRIVATE
#  ${GNET_DIR}
#  ${BASE_DIR}
#)
#
##target_compile_definitions(GNET PRIVATE
##  BLINK_PLATFORM_IMPLEMENTATION=1
##)
