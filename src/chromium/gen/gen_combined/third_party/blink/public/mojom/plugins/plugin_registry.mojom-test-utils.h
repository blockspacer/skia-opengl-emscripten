// Copyright 2019 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef THIRD_PARTY_BLINK_PUBLIC_MOJOM_PLUGINS_PLUGIN_REGISTRY_MOJOM_TEST_UTILS_H_
#define THIRD_PARTY_BLINK_PUBLIC_MOJOM_PLUGINS_PLUGIN_REGISTRY_MOJOM_TEST_UTILS_H_

#include "third_party/blink/public/mojom/plugins/plugin_registry.mojom.h"
#include "third_party/blink/public/common/common_export.h"


namespace blink {
namespace mojom {


class BLINK_COMMON_EXPORT PluginRegistryInterceptorForTesting : public PluginRegistry {
  virtual PluginRegistry* GetForwardingInterface() = 0;
  void GetPlugins(bool refresh, const url::Origin& main_frame_origin, GetPluginsCallback callback) override;
};
class BLINK_COMMON_EXPORT PluginRegistryAsyncWaiter {
 public:
  explicit PluginRegistryAsyncWaiter(PluginRegistry* proxy);
  ~PluginRegistryAsyncWaiter();
  void GetPlugins(
      bool refresh, const url::Origin& main_frame_origin, std::vector<PluginInfoPtr>* out_plugins);

 private:
  PluginRegistry* const proxy_;

  DISALLOW_COPY_AND_ASSIGN(PluginRegistryAsyncWaiter);
};




}  // namespace mojom
}  // namespace blink

#endif  // THIRD_PARTY_BLINK_PUBLIC_MOJOM_PLUGINS_PLUGIN_REGISTRY_MOJOM_TEST_UTILS_H_