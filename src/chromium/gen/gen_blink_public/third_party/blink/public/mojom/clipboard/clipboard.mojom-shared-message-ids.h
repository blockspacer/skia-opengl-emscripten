// Copyright 2018 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef THIRD_PARTY_BLINK_PUBLIC_MOJOM_CLIPBOARD_CLIPBOARD_MOJOM_SHARED_MESSAGE_IDS_H_
#define THIRD_PARTY_BLINK_PUBLIC_MOJOM_CLIPBOARD_CLIPBOARD_MOJOM_SHARED_MESSAGE_IDS_H_

#include <stdint.h>
namespace blink {
namespace mojom {

namespace internal {


// The 1890352059 value is based on sha256(salt + "ClipboardHost1").
constexpr uint32_t kClipboardHost_GetSequenceNumber_Name = 1890352059;
// The 1008890581 value is based on sha256(salt + "ClipboardHost2").
constexpr uint32_t kClipboardHost_IsFormatAvailable_Name = 1008890581;
// The 929044691 value is based on sha256(salt + "ClipboardHost3").
constexpr uint32_t kClipboardHost_ReadAvailableTypes_Name = 929044691;
// The 1186920964 value is based on sha256(salt + "ClipboardHost4").
constexpr uint32_t kClipboardHost_ReadText_Name = 1186920964;
// The 751608650 value is based on sha256(salt + "ClipboardHost5").
constexpr uint32_t kClipboardHost_ReadHtml_Name = 751608650;
// The 62786921 value is based on sha256(salt + "ClipboardHost6").
constexpr uint32_t kClipboardHost_ReadRtf_Name = 62786921;
// The 814384474 value is based on sha256(salt + "ClipboardHost7").
constexpr uint32_t kClipboardHost_ReadImage_Name = 814384474;
// The 1704465293 value is based on sha256(salt + "ClipboardHost8").
constexpr uint32_t kClipboardHost_ReadCustomData_Name = 1704465293;
// The 1458769734 value is based on sha256(salt + "ClipboardHost9").
constexpr uint32_t kClipboardHost_WriteText_Name = 1458769734;
// The 1495436708 value is based on sha256(salt + "ClipboardHost10").
constexpr uint32_t kClipboardHost_WriteHtml_Name = 1495436708;
// The 1999830006 value is based on sha256(salt + "ClipboardHost11").
constexpr uint32_t kClipboardHost_WriteSmartPasteMarker_Name = 1999830006;
// The 1885283298 value is based on sha256(salt + "ClipboardHost12").
constexpr uint32_t kClipboardHost_WriteCustomData_Name = 1885283298;
// The 2014154348 value is based on sha256(salt + "ClipboardHost13").
constexpr uint32_t kClipboardHost_WriteBookmark_Name = 2014154348;
// The 494063228 value is based on sha256(salt + "ClipboardHost14").
constexpr uint32_t kClipboardHost_WriteImage_Name = 494063228;
// The 209658216 value is based on sha256(salt + "ClipboardHost15").
constexpr uint32_t kClipboardHost_CommitWrite_Name = 209658216;

}  // namespace internal
}  // namespace mojom
}  // namespace blink

#endif  // THIRD_PARTY_BLINK_PUBLIC_MOJOM_CLIPBOARD_CLIPBOARD_MOJOM_SHARED_MESSAGE_IDS_H_