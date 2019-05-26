// Copyright 2013 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef SERVICES_DEVICE_PUBLIC_MOJOM_WAKE_LOCK_MOJOM_H_
#define SERVICES_DEVICE_PUBLIC_MOJOM_WAKE_LOCK_MOJOM_H_

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
#include "services/device/public/mojom/wake_lock.mojom-shared.h"
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

class WakeLockProxy;

template <typename ImplRefTraits>
class WakeLockStub;

class WakeLockRequestValidator;
class WakeLockResponseValidator;


class  WakeLock
    : public WakeLockInterfaceBase {
 public:
  static const char Name_[];
  static constexpr uint32_t Version_ = 0;
  static constexpr bool PassesAssociatedKinds_ = false;
  static constexpr bool HasSyncMethods_ = false;

  using Base_ = WakeLockInterfaceBase;
  using Proxy_ = WakeLockProxy;

  template <typename ImplRefTraits>
  using Stub_ = WakeLockStub<ImplRefTraits>;

  using RequestValidator_ = WakeLockRequestValidator;
  using ResponseValidator_ = WakeLockResponseValidator;
  enum MethodMinVersions : uint32_t {
    kRequestWakeLockMinVersion = 0,
    kCancelWakeLockMinVersion = 0,
    kAddClientMinVersion = 0,
    kChangeTypeMinVersion = 0,
    kHasWakeLockForTestsMinVersion = 0,
  };
  virtual ~WakeLock() {}

  
  virtual void RequestWakeLock() = 0;

  
  virtual void CancelWakeLock() = 0;

  
  virtual void AddClient(WakeLockRequest wake_lock) = 0;


  using ChangeTypeCallback = base::OnceCallback<void(bool)>;
  
  virtual void ChangeType(WakeLockType type, ChangeTypeCallback callback) = 0;


  using HasWakeLockForTestsCallback = base::OnceCallback<void(bool)>;
  
  virtual void HasWakeLockForTests(HasWakeLockForTestsCallback callback) = 0;
};

class  WakeLockProxy
    : public WakeLock {
 public:
  using InterfaceType = WakeLock;

  explicit WakeLockProxy(mojo::MessageReceiverWithResponder* receiver);
  void RequestWakeLock() final;
  void CancelWakeLock() final;
  void AddClient(WakeLockRequest wake_lock) final;
  void ChangeType(WakeLockType type, ChangeTypeCallback callback) final;
  void HasWakeLockForTests(HasWakeLockForTestsCallback callback) final;

 private:
  mojo::MessageReceiverWithResponder* receiver_;
};
class  WakeLockStubDispatch {
 public:
  static bool Accept(WakeLock* impl, mojo::Message* message);
  static bool AcceptWithResponder(
      WakeLock* impl,
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder);
};

template <typename ImplRefTraits =
              mojo::RawPtrImplRefTraits<WakeLock>>
class WakeLockStub
    : public mojo::MessageReceiverWithResponderStatus {
 public:
  using ImplPointerType = typename ImplRefTraits::PointerType;

  WakeLockStub() {}
  ~WakeLockStub() override {}

  void set_sink(ImplPointerType sink) { sink_ = std::move(sink); }
  ImplPointerType& sink() { return sink_; }

  bool Accept(mojo::Message* message) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return WakeLockStubDispatch::Accept(
        ImplRefTraits::GetRawPointer(&sink_), message);
  }

  bool AcceptWithResponder(
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return WakeLockStubDispatch::AcceptWithResponder(
        ImplRefTraits::GetRawPointer(&sink_), message, std::move(responder));
  }

 private:
  ImplPointerType sink_;
};
class  WakeLockRequestValidator : public mojo::MessageReceiver {
 public:
  bool Accept(mojo::Message* message) override;
};
class  WakeLockResponseValidator : public mojo::MessageReceiver {
 public:
  bool Accept(mojo::Message* message) override;
};





}  // namespace mojom
}  // namespace device

namespace mojo {

}  // namespace mojo

#endif  // SERVICES_DEVICE_PUBLIC_MOJOM_WAKE_LOCK_MOJOM_H_