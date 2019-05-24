// Copyright 2019 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef THIRD_PARTY_BLINK_PUBLIC_MOJOM_FRAME_FIND_IN_PAGE_MOJOM_BLINK_TEST_UTILS_H_
#define THIRD_PARTY_BLINK_PUBLIC_MOJOM_FRAME_FIND_IN_PAGE_MOJOM_BLINK_TEST_UTILS_H_

#include "third_party/blink/public/mojom/frame/find_in_page.mojom-blink.h"
#include "third_party/blink/renderer/platform/platform_export.h"


namespace blink {
namespace mojom {
namespace blink {


class PLATFORM_EXPORT FindInPageInterceptorForTesting : public FindInPage {
  virtual FindInPage* GetForwardingInterface() = 0;
  void Find(int32_t request_id, const WTF::String& search_text, FindOptionsPtr options) override;
  void StopFinding(StopFindAction action) override;
  void ClearActiveFindMatch() override;
  void GetNearestFindResult(const ::blink::WebFloatPoint& point, GetNearestFindResultCallback callback) override;
  void ActivateNearestFindResult(int32_t request_id, const ::blink::WebFloatPoint& point) override;
  void SetClient(FindInPageClientPtr client) override;
  void FindMatchRects(int32_t current_version, FindMatchRectsCallback callback) override;
};
class PLATFORM_EXPORT FindInPageAsyncWaiter {
 public:
  explicit FindInPageAsyncWaiter(FindInPage* proxy);
  ~FindInPageAsyncWaiter();
  void GetNearestFindResult(
      const ::blink::WebFloatPoint& point, float* out_distance);
  void FindMatchRects(
      int32_t current_version, int32_t* out_version, WTF::Vector<::blink::WebFloatRect>* out_rects, ::blink::WebFloatRect* out_active_match_rect);

 private:
  FindInPage* const proxy_;

  DISALLOW_COPY_AND_ASSIGN(FindInPageAsyncWaiter);
};


class PLATFORM_EXPORT FindInPageClientInterceptorForTesting : public FindInPageClient {
  virtual FindInPageClient* GetForwardingInterface() = 0;
  void SetNumberOfMatches(int32_t request_id, uint32_t number_of_matches, FindMatchUpdateType update_type) override;
  void SetActiveMatch(int32_t request_id, const ::blink::WebRect& active_match_rect, int32_t active_match_ordinal, FindMatchUpdateType update_type) override;
};
class PLATFORM_EXPORT FindInPageClientAsyncWaiter {
 public:
  explicit FindInPageClientAsyncWaiter(FindInPageClient* proxy);
  ~FindInPageClientAsyncWaiter();

 private:
  FindInPageClient* const proxy_;

  DISALLOW_COPY_AND_ASSIGN(FindInPageClientAsyncWaiter);
};




}  // namespace blink
}  // namespace mojom
}  // namespace blink

#endif  // THIRD_PARTY_BLINK_PUBLIC_MOJOM_FRAME_FIND_IN_PAGE_MOJOM_BLINK_TEST_UTILS_H_