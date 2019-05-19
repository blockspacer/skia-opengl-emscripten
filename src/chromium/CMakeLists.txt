cmake_minimum_required(VERSION 2.8)
project(WTF)
set(WTF_LIBRARY_NAME wtf)

list(APPEND CMAKE_MODULE_PATH ${CMAKE_CURRENT_SOURCE_DIR}/cmake)

set(WTF_DIR ${CMAKE_CURRENT_SOURCE_DIR}/third_party/blink/renderer/platform/wtf/)
set(BASE_DIR ${CMAKE_CURRENT_SOURCE_DIR}/base/)
set(GFX_GEOMETRY_DIR ${CMAKE_CURRENT_SOURCE_DIR}/ui/gfx/geometry/)

set(3RDPARTY_DIR "${CMAKE_CURRENT_SOURCE_DIR}/")

# Location of build tools dir (required for generating "generated_build_date.h "features.h" and "debugging_flags.h")
SET(BUILD_TOOLS_DIR "${CMAKE_CURRENT_SOURCE_DIR}/build")
#message(FATAL_ERROR ${BUILD_TOOLS_DIR})

find_package(Git)

execute_process(
  COMMAND ${GIT_EXECUTABLE} log -n1 --format="%at"
  WORKING_DIRECTORY ${CMAKE_CURRENT_SOURCE_DIR}
  OUTPUT_VARIABLE _build_timestamp
  ERROR_QUIET
  OUTPUT_STRIP_TRAILING_WHITESPACE
)

string(REPLACE "\"" "" _build_timestamp ${_build_timestamp})
#message(FATAL_ERROR ${_build_timestamp})

# PRE-GENERATION GENERATED_BUILD_DATE.H (NEEDED BY "build_time.cc")
execute_process(
  COMMAND sh -c "python ${BUILD_TOOLS_DIR}/write_build_date_header.py generated_build_date.h ${_build_timestamp}"
  WORKING_DIRECTORY ${BASE_DIR})

# https://github.com/chromium/chromium/blob/master/base/allocator/BUILD.gn#L291
# https://github.com/ruslanch/quic-cmake/blob/master/base/CMakeLists.txt#L35
configure_file(${CMAKE_CURRENT_SOURCE_DIR}/allocator_buildflags.h.inc
  ${BASE_DIR}allocator/buildflags.h COPYONLY)

configure_file(${CMAKE_CURRENT_SOURCE_DIR}/cfi_buildflags.h.inc
  ${BASE_DIR}/base/cfi_buildflags.h COPYONLY)

# https://github.com/chromium/chromium/blob/master/base/BUILD.gn#L1980
configure_file(${CMAKE_CURRENT_SOURCE_DIR}/debugging_buildflags.h.inc
  ${BASE_DIR}/debug/debugging_buildflags.h COPYONLY)

# https://github.com/chromium/chromium/blob/master/base/BUILD.gn#L2017
# https://github.com/geanix/courgette/blob/master/gen/base/synchronization/synchronization_buildflags.h
configure_file(${CMAKE_CURRENT_SOURCE_DIR}/synchronization_buildflags.h.inc
  ${BASE_DIR}/base/synchronization/synchronization_buildflags.h COPYONLY)

configure_file(${CMAKE_CURRENT_SOURCE_DIR}/protected_memory_buildflags.h.inc
  ${BASE_DIR}/base/memory/protected_memory_buildflags.h COPYONLY)

configure_file(${CMAKE_CURRENT_SOURCE_DIR}/partition_alloc_buildflags.h.inc
  ${BASE_DIR}/base/partition_alloc_buildflags.h COPYONLY)

# https://github.com/chromium/chromium/blob/master/base/BUILD.gn#L2044
configure_file(${CMAKE_CURRENT_SOURCE_DIR}/clang_coverage_buildflags.h.inc
  ${BASE_DIR}/base/clang_coverage_buildflags.h COPYONLY)

# libevent
# see https://github.com/cliqz-oss/ceba.js/blob/master/patches/tor/0002-emscripten-main-loop.patch#L7
# see https://github.com/cliqz-oss/ceba.js/blob/master/build.sh#L15

# see https://github.com/libevent/libevent
# defines https://github.com/libevent/libevent/blob/master/event-config.h.cmake
# see HAVE_CONFIG_H https://github.com/chromium/chromium/blob/master/base/third_party/libevent/BUILD.gn#L37
set(LIBEVENT_DIR
  ${BASE_DIR}third_party/libevent/
)

list(APPEND LIBEVENT_SOURCES
  ${LIBEVENT_DIR}buffer.c
  ${LIBEVENT_DIR}evbuffer.c
  ${LIBEVENT_DIR}evdns.c
  ${LIBEVENT_DIR}evdns.h
  ${LIBEVENT_DIR}event-config.h
  ${LIBEVENT_DIR}event-internal.h
  ${LIBEVENT_DIR}event.c
  ${LIBEVENT_DIR}event.h
  ${LIBEVENT_DIR}event_tagging.c
  ${LIBEVENT_DIR}evhttp.h
  ${LIBEVENT_DIR}evrpc-internal.h
  ${LIBEVENT_DIR}evrpc.c
  ${LIBEVENT_DIR}evrpc.h
  ${LIBEVENT_DIR}evsignal.h
  ${LIBEVENT_DIR}evutil.c
  ${LIBEVENT_DIR}evutil.h
  ${LIBEVENT_DIR}http-internal.h
  ${LIBEVENT_DIR}http.c
  ${LIBEVENT_DIR}log.c
  ${LIBEVENT_DIR}log.h
  ${LIBEVENT_DIR}min_heap.h
  ${LIBEVENT_DIR}poll.c
  ${LIBEVENT_DIR}select.c
  ${LIBEVENT_DIR}signal.c
  ${LIBEVENT_DIR}strlcpy-internal.h
  ${LIBEVENT_DIR}strlcpy.c
)

set(LIBEVENT_INCLUDE_DIRS
  #../..
  #..
  ${BASE_DIR}third_party/libevent
  ${LIBEVENT_DIR}emscripten
  ${LIBEVENT_DIR}compat
)

set(LIBEVENT_DEFINES
  HAVE_CONFIG_H
)

if(EMSCRIPTEN)
  list(APPEND LIBEVENT_INCLUDE_DIRS
    ${LIBEVENT_DIR}emscripten
  )
  list(APPEND LIBEVENT_SOURCES
  ${LIBEVENT_DIR}emscripten/config.h
  ${LIBEVENT_DIR}emscripten/event-config.h
  )
elseif(${CMAKE_SYSTEM_NAME} STREQUAL "Linux")
  list(APPEND LIBEVENT_INCLUDE_DIRS
    ${LIBEVENT_DIR}linux
  )
  list(APPEND LIBEVENT_SOURCES
  ${LIBEVENT_DIR}linux/config.h
  ${LIBEVENT_DIR}linux/event-config.h
  )
else()
  message(FATAL_ERROR "TODO: port libevent")
endif()

