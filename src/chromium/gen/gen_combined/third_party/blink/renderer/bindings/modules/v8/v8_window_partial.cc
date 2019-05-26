// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated from the Jinja2 template
// third_party/blink/renderer/bindings/templates/partial_interface.cc.tmpl
// by the script code_generator_v8.py.
// DO NOT MODIFY!

// clang-format off
#include "third_party/blink/renderer/bindings/modules/v8/v8_window_partial.h"

#include <algorithm>

#include "base/memory/scoped_refptr.h"
#include "third_party/blink/renderer/bindings/core/v8/binding_security.h"
#include "third_party/blink/renderer/bindings/core/v8/idl_types.h"
#include "third_party/blink/renderer/bindings/core/v8/js_event_handler.h"
#include "third_party/blink/renderer/bindings/core/v8/native_value_traits_impl.h"
#include "third_party/blink/renderer/bindings/core/v8/script_promise.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_dom_configuration.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_window.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_absolute_orientation_sensor.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_accelerometer.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_ambient_light_sensor.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_analyser_node.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_audio_buffer.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_audio_buffer_source_node.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_audio_context.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_audio_destination_node.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_audio_listener.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_audio_node.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_audio_param.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_audio_param_map.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_audio_processing_event.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_audio_scheduled_source_node.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_audio_worklet.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_audio_worklet_node.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_authenticator_assertion_response.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_authenticator_attestation_response.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_authenticator_response.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_background_fetch_manager.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_background_fetch_record.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_background_fetch_registration.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_barcode_detector.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_base_audio_context.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_battery_manager.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_before_install_prompt_event.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_biquad_filter_node.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_blob_event.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_bluetooth.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_bluetooth_advertising_event.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_bluetooth_characteristic_properties.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_bluetooth_device.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_bluetooth_le_scan.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_bluetooth_manufacturer_data_map.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_bluetooth_remote_gatt_characteristic.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_bluetooth_remote_gatt_descriptor.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_bluetooth_remote_gatt_server.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_bluetooth_remote_gatt_service.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_bluetooth_service_data_map.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_bluetooth_uuid.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_broadcast_channel.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_cache.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_cache_storage.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_canvas_capture_media_stream_track.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_canvas_gradient.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_canvas_pattern.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_canvas_rendering_context_2d.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_channel_merger_node.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_channel_splitter_node.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_choose_file_system_entries_options.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_clipboard.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_clipboard_item.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_close_event.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_constant_source_node.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_contacts_manager.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_convolver_node.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_cookie_change_event.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_cookie_store.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_credential.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_credentials_container.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_crypto.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_crypto_key.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_database.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_database_callback.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_delay_node.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_deprecated_storage_info.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_detected_barcode.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_detected_face.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_detected_text.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_device_motion_event.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_device_motion_event_acceleration.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_device_motion_event_rotation_rate.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_device_orientation_event.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_dom_error.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_dynamics_compressor_node.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_enter_picture_in_picture_event.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_entry_callback.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_error_callback.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_event_source.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_experimental_badge.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_face_detector.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_federated_credential.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_file_system_callback.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_file_system_directory_handle.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_file_system_file_handle.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_file_system_handle.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_file_system_writer.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_gain_node.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_gamepad.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_gamepad_axis_event.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_gamepad_button.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_gamepad_button_event.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_gamepad_event.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_gamepad_haptic_actuator.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_gamepad_pose.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_gpu.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_gpu_adapter.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_gpu_bind_group.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_gpu_bind_group_layout.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_gpu_buffer.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_gpu_buffer_usage.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_gpu_canvas_context.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_gpu_color_write_bit.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_gpu_command_buffer.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_gpu_command_encoder.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_gpu_compute_pass_encoder.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_gpu_compute_pipeline.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_gpu_device.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_gpu_fence.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_gpu_out_of_memory_error.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_gpu_pipeline_layout.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_gpu_queue.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_gpu_render_pass_encoder.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_gpu_render_pipeline.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_gpu_sampler.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_gpu_shader_module.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_gpu_shader_stage_bit.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_gpu_swap_chain.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_gpu_texture.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_gpu_texture_usage.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_gpu_texture_view.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_gpu_uncaptured_error_event.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_gpu_validation_error.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_gyroscope.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_hid.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_hid_collection_info.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_hid_connection_event.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_hid_device.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_hid_input_report_event.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_hid_report_info.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_hid_report_item.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_idb_cursor.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_idb_cursor_with_value.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_idb_database.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_idb_factory.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_idb_index.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_idb_key_range.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_idb_object_store.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_idb_observation.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_idb_observer.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_idb_observer_changes.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_idb_open_db_request.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_idb_request.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_idb_transaction.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_idb_version_change_event.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_idle_detector.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_idle_state.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_iir_filter_node.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_image_bitmap_rendering_context.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_image_capture.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_input_device_info.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_keyboard.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_keyboard_layout_map.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_linear_acceleration_sensor.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_lock.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_lock_manager.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_magnetometer.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_media_capabilities.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_media_device_info.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_media_devices.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_media_element_audio_source_node.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_media_encrypted_event.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_media_key_message_event.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_media_key_session.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_media_key_status_map.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_media_key_system_access.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_media_keys.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_media_metadata.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_media_recorder.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_media_session.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_media_settings_range.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_media_source.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_media_stream.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_media_stream_audio_destination_node.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_media_stream_audio_source_node.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_media_stream_event.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_media_stream_track.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_media_stream_track_event.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_merchant_validation_event.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_midi_access.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_midi_connection_event.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_midi_input.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_midi_input_map.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_midi_message_event.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_midi_output.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_midi_output_map.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_midi_port.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_mime_type.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_mime_type_array.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_navigation_preload_manager.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_network_information.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_nfc.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_notification.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_offline_audio_completion_event.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_offline_audio_context.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_offscreen_canvas_rendering_context_2d.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_orientation_sensor.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_oscillator_node.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_overconstrained_error.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_panner_node.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_password_credential.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_path_2d.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_payment_address.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_payment_instruments.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_payment_manager.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_payment_method_change_event.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_payment_request.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_payment_request_update_event.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_payment_response.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_periodic_wave.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_permission_status.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_permissions.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_photo_capabilities.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_picture_in_picture_window.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_plugin.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_plugin_array.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_presentation.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_presentation_availability.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_presentation_connection.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_presentation_connection_available_event.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_presentation_connection_close_event.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_presentation_connection_list.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_presentation_receiver.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_presentation_request.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_public_key_credential.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_push_manager.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_push_subscription.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_push_subscription_options.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_relative_orientation_sensor.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_remote_playback.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_rtc_certificate.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_rtc_data_channel.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_rtc_data_channel_event.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_rtc_dtls_transport.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_rtc_dtmf_sender.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_rtc_dtmf_tone_change_event.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_rtc_error.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_rtc_error_event.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_rtc_ice_candidate.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_rtc_ice_transport.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_rtc_peer_connection.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_rtc_peer_connection_ice_event.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_rtc_quic_stream.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_rtc_quic_stream_event.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_rtc_quic_transport.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_rtc_rtp_receiver.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_rtc_rtp_sender.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_rtc_rtp_transceiver.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_rtc_sctp_transport.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_rtc_session_description.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_rtc_stats_report.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_rtc_track_event.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_screen_orientation.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_script_processor_node.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_sensor.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_sensor_error_event.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_serial.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_serial_port.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_service_worker.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_service_worker_container.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_service_worker_registration.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_sms.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_sms_receiver.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_source_buffer.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_source_buffer_list.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_speech_grammar.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_speech_grammar_list.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_speech_recognition.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_speech_recognition_error.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_speech_recognition_event.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_speech_synthesis.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_speech_synthesis_error_event.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_speech_synthesis_event.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_speech_synthesis_utterance.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_stereo_panner_node.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_storage.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_storage_event.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_storage_manager.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_subtle_crypto.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_sync_manager.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_text_decoder.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_text_decoder_stream.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_text_detector.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_text_encoder.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_text_encoder_stream.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_timestamp_trigger.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_track_default.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_track_default_list.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_usb.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_usb_alternate_interface.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_usb_configuration.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_usb_connection_event.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_usb_device.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_usb_endpoint.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_usb_in_transfer_result.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_usb_interface.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_usb_isochronous_in_transfer_packet.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_usb_isochronous_in_transfer_result.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_usb_isochronous_out_transfer_packet.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_usb_isochronous_out_transfer_result.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_usb_out_transfer_result.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_video_playback_quality.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_vr_display.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_vr_display_capabilities.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_vr_display_event.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_vr_eye_parameters.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_vr_frame_data.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_vr_pose.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_vr_stage_parameters.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_wake_lock.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_wake_lock_request.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_wave_shaper_node.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_webgl2_compute_rendering_context.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_webgl2_rendering_context.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_webgl_active_info.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_webgl_buffer.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_webgl_context_event.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_webgl_framebuffer.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_webgl_program.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_webgl_query.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_webgl_renderbuffer.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_webgl_rendering_context.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_webgl_sampler.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_webgl_shader.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_webgl_shader_precision_format.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_webgl_sync.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_webgl_texture.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_webgl_transform_feedback.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_webgl_uniform_location.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_webgl_vertex_array_object.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_webgl_video_frame_info.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_websocket.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_worklet_animation.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_xr.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_xr_bounded_reference_space.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_xr_frame.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_xr_hit_result.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_xr_input_source.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_xr_input_source_event.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_xr_layer.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_xr_plane.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_xr_plane_detection_state.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_xr_pose.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_xr_presentation_context.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_xr_ray.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_xr_reference_space.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_xr_reference_space_event.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_xr_render_state.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_xr_rigid_transform.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_xr_session.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_xr_session_event.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_xr_space.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_xr_stationary_reference_space.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_xr_unbounded_reference_space.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_xr_view.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_xr_viewer_pose.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_xr_viewport.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_xr_webgl_layer.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_xr_world_information.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_xr_world_tracking_state.h"
#include "third_party/blink/renderer/core/execution_context/execution_context.h"
#include "third_party/blink/renderer/core/frame/dactyloscoper.h"
#include "third_party/blink/renderer/core/frame/deprecation.h"
#include "third_party/blink/renderer/core/frame/local_dom_window.h"
#include "third_party/blink/renderer/core/frame/use_counter.h"
#include "third_party/blink/renderer/modules/app_banner/dom_window_installation.h"
#include "third_party/blink/renderer/modules/cache_storage/global_cache_storage.h"
#include "third_party/blink/renderer/modules/cookie_store/window_cookie_store.h"
#include "third_party/blink/renderer/modules/crypto/dom_window_crypto.h"
#include "third_party/blink/renderer/modules/device_orientation/dom_window_device_motion.h"
#include "third_party/blink/renderer/modules/device_orientation/dom_window_device_orientation.h"
#include "third_party/blink/renderer/modules/filesystem/dom_window_file_system.h"
#include "third_party/blink/renderer/modules/indexeddb/global_indexed_db.h"
#include "third_party/blink/renderer/modules/mediastream/dom_window_media_stream.h"
#include "third_party/blink/renderer/modules/native_file_system/window_native_file_system.h"
#include "third_party/blink/renderer/modules/quota/dom_window_quota.h"
#include "third_party/blink/renderer/modules/speech/dom_window_speech.h"
#include "third_party/blink/renderer/modules/speech/dom_window_speech_synthesis.h"
#include "third_party/blink/renderer/modules/storage/dom_window_storage.h"
#include "third_party/blink/renderer/modules/webdatabase/dom_window_web_database.h"
#include "third_party/blink/renderer/modules/window_modules_constructors.h"
#include "third_party/blink/renderer/platform/bindings/exception_messages.h"
#include "third_party/blink/renderer/platform/bindings/exception_state.h"
#include "third_party/blink/renderer/platform/bindings/runtime_call_stats.h"
#include "third_party/blink/renderer/platform/bindings/script_state.h"
#include "third_party/blink/renderer/platform/bindings/v8_dom_activity_logger.h"
#include "third_party/blink/renderer/platform/bindings/v8_object_constructor.h"
#include "third_party/blink/renderer/platform/bindings/v8_per_context_data.h"
#include "third_party/blink/renderer/platform/bindings/v8_private_property.h"
#include "third_party/blink/renderer/platform/runtime_enabled_features.h"
#include "third_party/blink/renderer/platform/scheduler/public/cooperative_scheduling_manager.h"
#include "third_party/blink/renderer/platform/wtf/get_ptr.h"

namespace blink {

namespace dom_window_partial_v8_internal {

static void OnappinstalledAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  // Same-origin attribute getters are never exposed via the cross-origin
  // interceptors. Since same-origin access requires a LocalDOMWindow, it is
  // safe to downcast here.
  LocalDOMWindow* impl = To<LocalDOMWindow>(V8Window::ToImpl(holder));

  EventListener* cpp_value(DOMWindowInstallation::onappinstalled(*impl));

  V8SetReturnValue(info, JSEventHandler::AsV8Value(info.GetIsolate(), impl, cpp_value));
}

static void OnappinstalledAttributeSetter(
    v8::Local<v8::Value> v8_value, const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Isolate* isolate = info.GetIsolate();
  ALLOW_UNUSED_LOCAL(isolate);

  v8::Local<v8::Object> holder = info.Holder();
  ALLOW_UNUSED_LOCAL(holder);

  // Same-origin attributes setters are never exposed via the cross-origin
  // interceptors. Since same-origin access requires a LocalDOMWindow, it is
  // safe to downcast here.
  LocalDOMWindow* impl = To<LocalDOMWindow>(V8Window::ToImpl(holder));

  // Prepare the value to be set.

  DOMWindowInstallation::setOnappinstalled(*impl, JSEventHandler::CreateOrNull(v8_value, JSEventHandler::HandlerType::kEventHandler));
}

static void OnbeforeinstallpromptAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  // Same-origin attribute getters are never exposed via the cross-origin
  // interceptors. Since same-origin access requires a LocalDOMWindow, it is
  // safe to downcast here.
  LocalDOMWindow* impl = To<LocalDOMWindow>(V8Window::ToImpl(holder));

  EventListener* cpp_value(DOMWindowInstallation::onbeforeinstallprompt(*impl));

  V8SetReturnValue(info, JSEventHandler::AsV8Value(info.GetIsolate(), impl, cpp_value));
}

static void OnbeforeinstallpromptAttributeSetter(
    v8::Local<v8::Value> v8_value, const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Isolate* isolate = info.GetIsolate();
  ALLOW_UNUSED_LOCAL(isolate);

  v8::Local<v8::Object> holder = info.Holder();
  ALLOW_UNUSED_LOCAL(holder);

  // Same-origin attributes setters are never exposed via the cross-origin
  // interceptors. Since same-origin access requires a LocalDOMWindow, it is
  // safe to downcast here.
  LocalDOMWindow* impl = To<LocalDOMWindow>(V8Window::ToImpl(holder));

  // Prepare the value to be set.

  DOMWindowInstallation::setOnbeforeinstallprompt(*impl, JSEventHandler::CreateOrNull(v8_value, JSEventHandler::HandlerType::kEventHandler));
}

static void CachesAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  // Same-origin attribute getters are never exposed via the cross-origin
  // interceptors. Since same-origin access requires a LocalDOMWindow, it is
  // safe to downcast here.
  LocalDOMWindow* impl = To<LocalDOMWindow>(V8Window::ToImpl(holder));

  ExceptionState exception_state(info.GetIsolate(), ExceptionState::kGetterContext, "Window", "caches");

  CacheStorage* cpp_value(GlobalCacheStorage::caches(*impl, exception_state));

  if (UNLIKELY(exception_state.HadException()))
    return;

  // Keep the wrapper object for the return value alive as long as |this|
  // object is alive in order to save creation time of the wrapper object.
  if (cpp_value && DOMDataStore::SetReturnValue(info.GetReturnValue(), cpp_value))
    return;
  v8::Local<v8::Value> v8_value(ToV8(cpp_value, holder, info.GetIsolate()));
  V8PrivateProperty::GetSymbol(
      info.GetIsolate(), "KeepAlive#Window#caches")
      .Set(holder, v8_value);

  V8SetReturnValue(info, v8_value);
}

static void CookieStoreAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  // Same-origin attribute getters are never exposed via the cross-origin
  // interceptors. Since same-origin access requires a LocalDOMWindow, it is
  // safe to downcast here.
  LocalDOMWindow* impl = To<LocalDOMWindow>(V8Window::ToImpl(holder));

  CookieStore* cpp_value(WindowCookieStore::cookieStore(*impl));

  // Keep the wrapper object for the return value alive as long as |this|
  // object is alive in order to save creation time of the wrapper object.
  if (cpp_value && DOMDataStore::SetReturnValue(info.GetReturnValue(), cpp_value))
    return;
  v8::Local<v8::Value> v8_value(ToV8(cpp_value, holder, info.GetIsolate()));
  V8PrivateProperty::GetSymbol(
      info.GetIsolate(), "KeepAlive#Window#cookieStore")
      .Set(holder, v8_value);

  V8SetReturnValue(info, v8_value);
}

static void CookieStoreAttributeSetter(
    v8::Local<v8::Value> v8_value, const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Isolate* isolate = info.GetIsolate();
  ALLOW_UNUSED_LOCAL(isolate);

  v8::Local<v8::Object> holder = info.Holder();
  ALLOW_UNUSED_LOCAL(holder);

  // Prepare the value to be set.

  v8::Local<v8::String> property_name = V8AtomicString(isolate, "cookieStore");
  if (info.Holder()->CreateDataProperty(info.GetIsolate()->GetCurrentContext(), property_name, v8_value).IsNothing())
    return;
}

static void CryptoAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  // Same-origin attribute getters are never exposed via the cross-origin
  // interceptors. Since same-origin access requires a LocalDOMWindow, it is
  // safe to downcast here.
  LocalDOMWindow* impl = To<LocalDOMWindow>(V8Window::ToImpl(holder));

  Crypto* cpp_value(DOMWindowCrypto::crypto(*impl));

  // Keep the wrapper object for the return value alive as long as |this|
  // object is alive in order to save creation time of the wrapper object.
  if (cpp_value && DOMDataStore::SetReturnValue(info.GetReturnValue(), cpp_value))
    return;
  v8::Local<v8::Value> v8_value(ToV8(cpp_value, holder, info.GetIsolate()));
  V8PrivateProperty::GetSymbol(
      info.GetIsolate(), "KeepAlive#Window#crypto")
      .Set(holder, v8_value);

  V8SetReturnValue(info, v8_value);
}

static void OndevicemotionAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  // Same-origin attribute getters are never exposed via the cross-origin
  // interceptors. Since same-origin access requires a LocalDOMWindow, it is
  // safe to downcast here.
  LocalDOMWindow* impl = To<LocalDOMWindow>(V8Window::ToImpl(holder));

  EventListener* cpp_value(DOMWindowDeviceMotion::ondevicemotion(*impl));

  V8SetReturnValue(info, JSEventHandler::AsV8Value(info.GetIsolate(), impl, cpp_value));
}

static void OndevicemotionAttributeSetter(
    v8::Local<v8::Value> v8_value, const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Isolate* isolate = info.GetIsolate();
  ALLOW_UNUSED_LOCAL(isolate);

  v8::Local<v8::Object> holder = info.Holder();
  ALLOW_UNUSED_LOCAL(holder);

  // Same-origin attributes setters are never exposed via the cross-origin
  // interceptors. Since same-origin access requires a LocalDOMWindow, it is
  // safe to downcast here.
  LocalDOMWindow* impl = To<LocalDOMWindow>(V8Window::ToImpl(holder));

  // Prepare the value to be set.

  DOMWindowDeviceMotion::setOndevicemotion(*impl, JSEventHandler::CreateOrNull(v8_value, JSEventHandler::HandlerType::kEventHandler));
}

static void OndeviceorientationAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  // Same-origin attribute getters are never exposed via the cross-origin
  // interceptors. Since same-origin access requires a LocalDOMWindow, it is
  // safe to downcast here.
  LocalDOMWindow* impl = To<LocalDOMWindow>(V8Window::ToImpl(holder));

  EventListener* cpp_value(DOMWindowDeviceOrientation::ondeviceorientation(*impl));

  V8SetReturnValue(info, JSEventHandler::AsV8Value(info.GetIsolate(), impl, cpp_value));
}

static void OndeviceorientationAttributeSetter(
    v8::Local<v8::Value> v8_value, const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Isolate* isolate = info.GetIsolate();
  ALLOW_UNUSED_LOCAL(isolate);

  v8::Local<v8::Object> holder = info.Holder();
  ALLOW_UNUSED_LOCAL(holder);

  // Same-origin attributes setters are never exposed via the cross-origin
  // interceptors. Since same-origin access requires a LocalDOMWindow, it is
  // safe to downcast here.
  LocalDOMWindow* impl = To<LocalDOMWindow>(V8Window::ToImpl(holder));

  // Prepare the value to be set.

  DOMWindowDeviceOrientation::setOndeviceorientation(*impl, JSEventHandler::CreateOrNull(v8_value, JSEventHandler::HandlerType::kEventHandler));
}

static void OndeviceorientationabsoluteAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  // Same-origin attribute getters are never exposed via the cross-origin
  // interceptors. Since same-origin access requires a LocalDOMWindow, it is
  // safe to downcast here.
  LocalDOMWindow* impl = To<LocalDOMWindow>(V8Window::ToImpl(holder));

  EventListener* cpp_value(DOMWindowDeviceOrientation::ondeviceorientationabsolute(*impl));

  V8SetReturnValue(info, JSEventHandler::AsV8Value(info.GetIsolate(), impl, cpp_value));
}

static void OndeviceorientationabsoluteAttributeSetter(
    v8::Local<v8::Value> v8_value, const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Isolate* isolate = info.GetIsolate();
  ALLOW_UNUSED_LOCAL(isolate);

  v8::Local<v8::Object> holder = info.Holder();
  ALLOW_UNUSED_LOCAL(holder);

  // Same-origin attributes setters are never exposed via the cross-origin
  // interceptors. Since same-origin access requires a LocalDOMWindow, it is
  // safe to downcast here.
  LocalDOMWindow* impl = To<LocalDOMWindow>(V8Window::ToImpl(holder));

  // Prepare the value to be set.

  DOMWindowDeviceOrientation::setOndeviceorientationabsolute(*impl, JSEventHandler::CreateOrNull(v8_value, JSEventHandler::HandlerType::kEventHandler));
}

static void IndexedDBAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  // Same-origin attribute getters are never exposed via the cross-origin
  // interceptors. Since same-origin access requires a LocalDOMWindow, it is
  // safe to downcast here.
  LocalDOMWindow* impl = To<LocalDOMWindow>(V8Window::ToImpl(holder));

  IDBFactory* cpp_value(GlobalIndexedDB::indexedDB(*impl));

  // Keep the wrapper object for the return value alive as long as |this|
  // object is alive in order to save creation time of the wrapper object.
  if (cpp_value && DOMDataStore::SetReturnValue(info.GetReturnValue(), cpp_value))
    return;
  v8::Local<v8::Value> v8_value(ToV8(cpp_value, holder, info.GetIsolate()));
  V8PrivateProperty::GetSymbol(
      info.GetIsolate(), "KeepAlive#Window#indexedDB")
      .Set(holder, v8_value);

  V8SetReturnValue(info, v8_value);
}

static void WebkitStorageInfoAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  // Same-origin attribute getters are never exposed via the cross-origin
  // interceptors. Since same-origin access requires a LocalDOMWindow, it is
  // safe to downcast here.
  LocalDOMWindow* impl = To<LocalDOMWindow>(V8Window::ToImpl(holder));

  DeprecatedStorageInfo* cpp_value(DOMWindowQuota::webkitStorageInfo(*impl));

  // Keep the wrapper object for the return value alive as long as |this|
  // object is alive in order to save creation time of the wrapper object.
  if (cpp_value && DOMDataStore::SetReturnValue(info.GetReturnValue(), cpp_value))
    return;
  v8::Local<v8::Value> v8_value(ToV8(cpp_value, holder, info.GetIsolate()));
  V8PrivateProperty::GetSymbol(
      info.GetIsolate(), "KeepAlive#Window#webkitStorageInfo")
      .Set(holder, v8_value);

  V8SetReturnValue(info, v8_value);
}

static void SpeechSynthesisAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  // Same-origin attribute getters are never exposed via the cross-origin
  // interceptors. Since same-origin access requires a LocalDOMWindow, it is
  // safe to downcast here.
  LocalDOMWindow* impl = To<LocalDOMWindow>(V8Window::ToImpl(holder));

  ScriptState* script_state = ScriptState::ForRelevantRealm(info);

  SpeechSynthesis* cpp_value(DOMWindowSpeechSynthesis::speechSynthesis(script_state, *impl));

  // Keep the wrapper object for the return value alive as long as |this|
  // object is alive in order to save creation time of the wrapper object.
  if (cpp_value && DOMDataStore::SetReturnValue(info.GetReturnValue(), cpp_value))
    return;
  v8::Local<v8::Value> v8_value(ToV8(cpp_value, holder, info.GetIsolate()));
  V8PrivateProperty::GetSymbol(
      info.GetIsolate(), "KeepAlive#Window#speechSynthesis")
      .Set(holder, v8_value);

  V8SetReturnValue(info, v8_value);
}

static void SessionStorageAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  // Same-origin attribute getters are never exposed via the cross-origin
  // interceptors. Since same-origin access requires a LocalDOMWindow, it is
  // safe to downcast here.
  LocalDOMWindow* impl = To<LocalDOMWindow>(V8Window::ToImpl(holder));

  ExceptionState exception_state(info.GetIsolate(), ExceptionState::kGetterContext, "Window", "sessionStorage");

  StorageArea* cpp_value(DOMWindowStorage::sessionStorage(*impl, exception_state));

  if (UNLIKELY(exception_state.HadException()))
    return;

  // Keep the wrapper object for the return value alive as long as |this|
  // object is alive in order to save creation time of the wrapper object.
  if (cpp_value && DOMDataStore::SetReturnValue(info.GetReturnValue(), cpp_value))
    return;
  v8::Local<v8::Value> v8_value(ToV8(cpp_value, holder, info.GetIsolate()));
  V8PrivateProperty::GetSymbol(
      info.GetIsolate(), "KeepAlive#Window#sessionStorage")
      .Set(holder, v8_value);

  V8SetReturnValue(info, v8_value);
}

static void LocalStorageAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  // Same-origin attribute getters are never exposed via the cross-origin
  // interceptors. Since same-origin access requires a LocalDOMWindow, it is
  // safe to downcast here.
  LocalDOMWindow* impl = To<LocalDOMWindow>(V8Window::ToImpl(holder));

  ExceptionState exception_state(info.GetIsolate(), ExceptionState::kGetterContext, "Window", "localStorage");

  StorageArea* cpp_value(DOMWindowStorage::localStorage(*impl, exception_state));

  if (UNLIKELY(exception_state.HadException()))
    return;

  // Keep the wrapper object for the return value alive as long as |this|
  // object is alive in order to save creation time of the wrapper object.
  if (cpp_value && DOMDataStore::SetReturnValue(info.GetReturnValue(), cpp_value))
    return;
  v8::Local<v8::Value> v8_value(ToV8(cpp_value, holder, info.GetIsolate()));
  V8PrivateProperty::GetSymbol(
      info.GetIsolate(), "KeepAlive#Window#localStorage")
      .Set(holder, v8_value);

  V8SetReturnValue(info, v8_value);
}

static void WebkitRequestFileSystemMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exception_state(info.GetIsolate(), ExceptionState::kExecutionContext, "Window", "webkitRequestFileSystem");

  // Same-origin methods are never exposed via the cross-origin interceptors.
  // Since same-origin access requires a LocalDOMWindow, it is safe to downcast
  // here.
  LocalDOMWindow* impl = To<LocalDOMWindow>(V8Window::ToImpl(info.Holder()));

  if (UNLIKELY(info.Length() < 3)) {
    exception_state.ThrowTypeError(ExceptionMessages::NotEnoughArguments(3, info.Length()));
    return;
  }

  uint16_t type;
  int64_t size;
  V8FileSystemCallback* success_callback;
  V8ErrorCallback* error_callback;
  type = NativeValueTraits<IDLUnsignedShort>::NativeValue(info.GetIsolate(), info[0], exception_state);
  if (exception_state.HadException())
    return;

  size = NativeValueTraits<IDLLongLong>::NativeValue(info.GetIsolate(), info[1], exception_state);
  if (exception_state.HadException())
    return;

  if (info[2]->IsObject()) {
    success_callback = V8FileSystemCallback::Create(info[2].As<v8::Object>());
  } else {
    exception_state.ThrowTypeError("The callback provided as parameter 3 is not an object.");
    return;
  }

  if (info[3]->IsObject()) {
    error_callback = V8ErrorCallback::Create(info[3].As<v8::Object>());
  } else if (info[3]->IsNullOrUndefined()) {
    error_callback = nullptr;
  } else {
    exception_state.ThrowTypeError("The callback provided as parameter 4 is not an object.");
    return;
  }

  DOMWindowFileSystem::webkitRequestFileSystem(*impl, type, size, success_callback, error_callback);
}

static void WebkitResolveLocalFileSystemURLMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exception_state(info.GetIsolate(), ExceptionState::kExecutionContext, "Window", "webkitResolveLocalFileSystemURL");

  // Same-origin methods are never exposed via the cross-origin interceptors.
  // Since same-origin access requires a LocalDOMWindow, it is safe to downcast
  // here.
  LocalDOMWindow* impl = To<LocalDOMWindow>(V8Window::ToImpl(info.Holder()));

  if (UNLIKELY(info.Length() < 2)) {
    exception_state.ThrowTypeError(ExceptionMessages::NotEnoughArguments(2, info.Length()));
    return;
  }

  V8StringResource<> url;
  V8EntryCallback* success_callback;
  V8ErrorCallback* error_callback;
  url = info[0];
  if (!url.Prepare())
    return;

  if (info[1]->IsObject()) {
    success_callback = V8EntryCallback::Create(info[1].As<v8::Object>());
  } else {
    exception_state.ThrowTypeError("The callback provided as parameter 2 is not an object.");
    return;
  }

  if (info[2]->IsObject()) {
    error_callback = V8ErrorCallback::Create(info[2].As<v8::Object>());
  } else if (info[2]->IsNullOrUndefined()) {
    error_callback = nullptr;
  } else {
    exception_state.ThrowTypeError("The callback provided as parameter 3 is not an object.");
    return;
  }

  DOMWindowFileSystem::webkitResolveLocalFileSystemURL(*impl, url, success_callback, error_callback);
}

static void ChooseFileSystemEntriesMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exception_state(info.GetIsolate(), ExceptionState::kExecutionContext, "Window", "chooseFileSystemEntries");
  ExceptionToRejectPromiseScope reject_promise_scope(info, exception_state);

  // V8DOMConfiguration::kDoNotCheckHolder
  // Make sure that info.Holder() really points to an instance of the type.
  if (!V8Window::HasInstance(info.Holder(), info.GetIsolate())) {
    exception_state.ThrowTypeError("Illegal invocation");
    return;
  }
  // Same-origin methods are never exposed via the cross-origin interceptors.
  // Since same-origin access requires a LocalDOMWindow, it is safe to downcast
  // here.
  LocalDOMWindow* impl = To<LocalDOMWindow>(V8Window::ToImpl(info.Holder()));

  ScriptState* script_state = ScriptState::ForRelevantRealm(info);

  ChooseFileSystemEntriesOptions* options;
  if (!info[0]->IsNullOrUndefined() && !info[0]->IsObject()) {
    exception_state.ThrowTypeError("parameter 1 ('options') is not an object.");
    return;
  }
  options = NativeValueTraits<ChooseFileSystemEntriesOptions>::NativeValue(info.GetIsolate(), info[0], exception_state);
  if (exception_state.HadException())
    return;

  ScriptPromise result = WindowNativeFileSystem::chooseFileSystemEntries(script_state, *impl, options);
  V8SetReturnValue(info, result.V8Value());
}

static void OpenDatabaseMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exception_state(info.GetIsolate(), ExceptionState::kExecutionContext, "Window", "openDatabase");

  // Same-origin methods are never exposed via the cross-origin interceptors.
  // Since same-origin access requires a LocalDOMWindow, it is safe to downcast
  // here.
  LocalDOMWindow* impl = To<LocalDOMWindow>(V8Window::ToImpl(info.Holder()));

  if (UNLIKELY(info.Length() < 4)) {
    exception_state.ThrowTypeError(ExceptionMessages::NotEnoughArguments(4, info.Length()));
    return;
  }

  V8StringResource<> name;
  V8StringResource<> version;
  V8StringResource<> display_name;
  uint32_t estimated_size;
  V8DatabaseCallback* creation_callback;
  int num_args_passed = info.Length();
  while (num_args_passed > 0) {
    if (!info[num_args_passed - 1]->IsUndefined())
      break;
    --num_args_passed;
  }
  name = info[0];
  if (!name.Prepare())
    return;

  version = info[1];
  if (!version.Prepare())
    return;

  display_name = info[2];
  if (!display_name.Prepare())
    return;

  estimated_size = NativeValueTraits<IDLUnsignedLong>::NativeValue(info.GetIsolate(), info[3], exception_state);
  if (exception_state.HadException())
    return;

  if (UNLIKELY(num_args_passed <= 4)) {
    Database* result = DOMWindowWebDatabase::openDatabase(*impl, name, version, display_name, estimated_size, exception_state);
    if (exception_state.HadException()) {
      return;
    }
    V8SetReturnValue(info, result);
    return;
  }
  if (info[4]->IsFunction()) {
    creation_callback = V8DatabaseCallback::Create(info[4].As<v8::Function>());
  } else if (info[4]->IsNullOrUndefined()) {
    creation_callback = nullptr;
  } else {
    exception_state.ThrowTypeError("The callback provided as parameter 5 is not a function.");
    return;
  }

  Database* result = DOMWindowWebDatabase::openDatabase(*impl, name, version, display_name, estimated_size, creation_callback, exception_state);
  if (exception_state.HadException()) {
    return;
  }
  V8SetReturnValue(info, result);
}

}  // namespace dom_window_partial_v8_internal

void V8WindowPartial::XRReferenceSpaceEventConstructorGetterCallback(
    v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_XRReferenceSpaceEvent_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, V8XRReferenceSpaceEvent::GetWrapperTypeInfo());
}

void V8WindowPartial::WorkletAnimationConstructorGetterCallback(
    v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_WorkletAnimation_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, V8WorkletAnimation::GetWrapperTypeInfo());
}

void V8WindowPartial::ClipboardItemConstructorGetterCallback(
    v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_ClipboardItem_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, V8ClipboardItem::GetWrapperTypeInfo());
}

void V8WindowPartial::BackgroundFetchManagerConstructorGetterCallback(
    v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_BackgroundFetchManager_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, V8BackgroundFetchManager::GetWrapperTypeInfo());
}

void V8WindowPartial::BackgroundFetchRecordConstructorGetterCallback(
    v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_BackgroundFetchRecord_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, V8BackgroundFetchRecord::GetWrapperTypeInfo());
}

void V8WindowPartial::BackgroundFetchRegistrationConstructorGetterCallback(
    v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_BackgroundFetchRegistration_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, V8BackgroundFetchRegistration::GetWrapperTypeInfo());
}

void V8WindowPartial::ExperimentalBadgeConstructorGetterCallback(
    v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_ExperimentalBadge_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, V8ExperimentalBadge::GetWrapperTypeInfo());
}

void V8WindowPartial::ContactsManagerConstructorGetterCallback(
    v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_ContactsManager_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, V8ContactsManager::GetWrapperTypeInfo());
}

void V8WindowPartial::CookieChangeEventConstructorGetterCallback(
    v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_CookieChangeEvent_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, V8CookieChangeEvent::GetWrapperTypeInfo());
}

void V8WindowPartial::CookieStoreConstructorGetterCallback(
    v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_CookieStore_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, V8CookieStore::GetWrapperTypeInfo());
}

void V8WindowPartial::GamepadAxisEventConstructorGetterCallback(
    v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_GamepadAxisEvent_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, V8GamepadAxisEvent::GetWrapperTypeInfo());
}

void V8WindowPartial::GamepadButtonEventConstructorGetterCallback(
    v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_GamepadButtonEvent_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, V8GamepadButtonEvent::GetWrapperTypeInfo());
}

void V8WindowPartial::IDBObservationConstructorGetterCallback(
    v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_IDBObservation_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, V8IDBObservation::GetWrapperTypeInfo());
}

void V8WindowPartial::IDBObserverChangesConstructorGetterCallback(
    v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_IDBObserverChanges_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, V8IDBObserverChanges::GetWrapperTypeInfo());
}

void V8WindowPartial::IDBObserverConstructorGetterCallback(
    v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_IDBObserver_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, V8IDBObserver::GetWrapperTypeInfo());
}

void V8WindowPartial::IdleDetectorConstructorGetterCallback(
    v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_IdleDetector_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, V8IdleDetector::GetWrapperTypeInfo());
}

void V8WindowPartial::IdleStateConstructorGetterCallback(
    v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_IdleState_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, V8IdleState::GetWrapperTypeInfo());
}

void V8WindowPartial::MediaMetadataConstructorGetterCallback(
    v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_MediaMetadata_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, V8MediaMetadata::GetWrapperTypeInfo());
}

void V8WindowPartial::MediaSessionConstructorGetterCallback(
    v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_MediaSession_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, V8MediaSession::GetWrapperTypeInfo());
}

void V8WindowPartial::TrackDefaultConstructorGetterCallback(
    v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_TrackDefault_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, V8TrackDefault::GetWrapperTypeInfo());
}

void V8WindowPartial::TrackDefaultListConstructorGetterCallback(
    v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_TrackDefaultList_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, V8TrackDefaultList::GetWrapperTypeInfo());
}

void V8WindowPartial::VideoPlaybackQualityConstructorGetterCallback(
    v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_VideoPlaybackQuality_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, V8VideoPlaybackQuality::GetWrapperTypeInfo());
}

void V8WindowPartial::FileSystemDirectoryHandleConstructorGetterCallback(
    v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_FileSystemDirectoryHandle_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, V8FileSystemDirectoryHandle::GetWrapperTypeInfo());
}

void V8WindowPartial::FileSystemFileHandleConstructorGetterCallback(
    v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_FileSystemFileHandle_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, V8FileSystemFileHandle::GetWrapperTypeInfo());
}

void V8WindowPartial::FileSystemHandleConstructorGetterCallback(
    v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_FileSystemHandle_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, V8FileSystemHandle::GetWrapperTypeInfo());
}

void V8WindowPartial::FileSystemWriterConstructorGetterCallback(
    v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_FileSystemWriter_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, V8FileSystemWriter::GetWrapperTypeInfo());
}

void V8WindowPartial::TimestampTriggerConstructorGetterCallback(
    v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_TimestampTrigger_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, V8TimestampTrigger::GetWrapperTypeInfo());
}

void V8WindowPartial::NotificationConstructorGetterCallback(
    v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_Notification_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, V8Notification::GetWrapperTypeInfo());
}

void V8WindowPartial::OffscreenCanvasRenderingContext2DConstructorGetterCallback(
    v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_OffscreenCanvasRenderingContext2D_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, V8OffscreenCanvasRenderingContext2D::GetWrapperTypeInfo());
}

void V8WindowPartial::PaymentInstrumentsConstructorGetterCallback(
    v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_PaymentInstruments_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, V8PaymentInstruments::GetWrapperTypeInfo());
}

void V8WindowPartial::PaymentManagerConstructorGetterCallback(
    v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_PaymentManager_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, V8PaymentManager::GetWrapperTypeInfo());
}

void V8WindowPartial::PaymentMethodChangeEventConstructorGetterCallback(
    v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_PaymentMethodChangeEvent_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, V8PaymentMethodChangeEvent::GetWrapperTypeInfo());
}

void V8WindowPartial::PaymentAddressConstructorGetterCallback(
    v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_PaymentAddress_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, V8PaymentAddress::GetWrapperTypeInfo());
}

void V8WindowPartial::PaymentRequestConstructorGetterCallback(
    v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_PaymentRequest_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, V8PaymentRequest::GetWrapperTypeInfo());
}

void V8WindowPartial::PaymentResponseConstructorGetterCallback(
    v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_PaymentResponse_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, V8PaymentResponse::GetWrapperTypeInfo());
}

void V8WindowPartial::MerchantValidationEventConstructorGetterCallback(
    v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_MerchantValidationEvent_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, V8MerchantValidationEvent::GetWrapperTypeInfo());
}

void V8WindowPartial::PaymentRequestUpdateEventConstructorGetterCallback(
    v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_PaymentRequestUpdateEvent_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, V8PaymentRequestUpdateEvent::GetWrapperTypeInfo());
}

void V8WindowPartial::PermissionStatusConstructorGetterCallback(
    v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_PermissionStatus_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, V8PermissionStatus::GetWrapperTypeInfo());
}

void V8WindowPartial::PermissionsConstructorGetterCallback(
    v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_Permissions_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, V8Permissions::GetWrapperTypeInfo());
}

void V8WindowPartial::EnterPictureInPictureEventConstructorGetterCallback(
    v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_EnterPictureInPictureEvent_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, V8EnterPictureInPictureEvent::GetWrapperTypeInfo());
}

void V8WindowPartial::PictureInPictureWindowConstructorGetterCallback(
    v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_PictureInPictureWindow_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, V8PictureInPictureWindow::GetWrapperTypeInfo());
}

void V8WindowPartial::PresentationAvailabilityConstructorGetterCallback(
    v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_PresentationAvailability_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, V8PresentationAvailability::GetWrapperTypeInfo());
}

void V8WindowPartial::PresentationConnectionAvailableEventConstructorGetterCallback(
    v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_PresentationConnectionAvailableEvent_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, V8PresentationConnectionAvailableEvent::GetWrapperTypeInfo());
}

void V8WindowPartial::PresentationConnectionCloseEventConstructorGetterCallback(
    v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_PresentationConnectionCloseEvent_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, V8PresentationConnectionCloseEvent::GetWrapperTypeInfo());
}

void V8WindowPartial::PresentationConnectionConstructorGetterCallback(
    v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_PresentationConnection_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, V8PresentationConnection::GetWrapperTypeInfo());
}

void V8WindowPartial::PresentationConnectionListConstructorGetterCallback(
    v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_PresentationConnectionList_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, V8PresentationConnectionList::GetWrapperTypeInfo());
}

void V8WindowPartial::PresentationConstructorGetterCallback(
    v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_Presentation_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, V8Presentation::GetWrapperTypeInfo());
}

void V8WindowPartial::PresentationReceiverConstructorGetterCallback(
    v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_PresentationReceiver_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, V8PresentationReceiver::GetWrapperTypeInfo());
}

void V8WindowPartial::PresentationRequestConstructorGetterCallback(
    v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_PresentationRequest_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, V8PresentationRequest::GetWrapperTypeInfo());
}

void V8WindowPartial::PushManagerConstructorGetterCallback(
    v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_PushManager_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, V8PushManager::GetWrapperTypeInfo());
}

void V8WindowPartial::PushSubscriptionConstructorGetterCallback(
    v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_PushSubscription_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, V8PushSubscription::GetWrapperTypeInfo());
}

void V8WindowPartial::PushSubscriptionOptionsConstructorGetterCallback(
    v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_PushSubscriptionOptions_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, V8PushSubscriptionOptions::GetWrapperTypeInfo());
}

void V8WindowPartial::RTCDtlsTransportConstructorGetterCallback(
    v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_RTCDtlsTransport_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, V8RTCDtlsTransport::GetWrapperTypeInfo());
}

void V8WindowPartial::RTCQuicStreamConstructorGetterCallback(
    v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_RTCQuicStream_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, V8RTCQuicStream::GetWrapperTypeInfo());
}

void V8WindowPartial::RTCQuicTransportConstructorGetterCallback(
    v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_RTCQuicTransport_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, V8RTCQuicTransport::GetWrapperTypeInfo());
}

void V8WindowPartial::RTCQuicStreamEventConstructorGetterCallback(
    v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_RTCQuicStreamEvent_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, V8RTCQuicStreamEvent::GetWrapperTypeInfo());
}

void V8WindowPartial::RTCSctpTransportConstructorGetterCallback(
    v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_RTCSctpTransport_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, V8RTCSctpTransport::GetWrapperTypeInfo());
}

void V8WindowPartial::RemotePlaybackConstructorGetterCallback(
    v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_RemotePlayback_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, V8RemotePlayback::GetWrapperTypeInfo());
}

void V8WindowPartial::SpeechSynthesisErrorEventConstructorGetterCallback(
    v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_SpeechSynthesisErrorEvent_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, V8SpeechSynthesisErrorEvent::GetWrapperTypeInfo());
}

void V8WindowPartial::SpeechSynthesisEventConstructorGetterCallback(
    v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_SpeechSynthesisEvent_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, V8SpeechSynthesisEvent::GetWrapperTypeInfo());
}

void V8WindowPartial::SpeechSynthesisUtteranceConstructorGetterCallback(
    v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_SpeechSynthesisUtterance_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, V8SpeechSynthesisUtterance::GetWrapperTypeInfo());
}

void V8WindowPartial::AbsoluteOrientationSensorConstructorGetterCallback(
    v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_AbsoluteOrientationSensor_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, V8AbsoluteOrientationSensor::GetWrapperTypeInfo());
}

void V8WindowPartial::AccelerometerConstructorGetterCallback(
    v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_Accelerometer_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, V8Accelerometer::GetWrapperTypeInfo());
}

void V8WindowPartial::GyroscopeConstructorGetterCallback(
    v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_Gyroscope_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, V8Gyroscope::GetWrapperTypeInfo());
}

void V8WindowPartial::LinearAccelerationSensorConstructorGetterCallback(
    v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_LinearAccelerationSensor_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, V8LinearAccelerationSensor::GetWrapperTypeInfo());
}

void V8WindowPartial::OrientationSensorConstructorGetterCallback(
    v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_OrientationSensor_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, V8OrientationSensor::GetWrapperTypeInfo());
}

void V8WindowPartial::RelativeOrientationSensorConstructorGetterCallback(
    v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_RelativeOrientationSensor_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, V8RelativeOrientationSensor::GetWrapperTypeInfo());
}

void V8WindowPartial::SensorConstructorGetterCallback(
    v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_Sensor_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, V8Sensor::GetWrapperTypeInfo());
}

void V8WindowPartial::SensorErrorEventConstructorGetterCallback(
    v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_SensorErrorEvent_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, V8SensorErrorEvent::GetWrapperTypeInfo());
}

void V8WindowPartial::AmbientLightSensorConstructorGetterCallback(
    v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_AmbientLightSensor_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, V8AmbientLightSensor::GetWrapperTypeInfo());
}

void V8WindowPartial::MagnetometerConstructorGetterCallback(
    v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_Magnetometer_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, V8Magnetometer::GetWrapperTypeInfo());
}

void V8WindowPartial::SerialConstructorGetterCallback(
    v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_Serial_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, V8Serial::GetWrapperTypeInfo());
}

void V8WindowPartial::SerialPortConstructorGetterCallback(
    v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_SerialPort_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, V8SerialPort::GetWrapperTypeInfo());
}

void V8WindowPartial::BarcodeDetectorConstructorGetterCallback(
    v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_BarcodeDetector_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, V8BarcodeDetector::GetWrapperTypeInfo());
}

void V8WindowPartial::DetectedBarcodeConstructorGetterCallback(
    v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_DetectedBarcode_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, V8DetectedBarcode::GetWrapperTypeInfo());
}

void V8WindowPartial::DetectedFaceConstructorGetterCallback(
    v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_DetectedFace_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, V8DetectedFace::GetWrapperTypeInfo());
}

void V8WindowPartial::DetectedTextConstructorGetterCallback(
    v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_DetectedText_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, V8DetectedText::GetWrapperTypeInfo());
}

void V8WindowPartial::FaceDetectorConstructorGetterCallback(
    v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_FaceDetector_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, V8FaceDetector::GetWrapperTypeInfo());
}

void V8WindowPartial::TextDetectorConstructorGetterCallback(
    v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_TextDetector_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, V8TextDetector::GetWrapperTypeInfo());
}

void V8WindowPartial::SMSConstructorGetterCallback(
    v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_SMS_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, V8SMS::GetWrapperTypeInfo());
}

void V8WindowPartial::SMSReceiverConstructorGetterCallback(
    v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_SMSReceiver_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, V8SMSReceiver::GetWrapperTypeInfo());
}

void V8WindowPartial::CanvasGradientConstructorGetterCallback(
    v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_CanvasGradient_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, V8CanvasGradient::GetWrapperTypeInfo());
}

void V8WindowPartial::CanvasPatternConstructorGetterCallback(
    v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_CanvasPattern_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, V8CanvasPattern::GetWrapperTypeInfo());
}

void V8WindowPartial::Path2DConstructorGetterCallback(
    v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_Path2D_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, V8Path2D::GetWrapperTypeInfo());
}

void V8WindowPartial::WebGL2RenderingContextConstructorGetterCallback(
    v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_WebGL2RenderingContext_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, V8WebGL2RenderingContext::GetWrapperTypeInfo());
}

void V8WindowPartial::WebGLActiveInfoConstructorGetterCallback(
    v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_WebGLActiveInfo_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, V8WebGLActiveInfo::GetWrapperTypeInfo());
}

void V8WindowPartial::WebGLBufferConstructorGetterCallback(
    v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_WebGLBuffer_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, V8WebGLBuffer::GetWrapperTypeInfo());
}

void V8WindowPartial::WebGLFramebufferConstructorGetterCallback(
    v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_WebGLFramebuffer_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, V8WebGLFramebuffer::GetWrapperTypeInfo());
}

void V8WindowPartial::WebGLProgramConstructorGetterCallback(
    v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_WebGLProgram_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, V8WebGLProgram::GetWrapperTypeInfo());
}

void V8WindowPartial::WebGLQueryConstructorGetterCallback(
    v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_WebGLQuery_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, V8WebGLQuery::GetWrapperTypeInfo());
}

void V8WindowPartial::WebGLRenderbufferConstructorGetterCallback(
    v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_WebGLRenderbuffer_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, V8WebGLRenderbuffer::GetWrapperTypeInfo());
}

void V8WindowPartial::WebGLRenderingContextConstructorGetterCallback(
    v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_WebGLRenderingContext_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, V8WebGLRenderingContext::GetWrapperTypeInfo());
}

void V8WindowPartial::WebGLSamplerConstructorGetterCallback(
    v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_WebGLSampler_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, V8WebGLSampler::GetWrapperTypeInfo());
}

void V8WindowPartial::WebGLShaderConstructorGetterCallback(
    v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_WebGLShader_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, V8WebGLShader::GetWrapperTypeInfo());
}

void V8WindowPartial::WebGLShaderPrecisionFormatConstructorGetterCallback(
    v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_WebGLShaderPrecisionFormat_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, V8WebGLShaderPrecisionFormat::GetWrapperTypeInfo());
}

void V8WindowPartial::WebGLSyncConstructorGetterCallback(
    v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_WebGLSync_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, V8WebGLSync::GetWrapperTypeInfo());
}

void V8WindowPartial::WebGLTextureConstructorGetterCallback(
    v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_WebGLTexture_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, V8WebGLTexture::GetWrapperTypeInfo());
}

void V8WindowPartial::WebGLTransformFeedbackConstructorGetterCallback(
    v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_WebGLTransformFeedback_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, V8WebGLTransformFeedback::GetWrapperTypeInfo());
}

void V8WindowPartial::WebGLUniformLocationConstructorGetterCallback(
    v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_WebGLUniformLocation_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, V8WebGLUniformLocation::GetWrapperTypeInfo());
}

void V8WindowPartial::WebGLVertexArrayObjectConstructorGetterCallback(
    v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_WebGLVertexArrayObject_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, V8WebGLVertexArrayObject::GetWrapperTypeInfo());
}

void V8WindowPartial::WakeLockConstructorGetterCallback(
    v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_WakeLock_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, V8WakeLock::GetWrapperTypeInfo());
}

void V8WindowPartial::WakeLockRequestConstructorGetterCallback(
    v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_WakeLockRequest_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, V8WakeLockRequest::GetWrapperTypeInfo());
}

void V8WindowPartial::AuthenticatorAssertionResponseConstructorGetterCallback(
    v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_AuthenticatorAssertionResponse_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, V8AuthenticatorAssertionResponse::GetWrapperTypeInfo());
}

void V8WindowPartial::AuthenticatorAttestationResponseConstructorGetterCallback(
    v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_AuthenticatorAttestationResponse_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, V8AuthenticatorAttestationResponse::GetWrapperTypeInfo());
}

void V8WindowPartial::AuthenticatorResponseConstructorGetterCallback(
    v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_AuthenticatorResponse_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, V8AuthenticatorResponse::GetWrapperTypeInfo());
}

void V8WindowPartial::PublicKeyCredentialConstructorGetterCallback(
    v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_PublicKeyCredential_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, V8PublicKeyCredential::GetWrapperTypeInfo());
}

void V8WindowPartial::BluetoothCharacteristicPropertiesConstructorGetterCallback(
    v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_BluetoothCharacteristicProperties_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, V8BluetoothCharacteristicProperties::GetWrapperTypeInfo());
}

void V8WindowPartial::BluetoothConstructorGetterCallback(
    v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_Bluetooth_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, V8Bluetooth::GetWrapperTypeInfo());
}

void V8WindowPartial::BluetoothDeviceConstructorGetterCallback(
    v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_BluetoothDevice_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, V8BluetoothDevice::GetWrapperTypeInfo());
}

void V8WindowPartial::BluetoothRemoteGATTCharacteristicConstructorGetterCallback(
    v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_BluetoothRemoteGATTCharacteristic_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, V8BluetoothRemoteGATTCharacteristic::GetWrapperTypeInfo());
}

void V8WindowPartial::BluetoothRemoteGATTDescriptorConstructorGetterCallback(
    v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_BluetoothRemoteGATTDescriptor_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, V8BluetoothRemoteGATTDescriptor::GetWrapperTypeInfo());
}

void V8WindowPartial::BluetoothRemoteGATTServerConstructorGetterCallback(
    v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_BluetoothRemoteGATTServer_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, V8BluetoothRemoteGATTServer::GetWrapperTypeInfo());
}

void V8WindowPartial::BluetoothRemoteGATTServiceConstructorGetterCallback(
    v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_BluetoothRemoteGATTService_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, V8BluetoothRemoteGATTService::GetWrapperTypeInfo());
}

void V8WindowPartial::BluetoothAdvertisingEventConstructorGetterCallback(
    v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_BluetoothAdvertisingEvent_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, V8BluetoothAdvertisingEvent::GetWrapperTypeInfo());
}

void V8WindowPartial::BluetoothLEScanConstructorGetterCallback(
    v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_BluetoothLEScan_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, V8BluetoothLEScan::GetWrapperTypeInfo());
}

void V8WindowPartial::BluetoothManufacturerDataMapConstructorGetterCallback(
    v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_BluetoothManufacturerDataMap_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, V8BluetoothManufacturerDataMap::GetWrapperTypeInfo());
}

void V8WindowPartial::BluetoothServiceDataMapConstructorGetterCallback(
    v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_BluetoothServiceDataMap_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, V8BluetoothServiceDataMap::GetWrapperTypeInfo());
}

void V8WindowPartial::BluetoothUUIDConstructorGetterCallback(
    v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_BluetoothUUID_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, V8BluetoothUUID::GetWrapperTypeInfo());
}

void V8WindowPartial::WebGL2ComputeRenderingContextConstructorGetterCallback(
    v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_WebGL2ComputeRenderingContext_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, V8WebGL2ComputeRenderingContext::GetWrapperTypeInfo());
}

void V8WindowPartial::WebGLVideoFrameInfoConstructorGetterCallback(
    v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_WebGLVideoFrameInfo_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, V8WebGLVideoFrameInfo::GetWrapperTypeInfo());
}

void V8WindowPartial::GPUAdapterConstructorGetterCallback(
    v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_GPUAdapter_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, V8GPUAdapter::GetWrapperTypeInfo());
}

void V8WindowPartial::GPUBindGroupConstructorGetterCallback(
    v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_GPUBindGroup_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, V8GPUBindGroup::GetWrapperTypeInfo());
}

void V8WindowPartial::GPUBindGroupLayoutConstructorGetterCallback(
    v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_GPUBindGroupLayout_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, V8GPUBindGroupLayout::GetWrapperTypeInfo());
}

void V8WindowPartial::GPUBufferConstructorGetterCallback(
    v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_GPUBuffer_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, V8GPUBuffer::GetWrapperTypeInfo());
}

void V8WindowPartial::GPUBufferUsageConstructorGetterCallback(
    v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_GPUBufferUsage_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, V8GPUBufferUsage::GetWrapperTypeInfo());
}

void V8WindowPartial::GPUCanvasContextConstructorGetterCallback(
    v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_GPUCanvasContext_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, V8GPUCanvasContext::GetWrapperTypeInfo());
}

void V8WindowPartial::GPUColorWriteBitConstructorGetterCallback(
    v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_GPUColorWriteBit_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, V8GPUColorWriteBit::GetWrapperTypeInfo());
}

void V8WindowPartial::GPUCommandBufferConstructorGetterCallback(
    v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_GPUCommandBuffer_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, V8GPUCommandBuffer::GetWrapperTypeInfo());
}

void V8WindowPartial::GPUCommandEncoderConstructorGetterCallback(
    v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_GPUCommandEncoder_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, V8GPUCommandEncoder::GetWrapperTypeInfo());
}

void V8WindowPartial::GPUComputePassEncoderConstructorGetterCallback(
    v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_GPUComputePassEncoder_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, V8GPUComputePassEncoder::GetWrapperTypeInfo());
}

void V8WindowPartial::GPUComputePipelineConstructorGetterCallback(
    v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_GPUComputePipeline_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, V8GPUComputePipeline::GetWrapperTypeInfo());
}

void V8WindowPartial::GPUConstructorGetterCallback(
    v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_GPU_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, V8GPU::GetWrapperTypeInfo());
}

void V8WindowPartial::GPUDeviceConstructorGetterCallback(
    v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_GPUDevice_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, V8GPUDevice::GetWrapperTypeInfo());
}

