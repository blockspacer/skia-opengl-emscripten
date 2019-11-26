find_package(chromium_libevent CONFIG REQUIRED)

# ALIAS
add_library(chromium_libevent::chromium_libevent INTERFACE IMPORTED)
target_link_libraries(chromium_libevent::chromium_libevent INTERFACE chromium_libevent::chromium_libevent-static)
