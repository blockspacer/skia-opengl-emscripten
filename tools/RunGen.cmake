#
# portable build script based on "cmake -P"
#
# example:
# cmake -DBUILD_FILE_DIR=~/chromium/src -DTARGET=combined -DCOPY_TO_PARENT_DIR=~/skia-opengl-emscripten/src/chromium/gen/ -DCLEAN_BUILD=OFF -DCLEAN_GEN=OFF -DCLEAN_COPY=OFF -P tools/RunGen.cmake
#
# run that file with cmake -DVAR=VALUE -DFOO=BAR -P <script-file> <arg5> <arg6> ...

cmake_minimum_required(VERSION 3.5)

# TODO: make local, not global
# allows to run `execute_process` without printing to console
option(PRINT_TO_STDOUT "PRINT_TO_STDOUT" ON)
if(PRINT_TO_STDOUT)
  set(OUTPUT_VARS ) # undefined
else()
  set(OUTPUT_VARS OUTPUT_VARIABLE stdout)
endif(PRINT_TO_STDOUT)

# --- includes ---
# WHY CMAKE_CURRENT_LIST_DIR? see https://stackoverflow.com/a/12854575/10904212
set(CURRENT_SCRIPT_DIR ${CMAKE_CURRENT_LIST_DIR})
include(${CURRENT_SCRIPT_DIR}/coloredOut.cmake)
include(${CURRENT_SCRIPT_DIR}/commonBuildMacros.cmake)

# --- macro ---
macro(gen_ninja_build_step ARG_GEN_TARGETS ARG_BUILD_DIR ARG_WORKING_DIR)
  check_is_dir(${ARG_WORKING_DIR} "ninja_build_WORKING_DIR")

  colored_notify("running ${gn_COMMAND} gen ..." --yellow --bold)
  execute_process(
    COMMAND ${gn_COMMAND} "gen" "${GN_BUILD_RALATIVE_DIR}"
    WORKING_DIRECTORY ${ARG_WORKING_DIR}
    RESULT_VARIABLE retcode
    ERROR_VARIABLE stderr
    ${OUTPUT_VARS}
  )
  if(NOT "${retcode}" STREQUAL "0")
    message( FATAL_ERROR "Bad exit status ${retcode} ${stdout} ${stderr}")
  endif()

  colored_notify("running ${autoninja_COMMAND} ..." --yellow --bold)
  execute_process(
    COMMAND ${autoninja_COMMAND} "-C" "${ARG_BUILD_DIR}" ${ARG_GEN_TARGETS}
    WORKING_DIRECTORY ${ARG_WORKING_DIR}
    RESULT_VARIABLE retcode
    ERROR_VARIABLE stderr
    ${OUTPUT_VARS}
  )
  if(NOT "${retcode}" STREQUAL "0")
    message( FATAL_ERROR "Bad exit status ${retcode} ${stdout} ${stderr}")
  endif()
endmacro(gen_ninja_build_step)

macro(gen_copy_results_step ARG_CLEAN FROM_DIR TO_DIR ARG_WORKING_DIR)
  mkdir_with_rm_condition(${ARG_CLEAN} ${TO_DIR} ${ARG_WORKING_DIR})

  colored_notify("removing generated *buildflag*.h (create own) from ${FROM_DIR} ..." --yellow --bold)
  ## find chromium/gen/ -name "*buildflag*.h" -exec rm {} \;
  execute_process(
    COMMAND find ${FROM_DIR} -name *buildflag*.h -exec rm {} \;
    WORKING_DIRECTORY ${ARG_WORKING_DIR}
    RESULT_VARIABLE retcode
    ERROR_VARIABLE stderr
    ${OUTPUT_VARS}
  )
  if(NOT "${retcode}" STREQUAL "0")
    message( FATAL_ERROR "Bad exit status ${retcode} ${stdout} ${stderr}")
  endif()

  colored_notify("copying from ${FROM_DIR} to ${TO_DIR} ..." --yellow --bold)
  execute_process(
    COMMAND ${CMAKE_COMMAND} "-E"  "copy_directory" "${FROM_DIR}" "${TO_DIR}"
    WORKING_DIRECTORY ${ARG_WORKING_DIR}
    RESULT_VARIABLE retcode
    ERROR_VARIABLE stderr
    ${OUTPUT_VARS}
  )
  if(NOT "${retcode}" STREQUAL "0")
    message( FATAL_ERROR "Bad exit status ${retcode} ${stdout} ${stderr}")
  endif()
endmacro(gen_copy_results_step)

macro(update_vars_for_target ARG_TARGET)
  # folder FULL path, equals to project`s ./src/chromium/gen/gen_{TARGET_HERE}
  set(TARGET_COPY_TO_DIR "${COPY_TO_PARENT_DIR}/gen_${ARG_TARGET}")
  if (${TARGET_COPY_TO_DIR} STREQUAL "")
    colored_fatal("you must set TARGET_COPY_TO_DIR. current TARGET_COPY_TO_DIR=${TARGET_COPY_TO_DIR} ..." --red --bold)
  else()
    message(STATUS "TARGET_COPY_TO_DIR=${TARGET_COPY_TO_DIR} ...")
  endif()
endmacro(update_vars_for_target)

