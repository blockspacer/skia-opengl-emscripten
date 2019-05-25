// Copyright 2018 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef THIRD_PARTY_BLINK_PUBLIC_MOJOM_FRAME_FIND_IN_PAGE_MOJOM_SHARED_MESSAGE_IDS_H_
#define THIRD_PARTY_BLINK_PUBLIC_MOJOM_FRAME_FIND_IN_PAGE_MOJOM_SHARED_MESSAGE_IDS_H_

#include <stdint.h>
namespace blink {
namespace mojom {

namespace internal {


// The 297499597 value is based on sha256(salt + "FindInPage1").
constexpr uint32_t kFindInPage_Find_Name = 297499597;
// The 1732108601 value is based on sha256(salt + "FindInPage2").
constexpr uint32_t kFindInPage_StopFinding_Name = 1732108601;
// The 1761871915 value is based on sha256(salt + "FindInPage3").
constexpr uint32_t kFindInPage_ClearActiveFindMatch_Name = 1761871915;
// The 918313948 value is based on sha256(salt + "FindInPage4").
constexpr uint32_t kFindInPage_GetNearestFindResult_Name = 918313948;
// The 1339358422 value is based on sha256(salt + "FindInPage5").
constexpr uint32_t kFindInPage_ActivateNearestFindResult_Name = 1339358422;
// The 1048474476 value is based on sha256(salt + "FindInPage6").
constexpr uint32_t kFindInPage_SetClient_Name = 1048474476;
// The 555166427 value is based on sha256(salt + "FindInPage7").
constexpr uint32_t kFindInPage_FindMatchRects_Name = 555166427;
// The 1901484817 value is based on sha256(salt + "FindInPageClient1").
constexpr uint32_t kFindInPageClient_SetNumberOfMatches_Name = 1901484817;
// The 1148839866 value is based on sha256(salt + "FindInPageClient2").
constexpr uint32_t kFindInPageClient_SetActiveMatch_Name = 1148839866;

}  // namespace internal
}  // namespace mojom
}  // namespace blink

#endif  // THIRD_PARTY_BLINK_PUBLIC_MOJOM_FRAME_FIND_IN_PAGE_MOJOM_SHARED_MESSAGE_IDS_H_