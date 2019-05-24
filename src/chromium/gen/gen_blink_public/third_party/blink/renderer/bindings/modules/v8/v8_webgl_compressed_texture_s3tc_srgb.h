// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated from the Jinja2 template
// third_party/blink/renderer/bindings/templates/interface.h.tmpl
// by the script code_generator_v8.py.
// DO NOT MODIFY!

// clang-format off
#ifndef THIRD_PARTY_BLINK_RENDERER_BINDINGS_MODULES_V8_V8_WEBGL_COMPRESSED_TEXTURE_S3TC_SRGB_H_
#define THIRD_PARTY_BLINK_RENDERER_BINDINGS_MODULES_V8_V8_WEBGL_COMPRESSED_TEXTURE_S3TC_SRGB_H_

#include "third_party/blink/renderer/bindings/core/v8/generated_code_helper.h"
#include "third_party/blink/renderer/bindings/core/v8/native_value_traits.h"
#include "third_party/blink/renderer/bindings/core/v8/to_v8_for_core.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_binding_for_core.h"
#include "third_party/blink/renderer/modules/modules_export.h"
#include "third_party/blink/renderer/modules/webgl/webgl_compressed_texture_s3tc_srgb.h"
#include "third_party/blink/renderer/platform/bindings/script_wrappable.h"
#include "third_party/blink/renderer/platform/bindings/v8_dom_wrapper.h"
#include "third_party/blink/renderer/platform/bindings/wrapper_type_info.h"
#include "third_party/blink/renderer/platform/heap/handle.h"

namespace blink {

MODULES_EXPORT extern const WrapperTypeInfo v8_webgl_compressed_texture_s3tc_srgb_wrapper_type_info;

class V8WebGLCompressedTextureS3TCsRGB {
  STATIC_ONLY(V8WebGLCompressedTextureS3TCsRGB);
 public:
  MODULES_EXPORT static bool HasInstance(v8::Local<v8::Value>, v8::Isolate*);
  static v8::Local<v8::Object> FindInstanceInPrototypeChain(v8::Local<v8::Value>, v8::Isolate*);
  MODULES_EXPORT static v8::Local<v8::FunctionTemplate> DomTemplate(v8::Isolate*, const DOMWrapperWorld&);
  static WebGLCompressedTextureS3TCsRGB* ToImpl(v8::Local<v8::Object> object) {
    return ToScriptWrappable(object)->ToImpl<WebGLCompressedTextureS3TCsRGB>();
  }
  MODULES_EXPORT static WebGLCompressedTextureS3TCsRGB* ToImplWithTypeCheck(v8::Isolate*, v8::Local<v8::Value>);

  MODULES_EXPORT static constexpr const WrapperTypeInfo* GetWrapperTypeInfo() {
    return &v8_webgl_compressed_texture_s3tc_srgb_wrapper_type_info;
  }

  static constexpr int kInternalFieldCount = kV8DefaultWrapperInternalFieldCount;

  // Callback functions

  static void InstallRuntimeEnabledFeaturesOnTemplate(
      v8::Isolate*,
      const DOMWrapperWorld&,
      v8::Local<v8::FunctionTemplate> interface_template);
};

template <>
struct NativeValueTraits<WebGLCompressedTextureS3TCsRGB> : public NativeValueTraitsBase<WebGLCompressedTextureS3TCsRGB> {
  MODULES_EXPORT static WebGLCompressedTextureS3TCsRGB* NativeValue(v8::Isolate*, v8::Local<v8::Value>, ExceptionState&);
  MODULES_EXPORT static WebGLCompressedTextureS3TCsRGB* NullValue() { return nullptr; }
};

template <>
struct V8TypeOf<WebGLCompressedTextureS3TCsRGB> {
  typedef V8WebGLCompressedTextureS3TCsRGB Type;
};

}  // namespace blink

#endif  // THIRD_PARTY_BLINK_RENDERER_BINDINGS_MODULES_V8_V8_WEBGL_COMPRESSED_TEXTURE_S3TC_SRGB_H_
