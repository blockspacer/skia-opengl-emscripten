// Copyright 2019 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef THIRD_PARTY_BLINK_PUBLIC_MOJOM_CLIPBOARD_CLIPBOARD_MOJOM_BLINK_TEST_UTILS_H_
#define THIRD_PARTY_BLINK_PUBLIC_MOJOM_CLIPBOARD_CLIPBOARD_MOJOM_BLINK_TEST_UTILS_H_

#include "third_party/blink/public/mojom/clipboard/clipboard.mojom-blink.h"
#include "third_party/blink/renderer/platform/platform_export.h"


namespace blink {
namespace mojom {
namespace blink {


class PLATFORM_EXPORT ClipboardHostInterceptorForTesting : public ClipboardHost {
  virtual ClipboardHost* GetForwardingInterface() = 0;
  void GetSequenceNumber(ClipboardBuffer buffer, GetSequenceNumberCallback callback) override;
  void IsFormatAvailable(ClipboardFormat format, ClipboardBuffer buffer, IsFormatAvailableCallback callback) override;
  void ReadAvailableTypes(ClipboardBuffer buffer, ReadAvailableTypesCallback callback) override;
  void ReadText(ClipboardBuffer buffer, ReadTextCallback callback) override;
  void ReadHtml(ClipboardBuffer buffer, ReadHtmlCallback callback) override;
  void ReadRtf(ClipboardBuffer buffer, ReadRtfCallback callback) override;
  void ReadImage(ClipboardBuffer buffer, ReadImageCallback callback) override;
  void ReadCustomData(ClipboardBuffer buffer, const WTF::String& type, ReadCustomDataCallback callback) override;
  void WriteText(const WTF::String& text) override;
  void WriteHtml(const WTF::String& markup, const ::blink::KURL& url) override;
  void WriteSmartPasteMarker() override;
  void WriteCustomData(const WTF::HashMap<WTF::String, WTF::String>& data) override;
  void WriteBookmark(const WTF::String& url, const WTF::String& title) override;
  void WriteImage(const SkBitmap& image) override;
  void CommitWrite() override;
};
class PLATFORM_EXPORT ClipboardHostAsyncWaiter {
 public:
  explicit ClipboardHostAsyncWaiter(ClipboardHost* proxy);
  ~ClipboardHostAsyncWaiter();
  void GetSequenceNumber(
      ClipboardBuffer buffer, uint64_t* out_result);
  void IsFormatAvailable(
      ClipboardFormat format, ClipboardBuffer buffer, bool* out_result);
  void ReadAvailableTypes(
      ClipboardBuffer buffer, WTF::Vector<WTF::String>* out_types, bool* out_result);
  void ReadText(
      ClipboardBuffer buffer, WTF::String* out_result);
  void ReadHtml(
      ClipboardBuffer buffer, WTF::String* out_markup, ::blink::KURL* out_url, uint32_t* out_fragment_start, uint32_t* out_fragment_end);
  void ReadRtf(
      ClipboardBuffer buffer, WTF::String* out_result);
  void ReadImage(
      ClipboardBuffer buffer, SkBitmap* out_image);
  void ReadCustomData(
      ClipboardBuffer buffer, const WTF::String& type, WTF::String* out_result);

 private:
  ClipboardHost* const proxy_;

  DISALLOW_COPY_AND_ASSIGN(ClipboardHostAsyncWaiter);
};




}  // namespace blink
}  // namespace mojom
}  // namespace blink

#endif  // THIRD_PARTY_BLINK_PUBLIC_MOJOM_CLIPBOARD_CLIPBOARD_MOJOM_BLINK_TEST_UTILS_H_