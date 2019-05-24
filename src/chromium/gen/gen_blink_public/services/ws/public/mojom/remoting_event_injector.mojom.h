// Copyright 2013 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef SERVICES_WS_PUBLIC_MOJOM_REMOTING_EVENT_INJECTOR_MOJOM_H_
#define SERVICES_WS_PUBLIC_MOJOM_REMOTING_EVENT_INJECTOR_MOJOM_H_

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
#include "services/ws/public/mojom/remoting_event_injector.mojom-shared.h"
#include "services/ws/public/mojom/remoting_event_injector.mojom-forward.h"
#include "ui/gfx/geometry/mojo/geometry.mojom-forward.h"
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

class RemotingEventInjectorProxy;

template <typename ImplRefTraits>
class RemotingEventInjectorStub;

class RemotingEventInjectorRequestValidator;


class  RemotingEventInjector
    : public RemotingEventInjectorInterfaceBase {
 public:
  static const char Name_[];
  static constexpr uint32_t Version_ = 0;
  static constexpr bool PassesAssociatedKinds_ = false;
  static constexpr bool HasSyncMethods_ = false;

  using Base_ = RemotingEventInjectorInterfaceBase;
  using Proxy_ = RemotingEventInjectorProxy;

  template <typename ImplRefTraits>
  using Stub_ = RemotingEventInjectorStub<ImplRefTraits>;

  using RequestValidator_ = RemotingEventInjectorRequestValidator;
  using ResponseValidator_ = mojo::PassThroughFilter;
  enum MethodMinVersions : uint32_t {
    kMoveCursorToLocationInPixelsMinVersion = 0,
    kInjectMousePressOrReleaseMinVersion = 0,
    kInjectMouseWheelInPixelsMinVersion = 0,
    kInjectKeyEventMinVersion = 0,
  };
  virtual ~RemotingEventInjector() {}

  
  virtual void MoveCursorToLocationInPixels(const gfx::PointF& location) = 0;

  
  virtual void InjectMousePressOrRelease(InjectedMouseButtonType button, bool down) = 0;

  
  virtual void InjectMouseWheelInPixels(int32_t delta_x, int32_t delta_y) = 0;

  
  virtual void InjectKeyEvent(int32_t native_key_code, bool down, bool suppress_auto_repeat) = 0;
};

class  RemotingEventInjectorProxy
    : public RemotingEventInjector {
 public:
  using InterfaceType = RemotingEventInjector;

  explicit RemotingEventInjectorProxy(mojo::MessageReceiverWithResponder* receiver);
  void MoveCursorToLocationInPixels(const gfx::PointF& location) final;
  void InjectMousePressOrRelease(InjectedMouseButtonType button, bool down) final;
  void InjectMouseWheelInPixels(int32_t delta_x, int32_t delta_y) final;
  void InjectKeyEvent(int32_t native_key_code, bool down, bool suppress_auto_repeat) final;

 private:
  mojo::MessageReceiverWithResponder* receiver_;
};
class  RemotingEventInjectorStubDispatch {
 public:
  static bool Accept(RemotingEventInjector* impl, mojo::Message* message);
  static bool AcceptWithResponder(
      RemotingEventInjector* impl,
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder);
};

template <typename ImplRefTraits =
              mojo::RawPtrImplRefTraits<RemotingEventInjector>>
class RemotingEventInjectorStub
    : public mojo::MessageReceiverWithResponderStatus {
 public:
  using ImplPointerType = typename ImplRefTraits::PointerType;

  RemotingEventInjectorStub() {}
  ~RemotingEventInjectorStub() override {}

  void set_sink(ImplPointerType sink) { sink_ = std::move(sink); }
  ImplPointerType& sink() { return sink_; }

  bool Accept(mojo::Message* message) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return RemotingEventInjectorStubDispatch::Accept(
        ImplRefTraits::GetRawPointer(&sink_), message);
  }

  bool AcceptWithResponder(
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return RemotingEventInjectorStubDispatch::AcceptWithResponder(
        ImplRefTraits::GetRawPointer(&sink_), message, std::move(responder));
  }

 private:
  ImplPointerType sink_;
};
class  RemotingEventInjectorRequestValidator : public mojo::MessageReceiver {
 public:
  bool Accept(mojo::Message* message) override;
};





}  // namespace mojom
}  // namespace ws

namespace mojo {

}  // namespace mojo

#endif  // SERVICES_WS_PUBLIC_MOJOM_REMOTING_EVENT_INJECTOR_MOJOM_H_