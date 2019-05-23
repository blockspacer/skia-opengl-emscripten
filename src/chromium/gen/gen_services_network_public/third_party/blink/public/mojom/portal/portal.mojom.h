// Copyright 2013 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef THIRD_PARTY_BLINK_PUBLIC_MOJOM_PORTAL_PORTAL_MOJOM_H_
#define THIRD_PARTY_BLINK_PUBLIC_MOJOM_PORTAL_PORTAL_MOJOM_H_

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
#include "third_party/blink/public/mojom/portal/portal.mojom-shared.h"
#include "third_party/blink/public/mojom/portal/portal.mojom-forward.h"
#include "mojo/public/mojom/base/unguessable_token.mojom-forward.h"
#include "third_party/blink/public/mojom/messaging/transferable_message.mojom-forward.h"
#include "url/mojom/origin.mojom-forward.h"
#include "url/mojom/url.mojom-forward.h"
#include "url/mojom/origin.mojom-forward.h"
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

class PortalProxy;

template <typename ImplRefTraits>
class PortalStub;

class PortalRequestValidator;
class PortalResponseValidator;


class BLINK_COMMON_EXPORT Portal
    : public PortalInterfaceBase {
 public:
  static const char Name_[];
  static constexpr uint32_t Version_ = 0;
  static constexpr bool PassesAssociatedKinds_ = false;
  static constexpr bool HasSyncMethods_ = false;

  using Base_ = PortalInterfaceBase;
  using Proxy_ = PortalProxy;

  template <typename ImplRefTraits>
  using Stub_ = PortalStub<ImplRefTraits>;

  using RequestValidator_ = PortalRequestValidator;
  using ResponseValidator_ = PortalResponseValidator;
  enum MethodMinVersions : uint32_t {
    kNavigateMinVersion = 0,
    kActivateMinVersion = 0,
    kPostMessageToGuestMinVersion = 0,
  };
  virtual ~Portal() {}

  
  virtual void Navigate(const GURL& url) = 0;


  using ActivateCallback = base::OnceCallback<void(bool)>;
  
  virtual void Activate(::blink::TransferableMessage data, ActivateCallback callback) = 0;

  
  virtual void PostMessageToGuest(::blink::TransferableMessage message, const base::Optional<url::Origin>& target_origin) = 0;
};

class PortalClientProxy;

template <typename ImplRefTraits>
class PortalClientStub;

class PortalClientRequestValidator;


class BLINK_COMMON_EXPORT PortalClient
    : public PortalClientInterfaceBase {
 public:
  static const char Name_[];
  static constexpr uint32_t Version_ = 0;
  static constexpr bool PassesAssociatedKinds_ = false;
  static constexpr bool HasSyncMethods_ = false;

  using Base_ = PortalClientInterfaceBase;
  using Proxy_ = PortalClientProxy;

  template <typename ImplRefTraits>
  using Stub_ = PortalClientStub<ImplRefTraits>;

  using RequestValidator_ = PortalClientRequestValidator;
  using ResponseValidator_ = mojo::PassThroughFilter;
  enum MethodMinVersions : uint32_t {
    kForwardMessageFromGuestMinVersion = 0,
    kDispatchLoadEventMinVersion = 0,
  };
  virtual ~PortalClient() {}

  
  virtual void ForwardMessageFromGuest(::blink::TransferableMessage message, const url::Origin& source_origin, const base::Optional<url::Origin>& target_origin) = 0;

  
  virtual void DispatchLoadEvent() = 0;
};

class PortalHostProxy;

template <typename ImplRefTraits>
class PortalHostStub;

class PortalHostRequestValidator;


class BLINK_COMMON_EXPORT PortalHost
    : public PortalHostInterfaceBase {
 public:
  static const char Name_[];
  static constexpr uint32_t Version_ = 0;
  static constexpr bool PassesAssociatedKinds_ = false;
  static constexpr bool HasSyncMethods_ = false;

  using Base_ = PortalHostInterfaceBase;
  using Proxy_ = PortalHostProxy;

  template <typename ImplRefTraits>
  using Stub_ = PortalHostStub<ImplRefTraits>;

  using RequestValidator_ = PortalHostRequestValidator;
  using ResponseValidator_ = mojo::PassThroughFilter;
  enum MethodMinVersions : uint32_t {
    kPostMessageToHostMinVersion = 0,
  };
  virtual ~PortalHost() {}

  
  virtual void PostMessageToHost(::blink::TransferableMessage message, const base::Optional<url::Origin>& target_origin) = 0;
};

class BLINK_COMMON_EXPORT PortalProxy
    : public Portal {
 public:
  using InterfaceType = Portal;

  explicit PortalProxy(mojo::MessageReceiverWithResponder* receiver);
  void Navigate(const GURL& url) final;
  void Activate(::blink::TransferableMessage data, ActivateCallback callback) final;
  void PostMessageToGuest(::blink::TransferableMessage message, const base::Optional<url::Origin>& target_origin) final;

 private:
  mojo::MessageReceiverWithResponder* receiver_;
};