list(APPEND BASE_SOURCES
   # sources = [
   ${BASE_DIR}i18n/base_i18n_export.h
   ${BASE_DIR}i18n/base_i18n_switches.cc
   ${BASE_DIR}i18n/base_i18n_switches.h
   ${BASE_DIR}i18n/break_iterator.cc
   ${BASE_DIR}i18n/break_iterator.h
   ${BASE_DIR}i18n/case_conversion.cc
   ${BASE_DIR}i18n/case_conversion.h
   ${BASE_DIR}i18n/char_iterator.cc
   ${BASE_DIR}i18n/char_iterator.h
   ${BASE_DIR}i18n/character_encoding.cc
   ${BASE_DIR}i18n/character_encoding.h
   ${BASE_DIR}i18n/encoding_detection.cc
   ${BASE_DIR}i18n/encoding_detection.h
   ${BASE_DIR}i18n/file_util_icu.cc
   ${BASE_DIR}i18n/file_util_icu.h
   ${BASE_DIR}i18n/i18n_constants.cc
   ${BASE_DIR}i18n/i18n_constants.h
   ${BASE_DIR}i18n/icu_string_conversions.cc
   ${BASE_DIR}i18n/icu_string_conversions.h
   ${BASE_DIR}i18n/icu_util.cc
   ${BASE_DIR}i18n/icu_util.h
   ${BASE_DIR}i18n/message_formatter.cc
   ${BASE_DIR}i18n/message_formatter.h
   ${BASE_DIR}i18n/number_formatting.cc
   ${BASE_DIR}i18n/number_formatting.h
   ${BASE_DIR}i18n/rtl.cc
   ${BASE_DIR}i18n/rtl.h
   ${BASE_DIR}i18n/streaming_utf8_validator.cc
   ${BASE_DIR}i18n/streaming_utf8_validator.h
   ${BASE_DIR}i18n/string_compare.cc
   ${BASE_DIR}i18n/string_compare.h
   ${BASE_DIR}i18n/string_search.cc
   ${BASE_DIR}i18n/string_search.h
   ${BASE_DIR}i18n/time_formatting.cc
   ${BASE_DIR}i18n/time_formatting.h
   ${BASE_DIR}i18n/timezone.cc
   ${BASE_DIR}i18n/timezone.h
   ${BASE_DIR}i18n/unicodestring.h
   ${BASE_DIR}i18n/utf8_validator_tables.cc
   ${BASE_DIR}i18n/utf8_validator_tables.h
   # ]
   # defines = [ "BASE_I18N_IMPLEMENTATION" ]
   # configs += [ "//build/config/compiler:wexit_time_destructors" ]
   # public_deps = [
   #   "//third_party/ced",
   #   "//third_party/icu",
   # ]
   #
   ${BASE_DIR}allocator/allocator_check.cc
   ${BASE_DIR}allocator/allocator_check.h
   ${BASE_DIR}allocator/allocator_extension.cc
   ${BASE_DIR}allocator/allocator_extension.h
   #${BASE_DIR}allocator/allocator_interception_mac.h
   #${BASE_DIR}allocator/allocator_interception_mac.mm
   #${BASE_DIR}allocator/malloc_zone_functions_mac.cc
   #${BASE_DIR}allocator/malloc_zone_functions_mac.h
   ${BASE_DIR}at_exit.cc
   ${BASE_DIR}at_exit.h
   ${BASE_DIR}atomic_ref_count.h
   ${BASE_DIR}atomic_sequence_num.h
   ${BASE_DIR}atomicops.h
   ${BASE_DIR}atomicops_internals_atomicword_compat.h
   #${BASE_DIR}atomicops_internals_x86_msvc.h
   ${BASE_DIR}auto_reset.h
   ${BASE_DIR}barrier_closure.cc
   ${BASE_DIR}barrier_closure.h
   ${BASE_DIR}base64.cc
   ${BASE_DIR}base64.h
   ${BASE_DIR}base64url.cc
   ${BASE_DIR}base64url.h
   ${BASE_DIR}base_export.h
   ${BASE_DIR}base_switches.h
   ${BASE_DIR}big_endian.cc
   ${BASE_DIR}big_endian.h
   ${BASE_DIR}bind.h
   ${BASE_DIR}bind_helpers.h
   ${BASE_DIR}bind_internal.h
   ${BASE_DIR}bit_cast.h
   ${BASE_DIR}bits.h
   ${BASE_DIR}build_time.cc
   ${BASE_DIR}build_time.h
   ${BASE_DIR}callback.h
   ${BASE_DIR}callback_forward.h
   ${BASE_DIR}callback_helpers.cc
   ${BASE_DIR}callback_helpers.h
   ${BASE_DIR}callback_internal.cc
   ${BASE_DIR}callback_internal.h
   ${BASE_DIR}callback_list.h
   ${BASE_DIR}cancelable_callback.h
   ${BASE_DIR}command_line.cc
   ${BASE_DIR}command_line.h
   ${BASE_DIR}compiler_specific.h
   ${BASE_DIR}component_export.h
   ${BASE_DIR}containers/adapters.h
   ${BASE_DIR}containers/any_internal.cc
   ${BASE_DIR}containers/any_internal.h
   ${BASE_DIR}containers/buffer_iterator.h
   ${BASE_DIR}containers/checked_iterators.h
   ${BASE_DIR}containers/circular_deque.h
   ${BASE_DIR}containers/flat_map.h
   ${BASE_DIR}containers/flat_set.h
   ${BASE_DIR}containers/flat_tree.h
   ${BASE_DIR}containers/id_map.h
   ${BASE_DIR}containers/linked_list.h
   ${BASE_DIR}containers/mru_cache.h
   ${BASE_DIR}containers/small_map.h
   ${BASE_DIR}containers/span.h
   ${BASE_DIR}containers/stack.h
   ${BASE_DIR}containers/stack_container.h
   ${BASE_DIR}containers/unique_any.cc
   ${BASE_DIR}containers/unique_any.h
   ${BASE_DIR}containers/unique_ptr_adapters.h
   ${BASE_DIR}containers/util.h
   ${BASE_DIR}containers/vector_buffer.h
   ${BASE_DIR}cpu.cc
   ${BASE_DIR}cpu.h
   ${BASE_DIR}critical_closure.h
   #${BASE_DIR}critical_closure_internal_ios.mm
   ## ${BASE_DIR}debug/activity_analyzer.cc
   ## ${BASE_DIR}debug/activity_analyzer.h
   ## ${BASE_DIR}debug/activity_tracker.cc
   ## ${BASE_DIR}debug/activity_tracker.h
   ${BASE_DIR}debug/alias.cc
   ${BASE_DIR}debug/alias.h
   ## ### ${BASE_DIR}debug/asan_invalid_access.cc
   ## ### ${BASE_DIR}debug/asan_invalid_access.h
   ## #${BASE_DIR}debug/close_handle_hook_win.cc
   ## #${BASE_DIR}debug/close_handle_hook_win.h
   ## ${BASE_DIR}debug/crash_logging.cc
   ## ${BASE_DIR}debug/crash_logging.h
   ## ${BASE_DIR}debug/debugger.cc
   ## ${BASE_DIR}debug/debugger.h
   ## #${BASE_DIR}debug/debugger_win.cc
   ## ${BASE_DIR}debug/dump_without_crashing.cc
   ## ${BASE_DIR}debug/dump_without_crashing.h
   ## #${BASE_DIR}debug/gdi_debug_util_win.cc
   ## #${BASE_DIR}debug/gdi_debug_util_win.h
   ## #${BASE_DIR}debug/invalid_access_win.cc
   ## #${BASE_DIR}debug/invalid_access_win.h
   ## ${BASE_DIR}debug/leak_annotations.h
   ## ${BASE_DIR}debug/leak_tracker.h
   ## #${BASE_DIR}debug/proc_maps_linux.cc
   ## #${BASE_DIR}debug/proc_maps_linux.h
   ## ${BASE_DIR}debug/profiler.cc
   ## ${BASE_DIR}debug/profiler.h
   ## ${BASE_DIR}debug/stack_trace.cc
   ## ${BASE_DIR}debug/stack_trace.h
   ## #${BASE_DIR}debug/stack_trace_android.cc
   ## #${BASE_DIR}debug/stack_trace_win.cc
   ## ${BASE_DIR}debug/task_trace.cc
   ## ${BASE_DIR}debug/task_trace.h
   ${BASE_DIR}deferred_sequenced_task_runner.cc
   ${BASE_DIR}deferred_sequenced_task_runner.h
   ${BASE_DIR}enterprise_util.h
   #${BASE_DIR}enterprise_util_mac.mm
   #${BASE_DIR}enterprise_util_win.cc
   ${BASE_DIR}environment.cc
   ${BASE_DIR}environment.h
   ${BASE_DIR}export_template.h
   ${BASE_DIR}feature_list.cc
   ${BASE_DIR}feature_list.h
   ${BASE_DIR}file_descriptor_store.cc
   ${BASE_DIR}file_descriptor_store.h
   ${BASE_DIR}file_version_info.h
   #${BASE_DIR}file_version_info_mac.h
   #${BASE_DIR}file_version_info_mac.mm
   #${BASE_DIR}file_version_info_win.cc
   #${BASE_DIR}file_version_info_win.h
   ${BASE_DIR}files/dir_reader_fallback.h
   ${BASE_DIR}files/dir_reader_linux.h
   ${BASE_DIR}files/file.cc
   ${BASE_DIR}files/file.h
   ${BASE_DIR}files/file_enumerator.cc
   ${BASE_DIR}files/file_enumerator.h
   ${BASE_DIR}files/file_path.cc
   ${BASE_DIR}files/file_path.h
   ${BASE_DIR}files/file_path_constants.cc
   ${BASE_DIR}files/file_path_watcher.cc
   ${BASE_DIR}files/file_path_watcher.h
   ${BASE_DIR}files/file_path_watcher_linux.cc
   #${BASE_DIR}files/file_path_watcher_mac.cc
   #${BASE_DIR}files/file_path_watcher_win.cc
   ${BASE_DIR}files/file_proxy.cc
   ${BASE_DIR}files/file_proxy.h
   ${BASE_DIR}files/file_tracing.cc
   ${BASE_DIR}files/file_tracing.h
   ${BASE_DIR}files/file_util.cc
   ${BASE_DIR}files/file_util.h
   #${BASE_DIR}files/file_util_android.cc
   #${BASE_DIR}files/file_util_linux.cc
   #${BASE_DIR}files/file_util_mac.mm
   #${BASE_DIR}files/file_util_win.cc
   #${BASE_DIR}files/file_win.cc
   #TODO file_util_emscripten.cc
   ${BASE_DIR}files/important_file_writer.cc
   ${BASE_DIR}files/important_file_writer.h
   ${BASE_DIR}files/memory_mapped_file.cc
   ${BASE_DIR}files/memory_mapped_file.h
   #${BASE_DIR}files/memory_mapped_file_win.cc
   ${BASE_DIR}files/platform_file.h
   ${BASE_DIR}files/scoped_file.cc
   ${BASE_DIR}files/scoped_file.h
   #${BASE_DIR}files/scoped_file_android.cc
   ${BASE_DIR}files/scoped_temp_dir.cc
   ${BASE_DIR}files/scoped_temp_dir.h
   ${BASE_DIR}format_macros.h
   ${BASE_DIR}gtest_prod_util.h
   ${BASE_DIR}guid.cc
   ${BASE_DIR}guid.h
   ${BASE_DIR}hash/hash.cc
   ${BASE_DIR}hash/hash.h
   ${BASE_DIR}hash/md5.cc
   ${BASE_DIR}hash/md5.h
   ${BASE_DIR}hash/sha1.cc
   ${BASE_DIR}hash/sha1.h
   #${BASE_DIR}ios/block_types.h
   #${BASE_DIR}ios/crb_protocol_observers.h
   #${BASE_DIR}ios/crb_protocol_observers.mm
   #${BASE_DIR}ios/device_util.h
   #${BASE_DIR}ios/device_util.mm
   #${BASE_DIR}ios/ios_util.h
   #${BASE_DIR}ios/ios_util.mm
   #${BASE_DIR}ios/ns_error_util.h
   #${BASE_DIR}ios/ns_error_util.mm
   #${BASE_DIR}ios/scoped_critical_action.h
   #${BASE_DIR}ios/scoped_critical_action.mm
   #${BASE_DIR}ios/weak_nsobject.h
   #${BASE_DIR}ios/weak_nsobject.mm
   ${BASE_DIR}json/json_file_value_serializer.cc
   ${BASE_DIR}json/json_file_value_serializer.h
   ${BASE_DIR}json/json_parser.cc
   ${BASE_DIR}json/json_parser.h
   ${BASE_DIR}json/json_reader.cc
   ${BASE_DIR}json/json_reader.h
   ${BASE_DIR}json/json_string_value_serializer.cc
   ${BASE_DIR}json/json_string_value_serializer.h
   ${BASE_DIR}json/json_value_converter.cc
   ${BASE_DIR}json/json_value_converter.h
   ${BASE_DIR}json/json_writer.cc
   ${BASE_DIR}json/json_writer.h
   ${BASE_DIR}json/string_escape.cc
   ${BASE_DIR}json/string_escape.h
   ${BASE_DIR}lazy_instance.h
   ${BASE_DIR}lazy_instance_helpers.cc
   ${BASE_DIR}lazy_instance_helpers.h
   ${BASE_DIR}linux_util.cc
   ${BASE_DIR}linux_util.h
   ${BASE_DIR}location.cc
   ${BASE_DIR}location.h
   ${BASE_DIR}logging.cc
   ${BASE_DIR}logging.h
   #${BASE_DIR}logging_win.cc
   #${BASE_DIR}logging_win.h
   #${BASE_DIR}mac/authorization_util.h
   #${BASE_DIR}mac/authorization_util.mm
   #${BASE_DIR}mac/availability.h
   #${BASE_DIR}mac/bundle_locations.h
   #${BASE_DIR}mac/bundle_locations.mm
   #${BASE_DIR}mac/call_with_eh_frame.cc
   #${BASE_DIR}mac/call_with_eh_frame.h
   #${BASE_DIR}mac/call_with_eh_frame_asm.S
   #${BASE_DIR}mac/close_nocancel.cc
   #${BASE_DIR}mac/dispatch_source_mach.cc
   #${BASE_DIR}mac/dispatch_source_mach.h
   #${BASE_DIR}mac/foundation_util.h
   #${BASE_DIR}mac/foundation_util.mm
   #${BASE_DIR}mac/launch_services_util.h
   #${BASE_DIR}mac/launch_services_util.mm
   #${BASE_DIR}mac/launchd.cc
   #${BASE_DIR}mac/launchd.h
   #${BASE_DIR}mac/mac_logging.h
   #${BASE_DIR}mac/mac_logging.mm
   #${BASE_DIR}mac/mac_util.h
   #${BASE_DIR}mac/mac_util.mm
   #${BASE_DIR}mac/mach_logging.cc
   #${BASE_DIR}mac/mach_logging.h
   #${BASE_DIR}mac/mach_port_broker.h
   #${BASE_DIR}mac/mach_port_broker.mm
   #${BASE_DIR}mac/mach_port_rendezvous.cc
   #${BASE_DIR}mac/mach_port_rendezvous.h
   #${BASE_DIR}mac/mach_port_util.cc
   #${BASE_DIR}mac/mach_port_util.h
   #${BASE_DIR}mac/objc_release_properties.h
   #${BASE_DIR}mac/objc_release_properties.mm
   #${BASE_DIR}mac/os_crash_dumps.cc
   #${BASE_DIR}mac/os_crash_dumps.h
   #${BASE_DIR}mac/scoped_aedesc.h
   #${BASE_DIR}mac/scoped_authorizationref.h
   #${BASE_DIR}mac/scoped_block.h
   #${BASE_DIR}mac/scoped_cffiledescriptorref.h
   #${BASE_DIR}mac/scoped_cftyperef.h
   #${BASE_DIR}mac/scoped_dispatch_object.h
   #${BASE_DIR}mac/scoped_ionotificationportref.h
   #${BASE_DIR}mac/scoped_ioobject.h
   #${BASE_DIR}mac/scoped_ioplugininterface.h
   #${BASE_DIR}mac/scoped_launch_data.h
   #${BASE_DIR}mac/scoped_mach_msg_destroy.h
   #${BASE_DIR}mac/scoped_mach_port.cc
   #${BASE_DIR}mac/scoped_mach_port.h
   #${BASE_DIR}mac/scoped_mach_vm.cc
   #${BASE_DIR}mac/scoped_mach_vm.h
   #${BASE_DIR}mac/scoped_nsautorelease_pool.h
   #${BASE_DIR}mac/scoped_nsautorelease_pool.mm
   #${BASE_DIR}mac/scoped_nsobject.h
   #${BASE_DIR}mac/scoped_nsobject.mm
   #${BASE_DIR}mac/scoped_objc_class_swizzler.h
   #${BASE_DIR}mac/scoped_objc_class_swizzler.mm
   #${BASE_DIR}mac/scoped_sending_event.h
   #${BASE_DIR}mac/scoped_sending_event.mm
   #${BASE_DIR}mac/sdk_forward_declarations.h
   #${BASE_DIR}mac/sdk_forward_declarations.mm
   ${BASE_DIR}macros.h
   ${BASE_DIR}memory/aligned_memory.cc
   ${BASE_DIR}memory/aligned_memory.h
   ${BASE_DIR}memory/discardable_memory.cc
   ${BASE_DIR}memory/discardable_memory.h
   ${BASE_DIR}memory/discardable_memory_allocator.cc
   ${BASE_DIR}memory/discardable_memory_allocator.h
   ${BASE_DIR}memory/discardable_shared_memory.cc
   ${BASE_DIR}memory/discardable_shared_memory.h
   ${BASE_DIR}memory/free_deleter.h
   ${BASE_DIR}memory/memory_pressure_listener.cc
   ${BASE_DIR}memory/memory_pressure_listener.h
   ${BASE_DIR}memory/memory_pressure_monitor.cc
   ${BASE_DIR}memory/memory_pressure_monitor.h
   #${BASE_DIR}memory/memory_pressure_monitor_chromeos.cc
   #${BASE_DIR}memory/memory_pressure_monitor_chromeos.h
   #${BASE_DIR}memory/memory_pressure_monitor_mac.cc
   #${BASE_DIR}memory/memory_pressure_monitor_mac.h
   #${BASE_DIR}memory/memory_pressure_monitor_notifying_chromeos.cc
   #${BASE_DIR}memory/memory_pressure_monitor_notifying_chromeos.h
   #${BASE_DIR}memory/memory_pressure_monitor_win.cc
   #${BASE_DIR}memory/memory_pressure_monitor_win.h
   ${BASE_DIR}memory/platform_shared_memory_region.cc
   ${BASE_DIR}memory/platform_shared_memory_region.h
   ${BASE_DIR}memory/protected_memory.cc
   ${BASE_DIR}memory/protected_memory.h
   #${BASE_DIR}memory/protected_memory_cfi.h
   #${BASE_DIR}memory/protected_memory_win.cc
   ${BASE_DIR}memory/ptr_util.h
   ${BASE_DIR}memory/raw_scoped_refptr_mismatch_checker.h
   ${BASE_DIR}memory/read_only_shared_memory_region.cc
   ${BASE_DIR}memory/read_only_shared_memory_region.h
   ${BASE_DIR}memory/ref_counted.cc
   ${BASE_DIR}memory/ref_counted.h
   ${BASE_DIR}memory/ref_counted_delete_on_sequence.h
   ${BASE_DIR}memory/ref_counted_memory.cc
   ${BASE_DIR}memory/ref_counted_memory.h
   ${BASE_DIR}memory/scoped_policy.h
   ${BASE_DIR}memory/scoped_refptr.h
   ${BASE_DIR}memory/shared_memory.h
   ${BASE_DIR}memory/shared_memory_handle.cc
   ${BASE_DIR}memory/shared_memory_handle.h
   ${BASE_DIR}memory/shared_memory_helper.cc
   ${BASE_DIR}memory/shared_memory_helper.h
   ${BASE_DIR}memory/shared_memory_hooks.h
   ${BASE_DIR}memory/shared_memory_mapping.cc
   ${BASE_DIR}memory/shared_memory_mapping.h
   ${BASE_DIR}memory/shared_memory_tracker.cc
   ${BASE_DIR}memory/shared_memory_tracker.h
   ${BASE_DIR}memory/singleton.h
   ${BASE_DIR}memory/unsafe_shared_memory_region.cc
   ${BASE_DIR}memory/unsafe_shared_memory_region.h
   ${BASE_DIR}memory/weak_ptr.cc
   ${BASE_DIR}memory/weak_ptr.h
   ${BASE_DIR}memory/writable_shared_memory_region.cc
   ${BASE_DIR}memory/writable_shared_memory_region.h
   ${BASE_DIR}message_loop/message_loop.cc
   ${BASE_DIR}message_loop/message_loop.h
   ${BASE_DIR}message_loop/message_loop_current.cc
   ${BASE_DIR}message_loop/message_loop_current.h
   ${BASE_DIR}message_loop/message_pump.cc
   ${BASE_DIR}message_loop/message_pump.h
   #${BASE_DIR}message_loop/message_pump_android.cc
   #${BASE_DIR}message_loop/message_pump_android.h
   ${BASE_DIR}message_loop/message_pump_default.cc
   ${BASE_DIR}message_loop/message_pump_default.h
   ${BASE_DIR}message_loop/message_pump_for_io.h
   ${BASE_DIR}message_loop/message_pump_for_ui.h
   #${BASE_DIR}message_loop/message_pump_glib.cc
   #${BASE_DIR}message_loop/message_pump_glib.h
   #${BASE_DIR}message_loop/message_pump_io_ios.cc
   #${BASE_DIR}message_loop/message_pump_io_ios.h
   #${BASE_DIR}message_loop/message_pump_mac.h
   #${BASE_DIR}message_loop/message_pump_mac.mm
   #${BASE_DIR}message_loop/message_pump_win.cc
   #${BASE_DIR}message_loop/message_pump_win.h
   ${BASE_DIR}message_loop/timer_slack.h
   ${BASE_DIR}message_loop/work_id_provider.cc
   ${BASE_DIR}message_loop/work_id_provider.h
   ${BASE_DIR}metrics/bucket_ranges.cc
   ${BASE_DIR}metrics/bucket_ranges.h
   ${BASE_DIR}metrics/dummy_histogram.cc
   ${BASE_DIR}metrics/dummy_histogram.h
   ${BASE_DIR}metrics/field_trial.cc
   ${BASE_DIR}metrics/field_trial.h
   ${BASE_DIR}metrics/field_trial_param_associator.cc
   ${BASE_DIR}metrics/field_trial_param_associator.h
   ${BASE_DIR}metrics/field_trial_params.cc
   ${BASE_DIR}metrics/field_trial_params.h
   ${BASE_DIR}metrics/histogram.cc
   ${BASE_DIR}metrics/histogram.h
   ${BASE_DIR}metrics/histogram_base.cc
   ${BASE_DIR}metrics/histogram_base.h
   ${BASE_DIR}metrics/histogram_delta_serialization.cc
   ${BASE_DIR}metrics/histogram_delta_serialization.h
   ${BASE_DIR}metrics/histogram_flattener.h
   ${BASE_DIR}metrics/histogram_functions.cc
   ${BASE_DIR}metrics/histogram_functions.h
   ${BASE_DIR}metrics/histogram_macros.h
   ${BASE_DIR}metrics/histogram_macros_internal.h
   ${BASE_DIR}metrics/histogram_macros_local.h
   ${BASE_DIR}metrics/histogram_samples.cc
   ${BASE_DIR}metrics/histogram_samples.h
   ${BASE_DIR}metrics/histogram_snapshot_manager.cc
   ${BASE_DIR}metrics/histogram_snapshot_manager.h
   ${BASE_DIR}metrics/metrics_hashes.cc
   ${BASE_DIR}metrics/metrics_hashes.h
   ${BASE_DIR}metrics/persistent_histogram_allocator.cc
   ${BASE_DIR}metrics/persistent_histogram_allocator.h
   ${BASE_DIR}metrics/persistent_memory_allocator.cc
   ${BASE_DIR}metrics/persistent_memory_allocator.h
   ${BASE_DIR}metrics/persistent_sample_map.cc
   ${BASE_DIR}metrics/persistent_sample_map.h
   ${BASE_DIR}metrics/record_histogram_checker.h
   ${BASE_DIR}metrics/sample_map.cc
   ${BASE_DIR}metrics/sample_map.h
   ${BASE_DIR}metrics/sample_vector.cc
   ${BASE_DIR}metrics/sample_vector.h
   ${BASE_DIR}metrics/single_sample_metrics.cc
   ${BASE_DIR}metrics/single_sample_metrics.h
   ${BASE_DIR}metrics/sparse_histogram.cc
   ${BASE_DIR}metrics/sparse_histogram.h
   ${BASE_DIR}metrics/statistics_recorder.cc
   ${BASE_DIR}metrics/statistics_recorder.h
   ${BASE_DIR}metrics/ukm_source_id.cc
   ${BASE_DIR}metrics/ukm_source_id.h
   ${BASE_DIR}metrics/user_metrics.cc
   ${BASE_DIR}metrics/user_metrics.h
   ${BASE_DIR}metrics/user_metrics_action.h
   ${BASE_DIR}native_library.cc
   ${BASE_DIR}native_library.h
   #${BASE_DIR}native_library_ios.mm
   #${BASE_DIR}native_library_mac.mm
   #${BASE_DIR}native_library_win.cc
   ${BASE_DIR}no_destructor.h
   ${BASE_DIR}observer_list.h
   ${BASE_DIR}observer_list_internal.cc
   ${BASE_DIR}observer_list_internal.h
   ${BASE_DIR}observer_list_threadsafe.cc
   ${BASE_DIR}observer_list_threadsafe.h
   ${BASE_DIR}observer_list_types.cc
   ${BASE_DIR}observer_list_types.h
   ${BASE_DIR}one_shot_event.cc
   ${BASE_DIR}one_shot_event.h
   ${BASE_DIR}optional.h
   #${BASE_DIR}os_compat_android.cc
   #${BASE_DIR}os_compat_android.h
   #${BASE_DIR}os_compat_nacl.cc
   #${BASE_DIR}os_compat_nacl.h
   ${BASE_DIR}parameter_pack.h
   ${BASE_DIR}path_service.cc
   ${BASE_DIR}path_service.h
   ${BASE_DIR}pending_task.cc
   ${BASE_DIR}pending_task.h
   ${BASE_DIR}pickle.cc
   ${BASE_DIR}pickle.h
   ${BASE_DIR}post_task_and_reply_with_result_internal.h
   ${BASE_DIR}power_monitor/power_monitor.cc
   ${BASE_DIR}power_monitor/power_monitor.h
   ${BASE_DIR}power_monitor/power_monitor_device_source.cc
   ${BASE_DIR}power_monitor/power_monitor_device_source.h
   ${BASE_DIR}power_monitor/power_monitor_source.cc
   ${BASE_DIR}power_monitor/power_monitor_source.h
   ${BASE_DIR}power_monitor/power_observer.h
   ${BASE_DIR}process/environment_internal.cc
   ${BASE_DIR}process/environment_internal.h
   ${BASE_DIR}process/internal_linux.cc
   ${BASE_DIR}process/internal_linux.h
   ${BASE_DIR}process/kill.cc
   ${BASE_DIR}process/kill.h
   #${BASE_DIR}process/kill_mac.cc
   #${BASE_DIR}process/kill_win.cc
   ${BASE_DIR}process/launch.cc
   ${BASE_DIR}process/launch.h
   #${BASE_DIR}process/launch_ios.cc
   #${BASE_DIR}process/launch_mac.cc
   #${BASE_DIR}process/launch_win.cc
   ${BASE_DIR}process/memory.cc
   ${BASE_DIR}process/memory.h
   #${BASE_DIR}process/memory_linux.cc
   #${BASE_DIR}process/memory_mac.mm
   #${BASE_DIR}process/memory_win.cc
   #${BASE_DIR}process/port_provider_mac.cc
   #${BASE_DIR}process/port_provider_mac.h
   ${BASE_DIR}process/process.h
   ${BASE_DIR}process/process_handle.cc
   ${BASE_DIR}process/process_handle.h
   #${BASE_DIR}process/process_handle_linux.cc
   #${BASE_DIR}process/process_handle_mac.cc
   #${BASE_DIR}process/process_handle_win.cc
   ${BASE_DIR}process/process_info.h
   #${BASE_DIR}process/process_info_win.cc
   ${BASE_DIR}process/process_iterator.cc
   ${BASE_DIR}process/process_iterator.h
   ${BASE_DIR}process/process_iterator_linux.cc
   #${BASE_DIR}process/process_iterator_mac.cc
   #${BASE_DIR}process/process_iterator_win.cc
   ${BASE_DIR}process/process_linux.cc
   #${BASE_DIR}process/process_mac.cc
   ${BASE_DIR}process/process_metrics.cc
   ${BASE_DIR}process/process_metrics.h
   #${BASE_DIR}process/process_metrics_ios.cc
   #${BASE_DIR}process/process_metrics_linux.cc
   #${BASE_DIR}process/process_metrics_mac.cc
   #${BASE_DIR}process/process_metrics_win.cc
   #${BASE_DIR}process/process_win.cc
   ${BASE_DIR}profiler/frame.cc
   ${BASE_DIR}profiler/frame.h
   ${BASE_DIR}profiler/metadata_recorder.cc
   ${BASE_DIR}profiler/metadata_recorder.h
   ${BASE_DIR}profiler/native_unwinder.h
   #${BASE_DIR}profiler/native_unwinder_mac.cc
   #${BASE_DIR}profiler/native_unwinder_mac.h
   #${BASE_DIR}profiler/native_unwinder_win.cc
   #${BASE_DIR}profiler/native_unwinder_win.h
   ${BASE_DIR}profiler/profile_builder.h
   ${BASE_DIR}profiler/register_context.h
   ${BASE_DIR}profiler/sample_metadata.cc
   ${BASE_DIR}profiler/sample_metadata.h
   ${BASE_DIR}profiler/stack_sampler.cc
   ${BASE_DIR}profiler/stack_sampler.h
   ${BASE_DIR}profiler/stack_sampler_impl.cc
   ${BASE_DIR}profiler/stack_sampler_impl.h
   #${BASE_DIR}profiler/stack_sampler_mac.cc
   #${BASE_DIR}profiler/stack_sampler_win.cc
   ${BASE_DIR}profiler/stack_sampling_profiler.cc
   ${BASE_DIR}profiler/stack_sampling_profiler.h
   ${BASE_DIR}profiler/thread_delegate.h
   #${BASE_DIR}profiler/thread_delegate_mac.cc
   #${BASE_DIR}profiler/thread_delegate_mac.h
   #${BASE_DIR}profiler/thread_delegate_win.cc
   #${BASE_DIR}profiler/thread_delegate_win.h
   ${BASE_DIR}profiler/unwinder.h
   ${BASE_DIR}rand_util.cc
   ${BASE_DIR}rand_util.h
   #${BASE_DIR}rand_util_nacl.cc
   ${BASE_DIR}run_loop.cc
   ${BASE_DIR}run_loop.h
   ${BASE_DIR}sampling_heap_profiler/lock_free_address_hash_set.cc
   ${BASE_DIR}sampling_heap_profiler/lock_free_address_hash_set.h
   ${BASE_DIR}sampling_heap_profiler/module_cache.cc
   ${BASE_DIR}sampling_heap_profiler/module_cache.h
   #${BASE_DIR}sampling_heap_profiler/module_cache_mac.cc
   #${BASE_DIR}sampling_heap_profiler/module_cache_win.cc
   ${BASE_DIR}sampling_heap_profiler/poisson_allocation_sampler.cc
   ${BASE_DIR}sampling_heap_profiler/poisson_allocation_sampler.h
   ${BASE_DIR}sampling_heap_profiler/sampling_heap_profiler.cc
   ${BASE_DIR}sampling_heap_profiler/sampling_heap_profiler.h
   ${BASE_DIR}scoped_clear_last_error.h
   #${BASE_DIR}scoped_clear_last_error_win.cc
   ${BASE_DIR}scoped_generic.h
   ${BASE_DIR}scoped_native_library.cc
   ${BASE_DIR}scoped_native_library.h
   ${BASE_DIR}scoped_observer.h
   ${BASE_DIR}sequence_checker.h
   ${BASE_DIR}sequence_checker_impl.cc
   ${BASE_DIR}sequence_checker_impl.h
   ${BASE_DIR}sequence_token.cc
   ${BASE_DIR}sequence_token.h
   ${BASE_DIR}sequenced_task_runner.cc
   ${BASE_DIR}sequenced_task_runner.h
   ${BASE_DIR}sequenced_task_runner_helpers.h
   ${BASE_DIR}single_thread_task_runner.h
   ${BASE_DIR}stl_util.h
   ${BASE_DIR}strings/char_traits.h
   ${BASE_DIR}strings/latin1_string_conversions.cc
   ${BASE_DIR}strings/latin1_string_conversions.h
   ${BASE_DIR}strings/nullable_string16.cc
   ${BASE_DIR}strings/nullable_string16.h
   ${BASE_DIR}strings/pattern.cc
   ${BASE_DIR}strings/pattern.h
   ${BASE_DIR}strings/safe_sprintf.cc
   ${BASE_DIR}strings/safe_sprintf.h
   ${BASE_DIR}strings/strcat.cc
   ${BASE_DIR}strings/strcat.h
   ${BASE_DIR}strings/string16.cc
   ${BASE_DIR}strings/string16.h
   ${BASE_DIR}strings/string_number_conversions.cc
   ${BASE_DIR}strings/string_number_conversions.h
   ${BASE_DIR}strings/string_piece.cc
   ${BASE_DIR}strings/string_piece.h
   ${BASE_DIR}strings/string_piece_forward.h
   ${BASE_DIR}strings/string_split.cc
   ${BASE_DIR}strings/string_split.h
   ${BASE_DIR}strings/string_tokenizer.h
   ${BASE_DIR}strings/string_util.cc
   ${BASE_DIR}strings/string_util.h
   ${BASE_DIR}strings/string_util_constants.cc
   #${BASE_DIR}strings/string_util_win.h
   ${BASE_DIR}strings/stringize_macros.h
   ${BASE_DIR}strings/stringprintf.cc
   ${BASE_DIR}strings/stringprintf.h
   ${BASE_DIR}strings/sys_string_conversions.h
   #${BASE_DIR}strings/sys_string_conversions_mac.mm
   #${BASE_DIR}strings/sys_string_conversions_win.cc
   ${BASE_DIR}strings/utf_offset_string_conversions.cc
   ${BASE_DIR}strings/utf_offset_string_conversions.h
   ${BASE_DIR}strings/utf_string_conversion_utils.cc
   ${BASE_DIR}strings/utf_string_conversion_utils.h
   ${BASE_DIR}strings/utf_string_conversions.cc
   ${BASE_DIR}strings/utf_string_conversions.h
   ${BASE_DIR}supports_user_data.cc
   ${BASE_DIR}supports_user_data.h
   ${BASE_DIR}sync_socket.h
   #${BASE_DIR}sync_socket_win.cc
   ${BASE_DIR}synchronization/atomic_flag.cc
   ${BASE_DIR}synchronization/atomic_flag.h
   ${BASE_DIR}synchronization/cancellation_flag.h
   ${BASE_DIR}synchronization/condition_variable.h
   #${BASE_DIR}synchronization/condition_variable_win.cc
   ${BASE_DIR}synchronization/lock.cc
   ${BASE_DIR}synchronization/lock.h
   ${BASE_DIR}synchronization/lock_impl.h
   #${BASE_DIR}synchronization/lock_impl_win.cc
   ${BASE_DIR}synchronization/spin_wait.h
   ${BASE_DIR}synchronization/waitable_event.h
   #${BASE_DIR}synchronization/waitable_event_mac.cc
   ${BASE_DIR}synchronization/waitable_event_watcher.h
   #${BASE_DIR}synchronization/waitable_event_watcher_mac.cc
   #${BASE_DIR}synchronization/waitable_event_watcher_win.cc
   #${BASE_DIR}synchronization/waitable_event_win.cc
   ${BASE_DIR}sys_byteorder.h
   ${BASE_DIR}syslog_logging.cc
   ${BASE_DIR}syslog_logging.h
   ${BASE_DIR}system/sys_info.cc
   ${BASE_DIR}system/sys_info.h
   ${BASE_DIR}system/sys_info_internal.h
   ${BASE_DIR}system/system_monitor.cc
   ${BASE_DIR}system/system_monitor.h
   ${BASE_DIR}task/cancelable_task_tracker.cc
   ${BASE_DIR}task/cancelable_task_tracker.h
   ${BASE_DIR}task/common/checked_lock.h
   ${BASE_DIR}task/common/checked_lock_impl.cc
   ${BASE_DIR}task/common/checked_lock_impl.h
   ${BASE_DIR}task/common/intrusive_heap.h
   ${BASE_DIR}task/common/operations_controller.cc
   ${BASE_DIR}task/common/operations_controller.h
   ${BASE_DIR}task/common/task_annotator.cc
   ${BASE_DIR}task/common/task_annotator.h
   ${BASE_DIR}task/lazy_task_runner.cc
   ${BASE_DIR}task/lazy_task_runner.h
   ${BASE_DIR}task/post_task.cc
   ${BASE_DIR}task/post_task.h
   ${BASE_DIR}task/promise/dependent_list.cc
   ${BASE_DIR}task/promise/dependent_list.h
   ${BASE_DIR}task/scoped_set_task_priority_for_current_thread.cc
   ${BASE_DIR}task/scoped_set_task_priority_for_current_thread.h
   ${BASE_DIR}task/sequence_manager/associated_thread_id.cc
   ${BASE_DIR}task/sequence_manager/associated_thread_id.h
   ${BASE_DIR}task/sequence_manager/atomic_flag_set.cc
   ${BASE_DIR}task/sequence_manager/atomic_flag_set.h
   ${BASE_DIR}task/sequence_manager/enqueue_order.cc
   ${BASE_DIR}task/sequence_manager/enqueue_order.h
   ${BASE_DIR}task/sequence_manager/lazily_deallocated_deque.h
   ${BASE_DIR}task/sequence_manager/lazy_now.cc
   ${BASE_DIR}task/sequence_manager/lazy_now.h
   ${BASE_DIR}task/sequence_manager/real_time_domain.cc
   ${BASE_DIR}task/sequence_manager/real_time_domain.h
   ${BASE_DIR}task/sequence_manager/sequence_manager.cc
   ${BASE_DIR}task/sequence_manager/sequence_manager.h
   ${BASE_DIR}task/sequence_manager/sequence_manager_impl.cc
   ${BASE_DIR}task/sequence_manager/sequence_manager_impl.h
   ${BASE_DIR}task/sequence_manager/sequenced_task_source.h
   ${BASE_DIR}task/sequence_manager/task_queue.cc
   ${BASE_DIR}task/sequence_manager/task_queue.h
   ${BASE_DIR}task/sequence_manager/task_queue_impl.cc
   ${BASE_DIR}task/sequence_manager/task_queue_impl.h
   ${BASE_DIR}task/sequence_manager/task_queue_selector.cc
   ${BASE_DIR}task/sequence_manager/task_queue_selector.h
   ${BASE_DIR}task/sequence_manager/task_queue_selector_logic.h
   ${BASE_DIR}task/sequence_manager/task_time_observer.h
   ${BASE_DIR}task/sequence_manager/tasks.cc
   ${BASE_DIR}task/sequence_manager/tasks.h
   ${BASE_DIR}task/sequence_manager/thread_controller.h
   ${BASE_DIR}task/sequence_manager/thread_controller_impl.cc
   ${BASE_DIR}task/sequence_manager/thread_controller_impl.h
   ${BASE_DIR}task/sequence_manager/thread_controller_with_message_pump_impl.cc
   ${BASE_DIR}task/sequence_manager/thread_controller_with_message_pump_impl.h
   ${BASE_DIR}task/sequence_manager/time_domain.cc
   ${BASE_DIR}task/sequence_manager/time_domain.h
   ${BASE_DIR}task/sequence_manager/work_deduplicator.cc
   ${BASE_DIR}task/sequence_manager/work_deduplicator.h
   ${BASE_DIR}task/sequence_manager/work_queue.cc
   ${BASE_DIR}task/sequence_manager/work_queue.h
   ${BASE_DIR}task/sequence_manager/work_queue_sets.cc
   ${BASE_DIR}task/sequence_manager/work_queue_sets.h
   ${BASE_DIR}task/single_thread_task_runner_thread_mode.h
   ${BASE_DIR}task/task_executor.cc
   ${BASE_DIR}task/task_executor.h
   ${BASE_DIR}task/task_features.cc
   ${BASE_DIR}task/task_features.h
   ${BASE_DIR}task/task_observer.h
   ${BASE_DIR}task/task_traits.cc
   ${BASE_DIR}task/task_traits.h
   ${BASE_DIR}task/task_traits_extension.h
   ${BASE_DIR}task/thread_pool/delayed_task_manager.cc
   ${BASE_DIR}task/thread_pool/delayed_task_manager.h
   ${BASE_DIR}task/thread_pool/environment_config.cc
   ${BASE_DIR}task/thread_pool/environment_config.h
   ${BASE_DIR}task/thread_pool/initialization_util.cc
   ${BASE_DIR}task/thread_pool/initialization_util.h
   ${BASE_DIR}task/thread_pool/pooled_parallel_task_runner.cc
   ${BASE_DIR}task/thread_pool/pooled_parallel_task_runner.h
   ${BASE_DIR}task/thread_pool/pooled_sequenced_task_runner.cc
   ${BASE_DIR}task/thread_pool/pooled_sequenced_task_runner.h
   ${BASE_DIR}task/thread_pool/pooled_single_thread_task_runner_manager.cc
   ${BASE_DIR}task/thread_pool/pooled_single_thread_task_runner_manager.h
   ${BASE_DIR}task/thread_pool/pooled_task_runner_delegate.cc
   ${BASE_DIR}task/thread_pool/pooled_task_runner_delegate.h
   ${BASE_DIR}task/thread_pool/priority_queue.cc
   ${BASE_DIR}task/thread_pool/priority_queue.h
   ${BASE_DIR}task/thread_pool/sequence.cc
   ${BASE_DIR}task/thread_pool/sequence.h
   ${BASE_DIR}task/thread_pool/sequence_sort_key.cc
   ${BASE_DIR}task/thread_pool/sequence_sort_key.h
   ${BASE_DIR}task/thread_pool/service_thread.cc
   ${BASE_DIR}task/thread_pool/service_thread.h
   ${BASE_DIR}task/thread_pool/task.cc
   ${BASE_DIR}task/thread_pool/task.h
   ${BASE_DIR}task/thread_pool/task_source.cc
   ${BASE_DIR}task/thread_pool/task_source.h
   ${BASE_DIR}task/thread_pool/task_tracker.cc
   ${BASE_DIR}task/thread_pool/task_tracker.h
   ${BASE_DIR}task/thread_pool/thread_group.cc
   ${BASE_DIR}task/thread_pool/thread_group.h
   ${BASE_DIR}task/thread_pool/thread_group_impl.cc
   ${BASE_DIR}task/thread_pool/thread_group_impl.h
   ${BASE_DIR}task/thread_pool/thread_group_native.cc
   ${BASE_DIR}task/thread_pool/thread_group_native.h
   #${BASE_DIR}task/thread_pool/thread_group_native_mac.h
   #${BASE_DIR}task/thread_pool/thread_group_native_mac.mm
   #${BASE_DIR}task/thread_pool/thread_group_native_win.cc
   #${BASE_DIR}task/thread_pool/thread_group_native_win.h
   ${BASE_DIR}task/thread_pool/thread_group_params.cc
   ${BASE_DIR}task/thread_pool/thread_group_params.h
   ${BASE_DIR}task/thread_pool/thread_pool.cc
   ${BASE_DIR}task/thread_pool/thread_pool.h
   ${BASE_DIR}task/thread_pool/thread_pool_impl.cc
   ${BASE_DIR}task/thread_pool/thread_pool_impl.h
   ${BASE_DIR}task/thread_pool/tracked_ref.h
   ${BASE_DIR}task/thread_pool/worker_thread.cc
   ${BASE_DIR}task/thread_pool/worker_thread.h
   ${BASE_DIR}task/thread_pool/worker_thread_observer.h
   ${BASE_DIR}task/thread_pool/worker_thread_params.h
   ${BASE_DIR}task/thread_pool/worker_thread_stack.cc
   ${BASE_DIR}task/thread_pool/worker_thread_stack.h
   ${BASE_DIR}task_runner.cc
   ${BASE_DIR}task_runner.h
   ${BASE_DIR}task_runner_util.h
   ${BASE_DIR}template_util.h
   ${BASE_DIR}test/malloc_wrapper.h
   ${BASE_DIR}third_party/dmg_fp/dmg_fp.h
   ${BASE_DIR}third_party/dmg_fp/dtoa_wrapper.cc
   ${BASE_DIR}third_party/dmg_fp/g_fmt.cc
   ${BASE_DIR}third_party/icu/icu_utf.cc
   ${BASE_DIR}third_party/icu/icu_utf.h
   ${BASE_DIR}third_party/nspr/prtime.cc
   ${BASE_DIR}third_party/nspr/prtime.h
   ${BASE_DIR}third_party/superfasthash/superfasthash.c
   ${BASE_DIR}thread_annotations.h
   ${BASE_DIR}threading/platform_thread.cc
   ${BASE_DIR}threading/platform_thread.h
   #${BASE_DIR}threading/platform_thread_android.cc
   #${BASE_DIR}threading/platform_thread_linux.cc
   #${BASE_DIR}threading/platform_thread_mac.mm
   #${BASE_DIR}threading/platform_thread_win.cc
   #${BASE_DIR}threading/platform_thread_win.h
   ${BASE_DIR}threading/post_task_and_reply_impl.cc
   ${BASE_DIR}threading/post_task_and_reply_impl.h
   ${BASE_DIR}threading/scoped_blocking_call.cc
   ${BASE_DIR}threading/scoped_blocking_call.h
   ${BASE_DIR}threading/sequence_bound.h
   ${BASE_DIR}threading/sequence_local_storage_map.cc
   ${BASE_DIR}threading/sequence_local_storage_map.h
   ${BASE_DIR}threading/sequence_local_storage_slot.cc
   ${BASE_DIR}threading/sequence_local_storage_slot.h
   ${BASE_DIR}threading/sequenced_task_runner_handle.cc
   ${BASE_DIR}threading/sequenced_task_runner_handle.h
   ${BASE_DIR}threading/simple_thread.cc
   ${BASE_DIR}threading/simple_thread.h
   ${BASE_DIR}threading/thread.cc
   ${BASE_DIR}threading/thread.h
   ${BASE_DIR}threading/thread_checker.h
   ${BASE_DIR}threading/thread_checker_impl.cc
   ${BASE_DIR}threading/thread_checker_impl.h
   ${BASE_DIR}threading/thread_collision_warner.cc
   ${BASE_DIR}threading/thread_collision_warner.h
   ${BASE_DIR}threading/thread_id_name_manager.cc
   ${BASE_DIR}threading/thread_id_name_manager.h
   ${BASE_DIR}threading/thread_local.h
   ${BASE_DIR}threading/thread_local_internal.h
   ${BASE_DIR}threading/thread_local_storage.cc
   ${BASE_DIR}threading/thread_local_storage.h
   #${BASE_DIR}threading/thread_local_storage_win.cc
   ${BASE_DIR}threading/thread_restrictions.cc
   ${BASE_DIR}threading/thread_restrictions.h
   ${BASE_DIR}threading/thread_task_runner_handle.cc
   ${BASE_DIR}threading/thread_task_runner_handle.h
   ${BASE_DIR}threading/watchdog.cc
   ${BASE_DIR}threading/watchdog.h
   ${BASE_DIR}time/clock.cc
   ${BASE_DIR}time/clock.h
   ${BASE_DIR}time/default_clock.cc
   ${BASE_DIR}time/default_clock.h
   ${BASE_DIR}time/default_tick_clock.cc
   ${BASE_DIR}time/default_tick_clock.h
   ${BASE_DIR}time/tick_clock.cc
   ${BASE_DIR}time/tick_clock.h
   ${BASE_DIR}time/time.cc
   ${BASE_DIR}time/time.h
   ${BASE_DIR}time/time_override.cc
   ${BASE_DIR}time/time_override.h
   ${BASE_DIR}time/time_to_iso8601.cc
   ${BASE_DIR}time/time_to_iso8601.h
   ${BASE_DIR}timer/elapsed_timer.cc
   ${BASE_DIR}timer/elapsed_timer.h
   ${BASE_DIR}timer/hi_res_timer_manager.h
   #${BASE_DIR}timer/hi_res_timer_manager_win.cc
   ${BASE_DIR}timer/lap_timer.cc
   ${BASE_DIR}timer/lap_timer.h
   ${BASE_DIR}timer/timer.cc
   ${BASE_DIR}timer/timer.h
   ${BASE_DIR}token.cc
   ${BASE_DIR}token.h
   ${BASE_DIR}trace_event/auto_open_close_event.h
   ${BASE_DIR}trace_event/blame_context.cc
   ${BASE_DIR}trace_event/blame_context.h
   ${BASE_DIR}trace_event/builtin_categories.cc
   ${BASE_DIR}trace_event/builtin_categories.h
   ${BASE_DIR}trace_event/category_registry.cc
   ${BASE_DIR}trace_event/category_registry.h
   ${BASE_DIR}trace_event/common/trace_event_common.h
   #${BASE_DIR}trace_event/cpufreq_monitor_android.cc
   #${BASE_DIR}trace_event/cpufreq_monitor_android.h
   ${BASE_DIR}trace_event/event_name_filter.cc
   ${BASE_DIR}trace_event/event_name_filter.h
   ${BASE_DIR}trace_event/heap_profiler.h
   ${BASE_DIR}trace_event/heap_profiler_allocation_context.cc
   ${BASE_DIR}trace_event/heap_profiler_allocation_context.h
   ${BASE_DIR}trace_event/heap_profiler_allocation_context_tracker.cc
   ${BASE_DIR}trace_event/heap_profiler_allocation_context_tracker.h
   ${BASE_DIR}trace_event/heap_profiler_event_filter.cc
   ${BASE_DIR}trace_event/heap_profiler_event_filter.h
   #${BASE_DIR}trace_event/java_heap_dump_provider_android.cc
   #${BASE_DIR}trace_event/java_heap_dump_provider_android.h
   ${BASE_DIR}trace_event/malloc_dump_provider.cc
   ${BASE_DIR}trace_event/malloc_dump_provider.h
   ${BASE_DIR}trace_event/memory_allocator_dump.cc
   ${BASE_DIR}trace_event/memory_allocator_dump.h
   ${BASE_DIR}trace_event/memory_allocator_dump_guid.cc
   ${BASE_DIR}trace_event/memory_allocator_dump_guid.h
   ${BASE_DIR}trace_event/memory_dump_manager.cc
   ${BASE_DIR}trace_event/memory_dump_manager.h
   ${BASE_DIR}trace_event/memory_dump_manager_test_utils.h
   ${BASE_DIR}trace_event/memory_dump_provider.h
   ${BASE_DIR}trace_event/memory_dump_provider_info.cc
   ${BASE_DIR}trace_event/memory_dump_provider_info.h
   ${BASE_DIR}trace_event/memory_dump_request_args.cc
   ${BASE_DIR}trace_event/memory_dump_request_args.h
   ${BASE_DIR}trace_event/memory_dump_scheduler.cc
   ${BASE_DIR}trace_event/memory_dump_scheduler.h
   ${BASE_DIR}trace_event/memory_infra_background_whitelist.cc
   ${BASE_DIR}trace_event/memory_infra_background_whitelist.h
   ${BASE_DIR}trace_event/memory_usage_estimator.cc
   ${BASE_DIR}trace_event/memory_usage_estimator.h
   ${BASE_DIR}trace_event/process_memory_dump.cc
   ${BASE_DIR}trace_event/process_memory_dump.h
   ${BASE_DIR}trace_event/thread_instruction_count.cc
   ${BASE_DIR}trace_event/thread_instruction_count.h
   ${BASE_DIR}trace_event/trace_arguments.cc
   ${BASE_DIR}trace_event/trace_arguments.h
   ${BASE_DIR}trace_event/trace_buffer.cc
   ${BASE_DIR}trace_event/trace_buffer.h
   ${BASE_DIR}trace_event/trace_category.h
   ${BASE_DIR}trace_event/trace_config.cc
   ${BASE_DIR}trace_event/trace_config.h
   ${BASE_DIR}trace_event/trace_config_category_filter.cc
   ${BASE_DIR}trace_event/trace_config_category_filter.h
   ${BASE_DIR}trace_event/trace_event.h
   #${BASE_DIR}trace_event/trace_event_android.cc
   #${BASE_DIR}trace_event/trace_event_etw_export_win.cc
   #${BASE_DIR}trace_event/trace_event_etw_export_win.h
   ${BASE_DIR}trace_event/trace_event_filter.cc
   ${BASE_DIR}trace_event/trace_event_filter.h
   ${BASE_DIR}trace_event/trace_event_impl.cc
   ${BASE_DIR}trace_event/trace_event_impl.h
   ${BASE_DIR}trace_event/trace_event_memory_overhead.cc
   ${BASE_DIR}trace_event/trace_event_memory_overhead.h
   ${BASE_DIR}trace_event/trace_log.cc
   ${BASE_DIR}trace_event/trace_log.h
   ${BASE_DIR}trace_event/trace_log_constants.cc
   ${BASE_DIR}trace_event/traced_value.cc
   ${BASE_DIR}trace_event/traced_value.h
   ${BASE_DIR}trace_event/tracing_agent.cc
   ${BASE_DIR}trace_event/tracing_agent.h
   ${BASE_DIR}traits_bag.h
   ${BASE_DIR}tuple.h
   ${BASE_DIR}type_id.cc
   ${BASE_DIR}type_id.h
   ${BASE_DIR}unguessable_token.cc
   ${BASE_DIR}unguessable_token.h
   ${BASE_DIR}updateable_sequenced_task_runner.h
   ${BASE_DIR}value_conversions.cc
   ${BASE_DIR}value_conversions.h
   ${BASE_DIR}value_iterators.cc
   ${BASE_DIR}value_iterators.h
   ${BASE_DIR}values.cc
   ${BASE_DIR}values.h
   ${BASE_DIR}version.cc
   ${BASE_DIR}version.h
   ${BASE_DIR}vlog.cc
   ${BASE_DIR}vlog.h
   #${BASE_DIR}win/async_operation.h
   #${BASE_DIR}win/atl.h
   #${BASE_DIR}win/com_init_check_hook.cc
   #${BASE_DIR}win/com_init_check_hook.h
   #${BASE_DIR}win/com_init_util.cc
   #${BASE_DIR}win/com_init_util.h
   #${BASE_DIR}win/core_winrt_util.cc
   #${BASE_DIR}win/core_winrt_util.h
   #${BASE_DIR}win/current_module.h
   #${BASE_DIR}win/embedded_i18n/language_selector.cc
   #${BASE_DIR}win/embedded_i18n/language_selector.h
   #${BASE_DIR}win/enum_variant.cc
   #${BASE_DIR}win/enum_variant.h
   #${BASE_DIR}win/event_trace_consumer.h
   #${BASE_DIR}win/event_trace_controller.cc
   #${BASE_DIR}win/event_trace_controller.h
   #${BASE_DIR}win/event_trace_provider.cc
   #${BASE_DIR}win/event_trace_provider.h
   #${BASE_DIR}win/hstring_reference.cc
   #${BASE_DIR}win/hstring_reference.h
   #${BASE_DIR}win/i18n.cc
   #${BASE_DIR}win/i18n.h
   #${BASE_DIR}win/iat_patch_function.cc
   #${BASE_DIR}win/iat_patch_function.h
   #${BASE_DIR}win/iunknown_impl.cc
   #${BASE_DIR}win/iunknown_impl.h
   #${BASE_DIR}win/message_window.cc
   #${BASE_DIR}win/message_window.h
   #${BASE_DIR}win/object_watcher.cc
   #${BASE_DIR}win/object_watcher.h
   #${BASE_DIR}win/patch_util.cc
   #${BASE_DIR}win/patch_util.h
   #${BASE_DIR}win/post_async_results.h
   #${BASE_DIR}win/process_startup_helper.cc
   #${BASE_DIR}win/process_startup_helper.h
   #${BASE_DIR}win/propvarutil.h
   #${BASE_DIR}win/reference.h
   #${BASE_DIR}win/registry.cc
   #${BASE_DIR}win/registry.h
   #${BASE_DIR}win/resource_util.cc
   #${BASE_DIR}win/resource_util.h
   #${BASE_DIR}win/scoped_bstr.cc
   #${BASE_DIR}win/scoped_bstr.h
   #${BASE_DIR}win/scoped_co_mem.h
   #${BASE_DIR}win/scoped_com_initializer.cc
   #${BASE_DIR}win/scoped_com_initializer.h
   #${BASE_DIR}win/scoped_gdi_object.h
   #${BASE_DIR}win/scoped_handle.cc
   #${BASE_DIR}win/scoped_handle.h
   #${BASE_DIR}win/scoped_handle_verifier.cc
   #${BASE_DIR}win/scoped_handle_verifier.h
   #${BASE_DIR}win/scoped_hdc.h
   #${BASE_DIR}win/scoped_hglobal.h
   #${BASE_DIR}win/scoped_hstring.cc
   #${BASE_DIR}win/scoped_hstring.h
   #${BASE_DIR}win/scoped_process_information.cc
   #${BASE_DIR}win/scoped_process_information.h
   #${BASE_DIR}win/scoped_propvariant.h
   #${BASE_DIR}win/scoped_safearray.h
   #${BASE_DIR}win/scoped_select_object.h
   #${BASE_DIR}win/scoped_variant.cc
   #${BASE_DIR}win/scoped_variant.h
   #${BASE_DIR}win/scoped_windows_thread_environment.h
   #${BASE_DIR}win/scoped_winrt_initializer.cc
   #${BASE_DIR}win/scoped_winrt_initializer.h
   #${BASE_DIR}win/shlwapi.h
   #${BASE_DIR}win/shortcut.cc
   #${BASE_DIR}win/shortcut.h
   #${BASE_DIR}win/sphelper.h
   #${BASE_DIR}win/startup_information.cc
   #${BASE_DIR}win/startup_information.h
   #${BASE_DIR}win/typed_event_handler.h
   #${BASE_DIR}win/vector.cc
   #${BASE_DIR}win/vector.h
   #${BASE_DIR}win/win_util.cc
   #${BASE_DIR}win/win_util.h
   #${BASE_DIR}win/wincrypt_shim.h
   #${BASE_DIR}win/windows_defines.inc
   #${BASE_DIR}win/windows_types.h
   #${BASE_DIR}win/windows_undefines.inc
   #${BASE_DIR}win/windows_version.cc
   #${BASE_DIR}win/windows_version.h
   #${BASE_DIR}win/windowsx_shim.h
   #${BASE_DIR}win/winrt_storage_util.cc
   #${BASE_DIR}win/winrt_storage_util.h
   #${BASE_DIR}win/wmi.cc
   #${BASE_DIR}win/wmi.h
   #${BASE_DIR}win/wrapped_window_proc.cc
   #${BASE_DIR}win/wrapped_window_proc.h
   # base_static ###
   ${BASE_DIR}base_switches.cc
   ${BASE_DIR}base_switches.h
   # https://github.com/chromium/chromium/blob/master/base/BUILD.gn#L1894
   ${BASE_DIR}message_loop/message_pump_libevent.cc
   ${BASE_DIR}message_loop/message_pump_libevent.h
   # https://github.com/chromium/chromium/blob/master/base/BUILD.gn#L1942
   #${BASE_DIR}message_loop/message_pump_glib.cc
   #${BASE_DIR}message_loop/message_pump_glib.h
   # posix
   # https://github.com/chromium/chromium/blob/master/base/BUILD.gn#L1120
   ## ${BASE_DIR}debug/debugger_posix.cc
   ## ${BASE_DIR}debug/stack_trace_posix.cc
   ${BASE_DIR}file_descriptor_posix.h
   ${BASE_DIR}files/dir_reader_posix.h
   ## ${BASE_DIR}files/file_descriptor_watcher_posix.cc
   ## ${BASE_DIR}files/file_descriptor_watcher_posix.h
   ## ${BASE_DIR}files/file_enumerator_posix.cc
   ## ${BASE_DIR}files/file_posix.cc
   ${BASE_DIR}files/file_util_posix.cc
   ${BASE_DIR}files/memory_mapped_file_posix.cc
   ${BASE_DIR}memory/protected_memory_posix.cc
   ${BASE_DIR}message_loop/watchable_io_message_pump_posix.cc
   ${BASE_DIR}message_loop/watchable_io_message_pump_posix.h
   ${BASE_DIR}native_library_posix.cc
   ## ${BASE_DIR}posix/eintr_wrapper.h
   ## ${BASE_DIR}posix/file_descriptor_shuffle.cc
   ## ${BASE_DIR}posix/file_descriptor_shuffle.h
   ## ${BASE_DIR}posix/global_descriptors.cc
   ## ${BASE_DIR}posix/global_descriptors.h
   ${BASE_DIR}posix/safe_strerror.cc
   ${BASE_DIR}posix/safe_strerror.h
   ## ${BASE_DIR}posix/unix_domain_socket.cc
   ## ${BASE_DIR}posix/unix_domain_socket.h
   ${BASE_DIR}process/kill_posix.cc
   ## ${BASE_DIR}process/launch_posix.cc
   ${BASE_DIR}process/process_handle_posix.cc
   ## ${BASE_DIR}process/process_metrics_posix.cc
   ${BASE_DIR}process/process_posix.cc
   ${BASE_DIR}profiler/stack_sampler_posix.cc
   ${BASE_DIR}rand_util_posix.cc
   ${BASE_DIR}sampling_heap_profiler/module_cache_posix.cc
   ${BASE_DIR}strings/string_util_posix.h
   ${BASE_DIR}strings/sys_string_conversions_posix.cc
   ${BASE_DIR}sync_socket_posix.cc
   ${BASE_DIR}synchronization/condition_variable_posix.cc
   ${BASE_DIR}synchronization/lock_impl_posix.cc
   ${BASE_DIR}synchronization/waitable_event_posix.cc
   ${BASE_DIR}synchronization/waitable_event_watcher_posix.cc
   ${BASE_DIR}system/sys_info_posix.cc
   ${BASE_DIR}task/thread_pool/task_tracker_posix.cc
   ${BASE_DIR}task/thread_pool/task_tracker_posix.h
   ${BASE_DIR}threading/platform_thread_internal_posix.cc
   ${BASE_DIR}threading/platform_thread_internal_posix.h
   ${BASE_DIR}threading/platform_thread_posix.cc
   ${BASE_DIR}threading/thread_local_storage_posix.cc
   ${BASE_DIR}timer/hi_res_timer_manager_posix.cc
   # https://github.com/chromium/chromium/blob/master/base/BUILD.gn#L1185
   # ${BASE_DIR}base_paths_posix.h
   # https://github.com/chromium/chromium/blob/master/base/BUILD.gn#L1633
   ${BASE_DIR}allocator/partition_allocator/address_space_randomization.cc
   ${BASE_DIR}allocator/partition_allocator/address_space_randomization.h
   ${BASE_DIR}allocator/partition_allocator/oom.h
   ${BASE_DIR}allocator/partition_allocator/oom_callback.cc
   ${BASE_DIR}allocator/partition_allocator/oom_callback.h
   ${BASE_DIR}allocator/partition_allocator/page_allocator.cc
   ${BASE_DIR}allocator/partition_allocator/page_allocator.h
   ${BASE_DIR}allocator/partition_allocator/page_allocator_internal.h
   ${BASE_DIR}allocator/partition_allocator/partition_alloc.cc
   ${BASE_DIR}allocator/partition_allocator/partition_alloc.h
   ${BASE_DIR}allocator/partition_allocator/partition_alloc_constants.h
   ${BASE_DIR}allocator/partition_allocator/partition_bucket.cc
   ${BASE_DIR}allocator/partition_allocator/partition_bucket.h
   ${BASE_DIR}allocator/partition_allocator/partition_cookie.h
   ${BASE_DIR}allocator/partition_allocator/partition_direct_map_extent.h
   ${BASE_DIR}allocator/partition_allocator/partition_freelist_entry.h
   ${BASE_DIR}allocator/partition_allocator/partition_oom.cc
   ${BASE_DIR}allocator/partition_allocator/partition_oom.h
   ${BASE_DIR}allocator/partition_allocator/partition_page.cc
   ${BASE_DIR}allocator/partition_allocator/partition_page.h
   ${BASE_DIR}allocator/partition_allocator/partition_root_base.cc
   ${BASE_DIR}allocator/partition_allocator/partition_root_base.h
   ${BASE_DIR}allocator/partition_allocator/spin_lock.cc
   ${BASE_DIR}allocator/partition_allocator/spin_lock.h
   # https://github.com/chromium/chromium/blob/master/base/BUILD.gn#L1665
   ${BASE_DIR}allocator/partition_allocator/page_allocator_internals_posix.h
   # https://github.com/chromium/chromium/blob/master/base/BUILD.gn#L1903
   ${BASE_DIR}memory/platform_shared_memory_region_posix.cc
   ${BASE_DIR}memory/shared_memory_handle_posix.cc
   # https://github.com/chromium/chromium/blob/master/base/BUILD.gn#L1910
   ${BASE_DIR}memory/shared_memory_posix.cc
   # https://github.com/chromium/chromium/blob/master/base/BUILD.gn#L1914
   ${BASE_DIR}time/time_conversion_posix.cc
   ${BASE_DIR}time/time_exploded_posix.cc
   ${BASE_DIR}time/time_now_posix.cc
   # https://github.com/chromium/chromium/blob/master/base/BUILD.gn#L1922
   ##"posix/can_lower_nice_to.cc
   ##"posix/can_lower_nice_to.h
   # https://github.com/chromium/chromium/blob/master/base/BUILD.gn#L1929
   ## "power_monitor/power_monitor_device_source_stub.cc"
   # https://github.com/chromium/chromium/blob/master/base/BUILD.gn#L2747
   ## ${BASE_DIR}files/dir_reader_posix_unittest.cc
   ## ${BASE_DIR}files/file_descriptor_watcher_posix_unittest.cc
   ## ${BASE_DIR}message_loop/message_loop_io_posix_unittest.cc
   ## ${BASE_DIR}posix/file_descriptor_shuffle_unittest.cc
   ## ${BASE_DIR}posix/unix_domain_socket_unittest.cc
   ## ${BASE_DIR}task/thread_pool/task_tracker_posix_unittest.cc
   ### build ###
   build/build_config.h
)

