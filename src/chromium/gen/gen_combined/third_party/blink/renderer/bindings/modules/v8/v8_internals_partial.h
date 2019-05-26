// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated from the Jinja2 template
// third_party/blink/renderer/bindings/templates/partial_interface.h.tmpl
// by the script code_generator_v8.py.
// DO NOT MODIFY!

// clang-format off
#ifndef THIRD_PARTY_BLINK_RENDERER_BINDINGS_MODULES_V8_V8_INTERNALS_PARTIAL_H_
#define THIRD_PARTY_BLINK_RENDERER_BINDINGS_MODULES_V8_V8_INTERNALS_PARTIAL_H_

#include "third_party/blink/renderer/bindings/core/v8/generated_code_helper.h"
#include "third_party/blink/renderer/bindings/core/v8/native_value_traits.h"
#include "third_party/blink/renderer/bindings/core/v8/to_v8_for_core.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_binding_for_core.h"
#include "third_party/blink/renderer/core/testing/internals.h"
#include "third_party/blink/renderer/platform/bindings/script_wrappable.h"
#include "third_party/blink/renderer/platform/bindings/v8_dom_wrapper.h"
#include "third_party/blink/renderer/platform/bindings/wrapper_type_info.h"
#include "third_party/blink/renderer/platform/heap/handle.h"

namespace blink {

class V8InternalsPartial {
  STATIC_ONLY(V8InternalsPartial);
 public:
  static void Initialize();

  static void InstallRuntimeEnabledFeaturesOnTemplate(
      v8::Isolate*,
      const DOMWrapperWorld&,
      v8::Local<v8::FunctionTemplate> interface_template);

  // Callback functions
  static void PeerConnectionCountLimitAttributeGetterCallback(    const v8::FunctionCallbackInfo<v8::Value>& info);

  static void NumberOfLiveAXObjectsMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info);
  static void AddFakeDeviceMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info);
  static void SetNetworkConnectionInfoOverrideMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info);
  static void SetSaveDataEnabledMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info);
  static void ClearNetworkConnectionInfoOverrideMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info);
  static void RTCCertificateEqualsMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info);
  static void PeerConnectionCountMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info);
  static void TerminateServiceWorkerMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info);
  static void EnableMockSpeechSynthesizerMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info);
  static void IsVibratingMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info);
  static void PendingVibrationPatternMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info);
  static void AudioHandlerCountMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info);

 private:
  static void InstallV8InternalsTemplate(v8::Isolate*, const DOMWrapperWorld&, v8::Local<v8::FunctionTemplate> interface_template);
};

}  // namespace blink

#endif  // THIRD_PARTY_BLINK_RENDERER_BINDINGS_MODULES_V8_V8_INTERNALS_PARTIAL_H_
