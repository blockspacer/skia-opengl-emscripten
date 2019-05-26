// Copyright 2013 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef SERVICES_DEVICE_PUBLIC_MOJOM_POWER_MONITOR_MOJOM_BLINK_H_
#define SERVICES_DEVICE_PUBLIC_MOJOM_POWER_MONITOR_MOJOM_BLINK_H_

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
#include "services/device/public/mojom/power_monitor.mojom-shared.h"
#include "services/device/public/mojom/power_monitor.mojom-blink-forward.h"

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




namespace device {
namespace mojom {
namespace blink {

class PowerMonitorProxy;

template <typename ImplRefTraits>
class PowerMonitorStub;

class PowerMonitorRequestValidator;


class BLINK_PLATFORM_EXPORT PowerMonitor
    : public PowerMonitorInterfaceBase {
 public:
  static const char Name_[];
  static constexpr uint32_t Version_ = 0;
  static constexpr bool PassesAssociatedKinds_ = false;
  static constexpr bool HasSyncMethods_ = false;

  using Base_ = PowerMonitorInterfaceBase;
  using Proxy_ = PowerMonitorProxy;

  template <typename ImplRefTraits>
  using Stub_ = PowerMonitorStub<ImplRefTraits>;

  using RequestValidator_ = PowerMonitorRequestValidator;
  using ResponseValidator_ = mojo::PassThroughFilter;
  enum MethodMinVersions : uint32_t {
    kAddClientMinVersion = 0,
  };
  virtual ~PowerMonitor() {}

  
  virtual void AddClient(PowerMonitorClientPtr client) = 0;
};

class PowerMonitorClientProxy;

template <typename ImplRefTraits>
class PowerMonitorClientStub;

class PowerMonitorClientRequestValidator;


class BLINK_PLATFORM_EXPORT PowerMonitorClient
    : public PowerMonitorClientInterfaceBase {
 public:
  static const char Name_[];
  static constexpr uint32_t Version_ = 0;
  static constexpr bool PassesAssociatedKinds_ = false;
  static constexpr bool HasSyncMethods_ = false;

  using Base_ = PowerMonitorClientInterfaceBase;
  using Proxy_ = PowerMonitorClientProxy;

  template <typename ImplRefTraits>
  using Stub_ = PowerMonitorClientStub<ImplRefTraits>;

  using RequestValidator_ = PowerMonitorClientRequestValidator;
  using ResponseValidator_ = mojo::PassThroughFilter;
  enum MethodMinVersions : uint32_t {
    kPowerStateChangeMinVersion = 0,
    kSuspendMinVersion = 0,
    kResumeMinVersion = 0,
  };
  virtual ~PowerMonitorClient() {}

  
  virtual void PowerStateChange(bool on_battery_power) = 0;

  
  virtual void Suspend() = 0;

  
  virtual void Resume() = 0;
};

class BLINK_PLATFORM_EXPORT PowerMonitorProxy
    : public PowerMonitor {
 public:
  using InterfaceType = PowerMonitor;

  explicit PowerMonitorProxy(mojo::MessageReceiverWithResponder* receiver);
  void AddClient(PowerMonitorClientPtr client) final;

 private:
  mojo::MessageReceiverWithResponder* receiver_;
};

class BLINK_PLATFORM_EXPORT PowerMonitorClientProxy
    : public PowerMonitorClient {
 public:
  using InterfaceType = PowerMonitorClient;

  explicit PowerMonitorClientProxy(mojo::MessageReceiverWithResponder* receiver);
  void PowerStateChange(bool on_battery_power) final;
  void Suspend() final;
  void Resume() final;

 private:
  mojo::MessageReceiverWithResponder* receiver_;
};
class BLINK_PLATFORM_EXPORT PowerMonitorStubDispatch {
 public:
  static bool Accept(PowerMonitor* impl, mojo::Message* message);
  static bool AcceptWithResponder(
      PowerMonitor* impl,
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder);
};

template <typename ImplRefTraits =
              mojo::RawPtrImplRefTraits<PowerMonitor>>
class PowerMonitorStub
    : public mojo::MessageReceiverWithResponderStatus {
 public:
  using ImplPointerType = typename ImplRefTraits::PointerType;

  PowerMonitorStub() {}
  ~PowerMonitorStub() override {}

  void set_sink(ImplPointerType sink) { sink_ = std::move(sink); }
  ImplPointerType& sink() { return sink_; }

  bool Accept(mojo::Message* message) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return PowerMonitorStubDispatch::Accept(
        ImplRefTraits::GetRawPointer(&sink_), message);
  }

  bool AcceptWithResponder(
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return PowerMonitorStubDispatch::AcceptWithResponder(
        ImplRefTraits::GetRawPointer(&sink_), message, std::move(responder));
  }

 private:
  ImplPointerType sink_;
};
class BLINK_PLATFORM_EXPORT PowerMonitorClientStubDispatch {
 public:
  static bool Accept(PowerMonitorClient* impl, mojo::Message* message);
  static bool AcceptWithResponder(
      PowerMonitorClient* impl,
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder);
};

template <typename ImplRefTraits =
              mojo::RawPtrImplRefTraits<PowerMonitorClient>>
class PowerMonitorClientStub
    : public mojo::MessageReceiverWithResponderStatus {
 public:
  using ImplPointerType = typename ImplRefTraits::PointerType;

  PowerMonitorClientStub() {}
  ~PowerMonitorClientStub() override {}

  void set_sink(ImplPointerType sink) { sink_ = std::move(sink); }
  ImplPointerType& sink() { return sink_; }

  bool Accept(mojo::Message* message) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return PowerMonitorClientStubDispatch::Accept(
        ImplRefTraits::GetRawPointer(&sink_), message);
  }

  bool AcceptWithResponder(
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return PowerMonitorClientStubDispatch::AcceptWithResponder(
        ImplRefTraits::GetRawPointer(&sink_), message, std::move(responder));
  }

 private:
  ImplPointerType sink_;
};
class BLINK_PLATFORM_EXPORT PowerMonitorRequestValidator : public mojo::MessageReceiver {
 public:
  bool Accept(mojo::Message* message) override;
};
class BLINK_PLATFORM_EXPORT PowerMonitorClientRequestValidator : public mojo::MessageReceiver {
 public:
  bool Accept(mojo::Message* message) override;
};





}  // namespace blink
}  // namespace mojom
}  // namespace device

namespace mojo {

}  // namespace mojo

#endif  // SERVICES_DEVICE_PUBLIC_MOJOM_POWER_MONITOR_MOJOM_BLINK_H_