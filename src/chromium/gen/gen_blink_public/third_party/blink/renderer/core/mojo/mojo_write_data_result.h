// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated from the Jinja2 template
// third_party/blink/renderer/bindings/templates/dictionary_impl.h.tmpl
// by the script code_generator_v8.py.
// DO NOT MODIFY!

// clang-format off
#ifndef THIRD_PARTY_BLINK_RENDERER_CORE_MOJO_MOJO_WRITE_DATA_RESULT_H_
#define THIRD_PARTY_BLINK_RENDERER_CORE_MOJO_MOJO_WRITE_DATA_RESULT_H_

#include "third_party/blink/renderer/bindings/core/v8/idl_dictionary_base.h"
#include "third_party/blink/renderer/core/core_export.h"
#include "third_party/blink/renderer/platform/heap/handle.h"

namespace blink {

class CORE_EXPORT MojoWriteDataResult : public IDLDictionaryBase {
 public:
  static MojoWriteDataResult* Create() { return MakeGarbageCollected<MojoWriteDataResult>(); }

  MojoWriteDataResult();
  virtual ~MojoWriteDataResult();

  bool hasNumBytes() const { return has_num_bytes_; }
  uint32_t numBytes() const {
    DCHECK(has_num_bytes_);
    return num_bytes_;
  }
  inline void setNumBytes(uint32_t);

  bool hasResult() const { return has_result_; }
  uint32_t result() const {
    DCHECK(has_result_);
    return result_;
  }
  inline void setResult(uint32_t);

  v8::Local<v8::Value> ToV8Impl(v8::Local<v8::Object>, v8::Isolate*) const override;
  void Trace(blink::Visitor*) override;

 private:
  bool has_num_bytes_ = false;
  bool has_result_ = false;

  uint32_t num_bytes_;
  uint32_t result_;

  friend class V8MojoWriteDataResult;
};

void MojoWriteDataResult::setNumBytes(uint32_t value) {
  num_bytes_ = value;
  has_num_bytes_ = true;
}

void MojoWriteDataResult::setResult(uint32_t value) {
  result_ = value;
  has_result_ = true;
}

}  // namespace blink

#endif  // THIRD_PARTY_BLINK_RENDERER_CORE_MOJO_MOJO_WRITE_DATA_RESULT_H_
