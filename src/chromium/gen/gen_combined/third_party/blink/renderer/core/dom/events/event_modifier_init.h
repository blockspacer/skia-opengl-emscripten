// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated from the Jinja2 template
// third_party/blink/renderer/bindings/templates/dictionary_impl.h.tmpl
// by the script code_generator_v8.py.
// DO NOT MODIFY!

// clang-format off
#ifndef THIRD_PARTY_BLINK_RENDERER_CORE_DOM_EVENTS_EVENT_MODIFIER_INIT_H_
#define THIRD_PARTY_BLINK_RENDERER_CORE_DOM_EVENTS_EVENT_MODIFIER_INIT_H_

#include "third_party/blink/renderer/core/core_export.h"
#include "third_party/blink/renderer/core/events/ui_event_init.h"
#include "third_party/blink/renderer/platform/heap/handle.h"

namespace blink {

class CORE_EXPORT EventModifierInit : public UIEventInit {
 public:
  static EventModifierInit* Create() { return MakeGarbageCollected<EventModifierInit>(); }

  EventModifierInit();
  virtual ~EventModifierInit();

  bool hasAltKey() const { return has_alt_key_; }
  bool altKey() const {
    DCHECK(has_alt_key_);
    return alt_key_;
  }
  inline void setAltKey(bool);

  bool hasCtrlKey() const { return has_ctrl_key_; }
  bool ctrlKey() const {
    DCHECK(has_ctrl_key_);
    return ctrl_key_;
  }
  inline void setCtrlKey(bool);

  bool hasMetaKey() const { return has_meta_key_; }
  bool metaKey() const {
    DCHECK(has_meta_key_);
    return meta_key_;
  }
  inline void setMetaKey(bool);

  bool hasModifierAltGraph() const { return has_modifier_alt_graph_; }
  bool modifierAltGraph() const {
    DCHECK(has_modifier_alt_graph_);
    return modifier_alt_graph_;
  }
  inline void setModifierAltGraph(bool);

  bool hasModifierCapsLock() const { return has_modifier_caps_lock_; }
  bool modifierCapsLock() const {
    DCHECK(has_modifier_caps_lock_);
    return modifier_caps_lock_;
  }
  inline void setModifierCapsLock(bool);

  bool hasModifierFn() const { return has_modifier_fn_; }
  bool modifierFn() const {
    DCHECK(has_modifier_fn_);
    return modifier_fn_;
  }
  inline void setModifierFn(bool);

  bool hasModifierNumLock() const { return has_modifier_num_lock_; }
  bool modifierNumLock() const {
    DCHECK(has_modifier_num_lock_);
    return modifier_num_lock_;
  }
  inline void setModifierNumLock(bool);

  bool hasModifierScrollLock() const { return has_modifier_scroll_lock_; }
  bool modifierScrollLock() const {
    DCHECK(has_modifier_scroll_lock_);
    return modifier_scroll_lock_;
  }
  inline void setModifierScrollLock(bool);

  bool hasModifierSymbol() const { return has_modifier_symbol_; }
  bool modifierSymbol() const {
    DCHECK(has_modifier_symbol_);
    return modifier_symbol_;
  }
  inline void setModifierSymbol(bool);

  bool hasShiftKey() const { return has_shift_key_; }
  bool shiftKey() const {
    DCHECK(has_shift_key_);
    return shift_key_;
  }
  inline void setShiftKey(bool);

  v8::Local<v8::Value> ToV8Impl(v8::Local<v8::Object>, v8::Isolate*) const override;
  void Trace(blink::Visitor*) override;

 private:
  bool has_alt_key_ = false;
  bool has_ctrl_key_ = false;
  bool has_meta_key_ = false;
  bool has_modifier_alt_graph_ = false;
  bool has_modifier_caps_lock_ = false;
  bool has_modifier_fn_ = false;
  bool has_modifier_num_lock_ = false;
  bool has_modifier_scroll_lock_ = false;
  bool has_modifier_symbol_ = false;
  bool has_shift_key_ = false;

  bool alt_key_;
  bool ctrl_key_;
  bool meta_key_;
  bool modifier_alt_graph_;
  bool modifier_caps_lock_;
  bool modifier_fn_;
  bool modifier_num_lock_;
  bool modifier_scroll_lock_;
  bool modifier_symbol_;
  bool shift_key_;

  friend class V8EventModifierInit;
};

void EventModifierInit::setAltKey(bool value) {
  alt_key_ = value;
  has_alt_key_ = true;
}

void EventModifierInit::setCtrlKey(bool value) {
  ctrl_key_ = value;
  has_ctrl_key_ = true;
}

void EventModifierInit::setMetaKey(bool value) {
  meta_key_ = value;
  has_meta_key_ = true;
}

void EventModifierInit::setModifierAltGraph(bool value) {
  modifier_alt_graph_ = value;
  has_modifier_alt_graph_ = true;
}

void EventModifierInit::setModifierCapsLock(bool value) {
  modifier_caps_lock_ = value;
  has_modifier_caps_lock_ = true;
}

void EventModifierInit::setModifierFn(bool value) {
  modifier_fn_ = value;
  has_modifier_fn_ = true;
}

void EventModifierInit::setModifierNumLock(bool value) {
  modifier_num_lock_ = value;
  has_modifier_num_lock_ = true;
}

void EventModifierInit::setModifierScrollLock(bool value) {
  modifier_scroll_lock_ = value;
  has_modifier_scroll_lock_ = true;
}

void EventModifierInit::setModifierSymbol(bool value) {
  modifier_symbol_ = value;
  has_modifier_symbol_ = true;
}

void EventModifierInit::setShiftKey(bool value) {
  shift_key_ = value;
  has_shift_key_ = true;
}

}  // namespace blink

#endif  // THIRD_PARTY_BLINK_RENDERER_CORE_DOM_EVENTS_EVENT_MODIFIER_INIT_H_
