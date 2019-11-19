cmake_minimum_required(VERSION 2.8)


# Interfaces for interacting with a JavaScript engine and exposing objects
# to bindings to JavaScript.
# 'dependencies': [
#   '<(DEPTH)/cobalt/base/base.gyp:base',
#   '<(DEPTH)/nb/nb.gyp:nb',
# ]
# {
#   'target_name': 'standalone_javascript_runner',
#   'type': 'static_library',
#   'sources': [
#     'standalone_javascript_runner.cc
#     'standalone_javascript_runner.h
#   ],
# },
list(APPEND cobalt_script_SOURCES
  ${COBALT_CORE_DIR}script/array_buffer.h
  ${COBALT_CORE_DIR}script/array_buffer_view.h
  ${COBALT_CORE_DIR}script/call_frame.h
  ${COBALT_CORE_DIR}script/callback_function.h
  ${COBALT_CORE_DIR}script/callback_interface_traits.h
  ${COBALT_CORE_DIR}script/data_view.h
  ${COBALT_CORE_DIR}script/environment_settings.h
  ${COBALT_CORE_DIR}script/error_report.h
  ${COBALT_CORE_DIR}script/exception_message.cc
  ${COBALT_CORE_DIR}script/exception_message.h
  ${COBALT_CORE_DIR}script/execution_state.cc
  ${COBALT_CORE_DIR}script/execution_state.h
  ${COBALT_CORE_DIR}script/fake_global_environment.h
  ${COBALT_CORE_DIR}script/fake_script_runner.h
  ${COBALT_CORE_DIR}script/global_environment.h
  ##${COBALT_CORE_DIR}script/global_object_proxy.h
  ${COBALT_CORE_DIR}script/javascript_engine.h
  ${COBALT_CORE_DIR}script/logging_exception_state.h
  ${COBALT_CORE_DIR}script/promise.h
  ${COBALT_CORE_DIR}script/property_enumerator.h
  ${COBALT_CORE_DIR}script/scope.h
  ## TODO ##
  ${COBALT_CORE_DIR}script/script_debugger.h
  ${COBALT_CORE_DIR}script/script_exception.h
  ## TODO ##
  ${COBALT_CORE_DIR}script/script_runner.cc
  ${COBALT_CORE_DIR}script/script_runner.h
  ${COBALT_CORE_DIR}script/script_value.h
  ${COBALT_CORE_DIR}script/script_value_factory.h
  ${COBALT_CORE_DIR}script/script_value_factory_instantiations.h
  ${COBALT_CORE_DIR}script/sequence.h
  ${COBALT_CORE_DIR}script/source_code.h
  ${COBALT_CORE_DIR}script/source_provider.h
  ${COBALT_CORE_DIR}script/stack_frame.cc
  ${COBALT_CORE_DIR}script/stack_frame.h
  ${COBALT_CORE_DIR}script/tracer.h
  ${COBALT_CORE_DIR}script/typed_arrays.h
  ${COBALT_CORE_DIR}script/union_type.h
  ${COBALT_CORE_DIR}script/union_type_internal.h
  ${COBALT_CORE_DIR}script/util/stack_trace_helpers.h
  ${COBALT_CORE_DIR}script/value_handle.h
  ${COBALT_CORE_DIR}script/wrappable.h
)

add_library(cobalt_script STATIC
  ${cobalt_script_SOURCES}
)

target_link_libraries(cobalt_script PRIVATE
  cobalt_base
  cobalt_nanobase
  base # TODO
  #${COBALT_V8_STUB_LIB}
  #modp_b64
  #GFX_GEOMETRY
)

set_property(TARGET cobalt_script PROPERTY CXX_STANDARD 17)

target_include_directories(cobalt_script PRIVATE
  #${UI_PARENT_DIR}
  ${COBALT_CORE_DIR}
  ${COBALT_CORE_PARENT_DIR}
  ${COBALT_COMMON_INCLUDES}
  ${CHROMIUM_DIR} # to third_party/skia/include/core/SkWriteBuffer.h
)

target_compile_definitions(cobalt_script PRIVATE
  # starboard/linux/shared/BUILD.gn
  #STARBOARD_IMPLEMENTATION=1
  #
  #BASE_IMPLEMENTATION=1
  #BASE_I18N_IMPLEMENTATION=1
  #
  #COBALT_ENABLE_VERSION_COMPATIBILITY_VALIDATIONS=1
  #
  ${COBALT_COMMON_DEFINES}
)
