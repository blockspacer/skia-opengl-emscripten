// Copyright 2013 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef THIRD_PARTY_BLINK_PUBLIC_MOJOM_WAKE_LOCK_WAKE_LOCK_MOJOM_H_
#define THIRD_PARTY_BLINK_PUBLIC_MOJOM_WAKE_LOCK_WAKE_LOCK_MOJOM_H_

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
#include "third_party/blink/public/mojom/wake_lock/wake_lock.mojom-shared.h"
#include "third_party/blink/public/mojom/wake_lock/wake_lock.mojom-forward.h"
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
#include "third_party/blink/public/common/common_export.h"




namespace blink {
namespace mojom {

class WakeLockServiceProxy;

template <typename ImplRefTraits>
class WakeLockServiceStub;

class WakeLockServiceRequestValidator;


class BLINK_COMMON_EXPORT WakeLockService
    : public WakeLockServiceInterfaceBase {
 public:
  static const char Name_[];
  static constexpr uint32_t Version_ = 0;
  static constexpr bool PassesAssociatedKinds_ = false;
  static constexpr bool HasSyncMethods_ = false;

  using Base_ = WakeLockServiceInterfaceBase;
  using Proxy_ = WakeLockServiceProxy;

  template <typename ImplRefTraits>
  using Stub_ = WakeLockServiceStub<ImplRefTraits>;

  using RequestValidator_ = WakeLockServiceRequestValidator;
  using ResponseValidator_ = mojo::PassThroughFilter;
  enum MethodMinVersions : uint32_t {
    kGetWakeLockMinVersion = 0,
  };
  virtual ~WakeLockService() {}

  
  virtual void GetWakeLock(::device::mojom::WakeLockType type, ::device::mojom::WakeLockReason reason, const std::string& description, ::device::mojom::WakeLockRequest wake_lock) = 0;
};

class BLINK_COMMON_EXPORT WakeLockServiceProxy
    : public WakeLockService {
 public:
  using InterfaceType = WakeLockService;

  explicit WakeLockServiceProxy(mojo::MessageReceiverWithResponder* receiver);
  void GetWakeLock(::device::mojom::WakeLockType type, ::device::mojom::WakeLockReason reason, const std::string& description, ::device::mojom::WakeLockRequest wake_lock) final;

 private:
  mojo::MessageReceiverWithResponder* receiver_;
};
class BLINK_COMMON_EXPORT WakeLockServiceStubDispatch {
 public:
  static bool Accept(WakeLockService* impl, mojo::Message* message);
  static bool AcceptWithResponder(
      WakeLockService* impl,
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder);
};

template <typename ImplRefTraits =
              mojo::RawPtrImplRefTraits<WakeLockService>>
class WakeLockServiceStub
    : public mojo::MessageReceiverWithResponderStatus {
 public:
  using ImplPointerType = typename ImplRefTraits::PointerType;

  WakeLockServiceStub() {}
  ~WakeLockServiceStub() override {}

  void set_sink(ImplPointerType sink) { sink_ = std::move(sink); }
  ImplPointerType& sink() { return sink_; }

  bool Accept(mojo::Message* message) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return WakeLockServiceStubDispatch::Accept(
        ImplRefTraits::GetRawPointer(&sink_), message);
  }

  bool AcceptWithResponder(
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return WakeLockServiceStubDispatch::AcceptWithResponder(
        ImplRefTraits::GetRawPointer(&sink_), message, std::move(responder));
  }

 private:
  ImplPointerType sink_;
};
class BLINK_COMMON_EXPORT WakeLockServiceRequestValidator : public mojo::MessageReceiver {
 public:
  bool Accept(mojo::Message* message) override;
};





}  // namespace mojom
}  // namespace blink

namespace mojo {

}  // namespace mojo

#endif  // THIRD_PARTY_BLINK_PUBLIC_MOJOM_WAKE_LOCK_WAKE_LOCK_MOJOM_H_