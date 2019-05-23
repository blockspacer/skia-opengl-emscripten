// Copyright 2013 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef SERVICES_DEVICE_PUBLIC_MOJOM_VIBRATION_MANAGER_MOJOM_H_
#define SERVICES_DEVICE_PUBLIC_MOJOM_VIBRATION_MANAGER_MOJOM_H_

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
#include "services/device/public/mojom/vibration_manager.mojom-shared.h"
#include "services/device/public/mojom/vibration_manager.mojom-forward.h"
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

class VibrationManagerProxy;

template <typename ImplRefTraits>
class VibrationManagerStub;

class VibrationManagerRequestValidator;
class VibrationManagerResponseValidator;


class  VibrationManager
    : public VibrationManagerInterfaceBase {
 public:
  static const char Name_[];
  static constexpr uint32_t Version_ = 0;
  static constexpr bool PassesAssociatedKinds_ = false;
  static constexpr bool HasSyncMethods_ = false;

  using Base_ = VibrationManagerInterfaceBase;
  using Proxy_ = VibrationManagerProxy;

  template <typename ImplRefTraits>
  using Stub_ = VibrationManagerStub<ImplRefTraits>;

  using RequestValidator_ = VibrationManagerRequestValidator;
  using ResponseValidator_ = VibrationManagerResponseValidator;
  enum MethodMinVersions : uint32_t {
    kVibrateMinVersion = 0,
    kCancelMinVersion = 0,
  };
  virtual ~VibrationManager() {}


  using VibrateCallback = base::OnceCallback<void()>;
  
  virtual void Vibrate(int64_t milliseconds, VibrateCallback callback) = 0;


  using CancelCallback = base::OnceCallback<void()>;
  
  virtual void Cancel(CancelCallback callback) = 0;
};

class  VibrationManagerProxy
    : public VibrationManager {
 public:
  using InterfaceType = VibrationManager;

  explicit VibrationManagerProxy(mojo::MessageReceiverWithResponder* receiver);
  void Vibrate(int64_t milliseconds, VibrateCallback callback) final;
  void Cancel(CancelCallback callback) final;

 private:
  mojo::MessageReceiverWithResponder* receiver_;
};
class  VibrationManagerStubDispatch {
 public:
  static bool Accept(VibrationManager* impl, mojo::Message* message);
  static bool AcceptWithResponder(
      VibrationManager* impl,
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder);
};

template <typename ImplRefTraits =
              mojo::RawPtrImplRefTraits<VibrationManager>>
class VibrationManagerStub
    : public mojo::MessageReceiverWithResponderStatus {
 public:
  using ImplPointerType = typename ImplRefTraits::PointerType;

  VibrationManagerStub() {}
  ~VibrationManagerStub() override {}

  void set_sink(ImplPointerType sink) { sink_ = std::move(sink); }
  ImplPointerType& sink() { return sink_; }

  bool Accept(mojo::Message* message) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return VibrationManagerStubDispatch::Accept(
        ImplRefTraits::GetRawPointer(&sink_), message);
  }

  bool AcceptWithResponder(
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return VibrationManagerStubDispatch::AcceptWithResponder(
        ImplRefTraits::GetRawPointer(&sink_), message, std::move(responder));
  }

 private:
  ImplPointerType sink_;
};
class  VibrationManagerRequestValidator : public mojo::MessageReceiver {
 public:
  bool Accept(mojo::Message* message) override;
};
class  VibrationManagerResponseValidator : public mojo::MessageReceiver {
 public:
  bool Accept(mojo::Message* message) override;
};





}  // namespace mojom
}  // namespace device

namespace mojo {

}  // namespace mojo

#endif  // SERVICES_DEVICE_PUBLIC_MOJOM_VIBRATION_MANAGER_MOJOM_H_