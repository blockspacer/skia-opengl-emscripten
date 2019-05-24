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


#include "ui/base/mojo/clipboard.mojom-test-utils.h"

#include <utility>

#include "base/bind.h"
#include "base/run_loop.h"
#include "mojo/public/mojom/base/big_string.mojom.h"
#include "mojo/public/mojom/base/string16.mojom.h"
#include "mojo/public/mojom/base/time.mojom.h"
#include "skia/public/interfaces/bitmap.mojom.h"


#ifndef UI_BASE_MOJO_CLIPBOARD_MOJOM_JUMBO_H_
#define UI_BASE_MOJO_CLIPBOARD_MOJOM_JUMBO_H_
#include "mojo/public/cpp/base/big_buffer_mojom_traits.h"
#include "mojo/public/cpp/base/big_string_mojom_traits.h"
#include "mojo/public/cpp/base/string16_mojom_traits.h"
#include "mojo/public/cpp/base/time_mojom_traits.h"
#include "skia/public/interfaces/bitmap_skbitmap_struct_traits.h"
#include "skia/public/interfaces/image_info_struct_traits.h"
#include "ui/base/mojo/clipboard_struct_traits.h"
#endif


namespace ui {
namespace mojom {


void ClipboardHostInterceptorForTesting::GetSequenceNumber(ui::ClipboardType type, GetSequenceNumberCallback callback) {
  GetForwardingInterface()->GetSequenceNumber(std::move(type), std::move(callback));
}
void ClipboardHostInterceptorForTesting::IsFormatAvailable(const std::string& format, ui::ClipboardType type, IsFormatAvailableCallback callback) {
  GetForwardingInterface()->IsFormatAvailable(std::move(format), std::move(type), std::move(callback));
}
void ClipboardHostInterceptorForTesting::Clear(ui::ClipboardType type) {
  GetForwardingInterface()->Clear(std::move(type));
}
void ClipboardHostInterceptorForTesting::ReadAvailableTypes(ui::ClipboardType type, ReadAvailableTypesCallback callback) {
  GetForwardingInterface()->ReadAvailableTypes(std::move(type), std::move(callback));
}
void ClipboardHostInterceptorForTesting::ReadText(ui::ClipboardType type, ReadTextCallback callback) {
  GetForwardingInterface()->ReadText(std::move(type), std::move(callback));
}
void ClipboardHostInterceptorForTesting::ReadAsciiText(ui::ClipboardType type, ReadAsciiTextCallback callback) {
  GetForwardingInterface()->ReadAsciiText(std::move(type), std::move(callback));
}
void ClipboardHostInterceptorForTesting::ReadHTML(ui::ClipboardType type, ReadHTMLCallback callback) {
  GetForwardingInterface()->ReadHTML(std::move(type), std::move(callback));
}
void ClipboardHostInterceptorForTesting::ReadRTF(ui::ClipboardType type, ReadRTFCallback callback) {
  GetForwardingInterface()->ReadRTF(std::move(type), std::move(callback));
}
void ClipboardHostInterceptorForTesting::ReadImage(ui::ClipboardType type, ReadImageCallback callback) {
  GetForwardingInterface()->ReadImage(std::move(type), std::move(callback));
}
void ClipboardHostInterceptorForTesting::ReadCustomData(ui::ClipboardType clipboard_type, const base::string16& type, ReadCustomDataCallback callback) {
  GetForwardingInterface()->ReadCustomData(std::move(clipboard_type), std::move(type), std::move(callback));
}
void ClipboardHostInterceptorForTesting::ReadBookmark(ReadBookmarkCallback callback) {
  GetForwardingInterface()->ReadBookmark(std::move(callback));
}
void ClipboardHostInterceptorForTesting::ReadData(const std::string& format, ReadDataCallback callback) {
  GetForwardingInterface()->ReadData(std::move(format), std::move(callback));
}
void ClipboardHostInterceptorForTesting::GetLastModifiedTime(GetLastModifiedTimeCallback callback) {
  GetForwardingInterface()->GetLastModifiedTime(std::move(callback));
}
void ClipboardHostInterceptorForTesting::ClearLastModifiedTime() {
  GetForwardingInterface()->ClearLastModifiedTime();
}
void ClipboardHostInterceptorForTesting::WriteText(const base::string16& text) {
  GetForwardingInterface()->WriteText(std::move(text));
}
void ClipboardHostInterceptorForTesting::WriteHTML(const base::string16& markup, const std::string& url) {
  GetForwardingInterface()->WriteHTML(std::move(markup), std::move(url));
}
void ClipboardHostInterceptorForTesting::WriteRTF(const std::string& rtf) {
  GetForwardingInterface()->WriteRTF(std::move(rtf));
}
void ClipboardHostInterceptorForTesting::WriteBookmark(const std::string& url, const base::string16& title) {
  GetForwardingInterface()->WriteBookmark(std::move(url), std::move(title));
}
void ClipboardHostInterceptorForTesting::WriteWebSmartPaste() {
  GetForwardingInterface()->WriteWebSmartPaste();
}
void ClipboardHostInterceptorForTesting::WriteBitmap(const SkBitmap& bitmap) {
  GetForwardingInterface()->WriteBitmap(std::move(bitmap));
}
void ClipboardHostInterceptorForTesting::WriteData(const std::string& type, const std::string& data) {
  GetForwardingInterface()->WriteData(std::move(type), std::move(data));
}
void ClipboardHostInterceptorForTesting::CommitWrite(ui::ClipboardType type) {
  GetForwardingInterface()->CommitWrite(std::move(type));
}
ClipboardHostAsyncWaiter::ClipboardHostAsyncWaiter(
    ClipboardHost* proxy) : proxy_(proxy) {}

ClipboardHostAsyncWaiter::~ClipboardHostAsyncWaiter() = default;

void ClipboardHostAsyncWaiter::GetSequenceNumber(
    ui::ClipboardType type, uint64_t* out_result) {
  base::RunLoop loop;
  proxy_->GetSequenceNumber(std::move(type),
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
    const std::string& format, ui::ClipboardType type, bool* out_result) {
  base::RunLoop loop;
  proxy_->IsFormatAvailable(std::move(format),std::move(type),
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
    ui::ClipboardType type, std::vector<base::string16>* out_types, bool* out_contains_filenames) {
  base::RunLoop loop;
  proxy_->ReadAvailableTypes(std::move(type),
      base::BindOnce(
          [](base::RunLoop* loop,
             std::vector<base::string16>* out_types
,
             bool* out_contains_filenames
,
             const std::vector<base::string16>& types,
             bool contains_filenames) {*out_types = std::move(types);*out_contains_filenames = std::move(contains_filenames);
            loop->Quit();
          },
          &loop,
          out_types,
          out_contains_filenames));
  loop.Run();
}
void ClipboardHostAsyncWaiter::ReadText(
    ui::ClipboardType type, base::string16* out_result) {
  base::RunLoop loop;
  proxy_->ReadText(std::move(type),
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
void ClipboardHostAsyncWaiter::ReadAsciiText(
    ui::ClipboardType type, std::string* out_result) {
  base::RunLoop loop;
  proxy_->ReadAsciiText(std::move(type),
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
void ClipboardHostAsyncWaiter::ReadHTML(
    ui::ClipboardType type, base::string16* out_markup, std::string* out_src_url, uint32_t* out_fragment_start, uint32_t* out_fragment_end) {
  base::RunLoop loop;
  proxy_->ReadHTML(std::move(type),
      base::BindOnce(
          [](base::RunLoop* loop,
             base::string16* out_markup
,
             std::string* out_src_url
,
             uint32_t* out_fragment_start
,
             uint32_t* out_fragment_end
,
             const base::string16& markup,
             const std::string& src_url,
             uint32_t fragment_start,
             uint32_t fragment_end) {*out_markup = std::move(markup);*out_src_url = std::move(src_url);*out_fragment_start = std::move(fragment_start);*out_fragment_end = std::move(fragment_end);
            loop->Quit();
          },
          &loop,
          out_markup,
          out_src_url,
          out_fragment_start,
          out_fragment_end));
  loop.Run();
}
void ClipboardHostAsyncWaiter::ReadRTF(
    ui::ClipboardType type, std::string* out_result) {
  base::RunLoop loop;
  proxy_->ReadRTF(std::move(type),
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
    ui::ClipboardType type, SkBitmap* out_image) {
  base::RunLoop loop;
  proxy_->ReadImage(std::move(type),
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
    ui::ClipboardType clipboard_type, const base::string16& type, base::string16* out_result) {
  base::RunLoop loop;
  proxy_->ReadCustomData(std::move(clipboard_type),std::move(type),
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
void ClipboardHostAsyncWaiter::ReadBookmark(
    base::string16* out_title, std::string* out_url) {
  base::RunLoop loop;
  proxy_->ReadBookmark(
      base::BindOnce(
          [](base::RunLoop* loop,
             base::string16* out_title
,
             std::string* out_url
,
             const base::string16& title,
             const std::string& url) {*out_title = std::move(title);*out_url = std::move(url);
            loop->Quit();
          },
          &loop,
          out_title,
          out_url));
  loop.Run();
}
void ClipboardHostAsyncWaiter::ReadData(
    const std::string& format, std::string* out_result) {
  base::RunLoop loop;
  proxy_->ReadData(std::move(format),
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
void ClipboardHostAsyncWaiter::GetLastModifiedTime(
    base::Time* out_time) {
  base::RunLoop loop;
  proxy_->GetLastModifiedTime(
      base::BindOnce(
          [](base::RunLoop* loop,
             base::Time* out_time
,
             base::Time time) {*out_time = std::move(time);
            loop->Quit();
          },
          &loop,
          out_time));
  loop.Run();
}





}  // namespace mojom
}  // namespace ui

#if defined(__clang__)
#pragma clang diagnostic pop
#elif defined(_MSC_VER)
#pragma warning(pop)
#endif