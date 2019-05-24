// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated from the Jinja2 template
// third_party/blink/renderer/bindings/templates/dictionary_impl.h.tmpl
// by the script code_generator_v8.py.
// DO NOT MODIFY!

// clang-format off
#ifndef THIRD_PARTY_BLINK_RENDERER_CORE_EVENTS_ERROR_EVENT_INIT_H_
#define THIRD_PARTY_BLINK_RENDERER_CORE_EVENTS_ERROR_EVENT_INIT_H_

#include "third_party/blink/renderer/bindings/core/v8/script_value.h"
#include "third_party/blink/renderer/core/core_export.h"
#include "third_party/blink/renderer/core/dom/events/event_init.h"
#include "third_party/blink/renderer/platform/heap/handle.h"
#include "third_party/blink/renderer/platform/wtf/text/wtf_string.h"

namespace blink {

class CORE_EXPORT ErrorEventInit : public EventInit {
 public:
  static ErrorEventInit* Create() { return MakeGarbageCollected<ErrorEventInit>(); }

  ErrorEventInit();
  virtual ~ErrorEventInit();

  bool hasColno() const { return has_colno_; }
  uint32_t colno() const {
    DCHECK(has_colno_);
    return colno_;
  }
  inline void setColno(uint32_t);

  bool hasError() const { return !(error_.IsEmpty() || error_.IsUndefined()); }
  ScriptValue error() const {
    return error_;
  }
  void setError(ScriptValue);

  bool hasFilename() const { return !filename_.IsNull(); }
  const String& filename() const {
    return filename_;
  }
  inline void setFilename(const String&);

  bool hasLineno() const { return has_lineno_; }
  uint32_t lineno() const {
    DCHECK(has_lineno_);
    return lineno_;
  }
  inline void setLineno(uint32_t);

  bool hasMessage() const { return !message_.IsNull(); }
  const String& message() const {
    return message_;
  }
  inline void setMessage(const String&);

  v8::Local<v8::Value> ToV8Impl(v8::Local<v8::Object>, v8::Isolate*) const override;
  void Trace(blink::Visitor*) override;

 private:
  bool has_colno_ = false;
  bool has_lineno_ = false;

  uint32_t colno_;
  ScriptValue error_;
  String filename_;
  uint32_t lineno_;
  String message_;

  friend class V8ErrorEventInit;
};

void ErrorEventInit::setColno(uint32_t value) {
  colno_ = value;
  has_colno_ = true;
}

void ErrorEventInit::setFilename(const String& value) {
  filename_ = value;
}

void ErrorEventInit::setLineno(uint32_t value) {
  lineno_ = value;
  has_lineno_ = true;
}

void ErrorEventInit::setMessage(const String& value) {
  message_ = value;
}

}  // namespace blink

#endif  // THIRD_PARTY_BLINK_RENDERER_CORE_EVENTS_ERROR_EVENT_INIT_H_
