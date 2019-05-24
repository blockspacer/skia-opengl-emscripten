// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated from the Jinja2 template
// third_party/blink/renderer/bindings/templates/dictionary_impl.h.tmpl
// by the script code_generator_v8.py.
// DO NOT MODIFY!

// clang-format off
#ifndef THIRD_PARTY_BLINK_RENDERER_CORE_GEOMETRY_DOM_MATRIX_2D_INIT_H_
#define THIRD_PARTY_BLINK_RENDERER_CORE_GEOMETRY_DOM_MATRIX_2D_INIT_H_

#include "third_party/blink/renderer/bindings/core/v8/idl_dictionary_base.h"
#include "third_party/blink/renderer/core/core_export.h"
#include "third_party/blink/renderer/platform/heap/handle.h"

namespace blink {

class CORE_EXPORT DOMMatrix2DInit : public IDLDictionaryBase {
 public:
  static DOMMatrix2DInit* Create() { return MakeGarbageCollected<DOMMatrix2DInit>(); }

  DOMMatrix2DInit();
  virtual ~DOMMatrix2DInit();

  bool hasA() const { return has_a_; }
  double a() const {
    DCHECK(has_a_);
    return a_;
  }
  inline void setA(double);

  bool hasB() const { return has_b_; }
  double b() const {
    DCHECK(has_b_);
    return b_;
  }
  inline void setB(double);

  bool hasC() const { return has_c_; }
  double c() const {
    DCHECK(has_c_);
    return c_;
  }
  inline void setC(double);

  bool hasD() const { return has_d_; }
  double d() const {
    DCHECK(has_d_);
    return d_;
  }
  inline void setD(double);

  bool hasE() const { return has_e_; }
  double e() const {
    DCHECK(has_e_);
    return e_;
  }
  inline void setE(double);

  bool hasF() const { return has_f_; }
  double f() const {
    DCHECK(has_f_);
    return f_;
  }
  inline void setF(double);

  bool hasM11() const { return has_m_11_; }
  double m11() const {
    DCHECK(has_m_11_);
    return m_11_;
  }
  inline void setM11(double);

  bool hasM12() const { return has_m_12_; }
  double m12() const {
    DCHECK(has_m_12_);
    return m_12_;
  }
  inline void setM12(double);

  bool hasM21() const { return has_m_21_; }
  double m21() const {
    DCHECK(has_m_21_);
    return m_21_;
  }
  inline void setM21(double);

  bool hasM22() const { return has_m_22_; }
  double m22() const {
    DCHECK(has_m_22_);
    return m_22_;
  }
  inline void setM22(double);

  bool hasM41() const { return has_m_41_; }
  double m41() const {
    DCHECK(has_m_41_);
    return m_41_;
  }
  inline void setM41(double);

  bool hasM42() const { return has_m_42_; }
  double m42() const {
    DCHECK(has_m_42_);
    return m_42_;
  }
  inline void setM42(double);

  v8::Local<v8::Value> ToV8Impl(v8::Local<v8::Object>, v8::Isolate*) const override;
  void Trace(blink::Visitor*) override;

 private:
  bool has_a_ = false;
  bool has_b_ = false;
  bool has_c_ = false;
  bool has_d_ = false;
  bool has_e_ = false;
  bool has_f_ = false;
  bool has_m_11_ = false;
  bool has_m_12_ = false;
  bool has_m_21_ = false;
  bool has_m_22_ = false;
  bool has_m_41_ = false;
  bool has_m_42_ = false;

  double a_;
  double b_;
  double c_;
  double d_;
  double e_;
  double f_;
  double m_11_;
  double m_12_;
  double m_21_;
  double m_22_;
  double m_41_;
  double m_42_;

  friend class V8DOMMatrix2DInit;
};

void DOMMatrix2DInit::setA(double value) {
  a_ = value;
  has_a_ = true;
}

void DOMMatrix2DInit::setB(double value) {
  b_ = value;
  has_b_ = true;
}

void DOMMatrix2DInit::setC(double value) {
  c_ = value;
  has_c_ = true;
}

void DOMMatrix2DInit::setD(double value) {
  d_ = value;
  has_d_ = true;
}

void DOMMatrix2DInit::setE(double value) {
  e_ = value;
  has_e_ = true;
}

void DOMMatrix2DInit::setF(double value) {
  f_ = value;
  has_f_ = true;
}

void DOMMatrix2DInit::setM11(double value) {
  m_11_ = value;
  has_m_11_ = true;
}

void DOMMatrix2DInit::setM12(double value) {
  m_12_ = value;
  has_m_12_ = true;
}

void DOMMatrix2DInit::setM21(double value) {
  m_21_ = value;
  has_m_21_ = true;
}

void DOMMatrix2DInit::setM22(double value) {
  m_22_ = value;
  has_m_22_ = true;
}

void DOMMatrix2DInit::setM41(double value) {
  m_41_ = value;
  has_m_41_ = true;
}

void DOMMatrix2DInit::setM42(double value) {
  m_42_ = value;
  has_m_42_ = true;
}

}  // namespace blink

#endif  // THIRD_PARTY_BLINK_RENDERER_CORE_GEOMETRY_DOM_MATRIX_2D_INIT_H_
