// Copyright 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#if defined(_MSC_VER)
#pragma warning(push)
#pragma warning(disable:4065)
#endif

#include "ui/base/mojo/window_open_disposition.mojom-shared.h"

#include <utility>

#include "base/logging.h"
#include "base/stl_util.h"  // for base::size()
#include "mojo/public/cpp/bindings/lib/validate_params.h"
#include "mojo/public/cpp/bindings/lib/validation_context.h"
#include "mojo/public/cpp/bindings/lib/validation_errors.h"
#include "mojo/public/cpp/bindings/lib/validation_util.h"

#include "ui/base/mojo/window_open_disposition.mojom-params-data.h"
namespace ui {
namespace mojom {

std::ostream& operator<<(std::ostream& os, WindowOpenDisposition value) {
  switch(value) {
    case WindowOpenDisposition::UNKNOWN:
      return os << "WindowOpenDisposition::UNKNOWN";
    case WindowOpenDisposition::CURRENT_TAB:
      return os << "WindowOpenDisposition::CURRENT_TAB";
    case WindowOpenDisposition::SINGLETON_TAB:
      return os << "WindowOpenDisposition::SINGLETON_TAB";
    case WindowOpenDisposition::NEW_FOREGROUND_TAB:
      return os << "WindowOpenDisposition::NEW_FOREGROUND_TAB";
    case WindowOpenDisposition::NEW_BACKGROUND_TAB:
      return os << "WindowOpenDisposition::NEW_BACKGROUND_TAB";
    case WindowOpenDisposition::NEW_POPUP:
      return os << "WindowOpenDisposition::NEW_POPUP";
    case WindowOpenDisposition::NEW_WINDOW:
      return os << "WindowOpenDisposition::NEW_WINDOW";
    case WindowOpenDisposition::SAVE_TO_DISK:
      return os << "WindowOpenDisposition::SAVE_TO_DISK";
    case WindowOpenDisposition::OFF_THE_RECORD:
      return os << "WindowOpenDisposition::OFF_THE_RECORD";
    case WindowOpenDisposition::IGNORE_ACTION:
      return os << "WindowOpenDisposition::IGNORE_ACTION";
    case WindowOpenDisposition::SWITCH_TO_TAB:
      return os << "WindowOpenDisposition::SWITCH_TO_TAB";
    default:
      return os << "Unknown WindowOpenDisposition value: " << static_cast<int32_t>(value);
  }
}

namespace internal {

}  // namespace internal
}  // namespace mojom
}  // namespace ui

#if defined(_MSC_VER)
#pragma warning(pop)
#endif