// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated from the Jinja2 template
// third_party/blink/renderer/bindings/templates/dictionary_v8.cc.tmpl
// by the script code_generator_v8.py.
// DO NOT MODIFY!

// clang-format off
#include "third_party/blink/renderer/bindings/modules/v8/v8_gpu_render_pass_descriptor.h"

#include "base/stl_util.h"
#include "third_party/blink/renderer/bindings/core/v8/idl_types.h"
#include "third_party/blink/renderer/bindings/core/v8/native_value_traits_impl.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_gpu_render_pass_color_attachment_descriptor.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_gpu_render_pass_depth_stencil_attachment_descriptor.h"
#include "third_party/blink/renderer/platform/bindings/exception_state.h"

namespace blink {

static const v8::Eternal<v8::Name>* eternalV8GPURenderPassDescriptorKeys(v8::Isolate* isolate) {
  static const char* const kKeys[] = {
    "colorAttachments",
    "depthStencilAttachment",
  };
  return V8PerIsolateData::From(isolate)->FindOrCreateEternalNameCache(
      kKeys, kKeys, base::size(kKeys));
}

void V8GPURenderPassDescriptor::ToImpl(v8::Isolate* isolate, v8::Local<v8::Value> v8_value, GPURenderPassDescriptor* impl, ExceptionState& exception_state) {
  if (IsUndefinedOrNull(v8_value)) {
    exception_state.ThrowTypeError("Missing required member(s): colorAttachments.");
    return;
  }
  if (!v8_value->IsObject()) {
    exception_state.ThrowTypeError("cannot convert to dictionary.");
    return;
  }
  v8::Local<v8::Object> v8Object = v8_value.As<v8::Object>();
  ALLOW_UNUSED_LOCAL(v8Object);

  const v8::Eternal<v8::Name>* keys = eternalV8GPURenderPassDescriptorKeys(isolate);
  v8::TryCatch block(isolate);
  v8::Local<v8::Context> context = isolate->GetCurrentContext();
  v8::Local<v8::Value> color_attachments_value;
  if (!v8Object->Get(context, keys[0].Get(isolate)).ToLocal(&color_attachments_value)) {
    exception_state.RethrowV8Exception(block.Exception());
    return;
  }
  if (color_attachments_value.IsEmpty() || color_attachments_value->IsUndefined()) {
    exception_state.ThrowTypeError("required member colorAttachments is undefined.");
    return;
  } else {
    HeapVector<Member<GPURenderPassColorAttachmentDescriptor>> color_attachments_cpp_value = NativeValueTraits<IDLSequence<GPURenderPassColorAttachmentDescriptor>>::NativeValue(isolate, color_attachments_value, exception_state);
    if (exception_state.HadException())
      return;
    impl->setColorAttachments(color_attachments_cpp_value);
  }

  v8::Local<v8::Value> depth_stencil_attachment_value;
  if (!v8Object->Get(context, keys[1].Get(isolate)).ToLocal(&depth_stencil_attachment_value)) {
    exception_state.RethrowV8Exception(block.Exception());
    return;
  }
  if (depth_stencil_attachment_value.IsEmpty() || depth_stencil_attachment_value->IsUndefined()) {
    // Do nothing.
  } else {
    GPURenderPassDepthStencilAttachmentDescriptor* depth_stencil_attachment_cpp_value = NativeValueTraits<GPURenderPassDepthStencilAttachmentDescriptor>::NativeValue(isolate, depth_stencil_attachment_value, exception_state);
    if (exception_state.HadException())
      return;
    impl->setDepthStencilAttachment(depth_stencil_attachment_cpp_value);
  }
}

v8::Local<v8::Value> GPURenderPassDescriptor::ToV8Impl(v8::Local<v8::Object> creationContext, v8::Isolate* isolate) const {
  v8::Local<v8::Object> v8Object = v8::Object::New(isolate);
  if (!toV8GPURenderPassDescriptor(this, v8Object, creationContext, isolate))
    return v8::Undefined(isolate);
  return v8Object;
}

bool toV8GPURenderPassDescriptor(const GPURenderPassDescriptor* impl, v8::Local<v8::Object> dictionary, v8::Local<v8::Object> creationContext, v8::Isolate* isolate) {
  const v8::Eternal<v8::Name>* keys = eternalV8GPURenderPassDescriptorKeys(isolate);
  v8::Local<v8::Context> context = isolate->GetCurrentContext();

  auto create_property = [dictionary, context, keys, isolate](
                             size_t key_index, v8::Local<v8::Value> value) {
    bool added_property;
    v8::Local<v8::Name> key = keys[key_index].Get(isolate);
    if (!dictionary->CreateDataProperty(context, key, value)
             .To(&added_property)) {
      return false;
    }
    return added_property;
  };

  v8::Local<v8::Value> color_attachments_value;
  bool color_attachments_has_value_or_default = false;
  if (impl->hasColorAttachments()) {
    color_attachments_value = ToV8(impl->colorAttachments(), creationContext, isolate);
    color_attachments_has_value_or_default = true;
  } else {
    NOTREACHED();
  }
  if (color_attachments_has_value_or_default &&
      !create_property(0, color_attachments_value)) {
    return false;
  }

  v8::Local<v8::Value> depth_stencil_attachment_value;
  bool depth_stencil_attachment_has_value_or_default = false;
  if (impl->hasDepthStencilAttachment()) {
    depth_stencil_attachment_value = ToV8(impl->depthStencilAttachment(), creationContext, isolate);
    depth_stencil_attachment_has_value_or_default = true;
  } else {
    depth_stencil_attachment_value = v8::Null(isolate);
    depth_stencil_attachment_has_value_or_default = true;
  }
  if (depth_stencil_attachment_has_value_or_default &&
      !create_property(1, depth_stencil_attachment_value)) {
    return false;
  }

  return true;
}

GPURenderPassDescriptor* NativeValueTraits<GPURenderPassDescriptor>::NativeValue(v8::Isolate* isolate, v8::Local<v8::Value> value, ExceptionState& exception_state) {
  GPURenderPassDescriptor* impl = GPURenderPassDescriptor::Create();
  V8GPURenderPassDescriptor::ToImpl(isolate, value, impl, exception_state);
  return impl;
}

}  // namespace blink
