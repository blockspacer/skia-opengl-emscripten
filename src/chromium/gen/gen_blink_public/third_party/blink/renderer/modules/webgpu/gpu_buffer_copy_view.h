// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated from the Jinja2 template
// third_party/blink/renderer/bindings/templates/dictionary_impl.h.tmpl
// by the script code_generator_v8.py.
// DO NOT MODIFY!

// clang-format off
#ifndef THIRD_PARTY_BLINK_RENDERER_MODULES_WEBGPU_GPU_BUFFER_COPY_VIEW_H_
#define THIRD_PARTY_BLINK_RENDERER_MODULES_WEBGPU_GPU_BUFFER_COPY_VIEW_H_

#include "third_party/blink/renderer/bindings/core/v8/idl_dictionary_base.h"
#include "third_party/blink/renderer/modules/modules_export.h"
#include "third_party/blink/renderer/platform/heap/handle.h"

namespace blink {

class GPUBuffer;

class MODULES_EXPORT GPUBufferCopyView : public IDLDictionaryBase {
 public:
  static GPUBufferCopyView* Create() { return MakeGarbageCollected<GPUBufferCopyView>(); }

  GPUBufferCopyView();
  virtual ~GPUBufferCopyView();

  bool hasBuffer() const { return buffer_; }
  GPUBuffer* buffer() const {
    return buffer_;
  }
  inline void setBuffer(GPUBuffer*);

  bool hasImageHeight() const { return has_image_height_; }
  uint32_t imageHeight() const {
    DCHECK(has_image_height_);
    return image_height_;
  }
  inline void setImageHeight(uint32_t);

  bool hasOffset() const { return has_offset_; }
  uint64_t offset() const {
    DCHECK(has_offset_);
    return offset_;
  }
  inline void setOffset(uint64_t);

  bool hasRowPitch() const { return has_row_pitch_; }
  uint32_t rowPitch() const {
    DCHECK(has_row_pitch_);
    return row_pitch_;
  }
  inline void setRowPitch(uint32_t);

  v8::Local<v8::Value> ToV8Impl(v8::Local<v8::Object>, v8::Isolate*) const override;
  void Trace(blink::Visitor*) override;

 private:
  bool has_image_height_ = false;
  bool has_offset_ = false;
  bool has_row_pitch_ = false;

  Member<GPUBuffer> buffer_;
  uint32_t image_height_;
  uint64_t offset_;
  uint32_t row_pitch_;

  friend class V8GPUBufferCopyView;
};

void GPUBufferCopyView::setBuffer(GPUBuffer* value) {
  buffer_ = value;
}

void GPUBufferCopyView::setImageHeight(uint32_t value) {
  image_height_ = value;
  has_image_height_ = true;
}

void GPUBufferCopyView::setOffset(uint64_t value) {
  offset_ = value;
  has_offset_ = true;
}

void GPUBufferCopyView::setRowPitch(uint32_t value) {
  row_pitch_ = value;
  has_row_pitch_ = true;
}

}  // namespace blink

#endif  // THIRD_PARTY_BLINK_RENDERER_MODULES_WEBGPU_GPU_BUFFER_COPY_VIEW_H_
