// Copyright 2013 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef THIRD_PARTY_BLINK_PUBLIC_MOJOM_WORKER_SHARED_WORKER_FACTORY_MOJOM_H_
#define THIRD_PARTY_BLINK_PUBLIC_MOJOM_WORKER_SHARED_WORKER_FACTORY_MOJOM_H_

#include <stdint.h>

#include <limits>
#include <type_traits>
#include <utility>

#include "base/callback.h"
#include "base/macros.h"
#include "base/optional.h"

#include "mojo/public/cpp/bindings/mojo_buildflags.h"
#if BUILDFLAG(MOJO_TRACE_ENABLED)
#include "base/trace_event/trace_event.h"
#endif
#include "mojo/public/cpp/bindings/clone_traits.h"
#include "mojo/public/cpp/bindings/equals_traits.h"
#include "mojo/public/cpp/bindings/lib/serialization.h"
#include "mojo/public/cpp/bindings/struct_ptr.h"
#include "mojo/public/cpp/bindings/struct_traits.h"
#include "mojo/public/cpp/bindings/union_traits.h"
#include "third_party/blink/public/mojom/worker/shared_worker_factory.mojom-shared.h"
#include "third_party/blink/public/mojom/worker/shared_worker_factory.mojom-forward.h"
#include "mojo/public/mojom/base/unguessable_token.mojom-forward.h"
#if defined(ENABLE_GNET)
#include "services/network/public/mojom/url_loader_factory.mojom-forward.h"
#endif // ENABLE_GNET
#include "services/service_manager/public/mojom/interface_provider.mojom-forward.h"
#include "third_party/blink/public/mojom/loader/url_loader_factory_bundle.mojom-forward.h"
#include "third_party/blink/public/mojom/renderer_preference_watcher.mojom-forward.h"
#include "third_party/blink/public/mojom/renderer_preferences.mojom-forward.h"
#include "third_party/blink/public/mojom/service_worker/controller_service_worker.mojom-forward.h"
#include "third_party/blink/public/mojom/service_worker/service_worker_provider.mojom-forward.h"
#include "third_party/blink/public/mojom/worker/shared_worker.mojom-forward.h"
#include "third_party/blink/public/mojom/worker/shared_worker_host.mojom-forward.h"
#include "third_party/blink/public/mojom/worker/shared_worker_info.mojom-forward.h"
#include "third_party/blink/public/mojom/worker/worker_content_settings_proxy.mojom-forward.h"
#include "third_party/blink/public/mojom/worker/worker_main_script_load_params.mojom-forward.h"
#include <string>
#include <vector>

#include "mojo/public/cpp/bindings/associated_interface_ptr.h"
#include "mojo/public/cpp/bindings/associated_interface_ptr_info.h"
#include "mojo/public/cpp/bindings/associated_interface_request.h"
#include "mojo/public/cpp/bindings/interface_ptr.h"
#include "mojo/public/cpp/bindings/interface_request.h"
#include "mojo/public/cpp/bindings/lib/control_message_handler.h"
#include "mojo/public/cpp/bindings/raw_ptr_impl_ref_traits.h"
#include "mojo/public/cpp/bindings/thread_safe_interface_ptr.h"


#include "mojo/public/cpp/bindings/lib/native_enum_serialization.h"
#include "mojo/public/cpp/bindings/lib/native_struct_serialization.h"
#include "third_party/blink/public/common/common_export.h"




