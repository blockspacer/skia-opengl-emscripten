// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated from the Jinja2 template
// third_party/blink/renderer/bindings/templates/partial_interface.cc.tmpl
// by the script code_generator_v8.py.
// DO NOT MODIFY!

// clang-format off
#include "third_party/blink/renderer/bindings/modules/v8/v8_navigator_partial.h"

#include <algorithm>

#include "base/memory/scoped_refptr.h"
#include "third_party/blink/renderer/bindings/core/v8/idl_types.h"
#include "third_party/blink/renderer/bindings/core/v8/native_value_traits_impl.h"
#include "third_party/blink/renderer/bindings/core/v8/script_promise.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_array_buffer_view.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_blob.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_dom_configuration.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_form_data.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_navigator.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_bluetooth.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_clipboard.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_contacts_manager.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_credentials_container.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_deprecated_storage_quota.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_gamepad_list.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_geolocation.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_gpu.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_hid.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_keyboard.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_lock_manager.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_media_capabilities.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_media_devices.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_media_key_system_configuration.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_media_session.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_media_stream_constraints.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_midi_options.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_mime_type_array.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_navigator_user_media_error_callback.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_navigator_user_media_success_callback.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_network_information.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_nfc.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_permissions.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_plugin_array.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_presentation.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_serial.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_service_worker_container.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_share_data.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_storage_manager.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_usb.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_xr.h"
#include "third_party/blink/renderer/core/execution_context/execution_context.h"
#include "third_party/blink/renderer/core/frame/dactyloscoper.h"
#include "third_party/blink/renderer/core/frame/use_counter.h"
#include "third_party/blink/renderer/core/typed_arrays/array_buffer_view_helpers.h"
#include "third_party/blink/renderer/core/typed_arrays/flexible_array_buffer_view.h"
#include "third_party/blink/renderer/modules/battery/navigator_battery.h"
#include "third_party/blink/renderer/modules/beacon/navigator_beacon.h"
#include "third_party/blink/renderer/modules/bluetooth/navigator_bluetooth.h"
#include "third_party/blink/renderer/modules/clipboard/navigator_clipboard.h"
#include "third_party/blink/renderer/modules/contacts_picker/navigator_contacts.h"
#include "third_party/blink/renderer/modules/credentialmanager/navigator_credentials.h"
#include "third_party/blink/renderer/modules/donottrack/navigator_do_not_track.h"
#include "third_party/blink/renderer/modules/encryptedmedia/navigator_request_media_key_system_access.h"
#include "third_party/blink/renderer/modules/gamepad/navigator_gamepad.h"
#include "third_party/blink/renderer/modules/geolocation/navigator_geolocation.h"
#include "third_party/blink/renderer/modules/hid/navigator_hid.h"
#include "third_party/blink/renderer/modules/installedapp/navigator_installed_app.h"
#include "third_party/blink/renderer/modules/keyboard/navigator_keyboard.h"
#include "third_party/blink/renderer/modules/locks/navigator_locks.h"
#include "third_party/blink/renderer/modules/media_capabilities/navigator_media_capabilities.h"
#include "third_party/blink/renderer/modules/mediasession/navigator_media_session.h"
#include "third_party/blink/renderer/modules/mediastream/navigator_media_stream.h"
#include "third_party/blink/renderer/modules/mediastream/navigator_user_media.h"
#include "third_party/blink/renderer/modules/navigatorcontentutils/navigator_content_utils.h"
#include "third_party/blink/renderer/modules/netinfo/navigator_network_information.h"
#include "third_party/blink/renderer/modules/nfc/navigator_nfc.h"
#include "third_party/blink/renderer/modules/permissions/navigator_permissions.h"
#include "third_party/blink/renderer/modules/plugins/navigator_plugins.h"
#include "third_party/blink/renderer/modules/presentation/navigator_presentation.h"
#include "third_party/blink/renderer/modules/quota/navigator_storage_quota.h"
#include "third_party/blink/renderer/modules/serial/navigator_serial.h"
#include "third_party/blink/renderer/modules/service_worker/navigator_service_worker.h"
#include "third_party/blink/renderer/modules/vibration/navigator_vibration.h"
#include "third_party/blink/renderer/modules/vr/navigator_vr.h"
#include "third_party/blink/renderer/modules/wake_lock/navigator_wake_lock.h"
#include "third_party/blink/renderer/modules/webgpu/navigator_gpu.h"
#include "third_party/blink/renderer/modules/webmidi/navigator_web_midi.h"
#include "third_party/blink/renderer/modules/webshare/navigator_share.h"
#include "third_party/blink/renderer/modules/webusb/navigator_usb.h"
#include "third_party/blink/renderer/modules/xr/navigator_xr.h"
#include "third_party/blink/renderer/platform/bindings/exception_messages.h"
#include "third_party/blink/renderer/platform/bindings/exception_state.h"
#include "third_party/blink/renderer/platform/bindings/runtime_call_stats.h"
#include "third_party/blink/renderer/platform/bindings/script_state.h"
#include "third_party/blink/renderer/platform/bindings/v8_object_constructor.h"
#include "third_party/blink/renderer/platform/bindings/v8_per_context_data.h"
#include "third_party/blink/renderer/platform/bindings/v8_private_property.h"
#include "third_party/blink/renderer/platform/runtime_enabled_features.h"
#include "third_party/blink/renderer/platform/scheduler/public/cooperative_scheduling_manager.h"
#include "third_party/blink/renderer/platform/wtf/get_ptr.h"

namespace blink {

namespace navigator_partial_v8_internal {

static void BluetoothAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  Navigator* impl = V8Navigator::ToImpl(holder);

  Bluetooth* cpp_value(NavigatorBluetooth::bluetooth(*impl));

  // Keep the wrapper object for the return value alive as long as |this|
  // object is alive in order to save creation time of the wrapper object.
  if (cpp_value && DOMDataStore::SetReturnValue(info.GetReturnValue(), cpp_value))
    return;
  v8::Local<v8::Value> v8_value(ToV8(cpp_value, holder, info.GetIsolate()));
  V8PrivateProperty::GetSymbol(
      info.GetIsolate(), "KeepAlive#Navigator#bluetooth")
      .Set(holder, v8_value);

  V8SetReturnValue(info, v8_value);
}

static void ClipboardAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  Navigator* impl = V8Navigator::ToImpl(holder);

  ScriptState* script_state = ScriptState::ForRelevantRealm(info);

  Clipboard* cpp_value(NavigatorClipboard::clipboard(script_state, *impl));

  // Keep the wrapper object for the return value alive as long as |this|
  // object is alive in order to save creation time of the wrapper object.
  if (cpp_value && DOMDataStore::SetReturnValue(info.GetReturnValue(), cpp_value))
    return;
  v8::Local<v8::Value> v8_value(ToV8(cpp_value, holder, info.GetIsolate()));
  V8PrivateProperty::GetSymbol(
      info.GetIsolate(), "KeepAlive#Navigator#clipboard")
      .Set(holder, v8_value);

  V8SetReturnValue(info, v8_value);
}

static void ContactsAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  Navigator* impl = V8Navigator::ToImpl(holder);

  ContactsManager* cpp_value(NavigatorContacts::contacts(*impl));

  // Keep the wrapper object for the return value alive as long as |this|
  // object is alive in order to save creation time of the wrapper object.
  if (cpp_value && DOMDataStore::SetReturnValue(info.GetReturnValue(), cpp_value))
    return;
  v8::Local<v8::Value> v8_value(ToV8(cpp_value, holder, info.GetIsolate()));
  V8PrivateProperty::GetSymbol(
      info.GetIsolate(), "KeepAlive#Navigator#contacts")
      .Set(holder, v8_value);

  V8SetReturnValue(info, v8_value);
}

static void CredentialsAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  Navigator* impl = V8Navigator::ToImpl(holder);

  CredentialsContainer* cpp_value(NavigatorCredentials::credentials(*impl));

  // Keep the wrapper object for the return value alive as long as |this|
  // object is alive in order to save creation time of the wrapper object.
  if (cpp_value && DOMDataStore::SetReturnValue(info.GetReturnValue(), cpp_value))
    return;
  v8::Local<v8::Value> v8_value(ToV8(cpp_value, holder, info.GetIsolate()));
  V8PrivateProperty::GetSymbol(
      info.GetIsolate(), "KeepAlive#Navigator#credentials")
      .Set(holder, v8_value);

  V8SetReturnValue(info, v8_value);
}

static void DoNotTrackAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  Navigator* impl = V8Navigator::ToImpl(holder);

  V8SetReturnValueStringOrNull(info, NavigatorDoNotTrack::doNotTrack(*impl), info.GetIsolate());
}

static void GeolocationAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  Navigator* impl = V8Navigator::ToImpl(holder);

  Geolocation* cpp_value(NavigatorGeolocation::geolocation(*impl));

  // Keep the wrapper object for the return value alive as long as |this|
  // object is alive in order to save creation time of the wrapper object.
  if (cpp_value && DOMDataStore::SetReturnValue(info.GetReturnValue(), cpp_value))
    return;
  v8::Local<v8::Value> v8_value(ToV8(cpp_value, holder, info.GetIsolate()));
  V8PrivateProperty::GetSymbol(
      info.GetIsolate(), "KeepAlive#Navigator#geolocation")
      .Set(holder, v8_value);

  V8SetReturnValue(info, v8_value);
}

