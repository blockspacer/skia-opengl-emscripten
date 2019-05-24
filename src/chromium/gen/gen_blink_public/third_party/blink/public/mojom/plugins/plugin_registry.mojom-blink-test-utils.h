// Copyright 2019 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef THIRD_PARTY_BLINK_PUBLIC_MOJOM_PLUGINS_PLUGIN_REGISTRY_MOJOM_BLINK_TEST_UTILS_H_
#define THIRD_PARTY_BLINK_PUBLIC_MOJOM_PLUGINS_PLUGIN_REGISTRY_MOJOM_BLINK_TEST_UTILS_H_

#include "third_party/blink/public/mojom/plugins/plugin_registry.mojom-blink.h"
#include "third_party/blink/renderer/platform/platform_export.h"


namespace blink {
namespace mojom {
namespace blink {


class PLATFORM_EXPORT PluginRegistryInterceptorForTesting : public PluginRegistry {
  virtual PluginRegistry* GetForwardingInterface() = 0;
  void GetPlugins(bool refresh, const scoped_refptr<const ::blink::SecurityOrigin>& main_frame_origin, GetPluginsCallback callback) override;
};
class PLATFORM_EXPORT PluginRegistryAsyncWaiter {
 public:
  explicit PluginRegistryAsyncWaiter(PluginRegistry* proxy);
  ~PluginRegistryAsyncWaiter();
  void GetPlugins(
      bool refresh, const scoped_refptr<const ::blink::SecurityOrigin>& main_frame_origin, WTF::Vector<PluginInfoPtr>* out_plugins);

 private:
  PluginRegistry* const proxy_;

  DISALLOW_COPY_AND_ASSIGN(PluginRegistryAsyncWaiter);
};




}  // namespace blink
}  // namespace mojom
}  // namespace blink

#endif  // THIRD_PARTY_BLINK_PUBLIC_MOJOM_PLUGINS_PLUGIN_REGISTRY_MOJOM_BLINK_TEST_UTILS_H_