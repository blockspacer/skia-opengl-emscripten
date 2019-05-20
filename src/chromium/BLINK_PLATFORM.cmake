### --- BLINK_PLATFORM ---###

# TODO https://github.com/chromium/chromium/blob/master/third_party/blink/renderer/platform/BUILD.gn
set(BLINK_PLATFORM_SOURCES
  ${BLINK_PLATFORM_DIR}weborigin/known_ports.cc
  #${BLINK_PLATFORM_DIR}weborigin/known_ports.h
  ${BLINK_PLATFORM_DIR}weborigin/kurl.cc
  #${BLINK_PLATFORM_DIR}weborigin/kurl.h
  #${BLINK_PLATFORM_DIR}weborigin/kurl_hash.h
  ${BLINK_PLATFORM_DIR}weborigin/origin_access_entry.cc
  #${BLINK_PLATFORM_DIR}weborigin/origin_access_entry.h
  #${BLINK_PLATFORM_DIR}weborigin/referrer.h
  ${BLINK_PLATFORM_DIR}weborigin/scheme_registry.cc
  #${BLINK_PLATFORM_DIR}weborigin/scheme_registry.h
  ${BLINK_PLATFORM_DIR}weborigin/security_origin.cc
  #${BLINK_PLATFORM_DIR}weborigin/security_origin.h
  #${BLINK_PLATFORM_DIR}weborigin/security_origin_hash.h
  ${BLINK_PLATFORM_DIR}weborigin/security_policy.cc
  #${BLINK_PLATFORM_DIR}weborigin/security_policy.h
  #${BLINK_PLATFORM_DIR}weborigin/security_violation_reporting_policy.h
  #${BLINK_PLATFORM_DIR}weborigin/url_security_origin_map.h
)

add_library(BLINK_PLATFORM STATIC
  ${BLINK_PLATFORM_SOURCES}
)

target_link_libraries(BLINK_PLATFORM PUBLIC
  GURL
  GNET
  ${BASE_LIBRARIES}
)

set_property(TARGET BLINK_PLATFORM PROPERTY CXX_STANDARD 17)

target_include_directories(BLINK_PLATFORM PRIVATE
  ${BLINK_PLATFORM_DIR}
  ${BASE_DIR}
)

target_compile_definitions(BLINK_PLATFORM PRIVATE
  BLINK_PLATFORM_IMPLEMENTATION=1
  BLINK_IMPLEMENTATION=1
  INSIDE_BLINK=1
  #USING_V8_SHARED
)
