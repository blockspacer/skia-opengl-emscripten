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


#include "third_party/blink/public/mojom/clipboard/clipboard.mojom-blink-test-utils.h"

#include <utility>

#include "base/bind.h"
#include "base/run_loop.h"
#include "mojo/public/cpp/bindings/lib/wtf_serialization.h"
#include "mojo/public/mojom/base/string16.mojom-blink.h"
#include "skia/public/interfaces/bitmap.mojom-blink.h"
#include "url/mojom/url.mojom-blink.h"


#ifndef THIRD_PARTY_BLINK_PUBLIC_MOJOM_CLIPBOARD_CLIPBOARD_MOJOM_BLINK_JUMBO_H_
#define THIRD_PARTY_BLINK_PUBLIC_MOJOM_CLIPBOARD_CLIPBOARD_MOJOM_BLINK_JUMBO_H_
#include "mojo/public/cpp/base/big_buffer_mojom_traits.h"
#include "skia/public/interfaces/bitmap_skbitmap_struct_traits.h"
#include "third_party/blink/renderer/platform/mojo/kurl_struct_traits.h"
#include "third_party/blink/renderer/platform/mojo/string16_mojom_traits.h"
#endif


namespace blink {
namespace mojom {
namespace blink {


void ClipboardHostInterceptorForTesting::GetSequenceNumber(ClipboardBuffer buffer, GetSequenceNumberCallback callback) {
  GetForwardingInterface()->GetSequenceNumber(std::move(buffer), std::move(callback));
}
void ClipboardHostInterceptorForTesting::IsFormatAvailable(ClipboardFormat format, ClipboardBuffer buffer, IsFormatAvailableCallback callback) {
  GetForwardingInterface()->IsFormatAvailable(std::move(format), std::move(buffer), std::move(callback));
}
void ClipboardHostInterceptorForTesting::ReadAvailableTypes(ClipboardBuffer buffer, ReadAvailableTypesCallback callback) {
  GetForwardingInterface()->ReadAvailableTypes(std::move(buffer), std::move(callback));
}
void ClipboardHostInterceptorForTesting::ReadText(ClipboardBuffer buffer, ReadTextCallback callback) {
  GetForwardingInterface()->ReadText(std::move(buffer), std::move(callback));
}
void ClipboardHostInterceptorForTesting::ReadHtml(ClipboardBuffer buffer, ReadHtmlCallback callback) {
  GetForwardingInterface()->ReadHtml(std::move(buffer), std::move(callback));
}
void ClipboardHostInterceptorForTesting::ReadRtf(ClipboardBuffer buffer, ReadRtfCallback callback) {
  GetForwardingInterface()->ReadRtf(std::move(buffer), std::move(callback));
}
void ClipboardHostInterceptorForTesting::ReadImage(ClipboardBuffer buffer, ReadImageCallback callback) {
  GetForwardingInterface()->ReadImage(std::move(buffer), std::move(callback));
}
void ClipboardHostInterceptorForTesting::ReadCustomData(ClipboardBuffer buffer, const WTF::String& type, ReadCustomDataCallback callback) {
  GetForwardingInterface()->ReadCustomData(std::move(buffer), std::move(type), std::move(callback));
}
void ClipboardHostInterceptorForTesting::WriteText(const WTF::String& text) {
  GetForwardingInterface()->WriteText(std::move(text));
}
void ClipboardHostInterceptorForTesting::WriteHtml(const WTF::String& markup, const ::blink::KURL& url) {
  GetForwardingInterface()->WriteHtml(std::move(markup), std::move(url));
}
void ClipboardHostInterceptorForTesting::WriteSmartPasteMarker() {
  GetForwardingInterface()->WriteSmartPasteMarker();
}
void ClipboardHostInterceptorForTesting::WriteCustomData(const WTF::HashMap<WTF::String, WTF::String>& data) {
  GetForwardingInterface()->WriteCustomData(std::move(data));
}
void ClipboardHostInterceptorForTesting::WriteBookmark(const WTF::String& url, const WTF::String& title) {
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
    ClipboardBuffer buffer, uint64_t* out_result) {
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
    ClipboardFormat format, ClipboardBuffer buffer, bool* out_result) {
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
    ClipboardBuffer buffer, WTF::Vector<WTF::String>* out_types, bool* out_result) {
  base::RunLoop loop;
  proxy_->ReadAvailableTypes(std::move(buffer),
      base::BindOnce(
          [](base::RunLoop* loop,
             WTF::Vector<WTF::String>* out_types
,
             bool* out_result
,
             const WTF::Vector<WTF::String>& types,
             bool result) {*out_types = std::move(types);*out_result = std::move(result);
            loop->Quit();
          },
          &loop,
          out_types,
          out_result));
  loop.Run();
}
void ClipboardHostAsyncWaiter::ReadText(
    ClipboardBuffer buffer, WTF::String* out_result) {
  base::RunLoop loop;
  proxy_->ReadText(std::move(buffer),
      base::BindOnce(
          [](base::RunLoop* loop,
             WTF::String* out_result
,
             const WTF::String& result) {*out_result = std::move(result);
            loop->Quit();
          },
          &loop,
          out_result));
  loop.Run();
}
void ClipboardHostAsyncWaiter::ReadHtml(
    ClipboardBuffer buffer, WTF::String* out_markup, ::blink::KURL* out_url, uint32_t* out_fragment_start, uint32_t* out_fragment_end) {
  base::RunLoop loop;
  proxy_->ReadHtml(std::move(buffer),
      base::BindOnce(
          [](base::RunLoop* loop,
             WTF::String* out_markup
,
             ::blink::KURL* out_url
,
             uint32_t* out_fragment_start
,
             uint32_t* out_fragment_end
,
             const WTF::String& markup,
             const ::blink::KURL& url,
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
    ClipboardBuffer buffer, WTF::String* out_result) {
  base::RunLoop loop;
  proxy_->ReadRtf(std::move(buffer),
      base::BindOnce(
          [](base::RunLoop* loop,
             WTF::String* out_result
,
             const WTF::String& result) {*out_result = std::move(result);
            loop->Quit();
          },
          &loop,
          out_result));
  loop.Run();
}
void ClipboardHostAsyncWaiter::ReadImage(
    ClipboardBuffer buffer, SkBitmap* out_image) {
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
    ClipboardBuffer buffer, const WTF::String& type, WTF::String* out_result) {
  base::RunLoop loop;
  proxy_->ReadCustomData(std::move(buffer),std::move(type),
      base::BindOnce(
          [](base::RunLoop* loop,
             WTF::String* out_result
,
             const WTF::String& result) {*out_result = std::move(result);
            loop->Quit();
          },
          &loop,
          out_result));
  loop.Run();
}





}  // namespace blink
}  // namespace mojom
}  // namespace blink

#if defined(__clang__)
#pragma clang diagnostic pop
#elif defined(_MSC_VER)
#pragma warning(pop)
#endif