// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated from the Jinja2 template
// third_party/blink/renderer/bindings/templates/dictionary_impl.h.tmpl
// by the script code_generator_v8.py.
// DO NOT MODIFY!

// clang-format off
#ifndef THIRD_PARTY_BLINK_RENDERER_CORE_MESSAGING_POST_MESSAGE_OPTIONS_H_
#define THIRD_PARTY_BLINK_RENDERER_CORE_MESSAGING_POST_MESSAGE_OPTIONS_H_

#include "third_party/blink/renderer/bindings/core/v8/idl_dictionary_base.h"
#include "third_party/blink/renderer/bindings/core/v8/script_value.h"
#include "third_party/blink/renderer/core/core_export.h"
#include "third_party/blink/renderer/platform/heap/handle.h"
#include "third_party/blink/renderer/platform/wtf/vector.h"

namespace blink {

class CORE_EXPORT PostMessageOptions : public IDLDictionaryBase {
 public:
  static PostMessageOptions* Create() { return MakeGarbageCollected<PostMessageOptions>(); }

  PostMessageOptions();
  virtual ~PostMessageOptions();

  bool hasIncludeUserActivation() const { return has_include_user_activation_; }
  bool includeUserActivation() const {
    DCHECK(has_include_user_activation_);
    return include_user_activation_;
  }
  inline void setIncludeUserActivation(bool);

  bool hasTransfer() const { return has_transfer_; }
  const Vector<ScriptValue>& transfer() const {
    DCHECK(has_transfer_);
    return transfer_;
  }
  void setTransfer(const Vector<ScriptValue>&);

  v8::Local<v8::Value> ToV8Impl(v8::Local<v8::Object>, v8::Isolate*) const override;
  void Trace(blink::Visitor*) override;

 private:
  bool has_include_user_activation_ = false;
  bool has_transfer_ = false;

  bool include_user_activation_;
  Vector<ScriptValue> transfer_;

  friend class V8PostMessageOptions;
};

void PostMessageOptions::setIncludeUserActivation(bool value) {
  include_user_activation_ = value;
  has_include_user_activation_ = true;
}

}  // namespace blink

#endif  // THIRD_PARTY_BLINK_RENDERER_CORE_MESSAGING_POST_MESSAGE_OPTIONS_H_