macro(gen_target_files ARG_TARGET ARG_GEN_TARGETS)
  colored_notify("working on target=${ARG_TARGET} ..." --yellow --bold)
  # check vars
  if(COPY_TO_PARENT_DIR MATCHES "${ARG_TARGET}")
    colored_fatal("COPY_TO_PARENT_DIR must not contain ${ARG_TARGET}, it must be dir parent to ${ARG_TARGET}. Example: ~/.../src/chromium/gen" --red --bold)
  endif()
  # set vars
  update_vars_for_target(${ARG_TARGET})
  # create out/Default
  mkdir_with_rm_condition(${CLEAN_BUILD} ${GN_BUILD_DIR} ${BUILD_FILE_DIR})
  # remove out/Default/gen, if exists
  if(NOT ${CLEAN_BUILD})
    conditional_remove(${CLEAN_GEN} ${GN_GEN_DIR} ${BUILD_FILE_DIR})
  endif(NOT ${CLEAN_BUILD})
  # run ninja build
  check_is_dir(${GN_BUILD_DIR} "GN_BUILD_DIR")
  gen_ninja_build_step("${ARG_GEN_TARGETS}" ${GN_BUILD_DIR} ${BUILD_FILE_DIR})
  # copy results
  gen_copy_results_step(${CLEAN_COPY} ${GN_GEN_DIR} ${TARGET_COPY_TO_DIR} ${BUILD_FILE_DIR})
endmacro(gen_target_files)

# --- vars ---
set(BUILD_FILE_DIR "" CACHE STRING "that FULL path must contain CHROMIUM sources & BUILD.gn")

# used to expand to full path '~' ($HOME), e.t.c.
get_filename_component(BUILD_FILE_DIR "${BUILD_FILE_DIR}"
  REALPATH BASE_DIR "/")

set(VALID_TARGETS
  blink_public
  mojo_public
  services_network_public
  all
  combined
)

set(TARGET "" CACHE STRING "VALID_TARGETS=${VALID_TARGETS}")

set(COPY_TO_PARENT_DIR "" CACHE STRING "folder FULL path, equals to project`s ./src/chromium/gen/")

# used to expand to full path '~' ($HOME), e.t.c.
get_filename_component(COPY_TO_PARENT_DIR "${COPY_TO_PARENT_DIR}"
  REALPATH BASE_DIR "/")

set(GN_BUILD_RALATIVE_DIR "out/Default/")

set(GN_BUILD_DIR "${BUILD_FILE_DIR}/${GN_BUILD_RALATIVE_DIR}")

set(GN_GEN_DIR "${GN_BUILD_DIR}gen")

option(CLEAN_BUILD "remove old '${GN_BUILD_RALATIVE_DIR}' build dir" OFF)

option(CLEAN_GEN "remove old '${GN_BUILD_RALATIVE_DIR}/gen' mojo dir" ON)

option(CLEAN_COPY "remove old '${COPY_TO_PARENT_DIR}/gen_|TARGET_HERE|' dir" ON)

if (NOT EXISTS "${BUILD_FILE_DIR}/BUILD.gn")
  colored_fatal("you must set existing BUILD_FILE_DIR containing 'BUILD.gn'. current BUILD_FILE_DIR=${BUILD_FILE_DIR} ..." --red --bold)
else()
  message(STATUS "BUILD_FILE_DIR=${BUILD_FILE_DIR} ...")
endif()

check_is_dir(${COPY_TO_PARENT_DIR} "COPY_TO_PARENT_DIR")

find_program_required(autoninja_COMMAND "autoninja" "autoninja not found in PATH, search for  https://chromium.googlesource.com/chromium/tools/depot_tools.git")

find_program_required(gn_COMMAND "gn" "gn not found in PATH, search for  https://chromium.googlesource.com/chromium/tools/depot_tools.git")

