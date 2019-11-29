cmake_minimum_required(VERSION 2.8)

#'dependencies': [
#  '<(DEPTH)/base/base.gyp:base',
#  '<(DEPTH)/base/base.gyp:base_i18n',
#  '<(DEPTH)/third_party/icu/icu.gyp:icuuc',
#  '<(DEPTH)/third_party/libxml/libxml.gyp:libxml',
#],
#'include_dirs': [
#  '<(DEPTH)/third_party/libxml/src/include',
#],
# https://github.com/blockspacer/cobalt-clone-28052019/blob/master/src/cobalt/base/base.gyp
list(APPEND COBALT_base_SOURCES
  ##${COBALT_CORE_DIR}/base/accessibility_changed_event.h
  #${COBALT_CORE_DIR}/base/address_sanitizer.h
  ${COBALT_PORT_DIR}/cobalt/base/camera_transform.h
  ${COBALT_PORT_DIR}/cobalt/base/circular_buffer_shell.cc
  ${COBALT_PORT_DIR}/cobalt/base/circular_buffer_shell.h
  ${COBALT_PORT_DIR}/cobalt/base/clock.h
  ${COBALT_PORT_DIR}/cobalt/base/cobalt_paths.h
  ${COBALT_PORT_DIR}/cobalt/base/compiler.h
  ${COBALT_PORT_DIR}/cobalt/base/c_val.cc
  ${COBALT_PORT_DIR}/cobalt/base/c_val.h
  ${COBALT_PORT_DIR}/cobalt/base/c_val_collection_entry_stats.h
  ${COBALT_PORT_DIR}/cobalt/base/c_val_collection_timer_stats.h
  ${COBALT_PORT_DIR}/cobalt/base/c_val_time_interval_entry_stats.h
  ${COBALT_PORT_DIR}/cobalt/base/c_val_time_interval_timer_stats.h
  ${COBALT_PORT_DIR}/cobalt/base/deep_link_event.h
  ##${COBALT_CORE_DIR}/base/do_main.h
  ##${COBALT_CORE_DIR}/base/do_main_starboard.h
  ${COBALT_PORT_DIR}/cobalt/base/event.h
  ${COBALT_PORT_DIR}/cobalt/base/event_dispatcher.cc
  ${COBALT_PORT_DIR}/cobalt/base/event_dispatcher.h
  #${COBALT_PORT_DIR}/cobalt/base/token.cc
  #${COBALT_PORT_DIR}/cobalt/base/token.h
  #${COBALT_PORT_DIR}/cobalt/base/base_token.cc
  #${COBALT_PORT_DIR}/cobalt/base/base_token.h
  ${COBALT_PORT_DIR}/cobalt/base/get_application_key.cc
  ${COBALT_PORT_DIR}/cobalt/base/get_application_key.h
  ${COBALT_PORT_DIR}/cobalt/base/init_cobalt.cc
  ${COBALT_PORT_DIR}/cobalt/base/init_cobalt.h
  ${COBALT_PORT_DIR}/cobalt/base/language.cc
  ${COBALT_PORT_DIR}/cobalt/base/language.h
  ${COBALT_PORT_DIR}/cobalt/base/localized_strings.cc
  ${COBALT_PORT_DIR}/cobalt/base/localized_strings.h
  ${COBALT_PORT_DIR}/cobalt/base/log_message_handler.cc
  ${COBALT_PORT_DIR}/cobalt/base/log_message_handler.h
  ##${COBALT_CORE_DIR}/base/math.h
  ${COBALT_PORT_DIR}/cobalt/base/message_queue.h
  ${COBALT_PORT_DIR}/cobalt/base/on_screen_keyboard_hidden_event.h
  ${COBALT_PORT_DIR}/cobalt/base/on_screen_keyboard_shown_event.h
  ${COBALT_PORT_DIR}/cobalt/base/path_provider.cc
  ${COBALT_PORT_DIR}/cobalt/base/path_provider.h
  ${COBALT_PORT_DIR}/cobalt/base/poller.h
  ${COBALT_PORT_DIR}/cobalt/base/polymorphic_downcast.h
  ${COBALT_PORT_DIR}/cobalt/base/polymorphic_equatable.h
  ${COBALT_PORT_DIR}/cobalt/base/ref_counted_lock.h
  ${COBALT_PORT_DIR}/cobalt/base/source_location.h
  ${COBALT_PORT_DIR}/cobalt/base/startup_timer.cc
  ${COBALT_PORT_DIR}/cobalt/base/startup_timer.h
  ${COBALT_PORT_DIR}/cobalt/base/stop_watch.cc
  ${COBALT_PORT_DIR}/cobalt/base/stop_watch.h
  #
  ${COBALT_PORT_DIR}/cobalt/base/token.cc
  ${COBALT_PORT_DIR}/cobalt/base/token.h
  #${COBALT_PORT_DIR}/cobalt/base/cobalt_token.cc
  #${COBALT_PORT_DIR}/cobalt/base/cobalt_token.h
  #
  ${COBALT_PORT_DIR}/cobalt/base/tokens.cc
  ${COBALT_PORT_DIR}/cobalt/base/tokens.h
  ${COBALT_PORT_DIR}/cobalt/base/type_id.h
  ${COBALT_PORT_DIR}/cobalt/base/window_size_changed_event.h
  ${COBALT_PORT_DIR}/cobalt/base/unicode/character.cc
  ${COBALT_PORT_DIR}/cobalt/base/unicode/character.h
  ${COBALT_PORT_DIR}/cobalt/base/unicode/character_values.h
  ${COBALT_PORT_DIR}/cobalt/base/unused.h
  ${COBALT_PORT_DIR}/cobalt/base/user_log.cc
  ${COBALT_PORT_DIR}/cobalt/base/user_log.h
  ${COBALT_PORT_DIR}/cobalt/base/version_compatibility.cc
  ${COBALT_PORT_DIR}/cobalt/base/version_compatibility.h
)

