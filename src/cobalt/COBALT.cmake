cmake_minimum_required(VERSION 2.8)

# cobalt/system_window/system_window.gyp
# cobalt/storage/store_upgrade/upgrade_tool.gyp
# cobalt/storage/store_upgrade/upgrade.gyp
# cobalt/storage/store/store.gyp
# cobalt/storage/storage_constants.gyp
# cobalt/storage/storage.gyp

# cobalt/content/fonts/fonts.gyp

# cobalt/debug/remote/devtools/inspector_protocol/inspector_protocol.gyp
# cobalt/debug/remote/devtools/devtools.gyp
# cobalt/debug/debug.gyp
# cobalt/renderer/rasterizer/common/common.gyp
# cobalt/renderer/rasterizer/lib/lib.gyp
# cobalt/renderer/rasterizer/blitter/rasterizer.gyp

# cobalt/renderer/rasterizer/skia/skia/skia_library_opts.gyp
# cobalt/renderer/rasterizer/skia/skia/skia.gyp

# cobalt/renderer/rasterizer/skia/software_rasterizer.gyp
# cobalt/renderer/rasterizer/skia/rasterizer.gyp


# cobalt/renderer/rasterizer/rasterizer.gyp
# cobalt/renderer/rasterizer/egl/shaders/shaders.gyp
# cobalt/renderer/rasterizer/egl/rasterizer.gyp
# cobalt/renderer/rasterizer/stub/rasterizer.gyp
# cobalt/renderer/test/png_utils/png_utils.gyp
# cobalt/renderer/test/jpeg_utils/jpeg_utils.gyp
# cobalt/renderer/test/scenes/scenes.gyp
# cobalt/renderer/backend/backend.gyp
# cobalt/renderer/backend/starboard/platform_backend.gyp
# cobalt/renderer/renderer.gyp
# cobalt/renderer/default_options_starboard.gyp
# cobalt/renderer/sandbox/sandbox.gyp
# cobalt/webdriver/webdriver_test.gyp
# cobalt/webdriver/webdriver.gyp
# cobalt/page_visibility/page_visibility.gyp
# cobalt/network/network.gyp
# cobalt/sso/sso.gyp
# cobalt/speech/speech.gyp
# cobalt/speech/sandbox/sandbox.gyp
# cobalt/build/all.gyp
# cobalt/build/cobalt_build_id.gyp
# cobalt/test/test.gyp
# cobalt/base/base.gyp
# cobalt/trace_event/trace_event.gyp
# cobalt/script/v8c/v8c.gyp
# cobalt/script/script.gyp
# cobalt/script/mozjs-45/mozjs-45.gyp
# cobalt/script/engine.gyp
# cobalt/h5vcc/h5vcc.gyp
# cobalt/input/input.gyp
# cobalt/ui_navigation/ui_navigation.gyp
# cobalt/math/math.gyp
# cobalt/csp/csp.gyp
# cobalt/overlay_info/overlay_info.gyp
# cobalt/media/media.gyp
# cobalt/media/sandbox/sandbox.gyp
# cobalt/media_session/media_session.gyp
# cobalt/media_session/media_session_test.gyp
# cobalt/render_tree/render_tree.gyp
# cobalt/dom_parser/dom_parser_test.gyp
# cobalt/browser/browser_bindings.gyp
# cobalt/browser/null_webapi_extension.gyp
# cobalt/browser/browser.gyp
# cobalt/browser/cobalt.gyp
# cobalt/browser/browser_bindings_gen.gyp
# cobalt/websocket/websocket.gyp
# cobalt/demos/demos.gyp
# cobalt/accessibility/accessibility_test.gyp
# cobalt/accessibility/accessibility.gyp
# cobalt/media_stream/media_stream_test.gyp
# cobalt/media_stream/media_stream.gyp
# cobalt/bindings/testing/testing.gyp
# cobalt/audio/audio_test.gyp
# cobalt/audio/audio.gyp
# cobalt/fetch/fetch.gyp
# cobalt/cssom/cssom.gyp
# cobalt/cssom/cssom_test.gyp
# cobalt/samples/simple_example/simple_example.gyp
# cobalt/media_capture/media_capture_test.gyp
# cobalt/media_capture/media_capture.gyp
# cobalt/web_animations/web_animations.gyp
# cobalt/network_bridge/network_bridge.gyp
# cobalt/dom/dom_test.gyp
# cobalt/dom/dom_exception.gyp
# cobalt/dom/dom.gyp
# cobalt/dom/testing/dom_testing.gyp
# cobalt/account/account.gyp
# cobalt/xhr/xhr.gyp
# cobalt/loader/image/sandbox/sandbox.gyp
# cobalt/loader/origin.gyp

## --- COBALT ---###

set(cobalt_third_party_super_fast_hash_SOURCES
  # embedded src!
  #${COBALT_PORT_DIR}third_party/super_fast_hash/super_fast_hash.cc
)

## --- COBALT_CORE ---###

#set(COBALT_browser_bindings_gen_gyp_SOURCES
#)

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