// Copyright 2019 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#if defined(__clang__)
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wunused-private-field"
#elif defined(_MSC_VER)
#pragma warning(push)
#pragma warning(disable:4056)
#pragma warning(disable:4065)
#pragma warning(disable:4756)
#endif


#include "third_party/blink/public/mojom/plugins/plugin_registry.mojom-blink-test-utils.h"

#include <utility>

#include "base/bind.h"
#include "base/run_loop.h"
#include "mojo/public/cpp/bindings/lib/wtf_serialization.h"
#include "mojo/public/mojom/base/file_path.mojom-blink.h"
#include "mojo/public/mojom/base/string16.mojom-blink.h"
#include "url/mojom/origin.mojom-blink.h"


#ifndef THIRD_PARTY_BLINK_PUBLIC_MOJOM_PLUGINS_PLUGIN_REGISTRY_MOJOM_BLINK_JUMBO_H_
#define THIRD_PARTY_BLINK_PUBLIC_MOJOM_PLUGINS_PLUGIN_REGISTRY_MOJOM_BLINK_JUMBO_H_
#include "mojo/public/cpp/base/file_path_mojom_traits.h"
#include "mojo/public/cpp/base/unguessable_token_mojom_traits.h"
#include "third_party/blink/renderer/platform/mojo/security_origin_struct_traits.h"
#include "third_party/blink/renderer/platform/mojo/string16_mojom_traits.h"
#endif


namespace blink {
namespace mojom {
namespace blink {


void PluginRegistryInterceptorForTesting::GetPlugins(bool refresh, const scoped_refptr<const ::blink::SecurityOrigin>& main_frame_origin, GetPluginsCallback callback) {
  GetForwardingInterface()->GetPlugins(std::move(refresh), std::move(main_frame_origin), std::move(callback));
}
PluginRegistryAsyncWaiter::PluginRegistryAsyncWaiter(
    PluginRegistry* proxy) : proxy_(proxy) {}

PluginRegistryAsyncWaiter::~PluginRegistryAsyncWaiter() = default;

void PluginRegistryAsyncWaiter::GetPlugins(
    bool refresh, const scoped_refptr<const ::blink::SecurityOrigin>& main_frame_origin, WTF::Vector<PluginInfoPtr>* out_plugins) {
  base::RunLoop loop;
  proxy_->GetPlugins(std::move(refresh),std::move(main_frame_origin),
      base::BindOnce(
          [](base::RunLoop* loop,
             WTF::Vector<PluginInfoPtr>* out_plugins
,
             WTF::Vector<PluginInfoPtr> plugins) {*out_plugins = std::move(plugins);
            loop->Quit();
          },
          &loop,
          out_plugins));
  loop.Run();
}





}  // namespace blink
}  // namespace mojom
}  // namespace blink

#if defined(__clang__)
#pragma clang diagnostic pop
#elif defined(_MSC_VER)
#pragma warning(pop)
#endif