if(EMSCRIPTEN)
  list(APPEND BASE_SOURCES
    #${BASE_DIR}atomicops_internals_portable.h
    #${BASE_DIR}critical_closure_internal_ios.mm
    ${BASE_DIR}debug/activity_analyzer.cc
    ${BASE_DIR}debug/activity_analyzer.h
    ${BASE_DIR}debug/activity_tracker.cc
    ${BASE_DIR}debug/activity_tracker.h
    ###${BASE_DIR}debug/alias.cc
    ###${BASE_DIR}debug/alias.h
    ### ${BASE_DIR}debug/asan_invalid_access.cc
    ### ${BASE_DIR}debug/asan_invalid_access.h
    #${BASE_DIR}debug/close_handle_hook_win.cc
    #${BASE_DIR}debug/close_handle_hook_win.h
    ${BASE_DIR}debug/crash_logging.cc
    ${BASE_DIR}debug/crash_logging.h
    ${BASE_DIR}debug/debugger.cc
    ${BASE_DIR}debug/debugger.h
    #${BASE_DIR}debug/debugger_win.cc
    ${BASE_DIR}debug/dump_without_crashing.cc
    ${BASE_DIR}debug/dump_without_crashing.h
    #${BASE_DIR}debug/gdi_debug_util_win.cc
    #${BASE_DIR}debug/gdi_debug_util_win.h
    #${BASE_DIR}debug/invalid_access_win.cc
    #${BASE_DIR}debug/invalid_access_win.h
    ${BASE_DIR}debug/leak_annotations.h
    ${BASE_DIR}debug/leak_tracker.h
    ##${BASE_DIR}debug/proc_maps_linux.cc
    ##${BASE_DIR}debug/proc_maps_linux.h
    ${BASE_DIR}debug/profiler.cc
    ${BASE_DIR}debug/profiler.h
    ${BASE_DIR}debug/stack_trace.cc
    ${BASE_DIR}debug/stack_trace.h
    #${BASE_DIR}debug/stack_trace_android.cc
    #${BASE_DIR}debug/stack_trace_win.cc
    ${BASE_DIR}debug/task_trace.cc
    ${BASE_DIR}debug/task_trace.h
    #
    ${BASE_DIR}threading/platform_thread_linux.cc
    #
    ${BASE_DIR}files/file_util_linux.cc
    ${BASE_DIR}process/memory_linux.cc
    ${BASE_DIR}process/process_handle_linux.cc
    #${BASE_DIR}process/process_metrics_linux.cc
    #
    ${BASE_DIR}debug/debugger_posix.cc
    ${BASE_DIR}debug/stack_trace_posix.cc
    ${BASE_DIR}files/file_descriptor_watcher_posix.cc
    ${BASE_DIR}files/file_descriptor_watcher_posix.h
    ${BASE_DIR}files/file_enumerator_posix.cc
    ${BASE_DIR}files/file_posix.cc
    ${BASE_DIR}posix/eintr_wrapper.h
    ${BASE_DIR}posix/file_descriptor_shuffle.cc
    ${BASE_DIR}posix/file_descriptor_shuffle.h
    ${BASE_DIR}posix/global_descriptors.cc
    ${BASE_DIR}posix/global_descriptors.h
    ${BASE_DIR}posix/unix_domain_socket.cc
    ${BASE_DIR}posix/unix_domain_socket.h
    ${BASE_DIR}process/launch_posix.cc
    ##${BASE_DIR}process/process_metrics_posix.cc
    ${BASE_DIR}base_paths_posix.h
    ${BASE_DIR}posix/can_lower_nice_to.cc
    ${BASE_DIR}posix/can_lower_nice_to.h
    # https://github.com/chromium/chromium/blob/master/base/BUILD.gn#L1929
    ${BASE_DIR}power_monitor/power_monitor_device_source_stub.cc
    # https://github.com/chromium/chromium/blob/master/base/BUILD.gn#L2747
    ###${BASE_DIR}files/dir_reader_posix_unittest.cc
    ###${BASE_DIR}files/file_descriptor_watcher_posix_unittest.cc
    ###${BASE_DIR}message_loop/message_loop_io_posix_unittest.cc
    ###${BASE_DIR}posix/file_descriptor_shuffle_unittest.cc
    ###${BASE_DIR}posix/unix_domain_socket_unittest.cc
    ###${BASE_DIR}task/thread_pool/task_tracker_posix_unittest.cc
  )
