// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated from the Jinja2 template
// third_party/blink/renderer/bindings/templates/dictionary_impl.h.tmpl
// by the script code_generator_v8.py.
// DO NOT MODIFY!

// clang-format off
#ifndef THIRD_PARTY_BLINK_RENDERER_MODULES_BACKGROUND_FETCH_BACKGROUND_FETCH_OPTIONS_H_
#define THIRD_PARTY_BLINK_RENDERER_MODULES_BACKGROUND_FETCH_BACKGROUND_FETCH_OPTIONS_H_

#include "third_party/blink/renderer/modules/background_fetch/background_fetch_ui_options.h"
#include "third_party/blink/renderer/modules/modules_export.h"
#include "third_party/blink/renderer/platform/heap/handle.h"

namespace blink {

class MODULES_EXPORT BackgroundFetchOptions : public BackgroundFetchUIOptions {
 public:
  static BackgroundFetchOptions* Create() { return MakeGarbageCollected<BackgroundFetchOptions>(); }

  BackgroundFetchOptions();
  virtual ~BackgroundFetchOptions();

  bool hasDownloadTotal() const { return has_download_total_; }
  uint64_t downloadTotal() const {
    DCHECK(has_download_total_);
    return download_total_;
  }
  inline void setDownloadTotal(uint64_t);

  v8::Local<v8::Value> ToV8Impl(v8::Local<v8::Object>, v8::Isolate*) const override;
  void Trace(blink::Visitor*) override;

 private:
  bool has_download_total_ = false;

  uint64_t download_total_;

  friend class V8BackgroundFetchOptions;
};

void BackgroundFetchOptions::setDownloadTotal(uint64_t value) {
  download_total_ = value;
  has_download_total_ = true;
}

}  // namespace blink

#endif  // THIRD_PARTY_BLINK_RENDERER_MODULES_BACKGROUND_FETCH_BACKGROUND_FETCH_OPTIONS_H_
