// Copyright 2013 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef SERVICES_DEVICE_PUBLIC_MOJOM_PUBLIC_IP_ADDRESS_GEOLOCATION_PROVIDER_MOJOM_H_
#define SERVICES_DEVICE_PUBLIC_MOJOM_PUBLIC_IP_ADDRESS_GEOLOCATION_PROVIDER_MOJOM_H_

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
#include "services/device/public/mojom/public_ip_address_geolocation_provider.mojom-shared.h"
#include "services/device/public/mojom/public_ip_address_geolocation_provider.mojom-forward.h"
#include "services/network/public/mojom/mutable_partial_network_traffic_annotation_tag.mojom-forward.h"
#include "services/device/public/mojom/geolocation.mojom-forward.h"
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




namespace device {
namespace mojom {

class PublicIpAddressGeolocationProviderProxy;

template <typename ImplRefTraits>
class PublicIpAddressGeolocationProviderStub;

class PublicIpAddressGeolocationProviderRequestValidator;


class  PublicIpAddressGeolocationProvider
    : public PublicIpAddressGeolocationProviderInterfaceBase {
 public:
  static const char Name_[];
  static constexpr uint32_t Version_ = 0;
  static constexpr bool PassesAssociatedKinds_ = false;
  static constexpr bool HasSyncMethods_ = false;

  using Base_ = PublicIpAddressGeolocationProviderInterfaceBase;
  using Proxy_ = PublicIpAddressGeolocationProviderProxy;

  template <typename ImplRefTraits>
  using Stub_ = PublicIpAddressGeolocationProviderStub<ImplRefTraits>;

  using RequestValidator_ = PublicIpAddressGeolocationProviderRequestValidator;
  using ResponseValidator_ = mojo::PassThroughFilter;
  enum MethodMinVersions : uint32_t {
    kCreateGeolocationMinVersion = 0,
  };
  virtual ~PublicIpAddressGeolocationProvider() {}

  
  virtual void CreateGeolocation(const net::MutablePartialNetworkTrafficAnnotationTag& tag, ::device::mojom::GeolocationRequest request) = 0;
};

class  PublicIpAddressGeolocationProviderProxy
    : public PublicIpAddressGeolocationProvider {
 public:
  using InterfaceType = PublicIpAddressGeolocationProvider;

  explicit PublicIpAddressGeolocationProviderProxy(mojo::MessageReceiverWithResponder* receiver);
  void CreateGeolocation(const net::MutablePartialNetworkTrafficAnnotationTag& tag, ::device::mojom::GeolocationRequest request) final;

 private:
  mojo::MessageReceiverWithResponder* receiver_;
};
class  PublicIpAddressGeolocationProviderStubDispatch {
 public:
  static bool Accept(PublicIpAddressGeolocationProvider* impl, mojo::Message* message);
  static bool AcceptWithResponder(
      PublicIpAddressGeolocationProvider* impl,
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder);
};

template <typename ImplRefTraits =
              mojo::RawPtrImplRefTraits<PublicIpAddressGeolocationProvider>>
class PublicIpAddressGeolocationProviderStub
    : public mojo::MessageReceiverWithResponderStatus {
 public:
  using ImplPointerType = typename ImplRefTraits::PointerType;

  PublicIpAddressGeolocationProviderStub() {}
  ~PublicIpAddressGeolocationProviderStub() override {}

  void set_sink(ImplPointerType sink) { sink_ = std::move(sink); }
  ImplPointerType& sink() { return sink_; }

  bool Accept(mojo::Message* message) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return PublicIpAddressGeolocationProviderStubDispatch::Accept(
        ImplRefTraits::GetRawPointer(&sink_), message);
  }

  bool AcceptWithResponder(
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return PublicIpAddressGeolocationProviderStubDispatch::AcceptWithResponder(
        ImplRefTraits::GetRawPointer(&sink_), message, std::move(responder));
  }

 private:
  ImplPointerType sink_;
};
class  PublicIpAddressGeolocationProviderRequestValidator : public mojo::MessageReceiver {
 public:
  bool Accept(mojo::Message* message) override;
};





}  // namespace mojom
}  // namespace device

namespace mojo {

}  // namespace mojo

#endif  // SERVICES_DEVICE_PUBLIC_MOJOM_PUBLIC_IP_ADDRESS_GEOLOCATION_PROVIDER_MOJOM_H_