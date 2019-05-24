// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated from the Jinja2 template
// third_party/blink/renderer/bindings/templates/dictionary_impl.h.tmpl
// by the script code_generator_v8.py.
// DO NOT MODIFY!

// clang-format off
#ifndef THIRD_PARTY_BLINK_RENDERER_CORE_EVENTS_KEYBOARD_EVENT_INIT_H_
#define THIRD_PARTY_BLINK_RENDERER_CORE_EVENTS_KEYBOARD_EVENT_INIT_H_

#include "third_party/blink/renderer/core/core_export.h"
#include "third_party/blink/renderer/core/dom/events/event_modifier_init.h"
#include "third_party/blink/renderer/platform/heap/handle.h"
#include "third_party/blink/renderer/platform/wtf/text/wtf_string.h"

namespace blink {

class CORE_EXPORT KeyboardEventInit : public EventModifierInit {
 public:
  static KeyboardEventInit* Create() { return MakeGarbageCollected<KeyboardEventInit>(); }

  KeyboardEventInit();
  virtual ~KeyboardEventInit();

  bool hasCharCode() const { return has_char_code_; }
  uint32_t charCode() const {
    DCHECK(has_char_code_);
    return char_code_;
  }
  inline void setCharCode(uint32_t);

  bool hasCode() const { return !code_.IsNull(); }
  const String& code() const {
    return code_;
  }
  inline void setCode(const String&);

  bool hasIsComposing() const { return has_is_composing_; }
  bool isComposing() const {
    DCHECK(has_is_composing_);
    return is_composing_;
  }
  inline void setIsComposing(bool);

  bool hasKey() const { return !key_.IsNull(); }
  const String& key() const {
    return key_;
  }
  inline void setKey(const String&);

  bool hasKeyCode() const { return has_key_code_; }
  uint32_t keyCode() const {
    DCHECK(has_key_code_);
    return key_code_;
  }
  inline void setKeyCode(uint32_t);

  bool hasLocation() const { return has_location_; }
  uint32_t location() const {
    DCHECK(has_location_);
    return location_;
  }
  inline void setLocation(uint32_t);

  bool hasRepeat() const { return has_repeat_; }
  bool repeat() const {
    DCHECK(has_repeat_);
    return repeat_;
  }
  inline void setRepeat(bool);

  v8::Local<v8::Value> ToV8Impl(v8::Local<v8::Object>, v8::Isolate*) const override;
  void Trace(blink::Visitor*) override;

 private:
  bool has_char_code_ = false;
  bool has_is_composing_ = false;
  bool has_key_code_ = false;
  bool has_location_ = false;
  bool has_repeat_ = false;

  uint32_t char_code_;
  String code_;
  bool is_composing_;
  String key_;
  uint32_t key_code_;
  uint32_t location_;
  bool repeat_;

  friend class V8KeyboardEventInit;
};

void KeyboardEventInit::setCharCode(uint32_t value) {
  char_code_ = value;
  has_char_code_ = true;
}

void KeyboardEventInit::setCode(const String& value) {
  code_ = value;
}

void KeyboardEventInit::setIsComposing(bool value) {
  is_composing_ = value;
  has_is_composing_ = true;
}

void KeyboardEventInit::setKey(const String& value) {
  key_ = value;
}

void KeyboardEventInit::setKeyCode(uint32_t value) {
  key_code_ = value;
  has_key_code_ = true;
}

void KeyboardEventInit::setLocation(uint32_t value) {
  location_ = value;
  has_location_ = true;
}

void KeyboardEventInit::setRepeat(bool value) {
  repeat_ = value;
  has_repeat_ = true;
}

}  // namespace blink

#endif  // THIRD_PARTY_BLINK_RENDERER_CORE_EVENTS_KEYBOARD_EVENT_INIT_H_
