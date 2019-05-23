// Copyright 2013 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef SERVICES_NETWORK_PUBLIC_MOJOM_PROXY_LOOKUP_CLIENT_MOJOM_H_
#define SERVICES_NETWORK_PUBLIC_MOJOM_PROXY_LOOKUP_CLIENT_MOJOM_H_

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
#include "services/network/public/mojom/proxy_lookup_client.mojom-shared.h"
#include "services/network/public/mojom/proxy_lookup_client.mojom-forward.h"
#include "url/mojom/url.mojom-forward.h"
#include "services/proxy_resolver/public/mojom/proxy_resolver.mojom-forward.h"
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




namespace network {
namespace mojom {

class ProxyLookupClientProxy;

template <typename ImplRefTraits>
class ProxyLookupClientStub;

class ProxyLookupClientRequestValidator;


class  ProxyLookupClient
    : public ProxyLookupClientInterfaceBase {
 public:
  static const char Name_[];
  static constexpr uint32_t Version_ = 0;
  static constexpr bool PassesAssociatedKinds_ = false;
  static constexpr bool HasSyncMethods_ = false;

  using Base_ = ProxyLookupClientInterfaceBase;
  using Proxy_ = ProxyLookupClientProxy;

  template <typename ImplRefTraits>
  using Stub_ = ProxyLookupClientStub<ImplRefTraits>;

  using RequestValidator_ = ProxyLookupClientRequestValidator;
  using ResponseValidator_ = mojo::PassThroughFilter;
  enum MethodMinVersions : uint32_t {
    kOnProxyLookupCompleteMinVersion = 0,
  };
  virtual ~ProxyLookupClient() {}

  
  virtual void OnProxyLookupComplete(int32_t net_error, const base::Optional<net::ProxyInfo>& proxy_info) = 0;
};

class  ProxyLookupClientProxy
    : public ProxyLookupClient {
 public:
  using InterfaceType = ProxyLookupClient;

  explicit ProxyLookupClientProxy(mojo::MessageReceiverWithResponder* receiver);
  void OnProxyLookupComplete(int32_t net_error, const base::Optional<net::ProxyInfo>& proxy_info) final;

 private:
  mojo::MessageReceiverWithResponder* receiver_;
};
class  ProxyLookupClientStubDispatch {
 public:
  static bool Accept(ProxyLookupClient* impl, mojo::Message* message);
  static bool AcceptWithResponder(
      ProxyLookupClient* impl,
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder);
};

template <typename ImplRefTraits =
              mojo::RawPtrImplRefTraits<ProxyLookupClient>>
class ProxyLookupClientStub
    : public mojo::MessageReceiverWithResponderStatus {
 public:
  using ImplPointerType = typename ImplRefTraits::PointerType;

  ProxyLookupClientStub() {}
  ~ProxyLookupClientStub() override {}

  void set_sink(ImplPointerType sink) { sink_ = std::move(sink); }
  ImplPointerType& sink() { return sink_; }

  bool Accept(mojo::Message* message) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return ProxyLookupClientStubDispatch::Accept(
        ImplRefTraits::GetRawPointer(&sink_), message);
  }

  bool AcceptWithResponder(
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return ProxyLookupClientStubDispatch::AcceptWithResponder(
        ImplRefTraits::GetRawPointer(&sink_), message, std::move(responder));
  }

 private:
  ImplPointerType sink_;
};
class  ProxyLookupClientRequestValidator : public mojo::MessageReceiver {
 public:
  bool Accept(mojo::Message* message) override;
};





}  // namespace mojom
}  // namespace network

namespace mojo {

}  // namespace mojo

#endif  // SERVICES_NETWORK_PUBLIC_MOJOM_PROXY_LOOKUP_CLIENT_MOJOM_H_