static void HidAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  Navigator* impl = V8Navigator::ToImpl(holder);

  HID* cpp_value(NavigatorHID::hid(*impl));

  // Keep the wrapper object for the return value alive as long as |this|
  // object is alive in order to save creation time of the wrapper object.
  if (cpp_value && DOMDataStore::SetReturnValue(info.GetReturnValue(), cpp_value))
    return;
  v8::Local<v8::Value> v8_value(ToV8(cpp_value, holder, info.GetIsolate()));
  V8PrivateProperty::GetSymbol(
      info.GetIsolate(), "KeepAlive#Navigator#hid")
      .Set(holder, v8_value);

  V8SetReturnValue(info, v8_value);
}

static void KeyboardAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  Navigator* impl = V8Navigator::ToImpl(holder);

  Keyboard* cpp_value(NavigatorKeyboard::keyboard(*impl));

  // Keep the wrapper object for the return value alive as long as |this|
  // object is alive in order to save creation time of the wrapper object.
  if (cpp_value && DOMDataStore::SetReturnValue(info.GetReturnValue(), cpp_value))
    return;
  v8::Local<v8::Value> v8_value(ToV8(cpp_value, holder, info.GetIsolate()));
  V8PrivateProperty::GetSymbol(
      info.GetIsolate(), "KeepAlive#Navigator#keyboard")
      .Set(holder, v8_value);

  V8SetReturnValue(info, v8_value);
}

static void LocksAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  Navigator* impl = V8Navigator::ToImpl(holder);

  ScriptState* script_state = ScriptState::ForRelevantRealm(info);

  LockManager* cpp_value(NavigatorLocks::locks(script_state, *impl));

  // Keep the wrapper object for the return value alive as long as |this|
  // object is alive in order to save creation time of the wrapper object.
  if (cpp_value && DOMDataStore::SetReturnValue(info.GetReturnValue(), cpp_value))
    return;
  v8::Local<v8::Value> v8_value(ToV8(cpp_value, holder, info.GetIsolate()));
  V8PrivateProperty::GetSymbol(
      info.GetIsolate(), "KeepAlive#Navigator#locks")
      .Set(holder, v8_value);

  V8SetReturnValue(info, v8_value);
}

static void MediaCapabilitiesAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  Navigator* impl = V8Navigator::ToImpl(holder);

  MediaCapabilities* cpp_value(NavigatorMediaCapabilities::mediaCapabilities(*impl));

  // Keep the wrapper object for the return value alive as long as |this|
  // object is alive in order to save creation time of the wrapper object.
  if (cpp_value && DOMDataStore::SetReturnValue(info.GetReturnValue(), cpp_value))
    return;
  v8::Local<v8::Value> v8_value(ToV8(cpp_value, holder, info.GetIsolate()));
  V8PrivateProperty::GetSymbol(
      info.GetIsolate(), "KeepAlive#Navigator#mediaCapabilities")
      .Set(holder, v8_value);

  V8SetReturnValue(info, v8_value);
}

static void MediaSessionAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  Navigator* impl = V8Navigator::ToImpl(holder);

  ScriptState* script_state = ScriptState::ForRelevantRealm(info);

  MediaSession* cpp_value(NavigatorMediaSession::mediaSession(script_state, *impl));

  // Keep the wrapper object for the return value alive as long as |this|
  // object is alive in order to save creation time of the wrapper object.
  if (cpp_value && DOMDataStore::SetReturnValue(info.GetReturnValue(), cpp_value))
    return;
  v8::Local<v8::Value> v8_value(ToV8(cpp_value, holder, info.GetIsolate()));
  V8PrivateProperty::GetSymbol(
      info.GetIsolate(), "KeepAlive#Navigator#mediaSession")
      .Set(holder, v8_value);

  V8SetReturnValue(info, v8_value);
}

static void MediaDevicesAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  Navigator* impl = V8Navigator::ToImpl(holder);

  MediaDevices* cpp_value(NavigatorUserMedia::mediaDevices(*impl));

  // Keep the wrapper object for the return value alive as long as |this|
  // object is alive in order to save creation time of the wrapper object.
  if (cpp_value && DOMDataStore::SetReturnValue(info.GetReturnValue(), cpp_value))
    return;
  v8::Local<v8::Value> v8_value(ToV8(cpp_value, holder, info.GetIsolate()));
  V8PrivateProperty::GetSymbol(
      info.GetIsolate(), "KeepAlive#Navigator#mediaDevices")
      .Set(holder, v8_value);

  V8SetReturnValue(info, v8_value);
}

static void ConnectionAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  Navigator* impl = V8Navigator::ToImpl(holder);

  NetworkInformation* cpp_value(NavigatorNetworkInformation::connection(*impl));

  // Keep the wrapper object for the return value alive as long as |this|
  // object is alive in order to save creation time of the wrapper object.
  if (cpp_value && DOMDataStore::SetReturnValue(info.GetReturnValue(), cpp_value))
    return;
  v8::Local<v8::Value> v8_value(ToV8(cpp_value, holder, info.GetIsolate()));
  V8PrivateProperty::GetSymbol(
      info.GetIsolate(), "KeepAlive#Navigator#connection")
      .Set(holder, v8_value);

  V8SetReturnValue(info, v8_value);
}

static void NfcAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  Navigator* impl = V8Navigator::ToImpl(holder);

  NFC* cpp_value(NavigatorNFC::nfc(*impl));

  // Keep the wrapper object for the return value alive as long as |this|
  // object is alive in order to save creation time of the wrapper object.
  if (cpp_value && DOMDataStore::SetReturnValue(info.GetReturnValue(), cpp_value))
    return;
  v8::Local<v8::Value> v8_value(ToV8(cpp_value, holder, info.GetIsolate()));
  V8PrivateProperty::GetSymbol(
      info.GetIsolate(), "KeepAlive#Navigator#nfc")
      .Set(holder, v8_value);

  V8SetReturnValue(info, v8_value);
}

static void PermissionsAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  Navigator* impl = V8Navigator::ToImpl(holder);

  Permissions* cpp_value(NavigatorPermissions::permissions(*impl));

  // Keep the wrapper object for the return value alive as long as |this|
  // object is alive in order to save creation time of the wrapper object.
  if (cpp_value && DOMDataStore::SetReturnValue(info.GetReturnValue(), cpp_value))
    return;
  v8::Local<v8::Value> v8_value(ToV8(cpp_value, holder, info.GetIsolate()));
  V8PrivateProperty::GetSymbol(
      info.GetIsolate(), "KeepAlive#Navigator#permissions")
      .Set(holder, v8_value);

  V8SetReturnValue(info, v8_value);
}

static void PluginsAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  Navigator* impl = V8Navigator::ToImpl(holder);

  DOMPluginArray* cpp_value(NavigatorPlugins::plugins(*impl));

  // Keep the wrapper object for the return value alive as long as |this|
  // object is alive in order to save creation time of the wrapper object.
  if (cpp_value && DOMDataStore::SetReturnValue(info.GetReturnValue(), cpp_value))
    return;
  v8::Local<v8::Value> v8_value(ToV8(cpp_value, holder, info.GetIsolate()));
  V8PrivateProperty::GetSymbol(
      info.GetIsolate(), "KeepAlive#Navigator#plugins")
      .Set(holder, v8_value);

  V8SetReturnValue(info, v8_value);
}

static void MimeTypesAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  Navigator* impl = V8Navigator::ToImpl(holder);

  DOMMimeTypeArray* cpp_value(NavigatorPlugins::mimeTypes(*impl));

  // Keep the wrapper object for the return value alive as long as |this|
  // object is alive in order to save creation time of the wrapper object.
  if (cpp_value && DOMDataStore::SetReturnValue(info.GetReturnValue(), cpp_value))
    return;
  v8::Local<v8::Value> v8_value(ToV8(cpp_value, holder, info.GetIsolate()));
  V8PrivateProperty::GetSymbol(
      info.GetIsolate(), "KeepAlive#Navigator#mimeTypes")
      .Set(holder, v8_value);

  V8SetReturnValue(info, v8_value);
}

static void PresentationAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  Navigator* impl = V8Navigator::ToImpl(holder);

  Presentation* cpp_value(NavigatorPresentation::presentation(*impl));

  // Keep the wrapper object for the return value alive as long as |this|
  // object is alive in order to save creation time of the wrapper object.
  if (cpp_value && DOMDataStore::SetReturnValue(info.GetReturnValue(), cpp_value))
    return;
  v8::Local<v8::Value> v8_value(ToV8(cpp_value, holder, info.GetIsolate()));
  V8PrivateProperty::GetSymbol(
      info.GetIsolate(), "KeepAlive#Navigator#presentation")
      .Set(holder, v8_value);

  V8SetReturnValue(info, v8_value);
}

static void WebkitTemporaryStorageAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  Navigator* impl = V8Navigator::ToImpl(holder);

  DeprecatedStorageQuota* cpp_value(NavigatorStorageQuota::webkitTemporaryStorage(*impl));

  // Keep the wrapper object for the return value alive as long as |this|
  // object is alive in order to save creation time of the wrapper object.
  if (cpp_value && DOMDataStore::SetReturnValue(info.GetReturnValue(), cpp_value))
    return;
  v8::Local<v8::Value> v8_value(ToV8(cpp_value, holder, info.GetIsolate()));
  V8PrivateProperty::GetSymbol(
      info.GetIsolate(), "KeepAlive#Navigator#webkitTemporaryStorage")
      .Set(holder, v8_value);

  V8SetReturnValue(info, v8_value);
}

