// Copyright 2013 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef SERVICES_WS_PUBLIC_MOJOM_WINDOW_MANAGER_MOJOM_H_
#define SERVICES_WS_PUBLIC_MOJOM_WINDOW_MANAGER_MOJOM_H_

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
#include "services/ws/public/mojom/window_manager.mojom-shared.h"
#include "services/ws/public/mojom/window_manager.mojom-forward.h"
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

class WindowManagerProxy;

template <typename ImplRefTraits>
class WindowManagerStub;

class WindowManagerRequestValidator;


class  WindowManager
    : public WindowManagerInterfaceBase {
 public:
  static const char Name_[];
  static constexpr uint32_t Version_ = 0;
  static constexpr bool PassesAssociatedKinds_ = false;
  static constexpr bool HasSyncMethods_ = false;

  using Base_ = WindowManagerInterfaceBase;
  using Proxy_ = WindowManagerProxy;

  template <typename ImplRefTraits>
  using Stub_ = WindowManagerStub<ImplRefTraits>;

  using RequestValidator_ = WindowManagerRequestValidator;
  using ResponseValidator_ = mojo::PassThroughFilter;
  enum MethodMinVersions : uint32_t {
  };
  
  static const char kFocusable_InitProperty[];
  
  static const char kTranslucent_InitProperty[];
  
  static const char kBounds_InitProperty[];
  
  static const char kContainerId_InitProperty[];
  
  static const char kDisplayId_InitProperty[];
  
  static const char kClientProvidesFrame_InitProperty[];
  
  static const char kWindowType_InitProperty[];
  
  static const char kAlwaysOnTop_Property[];
  
  static const char kAnimationsDisabled_Property[];
  
  static const char kAvatarIcon_Property[];
  
  static const char kArcPackageName_Property[];
  
  static const char kAspectRatio_Property[];
  
  static const char kChildAXTreeID_Property[];
  
  static const char kChildModalParent_Property[];
  
  static const char kWindowLayerDrawn_Property[];
  
  static const char kDrawAttention_Property[];
  
  static const char kEmbeddedWindowEnsureNotInRect[];
  
  static const char kExcludeFromMru_Property[];
  
  static const char kFrameBackButtonState_Property[];
  
  static const char kFrameActiveColor_Property[];
  
  static const char kFrameInactiveColor_Property[];
  
  static const char kMaximumSize_Property[];
  
  static const char kMinimumSize_Property[];
  
  static const char kName_Property[];
  
  static const char kPreferredSize_Property[];
  
  static const char kRenderParentTitleArea_Property[];
  
  static const char kResizeBehavior_Property[];
  
  static const char kRestoreBounds_Property[];
  
  static const char kShadowElevation_Property[];
  
  static const char kShelfID_Property[];
  
  static const char kShelfItemType_Property[];
  
  static const char kShowState_Property[];
  
  static const char kWindowCornerRadius_Property[];
  
  static const char kWindowTitle_Property[];
  
  static const char kWindowTitleShown_Property[];
  
  static const char kWindowVisibilityAnimationDuration_Property[];
  
  static const char kWindowVisibilityAnimationTransition_Property[];
  
  static const char kWindowVisibilityAnimationType_Property[];
  
  static const char kWindowVisibilityAnimationVerticalPosition_Property[];
  virtual ~WindowManager() {}
};

class  WindowManagerProxy
    : public WindowManager {
 public:
  using InterfaceType = WindowManager;

  explicit WindowManagerProxy(mojo::MessageReceiverWithResponder* receiver);

 private:
  mojo::MessageReceiverWithResponder* receiver_;
};
class  WindowManagerStubDispatch {
 public:
  static bool Accept(WindowManager* impl, mojo::Message* message);
  static bool AcceptWithResponder(
      WindowManager* impl,
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder);
};

template <typename ImplRefTraits =
              mojo::RawPtrImplRefTraits<WindowManager>>
class WindowManagerStub
    : public mojo::MessageReceiverWithResponderStatus {
 public:
  using ImplPointerType = typename ImplRefTraits::PointerType;

  WindowManagerStub() {}
  ~WindowManagerStub() override {}

  void set_sink(ImplPointerType sink) { sink_ = std::move(sink); }
  ImplPointerType& sink() { return sink_; }

  bool Accept(mojo::Message* message) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return WindowManagerStubDispatch::Accept(
        ImplRefTraits::GetRawPointer(&sink_), message);
  }

  bool AcceptWithResponder(
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return WindowManagerStubDispatch::AcceptWithResponder(
        ImplRefTraits::GetRawPointer(&sink_), message, std::move(responder));
  }

 private:
  ImplPointerType sink_;
};
class  WindowManagerRequestValidator : public mojo::MessageReceiver {
 public:
  bool Accept(mojo::Message* message) override;
};





}  // namespace mojom
}  // namespace ws

namespace mojo {

}  // namespace mojo

#endif  // SERVICES_WS_PUBLIC_MOJOM_WINDOW_MANAGER_MOJOM_H_