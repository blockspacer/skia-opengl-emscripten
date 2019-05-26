// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated from the Jinja2 template
// third_party/blink/renderer/bindings/templates/dictionary_impl.h.tmpl
// by the script code_generator_v8.py.
// DO NOT MODIFY!

// clang-format off
#ifndef THIRD_PARTY_BLINK_RENDERER_MODULES_WEBMIDI_MIDI_CONNECTION_EVENT_INIT_H_
#define THIRD_PARTY_BLINK_RENDERER_MODULES_WEBMIDI_MIDI_CONNECTION_EVENT_INIT_H_

#include "third_party/blink/renderer/core/dom/events/event_init.h"
#include "third_party/blink/renderer/modules/modules_export.h"
#include "third_party/blink/renderer/platform/heap/handle.h"

namespace blink {

class MIDIPort;

class MODULES_EXPORT MIDIConnectionEventInit : public EventInit {
 public:
  static MIDIConnectionEventInit* Create() { return MakeGarbageCollected<MIDIConnectionEventInit>(); }

  MIDIConnectionEventInit();
  virtual ~MIDIConnectionEventInit();

  bool hasPort() const { return has_port_; }
  MIDIPort* port() const {
    return port_;
  }
  inline void setPort(MIDIPort*);
  inline void setPortToNull();

  v8::Local<v8::Value> ToV8Impl(v8::Local<v8::Object>, v8::Isolate*) const override;
  void Trace(blink::Visitor*) override;

 private:
  bool has_port_ = false;

  Member<MIDIPort> port_;

  friend class V8MIDIConnectionEventInit;
};

void MIDIConnectionEventInit::setPort(MIDIPort* value) {
  port_ = value;
  has_port_ = true;
}

void MIDIConnectionEventInit::setPortToNull() {
  port_ = Member<MIDIPort>();
  has_port_ = true;
}

}  // namespace blink

#endif  // THIRD_PARTY_BLINK_RENDERER_MODULES_WEBMIDI_MIDI_CONNECTION_EVENT_INIT_H_
