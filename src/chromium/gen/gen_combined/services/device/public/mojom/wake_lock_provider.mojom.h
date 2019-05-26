// Copyright 2013 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef SERVICES_DEVICE_PUBLIC_MOJOM_WAKE_LOCK_PROVIDER_MOJOM_H_
#define SERVICES_DEVICE_PUBLIC_MOJOM_WAKE_LOCK_PROVIDER_MOJOM_H_

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
#include "services/device/public/mojom/wake_lock_provider.mojom-shared.h"
#include "services/device/public/mojom/wake_lock_provider.mojom-forward.h"
#include "services/device/public/mojom/wake_lock_context.mojom-forward.h"
#include "services/device/public/mojom/wake_lock.mojom-forward.h"
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

class WakeLockProviderProxy;

template <typename ImplRefTraits>
class WakeLockProviderStub;

class WakeLockProviderRequestValidator;
class WakeLockProviderResponseValidator;


class  WakeLockProvider
    : public WakeLockProviderInterfaceBase {
 public:
  static const char Name_[];
  static constexpr uint32_t Version_ = 0;
  static constexpr bool PassesAssociatedKinds_ = false;
  static constexpr bool HasSyncMethods_ = false;

  using Base_ = WakeLockProviderInterfaceBase;
  using Proxy_ = WakeLockProviderProxy;

  template <typename ImplRefTraits>
  using Stub_ = WakeLockProviderStub<ImplRefTraits>;

  using RequestValidator_ = WakeLockProviderRequestValidator;
  using ResponseValidator_ = WakeLockProviderResponseValidator;
  enum MethodMinVersions : uint32_t {
    kGetWakeLockContextForIDMinVersion = 0,
    kGetWakeLockWithoutContextMinVersion = 0,
    kNotifyOnWakeLockDeactivationMinVersion = 0,
    kGetActiveWakeLocksForTestsMinVersion = 0,
  };
  virtual ~WakeLockProvider() {}

  
  virtual void GetWakeLockContextForID(int32_t context_id, ::device::mojom::WakeLockContextRequest context) = 0;

  
  virtual void GetWakeLockWithoutContext(::device::mojom::WakeLockType type, ::device::mojom::WakeLockReason reason, const std::string& description, ::device::mojom::WakeLockRequest wake_lock) = 0;

  
  virtual void NotifyOnWakeLockDeactivation(::device::mojom::WakeLockType type, WakeLockObserverPtr observer) = 0;


  using GetActiveWakeLocksForTestsCallback = base::OnceCallback<void(int32_t)>;
  
  virtual void GetActiveWakeLocksForTests(::device::mojom::WakeLockType type, GetActiveWakeLocksForTestsCallback callback) = 0;
};

class WakeLockObserverProxy;

template <typename ImplRefTraits>
class WakeLockObserverStub;

class WakeLockObserverRequestValidator;


class  WakeLockObserver
    : public WakeLockObserverInterfaceBase {
 public:
  static const char Name_[];
  static constexpr uint32_t Version_ = 0;
  static constexpr bool PassesAssociatedKinds_ = false;
  static constexpr bool HasSyncMethods_ = false;

  using Base_ = WakeLockObserverInterfaceBase;
  using Proxy_ = WakeLockObserverProxy;

  template <typename ImplRefTraits>
  using Stub_ = WakeLockObserverStub<ImplRefTraits>;

  using RequestValidator_ = WakeLockObserverRequestValidator;
  using ResponseValidator_ = mojo::PassThroughFilter;
  enum MethodMinVersions : uint32_t {
    kOnWakeLockDeactivatedMinVersion = 0,
  };
  virtual ~WakeLockObserver() {}

  
  virtual void OnWakeLockDeactivated(::device::mojom::WakeLockType type) = 0;
};

