// Copyright 2017 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef THIRD_PARTY_BLINK_RENDERER_BINDINGS_CORE_V8_ACTIVE_SCRIPT_WRAPPABLE_H_
#define THIRD_PARTY_BLINK_RENDERER_BINDINGS_CORE_V8_ACTIVE_SCRIPT_WRAPPABLE_H_

#include "base/macros.h"
#include "third_party/blink/renderer/core/dom/document.h"
#include "third_party/blink/renderer/core/execution_context/execution_context.h"
#include "third_party/blink/renderer/platform/bindings/active_script_wrappable_base.h"
#include "third_party/blink/renderer/platform/wtf/casting.h"

namespace blink {

class ScriptWrappable;

// Derived by wrappable objects which need to remain alive due to ongoing
// asynchronous activity, even if they are not referenced in the JavaScript or
// Blink heap.
//
// A ScriptWrappable ordinarily is held alive only if it has some such
// reference, usually via a wrapper object held by script. However, some
// objects, such as XMLHttpRequest, have pending activity that may be visible
// (e.g. firing event listeners or resolving promises), and so should not be
// collected, even if no references remain.
//
// Such objects should derive from ActiveScriptWrappable<T>, and override
// ScriptWrappable::HasPendingActivity:
//   bool HasPendingActivity() const final;
// which returns true if there may be pending activity which requires the
// wrappable remain alive.
//
// During wrapper tracing, ActiveScriptWrappables which belong to a
// non-destroyed execution context and have pending activity are treated as
// roots for the purposes of marking and so will keep themselves and objects
// they reference alive.
//
// Since this pending activity will not keep the wrappable alive after the
// context is destroyed, it is common for ActiveScriptWrappable objects to also
// derive from ContextLifecycleObserver to abort the activity at that time.
template <typename T>
class ActiveScriptWrappable : public ActiveScriptWrappableBase {
 public:
  ~ActiveScriptWrappable() override = default;

 protected:
  ActiveScriptWrappable() = default;

  bool IsContextDestroyed() const final {
    const auto* execution_context =
        static_cast<const T*>(this)->GetExecutionContext();
    if (!execution_context)
      return true;

    if (execution_context->IsContextDestroyed())
      return true;

    if (const auto* doc = DynamicTo<Document>(execution_context)) {
      // Not all Document objects have an ExecutionContext that is actually
      // destroyed. In such cases we defer to the ContextDocument if possible.
      // If no such Document exists we consider the ExecutionContext as
      // destroyed. This is needed to ensure that an ActiveScriptWrappable that
      // always returns true in HasPendingActivity does not result in a memory
      // leak.
      const Document* context_doc = doc->ContextDocument();
      if (!context_doc)
        return true;
      return context_doc->IsContextDestroyed();
    }

    return false;
  }

  bool DispatchHasPendingActivity() const final {
    return static_cast<const T*>(this)->HasPendingActivity();
  }
  ScriptWrappable* ToScriptWrappable() final { return static_cast<T*>(this); }

 private:
  DISALLOW_COPY_AND_ASSIGN(ActiveScriptWrappable);
};

}  // namespace blink

#endif  // THIRD_PARTY_BLINK_RENDERER_BINDINGS_CORE_V8_ACTIVE_SCRIPT_WRAPPABLE_H_
