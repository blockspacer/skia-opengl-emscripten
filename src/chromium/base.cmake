cmake_minimum_required(VERSION 3.4)

### --- base ---###

if(ENABLE_UKM)
  list(APPEND BASE_SOURCES
     ${BASE_DIR}metrics/ukm_source_id.cc
     ${BASE_DIR}metrics/ukm_source_id.h
  )
endif(ENABLE_UKM)

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
   # TODO ${BASE_DIR}gtest_prod_util.h
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
   #${BASE_DIR}process/memory_mac.mm
   #${BASE_DIR}process/memory_win.cc
   #${BASE_DIR}process/port_provider_mac.cc
   #${BASE_DIR}process/port_provider_mac.h
   ${BASE_DIR}process/process.h
   ${BASE_DIR}process/process_handle.cc
   ${BASE_DIR}process/process_handle.h
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
   ${BASE_DIR}single_thread_task_runner.cc
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
   #${BASE_DIR}trace_event/common/trace_event_common.h
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
   # posix
   ${BASE_DIR}file_descriptor_posix.h
   ${BASE_DIR}files/dir_reader_posix.h
   ##${BASE_DIR}files/file_util_posix.cc
   ${BASE_DIR}files/memory_mapped_file_posix.cc
   ${BASE_DIR}memory/protected_memory_posix.cc
   ${BASE_DIR}message_loop/watchable_io_message_pump_posix.cc
   ${BASE_DIR}message_loop/watchable_io_message_pump_posix.h
   ${BASE_DIR}native_library_posix.cc
   ${BASE_DIR}posix/safe_strerror.cc
   ${BASE_DIR}posix/safe_strerror.h
   ${BASE_DIR}process/kill_posix.cc
   ${BASE_DIR}process/process_handle_posix.cc
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
   ${BASE_DIR}threading/platform_thread_internal_posix.cc
   ${BASE_DIR}threading/platform_thread_internal_posix.h
   ${BASE_DIR}threading/platform_thread_posix.cc
   ${BASE_DIR}threading/thread_local_storage_posix.cc
   ${BASE_DIR}timer/hi_res_timer_manager_posix.cc
   # https://github.com/chromium/chromium/blob/master/base/BUILD.gn#L1185
   ${BASE_DIR}base_paths_posix.h
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

if(TARGET_EMSCRIPTEN)
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
    #
    ${BASE_DIR}debug/debugger_posix.cc
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
elseif(TARGET_LINUX)
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
    # requires mojo::StructTraits<mojo_base::mojom::ProcessIdDataView,
    #
    ##${BASE_DIR}debug/stack_trace_posix.cc
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

  if(TARGET_EMSCRIPTEN)
    # nothing
  elseif(TARGET_LINUX)
    list(APPEND BASE_SOURCES
     # https://github.com/chromium/chromium/blob/master/base/BUILD.gn#L1894
     ${BASE_DIR}message_loop/message_pump_libevent.cc
     #${BASE_DIR}message_loop/message_pump_libevent.h
     ${BASE_DIR}task/thread_pool/task_tracker_posix.cc
     #${BASE_DIR}task/thread_pool/task_tracker_posix.h
     ${BASE_DIR}files/file_descriptor_watcher_posix.cc
     #${BASE_DIR}files/file_descriptor_watcher_posix.h
    )
  else()
    message(FATAL_ERROR "base platform not supported")
  endif()

else()
  message(FATAL_ERROR "TODO: port base")
endif()

list(APPEND BASE_SOURCES
  ${BASE_DIR}debug/stack_trace_posix.cc
  #if (!is_nacl) {
  #  sources += [
  #    "base_paths.cc",
  #    "base_paths.h",
  #    "base_paths_android.cc",
  #    "base_paths_android.h",
  #    "base_paths_mac.h",
  #    "base_paths_mac.mm",
  #    "base_paths_posix.h",
  #    "base_paths_win.cc",
  #    "base_paths_win.h",
  #    "metrics/persistent_histogram_storage.cc",
  #    "metrics/persistent_histogram_storage.h",
  #  ]
  ${BASE_DIR}base_paths.cc
  #if (is_linux) {
  #  sources += [
  #    "base_paths_posix.cc",
  #    "debug/elf_reader_linux.cc",
  #    "debug/elf_reader_linux.h",
  #  ]
  #}
  ${BASE_DIR}base_paths_posix.cc
  ${BASE_DIR}files/file_util_posix.cc
)

