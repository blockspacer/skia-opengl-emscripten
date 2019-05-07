cmake_minimum_required(VERSION 2.8)
project(WTF)
set(WTF_LIBRARY_NAME wtf)

list(APPEND CMAKE_MODULE_PATH ${CMAKE_CURRENT_SOURCE_DIR}/cmake)

set(WTF_DIR ${CMAKE_CURRENT_SOURCE_DIR}/third_party/blink/renderer/platform/wtf/)
#set(3RDPARTY_DIR "${CMAKE_CURRENT_SOURCE_DIR}/")

set(BASE_DIR ${CMAKE_CURRENT_SOURCE_DIR}/base/)

list(APPEND BASE_SOURCES
   ${BASE_DIR}allocator/allocator_check.cc
   ${BASE_DIR}allocator/allocator_check.h
   ${BASE_DIR}allocator/allocator_extension.cc
   ${BASE_DIR}allocator/allocator_extension.h
   ${BASE_DIR}allocator/allocator_interception_mac.h
   ${BASE_DIR}allocator/allocator_interception_mac.mm
   ${BASE_DIR}allocator/malloc_zone_functions_mac.cc
   ${BASE_DIR}allocator/malloc_zone_functions_mac.h
   ${BASE_DIR}at_exit.cc
   ${BASE_DIR}at_exit.h
   ${BASE_DIR}atomic_ref_count.h
   ${BASE_DIR}atomic_sequence_num.h
   ${BASE_DIR}atomicops.h
   ${BASE_DIR}atomicops_internals_atomicword_compat.h
   ${BASE_DIR}atomicops_internals_portable.h
   ${BASE_DIR}atomicops_internals_x86_msvc.h
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
   #${BASE_DIR}bind_helpers.h
   #${BASE_DIR}bind_internal.h
   #${BASE_DIR}bit_cast.h
   #${BASE_DIR}bits.h
   #${BASE_DIR}build_time.cc
   #${BASE_DIR}build_time.h
   #${BASE_DIR}callback.h
   #${BASE_DIR}callback_forward.h
   #${BASE_DIR}callback_helpers.cc
   #${BASE_DIR}callback_helpers.h
   #${BASE_DIR}callback_internal.cc
   #${BASE_DIR}callback_internal.h
   #${BASE_DIR}callback_list.h
   #${BASE_DIR}cancelable_callback.h
   #${BASE_DIR}command_line.cc
   #${BASE_DIR}command_line.h
   #${BASE_DIR}compiler_specific.h
   #${BASE_DIR}component_export.h
   #${BASE_DIR}containers/adapters.h
   #${BASE_DIR}containers/any_internal.cc
   #${BASE_DIR}containers/any_internal.h
   #${BASE_DIR}containers/buffer_iterator.h
   #${BASE_DIR}containers/checked_iterators.h
   #${BASE_DIR}containers/circular_deque.h
   #${BASE_DIR}containers/flat_map.h
   #${BASE_DIR}containers/flat_set.h
   #${BASE_DIR}containers/flat_tree.h
   #${BASE_DIR}containers/id_map.h
   #${BASE_DIR}containers/linked_list.h
   #${BASE_DIR}containers/mru_cache.h
   #${BASE_DIR}containers/small_map.h
   #${BASE_DIR}containers/span.h
   #${BASE_DIR}containers/stack.h
   #${BASE_DIR}containers/stack_container.h
   #${BASE_DIR}containers/unique_any.cc
   #${BASE_DIR}containers/unique_any.h
   #${BASE_DIR}containers/unique_ptr_adapters.h
   #${BASE_DIR}containers/util.h
   #${BASE_DIR}containers/vector_buffer.h
   #${BASE_DIR}cpu.cc
   #${BASE_DIR}cpu.h
   #${BASE_DIR}critical_closure.h
   #${BASE_DIR}critical_closure_internal_ios.mm
   #${BASE_DIR}debug/activity_analyzer.cc
   #${BASE_DIR}debug/activity_analyzer.h
   #${BASE_DIR}debug/activity_tracker.cc
   #${BASE_DIR}debug/activity_tracker.h
   #${BASE_DIR}debug/alias.cc
   #${BASE_DIR}debug/alias.h
   #${BASE_DIR}debug/asan_invalid_access.cc
   #${BASE_DIR}debug/asan_invalid_access.h
   #${BASE_DIR}debug/close_handle_hook_win.cc
   #${BASE_DIR}debug/close_handle_hook_win.h
   #${BASE_DIR}debug/crash_logging.cc
   #${BASE_DIR}debug/crash_logging.h
   #${BASE_DIR}debug/debugger.cc
   #${BASE_DIR}debug/debugger.h
   #${BASE_DIR}debug/debugger_win.cc
   #${BASE_DIR}debug/dump_without_crashing.cc
   #${BASE_DIR}debug/dump_without_crashing.h
   #${BASE_DIR}debug/gdi_debug_util_win.cc
   #${BASE_DIR}debug/gdi_debug_util_win.h
   #${BASE_DIR}debug/invalid_access_win.cc
   #${BASE_DIR}debug/invalid_access_win.h
   #${BASE_DIR}debug/leak_annotations.h
   #${BASE_DIR}debug/leak_tracker.h
   #${BASE_DIR}debug/proc_maps_linux.cc
   #${BASE_DIR}debug/proc_maps_linux.h
   #${BASE_DIR}debug/profiler.cc
   #${BASE_DIR}debug/profiler.h
   #${BASE_DIR}debug/stack_trace.cc
   #${BASE_DIR}debug/stack_trace.h
   #${BASE_DIR}debug/stack_trace_android.cc
   #${BASE_DIR}debug/stack_trace_win.cc
   #${BASE_DIR}debug/task_trace.cc
   #${BASE_DIR}debug/task_trace.h
   #${BASE_DIR}deferred_sequenced_task_runner.cc
   #${BASE_DIR}deferred_sequenced_task_runner.h
   #${BASE_DIR}enterprise_util.h
   #${BASE_DIR}enterprise_util_mac.mm
   #${BASE_DIR}enterprise_util_win.cc
   #${BASE_DIR}environment.cc
   #${BASE_DIR}environment.h
   #${BASE_DIR}export_template.h
   #${BASE_DIR}feature_list.cc
   #${BASE_DIR}feature_list.h
   #${BASE_DIR}file_descriptor_store.cc
   #${BASE_DIR}file_descriptor_store.h
   #${BASE_DIR}file_version_info.h
   #${BASE_DIR}file_version_info_mac.h
   #${BASE_DIR}file_version_info_mac.mm
   #${BASE_DIR}file_version_info_win.cc
   #${BASE_DIR}file_version_info_win.h
   #${BASE_DIR}files/dir_reader_fallback.h
   #${BASE_DIR}files/dir_reader_linux.h
   #${BASE_DIR}files/file.cc
   #${BASE_DIR}files/file.h
   #${BASE_DIR}files/file_enumerator.cc
   #${BASE_DIR}files/file_enumerator.h
   #${BASE_DIR}files/file_path.cc
   #${BASE_DIR}files/file_path.h
   #${BASE_DIR}files/file_path_constants.cc
   #${BASE_DIR}files/file_path_watcher.cc
   #${BASE_DIR}files/file_path_watcher.h
   #${BASE_DIR}files/file_path_watcher_linux.cc
   #${BASE_DIR}files/file_path_watcher_mac.cc
   #${BASE_DIR}files/file_path_watcher_win.cc
   #${BASE_DIR}files/file_proxy.cc
   #${BASE_DIR}files/file_proxy.h
   #${BASE_DIR}files/file_tracing.cc
   #${BASE_DIR}files/file_tracing.h
   #${BASE_DIR}files/file_util.cc
   #${BASE_DIR}files/file_util.h
   #${BASE_DIR}files/file_util_android.cc
   #${BASE_DIR}files/file_util_linux.cc
   #${BASE_DIR}files/file_util_mac.mm
   #${BASE_DIR}files/file_util_win.cc
   #${BASE_DIR}files/file_win.cc
   #${BASE_DIR}files/important_file_writer.cc
   #${BASE_DIR}files/important_file_writer.h
   #${BASE_DIR}files/memory_mapped_file.cc
   #${BASE_DIR}files/memory_mapped_file.h
   #${BASE_DIR}files/memory_mapped_file_win.cc
   #${BASE_DIR}files/platform_file.h
   #${BASE_DIR}files/scoped_file.cc
   #${BASE_DIR}files/scoped_file.h
   #${BASE_DIR}files/scoped_file_android.cc
   #${BASE_DIR}files/scoped_temp_dir.cc
   #${BASE_DIR}files/scoped_temp_dir.h
   #${BASE_DIR}format_macros.h
   #${BASE_DIR}gtest_prod_util.h
   #${BASE_DIR}guid.cc
   #${BASE_DIR}guid.h
   #${BASE_DIR}hash/hash.cc
   #${BASE_DIR}hash/hash.h
   #${BASE_DIR}hash/md5.cc
   #${BASE_DIR}hash/md5.h
   #${BASE_DIR}hash/sha1.cc
   #${BASE_DIR}hash/sha1.h
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
   #${BASE_DIR}json/json_file_value_serializer.cc
   #${BASE_DIR}json/json_file_value_serializer.h
   #${BASE_DIR}json/json_parser.cc
   #${BASE_DIR}json/json_parser.h
   #${BASE_DIR}json/json_reader.cc
   #${BASE_DIR}json/json_reader.h
   #${BASE_DIR}json/json_string_value_serializer.cc
   #${BASE_DIR}json/json_string_value_serializer.h
   #${BASE_DIR}json/json_value_converter.cc
   #${BASE_DIR}json/json_value_converter.h
   #${BASE_DIR}json/json_writer.cc
   #${BASE_DIR}json/json_writer.h
   #${BASE_DIR}json/string_escape.cc
   #${BASE_DIR}json/string_escape.h
   #${BASE_DIR}lazy_instance.h
   #${BASE_DIR}lazy_instance_helpers.cc
   #${BASE_DIR}lazy_instance_helpers.h
   #${BASE_DIR}linux_util.cc
   #${BASE_DIR}linux_util.h
   #${BASE_DIR}location.cc
   #${BASE_DIR}location.h
   #${BASE_DIR}logging.cc
   #${BASE_DIR}logging.h
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
   #${BASE_DIR}macros.h
   #${BASE_DIR}memory/aligned_memory.cc
   #${BASE_DIR}memory/aligned_memory.h
   #${BASE_DIR}memory/discardable_memory.cc
   #${BASE_DIR}memory/discardable_memory.h
   #${BASE_DIR}memory/discardable_memory_allocator.cc
   #${BASE_DIR}memory/discardable_memory_allocator.h
   #${BASE_DIR}memory/discardable_shared_memory.cc
   #${BASE_DIR}memory/discardable_shared_memory.h
   #${BASE_DIR}memory/free_deleter.h
   #${BASE_DIR}memory/memory_pressure_listener.cc
   #${BASE_DIR}memory/memory_pressure_listener.h
   #${BASE_DIR}memory/memory_pressure_monitor.cc
   #${BASE_DIR}memory/memory_pressure_monitor.h
   #${BASE_DIR}memory/memory_pressure_monitor_chromeos.cc
   #${BASE_DIR}memory/memory_pressure_monitor_chromeos.h
   #${BASE_DIR}memory/memory_pressure_monitor_mac.cc
   #${BASE_DIR}memory/memory_pressure_monitor_mac.h
   #${BASE_DIR}memory/memory_pressure_monitor_notifying_chromeos.cc
   #${BASE_DIR}memory/memory_pressure_monitor_notifying_chromeos.h
   #${BASE_DIR}memory/memory_pressure_monitor_win.cc
   #${BASE_DIR}memory/memory_pressure_monitor_win.h
   #${BASE_DIR}memory/platform_shared_memory_region.cc
   #${BASE_DIR}memory/platform_shared_memory_region.h
   #${BASE_DIR}memory/protected_memory.cc
   #${BASE_DIR}memory/protected_memory.h
   #${BASE_DIR}memory/protected_memory_cfi.h
   #${BASE_DIR}memory/protected_memory_win.cc
   #${BASE_DIR}memory/ptr_util.h
   #${BASE_DIR}memory/raw_scoped_refptr_mismatch_checker.h
   #${BASE_DIR}memory/read_only_shared_memory_region.cc
   #${BASE_DIR}memory/read_only_shared_memory_region.h
   #${BASE_DIR}memory/ref_counted.cc
   #${BASE_DIR}memory/ref_counted.h
   #${BASE_DIR}memory/ref_counted_delete_on_sequence.h
   #${BASE_DIR}memory/ref_counted_memory.cc
   #${BASE_DIR}memory/ref_counted_memory.h
   #${BASE_DIR}memory/scoped_policy.h
   #${BASE_DIR}memory/scoped_refptr.h
   #${BASE_DIR}memory/shared_memory.h
   #${BASE_DIR}memory/shared_memory_handle.cc
   #${BASE_DIR}memory/shared_memory_handle.h
   #${BASE_DIR}memory/shared_memory_helper.cc
   #${BASE_DIR}memory/shared_memory_helper.h
   #${BASE_DIR}memory/shared_memory_hooks.h
   #${BASE_DIR}memory/shared_memory_mapping.cc
   #${BASE_DIR}memory/shared_memory_mapping.h
   #${BASE_DIR}memory/shared_memory_tracker.cc
   #${BASE_DIR}memory/shared_memory_tracker.h
   #${BASE_DIR}memory/singleton.h
   #${BASE_DIR}memory/unsafe_shared_memory_region.cc
   #${BASE_DIR}memory/unsafe_shared_memory_region.h
   #${BASE_DIR}memory/weak_ptr.cc
   #${BASE_DIR}memory/weak_ptr.h
   #${BASE_DIR}memory/writable_shared_memory_region.cc
   #${BASE_DIR}memory/writable_shared_memory_region.h
   #${BASE_DIR}message_loop/message_loop.cc
   #${BASE_DIR}message_loop/message_loop.h
   #${BASE_DIR}message_loop/message_loop_current.cc
   #${BASE_DIR}message_loop/message_loop_current.h
   #${BASE_DIR}message_loop/message_pump.cc
   #${BASE_DIR}message_loop/message_pump.h
   #${BASE_DIR}message_loop/message_pump_android.cc
   #${BASE_DIR}message_loop/message_pump_android.h
   #${BASE_DIR}message_loop/message_pump_default.cc
   #${BASE_DIR}message_loop/message_pump_default.h
   #${BASE_DIR}message_loop/message_pump_for_io.h
   #${BASE_DIR}message_loop/message_pump_for_ui.h
   #${BASE_DIR}message_loop/message_pump_glib.cc
   #${BASE_DIR}message_loop/message_pump_glib.h
   #${BASE_DIR}message_loop/message_pump_io_ios.cc
   #${BASE_DIR}message_loop/message_pump_io_ios.h
   #${BASE_DIR}message_loop/message_pump_mac.h
   #${BASE_DIR}message_loop/message_pump_mac.mm
   #${BASE_DIR}message_loop/message_pump_win.cc
   #${BASE_DIR}message_loop/message_pump_win.h
   #${BASE_DIR}message_loop/timer_slack.h
   #${BASE_DIR}message_loop/work_id_provider.cc
   #${BASE_DIR}message_loop/work_id_provider.h
   #${BASE_DIR}metrics/bucket_ranges.cc
   #${BASE_DIR}metrics/bucket_ranges.h
   #${BASE_DIR}metrics/dummy_histogram.cc
   #${BASE_DIR}metrics/dummy_histogram.h
   #${BASE_DIR}metrics/field_trial.cc
   #${BASE_DIR}metrics/field_trial.h
   #${BASE_DIR}metrics/field_trial_param_associator.cc
   #${BASE_DIR}metrics/field_trial_param_associator.h
   #${BASE_DIR}metrics/field_trial_params.cc
   #${BASE_DIR}metrics/field_trial_params.h
   #${BASE_DIR}metrics/histogram.cc
   #${BASE_DIR}metrics/histogram.h
   #${BASE_DIR}metrics/histogram_base.cc
   #${BASE_DIR}metrics/histogram_base.h
   #${BASE_DIR}metrics/histogram_delta_serialization.cc
   #${BASE_DIR}metrics/histogram_delta_serialization.h
   #${BASE_DIR}metrics/histogram_flattener.h
   #${BASE_DIR}metrics/histogram_functions.cc
   #${BASE_DIR}metrics/histogram_functions.h
   #${BASE_DIR}metrics/histogram_macros.h
   #${BASE_DIR}metrics/histogram_macros_internal.h
   #${BASE_DIR}metrics/histogram_macros_local.h
   #${BASE_DIR}metrics/histogram_samples.cc
   #${BASE_DIR}metrics/histogram_samples.h
   #${BASE_DIR}metrics/histogram_snapshot_manager.cc
   #${BASE_DIR}metrics/histogram_snapshot_manager.h
   #${BASE_DIR}metrics/metrics_hashes.cc
   #${BASE_DIR}metrics/metrics_hashes.h
   #${BASE_DIR}metrics/persistent_histogram_allocator.cc
   #${BASE_DIR}metrics/persistent_histogram_allocator.h
   #${BASE_DIR}metrics/persistent_memory_allocator.cc
   #${BASE_DIR}metrics/persistent_memory_allocator.h
   #${BASE_DIR}metrics/persistent_sample_map.cc
   #${BASE_DIR}metrics/persistent_sample_map.h
   #${BASE_DIR}metrics/record_histogram_checker.h
   #${BASE_DIR}metrics/sample_map.cc
   #${BASE_DIR}metrics/sample_map.h
   #${BASE_DIR}metrics/sample_vector.cc
   #${BASE_DIR}metrics/sample_vector.h
   #${BASE_DIR}metrics/single_sample_metrics.cc
   #${BASE_DIR}metrics/single_sample_metrics.h
   #${BASE_DIR}metrics/sparse_histogram.cc
   #${BASE_DIR}metrics/sparse_histogram.h
   #${BASE_DIR}metrics/statistics_recorder.cc
   #${BASE_DIR}metrics/statistics_recorder.h
   #${BASE_DIR}metrics/ukm_source_id.cc
   #${BASE_DIR}metrics/ukm_source_id.h
   #${BASE_DIR}metrics/user_metrics.cc
   #${BASE_DIR}metrics/user_metrics.h
   #${BASE_DIR}metrics/user_metrics_action.h
   #${BASE_DIR}native_library.cc
   #${BASE_DIR}native_library.h
   #${BASE_DIR}native_library_ios.mm
   #${BASE_DIR}native_library_mac.mm
   #${BASE_DIR}native_library_win.cc
   #${BASE_DIR}no_destructor.h
   #${BASE_DIR}observer_list.h
   #${BASE_DIR}observer_list_internal.cc
   #${BASE_DIR}observer_list_internal.h
   #${BASE_DIR}observer_list_threadsafe.cc
   #${BASE_DIR}observer_list_threadsafe.h
   #${BASE_DIR}observer_list_types.cc
   #${BASE_DIR}observer_list_types.h
   #${BASE_DIR}one_shot_event.cc
   #${BASE_DIR}one_shot_event.h
   #${BASE_DIR}optional.h
   #${BASE_DIR}os_compat_android.cc
   #${BASE_DIR}os_compat_android.h
   #${BASE_DIR}os_compat_nacl.cc
   #${BASE_DIR}os_compat_nacl.h
   #${BASE_DIR}parameter_pack.h
   #${BASE_DIR}path_service.cc
   #${BASE_DIR}path_service.h
   #${BASE_DIR}pending_task.cc
   #${BASE_DIR}pending_task.h
   #${BASE_DIR}pickle.cc
   #${BASE_DIR}pickle.h
   #${BASE_DIR}post_task_and_reply_with_result_internal.h
   #${BASE_DIR}power_monitor/power_monitor.cc
   #${BASE_DIR}power_monitor/power_monitor.h
   #${BASE_DIR}power_monitor/power_monitor_device_source.cc
   #${BASE_DIR}power_monitor/power_monitor_device_source.h
   #${BASE_DIR}power_monitor/power_monitor_source.cc
   #${BASE_DIR}power_monitor/power_monitor_source.h
   #${BASE_DIR}power_monitor/power_observer.h
   #${BASE_DIR}process/environment_internal.cc
   #${BASE_DIR}process/environment_internal.h
   #${BASE_DIR}process/internal_linux.cc
   #${BASE_DIR}process/internal_linux.h
   #${BASE_DIR}process/kill.cc
   #${BASE_DIR}process/kill.h
   #${BASE_DIR}process/kill_mac.cc
   #${BASE_DIR}process/kill_win.cc
   #${BASE_DIR}process/launch.cc
   #${BASE_DIR}process/launch.h
   #${BASE_DIR}process/launch_ios.cc
   #${BASE_DIR}process/launch_mac.cc
   #${BASE_DIR}process/launch_win.cc
   #${BASE_DIR}process/memory.cc
   #${BASE_DIR}process/memory.h
   #${BASE_DIR}process/memory_linux.cc
   #${BASE_DIR}process/memory_mac.mm
   #${BASE_DIR}process/memory_win.cc
   #${BASE_DIR}process/port_provider_mac.cc
   #${BASE_DIR}process/port_provider_mac.h
   #${BASE_DIR}process/process.h
   #${BASE_DIR}process/process_handle.cc
   #${BASE_DIR}process/process_handle.h
   #${BASE_DIR}process/process_handle_linux.cc
   #${BASE_DIR}process/process_handle_mac.cc
   #${BASE_DIR}process/process_handle_win.cc
   #${BASE_DIR}process/process_info.h
   #${BASE_DIR}process/process_info_win.cc
   #${BASE_DIR}process/process_iterator.cc
   #${BASE_DIR}process/process_iterator.h
   #${BASE_DIR}process/process_iterator_linux.cc
   #${BASE_DIR}process/process_iterator_mac.cc
   #${BASE_DIR}process/process_iterator_win.cc
   #${BASE_DIR}process/process_linux.cc
   #${BASE_DIR}process/process_mac.cc
   #${BASE_DIR}process/process_metrics.cc
   #${BASE_DIR}process/process_metrics.h
   #${BASE_DIR}process/process_metrics_ios.cc
   #${BASE_DIR}process/process_metrics_linux.cc
   #${BASE_DIR}process/process_metrics_mac.cc
   #${BASE_DIR}process/process_metrics_win.cc
   #${BASE_DIR}process/process_win.cc
   #${BASE_DIR}profiler/frame.cc
   #${BASE_DIR}profiler/frame.h
   #${BASE_DIR}profiler/metadata_recorder.cc
   #${BASE_DIR}profiler/metadata_recorder.h
   #${BASE_DIR}profiler/native_unwinder.h
   #${BASE_DIR}profiler/native_unwinder_mac.cc
   #${BASE_DIR}profiler/native_unwinder_mac.h
   #${BASE_DIR}profiler/native_unwinder_win.cc
   #${BASE_DIR}profiler/native_unwinder_win.h
   #${BASE_DIR}profiler/profile_builder.h
   #${BASE_DIR}profiler/register_context.h
   #${BASE_DIR}profiler/sample_metadata.cc
   #${BASE_DIR}profiler/sample_metadata.h
   #${BASE_DIR}profiler/stack_sampler.cc
   #${BASE_DIR}profiler/stack_sampler.h
   #${BASE_DIR}profiler/stack_sampler_impl.cc
   #${BASE_DIR}profiler/stack_sampler_impl.h
   #${BASE_DIR}profiler/stack_sampler_mac.cc
   #${BASE_DIR}profiler/stack_sampler_win.cc
   #${BASE_DIR}profiler/stack_sampling_profiler.cc
   #${BASE_DIR}profiler/stack_sampling_profiler.h
   #${BASE_DIR}profiler/thread_delegate.h
   #${BASE_DIR}profiler/thread_delegate_mac.cc
   #${BASE_DIR}profiler/thread_delegate_mac.h
   #${BASE_DIR}profiler/thread_delegate_win.cc
   #${BASE_DIR}profiler/thread_delegate_win.h
   #${BASE_DIR}profiler/unwinder.h
   #${BASE_DIR}rand_util.cc
   #${BASE_DIR}rand_util.h
   #${BASE_DIR}rand_util_nacl.cc
   #${BASE_DIR}run_loop.cc
   #${BASE_DIR}run_loop.h
   #${BASE_DIR}sampling_heap_profiler/lock_free_address_hash_set.cc
   #${BASE_DIR}sampling_heap_profiler/lock_free_address_hash_set.h
   #${BASE_DIR}sampling_heap_profiler/module_cache.cc
   #${BASE_DIR}sampling_heap_profiler/module_cache.h
   #${BASE_DIR}sampling_heap_profiler/module_cache_mac.cc
   #${BASE_DIR}sampling_heap_profiler/module_cache_win.cc
   #${BASE_DIR}sampling_heap_profiler/poisson_allocation_sampler.cc
   #${BASE_DIR}sampling_heap_profiler/poisson_allocation_sampler.h
   #${BASE_DIR}sampling_heap_profiler/sampling_heap_profiler.cc
   #${BASE_DIR}sampling_heap_profiler/sampling_heap_profiler.h
   #${BASE_DIR}scoped_clear_last_error.h
   #${BASE_DIR}scoped_clear_last_error_win.cc
   #${BASE_DIR}scoped_generic.h
   #${BASE_DIR}scoped_native_library.cc
   #${BASE_DIR}scoped_native_library.h
   #${BASE_DIR}scoped_observer.h
   #${BASE_DIR}sequence_checker.h
   #${BASE_DIR}sequence_checker_impl.cc
   #${BASE_DIR}sequence_checker_impl.h
   #${BASE_DIR}sequence_token.cc
   #${BASE_DIR}sequence_token.h
   #${BASE_DIR}sequenced_task_runner.cc
   #${BASE_DIR}sequenced_task_runner.h
   #${BASE_DIR}sequenced_task_runner_helpers.h
   #${BASE_DIR}single_thread_task_runner.h
   #${BASE_DIR}stl_util.h
   #${BASE_DIR}strings/char_traits.h
   #${BASE_DIR}strings/latin1_string_conversions.cc
   #${BASE_DIR}strings/latin1_string_conversions.h
   #${BASE_DIR}strings/nullable_string16.cc
   #${BASE_DIR}strings/nullable_string16.h
   #${BASE_DIR}strings/pattern.cc
   #${BASE_DIR}strings/pattern.h
   #${BASE_DIR}strings/safe_sprintf.cc
   #${BASE_DIR}strings/safe_sprintf.h
   #${BASE_DIR}strings/strcat.cc
   #${BASE_DIR}strings/strcat.h
   #${BASE_DIR}strings/string16.cc
   #${BASE_DIR}strings/string16.h
   #${BASE_DIR}strings/string_number_conversions.cc
   #${BASE_DIR}strings/string_number_conversions.h
   #${BASE_DIR}strings/string_piece.cc
   #${BASE_DIR}strings/string_piece.h
   #${BASE_DIR}strings/string_piece_forward.h
   #${BASE_DIR}strings/string_split.cc
   #${BASE_DIR}strings/string_split.h
   #${BASE_DIR}strings/string_tokenizer.h
   #${BASE_DIR}strings/string_util.cc
   #${BASE_DIR}strings/string_util.h
   #${BASE_DIR}strings/string_util_constants.cc
   #${BASE_DIR}strings/string_util_win.h
   #${BASE_DIR}strings/stringize_macros.h
   #${BASE_DIR}strings/stringprintf.cc
   #${BASE_DIR}strings/stringprintf.h
   #${BASE_DIR}strings/sys_string_conversions.h
   #${BASE_DIR}strings/sys_string_conversions_mac.mm
   #${BASE_DIR}strings/sys_string_conversions_win.cc
   #${BASE_DIR}strings/utf_offset_string_conversions.cc
   #${BASE_DIR}strings/utf_offset_string_conversions.h
   #${BASE_DIR}strings/utf_string_conversion_utils.cc
   #${BASE_DIR}strings/utf_string_conversion_utils.h
   #${BASE_DIR}strings/utf_string_conversions.cc
   #${BASE_DIR}strings/utf_string_conversions.h
   #${BASE_DIR}supports_user_data.cc
   #${BASE_DIR}supports_user_data.h
   #${BASE_DIR}sync_socket.h
   #${BASE_DIR}sync_socket_win.cc
   #${BASE_DIR}synchronization/atomic_flag.cc
   #${BASE_DIR}synchronization/atomic_flag.h
   #${BASE_DIR}synchronization/cancellation_flag.h
   #${BASE_DIR}synchronization/condition_variable.h
   #${BASE_DIR}synchronization/condition_variable_win.cc
   #${BASE_DIR}synchronization/lock.cc
   #${BASE_DIR}synchronization/lock.h
   #${BASE_DIR}synchronization/lock_impl.h
   #${BASE_DIR}synchronization/lock_impl_win.cc
   #${BASE_DIR}synchronization/spin_wait.h
   #${BASE_DIR}synchronization/waitable_event.h
   #${BASE_DIR}synchronization/waitable_event_mac.cc
   #${BASE_DIR}synchronization/waitable_event_watcher.h
   #${BASE_DIR}synchronization/waitable_event_watcher_mac.cc
   #${BASE_DIR}synchronization/waitable_event_watcher_win.cc
   #${BASE_DIR}synchronization/waitable_event_win.cc
   #${BASE_DIR}sys_byteorder.h
   #${BASE_DIR}syslog_logging.cc
   #${BASE_DIR}syslog_logging.h
   #${BASE_DIR}system/sys_info.cc
   #${BASE_DIR}system/sys_info.h
   #${BASE_DIR}system/sys_info_internal.h
   #${BASE_DIR}system/system_monitor.cc
   #${BASE_DIR}system/system_monitor.h
   #${BASE_DIR}task/cancelable_task_tracker.cc
   #${BASE_DIR}task/cancelable_task_tracker.h
   #${BASE_DIR}task/common/checked_lock.h
   #${BASE_DIR}task/common/checked_lock_impl.cc
   #${BASE_DIR}task/common/checked_lock_impl.h
   #${BASE_DIR}task/common/intrusive_heap.h
   #${BASE_DIR}task/common/operations_controller.cc
   #${BASE_DIR}task/common/operations_controller.h
   #${BASE_DIR}task/common/task_annotator.cc
   #${BASE_DIR}task/common/task_annotator.h
   #${BASE_DIR}task/lazy_task_runner.cc
   #${BASE_DIR}task/lazy_task_runner.h
   #${BASE_DIR}task/post_task.cc
   #${BASE_DIR}task/post_task.h
   #${BASE_DIR}task/promise/dependent_list.cc
   #${BASE_DIR}task/promise/dependent_list.h
   #${BASE_DIR}task/scoped_set_task_priority_for_current_thread.cc
   #${BASE_DIR}task/scoped_set_task_priority_for_current_thread.h
   #${BASE_DIR}task/sequence_manager/associated_thread_id.cc
   #${BASE_DIR}task/sequence_manager/associated_thread_id.h
   #${BASE_DIR}task/sequence_manager/atomic_flag_set.cc
   #${BASE_DIR}task/sequence_manager/atomic_flag_set.h
   #${BASE_DIR}task/sequence_manager/enqueue_order.cc
   #${BASE_DIR}task/sequence_manager/enqueue_order.h
   #${BASE_DIR}task/sequence_manager/lazily_deallocated_deque.h
   #${BASE_DIR}task/sequence_manager/lazy_now.cc
   #${BASE_DIR}task/sequence_manager/lazy_now.h
   #${BASE_DIR}task/sequence_manager/real_time_domain.cc
   #${BASE_DIR}task/sequence_manager/real_time_domain.h
   #${BASE_DIR}task/sequence_manager/sequence_manager.cc
   #${BASE_DIR}task/sequence_manager/sequence_manager.h
   #${BASE_DIR}task/sequence_manager/sequence_manager_impl.cc
   #${BASE_DIR}task/sequence_manager/sequence_manager_impl.h
   #${BASE_DIR}task/sequence_manager/sequenced_task_source.h
   #${BASE_DIR}task/sequence_manager/task_queue.cc
   #${BASE_DIR}task/sequence_manager/task_queue.h
   #${BASE_DIR}task/sequence_manager/task_queue_impl.cc
   #${BASE_DIR}task/sequence_manager/task_queue_impl.h
   #${BASE_DIR}task/sequence_manager/task_queue_selector.cc
   #${BASE_DIR}task/sequence_manager/task_queue_selector.h
   #${BASE_DIR}task/sequence_manager/task_queue_selector_logic.h
   #${BASE_DIR}task/sequence_manager/task_time_observer.h
   #${BASE_DIR}task/sequence_manager/tasks.cc
   #${BASE_DIR}task/sequence_manager/tasks.h
   #${BASE_DIR}task/sequence_manager/thread_controller.h
   #${BASE_DIR}task/sequence_manager/thread_controller_impl.cc
   #${BASE_DIR}task/sequence_manager/thread_controller_impl.h
   #${BASE_DIR}task/sequence_manager/thread_controller_with_message_pump_impl.cc
   #${BASE_DIR}task/sequence_manager/thread_controller_with_message_pump_impl.h
   #${BASE_DIR}task/sequence_manager/time_domain.cc
   #${BASE_DIR}task/sequence_manager/time_domain.h
   #${BASE_DIR}task/sequence_manager/work_deduplicator.cc
   #${BASE_DIR}task/sequence_manager/work_deduplicator.h
   #${BASE_DIR}task/sequence_manager/work_queue.cc
   #${BASE_DIR}task/sequence_manager/work_queue.h
   #${BASE_DIR}task/sequence_manager/work_queue_sets.cc
   #${BASE_DIR}task/sequence_manager/work_queue_sets.h
   #${BASE_DIR}task/single_thread_task_runner_thread_mode.h
   #${BASE_DIR}task/task_executor.cc
   #${BASE_DIR}task/task_executor.h
   #${BASE_DIR}task/task_features.cc
   #${BASE_DIR}task/task_features.h
   #${BASE_DIR}task/task_observer.h
   #${BASE_DIR}task/task_traits.cc
   #${BASE_DIR}task/task_traits.h
   #${BASE_DIR}task/task_traits_extension.h
   #${BASE_DIR}task/thread_pool/delayed_task_manager.cc
   #${BASE_DIR}task/thread_pool/delayed_task_manager.h
   #${BASE_DIR}task/thread_pool/environment_config.cc
   #${BASE_DIR}task/thread_pool/environment_config.h
   #${BASE_DIR}task/thread_pool/initialization_util.cc
   #${BASE_DIR}task/thread_pool/initialization_util.h
   #${BASE_DIR}task/thread_pool/pooled_parallel_task_runner.cc
   #${BASE_DIR}task/thread_pool/pooled_parallel_task_runner.h
   #${BASE_DIR}task/thread_pool/pooled_sequenced_task_runner.cc
   #${BASE_DIR}task/thread_pool/pooled_sequenced_task_runner.h
   #${BASE_DIR}task/thread_pool/pooled_single_thread_task_runner_manager.cc
   #${BASE_DIR}task/thread_pool/pooled_single_thread_task_runner_manager.h
   #${BASE_DIR}task/thread_pool/pooled_task_runner_delegate.cc
   #${BASE_DIR}task/thread_pool/pooled_task_runner_delegate.h
   #${BASE_DIR}task/thread_pool/priority_queue.cc
   #${BASE_DIR}task/thread_pool/priority_queue.h
   #${BASE_DIR}task/thread_pool/sequence.cc
   #${BASE_DIR}task/thread_pool/sequence.h
   #${BASE_DIR}task/thread_pool/sequence_sort_key.cc
   #${BASE_DIR}task/thread_pool/sequence_sort_key.h
   #${BASE_DIR}task/thread_pool/service_thread.cc
   #${BASE_DIR}task/thread_pool/service_thread.h
   #${BASE_DIR}task/thread_pool/task.cc
   #${BASE_DIR}task/thread_pool/task.h
   #${BASE_DIR}task/thread_pool/task_source.cc
   #${BASE_DIR}task/thread_pool/task_source.h
   #${BASE_DIR}task/thread_pool/task_tracker.cc
   #${BASE_DIR}task/thread_pool/task_tracker.h
   #${BASE_DIR}task/thread_pool/thread_group.cc
   #${BASE_DIR}task/thread_pool/thread_group.h
   #${BASE_DIR}task/thread_pool/thread_group_impl.cc
   #${BASE_DIR}task/thread_pool/thread_group_impl.h
   #${BASE_DIR}task/thread_pool/thread_group_native.cc
   #${BASE_DIR}task/thread_pool/thread_group_native.h
   #${BASE_DIR}task/thread_pool/thread_group_native_mac.h
   #${BASE_DIR}task/thread_pool/thread_group_native_mac.mm
   #${BASE_DIR}task/thread_pool/thread_group_native_win.cc
   #${BASE_DIR}task/thread_pool/thread_group_native_win.h
   #${BASE_DIR}task/thread_pool/thread_group_params.cc
   #${BASE_DIR}task/thread_pool/thread_group_params.h
   #${BASE_DIR}task/thread_pool/thread_pool.cc
   #${BASE_DIR}task/thread_pool/thread_pool.h
   #${BASE_DIR}task/thread_pool/thread_pool_impl.cc
   #${BASE_DIR}task/thread_pool/thread_pool_impl.h
   #${BASE_DIR}task/thread_pool/tracked_ref.h
   #${BASE_DIR}task/thread_pool/worker_thread.cc
   #${BASE_DIR}task/thread_pool/worker_thread.h
   #${BASE_DIR}task/thread_pool/worker_thread_observer.h
   #${BASE_DIR}task/thread_pool/worker_thread_params.h
   #${BASE_DIR}task/thread_pool/worker_thread_stack.cc
   #${BASE_DIR}task/thread_pool/worker_thread_stack.h
   #${BASE_DIR}task_runner.cc
   #${BASE_DIR}task_runner.h
   #${BASE_DIR}task_runner_util.h
   #${BASE_DIR}template_util.h
   #${BASE_DIR}test/malloc_wrapper.h
   #${BASE_DIR}third_party/dmg_fp/dmg_fp.h
   #${BASE_DIR}third_party/dmg_fp/dtoa_wrapper.cc
   #${BASE_DIR}third_party/dmg_fp/g_fmt.cc
   #${BASE_DIR}third_party/icu/icu_utf.cc
   #${BASE_DIR}third_party/icu/icu_utf.h
   #${BASE_DIR}third_party/nspr/prtime.cc
   #${BASE_DIR}third_party/nspr/prtime.h
   #${BASE_DIR}third_party/superfasthash/superfasthash.c
   #${BASE_DIR}thread_annotations.h
   #${BASE_DIR}threading/platform_thread.cc
   #${BASE_DIR}threading/platform_thread.h
   #${BASE_DIR}threading/platform_thread_android.cc
   #${BASE_DIR}threading/platform_thread_linux.cc
   #${BASE_DIR}threading/platform_thread_mac.mm
   #${BASE_DIR}threading/platform_thread_win.cc
   #${BASE_DIR}threading/platform_thread_win.h
   #${BASE_DIR}threading/post_task_and_reply_impl.cc
   #${BASE_DIR}threading/post_task_and_reply_impl.h
   #${BASE_DIR}threading/scoped_blocking_call.cc
   #${BASE_DIR}threading/scoped_blocking_call.h
   #${BASE_DIR}threading/sequence_bound.h
   #${BASE_DIR}threading/sequence_local_storage_map.cc
   #${BASE_DIR}threading/sequence_local_storage_map.h
   #${BASE_DIR}threading/sequence_local_storage_slot.cc
   #${BASE_DIR}threading/sequence_local_storage_slot.h
   #${BASE_DIR}threading/sequenced_task_runner_handle.cc
   #${BASE_DIR}threading/sequenced_task_runner_handle.h
   #${BASE_DIR}threading/simple_thread.cc
   #${BASE_DIR}threading/simple_thread.h
   #${BASE_DIR}threading/thread.cc
   #${BASE_DIR}threading/thread.h
   #${BASE_DIR}threading/thread_checker.h
   #${BASE_DIR}threading/thread_checker_impl.cc
   #${BASE_DIR}threading/thread_checker_impl.h
   #${BASE_DIR}threading/thread_collision_warner.cc
   #${BASE_DIR}threading/thread_collision_warner.h
   #${BASE_DIR}threading/thread_id_name_manager.cc
   #${BASE_DIR}threading/thread_id_name_manager.h
   #${BASE_DIR}threading/thread_local.h
   #${BASE_DIR}threading/thread_local_internal.h
   #${BASE_DIR}threading/thread_local_storage.cc
   #${BASE_DIR}threading/thread_local_storage.h
   #${BASE_DIR}threading/thread_local_storage_win.cc
   #${BASE_DIR}threading/thread_restrictions.cc
   #${BASE_DIR}threading/thread_restrictions.h
   #${BASE_DIR}threading/thread_task_runner_handle.cc
   #${BASE_DIR}threading/thread_task_runner_handle.h
   #${BASE_DIR}threading/watchdog.cc
   #${BASE_DIR}threading/watchdog.h
   ##${BASE_DIR}time/clock.cc
   ##${BASE_DIR}time/clock.h
   ##${BASE_DIR}time/default_clock.cc
   ##${BASE_DIR}time/default_clock.h
   ##${BASE_DIR}time/default_tick_clock.cc
   ##${BASE_DIR}time/default_tick_clock.h
   ##${BASE_DIR}time/tick_clock.cc
   ##${BASE_DIR}time/tick_clock.h
   ##${BASE_DIR}time/time.cc
   ##${BASE_DIR}time/time.h
   ##${BASE_DIR}time/time_override.cc
   ##${BASE_DIR}time/time_override.h
   ##${BASE_DIR}time/time_to_iso8601.cc
   ##${BASE_DIR}time/time_to_iso8601.h
   ##${BASE_DIR}timer/elapsed_timer.cc
   ##${BASE_DIR}timer/elapsed_timer.h
   ##${BASE_DIR}timer/hi_res_timer_manager.h
   ##${BASE_DIR}timer/hi_res_timer_manager_win.cc
   ##${BASE_DIR}timer/lap_timer.cc
   ##${BASE_DIR}timer/lap_timer.h
   ##${BASE_DIR}timer/timer.cc
   ##${BASE_DIR}timer/timer.h
   #${BASE_DIR}token.cc
   #${BASE_DIR}token.h
   #${BASE_DIR}trace_event/auto_open_close_event.h
   #${BASE_DIR}trace_event/blame_context.cc
   #${BASE_DIR}trace_event/blame_context.h
   #${BASE_DIR}trace_event/builtin_categories.cc
   #${BASE_DIR}trace_event/builtin_categories.h
   #${BASE_DIR}trace_event/category_registry.cc
   #${BASE_DIR}trace_event/category_registry.h
   #${BASE_DIR}trace_event/common/trace_event_common.h
   #${BASE_DIR}trace_event/cpufreq_monitor_android.cc
   #${BASE_DIR}trace_event/cpufreq_monitor_android.h
   #${BASE_DIR}trace_event/event_name_filter.cc
   #${BASE_DIR}trace_event/event_name_filter.h
   #${BASE_DIR}trace_event/heap_profiler.h
   #${BASE_DIR}trace_event/heap_profiler_allocation_context.cc
   #${BASE_DIR}trace_event/heap_profiler_allocation_context.h
   #${BASE_DIR}trace_event/heap_profiler_allocation_context_tracker.cc
   #${BASE_DIR}trace_event/heap_profiler_allocation_context_tracker.h
   #${BASE_DIR}trace_event/heap_profiler_event_filter.cc
   #${BASE_DIR}trace_event/heap_profiler_event_filter.h
   #${BASE_DIR}trace_event/java_heap_dump_provider_android.cc
   #${BASE_DIR}trace_event/java_heap_dump_provider_android.h
   #${BASE_DIR}trace_event/malloc_dump_provider.cc
   #${BASE_DIR}trace_event/malloc_dump_provider.h
   #${BASE_DIR}trace_event/memory_allocator_dump.cc
   #${BASE_DIR}trace_event/memory_allocator_dump.h
   #${BASE_DIR}trace_event/memory_allocator_dump_guid.cc
   #${BASE_DIR}trace_event/memory_allocator_dump_guid.h
   #${BASE_DIR}trace_event/memory_dump_manager.cc
   #${BASE_DIR}trace_event/memory_dump_manager.h
   #${BASE_DIR}trace_event/memory_dump_manager_test_utils.h
   #${BASE_DIR}trace_event/memory_dump_provider.h
   #${BASE_DIR}trace_event/memory_dump_provider_info.cc
   #${BASE_DIR}trace_event/memory_dump_provider_info.h
   #${BASE_DIR}trace_event/memory_dump_request_args.cc
   #${BASE_DIR}trace_event/memory_dump_request_args.h
   #${BASE_DIR}trace_event/memory_dump_scheduler.cc
   #${BASE_DIR}trace_event/memory_dump_scheduler.h
   #${BASE_DIR}trace_event/memory_infra_background_whitelist.cc
   #${BASE_DIR}trace_event/memory_infra_background_whitelist.h
   #${BASE_DIR}trace_event/memory_usage_estimator.cc
   #${BASE_DIR}trace_event/memory_usage_estimator.h
   #${BASE_DIR}trace_event/process_memory_dump.cc
   #${BASE_DIR}trace_event/process_memory_dump.h
   #${BASE_DIR}trace_event/thread_instruction_count.cc
   #${BASE_DIR}trace_event/thread_instruction_count.h
   #${BASE_DIR}trace_event/trace_arguments.cc
   #${BASE_DIR}trace_event/trace_arguments.h
   #${BASE_DIR}trace_event/trace_buffer.cc
   #${BASE_DIR}trace_event/trace_buffer.h
   #${BASE_DIR}trace_event/trace_category.h
   #${BASE_DIR}trace_event/trace_config.cc
   #${BASE_DIR}trace_event/trace_config.h
   #${BASE_DIR}trace_event/trace_config_category_filter.cc
   #${BASE_DIR}trace_event/trace_config_category_filter.h
   #${BASE_DIR}trace_event/trace_event.h
   #${BASE_DIR}trace_event/trace_event_android.cc
   #${BASE_DIR}trace_event/trace_event_etw_export_win.cc
   #${BASE_DIR}trace_event/trace_event_etw_export_win.h
   #${BASE_DIR}trace_event/trace_event_filter.cc
   #${BASE_DIR}trace_event/trace_event_filter.h
   #${BASE_DIR}trace_event/trace_event_impl.cc
   #${BASE_DIR}trace_event/trace_event_impl.h
   #${BASE_DIR}trace_event/trace_event_memory_overhead.cc
   #${BASE_DIR}trace_event/trace_event_memory_overhead.h
   #${BASE_DIR}trace_event/trace_log.cc
   #${BASE_DIR}trace_event/trace_log.h
   #${BASE_DIR}trace_event/trace_log_constants.cc
   #${BASE_DIR}trace_event/traced_value.cc
   #${BASE_DIR}trace_event/traced_value.h
   #${BASE_DIR}trace_event/tracing_agent.cc
   #${BASE_DIR}trace_event/tracing_agent.h
   #${BASE_DIR}traits_bag.h
   #${BASE_DIR}tuple.h
   #${BASE_DIR}type_id.cc
   #${BASE_DIR}type_id.h
   #${BASE_DIR}unguessable_token.cc
   #${BASE_DIR}unguessable_token.h
   #${BASE_DIR}updateable_sequenced_task_runner.h
   #${BASE_DIR}value_conversions.cc
   #${BASE_DIR}value_conversions.h
   #${BASE_DIR}value_iterators.cc
   #${BASE_DIR}value_iterators.h
   #${BASE_DIR}values.cc
   #${BASE_DIR}values.h
   #${BASE_DIR}version.cc
   #${BASE_DIR}version.h
   #${BASE_DIR}vlog.cc
   #${BASE_DIR}vlog.h
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
   #### base_static ###
   #${BASE_DIR}base_switches.cc
   #${BASE_DIR}base_switches.h
   # generated_build_date.h
   ### build ###
   build/build_config.h
)

