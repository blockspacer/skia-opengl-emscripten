// Copyright 2013 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef THIRD_PARTY_BLINK_PUBLIC_MOJOM_WORKER_DEDICATED_WORKER_HOST_FACTORY_MOJOM_BLINK_H_
#define THIRD_PARTY_BLINK_PUBLIC_MOJOM_WORKER_DEDICATED_WORKER_HOST_FACTORY_MOJOM_BLINK_H_

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
#include "third_party/blink/public/mojom/worker/dedicated_worker_host_factory.mojom-shared.h"
#include "third_party/blink/public/mojom/worker/dedicated_worker_host_factory.mojom-blink-forward.h"
#include "services/service_manager/public/mojom/interface_provider.mojom-blink-forward.h"
#include "third_party/blink/public/mojom/blob/blob_url_store.mojom-blink-forward.h"
#include "third_party/blink/public/mojom/loader/url_loader_factory_bundle.mojom-blink-forward.h"
#include "third_party/blink/public/mojom/worker/worker_main_script_load_params.mojom-blink-forward.h"
#include "third_party/blink/public/mojom/service_worker/controller_service_worker.mojom-blink-forward.h"
#include "third_party/blink/public/mojom/service_worker/service_worker_provider.mojom-blink-forward.h"
#include "url/mojom/origin.mojom-blink-forward.h"
#include "url/mojom/url.mojom-blink-forward.h"

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

class DedicatedWorkerHostFactoryClientProxy;

template <typename ImplRefTraits>
class DedicatedWorkerHostFactoryClientStub;

class DedicatedWorkerHostFactoryClientRequestValidator;


class CORE_EXPORT DedicatedWorkerHostFactoryClient
    : public DedicatedWorkerHostFactoryClientInterfaceBase {
 public:
  static const char Name_[];
  static constexpr uint32_t Version_ = 0;
  static constexpr bool PassesAssociatedKinds_ = true;
  static constexpr bool HasSyncMethods_ = false;

  using Base_ = DedicatedWorkerHostFactoryClientInterfaceBase;
  using Proxy_ = DedicatedWorkerHostFactoryClientProxy;

  template <typename ImplRefTraits>
  using Stub_ = DedicatedWorkerHostFactoryClientStub<ImplRefTraits>;

  using RequestValidator_ = DedicatedWorkerHostFactoryClientRequestValidator;
  using ResponseValidator_ = mojo::PassThroughFilter;
  enum MethodMinVersions : uint32_t {
    kOnWorkerHostCreatedMinVersion = 0,
    kOnScriptLoadStartedMinVersion = 0,
    kOnScriptLoadStartFailedMinVersion = 0,
  };
  virtual ~DedicatedWorkerHostFactoryClient() {}

  
  virtual void OnWorkerHostCreated(::service_manager::mojom::blink::InterfaceProviderPtr interface_provider) = 0;

  
  virtual void OnScriptLoadStarted(::blink::mojom::blink::ServiceWorkerProviderInfoForWorkerPtr service_worker_provider_info, ::blink::mojom::blink::WorkerMainScriptLoadParamsPtr main_script_load_params, ::blink::mojom::blink::URLLoaderFactoryBundlePtr subresource_loader_factories, ::blink::mojom::blink::ControllerServiceWorkerInfoPtr controller_info) = 0;

  
  virtual void OnScriptLoadStartFailed() = 0;
};

class DedicatedWorkerHostFactoryProxy;

template <typename ImplRefTraits>
class DedicatedWorkerHostFactoryStub;

class DedicatedWorkerHostFactoryRequestValidator;


class CORE_EXPORT DedicatedWorkerHostFactory
    : public DedicatedWorkerHostFactoryInterfaceBase {
 public:
  static const char Name_[];
  static constexpr uint32_t Version_ = 0;
  static constexpr bool PassesAssociatedKinds_ = false;
  static constexpr bool HasSyncMethods_ = false;

  using Base_ = DedicatedWorkerHostFactoryInterfaceBase;
  using Proxy_ = DedicatedWorkerHostFactoryProxy;

  template <typename ImplRefTraits>
  using Stub_ = DedicatedWorkerHostFactoryStub<ImplRefTraits>;

  using RequestValidator_ = DedicatedWorkerHostFactoryRequestValidator;
  using ResponseValidator_ = mojo::PassThroughFilter;
  enum MethodMinVersions : uint32_t {
    kCreateWorkerHostMinVersion = 0,
    kCreateWorkerHostAndStartScriptLoadMinVersion = 0,
  };
  virtual ~DedicatedWorkerHostFactory() {}

  
  virtual void CreateWorkerHost(const scoped_refptr<const ::blink::SecurityOrigin>& origin, ::service_manager::mojom::blink::InterfaceProviderRequest worker_interface_provider) = 0;

  
  virtual void CreateWorkerHostAndStartScriptLoad(const ::blink::KURL& script_url, const scoped_refptr<const ::blink::SecurityOrigin>& origin, ::blink::mojom::blink::BlobURLTokenPtr blob_url_token, DedicatedWorkerHostFactoryClientPtr client) = 0;
};

