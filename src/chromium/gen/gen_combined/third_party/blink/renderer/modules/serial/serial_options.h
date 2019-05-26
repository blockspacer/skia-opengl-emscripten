// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated from the Jinja2 template
// third_party/blink/renderer/bindings/templates/dictionary_impl.h.tmpl
// by the script code_generator_v8.py.
// DO NOT MODIFY!

// clang-format off
#ifndef THIRD_PARTY_BLINK_RENDERER_MODULES_SERIAL_SERIAL_OPTIONS_H_
#define THIRD_PARTY_BLINK_RENDERER_MODULES_SERIAL_SERIAL_OPTIONS_H_

#include "third_party/blink/renderer/bindings/core/v8/idl_dictionary_base.h"
#include "third_party/blink/renderer/modules/modules_export.h"
#include "third_party/blink/renderer/platform/heap/handle.h"
#include "third_party/blink/renderer/platform/wtf/text/wtf_string.h"

namespace blink {

class MODULES_EXPORT SerialOptions : public IDLDictionaryBase {
 public:
  static SerialOptions* Create() { return MakeGarbageCollected<SerialOptions>(); }

  SerialOptions();
  virtual ~SerialOptions();

  bool hasBaudrate() const { return has_baudrate_; }
  int32_t baudrate() const {
    DCHECK(has_baudrate_);
    return baudrate_;
  }
  inline void setBaudrate(int32_t);

  bool hasBuffersize() const { return has_buffersize_; }
  int32_t buffersize() const {
    DCHECK(has_buffersize_);
    return buffersize_;
  }
  inline void setBuffersize(int32_t);

  bool hasDatabits() const { return has_databits_; }
  uint8_t databits() const {
    DCHECK(has_databits_);
    return databits_;
  }
  inline void setDatabits(uint8_t);

  bool hasParity() const { return !parity_.IsNull(); }
  const String& parity() const {
    return parity_;
  }
  inline void setParity(const String&);

  bool hasRtscts() const { return has_rtscts_; }
  bool rtscts() const {
    DCHECK(has_rtscts_);
    return rtscts_;
  }
  inline void setRtscts(bool);

  bool hasStopbits() const { return has_stopbits_; }
  uint8_t stopbits() const {
    DCHECK(has_stopbits_);
    return stopbits_;
  }
  inline void setStopbits(uint8_t);

  v8::Local<v8::Value> ToV8Impl(v8::Local<v8::Object>, v8::Isolate*) const override;
  void Trace(blink::Visitor*) override;

 private:
  bool has_baudrate_ = false;
  bool has_buffersize_ = false;
  bool has_databits_ = false;
  bool has_rtscts_ = false;
  bool has_stopbits_ = false;

  int32_t baudrate_;
  int32_t buffersize_;
  uint8_t databits_;
  String parity_;
  bool rtscts_;
  uint8_t stopbits_;

  friend class V8SerialOptions;
};

void SerialOptions::setBaudrate(int32_t value) {
  baudrate_ = value;
  has_baudrate_ = true;
}

void SerialOptions::setBuffersize(int32_t value) {
  buffersize_ = value;
  has_buffersize_ = true;
}

void SerialOptions::setDatabits(uint8_t value) {
  databits_ = value;
  has_databits_ = true;
}

void SerialOptions::setParity(const String& value) {
  parity_ = value;
}

void SerialOptions::setRtscts(bool value) {
  rtscts_ = value;
  has_rtscts_ = true;
}

void SerialOptions::setStopbits(uint8_t value) {
  stopbits_ = value;
  has_stopbits_ = true;
}

}  // namespace blink

#endif  // THIRD_PARTY_BLINK_RENDERER_MODULES_SERIAL_SERIAL_OPTIONS_H_
