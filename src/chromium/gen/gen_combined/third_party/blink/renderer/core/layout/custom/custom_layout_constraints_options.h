// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated from the Jinja2 template
// third_party/blink/renderer/bindings/templates/dictionary_impl.h.tmpl
// by the script code_generator_v8.py.
// DO NOT MODIFY!

// clang-format off
#ifndef THIRD_PARTY_BLINK_RENDERER_CORE_LAYOUT_CUSTOM_CUSTOM_LAYOUT_CONSTRAINTS_OPTIONS_H_
#define THIRD_PARTY_BLINK_RENDERER_CORE_LAYOUT_CUSTOM_CUSTOM_LAYOUT_CONSTRAINTS_OPTIONS_H_

#include "third_party/blink/renderer/bindings/core/v8/idl_dictionary_base.h"
#include "third_party/blink/renderer/bindings/core/v8/script_value.h"
#include "third_party/blink/renderer/core/core_export.h"
#include "third_party/blink/renderer/platform/heap/handle.h"

namespace blink {

class CORE_EXPORT CustomLayoutConstraintsOptions : public IDLDictionaryBase {
 public:
  static CustomLayoutConstraintsOptions* Create() { return MakeGarbageCollected<CustomLayoutConstraintsOptions>(); }

  CustomLayoutConstraintsOptions();
  virtual ~CustomLayoutConstraintsOptions();

  bool hasAvailableBlockSize() const { return has_available_block_size_; }
  double availableBlockSize() const {
    DCHECK(has_available_block_size_);
    return available_block_size_;
  }
  inline void setAvailableBlockSize(double);

  bool hasAvailableInlineSize() const { return has_available_inline_size_; }
  double availableInlineSize() const {
    DCHECK(has_available_inline_size_);
    return available_inline_size_;
  }
  inline void setAvailableInlineSize(double);

  bool hasData() const { return !(data_.IsEmpty() || data_.IsUndefined()); }
  ScriptValue data() const {
    return data_;
  }
  void setData(ScriptValue);

  bool hasFixedBlockSize() const { return has_fixed_block_size_; }
  double fixedBlockSize() const {
    DCHECK(has_fixed_block_size_);
    return fixed_block_size_;
  }
  inline void setFixedBlockSize(double);

  bool hasFixedInlineSize() const { return has_fixed_inline_size_; }
  double fixedInlineSize() const {
    DCHECK(has_fixed_inline_size_);
    return fixed_inline_size_;
  }
  inline void setFixedInlineSize(double);

  bool hasPercentageBlockSize() const { return has_percentage_block_size_; }
  double percentageBlockSize() const {
    DCHECK(has_percentage_block_size_);
    return percentage_block_size_;
  }
  inline void setPercentageBlockSize(double);

  bool hasPercentageInlineSize() const { return has_percentage_inline_size_; }
  double percentageInlineSize() const {
    DCHECK(has_percentage_inline_size_);
    return percentage_inline_size_;
  }
  inline void setPercentageInlineSize(double);

  v8::Local<v8::Value> ToV8Impl(v8::Local<v8::Object>, v8::Isolate*) const override;
  void Trace(blink::Visitor*) override;

 private:
  bool has_available_block_size_ = false;
  bool has_available_inline_size_ = false;
  bool has_fixed_block_size_ = false;
  bool has_fixed_inline_size_ = false;
  bool has_percentage_block_size_ = false;
  bool has_percentage_inline_size_ = false;

  double available_block_size_;
  double available_inline_size_;
  ScriptValue data_;
  double fixed_block_size_;
  double fixed_inline_size_;
  double percentage_block_size_;
  double percentage_inline_size_;

  friend class V8CustomLayoutConstraintsOptions;
};

void CustomLayoutConstraintsOptions::setAvailableBlockSize(double value) {
  available_block_size_ = value;
  has_available_block_size_ = true;
}

void CustomLayoutConstraintsOptions::setAvailableInlineSize(double value) {
  available_inline_size_ = value;
  has_available_inline_size_ = true;
}

void CustomLayoutConstraintsOptions::setFixedBlockSize(double value) {
  fixed_block_size_ = value;
  has_fixed_block_size_ = true;
}

void CustomLayoutConstraintsOptions::setFixedInlineSize(double value) {
  fixed_inline_size_ = value;
  has_fixed_inline_size_ = true;
}

void CustomLayoutConstraintsOptions::setPercentageBlockSize(double value) {
  percentage_block_size_ = value;
  has_percentage_block_size_ = true;
}

void CustomLayoutConstraintsOptions::setPercentageInlineSize(double value) {
  percentage_inline_size_ = value;
  has_percentage_inline_size_ = true;
}

}  // namespace blink

#endif  // THIRD_PARTY_BLINK_RENDERER_CORE_LAYOUT_CUSTOM_CUSTOM_LAYOUT_CONSTRAINTS_OPTIONS_H_
