// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated from the Jinja2 template
// third_party/blink/renderer/bindings/templates/dictionary_impl.h.tmpl
// by the script code_generator_v8.py.
// DO NOT MODIFY!

// clang-format off
#ifndef THIRD_PARTY_BLINK_RENDERER_MODULES_NOTIFICATIONS_GET_NOTIFICATION_OPTIONS_H_
#define THIRD_PARTY_BLINK_RENDERER_MODULES_NOTIFICATIONS_GET_NOTIFICATION_OPTIONS_H_

#include "third_party/blink/renderer/bindings/core/v8/idl_dictionary_base.h"
#include "third_party/blink/renderer/modules/modules_export.h"
#include "third_party/blink/renderer/platform/heap/handle.h"
#include "third_party/blink/renderer/platform/wtf/text/wtf_string.h"

namespace blink {

class MODULES_EXPORT GetNotificationOptions : public IDLDictionaryBase {
 public:
  static GetNotificationOptions* Create() { return MakeGarbageCollected<GetNotificationOptions>(); }

  GetNotificationOptions();
  virtual ~GetNotificationOptions();

  bool hasIncludeTriggered() const { return has_include_triggered_; }
  bool includeTriggered() const {
    DCHECK(has_include_triggered_);
    return include_triggered_;
  }
  inline void setIncludeTriggered(bool);

  bool hasTag() const { return !tag_.IsNull(); }
  const String& tag() const {
    return tag_;
  }
  inline void setTag(const String&);

  v8::Local<v8::Value> ToV8Impl(v8::Local<v8::Object>, v8::Isolate*) const override;
  void Trace(blink::Visitor*) override;

 private:
  bool has_include_triggered_ = false;

  bool include_triggered_;
  String tag_;

  friend class V8GetNotificationOptions;
};

void GetNotificationOptions::setIncludeTriggered(bool value) {
  include_triggered_ = value;
  has_include_triggered_ = true;
}

void GetNotificationOptions::setTag(const String& value) {
  tag_ = value;
}

}  // namespace blink

#endif  // THIRD_PARTY_BLINK_RENDERER_MODULES_NOTIFICATIONS_GET_NOTIFICATION_OPTIONS_H_
