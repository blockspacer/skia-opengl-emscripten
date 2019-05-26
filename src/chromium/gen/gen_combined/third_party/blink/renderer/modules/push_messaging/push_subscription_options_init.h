// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated from the Jinja2 template
// third_party/blink/renderer/bindings/templates/dictionary_impl.h.tmpl
// by the script code_generator_v8.py.
// DO NOT MODIFY!

// clang-format off
#ifndef THIRD_PARTY_BLINK_RENDERER_MODULES_PUSH_MESSAGING_PUSH_SUBSCRIPTION_OPTIONS_INIT_H_
#define THIRD_PARTY_BLINK_RENDERER_MODULES_PUSH_MESSAGING_PUSH_SUBSCRIPTION_OPTIONS_INIT_H_

#include "third_party/blink/renderer/bindings/core/v8/array_buffer_or_array_buffer_view.h"
#include "third_party/blink/renderer/bindings/core/v8/idl_dictionary_base.h"
#include "third_party/blink/renderer/core/typed_arrays/array_buffer_view_helpers.h"
#include "third_party/blink/renderer/core/typed_arrays/dom_array_buffer.h"
#include "third_party/blink/renderer/core/typed_arrays/dom_typed_array.h"
#include "third_party/blink/renderer/modules/modules_export.h"
#include "third_party/blink/renderer/platform/heap/handle.h"

namespace blink {

class MODULES_EXPORT PushSubscriptionOptionsInit : public IDLDictionaryBase {
 public:
  static PushSubscriptionOptionsInit* Create() { return MakeGarbageCollected<PushSubscriptionOptionsInit>(); }

  PushSubscriptionOptionsInit();
  virtual ~PushSubscriptionOptionsInit();

  bool hasApplicationServerKey() const { return !application_server_key_.IsNull(); }
  const ArrayBufferOrArrayBufferView& applicationServerKey() const {
    return application_server_key_;
  }
  void setApplicationServerKey(const ArrayBufferOrArrayBufferView&);
  void setApplicationServerKeyToNull();

  bool hasUserVisibleOnly() const { return has_user_visible_only_; }
  bool userVisibleOnly() const {
    DCHECK(has_user_visible_only_);
    return user_visible_only_;
  }
  inline void setUserVisibleOnly(bool);

  v8::Local<v8::Value> ToV8Impl(v8::Local<v8::Object>, v8::Isolate*) const override;
  void Trace(blink::Visitor*) override;

 private:
  bool has_user_visible_only_ = false;

  ArrayBufferOrArrayBufferView application_server_key_;
  bool user_visible_only_;

  friend class V8PushSubscriptionOptionsInit;
};

void PushSubscriptionOptionsInit::setUserVisibleOnly(bool value) {
  user_visible_only_ = value;
  has_user_visible_only_ = true;
}

}  // namespace blink

#endif  // THIRD_PARTY_BLINK_RENDERER_MODULES_PUSH_MESSAGING_PUSH_SUBSCRIPTION_OPTIONS_INIT_H_
