// Copyright 2018 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef UI_BASE_MOJO_CLIPBOARD_MOJOM_SHARED_MESSAGE_IDS_H_
#define UI_BASE_MOJO_CLIPBOARD_MOJOM_SHARED_MESSAGE_IDS_H_

#include <stdint.h>
namespace ui {
namespace mojom {

namespace internal {


// The 1033377850 value is based on sha256(salt + "ClipboardHost1").
constexpr uint32_t kClipboardHost_GetSequenceNumber_Name = 1033377850;
// The 658420123 value is based on sha256(salt + "ClipboardHost2").
constexpr uint32_t kClipboardHost_IsFormatAvailable_Name = 658420123;
// The 80617295 value is based on sha256(salt + "ClipboardHost3").
constexpr uint32_t kClipboardHost_Clear_Name = 80617295;
// The 1972227534 value is based on sha256(salt + "ClipboardHost4").
constexpr uint32_t kClipboardHost_ReadAvailableTypes_Name = 1972227534;
// The 1845613392 value is based on sha256(salt + "ClipboardHost5").
constexpr uint32_t kClipboardHost_ReadText_Name = 1845613392;
// The 67114627 value is based on sha256(salt + "ClipboardHost6").
constexpr uint32_t kClipboardHost_ReadAsciiText_Name = 67114627;
// The 251476421 value is based on sha256(salt + "ClipboardHost7").
constexpr uint32_t kClipboardHost_ReadHTML_Name = 251476421;
// The 102642093 value is based on sha256(salt + "ClipboardHost8").
constexpr uint32_t kClipboardHost_ReadRTF_Name = 102642093;
// The 2119521483 value is based on sha256(salt + "ClipboardHost9").
constexpr uint32_t kClipboardHost_ReadImage_Name = 2119521483;
// The 905452561 value is based on sha256(salt + "ClipboardHost10").
constexpr uint32_t kClipboardHost_ReadCustomData_Name = 905452561;
// The 305844594 value is based on sha256(salt + "ClipboardHost11").
constexpr uint32_t kClipboardHost_ReadBookmark_Name = 305844594;
// The 966472609 value is based on sha256(salt + "ClipboardHost12").
constexpr uint32_t kClipboardHost_ReadData_Name = 966472609;
// The 2139038451 value is based on sha256(salt + "ClipboardHost13").
constexpr uint32_t kClipboardHost_GetLastModifiedTime_Name = 2139038451;
// The 522790077 value is based on sha256(salt + "ClipboardHost14").
constexpr uint32_t kClipboardHost_ClearLastModifiedTime_Name = 522790077;
// The 2124927651 value is based on sha256(salt + "ClipboardHost15").
constexpr uint32_t kClipboardHost_WriteText_Name = 2124927651;
// The 837552253 value is based on sha256(salt + "ClipboardHost16").
constexpr uint32_t kClipboardHost_WriteHTML_Name = 837552253;
// The 1636970426 value is based on sha256(salt + "ClipboardHost17").
constexpr uint32_t kClipboardHost_WriteRTF_Name = 1636970426;
// The 377143470 value is based on sha256(salt + "ClipboardHost18").
constexpr uint32_t kClipboardHost_WriteBookmark_Name = 377143470;
// The 2022170059 value is based on sha256(salt + "ClipboardHost19").
constexpr uint32_t kClipboardHost_WriteWebSmartPaste_Name = 2022170059;
// The 824954739 value is based on sha256(salt + "ClipboardHost20").
constexpr uint32_t kClipboardHost_WriteBitmap_Name = 824954739;
// The 607576789 value is based on sha256(salt + "ClipboardHost21").
constexpr uint32_t kClipboardHost_WriteData_Name = 607576789;
// The 1060854492 value is based on sha256(salt + "ClipboardHost22").
constexpr uint32_t kClipboardHost_CommitWrite_Name = 1060854492;

}  // namespace internal
}  // namespace mojom
}  // namespace ui

#endif  // UI_BASE_MOJO_CLIPBOARD_MOJOM_SHARED_MESSAGE_IDS_H_