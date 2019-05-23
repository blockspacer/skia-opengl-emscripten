// Copyright 2013 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef THIRD_PARTY_BLINK_PUBLIC_MOJOM_SERVICE_WORKER_SERVICE_WORKER_CONTAINER_MOJOM_H_
#define THIRD_PARTY_BLINK_PUBLIC_MOJOM_SERVICE_WORKER_SERVICE_WORKER_CONTAINER_MOJOM_H_

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
#include "third_party/blink/public/mojom/service_worker/service_worker_container.mojom-shared.h"
#include "third_party/blink/public/mojom/service_worker/service_worker_container.mojom-forward.h"
#include "mojo/public/mojom/base/string16.mojom-forward.h"
#include "third_party/blink/public/mojom/messaging/transferable_message.mojom-forward.h"
#include "third_party/blink/public/mojom/service_worker/controller_service_worker.mojom-forward.h"
#include "third_party/blink/public/mojom/service_worker/service_worker_error_type.mojom-forward.h"
#include "third_party/blink/public/mojom/service_worker/service_worker_object.mojom-forward.h"
#include "third_party/blink/public/mojom/service_worker/service_worker_registration.mojom-forward.h"
#include "third_party/blink/public/mojom/web_feature/web_feature.mojom-forward.h"
#include "url/mojom/url.mojom-forward.h"
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

class ServiceWorkerContainerHostProxy;

template <typename ImplRefTraits>
class ServiceWorkerContainerHostStub;

class ServiceWorkerContainerHostRequestValidator;
class ServiceWorkerContainerHostResponseValidator;


class BLINK_COMMON_EXPORT ServiceWorkerContainerHost
    : public ServiceWorkerContainerHostInterfaceBase {
 public:
  static const char Name_[];
  static constexpr uint32_t Version_ = 0;
  static constexpr bool PassesAssociatedKinds_ = true;
  static constexpr bool HasSyncMethods_ = false;

  using Base_ = ServiceWorkerContainerHostInterfaceBase;
  using Proxy_ = ServiceWorkerContainerHostProxy;

  template <typename ImplRefTraits>
  using Stub_ = ServiceWorkerContainerHostStub<ImplRefTraits>;

  using RequestValidator_ = ServiceWorkerContainerHostRequestValidator;
  using ResponseValidator_ = ServiceWorkerContainerHostResponseValidator;
  enum MethodMinVersions : uint32_t {
    kRegisterMinVersion = 0,
    kGetRegistrationMinVersion = 0,
    kGetRegistrationsMinVersion = 0,
    kGetRegistrationForReadyMinVersion = 0,
    kEnsureControllerServiceWorkerMinVersion = 0,
    kCloneContainerHostMinVersion = 0,
    kPingMinVersion = 0,
    kHintToUpdateServiceWorkerMinVersion = 0,
    kOnExecutionReadyMinVersion = 0,
  };
  virtual ~ServiceWorkerContainerHost() {}


  using RegisterCallback = base::OnceCallback<void(::blink::mojom::ServiceWorkerErrorType, const base::Optional<std::string>&, ::blink::mojom::ServiceWorkerRegistrationObjectInfoPtr)>;
  
  virtual void Register(const GURL& script_url, ::blink::mojom::ServiceWorkerRegistrationOptionsPtr options, RegisterCallback callback) = 0;


  using GetRegistrationCallback = base::OnceCallback<void(::blink::mojom::ServiceWorkerErrorType, const base::Optional<std::string>&, ::blink::mojom::ServiceWorkerRegistrationObjectInfoPtr)>;
  
  virtual void GetRegistration(const GURL& client_url, GetRegistrationCallback callback) = 0;


  using GetRegistrationsCallback = base::OnceCallback<void(::blink::mojom::ServiceWorkerErrorType, const base::Optional<std::string>&, base::Optional<std::vector<::blink::mojom::ServiceWorkerRegistrationObjectInfoPtr>>)>;
  
  virtual void GetRegistrations(GetRegistrationsCallback callback) = 0;


  using GetRegistrationForReadyCallback = base::OnceCallback<void(::blink::mojom::ServiceWorkerRegistrationObjectInfoPtr)>;
  
  virtual void GetRegistrationForReady(GetRegistrationForReadyCallback callback) = 0;

  
  virtual void EnsureControllerServiceWorker(::blink::mojom::ControllerServiceWorkerRequest controller, ControllerServiceWorkerPurpose purpose) = 0;

  
  virtual void CloneContainerHost(ServiceWorkerContainerHostRequest container_host) = 0;


  using PingCallback = base::OnceCallback<void()>;
  
  virtual void Ping(PingCallback callback) = 0;

  
  virtual void HintToUpdateServiceWorker() = 0;

  
  virtual void OnExecutionReady() = 0;
};

class ServiceWorkerContainerProxy;

template <typename ImplRefTraits>
class ServiceWorkerContainerStub;

class ServiceWorkerContainerRequestValidator;


class BLINK_COMMON_EXPORT ServiceWorkerContainer
    : public ServiceWorkerContainerInterfaceBase {
 public:
  static const char Name_[];
  static constexpr uint32_t Version_ = 0;
  static constexpr bool PassesAssociatedKinds_ = true;
  static constexpr bool HasSyncMethods_ = false;

  using Base_ = ServiceWorkerContainerInterfaceBase;
  using Proxy_ = ServiceWorkerContainerProxy;

  template <typename ImplRefTraits>
  using Stub_ = ServiceWorkerContainerStub<ImplRefTraits>;

  using RequestValidator_ = ServiceWorkerContainerRequestValidator;
  using ResponseValidator_ = mojo::PassThroughFilter;
  enum MethodMinVersions : uint32_t {
    kSetControllerMinVersion = 0,
    kPostMessageToClientMinVersion = 0,
    kCountFeatureMinVersion = 0,
  };
  virtual ~ServiceWorkerContainer() {}

  
  virtual void SetController(::blink::mojom::ControllerServiceWorkerInfoPtr controller_info, bool should_notify_controllerchange) = 0;

  
  virtual void PostMessageToClient(::blink::mojom::ServiceWorkerObjectInfoPtr source, ::blink::TransferableMessage message) = 0;

  
  virtual void CountFeature(::blink::mojom::WebFeature feature) = 0;
};

