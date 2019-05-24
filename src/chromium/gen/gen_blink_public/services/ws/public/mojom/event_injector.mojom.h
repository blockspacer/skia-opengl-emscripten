// Copyright 2013 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef SERVICES_WS_PUBLIC_MOJOM_EVENT_INJECTOR_MOJOM_H_
#define SERVICES_WS_PUBLIC_MOJOM_EVENT_INJECTOR_MOJOM_H_

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
#include "services/ws/public/mojom/event_injector.mojom-shared.h"
#include "services/ws/public/mojom/event_injector.mojom-forward.h"
#include "ui/events/mojo/event.mojom-forward.h"
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

class EventInjectorProxy;

template <typename ImplRefTraits>
class EventInjectorStub;

class EventInjectorRequestValidator;
class EventInjectorResponseValidator;


class  EventInjector
    : public EventInjectorInterfaceBase {
 public:
  static const char Name_[];
  static constexpr uint32_t Version_ = 0;
  static constexpr bool PassesAssociatedKinds_ = false;
  static constexpr bool HasSyncMethods_ = false;

  using Base_ = EventInjectorInterfaceBase;
  using Proxy_ = EventInjectorProxy;

  template <typename ImplRefTraits>
  using Stub_ = EventInjectorStub<ImplRefTraits>;

  using RequestValidator_ = EventInjectorRequestValidator;
  using ResponseValidator_ = EventInjectorResponseValidator;
  enum MethodMinVersions : uint32_t {
    kInjectEventMinVersion = 0,
    kInjectEventNoAckMinVersion = 0,
    kInjectEventNoAckNoRewritersMinVersion = 0,
  };
  virtual ~EventInjector() {}


  using InjectEventCallback = base::OnceCallback<void(bool)>;
  
  virtual void InjectEvent(int64_t display_id, std::unique_ptr<ui::Event> event, InjectEventCallback callback) = 0;

  
  virtual void InjectEventNoAck(int64_t display_id, std::unique_ptr<ui::Event> event) = 0;

  
  virtual void InjectEventNoAckNoRewriters(int64_t display_id, std::unique_ptr<ui::Event> event) = 0;
};

class  EventInjectorProxy
    : public EventInjector {
 public:
  using InterfaceType = EventInjector;

  explicit EventInjectorProxy(mojo::MessageReceiverWithResponder* receiver);
  void InjectEvent(int64_t display_id, std::unique_ptr<ui::Event> event, InjectEventCallback callback) final;
  void InjectEventNoAck(int64_t display_id, std::unique_ptr<ui::Event> event) final;
  void InjectEventNoAckNoRewriters(int64_t display_id, std::unique_ptr<ui::Event> event) final;

 private:
  mojo::MessageReceiverWithResponder* receiver_;
};
class  EventInjectorStubDispatch {
 public:
  static bool Accept(EventInjector* impl, mojo::Message* message);
  static bool AcceptWithResponder(
      EventInjector* impl,
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder);
};

template <typename ImplRefTraits =
              mojo::RawPtrImplRefTraits<EventInjector>>
class EventInjectorStub
    : public mojo::MessageReceiverWithResponderStatus {
 public:
  using ImplPointerType = typename ImplRefTraits::PointerType;

  EventInjectorStub() {}
  ~EventInjectorStub() override {}

  void set_sink(ImplPointerType sink) { sink_ = std::move(sink); }
  ImplPointerType& sink() { return sink_; }

  bool Accept(mojo::Message* message) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return EventInjectorStubDispatch::Accept(
        ImplRefTraits::GetRawPointer(&sink_), message);
  }

  bool AcceptWithResponder(
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return EventInjectorStubDispatch::AcceptWithResponder(
        ImplRefTraits::GetRawPointer(&sink_), message, std::move(responder));
  }

 private:
  ImplPointerType sink_;
};
class  EventInjectorRequestValidator : public mojo::MessageReceiver {
 public:
  bool Accept(mojo::Message* message) override;
};
class  EventInjectorResponseValidator : public mojo::MessageReceiver {
 public:
  bool Accept(mojo::Message* message) override;
};





}  // namespace mojom
}  // namespace ws

namespace mojo {

}  // namespace mojo

#endif  // SERVICES_WS_PUBLIC_MOJOM_EVENT_INJECTOR_MOJOM_H_