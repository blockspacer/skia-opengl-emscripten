// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated from the Jinja2 template
// third_party/blink/renderer/bindings/templates/dictionary_impl.h.tmpl
// by the script code_generator_v8.py.
// DO NOT MODIFY!

// clang-format off
#ifndef THIRD_PARTY_BLINK_RENDERER_MODULES_WEBGPU_GPU_UNCAPTURED_ERROR_EVENT_INIT_H_
#define THIRD_PARTY_BLINK_RENDERER_MODULES_WEBGPU_GPU_UNCAPTURED_ERROR_EVENT_INIT_H_

#include "third_party/blink/renderer/bindings/modules/v8/gpu_out_of_memory_error_or_gpu_validation_error.h"
#include "third_party/blink/renderer/core/dom/events/event_init.h"
#include "third_party/blink/renderer/modules/modules_export.h"
#include "third_party/blink/renderer/modules/webgpu/gpu_out_of_memory_error.h"
#include "third_party/blink/renderer/modules/webgpu/gpu_validation_error.h"
#include "third_party/blink/renderer/platform/heap/handle.h"

namespace blink {

class MODULES_EXPORT GPUUncapturedErrorEventInit : public EventInit {
 public:
  static GPUUncapturedErrorEventInit* Create() { return MakeGarbageCollected<GPUUncapturedErrorEventInit>(); }

  GPUUncapturedErrorEventInit();
  virtual ~GPUUncapturedErrorEventInit();

  bool hasError() const { return !error_.IsNull(); }
  const GPUOutOfMemoryErrorOrGPUValidationError& error() const {
    return error_;
  }
  void setError(const GPUOutOfMemoryErrorOrGPUValidationError&);

  v8::Local<v8::Value> ToV8Impl(v8::Local<v8::Object>, v8::Isolate*) const override;
  void Trace(blink::Visitor*) override;

 private:

  GPUOutOfMemoryErrorOrGPUValidationError error_;

  friend class V8GPUUncapturedErrorEventInit;
};

}  // namespace blink

#endif  // THIRD_PARTY_BLINK_RENDERER_MODULES_WEBGPU_GPU_UNCAPTURED_ERROR_EVENT_INIT_H_