class BLINK_COMMON_EXPORT ServiceWorkerContainerHostProxy
    : public ServiceWorkerContainerHost {
 public:
  using InterfaceType = ServiceWorkerContainerHost;

  explicit ServiceWorkerContainerHostProxy(mojo::MessageReceiverWithResponder* receiver);
  void Register(const GURL& script_url, ::blink::mojom::ServiceWorkerRegistrationOptionsPtr options, RegisterCallback callback) final;
  void GetRegistration(const GURL& client_url, GetRegistrationCallback callback) final;
  void GetRegistrations(GetRegistrationsCallback callback) final;
  void GetRegistrationForReady(GetRegistrationForReadyCallback callback) final;
  void EnsureControllerServiceWorker(::blink::mojom::ControllerServiceWorkerRequest controller, ControllerServiceWorkerPurpose purpose) final;
  void CloneContainerHost(ServiceWorkerContainerHostRequest container_host) final;
  void Ping(PingCallback callback) final;
  void HintToUpdateServiceWorker() final;
  void OnExecutionReady() final;

 private:
  mojo::MessageReceiverWithResponder* receiver_;
};

class BLINK_COMMON_EXPORT ServiceWorkerContainerProxy
    : public ServiceWorkerContainer {
 public:
  using InterfaceType = ServiceWorkerContainer;

  explicit ServiceWorkerContainerProxy(mojo::MessageReceiverWithResponder* receiver);
  void SetController(::blink::mojom::ControllerServiceWorkerInfoPtr controller_info, bool should_notify_controllerchange) final;
  void PostMessageToClient(::blink::mojom::ServiceWorkerObjectInfoPtr source, ::blink::TransferableMessage message) final;
  void CountFeature(::blink::mojom::WebFeature feature) final;

 private:
  mojo::MessageReceiverWithResponder* receiver_;
};
class BLINK_COMMON_EXPORT ServiceWorkerContainerHostStubDispatch {
 public:
  static bool Accept(ServiceWorkerContainerHost* impl, mojo::Message* message);
  static bool AcceptWithResponder(
      ServiceWorkerContainerHost* impl,
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder);
};

template <typename ImplRefTraits =
              mojo::RawPtrImplRefTraits<ServiceWorkerContainerHost>>
class ServiceWorkerContainerHostStub
    : public mojo::MessageReceiverWithResponderStatus {
 public:
  using ImplPointerType = typename ImplRefTraits::PointerType;

  ServiceWorkerContainerHostStub() {}
  ~ServiceWorkerContainerHostStub() override {}

  void set_sink(ImplPointerType sink) { sink_ = std::move(sink); }
  ImplPointerType& sink() { return sink_; }

  bool Accept(mojo::Message* message) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return ServiceWorkerContainerHostStubDispatch::Accept(
        ImplRefTraits::GetRawPointer(&sink_), message);
  }

  bool AcceptWithResponder(
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return ServiceWorkerContainerHostStubDispatch::AcceptWithResponder(
        ImplRefTraits::GetRawPointer(&sink_), message, std::move(responder));
  }

 private:
  ImplPointerType sink_;
};
class BLINK_COMMON_EXPORT ServiceWorkerContainerStubDispatch {
 public:
  static bool Accept(ServiceWorkerContainer* impl, mojo::Message* message);
  static bool AcceptWithResponder(
      ServiceWorkerContainer* impl,
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder);
};

template <typename ImplRefTraits =
              mojo::RawPtrImplRefTraits<ServiceWorkerContainer>>
class ServiceWorkerContainerStub
    : public mojo::MessageReceiverWithResponderStatus {
 public:
  using ImplPointerType = typename ImplRefTraits::PointerType;

  ServiceWorkerContainerStub() {}
  ~ServiceWorkerContainerStub() override {}

  void set_sink(ImplPointerType sink) { sink_ = std::move(sink); }
  ImplPointerType& sink() { return sink_; }

  bool Accept(mojo::Message* message) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return ServiceWorkerContainerStubDispatch::Accept(
        ImplRefTraits::GetRawPointer(&sink_), message);
  }

  bool AcceptWithResponder(
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return ServiceWorkerContainerStubDispatch::AcceptWithResponder(
        ImplRefTraits::GetRawPointer(&sink_), message, std::move(responder));
  }

 private:
  ImplPointerType sink_;
};
class BLINK_COMMON_EXPORT ServiceWorkerContainerHostRequestValidator : public mojo::MessageReceiver {
 public:
  bool Accept(mojo::Message* message) override;
};
class BLINK_COMMON_EXPORT ServiceWorkerContainerRequestValidator : public mojo::MessageReceiver {
 public:
  bool Accept(mojo::Message* message) override;
};
class BLINK_COMMON_EXPORT ServiceWorkerContainerHostResponseValidator : public mojo::MessageReceiver {
 public:
  bool Accept(mojo::Message* message) override;
};





}  // namespace mojom
}  // namespace blink

namespace mojo {

}  // namespace mojo

#endif  // THIRD_PARTY_BLINK_PUBLIC_MOJOM_SERVICE_WORKER_SERVICE_WORKER_CONTAINER_MOJOM_H_