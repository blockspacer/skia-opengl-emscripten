// Copyright 2017 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef UI_AURA_CLIENT_DRAG_DROP_CLIENT_OBSERVER_H_
#define UI_AURA_CLIENT_DRAG_DROP_CLIENT_OBSERVER_H_

#include "ui/aura/aura_export.h"

namespace aura {
namespace client {

class AURA_EXPORT DragDropClientObserver {
 public:
  // Called when dragging started.
  virtual void OnDragStarted() = 0;

  // Called when dragging ended.
  virtual void OnDragEnded() = 0;

 protected:
  virtual ~DragDropClientObserver() = default;
};

}  // namespace client
}  // namespace aura

#endif  // UI_AURA_CLIENT_DRAG_DROP_CLIENT_OBSERVER_H_