class BLINK_COMMON_EXPORT PortalClientProxy
    : public PortalClient {
 public:
  using InterfaceType = PortalClient;

  explicit PortalClientProxy(mojo::MessageReceiverWithResponder* receiver);
  void ForwardMessageFromGuest(::blink::TransferableMessage message, const url::Origin& source_origin, const base::Optional<url::Origin>& target_origin) final;
  void DispatchLoadEvent() final;

 private:
  mojo::MessageReceiverWithResponder* receiver_;
};

class BLINK_COMMON_EXPORT PortalHostProxy
    : public PortalHost {
 public:
  using InterfaceType = PortalHost;

  explicit PortalHostProxy(mojo::MessageReceiverWithResponder* receiver);
  void PostMessageToHost(::blink::TransferableMessage message, const base::Optional<url::Origin>& target_origin) final;

 private:
  mojo::MessageReceiverWithResponder* receiver_;
};
class BLINK_COMMON_EXPORT PortalStubDispatch {
 public:
  static bool Accept(Portal* impl, mojo::Message* message);
  static bool AcceptWithResponder(
      Portal* impl,
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder);
};

template <typename ImplRefTraits =
              mojo::RawPtrImplRefTraits<Portal>>
class PortalStub
    : public mojo::MessageReceiverWithResponderStatus {
 public:
  using ImplPointerType = typename ImplRefTraits::PointerType;

  PortalStub() {}
  ~PortalStub() override {}

  void set_sink(ImplPointerType sink) { sink_ = std::move(sink); }
  ImplPointerType& sink() { return sink_; }

  bool Accept(mojo::Message* message) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return PortalStubDispatch::Accept(
        ImplRefTraits::GetRawPointer(&sink_), message);
  }

  bool AcceptWithResponder(
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return PortalStubDispatch::AcceptWithResponder(
        ImplRefTraits::GetRawPointer(&sink_), message, std::move(responder));
  }

 private:
  ImplPointerType sink_;
};
class BLINK_COMMON_EXPORT PortalClientStubDispatch {
 public:
  static bool Accept(PortalClient* impl, mojo::Message* message);
  static bool AcceptWithResponder(
      PortalClient* impl,
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder);
};

template <typename ImplRefTraits =
              mojo::RawPtrImplRefTraits<PortalClient>>
class PortalClientStub
    : public mojo::MessageReceiverWithResponderStatus {
 public:
  using ImplPointerType = typename ImplRefTraits::PointerType;

  PortalClientStub() {}
  ~PortalClientStub() override {}

  void set_sink(ImplPointerType sink) { sink_ = std::move(sink); }
  ImplPointerType& sink() { return sink_; }

  bool Accept(mojo::Message* message) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return PortalClientStubDispatch::Accept(
        ImplRefTraits::GetRawPointer(&sink_), message);
  }

  bool AcceptWithResponder(
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return PortalClientStubDispatch::AcceptWithResponder(
        ImplRefTraits::GetRawPointer(&sink_), message, std::move(responder));
  }

 private:
  ImplPointerType sink_;
};
class BLINK_COMMON_EXPORT PortalHostStubDispatch {
 public:
  static bool Accept(PortalHost* impl, mojo::Message* message);
  static bool AcceptWithResponder(
      PortalHost* impl,
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder);
};

template <typename ImplRefTraits =
              mojo::RawPtrImplRefTraits<PortalHost>>
class PortalHostStub
    : public mojo::MessageReceiverWithResponderStatus {
 public:
  using ImplPointerType = typename ImplRefTraits::PointerType;

  PortalHostStub() {}
  ~PortalHostStub() override {}

  void set_sink(ImplPointerType sink) { sink_ = std::move(sink); }
  ImplPointerType& sink() { return sink_; }

  bool Accept(mojo::Message* message) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return PortalHostStubDispatch::Accept(
        ImplRefTraits::GetRawPointer(&sink_), message);
  }

  bool AcceptWithResponder(
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return PortalHostStubDispatch::AcceptWithResponder(
        ImplRefTraits::GetRawPointer(&sink_), message, std::move(responder));
  }

 private:
  ImplPointerType sink_;
};
class BLINK_COMMON_EXPORT PortalRequestValidator : public mojo::MessageReceiver {
 public:
  bool Accept(mojo::Message* message) override;
};
class BLINK_COMMON_EXPORT PortalClientRequestValidator : public mojo::MessageReceiver {
 public:
  bool Accept(mojo::Message* message) override;
};
class BLINK_COMMON_EXPORT PortalHostRequestValidator : public mojo::MessageReceiver {
 public:
  bool Accept(mojo::Message* message) override;
};
class BLINK_COMMON_EXPORT PortalResponseValidator : public mojo::MessageReceiver {
 public:
  bool Accept(mojo::Message* message) override;
};





}  // namespace mojom
}  // namespace blink

namespace mojo {

}  // namespace mojo

#endif  // THIRD_PARTY_BLINK_PUBLIC_MOJOM_PORTAL_PORTAL_MOJOM_H_