void V8WindowPartial::GPUFenceConstructorGetterCallback(
    v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_GPUFence_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, V8GPUFence::GetWrapperTypeInfo());
}

void V8WindowPartial::GPUOutOfMemoryErrorConstructorGetterCallback(
    v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_GPUOutOfMemoryError_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, V8GPUOutOfMemoryError::GetWrapperTypeInfo());
}

void V8WindowPartial::GPUPipelineLayoutConstructorGetterCallback(
    v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_GPUPipelineLayout_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, V8GPUPipelineLayout::GetWrapperTypeInfo());
}

void V8WindowPartial::GPUQueueConstructorGetterCallback(
    v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_GPUQueue_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, V8GPUQueue::GetWrapperTypeInfo());
}

void V8WindowPartial::GPURenderPassEncoderConstructorGetterCallback(
    v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_GPURenderPassEncoder_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, V8GPURenderPassEncoder::GetWrapperTypeInfo());
}

void V8WindowPartial::GPURenderPipelineConstructorGetterCallback(
    v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_GPURenderPipeline_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, V8GPURenderPipeline::GetWrapperTypeInfo());
}

void V8WindowPartial::GPUSamplerConstructorGetterCallback(
    v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_GPUSampler_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, V8GPUSampler::GetWrapperTypeInfo());
}

void V8WindowPartial::GPUShaderModuleConstructorGetterCallback(
    v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_GPUShaderModule_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, V8GPUShaderModule::GetWrapperTypeInfo());
}

void V8WindowPartial::GPUShaderStageBitConstructorGetterCallback(
    v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_GPUShaderStageBit_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, V8GPUShaderStageBit::GetWrapperTypeInfo());
}

void V8WindowPartial::GPUSwapChainConstructorGetterCallback(
    v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_GPUSwapChain_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, V8GPUSwapChain::GetWrapperTypeInfo());
}

void V8WindowPartial::GPUTextureConstructorGetterCallback(
    v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_GPUTexture_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, V8GPUTexture::GetWrapperTypeInfo());
}

void V8WindowPartial::GPUTextureUsageConstructorGetterCallback(
    v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_GPUTextureUsage_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, V8GPUTextureUsage::GetWrapperTypeInfo());
}

void V8WindowPartial::GPUTextureViewConstructorGetterCallback(
    v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_GPUTextureView_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, V8GPUTextureView::GetWrapperTypeInfo());
}

void V8WindowPartial::GPUUncapturedErrorEventConstructorGetterCallback(
    v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_GPUUncapturedErrorEvent_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, V8GPUUncapturedErrorEvent::GetWrapperTypeInfo());
}

void V8WindowPartial::GPUValidationErrorConstructorGetterCallback(
    v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_GPUValidationError_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, V8GPUValidationError::GetWrapperTypeInfo());
}

void V8WindowPartial::HIDCollectionInfoConstructorGetterCallback(
    v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_HIDCollectionInfo_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, V8HIDCollectionInfo::GetWrapperTypeInfo());
}

void V8WindowPartial::HIDConnectionEventConstructorGetterCallback(
    v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_HIDConnectionEvent_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, V8HIDConnectionEvent::GetWrapperTypeInfo());
}

void V8WindowPartial::HIDConstructorGetterCallback(
    v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_HID_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, V8HID::GetWrapperTypeInfo());
}

void V8WindowPartial::HIDDeviceConstructorGetterCallback(
    v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_HIDDevice_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, V8HIDDevice::GetWrapperTypeInfo());
}

void V8WindowPartial::HIDInputReportEventConstructorGetterCallback(
    v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_HIDInputReportEvent_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, V8HIDInputReportEvent::GetWrapperTypeInfo());
}

void V8WindowPartial::HIDReportInfoConstructorGetterCallback(
    v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_HIDReportInfo_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, V8HIDReportInfo::GetWrapperTypeInfo());
}

void V8WindowPartial::HIDReportItemConstructorGetterCallback(
    v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_HIDReportItem_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, V8HIDReportItem::GetWrapperTypeInfo());
}

void V8WindowPartial::NFCConstructorGetterCallback(
    v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_NFC_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, V8NFC::GetWrapperTypeInfo());
}

void V8WindowPartial::USBAlternateInterfaceConstructorGetterCallback(
    v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_USBAlternateInterface_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, V8USBAlternateInterface::GetWrapperTypeInfo());
}

void V8WindowPartial::USBConfigurationConstructorGetterCallback(
    v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_USBConfiguration_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, V8USBConfiguration::GetWrapperTypeInfo());
}

void V8WindowPartial::USBConnectionEventConstructorGetterCallback(
    v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_USBConnectionEvent_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, V8USBConnectionEvent::GetWrapperTypeInfo());
}

void V8WindowPartial::USBConstructorGetterCallback(
    v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_USB_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, V8USB::GetWrapperTypeInfo());
}

void V8WindowPartial::USBDeviceConstructorGetterCallback(
    v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_USBDevice_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, V8USBDevice::GetWrapperTypeInfo());
}

void V8WindowPartial::USBEndpointConstructorGetterCallback(
    v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_USBEndpoint_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, V8USBEndpoint::GetWrapperTypeInfo());
}

void V8WindowPartial::USBInTransferResultConstructorGetterCallback(
    v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_USBInTransferResult_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, V8USBInTransferResult::GetWrapperTypeInfo());
}

void V8WindowPartial::USBInterfaceConstructorGetterCallback(
    v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_USBInterface_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, V8USBInterface::GetWrapperTypeInfo());
}

void V8WindowPartial::USBIsochronousInTransferPacketConstructorGetterCallback(
    v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_USBIsochronousInTransferPacket_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, V8USBIsochronousInTransferPacket::GetWrapperTypeInfo());
}

void V8WindowPartial::USBIsochronousInTransferResultConstructorGetterCallback(
    v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_USBIsochronousInTransferResult_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, V8USBIsochronousInTransferResult::GetWrapperTypeInfo());
}

void V8WindowPartial::USBIsochronousOutTransferPacketConstructorGetterCallback(
    v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_USBIsochronousOutTransferPacket_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, V8USBIsochronousOutTransferPacket::GetWrapperTypeInfo());
}

void V8WindowPartial::USBIsochronousOutTransferResultConstructorGetterCallback(
    v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_USBIsochronousOutTransferResult_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, V8USBIsochronousOutTransferResult::GetWrapperTypeInfo());
}

void V8WindowPartial::USBOutTransferResultConstructorGetterCallback(
    v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_USBOutTransferResult_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, V8USBOutTransferResult::GetWrapperTypeInfo());
}

void V8WindowPartial::GamepadPoseConstructorGetterCallback(
    v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_GamepadPose_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, V8GamepadPose::GetWrapperTypeInfo());
}

void V8WindowPartial::VRDisplayCapabilitiesConstructorGetterCallback(
    v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_VRDisplayCapabilities_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, V8VRDisplayCapabilities::GetWrapperTypeInfo());
}

void V8WindowPartial::VRDisplayConstructorGetterCallback(
    v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_VRDisplay_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, V8VRDisplay::GetWrapperTypeInfo());
}

void V8WindowPartial::VRDisplayEventConstructorGetterCallback(
    v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_VRDisplayEvent_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, V8VRDisplayEvent::GetWrapperTypeInfo());
}

void V8WindowPartial::VREyeParametersConstructorGetterCallback(
    v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_VREyeParameters_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, V8VREyeParameters::GetWrapperTypeInfo());
}

void V8WindowPartial::VRFrameDataConstructorGetterCallback(
    v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_VRFrameData_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, V8VRFrameData::GetWrapperTypeInfo());
}

void V8WindowPartial::VRPoseConstructorGetterCallback(
    v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_VRPose_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, V8VRPose::GetWrapperTypeInfo());
}

void V8WindowPartial::VRStageParametersConstructorGetterCallback(
    v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_VRStageParameters_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, V8VRStageParameters::GetWrapperTypeInfo());
}

void V8WindowPartial::XRBoundedReferenceSpaceConstructorGetterCallback(
    v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_XRBoundedReferenceSpace_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, V8XRBoundedReferenceSpace::GetWrapperTypeInfo());
}

void V8WindowPartial::XRConstructorGetterCallback(
    v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_XR_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, V8XR::GetWrapperTypeInfo());
}

void V8WindowPartial::XRFrameConstructorGetterCallback(
    v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_XRFrame_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, V8XRFrame::GetWrapperTypeInfo());
}

void V8WindowPartial::XRInputSourceConstructorGetterCallback(
    v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_XRInputSource_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, V8XRInputSource::GetWrapperTypeInfo());
}

void V8WindowPartial::XRInputSourceEventConstructorGetterCallback(
    v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_XRInputSourceEvent_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, V8XRInputSourceEvent::GetWrapperTypeInfo());
}

void V8WindowPartial::XRLayerConstructorGetterCallback(
    v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_XRLayer_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, V8XRLayer::GetWrapperTypeInfo());
}

void V8WindowPartial::XRPoseConstructorGetterCallback(
    v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_XRPose_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, V8XRPose::GetWrapperTypeInfo());
}

void V8WindowPartial::XRPresentationContextConstructorGetterCallback(
    v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_XRPresentationContext_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, V8XRPresentationContext::GetWrapperTypeInfo());
}

void V8WindowPartial::XRReferenceSpaceConstructorGetterCallback(
    v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_XRReferenceSpace_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, V8XRReferenceSpace::GetWrapperTypeInfo());
}

void V8WindowPartial::XRRenderStateConstructorGetterCallback(
    v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_XRRenderState_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, V8XRRenderState::GetWrapperTypeInfo());
}

void V8WindowPartial::XRRigidTransformConstructorGetterCallback(
    v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_XRRigidTransform_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, V8XRRigidTransform::GetWrapperTypeInfo());
}

void V8WindowPartial::XRSessionConstructorGetterCallback(
    v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_XRSession_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, V8XRSession::GetWrapperTypeInfo());
}

void V8WindowPartial::XRSessionEventConstructorGetterCallback(
    v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_XRSessionEvent_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, V8XRSessionEvent::GetWrapperTypeInfo());
}

void V8WindowPartial::XRSpaceConstructorGetterCallback(
    v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_XRSpace_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, V8XRSpace::GetWrapperTypeInfo());
}

void V8WindowPartial::XRStationaryReferenceSpaceConstructorGetterCallback(
    v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_XRStationaryReferenceSpace_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, V8XRStationaryReferenceSpace::GetWrapperTypeInfo());
}

void V8WindowPartial::XRUnboundedReferenceSpaceConstructorGetterCallback(
    v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_XRUnboundedReferenceSpace_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, V8XRUnboundedReferenceSpace::GetWrapperTypeInfo());
}

void V8WindowPartial::XRViewConstructorGetterCallback(
    v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_XRView_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, V8XRView::GetWrapperTypeInfo());
}

void V8WindowPartial::XRViewerPoseConstructorGetterCallback(
    v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_XRViewerPose_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, V8XRViewerPose::GetWrapperTypeInfo());
}

void V8WindowPartial::XRViewportConstructorGetterCallback(
    v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_XRViewport_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, V8XRViewport::GetWrapperTypeInfo());
}

void V8WindowPartial::XRWebGLLayerConstructorGetterCallback(
    v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_XRWebGLLayer_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, V8XRWebGLLayer::GetWrapperTypeInfo());
}

void V8WindowPartial::XRHitResultConstructorGetterCallback(
    v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_XRHitResult_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, V8XRHitResult::GetWrapperTypeInfo());
}

void V8WindowPartial::XRRayConstructorGetterCallback(
    v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_XRRay_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, V8XRRay::GetWrapperTypeInfo());
}

void V8WindowPartial::XRPlaneConstructorGetterCallback(
    v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_XRPlane_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, V8XRPlane::GetWrapperTypeInfo());
}

void V8WindowPartial::XRPlaneDetectionStateConstructorGetterCallback(
    v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_XRPlaneDetectionState_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, V8XRPlaneDetectionState::GetWrapperTypeInfo());
}

void V8WindowPartial::XRWorldInformationConstructorGetterCallback(
    v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_XRWorldInformation_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, V8XRWorldInformation::GetWrapperTypeInfo());
}

void V8WindowPartial::XRWorldTrackingStateConstructorGetterCallback(
    v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_XRWorldTrackingState_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, V8XRWorldTrackingState::GetWrapperTypeInfo());
}

void V8WindowPartial::DeviceMotionEventAccelerationConstructorGetterCallback(
    v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_DeviceMotionEventAcceleration_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, V8DeviceMotionEventAcceleration::GetWrapperTypeInfo());
}

void V8WindowPartial::DeviceMotionEventConstructorGetterCallback(
    v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_DeviceMotionEvent_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, V8DeviceMotionEvent::GetWrapperTypeInfo());
}

void V8WindowPartial::DeviceMotionEventRotationRateConstructorGetterCallback(
    v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_DeviceMotionEventRotationRate_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, V8DeviceMotionEventRotationRate::GetWrapperTypeInfo());
}

void V8WindowPartial::DeviceOrientationEventConstructorGetterCallback(
    v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_DeviceOrientationEvent_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, V8DeviceOrientationEvent::GetWrapperTypeInfo());
}

void V8WindowPartial::AudioWorkletConstructorGetterCallback(
    v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_AudioWorklet_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, V8AudioWorklet::GetWrapperTypeInfo());
}

void V8WindowPartial::CacheConstructorGetterCallback(
    v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_Cache_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, V8Cache::GetWrapperTypeInfo());
}

void V8WindowPartial::CacheStorageConstructorGetterCallback(
    v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_CacheStorage_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, V8CacheStorage::GetWrapperTypeInfo());
}

void V8WindowPartial::ClipboardConstructorGetterCallback(
    v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_Clipboard_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, V8Clipboard::GetWrapperTypeInfo());
}

void V8WindowPartial::CredentialConstructorGetterCallback(
    v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_Credential_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, V8Credential::GetWrapperTypeInfo());
}

void V8WindowPartial::CredentialsContainerConstructorGetterCallback(
    v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_CredentialsContainer_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, V8CredentialsContainer::GetWrapperTypeInfo());
}

void V8WindowPartial::FederatedCredentialConstructorGetterCallback(
    v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_FederatedCredential_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, V8FederatedCredential::GetWrapperTypeInfo());
}

void V8WindowPartial::KeyboardConstructorGetterCallback(
    v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_Keyboard_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, V8Keyboard::GetWrapperTypeInfo());
}

void V8WindowPartial::KeyboardLayoutMapConstructorGetterCallback(
    v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_KeyboardLayoutMap_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, V8KeyboardLayoutMap::GetWrapperTypeInfo());
}

void V8WindowPartial::LockConstructorGetterCallback(
    v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_Lock_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, V8Lock::GetWrapperTypeInfo());
}

void V8WindowPartial::LockManagerConstructorGetterCallback(
    v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_LockManager_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, V8LockManager::GetWrapperTypeInfo());
}

void V8WindowPartial::MediaDeviceInfoConstructorGetterCallback(
    v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_MediaDeviceInfo_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, V8MediaDeviceInfo::GetWrapperTypeInfo());
}

void V8WindowPartial::MediaDevicesConstructorGetterCallback(
    v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_MediaDevices_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, V8MediaDevices::GetWrapperTypeInfo());
}

void V8WindowPartial::MediaKeyMessageEventConstructorGetterCallback(
    v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_MediaKeyMessageEvent_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, V8MediaKeyMessageEvent::GetWrapperTypeInfo());
}

void V8WindowPartial::MediaKeySessionConstructorGetterCallback(
    v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_MediaKeySession_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, V8MediaKeySession::GetWrapperTypeInfo());
}

void V8WindowPartial::MediaKeyStatusMapConstructorGetterCallback(
    v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_MediaKeyStatusMap_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, V8MediaKeyStatusMap::GetWrapperTypeInfo());
}

void V8WindowPartial::MediaKeySystemAccessConstructorGetterCallback(
    v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_MediaKeySystemAccess_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, V8MediaKeySystemAccess::GetWrapperTypeInfo());
}

void V8WindowPartial::MediaKeysConstructorGetterCallback(
    v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_MediaKeys_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, V8MediaKeys::GetWrapperTypeInfo());
}

void V8WindowPartial::NavigationPreloadManagerConstructorGetterCallback(
    v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_NavigationPreloadManager_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, V8NavigationPreloadManager::GetWrapperTypeInfo());
}

void V8WindowPartial::PasswordCredentialConstructorGetterCallback(
    v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_PasswordCredential_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, V8PasswordCredential::GetWrapperTypeInfo());
}

void V8WindowPartial::RTCIceTransportConstructorGetterCallback(
    v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_RTCIceTransport_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, V8RTCIceTransport::GetWrapperTypeInfo());
}

void V8WindowPartial::ServiceWorkerConstructorGetterCallback(
    v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_ServiceWorker_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, V8ServiceWorker::GetWrapperTypeInfo());
}

void V8WindowPartial::ServiceWorkerContainerConstructorGetterCallback(
    v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_ServiceWorkerContainer_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, V8ServiceWorkerContainer::GetWrapperTypeInfo());
}

void V8WindowPartial::ServiceWorkerRegistrationConstructorGetterCallback(
    v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_ServiceWorkerRegistration_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, V8ServiceWorkerRegistration::GetWrapperTypeInfo());
}

void V8WindowPartial::StorageManagerConstructorGetterCallback(
    v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_StorageManager_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, V8StorageManager::GetWrapperTypeInfo());
}

void V8WindowPartial::AnalyserNodeConstructorGetterCallback(
    v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_AnalyserNode_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, V8AnalyserNode::GetWrapperTypeInfo());
}

void V8WindowPartial::AudioBufferConstructorGetterCallback(
    v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_AudioBuffer_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, V8AudioBuffer::GetWrapperTypeInfo());
}

void V8WindowPartial::AudioBufferSourceNodeConstructorGetterCallback(
    v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_AudioBufferSourceNode_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, V8AudioBufferSourceNode::GetWrapperTypeInfo());
}

void V8WindowPartial::AudioContextConstructorGetterCallback(
    v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_AudioContext_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, V8AudioContext::GetWrapperTypeInfo());
}

void V8WindowPartial::AudioDestinationNodeConstructorGetterCallback(
    v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_AudioDestinationNode_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, V8AudioDestinationNode::GetWrapperTypeInfo());
}

void V8WindowPartial::AudioListenerConstructorGetterCallback(
    v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_AudioListener_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, V8AudioListener::GetWrapperTypeInfo());
}

void V8WindowPartial::AudioNodeConstructorGetterCallback(
    v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_AudioNode_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, V8AudioNode::GetWrapperTypeInfo());
}

void V8WindowPartial::AudioParamConstructorGetterCallback(
    v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_AudioParam_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, V8AudioParam::GetWrapperTypeInfo());
}

void V8WindowPartial::AudioParamMapConstructorGetterCallback(
    v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_AudioParamMap_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, V8AudioParamMap::GetWrapperTypeInfo());
}

void V8WindowPartial::AudioProcessingEventConstructorGetterCallback(
    v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_AudioProcessingEvent_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, V8AudioProcessingEvent::GetWrapperTypeInfo());
}

void V8WindowPartial::AudioScheduledSourceNodeConstructorGetterCallback(
    v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_AudioScheduledSourceNode_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, V8AudioScheduledSourceNode::GetWrapperTypeInfo());
}

void V8WindowPartial::AudioWorkletNodeConstructorGetterCallback(
    v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_AudioWorkletNode_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, V8AudioWorkletNode::GetWrapperTypeInfo());
}

void V8WindowPartial::BaseAudioContextConstructorGetterCallback(
    v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_BaseAudioContext_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, V8BaseAudioContext::GetWrapperTypeInfo());
}

void V8WindowPartial::BatteryManagerConstructorGetterCallback(
    v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_BatteryManager_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, V8BatteryManager::GetWrapperTypeInfo());
}

void V8WindowPartial::BeforeInstallPromptEventConstructorGetterCallback(
    v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_BeforeInstallPromptEvent_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, V8BeforeInstallPromptEvent::GetWrapperTypeInfo());
}

void V8WindowPartial::BiquadFilterNodeConstructorGetterCallback(
    v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_BiquadFilterNode_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, V8BiquadFilterNode::GetWrapperTypeInfo());
}

void V8WindowPartial::BlobEventConstructorGetterCallback(
    v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_BlobEvent_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, V8BlobEvent::GetWrapperTypeInfo());
}

void V8WindowPartial::BroadcastChannelConstructorGetterCallback(
    v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_BroadcastChannel_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, V8BroadcastChannel::GetWrapperTypeInfo());
}

void V8WindowPartial::CanvasCaptureMediaStreamTrackConstructorGetterCallback(
    v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_CanvasCaptureMediaStreamTrack_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, V8CanvasCaptureMediaStreamTrack::GetWrapperTypeInfo());
}

void V8WindowPartial::CanvasRenderingContext2DConstructorGetterCallback(
    v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_CanvasRenderingContext2D_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, V8CanvasRenderingContext2D::GetWrapperTypeInfo());
}

void V8WindowPartial::ChannelMergerNodeConstructorGetterCallback(
    v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_ChannelMergerNode_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, V8ChannelMergerNode::GetWrapperTypeInfo());
}

void V8WindowPartial::ChannelSplitterNodeConstructorGetterCallback(
    v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_ChannelSplitterNode_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, V8ChannelSplitterNode::GetWrapperTypeInfo());
}

void V8WindowPartial::CloseEventConstructorGetterCallback(
    v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_CloseEvent_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, V8CloseEvent::GetWrapperTypeInfo());
}

void V8WindowPartial::ConstantSourceNodeConstructorGetterCallback(
    v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_ConstantSourceNode_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, V8ConstantSourceNode::GetWrapperTypeInfo());
}

void V8WindowPartial::ConvolverNodeConstructorGetterCallback(
    v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_ConvolverNode_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, V8ConvolverNode::GetWrapperTypeInfo());
}

void V8WindowPartial::CryptoConstructorGetterCallback(
    v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_Crypto_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, V8Crypto::GetWrapperTypeInfo());
}

void V8WindowPartial::CryptoKeyConstructorGetterCallback(
    v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_CryptoKey_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, V8CryptoKey::GetWrapperTypeInfo());
}

void V8WindowPartial::DOMErrorConstructorGetterCallback(
    v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_DOMError_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, V8DOMError::GetWrapperTypeInfo());
}

void V8WindowPartial::DelayNodeConstructorGetterCallback(
    v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_DelayNode_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, V8DelayNode::GetWrapperTypeInfo());
}

void V8WindowPartial::DynamicsCompressorNodeConstructorGetterCallback(
    v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_DynamicsCompressorNode_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, V8DynamicsCompressorNode::GetWrapperTypeInfo());
}

void V8WindowPartial::EventSourceConstructorGetterCallback(
    v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_EventSource_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, V8EventSource::GetWrapperTypeInfo());
}

void V8WindowPartial::GainNodeConstructorGetterCallback(
    v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_GainNode_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, V8GainNode::GetWrapperTypeInfo());
}

void V8WindowPartial::GamepadButtonConstructorGetterCallback(
    v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_GamepadButton_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, V8GamepadButton::GetWrapperTypeInfo());
}

void V8WindowPartial::GamepadConstructorGetterCallback(
    v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_Gamepad_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, V8Gamepad::GetWrapperTypeInfo());
}

void V8WindowPartial::GamepadEventConstructorGetterCallback(
    v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_GamepadEvent_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, V8GamepadEvent::GetWrapperTypeInfo());
}

void V8WindowPartial::GamepadHapticActuatorConstructorGetterCallback(
    v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_GamepadHapticActuator_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, V8GamepadHapticActuator::GetWrapperTypeInfo());
}

void V8WindowPartial::IDBCursorConstructorGetterCallback(
    v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_IDBCursor_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, V8IDBCursor::GetWrapperTypeInfo());
}

void V8WindowPartial::IDBCursorWithValueConstructorGetterCallback(
    v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_IDBCursorWithValue_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, V8IDBCursorWithValue::GetWrapperTypeInfo());
}

void V8WindowPartial::IDBDatabaseConstructorGetterCallback(
    v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_IDBDatabase_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, V8IDBDatabase::GetWrapperTypeInfo());
}

void V8WindowPartial::IDBFactoryConstructorGetterCallback(
    v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_IDBFactory_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, V8IDBFactory::GetWrapperTypeInfo());
}

void V8WindowPartial::IDBIndexConstructorGetterCallback(
    v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_IDBIndex_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, V8IDBIndex::GetWrapperTypeInfo());
}

void V8WindowPartial::IDBKeyRangeConstructorGetterCallback(
    v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_IDBKeyRange_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, V8IDBKeyRange::GetWrapperTypeInfo());
}

void V8WindowPartial::IDBObjectStoreConstructorGetterCallback(
    v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_IDBObjectStore_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, V8IDBObjectStore::GetWrapperTypeInfo());
}

void V8WindowPartial::IDBOpenDBRequestConstructorGetterCallback(
    v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_IDBOpenDBRequest_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, V8IDBOpenDBRequest::GetWrapperTypeInfo());
}

void V8WindowPartial::IDBRequestConstructorGetterCallback(
    v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_IDBRequest_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, V8IDBRequest::GetWrapperTypeInfo());
}

void V8WindowPartial::IDBTransactionConstructorGetterCallback(
    v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_IDBTransaction_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, V8IDBTransaction::GetWrapperTypeInfo());
}

void V8WindowPartial::IDBVersionChangeEventConstructorGetterCallback(
    v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_IDBVersionChangeEvent_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, V8IDBVersionChangeEvent::GetWrapperTypeInfo());
}

void V8WindowPartial::IIRFilterNodeConstructorGetterCallback(
    v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_IIRFilterNode_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, V8IIRFilterNode::GetWrapperTypeInfo());
}

void V8WindowPartial::ImageBitmapRenderingContextConstructorGetterCallback(
    v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_ImageBitmapRenderingContext_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, V8ImageBitmapRenderingContext::GetWrapperTypeInfo());
}

void V8WindowPartial::ImageCaptureConstructorGetterCallback(
    v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_ImageCapture_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, V8ImageCapture::GetWrapperTypeInfo());
}

void V8WindowPartial::InputDeviceInfoConstructorGetterCallback(
    v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_InputDeviceInfo_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, V8InputDeviceInfo::GetWrapperTypeInfo());
}

void V8WindowPartial::MIDIAccessConstructorGetterCallback(
    v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_MIDIAccess_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, V8MIDIAccess::GetWrapperTypeInfo());
}

void V8WindowPartial::MIDIConnectionEventConstructorGetterCallback(
    v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_MIDIConnectionEvent_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, V8MIDIConnectionEvent::GetWrapperTypeInfo());
}

void V8WindowPartial::MIDIInputConstructorGetterCallback(
    v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_MIDIInput_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, V8MIDIInput::GetWrapperTypeInfo());
}

void V8WindowPartial::MIDIInputMapConstructorGetterCallback(
    v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_MIDIInputMap_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, V8MIDIInputMap::GetWrapperTypeInfo());
}

void V8WindowPartial::MIDIMessageEventConstructorGetterCallback(
    v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_MIDIMessageEvent_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, V8MIDIMessageEvent::GetWrapperTypeInfo());
}

void V8WindowPartial::MIDIOutputConstructorGetterCallback(
    v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_MIDIOutput_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, V8MIDIOutput::GetWrapperTypeInfo());
}

void V8WindowPartial::MIDIOutputMapConstructorGetterCallback(
    v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_MIDIOutputMap_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, V8MIDIOutputMap::GetWrapperTypeInfo());
}

void V8WindowPartial::MIDIPortConstructorGetterCallback(
    v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_MIDIPort_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, V8MIDIPort::GetWrapperTypeInfo());
}

void V8WindowPartial::MediaCapabilitiesConstructorGetterCallback(
    v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_MediaCapabilities_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, V8MediaCapabilities::GetWrapperTypeInfo());
}

void V8WindowPartial::MediaElementAudioSourceNodeConstructorGetterCallback(
    v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_MediaElementAudioSourceNode_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, V8MediaElementAudioSourceNode::GetWrapperTypeInfo());
}

void V8WindowPartial::MediaEncryptedEventConstructorGetterCallback(
    v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_MediaEncryptedEvent_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, V8MediaEncryptedEvent::GetWrapperTypeInfo());
}

void V8WindowPartial::MediaRecorderConstructorGetterCallback(
    v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_MediaRecorder_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, V8MediaRecorder::GetWrapperTypeInfo());
}

void V8WindowPartial::MediaSettingsRangeConstructorGetterCallback(
    v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_MediaSettingsRange_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, V8MediaSettingsRange::GetWrapperTypeInfo());
}

void V8WindowPartial::MediaSourceConstructorGetterCallback(
    v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_MediaSource_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, V8MediaSource::GetWrapperTypeInfo());
}

void V8WindowPartial::MediaStreamAudioDestinationNodeConstructorGetterCallback(
    v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_MediaStreamAudioDestinationNode_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, V8MediaStreamAudioDestinationNode::GetWrapperTypeInfo());
}

void V8WindowPartial::MediaStreamAudioSourceNodeConstructorGetterCallback(
    v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_MediaStreamAudioSourceNode_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, V8MediaStreamAudioSourceNode::GetWrapperTypeInfo());
}

void V8WindowPartial::MediaStreamConstructorGetterCallback(
    v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_MediaStream_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, V8MediaStream::GetWrapperTypeInfo());
}