list(APPEND WTF_SOURCES
    #${WTF_DIR}allocator.cc
    #${WTF_DIR}allocator.h
    #${WTF_DIR}allocator/partition_allocator.cc
    #${WTF_DIR}allocator/partition_allocator.h
    #${WTF_DIR}allocator/partitions.cc
    #${WTF_DIR}allocator/partitions.h
    #${WTF_DIR}assertions.cc
    #${WTF_DIR}assertions.h
    #${WTF_DIR}bloom_filter.h
    #${WTF_DIR}casting.h
    #${WTF_DIR}conditional_destructor.h
    #${WTF_DIR}container_annotations.h
    #${WTF_DIR}date_math.cc
    #${WTF_DIR}date_math.h
    #${WTF_DIR}decimal.cc
    #${WTF_DIR}decimal.h
    #${WTF_DIR}deque.h
    #${WTF_DIR}doubly_linked_list.h
    #${WTF_DIR}dtoa/bignum-dtoa.cc
    #${WTF_DIR}dtoa/bignum-dtoa.h
    #${WTF_DIR}dtoa/bignum.cc
    #${WTF_DIR}dtoa/bignum.h
    #${WTF_DIR}dtoa/cached-powers.cc
    #${WTF_DIR}dtoa/cached-powers.h
    #${WTF_DIR}dtoa/diy-fp.cc
    #${WTF_DIR}dtoa/diy-fp.h
    #${WTF_DIR}dtoa/double-conversion.cc
    #${WTF_DIR}dtoa/double-conversion.h
    #${WTF_DIR}dtoa/double.h
    #${WTF_DIR}dtoa/dtoa.cc
    #${WTF_DIR}dtoa/dtoa.h
    #${WTF_DIR}dtoa/fast-dtoa.cc
    #${WTF_DIR}dtoa/fast-dtoa.h
    #${WTF_DIR}dtoa/fixed-dtoa.cc
    #${WTF_DIR}dtoa/fixed-dtoa.h
    #${WTF_DIR}dtoa/strtod.cc
    #${WTF_DIR}dtoa/strtod.h
    #${WTF_DIR}dtoa/utils.h
    #${WTF_DIR}dynamic_annotations.cc
    #${WTF_DIR}dynamic_annotations.h
    #${WTF_DIR}forward.h
    #${WTF_DIR}functional.h
    #${WTF_DIR}get_ptr.h
    #${WTF_DIR}hash_counted_set.h
    #${WTF_DIR}hash_functions.h
    #${WTF_DIR}hash_iterators.h
    #${WTF_DIR}hash_map.h
    #${WTF_DIR}hash_set.h
    #${WTF_DIR}hash_table.cc
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
    #${WTF_DIR}scoped_logger.cc
    #${WTF_DIR}scoped_logger.h
    #${WTF_DIR}size_assertions.cc
    #${WTF_DIR}size_assertions.h
    #${WTF_DIR}stack_util.cc
    #${WTF_DIR}stack_util.h
    #${WTF_DIR}static_constructors.h
    #${WTF_DIR}std_lib_extras.h
    #${WTF_DIR}text/ascii_ctype.cc
    #${WTF_DIR}text/ascii_ctype.h
    #${WTF_DIR}text/ascii_fast_path.h
    #${WTF_DIR}text/atomic_string.cc
    #${WTF_DIR}text/atomic_string.h
    #${WTF_DIR}text/atomic_string_cf.cc
    #${WTF_DIR}text/atomic_string_hash.h
    #${WTF_DIR}text/atomic_string_table.cc
    #${WTF_DIR}text/atomic_string_table.h
    #${WTF_DIR}text/base64.cc
    #${WTF_DIR}text/base64.h
    #${WTF_DIR}text/character_names.h
    #${WTF_DIR}text/cstring.cc
    #${WTF_DIR}text/cstring.h
    #${WTF_DIR}text/integer_to_string_conversion.h
    #${WTF_DIR}text/line_ending.cc
    #${WTF_DIR}text/line_ending.h
    #${WTF_DIR}text/number_parsing_options.h
    #${WTF_DIR}text/parsing_utilities.h
    #${WTF_DIR}text/string_buffer.h
    #${WTF_DIR}text/string_builder.cc
    #${WTF_DIR}text/string_builder.h
    #${WTF_DIR}text/string_concatenate.cc
    #${WTF_DIR}text/string_concatenate.h
    #${WTF_DIR}text/string_hash.h
    #${WTF_DIR}text/string_hasher.h
    #${WTF_DIR}text/string_impl.cc
    #${WTF_DIR}text/string_impl.h
    #${WTF_DIR}text/string_impl_mac.mm
    #${WTF_DIR}text/string_mac.mm
    #${WTF_DIR}text/string_operators.h
    #${WTF_DIR}text/string_statics.cc
    #${WTF_DIR}text/string_statics.h
    #${WTF_DIR}text/string_to_number.cc
    #${WTF_DIR}text/string_to_number.h
    #${WTF_DIR}text/string_utf8_adaptor.cc
    #${WTF_DIR}text/string_utf8_adaptor.h
    #${WTF_DIR}text/string_view.cc
    #${WTF_DIR}text/string_view.h
    #${WTF_DIR}text/text_codec.cc
    #${WTF_DIR}text/text_codec.h
    #${WTF_DIR}text/text_codec_ascii_fast_path.h
    #${WTF_DIR}text/text_codec_icu.cc
    #${WTF_DIR}text/text_codec_icu.h
    #${WTF_DIR}text/text_codec_latin1.cc
    #${WTF_DIR}text/text_codec_latin1.h
    #${WTF_DIR}text/text_codec_replacement.cc
    #${WTF_DIR}text/text_codec_replacement.h
    #${WTF_DIR}text/text_codec_user_defined.cc
    #${WTF_DIR}text/text_codec_user_defined.h
    #${WTF_DIR}text/text_codec_utf16.cc
    #${WTF_DIR}text/text_codec_utf16.h
    #${WTF_DIR}text/text_codec_utf8.cc
    #${WTF_DIR}text/text_codec_utf8.h
    #${WTF_DIR}text/text_encoding.cc
    #${WTF_DIR}text/text_encoding.h
    #${WTF_DIR}text/text_encoding_registry.cc
    #${WTF_DIR}text/text_encoding_registry.h
    #${WTF_DIR}text/text_position.cc
    #${WTF_DIR}text/text_position.h
    #${WTF_DIR}text/text_stream.cc
    #${WTF_DIR}text/text_stream.h
    #${WTF_DIR}text/unicode.h
    #${WTF_DIR}text/utf8.cc
    #${WTF_DIR}text/utf8.h
    #${WTF_DIR}text/wtf_string.cc
    #${WTF_DIR}text/wtf_string.h
    #${WTF_DIR}thread_restriction_verifier.h
    #${WTF_DIR}thread_safe_ref_counted.h
    #${WTF_DIR}thread_specific.h
    #${WTF_DIR}threading.cc
    #${WTF_DIR}threading.h
    #${WTF_DIR}threading_primitives.h
    #${WTF_DIR}threading_pthreads.cc
    #${WTF_DIR}threading_win.cc
    #${WTF_DIR}time.cc
    #${WTF_DIR}time.h
    #${WTF_DIR}tree_node.h
    #${WTF_DIR}type_traits.h
    #${WTF_DIR}typed_arrays/array_buffer.cc
    #${WTF_DIR}typed_arrays/array_buffer.h
    #${WTF_DIR}typed_arrays/array_buffer_contents.cc
    #${WTF_DIR}typed_arrays/array_buffer_contents.h
    #${WTF_DIR}typed_arrays/array_buffer_view.cc
    #${WTF_DIR}typed_arrays/array_buffer_view.h
    #${WTF_DIR}typed_arrays/array_piece.cc
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
    #${WTF_DIR}wtf.cc
    #${WTF_DIR}wtf.h
    #${WTF_DIR}wtf_export.h
    #${WTF_DIR}wtf_size_t.h

    # #wtf/unix/CPUTimeUnix.cpp
  )

