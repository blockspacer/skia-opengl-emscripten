// Copyright 2013 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef SERVICES_NETWORK_PUBLIC_MOJOM_NETWORK_QUALITY_ESTIMATOR_MANAGER_MOJOM_BLINK_H_
#define SERVICES_NETWORK_PUBLIC_MOJOM_NETWORK_QUALITY_ESTIMATOR_MANAGER_MOJOM_BLINK_H_

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
#include "services/network/public/mojom/network_quality_estimator_manager.mojom-shared.h"
#include "services/network/public/mojom/network_quality_estimator_manager.mojom-blink-forward.h"
#include "mojo/public/mojom/base/time.mojom-blink-forward.h"
#include "services/network/public/mojom/network_types.mojom-blink-forward.h"

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
#include "third_party/blink/public/platform/web_common.h"




namespace network {
namespace mojom {
namespace blink {

class NetworkQualityEstimatorManagerClientProxy;

template <typename ImplRefTraits>
class NetworkQualityEstimatorManagerClientStub;

class NetworkQualityEstimatorManagerClientRequestValidator;


class BLINK_PLATFORM_EXPORT NetworkQualityEstimatorManagerClient
    : public NetworkQualityEstimatorManagerClientInterfaceBase {
 public:
  static const char Name_[];
  static constexpr uint32_t Version_ = 0;
  static constexpr bool PassesAssociatedKinds_ = false;
  static constexpr bool HasSyncMethods_ = false;

  using Base_ = NetworkQualityEstimatorManagerClientInterfaceBase;
  using Proxy_ = NetworkQualityEstimatorManagerClientProxy;

  template <typename ImplRefTraits>
  using Stub_ = NetworkQualityEstimatorManagerClientStub<ImplRefTraits>;

  using RequestValidator_ = NetworkQualityEstimatorManagerClientRequestValidator;
  using ResponseValidator_ = mojo::PassThroughFilter;
  enum MethodMinVersions : uint32_t {
    kOnNetworkQualityChangedMinVersion = 0,
  };
  virtual ~NetworkQualityEstimatorManagerClient() {}

  
  virtual void OnNetworkQualityChanged(::network::mojom::blink::EffectiveConnectionType type, base::TimeDelta http_rtt, base::TimeDelta transport_rtt, int32_t downlink_bandwidth_kbps) = 0;
};

class NetworkQualityEstimatorManagerProxy;

template <typename ImplRefTraits>
class NetworkQualityEstimatorManagerStub;

class NetworkQualityEstimatorManagerRequestValidator;


class BLINK_PLATFORM_EXPORT NetworkQualityEstimatorManager
    : public NetworkQualityEstimatorManagerInterfaceBase {
 public:
  static const char Name_[];
  static constexpr uint32_t Version_ = 0;
  static constexpr bool PassesAssociatedKinds_ = false;
  static constexpr bool HasSyncMethods_ = false;

  using Base_ = NetworkQualityEstimatorManagerInterfaceBase;
  using Proxy_ = NetworkQualityEstimatorManagerProxy;

  template <typename ImplRefTraits>
  using Stub_ = NetworkQualityEstimatorManagerStub<ImplRefTraits>;

  using RequestValidator_ = NetworkQualityEstimatorManagerRequestValidator;
  using ResponseValidator_ = mojo::PassThroughFilter;
  enum MethodMinVersions : uint32_t {
    kRequestNotificationsMinVersion = 0,
  };
  virtual ~NetworkQualityEstimatorManager() {}

  
  virtual void RequestNotifications(NetworkQualityEstimatorManagerClientPtr client_ptr) = 0;
};

class BLINK_PLATFORM_EXPORT NetworkQualityEstimatorManagerClientProxy
    : public NetworkQualityEstimatorManagerClient {
 public:
  using InterfaceType = NetworkQualityEstimatorManagerClient;

  explicit NetworkQualityEstimatorManagerClientProxy(mojo::MessageReceiverWithResponder* receiver);
  void OnNetworkQualityChanged(::network::mojom::blink::EffectiveConnectionType type, base::TimeDelta http_rtt, base::TimeDelta transport_rtt, int32_t downlink_bandwidth_kbps) final;

 private:
  mojo::MessageReceiverWithResponder* receiver_;
};

class BLINK_PLATFORM_EXPORT NetworkQualityEstimatorManagerProxy
    : public NetworkQualityEstimatorManager {
 public:
  using InterfaceType = NetworkQualityEstimatorManager;

  explicit NetworkQualityEstimatorManagerProxy(mojo::MessageReceiverWithResponder* receiver);
  void RequestNotifications(NetworkQualityEstimatorManagerClientPtr client_ptr) final;

 private:
  mojo::MessageReceiverWithResponder* receiver_;
};
class BLINK_PLATFORM_EXPORT NetworkQualityEstimatorManagerClientStubDispatch {
 public:
  static bool Accept(NetworkQualityEstimatorManagerClient* impl, mojo::Message* message);
  static bool AcceptWithResponder(
      NetworkQualityEstimatorManagerClient* impl,
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder);
};

template <typename ImplRefTraits =
              mojo::RawPtrImplRefTraits<NetworkQualityEstimatorManagerClient>>
class NetworkQualityEstimatorManagerClientStub
    : public mojo::MessageReceiverWithResponderStatus {
 public:
  using ImplPointerType = typename ImplRefTraits::PointerType;

  NetworkQualityEstimatorManagerClientStub() {}
  ~NetworkQualityEstimatorManagerClientStub() override {}

  void set_sink(ImplPointerType sink) { sink_ = std::move(sink); }
  ImplPointerType& sink() { return sink_; }

  bool Accept(mojo::Message* message) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return NetworkQualityEstimatorManagerClientStubDispatch::Accept(
        ImplRefTraits::GetRawPointer(&sink_), message);
  }

