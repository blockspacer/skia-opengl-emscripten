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


#include "third_party/blink/public/mojom/clipboard/clipboard.mojom-test-utils.h"

#include <utility>

#include "base/bind.h"
#include "base/run_loop.h"
#include "mojo/public/mojom/base/string16.mojom.h"
#include "skia/public/interfaces/bitmap.mojom.h"
#include "url/mojom/url.mojom.h"


#ifndef THIRD_PARTY_BLINK_PUBLIC_MOJOM_CLIPBOARD_CLIPBOARD_MOJOM_JUMBO_H_
#define THIRD_PARTY_BLINK_PUBLIC_MOJOM_CLIPBOARD_CLIPBOARD_MOJOM_JUMBO_H_
#include "mojo/public/cpp/base/big_buffer_mojom_traits.h"
#include "mojo/public/cpp/base/string16_mojom_traits.h"
#include "skia/public/interfaces/bitmap_skbitmap_struct_traits.h"
#include "skia/public/interfaces/image_info_struct_traits.h"
#include "ui/base/mojo/clipboard_blink_struct_traits.h"
#include "url/mojom/url_gurl_mojom_traits.h"
#endif


namespace blink {
namespace mojom {


void ClipboardHostInterceptorForTesting::GetSequenceNumber(ui::ClipboardType buffer, GetSequenceNumberCallback callback) {
  GetForwardingInterface()->GetSequenceNumber(std::move(buffer), std::move(callback));
}
void ClipboardHostInterceptorForTesting::IsFormatAvailable(ClipboardFormat format, ui::ClipboardType buffer, IsFormatAvailableCallback callback) {
  GetForwardingInterface()->IsFormatAvailable(std::move(format), std::move(buffer), std::move(callback));
}
void ClipboardHostInterceptorForTesting::ReadAvailableTypes(ui::ClipboardType buffer, ReadAvailableTypesCallback callback) {
  GetForwardingInterface()->ReadAvailableTypes(std::move(buffer), std::move(callback));
}
void ClipboardHostInterceptorForTesting::ReadText(ui::ClipboardType buffer, ReadTextCallback callback) {
  GetForwardingInterface()->ReadText(std::move(buffer), std::move(callback));
}
void ClipboardHostInterceptorForTesting::ReadHtml(ui::ClipboardType buffer, ReadHtmlCallback callback) {
  GetForwardingInterface()->ReadHtml(std::move(buffer), std::move(callback));
}
void ClipboardHostInterceptorForTesting::ReadRtf(ui::ClipboardType buffer, ReadRtfCallback callback) {
  GetForwardingInterface()->ReadRtf(std::move(buffer), std::move(callback));
}
void ClipboardHostInterceptorForTesting::ReadImage(ui::ClipboardType buffer, ReadImageCallback callback) {
  GetForwardingInterface()->ReadImage(std::move(buffer), std::move(callback));
}
void ClipboardHostInterceptorForTesting::ReadCustomData(ui::ClipboardType buffer, const base::string16& type, ReadCustomDataCallback callback) {
  GetForwardingInterface()->ReadCustomData(std::move(buffer), std::move(type), std::move(callback));
}
void ClipboardHostInterceptorForTesting::WriteText(const base::string16& text) {
  GetForwardingInterface()->WriteText(std::move(text));
}
void ClipboardHostInterceptorForTesting::WriteHtml(const base::string16& markup, const GURL& url) {
  GetForwardingInterface()->WriteHtml(std::move(markup), std::move(url));
}
void ClipboardHostInterceptorForTesting::WriteSmartPasteMarker() {
  GetForwardingInterface()->WriteSmartPasteMarker();
}
void ClipboardHostInterceptorForTesting::WriteCustomData(const base::flat_map<base::string16, base::string16>& data) {
  GetForwardingInterface()->WriteCustomData(std::move(data));
}
void ClipboardHostInterceptorForTesting::WriteBookmark(const std::string& url, const base::string16& title) {
  GetForwardingInterface()->WriteBookmark(std::move(url), std::move(title));
}
void ClipboardHostInterceptorForTesting::WriteImage(const SkBitmap& image) {
  GetForwardingInterface()->WriteImage(std::move(image));
}
void ClipboardHostInterceptorForTesting::CommitWrite() {
  GetForwardingInterface()->CommitWrite();
}
ClipboardHostAsyncWaiter::ClipboardHostAsyncWaiter(
    ClipboardHost* proxy) : proxy_(proxy) {}

ClipboardHostAsyncWaiter::~ClipboardHostAsyncWaiter() = default;

void ClipboardHostAsyncWaiter::GetSequenceNumber(
    ui::ClipboardType buffer, uint64_t* out_result) {
  base::RunLoop loop;
  proxy_->GetSequenceNumber(std::move(buffer),
      base::BindOnce(
          [](base::RunLoop* loop,
             uint64_t* out_result
,
             uint64_t result) {*out_result = std::move(result);
            loop->Quit();
          },
          &loop,
          out_result));
  loop.Run();
}
void ClipboardHostAsyncWaiter::IsFormatAvailable(
    ClipboardFormat format, ui::ClipboardType buffer, bool* out_result) {
  base::RunLoop loop;
  proxy_->IsFormatAvailable(std::move(format),std::move(buffer),
      base::BindOnce(
          [](base::RunLoop* loop,
             bool* out_result
,
             bool result) {*out_result = std::move(result);
            loop->Quit();
          },
          &loop,
          out_result));
  loop.Run();
}
void ClipboardHostAsyncWaiter::ReadAvailableTypes(
    ui::ClipboardType buffer, std::vector<base::string16>* out_types, bool* out_result) {
  base::RunLoop loop;
  proxy_->ReadAvailableTypes(std::move(buffer),
      base::BindOnce(
          [](base::RunLoop* loop,
             std::vector<base::string16>* out_types
,
             bool* out_result
,
             const std::vector<base::string16>& types,
             bool result) {*out_types = std::move(types);*out_result = std::move(result);
            loop->Quit();
          },
          &loop,
          out_types,
          out_result));
  loop.Run();
}
void ClipboardHostAsyncWaiter::ReadText(
    ui::ClipboardType buffer, base::string16* out_result) {
  base::RunLoop loop;
  proxy_->ReadText(std::move(buffer),
      base::BindOnce(
          [](base::RunLoop* loop,
             base::string16* out_result
,
             const base::string16& result) {*out_result = std::move(result);
            loop->Quit();
          },
          &loop,
          out_result));
  loop.Run();
}
void ClipboardHostAsyncWaiter::ReadHtml(
    ui::ClipboardType buffer, base::string16* out_markup, GURL* out_url, uint32_t* out_fragment_start, uint32_t* out_fragment_end) {
  base::RunLoop loop;
  proxy_->ReadHtml(std::move(buffer),
      base::BindOnce(
          [](base::RunLoop* loop,
             base::string16* out_markup
,
             GURL* out_url
,
             uint32_t* out_fragment_start
,
             uint32_t* out_fragment_end
,
             const base::string16& markup,
             const GURL& url,
             uint32_t fragment_start,
             uint32_t fragment_end) {*out_markup = std::move(markup);*out_url = std::move(url);*out_fragment_start = std::move(fragment_start);*out_fragment_end = std::move(fragment_end);
            loop->Quit();
          },
          &loop,
          out_markup,
          out_url,
          out_fragment_start,
          out_fragment_end));
  loop.Run();
}
void ClipboardHostAsyncWaiter::ReadRtf(
    ui::ClipboardType buffer, std::string* out_result) {
  base::RunLoop loop;
  proxy_->ReadRtf(std::move(buffer),
      base::BindOnce(
          [](base::RunLoop* loop,
             std::string* out_result
,
             const std::string& result) {*out_result = std::move(result);
            loop->Quit();
          },
          &loop,
          out_result));
  loop.Run();
}
void ClipboardHostAsyncWaiter::ReadImage(
    ui::ClipboardType buffer, SkBitmap* out_image) {
  base::RunLoop loop;
  proxy_->ReadImage(std::move(buffer),
      base::BindOnce(
          [](base::RunLoop* loop,
             SkBitmap* out_image
,
             const SkBitmap& image) {*out_image = std::move(image);
            loop->Quit();
          },
          &loop,
          out_image));
  loop.Run();
}
void ClipboardHostAsyncWaiter::ReadCustomData(
    ui::ClipboardType buffer, const base::string16& type, base::string16* out_result) {
  base::RunLoop loop;
  proxy_->ReadCustomData(std::move(buffer),std::move(type),
      base::BindOnce(
          [](base::RunLoop* loop,
             base::string16* out_result
,
             const base::string16& result) {*out_result = std::move(result);
            loop->Quit();
          },
          &loop,
          out_result));
  loop.Run();
}





}  // namespace mojom
}  // namespace blink

#if defined(__clang__)
#pragma clang diagnostic pop
#elif defined(_MSC_VER)
#pragma warning(pop)
#endif