if (EMSCRIPTEN)
#  list(APPEND WTF_SOURCES
#    # port
#    wtf/JS/JS_CPUTime.cpp
#    wtf/JS/JS_FileSystem.cpp
#    wtf/JS/JS_NumberOfCores.cpp
#    wtf/JS/JS_RAMSize.cpp
#    wtf/JS/JS_RandomDeviceGeneric.cpp
#    wtf/JS/JS_TextBreakIteratorInternalICU.cpp
#    wtf/JS/JS_ThreadMessage.cpp)
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

if (APPLE)
  #list(APPEND WTF_SOURCES wtf/mac/MainThreadMac.mm)
endif ()

option(SINGLE_THREADED "Enable single threaded mode" OFF)

if (SINGLE_THREADED OR EMSCRIPTEN)
  set(ENABLE_SINGLE_THREADED 1)
  #list(APPEND WTF_SOURCES wtf/ThreadingNone.cpp)
else ()
  find_package(Threads REQUIRED)
  #list(APPEND WTF_SOURCES
  #  wtf/ThreadingPthreads.cpp
  #  wtf/ThreadIdentifierDataPthreads.cpp
  #  )
  list(APPEND WTF_LIBRARIES ${CMAKE_THREAD_LIBS_INIT})
  set(HAVE_PTHREADS 1)