elseif(${CMAKE_SYSTEM_NAME} STREQUAL "Linux")
  list(APPEND BASE_SOURCES
    #${BASE_DIR}critical_closure_internal_ios.mm
    ${BASE_DIR}debug/activity_analyzer.cc
    ${BASE_DIR}debug/activity_analyzer.h
    ${BASE_DIR}debug/activity_tracker.cc
    ${BASE_DIR}debug/activity_tracker.h
    ###${BASE_DIR}debug/alias.cc
    ###${BASE_DIR}debug/alias.h
    ### ${BASE_DIR}debug/asan_invalid_access.cc
    ### ${BASE_DIR}debug/asan_invalid_access.h
    #${BASE_DIR}debug/close_handle_hook_win.cc
    #${BASE_DIR}debug/close_handle_hook_win.h
    ${BASE_DIR}debug/crash_logging.cc
    ${BASE_DIR}debug/crash_logging.h
    ${BASE_DIR}debug/debugger.cc
    ${BASE_DIR}debug/debugger.h
    #${BASE_DIR}debug/debugger_win.cc
    ${BASE_DIR}debug/dump_without_crashing.cc
    ${BASE_DIR}debug/dump_without_crashing.h
    #${BASE_DIR}debug/gdi_debug_util_win.cc
    #${BASE_DIR}debug/gdi_debug_util_win.h
    #${BASE_DIR}debug/invalid_access_win.cc
    #${BASE_DIR}debug/invalid_access_win.h
    ${BASE_DIR}debug/leak_annotations.h
    ${BASE_DIR}debug/leak_tracker.h
    ${BASE_DIR}debug/proc_maps_linux.cc
    ${BASE_DIR}debug/proc_maps_linux.h
    ${BASE_DIR}debug/profiler.cc
    ${BASE_DIR}debug/profiler.h
    ${BASE_DIR}debug/stack_trace.cc
    ${BASE_DIR}debug/stack_trace.h
    #${BASE_DIR}debug/stack_trace_android.cc
    #${BASE_DIR}debug/stack_trace_win.cc
    ${BASE_DIR}debug/task_trace.cc
    ${BASE_DIR}debug/task_trace.h
    #
    ${BASE_DIR}threading/platform_thread_linux.cc
    #
    ${BASE_DIR}files/file_util_linux.cc
    ${BASE_DIR}process/memory_linux.cc
    ${BASE_DIR}process/process_handle_linux.cc
    ${BASE_DIR}process/process_metrics_linux.cc
    #
    ${BASE_DIR}debug/debugger_posix.cc
    ${BASE_DIR}debug/stack_trace_posix.cc
    ${BASE_DIR}files/file_descriptor_watcher_posix.cc
    ${BASE_DIR}files/file_descriptor_watcher_posix.h
    ${BASE_DIR}files/file_enumerator_posix.cc
    ${BASE_DIR}files/file_posix.cc
    ${BASE_DIR}posix/eintr_wrapper.h
    ${BASE_DIR}posix/file_descriptor_shuffle.cc
    ${BASE_DIR}posix/file_descriptor_shuffle.h
    ${BASE_DIR}posix/global_descriptors.cc
    ${BASE_DIR}posix/global_descriptors.h
    ${BASE_DIR}posix/unix_domain_socket.cc
    ${BASE_DIR}posix/unix_domain_socket.h
    ${BASE_DIR}process/launch_posix.cc
    ${BASE_DIR}process/process_metrics_posix.cc
    ${BASE_DIR}base_paths_posix.h
    ${BASE_DIR}posix/can_lower_nice_to.cc
    ${BASE_DIR}posix/can_lower_nice_to.h
    # https://github.com/chromium/chromium/blob/master/base/BUILD.gn#L1929
    ${BASE_DIR}power_monitor/power_monitor_device_source_stub.cc
    # https://github.com/chromium/chromium/blob/master/base/BUILD.gn#L2747
    ###${BASE_DIR}files/dir_reader_posix_unittest.cc
    ###${BASE_DIR}files/file_descriptor_watcher_posix_unittest.cc
    ###${BASE_DIR}message_loop/message_loop_io_posix_unittest.cc
    ###${BASE_DIR}posix/file_descriptor_shuffle_unittest.cc
    ###${BASE_DIR}posix/unix_domain_socket_unittest.cc
    ###${BASE_DIR}task/thread_pool/task_tracker_posix_unittest.cc
  )
else()
  message(FATAL_ERROR "TODO: port base")
endif()

list(APPEND WTF_SOURCES
  ${WTF_DIR}allocator.cc
  #${WTF_DIR}allocator.h
  ${WTF_DIR}allocator/partition_allocator.cc
  #${WTF_DIR}allocator/partition_allocator.h
  ${WTF_DIR}allocator/partitions.cc
  #${WTF_DIR}allocator/partitions.h
  ${WTF_DIR}assertions.cc
  #${WTF_DIR}assertions.h
  #${WTF_DIR}bloom_filter.h
  #${WTF_DIR}casting.h
  #${WTF_DIR}conditional_destructor.h
  #${WTF_DIR}container_annotations.h
  ${WTF_DIR}date_math.cc
  #${WTF_DIR}date_math.h
  ${WTF_DIR}decimal.cc
  #${WTF_DIR}decimal.h
  #${WTF_DIR}deque.h
  #${WTF_DIR}doubly_linked_list.h
  ${WTF_DIR}dtoa/bignum-dtoa.cc
  # #${WTF_DIR}dtoa/bignum-dtoa.h
  ${WTF_DIR}dtoa/bignum.cc
  # #${WTF_DIR}dtoa/bignum.h
  ${WTF_DIR}dtoa/cached-powers.cc
  # #${WTF_DIR}dtoa/cached-powers.h
  ${WTF_DIR}dtoa/diy-fp.cc
  # #${WTF_DIR}dtoa/diy-fp.h
  ${WTF_DIR}dtoa/double-conversion.cc
  # #${WTF_DIR}dtoa/double-conversion.h
  # #${WTF_DIR}dtoa/double.h
  ${WTF_DIR}dtoa/dtoa.cc
  # #${WTF_DIR}dtoa/dtoa.h
  ${WTF_DIR}dtoa/fast-dtoa.cc
  # #${WTF_DIR}dtoa/fast-dtoa.h
  ${WTF_DIR}dtoa/fixed-dtoa.cc
  # #${WTF_DIR}dtoa/fixed-dtoa.h
  ${WTF_DIR}dtoa/strtod.cc
  # #${WTF_DIR}dtoa/strtod.h
  # #${WTF_DIR}dtoa/utils.h
  ${WTF_DIR}dynamic_annotations.cc
  #${WTF_DIR}dynamic_annotations.h
  #${WTF_DIR}forward.h
  #${WTF_DIR}functional.h
  #${WTF_DIR}get_ptr.h
  #${WTF_DIR}hash_counted_set.h
  #${WTF_DIR}hash_functions.h
  #${WTF_DIR}hash_iterators.h
  #${WTF_DIR}hash_map.h
  #${WTF_DIR}hash_set.h
  ${WTF_DIR}hash_table.cc
  #${WTF_DIR}hash_table.h
  #${WTF_DIR}hash_table_deleted_value_type.h
  #${WTF_DIR}hash_traits.h
  #${WTF_DIR}leak_annotations.h
  #${WTF_DIR}linked_hash_set.h
  #${WTF_DIR}list_hash_set.h
  #${WTF_DIR}math_extras.h
  #${WTF_DIR}pod_arena.h
  #${WTF_DIR}pod_free_list_arena.h
  #${WTF_DIR}pod_interval.h
  #${WTF_DIR}pod_interval_tree.h
  #${WTF_DIR}pod_red_black_tree.h
  #${WTF_DIR}ref_counted.h
  #${WTF_DIR}sanitizers.h
  ${WTF_DIR}scoped_logger.cc
  #${WTF_DIR}scoped_logger.h
  ${WTF_DIR}size_assertions.cc
  #${WTF_DIR}size_assertions.h
  ${WTF_DIR}stack_util.cc
  #${WTF_DIR}stack_util.h
  #${WTF_DIR}static_constructors.h
  #${WTF_DIR}std_lib_extras.h
  ${WTF_DIR}text/ascii_ctype.cc
  # #${WTF_DIR}text/ascii_ctype.h
  # #${WTF_DIR}text/ascii_fast_path.h
  ${WTF_DIR}text/atomic_string.cc
  # #${WTF_DIR}text/atomic_string.h
  ${WTF_DIR}text/atomic_string_cf.cc
  # #${WTF_DIR}text/atomic_string_hash.h
  ${WTF_DIR}text/atomic_string_table.cc
  # #${WTF_DIR}text/atomic_string_table.h
  ${WTF_DIR}text/base64.cc
  # #${WTF_DIR}text/base64.h
  # #${WTF_DIR}text/character_names.h
  ${WTF_DIR}text/cstring.cc
  # #${WTF_DIR}text/cstring.h
  # #${WTF_DIR}text/integer_to_string_conversion.h
  ${WTF_DIR}text/line_ending.cc
  # #${WTF_DIR}text/line_ending.h
  # #${WTF_DIR}text/number_parsing_options.h
  # #${WTF_DIR}text/parsing_utilities.h
  # #${WTF_DIR}text/string_buffer.h
  ${WTF_DIR}text/string_builder.cc
  # #${WTF_DIR}text/string_builder.h
  ${WTF_DIR}text/string_concatenate.cc
  # #${WTF_DIR}text/string_concatenate.h
  # #${WTF_DIR}text/string_hash.h
  # #${WTF_DIR}text/string_hasher.h
  ${WTF_DIR}text/string_impl.cc
  # #${WTF_DIR}text/string_impl.h
  # #${WTF_DIR}text/string_impl_mac.mm
  # #${WTF_DIR}text/string_mac.mm
  # #${WTF_DIR}text/string_operators.h
  ${WTF_DIR}text/string_statics.cc
  # #${WTF_DIR}text/string_statics.h
  ${WTF_DIR}text/string_to_number.cc
  # #${WTF_DIR}text/string_to_number.h
  ${WTF_DIR}text/string_utf8_adaptor.cc
  # #${WTF_DIR}text/string_utf8_adaptor.h
  ${WTF_DIR}text/string_view.cc
  # #${WTF_DIR}text/string_view.h
  ${WTF_DIR}text/text_codec.cc
  # #${WTF_DIR}text/text_codec.h
  # #${WTF_DIR}text/text_codec_ascii_fast_path.h
  ${WTF_DIR}text/text_codec_icu.cc
  # #${WTF_DIR}text/text_codec_icu.h
  ${WTF_DIR}text/text_codec_latin1.cc
  # #${WTF_DIR}text/text_codec_latin1.h
  ${WTF_DIR}text/text_codec_replacement.cc
  # #${WTF_DIR}text/text_codec_replacement.h
  ${WTF_DIR}text/text_codec_user_defined.cc
  # #${WTF_DIR}text/text_codec_user_defined.h
  ${WTF_DIR}text/text_codec_utf16.cc
  # #${WTF_DIR}text/text_codec_utf16.h
  ${WTF_DIR}text/text_codec_utf8.cc
  # #${WTF_DIR}text/text_codec_utf8.h
  ${WTF_DIR}text/text_encoding.cc
  # #${WTF_DIR}text/text_encoding.h
  ${WTF_DIR}text/text_encoding_registry.cc
  # #${WTF_DIR}text/text_encoding_registry.h
  ${WTF_DIR}text/text_position.cc
  # #${WTF_DIR}text/text_position.h
  ${WTF_DIR}text/text_stream.cc
  # #${WTF_DIR}text/text_stream.h
  # #${WTF_DIR}text/unicode.h
  ${WTF_DIR}text/utf8.cc
  # #${WTF_DIR}text/utf8.h
  ${WTF_DIR}text/wtf_string.cc
  #${WTF_DIR}text/wtf_string.h
  # #${WTF_DIR}thread_restriction_verifier.h
  # #${WTF_DIR}thread_safe_ref_counted.h
  # #${WTF_DIR}thread_specific.h
  ${WTF_DIR}threading.cc
  # #${WTF_DIR}threading.h
  # #${WTF_DIR}threading_primitives.h
  ${WTF_DIR}threading_pthreads.cc
  # ${WTF_DIR}threading_win.cc
  ${WTF_DIR}time.cc
  #${WTF_DIR}time.h
  #${WTF_DIR}tree_node.h
  #${WTF_DIR}type_traits.h
  ${WTF_DIR}typed_arrays/array_buffer.cc
  #${WTF_DIR}typed_arrays/array_buffer.h
  ${WTF_DIR}typed_arrays/array_buffer_contents.cc
  #${WTF_DIR}typed_arrays/array_buffer_contents.h
  ${WTF_DIR}typed_arrays/array_buffer_view.cc
  #${WTF_DIR}typed_arrays/array_buffer_view.h
  ${WTF_DIR}typed_arrays/array_piece.cc
  #${WTF_DIR}typed_arrays/array_piece.h
  #${WTF_DIR}typed_arrays/bigint64_array.h
  #${WTF_DIR}typed_arrays/biguint64_array.h
  #${WTF_DIR}typed_arrays/float32_array.h
  #${WTF_DIR}typed_arrays/float64_array.h
  #${WTF_DIR}typed_arrays/int16_array.h
  #${WTF_DIR}typed_arrays/int32_array.h
  #${WTF_DIR}typed_arrays/int8_array.h
  #${WTF_DIR}typed_arrays/integral_typed_array_base.h
  #${WTF_DIR}typed_arrays/typed_array_base.h
  #${WTF_DIR}typed_arrays/uint16_array.h
  #${WTF_DIR}typed_arrays/uint32_array.h
  #${WTF_DIR}typed_arrays/uint8_array.h
  #${WTF_DIR}typed_arrays/uint8_clamped_array.h
  #${WTF_DIR}vector.h
  #${WTF_DIR}vector_traits.h
  ${WTF_DIR}wtf.cc
  #${WTF_DIR}wtf.h
  #${WTF_DIR}wtf_export.h
  # #${WTF_DIR}wtf_size_t.h
)

if(EMSCRIPTEN)
  # TODO
elseif(${CMAKE_SYSTEM_NAME} STREQUAL "Linux")
  list(APPEND WTF_SOURCES
    # TODO
    # ${WTF_DIR}wtf.cc
  )
else()
  message(FATAL_ERROR "TODO: port WTF")
endif()

if (EMSCRIPTEN)
  list(APPEND WTF_SOURCES
    # port
    # TODO
  )
endif()

#list(APPEND WTF_HEADERS
#  wtf/Alignment.h
#  wtf/AlwaysInline.h
#  wtf/ASCIICType.h
#  wtf/Assertions.h
#  wtf/Atomics.h
#  wtf/AVLTree.h
#  wtf/Bitmap.h
#  wtf/BlockStack.h
#  wtf/BloomFilter.h
#  wtf/BumpPointerAllocator.h
#  wtf/ByteArray.h
#  wtf/Compiler.h
#  wtf/Complex.h
#  wtf/CrossThreadRefCounted.h
#  wtf/CryptographicallyRandomNumber.h
#  wtf/CurrentTime.h
#  wtf/DateMath.h
#  wtf/DecimalNumber.h
#  wtf/Decoder.h
#  wtf/Deque.h
#  wtf/DisallowCType.h
#  wtf/DoublyLinkedList.h
#  wtf/dtoa.h
#  wtf/DynamicAnnotations.h
#  wtf/Encoder.h
#  wtf/ExportMacros.h
#  wtf/FastAllocBase.h
#  wtf/FastMalloc.h
#  wtf/FixedArray.h
#  wtf/Forward.h
#  wtf/GetPtr.h
#  wtf/HashCountedSet.h
#  wtf/HashFunctions.h
#  wtf/HashIterators.h
#  wtf/HashMap.h
#  wtf/HashSet.h
#  wtf/HashTable.h
#  wtf/HashTraits.h
#  wtf/HexNumber.h
#  wtf/ListHashSet.h
#  wtf/ListRefPtr.h
#  wtf/Locker.h
#  wtf/MainThread.h
#  wtf/MallocZoneSupport.h
#  wtf/MathExtras.h
#  wtf/MD5.h
#  wtf/MessageQueue.h
#  wtf/Noncopyable.h
#  wtf/NonCopyingSort.h
#  wtf/NotFound.h
#  wtf/NullPtr.h
#  wtf/OSAllocator.h
#  wtf/OSRandomSource.h
#  wtf/OwnArrayPtr.h
#  wtf/OwnFastMallocPtr.h
#  wtf/OwnPtr.h
#  wtf/OwnPtrCommon.h
#  wtf/PageAllocation.h
#  wtf/PageAllocationAligned.h
#  wtf/PageAllocatorSymbian.h
#  wtf/PageBlock.h
#  wtf/PageReservation.h
#  wtf/ParallelJobs.h
#  wtf/ParallelJobsGeneric.h
#  wtf/ParallelJobsLibdispatch.h
#  wtf/ParallelJobsOpenMP.h
#  wtf/PassOwnArrayPtr.h
#  wtf/PassOwnPtr.h
#  wtf/PassRefPtr.h
#  wtf/PassTraits.h
#  wtf/Platform.h
#  wtf/PossiblyNull.h
#  wtf/RandomNumber.h
#  wtf/RandomNumberSeed.h
#  wtf/RefCounted.h
#  wtf/RefCountedLeakCounter.h
#  wtf/RefPtr.h
#  wtf/RefPtrHashMap.h
#  wtf/RetainPtr.h
#  wtf/SegmentedVector.h
#  wtf/SentinelLinkedList.h
#  wtf/SHA1.h
#  wtf/SinglyLinkedList.h
#  wtf/StackBounds.h
#  wtf/StaticConstructors.h
#  wtf/StdLibExtras.h
#  wtf/StringExtras.h
#  wtf/StringHasher.h
#  wtf/TCPackedCache.h
#  wtf/TCPageMap.h
#  wtf/TCSpinLock.h
#  wtf/TCSystemAlloc.h
#  wtf/ThreadFunctionInvocation.h
#  wtf/ThreadIdentifierDataPthreads.h
#  wtf/Threading.h
#  wtf/ThreadingPrimitives.h
#  wtf/ThreadRestrictionVerifier.h
#  wtf/ThreadSafeRefCounted.h
#  wtf/ThreadSpecific.h
#  wtf/TypeTraits.h
#  wtf/UnusedParam.h
#  wtf/ValueCheck.h
#  wtf/Vector.h
#  wtf/VectorTraits.h
#  wtf/VMTags.h
#  wtf/WTFThreadData.h
#  )
#
#list(APPEND WTF_TEXT_HEADERS
#  wtf/text/AtomicString.h
#  wtf/text/AtomicStringHash.h
#  wtf/text/AtomicStringImpl.h
#  wtf/text/CString.h
#  wtf/text/StringBuffer.h
#  wtf/text/StringHash.h
#  wtf/text/StringImpl.h
#  wtf/text/StringImplBase.h
#  wtf/text/WTFString.h
#  )
#
#list(APPEND WTF_UNICODE_HEADERS
#  wtf/unicode/CharacterNames.h
#  wtf/unicode/Collator.h
#  wtf/unicode/Unicode.h
#  wtf/unicode/UTF8.h
#  )
#
#list(APPEND WTF_UNICODE_ICU_HEADERS
#  wtf/unicode/icu/UnicodeIcu.h
#  )