class  WakeLockProviderProxy
    : public WakeLockProvider {
 public:
  using InterfaceType = WakeLockProvider;

  explicit WakeLockProviderProxy(mojo::MessageReceiverWithResponder* receiver);
  void GetWakeLockContextForID(int32_t context_id, ::device::mojom::WakeLockContextRequest context) final;
  void GetWakeLockWithoutContext(::device::mojom::WakeLockType type, ::device::mojom::WakeLockReason reason, const std::string& description, ::device::mojom::WakeLockRequest wake_lock) final;
  void NotifyOnWakeLockDeactivation(::device::mojom::WakeLockType type, WakeLockObserverPtr observer) final;
  void GetActiveWakeLocksForTests(::device::mojom::WakeLockType type, GetActiveWakeLocksForTestsCallback callback) final;

 private:
  mojo::MessageReceiverWithResponder* receiver_;
};

class  WakeLockObserverProxy
    : public WakeLockObserver {
 public:
  using InterfaceType = WakeLockObserver;

  explicit WakeLockObserverProxy(mojo::MessageReceiverWithResponder* receiver);
  void OnWakeLockDeactivated(::device::mojom::WakeLockType type) final;

 private:
  mojo::MessageReceiverWithResponder* receiver_;
};
class  WakeLockProviderStubDispatch {
 public:
  static bool Accept(WakeLockProvider* impl, mojo::Message* message);
  static bool AcceptWithResponder(
      WakeLockProvider* impl,
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder);
};

template <typename ImplRefTraits =
              mojo::RawPtrImplRefTraits<WakeLockProvider>>
class WakeLockProviderStub
    : public mojo::MessageReceiverWithResponderStatus {
 public:
  using ImplPointerType = typename ImplRefTraits::PointerType;

  WakeLockProviderStub() {}
  ~WakeLockProviderStub() override {}

  void set_sink(ImplPointerType sink) { sink_ = std::move(sink); }
  ImplPointerType& sink() { return sink_; }

  bool Accept(mojo::Message* message) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return WakeLockProviderStubDispatch::Accept(
        ImplRefTraits::GetRawPointer(&sink_), message);
  }

  bool AcceptWithResponder(
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return WakeLockProviderStubDispatch::AcceptWithResponder(
        ImplRefTraits::GetRawPointer(&sink_), message, std::move(responder));
  }

 private:
  ImplPointerType sink_;
};
class  WakeLockObserverStubDispatch {
 public:
  static bool Accept(WakeLockObserver* impl, mojo::Message* message);
  static bool AcceptWithResponder(
      WakeLockObserver* impl,
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder);
};

template <typename ImplRefTraits =
              mojo::RawPtrImplRefTraits<WakeLockObserver>>
class WakeLockObserverStub
    : public mojo::MessageReceiverWithResponderStatus {
 public:
  using ImplPointerType = typename ImplRefTraits::PointerType;

  WakeLockObserverStub() {}
  ~WakeLockObserverStub() override {}

  void set_sink(ImplPointerType sink) { sink_ = std::move(sink); }
  ImplPointerType& sink() { return sink_; }

  bool Accept(mojo::Message* message) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return WakeLockObserverStubDispatch::Accept(
        ImplRefTraits::GetRawPointer(&sink_), message);
  }

  bool AcceptWithResponder(
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return WakeLockObserverStubDispatch::AcceptWithResponder(
        ImplRefTraits::GetRawPointer(&sink_), message, std::move(responder));
  }

 private:
  ImplPointerType sink_;
};
class  WakeLockProviderRequestValidator : public mojo::MessageReceiver {
 public:
  bool Accept(mojo::Message* message) override;
};
class  WakeLockObserverRequestValidator : public mojo::MessageReceiver {
 public:
  bool Accept(mojo::Message* message) override;
};
class  WakeLockProviderResponseValidator : public mojo::MessageReceiver {
 public:
  bool Accept(mojo::Message* message) override;
};





}  // namespace mojom
}  // namespace device

namespace mojo {

}  // namespace mojo

#endif  // SERVICES_DEVICE_PUBLIC_MOJOM_WAKE_LOCK_PROVIDER_MOJOM_H_