static void WebkitPersistentStorageAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  Navigator* impl = V8Navigator::ToImpl(holder);

  DeprecatedStorageQuota* cpp_value(NavigatorStorageQuota::webkitPersistentStorage(*impl));

  // Keep the wrapper object for the return value alive as long as |this|
  // object is alive in order to save creation time of the wrapper object.
  if (cpp_value && DOMDataStore::SetReturnValue(info.GetReturnValue(), cpp_value))
    return;
  v8::Local<v8::Value> v8_value(ToV8(cpp_value, holder, info.GetIsolate()));
  V8PrivateProperty::GetSymbol(
      info.GetIsolate(), "KeepAlive#Navigator#webkitPersistentStorage")
      .Set(holder, v8_value);

  V8SetReturnValue(info, v8_value);
}

static void StorageAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  Navigator* impl = V8Navigator::ToImpl(holder);

  StorageManager* cpp_value(NavigatorStorageQuota::storage(*impl));

  // Keep the wrapper object for the return value alive as long as |this|
  // object is alive in order to save creation time of the wrapper object.
  if (cpp_value && DOMDataStore::SetReturnValue(info.GetReturnValue(), cpp_value))
    return;
  v8::Local<v8::Value> v8_value(ToV8(cpp_value, holder, info.GetIsolate()));
  V8PrivateProperty::GetSymbol(
      info.GetIsolate(), "KeepAlive#Navigator#storage")
      .Set(holder, v8_value);

  V8SetReturnValue(info, v8_value);
}

static void SerialAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  Navigator* impl = V8Navigator::ToImpl(holder);

  Serial* cpp_value(NavigatorSerial::serial(*impl));

  // Keep the wrapper object for the return value alive as long as |this|
  // object is alive in order to save creation time of the wrapper object.
  if (cpp_value && DOMDataStore::SetReturnValue(info.GetReturnValue(), cpp_value))
    return;
  v8::Local<v8::Value> v8_value(ToV8(cpp_value, holder, info.GetIsolate()));
  V8PrivateProperty::GetSymbol(
      info.GetIsolate(), "KeepAlive#Navigator#serial")
      .Set(holder, v8_value);

  V8SetReturnValue(info, v8_value);
}

static void ServiceWorkerAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  Navigator* impl = V8Navigator::ToImpl(holder);

  ScriptState* script_state = ScriptState::ForRelevantRealm(info);

  ExceptionState exception_state(info.GetIsolate(), ExceptionState::kGetterContext, "Navigator", "serviceWorker");

  ServiceWorkerContainer* cpp_value(NavigatorServiceWorker::serviceWorker(script_state, *impl, exception_state));

  if (UNLIKELY(exception_state.HadException()))
    return;

  // Keep the wrapper object for the return value alive as long as |this|
  // object is alive in order to save creation time of the wrapper object.
  if (cpp_value && DOMDataStore::SetReturnValue(info.GetReturnValue(), cpp_value))
    return;
  v8::Local<v8::Value> v8_value(ToV8(cpp_value, holder, info.GetIsolate()));
  V8PrivateProperty::GetSymbol(
      info.GetIsolate(), "KeepAlive#Navigator#serviceWorker")
      .Set(holder, v8_value);

  V8SetReturnValue(info, v8_value);
}

static void GpuAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  Navigator* impl = V8Navigator::ToImpl(holder);

  ScriptState* script_state = ScriptState::ForRelevantRealm(info);

  GPU* cpp_value(NavigatorGPU::gpu(script_state, *impl));

  // Keep the wrapper object for the return value alive as long as |this|
  // object is alive in order to save creation time of the wrapper object.
  if (cpp_value && DOMDataStore::SetReturnValue(info.GetReturnValue(), cpp_value))
    return;
  v8::Local<v8::Value> v8_value(ToV8(cpp_value, holder, info.GetIsolate()));
  V8PrivateProperty::GetSymbol(
      info.GetIsolate(), "KeepAlive#Navigator#gpu")
      .Set(holder, v8_value);

  V8SetReturnValue(info, v8_value);
}

static void UsbAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  Navigator* impl = V8Navigator::ToImpl(holder);

  USB* cpp_value(NavigatorUSB::usb(*impl));

  // Keep the wrapper object for the return value alive as long as |this|
  // object is alive in order to save creation time of the wrapper object.
  if (cpp_value && DOMDataStore::SetReturnValue(info.GetReturnValue(), cpp_value))
    return;
  v8::Local<v8::Value> v8_value(ToV8(cpp_value, holder, info.GetIsolate()));
  V8PrivateProperty::GetSymbol(
      info.GetIsolate(), "KeepAlive#Navigator#usb")
      .Set(holder, v8_value);

  V8SetReturnValue(info, v8_value);
}

static void XrAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  Navigator* impl = V8Navigator::ToImpl(holder);

  XR* cpp_value(NavigatorXR::xr(*impl));

  // Keep the wrapper object for the return value alive as long as |this|
  // object is alive in order to save creation time of the wrapper object.
  if (cpp_value && DOMDataStore::SetReturnValue(info.GetReturnValue(), cpp_value))
    return;
  v8::Local<v8::Value> v8_value(ToV8(cpp_value, holder, info.GetIsolate()));
  V8PrivateProperty::GetSymbol(
      info.GetIsolate(), "KeepAlive#Navigator#xr")
      .Set(holder, v8_value);

  V8SetReturnValue(info, v8_value);
}

static void GetBatteryMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exception_state(info.GetIsolate(), ExceptionState::kExecutionContext, "Navigator", "getBattery");
  ExceptionToRejectPromiseScope reject_promise_scope(info, exception_state);

  // V8DOMConfiguration::kDoNotCheckHolder
  // Make sure that info.Holder() really points to an instance of the type.
  if (!V8Navigator::HasInstance(info.Holder(), info.GetIsolate())) {
    exception_state.ThrowTypeError("Illegal invocation");
    return;
  }
  Navigator* impl = V8Navigator::ToImpl(info.Holder());

  ScriptState* script_state = ScriptState::ForRelevantRealm(info);

  ScriptPromise result = NavigatorBattery::getBattery(script_state, *impl);
  V8SetReturnValue(info, result.V8Value());
}

static void SendBeaconMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exception_state(info.GetIsolate(), ExceptionState::kExecutionContext, "Navigator", "sendBeacon");

  Navigator* impl = V8Navigator::ToImpl(info.Holder());

  ScriptState* script_state = ScriptState::ForRelevantRealm(info);

  if (UNLIKELY(info.Length() < 1)) {
    exception_state.ThrowTypeError(ExceptionMessages::NotEnoughArguments(1, info.Length()));
    return;
  }

  V8StringResource<> url;
  ArrayBufferViewOrBlobOrStringOrFormData data;
  url = NativeValueTraits<IDLUSVString>::NativeValue(info.GetIsolate(), info[0], exception_state);
  if (exception_state.HadException())
    return;

  if (!info[1]->IsUndefined()) {
    V8ArrayBufferViewOrBlobOrStringOrFormData::ToImpl(info.GetIsolate(), info[1], data, UnionTypeConversionMode::kNullable, exception_state);
    if (exception_state.HadException())
      return;
  } else {
    /* null default value */;
  }

  bool result = NavigatorBeacon::sendBeacon(script_state, *impl, url, data, exception_state);
  if (exception_state.HadException()) {
    return;
  }
  V8SetReturnValueBool(info, result);
}

static void RequestMediaKeySystemAccessMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exception_state(info.GetIsolate(), ExceptionState::kExecutionContext, "Navigator", "requestMediaKeySystemAccess");
  ExceptionToRejectPromiseScope reject_promise_scope(info, exception_state);

  // V8DOMConfiguration::kDoNotCheckHolder
  // Make sure that info.Holder() really points to an instance of the type.
  if (!V8Navigator::HasInstance(info.Holder(), info.GetIsolate())) {
    exception_state.ThrowTypeError("Illegal invocation");
    return;
  }
  Navigator* impl = V8Navigator::ToImpl(info.Holder());

  ScriptState* script_state = ScriptState::ForRelevantRealm(info);

  if (UNLIKELY(info.Length() < 2)) {
    exception_state.ThrowTypeError(ExceptionMessages::NotEnoughArguments(2, info.Length()));
    return;
  }

  V8StringResource<> key_system;
  HeapVector<Member<MediaKeySystemConfiguration>> supported_configurations;
  key_system = info[0];
  if (!key_system.Prepare(exception_state))
    return;

  supported_configurations = NativeValueTraits<IDLSequence<MediaKeySystemConfiguration>>::NativeValue(info.GetIsolate(), info[1], exception_state);
  if (exception_state.HadException())
    return;

  ScriptPromise result = NavigatorRequestMediaKeySystemAccess::requestMediaKeySystemAccess(script_state, *impl, key_system, supported_configurations);
  V8SetReturnValue(info, result.V8Value());
}

