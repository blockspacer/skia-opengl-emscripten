// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated from the Jinja2 template
// third_party/blink/renderer/bindings/templates/dictionary_impl.h.tmpl
// by the script code_generator_v8.py.
// DO NOT MODIFY!

// clang-format off
#ifndef THIRD_PARTY_BLINK_RENDERER_CORE_MOJO_MOJO_CREATE_DATA_PIPE_OPTIONS_H_
#define THIRD_PARTY_BLINK_RENDERER_CORE_MOJO_MOJO_CREATE_DATA_PIPE_OPTIONS_H_

#include "third_party/blink/renderer/bindings/core/v8/idl_dictionary_base.h"
#include "third_party/blink/renderer/core/core_export.h"
#include "third_party/blink/renderer/platform/heap/handle.h"

namespace blink {

class CORE_EXPORT MojoCreateDataPipeOptions : public IDLDictionaryBase {
 public:
  static MojoCreateDataPipeOptions* Create() { return MakeGarbageCollected<MojoCreateDataPipeOptions>(); }

  MojoCreateDataPipeOptions();
  virtual ~MojoCreateDataPipeOptions();

  bool hasCapacityNumBytes() const { return has_capacity_num_bytes_; }
  uint32_t capacityNumBytes() const {
    DCHECK(has_capacity_num_bytes_);
    return capacity_num_bytes_;
  }
  inline void setCapacityNumBytes(uint32_t);

  bool hasElementNumBytes() const { return has_element_num_bytes_; }
  uint32_t elementNumBytes() const {
    DCHECK(has_element_num_bytes_);
    return element_num_bytes_;
  }
  inline void setElementNumBytes(uint32_t);

  v8::Local<v8::Value> ToV8Impl(v8::Local<v8::Object>, v8::Isolate*) const override;
  void Trace(blink::Visitor*) override;

 private:
  bool has_capacity_num_bytes_ = false;
  bool has_element_num_bytes_ = false;

  uint32_t capacity_num_bytes_;
  uint32_t element_num_bytes_;

  friend class V8MojoCreateDataPipeOptions;
};

void MojoCreateDataPipeOptions::setCapacityNumBytes(uint32_t value) {
  capacity_num_bytes_ = value;
  has_capacity_num_bytes_ = true;
}

void MojoCreateDataPipeOptions::setElementNumBytes(uint32_t value) {
  element_num_bytes_ = value;
  has_element_num_bytes_ = true;
}

}  // namespace blink

#endif  // THIRD_PARTY_BLINK_RENDERER_CORE_MOJO_MOJO_CREATE_DATA_PIPE_OPTIONS_H_
