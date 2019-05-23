// Copyright 2013 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef SERVICES_NETWORK_PUBLIC_MOJOM_P2P_TRUSTED_MOJOM_BLINK_H_
#define SERVICES_NETWORK_PUBLIC_MOJOM_P2P_TRUSTED_MOJOM_BLINK_H_

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
#include "services/network/public/mojom/p2p_trusted.mojom-shared.h"
#include "services/network/public/mojom/p2p_trusted.mojom-blink-forward.h"
#include "services/network/public/mojom/p2p.mojom-blink-forward.h"

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

class P2PTrustedSocketManagerClientProxy;

template <typename ImplRefTraits>
class P2PTrustedSocketManagerClientStub;

class P2PTrustedSocketManagerClientRequestValidator;


class BLINK_PLATFORM_EXPORT P2PTrustedSocketManagerClient
    : public P2PTrustedSocketManagerClientInterfaceBase {
 public:
  static const char Name_[];
  static constexpr uint32_t Version_ = 0;
  static constexpr bool PassesAssociatedKinds_ = false;
  static constexpr bool HasSyncMethods_ = false;

  using Base_ = P2PTrustedSocketManagerClientInterfaceBase;
  using Proxy_ = P2PTrustedSocketManagerClientProxy;

  template <typename ImplRefTraits>
  using Stub_ = P2PTrustedSocketManagerClientStub<ImplRefTraits>;

  using RequestValidator_ = P2PTrustedSocketManagerClientRequestValidator;
  using ResponseValidator_ = mojo::PassThroughFilter;
  enum MethodMinVersions : uint32_t {
    kInvalidSocketPortRangeRequestedMinVersion = 0,
    kDumpPacketMinVersion = 0,
  };
  virtual ~P2PTrustedSocketManagerClient() {}

  
  virtual void InvalidSocketPortRangeRequested() = 0;

  
  virtual void DumpPacket(const WTF::Vector<uint8_t>& packet_header, uint64_t packet_length, bool incoming) = 0;
};

class P2PTrustedSocketManagerProxy;

template <typename ImplRefTraits>
class P2PTrustedSocketManagerStub;

class P2PTrustedSocketManagerRequestValidator;


class BLINK_PLATFORM_EXPORT P2PTrustedSocketManager
    : public P2PTrustedSocketManagerInterfaceBase {
 public:
  static const char Name_[];
  static constexpr uint32_t Version_ = 0;
  static constexpr bool PassesAssociatedKinds_ = false;
  static constexpr bool HasSyncMethods_ = false;

  using Base_ = P2PTrustedSocketManagerInterfaceBase;
  using Proxy_ = P2PTrustedSocketManagerProxy;

  template <typename ImplRefTraits>
  using Stub_ = P2PTrustedSocketManagerStub<ImplRefTraits>;

  using RequestValidator_ = P2PTrustedSocketManagerRequestValidator;
  using ResponseValidator_ = mojo::PassThroughFilter;
  enum MethodMinVersions : uint32_t {
    kStartRtpDumpMinVersion = 0,
    kStopRtpDumpMinVersion = 0,
  };
  virtual ~P2PTrustedSocketManager() {}

  
  virtual void StartRtpDump(bool incoming, bool outgoing) = 0;

  
  virtual void StopRtpDump(bool incoming, bool outgoing) = 0;
};

class BLINK_PLATFORM_EXPORT P2PTrustedSocketManagerClientProxy
    : public P2PTrustedSocketManagerClient {
 public:
  using InterfaceType = P2PTrustedSocketManagerClient;

  explicit P2PTrustedSocketManagerClientProxy(mojo::MessageReceiverWithResponder* receiver);
  void InvalidSocketPortRangeRequested() final;
  void DumpPacket(const WTF::Vector<uint8_t>& packet_header, uint64_t packet_length, bool incoming) final;

 private:
  mojo::MessageReceiverWithResponder* receiver_;
};

class BLINK_PLATFORM_EXPORT P2PTrustedSocketManagerProxy
    : public P2PTrustedSocketManager {
 public:
  using InterfaceType = P2PTrustedSocketManager;

  explicit P2PTrustedSocketManagerProxy(mojo::MessageReceiverWithResponder* receiver);
  void StartRtpDump(bool incoming, bool outgoing) final;
  void StopRtpDump(bool incoming, bool outgoing) final;

 private:
  mojo::MessageReceiverWithResponder* receiver_;
};
class BLINK_PLATFORM_EXPORT P2PTrustedSocketManagerClientStubDispatch {
 public:
  static bool Accept(P2PTrustedSocketManagerClient* impl, mojo::Message* message);
  static bool AcceptWithResponder(
      P2PTrustedSocketManagerClient* impl,
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder);
};

template <typename ImplRefTraits =
              mojo::RawPtrImplRefTraits<P2PTrustedSocketManagerClient>>
class P2PTrustedSocketManagerClientStub
    : public mojo::MessageReceiverWithResponderStatus {
 public:
  using ImplPointerType = typename ImplRefTraits::PointerType;

  P2PTrustedSocketManagerClientStub() {}
  ~P2PTrustedSocketManagerClientStub() override {}

  void set_sink(ImplPointerType sink) { sink_ = std::move(sink); }
  ImplPointerType& sink() { return sink_; }

  bool Accept(mojo::Message* message) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return P2PTrustedSocketManagerClientStubDispatch::Accept(
        ImplRefTraits::GetRawPointer(&sink_), message);
  }

  bool AcceptWithResponder(
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return P2PTrustedSocketManagerClientStubDispatch::AcceptWithResponder(
        ImplRefTraits::GetRawPointer(&sink_), message, std::move(responder));
  }

 private:
  ImplPointerType sink_;
};
class BLINK_PLATFORM_EXPORT P2PTrustedSocketManagerStubDispatch {
 public:
  static bool Accept(P2PTrustedSocketManager* impl, mojo::Message* message);
  static bool AcceptWithResponder(
      P2PTrustedSocketManager* impl,
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder);
};

template <typename ImplRefTraits =
              mojo::RawPtrImplRefTraits<P2PTrustedSocketManager>>
class P2PTrustedSocketManagerStub
    : public mojo::MessageReceiverWithResponderStatus {
 public:
  using ImplPointerType = typename ImplRefTraits::PointerType;

  P2PTrustedSocketManagerStub() {}
  ~P2PTrustedSocketManagerStub() override {}

  void set_sink(ImplPointerType sink) { sink_ = std::move(sink); }
  ImplPointerType& sink() { return sink_; }

  bool Accept(mojo::Message* message) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return P2PTrustedSocketManagerStubDispatch::Accept(
        ImplRefTraits::GetRawPointer(&sink_), message);
  }

  bool AcceptWithResponder(
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return P2PTrustedSocketManagerStubDispatch::AcceptWithResponder(
        ImplRefTraits::GetRawPointer(&sink_), message, std::move(responder));
  }

 private:
  ImplPointerType sink_;
};
class BLINK_PLATFORM_EXPORT P2PTrustedSocketManagerClientRequestValidator : public mojo::MessageReceiver {
 public:
  bool Accept(mojo::Message* message) override;
};
class BLINK_PLATFORM_EXPORT P2PTrustedSocketManagerRequestValidator : public mojo::MessageReceiver {
 public:
  bool Accept(mojo::Message* message) override;
};





}  // namespace blink
}  // namespace mojom
}  // namespace network

namespace mojo {

}  // namespace mojo

#endif  // SERVICES_NETWORK_PUBLIC_MOJOM_P2P_TRUSTED_MOJOM_BLINK_H_