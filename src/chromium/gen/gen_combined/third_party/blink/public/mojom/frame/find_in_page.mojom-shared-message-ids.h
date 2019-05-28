// Copyright 2018 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef THIRD_PARTY_BLINK_PUBLIC_MOJOM_FRAME_FIND_IN_PAGE_MOJOM_SHARED_MESSAGE_IDS_H_
#define THIRD_PARTY_BLINK_PUBLIC_MOJOM_FRAME_FIND_IN_PAGE_MOJOM_SHARED_MESSAGE_IDS_H_

#include <stdint.h>
namespace blink {
namespace mojom {

namespace internal {


// The 2072501217 value is based on sha256(salt + "FindInPage1").
constexpr uint32_t kFindInPage_Find_Name = 2072501217;
// The 1469552822 value is based on sha256(salt + "FindInPage2").
constexpr uint32_t kFindInPage_StopFinding_Name = 1469552822;
// The 436861707 value is based on sha256(salt + "FindInPage3").
constexpr uint32_t kFindInPage_ClearActiveFindMatch_Name = 436861707;
// The 3824150 value is based on sha256(salt + "FindInPage4").
constexpr uint32_t kFindInPage_GetNearestFindResult_Name = 3824150;
// The 1254184563 value is based on sha256(salt + "FindInPage5").
constexpr uint32_t kFindInPage_ActivateNearestFindResult_Name = 1254184563;
// The 2062308627 value is based on sha256(salt + "FindInPage6").
constexpr uint32_t kFindInPage_SetClient_Name = 2062308627;
// The 637232300 value is based on sha256(salt + "FindInPage7").
constexpr uint32_t kFindInPage_FindMatchRects_Name = 637232300;
// The 714296613 value is based on sha256(salt + "FindInPageClient1").
constexpr uint32_t kFindInPageClient_SetNumberOfMatches_Name = 714296613;
// The 985820145 value is based on sha256(salt + "FindInPageClient2").
constexpr uint32_t kFindInPageClient_SetActiveMatch_Name = 985820145;

}  // namespace internal
}  // namespace mojom
}  // namespace blink

#endif  // THIRD_PARTY_BLINK_PUBLIC_MOJOM_FRAME_FIND_IN_PAGE_MOJOM_SHARED_MESSAGE_IDS_H_