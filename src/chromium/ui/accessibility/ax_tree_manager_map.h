// Copyright 2019 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef UI_ACCESSIBILITY_AX_TREE_MANAGER_MAP_H_
#define UI_ACCESSIBILITY_AX_TREE_MANAGER_MAP_H_

#include <unordered_map>

#include "base/macros.h"
#include "base/no_destructor.h"
#include "ui/accessibility/ax_tree_id.h"
#include "ui/accessibility/ax_tree_manager.h"

namespace ui {

// This class manages AXTreeManager instances. It is a singleton wrapper
// around a std::unordered_map. AXTreeID's are used as the key for the map.
// Since AXTreeID's might refer to AXTreeIDUnknown, callers should not expect
// AXTreeIDUnknown to map to a particular AXTreeManager.
class AX_EXPORT AXTreeManagerMap {
 public:
  AXTreeManagerMap();
  ~AXTreeManagerMap();

  static AXTreeManagerMap& GetInstance();
  void AddTreeManager(AXTreeID tree_id, AXTreeManager* manager);
  void RemoveTreeManager(AXTreeID tree_id);
  AXTreeManager* GetManager(AXTreeID tree_id);

 private:
  std::unordered_map<AXTreeID, AXTreeManager*, AXTreeIDHash> map_;
};

}  // namespace ui

#endif  // UI_ACCESSIBILITY_AX_TREE_MANAGER_MAP_H_
