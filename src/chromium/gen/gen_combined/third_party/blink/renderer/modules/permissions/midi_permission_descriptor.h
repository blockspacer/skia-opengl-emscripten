// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated from the Jinja2 template
// third_party/blink/renderer/bindings/templates/dictionary_impl.h.tmpl
// by the script code_generator_v8.py.
// DO NOT MODIFY!

// clang-format off
#ifndef THIRD_PARTY_BLINK_RENDERER_MODULES_PERMISSIONS_MIDI_PERMISSION_DESCRIPTOR_H_
#define THIRD_PARTY_BLINK_RENDERER_MODULES_PERMISSIONS_MIDI_PERMISSION_DESCRIPTOR_H_

#include "third_party/blink/renderer/modules/modules_export.h"
#include "third_party/blink/renderer/modules/permissions/permission_descriptor.h"
#include "third_party/blink/renderer/platform/heap/handle.h"

namespace blink {

class MODULES_EXPORT MidiPermissionDescriptor : public PermissionDescriptor {
 public:
  static MidiPermissionDescriptor* Create() { return MakeGarbageCollected<MidiPermissionDescriptor>(); }

  MidiPermissionDescriptor();
  virtual ~MidiPermissionDescriptor();

  bool hasSysex() const { return has_sysex_; }
  bool sysex() const {
    DCHECK(has_sysex_);
    return sysex_;
  }
  inline void setSysex(bool);

  v8::Local<v8::Value> ToV8Impl(v8::Local<v8::Object>, v8::Isolate*) const override;
  void Trace(blink::Visitor*) override;

 private:
  bool has_sysex_ = false;

  bool sysex_;

  friend class V8MidiPermissionDescriptor;
};

void MidiPermissionDescriptor::setSysex(bool value) {
  sysex_ = value;
  has_sysex_ = true;
}

}  // namespace blink

#endif  // THIRD_PARTY_BLINK_RENDERER_MODULES_PERMISSIONS_MIDI_PERMISSION_DESCRIPTOR_H_