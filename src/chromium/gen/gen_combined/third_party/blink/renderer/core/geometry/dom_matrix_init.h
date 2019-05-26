// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated from the Jinja2 template
// third_party/blink/renderer/bindings/templates/dictionary_impl.h.tmpl
// by the script code_generator_v8.py.
// DO NOT MODIFY!

// clang-format off
#ifndef THIRD_PARTY_BLINK_RENDERER_CORE_GEOMETRY_DOM_MATRIX_INIT_H_
#define THIRD_PARTY_BLINK_RENDERER_CORE_GEOMETRY_DOM_MATRIX_INIT_H_

#include "third_party/blink/renderer/core/core_export.h"
#include "third_party/blink/renderer/core/geometry/dom_matrix_2d_init.h"
#include "third_party/blink/renderer/platform/heap/handle.h"

namespace blink {

class CORE_EXPORT DOMMatrixInit : public DOMMatrix2DInit {
 public:
  static DOMMatrixInit* Create() { return MakeGarbageCollected<DOMMatrixInit>(); }

  DOMMatrixInit();
  virtual ~DOMMatrixInit();

  bool hasIs2D() const { return has_is_2d_; }
  bool is2D() const {
    DCHECK(has_is_2d_);
    return is_2d_;
  }
  inline void setIs2D(bool);

  bool hasM13() const { return has_m_13_; }
  double m13() const {
    DCHECK(has_m_13_);
    return m_13_;
  }
  inline void setM13(double);

  bool hasM14() const { return has_m_14_; }
  double m14() const {
    DCHECK(has_m_14_);
    return m_14_;
  }
  inline void setM14(double);

  bool hasM23() const { return has_m_23_; }
  double m23() const {
    DCHECK(has_m_23_);
    return m_23_;
  }
  inline void setM23(double);

  bool hasM24() const { return has_m_24_; }
  double m24() const {
    DCHECK(has_m_24_);
    return m_24_;
  }
  inline void setM24(double);

  bool hasM31() const { return has_m_31_; }
  double m31() const {
    DCHECK(has_m_31_);
    return m_31_;
  }
  inline void setM31(double);

  bool hasM32() const { return has_m_32_; }
  double m32() const {
    DCHECK(has_m_32_);
    return m_32_;
  }
  inline void setM32(double);

  bool hasM33() const { return has_m_33_; }
  double m33() const {
    DCHECK(has_m_33_);
    return m_33_;
  }
  inline void setM33(double);

  bool hasM34() const { return has_m_34_; }
  double m34() const {
    DCHECK(has_m_34_);
    return m_34_;
  }
  inline void setM34(double);

  bool hasM43() const { return has_m_43_; }
  double m43() const {
    DCHECK(has_m_43_);
    return m_43_;
  }
  inline void setM43(double);

  bool hasM44() const { return has_m_44_; }
  double m44() const {
    DCHECK(has_m_44_);
    return m_44_;
  }
  inline void setM44(double);

  v8::Local<v8::Value> ToV8Impl(v8::Local<v8::Object>, v8::Isolate*) const override;
  void Trace(blink::Visitor*) override;

 private:
  bool has_is_2d_ = false;
  bool has_m_13_ = false;
  bool has_m_14_ = false;
  bool has_m_23_ = false;
  bool has_m_24_ = false;
  bool has_m_31_ = false;
  bool has_m_32_ = false;
  bool has_m_33_ = false;
  bool has_m_34_ = false;
  bool has_m_43_ = false;
  bool has_m_44_ = false;

  bool is_2d_;
  double m_13_;
  double m_14_;
  double m_23_;
  double m_24_;
  double m_31_;
  double m_32_;
  double m_33_;
  double m_34_;
  double m_43_;
  double m_44_;

  friend class V8DOMMatrixInit;
};

void DOMMatrixInit::setIs2D(bool value) {
  is_2d_ = value;
  has_is_2d_ = true;
}

void DOMMatrixInit::setM13(double value) {
  m_13_ = value;
  has_m_13_ = true;
}

void DOMMatrixInit::setM14(double value) {
  m_14_ = value;
  has_m_14_ = true;
}

void DOMMatrixInit::setM23(double value) {
  m_23_ = value;
  has_m_23_ = true;
}

void DOMMatrixInit::setM24(double value) {
  m_24_ = value;
  has_m_24_ = true;
}

void DOMMatrixInit::setM31(double value) {
  m_31_ = value;
  has_m_31_ = true;
}

void DOMMatrixInit::setM32(double value) {
  m_32_ = value;
  has_m_32_ = true;
}

void DOMMatrixInit::setM33(double value) {
  m_33_ = value;
  has_m_33_ = true;
}

void DOMMatrixInit::setM34(double value) {
  m_34_ = value;
  has_m_34_ = true;
}

void DOMMatrixInit::setM43(double value) {
  m_43_ = value;
  has_m_43_ = true;
}

void DOMMatrixInit::setM44(double value) {
  m_44_ = value;
  has_m_44_ = true;
}

}  // namespace blink

#endif  // THIRD_PARTY_BLINK_RENDERER_CORE_GEOMETRY_DOM_MATRIX_INIT_H_
