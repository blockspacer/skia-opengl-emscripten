// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated from the Jinja2 template
// third_party/blink/renderer/bindings/templates/dictionary_impl.h.tmpl
// by the script code_generator_v8.py.
// DO NOT MODIFY!

// clang-format off
#ifndef THIRD_PARTY_BLINK_RENDERER_CORE_ANIMATION_SCROLL_TIMELINE_OPTIONS_H_
#define THIRD_PARTY_BLINK_RENDERER_CORE_ANIMATION_SCROLL_TIMELINE_OPTIONS_H_

#include "third_party/blink/renderer/bindings/core/v8/double_or_scroll_timeline_auto_keyword.h"
#include "third_party/blink/renderer/bindings/core/v8/idl_dictionary_base.h"
#include "third_party/blink/renderer/core/core_export.h"
#include "third_party/blink/renderer/platform/heap/handle.h"
#include "third_party/blink/renderer/platform/wtf/text/wtf_string.h"

namespace blink {

class Element;

class CORE_EXPORT ScrollTimelineOptions : public IDLDictionaryBase {
 public:
  static ScrollTimelineOptions* Create() { return MakeGarbageCollected<ScrollTimelineOptions>(); }

  ScrollTimelineOptions();
  virtual ~ScrollTimelineOptions();

  bool hasEndScrollOffset() const { return !end_scroll_offset_.IsNull(); }
  const String& endScrollOffset() const {
    return end_scroll_offset_;
  }
  inline void setEndScrollOffset(const String&);

  bool hasFill() const { return !fill_.IsNull(); }
  const String& fill() const {
    return fill_;
  }
  inline void setFill(const String&);

  bool hasOrientation() const { return !orientation_.IsNull(); }
  const String& orientation() const {
    return orientation_;
  }
  inline void setOrientation(const String&);

  bool hasScrollSource() const { return has_scroll_source_; }
  Element* scrollSource() const {
    return scroll_source_;
  }
  inline void setScrollSource(Element*);
  inline void setScrollSourceToNull();

  bool hasStartScrollOffset() const { return !start_scroll_offset_.IsNull(); }
  const String& startScrollOffset() const {
    return start_scroll_offset_;
  }
  inline void setStartScrollOffset(const String&);

  bool hasTimeRange() const { return !time_range_.IsNull(); }
  const DoubleOrScrollTimelineAutoKeyword& timeRange() const {
    return time_range_;
  }
  void setTimeRange(const DoubleOrScrollTimelineAutoKeyword&);

  v8::Local<v8::Value> ToV8Impl(v8::Local<v8::Object>, v8::Isolate*) const override;
  void Trace(blink::Visitor*) override;

 private:
  bool has_scroll_source_ = false;

  String end_scroll_offset_;
  String fill_;
  String orientation_;
  Member<Element> scroll_source_;
  String start_scroll_offset_;
  DoubleOrScrollTimelineAutoKeyword time_range_;

  friend class V8ScrollTimelineOptions;
};

void ScrollTimelineOptions::setEndScrollOffset(const String& value) {
  end_scroll_offset_ = value;
}

void ScrollTimelineOptions::setFill(const String& value) {
  fill_ = value;
}

void ScrollTimelineOptions::setOrientation(const String& value) {
  orientation_ = value;
}

void ScrollTimelineOptions::setScrollSource(Element* value) {
  scroll_source_ = value;
  has_scroll_source_ = true;
}

void ScrollTimelineOptions::setScrollSourceToNull() {
  scroll_source_ = Member<Element>();
  has_scroll_source_ = true;
}

void ScrollTimelineOptions::setStartScrollOffset(const String& value) {
  start_scroll_offset_ = value;
}

}  // namespace blink

#endif  // THIRD_PARTY_BLINK_RENDERER_CORE_ANIMATION_SCROLL_TIMELINE_OPTIONS_H_
