// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated from the Jinja2 template
// third_party/blink/renderer/bindings/templates/dictionary_impl.h.tmpl
// by the script code_generator_v8.py.
// DO NOT MODIFY!

// clang-format off
#ifndef THIRD_PARTY_BLINK_RENDERER_CORE_CSS_MEDIA_QUERY_LIST_EVENT_INIT_H_
#define THIRD_PARTY_BLINK_RENDERER_CORE_CSS_MEDIA_QUERY_LIST_EVENT_INIT_H_

#include "third_party/blink/renderer/core/core_export.h"
#include "third_party/blink/renderer/core/dom/events/event_init.h"
#include "third_party/blink/renderer/platform/heap/handle.h"
#include "third_party/blink/renderer/platform/wtf/text/wtf_string.h"

namespace blink {

class CORE_EXPORT MediaQueryListEventInit : public EventInit {
 public:
  static MediaQueryListEventInit* Create() { return MakeGarbageCollected<MediaQueryListEventInit>(); }

  MediaQueryListEventInit();
  virtual ~MediaQueryListEventInit();

  bool hasMatches() const { return has_matches_; }
  bool matches() const {
    DCHECK(has_matches_);
    return matches_;
  }
  inline void setMatches(bool);

  bool hasMedia() const { return !media_.IsNull(); }
  const String& media() const {
    return media_;
  }
  inline void setMedia(const String&);

  v8::Local<v8::Value> ToV8Impl(v8::Local<v8::Object>, v8::Isolate*) const override;
  void Trace(blink::Visitor*) override;

 private:
  bool has_matches_ = false;

  bool matches_;
  String media_;

  friend class V8MediaQueryListEventInit;
};

void MediaQueryListEventInit::setMatches(bool value) {
  matches_ = value;
  has_matches_ = true;
}

void MediaQueryListEventInit::setMedia(const String& value) {
  media_ = value;
}

}  // namespace blink

#endif  // THIRD_PARTY_BLINK_RENDERER_CORE_CSS_MEDIA_QUERY_LIST_EVENT_INIT_H_
