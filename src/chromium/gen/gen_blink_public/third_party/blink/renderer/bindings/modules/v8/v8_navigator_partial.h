// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated from the Jinja2 template
// third_party/blink/renderer/bindings/templates/partial_interface.h.tmpl
// by the script code_generator_v8.py.
// DO NOT MODIFY!

// clang-format off
#ifndef THIRD_PARTY_BLINK_RENDERER_BINDINGS_MODULES_V8_V8_NAVIGATOR_PARTIAL_H_
#define THIRD_PARTY_BLINK_RENDERER_BINDINGS_MODULES_V8_V8_NAVIGATOR_PARTIAL_H_

#include "third_party/blink/renderer/bindings/core/v8/generated_code_helper.h"
#include "third_party/blink/renderer/bindings/core/v8/native_value_traits.h"
#include "third_party/blink/renderer/bindings/core/v8/to_v8_for_core.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_binding_for_core.h"
#include "third_party/blink/renderer/bindings/modules/v8/array_buffer_view_or_blob_or_string_or_form_data.h"
#include "third_party/blink/renderer/bindings/modules/v8/dom_exception_or_overconstrained_error.h"
#include "third_party/blink/renderer/core/frame/navigator.h"
#include "third_party/blink/renderer/platform/bindings/script_wrappable.h"
#include "third_party/blink/renderer/platform/bindings/v8_dom_wrapper.h"
#include "third_party/blink/renderer/platform/bindings/wrapper_type_info.h"
#include "third_party/blink/renderer/platform/heap/handle.h"

namespace blink {

class ScriptState;

class V8NavigatorPartial {
  STATIC_ONLY(V8NavigatorPartial);
 public:
  static void Initialize();
  static void InstallConditionalFeatures(
      v8::Local<v8::Context>,
      const DOMWrapperWorld&,
      v8::Local<v8::Object> instance,
      v8::Local<v8::Object> prototype,
      v8::Local<v8::Function> interface,
      v8::Local<v8::FunctionTemplate> interface_template);

  static void InstallInstalledApp(ScriptState*, v8::Local<v8::Object> instance);
  static void InstallInstalledApp(v8::Isolate*, const DOMWrapperWorld&, v8::Local<v8::Object> instance, v8::Local<v8::Object> prototype, v8::Local<v8::Function> interface);
  static void InstallInstalledApp(ScriptState*);
  static void InstallWebVR(ScriptState*, v8::Local<v8::Object> instance);
  static void InstallWebVR(v8::Isolate*, const DOMWrapperWorld&, v8::Local<v8::Object> instance, v8::Local<v8::Object> prototype, v8::Local<v8::Function> interface);
  static void InstallWebVR(ScriptState*);
  static void InstallContactsManager(ScriptState*, v8::Local<v8::Object> instance);
  static void InstallContactsManager(v8::Isolate*, const DOMWrapperWorld&, v8::Local<v8::Object> instance, v8::Local<v8::Object> prototype, v8::Local<v8::Function> interface);
  static void InstallContactsManager(ScriptState*);
  static void InstallWebXR(ScriptState*, v8::Local<v8::Object> instance);
  static void InstallWebXR(v8::Isolate*, const DOMWrapperWorld&, v8::Local<v8::Object> instance, v8::Local<v8::Object> prototype, v8::Local<v8::Function> interface);
  static void InstallWebXR(ScriptState*);

  static void InstallRuntimeEnabledFeaturesOnTemplate(
      v8::Isolate*,
      const DOMWrapperWorld&,
      v8::Local<v8::FunctionTemplate> interface_template);

  // Callback functions
  static void BluetoothAttributeGetterCallback(    const v8::FunctionCallbackInfo<v8::Value>& info);
  static void ClipboardAttributeGetterCallback(    const v8::FunctionCallbackInfo<v8::Value>& info);
  static void ContactsAttributeGetterCallback(    const v8::FunctionCallbackInfo<v8::Value>& info);
  static void CredentialsAttributeGetterCallback(    const v8::FunctionCallbackInfo<v8::Value>& info);
  static void DoNotTrackAttributeGetterCallback(    const v8::FunctionCallbackInfo<v8::Value>& info);
  static void GeolocationAttributeGetterCallback(    const v8::FunctionCallbackInfo<v8::Value>& info);
  static void HidAttributeGetterCallback(    const v8::FunctionCallbackInfo<v8::Value>& info);
  static void KeyboardAttributeGetterCallback(    const v8::FunctionCallbackInfo<v8::Value>& info);
  static void LocksAttributeGetterCallback(    const v8::FunctionCallbackInfo<v8::Value>& info);
  static void MediaCapabilitiesAttributeGetterCallback(    const v8::FunctionCallbackInfo<v8::Value>& info);
  static void MediaSessionAttributeGetterCallback(    const v8::FunctionCallbackInfo<v8::Value>& info);
  static void MediaDevicesAttributeGetterCallback(    const v8::FunctionCallbackInfo<v8::Value>& info);
  static void ConnectionAttributeGetterCallback(    const v8::FunctionCallbackInfo<v8::Value>& info);
  static void NfcAttributeGetterCallback(    const v8::FunctionCallbackInfo<v8::Value>& info);
  static void PermissionsAttributeGetterCallback(    const v8::FunctionCallbackInfo<v8::Value>& info);
  static void PluginsAttributeGetterCallback(    const v8::FunctionCallbackInfo<v8::Value>& info);
  static void MimeTypesAttributeGetterCallback(    const v8::FunctionCallbackInfo<v8::Value>& info);
  static void PresentationAttributeGetterCallback(    const v8::FunctionCallbackInfo<v8::Value>& info);
  static void WebkitTemporaryStorageAttributeGetterCallback(    const v8::FunctionCallbackInfo<v8::Value>& info);
  static void WebkitPersistentStorageAttributeGetterCallback(    const v8::FunctionCallbackInfo<v8::Value>& info);
  static void StorageAttributeGetterCallback(    const v8::FunctionCallbackInfo<v8::Value>& info);
  static void SerialAttributeGetterCallback(    const v8::FunctionCallbackInfo<v8::Value>& info);
  static void ServiceWorkerAttributeGetterCallback(    const v8::FunctionCallbackInfo<v8::Value>& info);
  static void GpuAttributeGetterCallback(    const v8::FunctionCallbackInfo<v8::Value>& info);
  static void UsbAttributeGetterCallback(    const v8::FunctionCallbackInfo<v8::Value>& info);
  static void XrAttributeGetterCallback(    const v8::FunctionCallbackInfo<v8::Value>& info);

  static void GetBatteryMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info);
  static void SendBeaconMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info);
  static void RequestMediaKeySystemAccessMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info);
  static void GetGamepadsMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info);
  static void GetInstalledRelatedAppsMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info);
  static void GetUserMediaMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info);
  static void WebkitGetUserMediaMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info);
  static void RegisterProtocolHandlerMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info);
  static void UnregisterProtocolHandlerMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info);
  static void JavaEnabledMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info);
  static void VibrateMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info);
  static void GetVRDisplaysMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info);
  static void GetWakeLockMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info);
  static void RequestMIDIAccessMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info);
  static void CanShareMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info);
  static void ShareMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info);

 private:
  static void InstallV8NavigatorTemplate(v8::Isolate*, const DOMWrapperWorld&, v8::Local<v8::FunctionTemplate> interface_template);
};

}  // namespace blink

#endif  // THIRD_PARTY_BLINK_RENDERER_BINDINGS_MODULES_V8_V8_NAVIGATOR_PARTIAL_H_