void V8WindowPartial::MediaStreamEventConstructorGetterCallback(
    v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_MediaStreamEvent_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, V8MediaStreamEvent::GetWrapperTypeInfo());
}

void V8WindowPartial::MediaStreamTrackConstructorGetterCallback(
    v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_MediaStreamTrack_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, V8MediaStreamTrack::GetWrapperTypeInfo());
}

void V8WindowPartial::MediaStreamTrackEventConstructorGetterCallback(
    v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_MediaStreamTrackEvent_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, V8MediaStreamTrackEvent::GetWrapperTypeInfo());
}

void V8WindowPartial::MimeTypeArrayConstructorGetterCallback(
    v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_MimeTypeArray_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, V8MimeTypeArray::GetWrapperTypeInfo());
}

void V8WindowPartial::MimeTypeConstructorGetterCallback(
    v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_MimeType_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, V8MimeType::GetWrapperTypeInfo());
}

void V8WindowPartial::NetworkInformationConstructorGetterCallback(
    v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_NetworkInformation_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, V8NetworkInformation::GetWrapperTypeInfo());
}

void V8WindowPartial::OfflineAudioCompletionEventConstructorGetterCallback(
    v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_OfflineAudioCompletionEvent_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, V8OfflineAudioCompletionEvent::GetWrapperTypeInfo());
}

void V8WindowPartial::OfflineAudioContextConstructorGetterCallback(
    v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_OfflineAudioContext_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, V8OfflineAudioContext::GetWrapperTypeInfo());
}

void V8WindowPartial::OscillatorNodeConstructorGetterCallback(
    v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_OscillatorNode_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, V8OscillatorNode::GetWrapperTypeInfo());
}

void V8WindowPartial::OverconstrainedErrorConstructorGetterCallback(
    v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_OverconstrainedError_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, V8OverconstrainedError::GetWrapperTypeInfo());
}

void V8WindowPartial::PannerNodeConstructorGetterCallback(
    v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_PannerNode_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, V8PannerNode::GetWrapperTypeInfo());
}

void V8WindowPartial::PeriodicWaveConstructorGetterCallback(
    v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_PeriodicWave_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, V8PeriodicWave::GetWrapperTypeInfo());
}

void V8WindowPartial::PhotoCapabilitiesConstructorGetterCallback(
    v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_PhotoCapabilities_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, V8PhotoCapabilities::GetWrapperTypeInfo());
}

void V8WindowPartial::PluginArrayConstructorGetterCallback(
    v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_PluginArray_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, V8PluginArray::GetWrapperTypeInfo());
}

void V8WindowPartial::PluginConstructorGetterCallback(
    v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_Plugin_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, V8Plugin::GetWrapperTypeInfo());
}

void V8WindowPartial::RTCCertificateConstructorGetterCallback(
    v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_RTCCertificate_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, V8RTCCertificate::GetWrapperTypeInfo());
}

void V8WindowPartial::RTCDTMFSenderConstructorGetterCallback(
    v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_RTCDTMFSender_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, V8RTCDTMFSender::GetWrapperTypeInfo());
}

void V8WindowPartial::RTCDTMFToneChangeEventConstructorGetterCallback(
    v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_RTCDTMFToneChangeEvent_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, V8RTCDTMFToneChangeEvent::GetWrapperTypeInfo());
}

void V8WindowPartial::RTCDataChannelConstructorGetterCallback(
    v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_RTCDataChannel_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, V8RTCDataChannel::GetWrapperTypeInfo());
}

void V8WindowPartial::RTCDataChannelEventConstructorGetterCallback(
    v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_RTCDataChannelEvent_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, V8RTCDataChannelEvent::GetWrapperTypeInfo());
}

void V8WindowPartial::RTCErrorConstructorGetterCallback(
    v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_RTCError_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, V8RTCError::GetWrapperTypeInfo());
}

void V8WindowPartial::RTCErrorEventConstructorGetterCallback(
    v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_RTCErrorEvent_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, V8RTCErrorEvent::GetWrapperTypeInfo());
}

void V8WindowPartial::RTCIceCandidateConstructorGetterCallback(
    v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_RTCIceCandidate_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, V8RTCIceCandidate::GetWrapperTypeInfo());
}

void V8WindowPartial::RTCPeerConnectionConstructorGetterCallback(
    v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_RTCPeerConnection_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, V8RTCPeerConnection::GetWrapperTypeInfo());
}

void V8WindowPartial::RTCPeerConnectionIceEventConstructorGetterCallback(
    v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_RTCPeerConnectionIceEvent_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, V8RTCPeerConnectionIceEvent::GetWrapperTypeInfo());
}

void V8WindowPartial::RTCRtpReceiverConstructorGetterCallback(
    v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_RTCRtpReceiver_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, V8RTCRtpReceiver::GetWrapperTypeInfo());
}

void V8WindowPartial::RTCRtpSenderConstructorGetterCallback(
    v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_RTCRtpSender_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, V8RTCRtpSender::GetWrapperTypeInfo());
}

void V8WindowPartial::RTCRtpTransceiverConstructorGetterCallback(
    v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_RTCRtpTransceiver_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, V8RTCRtpTransceiver::GetWrapperTypeInfo());
}

void V8WindowPartial::RTCSessionDescriptionConstructorGetterCallback(
    v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_RTCSessionDescription_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, V8RTCSessionDescription::GetWrapperTypeInfo());
}

void V8WindowPartial::RTCStatsReportConstructorGetterCallback(
    v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_RTCStatsReport_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, V8RTCStatsReport::GetWrapperTypeInfo());
}

void V8WindowPartial::RTCTrackEventConstructorGetterCallback(
    v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_RTCTrackEvent_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, V8RTCTrackEvent::GetWrapperTypeInfo());
}

void V8WindowPartial::ScreenOrientationConstructorGetterCallback(
    v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_ScreenOrientation_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, V8ScreenOrientation::GetWrapperTypeInfo());
}

void V8WindowPartial::ScriptProcessorNodeConstructorGetterCallback(
    v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_ScriptProcessorNode_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, V8ScriptProcessorNode::GetWrapperTypeInfo());
}

void V8WindowPartial::SourceBufferConstructorGetterCallback(
    v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_SourceBuffer_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, V8SourceBuffer::GetWrapperTypeInfo());
}

void V8WindowPartial::SourceBufferListConstructorGetterCallback(
    v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_SourceBufferList_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, V8SourceBufferList::GetWrapperTypeInfo());
}

void V8WindowPartial::StereoPannerNodeConstructorGetterCallback(
    v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_StereoPannerNode_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, V8StereoPannerNode::GetWrapperTypeInfo());
}

void V8WindowPartial::StorageConstructorGetterCallback(
    v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_Storage_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, V8Storage::GetWrapperTypeInfo());
}

void V8WindowPartial::StorageEventConstructorGetterCallback(
    v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_StorageEvent_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, V8StorageEvent::GetWrapperTypeInfo());
}

void V8WindowPartial::SubtleCryptoConstructorGetterCallback(
    v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_SubtleCrypto_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, V8SubtleCrypto::GetWrapperTypeInfo());
}

void V8WindowPartial::SyncManagerConstructorGetterCallback(
    v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_SyncManager_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, V8SyncManager::GetWrapperTypeInfo());
}

void V8WindowPartial::TextDecoderConstructorGetterCallback(
    v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_TextDecoder_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, V8TextDecoder::GetWrapperTypeInfo());
}

void V8WindowPartial::TextDecoderStreamConstructorGetterCallback(
    v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_TextDecoderStream_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, V8TextDecoderStream::GetWrapperTypeInfo());
}

void V8WindowPartial::TextEncoderConstructorGetterCallback(
    v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_TextEncoder_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, V8TextEncoder::GetWrapperTypeInfo());
}

void V8WindowPartial::TextEncoderStreamConstructorGetterCallback(
    v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_TextEncoderStream_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, V8TextEncoderStream::GetWrapperTypeInfo());
}

void V8WindowPartial::WaveShaperNodeConstructorGetterCallback(
    v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_WaveShaperNode_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, V8WaveShaperNode::GetWrapperTypeInfo());
}

void V8WindowPartial::WebGLContextEventConstructorGetterCallback(
    v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_WebGLContextEvent_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, V8WebGLContextEvent::GetWrapperTypeInfo());
}

void V8WindowPartial::WebSocketConstructorGetterCallback(
    v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_WebSocket_ConstructorGetterCallback");

  V8ConstructorAttributeGetter(property, info, V8WebSocket::GetWrapperTypeInfo());
}

void V8WindowPartial::OnappinstalledAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_onappinstalled_Getter");

  dom_window_partial_v8_internal::OnappinstalledAttributeGetter(info);
}

void V8WindowPartial::OnappinstalledAttributeSetterCallback(
    const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_onappinstalled_Setter");

  v8::Local<v8::Value> v8_value = info[0];

  dom_window_partial_v8_internal::OnappinstalledAttributeSetter(v8_value, info);
}

void V8WindowPartial::OnbeforeinstallpromptAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_onbeforeinstallprompt_Getter");

  dom_window_partial_v8_internal::OnbeforeinstallpromptAttributeGetter(info);
}

void V8WindowPartial::OnbeforeinstallpromptAttributeSetterCallback(
    const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_onbeforeinstallprompt_Setter");

  v8::Local<v8::Value> v8_value = info[0];

  dom_window_partial_v8_internal::OnbeforeinstallpromptAttributeSetter(v8_value, info);
}

void V8WindowPartial::CachesAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_caches_Getter");

  ExecutionContext* execution_context_for_measurement = CurrentExecutionContext(info.GetIsolate());
  UseCounter::Count(execution_context_for_measurement, WebFeature::kGlobalCacheStorage);

  dom_window_partial_v8_internal::CachesAttributeGetter(info);
}

void V8WindowPartial::CookieStoreAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_cookieStore_Getter");

  dom_window_partial_v8_internal::CookieStoreAttributeGetter(info);
}

void V8WindowPartial::CookieStoreAttributeSetterCallback(
    const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_cookieStore_Setter");

  v8::Local<v8::Value> v8_value = info[0];

  dom_window_partial_v8_internal::CookieStoreAttributeSetter(v8_value, info);
}

void V8WindowPartial::CryptoAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_crypto_Getter");

  dom_window_partial_v8_internal::CryptoAttributeGetter(info);
}

void V8WindowPartial::OndevicemotionAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_ondevicemotion_Getter");

  dom_window_partial_v8_internal::OndevicemotionAttributeGetter(info);
}

void V8WindowPartial::OndevicemotionAttributeSetterCallback(
    const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_ondevicemotion_Setter");

  v8::Local<v8::Value> v8_value = info[0];

  dom_window_partial_v8_internal::OndevicemotionAttributeSetter(v8_value, info);
}

void V8WindowPartial::OndeviceorientationAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_ondeviceorientation_Getter");

  dom_window_partial_v8_internal::OndeviceorientationAttributeGetter(info);
}

void V8WindowPartial::OndeviceorientationAttributeSetterCallback(
    const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_ondeviceorientation_Setter");

  v8::Local<v8::Value> v8_value = info[0];

  dom_window_partial_v8_internal::OndeviceorientationAttributeSetter(v8_value, info);
}

void V8WindowPartial::OndeviceorientationabsoluteAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_ondeviceorientationabsolute_Getter");

  dom_window_partial_v8_internal::OndeviceorientationabsoluteAttributeGetter(info);
}

void V8WindowPartial::OndeviceorientationabsoluteAttributeSetterCallback(
    const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_ondeviceorientationabsolute_Setter");

  v8::Local<v8::Value> v8_value = info[0];

  dom_window_partial_v8_internal::OndeviceorientationabsoluteAttributeSetter(v8_value, info);
}

void V8WindowPartial::IndexedDBAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_indexedDB_Getter");

  dom_window_partial_v8_internal::IndexedDBAttributeGetter(info);
}

void V8WindowPartial::WebkitMediaStreamConstructorGetterCallback(
    v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_webkitMediaStream_ConstructorGetterCallback");

  ExecutionContext* execution_context_for_measurement = CurrentExecutionContext(info.GetIsolate());
  UseCounter::Count(execution_context_for_measurement, WebFeature::kV8Window_WebkitMediaStream_ConstructorGetter);

  V8ConstructorAttributeGetter(property, info, V8MediaStream::GetWrapperTypeInfo());
}

void V8WindowPartial::WebkitRTCPeerConnectionConstructorGetterCallback(
    v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_webkitRTCPeerConnection_ConstructorGetterCallback");

  ExecutionContext* execution_context_for_measurement = CurrentExecutionContext(info.GetIsolate());
  UseCounter::Count(execution_context_for_measurement, WebFeature::kV8Window_WebkitRTCPeerConnection_ConstructorGetter);

  V8ConstructorAttributeGetter(property, info, V8RTCPeerConnection::GetWrapperTypeInfo());
}

void V8WindowPartial::WebkitStorageInfoAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_webkitStorageInfo_Getter");

  Deprecation::CountDeprecation(CurrentExecutionContext(info.GetIsolate()), WebFeature::kPrefixedStorageInfo);

  dom_window_partial_v8_internal::WebkitStorageInfoAttributeGetter(info);
}

void V8WindowPartial::WebkitSpeechGrammarConstructorGetterCallback(
    v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_webkitSpeechGrammar_ConstructorGetterCallback");

  ExecutionContext* execution_context_for_measurement = CurrentExecutionContext(info.GetIsolate());
  UseCounter::Count(execution_context_for_measurement, WebFeature::kV8Window_WebkitSpeechGrammar_ConstructorGetter);

  V8ConstructorAttributeGetter(property, info, V8SpeechGrammar::GetWrapperTypeInfo());
}

void V8WindowPartial::WebkitSpeechGrammarListConstructorGetterCallback(
    v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_webkitSpeechGrammarList_ConstructorGetterCallback");

  ExecutionContext* execution_context_for_measurement = CurrentExecutionContext(info.GetIsolate());
  UseCounter::Count(execution_context_for_measurement, WebFeature::kV8Window_WebkitSpeechGrammarList_ConstructorGetter);

  V8ConstructorAttributeGetter(property, info, V8SpeechGrammarList::GetWrapperTypeInfo());
}

void V8WindowPartial::WebkitSpeechRecognitionConstructorGetterCallback(
    v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_webkitSpeechRecognition_ConstructorGetterCallback");

  ExecutionContext* execution_context_for_measurement = CurrentExecutionContext(info.GetIsolate());
  UseCounter::Count(execution_context_for_measurement, WebFeature::kV8Window_WebkitSpeechRecognition_ConstructorGetter);

  V8ConstructorAttributeGetter(property, info, V8SpeechRecognition::GetWrapperTypeInfo());
}

void V8WindowPartial::WebkitSpeechRecognitionErrorConstructorGetterCallback(
    v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_webkitSpeechRecognitionError_ConstructorGetterCallback");

  ExecutionContext* execution_context_for_measurement = CurrentExecutionContext(info.GetIsolate());
  UseCounter::Count(execution_context_for_measurement, WebFeature::kV8Window_WebkitSpeechRecognitionError_ConstructorGetter);

  V8ConstructorAttributeGetter(property, info, V8SpeechRecognitionError::GetWrapperTypeInfo());
}

void V8WindowPartial::WebkitSpeechRecognitionEventConstructorGetterCallback(
    v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_webkitSpeechRecognitionEvent_ConstructorGetterCallback");

  ExecutionContext* execution_context_for_measurement = CurrentExecutionContext(info.GetIsolate());
  UseCounter::Count(execution_context_for_measurement, WebFeature::kV8Window_WebkitSpeechRecognitionEvent_ConstructorGetter);

  V8ConstructorAttributeGetter(property, info, V8SpeechRecognitionEvent::GetWrapperTypeInfo());
}

void V8WindowPartial::SpeechSynthesisAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_speechSynthesis_Getter");

  ExecutionContext* execution_context_for_measurement = CurrentExecutionContext(info.GetIsolate());
  UseCounter::Count(execution_context_for_measurement, WebFeature::kV8Window_SpeechSynthesis_AttributeGetter);

  dom_window_partial_v8_internal::SpeechSynthesisAttributeGetter(info);
}

void V8WindowPartial::SessionStorageAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_sessionStorage_Getter");

  ScriptState* script_state = ScriptState::ForRelevantRealm(info);
  V8PerContextData* context_data = script_state->PerContextData();
  if (script_state->World().IsIsolatedWorld() && context_data && context_data->ActivityLogger()) {
    context_data->ActivityLogger()->LogGetter("Window.sessionStorage");
  }

  dom_window_partial_v8_internal::SessionStorageAttributeGetter(info);
}

void V8WindowPartial::LocalStorageAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_localStorage_Getter");

  ScriptState* script_state = ScriptState::ForRelevantRealm(info);
  V8PerContextData* context_data = script_state->PerContextData();
  if (script_state->World().IsIsolatedWorld() && context_data && context_data->ActivityLogger()) {
    context_data->ActivityLogger()->LogGetter("Window.localStorage");
  }

  dom_window_partial_v8_internal::LocalStorageAttributeGetter(info);
}

void V8WindowPartial::WebkitRequestFileSystemMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_webkitRequestFileSystem");

  ExecutionContext* execution_context_for_measurement = CurrentExecutionContext(info.GetIsolate());
  UseCounter::Count(execution_context_for_measurement, WebFeature::kRequestFileSystem);
  dom_window_partial_v8_internal::WebkitRequestFileSystemMethod(info);
}

void V8WindowPartial::WebkitResolveLocalFileSystemURLMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_webkitResolveLocalFileSystemURL");

  dom_window_partial_v8_internal::WebkitResolveLocalFileSystemURLMethod(info);
}

void V8WindowPartial::ChooseFileSystemEntriesMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_chooseFileSystemEntries");

  dom_window_partial_v8_internal::ChooseFileSystemEntriesMethod(info);
}

void V8WindowPartial::OpenDatabaseMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindow_openDatabase");

  ExecutionContext* execution_context_for_measurement = CurrentExecutionContext(info.GetIsolate());
  UseCounter::Count(execution_context_for_measurement, WebFeature::kOpenWebDatabase);
  ScriptState* script_state = ScriptState::ForRelevantRealm(info);
  V8PerContextData* context_data = script_state->PerContextData();
  if (context_data && context_data->ActivityLogger()) {
    context_data->ActivityLogger()->LogMethod("Window.openDatabase", info);
  }
  dom_window_partial_v8_internal::OpenDatabaseMethod(info);
}