static void GetGamepadsMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  Navigator* impl = V8Navigator::ToImpl(info.Holder());

  V8SetReturnValue(info, NavigatorGamepad::getGamepads(*impl));
}

static void GetInstalledRelatedAppsMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exception_state(info.GetIsolate(), ExceptionState::kExecutionContext, "Navigator", "getInstalledRelatedApps");
  ExceptionToRejectPromiseScope reject_promise_scope(info, exception_state);

  // V8DOMConfiguration::kDoNotCheckHolder
  // Make sure that info.Holder() really points to an instance of the type.
  if (!V8Navigator::HasInstance(info.Holder(), info.GetIsolate())) {
    exception_state.ThrowTypeError("Illegal invocation");
    return;
  }
  Navigator* impl = V8Navigator::ToImpl(info.Holder());

  ScriptState* script_state = ScriptState::ForRelevantRealm(info);

  ScriptPromise result = NavigatorInstalledApp::getInstalledRelatedApps(script_state, *impl);
  V8SetReturnValue(info, result.V8Value());
}

static void GetUserMediaMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exception_state(info.GetIsolate(), ExceptionState::kExecutionContext, "Navigator", "getUserMedia");

  Navigator* impl = V8Navigator::ToImpl(info.Holder());

  if (UNLIKELY(info.Length() < 3)) {
    exception_state.ThrowTypeError(ExceptionMessages::NotEnoughArguments(3, info.Length()));
    return;
  }

  MediaStreamConstraints* constraints;
  V8NavigatorUserMediaSuccessCallback* success_callback;
  V8NavigatorUserMediaErrorCallback* error_callback;
  if (!info[0]->IsNullOrUndefined() && !info[0]->IsObject()) {
    exception_state.ThrowTypeError("parameter 1 ('constraints') is not an object.");
    return;
  }
  constraints = NativeValueTraits<MediaStreamConstraints>::NativeValue(info.GetIsolate(), info[0], exception_state);
  if (exception_state.HadException())
    return;

  if (info[1]->IsFunction()) {
    success_callback = V8NavigatorUserMediaSuccessCallback::Create(info[1].As<v8::Function>());
  } else {
    exception_state.ThrowTypeError("The callback provided as parameter 2 is not a function.");
    return;
  }

  if (info[2]->IsFunction()) {
    error_callback = V8NavigatorUserMediaErrorCallback::Create(info[2].As<v8::Function>());
  } else {
    exception_state.ThrowTypeError("The callback provided as parameter 3 is not a function.");
    return;
  }

  NavigatorMediaStream::getUserMedia(*impl, constraints, success_callback, error_callback, exception_state);
  if (exception_state.HadException()) {
    return;
  }
}

static void WebkitGetUserMediaMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exception_state(info.GetIsolate(), ExceptionState::kExecutionContext, "Navigator", "webkitGetUserMedia");

  Navigator* impl = V8Navigator::ToImpl(info.Holder());

  if (UNLIKELY(info.Length() < 3)) {
    exception_state.ThrowTypeError(ExceptionMessages::NotEnoughArguments(3, info.Length()));
    return;
  }

  MediaStreamConstraints* constraints;
  V8NavigatorUserMediaSuccessCallback* success_callback;
  V8NavigatorUserMediaErrorCallback* error_callback;
  if (!info[0]->IsNullOrUndefined() && !info[0]->IsObject()) {
    exception_state.ThrowTypeError("parameter 1 ('constraints') is not an object.");
    return;
  }
  constraints = NativeValueTraits<MediaStreamConstraints>::NativeValue(info.GetIsolate(), info[0], exception_state);
  if (exception_state.HadException())
    return;

  if (info[1]->IsFunction()) {
    success_callback = V8NavigatorUserMediaSuccessCallback::Create(info[1].As<v8::Function>());
  } else {
    exception_state.ThrowTypeError("The callback provided as parameter 2 is not a function.");
    return;
  }

  if (info[2]->IsFunction()) {
    error_callback = V8NavigatorUserMediaErrorCallback::Create(info[2].As<v8::Function>());
  } else {
    exception_state.ThrowTypeError("The callback provided as parameter 3 is not a function.");
    return;
  }

  NavigatorMediaStream::getUserMedia(*impl, constraints, success_callback, error_callback, exception_state);
  if (exception_state.HadException()) {
    return;
  }
}

static void RegisterProtocolHandlerMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exception_state(info.GetIsolate(), ExceptionState::kExecutionContext, "Navigator", "registerProtocolHandler");

  Navigator* impl = V8Navigator::ToImpl(info.Holder());

  if (UNLIKELY(info.Length() < 3)) {
    exception_state.ThrowTypeError(ExceptionMessages::NotEnoughArguments(3, info.Length()));
    return;
  }

  V8StringResource<> scheme;
  V8StringResource<> url;
  V8StringResource<> title;
  scheme = info[0];
  if (!scheme.Prepare())
    return;

  url = NativeValueTraits<IDLUSVString>::NativeValue(info.GetIsolate(), info[1], exception_state);
  if (exception_state.HadException())
    return;

  title = info[2];
  if (!title.Prepare())
    return;

  NavigatorContentUtils::registerProtocolHandler(*impl, scheme, url, title, exception_state);
  if (exception_state.HadException()) {
    return;
  }
}

static void UnregisterProtocolHandlerMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exception_state(info.GetIsolate(), ExceptionState::kExecutionContext, "Navigator", "unregisterProtocolHandler");

  Navigator* impl = V8Navigator::ToImpl(info.Holder());

  if (UNLIKELY(info.Length() < 2)) {
    exception_state.ThrowTypeError(ExceptionMessages::NotEnoughArguments(2, info.Length()));
    return;
  }

  V8StringResource<> scheme;
  V8StringResource<> url;
  scheme = info[0];
  if (!scheme.Prepare())
    return;

  url = NativeValueTraits<IDLUSVString>::NativeValue(info.GetIsolate(), info[1], exception_state);
  if (exception_state.HadException())
    return;

  NavigatorContentUtils::unregisterProtocolHandler(*impl, scheme, url, exception_state);
  if (exception_state.HadException()) {
    return;
  }
}

static void JavaEnabledMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  Navigator* impl = V8Navigator::ToImpl(info.Holder());

  V8SetReturnValueBool(info, NavigatorPlugins::javaEnabled(*impl));
}

static void Vibrate1Method(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exception_state(info.GetIsolate(), ExceptionState::kExecutionContext, "Navigator", "vibrate");

  Navigator* impl = V8Navigator::ToImpl(info.Holder());

  uint32_t pattern;
  pattern = NativeValueTraits<IDLUnsignedLongClamp>::NativeValue(info.GetIsolate(), info[0], exception_state);
  if (exception_state.HadException())
    return;

  V8SetReturnValueBool(info, NavigatorVibration::vibrate(*impl, pattern));
}

static void Vibrate2Method(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exception_state(info.GetIsolate(), ExceptionState::kExecutionContext, "Navigator", "vibrate");

  Navigator* impl = V8Navigator::ToImpl(info.Holder());

  Vector<uint32_t> pattern;
  pattern = NativeValueTraits<IDLSequence<IDLUnsignedLong>>::NativeValue(info.GetIsolate(), info[0], exception_state);
  if (exception_state.HadException())
    return;

  V8SetReturnValueBool(info, NavigatorVibration::vibrate(*impl, pattern));
}

static void VibrateMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  scheduler::CooperativeSchedulingManager::Instance()->Safepoint();

  bool is_arity_error = false;

  switch (std::min(1, info.Length())) {
    case 1:
      if (info[0]->IsArray()) {
        Vibrate2Method(info);
        return;
      }
      {
        ExceptionState exception_state(info.GetIsolate(), ExceptionState::kExecutionContext,
                                      "Navigator", "vibrate");
        if (HasCallableIteratorSymbol(info.GetIsolate(), info[0], exception_state)) {
          Vibrate2Method(info);
          return;
        }
        if (exception_state.HadException()) {
          exception_state.RethrowV8Exception(exception_state.GetException());
          return;
        }
      }
      if (info[0]->IsNumber()) {
        Vibrate1Method(info);
        return;
      }
      if (true) {
        Vibrate1Method(info);
        return;
      }
      break;
    default:
      is_arity_error = true;
  }

  ExceptionState exception_state(info.GetIsolate(), ExceptionState::kExecutionContext, "Navigator", "vibrate");
  if (is_arity_error) {
    if (info.Length() < 1) {
      exception_state.ThrowTypeError(ExceptionMessages::NotEnoughArguments(1, info.Length()));
      return;
    }
  }
  exception_state.ThrowTypeError("No function was found that matched the signature provided.");
}

static void GetVRDisplaysMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exception_state(info.GetIsolate(), ExceptionState::kExecutionContext, "Navigator", "getVRDisplays");
  ExceptionToRejectPromiseScope reject_promise_scope(info, exception_state);

  // V8DOMConfiguration::kDoNotCheckHolder
  // Make sure that info.Holder() really points to an instance of the type.
  if (!V8Navigator::HasInstance(info.Holder(), info.GetIsolate())) {
    exception_state.ThrowTypeError("Illegal invocation");
    return;
  }
  Navigator* impl = V8Navigator::ToImpl(info.Holder());

  ScriptState* script_state = ScriptState::ForRelevantRealm(info);

  ScriptPromise result = NavigatorVR::getVRDisplays(script_state, *impl);
  V8SetReturnValue(info, result.V8Value());
}