endif ()

set(ICU_FULL_DIR
  icu/
)

set(ICU_SOURCES
  ${ICU_FULL_DIR}cmemory.c
  ${ICU_FULL_DIR}cstring.c
  ${ICU_FULL_DIR}cwchar.c
  ${ICU_FULL_DIR}decContext.c
  ${ICU_FULL_DIR}decNumber.c
  ${ICU_FULL_DIR}icudataver.c
  ${ICU_FULL_DIR}locmap.c
  ${ICU_FULL_DIR}propsvec.c
  ${ICU_FULL_DIR}uarrsort.c
  ${ICU_FULL_DIR}ubidi.c
  ${ICU_FULL_DIR}ubidiln.c
  ${ICU_FULL_DIR}ubidiwrt.c
  ${ICU_FULL_DIR}ubidi_props.c
  ${ICU_FULL_DIR}ucat.c
  ${ICU_FULL_DIR}uchar.c
  ${ICU_FULL_DIR}ucmndata.c
  ${ICU_FULL_DIR}ucnv.c
  ${ICU_FULL_DIR}ucnvdisp.c
  ${ICU_FULL_DIR}ucnvhz.c
  ${ICU_FULL_DIR}ucnvisci.c
  ${ICU_FULL_DIR}ucnvlat1.c
  ${ICU_FULL_DIR}ucnvscsu.c
  ${ICU_FULL_DIR}ucnv_cb.c
  ${ICU_FULL_DIR}ucnv_cnv.c
  ${ICU_FULL_DIR}ucnv_ct.c
  ${ICU_FULL_DIR}ucnv_err.c
  ${ICU_FULL_DIR}ucnv_lmb.c
  ${ICU_FULL_DIR}ucnv_set.c
  ${ICU_FULL_DIR}ucnv_u16.c
  ${ICU_FULL_DIR}ucnv_u32.c
  ${ICU_FULL_DIR}ucnv_u7.c
  ${ICU_FULL_DIR}ucnv_u8.c
  ${ICU_FULL_DIR}udatamem.c
  ${ICU_FULL_DIR}udataswp.c
  ${ICU_FULL_DIR}uenum.c
  ${ICU_FULL_DIR}uhash.c
  ${ICU_FULL_DIR}uinvchar.c
  ${ICU_FULL_DIR}ulist.c
  ${ICU_FULL_DIR}ulocdata.c
  ${ICU_FULL_DIR}uloc_tag.c
  ${ICU_FULL_DIR}umapfile.c
  ${ICU_FULL_DIR}umath.c
  ${ICU_FULL_DIR}uresdata.c
  ${ICU_FULL_DIR}ures_cnv.c
  ${ICU_FULL_DIR}uscript.c
  ${ICU_FULL_DIR}usc_impl.c
  ${ICU_FULL_DIR}ustrfmt.c
  ${ICU_FULL_DIR}utf_impl.c
  ${ICU_FULL_DIR}utmscale.c
  ${ICU_FULL_DIR}utrace.c
  ${ICU_FULL_DIR}utypes.c
  ${ICU_FULL_DIR}wintz.c
  ${ICU_FULL_DIR}stubdata.c
  ${ICU_FULL_DIR}affixpatternparser.cpp
  ${ICU_FULL_DIR}alphaindex.cpp
  ${ICU_FULL_DIR}anytrans.cpp
  ${ICU_FULL_DIR}appendable.cpp
  ${ICU_FULL_DIR}astro.cpp
  ${ICU_FULL_DIR}basictz.cpp
  ${ICU_FULL_DIR}bmpset.cpp
  ${ICU_FULL_DIR}bocsu.cpp
  ${ICU_FULL_DIR}brkeng.cpp
  ${ICU_FULL_DIR}brkiter.cpp
  ${ICU_FULL_DIR}brktrans.cpp
  ${ICU_FULL_DIR}buddhcal.cpp
  ${ICU_FULL_DIR}bytestream.cpp
  ${ICU_FULL_DIR}bytestrie.cpp
  ${ICU_FULL_DIR}bytestriebuilder.cpp
  ${ICU_FULL_DIR}bytestrieiterator.cpp
  ${ICU_FULL_DIR}calendar.cpp
  ${ICU_FULL_DIR}caniter.cpp
  ${ICU_FULL_DIR}casetrn.cpp
  ${ICU_FULL_DIR}cecal.cpp
  ${ICU_FULL_DIR}chariter.cpp
  ${ICU_FULL_DIR}charstr.cpp
  ${ICU_FULL_DIR}chnsecal.cpp
  ${ICU_FULL_DIR}choicfmt.cpp
  ${ICU_FULL_DIR}coleitr.cpp
  ${ICU_FULL_DIR}coll.cpp
  ${ICU_FULL_DIR}collation.cpp
  ${ICU_FULL_DIR}collationbuilder.cpp
  ${ICU_FULL_DIR}collationcompare.cpp
  ${ICU_FULL_DIR}collationdata.cpp
  ${ICU_FULL_DIR}collationdatabuilder.cpp
  ${ICU_FULL_DIR}collationdatareader.cpp
  ${ICU_FULL_DIR}collationdatawriter.cpp
  ${ICU_FULL_DIR}collationfastlatin.cpp
  ${ICU_FULL_DIR}collationfastlatinbuilder.cpp
  ${ICU_FULL_DIR}collationfcd.cpp
  ${ICU_FULL_DIR}collationiterator.cpp
  ${ICU_FULL_DIR}collationkeys.cpp
  ${ICU_FULL_DIR}collationroot.cpp
  ${ICU_FULL_DIR}collationrootelements.cpp
  ${ICU_FULL_DIR}collationruleparser.cpp
  ${ICU_FULL_DIR}collationsets.cpp
  ${ICU_FULL_DIR}collationsettings.cpp
  ${ICU_FULL_DIR}collationtailoring.cpp
  ${ICU_FULL_DIR}collationweights.cpp
  ${ICU_FULL_DIR}compactdecimalformat.cpp
  ${ICU_FULL_DIR}coptccal.cpp
  ${ICU_FULL_DIR}cpdtrans.cpp
  ${ICU_FULL_DIR}csdetect.cpp
  ${ICU_FULL_DIR}csmatch.cpp
  ${ICU_FULL_DIR}csr2022.cpp
  ${ICU_FULL_DIR}csrecog.cpp
  ${ICU_FULL_DIR}csrmbcs.cpp
  ${ICU_FULL_DIR}csrsbcs.cpp
  ${ICU_FULL_DIR}csrucode.cpp
  ${ICU_FULL_DIR}csrutf8.cpp
  ${ICU_FULL_DIR}curramt.cpp
  ${ICU_FULL_DIR}currfmt.cpp
  ${ICU_FULL_DIR}currpinf.cpp
  ${ICU_FULL_DIR}currunit.cpp
  ${ICU_FULL_DIR}dangical.cpp
  ${ICU_FULL_DIR}datefmt.cpp
  ${ICU_FULL_DIR}dcfmtsym.cpp
  ${ICU_FULL_DIR}decfmtst.cpp
  ${ICU_FULL_DIR}decimalformatpattern.cpp
  ${ICU_FULL_DIR}decimfmt.cpp
  ${ICU_FULL_DIR}decimfmtimpl.cpp
  ${ICU_FULL_DIR}dictbe.cpp
  ${ICU_FULL_DIR}dictionarydata.cpp
  ${ICU_FULL_DIR}digitaffix.cpp
  ${ICU_FULL_DIR}digitaffixesandpadding.cpp
  ${ICU_FULL_DIR}digitformatter.cpp
  ${ICU_FULL_DIR}digitgrouping.cpp
  ${ICU_FULL_DIR}digitinterval.cpp
  ${ICU_FULL_DIR}digitlst.cpp
  ${ICU_FULL_DIR}dtfmtsym.cpp
  ${ICU_FULL_DIR}dtintrv.cpp
  ${ICU_FULL_DIR}dtitvfmt.cpp
  ${ICU_FULL_DIR}dtitvinf.cpp
  ${ICU_FULL_DIR}dtptngen.cpp
  ${ICU_FULL_DIR}dtrule.cpp
  ${ICU_FULL_DIR}errorcode.cpp
  ${ICU_FULL_DIR}esctrn.cpp
  ${ICU_FULL_DIR}ethpccal.cpp
  ${ICU_FULL_DIR}filteredbrk.cpp
  ${ICU_FULL_DIR}filterednormalizer2.cpp
  ${ICU_FULL_DIR}fmtable.cpp
  ${ICU_FULL_DIR}fmtable_cnv.cpp
  ${ICU_FULL_DIR}format.cpp
  ${ICU_FULL_DIR}fphdlimp.cpp
  ${ICU_FULL_DIR}fpositer.cpp
  ${ICU_FULL_DIR}funcrepl.cpp
  ${ICU_FULL_DIR}gender.cpp
  ${ICU_FULL_DIR}gregocal.cpp
  ${ICU_FULL_DIR}gregoimp.cpp
  ${ICU_FULL_DIR}hebrwcal.cpp
  ${ICU_FULL_DIR}icuplug.cpp
  ${ICU_FULL_DIR}identifier_info.cpp
  ${ICU_FULL_DIR}indiancal.cpp
  ${ICU_FULL_DIR}inputext.cpp
  ${ICU_FULL_DIR}islamcal.cpp
  ${ICU_FULL_DIR}japancal.cpp
  ${ICU_FULL_DIR}listformatter.cpp
  ${ICU_FULL_DIR}loadednormalizer2impl.cpp
  ${ICU_FULL_DIR}locavailable.cpp
  ${ICU_FULL_DIR}locbased.cpp
  ${ICU_FULL_DIR}locdispnames.cpp
  ${ICU_FULL_DIR}locdspnm.cpp
  ${ICU_FULL_DIR}locid.cpp
  ${ICU_FULL_DIR}loclikely.cpp
  ${ICU_FULL_DIR}locresdata.cpp
  ${ICU_FULL_DIR}locutil.cpp
  ${ICU_FULL_DIR}measfmt.cpp
  ${ICU_FULL_DIR}measunit.cpp
  ${ICU_FULL_DIR}measure.cpp
  ${ICU_FULL_DIR}messagepattern.cpp
  ${ICU_FULL_DIR}msgfmt.cpp
  ${ICU_FULL_DIR}name2uni.cpp
  ${ICU_FULL_DIR}nfrs.cpp
  ${ICU_FULL_DIR}nfrule.cpp
  ${ICU_FULL_DIR}nfsubs.cpp
  ${ICU_FULL_DIR}normalizer2.cpp
  ${ICU_FULL_DIR}normalizer2impl.cpp
  ${ICU_FULL_DIR}normlzr.cpp
  ${ICU_FULL_DIR}nortrans.cpp
  ${ICU_FULL_DIR}nultrans.cpp
  ${ICU_FULL_DIR}numfmt.cpp
  ${ICU_FULL_DIR}numsys.cpp
  ${ICU_FULL_DIR}olsontz.cpp
  ${ICU_FULL_DIR}parsepos.cpp
  ${ICU_FULL_DIR}patternprops.cpp
  ${ICU_FULL_DIR}persncal.cpp
  ${ICU_FULL_DIR}pluralaffix.cpp
  ${ICU_FULL_DIR}pluralmap.cpp
  ${ICU_FULL_DIR}plurfmt.cpp
  ${ICU_FULL_DIR}plurrule.cpp
  ${ICU_FULL_DIR}precision.cpp
  ${ICU_FULL_DIR}propname.cpp
  ${ICU_FULL_DIR}punycode.cpp
  ${ICU_FULL_DIR}putil.cpp
  ${ICU_FULL_DIR}quant.cpp
  ${ICU_FULL_DIR}quantityformatter.cpp
  ${ICU_FULL_DIR}rbbi.cpp
  ${ICU_FULL_DIR}rbbidata.cpp
  ${ICU_FULL_DIR}rbbinode.cpp
  ${ICU_FULL_DIR}rbbirb.cpp
  ${ICU_FULL_DIR}rbbiscan.cpp
  ${ICU_FULL_DIR}rbbisetb.cpp
  ${ICU_FULL_DIR}rbbistbl.cpp
  ${ICU_FULL_DIR}rbbitblb.cpp
  ${ICU_FULL_DIR}rbnf.cpp
  ${ICU_FULL_DIR}rbt.cpp
  ${ICU_FULL_DIR}rbtz.cpp
  ${ICU_FULL_DIR}rbt_data.cpp
  ${ICU_FULL_DIR}rbt_pars.cpp
  ${ICU_FULL_DIR}rbt_rule.cpp
  ${ICU_FULL_DIR}rbt_set.cpp
  ${ICU_FULL_DIR}regexcmp.cpp
  ${ICU_FULL_DIR}regeximp.cpp
  ${ICU_FULL_DIR}regexst.cpp
  ${ICU_FULL_DIR}regextxt.cpp
  ${ICU_FULL_DIR}region.cpp
  ${ICU_FULL_DIR}reldatefmt.cpp
  ${ICU_FULL_DIR}reldtfmt.cpp
  ${ICU_FULL_DIR}rematch.cpp
  ${ICU_FULL_DIR}remtrans.cpp
  ${ICU_FULL_DIR}repattrn.cpp
  ${ICU_FULL_DIR}resbund.cpp
  ${ICU_FULL_DIR}resbund_cnv.cpp
  ${ICU_FULL_DIR}rulebasedcollator.cpp
  ${ICU_FULL_DIR}ruleiter.cpp
  ${ICU_FULL_DIR}schriter.cpp
  ${ICU_FULL_DIR}scientificnumberformatter.cpp
  ${ICU_FULL_DIR}scriptset.cpp
  ${ICU_FULL_DIR}search.cpp
  ${ICU_FULL_DIR}selfmt.cpp
  ${ICU_FULL_DIR}serv.cpp
  ${ICU_FULL_DIR}servlk.cpp
  ${ICU_FULL_DIR}servlkf.cpp
  ${ICU_FULL_DIR}servls.cpp
  ${ICU_FULL_DIR}servnotf.cpp
  ${ICU_FULL_DIR}servrbf.cpp
  ${ICU_FULL_DIR}servslkf.cpp
  ${ICU_FULL_DIR}sharedbreakiterator.cpp
  ${ICU_FULL_DIR}sharedobject.cpp
  ${ICU_FULL_DIR}simplepatternformatter.cpp
  ${ICU_FULL_DIR}simpletz.cpp
  ${ICU_FULL_DIR}smallintformatter.cpp
  ${ICU_FULL_DIR}smpdtfmt.cpp
  ${ICU_FULL_DIR}smpdtfst.cpp
  ${ICU_FULL_DIR}sortkey.cpp
  ${ICU_FULL_DIR}stringpiece.cpp
  ${ICU_FULL_DIR}stringtriebuilder.cpp
  ${ICU_FULL_DIR}strmatch.cpp
  ${ICU_FULL_DIR}strrepl.cpp
  ${ICU_FULL_DIR}stsearch.cpp
  ${ICU_FULL_DIR}taiwncal.cpp
  ${ICU_FULL_DIR}timezone.cpp
  ${ICU_FULL_DIR}titletrn.cpp
  ${ICU_FULL_DIR}tmunit.cpp
  ${ICU_FULL_DIR}tmutamt.cpp
  ${ICU_FULL_DIR}tmutfmt.cpp
  ${ICU_FULL_DIR}tolowtrn.cpp
  ${ICU_FULL_DIR}toupptrn.cpp
  ${ICU_FULL_DIR}translit.cpp
  ${ICU_FULL_DIR}transreg.cpp
  ${ICU_FULL_DIR}tridpars.cpp
  ${ICU_FULL_DIR}tzfmt.cpp
  ${ICU_FULL_DIR}tzgnames.cpp
  ${ICU_FULL_DIR}tznames.cpp
  ${ICU_FULL_DIR}tznames_impl.cpp
  ${ICU_FULL_DIR}tzrule.cpp
  ${ICU_FULL_DIR}tztrans.cpp
  ${ICU_FULL_DIR}ubrk.cpp
  ${ICU_FULL_DIR}ucal.cpp
  ${ICU_FULL_DIR}ucase.cpp
  ${ICU_FULL_DIR}ucasemap.cpp
  ${ICU_FULL_DIR}ucasemap_titlecase_brkiter.cpp
  ${ICU_FULL_DIR}ucharstrie.cpp
  ${ICU_FULL_DIR}ucharstriebuilder.cpp
  ${ICU_FULL_DIR}ucharstrieiterator.cpp
  ${ICU_FULL_DIR}uchriter.cpp
  ${ICU_FULL_DIR}ucln_cmn.cpp
  ${ICU_FULL_DIR}ucln_in.cpp
  ${ICU_FULL_DIR}ucnv2022.cpp
  ${ICU_FULL_DIR}ucnvbocu.cpp
  ${ICU_FULL_DIR}ucnvmbcs.cpp
  ${ICU_FULL_DIR}ucnvsel.cpp
  ${ICU_FULL_DIR}ucnv_bld.cpp
  ${ICU_FULL_DIR}ucnv_ext.cpp
  ${ICU_FULL_DIR}ucnv_io.cpp
  ${ICU_FULL_DIR}ucol.cpp
  ${ICU_FULL_DIR}ucoleitr.cpp
  ${ICU_FULL_DIR}ucol_res.cpp
  ${ICU_FULL_DIR}ucol_sit.cpp
  ${ICU_FULL_DIR}ucol_swp.cpp
  ${ICU_FULL_DIR}ucsdet.cpp
  ${ICU_FULL_DIR}ucurr.cpp
  ${ICU_FULL_DIR}udat.cpp
  ${ICU_FULL_DIR}udata.cpp
  ${ICU_FULL_DIR}udateintervalformat.cpp
  ${ICU_FULL_DIR}udatpg.cpp
  ${ICU_FULL_DIR}ufieldpositer.cpp
  ${ICU_FULL_DIR}uhash_us.cpp
  ${ICU_FULL_DIR}uidna.cpp
  ${ICU_FULL_DIR}uinit.cpp
  ${ICU_FULL_DIR}uiter.cpp
  ${ICU_FULL_DIR}uitercollationiterator.cpp
  ${ICU_FULL_DIR}ulistformatter.cpp
  ${ICU_FULL_DIR}uloc.cpp
  ${ICU_FULL_DIR}uloc_keytype.cpp
  ${ICU_FULL_DIR}umsg.cpp
  ${ICU_FULL_DIR}umutex.cpp
  ${ICU_FULL_DIR}unames.cpp
  ${ICU_FULL_DIR}unesctrn.cpp
  ${ICU_FULL_DIR}uni2name.cpp
  ${ICU_FULL_DIR}unifiedcache.cpp
  ${ICU_FULL_DIR}unifilt.cpp
  ${ICU_FULL_DIR}unifunct.cpp
  ${ICU_FULL_DIR}uniset.cpp
  ${ICU_FULL_DIR}unisetspan.cpp
  ${ICU_FULL_DIR}uniset_closure.cpp
  ${ICU_FULL_DIR}uniset_props.cpp
  ${ICU_FULL_DIR}unistr.cpp
  ${ICU_FULL_DIR}unistr_case.cpp
  ${ICU_FULL_DIR}unistr_case_locale.cpp
  ${ICU_FULL_DIR}unistr_cnv.cpp
  ${ICU_FULL_DIR}unistr_props.cpp
  ${ICU_FULL_DIR}unistr_titlecase_brkiter.cpp
  ${ICU_FULL_DIR}unorm.cpp
  ${ICU_FULL_DIR}unormcmp.cpp
  ${ICU_FULL_DIR}unum.cpp
  ${ICU_FULL_DIR}unumsys.cpp
  ${ICU_FULL_DIR}uobject.cpp
  ${ICU_FULL_DIR}upluralrules.cpp
  ${ICU_FULL_DIR}uprops.cpp
  ${ICU_FULL_DIR}uregex.cpp
  ${ICU_FULL_DIR}uregexc.cpp
  ${ICU_FULL_DIR}uregion.cpp
  ${ICU_FULL_DIR}uresbund.cpp
  ${ICU_FULL_DIR}uscript_props.cpp
  ${ICU_FULL_DIR}usearch.cpp
  ${ICU_FULL_DIR}uset.cpp
  ${ICU_FULL_DIR}usetiter.cpp
  ${ICU_FULL_DIR}uset_props.cpp
  ${ICU_FULL_DIR}ushape.cpp
  ${ICU_FULL_DIR}uspoof.cpp
  ${ICU_FULL_DIR}uspoof_build.cpp
  ${ICU_FULL_DIR}uspoof_conf.cpp
  ${ICU_FULL_DIR}uspoof_impl.cpp
  ${ICU_FULL_DIR}uspoof_wsconf.cpp
  ${ICU_FULL_DIR}usprep.cpp
  ${ICU_FULL_DIR}ustack.cpp
  ${ICU_FULL_DIR}ustrcase.cpp
  ${ICU_FULL_DIR}ustrcase_locale.cpp
  ${ICU_FULL_DIR}ustrenum.cpp
  ${ICU_FULL_DIR}ustring.cpp
  ${ICU_FULL_DIR}ustrtrns.cpp
  ${ICU_FULL_DIR}ustr_cnv.cpp
  ${ICU_FULL_DIR}ustr_titlecase_brkiter.cpp
  ${ICU_FULL_DIR}ustr_wcs.cpp
  ${ICU_FULL_DIR}utext.cpp
  ${ICU_FULL_DIR}utf16collationiterator.cpp
  ${ICU_FULL_DIR}utf8collationiterator.cpp
  ${ICU_FULL_DIR}util.cpp
  ${ICU_FULL_DIR}util_props.cpp
  ${ICU_FULL_DIR}utrans.cpp
  ${ICU_FULL_DIR}utrie.cpp
  ${ICU_FULL_DIR}utrie2.cpp
  ${ICU_FULL_DIR}utrie2_builder.cpp
  ${ICU_FULL_DIR}uts46.cpp
  ${ICU_FULL_DIR}uvector.cpp
  ${ICU_FULL_DIR}uvectr32.cpp
  ${ICU_FULL_DIR}uvectr64.cpp
  ${ICU_FULL_DIR}valueformatter.cpp
  ${ICU_FULL_DIR}visibledigits.cpp
  ${ICU_FULL_DIR}vtzone.cpp
  ${ICU_FULL_DIR}vzone.cpp
  ${ICU_FULL_DIR}windtfmt.cpp
  ${ICU_FULL_DIR}winnmfmt.cpp
  ${ICU_FULL_DIR}wintzimpl.cpp
  ${ICU_FULL_DIR}zonemeta.cpp
  ${ICU_FULL_DIR}zrule.cpp
  ${ICU_FULL_DIR}ztrans.cpp
)

