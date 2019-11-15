cmake_minimum_required(VERSION 2.8)

set(cobalt_third_party_super_fast_hash_SOURCES
  # embedded src!
  #${COBALT_PORT_DIR}third_party/super_fast_hash/super_fast_hash.cc
)

## --- COBALT_CORE ---###

add_library(COBALT_CORE INTERFACE
  ${cobalt_third_party_super_fast_hash_SOURCES}
)

target_link_libraries(COBALT_CORE INTERFACE
  base # TODO
  modp_b64
  ${COBALT_LIBS}
  #cobalt_base
  #cobalt_nanobase
  #cobalt_csp
  #cobalt_script
  ##v8_stub
  #cobalt_dom_exception
  #cobalt_ui_navigation
  #cobalt_math
  #cobalt_media
  #cobalt_loader
  #cobalt_page_visibility
  #cobalt_cssom
  #cobalt_web_animations
  #cobalt_dom
  #starboard_icu_init
  #starboard_eztime  # requires starboard_icu_init
  #starboard_stub
  #starboard_platform # requires starboard_stub
  #starboard_common
  #starboard_core
  ### TODO ## starboard_platform
)

#set_property(TARGET COBALT_CORE PROPERTY CXX_STANDARD 17)

target_include_directories(COBALT_CORE INTERFACE
  ${GNET_PARENT_DIR} # to ./net
  #${UI_PARENT_DIR}
  ${COBALT_CORE_DIR}
  #${COBALT_CORE_DIR}/common
  #${BASE_DIR}
  ${COBALT_GEN_DIR}
  #${COBALT_GEN_CSS_PARSER_PARENT_DIR}
  ${CHROMIUM_DIR} # to third_party/skia/include/core/SkWriteBuffer.h
)

target_include_directories(COBALT_CORE INTERFACE
  ${COBALT_CORE_PARENT_DIR} # to ./cobalt
  ${COBALT_COMMON_INCLUDES}
)

target_compile_definitions(COBALT_CORE INTERFACE
  #BASE_IMPLEMENTATION=1
  #BASE_I18N_IMPLEMENTATION=1
  #
  ${COBALT_COMMON_DEFINES}
)


if(NOT MSVC OR IS_CLANG_CL)
  target_compile_options(COBALT_CORE INTERFACE
    -Wno-error
    -Wno-macro-redefined
    -Wno-implicit-function-declaration
    -Wno-c++11-narrowing
    -Wno-macro-redefined
    #-Wno-undef
    #-Wno-unknown-pragmas
    #-Wno-nonportable-include-path
    #-Wno-unknown-argument
    # Warn for implicit type conversions that may change a value.
    #-Wconversion
    -Wno-c++11-compat
    # This complains about "override", which we use heavily.
    -Wno-c++11-extensions
    # Warns on switches on enums that cover all enum values but
    # also contain a default: branch. Chrome is full of that.
    -Wno-covered-switch-default
    # protobuf uses hash_map.
    -Wno-deprecated
    # Don't warn about the "struct foo f = {0};" initialization pattern.
    -Wno-missing-field-initializers
    # Do not warn for implicit sign conversions.
    -Wno-sign-conversion
    -Wno-unnamed-type-template-args
    # Triggered by the COMPILE_ASSERT macro.
    -Wno-unused-local-typedef
    # Do not warn if a function or variable cannot be implicitly
    # instantiated.
    -Wno-undefined-var-template
    # Do not warn about an implicit exception spec mismatch.
    -Wno-implicit-exception-spec-mismatch
    #
    -Wno-inconsistent-missing-override
  )
else()
  # TODO
endif()