class CORE_EXPORT DedicatedWorkerHostFactoryClientProxy
    : public DedicatedWorkerHostFactoryClient {
 public:
  using InterfaceType = DedicatedWorkerHostFactoryClient;

  explicit DedicatedWorkerHostFactoryClientProxy(mojo::MessageReceiverWithResponder* receiver);
  void OnWorkerHostCreated(::service_manager::mojom::blink::InterfaceProviderPtr interface_provider) final;
  void OnScriptLoadStarted(::blink::mojom::blink::ServiceWorkerProviderInfoForWorkerPtr service_worker_provider_info, ::blink::mojom::blink::WorkerMainScriptLoadParamsPtr main_script_load_params, ::blink::mojom::blink::URLLoaderFactoryBundlePtr subresource_loader_factories, ::blink::mojom::blink::ControllerServiceWorkerInfoPtr controller_info) final;
  void OnScriptLoadStartFailed() final;

 private:
  mojo::MessageReceiverWithResponder* receiver_;
};

class CORE_EXPORT DedicatedWorkerHostFactoryProxy
    : public DedicatedWorkerHostFactory {
 public:
  using InterfaceType = DedicatedWorkerHostFactory;

  explicit DedicatedWorkerHostFactoryProxy(mojo::MessageReceiverWithResponder* receiver);
  void CreateWorkerHost(const scoped_refptr<const ::blink::SecurityOrigin>& origin, ::service_manager::mojom::blink::InterfaceProviderRequest worker_interface_provider) final;
  void CreateWorkerHostAndStartScriptLoad(const ::blink::KURL& script_url, const scoped_refptr<const ::blink::SecurityOrigin>& origin, ::blink::mojom::blink::BlobURLTokenPtr blob_url_token, DedicatedWorkerHostFactoryClientPtr client) final;

 private:
  mojo::MessageReceiverWithResponder* receiver_;
};
class CORE_EXPORT DedicatedWorkerHostFactoryClientStubDispatch {
 public:
  static bool Accept(DedicatedWorkerHostFactoryClient* impl, mojo::Message* message);
  static bool AcceptWithResponder(
      DedicatedWorkerHostFactoryClient* impl,
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder);
};

template <typename ImplRefTraits =
              mojo::RawPtrImplRefTraits<DedicatedWorkerHostFactoryClient>>
class DedicatedWorkerHostFactoryClientStub
    : public mojo::MessageReceiverWithResponderStatus {
 public:
  using ImplPointerType = typename ImplRefTraits::PointerType;

  DedicatedWorkerHostFactoryClientStub() {}
  ~DedicatedWorkerHostFactoryClientStub() override {}

  void set_sink(ImplPointerType sink) { sink_ = std::move(sink); }
  ImplPointerType& sink() { return sink_; }

  bool Accept(mojo::Message* message) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return DedicatedWorkerHostFactoryClientStubDispatch::Accept(
        ImplRefTraits::GetRawPointer(&sink_), message);
  }

  bool AcceptWithResponder(
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return DedicatedWorkerHostFactoryClientStubDispatch::AcceptWithResponder(
        ImplRefTraits::GetRawPointer(&sink_), message, std::move(responder));
  }

 private:
  ImplPointerType sink_;
};
class CORE_EXPORT DedicatedWorkerHostFactoryStubDispatch {
 public:
  static bool Accept(DedicatedWorkerHostFactory* impl, mojo::Message* message);
  static bool AcceptWithResponder(
      DedicatedWorkerHostFactory* impl,
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder);
};

template <typename ImplRefTraits =
              mojo::RawPtrImplRefTraits<DedicatedWorkerHostFactory>>
class DedicatedWorkerHostFactoryStub
    : public mojo::MessageReceiverWithResponderStatus {
 public:
  using ImplPointerType = typename ImplRefTraits::PointerType;

  DedicatedWorkerHostFactoryStub() {}
  ~DedicatedWorkerHostFactoryStub() override {}

  void set_sink(ImplPointerType sink) { sink_ = std::move(sink); }
  ImplPointerType& sink() { return sink_; }

  bool Accept(mojo::Message* message) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return DedicatedWorkerHostFactoryStubDispatch::Accept(
        ImplRefTraits::GetRawPointer(&sink_), message);
  }

  bool AcceptWithResponder(
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return DedicatedWorkerHostFactoryStubDispatch::AcceptWithResponder(
        ImplRefTraits::GetRawPointer(&sink_), message, std::move(responder));
  }

 private:
  ImplPointerType sink_;
};
class CORE_EXPORT DedicatedWorkerHostFactoryClientRequestValidator : public mojo::MessageReceiver {
 public:
  bool Accept(mojo::Message* message) override;
};
class CORE_EXPORT DedicatedWorkerHostFactoryRequestValidator : public mojo::MessageReceiver {
 public:
  bool Accept(mojo::Message* message) override;
};





}  // namespace blink
}  // namespace mojom
}  // namespace blink

namespace mojo {

}  // namespace mojo

#endif  // THIRD_PARTY_BLINK_PUBLIC_MOJOM_WORKER_DEDICATED_WORKER_HOST_FACTORY_MOJOM_BLINK_H_