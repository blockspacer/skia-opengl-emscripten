// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated from the Jinja2 template
// third_party/blink/renderer/bindings/templates/dictionary_v8.cc.tmpl
// by the script code_generator_v8.py.
// DO NOT MODIFY!

// clang-format off
#include "third_party/blink/renderer/bindings/modules/v8/v8_gpu_render_pass_color_attachment_descriptor.h"

#include "base/stl_util.h"
#include "third_party/blink/renderer/bindings/core/v8/idl_types.h"
#include "third_party/blink/renderer/bindings/core/v8/native_value_traits_impl.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_gpu_color.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_gpu_texture_view.h"
#include "third_party/blink/renderer/platform/bindings/exception_state.h"

namespace blink {

static const v8::Eternal<v8::Name>* eternalV8GPURenderPassColorAttachmentDescriptorKeys(v8::Isolate* isolate) {
  static const char* const kKeys[] = {
    "attachment",
    "clearColor",
    "loadOp",
    "resolveTarget",
    "storeOp",
  };
  return V8PerIsolateData::From(isolate)->FindOrCreateEternalNameCache(
      kKeys, kKeys, base::size(kKeys));
}

void V8GPURenderPassColorAttachmentDescriptor::ToImpl(v8::Isolate* isolate, v8::Local<v8::Value> v8_value, GPURenderPassColorAttachmentDescriptor* impl, ExceptionState& exception_state) {
  if (IsUndefinedOrNull(v8_value)) {
    exception_state.ThrowTypeError("Missing required member(s): attachment, clearColor, loadOp, storeOp.");
    return;
  }
  if (!v8_value->IsObject()) {
    exception_state.ThrowTypeError("cannot convert to dictionary.");
    return;
  }
  v8::Local<v8::Object> v8Object = v8_value.As<v8::Object>();
  ALLOW_UNUSED_LOCAL(v8Object);

  const v8::Eternal<v8::Name>* keys = eternalV8GPURenderPassColorAttachmentDescriptorKeys(isolate);
  v8::TryCatch block(isolate);
  v8::Local<v8::Context> context = isolate->GetCurrentContext();
  v8::Local<v8::Value> attachment_value;
  if (!v8Object->Get(context, keys[0].Get(isolate)).ToLocal(&attachment_value)) {
    exception_state.RethrowV8Exception(block.Exception());
    return;
  }
  if (attachment_value.IsEmpty() || attachment_value->IsUndefined()) {
    exception_state.ThrowTypeError("required member attachment is undefined.");
    return;
  } else {
    GPUTextureView* attachment_cpp_value = V8GPUTextureView::ToImplWithTypeCheck(isolate, attachment_value);
    if (!attachment_cpp_value) {
      exception_state.ThrowTypeError("member attachment is not of type GPUTextureView.");
      return;
    }
    impl->setAttachment(attachment_cpp_value);
  }

  v8::Local<v8::Value> clear_color_value;
  if (!v8Object->Get(context, keys[1].Get(isolate)).ToLocal(&clear_color_value)) {
    exception_state.RethrowV8Exception(block.Exception());
    return;
  }
  if (clear_color_value.IsEmpty() || clear_color_value->IsUndefined()) {
    exception_state.ThrowTypeError("required member clearColor is undefined.");
    return;
  } else {
    GPUColor* clear_color_cpp_value = NativeValueTraits<GPUColor>::NativeValue(isolate, clear_color_value, exception_state);
    if (exception_state.HadException())
      return;
    impl->setClearColor(clear_color_cpp_value);
  }

  v8::Local<v8::Value> load_op_value;
  if (!v8Object->Get(context, keys[2].Get(isolate)).ToLocal(&load_op_value)) {
    exception_state.RethrowV8Exception(block.Exception());
    return;
  }
  if (load_op_value.IsEmpty() || load_op_value->IsUndefined()) {
    exception_state.ThrowTypeError("required member loadOp is undefined.");
    return;
  } else {
    V8StringResource<> load_op_cpp_value = load_op_value;
    if (!load_op_cpp_value.Prepare(exception_state))
      return;
    const char* kValidValues[] = {
        "clear",
        "load",
    };
    if (!IsValidEnum(load_op_cpp_value, kValidValues, base::size(kValidValues), "GPULoadOp", exception_state))
      return;
    impl->setLoadOp(load_op_cpp_value);
  }

  v8::Local<v8::Value> resolve_target_value;
  if (!v8Object->Get(context, keys[3].Get(isolate)).ToLocal(&resolve_target_value)) {
    exception_state.RethrowV8Exception(block.Exception());
    return;
  }
  if (resolve_target_value.IsEmpty() || resolve_target_value->IsUndefined()) {
    // Do nothing.
  } else if (resolve_target_value->IsNull()) {
    impl->setResolveTargetToNull();
  } else {
    GPUTextureView* resolve_target_cpp_value = V8GPUTextureView::ToImplWithTypeCheck(isolate, resolve_target_value);
    if (!resolve_target_cpp_value) {
      exception_state.ThrowTypeError("member resolveTarget is not of type GPUTextureView.");
      return;
    }
    impl->setResolveTarget(resolve_target_cpp_value);
  }

  v8::Local<v8::Value> store_op_value;
  if (!v8Object->Get(context, keys[4].Get(isolate)).ToLocal(&store_op_value)) {
    exception_state.RethrowV8Exception(block.Exception());
    return;
  }
  if (store_op_value.IsEmpty() || store_op_value->IsUndefined()) {
    exception_state.ThrowTypeError("required member storeOp is undefined.");
    return;
  } else {
    V8StringResource<> store_op_cpp_value = store_op_value;
    if (!store_op_cpp_value.Prepare(exception_state))
      return;
    const char* kValidValues[] = {
        "store",
    };
    if (!IsValidEnum(store_op_cpp_value, kValidValues, base::size(kValidValues), "GPUStoreOp", exception_state))
      return;
    impl->setStoreOp(store_op_cpp_value);
  }
}

v8::Local<v8::Value> GPURenderPassColorAttachmentDescriptor::ToV8Impl(v8::Local<v8::Object> creationContext, v8::Isolate* isolate) const {
  v8::Local<v8::Object> v8Object = v8::Object::New(isolate);
  if (!toV8GPURenderPassColorAttachmentDescriptor(this, v8Object, creationContext, isolate))
    return v8::Undefined(isolate);
  return v8Object;
}

bool toV8GPURenderPassColorAttachmentDescriptor(const GPURenderPassColorAttachmentDescriptor* impl, v8::Local<v8::Object> dictionary, v8::Local<v8::Object> creationContext, v8::Isolate* isolate) {
  const v8::Eternal<v8::Name>* keys = eternalV8GPURenderPassColorAttachmentDescriptorKeys(isolate);
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

  v8::Local<v8::Value> attachment_value;
  bool attachment_has_value_or_default = false;
  if (impl->hasAttachment()) {
    attachment_value = ToV8(impl->attachment(), creationContext, isolate);
    attachment_has_value_or_default = true;
  } else {
    NOTREACHED();
  }
  if (attachment_has_value_or_default &&
      !create_property(0, attachment_value)) {
    return false;
  }

  v8::Local<v8::Value> clear_color_value;
  bool clear_color_has_value_or_default = false;
  if (impl->hasClearColor()) {
    clear_color_value = ToV8(impl->clearColor(), creationContext, isolate);
    clear_color_has_value_or_default = true;
  } else {
    NOTREACHED();
  }
  if (clear_color_has_value_or_default &&
      !create_property(1, clear_color_value)) {
    return false;
  }

  v8::Local<v8::Value> load_op_value;
  bool load_op_has_value_or_default = false;
  if (impl->hasLoadOp()) {
    load_op_value = V8String(isolate, impl->loadOp());
    load_op_has_value_or_default = true;
  } else {
    NOTREACHED();
  }
  if (load_op_has_value_or_default &&
      !create_property(2, load_op_value)) {
    return false;
  }

  v8::Local<v8::Value> resolve_target_value;
  bool resolve_target_has_value_or_default = false;
  if (impl->hasResolveTarget()) {
    resolve_target_value = ToV8(impl->resolveTarget(), creationContext, isolate);
    resolve_target_has_value_or_default = true;
  } else {
    resolve_target_value = v8::Null(isolate);
    resolve_target_has_value_or_default = true;
  }
  if (resolve_target_has_value_or_default &&
      !create_property(3, resolve_target_value)) {
    return false;
  }

  v8::Local<v8::Value> store_op_value;
  bool store_op_has_value_or_default = false;
  if (impl->hasStoreOp()) {
    store_op_value = V8String(isolate, impl->storeOp());
    store_op_has_value_or_default = true;
  } else {
    NOTREACHED();
  }
  if (store_op_has_value_or_default &&
      !create_property(4, store_op_value)) {
    return false;
  }

  return true;
}

GPURenderPassColorAttachmentDescriptor* NativeValueTraits<GPURenderPassColorAttachmentDescriptor>::NativeValue(v8::Isolate* isolate, v8::Local<v8::Value> value, ExceptionState& exception_state) {
  GPURenderPassColorAttachmentDescriptor* impl = GPURenderPassColorAttachmentDescriptor::Create();
  V8GPURenderPassColorAttachmentDescriptor::ToImpl(isolate, value, impl, exception_state);
  return impl;
}

}  // namespace blink
