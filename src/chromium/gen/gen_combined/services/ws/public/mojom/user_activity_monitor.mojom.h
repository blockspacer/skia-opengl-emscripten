// Copyright 2013 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef SERVICES_WS_PUBLIC_MOJOM_USER_ACTIVITY_MONITOR_MOJOM_H_
#define SERVICES_WS_PUBLIC_MOJOM_USER_ACTIVITY_MONITOR_MOJOM_H_

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
#include "services/ws/public/mojom/user_activity_monitor.mojom-shared.h"
#include "services/ws/public/mojom/user_activity_monitor.mojom-forward.h"
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




namespace ws {
namespace mojom {

class UserActivityObserverProxy;

template <typename ImplRefTraits>
class UserActivityObserverStub;

class UserActivityObserverRequestValidator;


class  UserActivityObserver
    : public UserActivityObserverInterfaceBase {
 public:
  static const char Name_[];
  static constexpr uint32_t Version_ = 0;
  static constexpr bool PassesAssociatedKinds_ = false;
  static constexpr bool HasSyncMethods_ = false;

  using Base_ = UserActivityObserverInterfaceBase;
  using Proxy_ = UserActivityObserverProxy;

  template <typename ImplRefTraits>
  using Stub_ = UserActivityObserverStub<ImplRefTraits>;

  using RequestValidator_ = UserActivityObserverRequestValidator;
  using ResponseValidator_ = mojo::PassThroughFilter;
  enum MethodMinVersions : uint32_t {
    kOnUserActivityMinVersion = 0,
  };
  virtual ~UserActivityObserver() {}

  
  virtual void OnUserActivity() = 0;
};

class UserIdleObserverProxy;

template <typename ImplRefTraits>
class UserIdleObserverStub;

class UserIdleObserverRequestValidator;


class  UserIdleObserver
    : public UserIdleObserverInterfaceBase {
 public:
  static const char Name_[];
  static constexpr uint32_t Version_ = 0;
  static constexpr bool PassesAssociatedKinds_ = false;
  static constexpr bool HasSyncMethods_ = false;

  using Base_ = UserIdleObserverInterfaceBase;
  using Proxy_ = UserIdleObserverProxy;

  template <typename ImplRefTraits>
  using Stub_ = UserIdleObserverStub<ImplRefTraits>;

  using RequestValidator_ = UserIdleObserverRequestValidator;
  using ResponseValidator_ = mojo::PassThroughFilter;
  enum MethodMinVersions : uint32_t {
    kOnUserIdleStateChangedMinVersion = 0,
  };
  
  using IdleState = UserIdleObserver_IdleState;
  virtual ~UserIdleObserver() {}

  
  virtual void OnUserIdleStateChanged(UserIdleObserver::IdleState new_state) = 0;
};

class UserActivityMonitorProxy;

template <typename ImplRefTraits>
class UserActivityMonitorStub;

class UserActivityMonitorRequestValidator;


class  UserActivityMonitor
    : public UserActivityMonitorInterfaceBase {
 public:
  static const char Name_[];
  static constexpr uint32_t Version_ = 0;
  static constexpr bool PassesAssociatedKinds_ = false;
  static constexpr bool HasSyncMethods_ = false;

  using Base_ = UserActivityMonitorInterfaceBase;
  using Proxy_ = UserActivityMonitorProxy;

  template <typename ImplRefTraits>
  using Stub_ = UserActivityMonitorStub<ImplRefTraits>;

  using RequestValidator_ = UserActivityMonitorRequestValidator;
  using ResponseValidator_ = mojo::PassThroughFilter;
  enum MethodMinVersions : uint32_t {
    kAddUserActivityObserverMinVersion = 0,
    kAddUserIdleObserverMinVersion = 0,
  };
  virtual ~UserActivityMonitor() {}

  
  virtual void AddUserActivityObserver(uint32_t delay_between_notify_secs, UserActivityObserverPtr observer) = 0;

  
  virtual void AddUserIdleObserver(uint32_t idle_time_in_minutes, UserIdleObserverPtr observer) = 0;
};

class  UserActivityObserverProxy
    : public UserActivityObserver {
 public:
  using InterfaceType = UserActivityObserver;

  explicit UserActivityObserverProxy(mojo::MessageReceiverWithResponder* receiver);
  void OnUserActivity() final;

 private:
  mojo::MessageReceiverWithResponder* receiver_;
};

class  UserIdleObserverProxy
    : public UserIdleObserver {
 public:
  using InterfaceType = UserIdleObserver;

  explicit UserIdleObserverProxy(mojo::MessageReceiverWithResponder* receiver);
  void OnUserIdleStateChanged(UserIdleObserver::IdleState new_state) final;

 private:
  mojo::MessageReceiverWithResponder* receiver_;
};

class  UserActivityMonitorProxy
    : public UserActivityMonitor {
 public:
  using InterfaceType = UserActivityMonitor;

  explicit UserActivityMonitorProxy(mojo::MessageReceiverWithResponder* receiver);
  void AddUserActivityObserver(uint32_t delay_between_notify_secs, UserActivityObserverPtr observer) final;
  void AddUserIdleObserver(uint32_t idle_time_in_minutes, UserIdleObserverPtr observer) final;

 private:
  mojo::MessageReceiverWithResponder* receiver_;
};
class  UserActivityObserverStubDispatch {
 public:
  static bool Accept(UserActivityObserver* impl, mojo::Message* message);
  static bool AcceptWithResponder(
      UserActivityObserver* impl,
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder);
};

template <typename ImplRefTraits =
              mojo::RawPtrImplRefTraits<UserActivityObserver>>
class UserActivityObserverStub
    : public mojo::MessageReceiverWithResponderStatus {
 public:
  using ImplPointerType = typename ImplRefTraits::PointerType;

  UserActivityObserverStub() {}
  ~UserActivityObserverStub() override {}

  void set_sink(ImplPointerType sink) { sink_ = std::move(sink); }
  ImplPointerType& sink() { return sink_; }

  bool Accept(mojo::Message* message) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return UserActivityObserverStubDispatch::Accept(
        ImplRefTraits::GetRawPointer(&sink_), message);
  }

