// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated from the Jinja2 template
// third_party/blink/renderer/bindings/templates/dictionary_impl.h.tmpl
// by the script code_generator_v8.py.
// DO NOT MODIFY!

// clang-format off
#ifndef THIRD_PARTY_BLINK_RENDERER_MODULES_NOTIFICATIONS_NOTIFICATION_OPTIONS_H_
#define THIRD_PARTY_BLINK_RENDERER_MODULES_NOTIFICATIONS_NOTIFICATION_OPTIONS_H_

#include "third_party/blink/renderer/bindings/core/v8/idl_dictionary_base.h"
#include "third_party/blink/renderer/bindings/core/v8/script_value.h"
#include "third_party/blink/renderer/bindings/modules/v8/unsigned_long_or_unsigned_long_sequence.h"
#include "third_party/blink/renderer/modules/modules_export.h"
#include "third_party/blink/renderer/modules/notifications/notification_action.h"
#include "third_party/blink/renderer/platform/heap/handle.h"
#include "third_party/blink/renderer/platform/wtf/text/wtf_string.h"
#include "third_party/blink/renderer/platform/wtf/vector.h"

namespace blink {

class TimestampTrigger;

class MODULES_EXPORT NotificationOptions : public IDLDictionaryBase {
 public:
  static NotificationOptions* Create() { return MakeGarbageCollected<NotificationOptions>(); }

  NotificationOptions();
  virtual ~NotificationOptions();

  bool hasActions() const { return has_actions_; }
  const HeapVector<Member<NotificationAction>>& actions() const {
    DCHECK(has_actions_);
    return actions_;
  }
  void setActions(const HeapVector<Member<NotificationAction>>&);

  bool hasBadge() const { return !badge_.IsNull(); }
  const String& badge() const {
    return badge_;
  }
  inline void setBadge(const String&);

  bool hasBody() const { return !body_.IsNull(); }
  const String& body() const {
    return body_;
  }
  inline void setBody(const String&);

  bool hasData() const { return !(data_.IsEmpty() || data_.IsUndefined()); }
  ScriptValue data() const {
    return data_;
  }
  void setData(ScriptValue);

  bool hasDir() const { return !dir_.IsNull(); }
  const String& dir() const {
    return dir_;
  }
  inline void setDir(const String&);

  bool hasIcon() const { return !icon_.IsNull(); }
  const String& icon() const {
    return icon_;
  }
  inline void setIcon(const String&);

  bool hasImage() const { return !image_.IsNull(); }
  const String& image() const {
    return image_;
  }
  inline void setImage(const String&);

  bool hasLang() const { return !lang_.IsNull(); }
  const String& lang() const {
    return lang_;
  }
  inline void setLang(const String&);

  bool hasRenotify() const { return has_renotify_; }
  bool renotify() const {
    DCHECK(has_renotify_);
    return renotify_;
  }
  inline void setRenotify(bool);

  bool hasRequireInteraction() const { return has_require_interaction_; }
  bool requireInteraction() const {
    DCHECK(has_require_interaction_);
    return require_interaction_;
  }
  inline void setRequireInteraction(bool);

  bool hasShowTrigger() const { return show_trigger_; }
  TimestampTrigger* showTrigger() const {
    return show_trigger_;
  }
  inline void setShowTrigger(TimestampTrigger*);

  bool hasSilent() const { return has_silent_; }
  bool silent() const {
    DCHECK(has_silent_);
    return silent_;
  }
  inline void setSilent(bool);

  bool hasTag() const { return !tag_.IsNull(); }
  const String& tag() const {
    return tag_;
  }
  inline void setTag(const String&);

  bool hasTimestamp() const { return has_timestamp_; }
  uint64_t timestamp() const {
    DCHECK(has_timestamp_);
    return timestamp_;
  }
  inline void setTimestamp(uint64_t);

  bool hasVibrate() const { return !vibrate_.IsNull(); }
  const UnsignedLongOrUnsignedLongSequence& vibrate() const {
    return vibrate_;
  }
  void setVibrate(const UnsignedLongOrUnsignedLongSequence&);

  v8::Local<v8::Value> ToV8Impl(v8::Local<v8::Object>, v8::Isolate*) const override;
  void Trace(blink::Visitor*) override;

 private:
  bool has_actions_ = false;
  bool has_renotify_ = false;
  bool has_require_interaction_ = false;
  bool has_silent_ = false;
  bool has_timestamp_ = false;

  HeapVector<Member<NotificationAction>> actions_;
  String badge_;
  String body_;
  ScriptValue data_;
  String dir_;
  String icon_;
  String image_;
  String lang_;
  bool renotify_;
  bool require_interaction_;
  Member<TimestampTrigger> show_trigger_;
  bool silent_;
  String tag_;
  uint64_t timestamp_;
  UnsignedLongOrUnsignedLongSequence vibrate_;

  friend class V8NotificationOptions;
};

void NotificationOptions::setBadge(const String& value) {
  badge_ = value;
}

void NotificationOptions::setBody(const String& value) {
  body_ = value;
}

void NotificationOptions::setDir(const String& value) {
  dir_ = value;
}

void NotificationOptions::setIcon(const String& value) {
  icon_ = value;
}

void NotificationOptions::setImage(const String& value) {
  image_ = value;
}

void NotificationOptions::setLang(const String& value) {
  lang_ = value;
}

void NotificationOptions::setRenotify(bool value) {
  renotify_ = value;
  has_renotify_ = true;
}

void NotificationOptions::setRequireInteraction(bool value) {
  require_interaction_ = value;
  has_require_interaction_ = true;
}

void NotificationOptions::setShowTrigger(TimestampTrigger* value) {
  show_trigger_ = value;
}

void NotificationOptions::setSilent(bool value) {
  silent_ = value;
  has_silent_ = true;
}

void NotificationOptions::setTag(const String& value) {
  tag_ = value;
}

void NotificationOptions::setTimestamp(uint64_t value) {
  timestamp_ = value;
  has_timestamp_ = true;
}

}  // namespace blink

#endif  // THIRD_PARTY_BLINK_RENDERER_MODULES_NOTIFICATIONS_NOTIFICATION_OPTIONS_H_
