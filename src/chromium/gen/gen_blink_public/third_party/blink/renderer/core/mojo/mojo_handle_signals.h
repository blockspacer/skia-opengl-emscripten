// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated from the Jinja2 template
// third_party/blink/renderer/bindings/templates/dictionary_impl.h.tmpl
// by the script code_generator_v8.py.
// DO NOT MODIFY!

// clang-format off
#ifndef THIRD_PARTY_BLINK_RENDERER_CORE_MOJO_MOJO_HANDLE_SIGNALS_H_
#define THIRD_PARTY_BLINK_RENDERER_CORE_MOJO_MOJO_HANDLE_SIGNALS_H_

#include "third_party/blink/renderer/bindings/core/v8/idl_dictionary_base.h"
#include "third_party/blink/renderer/core/core_export.h"
#include "third_party/blink/renderer/platform/heap/handle.h"

namespace blink {

class CORE_EXPORT MojoHandleSignals : public IDLDictionaryBase {
 public:
  static MojoHandleSignals* Create() { return MakeGarbageCollected<MojoHandleSignals>(); }

  MojoHandleSignals();
  virtual ~MojoHandleSignals();

  bool hasPeerClosed() const { return has_peer_closed_; }
  bool peerClosed() const {
    DCHECK(has_peer_closed_);
    return peer_closed_;
  }
  inline void setPeerClosed(bool);

  bool hasReadable() const { return has_readable_; }
  bool readable() const {
    DCHECK(has_readable_);
    return readable_;
  }
  inline void setReadable(bool);

  bool hasWritable() const { return has_writable_; }
  bool writable() const {
    DCHECK(has_writable_);
    return writable_;
  }
  inline void setWritable(bool);

  v8::Local<v8::Value> ToV8Impl(v8::Local<v8::Object>, v8::Isolate*) const override;
  void Trace(blink::Visitor*) override;

 private:
  bool has_peer_closed_ = false;
  bool has_readable_ = false;
  bool has_writable_ = false;

  bool peer_closed_;
  bool readable_;
  bool writable_;

  friend class V8MojoHandleSignals;
};

void MojoHandleSignals::setPeerClosed(bool value) {
  peer_closed_ = value;
  has_peer_closed_ = true;
}

void MojoHandleSignals::setReadable(bool value) {
  readable_ = value;
  has_readable_ = true;
}

void MojoHandleSignals::setWritable(bool value) {
  writable_ = value;
  has_writable_ = true;
}

}  // namespace blink

#endif  // THIRD_PARTY_BLINK_RENDERER_CORE_MOJO_MOJO_HANDLE_SIGNALS_H_
