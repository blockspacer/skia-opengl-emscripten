// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated from the Jinja2 template
// third_party/blink/renderer/bindings/templates/dictionary_impl.h.tmpl
// by the script code_generator_v8.py.
// DO NOT MODIFY!

// clang-format off
#ifndef THIRD_PARTY_BLINK_RENDERER_CORE_MOJO_MOJO_CREATE_MESSAGE_PIPE_RESULT_H_
#define THIRD_PARTY_BLINK_RENDERER_CORE_MOJO_MOJO_CREATE_MESSAGE_PIPE_RESULT_H_

#include "third_party/blink/renderer/bindings/core/v8/idl_dictionary_base.h"
#include "third_party/blink/renderer/core/core_export.h"
#include "third_party/blink/renderer/platform/heap/handle.h"

namespace blink {

class MojoHandle;

class CORE_EXPORT MojoCreateMessagePipeResult : public IDLDictionaryBase {
 public:
  static MojoCreateMessagePipeResult* Create() { return MakeGarbageCollected<MojoCreateMessagePipeResult>(); }

  MojoCreateMessagePipeResult();
  virtual ~MojoCreateMessagePipeResult();

  bool hasHandle0() const { return handle_0_; }
  MojoHandle* handle0() const {
    return handle_0_;
  }
  inline void setHandle0(MojoHandle*);

  bool hasHandle1() const { return handle_1_; }
  MojoHandle* handle1() const {
    return handle_1_;
  }
  inline void setHandle1(MojoHandle*);

  bool hasResult() const { return has_result_; }
  uint32_t result() const {
    DCHECK(has_result_);
    return result_;
  }
  inline void setResult(uint32_t);

  v8::Local<v8::Value> ToV8Impl(v8::Local<v8::Object>, v8::Isolate*) const override;
  void Trace(blink::Visitor*) override;

 private:
  bool has_result_ = false;

  Member<MojoHandle> handle_0_;
  Member<MojoHandle> handle_1_;
  uint32_t result_;

  friend class V8MojoCreateMessagePipeResult;
};

void MojoCreateMessagePipeResult::setHandle0(MojoHandle* value) {
  handle_0_ = value;
}

void MojoCreateMessagePipeResult::setHandle1(MojoHandle* value) {
  handle_1_ = value;
}

void MojoCreateMessagePipeResult::setResult(uint32_t value) {
  result_ = value;
  has_result_ = true;
}

}  // namespace blink

#endif  // THIRD_PARTY_BLINK_RENDERER_CORE_MOJO_MOJO_CREATE_MESSAGE_PIPE_RESULT_H_
