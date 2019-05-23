// Copyright 2013 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef SERVICES_NETWORK_PUBLIC_MOJOM_MDNS_RESPONDER_MOJOM_H_
#define SERVICES_NETWORK_PUBLIC_MOJOM_MDNS_RESPONDER_MOJOM_H_

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
#include "services/network/public/mojom/mdns_responder.mojom-shared.h"
#include "services/network/public/mojom/mdns_responder.mojom-forward.h"
#include "services/network/public/mojom/ip_address.mojom-forward.h"
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

class MdnsResponderProxy;

template <typename ImplRefTraits>
class MdnsResponderStub;

class MdnsResponderRequestValidator;
class MdnsResponderResponseValidator;


class  MdnsResponder
    : public MdnsResponderInterfaceBase {
 public:
  static const char Name_[];
  static constexpr uint32_t Version_ = 0;
  static constexpr bool PassesAssociatedKinds_ = false;
  static constexpr bool HasSyncMethods_ = false;

  using Base_ = MdnsResponderInterfaceBase;
  using Proxy_ = MdnsResponderProxy;

  template <typename ImplRefTraits>
  using Stub_ = MdnsResponderStub<ImplRefTraits>;

  using RequestValidator_ = MdnsResponderRequestValidator;
  using ResponseValidator_ = MdnsResponderResponseValidator;
  enum MethodMinVersions : uint32_t {
    kCreateNameForAddressMinVersion = 0,
    kRemoveNameForAddressMinVersion = 0,
  };
  virtual ~MdnsResponder() {}


  using CreateNameForAddressCallback = base::OnceCallback<void(const std::string&, bool)>;
  
  virtual void CreateNameForAddress(const net::IPAddress& address, CreateNameForAddressCallback callback) = 0;


  using RemoveNameForAddressCallback = base::OnceCallback<void(bool, bool)>;
  
  virtual void RemoveNameForAddress(const net::IPAddress& address, RemoveNameForAddressCallback callback) = 0;
};

class  MdnsResponderProxy
    : public MdnsResponder {
 public:
  using InterfaceType = MdnsResponder;

  explicit MdnsResponderProxy(mojo::MessageReceiverWithResponder* receiver);
  void CreateNameForAddress(const net::IPAddress& address, CreateNameForAddressCallback callback) final;
  void RemoveNameForAddress(const net::IPAddress& address, RemoveNameForAddressCallback callback) final;

 private:
  mojo::MessageReceiverWithResponder* receiver_;
};
class  MdnsResponderStubDispatch {
 public:
  static bool Accept(MdnsResponder* impl, mojo::Message* message);
  static bool AcceptWithResponder(
      MdnsResponder* impl,
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder);
};

template <typename ImplRefTraits =
              mojo::RawPtrImplRefTraits<MdnsResponder>>
class MdnsResponderStub
    : public mojo::MessageReceiverWithResponderStatus {
 public:
  using ImplPointerType = typename ImplRefTraits::PointerType;

  MdnsResponderStub() {}
  ~MdnsResponderStub() override {}

  void set_sink(ImplPointerType sink) { sink_ = std::move(sink); }
  ImplPointerType& sink() { return sink_; }

  bool Accept(mojo::Message* message) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return MdnsResponderStubDispatch::Accept(
        ImplRefTraits::GetRawPointer(&sink_), message);
  }

  bool AcceptWithResponder(
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return MdnsResponderStubDispatch::AcceptWithResponder(
        ImplRefTraits::GetRawPointer(&sink_), message, std::move(responder));
  }

 private:
  ImplPointerType sink_;
};
class  MdnsResponderRequestValidator : public mojo::MessageReceiver {
 public:
  bool Accept(mojo::Message* message) override;
};
class  MdnsResponderResponseValidator : public mojo::MessageReceiver {
 public:
  bool Accept(mojo::Message* message) override;
};





}  // namespace mojom
}  // namespace network

namespace mojo {

}  // namespace mojo

#endif  // SERVICES_NETWORK_PUBLIC_MOJOM_MDNS_RESPONDER_MOJOM_H_