// Copyright 2017 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// vector_icons.h.template is used to generate vector_icons.h. Edit the former
// rather than the latter.

#ifndef COMPONENTS_VECTOR_ICONS_VECTOR_ICONS_H_
#define COMPONENTS_VECTOR_ICONS_VECTOR_ICONS_H_

namespace gfx {
struct VectorIcon;
}

#define VECTOR_ICON_TEMPLATE_H(icon_name) \
extern const gfx::VectorIcon icon_name;

#if defined(FEATURE_MODULES) && defined(COMPONENTS_VECTOR_ICONS_IMPL)
#define VECTOR_ICON_EXPORT __attribute__((visibility("default")))
#endif

namespace vector_icons {

VECTOR_ICON_TEMPLATE_H(kFolderTouchIcon)
VECTOR_ICON_TEMPLATE_H(kLockIcon)
VECTOR_ICON_TEMPLATE_H(kAccessibilityIcon)
VECTOR_ICON_TEMPLATE_H(kWifiAddIcon)
VECTOR_ICON_TEMPLATE_H(kReplayIcon)
VECTOR_ICON_TEMPLATE_H(kForwardArrowIcon)
VECTOR_ICON_TEMPLATE_H(kCloseRoundedIcon)
VECTOR_ICON_TEMPLATE_H(kCloseIcon)
VECTOR_ICON_TEMPLATE_H(kHeadsetIcon)
VECTOR_ICON_TEMPLATE_H(kPauseIcon)
VECTOR_ICON_TEMPLATE_H(kUsbIcon)
VECTOR_ICON_TEMPLATE_H(kHelpOutlineIcon)
VECTOR_ICON_TEMPLATE_H(kMediaSeekForwardIcon)
VECTOR_ICON_TEMPLATE_H(kBluetoothConnectedIcon)
VECTOR_ICON_TEMPLATE_H(kScreenShareIcon)
VECTOR_ICON_TEMPLATE_H(kMediaRouterErrorIcon)
VECTOR_ICON_TEMPLATE_H(kMediaRouterIdleIcon)
VECTOR_ICON_TEMPLATE_H(kFolderIcon)
VECTOR_ICON_TEMPLATE_H(kMediaRouterActiveIcon)
VECTOR_ICON_TEMPLATE_H(kBackArrowIcon)
VECTOR_ICON_TEMPLATE_H(kBusinessIcon)
VECTOR_ICON_TEMPLATE_H(kSerialPortIcon)
VECTOR_ICON_TEMPLATE_H(kNotificationsIcon)
VECTOR_ICON_TEMPLATE_H(kMediaSeekBackwardIcon)
VECTOR_ICON_TEMPLATE_H(kVideocamIcon)
VECTOR_ICON_TEMPLATE_H(kMediaRouterWarningIcon)
VECTOR_ICON_TEMPLATE_H(kFolderManagedIcon)
VECTOR_ICON_TEMPLATE_H(kProtocolHandlerIcon)
VECTOR_ICON_TEMPLATE_H(kInfoOutlineIcon)
VECTOR_ICON_TEMPLATE_H(kLocationOnIcon)
VECTOR_ICON_TEMPLATE_H(kSearchIcon)
VECTOR_ICON_TEMPLATE_H(kMidiIcon)
VECTOR_ICON_TEMPLATE_H(kEditIcon)
VECTOR_ICON_TEMPLATE_H(kMediaPreviousTrackIcon)
VECTOR_ICON_TEMPLATE_H(kLightbulbOutlineIcon)
VECTOR_ICON_TEMPLATE_H(kMediaNextTrackIcon)
VECTOR_ICON_TEMPLATE_H(kReloadIcon)
VECTOR_ICON_TEMPLATE_H(kWarningIcon)
VECTOR_ICON_TEMPLATE_H(kPlayArrowIcon)
VECTOR_ICON_TEMPLATE_H(kErrorIcon)
VECTOR_ICON_TEMPLATE_H(kEthernetIcon)
VECTOR_ICON_TEMPLATE_H(kMicIcon)
VECTOR_ICON_TEMPLATE_H(kFolderManagedTouchIcon)
VECTOR_ICON_TEMPLATE_H(kCheckCircleIcon)

}  // namespace vector_icons

#undef VECTOR_ICON_TEMPLATE_H

#endif  // COMPONENTS_VECTOR_ICONS_VECTOR_ICONS_H_