if(TARGET_LINUX)
  list(APPEND BASE_SOURCES
    ##${BASE_DIR}process/process_metrics_posix.cc
    ## TODO ##
    ##${BASE_DIR}debug/stack_trace_posix.cc
    #requires third_party/xdg_mime
    ## TODO ##
    ${BASE_DIR}nix/mime_util_xdg.cc
    #${BASE_DIR}nix/mime_util_xdg.h
    ##
    ${BASE_DIR}nix/xdg_util.cc
    #${BASE_DIR}nix/xdg_util.h
    ${BASE_DIR}system/sys_info_linux.cc
    ${BASE_DIR}linux_util.cc # if (!is_android)
    #${BASE_DIR}linux_util.h # if (!is_android)
    #
    ${BASE_DIR}debug/elf_reader.cc
    ${BASE_DIR}debug/elf_reader.h
    #
    ${BASE_DIR}files/file_descriptor_watcher_posix.cc
    ${BASE_DIR}files/file_descriptor_watcher_posix.h
    # #${BASE_DIR}debug/proc_maps_linux.cc
    # #${BASE_DIR}debug/proc_maps_linux.h
    ${BASE_DIR}files/file_util_linux.cc
    ${BASE_DIR}process/memory_linux.cc
    ${BASE_DIR}process/process_handle_linux.cc
    ${BASE_DIR}process/process_metrics_linux.cc
    ${BASE_DIR}threading/platform_thread_linux.cc
    ${BASE_DIR}process/process_metrics_linux.cc
    #${BASE_DIR}debug/proc_maps_linux.cc
    #${BASE_DIR}debug/proc_maps_linux.h
    ##https://github.com/chromium/chromium/blob/master/base/BUILD.gn#L1942
    #${BASE_DIR}message_loop/message_pump_glib.cc
    #${BASE_DIR}message_loop/message_pump_glib.h
    ##https://github.com/chromium/chromium/blob/master/base/BUILD.gn#L1120
    # ${BASE_DIR}debug/debugger_posix.cc
    # ${BASE_DIR}debug/stack_trace_posix.cc
    # ${BASE_DIR}files/file_descriptor_watcher_posix.cc
    # ${BASE_DIR}files/file_descriptor_watcher_posix.h
    # ${BASE_DIR}files/file_enumerator_posix.cc
    # ${BASE_DIR}files/file_posix.cc
    # ${BASE_DIR}posix/eintr_wrapper.h
    # ${BASE_DIR}posix/file_descriptor_shuffle.cc
    # ${BASE_DIR}posix/file_descriptor_shuffle.h
    # ${BASE_DIR}posix/global_descriptors.cc
    # ${BASE_DIR}posix/global_descriptors.h
    # ${BASE_DIR}posix/unix_domain_socket.cc
    # ${BASE_DIR}posix/unix_domain_socket.h
    # ${BASE_DIR}process/launch_posix.cc
    # ${BASE_DIR}process/process_metrics_posix.cc
    ${BASE_DIR}task/thread_pool/task_tracker_posix.cc
    ${BASE_DIR}task/thread_pool/task_tracker_posix.h
    ${BASE_DIR}files/file_descriptor_watcher_posix.cc
    ${BASE_DIR}files/file_descriptor_watcher_posix.h
  )
  list(APPEND EXTRA_DEFINES
    #USE_SYMBOLIZE=1
  )
endif()