static void GetWakeLockMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exception_state(info.GetIsolate(), ExceptionState::kExecutionContext, "Navigator", "getWakeLock");
  ExceptionToRejectPromiseScope reject_promise_scope(info, exception_state);

  // V8DOMConfiguration::kDoNotCheckHolder
  // Make sure that info.Holder() really points to an instance of the type.
  if (!V8Navigator::HasInstance(info.Holder(), info.GetIsolate())) {
    exception_state.ThrowTypeError("Illegal invocation");
    return;
  }
  Navigator* impl = V8Navigator::ToImpl(info.Holder());

  ScriptState* script_state = ScriptState::ForRelevantRealm(info);

  if (UNLIKELY(info.Length() < 1)) {
    exception_state.ThrowTypeError(ExceptionMessages::NotEnoughArguments(1, info.Length()));
    return;
  }

  V8StringResource<> type;
  type = info[0];
  if (!type.Prepare(exception_state))
    return;
  const char* kValidTypeValues[] = {
      "screen",
      "system",
  };
  if (!IsValidEnum(type, kValidTypeValues, base::size(kValidTypeValues), "WakeLockType", exception_state)) {
    return;
  }

  ScriptPromise result = NavigatorWakeLock::getWakeLock(script_state, *impl, type);
  V8SetReturnValue(info, result.V8Value());
}

static void RequestMIDIAccessMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exception_state(info.GetIsolate(), ExceptionState::kExecutionContext, "Navigator", "requestMIDIAccess");
  ExceptionToRejectPromiseScope reject_promise_scope(info, exception_state);

  // V8DOMConfiguration::kDoNotCheckHolder
  // Make sure that info.Holder() really points to an instance of the type.
  if (!V8Navigator::HasInstance(info.Holder(), info.GetIsolate())) {
    exception_state.ThrowTypeError("Illegal invocation");
    return;
  }
  Navigator* impl = V8Navigator::ToImpl(info.Holder());

  ScriptState* script_state = ScriptState::ForRelevantRealm(info);

  MIDIOptions* options;
  if (!info[0]->IsNullOrUndefined() && !info[0]->IsObject()) {
    exception_state.ThrowTypeError("parameter 1 ('options') is not an object.");
    return;
  }
  options = NativeValueTraits<MIDIOptions>::NativeValue(info.GetIsolate(), info[0], exception_state);
  if (exception_state.HadException())
    return;

  ScriptPromise result = NavigatorWebMIDI::requestMIDIAccess(script_state, *impl, options);
  V8SetReturnValue(info, result.V8Value());
}

static void CanShareMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exception_state(info.GetIsolate(), ExceptionState::kExecutionContext, "Navigator", "canShare");

  Navigator* impl = V8Navigator::ToImpl(info.Holder());

  ScriptState* script_state = ScriptState::ForRelevantRealm(info);

  ShareData* data;
  if (!info[0]->IsNullOrUndefined() && !info[0]->IsObject()) {
    exception_state.ThrowTypeError("parameter 1 ('data') is not an object.");
    return;
  }
  data = NativeValueTraits<ShareData>::NativeValue(info.GetIsolate(), info[0], exception_state);
  if (exception_state.HadException())
    return;

  bool result = NavigatorShare::canShare(script_state, *impl, data);
  V8SetReturnValueBool(info, result);
}

static void ShareMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exception_state(info.GetIsolate(), ExceptionState::kExecutionContext, "Navigator", "share");
  ExceptionToRejectPromiseScope reject_promise_scope(info, exception_state);

  // V8DOMConfiguration::kDoNotCheckHolder
  // Make sure that info.Holder() really points to an instance of the type.
  if (!V8Navigator::HasInstance(info.Holder(), info.GetIsolate())) {
    exception_state.ThrowTypeError("Illegal invocation");
    return;
  }
  Navigator* impl = V8Navigator::ToImpl(info.Holder());

  ScriptState* script_state = ScriptState::ForRelevantRealm(info);

  ShareData* data;
  if (!info[0]->IsNullOrUndefined() && !info[0]->IsObject()) {
    exception_state.ThrowTypeError("parameter 1 ('data') is not an object.");
    return;
  }
  data = NativeValueTraits<ShareData>::NativeValue(info.GetIsolate(), info[0], exception_state);
  if (exception_state.HadException())
    return;

  ScriptPromise result = NavigatorShare::share(script_state, *impl, data);
  V8SetReturnValue(info, result.V8Value());
}

}  // namespace navigator_partial_v8_internal

void V8NavigatorPartial::BluetoothAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_Navigator_bluetooth_Getter");

  navigator_partial_v8_internal::BluetoothAttributeGetter(info);
}

void V8NavigatorPartial::ClipboardAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_Navigator_clipboard_Getter");

  navigator_partial_v8_internal::ClipboardAttributeGetter(info);
}

void V8NavigatorPartial::ContactsAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_Navigator_contacts_Getter");

  navigator_partial_v8_internal::ContactsAttributeGetter(info);
}

void V8NavigatorPartial::CredentialsAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_Navigator_credentials_Getter");

  navigator_partial_v8_internal::CredentialsAttributeGetter(info);
}

void V8NavigatorPartial::DoNotTrackAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_Navigator_doNotTrack_Getter");

  ExecutionContext* execution_context_for_measurement = CurrentExecutionContext(info.GetIsolate());
  UseCounter::Count(execution_context_for_measurement, WebFeature::kNavigatorDoNotTrack);
  Dactyloscoper::Record(execution_context_for_measurement, WebFeature::kNavigatorDoNotTrack);

  navigator_partial_v8_internal::DoNotTrackAttributeGetter(info);
}

void V8NavigatorPartial::GeolocationAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_Navigator_geolocation_Getter");

  navigator_partial_v8_internal::GeolocationAttributeGetter(info);
}

void V8NavigatorPartial::HidAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_Navigator_hid_Getter");

  navigator_partial_v8_internal::HidAttributeGetter(info);
}

void V8NavigatorPartial::KeyboardAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_Navigator_keyboard_Getter");

  navigator_partial_v8_internal::KeyboardAttributeGetter(info);
}

void V8NavigatorPartial::LocksAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_Navigator_locks_Getter");

  navigator_partial_v8_internal::LocksAttributeGetter(info);
}

void V8NavigatorPartial::MediaCapabilitiesAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_Navigator_mediaCapabilities_Getter");

  navigator_partial_v8_internal::MediaCapabilitiesAttributeGetter(info);
}

void V8NavigatorPartial::MediaSessionAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_Navigator_mediaSession_Getter");

  navigator_partial_v8_internal::MediaSessionAttributeGetter(info);
}

void V8NavigatorPartial::MediaDevicesAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_Navigator_mediaDevices_Getter");

  navigator_partial_v8_internal::MediaDevicesAttributeGetter(info);
}

void V8NavigatorPartial::ConnectionAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_Navigator_connection_Getter");

  ExecutionContext* execution_context_for_measurement = CurrentExecutionContext(info.GetIsolate());
  UseCounter::Count(execution_context_for_measurement, WebFeature::kNetInfo);

  navigator_partial_v8_internal::ConnectionAttributeGetter(info);
}

void V8NavigatorPartial::NfcAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_Navigator_nfc_Getter");

  navigator_partial_v8_internal::NfcAttributeGetter(info);
}

void V8NavigatorPartial::PermissionsAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_Navigator_permissions_Getter");

  navigator_partial_v8_internal::PermissionsAttributeGetter(info);
}

void V8NavigatorPartial::PluginsAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_Navigator_plugins_Getter");

  ExecutionContext* execution_context_for_measurement = CurrentExecutionContext(info.GetIsolate());
  UseCounter::Count(execution_context_for_measurement, WebFeature::kNavigatorPlugins);
  Dactyloscoper::Record(execution_context_for_measurement, WebFeature::kNavigatorPlugins);

  navigator_partial_v8_internal::PluginsAttributeGetter(info);
}

void V8NavigatorPartial::MimeTypesAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_Navigator_mimeTypes_Getter");

  ExecutionContext* execution_context_for_measurement = CurrentExecutionContext(info.GetIsolate());
  UseCounter::Count(execution_context_for_measurement, WebFeature::kNavigatorMimeTypes);
  Dactyloscoper::Record(execution_context_for_measurement, WebFeature::kNavigatorMimeTypes);

  navigator_partial_v8_internal::MimeTypesAttributeGetter(info);
}

void V8NavigatorPartial::PresentationAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_Navigator_presentation_Getter");

  navigator_partial_v8_internal::PresentationAttributeGetter(info);
}

void V8NavigatorPartial::WebkitTemporaryStorageAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_Navigator_webkitTemporaryStorage_Getter");

  ExecutionContext* execution_context_for_measurement = CurrentExecutionContext(info.GetIsolate());
  UseCounter::Count(execution_context_for_measurement, WebFeature::kPrefixedStorageQuota);

  navigator_partial_v8_internal::WebkitTemporaryStorageAttributeGetter(info);
}

