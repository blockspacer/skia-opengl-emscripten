// Copyright 2013 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef THIRD_PARTY_BLINK_PUBLIC_MOJOM_WORKER_SHARED_WORKER_FACTORY_MOJOM_BLINK_H_
#define THIRD_PARTY_BLINK_PUBLIC_MOJOM_WORKER_SHARED_WORKER_FACTORY_MOJOM_BLINK_H_

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
#include "third_party/blink/public/mojom/worker/shared_worker_factory.mojom-blink-forward.h"
#include "mojo/public/mojom/base/unguessable_token.mojom-blink-forward.h"
#if defined(ENABLE_GNET)
#include "services/network/public/mojom/url_loader_factory.mojom-blink-forward.h"
#endif // ENABLE_GNET
#include "services/service_manager/public/mojom/interface_provider.mojom-blink-forward.h"
#include "third_party/blink/public/mojom/loader/url_loader_factory_bundle.mojom-blink-forward.h"
#include "third_party/blink/public/mojom/renderer_preference_watcher.mojom-blink-forward.h"
#include "third_party/blink/public/mojom/renderer_preferences.mojom-blink-forward.h"
#include "third_party/blink/public/mojom/service_worker/controller_service_worker.mojom-blink-forward.h"
#include "third_party/blink/public/mojom/service_worker/service_worker_provider.mojom-blink-forward.h"
#include "third_party/blink/public/mojom/worker/shared_worker.mojom-blink-forward.h"
#include "third_party/blink/public/mojom/worker/shared_worker_host.mojom-blink-forward.h"
#include "third_party/blink/public/mojom/worker/shared_worker_info.mojom-blink-forward.h"
#include "third_party/blink/public/mojom/worker/worker_content_settings_proxy.mojom-blink-forward.h"
#include "third_party/blink/public/mojom/worker/worker_main_script_load_params.mojom-blink-forward.h"

#include "mojo/public/cpp/bindings/lib/wtf_clone_equals_util.h"
#include "mojo/public/cpp/bindings/lib/wtf_hash_util.h"
#include "third_party/blink/renderer/platform/wtf/hash_functions.h"
#include "third_party/blink/renderer/platform/wtf/text/wtf_string.h"

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
#include "third_party/blink/renderer/core/core_export.h"




namespace blink {
namespace mojom {
namespace blink {

class SharedWorkerFactoryProxy;

template <typename ImplRefTraits>
class SharedWorkerFactoryStub;

class SharedWorkerFactoryRequestValidator;


class CORE_EXPORT SharedWorkerFactory
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

  
  virtual void CreateSharedWorker(::blink::mojom::blink::SharedWorkerInfoPtr info, bool pause_on_start, const base::UnguessableToken& devtools_worker_token, ::blink::mojom::blink::RendererPreferencesPtr renderer_preferences, ::blink::mojom::blink::RendererPreferenceWatcherRequest preference_watcher_request, ::blink::mojom::blink::WorkerContentSettingsProxyPtr content_settings, ::blink::mojom::blink::ServiceWorkerProviderInfoForWorkerPtr service_worker_provider_info, int32_t appcache_host_id, ::network::mojom::blink::URLLoaderFactoryPtr main_script_loader_factory, ::blink::mojom::blink::WorkerMainScriptLoadParamsPtr main_script_load_params, ::blink::mojom::blink::URLLoaderFactoryBundlePtr subresource_loader_factories, ::blink::mojom::blink::ControllerServiceWorkerInfoPtr controller_info, ::blink::mojom::blink::SharedWorkerHostPtr host, ::blink::mojom::blink::SharedWorkerRequest shared_worker, ::service_manager::mojom::blink::InterfaceProviderPtr interface_provider) = 0;
};

class CORE_EXPORT SharedWorkerFactoryProxy
    : public SharedWorkerFactory {
 public:
  using InterfaceType = SharedWorkerFactory;

  explicit SharedWorkerFactoryProxy(mojo::MessageReceiverWithResponder* receiver);
  void CreateSharedWorker(::blink::mojom::blink::SharedWorkerInfoPtr info, bool pause_on_start, const base::UnguessableToken& devtools_worker_token, ::blink::mojom::blink::RendererPreferencesPtr renderer_preferences, ::blink::mojom::blink::RendererPreferenceWatcherRequest preference_watcher_request, ::blink::mojom::blink::WorkerContentSettingsProxyPtr content_settings, ::blink::mojom::blink::ServiceWorkerProviderInfoForWorkerPtr service_worker_provider_info, int32_t appcache_host_id, ::network::mojom::blink::URLLoaderFactoryPtr main_script_loader_factory, ::blink::mojom::blink::WorkerMainScriptLoadParamsPtr main_script_load_params, ::blink::mojom::blink::URLLoaderFactoryBundlePtr subresource_loader_factories, ::blink::mojom::blink::ControllerServiceWorkerInfoPtr controller_info, ::blink::mojom::blink::SharedWorkerHostPtr host, ::blink::mojom::blink::SharedWorkerRequest shared_worker, ::service_manager::mojom::blink::InterfaceProviderPtr interface_provider) final;

 private:
  mojo::MessageReceiverWithResponder* receiver_;
};
class CORE_EXPORT SharedWorkerFactoryStubDispatch {
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
class CORE_EXPORT SharedWorkerFactoryRequestValidator : public mojo::MessageReceiver {
 public:
  bool Accept(mojo::Message* message) override;
};





}  // namespace blink
}  // namespace mojom
}  // namespace blink

namespace mojo {

}  // namespace mojo

#endif  // THIRD_PARTY_BLINK_PUBLIC_MOJOM_WORKER_SHARED_WORKER_FACTORY_MOJOM_BLINK_H_
