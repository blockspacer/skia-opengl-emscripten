// Copyright 2013 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef SERVICES_WS_PUBLIC_MOJOM_SCREEN_PROVIDER_OBSERVER_MOJOM_H_
#define SERVICES_WS_PUBLIC_MOJOM_SCREEN_PROVIDER_OBSERVER_MOJOM_H_

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
#include "services/ws/public/mojom/screen_provider_observer.mojom-shared.h"
#include "services/ws/public/mojom/screen_provider_observer.mojom-forward.h"
#include "services/ws/public/mojom/window_tree_constants.mojom-forward.h"
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

class ScreenProviderObserverProxy;

template <typename ImplRefTraits>
class ScreenProviderObserverStub;

class ScreenProviderObserverRequestValidator;


class  ScreenProviderObserver
    : public ScreenProviderObserverInterfaceBase {
 public:
  static const char Name_[];
  static constexpr uint32_t Version_ = 0;
  static constexpr bool PassesAssociatedKinds_ = false;
  static constexpr bool HasSyncMethods_ = false;

  using Base_ = ScreenProviderObserverInterfaceBase;
  using Proxy_ = ScreenProviderObserverProxy;

  template <typename ImplRefTraits>
  using Stub_ = ScreenProviderObserverStub<ImplRefTraits>;

  using RequestValidator_ = ScreenProviderObserverRequestValidator;
  using ResponseValidator_ = mojo::PassThroughFilter;
  enum MethodMinVersions : uint32_t {
    kOnDisplaysChangedMinVersion = 0,
  };
  virtual ~ScreenProviderObserver() {}

  
  virtual void OnDisplaysChanged(std::vector<::ws::mojom::WsDisplayPtr> displays, int64_t primary_display_id, int64_t internal_display_id, int64_t display_id_for_new_windows) = 0;
};

class  ScreenProviderObserverProxy
    : public ScreenProviderObserver {
 public:
  using InterfaceType = ScreenProviderObserver;

  explicit ScreenProviderObserverProxy(mojo::MessageReceiverWithResponder* receiver);
  void OnDisplaysChanged(std::vector<::ws::mojom::WsDisplayPtr> displays, int64_t primary_display_id, int64_t internal_display_id, int64_t display_id_for_new_windows) final;

 private:
  mojo::MessageReceiverWithResponder* receiver_;
};
class  ScreenProviderObserverStubDispatch {
 public:
  static bool Accept(ScreenProviderObserver* impl, mojo::Message* message);
  static bool AcceptWithResponder(
      ScreenProviderObserver* impl,
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder);
};

template <typename ImplRefTraits =
              mojo::RawPtrImplRefTraits<ScreenProviderObserver>>
class ScreenProviderObserverStub
    : public mojo::MessageReceiverWithResponderStatus {
 public:
  using ImplPointerType = typename ImplRefTraits::PointerType;

  ScreenProviderObserverStub() {}
  ~ScreenProviderObserverStub() override {}

  void set_sink(ImplPointerType sink) { sink_ = std::move(sink); }
  ImplPointerType& sink() { return sink_; }

  bool Accept(mojo::Message* message) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return ScreenProviderObserverStubDispatch::Accept(
        ImplRefTraits::GetRawPointer(&sink_), message);
  }

  bool AcceptWithResponder(
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return ScreenProviderObserverStubDispatch::AcceptWithResponder(
        ImplRefTraits::GetRawPointer(&sink_), message, std::move(responder));
  }

 private:
  ImplPointerType sink_;
};
class  ScreenProviderObserverRequestValidator : public mojo::MessageReceiver {
 public:
  bool Accept(mojo::Message* message) override;
};





}  // namespace mojom
}  // namespace ws

namespace mojo {

}  // namespace mojo

#endif  // SERVICES_WS_PUBLIC_MOJOM_SCREEN_PROVIDER_OBSERVER_MOJOM_H_