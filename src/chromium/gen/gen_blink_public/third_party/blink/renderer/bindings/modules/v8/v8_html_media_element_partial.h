// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated from the Jinja2 template
// third_party/blink/renderer/bindings/templates/partial_interface.h.tmpl
// by the script code_generator_v8.py.
// DO NOT MODIFY!

// clang-format off
#ifndef THIRD_PARTY_BLINK_RENDERER_BINDINGS_MODULES_V8_V8_HTML_MEDIA_ELEMENT_PARTIAL_H_
#define THIRD_PARTY_BLINK_RENDERER_BINDINGS_MODULES_V8_V8_HTML_MEDIA_ELEMENT_PARTIAL_H_

#include "third_party/blink/renderer/bindings/core/v8/generated_code_helper.h"
#include "third_party/blink/renderer/bindings/core/v8/native_value_traits.h"
#include "third_party/blink/renderer/bindings/core/v8/to_v8_for_core.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_binding_for_core.h"
#include "third_party/blink/renderer/core/html/media/html_media_element.h"
#include "third_party/blink/renderer/platform/bindings/script_wrappable.h"
#include "third_party/blink/renderer/platform/bindings/v8_dom_wrapper.h"
#include "third_party/blink/renderer/platform/bindings/wrapper_type_info.h"
#include "third_party/blink/renderer/platform/heap/handle.h"

namespace blink {

class V8HTMLMediaElementPartial {
  STATIC_ONLY(V8HTMLMediaElementPartial);
 public:
  static void Initialize();
  static void InstallConditionalFeatures(
      v8::Local<v8::Context>,
      const DOMWrapperWorld&,
      v8::Local<v8::Object> instance,
      v8::Local<v8::Object> prototype,
      v8::Local<v8::Function> interface,
      v8::Local<v8::FunctionTemplate> interface_template);

  static void InstallRuntimeEnabledFeaturesOnTemplate(
      v8::Isolate*,
      const DOMWrapperWorld&,
      v8::Local<v8::FunctionTemplate> interface_template);

  // Callback functions
  static void SinkIdAttributeGetterCallback(    const v8::FunctionCallbackInfo<v8::Value>& info);
  static void MediaKeysAttributeGetterCallback(    const v8::FunctionCallbackInfo<v8::Value>& info);
  static void OnencryptedAttributeGetterCallback(    const v8::FunctionCallbackInfo<v8::Value>& info);
  static void OnencryptedAttributeSetterCallback(    const v8::FunctionCallbackInfo<v8::Value>& info);
  static void OnwaitingforkeyAttributeGetterCallback(    const v8::FunctionCallbackInfo<v8::Value>& info);
  static void OnwaitingforkeyAttributeSetterCallback(    const v8::FunctionCallbackInfo<v8::Value>& info);
  static void RemoteAttributeGetterCallback(    const v8::FunctionCallbackInfo<v8::Value>& info);
  static void DisableRemotePlaybackAttributeGetterCallback(    const v8::FunctionCallbackInfo<v8::Value>& info);
  static void DisableRemotePlaybackAttributeSetterCallback(    const v8::FunctionCallbackInfo<v8::Value>& info);
  static void SrcObjectAttributeGetterCallback(    const v8::FunctionCallbackInfo<v8::Value>& info);
  static void SrcObjectAttributeSetterCallback(    const v8::FunctionCallbackInfo<v8::Value>& info);

  static void SetSinkIdMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info);
  static void SetMediaKeysMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info);
  static void CaptureStreamMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info);

 private:
  static void InstallV8HTMLMediaElementTemplate(v8::Isolate*, const DOMWrapperWorld&, v8::Local<v8::FunctionTemplate> interface_template);
};

}  // namespace blink

#endif  // THIRD_PARTY_BLINK_RENDERER_BINDINGS_MODULES_V8_V8_HTML_MEDIA_ELEMENT_PARTIAL_H_