  bool AcceptWithResponder(
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return NetworkQualityEstimatorManagerClientStubDispatch::AcceptWithResponder(
        ImplRefTraits::GetRawPointer(&sink_), message, std::move(responder));
  }

 private:
  ImplPointerType sink_;
};
class BLINK_PLATFORM_EXPORT NetworkQualityEstimatorManagerStubDispatch {
 public:
  static bool Accept(NetworkQualityEstimatorManager* impl, mojo::Message* message);
  static bool AcceptWithResponder(
      NetworkQualityEstimatorManager* impl,
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder);
};

template <typename ImplRefTraits =
              mojo::RawPtrImplRefTraits<NetworkQualityEstimatorManager>>
class NetworkQualityEstimatorManagerStub
    : public mojo::MessageReceiverWithResponderStatus {
 public:
  using ImplPointerType = typename ImplRefTraits::PointerType;

  NetworkQualityEstimatorManagerStub() {}
  ~NetworkQualityEstimatorManagerStub() override {}

  void set_sink(ImplPointerType sink) { sink_ = std::move(sink); }
  ImplPointerType& sink() { return sink_; }

  bool Accept(mojo::Message* message) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return NetworkQualityEstimatorManagerStubDispatch::Accept(
        ImplRefTraits::GetRawPointer(&sink_), message);
  }

  bool AcceptWithResponder(
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return NetworkQualityEstimatorManagerStubDispatch::AcceptWithResponder(
        ImplRefTraits::GetRawPointer(&sink_), message, std::move(responder));
  }

 private:
  ImplPointerType sink_;
};
class BLINK_PLATFORM_EXPORT NetworkQualityEstimatorManagerClientRequestValidator : public mojo::MessageReceiver {
 public:
  bool Accept(mojo::Message* message) override;
};
class BLINK_PLATFORM_EXPORT NetworkQualityEstimatorManagerRequestValidator : public mojo::MessageReceiver {
 public:
  bool Accept(mojo::Message* message) override;
};





}  // namespace blink
}  // namespace mojom
}  // namespace network

namespace mojo {

}  // namespace mojo

#endif  // SERVICES_NETWORK_PUBLIC_MOJOM_NETWORK_QUALITY_ESTIMATOR_MANAGER_MOJOM_BLINK_H_