set(ICU_INCLUDE_DIR
  ${CMAKE_CURRENT_SOURCE_DIR}/icu
  ${CMAKE_CURRENT_SOURCE_DIR}/icu/unicode
)

#configure_file(cmakeconfig.h.cmake ${CMAKE_CURRENT_SOURCE_DIR}/cmakeconfig.h)
add_definitions(-DBUILDING_WTF)
add_definitions(-DSTATICALLY_LINKED_WITH_WTF)

if (EMSCRIPTEN)
  #find_package(ICU REQUIRED COMPONENTS I18N UC REQUIRED)
  add_library(${WTF_LIBRARY_NAME} ${ICU_SOURCES} ${WTF_SOURCES} ${BASE_SOURCES})
  #target_link_libraries(${WTF_LIBRARY_NAME}
  #  ${ICU_UC_LIBRARIES}
  #  ${ICU_I18N_LIBRARIES}
  #)
else ()
  #find_package(ICU) # REQUIRED)
  add_library(${WTF_LIBRARY_NAME} ${ICU_SOURCES} ${WTF_SOURCES} ${BASE_SOURCES})
endif ()

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
  ${WTF_DIR}..
  ${WTF_DIR}
  ${WTF_DIR}dtoa
  ${WTF_DIR}persistence
  ${WTF_DIR}text
  ${WTF_DIR}text/icu
  ${WTF_DIR}threads
  ${WTF_DIR}unicode
  ${WTF_DIR}icu
  ${WTF_DIR}allocator
  ${WTF_DIR}typed_arrays
)

