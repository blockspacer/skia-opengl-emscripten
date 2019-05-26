// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated from the Jinja2 template
// third_party/blink/renderer/bindings/templates/dictionary_impl.h.tmpl
// by the script code_generator_v8.py.
// DO NOT MODIFY!

// clang-format off
#ifndef THIRD_PARTY_BLINK_RENDERER_CORE_DOM_MUTATION_OBSERVER_INIT_H_
#define THIRD_PARTY_BLINK_RENDERER_CORE_DOM_MUTATION_OBSERVER_INIT_H_

#include "third_party/blink/renderer/bindings/core/v8/idl_dictionary_base.h"
#include "third_party/blink/renderer/core/core_export.h"
#include "third_party/blink/renderer/platform/heap/handle.h"
#include "third_party/blink/renderer/platform/wtf/text/wtf_string.h"
#include "third_party/blink/renderer/platform/wtf/vector.h"

namespace blink {

class CORE_EXPORT MutationObserverInit : public IDLDictionaryBase {
 public:
  static MutationObserverInit* Create() { return MakeGarbageCollected<MutationObserverInit>(); }

  MutationObserverInit();
  virtual ~MutationObserverInit();

  bool hasAttributeFilter() const { return has_attribute_filter_; }
  const Vector<String>& attributeFilter() const {
    DCHECK(has_attribute_filter_);
    return attribute_filter_;
  }
  void setAttributeFilter(const Vector<String>&);

  bool hasAttributeOldValue() const { return has_attribute_old_value_; }
  bool attributeOldValue() const {
    DCHECK(has_attribute_old_value_);
    return attribute_old_value_;
  }
  inline void setAttributeOldValue(bool);

  bool hasAttributes() const { return has_attributes_; }
  bool attributes() const {
    DCHECK(has_attributes_);
    return attributes_;
  }
  inline void setAttributes(bool);

  bool hasCharacterData() const { return has_character_data_; }
  bool characterData() const {
    DCHECK(has_character_data_);
    return character_data_;
  }
  inline void setCharacterData(bool);

  bool hasCharacterDataOldValue() const { return has_character_data_old_value_; }
  bool characterDataOldValue() const {
    DCHECK(has_character_data_old_value_);
    return character_data_old_value_;
  }
  inline void setCharacterDataOldValue(bool);

  bool hasChildList() const { return has_child_list_; }
  bool childList() const {
    DCHECK(has_child_list_);
    return child_list_;
  }
  inline void setChildList(bool);

  bool hasSubtree() const { return has_subtree_; }
  bool subtree() const {
    DCHECK(has_subtree_);
    return subtree_;
  }
  inline void setSubtree(bool);

  v8::Local<v8::Value> ToV8Impl(v8::Local<v8::Object>, v8::Isolate*) const override;
  void Trace(blink::Visitor*) override;

 private:
  bool has_attribute_filter_ = false;
  bool has_attribute_old_value_ = false;
  bool has_attributes_ = false;
  bool has_character_data_ = false;
  bool has_character_data_old_value_ = false;
  bool has_child_list_ = false;
  bool has_subtree_ = false;

  Vector<String> attribute_filter_;
  bool attribute_old_value_;
  bool attributes_;
  bool character_data_;
  bool character_data_old_value_;
  bool child_list_;
  bool subtree_;

  friend class V8MutationObserverInit;
};

void MutationObserverInit::setAttributeOldValue(bool value) {
  attribute_old_value_ = value;
  has_attribute_old_value_ = true;
}

void MutationObserverInit::setAttributes(bool value) {
  attributes_ = value;
  has_attributes_ = true;
}

void MutationObserverInit::setCharacterData(bool value) {
  character_data_ = value;
  has_character_data_ = true;
}

void MutationObserverInit::setCharacterDataOldValue(bool value) {
  character_data_old_value_ = value;
  has_character_data_old_value_ = true;
}

void MutationObserverInit::setChildList(bool value) {
  child_list_ = value;
  has_child_list_ = true;
}

void MutationObserverInit::setSubtree(bool value) {
  subtree_ = value;
  has_subtree_ = true;
}

}  // namespace blink

#endif  // THIRD_PARTY_BLINK_RENDERER_CORE_DOM_MUTATION_OBSERVER_INIT_H_