# see: gn ls out/Default | grep blink
list(APPEND blink_public_GEN_TARGETS
  #
  # blink public
  #
  third_party/blink/public:blink
  third_party/blink/public:blink_headers
  third_party/blink/public:buildflags
  third_party/blink/public/common:common
  third_party/blink/public/common:headers
  third_party/blink/public/mojom:embedded_frame_sink_mojo_bindings
  third_party/blink/public/mojom:mojom_broadcastchannel_bindings
  third_party/blink/public/mojom:mojom_core
  third_party/blink/public/mojom:mojom_mhtml_load_result
  third_party/blink/public/mojom:mojom_modules
  third_party/blink/public/mojom:mojom_platform
  third_party/blink/public/mojom:web_client_hints_types_mojo_bindings
  third_party/blink/public/mojom:web_feature_mojo_bindings
  #
  # blink bindings
  #
  third_party/blink/renderer/bindings/core:core_global_constructors_idls
  third_party/blink/renderer/bindings/core:core_global_objects
  third_party/blink/renderer/bindings/core:core_web_idl_collection
  third_party/blink/renderer/bindings/core:interfaces_info_individual_core
  third_party/blink/renderer/bindings/core/v8:bindings_core_impl
  third_party/blink/renderer/bindings/core/v8:bindings_core_impl_generated
  third_party/blink/renderer/bindings/core/v8:bindings_core_origin_trial_features
  third_party/blink/renderer/bindings/core/v8:bindings_core_v8_generated
  third_party/blink/renderer/bindings/core/v8:generate_bindings_core_v8_all_interfaces
  third_party/blink/renderer/bindings/core/v8:generate_bindings_core_v8_interfaces
  #third_party/blink/renderer/bindings/core/v8:testing
  #third_party/blink/renderer/bindings/core/v8:v8_serialized_script_value_fuzzer
  #third_party/blink/renderer/bindings/core/v8:v8_serialized_script_value_fuzzer.owners
  #third_party/blink/renderer/bindings/core/v8:v8_serialized_script_value_fuzzer_seed_corpus
  third_party/blink/renderer/bindings/modules:bindings_modules_generated
  third_party/blink/renderer/bindings/modules:event_modules
  third_party/blink/renderer/bindings/modules:event_modules_names
  third_party/blink/renderer/bindings/modules:event_target_modules_names
  third_party/blink/renderer/bindings/modules:generated
  third_party/blink/renderer/bindings/modules:interfaces_info
  third_party/blink/renderer/bindings/modules:interfaces_info_individual_modules
  third_party/blink/renderer/bindings/modules:modules_bindings_generated_event_interfaces
  third_party/blink/renderer/bindings/modules:modules_core_global_constructors_idls
  third_party/blink/renderer/bindings/modules:modules_global_constructors_idls
  third_party/blink/renderer/bindings/modules:modules_global_objects
  third_party/blink/renderer/bindings/modules:modules_web_idl_collection
  third_party/blink/renderer/bindings/modules/v8:bindings_modules_impl
  third_party/blink/renderer/bindings/modules/v8:bindings_modules_impl_generated
  third_party/blink/renderer/bindings/modules/v8:bindings_modules_origin_trial_features
  third_party/blink/renderer/bindings/modules/v8:bindings_modules_v8_generated
  third_party/blink/renderer/bindings/modules/v8:bindings_modules_v8_generated_init_partial
  third_party/blink/renderer/bindings/modules/v8:generate_bindings_modules_v8_interfaces
  third_party/blink/renderer/bindings/modules/v8:generate_bindings_modules_v8_partial_interfaces
  #third_party/blink/renderer/bindings/modules/v8:generate_bindings_modules_v8_partial_interfaces_for_testing
  third_party/blink/renderer/bindings/modules/v8:generate_mojo_bindings
  third_party/blink/renderer/bindings/modules/v8:generate_v8_context_snapshot_external_references
  third_party/blink/renderer/bindings/scripts:cached_jinja_templates
  third_party/blink/renderer/bindings/scripts:cached_lex_yacc_tables
  # blink controller
  #third_party/blink/renderer/controller:blink_perf_tests
  #third_party/blink/renderer/controller:blink_perf_tests_sources
  #third_party/blink/renderer/controller:blink_unittests
  #third_party/blink/renderer/controller:blink_unittests_data
  #third_party/blink/renderer/controller:blink_unittests_sources
  third_party/blink/renderer/controller:controller
  #third_party/blink/renderer/controller:webkit_unit_tests
  #
  # blink core
  #
  third_party/blink/renderer/core:all_generators
  #third_party/blink/renderer/core:content_security_policy_fuzzer
  #third_party/blink/renderer/core:content_security_policy_fuzzer.options
  #third_party/blink/renderer/core:content_security_policy_fuzzer.owners
  #third_party/blink/renderer/core:content_security_policy_fuzzer_dict_copy
  #third_party/blink/renderer/core:content_security_policy_fuzzer_seed_corpus
  third_party/blink/renderer/core:core
  third_party/blink/renderer/core:core_event_interfaces
  third_party/blink/renderer/core:core_generated
  #third_party/blink/renderer/core:css_parser_fast_paths_fuzzer
  #third_party/blink/renderer/core:css_parser_fast_paths_fuzzer.options
  #third_party/blink/renderer/core:css_parser_fast_paths_fuzzer.owners
  #third_party/blink/renderer/core:css_parser_fast_paths_fuzzer_dict_copy
  #third_party/blink/renderer/core:css_parser_proto_fuzzer
  #third_party/blink/renderer/core:css_parser_proto_fuzzer.options
  #third_party/blink/renderer/core:css_parser_proto_fuzzer.owners
  #third_party/blink/renderer/core:css_parser_proto_fuzzer_dict_copy
  third_party/blink/renderer/core:css_proto
  third_party/blink/renderer/core:css_proto_gen
  #third_party/blink/renderer/core:feature_policy_attr_fuzzer
  #third_party/blink/renderer/core:feature_policy_attr_fuzzer.options
  #third_party/blink/renderer/core:feature_policy_attr_fuzzer.owners
  #third_party/blink/renderer/core:feature_policy_attr_fuzzer_dict_copy
  #third_party/blink/renderer/core:feature_policy_attr_fuzzer_seed_corpus
  #third_party/blink/renderer/core:feature_policy_fuzzer
  #third_party/blink/renderer/core:feature_policy_fuzzer.options
  #third_party/blink/renderer/core:feature_policy_fuzzer.owners
  #third_party/blink/renderer/core:feature_policy_fuzzer_dict_copy
  #third_party/blink/renderer/core:feature_policy_fuzzer_seed_corpus
  #third_party/blink/renderer/core:feature_policy_value_fuzzer
  #third_party/blink/renderer/core:feature_policy_value_fuzzer.options
  #third_party/blink/renderer/core:feature_policy_value_fuzzer.owners
  #third_party/blink/renderer/core:feature_policy_value_fuzzer_dict_copy
  #third_party/blink/renderer/core:feature_policy_value_fuzzer_seed_corpus
  third_party/blink/renderer/core:generated
  third_party/blink/renderer/core:generated_settings_macros
  #third_party/blink/renderer/core:generated_testing_idls
  #third_party/blink/renderer/core:generated_testing_idls_internal_runtime_flags
  #third_party/blink/renderer/core:generated_testing_idls_settings
  #third_party/blink/renderer/core:html_preload_scanner_fuzzer
  #third_party/blink/renderer/core:html_preload_scanner_fuzzer.owners
  #third_party/blink/renderer/core:html_preload_scanner_fuzzer_seed_corpus
  third_party/blink/renderer/core:make_core_generated_atrule_names
  third_party/blink/renderer/core:make_core_generated_bison
  third_party/blink/renderer/core:make_core_generated_computed_style_base
  third_party/blink/renderer/core:make_core_generated_computed_style_initial_values
  third_party/blink/renderer/core:make_core_generated_css_longhand_property_classes
  third_party/blink/renderer/core:make_core_generated_css_primitive_value_unit_trie
  third_party/blink/renderer/core:make_core_generated_css_property_instances
  third_party/blink/renderer/core:make_core_generated_css_property_names
  third_party/blink/renderer/core:make_core_generated_css_shorthand_property_classes
  third_party/blink/renderer/core:make_core_generated_css_tokenizer_codepoints
  third_party/blink/renderer/core:make_core_generated_css_value_id_mappings
  third_party/blink/renderer/core:make_core_generated_css_value_keywords
  third_party/blink/renderer/core:make_core_generated_cssom_types
  third_party/blink/renderer/core:make_core_generated_event_factory
  third_party/blink/renderer/core:make_core_generated_event_names
  third_party/blink/renderer/core:make_core_generated_event_target_names
  third_party/blink/renderer/core:make_core_generated_event_type_names
  third_party/blink/renderer/core:make_core_generated_feature_policy_helper
  third_party/blink/renderer/core:make_core_generated_html_element_factory
  third_party/blink/renderer/core:make_core_generated_html_element_lookup_trie
  third_party/blink/renderer/core:make_core_generated_html_element_type_helpers
  third_party/blink/renderer/core:make_core_generated_html_entity_table
  third_party/blink/renderer/core:make_core_generated_html_tokenizer_names
  third_party/blink/renderer/core:make_core_generated_input_mode_names
  third_party/blink/renderer/core:make_core_generated_input_type_names
  third_party/blink/renderer/core:make_core_generated_math_ml_names
  third_party/blink/renderer/core:make_core_generated_media_feature_names
  third_party/blink/renderer/core:make_core_generated_media_features
  third_party/blink/renderer/core:make_core_generated_media_type_names
  third_party/blink/renderer/core:make_core_generated_origin_trials
  third_party/blink/renderer/core:make_core_generated_performance_entry_names
  third_party/blink/renderer/core:make_core_generated_style_property_shorthand
  third_party/blink/renderer/core:make_core_generated_svg_element_type_helpers
  third_party/blink/renderer/core:make_core_generated_svg_names
  third_party/blink/renderer/core:make_core_generated_web_origin_trials
  third_party/blink/renderer/core:make_core_generated_xlink_names
  third_party/blink/renderer/core:make_core_generated_xml_names
  third_party/blink/renderer/core:make_core_generated_xml_ns_names
  third_party/blink/renderer/core:make_minimized_css
  #third_party/blink/renderer/core:perf_tests
  third_party/blink/renderer/core:prerequisites
  #third_party/blink/renderer/core:stylesheet_contents_fuzzer
  #third_party/blink/renderer/core:stylesheet_contents_fuzzer.options
  #third_party/blink/renderer/core:stylesheet_contents_fuzzer.owners
  #third_party/blink/renderer/core:stylesheet_contents_fuzzer_dict_copy
  #third_party/blink/renderer/core:stylesheet_contents_fuzzer_seed_corpus
  #third_party/blink/renderer/core:testing
  #third_party/blink/renderer/core:text_resource_decoder_fuzzer
  #third_party/blink/renderer/core:text_resource_decoder_fuzzer.owners
  #third_party/blink/renderer/core:unit_test_support
  #third_party/blink/renderer/core:unit_tests
  third_party/blink/renderer/core/accessibility:accessibility
  #third_party/blink/renderer/core/accessibility:unit_tests
  third_party/blink/renderer/core/animation:animation
  #third_party/blink/renderer/core/animation:unit_tests
  third_party/blink/renderer/core/aom:aom
  third_party/blink/renderer/core/clipboard:clipboard
  #third_party/blink/renderer/core/clipboard:unit_tests
  third_party/blink/renderer/core/content_capture:content_capture
  third_party/blink/renderer/core/context_features:context_features
  third_party/blink/renderer/core/css:css
  #third_party/blink/renderer/core/css:unit_tests
  third_party/blink/renderer/core/display_lock:display_lock
  third_party/blink/renderer/core/dom:dom
  third_party/blink/renderer/core/editing:editing
  #third_party/blink/renderer/core/editing:unit_tests
  third_party/blink/renderer/core/events:events
  third_party/blink/renderer/core/execution_context:execution_context
  third_party/blink/renderer/core/exported:exported
  third_party/blink/renderer/core/feature_policy:feature_policy
  third_party/blink/renderer/core/fetch:fetch
  third_party/blink/renderer/core/fileapi:fileapi
  #third_party/blink/renderer/core/fileapi:unit_tests
  third_party/blink/renderer/core/frame:frame
  third_party/blink/renderer/core/fullscreen:fullscreen
  third_party/blink/renderer/core/geometry:geometry
  third_party/blink/renderer/core/html:html
  #third_party/blink/renderer/core/html/parser:blink_html_tokenizer_fuzzer
  #third_party/blink/renderer/core/html/parser:blink_html_tokenizer_fuzzer.owners
  third_party/blink/renderer/core/html/parser:parser
  third_party/blink/renderer/core/imagebitmap:imagebitmap
  third_party/blink/renderer/core/input:input
  third_party/blink/renderer/core/inspector:generated
  third_party/blink/renderer/core/inspector:inspector
  third_party/blink/renderer/core/inspector:protocol_compatibility_check
  third_party/blink/renderer/core/inspector:protocol_sources
  third_party/blink/renderer/core/inspector:protocol_version
  third_party/blink/renderer/core/intersection_observer:intersection_observer
  third_party/blink/renderer/core/invisible_dom:invisible_dom
  third_party/blink/renderer/core/layout:layout
  third_party/blink/renderer/core/layout/svg:svg_layout
  third_party/blink/renderer/core/loader:loader
  third_party/blink/renderer/core/messaging:messaging
  third_party/blink/renderer/core/mojo:mojo
  #third_party/blink/renderer/core/mojo:test_bindings
  #third_party/blink/renderer/core/mojo:test_bindings__check_deps_are_all_mojom
  #third_party/blink/renderer/core/mojo:test_bindings__generate_message_ids
  #third_party/blink/renderer/core/mojo:test_bindings__generator
  #third_party/blink/renderer/core/mojo:test_bindings__is_mojom
  #third_party/blink/renderer/core/mojo:test_bindings__parsed
  #third_party/blink/renderer/core/mojo:test_bindings__parser
  #third_party/blink/renderer/core/mojo:test_bindings__type_mappings
  #third_party/blink/renderer/core/mojo:test_bindings__verify_deps
  #third_party/blink/renderer/core/mojo:test_bindings_blink
  #third_party/blink/renderer/core/mojo:test_bindings_blink__generator
  #third_party/blink/renderer/core/mojo:test_bindings_blink__type_mappings
  #third_party/blink/renderer/core/mojo:test_bindings_blink_headers
  #third_party/blink/renderer/core/mojo:test_bindings_headers
  #third_party/blink/renderer/core/mojo:test_bindings_js
  #third_party/blink/renderer/core/mojo:test_bindings_js__generator
  #third_party/blink/renderer/core/mojo:test_bindings_js_data_deps
  #third_party/blink/renderer/core/mojo:test_bindings_js_library
  #third_party/blink/renderer/core/mojo:test_bindings_js_library_for_compile
  #third_party/blink/renderer/core/mojo:test_bindings_shared
  #third_party/blink/renderer/core/mojo:test_bindings_shared__generator
  #third_party/blink/renderer/core/mojo:test_bindings_shared_cpp_sources
  #third_party/blink/renderer/core/mojo:unit_tests
  third_party/blink/renderer/core/offscreencanvas:offscreencanvas
  third_party/blink/renderer/core/origin_trials:origin_trials
  third_party/blink/renderer/core/page:page
  third_party/blink/renderer/core/paint:paint
  third_party/blink/renderer/core/probe:generated
  third_party/blink/renderer/core/probe:instrumentation_probes
  third_party/blink/renderer/core/probe:probe
  third_party/blink/renderer/core/resize_observer:resize_observer
  third_party/blink/renderer/core/script:script
  third_party/blink/renderer/core/scroll:scroll
  third_party/blink/renderer/core/streams:streams
  third_party/blink/renderer/core/style:rendering
  third_party/blink/renderer/core/style:svg_style
  third_party/blink/renderer/core/svg:svg
  third_party/blink/renderer/core/timing:timing
  third_party/blink/renderer/core/trustedtypes:trustedtypes
  third_party/blink/renderer/core/typed_arrays:typed_arrays
  third_party/blink/renderer/core/url:url
  third_party/blink/renderer/core/workers:workers
  third_party/blink/renderer/core/xml:xml
  third_party/blink/renderer/core/xmlhttprequest:xmlhttprequest
  #
  third_party/blink/renderer/core/html/parser:parser
  third_party/blink/renderer/core/html:html
  third_party/blink/public/mojom:mojom_mhtml_load_result
  #
  # blink modules
  #
  third_party/blink/renderer/devtools:supported_css_properties
  #third_party/blink/renderer/modules:accessibility_unittests_data
  third_party/blink/renderer/modules:make_modules_generated
  third_party/blink/renderer/modules:module_names
  third_party/blink/renderer/modules:modules
  #third_party/blink/renderer/modules:modules_testing
  #third_party/blink/renderer/modules:unit_tests
  third_party/blink/renderer/modules/accessibility:accessibility
  third_party/blink/renderer/modules/animationworklet:animationworklet
  third_party/blink/renderer/modules/app_banner:app_banner
  third_party/blink/renderer/modules/audio_output_devices:audio_output_devices
  third_party/blink/renderer/modules/background_fetch:background_fetch
  third_party/blink/renderer/modules/background_sync:background_sync
  third_party/blink/renderer/modules/badging:badging
  third_party/blink/renderer/modules/battery:battery
  third_party/blink/renderer/modules/beacon:beacon
  third_party/blink/renderer/modules/bluetooth:bluetooth
  third_party/blink/renderer/modules/broadcastchannel:broadcastchannel
  third_party/blink/renderer/modules/cache_storage:cache_storage
  third_party/blink/renderer/modules/canvas:canvas
  third_party/blink/renderer/modules/clipboard:clipboard
  third_party/blink/renderer/modules/contacts_picker:contacts_picker
  third_party/blink/renderer/modules/cookie_store:cookie_store
  third_party/blink/renderer/modules/credentialmanager:credentialmanager
  third_party/blink/renderer/modules/crypto:crypto
  third_party/blink/renderer/modules/csspaint:csspaint
  third_party/blink/renderer/modules/device_orientation:device_orientation
  third_party/blink/renderer/modules/document_metadata:document_metadata
  third_party/blink/renderer/modules/donottrack:donottrack
  third_party/blink/renderer/modules/encoding:encoding
  third_party/blink/renderer/modules/encryptedmedia:encryptedmedia
  third_party/blink/renderer/modules/eventsource:eventsource
  third_party/blink/renderer/modules/exported:exported
  #third_party/blink/renderer/modules/exported:test_support
  third_party/blink/renderer/modules/filesystem:filesystem
  third_party/blink/renderer/modules/gamepad:gamepad
  #third_party/blink/renderer/modules/gamepad:unit_tests
  third_party/blink/renderer/modules/geolocation:geolocation
  third_party/blink/renderer/modules/hid:hid
  third_party/blink/renderer/modules/idle:idle
  third_party/blink/renderer/modules/imagecapture:imagecapture
  third_party/blink/renderer/modules/indexeddb:indexeddb
  third_party/blink/renderer/modules/installation:installation
  third_party/blink/renderer/modules/installedapp:installedapp
  third_party/blink/renderer/modules/keyboard:keyboard
  third_party/blink/renderer/modules/locks:locks
  third_party/blink/renderer/modules/manifest:manifest
  third_party/blink/renderer/modules/media_capabilities:media_capabilities
  third_party/blink/renderer/modules/media_controls:media_controls
  third_party/blink/renderer/modules/media_controls:media_controls_resources
  third_party/blink/renderer/modules/media_controls:media_controls_resources_grit
  third_party/blink/renderer/modules/mediacapturefromelement:mediacapturefromelement
  third_party/blink/renderer/modules/mediarecorder:mediarecorder
  third_party/blink/renderer/modules/mediasession:mediasession
  third_party/blink/renderer/modules/mediasource:mediasource
  third_party/blink/renderer/modules/mediastream:mediastream
  third_party/blink/renderer/modules/native_file_system:native_file_system
  third_party/blink/renderer/modules/navigatorcontentutils:navigatorcontentutils
  third_party/blink/renderer/modules/netinfo:netinfo
  third_party/blink/renderer/modules/nfc:nfc
  third_party/blink/renderer/modules/notifications:notifications
  third_party/blink/renderer/modules/payments:payments
  third_party/blink/renderer/modules/peerconnection:peerconnection
  third_party/blink/renderer/modules/permissions:permissions
  third_party/blink/renderer/modules/picture_in_picture:picture_in_picture
  third_party/blink/renderer/modules/plugins:plugins
  third_party/blink/renderer/modules/presentation:presentation
  third_party/blink/renderer/modules/push_messaging:push_messaging
  third_party/blink/renderer/modules/quota:quota
  third_party/blink/renderer/modules/remoteplayback:remoteplayback
  third_party/blink/renderer/modules/screen_orientation:screen_orientation
  third_party/blink/renderer/modules/sensor:sensor
  third_party/blink/renderer/modules/serial:serial
  third_party/blink/renderer/modules/service_worker:service_worker
  third_party/blink/renderer/modules/shapedetection:shapedetection
  third_party/blink/renderer/modules/sms:sms
  third_party/blink/renderer/modules/speech:speech
  third_party/blink/renderer/modules/srcobject:srcobject
  third_party/blink/renderer/modules/storage:storage
  #third_party/blink/renderer/modules/storage:unit_tests
  third_party/blink/renderer/modules/time_zone_monitor:time_zone_monitor
  third_party/blink/renderer/modules/vibration:vibration
  third_party/blink/renderer/modules/vr:vr
  third_party/blink/renderer/modules/wake_lock:wake_lock
  third_party/blink/renderer/modules/webaudio:webaudio
  third_party/blink/renderer/modules/webdatabase:webdatabase
  third_party/blink/renderer/modules/webgl:webgl
  third_party/blink/renderer/modules/webgpu:webgpu
  third_party/blink/renderer/modules/webmidi:webmidi
  third_party/blink/renderer/modules/webshare:webshare
  third_party/blink/renderer/modules/websockets:websockets
  third_party/blink/renderer/modules/webusb:webusb
  third_party/blink/renderer/modules/worklet:worklet
  third_party/blink/renderer/modules/xr:xr
  # blink platform
  third_party/blink/renderer/platform:bindings_buildflags
  #third_party/blink/renderer/platform:blink_fuzzer_test_support
  #third_party/blink/renderer/platform:blink_fuzzer_unittests
  #third_party/blink/renderer/platform:blink_harfbuzz_shaper_fuzzer
  #third_party/blink/renderer/platform:blink_harfbuzz_shaper_fuzzer.options
  #third_party/blink/renderer/platform:blink_harfbuzz_shaper_fuzzer.owners
  #third_party/blink/renderer/platform:blink_http_parsers_fuzzer
  #third_party/blink/renderer/platform:blink_http_parsers_fuzzer.options
  #third_party/blink/renderer/platform:blink_http_parsers_fuzzer.owners
  #third_party/blink/renderer/platform:blink_http_parsers_fuzzer_dict_copy
  #third_party/blink/renderer/platform:blink_json_parser_fuzzer
  #third_party/blink/renderer/platform:blink_json_parser_fuzzer.options
  #third_party/blink/renderer/platform:blink_json_parser_fuzzer.owners
  #third_party/blink/renderer/platform:blink_json_parser_fuzzer_dict_copy
  #third_party/blink/renderer/platform:blink_platform_perftests
  third_party/blink/renderer/platform:blink_platform_public_deps
  #third_party/blink/renderer/platform:blink_platform_unittests
  #third_party/blink/renderer/platform:blink_platform_unittests_data
  #third_party/blink/renderer/platform:blink_platform_unittests_sources
  #third_party/blink/renderer/platform:blink_png_decoder_fuzzer
  #third_party/blink/renderer/platform:blink_png_decoder_fuzzer.options
  #third_party/blink/renderer/platform:blink_png_decoder_fuzzer.owners
  #third_party/blink/renderer/platform:blink_png_decoder_fuzzer_dict_copy
  #third_party/blink/renderer/platform:blink_png_decoder_fuzzer_seed_corpus
  #third_party/blink/renderer/platform:blink_text_codec_UTF_8_fuzzer
  #third_party/blink/renderer/platform:blink_text_codec_UTF_8_fuzzer.owners
  #third_party/blink/renderer/platform:blink_text_codec_UTF_8_fuzzer_seed_corpus
  #third_party/blink/renderer/platform:blink_text_codec_WINDOWS_1252_fuzzer
  #third_party/blink/renderer/platform:blink_text_codec_WINDOWS_1252_fuzzer.owners
  #third_party/blink/renderer/platform:blink_text_codec_WINDOWS_1252_fuzzer_seed_corpus
  third_party/blink/renderer/platform:blink_x86_avx
  third_party/blink/renderer/platform:character_data
  third_party/blink/renderer/platform:character_data_generator
  third_party/blink/renderer/platform:color_data
  third_party/blink/renderer/platform:font_family_names
  third_party/blink/renderer/platform:image_decode_bench
  third_party/blink/renderer/platform:instrumentation_probes
  third_party/blink/renderer/platform:make_platform_generated
  #third_party/blink/renderer/platform:mhtml_parser_fuzzer
  #third_party/blink/renderer/platform:mhtml_parser_fuzzer.options
  #third_party/blink/renderer/platform:mhtml_parser_fuzzer.owners
  #third_party/blink/renderer/platform:mhtml_parser_fuzzer_dict_copy
  #third_party/blink/renderer/platform:mhtml_parser_fuzzer_seed_corpus
  third_party/blink/renderer/platform:platform
  third_party/blink/renderer/platform:platform_export
  third_party/blink/renderer/platform:runtime_enabled_features
  #third_party/blink/renderer/platform:test_support
  #third_party/blink/renderer/platform:unit_tests
  #third_party/blink/renderer/platform:web_icon_sizes_fuzzer
  #third_party/blink/renderer/platform:web_icon_sizes_fuzzer.options
  #third_party/blink/renderer/platform:web_icon_sizes_fuzzer.owners
  #third_party/blink/renderer/platform:web_icon_sizes_fuzzer_dict_copy
  third_party/blink/renderer/platform/blob:blob
  third_party/blink/renderer/platform/blob:generator
  #third_party/blink/renderer/platform/blob:test_support
  #third_party/blink/renderer/platform/blob:unit_tests
  third_party/blink/renderer/platform/heap:blink_heap_buildflags
  #third_party/blink/renderer/platform/heap:blink_heap_unittests
  #third_party/blink/renderer/platform/heap:blink_heap_unittests_sources
  third_party/blink/renderer/platform/heap:heap
  third_party/blink/renderer/platform/heap/asm:asm
  third_party/blink/renderer/platform/heap/asm:asm_action
  third_party/blink/renderer/platform/instrumentation:instrumentation
  #third_party/blink/renderer/platform/instrumentation:unit_tests
  third_party/blink/renderer/platform/loader:loader
  third_party/blink/renderer/platform/loader:make_platform_loader_generated_fetch_initiator_type_names
  #third_party/blink/renderer/platform/loader:test_support
  #third_party/blink/renderer/platform/loader:unit_tests
  third_party/blink/renderer/platform/mojo:geometry_struct_traits
  third_party/blink/renderer/platform/network:http_names
  third_party/blink/renderer/platform/network:make_generated
  third_party/blink/renderer/platform/network:network
  #third_party/blink/renderer/platform/network:test_support
  #third_party/blink/renderer/platform/network:unit_tests
  #third_party/blink/renderer/platform/scheduler:perf_tests
  third_party/blink/renderer/platform/scheduler:scheduler
  #third_party/blink/renderer/platform/scheduler:scheduler_fuzzer_tests
  #third_party/blink/renderer/platform/scheduler:sequence_manager_fuzzer
  #third_party/blink/renderer/platform/scheduler:sequence_manager_fuzzer.owners
  #third_party/blink/renderer/platform/scheduler:sequence_manager_test_description_proto
  #third_party/blink/renderer/platform/scheduler:sequence_manager_test_description_proto_gen
  #third_party/blink/renderer/platform/scheduler:test_support
  #third_party/blink/renderer/platform/scheduler:unit_tests
  third_party/blink/renderer/platform/wtf:wtf
  #third_party/blink/renderer/platform/wtf:wtf_unittests
  #third_party/blink/renderer/platform/wtf:wtf_unittests_sources
)

