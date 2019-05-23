// Copyright 2013 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef SERVICES_DEVICE_PUBLIC_MOJOM_TIME_ZONE_MONITOR_MOJOM_H_
#define SERVICES_DEVICE_PUBLIC_MOJOM_TIME_ZONE_MONITOR_MOJOM_H_

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
#include "services/device/public/mojom/time_zone_monitor.mojom-shared.h"
#include "services/device/public/mojom/time_zone_monitor.mojom-forward.h"
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

class TimeZoneMonitorProxy;

template <typename ImplRefTraits>
class TimeZoneMonitorStub;

class TimeZoneMonitorRequestValidator;


class  TimeZoneMonitor
    : public TimeZoneMonitorInterfaceBase {
 public:
  static const char Name_[];
  static constexpr uint32_t Version_ = 0;
  static constexpr bool PassesAssociatedKinds_ = false;
  static constexpr bool HasSyncMethods_ = false;

  using Base_ = TimeZoneMonitorInterfaceBase;
  using Proxy_ = TimeZoneMonitorProxy;

  template <typename ImplRefTraits>
  using Stub_ = TimeZoneMonitorStub<ImplRefTraits>;

  using RequestValidator_ = TimeZoneMonitorRequestValidator;
  using ResponseValidator_ = mojo::PassThroughFilter;
  enum MethodMinVersions : uint32_t {
    kAddClientMinVersion = 0,
  };
  virtual ~TimeZoneMonitor() {}

  
  virtual void AddClient(TimeZoneMonitorClientPtr client) = 0;
};

class TimeZoneMonitorClientProxy;

template <typename ImplRefTraits>
class TimeZoneMonitorClientStub;

class TimeZoneMonitorClientRequestValidator;


class  TimeZoneMonitorClient
    : public TimeZoneMonitorClientInterfaceBase {
 public:
  static const char Name_[];
  static constexpr uint32_t Version_ = 0;
  static constexpr bool PassesAssociatedKinds_ = false;
  static constexpr bool HasSyncMethods_ = false;

  using Base_ = TimeZoneMonitorClientInterfaceBase;
  using Proxy_ = TimeZoneMonitorClientProxy;

  template <typename ImplRefTraits>
  using Stub_ = TimeZoneMonitorClientStub<ImplRefTraits>;

  using RequestValidator_ = TimeZoneMonitorClientRequestValidator;
  using ResponseValidator_ = mojo::PassThroughFilter;
  enum MethodMinVersions : uint32_t {
    kOnTimeZoneChangeMinVersion = 0,
  };
  virtual ~TimeZoneMonitorClient() {}

  
  virtual void OnTimeZoneChange(const std::string& tz_info) = 0;
};

class  TimeZoneMonitorProxy
    : public TimeZoneMonitor {
 public:
  using InterfaceType = TimeZoneMonitor;

  explicit TimeZoneMonitorProxy(mojo::MessageReceiverWithResponder* receiver);
  void AddClient(TimeZoneMonitorClientPtr client) final;

 private:
  mojo::MessageReceiverWithResponder* receiver_;
};

class  TimeZoneMonitorClientProxy
    : public TimeZoneMonitorClient {
 public:
  using InterfaceType = TimeZoneMonitorClient;

  explicit TimeZoneMonitorClientProxy(mojo::MessageReceiverWithResponder* receiver);
  void OnTimeZoneChange(const std::string& tz_info) final;

 private:
  mojo::MessageReceiverWithResponder* receiver_;
};
class  TimeZoneMonitorStubDispatch {
 public:
  static bool Accept(TimeZoneMonitor* impl, mojo::Message* message);
  static bool AcceptWithResponder(
      TimeZoneMonitor* impl,
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder);
};

template <typename ImplRefTraits =
              mojo::RawPtrImplRefTraits<TimeZoneMonitor>>
class TimeZoneMonitorStub
    : public mojo::MessageReceiverWithResponderStatus {
 public:
  using ImplPointerType = typename ImplRefTraits::PointerType;

  TimeZoneMonitorStub() {}
  ~TimeZoneMonitorStub() override {}

  void set_sink(ImplPointerType sink) { sink_ = std::move(sink); }
  ImplPointerType& sink() { return sink_; }

  bool Accept(mojo::Message* message) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return TimeZoneMonitorStubDispatch::Accept(
        ImplRefTraits::GetRawPointer(&sink_), message);
  }

  bool AcceptWithResponder(
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return TimeZoneMonitorStubDispatch::AcceptWithResponder(
        ImplRefTraits::GetRawPointer(&sink_), message, std::move(responder));
  }

 private:
  ImplPointerType sink_;
};
class  TimeZoneMonitorClientStubDispatch {
 public:
  static bool Accept(TimeZoneMonitorClient* impl, mojo::Message* message);
  static bool AcceptWithResponder(
      TimeZoneMonitorClient* impl,
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder);
};

template <typename ImplRefTraits =
              mojo::RawPtrImplRefTraits<TimeZoneMonitorClient>>
class TimeZoneMonitorClientStub
    : public mojo::MessageReceiverWithResponderStatus {
 public:
  using ImplPointerType = typename ImplRefTraits::PointerType;

  TimeZoneMonitorClientStub() {}
  ~TimeZoneMonitorClientStub() override {}

  void set_sink(ImplPointerType sink) { sink_ = std::move(sink); }
  ImplPointerType& sink() { return sink_; }

  bool Accept(mojo::Message* message) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return TimeZoneMonitorClientStubDispatch::Accept(
        ImplRefTraits::GetRawPointer(&sink_), message);
  }

  bool AcceptWithResponder(
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return TimeZoneMonitorClientStubDispatch::AcceptWithResponder(
        ImplRefTraits::GetRawPointer(&sink_), message, std::move(responder));
  }

 private:
  ImplPointerType sink_;
};
class  TimeZoneMonitorRequestValidator : public mojo::MessageReceiver {
 public:
  bool Accept(mojo::Message* message) override;
};
class  TimeZoneMonitorClientRequestValidator : public mojo::MessageReceiver {
 public:
  bool Accept(mojo::Message* message) override;
};





}  // namespace mojom
}  // namespace device

namespace mojo {

}  // namespace mojo

#endif  // SERVICES_DEVICE_PUBLIC_MOJOM_TIME_ZONE_MONITOR_MOJOM_H_