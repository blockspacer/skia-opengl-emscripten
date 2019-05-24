// Copyright (c) 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// Generated from template:
//   templates/event_factory.cc.tmpl
// and input files:
//   gen/third_party/blink/renderer/modules/event_interface_modules_names.json5


#include "third_party/blink/renderer/modules/event_modules_factory.h"

#include "third_party/blink/renderer/core/frame/deprecation.h"
#include "third_party/blink/renderer/modules/app_banner/before_install_prompt_event.h"
#include "third_party/blink/renderer/modules/background_fetch/background_fetch_event.h"
#include "third_party/blink/renderer/modules/background_fetch/background_fetch_update_ui_event.h"
#include "third_party/blink/renderer/modules/background_sync/sync_event.h"
#include "third_party/blink/renderer/modules/cookie_store/cookie_change_event.h"
#include "third_party/blink/renderer/modules/cookie_store/extendable_cookie_change_event.h"
#include "third_party/blink/renderer/modules/device_orientation/device_motion_event.h"
#include "third_party/blink/renderer/modules/device_orientation/device_orientation_event.h"
#include "third_party/blink/renderer/modules/encryptedmedia/media_encrypted_event.h"
#include "third_party/blink/renderer/modules/encryptedmedia/media_key_message_event.h"
#include "third_party/blink/renderer/modules/gamepad/gamepad_axis_event.h"
#include "third_party/blink/renderer/modules/gamepad/gamepad_button_event.h"
#include "third_party/blink/renderer/modules/gamepad/gamepad_event.h"
#include "third_party/blink/renderer/modules/indexeddb/idb_version_change_event.h"
#include "third_party/blink/renderer/modules/mediarecorder/blob_event.h"
#include "third_party/blink/renderer/modules/mediastream/media_stream_event.h"
#include "third_party/blink/renderer/modules/mediastream/media_stream_track_event.h"
#include "third_party/blink/renderer/modules/notifications/notification_event.h"
#include "third_party/blink/renderer/modules/payments/abort_payment_event.h"
#include "third_party/blink/renderer/modules/payments/can_make_payment_event.h"
#include "third_party/blink/renderer/modules/payments/merchant_validation_event.h"
#include "third_party/blink/renderer/modules/payments/payment_method_change_event.h"
#include "third_party/blink/renderer/modules/payments/payment_method_change_response.h"
#include "third_party/blink/renderer/modules/payments/payment_request_event.h"
#include "third_party/blink/renderer/modules/payments/payment_request_update_event.h"
#include "third_party/blink/renderer/modules/peerconnection/rtc_data_channel_event.h"
#include "third_party/blink/renderer/modules/peerconnection/rtc_dtmf_tone_change_event.h"
#include "third_party/blink/renderer/modules/peerconnection/rtc_peer_connection_ice_event.h"
#include "third_party/blink/renderer/modules/peerconnection/rtc_quic_stream_event.h"
#include "third_party/blink/renderer/modules/picture_in_picture/enter_picture_in_picture_event.h"
#include "third_party/blink/renderer/modules/presentation/presentation_connection_available_event.h"
#include "third_party/blink/renderer/modules/presentation/presentation_connection_close_event.h"
#include "third_party/blink/renderer/modules/push_messaging/push_event.h"
#include "third_party/blink/renderer/modules/sensor/sensor_error_event.h"
#include "third_party/blink/renderer/modules/service_worker/extendable_event.h"
#include "third_party/blink/renderer/modules/service_worker/extendable_message_event.h"
#include "third_party/blink/renderer/modules/service_worker/fetch_event.h"
#include "third_party/blink/renderer/modules/service_worker/install_event.h"
#include "third_party/blink/renderer/modules/speech/speech_recognition_error.h"
#include "third_party/blink/renderer/modules/speech/speech_recognition_event.h"
#include "third_party/blink/renderer/modules/speech/speech_synthesis_error_event.h"
#include "third_party/blink/renderer/modules/speech/speech_synthesis_event.h"
#include "third_party/blink/renderer/modules/storage/storage_event.h"
#include "third_party/blink/renderer/modules/vr/vr_display_event.h"
#include "third_party/blink/renderer/modules/webaudio/audio_processing_event.h"
#include "third_party/blink/renderer/modules/webaudio/offline_audio_completion_event.h"
#include "third_party/blink/renderer/modules/webgl/webgl_context_event.h"
#include "third_party/blink/renderer/modules/webmidi/midi_connection_event.h"
#include "third_party/blink/renderer/modules/webmidi/midi_message_event.h"
#include "third_party/blink/renderer/modules/websockets/close_event.h"
#include "third_party/blink/renderer/modules/xr/xr_input_source_event.h"
#include "third_party/blink/renderer/modules/xr/xr_reference_space_event.h"
#include "third_party/blink/renderer/modules/xr/xr_session_event.h"
#include "third_party/blink/renderer/platform/runtime_enabled_features.h"

namespace blink {

Event* EventModulesFactory::Create(ExecutionContext* executionContext, const String& type) {
  if (DeprecatedEqualIgnoringCase(type, "DeviceMotionEvent")) {
    UseCounter::Count(executionContext, WebFeature::kDocumentCreateEventDeviceMotionEvent);
    return DeviceMotionEvent::Create();
  }
  if (DeprecatedEqualIgnoringCase(type, "DeviceOrientationEvent")) {
    UseCounter::Count(executionContext, WebFeature::kDocumentCreateEventDeviceOrientationEvent);
    return DeviceOrientationEvent::Create();
  }
  if (DeprecatedEqualIgnoringCase(type, "IDBVersionChangeEvent")) {
    UseCounter::Count(executionContext, WebFeature::kDocumentCreateEventIDBVersionChangeEvent);
    return IDBVersionChangeEvent::Create();
  }
  if (DeprecatedEqualIgnoringCase(type, "StorageEvent")) {
    UseCounter::Count(executionContext, WebFeature::kDocumentCreateEventStorageEvent);
    return StorageEvent::Create();
  }
  if (DeprecatedEqualIgnoringCase(type, "WebGLContextEvent")) {
    UseCounter::Count(executionContext, WebFeature::kDocumentCreateEventWebGLContextEvent);
    return WebGLContextEvent::Create();
  }
  if (DeprecatedEqualIgnoringCase(type, "CloseEvent")) {
    UseCounter::Count(executionContext, WebFeature::kDocumentCreateEventCloseEvent);
    return CloseEvent::Create();
  }
  return nullptr;
}

} // namespace blink