# see: gn ls out/Default | grep mojo
list(APPEND mojo_public_GEN_TARGETS
  mojo/public/interfaces/bindings
  mojo/public/cpp/base
  mojo/public/cpp/bindings
  mojo/public/cpp/platform
  mojo/public/cpp/system
  mojo/public/mojom/base
  mojo/public:sdk
  mojo/public:public
)

list(APPEND services_network_public_GEN_TARGETS
  # gn ls out/Default | grep network
  services/network/public/cpp
  services/network/public/mojom
  services/network/public/mojom:websocket_mojom
  services/network/public/mojom:mutable_network_traffic_annotation_interface
  services/network/public/mojom:mojom_shared
  services/network/public/mojom:mojom_ip_address
  services/network/public/mojom:mojom_headers
  services/network/public/mojom:mojom_blink
  services/network/public/mojom:data_pipe_interfaces
  services/network/public/mojom
  services/network/public/mojom:websocket_mojom
  services/network/public/mojom:mutable_network_traffic_annotation_interface
  services/network/public/mojom:mojom_shared
  services/network/public/mojom:mojom_ip_address
  services/network/public/mojom:mojom_headers
  services/network/public/mojom:mojom_blink
  services/network/public/mojom:data_pipe_interfaces
  # gn ls out/Default | grep resource_coordinator
  services/resource_coordinator:lib
  #services/resource_coordinator:tests
  services/resource_coordinator/public/cpp:manifest
  services/resource_coordinator/public/cpp:resource_coordinator_cpp
  services/resource_coordinator/public/cpp:resource_coordinator_cpp_features
  services/resource_coordinator/public/cpp/memory_instrumentation:memory_instrumentation
  services/resource_coordinator/public/mojom:mojom
  services/resource_coordinator/public/mojom:mojom_blink
  services/resource_coordinator/public/mojom:mojom_blink_headers
  services/resource_coordinator/public/mojom:mojom_headers
  services/resource_coordinator/public/mojom:mojom_js
  services/resource_coordinator/public/mojom:mojom_shared
  # gn ls out/Default | grep service_manager
  #services/service_manager:all
  services/service_manager:service_manager
  services/service_manager/embedder:embedder
  services/service_manager/public/cpp:cpp
  #services/service_manager/public/cpp:unittests
  services/service_manager/public/cpp/service_executable:main
  services/service_manager/public/cpp/service_executable:support
  services/service_manager/public/cpp/service_executable:switches
  #services/service_manager/public/cpp/test:test_support
  services/service_manager/public/mojom:constants
  services/service_manager/public/mojom:mojom
  services/service_manager/public/mojom:mojom_blink
  services/service_manager/public/mojom:mojom_blink_headers
  services/service_manager/public/mojom:mojom_headers
  #services/service_manager/public/mojom:mojom_js
  #services/service_manager/public/mojom:mojom_js_data_deps
  #services/service_manager/public/mojom:mojom_js_library
  #services/service_manager/public/mojom:mojom_js_library_for_compile
  services/service_manager/public/mojom:mojom_shared
  services/service_manager/sandbox:chromecast_sandbox_whitelist_buildflags
  services/service_manager/sandbox:sandbox
  services/service_manager/sandbox:sanitizer_buildflags
  #services/service_manager/tests:background_service_manager_test_service
  #services/service_manager/tests:interfaces
  services/service_manager/zygote:zygote
  services/service_manager/zygote:zygote_buildflags
  services/service_manager/zygote:zygote_util
)

# --- build ---
# TOLOWER for ignore-case checks
STRING(TOLOWER "${TARGET}" TARGET_LOWER)
if (TARGET_LOWER MATCHES "all")
  gen_target_files("blink_public" "${blink_public_GEN_TARGETS}")
  gen_target_files("mojo_public" "${mojo_public_GEN_TARGETS}")
  gen_target_files("services_network_public" "${services_network_public_GEN_TARGETS}")
elseif (TARGET_LOWER MATCHES "combined")
  gen_target_files("combined" "${blink_public_GEN_TARGETS};${mojo_public_GEN_TARGETS};${services_network_public_GEN_TARGETS}")
elseif (TARGET_LOWER MATCHES "blink_public")
  gen_target_files("${TARGET_LOWER}" "${blink_public_GEN_TARGETS}")
elseif (TARGET_LOWER MATCHES "mojo_public")
  gen_target_files("${TARGET_LOWER}" "${mojo_public_GEN_TARGETS}")
elseif (TARGET_LOWER MATCHES "services_network_public")
  gen_target_files("${TARGET_LOWER}" "${services_network_public_GEN_TARGETS}")
else()
  colored_fatal("invalid TARGET ${TARGET}" --red --bold)
endif()
