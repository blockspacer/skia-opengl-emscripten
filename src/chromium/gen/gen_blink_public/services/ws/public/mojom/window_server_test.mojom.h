// Copyright 2013 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef SERVICES_WS_PUBLIC_MOJOM_WINDOW_SERVER_TEST_MOJOM_H_
#define SERVICES_WS_PUBLIC_MOJOM_WINDOW_SERVER_TEST_MOJOM_H_

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
#include "services/ws/public/mojom/window_server_test.mojom-shared.h"
#include "services/ws/public/mojom/window_server_test.mojom-forward.h"
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

class WindowServerTestProxy;

template <typename ImplRefTraits>
class WindowServerTestStub;

class WindowServerTestRequestValidator;
class WindowServerTestResponseValidator;


class  WindowServerTest
    : public WindowServerTestInterfaceBase {
 public:
  static const char Name_[];
  static constexpr uint32_t Version_ = 0;
  static constexpr bool PassesAssociatedKinds_ = false;
  static constexpr bool HasSyncMethods_ = false;

  using Base_ = WindowServerTestInterfaceBase;
  using Proxy_ = WindowServerTestProxy;

  template <typename ImplRefTraits>
  using Stub_ = WindowServerTestStub<ImplRefTraits>;

  using RequestValidator_ = WindowServerTestRequestValidator;
  using ResponseValidator_ = WindowServerTestResponseValidator;
  enum MethodMinVersions : uint32_t {
    kEnsureClientHasDrawnWindowMinVersion = 0,
  };
  virtual ~WindowServerTest() {}


  using EnsureClientHasDrawnWindowCallback = base::OnceCallback<void(bool)>;
  
  virtual void EnsureClientHasDrawnWindow(const std::string& client_name, EnsureClientHasDrawnWindowCallback callback) = 0;
};

class  WindowServerTestProxy
    : public WindowServerTest {
 public:
  using InterfaceType = WindowServerTest;

  explicit WindowServerTestProxy(mojo::MessageReceiverWithResponder* receiver);
  void EnsureClientHasDrawnWindow(const std::string& client_name, EnsureClientHasDrawnWindowCallback callback) final;

 private:
  mojo::MessageReceiverWithResponder* receiver_;
};
class  WindowServerTestStubDispatch {
 public:
  static bool Accept(WindowServerTest* impl, mojo::Message* message);
  static bool AcceptWithResponder(
      WindowServerTest* impl,
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder);
};

template <typename ImplRefTraits =
              mojo::RawPtrImplRefTraits<WindowServerTest>>
class WindowServerTestStub
    : public mojo::MessageReceiverWithResponderStatus {
 public:
  using ImplPointerType = typename ImplRefTraits::PointerType;

  WindowServerTestStub() {}
  ~WindowServerTestStub() override {}

  void set_sink(ImplPointerType sink) { sink_ = std::move(sink); }
  ImplPointerType& sink() { return sink_; }

  bool Accept(mojo::Message* message) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return WindowServerTestStubDispatch::Accept(
        ImplRefTraits::GetRawPointer(&sink_), message);
  }

  bool AcceptWithResponder(
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return WindowServerTestStubDispatch::AcceptWithResponder(
        ImplRefTraits::GetRawPointer(&sink_), message, std::move(responder));
  }

 private:
  ImplPointerType sink_;
};
class  WindowServerTestRequestValidator : public mojo::MessageReceiver {
 public:
  bool Accept(mojo::Message* message) override;
};
class  WindowServerTestResponseValidator : public mojo::MessageReceiver {
 public:
  bool Accept(mojo::Message* message) override;
};





}  // namespace mojom
}  // namespace ws

namespace mojo {

}  // namespace mojo

#endif  // SERVICES_WS_PUBLIC_MOJOM_WINDOW_SERVER_TEST_MOJOM_H_