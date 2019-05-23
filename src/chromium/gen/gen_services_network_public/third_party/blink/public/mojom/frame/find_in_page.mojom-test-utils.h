// Copyright 2019 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef THIRD_PARTY_BLINK_PUBLIC_MOJOM_FRAME_FIND_IN_PAGE_MOJOM_TEST_UTILS_H_
#define THIRD_PARTY_BLINK_PUBLIC_MOJOM_FRAME_FIND_IN_PAGE_MOJOM_TEST_UTILS_H_

#include "third_party/blink/public/mojom/frame/find_in_page.mojom.h"
#include "third_party/blink/public/common/common_export.h"


namespace blink {
namespace mojom {


class BLINK_COMMON_EXPORT FindInPageInterceptorForTesting : public FindInPage {
  virtual FindInPage* GetForwardingInterface() = 0;
  void Find(int32_t request_id, const std::string& search_text, FindOptionsPtr options) override;
  void StopFinding(StopFindAction action) override;
  void ClearActiveFindMatch() override;
  void GetNearestFindResult(const gfx::PointF& point, GetNearestFindResultCallback callback) override;
  void ActivateNearestFindResult(int32_t request_id, const gfx::PointF& point) override;
  void SetClient(FindInPageClientPtr client) override;
  void FindMatchRects(int32_t current_version, FindMatchRectsCallback callback) override;
};
class BLINK_COMMON_EXPORT FindInPageAsyncWaiter {
 public:
  explicit FindInPageAsyncWaiter(FindInPage* proxy);
  ~FindInPageAsyncWaiter();
  void GetNearestFindResult(
      const gfx::PointF& point, float* out_distance);
  void FindMatchRects(
      int32_t current_version, int32_t* out_version, std::vector<gfx::RectF>* out_rects, gfx::RectF* out_active_match_rect);

 private:
  FindInPage* const proxy_;

  DISALLOW_COPY_AND_ASSIGN(FindInPageAsyncWaiter);
};


class BLINK_COMMON_EXPORT FindInPageClientInterceptorForTesting : public FindInPageClient {
  virtual FindInPageClient* GetForwardingInterface() = 0;
  void SetNumberOfMatches(int32_t request_id, uint32_t number_of_matches, FindMatchUpdateType update_type) override;
  void SetActiveMatch(int32_t request_id, const gfx::Rect& active_match_rect, int32_t active_match_ordinal, FindMatchUpdateType update_type) override;
};
class BLINK_COMMON_EXPORT FindInPageClientAsyncWaiter {
 public:
  explicit FindInPageClientAsyncWaiter(FindInPageClient* proxy);
  ~FindInPageClientAsyncWaiter();

 private:
  FindInPageClient* const proxy_;

  DISALLOW_COPY_AND_ASSIGN(FindInPageClientAsyncWaiter);
};




}  // namespace mojom
}  // namespace blink

#endif  // THIRD_PARTY_BLINK_PUBLIC_MOJOM_FRAME_FIND_IN_PAGE_MOJOM_TEST_UTILS_H_