  bool AcceptWithResponder(
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return UserActivityObserverStubDispatch::AcceptWithResponder(
        ImplRefTraits::GetRawPointer(&sink_), message, std::move(responder));
  }

 private:
  ImplPointerType sink_;
};
class  UserIdleObserverStubDispatch {
 public:
  static bool Accept(UserIdleObserver* impl, mojo::Message* message);
  static bool AcceptWithResponder(
      UserIdleObserver* impl,
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder);
};

template <typename ImplRefTraits =
              mojo::RawPtrImplRefTraits<UserIdleObserver>>
class UserIdleObserverStub
    : public mojo::MessageReceiverWithResponderStatus {
 public:
  using ImplPointerType = typename ImplRefTraits::PointerType;

  UserIdleObserverStub() {}
  ~UserIdleObserverStub() override {}

  void set_sink(ImplPointerType sink) { sink_ = std::move(sink); }
  ImplPointerType& sink() { return sink_; }

  bool Accept(mojo::Message* message) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return UserIdleObserverStubDispatch::Accept(
        ImplRefTraits::GetRawPointer(&sink_), message);
  }

  bool AcceptWithResponder(
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return UserIdleObserverStubDispatch::AcceptWithResponder(
        ImplRefTraits::GetRawPointer(&sink_), message, std::move(responder));
  }

 private:
  ImplPointerType sink_;
};
class  UserActivityMonitorStubDispatch {
 public:
  static bool Accept(UserActivityMonitor* impl, mojo::Message* message);
  static bool AcceptWithResponder(
      UserActivityMonitor* impl,
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder);
};

template <typename ImplRefTraits =
              mojo::RawPtrImplRefTraits<UserActivityMonitor>>
class UserActivityMonitorStub
    : public mojo::MessageReceiverWithResponderStatus {
 public:
  using ImplPointerType = typename ImplRefTraits::PointerType;

  UserActivityMonitorStub() {}
  ~UserActivityMonitorStub() override {}

  void set_sink(ImplPointerType sink) { sink_ = std::move(sink); }
  ImplPointerType& sink() { return sink_; }

  bool Accept(mojo::Message* message) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return UserActivityMonitorStubDispatch::Accept(
        ImplRefTraits::GetRawPointer(&sink_), message);
  }

  bool AcceptWithResponder(
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return UserActivityMonitorStubDispatch::AcceptWithResponder(
        ImplRefTraits::GetRawPointer(&sink_), message, std::move(responder));
  }

 private:
  ImplPointerType sink_;
};
class  UserActivityObserverRequestValidator : public mojo::MessageReceiver {
 public:
  bool Accept(mojo::Message* message) override;
};
class  UserIdleObserverRequestValidator : public mojo::MessageReceiver {
 public:
  bool Accept(mojo::Message* message) override;
};
class  UserActivityMonitorRequestValidator : public mojo::MessageReceiver {
 public:
  bool Accept(mojo::Message* message) override;
};





}  // namespace mojom
}  // namespace ws

namespace mojo {

}  // namespace mojo

#endif  // SERVICES_WS_PUBLIC_MOJOM_USER_ACTIVITY_MONITOR_MOJOM_H_