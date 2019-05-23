// Copyright 2013 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef SERVICES_DEVICE_PUBLIC_MOJOM_BATTERY_MONITOR_MOJOM_H_
#define SERVICES_DEVICE_PUBLIC_MOJOM_BATTERY_MONITOR_MOJOM_H_

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
#include "services/device/public/mojom/battery_monitor.mojom-shared.h"
#include "services/device/public/mojom/battery_monitor.mojom-forward.h"
#include "services/device/public/mojom/battery_status.mojom-forward.h"
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

class BatteryMonitorProxy;

template <typename ImplRefTraits>
class BatteryMonitorStub;

class BatteryMonitorRequestValidator;
class BatteryMonitorResponseValidator;


class  BatteryMonitor
    : public BatteryMonitorInterfaceBase {
 public:
  static const char Name_[];
  static constexpr uint32_t Version_ = 0;
  static constexpr bool PassesAssociatedKinds_ = false;
  static constexpr bool HasSyncMethods_ = false;

  using Base_ = BatteryMonitorInterfaceBase;
  using Proxy_ = BatteryMonitorProxy;

  template <typename ImplRefTraits>
  using Stub_ = BatteryMonitorStub<ImplRefTraits>;

  using RequestValidator_ = BatteryMonitorRequestValidator;
  using ResponseValidator_ = BatteryMonitorResponseValidator;
  enum MethodMinVersions : uint32_t {
    kQueryNextStatusMinVersion = 0,
  };
  virtual ~BatteryMonitor() {}


  using QueryNextStatusCallback = base::OnceCallback<void(::device::mojom::BatteryStatusPtr)>;
  
  virtual void QueryNextStatus(QueryNextStatusCallback callback) = 0;
};

class  BatteryMonitorProxy
    : public BatteryMonitor {
 public:
  using InterfaceType = BatteryMonitor;

  explicit BatteryMonitorProxy(mojo::MessageReceiverWithResponder* receiver);
  void QueryNextStatus(QueryNextStatusCallback callback) final;

 private:
  mojo::MessageReceiverWithResponder* receiver_;
};
class  BatteryMonitorStubDispatch {
 public:
  static bool Accept(BatteryMonitor* impl, mojo::Message* message);
  static bool AcceptWithResponder(
      BatteryMonitor* impl,
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder);
};

template <typename ImplRefTraits =
              mojo::RawPtrImplRefTraits<BatteryMonitor>>
class BatteryMonitorStub
    : public mojo::MessageReceiverWithResponderStatus {
 public:
  using ImplPointerType = typename ImplRefTraits::PointerType;

  BatteryMonitorStub() {}
  ~BatteryMonitorStub() override {}

  void set_sink(ImplPointerType sink) { sink_ = std::move(sink); }
  ImplPointerType& sink() { return sink_; }

  bool Accept(mojo::Message* message) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return BatteryMonitorStubDispatch::Accept(
        ImplRefTraits::GetRawPointer(&sink_), message);
  }

  bool AcceptWithResponder(
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return BatteryMonitorStubDispatch::AcceptWithResponder(
        ImplRefTraits::GetRawPointer(&sink_), message, std::move(responder));
  }

 private:
  ImplPointerType sink_;
};
class  BatteryMonitorRequestValidator : public mojo::MessageReceiver {
 public:
  bool Accept(mojo::Message* message) override;
};
class  BatteryMonitorResponseValidator : public mojo::MessageReceiver {
 public:
  bool Accept(mojo::Message* message) override;
};





}  // namespace mojom
}  // namespace device

namespace mojo {

}  // namespace mojo

#endif  // SERVICES_DEVICE_PUBLIC_MOJOM_BATTERY_MONITOR_MOJOM_H_