namespace blink {
namespace mojom {

class SharedWorkerFactoryProxy;

template <typename ImplRefTraits>
class SharedWorkerFactoryStub;

class SharedWorkerFactoryRequestValidator;


class BLINK_COMMON_EXPORT SharedWorkerFactory
    : public SharedWorkerFactoryInterfaceBase {
 public:
  static const char Name_[];
  static constexpr uint32_t Version_ = 0;
  static constexpr bool PassesAssociatedKinds_ = true;
  static constexpr bool HasSyncMethods_ = false;

  using Base_ = SharedWorkerFactoryInterfaceBase;
  using Proxy_ = SharedWorkerFactoryProxy;

  template <typename ImplRefTraits>
  using Stub_ = SharedWorkerFactoryStub<ImplRefTraits>;

  using RequestValidator_ = SharedWorkerFactoryRequestValidator;
  using ResponseValidator_ = mojo::PassThroughFilter;
  enum MethodMinVersions : uint32_t {
    kCreateSharedWorkerMinVersion = 0,
  };
  virtual ~SharedWorkerFactory() {}

  
  virtual void CreateSharedWorker(::blink::mojom::SharedWorkerInfoPtr info, bool pause_on_start, const base::UnguessableToken& devtools_worker_token, ::blink::mojom::RendererPreferencesPtr renderer_preferences, ::blink::mojom::RendererPreferenceWatcherRequest preference_watcher_request, ::blink::mojom::WorkerContentSettingsProxyPtr content_settings, ::blink::mojom::ServiceWorkerProviderInfoForWorkerPtr service_worker_provider_info, int32_t appcache_host_id, ::network::mojom::URLLoaderFactoryPtr main_script_loader_factory, ::blink::mojom::WorkerMainScriptLoadParamsPtr main_script_load_params, std::unique_ptr<blink::URLLoaderFactoryBundleInfo> subresource_loader_factories, ::blink::mojom::ControllerServiceWorkerInfoPtr controller_info, ::blink::mojom::SharedWorkerHostPtr host, ::blink::mojom::SharedWorkerRequest shared_worker, ::service_manager::mojom::InterfaceProviderPtr interface_provider) = 0;
};

class BLINK_COMMON_EXPORT SharedWorkerFactoryProxy
    : public SharedWorkerFactory {
 public:
  using InterfaceType = SharedWorkerFactory;

  explicit SharedWorkerFactoryProxy(mojo::MessageReceiverWithResponder* receiver);
  void CreateSharedWorker(::blink::mojom::SharedWorkerInfoPtr info, bool pause_on_start, const base::UnguessableToken& devtools_worker_token, ::blink::mojom::RendererPreferencesPtr renderer_preferences, ::blink::mojom::RendererPreferenceWatcherRequest preference_watcher_request, ::blink::mojom::WorkerContentSettingsProxyPtr content_settings, ::blink::mojom::ServiceWorkerProviderInfoForWorkerPtr service_worker_provider_info, int32_t appcache_host_id, ::network::mojom::URLLoaderFactoryPtr main_script_loader_factory, ::blink::mojom::WorkerMainScriptLoadParamsPtr main_script_load_params, std::unique_ptr<blink::URLLoaderFactoryBundleInfo> subresource_loader_factories, ::blink::mojom::ControllerServiceWorkerInfoPtr controller_info, ::blink::mojom::SharedWorkerHostPtr host, ::blink::mojom::SharedWorkerRequest shared_worker, ::service_manager::mojom::InterfaceProviderPtr interface_provider) final;

 private:
  mojo::MessageReceiverWithResponder* receiver_;
};
class BLINK_COMMON_EXPORT SharedWorkerFactoryStubDispatch {
 public:
  static bool Accept(SharedWorkerFactory* impl, mojo::Message* message);
  static bool AcceptWithResponder(
      SharedWorkerFactory* impl,
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder);
};

template <typename ImplRefTraits =
              mojo::RawPtrImplRefTraits<SharedWorkerFactory>>
class SharedWorkerFactoryStub
    : public mojo::MessageReceiverWithResponderStatus {
 public:
  using ImplPointerType = typename ImplRefTraits::PointerType;

  SharedWorkerFactoryStub() {}
  ~SharedWorkerFactoryStub() override {}

  void set_sink(ImplPointerType sink) { sink_ = std::move(sink); }
  ImplPointerType& sink() { return sink_; }

  bool Accept(mojo::Message* message) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return SharedWorkerFactoryStubDispatch::Accept(
        ImplRefTraits::GetRawPointer(&sink_), message);
  }

  bool AcceptWithResponder(
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return SharedWorkerFactoryStubDispatch::AcceptWithResponder(
        ImplRefTraits::GetRawPointer(&sink_), message, std::move(responder));
  }

 private:
  ImplPointerType sink_;
};
class BLINK_COMMON_EXPORT SharedWorkerFactoryRequestValidator : public mojo::MessageReceiver {
 public:
  bool Accept(mojo::Message* message) override;
};





}  // namespace mojom
}  // namespace blink

namespace mojo {

}  // namespace mojo

#endif  // THIRD_PARTY_BLINK_PUBLIC_MOJOM_WORKER_SHARED_WORKER_FACTORY_MOJOM_H_
