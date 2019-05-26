// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated from the Jinja2 template
// third_party/blink/renderer/bindings/templates/dictionary_impl.h.tmpl
// by the script code_generator_v8.py.
// DO NOT MODIFY!

// clang-format off
#ifndef THIRD_PARTY_BLINK_RENDERER_MODULES_NOTIFICATIONS_NOTIFICATION_ACTION_H_
#define THIRD_PARTY_BLINK_RENDERER_MODULES_NOTIFICATIONS_NOTIFICATION_ACTION_H_

#include "third_party/blink/renderer/bindings/core/v8/idl_dictionary_base.h"
#include "third_party/blink/renderer/modules/modules_export.h"
#include "third_party/blink/renderer/platform/heap/handle.h"
#include "third_party/blink/renderer/platform/wtf/text/wtf_string.h"

namespace blink {

class MODULES_EXPORT NotificationAction : public IDLDictionaryBase {
 public:
  static NotificationAction* Create() { return MakeGarbageCollected<NotificationAction>(); }

  NotificationAction();
  virtual ~NotificationAction();

  bool hasAction() const { return !action_.IsNull(); }
  const String& action() const {
    return action_;
  }
  inline void setAction(const String&);

  bool hasIcon() const { return !icon_.IsNull(); }
  const String& icon() const {
    return icon_;
  }
  inline void setIcon(const String&);

  bool hasPlaceholder() const { return !placeholder_.IsNull(); }
  const String& placeholder() const {
    return placeholder_;
  }
  inline void setPlaceholder(const String&);
  inline void setPlaceholderToNull();

  bool hasTitle() const { return !title_.IsNull(); }
  const String& title() const {
    return title_;
  }
  inline void setTitle(const String&);

  bool hasType() const { return !type_.IsNull(); }
  const String& type() const {
    return type_;
  }
  inline void setType(const String&);

  v8::Local<v8::Value> ToV8Impl(v8::Local<v8::Object>, v8::Isolate*) const override;
  void Trace(blink::Visitor*) override;

 private:

  String action_;
  String icon_;
  String placeholder_;
  String title_;
  String type_;

  friend class V8NotificationAction;
};

void NotificationAction::setAction(const String& value) {
  action_ = value;
}

void NotificationAction::setIcon(const String& value) {
  icon_ = value;
}

void NotificationAction::setPlaceholder(const String& value) {
  placeholder_ = value;
}

void NotificationAction::setPlaceholderToNull() {
  placeholder_ = String();
}

void NotificationAction::setTitle(const String& value) {
  title_ = value;
}

void NotificationAction::setType(const String& value) {
  type_ = value;
}

}  // namespace blink

#endif  // THIRD_PARTY_BLINK_RENDERER_MODULES_NOTIFICATIONS_NOTIFICATION_ACTION_H_
