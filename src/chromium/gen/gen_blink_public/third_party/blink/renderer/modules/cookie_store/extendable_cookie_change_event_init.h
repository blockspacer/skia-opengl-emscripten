// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated from the Jinja2 template
// third_party/blink/renderer/bindings/templates/dictionary_impl.h.tmpl
// by the script code_generator_v8.py.
// DO NOT MODIFY!

// clang-format off
#ifndef THIRD_PARTY_BLINK_RENDERER_MODULES_COOKIE_STORE_EXTENDABLE_COOKIE_CHANGE_EVENT_INIT_H_
#define THIRD_PARTY_BLINK_RENDERER_MODULES_COOKIE_STORE_EXTENDABLE_COOKIE_CHANGE_EVENT_INIT_H_

#include "third_party/blink/renderer/modules/cookie_store/cookie_list_item.h"
#include "third_party/blink/renderer/modules/modules_export.h"
#include "third_party/blink/renderer/modules/service_worker/extendable_event_init.h"
#include "third_party/blink/renderer/platform/heap/handle.h"
#include "third_party/blink/renderer/platform/wtf/vector.h"

namespace blink {

class MODULES_EXPORT ExtendableCookieChangeEventInit : public ExtendableEventInit {
 public:
  static ExtendableCookieChangeEventInit* Create() { return MakeGarbageCollected<ExtendableCookieChangeEventInit>(); }

  ExtendableCookieChangeEventInit();
  virtual ~ExtendableCookieChangeEventInit();

  bool hasChanged() const { return has_changed_; }
  const HeapVector<Member<CookieListItem>>& changed() const {
    DCHECK(has_changed_);
    return changed_;
  }
  void setChanged(const HeapVector<Member<CookieListItem>>&);

  bool hasDeleted() const { return has_deleted_; }
  const HeapVector<Member<CookieListItem>>& deleted() const {
    DCHECK(has_deleted_);
    return deleted_;
  }
  void setDeleted(const HeapVector<Member<CookieListItem>>&);

  v8::Local<v8::Value> ToV8Impl(v8::Local<v8::Object>, v8::Isolate*) const override;
  void Trace(blink::Visitor*) override;

 private:
  bool has_changed_ = false;
  bool has_deleted_ = false;

  HeapVector<Member<CookieListItem>> changed_;
  HeapVector<Member<CookieListItem>> deleted_;

  friend class V8ExtendableCookieChangeEventInit;
};

}  // namespace blink

#endif  // THIRD_PARTY_BLINK_RENDERER_MODULES_COOKIE_STORE_EXTENDABLE_COOKIE_CHANGE_EVENT_INIT_H_