if (APPLE)
  #list(APPEND WTF_SOURCES wtf/mac/MainThreadMac.mm)
endif ()

option(SINGLE_THREADED "Enable single threaded mode" OFF)

set(modp_b64_FULL_DIR
  third_party/modp_b64/
)

set(modp_b64_INCLUDE_DIRS
  ${modp_b64_FULL_DIR}
)

# see https://github.com/chromium/chromium/tree/master/third_party/modp_b64
set(modp_b64_SOURCES
  ${modp_b64_FULL_DIR}/modp_b64.cc
  ${modp_b64_FULL_DIR}/modp_b64.h
  ${modp_b64_FULL_DIR}/modp_b64_data.h
)

#set(ICU_FULL_DIR
#  #third_party/icu/
#  #../../thirdparty/skia/third_party/externals/icu/
#  #../../thirdparty/icu/
#  ${CMAKE_CURRENT_SOURCE_DIR}/third_party/icu/
#)
#
#set(OWN_ICU_INCLUDE_DIRS
#  ${ICU_FULL_DIR}
#  #${ICU_FULL_DIR}source/common/unicode
#  #${ICU_FULL_DIR}source/common
#  #${ICU_FULL_DIR}source/i18n
#  ${ICU_FULL_DIR}unicode
#)
#
## find source/i18n -maxdepth 1 ! -type d | egrep '\.(c|cpp)$' |  sort | sed "s/^\(.*\)$/ '\1',/"
## find source/common -maxdepth 1 ! -type d | egrep '\.(c|cpp)$' |  sort | sed "s/^\(.*\)$/ '\1',/"
## see https://github.com/unicode-org/icu/tree/master/icu4c/source/common
## see https://chromium.googlesource.com/chromium/deps/icu/+/refs/heads/master/icu.gypi
#set(ICU_SOURCES
# ${ICU_FULL_DIR}cmemory.c
# ${ICU_FULL_DIR}cstring.c
# ${ICU_FULL_DIR}cwchar.c
# ${ICU_FULL_DIR}decContext.c
# ${ICU_FULL_DIR}decNumber.c
# ${ICU_FULL_DIR}icudataver.c
# ${ICU_FULL_DIR}locmap.c
# ${ICU_FULL_DIR}propsvec.c
# ${ICU_FULL_DIR}uarrsort.c
# ${ICU_FULL_DIR}ubidi.c
# ${ICU_FULL_DIR}ubidiln.c
# ${ICU_FULL_DIR}ubidiwrt.c
# ${ICU_FULL_DIR}ubidi_props.c
# ${ICU_FULL_DIR}ucat.c
# ${ICU_FULL_DIR}uchar.c
# ${ICU_FULL_DIR}ucmndata.c
# ${ICU_FULL_DIR}ucnv.c
# ${ICU_FULL_DIR}ucnvdisp.c
# ${ICU_FULL_DIR}ucnvhz.c
# ${ICU_FULL_DIR}ucnvisci.c
# ${ICU_FULL_DIR}ucnvlat1.c
# ${ICU_FULL_DIR}ucnvscsu.c
# ${ICU_FULL_DIR}ucnv_cb.c
# ${ICU_FULL_DIR}ucnv_cnv.c
# ${ICU_FULL_DIR}ucnv_ct.c
# ${ICU_FULL_DIR}ucnv_err.c
# ${ICU_FULL_DIR}ucnv_lmb.c
# ${ICU_FULL_DIR}ucnv_set.c
# ${ICU_FULL_DIR}ucnv_u16.c
# ${ICU_FULL_DIR}ucnv_u32.c
# ${ICU_FULL_DIR}ucnv_u7.c
# ${ICU_FULL_DIR}ucnv_u8.c
# ${ICU_FULL_DIR}udatamem.c
# ${ICU_FULL_DIR}udataswp.c
# ${ICU_FULL_DIR}uenum.c
# ${ICU_FULL_DIR}uhash.c
# ${ICU_FULL_DIR}uinvchar.c
# ${ICU_FULL_DIR}ulist.c
# ${ICU_FULL_DIR}ulocdata.c
# ${ICU_FULL_DIR}uloc_tag.c
# ${ICU_FULL_DIR}umapfile.c
# ${ICU_FULL_DIR}umath.c
# ${ICU_FULL_DIR}uresdata.c
# ${ICU_FULL_DIR}ures_cnv.c
# ${ICU_FULL_DIR}uscript.c
# ${ICU_FULL_DIR}usc_impl.c
# ${ICU_FULL_DIR}ustrfmt.c
# ${ICU_FULL_DIR}utf_impl.c
# ${ICU_FULL_DIR}utmscale.c
# ${ICU_FULL_DIR}utrace.c
# ${ICU_FULL_DIR}utypes.c
# ${ICU_FULL_DIR}wintz.c
# ${ICU_FULL_DIR}stubdata.c
# ${ICU_FULL_DIR}affixpatternparser.cpp
# ${ICU_FULL_DIR}alphaindex.cpp
# ${ICU_FULL_DIR}anytrans.cpp
# ${ICU_FULL_DIR}appendable.cpp
# ${ICU_FULL_DIR}astro.cpp
# ${ICU_FULL_DIR}basictz.cpp
# ${ICU_FULL_DIR}bmpset.cpp
# ${ICU_FULL_DIR}bocsu.cpp
# ${ICU_FULL_DIR}brkeng.cpp
# ${ICU_FULL_DIR}brkiter.cpp
# ${ICU_FULL_DIR}brktrans.cpp
# ${ICU_FULL_DIR}buddhcal.cpp
# ${ICU_FULL_DIR}bytestream.cpp
# ${ICU_FULL_DIR}bytestrie.cpp
# ${ICU_FULL_DIR}bytestriebuilder.cpp
# ${ICU_FULL_DIR}bytestrieiterator.cpp
# ${ICU_FULL_DIR}calendar.cpp
# ${ICU_FULL_DIR}caniter.cpp
# ${ICU_FULL_DIR}casetrn.cpp
# ${ICU_FULL_DIR}cecal.cpp
# ${ICU_FULL_DIR}chariter.cpp
# ${ICU_FULL_DIR}charstr.cpp
# ${ICU_FULL_DIR}chnsecal.cpp
# ${ICU_FULL_DIR}choicfmt.cpp
# ${ICU_FULL_DIR}coleitr.cpp
# ${ICU_FULL_DIR}coll.cpp
# ${ICU_FULL_DIR}collation.cpp
# ${ICU_FULL_DIR}collationbuilder.cpp
# ${ICU_FULL_DIR}collationcompare.cpp
# ${ICU_FULL_DIR}collationdata.cpp
# ${ICU_FULL_DIR}collationdatabuilder.cpp
# ${ICU_FULL_DIR}collationdatareader.cpp
# ${ICU_FULL_DIR}collationdatawriter.cpp
# ${ICU_FULL_DIR}collationfastlatin.cpp
# ${ICU_FULL_DIR}collationfastlatinbuilder.cpp
# ${ICU_FULL_DIR}collationfcd.cpp
# ${ICU_FULL_DIR}collationiterator.cpp
# ${ICU_FULL_DIR}collationkeys.cpp
# ${ICU_FULL_DIR}collationroot.cpp
# ${ICU_FULL_DIR}collationrootelements.cpp
# ${ICU_FULL_DIR}collationruleparser.cpp
# ${ICU_FULL_DIR}collationsets.cpp
# ${ICU_FULL_DIR}collationsettings.cpp
# ${ICU_FULL_DIR}collationtailoring.cpp
# ${ICU_FULL_DIR}collationweights.cpp
# ${ICU_FULL_DIR}compactdecimalformat.cpp
# ${ICU_FULL_DIR}coptccal.cpp
# ${ICU_FULL_DIR}cpdtrans.cpp
# ${ICU_FULL_DIR}csdetect.cpp
# ${ICU_FULL_DIR}csmatch.cpp
# ${ICU_FULL_DIR}csr2022.cpp
# ${ICU_FULL_DIR}csrecog.cpp
# ${ICU_FULL_DIR}csrmbcs.cpp
# ${ICU_FULL_DIR}csrsbcs.cpp
# ${ICU_FULL_DIR}csrucode.cpp
# ${ICU_FULL_DIR}csrutf8.cpp
# ${ICU_FULL_DIR}curramt.cpp
# ${ICU_FULL_DIR}currfmt.cpp
# ${ICU_FULL_DIR}currpinf.cpp
# ${ICU_FULL_DIR}currunit.cpp
# ${ICU_FULL_DIR}dangical.cpp
# ${ICU_FULL_DIR}datefmt.cpp
# ${ICU_FULL_DIR}dcfmtsym.cpp
# ${ICU_FULL_DIR}decfmtst.cpp
# ${ICU_FULL_DIR}decimalformatpattern.cpp
# ${ICU_FULL_DIR}decimfmt.cpp
# ${ICU_FULL_DIR}decimfmtimpl.cpp
# ${ICU_FULL_DIR}dictbe.cpp
# ${ICU_FULL_DIR}dictionarydata.cpp
# ${ICU_FULL_DIR}digitaffix.cpp
# ${ICU_FULL_DIR}digitaffixesandpadding.cpp
# ${ICU_FULL_DIR}digitformatter.cpp
# ${ICU_FULL_DIR}digitgrouping.cpp
# ${ICU_FULL_DIR}digitinterval.cpp
# ${ICU_FULL_DIR}digitlst.cpp
# ${ICU_FULL_DIR}dtfmtsym.cpp
# ${ICU_FULL_DIR}dtintrv.cpp
# ${ICU_FULL_DIR}dtitvfmt.cpp
# ${ICU_FULL_DIR}dtitvinf.cpp
# ${ICU_FULL_DIR}dtptngen.cpp
# ${ICU_FULL_DIR}dtrule.cpp
# ${ICU_FULL_DIR}errorcode.cpp
# ${ICU_FULL_DIR}esctrn.cpp
# ${ICU_FULL_DIR}ethpccal.cpp
# ${ICU_FULL_DIR}filteredbrk.cpp
# ${ICU_FULL_DIR}filterednormalizer2.cpp
# ${ICU_FULL_DIR}fmtable.cpp
# ${ICU_FULL_DIR}fmtable_cnv.cpp
# ${ICU_FULL_DIR}format.cpp
# ${ICU_FULL_DIR}fphdlimp.cpp
# ${ICU_FULL_DIR}fpositer.cpp
# ${ICU_FULL_DIR}funcrepl.cpp
# ${ICU_FULL_DIR}gender.cpp
# ${ICU_FULL_DIR}gregocal.cpp
# ${ICU_FULL_DIR}gregoimp.cpp
# ${ICU_FULL_DIR}hebrwcal.cpp
# ${ICU_FULL_DIR}icuplug.cpp
# ${ICU_FULL_DIR}identifier_info.cpp
# ${ICU_FULL_DIR}indiancal.cpp
# ${ICU_FULL_DIR}inputext.cpp
# ${ICU_FULL_DIR}islamcal.cpp
# ${ICU_FULL_DIR}japancal.cpp
# ${ICU_FULL_DIR}listformatter.cpp
# ${ICU_FULL_DIR}loadednormalizer2impl.cpp
# ${ICU_FULL_DIR}locavailable.cpp
# ${ICU_FULL_DIR}locbased.cpp
# ${ICU_FULL_DIR}locdispnames.cpp
# ${ICU_FULL_DIR}locdspnm.cpp
# ${ICU_FULL_DIR}locid.cpp
# ${ICU_FULL_DIR}loclikely.cpp
# ${ICU_FULL_DIR}locresdata.cpp
# ${ICU_FULL_DIR}locutil.cpp
# ${ICU_FULL_DIR}measfmt.cpp
# ${ICU_FULL_DIR}measunit.cpp
# ${ICU_FULL_DIR}measure.cpp
# ${ICU_FULL_DIR}messagepattern.cpp
# ${ICU_FULL_DIR}msgfmt.cpp
# ${ICU_FULL_DIR}name2uni.cpp
# ${ICU_FULL_DIR}nfrs.cpp
# ${ICU_FULL_DIR}nfrule.cpp
# ${ICU_FULL_DIR}nfsubs.cpp
# ${ICU_FULL_DIR}normalizer2.cpp
# ${ICU_FULL_DIR}normalizer2impl.cpp
# ${ICU_FULL_DIR}normlzr.cpp
# ${ICU_FULL_DIR}nortrans.cpp
# ${ICU_FULL_DIR}nultrans.cpp
# ${ICU_FULL_DIR}numfmt.cpp
# ${ICU_FULL_DIR}numsys.cpp
# ${ICU_FULL_DIR}olsontz.cpp
# ${ICU_FULL_DIR}parsepos.cpp
# ${ICU_FULL_DIR}patternprops.cpp
# ${ICU_FULL_DIR}persncal.cpp
# ${ICU_FULL_DIR}pluralaffix.cpp
# ${ICU_FULL_DIR}pluralmap.cpp
# ${ICU_FULL_DIR}plurfmt.cpp
# ${ICU_FULL_DIR}plurrule.cpp
# ${ICU_FULL_DIR}precision.cpp
# ${ICU_FULL_DIR}propname.cpp
# ${ICU_FULL_DIR}punycode.cpp
# ${ICU_FULL_DIR}putil.cpp
# ${ICU_FULL_DIR}quant.cpp
# ${ICU_FULL_DIR}quantityformatter.cpp
# ${ICU_FULL_DIR}rbbi.cpp
# ${ICU_FULL_DIR}rbbidata.cpp
# ${ICU_FULL_DIR}rbbinode.cpp
# ${ICU_FULL_DIR}rbbirb.cpp
# ${ICU_FULL_DIR}rbbiscan.cpp
# ${ICU_FULL_DIR}rbbisetb.cpp
# ${ICU_FULL_DIR}rbbistbl.cpp
# ${ICU_FULL_DIR}rbbitblb.cpp
# ${ICU_FULL_DIR}rbnf.cpp
# ${ICU_FULL_DIR}rbt.cpp
# ${ICU_FULL_DIR}rbtz.cpp
# ${ICU_FULL_DIR}rbt_data.cpp
# ${ICU_FULL_DIR}rbt_pars.cpp
# ${ICU_FULL_DIR}rbt_rule.cpp
# ${ICU_FULL_DIR}rbt_set.cpp
# ${ICU_FULL_DIR}regexcmp.cpp
# ${ICU_FULL_DIR}regeximp.cpp
# ${ICU_FULL_DIR}regexst.cpp
# ${ICU_FULL_DIR}regextxt.cpp
# ${ICU_FULL_DIR}region.cpp
# ${ICU_FULL_DIR}reldatefmt.cpp
# ${ICU_FULL_DIR}reldtfmt.cpp
# ${ICU_FULL_DIR}rematch.cpp
# ${ICU_FULL_DIR}remtrans.cpp
# ${ICU_FULL_DIR}repattrn.cpp
# ${ICU_FULL_DIR}resbund.cpp
# ${ICU_FULL_DIR}resbund_cnv.cpp
# ${ICU_FULL_DIR}rulebasedcollator.cpp
# ${ICU_FULL_DIR}ruleiter.cpp
# ${ICU_FULL_DIR}schriter.cpp
# ${ICU_FULL_DIR}scientificnumberformatter.cpp
# ${ICU_FULL_DIR}scriptset.cpp
# ${ICU_FULL_DIR}search.cpp
# ${ICU_FULL_DIR}selfmt.cpp
# ${ICU_FULL_DIR}serv.cpp
# ${ICU_FULL_DIR}servlk.cpp
# ${ICU_FULL_DIR}servlkf.cpp
# ${ICU_FULL_DIR}servls.cpp
# ${ICU_FULL_DIR}servnotf.cpp
# ${ICU_FULL_DIR}servrbf.cpp
# ${ICU_FULL_DIR}servslkf.cpp
# ${ICU_FULL_DIR}sharedbreakiterator.cpp
# ${ICU_FULL_DIR}sharedobject.cpp
# ${ICU_FULL_DIR}simplepatternformatter.cpp
# ${ICU_FULL_DIR}simpletz.cpp
# ${ICU_FULL_DIR}smallintformatter.cpp
# ${ICU_FULL_DIR}smpdtfmt.cpp
# ${ICU_FULL_DIR}smpdtfst.cpp
# ${ICU_FULL_DIR}sortkey.cpp
# ${ICU_FULL_DIR}stringpiece.cpp
# ${ICU_FULL_DIR}stringtriebuilder.cpp
# ${ICU_FULL_DIR}strmatch.cpp
# ${ICU_FULL_DIR}strrepl.cpp
# ${ICU_FULL_DIR}stsearch.cpp
# ${ICU_FULL_DIR}taiwncal.cpp
# ${ICU_FULL_DIR}timezone.cpp
# ${ICU_FULL_DIR}titletrn.cpp
# ${ICU_FULL_DIR}tmunit.cpp
# ${ICU_FULL_DIR}tmutamt.cpp
# ${ICU_FULL_DIR}tmutfmt.cpp
# ${ICU_FULL_DIR}tolowtrn.cpp
# ${ICU_FULL_DIR}toupptrn.cpp
# ${ICU_FULL_DIR}translit.cpp
# ${ICU_FULL_DIR}transreg.cpp
# ${ICU_FULL_DIR}tridpars.cpp
# ${ICU_FULL_DIR}tzfmt.cpp
# ${ICU_FULL_DIR}tzgnames.cpp
# ${ICU_FULL_DIR}tznames.cpp
# ${ICU_FULL_DIR}tznames_impl.cpp
# ${ICU_FULL_DIR}tzrule.cpp
# ${ICU_FULL_DIR}tztrans.cpp
# ${ICU_FULL_DIR}ubrk.cpp
# ${ICU_FULL_DIR}ucal.cpp
# ${ICU_FULL_DIR}ucase.cpp
# ${ICU_FULL_DIR}ucasemap.cpp
# ${ICU_FULL_DIR}ucasemap_titlecase_brkiter.cpp
# ${ICU_FULL_DIR}ucharstrie.cpp
# ${ICU_FULL_DIR}ucharstriebuilder.cpp
# ${ICU_FULL_DIR}ucharstrieiterator.cpp
# ${ICU_FULL_DIR}uchriter.cpp
# ${ICU_FULL_DIR}ucln_cmn.cpp
# ${ICU_FULL_DIR}ucln_in.cpp
# ${ICU_FULL_DIR}ucnv2022.cpp
# ${ICU_FULL_DIR}ucnvbocu.cpp
# ${ICU_FULL_DIR}ucnvmbcs.cpp
# ${ICU_FULL_DIR}ucnvsel.cpp
# ${ICU_FULL_DIR}ucnv_bld.cpp
# ${ICU_FULL_DIR}ucnv_ext.cpp
# ${ICU_FULL_DIR}ucnv_io.cpp
# ${ICU_FULL_DIR}ucol.cpp
# ${ICU_FULL_DIR}ucoleitr.cpp
# ${ICU_FULL_DIR}ucol_res.cpp
# ${ICU_FULL_DIR}ucol_sit.cpp
# ${ICU_FULL_DIR}ucol_swp.cpp
# ${ICU_FULL_DIR}ucsdet.cpp
# ${ICU_FULL_DIR}ucurr.cpp
# ${ICU_FULL_DIR}udat.cpp
# ${ICU_FULL_DIR}udata.cpp
# ${ICU_FULL_DIR}udateintervalformat.cpp
# ${ICU_FULL_DIR}udatpg.cpp
# ${ICU_FULL_DIR}ufieldpositer.cpp
# ${ICU_FULL_DIR}uhash_us.cpp
# ${ICU_FULL_DIR}uidna.cpp
# ${ICU_FULL_DIR}uinit.cpp
# ${ICU_FULL_DIR}uiter.cpp
# ${ICU_FULL_DIR}uitercollationiterator.cpp
# ${ICU_FULL_DIR}ulistformatter.cpp
# ${ICU_FULL_DIR}uloc.cpp
# ${ICU_FULL_DIR}uloc_keytype.cpp
# ${ICU_FULL_DIR}umsg.cpp
# ${ICU_FULL_DIR}umutex.cpp
# ${ICU_FULL_DIR}unames.cpp
# ${ICU_FULL_DIR}unesctrn.cpp
# ${ICU_FULL_DIR}uni2name.cpp
# ${ICU_FULL_DIR}unifiedcache.cpp
# ${ICU_FULL_DIR}unifilt.cpp
# ${ICU_FULL_DIR}unifunct.cpp
# ${ICU_FULL_DIR}uniset.cpp
# ${ICU_FULL_DIR}unisetspan.cpp
# ${ICU_FULL_DIR}uniset_closure.cpp
# ${ICU_FULL_DIR}uniset_props.cpp
# ${ICU_FULL_DIR}unistr.cpp
# ${ICU_FULL_DIR}unistr_case.cpp
# ${ICU_FULL_DIR}unistr_case_locale.cpp
# ${ICU_FULL_DIR}unistr_cnv.cpp
# ${ICU_FULL_DIR}unistr_props.cpp
# ${ICU_FULL_DIR}unistr_titlecase_brkiter.cpp
# ${ICU_FULL_DIR}unorm.cpp
# ${ICU_FULL_DIR}unormcmp.cpp
# ${ICU_FULL_DIR}unum.cpp
# ${ICU_FULL_DIR}unumsys.cpp
# ${ICU_FULL_DIR}uobject.cpp
# ${ICU_FULL_DIR}upluralrules.cpp
# ${ICU_FULL_DIR}uprops.cpp
# ${ICU_FULL_DIR}uregex.cpp
# ${ICU_FULL_DIR}uregexc.cpp
# ${ICU_FULL_DIR}uregion.cpp
# ${ICU_FULL_DIR}uresbund.cpp
# ${ICU_FULL_DIR}uscript_props.cpp
# ${ICU_FULL_DIR}usearch.cpp
# ${ICU_FULL_DIR}uset.cpp
# ${ICU_FULL_DIR}usetiter.cpp
# ${ICU_FULL_DIR}uset_props.cpp
# ${ICU_FULL_DIR}ushape.cpp
# ${ICU_FULL_DIR}uspoof.cpp
# ${ICU_FULL_DIR}uspoof_build.cpp
# ${ICU_FULL_DIR}uspoof_conf.cpp
# ${ICU_FULL_DIR}uspoof_impl.cpp
# ${ICU_FULL_DIR}uspoof_wsconf.cpp
# ${ICU_FULL_DIR}usprep.cpp
# ${ICU_FULL_DIR}ustack.cpp
# ${ICU_FULL_DIR}ustrcase.cpp
# ${ICU_FULL_DIR}ustrcase_locale.cpp
# ${ICU_FULL_DIR}ustrenum.cpp
# ${ICU_FULL_DIR}ustring.cpp
# ${ICU_FULL_DIR}ustrtrns.cpp
# ${ICU_FULL_DIR}ustr_cnv.cpp
# ${ICU_FULL_DIR}ustr_titlecase_brkiter.cpp
# ${ICU_FULL_DIR}ustr_wcs.cpp
# ${ICU_FULL_DIR}utext.cpp
# ${ICU_FULL_DIR}utf16collationiterator.cpp
# ${ICU_FULL_DIR}utf8collationiterator.cpp
# ${ICU_FULL_DIR}util.cpp
# ${ICU_FULL_DIR}util_props.cpp
# ${ICU_FULL_DIR}utrans.cpp
# ${ICU_FULL_DIR}utrie.cpp
# ${ICU_FULL_DIR}utrie2.cpp
# ${ICU_FULL_DIR}utrie2_builder.cpp
# ${ICU_FULL_DIR}uts46.cpp
# ${ICU_FULL_DIR}uvector.cpp
# ${ICU_FULL_DIR}uvectr32.cpp
# ${ICU_FULL_DIR}uvectr64.cpp
# ${ICU_FULL_DIR}valueformatter.cpp
# ${ICU_FULL_DIR}visibledigits.cpp
# ${ICU_FULL_DIR}vtzone.cpp
# ${ICU_FULL_DIR}vzone.cpp
# ${ICU_FULL_DIR}windtfmt.cpp
# ${ICU_FULL_DIR}winnmfmt.cpp
# ${ICU_FULL_DIR}wintzimpl.cpp
# ${ICU_FULL_DIR}zonemeta.cpp
# ${ICU_FULL_DIR}zrule.cpp
# ${ICU_FULL_DIR}ztrans.cpp
#)

