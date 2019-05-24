// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated from the Jinja2 template
// third_party/blink/renderer/bindings/templates/interface.h.tmpl
// by the script code_generator_v8.py.
// DO NOT MODIFY!

// clang-format off
#ifndef THIRD_PARTY_BLINK_RENDERER_BINDINGS_MODULES_V8_V8_SOURCE_BUFFER_H_
#define THIRD_PARTY_BLINK_RENDERER_BINDINGS_MODULES_V8_V8_SOURCE_BUFFER_H_

#include "third_party/blink/renderer/bindings/core/v8/generated_code_helper.h"
#include "third_party/blink/renderer/bindings/core/v8/native_value_traits.h"
#include "third_party/blink/renderer/bindings/core/v8/to_v8_for_core.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_binding_for_core.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_event_target.h"
#include "third_party/blink/renderer/modules/mediasource/source_buffer.h"
#include "third_party/blink/renderer/modules/modules_export.h"
#include "third_party/blink/renderer/platform/bindings/script_wrappable.h"
#include "third_party/blink/renderer/platform/bindings/v8_dom_wrapper.h"
#include "third_party/blink/renderer/platform/bindings/wrapper_type_info.h"
#include "third_party/blink/renderer/platform/heap/handle.h"

namespace blink {

MODULES_EXPORT extern const WrapperTypeInfo v8_source_buffer_wrapper_type_info;

class V8SourceBuffer {
  STATIC_ONLY(V8SourceBuffer);
 public:
  MODULES_EXPORT static bool HasInstance(v8::Local<v8::Value>, v8::Isolate*);
  static v8::Local<v8::Object> FindInstanceInPrototypeChain(v8::Local<v8::Value>, v8::Isolate*);
  MODULES_EXPORT static v8::Local<v8::FunctionTemplate> DomTemplate(v8::Isolate*, const DOMWrapperWorld&);
  static SourceBuffer* ToImpl(v8::Local<v8::Object> object) {
    return ToScriptWrappable(object)->ToImpl<SourceBuffer>();
  }
  MODULES_EXPORT static SourceBuffer* ToImplWithTypeCheck(v8::Isolate*, v8::Local<v8::Value>);

  MODULES_EXPORT static constexpr const WrapperTypeInfo* GetWrapperTypeInfo() {
    return &v8_source_buffer_wrapper_type_info;
  }

  static constexpr int kInternalFieldCount = kV8DefaultWrapperInternalFieldCount;

  // Callback functions

  MODULES_EXPORT static void ModeAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  MODULES_EXPORT static void ModeAttributeSetterCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  MODULES_EXPORT static void UpdatingAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  MODULES_EXPORT static void BufferedAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  MODULES_EXPORT static void TimestampOffsetAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  MODULES_EXPORT static void TimestampOffsetAttributeSetterCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  MODULES_EXPORT static void AudioTracksAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  MODULES_EXPORT static void VideoTracksAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  MODULES_EXPORT static void AppendWindowStartAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  MODULES_EXPORT static void AppendWindowStartAttributeSetterCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  MODULES_EXPORT static void AppendWindowEndAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  MODULES_EXPORT static void AppendWindowEndAttributeSetterCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  MODULES_EXPORT static void OnupdatestartAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  MODULES_EXPORT static void OnupdatestartAttributeSetterCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  MODULES_EXPORT static void OnupdateAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  MODULES_EXPORT static void OnupdateAttributeSetterCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  MODULES_EXPORT static void OnupdateendAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  MODULES_EXPORT static void OnupdateendAttributeSetterCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  MODULES_EXPORT static void OnerrorAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  MODULES_EXPORT static void OnerrorAttributeSetterCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  MODULES_EXPORT static void OnabortAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  MODULES_EXPORT static void OnabortAttributeSetterCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  MODULES_EXPORT static void TrackDefaultsAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  MODULES_EXPORT static void TrackDefaultsAttributeSetterCallback(const v8::FunctionCallbackInfo<v8::Value>&);

  MODULES_EXPORT static void AppendBufferMethodCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  MODULES_EXPORT static void AbortMethodCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  MODULES_EXPORT static void RemoveMethodCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  MODULES_EXPORT static void ChangeTypeMethodCallback(const v8::FunctionCallbackInfo<v8::Value>&);

  static void InstallRuntimeEnabledFeaturesOnTemplate(
      v8::Isolate*,
      const DOMWrapperWorld&,
      v8::Local<v8::FunctionTemplate> interface_template);
};

template <>
struct NativeValueTraits<SourceBuffer> : public NativeValueTraitsBase<SourceBuffer> {
  MODULES_EXPORT static SourceBuffer* NativeValue(v8::Isolate*, v8::Local<v8::Value>, ExceptionState&);
  MODULES_EXPORT static SourceBuffer* NullValue() { return nullptr; }
};

template <>
struct V8TypeOf<SourceBuffer> {
  typedef V8SourceBuffer Type;
};

}  // namespace blink

#endif  // THIRD_PARTY_BLINK_RENDERER_BINDINGS_MODULES_V8_V8_SOURCE_BUFFER_H_
