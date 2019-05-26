// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated from the Jinja2 template
// third_party/blink/renderer/bindings/templates/dictionary_impl.h.tmpl
// by the script code_generator_v8.py.
// DO NOT MODIFY!

// clang-format off
#ifndef THIRD_PARTY_BLINK_RENDERER_MODULES_WEBGPU_GPU_STENCIL_STATE_FACE_DESCRIPTOR_H_
#define THIRD_PARTY_BLINK_RENDERER_MODULES_WEBGPU_GPU_STENCIL_STATE_FACE_DESCRIPTOR_H_

#include "third_party/blink/renderer/bindings/core/v8/idl_dictionary_base.h"
#include "third_party/blink/renderer/modules/modules_export.h"
#include "third_party/blink/renderer/platform/heap/handle.h"
#include "third_party/blink/renderer/platform/wtf/text/wtf_string.h"

namespace blink {

class MODULES_EXPORT GPUStencilStateFaceDescriptor : public IDLDictionaryBase {
 public:
  static GPUStencilStateFaceDescriptor* Create() { return MakeGarbageCollected<GPUStencilStateFaceDescriptor>(); }

  GPUStencilStateFaceDescriptor();
  virtual ~GPUStencilStateFaceDescriptor();

  bool hasCompare() const { return !compare_.IsNull(); }
  const String& compare() const {
    return compare_;
  }
  inline void setCompare(const String&);

  bool hasDepthFailOp() const { return !depth_fail_op_.IsNull(); }
  const String& depthFailOp() const {
    return depth_fail_op_;
  }
  inline void setDepthFailOp(const String&);

  bool hasFailOp() const { return !fail_op_.IsNull(); }
  const String& failOp() const {
    return fail_op_;
  }
  inline void setFailOp(const String&);

  bool hasPassOp() const { return !pass_op_.IsNull(); }
  const String& passOp() const {
    return pass_op_;
  }
  inline void setPassOp(const String&);

  v8::Local<v8::Value> ToV8Impl(v8::Local<v8::Object>, v8::Isolate*) const override;
  void Trace(blink::Visitor*) override;

 private:

  String compare_;
  String depth_fail_op_;
  String fail_op_;
  String pass_op_;

  friend class V8GPUStencilStateFaceDescriptor;
};

void GPUStencilStateFaceDescriptor::setCompare(const String& value) {
  compare_ = value;
}

void GPUStencilStateFaceDescriptor::setDepthFailOp(const String& value) {
  depth_fail_op_ = value;
}

void GPUStencilStateFaceDescriptor::setFailOp(const String& value) {
  fail_op_ = value;
}

void GPUStencilStateFaceDescriptor::setPassOp(const String& value) {
  pass_op_ = value;
}

}  // namespace blink

#endif  // THIRD_PARTY_BLINK_RENDERER_MODULES_WEBGPU_GPU_STENCIL_STATE_FACE_DESCRIPTOR_H_