set(ICU_FULL_DIR
  #third_party/icu/
  #../../thirdparty/skia/third_party/externals/icu/
  ../../thirdparty/icu_wrapper/third_party/icu/
)

message(WARNING "TODO: add icu data file, see stubdata.cpp, ICU_UTIL_DATA_IMPL=ICU_UTIL_DATA_FILE, U_ICUDATAENTRY_IN_COMMON, icu_use_data_file_flag")

set(OWN_ICU_INCLUDE_DIRS
  ${ICU_FULL_DIR}
  ${ICU_FULL_DIR}source/common/unicode
  ${ICU_FULL_DIR}source/common
  ${ICU_FULL_DIR}source/i18n
)

# find source/i18n -maxdepth 1 ! -type d | egrep '\.(c|cpp)$' |  sort | sed "s/^\(.*\)$/ '\1',/"
# find source/common -maxdepth 1 ! -type d | egrep '\.(c|cpp)$' |  sort | sed "s/^\(.*\)$/ '\1',/"
# see https://github.com/unicode-org/icu/tree/master/icu4c/source/common
# see https://chromium.googlesource.com/chromium/deps/icu/+/refs/heads/master/icu.gypi
set(ICU_SOURCES
  ## ${ICU_FULL_DIR}cmemory.c
 ${ICU_FULL_DIR}source/stubdata/stubdata.cpp # if 'OS == "win" or icu_use_data_file_flag==1'
  # I18N_SRC_START
 ${ICU_FULL_DIR}source/i18n/alphaindex.cpp
 ${ICU_FULL_DIR}source/i18n/anytrans.cpp
 ${ICU_FULL_DIR}source/i18n/astro.cpp
 ${ICU_FULL_DIR}source/i18n/basictz.cpp
 ${ICU_FULL_DIR}source/i18n/bocsu.cpp
 ${ICU_FULL_DIR}source/i18n/brktrans.cpp
 ${ICU_FULL_DIR}source/i18n/buddhcal.cpp
 ${ICU_FULL_DIR}source/i18n/calendar.cpp
 ${ICU_FULL_DIR}source/i18n/casetrn.cpp
 ${ICU_FULL_DIR}source/i18n/cecal.cpp
 ${ICU_FULL_DIR}source/i18n/chnsecal.cpp
 ${ICU_FULL_DIR}source/i18n/choicfmt.cpp
 ${ICU_FULL_DIR}source/i18n/coleitr.cpp
 ${ICU_FULL_DIR}source/i18n/collationbuilder.cpp
 ${ICU_FULL_DIR}source/i18n/collationcompare.cpp
 ${ICU_FULL_DIR}source/i18n/collation.cpp
 ${ICU_FULL_DIR}source/i18n/collationdatabuilder.cpp
 ${ICU_FULL_DIR}source/i18n/collationdata.cpp
 ${ICU_FULL_DIR}source/i18n/collationdatareader.cpp
 ${ICU_FULL_DIR}source/i18n/collationdatawriter.cpp
 ${ICU_FULL_DIR}source/i18n/collationfastlatinbuilder.cpp
 ${ICU_FULL_DIR}source/i18n/collationfastlatin.cpp
 ${ICU_FULL_DIR}source/i18n/collationfcd.cpp
 ${ICU_FULL_DIR}source/i18n/collationiterator.cpp
 ${ICU_FULL_DIR}source/i18n/collationkeys.cpp
 ${ICU_FULL_DIR}source/i18n/collationroot.cpp
 ${ICU_FULL_DIR}source/i18n/collationrootelements.cpp
 ${ICU_FULL_DIR}source/i18n/collationruleparser.cpp
 ${ICU_FULL_DIR}source/i18n/collationsets.cpp
 ${ICU_FULL_DIR}source/i18n/collationsettings.cpp
 ${ICU_FULL_DIR}source/i18n/collationtailoring.cpp
 ${ICU_FULL_DIR}source/i18n/collationweights.cpp
 ${ICU_FULL_DIR}source/i18n/coll.cpp
 ${ICU_FULL_DIR}source/i18n/compactdecimalformat.cpp
 ${ICU_FULL_DIR}source/i18n/coptccal.cpp
 ${ICU_FULL_DIR}source/i18n/cpdtrans.cpp
 ${ICU_FULL_DIR}source/i18n/csdetect.cpp
 ${ICU_FULL_DIR}source/i18n/csmatch.cpp
 ${ICU_FULL_DIR}source/i18n/csr2022.cpp
 ${ICU_FULL_DIR}source/i18n/csrecog.cpp
 ${ICU_FULL_DIR}source/i18n/csrmbcs.cpp
 ${ICU_FULL_DIR}source/i18n/csrsbcs.cpp
 ${ICU_FULL_DIR}source/i18n/csrucode.cpp
 ${ICU_FULL_DIR}source/i18n/csrutf8.cpp
 ${ICU_FULL_DIR}source/i18n/curramt.cpp
 ${ICU_FULL_DIR}source/i18n/currfmt.cpp
 ${ICU_FULL_DIR}source/i18n/currpinf.cpp
 ${ICU_FULL_DIR}source/i18n/currunit.cpp
 ${ICU_FULL_DIR}source/i18n/dangical.cpp
 ${ICU_FULL_DIR}source/i18n/datefmt.cpp
 ${ICU_FULL_DIR}source/i18n/dayperiodrules.cpp
 ${ICU_FULL_DIR}source/i18n/dcfmtsym.cpp
 ${ICU_FULL_DIR}source/i18n/decContext.cpp
 ${ICU_FULL_DIR}source/i18n/decimfmt.cpp
 ${ICU_FULL_DIR}source/i18n/decNumber.cpp
 ${ICU_FULL_DIR}source/i18n/double-conversion-bignum.cpp
 ${ICU_FULL_DIR}source/i18n/double-conversion-bignum-dtoa.cpp
 ${ICU_FULL_DIR}source/i18n/double-conversion-cached-powers.cpp
 ${ICU_FULL_DIR}source/i18n/double-conversion.cpp
 ${ICU_FULL_DIR}source/i18n/double-conversion-diy-fp.cpp
 ${ICU_FULL_DIR}source/i18n/double-conversion-fast-dtoa.cpp
 ${ICU_FULL_DIR}source/i18n/double-conversion-strtod.cpp
 ${ICU_FULL_DIR}source/i18n/dtfmtsym.cpp
 ${ICU_FULL_DIR}source/i18n/dtitvfmt.cpp
 ${ICU_FULL_DIR}source/i18n/dtitvinf.cpp
 ${ICU_FULL_DIR}source/i18n/dtptngen.cpp
 ${ICU_FULL_DIR}source/i18n/dtrule.cpp
 ${ICU_FULL_DIR}source/i18n/erarules.cpp
 ${ICU_FULL_DIR}source/i18n/esctrn.cpp
 ${ICU_FULL_DIR}source/i18n/ethpccal.cpp
 ${ICU_FULL_DIR}source/i18n/fmtable_cnv.cpp
 ${ICU_FULL_DIR}source/i18n/fmtable.cpp
 ${ICU_FULL_DIR}source/i18n/format.cpp
 ${ICU_FULL_DIR}source/i18n/formatted_string_builder.cpp
 ${ICU_FULL_DIR}source/i18n/formattedval_iterimpl.cpp
 ${ICU_FULL_DIR}source/i18n/formattedval_sbimpl.cpp
 ${ICU_FULL_DIR}source/i18n/formattedvalue.cpp
 ${ICU_FULL_DIR}source/i18n/fphdlimp.cpp
 ${ICU_FULL_DIR}source/i18n/fpositer.cpp
 ${ICU_FULL_DIR}source/i18n/funcrepl.cpp
 ${ICU_FULL_DIR}source/i18n/gender.cpp
 ${ICU_FULL_DIR}source/i18n/gregocal.cpp
 ${ICU_FULL_DIR}source/i18n/gregoimp.cpp
 ${ICU_FULL_DIR}source/i18n/hebrwcal.cpp
 ${ICU_FULL_DIR}source/i18n/indiancal.cpp
 ${ICU_FULL_DIR}source/i18n/inputext.cpp
 ${ICU_FULL_DIR}source/i18n/islamcal.cpp
 ${ICU_FULL_DIR}source/i18n/japancal.cpp
 ${ICU_FULL_DIR}source/i18n/listformatter.cpp
 ${ICU_FULL_DIR}source/i18n/measfmt.cpp
 ${ICU_FULL_DIR}source/i18n/measunit.cpp
 ${ICU_FULL_DIR}source/i18n/measure.cpp
 ${ICU_FULL_DIR}source/i18n/msgfmt.cpp
 ${ICU_FULL_DIR}source/i18n/name2uni.cpp
 ${ICU_FULL_DIR}source/i18n/nfrs.cpp
 ${ICU_FULL_DIR}source/i18n/nfrule.cpp
 ${ICU_FULL_DIR}source/i18n/nfsubs.cpp
 ${ICU_FULL_DIR}source/i18n/nortrans.cpp
 ${ICU_FULL_DIR}source/i18n/nounit.cpp
 ${ICU_FULL_DIR}source/i18n/nultrans.cpp
 ${ICU_FULL_DIR}source/i18n/number_affixutils.cpp
 ${ICU_FULL_DIR}source/i18n/number_asformat.cpp
 ${ICU_FULL_DIR}source/i18n/number_capi.cpp
 ${ICU_FULL_DIR}source/i18n/number_compact.cpp
 ${ICU_FULL_DIR}source/i18n/number_currencysymbols.cpp
 ${ICU_FULL_DIR}source/i18n/number_decimalquantity.cpp
 ${ICU_FULL_DIR}source/i18n/number_decimfmtprops.cpp
 ${ICU_FULL_DIR}source/i18n/number_fluent.cpp
 ${ICU_FULL_DIR}source/i18n/number_formatimpl.cpp
 ${ICU_FULL_DIR}source/i18n/number_grouping.cpp
 ${ICU_FULL_DIR}source/i18n/number_integerwidth.cpp
 ${ICU_FULL_DIR}source/i18n/number_longnames.cpp
 ${ICU_FULL_DIR}source/i18n/number_mapper.cpp
 ${ICU_FULL_DIR}source/i18n/number_modifiers.cpp
 ${ICU_FULL_DIR}source/i18n/number_multiplier.cpp
 ${ICU_FULL_DIR}source/i18n/number_notation.cpp
 ${ICU_FULL_DIR}source/i18n/number_output.cpp
 ${ICU_FULL_DIR}source/i18n/number_padding.cpp
 ${ICU_FULL_DIR}source/i18n/number_patternmodifier.cpp
 ${ICU_FULL_DIR}source/i18n/number_patternstring.cpp
 ${ICU_FULL_DIR}source/i18n/number_rounding.cpp
 ${ICU_FULL_DIR}source/i18n/number_scientific.cpp
 ${ICU_FULL_DIR}source/i18n/number_skeletons.cpp
 ${ICU_FULL_DIR}source/i18n/number_utils.cpp
 ${ICU_FULL_DIR}source/i18n/numfmt.cpp
 ${ICU_FULL_DIR}source/i18n/numparse_affixes.cpp
 ${ICU_FULL_DIR}source/i18n/numparse_compositions.cpp
 ${ICU_FULL_DIR}source/i18n/numparse_currency.cpp
 ${ICU_FULL_DIR}source/i18n/numparse_decimal.cpp
 ${ICU_FULL_DIR}source/i18n/numparse_impl.cpp
 ${ICU_FULL_DIR}source/i18n/numparse_parsednumber.cpp
 ${ICU_FULL_DIR}source/i18n/numparse_scientific.cpp
 ${ICU_FULL_DIR}source/i18n/numparse_symbols.cpp
 ${ICU_FULL_DIR}source/i18n/numparse_validators.cpp
 ${ICU_FULL_DIR}source/i18n/numrange_fluent.cpp
 ${ICU_FULL_DIR}source/i18n/numrange_impl.cpp
 ${ICU_FULL_DIR}source/i18n/numsys.cpp
 ${ICU_FULL_DIR}source/i18n/olsontz.cpp
 ${ICU_FULL_DIR}source/i18n/persncal.cpp
 ${ICU_FULL_DIR}source/i18n/plurfmt.cpp
 ${ICU_FULL_DIR}source/i18n/plurrule.cpp
 ${ICU_FULL_DIR}source/i18n/quant.cpp
 ${ICU_FULL_DIR}source/i18n/quantityformatter.cpp
 ${ICU_FULL_DIR}source/i18n/rbnf.cpp
 ${ICU_FULL_DIR}source/i18n/rbt.cpp
 ${ICU_FULL_DIR}source/i18n/rbt_data.cpp
 ${ICU_FULL_DIR}source/i18n/rbt_pars.cpp
 ${ICU_FULL_DIR}source/i18n/rbt_rule.cpp
 ${ICU_FULL_DIR}source/i18n/rbt_set.cpp
 ${ICU_FULL_DIR}source/i18n/rbtz.cpp
 ${ICU_FULL_DIR}source/i18n/regexcmp.cpp
 ${ICU_FULL_DIR}source/i18n/regeximp.cpp
 ${ICU_FULL_DIR}source/i18n/regexst.cpp
 ${ICU_FULL_DIR}source/i18n/regextxt.cpp
 ${ICU_FULL_DIR}source/i18n/region.cpp
 ${ICU_FULL_DIR}source/i18n/reldatefmt.cpp
 ${ICU_FULL_DIR}source/i18n/reldtfmt.cpp
 ${ICU_FULL_DIR}source/i18n/rematch.cpp
 ${ICU_FULL_DIR}source/i18n/remtrans.cpp
 ${ICU_FULL_DIR}source/i18n/repattrn.cpp
 ${ICU_FULL_DIR}source/i18n/rulebasedcollator.cpp
 ${ICU_FULL_DIR}source/i18n/scientificnumberformatter.cpp
 ${ICU_FULL_DIR}source/i18n/scriptset.cpp
 ${ICU_FULL_DIR}source/i18n/search.cpp
 ${ICU_FULL_DIR}source/i18n/selfmt.cpp
 ${ICU_FULL_DIR}source/i18n/sharedbreakiterator.cpp
 ${ICU_FULL_DIR}source/i18n/simpletz.cpp
 ${ICU_FULL_DIR}source/i18n/smpdtfmt.cpp
 ${ICU_FULL_DIR}source/i18n/smpdtfst.cpp
 ${ICU_FULL_DIR}source/i18n/sortkey.cpp
 ${ICU_FULL_DIR}source/i18n/standardplural.cpp
 ${ICU_FULL_DIR}source/i18n/string_segment.cpp
 ${ICU_FULL_DIR}source/i18n/strmatch.cpp
 ${ICU_FULL_DIR}source/i18n/strrepl.cpp
 ${ICU_FULL_DIR}source/i18n/stsearch.cpp
 ${ICU_FULL_DIR}source/i18n/taiwncal.cpp
 ${ICU_FULL_DIR}source/i18n/timezone.cpp
 ${ICU_FULL_DIR}source/i18n/titletrn.cpp
 ${ICU_FULL_DIR}source/i18n/tmunit.cpp
 ${ICU_FULL_DIR}source/i18n/tmutamt.cpp
 ${ICU_FULL_DIR}source/i18n/tmutfmt.cpp
 ${ICU_FULL_DIR}source/i18n/tolowtrn.cpp
 ${ICU_FULL_DIR}source/i18n/toupptrn.cpp
 ${ICU_FULL_DIR}source/i18n/translit.cpp
 ${ICU_FULL_DIR}source/i18n/transreg.cpp
 ${ICU_FULL_DIR}source/i18n/tridpars.cpp
 ${ICU_FULL_DIR}source/i18n/tzfmt.cpp
 ${ICU_FULL_DIR}source/i18n/tzgnames.cpp
 ${ICU_FULL_DIR}source/i18n/tznames.cpp
 ${ICU_FULL_DIR}source/i18n/tznames_impl.cpp
 ${ICU_FULL_DIR}source/i18n/tzrule.cpp
 ${ICU_FULL_DIR}source/i18n/tztrans.cpp
 ${ICU_FULL_DIR}source/i18n/ucal.cpp
 ${ICU_FULL_DIR}source/i18n/ucln_in.cpp
 ${ICU_FULL_DIR}source/i18n/ucol.cpp
 ${ICU_FULL_DIR}source/i18n/ucoleitr.cpp
 ${ICU_FULL_DIR}source/i18n/ucol_res.cpp
 ${ICU_FULL_DIR}source/i18n/ucol_sit.cpp
 ${ICU_FULL_DIR}source/i18n/ucsdet.cpp
 ${ICU_FULL_DIR}source/i18n/udat.cpp
 ${ICU_FULL_DIR}source/i18n/udateintervalformat.cpp
 ${ICU_FULL_DIR}source/i18n/udatpg.cpp
 ${ICU_FULL_DIR}source/i18n/ufieldpositer.cpp
 ${ICU_FULL_DIR}source/i18n/uitercollationiterator.cpp
 ${ICU_FULL_DIR}source/i18n/ulistformatter.cpp
 ${ICU_FULL_DIR}source/i18n/ulocdata.cpp
 ${ICU_FULL_DIR}source/i18n/umsg.cpp
 ${ICU_FULL_DIR}source/i18n/unesctrn.cpp
 ${ICU_FULL_DIR}source/i18n/uni2name.cpp
 ${ICU_FULL_DIR}source/i18n/unum.cpp
 ${ICU_FULL_DIR}source/i18n/unumsys.cpp
 ${ICU_FULL_DIR}source/i18n/upluralrules.cpp
 ${ICU_FULL_DIR}source/i18n/uregexc.cpp
 ${ICU_FULL_DIR}source/i18n/uregex.cpp
 ${ICU_FULL_DIR}source/i18n/uregion.cpp
 ${ICU_FULL_DIR}source/i18n/usearch.cpp
 ${ICU_FULL_DIR}source/i18n/uspoof_build.cpp
 ${ICU_FULL_DIR}source/i18n/uspoof_conf.cpp
 ${ICU_FULL_DIR}source/i18n/uspoof.cpp
 ${ICU_FULL_DIR}source/i18n/uspoof_impl.cpp
 ${ICU_FULL_DIR}source/i18n/utf16collationiterator.cpp
 ${ICU_FULL_DIR}source/i18n/utf8collationiterator.cpp
 ${ICU_FULL_DIR}source/i18n/utmscale.cpp
 ${ICU_FULL_DIR}source/i18n/utrans.cpp
 ${ICU_FULL_DIR}source/i18n/vtzone.cpp
 ${ICU_FULL_DIR}source/i18n/vzone.cpp
 ${ICU_FULL_DIR}source/i18n/windtfmt.cpp
 ${ICU_FULL_DIR}source/i18n/winnmfmt.cpp
 ${ICU_FULL_DIR}source/i18n/wintzimpl.cpp
 ${ICU_FULL_DIR}source/i18n/zonemeta.cpp
 ${ICU_FULL_DIR}source/i18n/zrule.cpp
 ${ICU_FULL_DIR}source/i18n/ztrans.cpp
  # I18N_SRC_END
  # COMMON_SRC_START
 ${ICU_FULL_DIR}source/common/appendable.cpp
 ${ICU_FULL_DIR}source/common/bmpset.cpp
 ${ICU_FULL_DIR}source/common/brkeng.cpp
 ${ICU_FULL_DIR}source/common/brkiter.cpp
 ${ICU_FULL_DIR}source/common/bytesinkutil.cpp
 ${ICU_FULL_DIR}source/common/bytestream.cpp
 ${ICU_FULL_DIR}source/common/bytestriebuilder.cpp
 ${ICU_FULL_DIR}source/common/bytestrie.cpp
 ${ICU_FULL_DIR}source/common/bytestrieiterator.cpp
 ${ICU_FULL_DIR}source/common/caniter.cpp
 ${ICU_FULL_DIR}source/common/characterproperties.cpp
 ${ICU_FULL_DIR}source/common/chariter.cpp
 ${ICU_FULL_DIR}source/common/charstr.cpp
 ${ICU_FULL_DIR}source/common/cmemory.cpp
 ${ICU_FULL_DIR}source/common/cstr.cpp
 ${ICU_FULL_DIR}source/common/cstring.cpp
 ${ICU_FULL_DIR}source/common/cwchar.cpp
 ${ICU_FULL_DIR}source/common/dictbe.cpp
 ${ICU_FULL_DIR}source/common/dictionarydata.cpp
 ${ICU_FULL_DIR}source/common/dtintrv.cpp
 ${ICU_FULL_DIR}source/common/edits.cpp
 ${ICU_FULL_DIR}source/common/errorcode.cpp
 ${ICU_FULL_DIR}source/common/filteredbrk.cpp
 ${ICU_FULL_DIR}source/common/filterednormalizer2.cpp
 ${ICU_FULL_DIR}source/common/icudataver.cpp
 ${ICU_FULL_DIR}source/common/icuplug.cpp
 ${ICU_FULL_DIR}source/common/loadednormalizer2impl.cpp
 ${ICU_FULL_DIR}source/common/localebuilder.cpp
 ${ICU_FULL_DIR}source/common/locavailable.cpp
 ${ICU_FULL_DIR}source/common/locbased.cpp
 ${ICU_FULL_DIR}source/common/locdispnames.cpp
 ${ICU_FULL_DIR}source/common/locdspnm.cpp
 ${ICU_FULL_DIR}source/common/locid.cpp
 ${ICU_FULL_DIR}source/common/loclikely.cpp
 ${ICU_FULL_DIR}source/common/locmap.cpp
 ${ICU_FULL_DIR}source/common/locresdata.cpp
 ${ICU_FULL_DIR}source/common/locutil.cpp
 ${ICU_FULL_DIR}source/common/messagepattern.cpp
 ${ICU_FULL_DIR}source/common/normalizer2.cpp
 ${ICU_FULL_DIR}source/common/normalizer2impl.cpp
 ${ICU_FULL_DIR}source/common/normlzr.cpp
 ${ICU_FULL_DIR}source/common/parsepos.cpp
 ${ICU_FULL_DIR}source/common/patternprops.cpp
 ${ICU_FULL_DIR}source/common/pluralmap.cpp
 ${ICU_FULL_DIR}source/common/propname.cpp
 ${ICU_FULL_DIR}source/common/propsvec.cpp
 ${ICU_FULL_DIR}source/common/punycode.cpp
 ${ICU_FULL_DIR}source/common/putil.cpp
 ${ICU_FULL_DIR}source/common/rbbi_cache.cpp
 ${ICU_FULL_DIR}source/common/rbbi.cpp
 ${ICU_FULL_DIR}source/common/rbbidata.cpp
 ${ICU_FULL_DIR}source/common/rbbinode.cpp
 ${ICU_FULL_DIR}source/common/rbbirb.cpp
 ${ICU_FULL_DIR}source/common/rbbiscan.cpp
 ${ICU_FULL_DIR}source/common/rbbisetb.cpp
 ${ICU_FULL_DIR}source/common/rbbistbl.cpp
 ${ICU_FULL_DIR}source/common/rbbitblb.cpp
 ${ICU_FULL_DIR}source/common/resbund_cnv.cpp
 ${ICU_FULL_DIR}source/common/resbund.cpp
 ${ICU_FULL_DIR}source/common/resource.cpp
 ${ICU_FULL_DIR}source/common/ruleiter.cpp
 ${ICU_FULL_DIR}source/common/schriter.cpp
 ${ICU_FULL_DIR}source/common/serv.cpp
 ${ICU_FULL_DIR}source/common/servlk.cpp
 ${ICU_FULL_DIR}source/common/servlkf.cpp
 ${ICU_FULL_DIR}source/common/servls.cpp
 ${ICU_FULL_DIR}source/common/servnotf.cpp
 ${ICU_FULL_DIR}source/common/servrbf.cpp
 ${ICU_FULL_DIR}source/common/servslkf.cpp
 ${ICU_FULL_DIR}source/common/sharedobject.cpp
 ${ICU_FULL_DIR}source/common/simpleformatter.cpp
 ${ICU_FULL_DIR}source/common/static_unicode_sets.cpp
 ${ICU_FULL_DIR}source/common/stringpiece.cpp
 ${ICU_FULL_DIR}source/common/stringtriebuilder.cpp
 ${ICU_FULL_DIR}source/common/uarrsort.cpp
 ${ICU_FULL_DIR}source/common/ubidi.cpp
 ${ICU_FULL_DIR}source/common/ubidiln.cpp
 ${ICU_FULL_DIR}source/common/ubidi_props.cpp
 ${ICU_FULL_DIR}source/common/ubiditransform.cpp
 ${ICU_FULL_DIR}source/common/ubidiwrt.cpp
 ${ICU_FULL_DIR}source/common/ubrk.cpp
 ${ICU_FULL_DIR}source/common/ucase.cpp
 ${ICU_FULL_DIR}source/common/ucasemap.cpp
 ${ICU_FULL_DIR}source/common/ucasemap_titlecase_brkiter.cpp
 ${ICU_FULL_DIR}source/common/ucat.cpp
 ${ICU_FULL_DIR}source/common/uchar.cpp
 ${ICU_FULL_DIR}source/common/ucharstriebuilder.cpp
 ${ICU_FULL_DIR}source/common/ucharstrie.cpp
 ${ICU_FULL_DIR}source/common/ucharstrieiterator.cpp
 ${ICU_FULL_DIR}source/common/uchriter.cpp
 ${ICU_FULL_DIR}source/common/ucln_cmn.cpp
 ${ICU_FULL_DIR}source/common/ucmndata.cpp
 ${ICU_FULL_DIR}source/common/ucnv2022.cpp
 ${ICU_FULL_DIR}source/common/ucnv_bld.cpp
 ${ICU_FULL_DIR}source/common/ucnvbocu.cpp
 ${ICU_FULL_DIR}source/common/ucnv_cb.cpp
 ${ICU_FULL_DIR}source/common/ucnv_cnv.cpp
 ${ICU_FULL_DIR}source/common/ucnv.cpp
 ${ICU_FULL_DIR}source/common/ucnv_ct.cpp
 ${ICU_FULL_DIR}source/common/ucnvdisp.cpp
 ${ICU_FULL_DIR}source/common/ucnv_err.cpp
 ${ICU_FULL_DIR}source/common/ucnv_ext.cpp
 ${ICU_FULL_DIR}source/common/ucnvhz.cpp
 ${ICU_FULL_DIR}source/common/ucnv_io.cpp
 ${ICU_FULL_DIR}source/common/ucnvisci.cpp
 ${ICU_FULL_DIR}source/common/ucnvlat1.cpp
 ${ICU_FULL_DIR}source/common/ucnv_lmb.cpp
 ${ICU_FULL_DIR}source/common/ucnvmbcs.cpp
 ${ICU_FULL_DIR}source/common/ucnvscsu.cpp
 ${ICU_FULL_DIR}source/common/ucnvsel.cpp
 ${ICU_FULL_DIR}source/common/ucnv_set.cpp
 ${ICU_FULL_DIR}source/common/ucnv_u16.cpp
 ${ICU_FULL_DIR}source/common/ucnv_u32.cpp
 ${ICU_FULL_DIR}source/common/ucnv_u7.cpp
 ${ICU_FULL_DIR}source/common/ucnv_u8.cpp
 ${ICU_FULL_DIR}source/common/ucol_swp.cpp
 ${ICU_FULL_DIR}source/common/ucptrie.cpp
 ${ICU_FULL_DIR}source/common/ucurr.cpp
 ${ICU_FULL_DIR}source/common/udata.cpp
 ${ICU_FULL_DIR}source/common/udatamem.cpp
 ${ICU_FULL_DIR}source/common/udataswp.cpp
 ${ICU_FULL_DIR}source/common/uenum.cpp
 ${ICU_FULL_DIR}source/common/uhash.cpp
 ${ICU_FULL_DIR}source/common/uhash_us.cpp
 ${ICU_FULL_DIR}source/common/uidna.cpp
 ${ICU_FULL_DIR}source/common/uinit.cpp
 ${ICU_FULL_DIR}source/common/uinvchar.cpp
 ${ICU_FULL_DIR}source/common/uiter.cpp
 ${ICU_FULL_DIR}source/common/ulist.cpp
 ${ICU_FULL_DIR}source/common/uloc.cpp
 ${ICU_FULL_DIR}source/common/uloc_keytype.cpp
 ${ICU_FULL_DIR}source/common/uloc_tag.cpp
 ${ICU_FULL_DIR}source/common/umapfile.cpp
 ${ICU_FULL_DIR}source/common/umath.cpp
 ${ICU_FULL_DIR}source/common/umutablecptrie.cpp
 ${ICU_FULL_DIR}source/common/umutex.cpp
 ${ICU_FULL_DIR}source/common/unames.cpp
 ${ICU_FULL_DIR}source/common/unifiedcache.cpp
 ${ICU_FULL_DIR}source/common/unifilt.cpp
 ${ICU_FULL_DIR}source/common/unifunct.cpp
 ${ICU_FULL_DIR}source/common/uniset_closure.cpp
 ${ICU_FULL_DIR}source/common/uniset.cpp
 ${ICU_FULL_DIR}source/common/uniset_props.cpp
 ${ICU_FULL_DIR}source/common/unisetspan.cpp
 ${ICU_FULL_DIR}source/common/unistr_case.cpp
 ${ICU_FULL_DIR}source/common/unistr_case_locale.cpp
 ${ICU_FULL_DIR}source/common/unistr_cnv.cpp
 ${ICU_FULL_DIR}source/common/unistr.cpp
 ${ICU_FULL_DIR}source/common/unistr_props.cpp
 ${ICU_FULL_DIR}source/common/unistr_titlecase_brkiter.cpp
 ${ICU_FULL_DIR}source/common/unormcmp.cpp
 ${ICU_FULL_DIR}source/common/unorm.cpp
 ${ICU_FULL_DIR}source/common/uobject.cpp
 ${ICU_FULL_DIR}source/common/uprops.cpp
 ${ICU_FULL_DIR}source/common/uresbund.cpp
 ${ICU_FULL_DIR}source/common/ures_cnv.cpp
 ${ICU_FULL_DIR}source/common/uresdata.cpp
 ${ICU_FULL_DIR}source/common/usc_impl.cpp
 ${ICU_FULL_DIR}source/common/uscript.cpp
 ${ICU_FULL_DIR}source/common/uscript_props.cpp
 ${ICU_FULL_DIR}source/common/uset.cpp
 ${ICU_FULL_DIR}source/common/usetiter.cpp
 ${ICU_FULL_DIR}source/common/uset_props.cpp
 ${ICU_FULL_DIR}source/common/ushape.cpp
 ${ICU_FULL_DIR}source/common/usprep.cpp
 ${ICU_FULL_DIR}source/common/ustack.cpp
 ${ICU_FULL_DIR}source/common/ustrcase.cpp
 ${ICU_FULL_DIR}source/common/ustrcase_locale.cpp
 ${ICU_FULL_DIR}source/common/ustr_cnv.cpp
 ${ICU_FULL_DIR}source/common/ustrenum.cpp
 ${ICU_FULL_DIR}source/common/ustrfmt.cpp
 ${ICU_FULL_DIR}source/common/ustring.cpp
 ${ICU_FULL_DIR}source/common/ustr_titlecase_brkiter.cpp
 ${ICU_FULL_DIR}source/common/ustrtrns.cpp
 ${ICU_FULL_DIR}source/common/ustr_wcs.cpp
 ${ICU_FULL_DIR}source/common/utext.cpp
 ${ICU_FULL_DIR}source/common/utf_impl.cpp
 ${ICU_FULL_DIR}source/common/util.cpp
 ${ICU_FULL_DIR}source/common/util_props.cpp
 ${ICU_FULL_DIR}source/common/utrace.cpp
 ${ICU_FULL_DIR}source/common/utrie2_builder.cpp
 ${ICU_FULL_DIR}source/common/utrie2.cpp
 ${ICU_FULL_DIR}source/common/utrie.cpp
 ${ICU_FULL_DIR}source/common/utrie_swap.cpp
 ${ICU_FULL_DIR}source/common/uts46.cpp
 ${ICU_FULL_DIR}source/common/utypes.cpp
 ${ICU_FULL_DIR}source/common/uvector.cpp
 ${ICU_FULL_DIR}source/common/uvectr32.cpp
 ${ICU_FULL_DIR}source/common/uvectr64.cpp
 ${ICU_FULL_DIR}source/common/wintz.cpp
  # COMMON_SRC_END
)

