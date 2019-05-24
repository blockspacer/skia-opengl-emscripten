// Copyright 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#if defined(_MSC_VER)
#pragma warning(push)
#pragma warning(disable:4065)
#endif

#include "ui/display/mojo/display_constants.mojom-shared.h"

#include <utility>

#include "base/logging.h"
#include "base/stl_util.h"  // for base::size()
#include "mojo/public/cpp/bindings/lib/validate_params.h"
#include "mojo/public/cpp/bindings/lib/validation_context.h"
#include "mojo/public/cpp/bindings/lib/validation_errors.h"
#include "mojo/public/cpp/bindings/lib/validation_util.h"

#include "ui/display/mojo/display_constants.mojom-params-data.h"
namespace display {
namespace mojom {

std::ostream& operator<<(std::ostream& os, DisplayConnectionType value) {
  switch(value) {
    case DisplayConnectionType::DISPLAY_CONNECTION_TYPE_NONE:
      return os << "DisplayConnectionType::DISPLAY_CONNECTION_TYPE_NONE";
    case DisplayConnectionType::DISPLAY_CONNECTION_TYPE_UNKNOWN:
      return os << "DisplayConnectionType::DISPLAY_CONNECTION_TYPE_UNKNOWN";
    case DisplayConnectionType::DISPLAY_CONNECTION_TYPE_INTERNAL:
      return os << "DisplayConnectionType::DISPLAY_CONNECTION_TYPE_INTERNAL";
    case DisplayConnectionType::DISPLAY_CONNECTION_TYPE_VGA:
      return os << "DisplayConnectionType::DISPLAY_CONNECTION_TYPE_VGA";
    case DisplayConnectionType::DISPLAY_CONNECTION_TYPE_HDMI:
      return os << "DisplayConnectionType::DISPLAY_CONNECTION_TYPE_HDMI";
    case DisplayConnectionType::DISPLAY_CONNECTION_TYPE_DVI:
      return os << "DisplayConnectionType::DISPLAY_CONNECTION_TYPE_DVI";
    case DisplayConnectionType::DISPLAY_CONNECTION_TYPE_DISPLAYPORT:
      return os << "DisplayConnectionType::DISPLAY_CONNECTION_TYPE_DISPLAYPORT";
    case DisplayConnectionType::DISPLAY_CONNECTION_TYPE_NETWORK:
      return os << "DisplayConnectionType::DISPLAY_CONNECTION_TYPE_NETWORK";
    default:
      return os << "Unknown DisplayConnectionType value: " << static_cast<int32_t>(value);
  }
}

std::ostream& operator<<(std::ostream& os, HDCPState value) {
  switch(value) {
    case HDCPState::HDCP_STATE_UNDESIRED:
      return os << "HDCPState::HDCP_STATE_UNDESIRED";
    case HDCPState::HDCP_STATE_DESIRED:
      return os << "HDCPState::HDCP_STATE_DESIRED";
    case HDCPState::HDCP_STATE_ENABLED:
      return os << "HDCPState::HDCP_STATE_ENABLED";
    default:
      return os << "Unknown HDCPState value: " << static_cast<int32_t>(value);
  }
}

namespace internal {

}  // namespace internal
}  // namespace mojom
}  // namespace display

#if defined(_MSC_VER)
#pragma warning(pop)
#endif