void V8NavigatorPartial::WebkitPersistentStorageAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_Navigator_webkitPersistentStorage_Getter");

  ExecutionContext* execution_context_for_measurement = CurrentExecutionContext(info.GetIsolate());
  UseCounter::Count(execution_context_for_measurement, WebFeature::kPrefixedStorageQuota);

  navigator_partial_v8_internal::WebkitPersistentStorageAttributeGetter(info);
}

void V8NavigatorPartial::StorageAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_Navigator_storage_Getter");

  navigator_partial_v8_internal::StorageAttributeGetter(info);
}

void V8NavigatorPartial::SerialAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_Navigator_serial_Getter");

  navigator_partial_v8_internal::SerialAttributeGetter(info);
}

void V8NavigatorPartial::ServiceWorkerAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_Navigator_serviceWorker_Getter");

  navigator_partial_v8_internal::ServiceWorkerAttributeGetter(info);
}

void V8NavigatorPartial::GpuAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_Navigator_gpu_Getter");

  navigator_partial_v8_internal::GpuAttributeGetter(info);
}

void V8NavigatorPartial::UsbAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_Navigator_usb_Getter");

  navigator_partial_v8_internal::UsbAttributeGetter(info);
}

void V8NavigatorPartial::XrAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_Navigator_xr_Getter");

  ExecutionContext* execution_context_for_measurement = CurrentExecutionContext(info.GetIsolate());
  UseCounter::Count(execution_context_for_measurement, WebFeature::kNavigatorXR);

  navigator_partial_v8_internal::XrAttributeGetter(info);
}

void V8NavigatorPartial::GetBatteryMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_Navigator_getBattery");

  ExecutionContext* execution_context_for_measurement = CurrentExecutionContext(info.GetIsolate());
  UseCounter::Count(execution_context_for_measurement, WebFeature::kBatteryStatusGetBattery);
  navigator_partial_v8_internal::GetBatteryMethod(info);
}

void V8NavigatorPartial::SendBeaconMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_Navigator_sendBeacon");

  ExecutionContext* execution_context_for_measurement = CurrentExecutionContext(info.GetIsolate());
  UseCounter::Count(execution_context_for_measurement, WebFeature::kSendBeacon);
  navigator_partial_v8_internal::SendBeaconMethod(info);
}

void V8NavigatorPartial::RequestMediaKeySystemAccessMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_Navigator_requestMediaKeySystemAccess");

  navigator_partial_v8_internal::RequestMediaKeySystemAccessMethod(info);
}

void V8NavigatorPartial::GetGamepadsMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_Navigator_getGamepads");

  ExecutionContext* execution_context_for_measurement = CurrentExecutionContext(info.GetIsolate());
  UseCounter::Count(execution_context_for_measurement, WebFeature::kGetGamepads);
  navigator_partial_v8_internal::GetGamepadsMethod(info);
}

void V8NavigatorPartial::GetInstalledRelatedAppsMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_Navigator_getInstalledRelatedApps");

  ExecutionContext* execution_context_for_measurement = CurrentExecutionContext(info.GetIsolate());
  UseCounter::Count(execution_context_for_measurement, WebFeature::kV8Navigator_GetInstalledRelatedApps_Method);
  navigator_partial_v8_internal::GetInstalledRelatedAppsMethod(info);
}

void V8NavigatorPartial::GetUserMediaMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_Navigator_getUserMedia");

  ExecutionContext* execution_context_for_measurement = CurrentExecutionContext(info.GetIsolate());
  UseCounter::Count(execution_context_for_measurement, WebFeature::kGetUserMediaLegacy);
  navigator_partial_v8_internal::GetUserMediaMethod(info);
}

void V8NavigatorPartial::WebkitGetUserMediaMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_Navigator_webkitGetUserMedia");

  ExecutionContext* execution_context_for_measurement = CurrentExecutionContext(info.GetIsolate());
  UseCounter::Count(execution_context_for_measurement, WebFeature::kGetUserMediaPrefixed);
  navigator_partial_v8_internal::WebkitGetUserMediaMethod(info);
}

void V8NavigatorPartial::RegisterProtocolHandlerMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_Navigator_registerProtocolHandler");

  navigator_partial_v8_internal::RegisterProtocolHandlerMethod(info);
}

void V8NavigatorPartial::UnregisterProtocolHandlerMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_Navigator_unregisterProtocolHandler");

  navigator_partial_v8_internal::UnregisterProtocolHandlerMethod(info);
}

void V8NavigatorPartial::JavaEnabledMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_Navigator_javaEnabled");

  navigator_partial_v8_internal::JavaEnabledMethod(info);
}

void V8NavigatorPartial::VibrateMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_Navigator_vibrate");

  navigator_partial_v8_internal::VibrateMethod(info);
}

void V8NavigatorPartial::GetVRDisplaysMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_Navigator_getVRDisplays");

  navigator_partial_v8_internal::GetVRDisplaysMethod(info);
}

void V8NavigatorPartial::GetWakeLockMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_Navigator_getWakeLock");

  navigator_partial_v8_internal::GetWakeLockMethod(info);
}

void V8NavigatorPartial::RequestMIDIAccessMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_Navigator_requestMIDIAccess");

  ExecutionContext* execution_context_for_measurement = CurrentExecutionContext(info.GetIsolate());
  UseCounter::Count(execution_context_for_measurement, WebFeature::kRequestMIDIAccess_ObscuredByFootprinting);
  navigator_partial_v8_internal::RequestMIDIAccessMethod(info);
}

void V8NavigatorPartial::CanShareMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_Navigator_canShare");

  ExecutionContext* execution_context_for_measurement = CurrentExecutionContext(info.GetIsolate());
  UseCounter::Count(execution_context_for_measurement, WebFeature::kWebShareCanShare);
  navigator_partial_v8_internal::CanShareMethod(info);
}

void V8NavigatorPartial::ShareMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_Navigator_share");

  ExecutionContext* execution_context_for_measurement = CurrentExecutionContext(info.GetIsolate());
  UseCounter::Count(execution_context_for_measurement, WebFeature::kWebShareShare);
  navigator_partial_v8_internal::ShareMethod(info);
}