#configure_file(cmakeconfig.h.cmake ${CMAKE_CURRENT_SOURCE_DIR}/cmakeconfig.h)
add_definitions(-DBUILDING_WTF)
add_definitions(-DSTATICALLY_LINKED_WITH_WTF)

set(WTF_COMMON_DEFINITIONS
  # see in src/chromium/build/build_config.h
  # USE_TCMALLOC=0
  # set in src/chromium/allocator_buildflags.h.inc
  # USE_NEW_TCMALLOC=1
)

if(EMSCRIPTEN)
  list(APPEND WTF_COMMON_DEFINITIONS
    # see src/chromium/build/build_config.h
    NO_TCMALLOC=1
  )

  set(WTF_EMCC_DEFINITIONS
    # see build/build_config.h
    #OS_ASMJS=1
    # see build/build_config.h
    __asmjs__
    # see build/build_config.h
    #OS_POSIX=1
    # DYNAMIC_ANNOTATIONS useful when implementing condition variables such as CondVar,
    # using conditional critical sections (Await/LockWhen) and when constructing
    # user-defined synchronization mechanisms.
    DYNAMIC_ANNOTATIONS_ENABLED=0
    WTF_USE_DYNAMIC_ANNOTATIONS=0
    # see src/chromium/build/build_config.h
    # NO_TCMALLOC=1
    DISABLE_NACL
    POSIX_AVOID_MMAP
    #USE_EXPERIMENTAL_ALLOCATOR_SHIM=0
  )
else()
  list(APPEND WTF_COMMON_DEFINITIONS
    # see in src/chromium/build/build_config.h
    # USE_TCMALLOC=1
    # see in src/chromium/allocator_buildflags.h.inc
    # USE_NEW_TCMALLOC=1
  )

  set(WTF_EMCC_DEFINITIONS "")
endif ()

### --- libevent ---###

add_library(libevent STATIC
  ${LIBEVENT_SOURCES}
)

set_property(TARGET libevent PROPERTY CXX_STANDARD 17)

target_include_directories(libevent PUBLIC
  ${LIBEVENT_INCLUDE_DIRS}
)

target_include_directories(libevent PRIVATE
  ${CMAKE_CURRENT_SOURCE_DIR}
)

target_compile_definitions(libevent PUBLIC
  ${LIBEVENT_DEFINES}
  ${WTF_EMCC_DEFINITIONS}
  ${WTF_COMMON_DEFINITIONS}
)

### --- tcmalloc ---###

#function(find_static_library LIB_NAME OUT)
#    if (WIN32 OR MSVC)
#        set(CMAKE_FIND_LIBRARY_SUFFIXES ".lib")
#    elseif (UNIX)
#        set(CMAKE_FIND_LIBRARY_SUFFIXES ".a")
#    endif()
#
#    find_library(
#        FOUND_${LIB_NAME}_STATIC
#        ${LIB_NAME}
#        )
#
#    if (FOUND_${LIB_NAME}_STATIC)
#        get_filename_component(ABS_FILE ${FOUND_${LIB_NAME}_STATIC} ABSOLUTE)
#    else()
#        message(SEND_ERROR "Unable to find library ${LIB_NAME}")
#    endif()
#
#    set(${OUT} ${ABS_FILE} PARENT_SCOPE)
#endfunction()

#if(EMSCRIPTEN)
#else()
#  # You should install Google Perftools.
#  # Example: sudo apt-get install libgoogle-perftools-dev # or libevent2-devel
#  find_static_library(tcmalloc TCMALLOC_LIB)
#
#  target_link_libraries(base PUBLIC
#    ${TCMALLOC_LIB}
#  )
#endif(EMSCRIPTEN)

if(EMSCRIPTEN)
else()
  # see https://github.com/chromium/chromium/blob/master/base/allocator/BUILD.gn#L77
  set(TCMALLOC_DIR "tcmalloc_wrapper/third_party/tcmalloc/chromium/")
  list(APPEND TCMALLOC_SOURCES
    # Generated for our configuration from tcmalloc's build
    # and checked in.
    #${TCMALLOC_DIR}src/config.h
    #${TCMALLOC_DIR}src/config_android.h
    #${TCMALLOC_DIR}src/config_linux.h
    #${TCMALLOC_DIR}src/config_win.h
    #
    # tcmalloc native and forked files.
    ${TCMALLOC_DIR}src/base/abort.cc
    ${TCMALLOC_DIR}src/base/abort.h
    # arm_
    #${TCMALLOC_DIR}src/base/arm_instruction_set_select.h
    # atomicops
    #${TCMALLOC_DIR}src/base/atomicops-internals-arm-generic.h
    #${TCMALLOC_DIR}src/base/atomicops-internals-arm-v6plus.h
    #${TCMALLOC_DIR}src/base/atomicops-internals-linuxppc.h
    #${TCMALLOC_DIR}src/base/atomicops-internals-macosx.h
    #${TCMALLOC_DIR}src/base/atomicops-internals-windows.h
    ${TCMALLOC_DIR}src/base/atomicops-internals-x86.cc
    ${TCMALLOC_DIR}src/base/atomicops-internals-x86.h
    ${TCMALLOC_DIR}src/base/atomicops.h
    ${TCMALLOC_DIR}src/base/commandlineflags.h
    #${TCMALLOC_DIR}src/base/cycleclock.h
    #
    # We don't list dynamic_annotations.c since its copy is already
    # present in the dynamic_annotations target.
    ${TCMALLOC_DIR}src/base/elf_mem_image.cc
    ${TCMALLOC_DIR}src/base/elf_mem_image.h
    ${TCMALLOC_DIR}src/base/linuxthreads.cc
    ${TCMALLOC_DIR}src/base/linuxthreads.h
    ${TCMALLOC_DIR}src/base/logging.cc
    ${TCMALLOC_DIR}src/base/logging.h
    ${TCMALLOC_DIR}src/base/low_level_alloc.cc
    ${TCMALLOC_DIR}src/base/low_level_alloc.h
    ${TCMALLOC_DIR}src/base/spinlock.cc
    ${TCMALLOC_DIR}src/base/spinlock.h
    ${TCMALLOC_DIR}src/base/spinlock_internal.cc
    ${TCMALLOC_DIR}src/base/spinlock_internal.h
    #${TCMALLOC_DIR}src/base/synchronization_profiling.h
    ${TCMALLOC_DIR}src/base/sysinfo.cc
    ${TCMALLOC_DIR}src/base/sysinfo.h
    ${TCMALLOC_DIR}src/base/vdso_support.cc
    ${TCMALLOC_DIR}src/base/vdso_support.h
    ${TCMALLOC_DIR}src/central_freelist.cc
    ${TCMALLOC_DIR}src/central_freelist.h
    ${TCMALLOC_DIR}src/common.cc
    ${TCMALLOC_DIR}src/common.h
    #
    # #included by debugallocation_shim.cc
    #${TCMALLOC_DIR}src/debugallocation.cc
    ${TCMALLOC_DIR}src/free_list.cc
    ${TCMALLOC_DIR}src/free_list.h
    ${TCMALLOC_DIR}src/gperftools/heap-profiler.h
    ${TCMALLOC_DIR}src/gperftools/malloc_extension.h
    ${TCMALLOC_DIR}src/gperftools/malloc_hook.h
    ${TCMALLOC_DIR}src/gperftools/stacktrace.h
    ${TCMALLOC_DIR}src/internal_logging.cc
    ${TCMALLOC_DIR}src/internal_logging.h
    ${TCMALLOC_DIR}src/linked_list.h
    ${TCMALLOC_DIR}src/malloc_extension.cc
    ${TCMALLOC_DIR}src/malloc_hook-inl.h
    ${TCMALLOC_DIR}src/malloc_hook.cc
    ${TCMALLOC_DIR}src/maybe_threads.cc
    ${TCMALLOC_DIR}src/maybe_threads.h
    ${TCMALLOC_DIR}src/page_heap.cc
    ${TCMALLOC_DIR}src/page_heap.h
    ${TCMALLOC_DIR}src/raw_printer.cc
    ${TCMALLOC_DIR}src/raw_printer.h
    ${TCMALLOC_DIR}src/sampler.cc
    ${TCMALLOC_DIR}src/sampler.h
    ${TCMALLOC_DIR}src/span.cc
    ${TCMALLOC_DIR}src/span.h
    ${TCMALLOC_DIR}src/stack_trace_table.cc
    ${TCMALLOC_DIR}src/stack_trace_table.h
    ${TCMALLOC_DIR}src/stacktrace.cc
    ${TCMALLOC_DIR}src/static_vars.cc
    ${TCMALLOC_DIR}src/static_vars.h
    ${TCMALLOC_DIR}src/symbolize.cc
    ${TCMALLOC_DIR}src/symbolize.h
    ${TCMALLOC_DIR}src/system-alloc.cc
    ${TCMALLOC_DIR}src/system-alloc.h
    #
    # #included by debugallocation_shim.cc
    ${TCMALLOC_DIR}src/tcmalloc.cc
    ${TCMALLOC_DIR}src/tcmalloc.h
    #
    ${TCMALLOC_DIR}src/thread_cache.cc
    ${TCMALLOC_DIR}src/thread_cache.h
    #${TCMALLOC_DIR}src/windows/port.cc
    #${TCMALLOC_DIR}src/windows/port.h
    #"debugallocation_shim.cc
    #
    # These are both #included by allocator_shim for maximal linking.
    ###"generic_allocators.cc
    ###"win_allocator.cc
    #
    # if (use_new_tcmalloc)
    ${TCMALLOC_DIR}src/emergency_malloc_for_stacktrace.cc
    ${TCMALLOC_DIR}src/fake_stacktrace_scope.cc
    #
    # if (is_linux || is_android)
    ${TCMALLOC_DIR}src/system-alloc.h
    #${TCMALLOC_DIR}src/windows/port.cc
    #${TCMALLOC_DIR}src/windows/port.h
    #
    ### build ###
    build/build_config.h
  )

  # https://github.com/chromium/chromium/blob/master/base/allocator/BUILD.gn#L204
  list(APPEND TCMALLOC_PRIVATE_DEFINES NO_HEAP_CHECK=1)
  # https://github.com/chromium/chromium/blob/master/base/allocator/BUILD.gn#L247
  list(APPEND TCMALLOC_PRIVATE_DEFINES ENABLE_PROFILING=0)
  # https://github.com/chromium/chromium/blob/master/base/allocator/BUILD.gn#L30
  list(APPEND TCMALLOC_PRIVATE_DEFINES TCMALLOC_USE_DOUBLYLINKED_FREELIST=1)
  list(APPEND TCMALLOC_PRIVATE_DEFINES TCMALLOC_DISABLE_HUGE_ALLOCATIONS=1)
  # TCMALLOC_FOR_DEBUGALLOCATION # if (enable_debugallocation)
  # TCMALLOC_DONT_REPLACE_SYSTEM_ALLOC # if (use_allocator_shim)
  # TCMALLOC_SMALL_BUT_SLOW # if (use_tcmalloc_small_but_slow)

  # https://github.com/chromium/chromium/blob/master/base/allocator/BUILD.gn#L204
  list(APPEND TCMALLOC_PUBLIC_INCLUDE_DIRS
    #base/allocator
    #${TCMALLOC_DIR}
    tcmalloc_wrapper/
  )

  add_library(tcmalloc STATIC
    ${TCMALLOC_SOURCES}
  )

  set_property(TARGET tcmalloc PROPERTY CXX_STANDARD 17)

  target_include_directories(tcmalloc PRIVATE
    #${CMAKE_CURRENT_SOURCE_DIR}
    ${TCMALLOC_DIR}
    ${TCMALLOC_DIR}src/
    ${TCMALLOC_DIR}src/base/
  )

  target_include_directories(tcmalloc PUBLIC
    ${TCMALLOC_PUBLIC_INCLUDE_DIRS}
  )

  target_compile_definitions(tcmalloc PRIVATE
    ${TCMALLOC_PRIVATE_DEFINES}
  )

#  target_compile_options(tcmalloc PRIVATE
#    # if (is_linux || is_android)
#    # Don't let linker rip this symbol out, otherwise the heap&cpu
#    # profilers will not initialize properly on startup.
#    -Wl,-uIsHeapProfilerRunning,-uProfilerStart
#    # Do the same for heap leak checker.
#    -Wl,-u_Z21InitialMallocHook_NewPKvj,-u_Z22InitialMallocHook_MMapPKvS0_jiiix,-u_Z22InitialMallocHook_SbrkPKvi
#    -Wl,-u_Z21InitialMallocHook_NewPKvm,-u_Z22InitialMallocHook_MMapPKvS0_miiil,-u_Z22InitialMallocHook_SbrkPKvl
#    -Wl,-u_ZN15HeapLeakChecker12IgnoreObjectEPKv,-u_ZN15HeapLeakChecker14UnIgnoreObjectEPKv
#  )
endif(EMSCRIPTEN)

