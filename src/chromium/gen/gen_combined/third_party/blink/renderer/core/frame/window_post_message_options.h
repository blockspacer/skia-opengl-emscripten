// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated from the Jinja2 template
// third_party/blink/renderer/bindings/templates/dictionary_impl.h.tmpl
// by the script code_generator_v8.py.
// DO NOT MODIFY!

// clang-format off
#ifndef THIRD_PARTY_BLINK_RENDERER_CORE_FRAME_WINDOW_POST_MESSAGE_OPTIONS_H_
#define THIRD_PARTY_BLINK_RENDERER_CORE_FRAME_WINDOW_POST_MESSAGE_OPTIONS_H_

#include "third_party/blink/renderer/core/core_export.h"
#include "third_party/blink/renderer/core/messaging/post_message_options.h"
#include "third_party/blink/renderer/platform/heap/handle.h"
#include "third_party/blink/renderer/platform/wtf/text/wtf_string.h"

namespace blink {

class CORE_EXPORT WindowPostMessageOptions : public PostMessageOptions {
 public:
  static WindowPostMessageOptions* Create() { return MakeGarbageCollected<WindowPostMessageOptions>(); }

  WindowPostMessageOptions();
  virtual ~WindowPostMessageOptions();

  bool hasTargetOrigin() const { return !target_origin_.IsNull(); }
  const String& targetOrigin() const {
    return target_origin_;
  }
  inline void setTargetOrigin(const String&);

  bool hasTransferUserActivation() const { return has_transfer_user_activation_; }
  bool transferUserActivation() const {
    DCHECK(has_transfer_user_activation_);
    return transfer_user_activation_;
  }
  inline void setTransferUserActivation(bool);

  v8::Local<v8::Value> ToV8Impl(v8::Local<v8::Object>, v8::Isolate*) const override;
  void Trace(blink::Visitor*) override;

 private:
  bool has_transfer_user_activation_ = false;

  String target_origin_;
  bool transfer_user_activation_;

  friend class V8WindowPostMessageOptions;
};

void WindowPostMessageOptions::setTargetOrigin(const String& value) {
  target_origin_ = value;
}

void WindowPostMessageOptions::setTransferUserActivation(bool value) {
  transfer_user_activation_ = value;
  has_transfer_user_activation_ = true;
}

}  // namespace blink

#endif  // THIRD_PARTY_BLINK_RENDERER_CORE_FRAME_WINDOW_POST_MESSAGE_OPTIONS_H_
