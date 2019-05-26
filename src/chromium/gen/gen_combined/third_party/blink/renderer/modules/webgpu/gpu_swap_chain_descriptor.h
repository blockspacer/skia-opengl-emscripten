// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated from the Jinja2 template
// third_party/blink/renderer/bindings/templates/dictionary_impl.h.tmpl
// by the script code_generator_v8.py.
// DO NOT MODIFY!

// clang-format off
#ifndef THIRD_PARTY_BLINK_RENDERER_MODULES_WEBGPU_GPU_SWAP_CHAIN_DESCRIPTOR_H_
#define THIRD_PARTY_BLINK_RENDERER_MODULES_WEBGPU_GPU_SWAP_CHAIN_DESCRIPTOR_H_

#include "third_party/blink/renderer/bindings/core/v8/idl_dictionary_base.h"
#include "third_party/blink/renderer/modules/modules_export.h"
#include "third_party/blink/renderer/platform/heap/handle.h"
#include "third_party/blink/renderer/platform/wtf/text/wtf_string.h"

namespace blink {

class GPUDevice;

class MODULES_EXPORT GPUSwapChainDescriptor : public IDLDictionaryBase {
 public:
  static GPUSwapChainDescriptor* Create() { return MakeGarbageCollected<GPUSwapChainDescriptor>(); }

  GPUSwapChainDescriptor();
  virtual ~GPUSwapChainDescriptor();

  bool hasDevice() const { return device_; }
  GPUDevice* device() const {
    return device_;
  }
  inline void setDevice(GPUDevice*);

  bool hasFormat() const { return !format_.IsNull(); }
  const String& format() const {
    return format_;
  }
  inline void setFormat(const String&);

  bool hasUsage() const { return has_usage_; }
  uint32_t usage() const {
    DCHECK(has_usage_);
    return usage_;
  }
  inline void setUsage(uint32_t);

  v8::Local<v8::Value> ToV8Impl(v8::Local<v8::Object>, v8::Isolate*) const override;
  void Trace(blink::Visitor*) override;

 private:
  bool has_usage_ = false;

  Member<GPUDevice> device_;
  String format_;
  uint32_t usage_;

  friend class V8GPUSwapChainDescriptor;
};

void GPUSwapChainDescriptor::setDevice(GPUDevice* value) {
  device_ = value;
}

void GPUSwapChainDescriptor::setFormat(const String& value) {
  format_ = value;
}

void GPUSwapChainDescriptor::setUsage(uint32_t value) {
  usage_ = value;
  has_usage_ = true;
}

}  // namespace blink

#endif  // THIRD_PARTY_BLINK_RENDERER_MODULES_WEBGPU_GPU_SWAP_CHAIN_DESCRIPTOR_H_