if(ENABLE_COBALT)
  set(COBALT_port_base_SOURCES
    ##${COBALT_PORT_DIR}base/memory/aligned_memory.cc
    #
    #${COBALT_PORT_DIR}base/base_paths_starboard.cc
    #${COBALT_PORT_DIR}base/debug/debugger_starboard.cc
    #${COBALT_PORT_DIR}base/debug/stack_trace_starboard.cc
    #${COBALT_PORT_DIR}base/files/file_enumerator_starboard.cc
    #${COBALT_PORT_DIR}base/files/file_starboard.cc
    #${COBALT_PORT_DIR}base/files/file_util_starboard.cc
    #${COBALT_PORT_DIR}base/message_loop/message_pump_io_starboard.cc
    #${COBALT_PORT_DIR}base/message_loop/message_pump_ui_starboard.cc
    #${COBALT_PORT_DIR}base/process/memory_starboard.cc
    #${COBALT_PORT_DIR}base/process/process_starboard.cc
    #${COBALT_PORT_DIR}base/profiler/native_stack_sampler_starboard.cc
    #${COBALT_PORT_DIR}base/rand_util_starboard.cc
    #${COBALT_PORT_DIR}base/sampling_heap_profiler/module_cache_starboard.cc
    #${COBALT_PORT_DIR}base/strings/sys_string_conversions_starboard.cc
    #${COBALT_PORT_DIR}base/synchronization/condition_variable_starboard.cc
    #${COBALT_PORT_DIR}base/synchronization/lock_impl_starboard.cc
    #${COBALT_PORT_DIR}base/synchronization/waitable_event_starboard.cc
    #${COBALT_PORT_DIR}base/sys_info_starboard.cc
    #${COBALT_PORT_DIR}base/threading/platform_thread_starboard.cc
    #${COBALT_PORT_DIR}base/threading/thread_local_storage_starboard.cc
    #${COBALT_PORT_DIR}base/time/time_now_starboard.cc
    ${COBALT_PORT_DIR}base/time/time_starboard.cc
  )
endif(ENABLE_COBALT)

add_library(base STATIC
  ${BASE_SOURCES}
  ${COBALT_port_base_SOURCES}
)

if(TARGET_EMSCRIPTEN)
  list(APPEND EXTRA_CHROMIUM_BASE_LIBS
    ced
    ${CUSTOM_ICU_LIB}
    ${HARFBUZZ_LIBRARIES}
  )
elseif(TARGET_LINUX)

  # Check if libatomic is needed
  # see https://github.com/HewlettPackard/foedus_code/blob/master/foedus-core/cmake/FindGccAtomic.cmake
  include(GNUInstallDirs)
  include(CMakePushCheckState)
  include(CheckCXXCompilerFlag)
  include(CheckCXXSourceCompiles)
  include(CMakePackageConfigHelpers)
  cmake_push_check_state()
  check_cxx_source_compiles("
      #include <atomic>
      #include <stdint.h>
      int main() {
          std::atomic<int64_t> x;
          x = 1;
          x--;
          return (int) x;
      }"
      atomic64)
  #if(NOT atomic64)
      # I'm also putting "atomic.so.1" because at least FC19 and Ubuntu's repo don't create
      # "libatomic.so" symlink. They only have libatomic.so.1.0.0 and libatomic.so.1 symlink. No idea why.
      find_library(ATOMIC
        NAMES
          atomic
          atomic.so.1
          libatomic.so
          libatomic.so.1
          libatomic.so.1.2.0
        HINTS
          $ENV{HOME}/local/lib64
          $ENV{HOME}/local/lib
          /usr/local/lib64
          /usr/local/lib
          /opt/local/lib64
          /opt/local/lib
          /usr/lib64
          /usr/lib
          /lib64
          /lib
          /usr/lib
          /usr/lib/x86_64-linux-gnu
          /opt/usr/lib
          /opt/usr/lib64
      )
      if(ATOMIC)
          set(LIBATOMIC ${ATOMIC})
          message(STATUS "Found libatomic: ${LIBATOMIC}")
      else()
          check_cxx_source_compiles("
              #include <atomic>
              #include <stdint.h>
              int main() {
                  std::atomic<int32_t> x;
                  x = 1;
                  x--;
                  return (int) x;
              }"
              atomic32)

          if(atomic32)
              message(FATAL_ERROR "Failed to find libatomic!")
          endif()
      endif(ATOMIC)
  #endif(NOT atomic64)
  cmake_pop_check_state()

  list(APPEND EXTRA_CHROMIUM_BASE_LIBS
    tcmalloc
    ced
    ${CUSTOM_ICU_LIB}
    ${HARFBUZZ_LIBRARIES}
    # libevent only for posix/linux/e.t.c.
    libevent
    modp_b64
  )
  add_dependencies(base
    tcmalloc
    ced
    ${CUSTOM_ICU_LIB}
    ${HARFBUZZ_LIBRARIES}
    modp_b64
  )
