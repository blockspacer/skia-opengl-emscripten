// Copyright 2013 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef MOJO_PUBLIC_INTERFACES_BINDINGS_TESTS_PING_SERVICE_MOJOM_BLINK_H_
#define MOJO_PUBLIC_INTERFACES_BINDINGS_TESTS_PING_SERVICE_MOJOM_BLINK_H_

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
#include "mojo/public/interfaces/bindings/tests/ping_service.mojom-shared.h"
#include "mojo/public/interfaces/bindings/tests/ping_service.mojom-blink-forward.h"

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




namespace mojo {
namespace test {
namespace blink {

class PingServiceProxy;

template <typename ImplRefTraits>
class PingServiceStub;

class PingServiceRequestValidator;
class PingServiceResponseValidator;


class  PingService
    : public PingServiceInterfaceBase {
 public:
  static const char Name_[];
  static constexpr uint32_t Version_ = 0;
  static constexpr bool PassesAssociatedKinds_ = false;
  static constexpr bool HasSyncMethods_ = true;

  using Base_ = PingServiceInterfaceBase;
  using Proxy_ = PingServiceProxy;

  template <typename ImplRefTraits>
  using Stub_ = PingServiceStub<ImplRefTraits>;

  using RequestValidator_ = PingServiceRequestValidator;
  using ResponseValidator_ = PingServiceResponseValidator;
  enum MethodMinVersions : uint32_t {
    kPingMinVersion = 0,
  };
  virtual ~PingService() {}

  // Sync method. This signature is used by the client side; the service side
  // should implement the signature with callback below.
  
  virtual bool Ping();

  using PingCallback = base::OnceCallback<void()>;
  
  virtual void Ping(PingCallback callback) = 0;
};

class EchoServiceProxy;

template <typename ImplRefTraits>
class EchoServiceStub;

class EchoServiceRequestValidator;
class EchoServiceResponseValidator;


class  EchoService
    : public EchoServiceInterfaceBase {
 public:
  static const char Name_[];
  static constexpr uint32_t Version_ = 0;
  static constexpr bool PassesAssociatedKinds_ = false;
  static constexpr bool HasSyncMethods_ = false;

  using Base_ = EchoServiceInterfaceBase;
  using Proxy_ = EchoServiceProxy;

  template <typename ImplRefTraits>
  using Stub_ = EchoServiceStub<ImplRefTraits>;

  using RequestValidator_ = EchoServiceRequestValidator;
  using ResponseValidator_ = EchoServiceResponseValidator;
  enum MethodMinVersions : uint32_t {
    kEchoMinVersion = 0,
  };
  virtual ~EchoService() {}


  using EchoCallback = base::OnceCallback<void(const WTF::String&)>;
  
  virtual void Echo(const WTF::String& test_data, EchoCallback callback) = 0;
};

class HandleTrampolineProxy;

template <typename ImplRefTraits>
class HandleTrampolineStub;

class HandleTrampolineRequestValidator;
class HandleTrampolineResponseValidator;


class  HandleTrampoline
    : public HandleTrampolineInterfaceBase {
 public:
  static const char Name_[];
  static constexpr uint32_t Version_ = 0;
  static constexpr bool PassesAssociatedKinds_ = false;
  static constexpr bool HasSyncMethods_ = false;

  using Base_ = HandleTrampolineInterfaceBase;
  using Proxy_ = HandleTrampolineProxy;

  template <typename ImplRefTraits>
  using Stub_ = HandleTrampolineStub<ImplRefTraits>;

  using RequestValidator_ = HandleTrampolineRequestValidator;
  using ResponseValidator_ = HandleTrampolineResponseValidator;
  enum MethodMinVersions : uint32_t {
    kBounceOneMinVersion = 0,
    kBounceTwoMinVersion = 0,
  };
  virtual ~HandleTrampoline() {}


  using BounceOneCallback = base::OnceCallback<void(mojo::ScopedMessagePipeHandle)>;
  
  virtual void BounceOne(mojo::ScopedMessagePipeHandle one, BounceOneCallback callback) = 0;


  using BounceTwoCallback = base::OnceCallback<void(mojo::ScopedMessagePipeHandle, mojo::ScopedMessagePipeHandle)>;
  
  virtual void BounceTwo(mojo::ScopedMessagePipeHandle one, mojo::ScopedMessagePipeHandle two, BounceTwoCallback callback) = 0;
};

class  PingServiceProxy
    : public PingService {
 public:
  using InterfaceType = PingService;

  explicit PingServiceProxy(mojo::MessageReceiverWithResponder* receiver);
  bool Ping() final;
  void Ping(PingCallback callback) final;

 private:
  mojo::MessageReceiverWithResponder* receiver_;
};

class  EchoServiceProxy
    : public EchoService {
 public:
  using InterfaceType = EchoService;

  explicit EchoServiceProxy(mojo::MessageReceiverWithResponder* receiver);
  void Echo(const WTF::String& test_data, EchoCallback callback) final;

 private:
  mojo::MessageReceiverWithResponder* receiver_;
};

class  HandleTrampolineProxy
    : public HandleTrampoline {
 public:
  using InterfaceType = HandleTrampoline;

  explicit HandleTrampolineProxy(mojo::MessageReceiverWithResponder* receiver);
  void BounceOne(mojo::ScopedMessagePipeHandle one, BounceOneCallback callback) final;
  void BounceTwo(mojo::ScopedMessagePipeHandle one, mojo::ScopedMessagePipeHandle two, BounceTwoCallback callback) final;

 private:
  mojo::MessageReceiverWithResponder* receiver_;
};
class  PingServiceStubDispatch {
 public:
  static bool Accept(PingService* impl, mojo::Message* message);
  static bool AcceptWithResponder(
      PingService* impl,
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder);
};

template <typename ImplRefTraits =
              mojo::RawPtrImplRefTraits<PingService>>
class PingServiceStub
    : public mojo::MessageReceiverWithResponderStatus {
 public:
  using ImplPointerType = typename ImplRefTraits::PointerType;

  PingServiceStub() {}
  ~PingServiceStub() override {}

  void set_sink(ImplPointerType sink) { sink_ = std::move(sink); }
  ImplPointerType& sink() { return sink_; }

  bool Accept(mojo::Message* message) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return PingServiceStubDispatch::Accept(
        ImplRefTraits::GetRawPointer(&sink_), message);
  }