if(NOT DEFINED CUSTOM_ICU_LIB)
  message(FATAL_ERROR "CUSTOM_ICU_LIB must be defined")
endif(NOT DEFINED CUSTOM_ICU_LIB)

if(NOT DEFINED libxml_LIB)
  message(FATAL_ERROR "libxml_LIB must be defined")
endif(NOT DEFINED libxml_LIB)

add_library(cobalt_base STATIC
  ${COBALT_base_SOURCES}
)

if(TARGET_LINUX)
  list(APPEND EXTRA_COBALT_BASE_LIBS
    ${xdg_mime_LIB}
    ${xdg_user_dirs_LIB}
  )
elseif(TARGET_WINDOWS OR TARGET_EMSCRIPTEN)
  # TODO
else()
  message(FATAL_ERROR "platform not supported")
endif()

target_link_libraries(cobalt_base PRIVATE
  ## starboard_platform
  #starboard_core
  ## starboard_eztime
  ## starboard_common
  ${modp_b64_LIB}
  ${libxml_LIB}
  ${CUSTOM_ICU_LIB}
  #ced
  # NOTE: force glm from conan, otherwise we can break
  # some isolated builds (emscripten) with -system /usr/include
  CONAN_PKG::cobalt_glm
  ${EXTRA_COBALT_BASE_LIBS}
)

if(NOT DEFINED build_util_LIB)
  message(FATAL_ERROR "NOT DEFINED: build_util_LIB")
endif(NOT DEFINED build_util_LIB)

target_link_libraries(cobalt_base PUBLIC
  ${build_util_LIB}
)

if(NOT DEFINED cobalt_starboard_LIB)
  message(FATAL_ERROR "NOT DEFINED: cobalt_starboard_LIB")
endif(NOT DEFINED cobalt_starboard_LIB)

if(NOT DEFINED cobalt_starboard_headers_only_LIB)
  message(FATAL_ERROR "NOT DEFINED: cobalt_starboard_headers_only_LIB")
endif(NOT DEFINED cobalt_starboard_headers_only_LIB)

target_link_libraries(cobalt_base PUBLIC
  ${cobalt_starboard_LIB} # TODO
  ${cobalt_starboard_headers_only_LIB}
)

if(NOT DEFINED base_LIB)
  message(FATAL_ERROR "NOT DEFINED: base_LIB")
endif(NOT DEFINED base_LIB)

target_link_libraries(cobalt_base PUBLIC
  ${base_LIB}
)

set_property(TARGET cobalt_base PROPERTY CXX_STANDARD 17)

target_include_directories(cobalt_base PRIVATE
  #${UI_PARENT_DIR}
  ${COBALT_CORE_DIR}
  ${COBALT_CORE_PARENT_DIR}
  ${COBALT_COMMON_INCLUDES}
  ${CHROMIUM_DIR} # to third_party/skia/include/core/SkWriteBuffer.h
)

target_compile_definitions(cobalt_base PRIVATE
  # starboard/linux/shared/BUILD.gn
  #STARBOARD_IMPLEMENTATION=1
  #
  BASE_IMPLEMENTATION=1
  BASE_I18N_IMPLEMENTATION=1
  #
  #COBALT_ENABLE_VERSION_COMPATIBILITY_VALIDATIONS=1
  #
  ${COBALT_COMMON_DEFINES}
  COBALT_IMPLEMENTATION=1
)
