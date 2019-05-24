// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated from the Jinja2 template
// third_party/blink/renderer/bindings/templates/dictionary_impl.h.tmpl
// by the script code_generator_v8.py.
// DO NOT MODIFY!

// clang-format off
#ifndef THIRD_PARTY_BLINK_RENDERER_MODULES_PICTURE_IN_PICTURE_PICTURE_IN_PICTURE_OPTIONS_H_
#define THIRD_PARTY_BLINK_RENDERER_MODULES_PICTURE_IN_PICTURE_PICTURE_IN_PICTURE_OPTIONS_H_

#include "third_party/blink/renderer/bindings/core/v8/idl_dictionary_base.h"
#include "third_party/blink/renderer/modules/modules_export.h"
#include "third_party/blink/renderer/platform/heap/handle.h"

namespace blink {

class MODULES_EXPORT PictureInPictureOptions : public IDLDictionaryBase {
 public:
  static PictureInPictureOptions* Create() { return MakeGarbageCollected<PictureInPictureOptions>(); }

  PictureInPictureOptions();
  virtual ~PictureInPictureOptions();

  bool hasAspectRatio() const { return has_aspect_ratio_; }
  double aspectRatio() const {
    DCHECK(has_aspect_ratio_);
    return aspect_ratio_;
  }
  inline void setAspectRatio(double);

  bool hasInteractive() const { return has_interactive_; }
  bool interactive() const {
    DCHECK(has_interactive_);
    return interactive_;
  }
  inline void setInteractive(bool);

  v8::Local<v8::Value> ToV8Impl(v8::Local<v8::Object>, v8::Isolate*) const override;
  void Trace(blink::Visitor*) override;

 private:
  bool has_aspect_ratio_ = false;
  bool has_interactive_ = false;

  double aspect_ratio_;
  bool interactive_;

  friend class V8PictureInPictureOptions;
};

void PictureInPictureOptions::setAspectRatio(double value) {
  aspect_ratio_ = value;
  has_aspect_ratio_ = true;
}

void PictureInPictureOptions::setInteractive(bool value) {
  interactive_ = value;
  has_interactive_ = true;
}

}  // namespace blink

#endif  // THIRD_PARTY_BLINK_RENDERER_MODULES_PICTURE_IN_PICTURE_PICTURE_IN_PICTURE_OPTIONS_H_