  bool AcceptWithResponder(
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return PingServiceStubDispatch::AcceptWithResponder(
        ImplRefTraits::GetRawPointer(&sink_), message, std::move(responder));
  }

 private:
  ImplPointerType sink_;
};
class  EchoServiceStubDispatch {
 public:
  static bool Accept(EchoService* impl, mojo::Message* message);
  static bool AcceptWithResponder(
      EchoService* impl,
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder);
};

template <typename ImplRefTraits =
              mojo::RawPtrImplRefTraits<EchoService>>
class EchoServiceStub
    : public mojo::MessageReceiverWithResponderStatus {
 public:
  using ImplPointerType = typename ImplRefTraits::PointerType;

  EchoServiceStub() {}
  ~EchoServiceStub() override {}

  void set_sink(ImplPointerType sink) { sink_ = std::move(sink); }
  ImplPointerType& sink() { return sink_; }

  bool Accept(mojo::Message* message) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return EchoServiceStubDispatch::Accept(
        ImplRefTraits::GetRawPointer(&sink_), message);
  }

  bool AcceptWithResponder(
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return EchoServiceStubDispatch::AcceptWithResponder(
        ImplRefTraits::GetRawPointer(&sink_), message, std::move(responder));
  }

 private:
  ImplPointerType sink_;
};
class  HandleTrampolineStubDispatch {
 public:
  static bool Accept(HandleTrampoline* impl, mojo::Message* message);
  static bool AcceptWithResponder(
      HandleTrampoline* impl,
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder);
};

template <typename ImplRefTraits =
              mojo::RawPtrImplRefTraits<HandleTrampoline>>
class HandleTrampolineStub
    : public mojo::MessageReceiverWithResponderStatus {
 public:
  using ImplPointerType = typename ImplRefTraits::PointerType;

  HandleTrampolineStub() {}
  ~HandleTrampolineStub() override {}

  void set_sink(ImplPointerType sink) { sink_ = std::move(sink); }
  ImplPointerType& sink() { return sink_; }

  bool Accept(mojo::Message* message) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return HandleTrampolineStubDispatch::Accept(
        ImplRefTraits::GetRawPointer(&sink_), message);
  }

  bool AcceptWithResponder(
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return HandleTrampolineStubDispatch::AcceptWithResponder(
        ImplRefTraits::GetRawPointer(&sink_), message, std::move(responder));
  }

 private:
  ImplPointerType sink_;
};
class  PingServiceRequestValidator : public mojo::MessageReceiver {
 public:
  bool Accept(mojo::Message* message) override;
};
class  EchoServiceRequestValidator : public mojo::MessageReceiver {
 public:
  bool Accept(mojo::Message* message) override;
};
class  HandleTrampolineRequestValidator : public mojo::MessageReceiver {
 public:
  bool Accept(mojo::Message* message) override;
};
class  PingServiceResponseValidator : public mojo::MessageReceiver {
 public:
  bool Accept(mojo::Message* message) override;
};
class  EchoServiceResponseValidator : public mojo::MessageReceiver {
 public:
  bool Accept(mojo::Message* message) override;
};
class  HandleTrampolineResponseValidator : public mojo::MessageReceiver {
 public:
  bool Accept(mojo::Message* message) override;
};





}  // namespace blink
}  // namespace test
}  // namespace mojo

namespace mojo {

}  // namespace mojo

#endif  // MOJO_PUBLIC_INTERFACES_BINDINGS_TESTS_PING_SERVICE_MOJOM_BLINK_H_