// Suppress warning: global constructors, because AttributeConfiguration is trivial
// and does not depend on another global objects.
#if defined(COMPONENT_BUILD) && defined(WIN32) && defined(__clang__)
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wglobal-constructors"
#endif
static constexpr V8DOMConfiguration::AttributeConfiguration kV8WindowAttributes[] = {
    { "AnalyserNode", V8WindowPartial::AnalyserNodeConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kReplaceWithDataProperty, V8DOMConfiguration::kAllWorlds },
    { "AudioBuffer", V8WindowPartial::AudioBufferConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kReplaceWithDataProperty, V8DOMConfiguration::kAllWorlds },
    { "AudioBufferSourceNode", V8WindowPartial::AudioBufferSourceNodeConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kReplaceWithDataProperty, V8DOMConfiguration::kAllWorlds },
    { "AudioContext", V8WindowPartial::AudioContextConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kReplaceWithDataProperty, V8DOMConfiguration::kAllWorlds },
    { "AudioDestinationNode", V8WindowPartial::AudioDestinationNodeConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kReplaceWithDataProperty, V8DOMConfiguration::kAllWorlds },
    { "AudioListener", V8WindowPartial::AudioListenerConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kReplaceWithDataProperty, V8DOMConfiguration::kAllWorlds },
    { "AudioNode", V8WindowPartial::AudioNodeConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kReplaceWithDataProperty, V8DOMConfiguration::kAllWorlds },
    { "AudioParam", V8WindowPartial::AudioParamConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kReplaceWithDataProperty, V8DOMConfiguration::kAllWorlds },
    { "AudioParamMap", V8WindowPartial::AudioParamMapConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kReplaceWithDataProperty, V8DOMConfiguration::kAllWorlds },
    { "AudioProcessingEvent", V8WindowPartial::AudioProcessingEventConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kReplaceWithDataProperty, V8DOMConfiguration::kAllWorlds },
    { "AudioScheduledSourceNode", V8WindowPartial::AudioScheduledSourceNodeConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kReplaceWithDataProperty, V8DOMConfiguration::kAllWorlds },
    { "AudioWorkletNode", V8WindowPartial::AudioWorkletNodeConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kReplaceWithDataProperty, V8DOMConfiguration::kAllWorlds },
    { "BaseAudioContext", V8WindowPartial::BaseAudioContextConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kReplaceWithDataProperty, V8DOMConfiguration::kAllWorlds },
    { "BatteryManager", V8WindowPartial::BatteryManagerConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kReplaceWithDataProperty, V8DOMConfiguration::kAllWorlds },
    { "BeforeInstallPromptEvent", V8WindowPartial::BeforeInstallPromptEventConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kReplaceWithDataProperty, V8DOMConfiguration::kAllWorlds },
    { "BiquadFilterNode", V8WindowPartial::BiquadFilterNodeConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kReplaceWithDataProperty, V8DOMConfiguration::kAllWorlds },
    { "BlobEvent", V8WindowPartial::BlobEventConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kReplaceWithDataProperty, V8DOMConfiguration::kAllWorlds },
    { "BroadcastChannel", V8WindowPartial::BroadcastChannelConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kReplaceWithDataProperty, V8DOMConfiguration::kAllWorlds },
    { "CanvasCaptureMediaStreamTrack", V8WindowPartial::CanvasCaptureMediaStreamTrackConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kReplaceWithDataProperty, V8DOMConfiguration::kAllWorlds },
    { "CanvasRenderingContext2D", V8WindowPartial::CanvasRenderingContext2DConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kReplaceWithDataProperty, V8DOMConfiguration::kAllWorlds },
    { "ChannelMergerNode", V8WindowPartial::ChannelMergerNodeConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kReplaceWithDataProperty, V8DOMConfiguration::kAllWorlds },
    { "ChannelSplitterNode", V8WindowPartial::ChannelSplitterNodeConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kReplaceWithDataProperty, V8DOMConfiguration::kAllWorlds },
    { "CloseEvent", V8WindowPartial::CloseEventConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kReplaceWithDataProperty, V8DOMConfiguration::kAllWorlds },
    { "ConstantSourceNode", V8WindowPartial::ConstantSourceNodeConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kReplaceWithDataProperty, V8DOMConfiguration::kAllWorlds },
    { "ConvolverNode", V8WindowPartial::ConvolverNodeConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kReplaceWithDataProperty, V8DOMConfiguration::kAllWorlds },
    { "Crypto", V8WindowPartial::CryptoConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kReplaceWithDataProperty, V8DOMConfiguration::kAllWorlds },
    { "CryptoKey", V8WindowPartial::CryptoKeyConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kReplaceWithDataProperty, V8DOMConfiguration::kAllWorlds },
    { "DOMError", V8WindowPartial::DOMErrorConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kReplaceWithDataProperty, V8DOMConfiguration::kAllWorlds },
    { "DelayNode", V8WindowPartial::DelayNodeConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kReplaceWithDataProperty, V8DOMConfiguration::kAllWorlds },
    { "DynamicsCompressorNode", V8WindowPartial::DynamicsCompressorNodeConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kReplaceWithDataProperty, V8DOMConfiguration::kAllWorlds },
    { "EventSource", V8WindowPartial::EventSourceConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kReplaceWithDataProperty, V8DOMConfiguration::kAllWorlds },
    { "GainNode", V8WindowPartial::GainNodeConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kReplaceWithDataProperty, V8DOMConfiguration::kAllWorlds },
    { "GamepadButton", V8WindowPartial::GamepadButtonConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kReplaceWithDataProperty, V8DOMConfiguration::kAllWorlds },
    { "Gamepad", V8WindowPartial::GamepadConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kReplaceWithDataProperty, V8DOMConfiguration::kAllWorlds },
    { "GamepadEvent", V8WindowPartial::GamepadEventConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kReplaceWithDataProperty, V8DOMConfiguration::kAllWorlds },
    { "GamepadHapticActuator", V8WindowPartial::GamepadHapticActuatorConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kReplaceWithDataProperty, V8DOMConfiguration::kAllWorlds },
    { "IDBCursor", V8WindowPartial::IDBCursorConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kReplaceWithDataProperty, V8DOMConfiguration::kAllWorlds },
    { "IDBCursorWithValue", V8WindowPartial::IDBCursorWithValueConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kReplaceWithDataProperty, V8DOMConfiguration::kAllWorlds },
    { "IDBDatabase", V8WindowPartial::IDBDatabaseConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kReplaceWithDataProperty, V8DOMConfiguration::kAllWorlds },
    { "IDBFactory", V8WindowPartial::IDBFactoryConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kReplaceWithDataProperty, V8DOMConfiguration::kAllWorlds },
    { "IDBIndex", V8WindowPartial::IDBIndexConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kReplaceWithDataProperty, V8DOMConfiguration::kAllWorlds },
    { "IDBKeyRange", V8WindowPartial::IDBKeyRangeConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kReplaceWithDataProperty, V8DOMConfiguration::kAllWorlds },
    { "IDBObjectStore", V8WindowPartial::IDBObjectStoreConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kReplaceWithDataProperty, V8DOMConfiguration::kAllWorlds },
    { "IDBOpenDBRequest", V8WindowPartial::IDBOpenDBRequestConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kReplaceWithDataProperty, V8DOMConfiguration::kAllWorlds },
    { "IDBRequest", V8WindowPartial::IDBRequestConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kReplaceWithDataProperty, V8DOMConfiguration::kAllWorlds },
    { "IDBTransaction", V8WindowPartial::IDBTransactionConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kReplaceWithDataProperty, V8DOMConfiguration::kAllWorlds },
    { "IDBVersionChangeEvent", V8WindowPartial::IDBVersionChangeEventConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kReplaceWithDataProperty, V8DOMConfiguration::kAllWorlds },
    { "IIRFilterNode", V8WindowPartial::IIRFilterNodeConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kReplaceWithDataProperty, V8DOMConfiguration::kAllWorlds },
    { "ImageBitmapRenderingContext", V8WindowPartial::ImageBitmapRenderingContextConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kReplaceWithDataProperty, V8DOMConfiguration::kAllWorlds },
    { "ImageCapture", V8WindowPartial::ImageCaptureConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kReplaceWithDataProperty, V8DOMConfiguration::kAllWorlds },
    { "InputDeviceInfo", V8WindowPartial::InputDeviceInfoConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kReplaceWithDataProperty, V8DOMConfiguration::kAllWorlds },
    { "MIDIAccess", V8WindowPartial::MIDIAccessConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kReplaceWithDataProperty, V8DOMConfiguration::kAllWorlds },
    { "MIDIConnectionEvent", V8WindowPartial::MIDIConnectionEventConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kReplaceWithDataProperty, V8DOMConfiguration::kAllWorlds },
    { "MIDIInput", V8WindowPartial::MIDIInputConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kReplaceWithDataProperty, V8DOMConfiguration::kAllWorlds },
    { "MIDIInputMap", V8WindowPartial::MIDIInputMapConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kReplaceWithDataProperty, V8DOMConfiguration::kAllWorlds },
    { "MIDIMessageEvent", V8WindowPartial::MIDIMessageEventConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kReplaceWithDataProperty, V8DOMConfiguration::kAllWorlds },
    { "MIDIOutput", V8WindowPartial::MIDIOutputConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kReplaceWithDataProperty, V8DOMConfiguration::kAllWorlds },
    { "MIDIOutputMap", V8WindowPartial::MIDIOutputMapConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kReplaceWithDataProperty, V8DOMConfiguration::kAllWorlds },
    { "MIDIPort", V8WindowPartial::MIDIPortConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kReplaceWithDataProperty, V8DOMConfiguration::kAllWorlds },
    { "MediaCapabilities", V8WindowPartial::MediaCapabilitiesConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kReplaceWithDataProperty, V8DOMConfiguration::kAllWorlds },
    { "MediaElementAudioSourceNode", V8WindowPartial::MediaElementAudioSourceNodeConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kReplaceWithDataProperty, V8DOMConfiguration::kAllWorlds },
    { "MediaEncryptedEvent", V8WindowPartial::MediaEncryptedEventConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kReplaceWithDataProperty, V8DOMConfiguration::kAllWorlds },
    { "MediaRecorder", V8WindowPartial::MediaRecorderConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kReplaceWithDataProperty, V8DOMConfiguration::kAllWorlds },
    { "MediaSettingsRange", V8WindowPartial::MediaSettingsRangeConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kReplaceWithDataProperty, V8DOMConfiguration::kAllWorlds },
    { "MediaSource", V8WindowPartial::MediaSourceConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kReplaceWithDataProperty, V8DOMConfiguration::kAllWorlds },
    { "MediaStreamAudioDestinationNode", V8WindowPartial::MediaStreamAudioDestinationNodeConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kReplaceWithDataProperty, V8DOMConfiguration::kAllWorlds },
    { "MediaStreamAudioSourceNode", V8WindowPartial::MediaStreamAudioSourceNodeConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kReplaceWithDataProperty, V8DOMConfiguration::kAllWorlds },
    { "MediaStream", V8WindowPartial::MediaStreamConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kReplaceWithDataProperty, V8DOMConfiguration::kAllWorlds },
    { "MediaStreamEvent", V8WindowPartial::MediaStreamEventConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kReplaceWithDataProperty, V8DOMConfiguration::kAllWorlds },
    { "MediaStreamTrack", V8WindowPartial::MediaStreamTrackConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kReplaceWithDataProperty, V8DOMConfiguration::kAllWorlds },
    { "MediaStreamTrackEvent", V8WindowPartial::MediaStreamTrackEventConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kReplaceWithDataProperty, V8DOMConfiguration::kAllWorlds },
    { "MimeTypeArray", V8WindowPartial::MimeTypeArrayConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kReplaceWithDataProperty, V8DOMConfiguration::kAllWorlds },
    { "MimeType", V8WindowPartial::MimeTypeConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kReplaceWithDataProperty, V8DOMConfiguration::kAllWorlds },
    { "NetworkInformation", V8WindowPartial::NetworkInformationConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kReplaceWithDataProperty, V8DOMConfiguration::kAllWorlds },
    { "OfflineAudioCompletionEvent", V8WindowPartial::OfflineAudioCompletionEventConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kReplaceWithDataProperty, V8DOMConfiguration::kAllWorlds },
    { "OfflineAudioContext", V8WindowPartial::OfflineAudioContextConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kReplaceWithDataProperty, V8DOMConfiguration::kAllWorlds },
    { "OscillatorNode", V8WindowPartial::OscillatorNodeConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kReplaceWithDataProperty, V8DOMConfiguration::kAllWorlds },
    { "OverconstrainedError", V8WindowPartial::OverconstrainedErrorConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kReplaceWithDataProperty, V8DOMConfiguration::kAllWorlds },
    { "PannerNode", V8WindowPartial::PannerNodeConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kReplaceWithDataProperty, V8DOMConfiguration::kAllWorlds },
    { "PeriodicWave", V8WindowPartial::PeriodicWaveConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kReplaceWithDataProperty, V8DOMConfiguration::kAllWorlds },
    { "PhotoCapabilities", V8WindowPartial::PhotoCapabilitiesConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kReplaceWithDataProperty, V8DOMConfiguration::kAllWorlds },
    { "PluginArray", V8WindowPartial::PluginArrayConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kReplaceWithDataProperty, V8DOMConfiguration::kAllWorlds },
    { "Plugin", V8WindowPartial::PluginConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kReplaceWithDataProperty, V8DOMConfiguration::kAllWorlds },
    { "RTCCertificate", V8WindowPartial::RTCCertificateConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kReplaceWithDataProperty, V8DOMConfiguration::kAllWorlds },
    { "RTCDTMFSender", V8WindowPartial::RTCDTMFSenderConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kReplaceWithDataProperty, V8DOMConfiguration::kAllWorlds },
    { "RTCDTMFToneChangeEvent", V8WindowPartial::RTCDTMFToneChangeEventConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kReplaceWithDataProperty, V8DOMConfiguration::kAllWorlds },
    { "RTCDataChannel", V8WindowPartial::RTCDataChannelConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kReplaceWithDataProperty, V8DOMConfiguration::kAllWorlds },
    { "RTCDataChannelEvent", V8WindowPartial::RTCDataChannelEventConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kReplaceWithDataProperty, V8DOMConfiguration::kAllWorlds },
    { "RTCError", V8WindowPartial::RTCErrorConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kReplaceWithDataProperty, V8DOMConfiguration::kAllWorlds },
    { "RTCErrorEvent", V8WindowPartial::RTCErrorEventConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kReplaceWithDataProperty, V8DOMConfiguration::kAllWorlds },
    { "RTCIceCandidate", V8WindowPartial::RTCIceCandidateConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kReplaceWithDataProperty, V8DOMConfiguration::kAllWorlds },
    { "RTCPeerConnection", V8WindowPartial::RTCPeerConnectionConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kReplaceWithDataProperty, V8DOMConfiguration::kAllWorlds },
    { "RTCPeerConnectionIceEvent", V8WindowPartial::RTCPeerConnectionIceEventConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kReplaceWithDataProperty, V8DOMConfiguration::kAllWorlds },
    { "RTCRtpReceiver", V8WindowPartial::RTCRtpReceiverConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kReplaceWithDataProperty, V8DOMConfiguration::kAllWorlds },
    { "RTCRtpSender", V8WindowPartial::RTCRtpSenderConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kReplaceWithDataProperty, V8DOMConfiguration::kAllWorlds },
    { "RTCRtpTransceiver", V8WindowPartial::RTCRtpTransceiverConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kReplaceWithDataProperty, V8DOMConfiguration::kAllWorlds },
    { "RTCSessionDescription", V8WindowPartial::RTCSessionDescriptionConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kReplaceWithDataProperty, V8DOMConfiguration::kAllWorlds },
    { "RTCStatsReport", V8WindowPartial::RTCStatsReportConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kReplaceWithDataProperty, V8DOMConfiguration::kAllWorlds },
    { "RTCTrackEvent", V8WindowPartial::RTCTrackEventConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kReplaceWithDataProperty, V8DOMConfiguration::kAllWorlds },
    { "ScreenOrientation", V8WindowPartial::ScreenOrientationConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kReplaceWithDataProperty, V8DOMConfiguration::kAllWorlds },
    { "ScriptProcessorNode", V8WindowPartial::ScriptProcessorNodeConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kReplaceWithDataProperty, V8DOMConfiguration::kAllWorlds },
    { "SourceBuffer", V8WindowPartial::SourceBufferConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kReplaceWithDataProperty, V8DOMConfiguration::kAllWorlds },
    { "SourceBufferList", V8WindowPartial::SourceBufferListConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kReplaceWithDataProperty, V8DOMConfiguration::kAllWorlds },
    { "StereoPannerNode", V8WindowPartial::StereoPannerNodeConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kReplaceWithDataProperty, V8DOMConfiguration::kAllWorlds },
    { "Storage", V8WindowPartial::StorageConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kReplaceWithDataProperty, V8DOMConfiguration::kAllWorlds },
    { "StorageEvent", V8WindowPartial::StorageEventConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kReplaceWithDataProperty, V8DOMConfiguration::kAllWorlds },
    { "SubtleCrypto", V8WindowPartial::SubtleCryptoConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kReplaceWithDataProperty, V8DOMConfiguration::kAllWorlds },
    { "SyncManager", V8WindowPartial::SyncManagerConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kReplaceWithDataProperty, V8DOMConfiguration::kAllWorlds },
    { "TextDecoder", V8WindowPartial::TextDecoderConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kReplaceWithDataProperty, V8DOMConfiguration::kAllWorlds },
    { "TextDecoderStream", V8WindowPartial::TextDecoderStreamConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kReplaceWithDataProperty, V8DOMConfiguration::kAllWorlds },
    { "TextEncoder", V8WindowPartial::TextEncoderConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kReplaceWithDataProperty, V8DOMConfiguration::kAllWorlds },
    { "TextEncoderStream", V8WindowPartial::TextEncoderStreamConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kReplaceWithDataProperty, V8DOMConfiguration::kAllWorlds },
    { "WaveShaperNode", V8WindowPartial::WaveShaperNodeConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kReplaceWithDataProperty, V8DOMConfiguration::kAllWorlds },
    { "WebGLContextEvent", V8WindowPartial::WebGLContextEventConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kReplaceWithDataProperty, V8DOMConfiguration::kAllWorlds },
    { "WebSocket", V8WindowPartial::WebSocketConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kReplaceWithDataProperty, V8DOMConfiguration::kAllWorlds },
    { "webkitMediaStream", V8WindowPartial::WebkitMediaStreamConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
    { "webkitRTCPeerConnection", V8WindowPartial::WebkitRTCPeerConnectionConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
};
#if defined(COMPONENT_BUILD) && defined(WIN32) && defined(__clang__)
#pragma clang diagnostic pop
#endif

static constexpr V8DOMConfiguration::AccessorConfiguration kV8WindowAccessors[] = {
    { "onappinstalled", V8WindowPartial::OnappinstalledAttributeGetterCallback, V8WindowPartial::OnappinstalledAttributeSetterCallback, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
    { "onbeforeinstallprompt", V8WindowPartial::OnbeforeinstallpromptAttributeGetterCallback, V8WindowPartial::OnbeforeinstallpromptAttributeSetterCallback, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
    { "crypto", V8WindowPartial::CryptoAttributeGetterCallback, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
    { "ondevicemotion", V8WindowPartial::OndevicemotionAttributeGetterCallback, V8WindowPartial::OndevicemotionAttributeSetterCallback, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
    { "ondeviceorientation", V8WindowPartial::OndeviceorientationAttributeGetterCallback, V8WindowPartial::OndeviceorientationAttributeSetterCallback, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
    { "ondeviceorientationabsolute", V8WindowPartial::OndeviceorientationabsoluteAttributeGetterCallback, V8WindowPartial::OndeviceorientationabsoluteAttributeSetterCallback, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
    { "indexedDB", V8WindowPartial::IndexedDBAttributeGetterCallback, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
    { "webkitStorageInfo", V8WindowPartial::WebkitStorageInfoAttributeGetterCallback, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
    { "sessionStorage", V8WindowPartial::SessionStorageAttributeGetterCallback, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
    { "localStorage", V8WindowPartial::LocalStorageAttributeGetterCallback, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
};

void V8WindowPartial::InstallV8WindowTemplate(
    v8::Isolate* isolate,
    const DOMWrapperWorld& world,
    v8::Local<v8::FunctionTemplate> interface_template) {
  // Initialize the interface object's template.
  V8Window::InstallV8WindowTemplate(isolate, world, interface_template);

  v8::Local<v8::Signature> signature = v8::Signature::New(isolate, interface_template);
  ALLOW_UNUSED_LOCAL(signature);
  v8::Local<v8::ObjectTemplate> instance_template = interface_template->InstanceTemplate();
  ALLOW_UNUSED_LOCAL(instance_template);
  v8::Local<v8::ObjectTemplate> prototype_template = interface_template->PrototypeTemplate();
  ALLOW_UNUSED_LOCAL(prototype_template);

  // Global object prototype chain consists of Immutable Prototype Exotic Objects
  prototype_template->SetImmutableProto();

  // Global objects are Immutable Prototype Exotic Objects
  instance_template->SetImmutableProto();

  // Register IDL constants, attributes and operations.
  {
    static constexpr V8DOMConfiguration::ConstantConfiguration kConstants[] = {
        {"TEMPORARY", V8DOMConfiguration::kConstantTypeUnsignedShort, static_cast<int>(0)},
        {"PERSISTENT", V8DOMConfiguration::kConstantTypeUnsignedShort, static_cast<int>(1)},
    };
    V8DOMConfiguration::InstallConstants(
        isolate, interface_template, prototype_template,
        kConstants, base::size(kConstants));
  }
  static_assert(0 == DOMWindowFileSystem::kTemporary, "the value of DOMWindow_kTemporary does not match with implementation");
  static_assert(1 == DOMWindowFileSystem::kPersistent, "the value of DOMWindow_kPersistent does not match with implementation");
  V8DOMConfiguration::InstallAttributes(
      isolate, world, instance_template, prototype_template,
      kV8WindowAttributes, base::size(kV8WindowAttributes));
  V8DOMConfiguration::InstallAccessors(
      isolate, world, instance_template, prototype_template, interface_template,
      signature, kV8WindowAccessors, base::size(kV8WindowAccessors));

  // Custom signature

  V8WindowPartial::InstallRuntimeEnabledFeaturesOnTemplate(
      isolate, world, interface_template);
}

void V8WindowPartial::InstallRuntimeEnabledFeaturesOnTemplate(
    v8::Isolate* isolate,
    const DOMWrapperWorld& world,
    v8::Local<v8::FunctionTemplate> interface_template) {
  V8Window::InstallRuntimeEnabledFeaturesOnTemplate(isolate, world, interface_template);

  v8::Local<v8::Signature> signature = v8::Signature::New(isolate, interface_template);
  ALLOW_UNUSED_LOCAL(signature);
  v8::Local<v8::ObjectTemplate> instance_template = interface_template->InstanceTemplate();
  ALLOW_UNUSED_LOCAL(instance_template);
  v8::Local<v8::ObjectTemplate> prototype_template = interface_template->PrototypeTemplate();
  ALLOW_UNUSED_LOCAL(prototype_template);

  // Register IDL constants, attributes and operations.

  if (RuntimeEnabledFeatures::AsyncClipboardEnabled()) {
    static constexpr V8DOMConfiguration::AttributeConfiguration kConfigurations[] = {
        { "ClipboardItem", V8WindowPartial::ClipboardItemConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kReplaceWithDataProperty, V8DOMConfiguration::kAllWorlds },
    };
    V8DOMConfiguration::InstallAttributes(
        isolate, world, instance_template, prototype_template,
        kConfigurations, base::size(kConfigurations));
  }
  if (RuntimeEnabledFeatures::BackgroundFetchEnabled()) {
    static constexpr V8DOMConfiguration::AttributeConfiguration kConfigurations[] = {
        { "BackgroundFetchManager", V8WindowPartial::BackgroundFetchManagerConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kReplaceWithDataProperty, V8DOMConfiguration::kAllWorlds },
        { "BackgroundFetchRecord", V8WindowPartial::BackgroundFetchRecordConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kReplaceWithDataProperty, V8DOMConfiguration::kAllWorlds },
        { "BackgroundFetchRegistration", V8WindowPartial::BackgroundFetchRegistrationConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kReplaceWithDataProperty, V8DOMConfiguration::kAllWorlds },
    };
    V8DOMConfiguration::InstallAttributes(
        isolate, world, instance_template, prototype_template,
        kConfigurations, base::size(kConfigurations));
  }
  if (RuntimeEnabledFeatures::GamepadButtonAxisEventsEnabled()) {
    static constexpr V8DOMConfiguration::AttributeConfiguration kConfigurations[] = {
        { "GamepadAxisEvent", V8WindowPartial::GamepadAxisEventConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kReplaceWithDataProperty, V8DOMConfiguration::kAllWorlds },
        { "GamepadButtonEvent", V8WindowPartial::GamepadButtonEventConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kReplaceWithDataProperty, V8DOMConfiguration::kAllWorlds },
    };
    V8DOMConfiguration::InstallAttributes(
        isolate, world, instance_template, prototype_template,
        kConfigurations, base::size(kConfigurations));
  }
  if (RuntimeEnabledFeatures::IDBObserverEnabled()) {
    static constexpr V8DOMConfiguration::AttributeConfiguration kConfigurations[] = {
        { "IDBObservation", V8WindowPartial::IDBObservationConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kReplaceWithDataProperty, V8DOMConfiguration::kAllWorlds },
        { "IDBObserver", V8WindowPartial::IDBObserverConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kReplaceWithDataProperty, V8DOMConfiguration::kAllWorlds },
        { "IDBObserverChanges", V8WindowPartial::IDBObserverChangesConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kReplaceWithDataProperty, V8DOMConfiguration::kAllWorlds },
    };
    V8DOMConfiguration::InstallAttributes(
        isolate, world, instance_template, prototype_template,
        kConfigurations, base::size(kConfigurations));
  }
  if (RuntimeEnabledFeatures::MediaSessionEnabled()) {
    static constexpr V8DOMConfiguration::AttributeConfiguration kConfigurations[] = {
        { "MediaMetadata", V8WindowPartial::MediaMetadataConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kReplaceWithDataProperty, V8DOMConfiguration::kAllWorlds },
        { "MediaSession", V8WindowPartial::MediaSessionConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kReplaceWithDataProperty, V8DOMConfiguration::kAllWorlds },
    };
    V8DOMConfiguration::InstallAttributes(
        isolate, world, instance_template, prototype_template,
        kConfigurations, base::size(kConfigurations));
  }
  if (RuntimeEnabledFeatures::MediaSourceExperimentalEnabled()) {
    static constexpr V8DOMConfiguration::AttributeConfiguration kConfigurations[] = {
        { "TrackDefault", V8WindowPartial::TrackDefaultConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kReplaceWithDataProperty, V8DOMConfiguration::kAllWorlds },
        { "TrackDefaultList", V8WindowPartial::TrackDefaultListConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kReplaceWithDataProperty, V8DOMConfiguration::kAllWorlds },
        { "VideoPlaybackQuality", V8WindowPartial::VideoPlaybackQualityConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kReplaceWithDataProperty, V8DOMConfiguration::kAllWorlds },
    };
    V8DOMConfiguration::InstallAttributes(
        isolate, world, instance_template, prototype_template,
        kConfigurations, base::size(kConfigurations));
  }
  if (RuntimeEnabledFeatures::NativeFileSystemEnabled()) {
    static constexpr V8DOMConfiguration::AttributeConfiguration kConfigurations[] = {
        { "FileSystemDirectoryHandle", V8WindowPartial::FileSystemDirectoryHandleConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kReplaceWithDataProperty, V8DOMConfiguration::kAllWorlds },
        { "FileSystemFileHandle", V8WindowPartial::FileSystemFileHandleConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kReplaceWithDataProperty, V8DOMConfiguration::kAllWorlds },
        { "FileSystemHandle", V8WindowPartial::FileSystemHandleConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kReplaceWithDataProperty, V8DOMConfiguration::kAllWorlds },
        { "FileSystemWriter", V8WindowPartial::FileSystemWriterConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kReplaceWithDataProperty, V8DOMConfiguration::kAllWorlds },
    };
    V8DOMConfiguration::InstallAttributes(
        isolate, world, instance_template, prototype_template,
        kConfigurations, base::size(kConfigurations));
  }
  if (RuntimeEnabledFeatures::NotificationTriggersEnabled()) {
    static constexpr V8DOMConfiguration::AttributeConfiguration kConfigurations[] = {
        { "TimestampTrigger", V8WindowPartial::TimestampTriggerConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kReplaceWithDataProperty, V8DOMConfiguration::kAllWorlds },
    };
    V8DOMConfiguration::InstallAttributes(
        isolate, world, instance_template, prototype_template,
        kConfigurations, base::size(kConfigurations));
  }
  if (RuntimeEnabledFeatures::NotificationsEnabled()) {
    static constexpr V8DOMConfiguration::AttributeConfiguration kConfigurations[] = {
        { "Notification", V8WindowPartial::NotificationConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kReplaceWithDataProperty, V8DOMConfiguration::kAllWorlds },
    };
    V8DOMConfiguration::InstallAttributes(
        isolate, world, instance_template, prototype_template,
        kConfigurations, base::size(kConfigurations));
  }
  if (RuntimeEnabledFeatures::OffscreenCanvasEnabled()) {
    static constexpr V8DOMConfiguration::AttributeConfiguration kConfigurations[] = {
        { "OffscreenCanvasRenderingContext2D", V8WindowPartial::OffscreenCanvasRenderingContext2DConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kReplaceWithDataProperty, V8DOMConfiguration::kAllWorlds },
    };
    V8DOMConfiguration::InstallAttributes(
        isolate, world, instance_template, prototype_template,
        kConfigurations, base::size(kConfigurations));
  }
  if (RuntimeEnabledFeatures::PaymentAppEnabled()) {
    static constexpr V8DOMConfiguration::AttributeConfiguration kConfigurations[] = {
        { "PaymentInstruments", V8WindowPartial::PaymentInstrumentsConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kReplaceWithDataProperty, V8DOMConfiguration::kAllWorlds },
        { "PaymentManager", V8WindowPartial::PaymentManagerConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kReplaceWithDataProperty, V8DOMConfiguration::kAllWorlds },
    };
    V8DOMConfiguration::InstallAttributes(
        isolate, world, instance_template, prototype_template,
        kConfigurations, base::size(kConfigurations));
  }
  if (RuntimeEnabledFeatures::PaymentRequestEnabled()) {
    static constexpr V8DOMConfiguration::AttributeConfiguration kConfigurations[] = {
        { "PaymentRequestUpdateEvent", V8WindowPartial::PaymentRequestUpdateEventConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kReplaceWithDataProperty, V8DOMConfiguration::kAllWorlds },
    };
    V8DOMConfiguration::InstallAttributes(
        isolate, world, instance_template, prototype_template,
        kConfigurations, base::size(kConfigurations));
  }
  if (RuntimeEnabledFeatures::PermissionsEnabled()) {
    static constexpr V8DOMConfiguration::AttributeConfiguration kConfigurations[] = {
        { "Permissions", V8WindowPartial::PermissionsConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kReplaceWithDataProperty, V8DOMConfiguration::kAllWorlds },
        { "PermissionStatus", V8WindowPartial::PermissionStatusConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kReplaceWithDataProperty, V8DOMConfiguration::kAllWorlds },
    };
    V8DOMConfiguration::InstallAttributes(
        isolate, world, instance_template, prototype_template,
        kConfigurations, base::size(kConfigurations));
  }
  if (RuntimeEnabledFeatures::PictureInPictureAPIEnabled()) {
    static constexpr V8DOMConfiguration::AttributeConfiguration kConfigurations[] = {
        { "EnterPictureInPictureEvent", V8WindowPartial::EnterPictureInPictureEventConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kReplaceWithDataProperty, V8DOMConfiguration::kAllWorlds },
        { "PictureInPictureWindow", V8WindowPartial::PictureInPictureWindowConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kReplaceWithDataProperty, V8DOMConfiguration::kAllWorlds },
    };
    V8DOMConfiguration::InstallAttributes(
        isolate, world, instance_template, prototype_template,
        kConfigurations, base::size(kConfigurations));
  }
  if (RuntimeEnabledFeatures::PushMessagingEnabled()) {
    static constexpr V8DOMConfiguration::AttributeConfiguration kConfigurations[] = {
        { "PushManager", V8WindowPartial::PushManagerConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kReplaceWithDataProperty, V8DOMConfiguration::kAllWorlds },
        { "PushSubscription", V8WindowPartial::PushSubscriptionConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kReplaceWithDataProperty, V8DOMConfiguration::kAllWorlds },
        { "PushSubscriptionOptions", V8WindowPartial::PushSubscriptionOptionsConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kReplaceWithDataProperty, V8DOMConfiguration::kAllWorlds },
    };
    V8DOMConfiguration::InstallAttributes(
        isolate, world, instance_template, prototype_template,
        kConfigurations, base::size(kConfigurations));
  }
  if (RuntimeEnabledFeatures::RTCDtlsTransportEnabled()) {
    static constexpr V8DOMConfiguration::AttributeConfiguration kConfigurations[] = {
        { "RTCDtlsTransport", V8WindowPartial::RTCDtlsTransportConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kReplaceWithDataProperty, V8DOMConfiguration::kAllWorlds },
    };
    V8DOMConfiguration::InstallAttributes(
        isolate, world, instance_template, prototype_template,
        kConfigurations, base::size(kConfigurations));
  }
  if (RuntimeEnabledFeatures::RTCSctpTransportEnabled()) {
    static constexpr V8DOMConfiguration::AttributeConfiguration kConfigurations[] = {
        { "RTCSctpTransport", V8WindowPartial::RTCSctpTransportConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kReplaceWithDataProperty, V8DOMConfiguration::kAllWorlds },
    };
    V8DOMConfiguration::InstallAttributes(
        isolate, world, instance_template, prototype_template,
        kConfigurations, base::size(kConfigurations));
  }
  if (RuntimeEnabledFeatures::RemotePlaybackEnabled()) {
    static constexpr V8DOMConfiguration::AttributeConfiguration kConfigurations[] = {
        { "RemotePlayback", V8WindowPartial::RemotePlaybackConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kReplaceWithDataProperty, V8DOMConfiguration::kAllWorlds },
    };
    V8DOMConfiguration::InstallAttributes(
        isolate, world, instance_template, prototype_template,
        kConfigurations, base::size(kConfigurations));
  }
  if (RuntimeEnabledFeatures::ScriptedSpeechRecognitionEnabled()) {
    static constexpr V8DOMConfiguration::AttributeConfiguration kConfigurations[] = {
        { "webkitSpeechGrammar", V8WindowPartial::WebkitSpeechGrammarConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
        { "webkitSpeechGrammarList", V8WindowPartial::WebkitSpeechGrammarListConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
        { "webkitSpeechRecognition", V8WindowPartial::WebkitSpeechRecognitionConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
        { "webkitSpeechRecognitionError", V8WindowPartial::WebkitSpeechRecognitionErrorConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
        { "webkitSpeechRecognitionEvent", V8WindowPartial::WebkitSpeechRecognitionEventConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
    };
    V8DOMConfiguration::InstallAttributes(
        isolate, world, instance_template, prototype_template,
        kConfigurations, base::size(kConfigurations));
  }
  if (RuntimeEnabledFeatures::ScriptedSpeechSynthesisEnabled()) {
    static constexpr V8DOMConfiguration::AttributeConfiguration kConfigurations[] = {
        { "SpeechSynthesisErrorEvent", V8WindowPartial::SpeechSynthesisErrorEventConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kReplaceWithDataProperty, V8DOMConfiguration::kAllWorlds },
        { "SpeechSynthesisEvent", V8WindowPartial::SpeechSynthesisEventConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kReplaceWithDataProperty, V8DOMConfiguration::kAllWorlds },
        { "SpeechSynthesisUtterance", V8WindowPartial::SpeechSynthesisUtteranceConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kReplaceWithDataProperty, V8DOMConfiguration::kAllWorlds },
    };
    V8DOMConfiguration::InstallAttributes(
        isolate, world, instance_template, prototype_template,
        kConfigurations, base::size(kConfigurations));
  }
  if (RuntimeEnabledFeatures::ShapeDetectionEnabled()) {
    static constexpr V8DOMConfiguration::AttributeConfiguration kConfigurations[] = {
        { "BarcodeDetector", V8WindowPartial::BarcodeDetectorConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kReplaceWithDataProperty, V8DOMConfiguration::kAllWorlds },
        { "DetectedBarcode", V8WindowPartial::DetectedBarcodeConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kReplaceWithDataProperty, V8DOMConfiguration::kAllWorlds },
        { "DetectedFace", V8WindowPartial::DetectedFaceConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kReplaceWithDataProperty, V8DOMConfiguration::kAllWorlds },
        { "DetectedText", V8WindowPartial::DetectedTextConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kReplaceWithDataProperty, V8DOMConfiguration::kAllWorlds },
        { "FaceDetector", V8WindowPartial::FaceDetectorConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kReplaceWithDataProperty, V8DOMConfiguration::kAllWorlds },
        { "TextDetector", V8WindowPartial::TextDetectorConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kReplaceWithDataProperty, V8DOMConfiguration::kAllWorlds },
    };
    V8DOMConfiguration::InstallAttributes(
        isolate, world, instance_template, prototype_template,
        kConfigurations, base::size(kConfigurations));
  }
  if (RuntimeEnabledFeatures::StableBlinkFeaturesEnabled()) {
    static constexpr V8DOMConfiguration::AttributeConfiguration kConfigurations[] = {
        { "CanvasGradient", V8WindowPartial::CanvasGradientConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kReplaceWithDataProperty, V8DOMConfiguration::kAllWorlds },
        { "CanvasPattern", V8WindowPartial::CanvasPatternConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kReplaceWithDataProperty, V8DOMConfiguration::kAllWorlds },
        { "Path2D", V8WindowPartial::Path2DConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kReplaceWithDataProperty, V8DOMConfiguration::kAllWorlds },
        { "WebGL2RenderingContext", V8WindowPartial::WebGL2RenderingContextConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kReplaceWithDataProperty, V8DOMConfiguration::kAllWorlds },
        { "WebGLActiveInfo", V8WindowPartial::WebGLActiveInfoConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kReplaceWithDataProperty, V8DOMConfiguration::kAllWorlds },
        { "WebGLBuffer", V8WindowPartial::WebGLBufferConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kReplaceWithDataProperty, V8DOMConfiguration::kAllWorlds },
        { "WebGLFramebuffer", V8WindowPartial::WebGLFramebufferConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kReplaceWithDataProperty, V8DOMConfiguration::kAllWorlds },
        { "WebGLProgram", V8WindowPartial::WebGLProgramConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kReplaceWithDataProperty, V8DOMConfiguration::kAllWorlds },
        { "WebGLQuery", V8WindowPartial::WebGLQueryConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kReplaceWithDataProperty, V8DOMConfiguration::kAllWorlds },
        { "WebGLRenderbuffer", V8WindowPartial::WebGLRenderbufferConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kReplaceWithDataProperty, V8DOMConfiguration::kAllWorlds },
        { "WebGLRenderingContext", V8WindowPartial::WebGLRenderingContextConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kReplaceWithDataProperty, V8DOMConfiguration::kAllWorlds },
        { "WebGLSampler", V8WindowPartial::WebGLSamplerConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kReplaceWithDataProperty, V8DOMConfiguration::kAllWorlds },
        { "WebGLShader", V8WindowPartial::WebGLShaderConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kReplaceWithDataProperty, V8DOMConfiguration::kAllWorlds },
        { "WebGLShaderPrecisionFormat", V8WindowPartial::WebGLShaderPrecisionFormatConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kReplaceWithDataProperty, V8DOMConfiguration::kAllWorlds },
        { "WebGLSync", V8WindowPartial::WebGLSyncConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kReplaceWithDataProperty, V8DOMConfiguration::kAllWorlds },
        { "WebGLTexture", V8WindowPartial::WebGLTextureConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kReplaceWithDataProperty, V8DOMConfiguration::kAllWorlds },
        { "WebGLTransformFeedback", V8WindowPartial::WebGLTransformFeedbackConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kReplaceWithDataProperty, V8DOMConfiguration::kAllWorlds },
        { "WebGLUniformLocation", V8WindowPartial::WebGLUniformLocationConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kReplaceWithDataProperty, V8DOMConfiguration::kAllWorlds },
        { "WebGLVertexArrayObject", V8WindowPartial::WebGLVertexArrayObjectConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kReplaceWithDataProperty, V8DOMConfiguration::kAllWorlds },
    };
    V8DOMConfiguration::InstallAttributes(
        isolate, world, instance_template, prototype_template,
        kConfigurations, base::size(kConfigurations));
  }
  if (RuntimeEnabledFeatures::WebBluetoothEnabled()) {
    static constexpr V8DOMConfiguration::AttributeConfiguration kConfigurations[] = {
        { "BluetoothUUID", V8WindowPartial::BluetoothUUIDConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kReplaceWithDataProperty, V8DOMConfiguration::kAllWorlds },
    };
    V8DOMConfiguration::InstallAttributes(
        isolate, world, instance_template, prototype_template,
        kConfigurations, base::size(kConfigurations));
  }
  if (RuntimeEnabledFeatures::WebGL2ComputeContextEnabled()) {
    static constexpr V8DOMConfiguration::AttributeConfiguration kConfigurations[] = {
        { "WebGL2ComputeRenderingContext", V8WindowPartial::WebGL2ComputeRenderingContextConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kReplaceWithDataProperty, V8DOMConfiguration::kAllWorlds },
    };
    V8DOMConfiguration::InstallAttributes(
        isolate, world, instance_template, prototype_template,
        kConfigurations, base::size(kConfigurations));
  }
  if (RuntimeEnabledFeatures::WebGLDraftExtensionsEnabled()) {
    static constexpr V8DOMConfiguration::AttributeConfiguration kConfigurations[] = {
        { "WebGLVideoFrameInfo", V8WindowPartial::WebGLVideoFrameInfoConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kReplaceWithDataProperty, V8DOMConfiguration::kAllWorlds },
    };
    V8DOMConfiguration::InstallAttributes(
        isolate, world, instance_template, prototype_template,
        kConfigurations, base::size(kConfigurations));
  }
  if (RuntimeEnabledFeatures::WebGPUEnabled()) {
    static constexpr V8DOMConfiguration::AttributeConfiguration kConfigurations[] = {
        { "GPU", V8WindowPartial::GPUConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kReplaceWithDataProperty, V8DOMConfiguration::kAllWorlds },
        { "GPUAdapter", V8WindowPartial::GPUAdapterConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kReplaceWithDataProperty, V8DOMConfiguration::kAllWorlds },
        { "GPUBindGroup", V8WindowPartial::GPUBindGroupConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kReplaceWithDataProperty, V8DOMConfiguration::kAllWorlds },
        { "GPUBindGroupLayout", V8WindowPartial::GPUBindGroupLayoutConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kReplaceWithDataProperty, V8DOMConfiguration::kAllWorlds },
        { "GPUBuffer", V8WindowPartial::GPUBufferConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kReplaceWithDataProperty, V8DOMConfiguration::kAllWorlds },
        { "GPUBufferUsage", V8WindowPartial::GPUBufferUsageConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kReplaceWithDataProperty, V8DOMConfiguration::kAllWorlds },
        { "GPUCanvasContext", V8WindowPartial::GPUCanvasContextConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kReplaceWithDataProperty, V8DOMConfiguration::kAllWorlds },
        { "GPUColorWriteBit", V8WindowPartial::GPUColorWriteBitConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kReplaceWithDataProperty, V8DOMConfiguration::kAllWorlds },
        { "GPUCommandBuffer", V8WindowPartial::GPUCommandBufferConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kReplaceWithDataProperty, V8DOMConfiguration::kAllWorlds },
        { "GPUCommandEncoder", V8WindowPartial::GPUCommandEncoderConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kReplaceWithDataProperty, V8DOMConfiguration::kAllWorlds },
        { "GPUComputePassEncoder", V8WindowPartial::GPUComputePassEncoderConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kReplaceWithDataProperty, V8DOMConfiguration::kAllWorlds },
        { "GPUComputePipeline", V8WindowPartial::GPUComputePipelineConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kReplaceWithDataProperty, V8DOMConfiguration::kAllWorlds },
        { "GPUDevice", V8WindowPartial::GPUDeviceConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kReplaceWithDataProperty, V8DOMConfiguration::kAllWorlds },
        { "GPUFence", V8WindowPartial::GPUFenceConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kReplaceWithDataProperty, V8DOMConfiguration::kAllWorlds },
        { "GPUOutOfMemoryError", V8WindowPartial::GPUOutOfMemoryErrorConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kReplaceWithDataProperty, V8DOMConfiguration::kAllWorlds },
        { "GPUPipelineLayout", V8WindowPartial::GPUPipelineLayoutConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kReplaceWithDataProperty, V8DOMConfiguration::kAllWorlds },
        { "GPUQueue", V8WindowPartial::GPUQueueConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kReplaceWithDataProperty, V8DOMConfiguration::kAllWorlds },
        { "GPURenderPassEncoder", V8WindowPartial::GPURenderPassEncoderConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kReplaceWithDataProperty, V8DOMConfiguration::kAllWorlds },
        { "GPURenderPipeline", V8WindowPartial::GPURenderPipelineConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kReplaceWithDataProperty, V8DOMConfiguration::kAllWorlds },
        { "GPUSampler", V8WindowPartial::GPUSamplerConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kReplaceWithDataProperty, V8DOMConfiguration::kAllWorlds },
        { "GPUShaderModule", V8WindowPartial::GPUShaderModuleConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kReplaceWithDataProperty, V8DOMConfiguration::kAllWorlds },
        { "GPUShaderStageBit", V8WindowPartial::GPUShaderStageBitConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kReplaceWithDataProperty, V8DOMConfiguration::kAllWorlds },
        { "GPUSwapChain", V8WindowPartial::GPUSwapChainConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kReplaceWithDataProperty, V8DOMConfiguration::kAllWorlds },
        { "GPUTexture", V8WindowPartial::GPUTextureConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kReplaceWithDataProperty, V8DOMConfiguration::kAllWorlds },
        { "GPUTextureUsage", V8WindowPartial::GPUTextureUsageConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kReplaceWithDataProperty, V8DOMConfiguration::kAllWorlds },
        { "GPUTextureView", V8WindowPartial::GPUTextureViewConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kReplaceWithDataProperty, V8DOMConfiguration::kAllWorlds },
        { "GPUUncapturedErrorEvent", V8WindowPartial::GPUUncapturedErrorEventConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kReplaceWithDataProperty, V8DOMConfiguration::kAllWorlds },
        { "GPUValidationError", V8WindowPartial::GPUValidationErrorConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kReplaceWithDataProperty, V8DOMConfiguration::kAllWorlds },
    };
    V8DOMConfiguration::InstallAttributes(
        isolate, world, instance_template, prototype_template,
        kConfigurations, base::size(kConfigurations));
  }

  if (RuntimeEnabledFeatures::ScriptedSpeechSynthesisEnabled()) {
    static constexpr V8DOMConfiguration::AccessorConfiguration kConfigurations[] = {
        { "speechSynthesis", V8WindowPartial::SpeechSynthesisAttributeGetterCallback, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
    };
    V8DOMConfiguration::InstallAccessors(
        isolate, world, instance_template, prototype_template, interface_template,
        signature, kConfigurations, base::size(kConfigurations));
  }

  // Custom signature
  if (RuntimeEnabledFeatures::FileSystemEnabled()) {
    {
      // Install webkitRequestFileSystem configuration
      constexpr V8DOMConfiguration::MethodConfiguration kConfigurations[] = {
          {"webkitRequestFileSystem", V8WindowPartial::WebkitRequestFileSystemMethodCallback, 3, v8::None, V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds}
      };
      for (const auto& config : kConfigurations) {
        V8DOMConfiguration::InstallMethod(
            isolate, world, instance_template, prototype_template,
            interface_template, signature, config);
      }
    }
  }
  if (RuntimeEnabledFeatures::FileSystemEnabled()) {
    {
      // Install webkitResolveLocalFileSystemURL configuration
      constexpr V8DOMConfiguration::MethodConfiguration kConfigurations[] = {
          {"webkitResolveLocalFileSystemURL", V8WindowPartial::WebkitResolveLocalFileSystemURLMethodCallback, 2, v8::None, V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds}
      };
      for (const auto& config : kConfigurations) {
        V8DOMConfiguration::InstallMethod(
            isolate, world, instance_template, prototype_template,
            interface_template, signature, config);
      }
    }
  }
  if (RuntimeEnabledFeatures::DatabaseEnabled()) {
    {
      // Install openDatabase configuration
      constexpr V8DOMConfiguration::MethodConfiguration kConfigurations[] = {
          {"openDatabase", V8WindowPartial::OpenDatabaseMethodCallback, 4, v8::None, V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds}
      };
      for (const auto& config : kConfigurations) {
        V8DOMConfiguration::InstallMethod(
            isolate, world, instance_template, prototype_template,
            interface_template, signature, config);
      }
    }
  }
}

void V8WindowPartial::InstallRuntimeEnabledFeaturesImpl(
    v8::Isolate* isolate,
    const DOMWrapperWorld& world,
    v8::Local<v8::Object> instance,
    v8::Local<v8::Object> prototype,
    v8::Local<v8::Function> interface) {
  v8::Local<v8::FunctionTemplate> interface_template = V8Window::GetWrapperTypeInfo()->DomTemplate(isolate, world);
  v8::Local<v8::Signature> signature = v8::Signature::New(isolate, interface_template);
  ALLOW_UNUSED_LOCAL(signature);

  if (RuntimeEnabledFeatures::AsyncClipboardEnabled()) {
    static constexpr V8DOMConfiguration::AttributeConfiguration kConfigurations[] = {
        { "ClipboardItem", V8WindowPartial::ClipboardItemConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kReplaceWithDataProperty, V8DOMConfiguration::kAllWorlds },
    };
    V8DOMConfiguration::InstallAttributes(isolate, world, instance, prototype,
        kConfigurations, base::size(kConfigurations));
  }
  if (RuntimeEnabledFeatures::BackgroundFetchEnabled()) {
    static constexpr V8DOMConfiguration::AttributeConfiguration kConfigurations[] = {
        { "BackgroundFetchManager", V8WindowPartial::BackgroundFetchManagerConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kReplaceWithDataProperty, V8DOMConfiguration::kAllWorlds },
        { "BackgroundFetchRecord", V8WindowPartial::BackgroundFetchRecordConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kReplaceWithDataProperty, V8DOMConfiguration::kAllWorlds },
        { "BackgroundFetchRegistration", V8WindowPartial::BackgroundFetchRegistrationConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kReplaceWithDataProperty, V8DOMConfiguration::kAllWorlds },
    };
    V8DOMConfiguration::InstallAttributes(isolate, world, instance, prototype,
        kConfigurations, base::size(kConfigurations));
  }
  if (RuntimeEnabledFeatures::GamepadButtonAxisEventsEnabled()) {
    static constexpr V8DOMConfiguration::AttributeConfiguration kConfigurations[] = {
        { "GamepadAxisEvent", V8WindowPartial::GamepadAxisEventConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kReplaceWithDataProperty, V8DOMConfiguration::kAllWorlds },
        { "GamepadButtonEvent", V8WindowPartial::GamepadButtonEventConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kReplaceWithDataProperty, V8DOMConfiguration::kAllWorlds },
    };
    V8DOMConfiguration::InstallAttributes(isolate, world, instance, prototype,
        kConfigurations, base::size(kConfigurations));
  }
  if (RuntimeEnabledFeatures::IDBObserverEnabled()) {
    static constexpr V8DOMConfiguration::AttributeConfiguration kConfigurations[] = {
        { "IDBObservation", V8WindowPartial::IDBObservationConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kReplaceWithDataProperty, V8DOMConfiguration::kAllWorlds },
        { "IDBObserver", V8WindowPartial::IDBObserverConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kReplaceWithDataProperty, V8DOMConfiguration::kAllWorlds },
        { "IDBObserverChanges", V8WindowPartial::IDBObserverChangesConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kReplaceWithDataProperty, V8DOMConfiguration::kAllWorlds },
    };
    V8DOMConfiguration::InstallAttributes(isolate, world, instance, prototype,
        kConfigurations, base::size(kConfigurations));
  }
  if (RuntimeEnabledFeatures::MediaSessionEnabled()) {
    static constexpr V8DOMConfiguration::AttributeConfiguration kConfigurations[] = {
        { "MediaMetadata", V8WindowPartial::MediaMetadataConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kReplaceWithDataProperty, V8DOMConfiguration::kAllWorlds },
        { "MediaSession", V8WindowPartial::MediaSessionConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kReplaceWithDataProperty, V8DOMConfiguration::kAllWorlds },
    };
    V8DOMConfiguration::InstallAttributes(isolate, world, instance, prototype,
        kConfigurations, base::size(kConfigurations));
  }
  if (RuntimeEnabledFeatures::MediaSourceExperimentalEnabled()) {
    static constexpr V8DOMConfiguration::AttributeConfiguration kConfigurations[] = {
        { "TrackDefault", V8WindowPartial::TrackDefaultConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kReplaceWithDataProperty, V8DOMConfiguration::kAllWorlds },
        { "TrackDefaultList", V8WindowPartial::TrackDefaultListConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kReplaceWithDataProperty, V8DOMConfiguration::kAllWorlds },
        { "VideoPlaybackQuality", V8WindowPartial::VideoPlaybackQualityConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kReplaceWithDataProperty, V8DOMConfiguration::kAllWorlds },
    };
    V8DOMConfiguration::InstallAttributes(isolate, world, instance, prototype,
        kConfigurations, base::size(kConfigurations));
  }
  if (RuntimeEnabledFeatures::NativeFileSystemEnabled()) {
    static constexpr V8DOMConfiguration::AttributeConfiguration kConfigurations[] = {
        { "FileSystemDirectoryHandle", V8WindowPartial::FileSystemDirectoryHandleConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kReplaceWithDataProperty, V8DOMConfiguration::kAllWorlds },
        { "FileSystemFileHandle", V8WindowPartial::FileSystemFileHandleConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kReplaceWithDataProperty, V8DOMConfiguration::kAllWorlds },
        { "FileSystemHandle", V8WindowPartial::FileSystemHandleConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kReplaceWithDataProperty, V8DOMConfiguration::kAllWorlds },
        { "FileSystemWriter", V8WindowPartial::FileSystemWriterConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kReplaceWithDataProperty, V8DOMConfiguration::kAllWorlds },
    };
    V8DOMConfiguration::InstallAttributes(isolate, world, instance, prototype,
        kConfigurations, base::size(kConfigurations));
  }
  if (RuntimeEnabledFeatures::NotificationTriggersEnabled()) {
    static constexpr V8DOMConfiguration::AttributeConfiguration kConfigurations[] = {
        { "TimestampTrigger", V8WindowPartial::TimestampTriggerConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kReplaceWithDataProperty, V8DOMConfiguration::kAllWorlds },
    };
    V8DOMConfiguration::InstallAttributes(isolate, world, instance, prototype,
        kConfigurations, base::size(kConfigurations));
  }
  if (RuntimeEnabledFeatures::NotificationsEnabled()) {
    static constexpr V8DOMConfiguration::AttributeConfiguration kConfigurations[] = {
        { "Notification", V8WindowPartial::NotificationConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kReplaceWithDataProperty, V8DOMConfiguration::kAllWorlds },
    };
    V8DOMConfiguration::InstallAttributes(isolate, world, instance, prototype,
        kConfigurations, base::size(kConfigurations));
  }
  if (RuntimeEnabledFeatures::OffscreenCanvasEnabled()) {
    static constexpr V8DOMConfiguration::AttributeConfiguration kConfigurations[] = {
        { "OffscreenCanvasRenderingContext2D", V8WindowPartial::OffscreenCanvasRenderingContext2DConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kReplaceWithDataProperty, V8DOMConfiguration::kAllWorlds },
    };
    V8DOMConfiguration::InstallAttributes(isolate, world, instance, prototype,
        kConfigurations, base::size(kConfigurations));
  }
  if (RuntimeEnabledFeatures::PaymentAppEnabled()) {
    static constexpr V8DOMConfiguration::AttributeConfiguration kConfigurations[] = {
        { "PaymentInstruments", V8WindowPartial::PaymentInstrumentsConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kReplaceWithDataProperty, V8DOMConfiguration::kAllWorlds },
        { "PaymentManager", V8WindowPartial::PaymentManagerConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kReplaceWithDataProperty, V8DOMConfiguration::kAllWorlds },
    };
    V8DOMConfiguration::InstallAttributes(isolate, world, instance, prototype,
        kConfigurations, base::size(kConfigurations));
  }
  if (RuntimeEnabledFeatures::PaymentRequestEnabled()) {
    static constexpr V8DOMConfiguration::AttributeConfiguration kConfigurations[] = {
        { "PaymentRequestUpdateEvent", V8WindowPartial::PaymentRequestUpdateEventConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kReplaceWithDataProperty, V8DOMConfiguration::kAllWorlds },
    };
    V8DOMConfiguration::InstallAttributes(isolate, world, instance, prototype,
        kConfigurations, base::size(kConfigurations));
  }
  if (RuntimeEnabledFeatures::PermissionsEnabled()) {
    static constexpr V8DOMConfiguration::AttributeConfiguration kConfigurations[] = {
        { "Permissions", V8WindowPartial::PermissionsConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kReplaceWithDataProperty, V8DOMConfiguration::kAllWorlds },
        { "PermissionStatus", V8WindowPartial::PermissionStatusConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kReplaceWithDataProperty, V8DOMConfiguration::kAllWorlds },
    };
    V8DOMConfiguration::InstallAttributes(isolate, world, instance, prototype,
        kConfigurations, base::size(kConfigurations));
  }
  if (RuntimeEnabledFeatures::PictureInPictureAPIEnabled()) {
    static constexpr V8DOMConfiguration::AttributeConfiguration kConfigurations[] = {
        { "EnterPictureInPictureEvent", V8WindowPartial::EnterPictureInPictureEventConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kReplaceWithDataProperty, V8DOMConfiguration::kAllWorlds },
        { "PictureInPictureWindow", V8WindowPartial::PictureInPictureWindowConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kReplaceWithDataProperty, V8DOMConfiguration::kAllWorlds },
    };
    V8DOMConfiguration::InstallAttributes(isolate, world, instance, prototype,
        kConfigurations, base::size(kConfigurations));
  }
  if (RuntimeEnabledFeatures::PushMessagingEnabled()) {
    static constexpr V8DOMConfiguration::AttributeConfiguration kConfigurations[] = {
        { "PushManager", V8WindowPartial::PushManagerConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kReplaceWithDataProperty, V8DOMConfiguration::kAllWorlds },
        { "PushSubscription", V8WindowPartial::PushSubscriptionConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kReplaceWithDataProperty, V8DOMConfiguration::kAllWorlds },
        { "PushSubscriptionOptions", V8WindowPartial::PushSubscriptionOptionsConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kReplaceWithDataProperty, V8DOMConfiguration::kAllWorlds },
    };
    V8DOMConfiguration::InstallAttributes(isolate, world, instance, prototype,
        kConfigurations, base::size(kConfigurations));
  }
  if (RuntimeEnabledFeatures::RTCDtlsTransportEnabled()) {
    static constexpr V8DOMConfiguration::AttributeConfiguration kConfigurations[] = {
        { "RTCDtlsTransport", V8WindowPartial::RTCDtlsTransportConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kReplaceWithDataProperty, V8DOMConfiguration::kAllWorlds },
    };
    V8DOMConfiguration::InstallAttributes(isolate, world, instance, prototype,
        kConfigurations, base::size(kConfigurations));
  }
  if (RuntimeEnabledFeatures::RTCSctpTransportEnabled()) {
    static constexpr V8DOMConfiguration::AttributeConfiguration kConfigurations[] = {
        { "RTCSctpTransport", V8WindowPartial::RTCSctpTransportConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kReplaceWithDataProperty, V8DOMConfiguration::kAllWorlds },
    };
    V8DOMConfiguration::InstallAttributes(isolate, world, instance, prototype,
        kConfigurations, base::size(kConfigurations));
  }
  if (RuntimeEnabledFeatures::RemotePlaybackEnabled()) {
    static constexpr V8DOMConfiguration::AttributeConfiguration kConfigurations[] = {
        { "RemotePlayback", V8WindowPartial::RemotePlaybackConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kReplaceWithDataProperty, V8DOMConfiguration::kAllWorlds },
    };
    V8DOMConfiguration::InstallAttributes(isolate, world, instance, prototype,
        kConfigurations, base::size(kConfigurations));
  }
  if (RuntimeEnabledFeatures::ScriptedSpeechRecognitionEnabled()) {
    static constexpr V8DOMConfiguration::AttributeConfiguration kConfigurations[] = {
        { "webkitSpeechGrammar", V8WindowPartial::WebkitSpeechGrammarConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
        { "webkitSpeechGrammarList", V8WindowPartial::WebkitSpeechGrammarListConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
        { "webkitSpeechRecognition", V8WindowPartial::WebkitSpeechRecognitionConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
        { "webkitSpeechRecognitionError", V8WindowPartial::WebkitSpeechRecognitionErrorConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
        { "webkitSpeechRecognitionEvent", V8WindowPartial::WebkitSpeechRecognitionEventConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
    };
    V8DOMConfiguration::InstallAttributes(isolate, world, instance, prototype,
        kConfigurations, base::size(kConfigurations));
  }
  if (RuntimeEnabledFeatures::ScriptedSpeechSynthesisEnabled()) {
    static constexpr V8DOMConfiguration::AttributeConfiguration kConfigurations[] = {
        { "SpeechSynthesisErrorEvent", V8WindowPartial::SpeechSynthesisErrorEventConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kReplaceWithDataProperty, V8DOMConfiguration::kAllWorlds },
        { "SpeechSynthesisEvent", V8WindowPartial::SpeechSynthesisEventConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kReplaceWithDataProperty, V8DOMConfiguration::kAllWorlds },
        { "SpeechSynthesisUtterance", V8WindowPartial::SpeechSynthesisUtteranceConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kReplaceWithDataProperty, V8DOMConfiguration::kAllWorlds },
    };
    V8DOMConfiguration::InstallAttributes(isolate, world, instance, prototype,
        kConfigurations, base::size(kConfigurations));
  }
  if (RuntimeEnabledFeatures::ShapeDetectionEnabled()) {
    static constexpr V8DOMConfiguration::AttributeConfiguration kConfigurations[] = {
        { "BarcodeDetector", V8WindowPartial::BarcodeDetectorConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kReplaceWithDataProperty, V8DOMConfiguration::kAllWorlds },
        { "DetectedBarcode", V8WindowPartial::DetectedBarcodeConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kReplaceWithDataProperty, V8DOMConfiguration::kAllWorlds },
        { "DetectedFace", V8WindowPartial::DetectedFaceConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kReplaceWithDataProperty, V8DOMConfiguration::kAllWorlds },
        { "DetectedText", V8WindowPartial::DetectedTextConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kReplaceWithDataProperty, V8DOMConfiguration::kAllWorlds },
        { "FaceDetector", V8WindowPartial::FaceDetectorConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kReplaceWithDataProperty, V8DOMConfiguration::kAllWorlds },
        { "TextDetector", V8WindowPartial::TextDetectorConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kReplaceWithDataProperty, V8DOMConfiguration::kAllWorlds },
    };
    V8DOMConfiguration::InstallAttributes(isolate, world, instance, prototype,
        kConfigurations, base::size(kConfigurations));
  }
  if (RuntimeEnabledFeatures::StableBlinkFeaturesEnabled()) {
    static constexpr V8DOMConfiguration::AttributeConfiguration kConfigurations[] = {
        { "CanvasGradient", V8WindowPartial::CanvasGradientConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kReplaceWithDataProperty, V8DOMConfiguration::kAllWorlds },
        { "CanvasPattern", V8WindowPartial::CanvasPatternConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kReplaceWithDataProperty, V8DOMConfiguration::kAllWorlds },
        { "Path2D", V8WindowPartial::Path2DConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kReplaceWithDataProperty, V8DOMConfiguration::kAllWorlds },
        { "WebGL2RenderingContext", V8WindowPartial::WebGL2RenderingContextConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kReplaceWithDataProperty, V8DOMConfiguration::kAllWorlds },
        { "WebGLActiveInfo", V8WindowPartial::WebGLActiveInfoConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kReplaceWithDataProperty, V8DOMConfiguration::kAllWorlds },
        { "WebGLBuffer", V8WindowPartial::WebGLBufferConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kReplaceWithDataProperty, V8DOMConfiguration::kAllWorlds },
        { "WebGLFramebuffer", V8WindowPartial::WebGLFramebufferConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kReplaceWithDataProperty, V8DOMConfiguration::kAllWorlds },
        { "WebGLProgram", V8WindowPartial::WebGLProgramConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kReplaceWithDataProperty, V8DOMConfiguration::kAllWorlds },
        { "WebGLQuery", V8WindowPartial::WebGLQueryConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kReplaceWithDataProperty, V8DOMConfiguration::kAllWorlds },
        { "WebGLRenderbuffer", V8WindowPartial::WebGLRenderbufferConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kReplaceWithDataProperty, V8DOMConfiguration::kAllWorlds },
        { "WebGLRenderingContext", V8WindowPartial::WebGLRenderingContextConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kReplaceWithDataProperty, V8DOMConfiguration::kAllWorlds },
        { "WebGLSampler", V8WindowPartial::WebGLSamplerConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kReplaceWithDataProperty, V8DOMConfiguration::kAllWorlds },
        { "WebGLShader", V8WindowPartial::WebGLShaderConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kReplaceWithDataProperty, V8DOMConfiguration::kAllWorlds },
        { "WebGLShaderPrecisionFormat", V8WindowPartial::WebGLShaderPrecisionFormatConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kReplaceWithDataProperty, V8DOMConfiguration::kAllWorlds },
        { "WebGLSync", V8WindowPartial::WebGLSyncConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kReplaceWithDataProperty, V8DOMConfiguration::kAllWorlds },
        { "WebGLTexture", V8WindowPartial::WebGLTextureConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kReplaceWithDataProperty, V8DOMConfiguration::kAllWorlds },
        { "WebGLTransformFeedback", V8WindowPartial::WebGLTransformFeedbackConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kReplaceWithDataProperty, V8DOMConfiguration::kAllWorlds },
        { "WebGLUniformLocation", V8WindowPartial::WebGLUniformLocationConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kReplaceWithDataProperty, V8DOMConfiguration::kAllWorlds },
        { "WebGLVertexArrayObject", V8WindowPartial::WebGLVertexArrayObjectConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kReplaceWithDataProperty, V8DOMConfiguration::kAllWorlds },
    };
    V8DOMConfiguration::InstallAttributes(isolate, world, instance, prototype,
        kConfigurations, base::size(kConfigurations));
  }
  if (RuntimeEnabledFeatures::WebBluetoothEnabled()) {
    static constexpr V8DOMConfiguration::AttributeConfiguration kConfigurations[] = {
        { "BluetoothUUID", V8WindowPartial::BluetoothUUIDConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kReplaceWithDataProperty, V8DOMConfiguration::kAllWorlds },
    };
    V8DOMConfiguration::InstallAttributes(isolate, world, instance, prototype,
        kConfigurations, base::size(kConfigurations));
  }
  if (RuntimeEnabledFeatures::WebGL2ComputeContextEnabled()) {
    static constexpr V8DOMConfiguration::AttributeConfiguration kConfigurations[] = {
        { "WebGL2ComputeRenderingContext", V8WindowPartial::WebGL2ComputeRenderingContextConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kReplaceWithDataProperty, V8DOMConfiguration::kAllWorlds },
    };
    V8DOMConfiguration::InstallAttributes(isolate, world, instance, prototype,
        kConfigurations, base::size(kConfigurations));
  }
  if (RuntimeEnabledFeatures::WebGLDraftExtensionsEnabled()) {
    static constexpr V8DOMConfiguration::AttributeConfiguration kConfigurations[] = {
        { "WebGLVideoFrameInfo", V8WindowPartial::WebGLVideoFrameInfoConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kReplaceWithDataProperty, V8DOMConfiguration::kAllWorlds },
    };
    V8DOMConfiguration::InstallAttributes(isolate, world, instance, prototype,
        kConfigurations, base::size(kConfigurations));
  }
  if (RuntimeEnabledFeatures::WebGPUEnabled()) {
    static constexpr V8DOMConfiguration::AttributeConfiguration kConfigurations[] = {
        { "GPU", V8WindowPartial::GPUConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kReplaceWithDataProperty, V8DOMConfiguration::kAllWorlds },
        { "GPUAdapter", V8WindowPartial::GPUAdapterConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kReplaceWithDataProperty, V8DOMConfiguration::kAllWorlds },
        { "GPUBindGroup", V8WindowPartial::GPUBindGroupConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kReplaceWithDataProperty, V8DOMConfiguration::kAllWorlds },
        { "GPUBindGroupLayout", V8WindowPartial::GPUBindGroupLayoutConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kReplaceWithDataProperty, V8DOMConfiguration::kAllWorlds },
        { "GPUBuffer", V8WindowPartial::GPUBufferConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kReplaceWithDataProperty, V8DOMConfiguration::kAllWorlds },
        { "GPUBufferUsage", V8WindowPartial::GPUBufferUsageConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kReplaceWithDataProperty, V8DOMConfiguration::kAllWorlds },
        { "GPUCanvasContext", V8WindowPartial::GPUCanvasContextConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kReplaceWithDataProperty, V8DOMConfiguration::kAllWorlds },
        { "GPUColorWriteBit", V8WindowPartial::GPUColorWriteBitConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kReplaceWithDataProperty, V8DOMConfiguration::kAllWorlds },
        { "GPUCommandBuffer", V8WindowPartial::GPUCommandBufferConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kReplaceWithDataProperty, V8DOMConfiguration::kAllWorlds },
        { "GPUCommandEncoder", V8WindowPartial::GPUCommandEncoderConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kReplaceWithDataProperty, V8DOMConfiguration::kAllWorlds },
        { "GPUComputePassEncoder", V8WindowPartial::GPUComputePassEncoderConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kReplaceWithDataProperty, V8DOMConfiguration::kAllWorlds },
        { "GPUComputePipeline", V8WindowPartial::GPUComputePipelineConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kReplaceWithDataProperty, V8DOMConfiguration::kAllWorlds },
        { "GPUDevice", V8WindowPartial::GPUDeviceConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kReplaceWithDataProperty, V8DOMConfiguration::kAllWorlds },
        { "GPUFence", V8WindowPartial::GPUFenceConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kReplaceWithDataProperty, V8DOMConfiguration::kAllWorlds },
        { "GPUOutOfMemoryError", V8WindowPartial::GPUOutOfMemoryErrorConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kReplaceWithDataProperty, V8DOMConfiguration::kAllWorlds },
        { "GPUPipelineLayout", V8WindowPartial::GPUPipelineLayoutConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kReplaceWithDataProperty, V8DOMConfiguration::kAllWorlds },
        { "GPUQueue", V8WindowPartial::GPUQueueConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kReplaceWithDataProperty, V8DOMConfiguration::kAllWorlds },
        { "GPURenderPassEncoder", V8WindowPartial::GPURenderPassEncoderConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kReplaceWithDataProperty, V8DOMConfiguration::kAllWorlds },
        { "GPURenderPipeline", V8WindowPartial::GPURenderPipelineConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kReplaceWithDataProperty, V8DOMConfiguration::kAllWorlds },
        { "GPUSampler", V8WindowPartial::GPUSamplerConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kReplaceWithDataProperty, V8DOMConfiguration::kAllWorlds },
        { "GPUShaderModule", V8WindowPartial::GPUShaderModuleConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kReplaceWithDataProperty, V8DOMConfiguration::kAllWorlds },
        { "GPUShaderStageBit", V8WindowPartial::GPUShaderStageBitConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kReplaceWithDataProperty, V8DOMConfiguration::kAllWorlds },
        { "GPUSwapChain", V8WindowPartial::GPUSwapChainConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kReplaceWithDataProperty, V8DOMConfiguration::kAllWorlds },
        { "GPUTexture", V8WindowPartial::GPUTextureConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kReplaceWithDataProperty, V8DOMConfiguration::kAllWorlds },
        { "GPUTextureUsage", V8WindowPartial::GPUTextureUsageConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kReplaceWithDataProperty, V8DOMConfiguration::kAllWorlds },
        { "GPUTextureView", V8WindowPartial::GPUTextureViewConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kReplaceWithDataProperty, V8DOMConfiguration::kAllWorlds },
        { "GPUUncapturedErrorEvent", V8WindowPartial::GPUUncapturedErrorEventConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kReplaceWithDataProperty, V8DOMConfiguration::kAllWorlds },
        { "GPUValidationError", V8WindowPartial::GPUValidationErrorConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kReplaceWithDataProperty, V8DOMConfiguration::kAllWorlds },
    };
    V8DOMConfiguration::InstallAttributes(isolate, world, instance, prototype,
        kConfigurations, base::size(kConfigurations));
  }

  if (RuntimeEnabledFeatures::ScriptedSpeechSynthesisEnabled()) {
    static constexpr V8DOMConfiguration::AccessorConfiguration kConfigurations[] = {
        { "speechSynthesis", V8WindowPartial::SpeechSynthesisAttributeGetterCallback, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
    };
    V8DOMConfiguration::InstallAccessors(isolate, world, instance, prototype,
        interface, signature, kConfigurations, base::size(kConfigurations));
  }

  if (RuntimeEnabledFeatures::FileSystemEnabled()) {
    {
      // Install webkitRequestFileSystem configuration
      constexpr V8DOMConfiguration::MethodConfiguration kConfigurations[] = {
          {"webkitRequestFileSystem", V8WindowPartial::WebkitRequestFileSystemMethodCallback, 3, v8::None, V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds}
      };
      for (const auto& config : kConfigurations) {
        V8DOMConfiguration::InstallMethod(
            isolate, world, instance, prototype,
            interface, signature, config);
      }
    }
  }
  if (RuntimeEnabledFeatures::FileSystemEnabled()) {
    {
      // Install webkitResolveLocalFileSystemURL configuration
      constexpr V8DOMConfiguration::MethodConfiguration kConfigurations[] = {
          {"webkitResolveLocalFileSystemURL", V8WindowPartial::WebkitResolveLocalFileSystemURLMethodCallback, 2, v8::None, V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds}
      };
      for (const auto& config : kConfigurations) {
        V8DOMConfiguration::InstallMethod(
            isolate, world, instance, prototype,
            interface, signature, config);
      }
    }
  }
  if (RuntimeEnabledFeatures::DatabaseEnabled()) {
    {
      // Install openDatabase configuration
      constexpr V8DOMConfiguration::MethodConfiguration kConfigurations[] = {
          {"openDatabase", V8WindowPartial::OpenDatabaseMethodCallback, 4, v8::None, V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds}
      };
      for (const auto& config : kConfigurations) {
        V8DOMConfiguration::InstallMethod(
            isolate, world, instance, prototype,
            interface, signature, config);
      }
    }
  }
}

void V8WindowPartial::InstallContactsManager(
    v8::Isolate* isolate,
    const DOMWrapperWorld& world,
    v8::Local<v8::Object> instance,
    v8::Local<v8::Object> prototype,
    v8::Local<v8::Function> interface) {
  v8::Local<v8::FunctionTemplate> interface_template =
      V8Window::GetWrapperTypeInfo()->DomTemplate(isolate, world);
  v8::Local<v8::Signature> signature = v8::Signature::New(isolate, interface_template);
  ALLOW_UNUSED_LOCAL(signature);
  ExecutionContext* execution_context = ToExecutionContext(isolate->GetCurrentContext());
  bool is_secure_context = (execution_context && execution_context->IsSecureContext());
  if (is_secure_context) {
    static constexpr V8DOMConfiguration::AttributeConfiguration
    kContactsManagerConfigurations[] = {
        { "ContactsManager", V8WindowPartial::ContactsManagerConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kReplaceWithDataProperty, V8DOMConfiguration::kAllWorlds }
    };
    for (const auto& config : kContactsManagerConfigurations)
      V8DOMConfiguration::InstallAttribute(isolate, world, instance, prototype, config);
  }
}

void V8WindowPartial::InstallContactsManager(
    ScriptState* script_state, v8::Local<v8::Object> instance) {
  V8PerContextData* per_context_data = script_state->PerContextData();
  v8::Local<v8::Object> prototype = per_context_data->PrototypeForType(
      V8Window::GetWrapperTypeInfo());
  v8::Local<v8::Function> interface = per_context_data->ConstructorForType(
      V8Window::GetWrapperTypeInfo());
  ALLOW_UNUSED_LOCAL(interface);
  InstallContactsManager(script_state->GetIsolate(), script_state->World(), instance, prototype, interface);
}

void V8WindowPartial::InstallCookieStore(
    v8::Isolate* isolate,
    const DOMWrapperWorld& world,
    v8::Local<v8::Object> instance,
    v8::Local<v8::Object> prototype,
    v8::Local<v8::Function> interface) {
  v8::Local<v8::FunctionTemplate> interface_template =
      V8Window::GetWrapperTypeInfo()->DomTemplate(isolate, world);
  v8::Local<v8::Signature> signature = v8::Signature::New(isolate, interface_template);
  ALLOW_UNUSED_LOCAL(signature);
  ExecutionContext* execution_context = ToExecutionContext(isolate->GetCurrentContext());
  bool is_secure_context = (execution_context && execution_context->IsSecureContext());
  if (is_secure_context) {
    static constexpr V8DOMConfiguration::AttributeConfiguration
    kCookieChangeEventConfigurations[] = {
        { "CookieChangeEvent", V8WindowPartial::CookieChangeEventConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kReplaceWithDataProperty, V8DOMConfiguration::kAllWorlds }
    };
    for (const auto& config : kCookieChangeEventConfigurations)
      V8DOMConfiguration::InstallAttribute(isolate, world, instance, prototype, config);
  }
  if (is_secure_context) {
    static constexpr V8DOMConfiguration::AttributeConfiguration
    kCookieStoreConfigurations[] = {
        { "CookieStore", V8WindowPartial::CookieStoreConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kReplaceWithDataProperty, V8DOMConfiguration::kAllWorlds }
    };
    for (const auto& config : kCookieStoreConfigurations)
      V8DOMConfiguration::InstallAttribute(isolate, world, instance, prototype, config);
  }
  if (is_secure_context) {
    static constexpr V8DOMConfiguration::AccessorConfiguration
    kcookieStoreConfigurations[] = {
        { "cookieStore", V8WindowPartial::CookieStoreAttributeGetterCallback, V8WindowPartial::CookieStoreAttributeSetterCallback, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds }
    };
    for (const auto& config : kcookieStoreConfigurations) {
      V8DOMConfiguration::InstallAccessor(isolate, world, instance, prototype,
                                          interface, signature, config);
    }
  }
}

void V8WindowPartial::InstallCookieStore(
    ScriptState* script_state, v8::Local<v8::Object> instance) {
  V8PerContextData* per_context_data = script_state->PerContextData();
  v8::Local<v8::Object> prototype = per_context_data->PrototypeForType(
      V8Window::GetWrapperTypeInfo());
  v8::Local<v8::Function> interface = per_context_data->ConstructorForType(
      V8Window::GetWrapperTypeInfo());
  ALLOW_UNUSED_LOCAL(interface);
  InstallCookieStore(script_state->GetIsolate(), script_state->World(), instance, prototype, interface);
}

void V8WindowPartial::InstallBadging(
    v8::Isolate* isolate,
    const DOMWrapperWorld& world,
    v8::Local<v8::Object> instance,
    v8::Local<v8::Object> prototype,
    v8::Local<v8::Function> interface) {
  v8::Local<v8::FunctionTemplate> interface_template =
      V8Window::GetWrapperTypeInfo()->DomTemplate(isolate, world);
  v8::Local<v8::Signature> signature = v8::Signature::New(isolate, interface_template);
  ALLOW_UNUSED_LOCAL(signature);
  static constexpr V8DOMConfiguration::AttributeConfiguration
  kExperimentalBadgeConfigurations[] = {
      { "ExperimentalBadge", V8WindowPartial::ExperimentalBadgeConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kReplaceWithDataProperty, V8DOMConfiguration::kAllWorlds }
  };
  for (const auto& config : kExperimentalBadgeConfigurations)
    V8DOMConfiguration::InstallAttribute(isolate, world, instance, prototype, config);
}

void V8WindowPartial::InstallBadging(
    ScriptState* script_state, v8::Local<v8::Object> instance) {
  V8PerContextData* per_context_data = script_state->PerContextData();
  v8::Local<v8::Object> prototype = per_context_data->PrototypeForType(
      V8Window::GetWrapperTypeInfo());
  v8::Local<v8::Function> interface = per_context_data->ConstructorForType(
      V8Window::GetWrapperTypeInfo());
  ALLOW_UNUSED_LOCAL(interface);
  InstallBadging(script_state->GetIsolate(), script_state->World(), instance, prototype, interface);
}

void V8WindowPartial::InstallWebVR(
    v8::Isolate* isolate,
    const DOMWrapperWorld& world,
    v8::Local<v8::Object> instance,
    v8::Local<v8::Object> prototype,
    v8::Local<v8::Function> interface) {
  v8::Local<v8::FunctionTemplate> interface_template =
      V8Window::GetWrapperTypeInfo()->DomTemplate(isolate, world);
  v8::Local<v8::Signature> signature = v8::Signature::New(isolate, interface_template);
  ALLOW_UNUSED_LOCAL(signature);
  static constexpr V8DOMConfiguration::AttributeConfiguration
  kGamepadPoseConfigurations[] = {
      { "GamepadPose", V8WindowPartial::GamepadPoseConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kReplaceWithDataProperty, V8DOMConfiguration::kAllWorlds }
  };
  for (const auto& config : kGamepadPoseConfigurations)
    V8DOMConfiguration::InstallAttribute(isolate, world, instance, prototype, config);
  static constexpr V8DOMConfiguration::AttributeConfiguration
  kVRDisplayConfigurations[] = {
      { "VRDisplay", V8WindowPartial::VRDisplayConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kReplaceWithDataProperty, V8DOMConfiguration::kAllWorlds }
  };
  for (const auto& config : kVRDisplayConfigurations)
    V8DOMConfiguration::InstallAttribute(isolate, world, instance, prototype, config);
  static constexpr V8DOMConfiguration::AttributeConfiguration
  kVRDisplayCapabilitiesConfigurations[] = {
      { "VRDisplayCapabilities", V8WindowPartial::VRDisplayCapabilitiesConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kReplaceWithDataProperty, V8DOMConfiguration::kAllWorlds }
  };
  for (const auto& config : kVRDisplayCapabilitiesConfigurations)
    V8DOMConfiguration::InstallAttribute(isolate, world, instance, prototype, config);
  static constexpr V8DOMConfiguration::AttributeConfiguration
  kVRDisplayEventConfigurations[] = {
      { "VRDisplayEvent", V8WindowPartial::VRDisplayEventConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kReplaceWithDataProperty, V8DOMConfiguration::kAllWorlds }
  };
  for (const auto& config : kVRDisplayEventConfigurations)
    V8DOMConfiguration::InstallAttribute(isolate, world, instance, prototype, config);
  static constexpr V8DOMConfiguration::AttributeConfiguration
  kVREyeParametersConfigurations[] = {
      { "VREyeParameters", V8WindowPartial::VREyeParametersConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kReplaceWithDataProperty, V8DOMConfiguration::kAllWorlds }
  };
  for (const auto& config : kVREyeParametersConfigurations)
    V8DOMConfiguration::InstallAttribute(isolate, world, instance, prototype, config);
  static constexpr V8DOMConfiguration::AttributeConfiguration
  kVRFrameDataConfigurations[] = {
      { "VRFrameData", V8WindowPartial::VRFrameDataConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kReplaceWithDataProperty, V8DOMConfiguration::kAllWorlds }
  };
  for (const auto& config : kVRFrameDataConfigurations)
    V8DOMConfiguration::InstallAttribute(isolate, world, instance, prototype, config);
  static constexpr V8DOMConfiguration::AttributeConfiguration
  kVRPoseConfigurations[] = {
      { "VRPose", V8WindowPartial::VRPoseConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kReplaceWithDataProperty, V8DOMConfiguration::kAllWorlds }
  };
  for (const auto& config : kVRPoseConfigurations)
    V8DOMConfiguration::InstallAttribute(isolate, world, instance, prototype, config);
  static constexpr V8DOMConfiguration::AttributeConfiguration
  kVRStageParametersConfigurations[] = {
      { "VRStageParameters", V8WindowPartial::VRStageParametersConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kReplaceWithDataProperty, V8DOMConfiguration::kAllWorlds }
  };
  for (const auto& config : kVRStageParametersConfigurations)
    V8DOMConfiguration::InstallAttribute(isolate, world, instance, prototype, config);
}

void V8WindowPartial::InstallWebVR(
    ScriptState* script_state, v8::Local<v8::Object> instance) {
  V8PerContextData* per_context_data = script_state->PerContextData();
  v8::Local<v8::Object> prototype = per_context_data->PrototypeForType(
      V8Window::GetWrapperTypeInfo());
  v8::Local<v8::Function> interface = per_context_data->ConstructorForType(
      V8Window::GetWrapperTypeInfo());
  ALLOW_UNUSED_LOCAL(interface);
  InstallWebVR(script_state->GetIsolate(), script_state->World(), instance, prototype, interface);
}

void V8WindowPartial::InstallRTCQuicTransport(
    v8::Isolate* isolate,
    const DOMWrapperWorld& world,
    v8::Local<v8::Object> instance,
    v8::Local<v8::Object> prototype,
    v8::Local<v8::Function> interface) {
  v8::Local<v8::FunctionTemplate> interface_template =
      V8Window::GetWrapperTypeInfo()->DomTemplate(isolate, world);
  v8::Local<v8::Signature> signature = v8::Signature::New(isolate, interface_template);
  ALLOW_UNUSED_LOCAL(signature);
  ExecutionContext* execution_context = ToExecutionContext(isolate->GetCurrentContext());
  bool is_secure_context = (execution_context && execution_context->IsSecureContext());
  if (is_secure_context) {
    static constexpr V8DOMConfiguration::AttributeConfiguration
    kRTCQuicStreamConfigurations[] = {
        { "RTCQuicStream", V8WindowPartial::RTCQuicStreamConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kReplaceWithDataProperty, V8DOMConfiguration::kAllWorlds }
    };
    for (const auto& config : kRTCQuicStreamConfigurations)
      V8DOMConfiguration::InstallAttribute(isolate, world, instance, prototype, config);
  }
  static constexpr V8DOMConfiguration::AttributeConfiguration
  kRTCQuicStreamEventConfigurations[] = {
      { "RTCQuicStreamEvent", V8WindowPartial::RTCQuicStreamEventConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kReplaceWithDataProperty, V8DOMConfiguration::kAllWorlds }
  };
  for (const auto& config : kRTCQuicStreamEventConfigurations)
    V8DOMConfiguration::InstallAttribute(isolate, world, instance, prototype, config);
  if (is_secure_context) {
    static constexpr V8DOMConfiguration::AttributeConfiguration
    kRTCQuicTransportConfigurations[] = {
        { "RTCQuicTransport", V8WindowPartial::RTCQuicTransportConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kReplaceWithDataProperty, V8DOMConfiguration::kAllWorlds }
    };
    for (const auto& config : kRTCQuicTransportConfigurations)
      V8DOMConfiguration::InstallAttribute(isolate, world, instance, prototype, config);
  }
}

void V8WindowPartial::InstallRTCQuicTransport(
    ScriptState* script_state, v8::Local<v8::Object> instance) {
  V8PerContextData* per_context_data = script_state->PerContextData();
  v8::Local<v8::Object> prototype = per_context_data->PrototypeForType(
      V8Window::GetWrapperTypeInfo());
  v8::Local<v8::Function> interface = per_context_data->ConstructorForType(
      V8Window::GetWrapperTypeInfo());
  ALLOW_UNUSED_LOCAL(interface);
  InstallRTCQuicTransport(script_state->GetIsolate(), script_state->World(), instance, prototype, interface);
}

void V8WindowPartial::InstallAnimationWorklet(
    v8::Isolate* isolate,
    const DOMWrapperWorld& world,
    v8::Local<v8::Object> instance,
    v8::Local<v8::Object> prototype,
    v8::Local<v8::Function> interface) {
  v8::Local<v8::FunctionTemplate> interface_template =
      V8Window::GetWrapperTypeInfo()->DomTemplate(isolate, world);
  v8::Local<v8::Signature> signature = v8::Signature::New(isolate, interface_template);
  ALLOW_UNUSED_LOCAL(signature);
  static constexpr V8DOMConfiguration::AttributeConfiguration
  kWorkletAnimationConfigurations[] = {
      { "WorkletAnimation", V8WindowPartial::WorkletAnimationConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kReplaceWithDataProperty, V8DOMConfiguration::kAllWorlds }
  };
  for (const auto& config : kWorkletAnimationConfigurations)
    V8DOMConfiguration::InstallAttribute(isolate, world, instance, prototype, config);
}

void V8WindowPartial::InstallAnimationWorklet(
    ScriptState* script_state, v8::Local<v8::Object> instance) {
  V8PerContextData* per_context_data = script_state->PerContextData();
  v8::Local<v8::Object> prototype = per_context_data->PrototypeForType(
      V8Window::GetWrapperTypeInfo());
  v8::Local<v8::Function> interface = per_context_data->ConstructorForType(
      V8Window::GetWrapperTypeInfo());
  ALLOW_UNUSED_LOCAL(interface);
  InstallAnimationWorklet(script_state->GetIsolate(), script_state->World(), instance, prototype, interface);
}

void V8WindowPartial::InstallWebXR(
    v8::Isolate* isolate,
    const DOMWrapperWorld& world,
    v8::Local<v8::Object> instance,
    v8::Local<v8::Object> prototype,
    v8::Local<v8::Function> interface) {
  v8::Local<v8::FunctionTemplate> interface_template =
      V8Window::GetWrapperTypeInfo()->DomTemplate(isolate, world);
  v8::Local<v8::Signature> signature = v8::Signature::New(isolate, interface_template);
  ALLOW_UNUSED_LOCAL(signature);
  ExecutionContext* execution_context = ToExecutionContext(isolate->GetCurrentContext());
  bool is_secure_context = (execution_context && execution_context->IsSecureContext());
  if (is_secure_context) {
    static constexpr V8DOMConfiguration::AttributeConfiguration
    kXRConfigurations[] = {
        { "XR", V8WindowPartial::XRConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kReplaceWithDataProperty, V8DOMConfiguration::kAllWorlds }
    };
    for (const auto& config : kXRConfigurations)
      V8DOMConfiguration::InstallAttribute(isolate, world, instance, prototype, config);
  }
  if (is_secure_context) {
    static constexpr V8DOMConfiguration::AttributeConfiguration
    kXRBoundedReferenceSpaceConfigurations[] = {
        { "XRBoundedReferenceSpace", V8WindowPartial::XRBoundedReferenceSpaceConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kReplaceWithDataProperty, V8DOMConfiguration::kAllWorlds }
    };
    for (const auto& config : kXRBoundedReferenceSpaceConfigurations)
      V8DOMConfiguration::InstallAttribute(isolate, world, instance, prototype, config);
  }
  if (is_secure_context) {
    static constexpr V8DOMConfiguration::AttributeConfiguration
    kXRFrameConfigurations[] = {
        { "XRFrame", V8WindowPartial::XRFrameConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kReplaceWithDataProperty, V8DOMConfiguration::kAllWorlds }
    };
    for (const auto& config : kXRFrameConfigurations)
      V8DOMConfiguration::InstallAttribute(isolate, world, instance, prototype, config);
  }
  if (is_secure_context) {
    static constexpr V8DOMConfiguration::AttributeConfiguration
    kXRInputSourceConfigurations[] = {
        { "XRInputSource", V8WindowPartial::XRInputSourceConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kReplaceWithDataProperty, V8DOMConfiguration::kAllWorlds }
    };
    for (const auto& config : kXRInputSourceConfigurations)
      V8DOMConfiguration::InstallAttribute(isolate, world, instance, prototype, config);
  }
  if (is_secure_context) {
    static constexpr V8DOMConfiguration::AttributeConfiguration
    kXRInputSourceEventConfigurations[] = {
        { "XRInputSourceEvent", V8WindowPartial::XRInputSourceEventConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kReplaceWithDataProperty, V8DOMConfiguration::kAllWorlds }
    };
    for (const auto& config : kXRInputSourceEventConfigurations)
      V8DOMConfiguration::InstallAttribute(isolate, world, instance, prototype, config);
  }
  if (is_secure_context) {
    static constexpr V8DOMConfiguration::AttributeConfiguration
    kXRLayerConfigurations[] = {
        { "XRLayer", V8WindowPartial::XRLayerConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kReplaceWithDataProperty, V8DOMConfiguration::kAllWorlds }
    };
    for (const auto& config : kXRLayerConfigurations)
      V8DOMConfiguration::InstallAttribute(isolate, world, instance, prototype, config);
  }
  if (is_secure_context) {
    static constexpr V8DOMConfiguration::AttributeConfiguration
    kXRPoseConfigurations[] = {
        { "XRPose", V8WindowPartial::XRPoseConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kReplaceWithDataProperty, V8DOMConfiguration::kAllWorlds }
    };
    for (const auto& config : kXRPoseConfigurations)
      V8DOMConfiguration::InstallAttribute(isolate, world, instance, prototype, config);
  }
  if (is_secure_context) {
    static constexpr V8DOMConfiguration::AttributeConfiguration
    kXRPresentationContextConfigurations[] = {
        { "XRPresentationContext", V8WindowPartial::XRPresentationContextConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kReplaceWithDataProperty, V8DOMConfiguration::kAllWorlds }
    };
    for (const auto& config : kXRPresentationContextConfigurations)
      V8DOMConfiguration::InstallAttribute(isolate, world, instance, prototype, config);
  }
  if (is_secure_context) {
    static constexpr V8DOMConfiguration::AttributeConfiguration
    kXRReferenceSpaceConfigurations[] = {
        { "XRReferenceSpace", V8WindowPartial::XRReferenceSpaceConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kReplaceWithDataProperty, V8DOMConfiguration::kAllWorlds }
    };
    for (const auto& config : kXRReferenceSpaceConfigurations)
      V8DOMConfiguration::InstallAttribute(isolate, world, instance, prototype, config);
  }
  if (is_secure_context) {
    static constexpr V8DOMConfiguration::AttributeConfiguration
    kXRReferenceSpaceEventConfigurations[] = {
        { "XRReferenceSpaceEvent", V8WindowPartial::XRReferenceSpaceEventConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kReplaceWithDataProperty, V8DOMConfiguration::kAllWorlds }
    };
    for (const auto& config : kXRReferenceSpaceEventConfigurations)
      V8DOMConfiguration::InstallAttribute(isolate, world, instance, prototype, config);
  }
  if (is_secure_context) {
    static constexpr V8DOMConfiguration::AttributeConfiguration
    kXRRenderStateConfigurations[] = {
        { "XRRenderState", V8WindowPartial::XRRenderStateConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kReplaceWithDataProperty, V8DOMConfiguration::kAllWorlds }
    };
    for (const auto& config : kXRRenderStateConfigurations)
      V8DOMConfiguration::InstallAttribute(isolate, world, instance, prototype, config);
  }
  if (is_secure_context) {
    static constexpr V8DOMConfiguration::AttributeConfiguration
    kXRRigidTransformConfigurations[] = {
        { "XRRigidTransform", V8WindowPartial::XRRigidTransformConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kReplaceWithDataProperty, V8DOMConfiguration::kAllWorlds }
    };
    for (const auto& config : kXRRigidTransformConfigurations)
      V8DOMConfiguration::InstallAttribute(isolate, world, instance, prototype, config);
  }
  if (is_secure_context) {
    static constexpr V8DOMConfiguration::AttributeConfiguration
    kXRSessionConfigurations[] = {
        { "XRSession", V8WindowPartial::XRSessionConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kReplaceWithDataProperty, V8DOMConfiguration::kAllWorlds }
    };
    for (const auto& config : kXRSessionConfigurations)
      V8DOMConfiguration::InstallAttribute(isolate, world, instance, prototype, config);
  }
  if (is_secure_context) {
    static constexpr V8DOMConfiguration::AttributeConfiguration
    kXRSessionEventConfigurations[] = {
        { "XRSessionEvent", V8WindowPartial::XRSessionEventConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kReplaceWithDataProperty, V8DOMConfiguration::kAllWorlds }
    };
    for (const auto& config : kXRSessionEventConfigurations)
      V8DOMConfiguration::InstallAttribute(isolate, world, instance, prototype, config);
  }
  if (is_secure_context) {
    static constexpr V8DOMConfiguration::AttributeConfiguration
    kXRSpaceConfigurations[] = {
        { "XRSpace", V8WindowPartial::XRSpaceConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kReplaceWithDataProperty, V8DOMConfiguration::kAllWorlds }
    };
    for (const auto& config : kXRSpaceConfigurations)
      V8DOMConfiguration::InstallAttribute(isolate, world, instance, prototype, config);
  }
  if (is_secure_context) {
    static constexpr V8DOMConfiguration::AttributeConfiguration
    kXRStationaryReferenceSpaceConfigurations[] = {
        { "XRStationaryReferenceSpace", V8WindowPartial::XRStationaryReferenceSpaceConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kReplaceWithDataProperty, V8DOMConfiguration::kAllWorlds }
    };
    for (const auto& config : kXRStationaryReferenceSpaceConfigurations)
      V8DOMConfiguration::InstallAttribute(isolate, world, instance, prototype, config);
  }
  if (is_secure_context) {
    static constexpr V8DOMConfiguration::AttributeConfiguration
    kXRUnboundedReferenceSpaceConfigurations[] = {
        { "XRUnboundedReferenceSpace", V8WindowPartial::XRUnboundedReferenceSpaceConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kReplaceWithDataProperty, V8DOMConfiguration::kAllWorlds }
    };
    for (const auto& config : kXRUnboundedReferenceSpaceConfigurations)
      V8DOMConfiguration::InstallAttribute(isolate, world, instance, prototype, config);
  }
  if (is_secure_context) {
    static constexpr V8DOMConfiguration::AttributeConfiguration
    kXRViewConfigurations[] = {
        { "XRView", V8WindowPartial::XRViewConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kReplaceWithDataProperty, V8DOMConfiguration::kAllWorlds }
    };
    for (const auto& config : kXRViewConfigurations)
      V8DOMConfiguration::InstallAttribute(isolate, world, instance, prototype, config);
  }
  if (is_secure_context) {
    static constexpr V8DOMConfiguration::AttributeConfiguration
    kXRViewerPoseConfigurations[] = {
        { "XRViewerPose", V8WindowPartial::XRViewerPoseConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kReplaceWithDataProperty, V8DOMConfiguration::kAllWorlds }
    };
    for (const auto& config : kXRViewerPoseConfigurations)
      V8DOMConfiguration::InstallAttribute(isolate, world, instance, prototype, config);
  }
  if (is_secure_context) {
    static constexpr V8DOMConfiguration::AttributeConfiguration
    kXRViewportConfigurations[] = {
        { "XRViewport", V8WindowPartial::XRViewportConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kReplaceWithDataProperty, V8DOMConfiguration::kAllWorlds }
    };
    for (const auto& config : kXRViewportConfigurations)
      V8DOMConfiguration::InstallAttribute(isolate, world, instance, prototype, config);
  }
  if (is_secure_context) {
    static constexpr V8DOMConfiguration::AttributeConfiguration
    kXRWebGLLayerConfigurations[] = {
        { "XRWebGLLayer", V8WindowPartial::XRWebGLLayerConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kReplaceWithDataProperty, V8DOMConfiguration::kAllWorlds }
    };
    for (const auto& config : kXRWebGLLayerConfigurations)
      V8DOMConfiguration::InstallAttribute(isolate, world, instance, prototype, config);
  }
}

void V8WindowPartial::InstallWebXR(
    ScriptState* script_state, v8::Local<v8::Object> instance) {
  V8PerContextData* per_context_data = script_state->PerContextData();
  v8::Local<v8::Object> prototype = per_context_data->PrototypeForType(
      V8Window::GetWrapperTypeInfo());
  v8::Local<v8::Function> interface = per_context_data->ConstructorForType(
      V8Window::GetWrapperTypeInfo());
  ALLOW_UNUSED_LOCAL(interface);
  InstallWebXR(script_state->GetIsolate(), script_state->World(), instance, prototype, interface);
}

void V8WindowPartial::InstallConditionalFeatures(
    v8::Local<v8::Context> context,
    const DOMWrapperWorld& world,
    v8::Local<v8::Object> instance_object,
    v8::Local<v8::Object> prototype_object,
    v8::Local<v8::Function> interface_object,
    v8::Local<v8::FunctionTemplate> interface_template) {
  CHECK(!interface_template.IsEmpty());
  DCHECK((!prototype_object.IsEmpty() && !interface_object.IsEmpty()) ||
         !instance_object.IsEmpty());
  V8Window::InstallConditionalFeatures(
      context, world, instance_object, prototype_object, interface_object, interface_template);

  v8::Isolate* isolate = context->GetIsolate();

  v8::Local<v8::Signature> signature = v8::Signature::New(isolate, interface_template);
  ExecutionContext* execution_context = ToExecutionContext(context);
  DCHECK(execution_context);
  bool is_secure_context = (execution_context && execution_context->IsSecureContext());

  if (!instance_object.IsEmpty()) {
    if (is_secure_context) {
      static const V8DOMConfiguration::AccessorConfiguration accessor_configurations[] = {
          { "caches", V8WindowPartial::CachesAttributeGetterCallback, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
      };
      V8DOMConfiguration::InstallAccessors(
          isolate, world, instance_object, prototype_object, interface_object,
          signature, accessor_configurations,
          base::size(accessor_configurations));
    }
    if (is_secure_context) {
      static const V8DOMConfiguration::AttributeConfiguration attribute_configurations[] = {
          { "AudioWorklet", V8WindowPartial::AudioWorkletConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kReplaceWithDataProperty, V8DOMConfiguration::kAllWorlds },
          { "Cache", V8WindowPartial::CacheConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kReplaceWithDataProperty, V8DOMConfiguration::kAllWorlds },
          { "CacheStorage", V8WindowPartial::CacheStorageConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kReplaceWithDataProperty, V8DOMConfiguration::kAllWorlds },
          { "Clipboard", V8WindowPartial::ClipboardConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kReplaceWithDataProperty, V8DOMConfiguration::kAllWorlds },
          { "Credential", V8WindowPartial::CredentialConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kReplaceWithDataProperty, V8DOMConfiguration::kAllWorlds },
          { "CredentialsContainer", V8WindowPartial::CredentialsContainerConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kReplaceWithDataProperty, V8DOMConfiguration::kAllWorlds },
          { "FederatedCredential", V8WindowPartial::FederatedCredentialConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kReplaceWithDataProperty, V8DOMConfiguration::kAllWorlds },
          { "Keyboard", V8WindowPartial::KeyboardConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kReplaceWithDataProperty, V8DOMConfiguration::kAllWorlds },
          { "KeyboardLayoutMap", V8WindowPartial::KeyboardLayoutMapConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kReplaceWithDataProperty, V8DOMConfiguration::kAllWorlds },
          { "Lock", V8WindowPartial::LockConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kReplaceWithDataProperty, V8DOMConfiguration::kAllWorlds },
          { "LockManager", V8WindowPartial::LockManagerConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kReplaceWithDataProperty, V8DOMConfiguration::kAllWorlds },
          { "MediaDeviceInfo", V8WindowPartial::MediaDeviceInfoConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kReplaceWithDataProperty, V8DOMConfiguration::kAllWorlds },
          { "MediaDevices", V8WindowPartial::MediaDevicesConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kReplaceWithDataProperty, V8DOMConfiguration::kAllWorlds },
          { "MediaKeyMessageEvent", V8WindowPartial::MediaKeyMessageEventConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kReplaceWithDataProperty, V8DOMConfiguration::kAllWorlds },
          { "MediaKeys", V8WindowPartial::MediaKeysConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kReplaceWithDataProperty, V8DOMConfiguration::kAllWorlds },
          { "MediaKeySession", V8WindowPartial::MediaKeySessionConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kReplaceWithDataProperty, V8DOMConfiguration::kAllWorlds },
          { "MediaKeyStatusMap", V8WindowPartial::MediaKeyStatusMapConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kReplaceWithDataProperty, V8DOMConfiguration::kAllWorlds },
          { "MediaKeySystemAccess", V8WindowPartial::MediaKeySystemAccessConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kReplaceWithDataProperty, V8DOMConfiguration::kAllWorlds },
          { "NavigationPreloadManager", V8WindowPartial::NavigationPreloadManagerConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kReplaceWithDataProperty, V8DOMConfiguration::kAllWorlds },
          { "PasswordCredential", V8WindowPartial::PasswordCredentialConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kReplaceWithDataProperty, V8DOMConfiguration::kAllWorlds },
          { "RTCIceTransport", V8WindowPartial::RTCIceTransportConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kReplaceWithDataProperty, V8DOMConfiguration::kAllWorlds },
          { "ServiceWorker", V8WindowPartial::ServiceWorkerConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kReplaceWithDataProperty, V8DOMConfiguration::kAllWorlds },
          { "ServiceWorkerContainer", V8WindowPartial::ServiceWorkerContainerConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kReplaceWithDataProperty, V8DOMConfiguration::kAllWorlds },
          { "ServiceWorkerRegistration", V8WindowPartial::ServiceWorkerRegistrationConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kReplaceWithDataProperty, V8DOMConfiguration::kAllWorlds },
          { "StorageManager", V8WindowPartial::StorageManagerConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kReplaceWithDataProperty, V8DOMConfiguration::kAllWorlds },
      };
      V8DOMConfiguration::InstallAttributes(
          isolate, world, instance_object, prototype_object,
          attribute_configurations, base::size(attribute_configurations));
      if (RuntimeEnabledFeatures::IdleDetectionEnabled()) {
        static const V8DOMConfiguration::AttributeConfiguration attribute_configurations[] = {
            { "IdleDetector", V8WindowPartial::IdleDetectorConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kReplaceWithDataProperty, V8DOMConfiguration::kAllWorlds },
            { "IdleState", V8WindowPartial::IdleStateConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kReplaceWithDataProperty, V8DOMConfiguration::kAllWorlds },
        };
        V8DOMConfiguration::InstallAttributes(
            isolate, world, instance_object, prototype_object,
            attribute_configurations, base::size(attribute_configurations));
      }
      if (RuntimeEnabledFeatures::PaymentMethodChangeEventEnabled()) {
        static const V8DOMConfiguration::AttributeConfiguration attribute_configurations[] = {
            { "PaymentMethodChangeEvent", V8WindowPartial::PaymentMethodChangeEventConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kReplaceWithDataProperty, V8DOMConfiguration::kAllWorlds },
        };
        V8DOMConfiguration::InstallAttributes(
            isolate, world, instance_object, prototype_object,
            attribute_configurations, base::size(attribute_configurations));
      }
      if (RuntimeEnabledFeatures::PaymentRequestEnabled()) {
        static const V8DOMConfiguration::AttributeConfiguration attribute_configurations[] = {
            { "PaymentAddress", V8WindowPartial::PaymentAddressConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kReplaceWithDataProperty, V8DOMConfiguration::kAllWorlds },
            { "PaymentRequest", V8WindowPartial::PaymentRequestConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kReplaceWithDataProperty, V8DOMConfiguration::kAllWorlds },
            { "PaymentResponse", V8WindowPartial::PaymentResponseConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kReplaceWithDataProperty, V8DOMConfiguration::kAllWorlds },
        };
        V8DOMConfiguration::InstallAttributes(
            isolate, world, instance_object, prototype_object,
            attribute_configurations, base::size(attribute_configurations));
      }
      if (RuntimeEnabledFeatures::PaymentRequestMerchantValidationEventEnabled()) {
        static const V8DOMConfiguration::AttributeConfiguration attribute_configurations[] = {
            { "MerchantValidationEvent", V8WindowPartial::MerchantValidationEventConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kReplaceWithDataProperty, V8DOMConfiguration::kAllWorlds },
        };
        V8DOMConfiguration::InstallAttributes(
            isolate, world, instance_object, prototype_object,
            attribute_configurations, base::size(attribute_configurations));
      }
      if (RuntimeEnabledFeatures::PresentationEnabled()) {
        static const V8DOMConfiguration::AttributeConfiguration attribute_configurations[] = {
            { "Presentation", V8WindowPartial::PresentationConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kReplaceWithDataProperty, V8DOMConfiguration::kAllWorlds },
            { "PresentationAvailability", V8WindowPartial::PresentationAvailabilityConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kReplaceWithDataProperty, V8DOMConfiguration::kAllWorlds },
            { "PresentationConnection", V8WindowPartial::PresentationConnectionConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kReplaceWithDataProperty, V8DOMConfiguration::kAllWorlds },
            { "PresentationConnectionAvailableEvent", V8WindowPartial::PresentationConnectionAvailableEventConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kReplaceWithDataProperty, V8DOMConfiguration::kAllWorlds },
            { "PresentationConnectionCloseEvent", V8WindowPartial::PresentationConnectionCloseEventConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kReplaceWithDataProperty, V8DOMConfiguration::kAllWorlds },
            { "PresentationConnectionList", V8WindowPartial::PresentationConnectionListConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kReplaceWithDataProperty, V8DOMConfiguration::kAllWorlds },
            { "PresentationReceiver", V8WindowPartial::PresentationReceiverConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kReplaceWithDataProperty, V8DOMConfiguration::kAllWorlds },
            { "PresentationRequest", V8WindowPartial::PresentationRequestConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kReplaceWithDataProperty, V8DOMConfiguration::kAllWorlds },
        };
        V8DOMConfiguration::InstallAttributes(
            isolate, world, instance_object, prototype_object,
            attribute_configurations, base::size(attribute_configurations));
      }
      if (RuntimeEnabledFeatures::SensorEnabled()) {
        static const V8DOMConfiguration::AttributeConfiguration attribute_configurations[] = {
            { "AbsoluteOrientationSensor", V8WindowPartial::AbsoluteOrientationSensorConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kReplaceWithDataProperty, V8DOMConfiguration::kAllWorlds },
            { "Accelerometer", V8WindowPartial::AccelerometerConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kReplaceWithDataProperty, V8DOMConfiguration::kAllWorlds },
            { "Gyroscope", V8WindowPartial::GyroscopeConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kReplaceWithDataProperty, V8DOMConfiguration::kAllWorlds },
            { "LinearAccelerationSensor", V8WindowPartial::LinearAccelerationSensorConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kReplaceWithDataProperty, V8DOMConfiguration::kAllWorlds },
            { "OrientationSensor", V8WindowPartial::OrientationSensorConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kReplaceWithDataProperty, V8DOMConfiguration::kAllWorlds },
            { "RelativeOrientationSensor", V8WindowPartial::RelativeOrientationSensorConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kReplaceWithDataProperty, V8DOMConfiguration::kAllWorlds },
            { "Sensor", V8WindowPartial::SensorConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kReplaceWithDataProperty, V8DOMConfiguration::kAllWorlds },
            { "SensorErrorEvent", V8WindowPartial::SensorErrorEventConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kReplaceWithDataProperty, V8DOMConfiguration::kAllWorlds },
        };
        V8DOMConfiguration::InstallAttributes(
            isolate, world, instance_object, prototype_object,
            attribute_configurations, base::size(attribute_configurations));
      }
      if (RuntimeEnabledFeatures::SensorExtraClassesEnabled()) {
        static const V8DOMConfiguration::AttributeConfiguration attribute_configurations[] = {
            { "AmbientLightSensor", V8WindowPartial::AmbientLightSensorConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kReplaceWithDataProperty, V8DOMConfiguration::kAllWorlds },
            { "Magnetometer", V8WindowPartial::MagnetometerConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kReplaceWithDataProperty, V8DOMConfiguration::kAllWorlds },
        };
        V8DOMConfiguration::InstallAttributes(
            isolate, world, instance_object, prototype_object,
            attribute_configurations, base::size(attribute_configurations));
      }
      if (RuntimeEnabledFeatures::SerialEnabled()) {
        static const V8DOMConfiguration::AttributeConfiguration attribute_configurations[] = {
            { "Serial", V8WindowPartial::SerialConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kReplaceWithDataProperty, V8DOMConfiguration::kAllWorlds },
            { "SerialPort", V8WindowPartial::SerialPortConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kReplaceWithDataProperty, V8DOMConfiguration::kAllWorlds },
        };
        V8DOMConfiguration::InstallAttributes(
            isolate, world, instance_object, prototype_object,
            attribute_configurations, base::size(attribute_configurations));
      }
      if (RuntimeEnabledFeatures::SmsReceiverEnabled()) {
        static const V8DOMConfiguration::AttributeConfiguration attribute_configurations[] = {
            { "SMS", V8WindowPartial::SMSConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kReplaceWithDataProperty, V8DOMConfiguration::kAllWorlds },
            { "SMSReceiver", V8WindowPartial::SMSReceiverConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kReplaceWithDataProperty, V8DOMConfiguration::kAllWorlds },
        };
        V8DOMConfiguration::InstallAttributes(
            isolate, world, instance_object, prototype_object,
            attribute_configurations, base::size(attribute_configurations));
      }
      if (RuntimeEnabledFeatures::WakeLockNavigatorEnabled()) {
        static const V8DOMConfiguration::AttributeConfiguration attribute_configurations[] = {
            { "WakeLock", V8WindowPartial::WakeLockConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kReplaceWithDataProperty, V8DOMConfiguration::kAllWorlds },
            { "WakeLockRequest", V8WindowPartial::WakeLockRequestConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kReplaceWithDataProperty, V8DOMConfiguration::kAllWorlds },
        };
        V8DOMConfiguration::InstallAttributes(
            isolate, world, instance_object, prototype_object,
            attribute_configurations, base::size(attribute_configurations));
      }
      if (RuntimeEnabledFeatures::WebAuthEnabled()) {
        static const V8DOMConfiguration::AttributeConfiguration attribute_configurations[] = {
            { "AuthenticatorAssertionResponse", V8WindowPartial::AuthenticatorAssertionResponseConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kReplaceWithDataProperty, V8DOMConfiguration::kAllWorlds },
            { "AuthenticatorAttestationResponse", V8WindowPartial::AuthenticatorAttestationResponseConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kReplaceWithDataProperty, V8DOMConfiguration::kAllWorlds },
            { "AuthenticatorResponse", V8WindowPartial::AuthenticatorResponseConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kReplaceWithDataProperty, V8DOMConfiguration::kAllWorlds },
            { "PublicKeyCredential", V8WindowPartial::PublicKeyCredentialConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kReplaceWithDataProperty, V8DOMConfiguration::kAllWorlds },
        };
        V8DOMConfiguration::InstallAttributes(
            isolate, world, instance_object, prototype_object,
            attribute_configurations, base::size(attribute_configurations));
      }
      if (RuntimeEnabledFeatures::WebBluetoothEnabled()) {
        static const V8DOMConfiguration::AttributeConfiguration attribute_configurations[] = {
            { "Bluetooth", V8WindowPartial::BluetoothConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kReplaceWithDataProperty, V8DOMConfiguration::kAllWorlds },
            { "BluetoothCharacteristicProperties", V8WindowPartial::BluetoothCharacteristicPropertiesConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kReplaceWithDataProperty, V8DOMConfiguration::kAllWorlds },
            { "BluetoothDevice", V8WindowPartial::BluetoothDeviceConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kReplaceWithDataProperty, V8DOMConfiguration::kAllWorlds },
            { "BluetoothRemoteGATTCharacteristic", V8WindowPartial::BluetoothRemoteGATTCharacteristicConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kReplaceWithDataProperty, V8DOMConfiguration::kAllWorlds },
            { "BluetoothRemoteGATTDescriptor", V8WindowPartial::BluetoothRemoteGATTDescriptorConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kReplaceWithDataProperty, V8DOMConfiguration::kAllWorlds },
            { "BluetoothRemoteGATTServer", V8WindowPartial::BluetoothRemoteGATTServerConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kReplaceWithDataProperty, V8DOMConfiguration::kAllWorlds },
            { "BluetoothRemoteGATTService", V8WindowPartial::BluetoothRemoteGATTServiceConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kReplaceWithDataProperty, V8DOMConfiguration::kAllWorlds },
        };
        V8DOMConfiguration::InstallAttributes(
            isolate, world, instance_object, prototype_object,
            attribute_configurations, base::size(attribute_configurations));
      }
      if (RuntimeEnabledFeatures::WebBluetoothScanningEnabled()) {
        static const V8DOMConfiguration::AttributeConfiguration attribute_configurations[] = {
            { "BluetoothAdvertisingEvent", V8WindowPartial::BluetoothAdvertisingEventConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kReplaceWithDataProperty, V8DOMConfiguration::kAllWorlds },
            { "BluetoothLEScan", V8WindowPartial::BluetoothLEScanConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kReplaceWithDataProperty, V8DOMConfiguration::kAllWorlds },
            { "BluetoothManufacturerDataMap", V8WindowPartial::BluetoothManufacturerDataMapConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kReplaceWithDataProperty, V8DOMConfiguration::kAllWorlds },
            { "BluetoothServiceDataMap", V8WindowPartial::BluetoothServiceDataMapConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kReplaceWithDataProperty, V8DOMConfiguration::kAllWorlds },
        };
        V8DOMConfiguration::InstallAttributes(
            isolate, world, instance_object, prototype_object,
            attribute_configurations, base::size(attribute_configurations));
      }
      if (RuntimeEnabledFeatures::WebHIDEnabled()) {
        static const V8DOMConfiguration::AttributeConfiguration attribute_configurations[] = {
            { "HID", V8WindowPartial::HIDConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kReplaceWithDataProperty, V8DOMConfiguration::kAllWorlds },
            { "HIDCollectionInfo", V8WindowPartial::HIDCollectionInfoConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kReplaceWithDataProperty, V8DOMConfiguration::kAllWorlds },
            { "HIDConnectionEvent", V8WindowPartial::HIDConnectionEventConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kReplaceWithDataProperty, V8DOMConfiguration::kAllWorlds },
            { "HIDDevice", V8WindowPartial::HIDDeviceConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kReplaceWithDataProperty, V8DOMConfiguration::kAllWorlds },
            { "HIDInputReportEvent", V8WindowPartial::HIDInputReportEventConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kReplaceWithDataProperty, V8DOMConfiguration::kAllWorlds },
            { "HIDReportInfo", V8WindowPartial::HIDReportInfoConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kReplaceWithDataProperty, V8DOMConfiguration::kAllWorlds },
            { "HIDReportItem", V8WindowPartial::HIDReportItemConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kReplaceWithDataProperty, V8DOMConfiguration::kAllWorlds },
        };
        V8DOMConfiguration::InstallAttributes(
            isolate, world, instance_object, prototype_object,
            attribute_configurations, base::size(attribute_configurations));
      }
      if (RuntimeEnabledFeatures::WebNFCEnabled()) {
        static const V8DOMConfiguration::AttributeConfiguration attribute_configurations[] = {
            { "NFC", V8WindowPartial::NFCConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kReplaceWithDataProperty, V8DOMConfiguration::kAllWorlds },
        };
        V8DOMConfiguration::InstallAttributes(
            isolate, world, instance_object, prototype_object,
            attribute_configurations, base::size(attribute_configurations));
      }
      if (RuntimeEnabledFeatures::WebUSBEnabled()) {
        static const V8DOMConfiguration::AttributeConfiguration attribute_configurations[] = {
            { "USB", V8WindowPartial::USBConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kReplaceWithDataProperty, V8DOMConfiguration::kAllWorlds },
            { "USBAlternateInterface", V8WindowPartial::USBAlternateInterfaceConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kReplaceWithDataProperty, V8DOMConfiguration::kAllWorlds },
            { "USBConfiguration", V8WindowPartial::USBConfigurationConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kReplaceWithDataProperty, V8DOMConfiguration::kAllWorlds },
            { "USBConnectionEvent", V8WindowPartial::USBConnectionEventConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kReplaceWithDataProperty, V8DOMConfiguration::kAllWorlds },
            { "USBDevice", V8WindowPartial::USBDeviceConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kReplaceWithDataProperty, V8DOMConfiguration::kAllWorlds },
            { "USBEndpoint", V8WindowPartial::USBEndpointConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kReplaceWithDataProperty, V8DOMConfiguration::kAllWorlds },
            { "USBInterface", V8WindowPartial::USBInterfaceConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kReplaceWithDataProperty, V8DOMConfiguration::kAllWorlds },
            { "USBInTransferResult", V8WindowPartial::USBInTransferResultConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kReplaceWithDataProperty, V8DOMConfiguration::kAllWorlds },
            { "USBIsochronousInTransferPacket", V8WindowPartial::USBIsochronousInTransferPacketConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kReplaceWithDataProperty, V8DOMConfiguration::kAllWorlds },
            { "USBIsochronousInTransferResult", V8WindowPartial::USBIsochronousInTransferResultConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kReplaceWithDataProperty, V8DOMConfiguration::kAllWorlds },
            { "USBIsochronousOutTransferPacket", V8WindowPartial::USBIsochronousOutTransferPacketConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kReplaceWithDataProperty, V8DOMConfiguration::kAllWorlds },
            { "USBIsochronousOutTransferResult", V8WindowPartial::USBIsochronousOutTransferResultConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kReplaceWithDataProperty, V8DOMConfiguration::kAllWorlds },
            { "USBOutTransferResult", V8WindowPartial::USBOutTransferResultConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kReplaceWithDataProperty, V8DOMConfiguration::kAllWorlds },
        };
        V8DOMConfiguration::InstallAttributes(
            isolate, world, instance_object, prototype_object,
            attribute_configurations, base::size(attribute_configurations));
      }
      if (RuntimeEnabledFeatures::WebXRHitTestEnabled()) {
        static const V8DOMConfiguration::AttributeConfiguration attribute_configurations[] = {
            { "XRHitResult", V8WindowPartial::XRHitResultConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kReplaceWithDataProperty, V8DOMConfiguration::kAllWorlds },
            { "XRRay", V8WindowPartial::XRRayConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kReplaceWithDataProperty, V8DOMConfiguration::kAllWorlds },
        };
        V8DOMConfiguration::InstallAttributes(
            isolate, world, instance_object, prototype_object,
            attribute_configurations, base::size(attribute_configurations));
      }
      if (RuntimeEnabledFeatures::WebXRPlaneDetectionEnabled()) {
        static const V8DOMConfiguration::AttributeConfiguration attribute_configurations[] = {
            { "XRPlane", V8WindowPartial::XRPlaneConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kReplaceWithDataProperty, V8DOMConfiguration::kAllWorlds },
            { "XRPlaneDetectionState", V8WindowPartial::XRPlaneDetectionStateConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kReplaceWithDataProperty, V8DOMConfiguration::kAllWorlds },
            { "XRWorldInformation", V8WindowPartial::XRWorldInformationConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kReplaceWithDataProperty, V8DOMConfiguration::kAllWorlds },
            { "XRWorldTrackingState", V8WindowPartial::XRWorldTrackingStateConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kReplaceWithDataProperty, V8DOMConfiguration::kAllWorlds },
        };
        V8DOMConfiguration::InstallAttributes(
            isolate, world, instance_object, prototype_object,
            attribute_configurations, base::size(attribute_configurations));
      }
    }
    if (is_secure_context || !RuntimeEnabledFeatures::RestrictDeviceSensorEventsToSecureContextsEnabled()) {
      static const V8DOMConfiguration::AttributeConfiguration attribute_configurations[] = {
          { "DeviceMotionEvent", V8WindowPartial::DeviceMotionEventConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kReplaceWithDataProperty, V8DOMConfiguration::kAllWorlds },
          { "DeviceMotionEventAcceleration", V8WindowPartial::DeviceMotionEventAccelerationConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kReplaceWithDataProperty, V8DOMConfiguration::kAllWorlds },
          { "DeviceMotionEventRotationRate", V8WindowPartial::DeviceMotionEventRotationRateConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kReplaceWithDataProperty, V8DOMConfiguration::kAllWorlds },
          { "DeviceOrientationEvent", V8WindowPartial::DeviceOrientationEventConstructorGetterCallback, nullptr, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kReplaceWithDataProperty, V8DOMConfiguration::kAllWorlds },
      };
      V8DOMConfiguration::InstallAttributes(
          isolate, world, instance_object, prototype_object,
          attribute_configurations, base::size(attribute_configurations));
    }
    if (is_secure_context) {
      if (RuntimeEnabledFeatures::NativeFileSystemEnabled()) {
        {
          // Install chooseFileSystemEntries configuration
          const V8DOMConfiguration::MethodConfiguration kConfigurations[] = {
              {"chooseFileSystemEntries", V8WindowPartial::ChooseFileSystemEntriesMethodCallback, 0, v8::None, V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kDoNotCheckHolder, V8DOMConfiguration::kCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds}
          };
          for (const auto& config : kConfigurations) {
            V8DOMConfiguration::InstallMethod(
                isolate, world, instance_object, prototype_object,
                interface_object, signature, config);
          }
        }
      }
    }
  }
}

void V8WindowPartial::Initialize() {
  // Should be invoked from ModulesInitializer.
  V8Window::UpdateWrapperTypeInfo(
      &V8WindowPartial::InstallV8WindowTemplate,
      &V8WindowPartial::InstallRuntimeEnabledFeaturesImpl,
      &V8WindowPartial::InstallRuntimeEnabledFeaturesOnTemplate,
      V8WindowPartial::InstallConditionalFeatures);
}

}  // namespace blink