### --- dynamic_annotations ---###

add_library(dynamic_annotations STATIC
  ${CMAKE_CURRENT_SOURCE_DIR}/base/third_party/dynamic_annotations/dynamic_annotations.c
)

target_include_directories(dynamic_annotations PRIVATE
  ${CMAKE_CURRENT_SOURCE_DIR}
  ${CMAKE_CURRENT_SOURCE_DIR}/base/third_party
  ${CMAKE_CURRENT_SOURCE_DIR}/base/third_party/dynamic_annotations
  ${CMAKE_CURRENT_SOURCE_DIR}/base/third_party/valgrind
  ${BASE_DIR}
)

set_property(TARGET dynamic_annotations PROPERTY CXX_STANDARD 17)

#
# compact_enc_det
# https://github.com/google/compact_enc_det
#

#add_subdirectory(${CMAKE_CURRENT_SOURCE_DIR}/third_party/ced/src)
set(ced_PATH ${CMAKE_CURRENT_SOURCE_DIR}/third_party/ced/src/)
if (WIN32)
  if (NOT EXISTS "${ced_PATH}compact_enc_det/compact_enc_det.h")
    message(FATAL_ERROR "\nCould not find ced source code.")
  endif()
endif()

option(CED_BUILD_SHARED_LIBS "Build shared libraries" OFF)

if("${CMAKE_CXX_COMPILER_ID}" STREQUAL "GNU")
  set(CED_CMAKE_CXX_FLAGS "${CED_CMAKE_CXX_FLAGS} -std=c++11 -Wno-narrowing")
elseif("${CMAKE_CXX_COMPILER_ID}" STREQUAL "Clang")
  set(CED_CMAKE_CXX_FLAGS "${CED_CMAKE_CXX_FLAGS} -std=c++11 -Wno-c++11-narrowing")
elseif("${CMAKE_CXX_COMPILER_ID}" STREQUAL "MSVC")
  if (NOT BUILD_SHARED_LIBS)
    foreach(flag_var
            CED_CMAKE_CXX_FLAGS CED_CMAKE_CXX_FLAGS_DEBUG CED_CMAKE_CXX_FLAGS_RELEASE
            CED_CMAKE_CXX_FLAGS_MINSIZEREL CED_CMAKE_CXX_FLAGS_RELWITHDEBINFO)
      if(${flag_var} MATCHES "/MD")
        string(REGEX REPLACE "/MD" "/MT" ${flag_var} "${${flag_var}}")
      endif(${flag_var} MATCHES "/MD")
    endforeach(flag_var)
  endif()
else()
  set(CED_CMAKE_CXX_FLAGS "${CED_CMAKE_CXX_FLAGS} -std=c++11 -Wno-c++11-narrowing")
endif()

set(CED_LIBRARY_SOURCES
    ${ced_PATH}compact_enc_det/compact_enc_det.cc
    ${ced_PATH}compact_enc_det/compact_enc_det_hint_code.cc
    ${ced_PATH}util/encodings/encodings.cc
    ${ced_PATH}util/languages/languages.cc
    )

add_library(ced STATIC ${CED_LIBRARY_SOURCES})

# https://stackoverflow.com/a/28294859/10904212
string(REPLACE " " ";" CED_REPLACED_FLAGS ${CED_CMAKE_CXX_FLAGS})
target_compile_options(ced PRIVATE
  ${CED_REPLACED_FLAGS}
)

set(EXTRA_TARGET_LINK_LIBRARIES)

if(WIN32)
  target_compile_definitions(ced PRIVATE
    UNICODE
    _UNICODE
    STRICT
    NOMINMAX)
  set(CED_THREADING threadwin)
else()
  set(CED_THREADING thread)
  list(APPEND EXTRA_TARGET_LINK_LIBRARIES -pthread)
endif()

#set(CED_CMAKE_ARCHIVE_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib)
#set(CED_CMAKE_LIBRARY_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib)
#set(CED_CMAKE_RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin)

set_property(TARGET ced PROPERTY CXX_STANDARD 11)

target_include_directories(ced PRIVATE
  ${CMAKE_CURRENT_SOURCE_DIR})

target_include_directories(ced PUBLIC
  ${CMAKE_CURRENT_SOURCE_DIR}/third_party/ced/src
)

### --- base ---###

add_library(base STATIC
  ${BASE_SOURCES}
)

if(EMSCRIPTEN)
  list(APPEND BASE_LIBRARIES
    ced
    icu
  )
  add_dependencies(base
    ${BASE_LIBRARIES}
  )
else()
  list(APPEND BASE_LIBRARIES
    tcmalloc
    atomic
    ced
    icu
  )
  add_dependencies(base
    tcmalloc
    #atomic # from system, no dep
    ced
    icu
  )
endif(EMSCRIPTEN)

target_link_libraries(base PUBLIC
  dynamic_annotations
  ${BASE_LIBRARIES}
)

set_property(TARGET base PROPERTY CXX_STANDARD 17)

set(BASE_DEFINES
  OFFICIAL_BUILD=1
)

# In your source, include files from base/ like normal.
# So if you want to use the string printf API, do:
# #include <base/stringprintf.h>
target_include_directories(base PUBLIC
  ${CMAKE_CURRENT_SOURCE_DIR}
)
#/home/avakimov_am/skia-opengl-emscripten/src/chromium/../../thirdparty/icu/source/common/unicode/normalizer2.h
#/home/avakimov_am/skia-opengl-emscripten/src/chromium/../../
#message(FATAL_ERROR ${CMAKE_CURRENT_SOURCE_DIR}/../../thirdparty/ced/src/)
target_include_directories(base PRIVATE
  #${CMAKE_CURRENT_SOURCE_DIR}/../..
  #${CMAKE_CURRENT_SOURCE_DIR}/../../thirdparty/ced/src
  ../../thirdparty/icu_wrapper/
  third_party
  third_party/tcmalloc
  third_party/tcmalloc/chromium/src
  third_party/tcmalloc/chromium/src/gperftools
  ${BASE_DIR}
)

target_compile_definitions(base PUBLIC
  ${BASE_DEFINES}
  ${WTF_EMCC_DEFINITIONS}
  ${WTF_COMMON_DEFINITIONS}
)

target_compile_definitions(base PUBLIC
  BASE_IMPLEMENTATION=1
  BASE_I18N_IMPLEMENTATION=1
)

### --- GFX_GEOMETRY ---###

set(GFX_GEOMETRY_SOURCES
  #${GFX_GEOMETRY_DIR}../gfx_export.h
  #${GFX_GEOMETRY_DIR}angle_conversions.h
  ${GFX_GEOMETRY_DIR}axis_transform2d.cc
  #${GFX_GEOMETRY_DIR}axis_transform2d.h
  ${GFX_GEOMETRY_DIR}box_f.cc
  #${GFX_GEOMETRY_DIR}box_f.h
  ${GFX_GEOMETRY_DIR}cubic_bezier.cc
  #${GFX_GEOMETRY_DIR}cubic_bezier.h
  ${GFX_GEOMETRY_DIR}dip_util.cc
  #${GFX_GEOMETRY_DIR}dip_util.h
  #${GFX_GEOMETRY_DIR}geometry_export.h
  ${GFX_GEOMETRY_DIR}insets.cc
  #${GFX_GEOMETRY_DIR}insets.h
  ${GFX_GEOMETRY_DIR}insets_f.cc
  #${GFX_GEOMETRY_DIR}insets_f.h
  ${GFX_GEOMETRY_DIR}matrix3_f.cc
  #${GFX_GEOMETRY_DIR}matrix3_f.h
  ${GFX_GEOMETRY_DIR}point.cc
  #${GFX_GEOMETRY_DIR}point.h
  ${GFX_GEOMETRY_DIR}point3_f.cc
  #${GFX_GEOMETRY_DIR}point3_f.h
  ${GFX_GEOMETRY_DIR}point_conversions.cc
  #${GFX_GEOMETRY_DIR}point_conversions.h
  ${GFX_GEOMETRY_DIR}point_f.cc
  #${GFX_GEOMETRY_DIR}point_f.h
  ${GFX_GEOMETRY_DIR}quad_f.cc
  #${GFX_GEOMETRY_DIR}quad_f.h
  ${GFX_GEOMETRY_DIR}quaternion.cc
  #${GFX_GEOMETRY_DIR}quaternion.h
  ${GFX_GEOMETRY_DIR}rect.cc
  #${GFX_GEOMETRY_DIR}rect.h
  ${GFX_GEOMETRY_DIR}rect_conversions.cc
  #${GFX_GEOMETRY_DIR}rect_conversions.h
  ${GFX_GEOMETRY_DIR}rect_f.cc
  #${GFX_GEOMETRY_DIR}rect_f.h
  #${GFX_GEOMETRY_DIR}safe_integer_conversions.h
  ${GFX_GEOMETRY_DIR}scroll_offset.cc
  #${GFX_GEOMETRY_DIR}scroll_offset.h
  ${GFX_GEOMETRY_DIR}size.cc
  #${GFX_GEOMETRY_DIR}size.h
  ${GFX_GEOMETRY_DIR}size_conversions.cc
  #${GFX_GEOMETRY_DIR}size_conversions.h
  ${GFX_GEOMETRY_DIR}size_f.cc
  #${GFX_GEOMETRY_DIR}size_f.h
  ${GFX_GEOMETRY_DIR}vector2d.cc
  #${GFX_GEOMETRY_DIR}vector2d.h
  ${GFX_GEOMETRY_DIR}vector2d_conversions.cc
  #${GFX_GEOMETRY_DIR}vector2d_conversions.h
  ${GFX_GEOMETRY_DIR}vector2d_f.cc
  #${GFX_GEOMETRY_DIR}vector2d_f.h
  ${GFX_GEOMETRY_DIR}vector3d_f.cc
  #${GFX_GEOMETRY_DIR}vector3d_f.h
)

add_library(GFX_GEOMETRY STATIC
  ${GFX_GEOMETRY_SOURCES}
)

target_link_libraries(GFX_GEOMETRY PUBLIC
  dynamic_annotations
  ${BASE_LIBRARIES}
)

set_property(TARGET GFX_GEOMETRY PROPERTY CXX_STANDARD 17)

target_include_directories(GFX_GEOMETRY PRIVATE
  ${GFX_GEOMETRY_DIR}
  ${BASE_DIR}
)

target_compile_definitions(GFX_GEOMETRY PRIVATE
  GEOMETRY_IMPLEMENTATION=1
)

### --- icu ---###
if(EMSCRIPTEN)
  set(USE_OWN_ICU TRUE)
elseif(${CMAKE_SYSTEM_NAME} STREQUAL "Linux")
  set(USE_OWN_ICU TRUE)
  if (NOT USE_OWN_ICU)
    # todo
    set(EXTRA_ICU_DEFINITIONS
      USING_SYSTEM_ICU=1
      ICU_UTIL_DATA_IMPL=ICU_UTIL_DATA_FILE
      U_ICUDATAENTRY_IN_COMMON # if 'OS == "win" or icu_use_data_file_flag==1'
      UCHAR_TYPE=uint16_t
    )
  endif(USE_OWN_ICU)
else()
  message(FATAL_ERROR "icu platform not supported")
endif()

if(USE_OWN_ICU)
  add_library(icu STATIC
    ${ICU_SOURCES}
  )

  set_property(TARGET icu PROPERTY CXX_STANDARD 17)

  # In your source, include files from base/ like normal.
  # So if you want to use the string printf API, do:
  # #include <base/stringprintf.h>
  target_include_directories(icu PUBLIC
    ${CMAKE_CURRENT_SOURCE_DIR}
    ${OWN_ICU_INCLUDE_DIRS}
  )

  target_include_directories(icu PRIVATE
    #${BASE_DIR}
  )

  # http://userguide.icu-project.org/howtouseicu#TOC-C-With-Your-Own-Build-System
  set(ICU_PUBLIC_DEFINES
    U_ENABLE_DYLOAD=0
    ICU_UTIL_DATA_IMPL=ICU_UTIL_DATA_FILE
  )

  set(ICU_PRIVATE_DEFINES
    HAVE_DLOPEN=0
    UCONFIG_ONLY_HTML_CONVERSION=1
    U_CHARSET_IS_UTF8=1
    # custom
    HAVE_DLFCN_H=0
  )

  if (WIN32)
    list(APPEND ICU_PUBLIC_DEFINES
      UCHAR_TYPE=wchar_t
    )
  elseif(EMSCRIPTEN)
    list(APPEND ICU_PUBLIC_DEFINES
      UCHAR_TYPE=uint16_t
    )
  else()
    list(APPEND ICU_PUBLIC_DEFINES
      UCHAR_TYPE=uint16_t
    )
  endif()

  # see https://github.com/webrtc-uwp/chromium-build/blob/master/linux/unbundle/icu.gn#L37
  list(APPEND ICU_PUBLIC_DEFINES
    U_IMPORT=U_EXPORT
  )

  #    "USING_SYSTEM_ICU=1",
  #    "ICU_UTIL_DATA_IMPL=ICU_UTIL_DATA_STATIC",
  #    "UCHAR_TYPE=uint16_t",
  #
  #    # U_EXPORT (defined in unicode/platform.h) is used to set public visibility
  #    # on classes through the U_COMMON_API and U_I18N_API macros (among others).
  #    # When linking against the system ICU library, we want its symbols to have
  #    # public LTO visibility. This disables CFI checks for the ICU classes and
  #    # allows whole-program optimization to be applied to the rest of Chromium.
  #    #
  #    # Both U_COMMON_API and U_I18N_API macros would be defined to U_EXPORT only
  #    # when U_COMBINED_IMPLEMENTATION is defined (see unicode/utypes.h). Because
  #    # we override the default system UCHAR_TYPE (char16_t), it is not possible
  #    # to use U_COMBINED_IMPLEMENTATION at this moment, meaning the U_COMMON_API
  #    # and U_I18N_API macros are set to U_IMPORT which is an empty definition.
  #    #
  #    # Until building with UCHAR_TYPE=char16_t is supported, one way to apply
  #    # public visibility (and thus public LTO visibility) to all ICU classes is
  #    # to define U_IMPORT to have the same value as U_EXPORT. For more details,
  #    # please see: https://crbug.com/822820
  #    "U_IMPORT=U_EXPORT",

  target_compile_definitions(icu PUBLIC
    ${ICU_PUBLIC_DEFINES}
    ${WTF_EMCC_DEFINITIONS}
    ${WTF_COMMON_DEFINITIONS}
    LIB_ICU_I18N_STATIC
    U_CHARSET_IS_UTF8=1
    U_NO_DEFAULT_INCLUDE_UTF_HEADERS=0
    #U_ATTRIBUTE_DEPRECATED
    #U_NO_DEFAULT_INCLUDE_UTF_HEADERS
  )

  target_compile_definitions(icu PRIVATE
    ICU_IMPLEMENTATION=1
    U_STATIC_IMPLEMENTATION=1
    U_COMMON_IMPLEMENTATION=1
    U_I18N_IMPLEMENTATION=1
    U_ATTRIBUTE_DEPRECATED=
    ${ICU_PRIVATE_DEFINES}
    OFFICIAL_BUILD=1
    # https://cs.chromium.org/chromium/src/build/build_config.h?g=0&l=86
    COMPONENT_BUILD=1
    # https://github.com/cool-easy/libchromiumbase/blob/master/build/config/linux/BUILD.gn#L88
    # USE_GLIB=1
    __STDC_FORMAT_MACROS
    ${WTF_EMCC_DEFINITIONS}
    ${WTF_COMMON_DEFINITIONS}

    #SYSTEM_NATIVE_UTF8
    #COM_INIT_CHECK_HOOK_DISABLED
    #USE_SYMBOLIZE
    #BASE_I18N_IMPLEMENTATION
    #MALLOC_WRAPPER_LIB=\"${shlib_prefix}malloc_wrapper${shlib_extension}\"
    #MEMORY_TOOL_REPLACES_ALLOCATOR=1
  )

  target_compile_options(icu PRIVATE
    -Wno-error
  )
endif()

if (EMSCRIPTEN)
  #find_package(ICU REQUIRED COMPONENTS I18N UC REQUIRED)
  add_library(${WTF_LIBRARY_NAME} STATIC
    ${WTF_SOURCES}
  )# ${BASE_SOURCES})
  #target_link_libraries(${WTF_LIBRARY_NAME} PUBLIC
  #  ${ICU_UC_LIBRARIES}
  #  ${ICU_I18N_LIBRARIES}
  #)
else(EMSCRIPTEN)
  #find_package(ICU) # REQUIRED)
  add_library(${WTF_LIBRARY_NAME} STATIC
    ${WTF_SOURCES}
  )# ${BASE_SOURCES})
endif (EMSCRIPTEN)

set_property(TARGET ${WTF_LIBRARY_NAME} PROPERTY CXX_STANDARD 17)

#include_directories(
#  ${CMAKE_CURRENT_SOURCE_DIR}
#  ${CMAKE_CURRENT_SOURCE_DIR}/wtf
#  ${CMAKE_CURRENT_SOURCE_DIR}/global_headers
#)
#message(FATAL_ERROR ${CMAKE_CURRENT_SOURCE_DIR}/global_headers)

#set(WTF_INCLUDE_DIRECTORIES
#    "${BMALLOC_DIR}"
#    "${CMAKE_BINARY_DIR}"
#    "${DERIVED_SOURCES_DIR}"
#    "${THIRDPARTY_DIR}"
#)

set(WTF_PRIVATE_INCLUDE_DIRECTORIES
  #${WTF_DIR}
  #${WTF_DIR}dtoa
  #${WTF_DIR}persistence
  #${WTF_DIR}text
  #${WTF_DIR}text/icu
  #${WTF_DIR}threads
  #${WTF_DIR}unicode
  #${WTF_DIR}icu
)

#message(FATAL_ERROR ${CMAKE_CXX_FLAGS})

target_include_directories(${WTF_LIBRARY_NAME} PUBLIC
  ${CMAKE_CURRENT_SOURCE_DIR}
  # folder containing wtf subdirectory
  #${WTF_DIR}/..
  #${CMAKE_CURRENT_SOURCE_DIR}/global_headers
)

#target_include_directories(${WTF_LIBRARY_NAME} SYSTEM PRIVATE
#  ${CMAKE_CURRENT_SOURCE_DIR}
#  ${CMAKE_CURRENT_SOURCE_DIR}/wtf
#  ${CMAKE_CURRENT_SOURCE_DIR}/global_headers
#)

set(WTF_LIBRARIES
  libevent
  base
)

if(EMSCRIPTEN)
  set(ICU_LIBRARIES icu)
  list(APPEND WTF_LIBRARIES
    ${ICU_LIBRARIES}
  )
elseif(${CMAKE_SYSTEM_NAME} STREQUAL "Linux")
  #Components can include any of: data, i18n, io, le, lx, test, tu and uc.
  # Note that on Windows data is named dt and i18n is named in;
  # any of the names may be used, and the appropriate platform-specific library name will be automatically selected.
  #find_package(ICU REQUIRED COMPONENTS i18n uc data REQUIRED)
  #MESSAGE("ICU_INCLUDE_DIRS: " ${ICU_INCLUDE_DIRS})
  #MESSAGE("ICU_LIBRARY_DIRS: " ${ICU_LIBRARY_DIRS})
  #MESSAGE("ICU_LIBRARIES: " ${ICU_LIBRARIES})
  ##
  #list(APPEND WTF_LIBRARIES
  #  ${ICU_LIBRARIES}
  #)
else()
  message(FATAL_ERROR "icu platform not supported")
endif()

#if(EMSCRIPTEN)
#else()
#  list(APPEND WTF_LIBRARIES
#    tcmalloc
#  )
#endif(EMSCRIPTEN)

target_include_directories(${WTF_LIBRARY_NAME} PRIVATE
  #${LIBEVENT_INCLUDE_DIRS}
  ${modp_b64_INCLUDE_DIRS}
  ${WTF_PRIVATE_INCLUDE_DIRECTORIES}
  #${WTF_DIR}
  ${OWN_ICU_INCLUDE_DIRS}
  ${ICU_INCLUDE_DIRS}
)

add_dependencies(${WTF_LIBRARY_NAME}
  ${WTF_LIBRARIES}
)

if (UNIX)
  #list(APPEND WTF_SOURCES wtf/OSAllocatorPosix.cpp)
elseif (WIN32)
  #list(APPEND WTF_SOURCES
  #  wtf/NullPtr.cpp
  #  wtf/OSAllocatorWin.cpp
  #  wtf/TCSystemAlloc.cpp
  #  wtf/ThreadingWin.cpp
  #  wtf/ThreadSpecificWin.cpp
  #  wtf/unicode/CollatorDefault.cpp
  #  wtf/unicode/wince/UnicodeWinCE.cpp
  #  wtf/win/MainThreadWin.cpp
  #  wtf/win/OwnPtrWin.cpp
  #  )
  #
  #list(APPEND WTF_HEADERS unicode/wince/UnicodeWinCE.h)
  #list(APPEND WTF_LIBRARIES mmtimer)
endif ()

if (SINGLE_THREADED OR EMSCRIPTEN)
  set(ENABLE_SINGLE_THREADED 1)
  #list(APPEND WTF_SOURCES wtf/ThreadingNone.cpp)
else()
  find_package(Threads REQUIRED)
  #list(APPEND WTF_SOURCES
  #  wtf/ThreadingPthreads.cpp
  #  wtf/ThreadIdentifierDataPthreads.cpp
  #  )
  list(APPEND WTF_LIBRARIES ${CMAKE_THREAD_LIBS_INIT})
  set(HAVE_PTHREADS 1)
endif ()

target_link_libraries(${WTF_LIBRARY_NAME} PUBLIC
  ${WTF_LIBRARIES}
)

target_compile_definitions(${WTF_LIBRARY_NAME} PUBLIC
  # TODO
)

target_compile_definitions(${WTF_LIBRARY_NAME} PRIVATE
  WTF_IMPLEMENTATION=1
  OFFICIAL_BUILD=1
  # https://cs.chromium.org/chromium/src/build/build_config.h?g=0&l=86
  COMPONENT_BUILD=1
  # https://github.com/cool-easy/libchromiumbase/blob/master/build/config/linux/BUILD.gn#L88
  # USE_GLIB=1
  __STDC_FORMAT_MACROS
  ${WTF_EMCC_DEFINITIONS}
  ${WTF_COMMON_DEFINITIONS}
  ${EXTRA_ICU_DEFINITIONS}

  #SYSTEM_NATIVE_UTF8
  #COM_INIT_CHECK_HOOK_DISABLED
  #USE_SYMBOLIZE
  #BASE_I18N_IMPLEMENTATION
  #MALLOC_WRAPPER_LIB=\"${shlib_prefix}malloc_wrapper${shlib_extension}\"
  #MEMORY_TOOL_REPLACES_ALLOCATOR=1
)

target_compile_options(${WTF_LIBRARY_NAME} PRIVATE
  -Wno-error
)

#if(EMSCRIPTEN)
#  # Tell ICU that we are a 32 bit platform, otherwise,
#  # double-conversion-utils.h doesn't know how to operate.
#  set(ICU_DEFINES "${ICU_DEFINES} -D__i386__=1")
#endif()

#install(FILES ${WTF_HEADERS} DESTINATION include/wtf)
#install(FILES ${WTF_TEXT_HEADERS} DESTINATION include/wtf/text)
#install(FILES ${WTF_UNICODE_HEADERS} DESTINATION include/wtf/unicode)
#install(FILES ${WTF_UNICODE_ICU_HEADERS} DESTINATION include/wtf/unicode/icu)
#install(TARGETS ${WTF_LIBRARY_NAME} DESTINATION lib)