else()
  message(FATAL_ERROR "platform not supported")
endif()

if(TARGET_LINUX)
  list(APPEND EXTRA_CHROMIUM_BASE_LIBS
    xdg_mime
    xdg_user_dirs
  )
endif(TARGET_LINUX)

add_dependencies(base
  ${EXTRA_CHROMIUM_BASE_LIBS}
)

#message(FATAL_ERROR EXTRA_CHROMIUM_BASE_LIBS=${EXTRA_CHROMIUM_BASE_LIBS})

#'dependencies': [
#  '<(DEPTH)/nb/nb.gyp:nb',
#  '<(DEPTH)/starboard/client_porting/eztime/eztime.gyp:eztime',
#  '<(DEPTH)/starboard/starboard.gyp:starboard',
#  '<(DEPTH)/testing/gtest.gyp:gtest_prod',
#  '<(DEPTH)/third_party/modp_b64/modp_b64.gyp:modp_b64',
#  'base_static',
#  'third_party/dynamic_annotations/dynamic_annotations.gyp:dynamic_annotations',
#],
target_link_libraries(base PUBLIC
  ${COBALT_NANOBASE_LIB}
  ${STARBOARD_PLATFORM_LIB}
  #starboard_core
  ${STARBOARD_EZTIME_LIB}
  ${STARBOARD_COMMON_LIB}
  modp_b64
  #
  dynamic_annotations
  ${EXTRA_CHROMIUM_BASE_LIBS}
  ${LIBATOMIC} # from system, no dep. for __atomic_is_lock_free
)

set_property(TARGET base PROPERTY CXX_STANDARD 17)

set(BASE_DEFINES
  OFFICIAL_BUILD=1
)

# In your source, include files from base/ like normal.
# So if you want to use the string printf API, do:
# #include <base/stringprintf.h>
target_include_directories(base PUBLIC
  ${CHROMIUM_DIR}
  # TODO
  #${COBALT_COMMON_INCLUDES}
)

#message(FATAL_ERROR ${CHROMIUM_DIR}/../../thirdparty/ced/src/)
target_include_directories(base PRIVATE
  #${CHROMIUM_DIR}/../..
  #${CHROMIUM_DIR}/../../thirdparty/ced/src
  ../../thirdparty/icu_wrapper/
  third_party
  third_party/tcmalloc
  third_party/tcmalloc/chromium/src
  third_party/tcmalloc/chromium/src/gperftools
  ${BASE_DIR}
  ${COBALT_COMMON_INCLUDES}
)

target_compile_definitions(base PUBLIC
  ${BASE_DEFINES}
  ${WTF_EMCC_DEFINITIONS}
  ${WTF_COMMON_DEFINITIONS}
  ${EXTRA_DEFINES}
)

if(TARGET_LINUX)
  list(APPEND EXTRA_DEFINITIONS
    HAVE_MMAP=1
  )
endif()

target_compile_definitions(base PRIVATE
  # TODO
  ${COBALT_COMMON_DEFINES}
)

target_compile_definitions(base PUBLIC
  BASE_IMPLEMENTATION=1
  BASE_I18N_IMPLEMENTATION=1
  ${EXTRA_DEFINITIONS}
  # TODO
  #${COBALT_COMMON_DEFINES}
)

target_compile_options(base PUBLIC
  -Wno-c++11-narrowing
)
