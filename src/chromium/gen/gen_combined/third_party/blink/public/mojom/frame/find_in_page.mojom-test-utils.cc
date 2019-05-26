// Copyright 2019 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#if defined(__clang__)
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wunused-private-field"
#elif defined(_MSC_VER)
#pragma warning(push)
#pragma warning(disable:4056)
#pragma warning(disable:4065)
#pragma warning(disable:4756)
#endif


#include "third_party/blink/public/mojom/frame/find_in_page.mojom-test-utils.h"

#include <utility>

#include "base/bind.h"
#include "base/run_loop.h"
#include "ui/gfx/geometry/mojo/geometry.mojom.h"


#ifndef THIRD_PARTY_BLINK_PUBLIC_MOJOM_FRAME_FIND_IN_PAGE_MOJOM_JUMBO_H_
#define THIRD_PARTY_BLINK_PUBLIC_MOJOM_FRAME_FIND_IN_PAGE_MOJOM_JUMBO_H_
#include "ui/gfx/geometry/mojo/geometry_struct_traits.h"
#endif


namespace blink {
namespace mojom {


void FindInPageInterceptorForTesting::Find(int32_t request_id, const std::string& search_text, FindOptionsPtr options) {
  GetForwardingInterface()->Find(std::move(request_id), std::move(search_text), std::move(options));
}
void FindInPageInterceptorForTesting::StopFinding(StopFindAction action) {
  GetForwardingInterface()->StopFinding(std::move(action));
}
void FindInPageInterceptorForTesting::ClearActiveFindMatch() {
  GetForwardingInterface()->ClearActiveFindMatch();
}
void FindInPageInterceptorForTesting::GetNearestFindResult(const gfx::PointF& point, GetNearestFindResultCallback callback) {
  GetForwardingInterface()->GetNearestFindResult(std::move(point), std::move(callback));
}
void FindInPageInterceptorForTesting::ActivateNearestFindResult(int32_t request_id, const gfx::PointF& point) {
  GetForwardingInterface()->ActivateNearestFindResult(std::move(request_id), std::move(point));
}
void FindInPageInterceptorForTesting::SetClient(FindInPageClientPtr client) {
  GetForwardingInterface()->SetClient(std::move(client));
}
void FindInPageInterceptorForTesting::FindMatchRects(int32_t current_version, FindMatchRectsCallback callback) {
  GetForwardingInterface()->FindMatchRects(std::move(current_version), std::move(callback));
}
FindInPageAsyncWaiter::FindInPageAsyncWaiter(
    FindInPage* proxy) : proxy_(proxy) {}

FindInPageAsyncWaiter::~FindInPageAsyncWaiter() = default;

void FindInPageAsyncWaiter::GetNearestFindResult(
    const gfx::PointF& point, float* out_distance) {
  base::RunLoop loop;
  proxy_->GetNearestFindResult(std::move(point),
      base::BindOnce(
          [](base::RunLoop* loop,
             float* out_distance
,
             float distance) {*out_distance = std::move(distance);
            loop->Quit();
          },
          &loop,
          out_distance));
  loop.Run();
}
void FindInPageAsyncWaiter::FindMatchRects(
    int32_t current_version, int32_t* out_version, std::vector<gfx::RectF>* out_rects, gfx::RectF* out_active_match_rect) {
  base::RunLoop loop;
  proxy_->FindMatchRects(std::move(current_version),
      base::BindOnce(
          [](base::RunLoop* loop,
             int32_t* out_version
,
             std::vector<gfx::RectF>* out_rects
,
             gfx::RectF* out_active_match_rect
,
             int32_t version,
             const std::vector<gfx::RectF>& rects,
             const gfx::RectF& active_match_rect) {*out_version = std::move(version);*out_rects = std::move(rects);*out_active_match_rect = std::move(active_match_rect);
            loop->Quit();
          },
          &loop,
          out_version,
          out_rects,
          out_active_match_rect));
  loop.Run();
}



void FindInPageClientInterceptorForTesting::SetNumberOfMatches(int32_t request_id, uint32_t number_of_matches, FindMatchUpdateType update_type) {
  GetForwardingInterface()->SetNumberOfMatches(std::move(request_id), std::move(number_of_matches), std::move(update_type));
}
void FindInPageClientInterceptorForTesting::SetActiveMatch(int32_t request_id, const gfx::Rect& active_match_rect, int32_t active_match_ordinal, FindMatchUpdateType update_type) {
  GetForwardingInterface()->SetActiveMatch(std::move(request_id), std::move(active_match_rect), std::move(active_match_ordinal), std::move(update_type));
}
FindInPageClientAsyncWaiter::FindInPageClientAsyncWaiter(
    FindInPageClient* proxy) : proxy_(proxy) {}

FindInPageClientAsyncWaiter::~FindInPageClientAsyncWaiter() = default;






}  // namespace mojom
}  // namespace blink

#if defined(__clang__)
#pragma clang diagnostic pop
#elif defined(_MSC_VER)
#pragma warning(pop)
#endif