static constexpr V8DOMConfiguration::AccessorConfiguration kV8NavigatorAccessors[] = {
    { "doNotTrack", V8NavigatorPartial::DoNotTrackAttributeGetterCallback, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
    { "geolocation", V8NavigatorPartial::GeolocationAttributeGetterCallback, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
    { "mediaCapabilities", V8NavigatorPartial::MediaCapabilitiesAttributeGetterCallback, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
    { "connection", V8NavigatorPartial::ConnectionAttributeGetterCallback, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
    { "plugins", V8NavigatorPartial::PluginsAttributeGetterCallback, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
    { "mimeTypes", V8NavigatorPartial::MimeTypesAttributeGetterCallback, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
    { "webkitTemporaryStorage", V8NavigatorPartial::WebkitTemporaryStorageAttributeGetterCallback, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
    { "webkitPersistentStorage", V8NavigatorPartial::WebkitPersistentStorageAttributeGetterCallback, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
};

static constexpr V8DOMConfiguration::MethodConfiguration kV8NavigatorMethods[] = {
    {"getBattery", V8NavigatorPartial::GetBatteryMethodCallback, 0, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kDoNotCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"sendBeacon", V8NavigatorPartial::SendBeaconMethodCallback, 1, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"getGamepads", V8NavigatorPartial::GetGamepadsMethodCallback, 0, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"javaEnabled", V8NavigatorPartial::JavaEnabledMethodCallback, 0, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"vibrate", V8NavigatorPartial::VibrateMethodCallback, 1, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"requestMIDIAccess", V8NavigatorPartial::RequestMIDIAccessMethodCallback, 0, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kDoNotCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
};

void V8NavigatorPartial::InstallV8NavigatorTemplate(
    v8::Isolate* isolate,
    const DOMWrapperWorld& world,
    v8::Local<v8::FunctionTemplate> interface_template) {
  // Initialize the interface object's template.
  V8Navigator::InstallV8NavigatorTemplate(isolate, world, interface_template);

  v8::Local<v8::Signature> signature = v8::Signature::New(isolate, interface_template);
  ALLOW_UNUSED_LOCAL(signature);
  v8::Local<v8::ObjectTemplate> instance_template = interface_template->InstanceTemplate();
  ALLOW_UNUSED_LOCAL(instance_template);
  v8::Local<v8::ObjectTemplate> prototype_template = interface_template->PrototypeTemplate();
  ALLOW_UNUSED_LOCAL(prototype_template);

  // Register IDL constants, attributes and operations.
  V8DOMConfiguration::InstallAccessors(
      isolate, world, instance_template, prototype_template, interface_template,
      signature, kV8NavigatorAccessors, base::size(kV8NavigatorAccessors));
  V8DOMConfiguration::InstallMethods(
      isolate, world, instance_template, prototype_template, interface_template,
      signature, kV8NavigatorMethods, base::size(kV8NavigatorMethods));

  // Custom signature

  V8NavigatorPartial::InstallRuntimeEnabledFeaturesOnTemplate(
      isolate, world, interface_template);
}

void V8NavigatorPartial::InstallRuntimeEnabledFeaturesOnTemplate(
    v8::Isolate* isolate,
    const DOMWrapperWorld& world,
    v8::Local<v8::FunctionTemplate> interface_template) {
  V8Navigator::InstallRuntimeEnabledFeaturesOnTemplate(isolate, world, interface_template);

  v8::Local<v8::Signature> signature = v8::Signature::New(isolate, interface_template);
  ALLOW_UNUSED_LOCAL(signature);
  v8::Local<v8::ObjectTemplate> instance_template = interface_template->InstanceTemplate();
  ALLOW_UNUSED_LOCAL(instance_template);
  v8::Local<v8::ObjectTemplate> prototype_template = interface_template->PrototypeTemplate();
  ALLOW_UNUSED_LOCAL(prototype_template);

  // Register IDL constants, attributes and operations.

  if (RuntimeEnabledFeatures::MediaSessionEnabled()) {
    static constexpr V8DOMConfiguration::AccessorConfiguration kConfigurations[] = {
        { "mediaSession", V8NavigatorPartial::MediaSessionAttributeGetterCallback, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
    };
    V8DOMConfiguration::InstallAccessors(
        isolate, world, instance_template, prototype_template, interface_template,
        signature, kConfigurations, base::size(kConfigurations));
  }
  if (RuntimeEnabledFeatures::PermissionsEnabled()) {
    static constexpr V8DOMConfiguration::AccessorConfiguration kConfigurations[] = {
        { "permissions", V8NavigatorPartial::PermissionsAttributeGetterCallback, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
    };
    V8DOMConfiguration::InstallAccessors(
        isolate, world, instance_template, prototype_template, interface_template,
        signature, kConfigurations, base::size(kConfigurations));
  }
  if (RuntimeEnabledFeatures::WebGPUEnabled()) {
    static constexpr V8DOMConfiguration::AccessorConfiguration kConfigurations[] = {
        { "gpu", V8NavigatorPartial::GpuAttributeGetterCallback, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
    };
    V8DOMConfiguration::InstallAccessors(
        isolate, world, instance_template, prototype_template, interface_template,
        signature, kConfigurations, base::size(kConfigurations));
  }

  // Custom signature
  if (RuntimeEnabledFeatures::NavigatorContentUtilsEnabled()) {
    {
      // Install registerProtocolHandler configuration
      constexpr V8DOMConfiguration::MethodConfiguration kConfigurations[] = {
          {"registerProtocolHandler", V8NavigatorPartial::RegisterProtocolHandlerMethodCallback, 3, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds}
      };
      for (const auto& config : kConfigurations) {
        V8DOMConfiguration::InstallMethod(
            isolate, world, instance_template, prototype_template,
            interface_template, signature, config);
      }
    }
  }
  if (RuntimeEnabledFeatures::NavigatorContentUtilsEnabled()) {
    {
      // Install unregisterProtocolHandler configuration
      constexpr V8DOMConfiguration::MethodConfiguration kConfigurations[] = {
          {"unregisterProtocolHandler", V8NavigatorPartial::UnregisterProtocolHandlerMethodCallback, 2, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds}
      };
      for (const auto& config : kConfigurations) {
        V8DOMConfiguration::InstallMethod(
            isolate, world, instance_template, prototype_template,
            interface_template, signature, config);
      }
    }
  }
}

void V8NavigatorPartial::InstallInstalledApp(
    v8::Isolate* isolate,
    const DOMWrapperWorld& world,
    v8::Local<v8::Object> instance,
    v8::Local<v8::Object> prototype,
    v8::Local<v8::Function> interface) {
  v8::Local<v8::FunctionTemplate> interface_template =
      V8Navigator::GetWrapperTypeInfo()->DomTemplate(isolate, world);
  v8::Local<v8::Signature> signature = v8::Signature::New(isolate, interface_template);
  ALLOW_UNUSED_LOCAL(signature);
  ExecutionContext* execution_context = ToExecutionContext(isolate->GetCurrentContext());
  bool is_secure_context = (execution_context && execution_context->IsSecureContext());
  if (is_secure_context) {
    static constexpr V8DOMConfiguration::MethodConfiguration
    kGetInstalledRelatedAppsConfigurations[] = {
        {"getInstalledRelatedApps", V8NavigatorPartial::GetInstalledRelatedAppsMethodCallback, 0, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kDoNotCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds}
    };
    for (const auto& config : kGetInstalledRelatedAppsConfigurations) {
      V8DOMConfiguration::InstallMethod(
          isolate, world, instance, prototype,
          interface, signature, config);
    }
  }
}

void V8NavigatorPartial::InstallInstalledApp(
    ScriptState* script_state, v8::Local<v8::Object> instance) {
  V8PerContextData* per_context_data = script_state->PerContextData();
  v8::Local<v8::Object> prototype = per_context_data->PrototypeForType(
      V8Navigator::GetWrapperTypeInfo());
  v8::Local<v8::Function> interface = per_context_data->ConstructorForType(
      V8Navigator::GetWrapperTypeInfo());
  ALLOW_UNUSED_LOCAL(interface);
  InstallInstalledApp(script_state->GetIsolate(), script_state->World(), instance, prototype, interface);
}

void V8NavigatorPartial::InstallInstalledApp(ScriptState* script_state) {
  InstallInstalledApp(script_state, v8::Local<v8::Object>());
}

void V8NavigatorPartial::InstallWebVR(
    v8::Isolate* isolate,
    const DOMWrapperWorld& world,
    v8::Local<v8::Object> instance,
    v8::Local<v8::Object> prototype,
    v8::Local<v8::Function> interface) {
  v8::Local<v8::FunctionTemplate> interface_template =
      V8Navigator::GetWrapperTypeInfo()->DomTemplate(isolate, world);
  v8::Local<v8::Signature> signature = v8::Signature::New(isolate, interface_template);
  ALLOW_UNUSED_LOCAL(signature);
  static constexpr V8DOMConfiguration::MethodConfiguration
  kGetVRDisplaysConfigurations[] = {
      {"getVRDisplays", V8NavigatorPartial::GetVRDisplaysMethodCallback, 0, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kDoNotCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds}
  };
  for (const auto& config : kGetVRDisplaysConfigurations) {
    V8DOMConfiguration::InstallMethod(
        isolate, world, instance, prototype,
        interface, signature, config);
  }
}

void V8NavigatorPartial::InstallWebVR(
    ScriptState* script_state, v8::Local<v8::Object> instance) {
  V8PerContextData* per_context_data = script_state->PerContextData();
  v8::Local<v8::Object> prototype = per_context_data->PrototypeForType(
      V8Navigator::GetWrapperTypeInfo());
  v8::Local<v8::Function> interface = per_context_data->ConstructorForType(
      V8Navigator::GetWrapperTypeInfo());
  ALLOW_UNUSED_LOCAL(interface);
  InstallWebVR(script_state->GetIsolate(), script_state->World(), instance, prototype, interface);
}

void V8NavigatorPartial::InstallWebVR(ScriptState* script_state) {
  InstallWebVR(script_state, v8::Local<v8::Object>());
}

void V8NavigatorPartial::InstallContactsManager(
    v8::Isolate* isolate,
    const DOMWrapperWorld& world,
    v8::Local<v8::Object> instance,
    v8::Local<v8::Object> prototype,
    v8::Local<v8::Function> interface) {
  v8::Local<v8::FunctionTemplate> interface_template =
      V8Navigator::GetWrapperTypeInfo()->DomTemplate(isolate, world);
  v8::Local<v8::Signature> signature = v8::Signature::New(isolate, interface_template);
  ALLOW_UNUSED_LOCAL(signature);
  ExecutionContext* execution_context = ToExecutionContext(isolate->GetCurrentContext());
  bool is_secure_context = (execution_context && execution_context->IsSecureContext());
  if (is_secure_context) {
    static constexpr V8DOMConfiguration::AccessorConfiguration
    kcontactsConfigurations[] = {
        { "contacts", V8NavigatorPartial::ContactsAttributeGetterCallback, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds }
    };
    for (const auto& config : kcontactsConfigurations) {
      V8DOMConfiguration::InstallAccessor(isolate, world, instance, prototype,
                                          interface, signature, config);
    }
  }
}

void V8NavigatorPartial::InstallContactsManager(
    ScriptState* script_state, v8::Local<v8::Object> instance) {
  V8PerContextData* per_context_data = script_state->PerContextData();
  v8::Local<v8::Object> prototype = per_context_data->PrototypeForType(
      V8Navigator::GetWrapperTypeInfo());
  v8::Local<v8::Function> interface = per_context_data->ConstructorForType(
      V8Navigator::GetWrapperTypeInfo());
  ALLOW_UNUSED_LOCAL(interface);
  InstallContactsManager(script_state->GetIsolate(), script_state->World(), instance, prototype, interface);
}

void V8NavigatorPartial::InstallContactsManager(ScriptState* script_state) {
  InstallContactsManager(script_state, v8::Local<v8::Object>());
}

void V8NavigatorPartial::InstallWebXR(
    v8::Isolate* isolate,
    const DOMWrapperWorld& world,
    v8::Local<v8::Object> instance,
    v8::Local<v8::Object> prototype,
    v8::Local<v8::Function> interface) {
  v8::Local<v8::FunctionTemplate> interface_template =
      V8Navigator::GetWrapperTypeInfo()->DomTemplate(isolate, world);
  v8::Local<v8::Signature> signature = v8::Signature::New(isolate, interface_template);
  ALLOW_UNUSED_LOCAL(signature);
  ExecutionContext* execution_context = ToExecutionContext(isolate->GetCurrentContext());
  bool is_secure_context = (execution_context && execution_context->IsSecureContext());
  if (is_secure_context) {
    static constexpr V8DOMConfiguration::AccessorConfiguration
    kxrConfigurations[] = {
        { "xr", V8NavigatorPartial::XrAttributeGetterCallback, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds }
    };
    for (const auto& config : kxrConfigurations) {
      V8DOMConfiguration::InstallAccessor(isolate, world, instance, prototype,
                                          interface, signature, config);
    }
  }
}

void V8NavigatorPartial::InstallWebXR(
    ScriptState* script_state, v8::Local<v8::Object> instance) {
  V8PerContextData* per_context_data = script_state->PerContextData();
  v8::Local<v8::Object> prototype = per_context_data->PrototypeForType(
      V8Navigator::GetWrapperTypeInfo());
  v8::Local<v8::Function> interface = per_context_data->ConstructorForType(
      V8Navigator::GetWrapperTypeInfo());
  ALLOW_UNUSED_LOCAL(interface);
  InstallWebXR(script_state->GetIsolate(), script_state->World(), instance, prototype, interface);
}

void V8NavigatorPartial::InstallWebXR(ScriptState* script_state) {
  InstallWebXR(script_state, v8::Local<v8::Object>());
}

void V8NavigatorPartial::InstallConditionalFeatures(
    v8::Local<v8::Context> context,
    const DOMWrapperWorld& world,
    v8::Local<v8::Object> instance_object,
    v8::Local<v8::Object> prototype_object,
    v8::Local<v8::Function> interface_object,
    v8::Local<v8::FunctionTemplate> interface_template) {
  CHECK(!interface_template.IsEmpty());
  DCHECK((!prototype_object.IsEmpty() && !interface_object.IsEmpty()) ||
         !instance_object.IsEmpty());
  V8Navigator::InstallConditionalFeatures(
      context, world, instance_object, prototype_object, interface_object, interface_template);

  v8::Isolate* isolate = context->GetIsolate();

  v8::Local<v8::Signature> signature = v8::Signature::New(isolate, interface_template);
  ExecutionContext* execution_context = ToExecutionContext(context);
  DCHECK(execution_context);
  bool is_secure_context = (execution_context && execution_context->IsSecureContext());

  if (!prototype_object.IsEmpty() || !interface_object.IsEmpty()) {
    if (is_secure_context) {
      static const V8DOMConfiguration::AccessorConfiguration accessor_configurations[] = {
          { "clipboard", V8NavigatorPartial::ClipboardAttributeGetterCallback, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
          { "credentials", V8NavigatorPartial::CredentialsAttributeGetterCallback, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
          { "keyboard", V8NavigatorPartial::KeyboardAttributeGetterCallback, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
          { "locks", V8NavigatorPartial::LocksAttributeGetterCallback, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
          { "mediaDevices", V8NavigatorPartial::MediaDevicesAttributeGetterCallback, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
          { "serviceWorker", V8NavigatorPartial::ServiceWorkerAttributeGetterCallback, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
          { "storage", V8NavigatorPartial::StorageAttributeGetterCallback, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
      };
      V8DOMConfiguration::InstallAccessors(
          isolate, world, instance_object, prototype_object, interface_object,
          signature, accessor_configurations,
          base::size(accessor_configurations));
      if (RuntimeEnabledFeatures::PresentationEnabled()) {
        static const V8DOMConfiguration::AccessorConfiguration accessor_configurations[] = {
            { "presentation", V8NavigatorPartial::PresentationAttributeGetterCallback, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
        };
        V8DOMConfiguration::InstallAccessors(
            isolate, world, instance_object, prototype_object, interface_object,
            signature, accessor_configurations,
            base::size(accessor_configurations));
      }
      if (RuntimeEnabledFeatures::SerialEnabled()) {
        static const V8DOMConfiguration::AccessorConfiguration accessor_configurations[] = {
            { "serial", V8NavigatorPartial::SerialAttributeGetterCallback, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
        };
        V8DOMConfiguration::InstallAccessors(
            isolate, world, instance_object, prototype_object, interface_object,
            signature, accessor_configurations,
            base::size(accessor_configurations));
      }
      if (RuntimeEnabledFeatures::WebBluetoothEnabled()) {
        static const V8DOMConfiguration::AccessorConfiguration accessor_configurations[] = {
            { "bluetooth", V8NavigatorPartial::BluetoothAttributeGetterCallback, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
        };
        V8DOMConfiguration::InstallAccessors(
            isolate, world, instance_object, prototype_object, interface_object,
            signature, accessor_configurations,
            base::size(accessor_configurations));
      }
      if (RuntimeEnabledFeatures::WebHIDEnabled()) {
        static const V8DOMConfiguration::AccessorConfiguration accessor_configurations[] = {
            { "hid", V8NavigatorPartial::HidAttributeGetterCallback, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
        };
        V8DOMConfiguration::InstallAccessors(
            isolate, world, instance_object, prototype_object, interface_object,
            signature, accessor_configurations,
            base::size(accessor_configurations));
      }
      if (RuntimeEnabledFeatures::WebNFCEnabled()) {
        static const V8DOMConfiguration::AccessorConfiguration accessor_configurations[] = {
            { "nfc", V8NavigatorPartial::NfcAttributeGetterCallback, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
        };
        V8DOMConfiguration::InstallAccessors(
            isolate, world, instance_object, prototype_object, interface_object,
            signature, accessor_configurations,
            base::size(accessor_configurations));
      }
      if (RuntimeEnabledFeatures::WebUSBEnabled()) {
        static const V8DOMConfiguration::AccessorConfiguration accessor_configurations[] = {
            { "usb", V8NavigatorPartial::UsbAttributeGetterCallback, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
        };
        V8DOMConfiguration::InstallAccessors(
            isolate, world, instance_object, prototype_object, interface_object,
            signature, accessor_configurations,
            base::size(accessor_configurations));
      }
    }
    if (is_secure_context) {
      {
        // Install requestMediaKeySystemAccess configuration
        const V8DOMConfiguration::MethodConfiguration kConfigurations[] = {
            {"requestMediaKeySystemAccess", V8NavigatorPartial::RequestMediaKeySystemAccessMethodCallback, 2, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kDoNotCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds}
        };
        for (const auto& config : kConfigurations) {
          V8DOMConfiguration::InstallMethod(
              isolate, world, instance_object, prototype_object,
              interface_object, signature, config);
        }
      }
    }
    if (is_secure_context) {
      {
        // Install getUserMedia configuration
        const V8DOMConfiguration::MethodConfiguration kConfigurations[] = {
            {"getUserMedia", V8NavigatorPartial::GetUserMediaMethodCallback, 3, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds}
        };
        for (const auto& config : kConfigurations) {
          V8DOMConfiguration::InstallMethod(
              isolate, world, instance_object, prototype_object,
              interface_object, signature, config);
        }
      }
    }
    if (is_secure_context) {
      {
        // Install webkitGetUserMedia configuration
        const V8DOMConfiguration::MethodConfiguration kConfigurations[] = {
            {"webkitGetUserMedia", V8NavigatorPartial::WebkitGetUserMediaMethodCallback, 3, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds}
        };
        for (const auto& config : kConfigurations) {
          V8DOMConfiguration::InstallMethod(
              isolate, world, instance_object, prototype_object,
              interface_object, signature, config);
        }
      }
    }
    if (is_secure_context) {
      if (RuntimeEnabledFeatures::WakeLockNavigatorEnabled()) {
        {
          // Install getWakeLock configuration
          const V8DOMConfiguration::MethodConfiguration kConfigurations[] = {
              {"getWakeLock", V8NavigatorPartial::GetWakeLockMethodCallback, 1, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kDoNotCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds}
          };
          for (const auto& config : kConfigurations) {
            V8DOMConfiguration::InstallMethod(
                isolate, world, instance_object, prototype_object,
                interface_object, signature, config);
          }
        }
      }
    }
    if (is_secure_context) {
      if (RuntimeEnabledFeatures::WebShareV2Enabled()) {
        {
          // Install canShare configuration
          const V8DOMConfiguration::MethodConfiguration kConfigurations[] = {
              {"canShare", V8NavigatorPartial::CanShareMethodCallback, 0, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds}
          };
          for (const auto& config : kConfigurations) {
            V8DOMConfiguration::InstallMethod(
                isolate, world, instance_object, prototype_object,
                interface_object, signature, config);
          }
        }
      }
    }
    if (is_secure_context) {
      if (RuntimeEnabledFeatures::WebShareEnabled()) {
        {
          // Install share configuration
          const V8DOMConfiguration::MethodConfiguration kConfigurations[] = {
              {"share", V8NavigatorPartial::ShareMethodCallback, 0, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kDoNotCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds}
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

void V8NavigatorPartial::Initialize() {
  // Should be invoked from ModulesInitializer.
  V8Navigator::UpdateWrapperTypeInfo(
      &V8NavigatorPartial::InstallV8NavigatorTemplate,
      nullptr,
      &V8NavigatorPartial::InstallRuntimeEnabledFeaturesOnTemplate,
      V8NavigatorPartial::InstallConditionalFeatures);
}

}  // namespace blink
