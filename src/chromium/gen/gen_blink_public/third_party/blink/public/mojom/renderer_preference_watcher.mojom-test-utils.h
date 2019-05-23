// Copyright 2019 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef THIRD_PARTY_BLINK_PUBLIC_MOJOM_RENDERER_PREFERENCE_WATCHER_MOJOM_TEST_UTILS_H_
#define THIRD_PARTY_BLINK_PUBLIC_MOJOM_RENDERER_PREFERENCE_WATCHER_MOJOM_TEST_UTILS_H_

#include "third_party/blink/public/mojom/renderer_preference_watcher.mojom.h"
#include "third_party/blink/public/common/common_export.h"


namespace blink {
namespace mojom {


class BLINK_COMMON_EXPORT RendererPreferenceWatcherInterceptorForTesting : public RendererPreferenceWatcher {
  virtual RendererPreferenceWatcher* GetForwardingInterface() = 0;
  void NotifyUpdate(::blink::mojom::RendererPreferencesPtr new_prefs) override;
};
class BLINK_COMMON_EXPORT RendererPreferenceWatcherAsyncWaiter {
 public:
  explicit RendererPreferenceWatcherAsyncWaiter(RendererPreferenceWatcher* proxy);
  ~RendererPreferenceWatcherAsyncWaiter();

 private:
  RendererPreferenceWatcher* const proxy_;

  DISALLOW_COPY_AND_ASSIGN(RendererPreferenceWatcherAsyncWaiter);
};




}  // namespace mojom
}  // namespace blink

#endif  // THIRD_PARTY_BLINK_PUBLIC_MOJOM_RENDERER_PREFERENCE_WATCHER_MOJOM_TEST_UTILS_H_