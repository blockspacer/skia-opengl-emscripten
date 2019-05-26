// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated from the Jinja2 template
// third_party/blink/renderer/bindings/templates/dictionary_impl.h.tmpl
// by the script code_generator_v8.py.
// DO NOT MODIFY!

// clang-format off
#ifndef THIRD_PARTY_BLINK_RENDERER_CORE_LAYOUT_CUSTOM_FRAGMENT_RESULT_OPTIONS_H_
#define THIRD_PARTY_BLINK_RENDERER_CORE_LAYOUT_CUSTOM_FRAGMENT_RESULT_OPTIONS_H_

#include "third_party/blink/renderer/bindings/core/v8/idl_dictionary_base.h"
#include "third_party/blink/renderer/bindings/core/v8/script_value.h"
#include "third_party/blink/renderer/core/core_export.h"
#include "third_party/blink/renderer/platform/heap/handle.h"

namespace blink {

class CustomLayoutFragment;

class CORE_EXPORT FragmentResultOptions : public IDLDictionaryBase {
 public:
  static FragmentResultOptions* Create() { return MakeGarbageCollected<FragmentResultOptions>(); }

  FragmentResultOptions();
  virtual ~FragmentResultOptions();

  bool hasAutoBlockSize() const { return has_auto_block_size_; }
  double autoBlockSize() const {
    DCHECK(has_auto_block_size_);
    return auto_block_size_;
  }
  inline void setAutoBlockSize(double);

  bool hasChildFragments() const { return has_child_fragments_; }
  const HeapVector<Member<CustomLayoutFragment>>& childFragments() const {
    DCHECK(has_child_fragments_);
    return child_fragments_;
  }
  void setChildFragments(const HeapVector<Member<CustomLayoutFragment>>&);

  bool hasData() const { return !(data_.IsEmpty() || data_.IsUndefined()); }
  ScriptValue data() const {
    return data_;
  }
  void setData(ScriptValue);

  v8::Local<v8::Value> ToV8Impl(v8::Local<v8::Object>, v8::Isolate*) const override;
  void Trace(blink::Visitor*) override;

 private:
  bool has_auto_block_size_ = false;
  bool has_child_fragments_ = false;

  double auto_block_size_;
  HeapVector<Member<CustomLayoutFragment>> child_fragments_;
  ScriptValue data_;

  friend class V8FragmentResultOptions;
};

void FragmentResultOptions::setAutoBlockSize(double value) {
  auto_block_size_ = value;
  has_auto_block_size_ = true;
}

}  // namespace blink

#endif  // THIRD_PARTY_BLINK_RENDERER_CORE_LAYOUT_CUSTOM_FRAGMENT_RESULT_OPTIONS_H_
