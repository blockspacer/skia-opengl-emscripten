// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated from the Jinja2 template
// third_party/blink/renderer/bindings/templates/dictionary_impl.h.tmpl
// by the script code_generator_v8.py.
// DO NOT MODIFY!

// clang-format off
#ifndef THIRD_PARTY_BLINK_RENDERER_MODULES_NOTIFICATIONS_NOTIFICATION_EVENT_INIT_H_
#define THIRD_PARTY_BLINK_RENDERER_MODULES_NOTIFICATIONS_NOTIFICATION_EVENT_INIT_H_

#include "third_party/blink/renderer/modules/modules_export.h"
#include "third_party/blink/renderer/modules/service_worker/extendable_event_init.h"
#include "third_party/blink/renderer/platform/heap/handle.h"
#include "third_party/blink/renderer/platform/wtf/text/wtf_string.h"

namespace blink {

class Notification;

class MODULES_EXPORT NotificationEventInit : public ExtendableEventInit {
 public:
  static NotificationEventInit* Create() { return MakeGarbageCollected<NotificationEventInit>(); }

  NotificationEventInit();
  virtual ~NotificationEventInit();

  bool hasAction() const { return !action_.IsNull(); }
  const String& action() const {
    return action_;
  }
  inline void setAction(const String&);

  bool hasNotification() const { return notification_; }
  Notification* notification() const {
    return notification_;
  }
  inline void setNotification(Notification*);

  bool hasReply() const { return !reply_.IsNull(); }
  const String& reply() const {
    return reply_;
  }
  inline void setReply(const String&);
  inline void setReplyToNull();

  v8::Local<v8::Value> ToV8Impl(v8::Local<v8::Object>, v8::Isolate*) const override;
  void Trace(blink::Visitor*) override;

 private:

  String action_;
  Member<Notification> notification_;
  String reply_;

  friend class V8NotificationEventInit;
};

void NotificationEventInit::setAction(const String& value) {
  action_ = value;
}

void NotificationEventInit::setNotification(Notification* value) {
  notification_ = value;
}

void NotificationEventInit::setReply(const String& value) {
  reply_ = value;
}

void NotificationEventInit::setReplyToNull() {
  reply_ = String();
}

}  // namespace blink

#endif  // THIRD_PARTY_BLINK_RENDERER_MODULES_NOTIFICATIONS_NOTIFICATION_EVENT_INIT_H_
