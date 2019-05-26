// Copyright 2013 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#if defined(__clang__)
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wunused-private-field"
#elif defined(_MSC_VER)
#pragma warning(push)
#pragma warning(disable:4056)
#pragma warning(disable:4065)
#pragma warning(disable:4756)
#endif

#include "services/ws/public/mojom/window_manager.mojom.h"

#include <math.h>
#include <stdint.h>
#include <utility>

#include "base/location.h"
#include "base/logging.h"
#include "base/run_loop.h"
#include "base/task/common/task_annotator.h"
#include "mojo/public/cpp/bindings/lib/message_internal.h"
#include "mojo/public/cpp/bindings/lib/serialization_util.h"
#include "mojo/public/cpp/bindings/lib/unserialized_message_context.h"
#include "mojo/public/cpp/bindings/lib/validate_params.h"
#include "mojo/public/cpp/bindings/lib/validation_context.h"
#include "mojo/public/cpp/bindings/lib/validation_errors.h"
#include "mojo/public/interfaces/bindings/interface_control_messages.mojom.h"

#include "services/ws/public/mojom/window_manager.mojom-params-data.h"
#include "services/ws/public/mojom/window_manager.mojom-shared-message-ids.h"

#include "services/ws/public/mojom/window_manager.mojom-import-headers.h"


#ifndef SERVICES_WS_PUBLIC_MOJOM_WINDOW_MANAGER_MOJOM_JUMBO_H_
#define SERVICES_WS_PUBLIC_MOJOM_WINDOW_MANAGER_MOJOM_JUMBO_H_
#endif
namespace ws {
namespace mojom {
const char WindowManager::Name_[] = "ws.mojom.WindowManager";
const char WindowManager::kFocusable_InitProperty[] = "init:focusable";
const char WindowManager::kTranslucent_InitProperty[] = "init:translucent";
const char WindowManager::kBounds_InitProperty[] = "init:bounds";
const char WindowManager::kContainerId_InitProperty[] = "init:container_id";
const char WindowManager::kDisplayId_InitProperty[] = "init:display_id";
const char WindowManager::kClientProvidesFrame_InitProperty[] = "init:client-provides-frame";
const char WindowManager::kWindowType_InitProperty[] = "init:window-type";
const char WindowManager::kAlwaysOnTop_Property[] = "prop:always_on_top";
const char WindowManager::kAnimationsDisabled_Property[] = "prop:animations-disabled";
const char WindowManager::kAvatarIcon_Property[] = "prop:avatar-icon";
const char WindowManager::kArcPackageName_Property[] = "prop:arc-package-name";
const char WindowManager::kAspectRatio_Property[] = "prop:aspect-ratio";
const char WindowManager::kChildAXTreeID_Property[] = "prop:child-ax-tree-id";
const char WindowManager::kChildModalParent_Property[] = "prop:child-modal-parent";
const char WindowManager::kWindowLayerDrawn_Property[] = "prop:window-layer-drawn";
const char WindowManager::kDrawAttention_Property[] = "prop:draw-attention";
const char WindowManager::kEmbeddedWindowEnsureNotInRect[] = "prop:embedded-window-ensure-not-in-rect";
const char WindowManager::kExcludeFromMru_Property[] = "prop:exclude_from_mru";
const char WindowManager::kFrameBackButtonState_Property[] = "prop:frame-back-button-state";
const char WindowManager::kFrameActiveColor_Property[] = "prop:frame-active-color";
const char WindowManager::kFrameInactiveColor_Property[] = "prop:frame-inactive-color";
const char WindowManager::kMaximumSize_Property[] = "prop:maximum-size";
const char WindowManager::kMinimumSize_Property[] = "prop:minimum-size";
const char WindowManager::kName_Property[] = "prop:name";
const char WindowManager::kPreferredSize_Property[] = "prop:preferred-size";
const char WindowManager::kRenderParentTitleArea_Property[] = "render-parent-non-client-area";
const char WindowManager::kResizeBehavior_Property[] = "prop:resize-behavior";
const char WindowManager::kRestoreBounds_Property[] = "prop:restore-bounds";
const char WindowManager::kShadowElevation_Property[] = "prop:shadow-elevation";
const char WindowManager::kShelfID_Property[] = "prop:shelf-id";
const char WindowManager::kShelfItemType_Property[] = "prop:shelf-item-type";
const char WindowManager::kShowState_Property[] = "prop:show-state";
const char WindowManager::kWindowCornerRadius_Property[] = "prop:window-corner-radius";
const char WindowManager::kWindowTitle_Property[] = "prop:window-title";
const char WindowManager::kWindowTitleShown_Property[] = "prop:window-title-shown";
const char WindowManager::kWindowVisibilityAnimationDuration_Property[] = "prop:window-visibility-animation-duration";
const char WindowManager::kWindowVisibilityAnimationTransition_Property[] = "prop:window-visibility-animation-transition";
const char WindowManager::kWindowVisibilityAnimationType_Property[] = "prop:window-visibility-animation-type";
const char WindowManager::kWindowVisibilityAnimationVerticalPosition_Property[] = "prop:window-visibility-animation-vertical-position";

WindowManagerProxy::WindowManagerProxy(mojo::MessageReceiverWithResponder* receiver)
    : receiver_(receiver) {
}

// static
bool WindowManagerStubDispatch::Accept(
    WindowManager* impl,
    mojo::Message* message) {
  return false;
}

// static
bool WindowManagerStubDispatch::AcceptWithResponder(
    WindowManager* impl,
    mojo::Message* message,
    std::unique_ptr<mojo::MessageReceiverWithStatus> responder) {
  return false;
}

bool WindowManagerRequestValidator::Accept(mojo::Message* message) {
  if (!message->is_serialized() ||
      mojo::internal::ControlMessageHandler::IsControlMessage(message)) {
    return true;
  }

  mojo::internal::ValidationContext validation_context(
    message->payload(), message->payload_num_bytes(),
    message->handles()->size(), message->payload_num_interface_ids(), message,
    "WindowManager RequestValidator");

  switch (message->header()->name) {
    default:
      break;
  }

  // Unrecognized message.
  ReportValidationError(
      &validation_context,
      mojo::internal::VALIDATION_ERROR_MESSAGE_HEADER_UNKNOWN_METHOD);
  return false;
}

}  // namespace mojom
}  // namespace ws

namespace mojo {

}  // namespace mojo

#if defined(__clang__)
#pragma clang diagnostic pop
#elif defined(_MSC_VER)
#pragma warning(pop)
#endif