#message(FATAL_ERROR ${CMAKE_CXX_FLAGS})

target_include_directories(${WTF_LIBRARY_NAME} PUBLIC
  ${CMAKE_CURRENT_SOURCE_DIR}
  ${WTF_PRIVATE_INCLUDE_DIRECTORIES}
  ${CMAKE_CURRENT_SOURCE_DIR}/global_headers
  ${ICU_INCLUDE_DIR}
)

#target_include_directories(${WTF_LIBRARY_NAME} SYSTEM PRIVATE
#  ${CMAKE_CURRENT_SOURCE_DIR}
#  ${CMAKE_CURRENT_SOURCE_DIR}/wtf
#  ${CMAKE_CURRENT_SOURCE_DIR}/global_headers
#)

target_link_libraries(${WTF_LIBRARY_NAME} ${WTF_LIBRARIES}) # ${BASE_LIBRARY_NAME})

# http://userguide.icu-project.org/howtouseicu#TOC-C-With-Your-Own-Build-System
set(ICU_PUBLIC_DEFINES
    "U_ENABLE_DYLOAD=0"
    "U_STATIC_IMPLEMENTATION"
    "ICU_UTIL_DATA_IMPL=ICU_UTIL_DATA_STATIC"
)

set(ICU_PRIVATE_DEFINES
    "HAVE_DLOPEN=0"
    "UCONFIG_ONLY_HTML_CONVERSION=1"
    "U_CHARSET_IS_UTF8=1"
    # custom
    "HAVE_DLFCN_H=0"
)

if (WIN32)
    list(APPEND ICU_PUBLIC_DEFINES
        "UCHAR_TYPE=wchar_t"
    )
else ()
    list(APPEND ICU_PUBLIC_DEFINES
        "UCHAR_TYPE=uint16_t"
    )
endif ()

target_compile_definitions(${WTF_LIBRARY_NAME} PUBLIC
  ${ICU_PUBLIC_DEFINES}
  U_STATIC_IMPLEMENTATION
  U_COMMON_IMPLEMENTATION
  U_I18N_IMPLEMENTATION
  U_ENABLE_DYLOAD=0
  LIB_ICU_I18N_STATIC
  ICU_UTIL_DATA_IMPL=ICU_UTIL_DATA_STATIC
  U_CHARSET_IS_UTF8=1
  U_NO_DEFAULT_INCLUDE_UTF_HEADERS=0
  #U_ATTRIBUTE_DEPRECATED
  #U_NO_DEFAULT_INCLUDE_UTF_HEADERS
)

target_compile_definitions(${WTF_LIBRARY_NAME} PRIVATE
  ${ICU_PRIVATE_DEFINES}
  WTF_IMPLEMENTATION=1
  BASE_IMPLEMENTATION=1
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
