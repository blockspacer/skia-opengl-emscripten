// Copyright 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#if defined(_MSC_VER)
#pragma warning(push)
#pragma warning(disable:4065)
#endif

#include "ui/base/mojo/ui_base_types.mojom-shared.h"

#include <utility>

#include "base/logging.h"
#include "base/stl_util.h"  // for base::size()
#include "mojo/public/cpp/bindings/lib/validate_params.h"
#include "mojo/public/cpp/bindings/lib/validation_context.h"
#include "mojo/public/cpp/bindings/lib/validation_errors.h"
#include "mojo/public/cpp/bindings/lib/validation_util.h"

#include "ui/base/mojo/ui_base_types.mojom-params-data.h"
namespace ui {
namespace mojom {

std::ostream& operator<<(std::ostream& os, WindowShowState value) {
  switch(value) {
    case WindowShowState::kDefault:
      return os << "WindowShowState::kDefault";
    case WindowShowState::kNormal:
      return os << "WindowShowState::kNormal";
    case WindowShowState::kMinimized:
      return os << "WindowShowState::kMinimized";
    case WindowShowState::kMaximized:
      return os << "WindowShowState::kMaximized";
    case WindowShowState::kInactive:
      return os << "WindowShowState::kInactive";
    case WindowShowState::kFullscreen:
      return os << "WindowShowState::kFullscreen";
    default:
      return os << "Unknown WindowShowState value: " << static_cast<int32_t>(value);
  }
}

std::ostream& operator<<(std::ostream& os, DialogButton value) {
  switch(value) {
    case DialogButton::NONE:
      return os << "DialogButton::NONE";
    case DialogButton::OK:
      return os << "DialogButton::OK";
    case DialogButton::CANCEL:
      return os << "DialogButton::CANCEL";
    default:
      return os << "Unknown DialogButton value: " << static_cast<int32_t>(value);
  }
}

std::ostream& operator<<(std::ostream& os, ModalType value) {
  switch(value) {
    case ModalType::NONE:
      return os << "ModalType::NONE";
    case ModalType::WINDOW:
      return os << "ModalType::WINDOW";
    case ModalType::CHILD:
      return os << "ModalType::CHILD";
    case ModalType::SYSTEM:
      return os << "ModalType::SYSTEM";
    default:
      return os << "Unknown ModalType value: " << static_cast<int32_t>(value);
  }
}

std::ostream& operator<<(std::ostream& os, HitTest value) {
  switch(value) {
    case HitTest::kNowhere:
      return os << "HitTest::kNowhere";
    case HitTest::kBorder:
      return os << "HitTest::kBorder";
    case HitTest::kBottom:
      return os << "HitTest::kBottom";
    case HitTest::kBottomLeft:
      return os << "HitTest::kBottomLeft";
    case HitTest::kBottomRight:
      return os << "HitTest::kBottomRight";
    case HitTest::kCaption:
      return os << "HitTest::kCaption";
    case HitTest::kClient:
      return os << "HitTest::kClient";
    case HitTest::kClose:
      return os << "HitTest::kClose";
    case HitTest::kError:
      return os << "HitTest::kError";
    case HitTest::kGrowbox:
      return os << "HitTest::kGrowbox";
    case HitTest::kHelp:
      return os << "HitTest::kHelp";
    case HitTest::kHScroll:
      return os << "HitTest::kHScroll";
    case HitTest::kLeft:
      return os << "HitTest::kLeft";
    case HitTest::kMenu:
      return os << "HitTest::kMenu";
    case HitTest::kMaxButton:
      return os << "HitTest::kMaxButton";
    case HitTest::kMinButton:
      return os << "HitTest::kMinButton";
    case HitTest::kReduce:
      return os << "HitTest::kReduce";
    case HitTest::kRight:
      return os << "HitTest::kRight";
    case HitTest::kSize:
      return os << "HitTest::kSize";
    case HitTest::kSysMenu:
      return os << "HitTest::kSysMenu";
    case HitTest::kTop:
      return os << "HitTest::kTop";
    case HitTest::kTopLeft:
      return os << "HitTest::kTopLeft";
    case HitTest::kTopRight:
      return os << "HitTest::kTopRight";
    case HitTest::kTransparent:
      return os << "HitTest::kTransparent";
    case HitTest::kVScroll:
      return os << "HitTest::kVScroll";
    case HitTest::kZoom:
      return os << "HitTest::kZoom";
    default:
      return os << "Unknown HitTest value: " << static_cast<int32_t>(value);
  }
}

namespace internal {

}  // namespace internal
}  // namespace mojom
}  // namespace ui

#if defined(_MSC_VER)
#pragma warning(pop)
#endif