// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated from the Jinja2 template
// third_party/blink/renderer/bindings/templates/dictionary_impl.h.tmpl
// by the script code_generator_v8.py.
// DO NOT MODIFY!

// clang-format off
#ifndef THIRD_PARTY_BLINK_RENDERER_MODULES_MEDIASTREAM_MEDIA_TRACK_CONSTRAINTS_H_
#define THIRD_PARTY_BLINK_RENDERER_MODULES_MEDIASTREAM_MEDIA_TRACK_CONSTRAINTS_H_

#include "third_party/blink/renderer/modules/mediastream/media_track_constraint_set.h"
#include "third_party/blink/renderer/modules/modules_export.h"
#include "third_party/blink/renderer/platform/heap/handle.h"
#include "third_party/blink/renderer/platform/wtf/vector.h"

namespace blink {

class MODULES_EXPORT MediaTrackConstraints : public MediaTrackConstraintSet {
 public:
  static MediaTrackConstraints* Create() { return MakeGarbageCollected<MediaTrackConstraints>(); }

  MediaTrackConstraints();
  virtual ~MediaTrackConstraints();

  bool hasAdvanced() const { return has_advanced_; }
  const HeapVector<Member<MediaTrackConstraintSet>>& advanced() const {
    DCHECK(has_advanced_);
    return advanced_;
  }
  void setAdvanced(const HeapVector<Member<MediaTrackConstraintSet>>&);

  v8::Local<v8::Value> ToV8Impl(v8::Local<v8::Object>, v8::Isolate*) const override;
  void Trace(blink::Visitor*) override;

 private:
  bool has_advanced_ = false;

  HeapVector<Member<MediaTrackConstraintSet>> advanced_;

  friend class V8MediaTrackConstraints;
};

}  // namespace blink

#endif  // THIRD_PARTY_BLINK_RENDERER_MODULES_MEDIASTREAM_MEDIA_TRACK_CONSTRAINTS_H_
