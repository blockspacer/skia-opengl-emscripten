// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated from the Jinja2 template
// third_party/blink/renderer/bindings/templates/dictionary_impl.h.tmpl
// by the script code_generator_v8.py.
// DO NOT MODIFY!

// clang-format off
#ifndef THIRD_PARTY_BLINK_RENDERER_CORE_EVENTS_PROGRESS_EVENT_INIT_H_
#define THIRD_PARTY_BLINK_RENDERER_CORE_EVENTS_PROGRESS_EVENT_INIT_H_

#include "third_party/blink/renderer/core/core_export.h"
#include "third_party/blink/renderer/core/dom/events/event_init.h"
#include "third_party/blink/renderer/platform/heap/handle.h"

namespace blink {

class CORE_EXPORT ProgressEventInit : public EventInit {
 public:
  static ProgressEventInit* Create() { return MakeGarbageCollected<ProgressEventInit>(); }

  ProgressEventInit();
  virtual ~ProgressEventInit();

  bool hasLengthComputable() const { return has_length_computable_; }
  bool lengthComputable() const {
    DCHECK(has_length_computable_);
    return length_computable_;
  }
  inline void setLengthComputable(bool);

  bool hasLoaded() const { return has_loaded_; }
  uint64_t loaded() const {
    DCHECK(has_loaded_);
    return loaded_;
  }
  inline void setLoaded(uint64_t);

  bool hasTotal() const { return has_total_; }
  uint64_t total() const {
    DCHECK(has_total_);
    return total_;
  }
  inline void setTotal(uint64_t);

  v8::Local<v8::Value> ToV8Impl(v8::Local<v8::Object>, v8::Isolate*) const override;
  void Trace(blink::Visitor*) override;

 private:
  bool has_length_computable_ = false;
  bool has_loaded_ = false;
  bool has_total_ = false;

  bool length_computable_;
  uint64_t loaded_;
  uint64_t total_;

  friend class V8ProgressEventInit;
};

void ProgressEventInit::setLengthComputable(bool value) {
  length_computable_ = value;
  has_length_computable_ = true;
}

void ProgressEventInit::setLoaded(uint64_t value) {
  loaded_ = value;
  has_loaded_ = true;
}

void ProgressEventInit::setTotal(uint64_t value) {
  total_ = value;
  has_total_ = true;
}

}  // namespace blink

#endif  // THIRD_PARTY_BLINK_RENDERER_CORE_EVENTS_PROGRESS_EVENT_INIT_H_
