// Copyright 2019 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef THIRD_PARTY_BLINK_PUBLIC_MOJOM_CLIPBOARD_CLIPBOARD_MOJOM_TEST_UTILS_H_
#define THIRD_PARTY_BLINK_PUBLIC_MOJOM_CLIPBOARD_CLIPBOARD_MOJOM_TEST_UTILS_H_

#include "third_party/blink/public/mojom/clipboard/clipboard.mojom.h"
#include "third_party/blink/public/common/common_export.h"


namespace blink {
namespace mojom {


class BLINK_COMMON_EXPORT ClipboardHostInterceptorForTesting : public ClipboardHost {
  virtual ClipboardHost* GetForwardingInterface() = 0;
  void GetSequenceNumber(ui::ClipboardType buffer, GetSequenceNumberCallback callback) override;
  void IsFormatAvailable(ClipboardFormat format, ui::ClipboardType buffer, IsFormatAvailableCallback callback) override;
  void ReadAvailableTypes(ui::ClipboardType buffer, ReadAvailableTypesCallback callback) override;
  void ReadText(ui::ClipboardType buffer, ReadTextCallback callback) override;
  void ReadHtml(ui::ClipboardType buffer, ReadHtmlCallback callback) override;
  void ReadRtf(ui::ClipboardType buffer, ReadRtfCallback callback) override;
  void ReadImage(ui::ClipboardType buffer, ReadImageCallback callback) override;
  void ReadCustomData(ui::ClipboardType buffer, const base::string16& type, ReadCustomDataCallback callback) override;
  void WriteText(const base::string16& text) override;
  void WriteHtml(const base::string16& markup, const GURL& url) override;
  void WriteSmartPasteMarker() override;
  void WriteCustomData(const base::flat_map<base::string16, base::string16>& data) override;
  void WriteBookmark(const std::string& url, const base::string16& title) override;
  void WriteImage(const SkBitmap& image) override;
  void CommitWrite() override;
};
class BLINK_COMMON_EXPORT ClipboardHostAsyncWaiter {
 public:
  explicit ClipboardHostAsyncWaiter(ClipboardHost* proxy);
  ~ClipboardHostAsyncWaiter();
  void GetSequenceNumber(
      ui::ClipboardType buffer, uint64_t* out_result);
  void IsFormatAvailable(
      ClipboardFormat format, ui::ClipboardType buffer, bool* out_result);
  void ReadAvailableTypes(
      ui::ClipboardType buffer, std::vector<base::string16>* out_types, bool* out_result);
  void ReadText(
      ui::ClipboardType buffer, base::string16* out_result);
  void ReadHtml(
      ui::ClipboardType buffer, base::string16* out_markup, GURL* out_url, uint32_t* out_fragment_start, uint32_t* out_fragment_end);
  void ReadRtf(
      ui::ClipboardType buffer, std::string* out_result);
  void ReadImage(
      ui::ClipboardType buffer, SkBitmap* out_image);
  void ReadCustomData(
      ui::ClipboardType buffer, const base::string16& type, base::string16* out_result);

 private:
  ClipboardHost* const proxy_;

  DISALLOW_COPY_AND_ASSIGN(ClipboardHostAsyncWaiter);
};




}  // namespace mojom
}  // namespace blink

#endif  // THIRD_PARTY_BLINK_PUBLIC_MOJOM_CLIPBOARD_CLIPBOARD_MOJOM_TEST_UTILS_H_